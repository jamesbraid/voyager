#!/usr/bin/env python3
"""Catalogue the console message call sites of one MIPS64 relocatable object.

    retools/tools/re-run python3 tools/message_sites.py BINARY LABEL [--conditions FILE] [--tsv FILE]

BINARY is an ELF relocatable object (big-endian MIPS64). The script reads `objdump -dr` and
`objdump -s` of its .rodata and .data, so the calls and the string references come from the
relocations, not from the names of the calling routines.

Two kinds of site are catalogued:

- direct: a call to a console printer: cmn_err (format in a1, level in a0), printf (format in
  a0), icmn_err (format in a1), debug (a flag tag in a0) or assfail (expression in a0, file in
  a1, line in a2).
- wrapper: a call to a routine of this object, or to unlabelled code inside one, whose body up
  to its first return calls a console printer. The wrapper forwards its own argument, which this
  script does not follow, so the row lists every string argument the call passes.

A call's routine is the function symbol that holds it. The compiler puts a routine's out-of-line blocks
after its return, so code past a symbol's size stays with that symbol until a prologue starts a static
routine the object does not name; that routine is called sub_<address> of its first instruction.

Argument values come from a small evaluator over the instructions. Callee-saved registers
(s0-s8, gp, sp) take their value from a linear pass over the routine, with restores from the
stack skipped. Caller-saved registers take theirs from the basic block that holds the call,
the delay slot included. A value built on the run-time base that position-independent code adds
to a symbol address is kept as its symbol and offset and marked approx. A linear value can come
from another branch arm, so a callee read from a callee-saved register is marked linear and needs
a read before it is trusted.

The guard column comes from the instructions: the conditional branch that reaches the call's
basic block, and whether the call is on its taken or its fall-through path. The condition
column comes from the conditions file, a TSV keyed by label and address that a person writes
after reading the code. A site without one says so.
"""
import argparse
import collections
import os
import re
import subprocess
import sys

os.environ['LC_ALL'] = os.environ['LANG'] = 'C'
OBJDUMP = 'mips64-linux-gnuabi64-objdump'
HDR = re.compile(r'^([0-9a-f]+) <(.*)>:$')
INS = re.compile(r'^\s*([0-9a-f]+):\t([0-9a-f ]+?)\s*\t(\S+)\s*(.*)$')
REL = re.compile(r'^\s*([0-9a-f]+): (R_MIPS_\w+)\t(.*)$')
SHIFT = {'R_MIPS_HIGHEST': 48, 'R_MIPS_HIGHER': 32, 'R_MIPS_HI16': 16, 'R_MIPS_LO16': 0}
CONDITIONAL = {'beq', 'bne', 'beqz', 'bnez', 'blez', 'bgtz', 'bltz', 'bgez', 'beql', 'bnel', 'beqzl',
               'bnezl', 'blezl', 'bgtzl', 'bltzl', 'bgezl', 'bc1t', 'bc1f', 'bc1tl', 'bc1fl'}
CTL = CONDITIONAL | {'b', 'bal', 'j', 'jal', 'jr', 'jalr', 'bltzal', 'bgezal'}
CALLS = {'jal', 'jalr', 'bal', 'bltzal', 'bgezal'}
NOWRITE = {'sd', 'sw', 'sb', 'sh', 'sdl', 'sdr', 'swl', 'swr', 'scd', 'sc', 'nop', 'sync', 'pref',
           'teq', 'tne', 'break', 'syscall', 'cache', 'sdc1', 'swc1'} | CTL
SAVED = ['s0', 's1', 's2', 's3', 's4', 's5', 's6', 's7', 's8', 'gp', 'sp']
ARGS = ['a0', 'a1', 'a2', 'a3', 'a4', 'a5', 'a6', 'a7']
CLOBBER = ARGS + ['v0', 'v1', 't0', 't1', 't2', 't3', 't4', 't5', 't6', 't7', 't8', 't9', 'at', 'ra']
M64 = (1 << 64) - 1
# printer -> the argument register that holds the format (or tag, or expression)
PRINTERS = {'cmn_err': 'a1', 'printf': 'a0', 'icmn_err': 'a1', 'debug': 'a0', 'assfail': 'a0'}
TSV_COLUMNS = ['label', 'routine', 'address', 'kind', 'callee', 'level', 'format', 'other_strings',
               'category', 'guard', 'condition', 'grade']


