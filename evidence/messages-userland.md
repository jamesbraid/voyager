# Messages in the FireGL X driver, the option ROM diagnostic and the Voyager tools

This is the catalogue of the text that the ATI FireGL X server module (`fglrx_drv.so`), the DRM library (`libfglrxdrm.so`) and the Voyager user-level tools print or log. It covers the IRIX 6.5.30 files as the install carries them. Each row is one call site: the address of the call, the routine that holds it, the printer, the format string, the values the format reads, the category, and the condition that reaches the call. The table is [messages-userland.tsv](messages-userland.tsv). The hand-written readings are in [messages-userland-conditions.tsv](messages-userland-conditions.tsv).

The kernel driver object (`fglrx.o`) is not in this table. It is catalogued separately.

Status: partial. See [what is missing](#what-is-missing).

## Table columns

- `label`: the file, as the install names it (`fglrx_drv.so`, `libfglrxdrm.so`, `olsgsys`, `vpm`, `sg2flash`, `biosemu`).
- `routine`, `address`: the routine containing the call and the address of the call instruction.
- `callee`: the printer the call reaches. For a call through the GOT, the name is the dynamic symbol the GOT slot holds. For a direct call to a routine of the file, the name is `sub_<address>` when the file does not name it.
- `level`: for the X message calls, the MessageType argument as a number (`type 6` is the sixth value of the X server enumeration). The X names are not used here: the enumeration was not checked against a source in this pass. For `__assert`, the file and line. For `syslog` the priority, for `fprintf` the stream.
- `format`: the format string the call passes, read from the file's read-only data up to its NUL. `(not recovered ...)` means the format register was not traced to a string.
- `other_strings`: for each conversion after the format, the string the register points to or the value the register holds, in order. `?` means not known. A value shown as `ret(...)` or `[...]` is a value the reader could not reduce further; it is what the fact sheet printed.
- `category`: a keyword sort of the message and routine names: `rom`, `interrupt`, `hang-recovery`, `attach`, `assert`, `trace` or `other`. `assert` is a `__assert` call; `trace` is a debug call or an x86 emulator opcode trace. The keyword rule is a sort, not a reading.
- `guard`: the branch that decides whether the call runs, read from the fact sheet (its text, its target, and whether the call is on its taken or fall-through path), and where the tested register was set (an earlier call's return value, an immediate, a load, or a loop).
- `condition`: a written reading, where someone read the code. `not yet read` otherwise. The `guard` column is the mechanical reading and is always present.
- `grade`: `inferred` (the guarding branch and the value it tests were read by the generator, and the value has a visible source), `partial` (a branch was found but its value or a second path was not traced), `unread` (no guard on the path from the routine entry was found).

## How the rows are found

`tools/message_sites_elf.py` runs `retools/tools/facts.py` on every function symbol of a file, in one process. For each call it reads the callee and the argument registers from the fact sheet. A call is a site when its callee is one of the printers in the script, the format argument is a constant address, and the address is a string in the file.

The guard is picked in this order:

1. The call's block starts at the nearest branch target or at the instruction after a conditional branch that falls through into it. If a conditional branch jumps to that start, the call is on its taken path. If the block follows a conditional branch, the call is on that branch's fall-through path. If the block follows a loop's back-edge, the call runs when the loop ends.
2. Otherwise the call is on the fall-through path of the nearest forward branch that jumps over it.
3. Otherwise no guard was found, and the row says so.

The tested register is traced back to its last write within 60 instructions. A write by a call is named by the callee, or by its address when the callee has no name.

Grades are mechanical. An `inferred` row says the generator found the guard and the write; it does not say the whole routine was read. The 14 rows with a written condition were read in the disassembly.

## Coverage

| File | Sites | Routines | Notes |
|---|---:|---:|---|
| `fglrx_drv.so` | 206 | 47 | X server module: attach, mode and DRI set-up, the IS1 pipe code, the R200 and R300 hang-recovery paths, asserts |
| `biosemu` | 79 | 18 | option ROM diagnostic: ROM enable, mmap and signature messages, PCI-BA device listing, x86 emulator traces |
| `vpm` | 41 | 16 | the Voyager diagnostic and PCI-BA lister |
| `olsgsys` | 25 | 20 | the system-level diagnostic's report and output routines |
| `libfglrxdrm.so` | 2 | 2 | DRM library messages (one routine is not read; see below) |
| `sg2flash` | 1 | 1 | flash tool |

By category: 41 attach, 1 ROM and 4 hang-recovery rows in the X module; 8 ROM and 4 attach rows in `biosemu`; no interrupt rows in any file here. The `attach` count includes rows whose text is a PCI, mapping or device message, because the keyword rule reads the routine names too.

Of the 354 sites, 14 have a written condition. Those are the priority rows: the three hang-recovery poll and reset paths in the X module, the MMIO map and unmap sequence checks, the cursor's offscreen-memory warning, the option ROM enable and mmap failures, and the ROM signature checks.

## Known limits

- Only direct calls to the printers are followed. A routine that forwards its own format argument to a printer (a wrapper) is not listed as a site. The `printk` routine in `biosemu`, which forwards to `vfprintf`, shows `(not recovered (a0))`.
- Rows with `(not recovered ...)` (14 of them) have no format string; their call is kept, not dropped.
- The `level` column holds the MessageType number. The X server names for those numbers were not confirmed against a source in this pass; a fetch of the server's header was blocked. Do not read a name into a level until the enumeration is checked against a published X server header.
- Routines the fact sheet names only from the symbols the file carries are named; a call into an unnamed routine is shown as `sub_<address>`.
- The x86 emulator opcode traces in `biosemu` (`x86emuOp_*`, `decode_rm*`) are classed `trace`. Their enabling flag is not traced here.
- A block reached from two paths is listed once, with the guard of its nearest entry. A second entry is not reported.

## What is missing

- `fglrx_dri.so`, `fglrx_dri64.so` and `fglrx_glx.so`: about 12,800 function symbols each, almost all OpenGL. Their error paths (the `xf86` and `fprintf` calls to stderr) have not been catalogued.
- The option ROM emulator's library members `vga.a` (the x86 emulator core and the INT 10 set-up): the core is the public emulator code, and its prints are the trace rows already in `biosemu`.
- `olsg`, the diagnostic with 2,217 routines: not run in this pass.
- `gfxtopology`: a Perl script, not a binary. Its prints are not in the table.
- `libfglrxdrm.so` routine `_stub`: the fact sheet fails on it (`'Routine' object has no attribute 'in_states'`).
- The `fglrx.o` kernel object: catalogued in the kernel-driver table, not here.

To regenerate the table, from the repository root inside the toolchain environment, run the generator once per file and keep one header row:

    python3 tools/message_sites_elf.py root/usr/X11R6/lib/modules/drivers/fglrx_drv.so fglrx_drv.so --conditions evidence/messages-userland-conditions.tsv > OUT-a.tsv
    python3 tools/message_sites_elf.py root/usr/diags/SG/bin/biosemu biosemu --conditions evidence/messages-userland-conditions.tsv > OUT-b.tsv

Repeat for `libfglrxdrm.so`, `olsgsys`, `vpm` and `sg2flash` (paths in evidence/irix-files.md), then concatenate the outputs under one header. Keep the scratch outputs out of the repository.
