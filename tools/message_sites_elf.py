#!/usr/bin/env python3
"""Catalogue the messages one MIPS ELF image hands to a printer, with the condition that reaches each call.

Usage: tools/message_sites_elf.py BINARY LABEL [--conditions FILE] [--tsv FILE] [--only ROUTINE_REGEX]

Every function symbol of BINARY gets a fact sheet from retools/tools/facts.py (in one process, so the image
is parsed once). A call is a site when its callee is a known printer (PRINTERS below) and the format
argument has a value the fact sheet resolves. The row carries:

  address     the address of the call instruction
  callee      the printer as the GOT slot or symbol names it
  level       the X message type (xf86DrvMsg, xf86DrvMsgVerb), the assert file and line, or the syslog priority
  format      the format string read from the image's read-only data, up to its NUL
  other_strings  for each conversion after the format, the string or the value the register holds at the call
  category    keyword sort of the message and routine name: rom, interrupt, hang-recovery, attach, assert,
              trace or other. A sort, not a reading.
  guard       the nearest conditional branch that decides whether the call runs, read from the fact sheet
              (its text, its target and whether the call is on its taken or fall-through path), and where the
              tested register was set (a call's return value, an immediate, a load)
  condition   a hand-written reading from --conditions for the row's label and address, if there is one
  grade       inferred: the guard and the tested value were both read; partial: the guard was read but the
              tested value was not traced; unread: no guard on the path from the routine entry

The printer's format argument is read from the register the printer's C prototype puts it in. Calls
through a function pointer, format strings built at run time and forwarded format arguments (a wrapper
that passes its own argument on) are reported as not recovered, never guessed.
"""
import argparse
import collections
import csv
import io
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.join(HERE, '..', 'retools', 'tools'))

import facts  # noqa: E402  the shared fact sheet in the retools submodule

# callee -> (kind, format argument index, extra fields). Argument index counts a0 as 0.
PRINTERS = {
    'ErrorF': ('printf', 0, ''),
    'FatalError': ('printf', 0, ''),
    'xf86Msg': ('printf', 1, 'type:0'),
    'xf86DrvMsg': ('printf', 2, 'type:1'),
    'xf86DrvMsgVerb': ('printf', 3, 'type:1,verb:2'),
    'printf': ('printf', 0, ''),
    'fprintf': ('printf', 1, 'stream:0'),
    'xf86fprintf': ('printf', 1, 'stream:0'),
    'vfprintf': ('printf', 1, 'stream:0'),
    'syslog': ('printf', 1, 'priority:0'),
    'vsyslog': ('printf', 1, 'priority:0'),
    'fputs': ('str', 0, 'stream:1'),
    'perror': ('str', 0, ''),
    '__assert': ('assert', 0, 'file:1,line:2'),
}


CATEGORY_RULES = [
    ('rom', re.compile(r'\bROM|ROM\b|BIOS|bios|signature|\bsig\b|expansion')),
    ('interrupt', re.compile(r'interrupt|\birq\b|\bIRQ\b|\bisr\b|vector', re.I)),
    ('hang-recovery', re.compile(r'\bhang|lock ?up|recover|\breset|time ?out|\bstuck|wedg|\bidle\b', re.I)),
    ('attach', re.compile(r'attach|probe|\bpci\b|\bPCI\b|\bBAR\b|\bmap|config|detect|cannot get|device|board|\bmmio\b|\bmem\(|\breg\(|memory', re.I)),
]

CONVERSION = re.compile(r'%(?:%|[-+ #0]*(?:\*|\d+)?(?:\.(?:\*|\d+))?(?:hh|h|ll|l|L|q|j|z|t)?[diouxXeEfgGcspn])')
COND_BRANCH = re.compile(r'^(beq|bne|blez|bgtz|bltz|bgez|beqz|bnez|bc\dt|bc\df|bltzal|bgezal)')
ALU_DEST = re.compile(r'^(addiu|addu|daddiu|daddu|subu|dsubu|subu|or|ori|and|andi|xor|xori|nor|lui|li|move|sll|srl|sra|dsll|dsrl|dsra|slt|sltu|slti|sltiu|lw|ld|lh|lhu|lb|lbu|lwu|mflo|mfhi|mfc0)$')
REG_NAMES_ALL = set(facts.NAMES_O32) | set(facts.NAMES_N)


def read_cstring(img, addr, limit=400):
    for s in img.sections:
        sa = int(s['address'], 16)
        if s['size'] and sa <= addr < sa + s['size'] and s['type'] != 'NOBITS':
            off = int(s['offset'], 16) + (addr - sa)
            raw = img.data[off:off + limit]
            nul = raw.find(b'\x00')
            if nul < 0:
                return None
            return raw[:nul].decode('latin-1')
    return None


def value_addr(v):
    if isinstance(v, str) and re.fullmatch(r'0x[0-9a-fA-F]+', v):
        return int(v, 16)
    return None


def value_int(v):
    if isinstance(v, str) and re.fullmatch(r'-?(0x)?[0-9a-fA-F]+', v):
        return int(v, 0)
    return None