def sgn(v):
    return v - (1 << 64) if v >= (1 << 63) else v


def parse(text):
    routines = []
    cur = None
    for ln in text.split('\n'):
        m = HDR.match(ln)
        if m:
            cur = {'name': m.group(2), 'addr': int(m.group(1), 16), 'insns': []}
            routines.append(cur)
            continue
        m = INS.match(ln)
        if m and cur is not None:
            ops = [o.strip() for o in m.group(4).split(',')] if m.group(4) else []
            cur['insns'].append({'addr': int(m.group(1), 16), 'mn': m.group(3), 'ops': ops, 'rel': []})
            continue
        m = REL.match(ln)
        if m and cur is not None and cur['insns'] and cur['insns'][-1]['addr'] == int(m.group(1), 16):
            if m.group(2) != 'R_MIPS_NONE':
                cur['insns'][-1]['rel'].append((m.group(2), m.group(3).strip()))
    return routines


def function_sizes(text):
    """name -> (address, size) of every function symbol in `objdump -t` output."""
    out = {}
    for ln in text.split('\n'):
        m = re.match(r'^([0-9a-f]+)\s+\S+\s+F\s+\.text\s+([0-9a-f]+)\s+(\S+)$', ln)
        if m:
            out[m.group(3)] = (int(m.group(1), 16), int(m.group(2), 16))
    return out


def is_prologue(insns, k):
    """True when insns[k] lowers sp by a constant, which only a routine's entry does."""
    x = insns[k]
    return (x['mn'] in ('daddiu', 'addiu') and x['ops'][:2] == ['sp', 'sp']
            and len(x['ops']) == 3 and x['ops'][2].startswith('-'))


def routine_start(insns, k, floor):
    """Index where the routine whose prologue is insns[k] begins. The compiler hoists a few setup
    instructions above the prologue, so the routine starts after the last unconditional transfer
    (and its delay slot) before it, but not before floor."""
    u = k - 1
    while u >= floor and not (insns[u]['mn'] in ('b', 'j', 'jr') and (u + 2 <= k)):
        u -= 1
    return max(floor, u + 2) if u >= floor else floor


def split_unlabelled(routines, sizes):
    """The compiler places a routine's out-of-line blocks after its return, so the code past a
    symbol's size is the same routine's until the next routine's entry. objdump labels a routine
    the object does not name (a static function) with the nearest earlier symbol, so a prologue
    past the symbol's end starts a routine called sub_<address> of its first instruction."""
    out = []
    for r in routines:
        size = sizes.get(r['name'])
        insns = r['insns']
        if size is None or size[0] != r['addr']:
            out.append(r)
            continue
        end = size[0] + size[1]
        floor = next((k for k, x in enumerate(insns) if x['addr'] >= end), None)
        if floor is None:
            out.append(r)
            continue
        starts = []
        for k in range(floor, len(insns)):
            if is_prologue(insns, k):
                st = routine_start(insns, k, max(floor, starts[-1] + 1 if starts else floor))
                starts.append(st)
        if not starts:
            out.append(r)
            continue
        out.append({'name': r['name'], 'addr': r['addr'], 'insns': insns[:starts[0]]})
        bounds = starts + [len(insns)]
        for a, b in zip(bounds, bounds[1:]):
            out.append({'name': 'sub_%x' % insns[a]['addr'], 'addr': insns[a]['addr'], 'insns': insns[a:b]})
    return out


def sections(text):
    """section -> {offset: bytes} from objdump -s output."""
    out = {}
    cur = None
    for ln in text.split('\n'):
        m = re.match(r'^Contents of section (\S+):', ln)
        if m:
            cur = m.group(1)
            out.setdefault(cur, {})
            continue
        m = re.match(r'^ ([0-9a-f]+) (.*?)  ', ln)
        if m and cur:
            out[cur][int(m.group(1), 16)] = bytes.fromhex(m.group(2).replace(' ', ''))
    return out


