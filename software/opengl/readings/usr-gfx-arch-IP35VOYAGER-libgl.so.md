# Readings: `usr/gfx/arch/IP35VOYAGER/libgl.so`

One entry per routine, filed here from the reading batches by binary.

- `extract` in `usr/gfx/arch/IP35VOYAGER/libgl.so` at 0xeccfba8 (o32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER/libgl.so`.
  Range: 0xeccfba8-0xeccfbe4 (60 bytes).
  It occupies 60 bytes.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0xeccfbb0, `lw` at 0xeccfbc0, `lw` at 0xeccfbd0.
  The `blez` branch at 0xeccfba8 targets 0xeccfbdc, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `bne` branch at 0xeccfbb8 targets 0xeccfbd4, is taken when a2 != t6(?), and falls through when a2 == t6(?).
  The `bne` branch at 0xeccfbc4 targets 0xeccfbd4, is taken when a3 != t7(?), and falls through when a3 == t7(?).
  The `bgtz` branch at 0xeccfbd4 targets 0xeccfbb0, is taken when a1(?) > 0 (signed), and falls through when a1(?) <= 0 (signed).
  The return at 0xeccfbcc has v0 = ?.
  The return at 0xeccfbdc has v0 = 0x0.