def category_of(text, routine, callee=''):
    if callee == '__assert':
        return 'assert'
    if callee == 'debug' or routine.startswith('x86emu') or routine.startswith('decode_rm'):
        return 'trace'
    for name, rx in CATEGORY_RULES:
        if rx.search(text) or rx.search(routine):
            return name
    return 'other'


def conversions(fmt):
    out = []
    for m in CONVERSION.finditer(fmt):
        if m.group(0) != '%%':
            out.append(m.group(0))
    return out


def parse_extra(extra):
    d = {}
    for part in filter(None, extra.split(',')):
        k, v = part.split(':')
        d[k] = int(v)
    return d


class Catalogue:
    def __init__(self, path, label):
        self.path = path
        self.label = label
        self.img = facts.image(path)
        self.failed = []

    def routines(self, only=None):
        seen = set()
        for addr, size, name, sec, func, src in sorted(self.img.syms, key=lambda x: (x[0], x[2])):
            if not func or not name or addr == 0 or name in seen:
                continue
            if only and not re.search(only, name):
                continue
            seen.add(name)
            yield name

    def sheet(self, name):
        try:
            return facts.fact_sheet(self.path, name, None, None, False, 0, 'mips4', None, True)
        except (SystemExit, Exception) as e:  # a routine the reader cannot disassemble is reported, not skipped silently
            self.failed.append((name, str(e).splitlines()[-1][:160] if str(e) else type(e).__name__))
            return None

    def callee_name(self, call):
        if call.get('callee'):
            return call['callee']
        if call.get('target'):
            return self.img.func_name_at(int(call['target'], 16)) or ''
        return ''

    def format_of(self, args, idx):
        v = args.get('a%d' % idx)
        if v is None:
            return None, 'not recovered (register not set in this block)'
        a = value_addr(v)
        if a is not None:
            s = read_cstring(self.img, a)
            if s is not None:
                return s, None
            return None, 'not recovered (address %s is not a string in the image)' % v
        return None, 'not recovered (%s)' % v

    def guard(self, fs, call):
        """The branch that decides the call: the branch into the call's block, else the branch that jumps over it."""
        addr = int(call['address'], 16)
        branches = [b for b in fs['branches'] if COND_BRANCH.match(b.get('mnemonic', '') or '')
                    and not b.get('mnemonic', '').endswith('all') and not re.match(r'^beq zero,zero\b', b.get('text', ''))
                    and b.get('target') and int(b['address'], 16) < addr]
        best = None
        # the call's block starts at the nearest block start at or before the call. A block starts at a
        # branch target, or right after a conditional branch that falls through into it.
        start = int(fs['routine']['address'], 16)
        targets = [int(b['target'], 16) for b in fs['branches'] if b.get('target')]
        after = [int(b['address'], 16) + 8 for b in branches]
        starts = [t for t in targets + after if start < t <= addr]
        if starts:
            head = max(starts)
            landing = [b for b in branches if int(b['target'], 16) == head and int(b['address'], 16) < head]
            ended = [b for b in branches if int(b['address'], 16) + 8 == head]
            loop = [b for b in fs['branches'] if b.get('target') and int(b['target'], 16) == head
                    and int(b['address'], 16) >= head and int(b['address'], 16) < addr]
            if landing:
                best = (max(landing, key=lambda x: int(x['address'], 16)), 'taken')
            elif ended:
                # the block follows a conditional branch that falls through into it
                best = (ended[0], 'fall-through')
            elif loop:
                # the block follows a loop: it runs when the loop's back-edge falls through (the loop ends)
                back = max(loop, key=lambda x: int(x['address'], 16))
                best = (back, 'loop-exit')
        if best is None:
            # a forward branch that jumps over the call: the call runs only when the branch does not take
            skipping = [b for b in branches if int(b['target'], 16) > addr]
            if skipping:
                best = (max(skipping, key=lambda x: int(x['address'], 16)), 'fall-through')
        if best is None:
            return None, None, 'no conditional branch above it on this path: from the routine entry or after a join not traced'
        b, path = best
        test = b.get('text', '')
        regs = [r for r in re.findall(r'\b([a-z]\w?\d*|ra|sp|gp|fp|at)\b', test.split(' ', 1)[-1]) if r in REG_NAMES_ALL]
        origin = self.def_of(fs, b, regs)
        if path == 'fall-through':
            text = 'fall-through of `%s` at %s (the branch does not take)' % (test, b['address'])
        elif path == 'loop-exit':
            text = 'after the loop ending with `%s` at %s (the loop falls through)' % (test, b['address'])
        else:
            text = 'taken branch `%s` at %s to %s' % (test, b['address'], b['target'])
        return text, origin, None

    def callee_at(self, fs, a):
        for c in fs['calls']:
            if c['address'] == a:
                nm = self.callee_name(c)
                if not nm and c.get('target'):
                    nm = 'sub_%s' % c['target']
                if not nm and c.get('got'):
                    nm = 'GOT slot %s' % c['got'].get('slot')
                return '`%s` (call at %s)' % (nm or 'an unnamed callee', a)
        return 'the call at %s' % a

    def def_of(self, fs, b, regs):
        insns = fs['insns']
        bi = b['index']
        out = []
        for r in regs:
            found = None
            for k in range(bi - 1, max(-1, bi - 60), -1):
                a, text = insns[k]
                parts = text.split(None, 1)
                if not parts:
                    continue
                mn = parts[0]
                ops = [o.strip() for o in parts[1].split(',')] if len(parts) > 1 else []
                if mn in ('jal', 'jalr', 'bal', 'bgezal', 'bltzal', 'bgezall', 'bltzall'):
                    if r == 'v0':
                        found = 'return value of %s' % self.callee_at(fs, a)
                        break
                if ALU_DEST.match(mn) and ops and ops[0] == r:
                    found = '%s set by `%s` at %s' % (r, text, a)
                    break
            out.append(found or '%s set before the routine entry or not traced in 60 instructions' % r)
        return '; '.join(out)

    def rows(self, only=None):
        out = []
        for name in self.routines(only):
            fs = self.sheet(name)
            if fs is None:
                continue
            for call in fs['calls']:
                cn = self.callee_name(call)
                if cn not in PRINTERS:
                    continue
                kind, idx, extra = PRINTERS[cn]
                ex = parse_extra(extra)
                args = call.get('args', {})
                fmt, why = self.format_of(args, idx)
                level = ''
                if 'type' in ex:
                    tv = value_int(args.get('a%d' % ex['type']))
                    level = 'type %d' % tv if tv is not None else 'type ?'
                if 'verb' in ex:
                    level += ' verb %s' % args.get('a%d' % ex['verb'], '?')
                if 'file' in ex:
                    f, _ = self.format_of(args, ex['file'])
                    lv = value_int(args.get('a%d' % ex['line']))
                    level = 'file %s line %s' % (f or '?', lv if lv is not None else '?')
                if 'priority' in ex:
                    level = 'priority %s' % args.get('a%d' % ex['priority'], '?')
                if 'stream' in ex:
                    level = 'stream %s' % args.get('a%d' % ex['stream'], '?')
                others = []
                if fmt is not None:
                    convs = conversions(fmt)
                    regs = ['a%d' % k for k in range(idx + 1, 4)]
                    for i, c in enumerate(convs):
                        if i < len(regs):
                            v = args.get(regs[i])
                            if c[-1] == 's' and value_addr(v) is not None:
                                s = read_cstring(self.img, value_addr(v))
                                others.append('%s=%r' % (c, s if s is not None else v))
                            else:
                                others.append('%s=%s' % (c, v if v is not None else '?'))
                        else:
                            others.append('%s=? (stack argument)' % c)
                guard_text, origin, straight = self.guard(fs, call)
                out.append({
                    'label': self.label,
                    'routine': name,
                    'address': call['address'],
                    'callee': cn,
                    'level': level,
                    'format': fmt if fmt is not None else '(%s)' % why,
                    'other_strings': '; '.join(others),
                    'category': category_of((fmt or '') + ' ' + level, name, cn),
                    'guard': '; '.join(x for x in (guard_text or straight, origin) if x),
                    'condition': 'not yet read',
                    'grade': 'inferred' if (guard_text and origin and 'not traced' not in origin) else
                             ('partial' if guard_text else 'unread'),
                })
        out.sort(key=lambda r: int(r['address'], 16))
        return out