def cstring(blocks, off):
    """NUL-terminated printable string at offset off in a section, or None."""
    buf = b''
    pos = off
    keys = sorted(blocks)
    while b'\x00' not in buf:
        hit = [k for k in keys if k <= pos < k + len(blocks[k])]
        if not hit:
            break
        k = hit[0]
        buf += blocks[k][pos - k:]
        pos = k + len(blocks[k])
    i = buf.find(b'\x00')
    if i <= 0:
        return None
    s = buf[:i]
    if any(c < 0x20 and c not in (9, 10) for c in s):
        return None
    return s.decode('latin-1')


def val_add(a, b):
    """A value is (symbol or None, constant, displayed). displayed is True when the constant is
    the total addend objdump printed on a relocation, and 'approx' when one operand was run-time
    base that the position-independent code added to a symbol address."""
    if a is None or b is None:
        known = a if b is None else b
        if known is not None and known[0] is not None and known[2] is not True:
            return (known[0], known[1], 'approx')
        return None
    if a[0] is None and b[0] is None:
        return (None, (a[1] + b[1]) & M64, False)
    if a[0] is None:
        return (b[0], (a[1] + b[1]) & M64, b[2])
    if b[0] is None:
        return (a[0], (a[1] + b[1]) & M64, a[2])
    if a[0] != b[0]:
        return None
    if a[2] is True or b[2] is True:
        return (a[0], a[1] if a[2] is True else b[1], True)
    return (a[0], (a[1] + b[1]) & M64, False)


def step(regs, ins):
    mn, ops, rel = ins['mn'], ins['ops'], ins['rel']
    rsym, rdisp, rshift = None, None, 0
    for t, s in rel:
        if t in SHIFT and s != '*ABS*':
            m = re.match(r'(.*?)(?:\+0x([0-9a-f]+))?$', s)
            rsym = m.group(1)
            rdisp = int(m.group(2), 16) if m.group(2) else None
            rshift = SHIFT[t]
            break
    if mn in CALLS:
        for r in CLOBBER:
            regs[r] = None
        return
    if mn in NOWRITE or not ops:
        return
    dst = ops[0]
    if dst == 'zero':
        return

    def R(x):
        return (None, 0, False) if x == 'zero' else regs.get(x)

    def I(x):
        return int(x, 0)
    if mn == 'lui':
        imm = I(ops[1])
        if rsym is not None:
            regs[dst] = (rsym, rdisp, True) if rdisp is not None else (rsym, (imm << rshift) & M64, False)
        else:
            regs[dst] = (None, (imm << 16) & M64, False)
        return
    if mn in ('daddiu', 'addiu'):
        imm = I(ops[2])
        base = R(ops[1])
        if rsym is not None:
            if rdisp is not None:
                regs[dst] = (rsym, rdisp, True)
            elif base is not None and base[0] == rsym and base[2] is True:
                regs[dst] = (rsym, base[1], True)
            else:
                basec = base[1] if base is not None and base[0] == rsym else 0
                regs[dst] = (rsym, (basec + ((imm << rshift) if rshift else imm)) & M64, False)
            return
        regs[dst] = None if base is None else (base[0], (base[1] + imm) & M64, base[2])
        return
    if mn == 'li':
        regs[dst] = (None, I(ops[1]) & M64, False)
        return
    if mn == 'move':
        regs[dst] = R(ops[1])
        return
    if mn in ('dadd', 'daddu', 'addu', 'add'):
        regs[dst] = val_add(R(ops[1]), R(ops[2]))
        return
    if mn in ('dsll32', 'dsll', 'sll'):
        a = R(ops[1])
        sh = I(ops[2]) + (32 if mn == 'dsll32' else 0)
        if a is None:
            regs[dst] = None
        elif a[0] is None:
            regs[dst] = (None, (a[1] << sh) & M64, False)
        elif a[2] is True or a[1] == 0:
            regs[dst] = a
        else:
            regs[dst] = None
        return
    if mn == 'or' and len(ops) == 3 and ops[2] == 'zero':
        regs[dst] = R(ops[1])
        return
    if mn == 'ori':
        a = R(ops[1])
        regs[dst] = (None, a[1] | I(ops[2]), False) if a is not None and a[0] is None else None
        return
    regs[dst] = None


