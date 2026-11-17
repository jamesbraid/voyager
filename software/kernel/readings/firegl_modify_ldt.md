# Readings: `firegl_modify_ldt`

One entry per routine, filed here from the reading batches by binary.

### `firegl_modify_ldt` in usr/cpu/sysgen/IP35boot/fglrx.o at 0x10278

The render shows one return at 0x10278 that leaves v0 at 0x0. It makes no calls, has no memory accesses and no branches, so the routine only returns zero. Role (from name): the name suggests an x86 LDT edit, which the render neither confirms nor rules out.

Grade: inferred.

Reviewed: 2026-11-12 (sonnet)