def load_conditions(path):
    table = {}
    if not path:
        return table
    with open(path, encoding='utf-8') as f:
        for line in f:
            if line.startswith('#') or not line.strip():
                continue
            cols = line.rstrip('\n').split('\t')
            table[(cols[0], cols[1])] = cols[2:]
    return table


COLUMNS = ['label', 'routine', 'address', 'callee', 'level', 'format', 'other_strings', 'category', 'guard',
           'condition', 'grade']


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    ap.add_argument('binary')
    ap.add_argument('label')
    ap.add_argument('--conditions')
    ap.add_argument('--tsv')
    ap.add_argument('--only')
    a = ap.parse_args(argv)
    cat = Catalogue(a.binary, a.label)
    rows = cat.rows(a.only)
    cond = load_conditions(a.conditions)
    for r in rows:
        hit = cond.get((r['label'], r['address']))
        if hit:
            r['condition'], r['grade'] = hit[0], hit[1]
    buf = io.StringIO()
    w = csv.writer(buf, delimiter='\t', lineterminator='\n', quoting=csv.QUOTE_NONE, escapechar='\\')
    w.writerow(COLUMNS)
    for r in rows:
        w.writerow([str(r[c]).replace('\t', ' ').replace('\n', ' ') for c in COLUMNS])
    text = buf.getvalue()
    if a.tsv:
        with open(a.tsv, 'w', encoding='utf-8', newline='\n') as f:
            f.write(text)
    else:
        sys.stdout.write(text)
    sys.stderr.write('%s: %d sites in %d routines, %d routines not read\n' % (
        a.label, len(rows), len(set(r['routine'] for r in rows)), len(cat.failed)))
    for name, why in cat.failed[:20]:
        sys.stderr.write('  not read: %s: %s\n' % (name, why))
    return 0


if __name__ == '__main__':
    sys.exit(main())