def branch_target(ins):
    if ins['mn'] in CTL and ins['mn'] not in ('jr', 'jalr') and ins['ops']:
        m = re.match(r'([0-9a-f]+)', ins['ops'][-1])
        if m:
            return int(m.group(1), 16)
    return None


def guard_text(insns, s, targets, branch_into):
    """How the call's basic block is reached, from the instructions before it."""
    if s == 0:
        return 'routine entry'
    if insns[s]['addr'] in targets:
        into = [j for j in branch_into.get(insns[s]['addr'], []) if insns[j]['mn'] in CONDITIONAL]
        if len(into) == 1:
            br = insns[into[0]]
            return 'taken branch `%s %s` at 0x%x' % (br['mn'], ','.join(br['ops'][:-1]), br['addr'])
        if into:
            return 'taken branch from %d places (first at 0x%x)' % (len(into), insns[into[0]]['addr'])
        return 'reached only by unconditional jumps or from more than one path'
    if s >= 2 and insns[s - 2]['mn'] in CONDITIONAL:
        br = insns[s - 2]
        text = br['mn'] + (' ' + ','.join(br['ops'][:-1]) if len(br['ops']) > 1 else ' ' + ','.join(br['ops'][:-1]))
        text = text.strip()
        if branch_target(br) == insns[s]['addr']:
            return 'taken branch `%s`' % text
        return 'fall-through of `%s`' % text
    if s >= 1 and insns[s - 1]['mn'] in CALLS:
        return 'after a call returns'
    return 'straight-line from the previous instruction'


def block_start(insns, i, targets):
    s = i
    while s > 0:
        if insns[s]['addr'] in targets:
            break
        if s - 2 >= 0 and insns[s - 2]['mn'] in CTL:
            break
        s -= 1
    return s


def preds(insns, k, branch_into):
    out = []
    if k - 1 >= 0 and insns[k - 1]['mn'] not in ('b', 'j', 'jr'):
        out.append(k - 1)
    for j in branch_into.get(insns[k]['addr'], []):
        if j + 1 < len(insns):
            out.append(j + 1)
    return out


def writers(insns, idx, reg, targets, branch_into):
    """Values of reg just before idx, found along every path backwards. Returns the set of
    distinct values (None when a path reaches the routine entry or a call clobbers reg)."""
    values = set()
    stack = list(preds(insns, idx, branch_into))
    seen = set()
    steps = 0
    while stack:
        p = stack.pop()
        steps += 1
        if p in seen or steps > 5000:
            continue
        seen.add(p)
        ins = insns[p]
        if ins['mn'] in CALLS and reg in CLOBBER:
            values.add(None)
            continue
        if ins['mn'] not in NOWRITE and ins['ops'] and ins['ops'][0] == reg:
            bs = block_start(insns, p, targets)
            regs = {}
            for k in range(bs, p + 1):
                step(regs, insns[k])
            values.add(regs.get(reg) if regs.get(reg) is None or regs[reg][0] is not None else None)
            continue
        if p == 0:
            values.add(None)
            continue
        stack.extend(preds(insns, p, branch_into))
    return values


def analyse(dis, ro, sizes=None):
    routines = split_unlabelled(parse(dis), sizes or {})
    blocks = sections(ro)
    rows = []
    for r in routines:
        insns = r['insns']
        if not insns:
            continue
        targets = {branch_target(x) for x in insns} - {None}
        branch_into = collections.defaultdict(list)
        for j, x in enumerate(insns):
            t = branch_target(x)
            if t is not None:
                branch_into[t].append(j)
        lin = {}
        lin_at = []
        for ins in insns:
            lin_at.append(dict(lin))
            restore = (ins['mn'] in ('ld', 'lw') and ins['ops'] and ins['ops'][0] in SAVED
                       and ins['ops'][-1].endswith('(sp)'))
            if not restore:
                step(lin, ins)
            if ins['mn'] in CALLS:
                for rr in CLOBBER:
                    lin[rr] = None
        for i, ins in enumerate(insns):
            if ins['mn'] not in CALLS:
                continue
            s = i
            while s > 0:
                if insns[s]['addr'] in targets:
                    break
                if s - 2 >= 0 and insns[s - 2]['mn'] in CTL:
                    break
                s -= 1
            regs = {}
            for rr in SAVED:
                # Only a symbol (the base of a string table) carries over from the linear pass. A
                # constant there is whatever the last write on the straight-line walk left, which
                # is wrong for a loop counter or a value set on another branch arm.
                if lin_at[s].get(rr) is not None and lin_at[s][rr][0] is not None:
                    regs[rr] = lin_at[s][rr]
            for k in range(s, i):
                step(regs, insns[k])
            if i + 1 < len(insns):
                step(regs, insns[i + 1])
            callee = None
            linear = False
            if ins['mn'] in ('jal', 'bal'):
                for t, sname in ins['rel']:
                    if t == 'R_MIPS_26':
                        callee = sname
            else:
                reg = ins['ops'][-1] if ins['ops'] else None
                v = regs.get(reg) if reg else None
                if reg in SAVED:
                    # A callee-saved register can be rewritten on another path, so take the
                    # value the call sees on every path; it is used only when all paths agree.
                    vals = writers(insns, i, reg, targets, branch_into)
                    if len(vals) == 1:
                        v = next(iter(vals))
                    else:
                        v = None
                    linear = len(vals) > 1
                if v is not None and v[0] is not None:
                    callee = v[0]
                    if callee in ('.text', '.rodata', '.data'):
                        callee = '%s+%d' % (callee, sgn(v[1]))
            args = {}
            for a in ARGS:
                v = regs.get(a)
                if v is None:
                    continue
                if v[0] is None:
                    args[a] = ('const', sgn(v[1]))
                elif v[0] in ('.rodata', '.data'):
                    st = cstring(blocks.get(v[0], {}), v[1])
                    args[a] = ('str', st) if st is not None else ('ref', '%s+%d' % (v[0], sgn(v[1])))
                else:
                    args[a] = ('ref', '%s+%d' % (v[0], sgn(v[1])))
            rows.append({'routine': r['name'], 'addr': ins['addr'], 'callee': callee, 'linear': linear,
                         'args': args, 'guard': guard_text(insns, s, targets, branch_into)})
    return routines, rows


def printer_sites(routines, rows):
    """Direct printer calls, and wrapper calls whose callee prints before it returns."""
    by_addr = {}
    for r in routines:
        for k, ins in enumerate(r['insns']):
            by_addr[ins['addr']] = (r, k)
    printing = {x['addr'] for x in rows if x['callee'] in PRINTERS}
    out = []
    for x in rows:
        c = x['callee']
        kind = None
        name = c
        if c in PRINTERS:
            kind = 'direct'
        elif c and c.startswith('.text+'):
            off = int(c.split('+')[1])
            if off not in by_addr:
                continue
            r, k = by_addr[off]
            hit = False
            for ins in r['insns'][k:]:
                if ins['addr'] in printing:
                    hit = True
                    break
                if ins['mn'] == 'jr' and ins['ops'] == ['ra']:
                    break
            if not hit:
                continue
            kind = 'wrapper'
            name = r['name'] if r['addr'] == off else 'sub_%x' % off
        else:
            continue
        if kind == 'wrapper' and not any(v[0] == 'str' for v in x['args'].values()):
            continue
        y = dict(x)
        y['kind'] = kind
        y['callee_name'] = name
        out.append(y)
    return out


def describe(site):
    """(format or None, level or tag, other strings text) for one site."""
    args = site['args']
    strs = {a: v[1] for a, v in args.items() if v[0] == 'str'}
    c = site['callee']
    if site['kind'] != 'direct':
        return None, '', '; '.join('%s=%r' % (a, s) for a, s in sorted(strs.items()))
    reg = PRINTERS[c]
    fmt = strs.get(reg)
    if c == 'assfail':
        fl = args.get('a1')
        ln = args.get('a2')
        file_ = fl[1] if fl and fl[0] == 'str' else ''
        line = str(ln[1]) if ln and ln[0] == 'const' else ''
        return fmt, 'file %s line %s' % (file_, line), ''
    lvl = args.get('a0')
    level = str(lvl[1]) if lvl and lvl[0] == 'const' and c in ('cmn_err', 'icmn_err') else ''
    return fmt, level, varargs(c, reg, fmt, args)


def varargs(c, fmt_reg, fmt, args):
    """The values the format's conversions read, in order, from the registers after the format.
    Registers the format does not consume are not reported: they hold stale values."""
    if fmt is None:
        return ''
    regs = ARGS[ARGS.index(fmt_reg) + 1:]
    out = []
    for spec in re.findall(r'%[-+ #0-9.*lhzjt]*[diouxXcspfeEgG]', fmt):
        if not regs:
            break
        r = regs.pop(0)
        v = args.get(r)
        if spec.endswith('s') and v and v[0] == 'str':
            out.append('%s=%r' % (spec, v[1]))
        elif v and v[0] == 'const':
            out.append('%s=%d' % (spec, v[1]))
        else:
            out.append('%s=?' % spec)
    return '; '.join(out)


def category(routine, text):
    t = text or ''
    if re.search(r'ROM|BIOS|bios', t):
        return 'rom'
    if re.search(r'(?i)interrupt|irq|vsync', t):
        return 'interrupt'
    if re.search(r'(?i)hung|reset|dead|lock|timeout|recover|fatal|stale|idle|PM4', t):
        return 'hang-recovery'
    if re.search(r'(?i)cannot map|cannot get|hwgraph|vertex|config space|init_module', t) \
            or re.search(r'(?i)attach|detach|probe', routine):
        return 'attach'
    return 'other'


def load_conditions(path):
    out = {}
    if not path or not os.path.exists(path):
        return out
    for ln in open(path, encoding='utf-8'):
        ln = ln.rstrip('\n')
        if not ln or ln.startswith('#'):
            continue
        f = ln.split('\t')
        if len(f) >= 4:
            out[(f[0], f[1])] = (f[2], f[3])
    return out


def build(binary, label, conditions_path):
    def dump(mode):
        return subprocess.run([OBJDUMP] + mode + [binary], check=True, capture_output=True,
                              text=True).stdout
    routines, rows = analyse(dump(['-dr']), dump(['-s', '-j', '.rodata', '-j', '.data']),
                             function_sizes(dump(['-t'])))
    cond = load_conditions(conditions_path)
    table = []
    for x in printer_sites(routines, rows):
        fmt, level, others = describe(x)
        if x['callee'] == 'assfail':
            cat = 'assert'
        elif x['callee'] == 'debug':
            cat = 'trace'
        else:
            cat = category(x['routine'], (fmt or '') + ' ' + others)
        addr = '0x%x' % x['addr']
        cnd, grade = cond.get((label, addr), ('not yet read', 'unread'))
        if x['callee'] in PRINTERS and fmt is None and x['kind'] == 'direct' and x['callee'] != 'assfail':
            fmt_col = '(format not recovered)'
        else:
            fmt_col = fmt or ''
        if x['linear'] and grade == 'unread':
            grade = 'unread (callee from a linear value)'
        table.append({'label': label, 'routine': x['routine'], 'address': addr, 'kind': x['kind'],
                      'callee': x['callee_name'], 'level': level, 'format': fmt_col,
                      'other_strings': others, 'category': cat, 'guard': x['guard'],
                      'condition': cnd, 'grade': grade})
    return table


def write_tsv(table, path):
    def esc(v):
        return str(v).replace('\\', '\\\\').replace('\t', ' ').replace('\n', '\\n')
    with open(path, 'w', encoding='utf-8', newline='\n') as f:
        f.write('\t'.join(TSV_COLUMNS) + '\n')
        for row in table:
            f.write('\t'.join(esc(row[c]) for c in TSV_COLUMNS) + '\n')


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    ap.add_argument('binary')
    ap.add_argument('label')
    ap.add_argument('--conditions', default=None)
    ap.add_argument('--tsv', default=None)
    a = ap.parse_args(argv)
    table = build(a.binary, a.label, a.conditions)
    if a.tsv:
        write_tsv(table, a.tsv)
    print('sites', len(table))
    for k, v in sorted(collections.Counter((r['kind'], r['category']) for r in table).items()):
        print(v, k)
    return 0


if __name__ == '__main__':
    sys.exit(main())
