# Readings: `usr/gfx/VOYAGER/bin/sg2flash`

One entry per routine, filed here from the reading batches by binary.

- `__start` in `usr/gfx/VOYAGER/bin/sg2flash` at 0x10001270 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/sg2flash`.
  Range: 0x10001270-0x1000137c (268 bytes).
  It occupies 268 bytes.
  3 such `lw` accesses load 4 bytes from table(0x7710) +0x0, including `lw` at 0x100012a4, `lw` at 0x100012c8, `lw` at 0x1000134c.
  2 such `lw` accesses load 4 bytes from entry(0x7710) +0x0, including `lw` at 0x100012b0, `lw` at 0x1000135c.
  The `sw` at 0x100012cc stores 4 bytes to entry(0x7710) +0x0.
  2 such `lw` accesses load 4 bytes from table(0x77a0) +0x0, including `lw` at 0x100012d8, `lw` at 0x10001344.
  The `sw` at 0x100012e4 stores 4 bytes to entry(0x77a0) +0x0.
  2 such `lw` accesses load 4 bytes from table(0x779c) +0x0, including `lw` at 0x100012f0, `lw` at 0x10001348.
  The `sw` at 0x100012f8 stores 4 bytes to entry(0x779c) +0x0.
  The `lw` at 0x100012fc loads 4 bytes from table(0x7788) +0x0.
  The `lw` at 0x10001314 loads 4 bytes from table(0x7754) +0x0.
  The `lw` at 0x10001334 loads 4 bytes from table(0x777c) +0x0.
  The `lw` at 0x10001350 loads 4 bytes from entry(0x77a0) +0x0.
  The `lw` at 0x10001354 loads 4 bytes from entry(0x779c) +0x0.
  The `lw` at 0x10001368 loads 4 bytes from table(0x7750) +0x0.
  The `bal` at 0x10001288 calls __start+32 [0x10001290] with a0=?, a1=sp+4, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10001304 calls (unknown callee) with a0=?, a1=?, a2=?, a3=[entry(0x7710)].
  The `jalr` at 0x10001318 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10001358 calls (unknown callee) with a0=[entry(0x77a0)], a1=[entry(0x779c)], a2=[entry(0x7710)], a3=?.
  The `jalr` at 0x10001370 calls (unknown callee) with a0=ret(?), a1=?, a2=?, a3=?.
  The `bne` branch at 0x100012bc targets 0x100012d0, is taken when a3(=[entry(0x7710)]) != 0, and falls through when a3(=[entry(0x7710)]) == 0.

- `_mcount` in `usr/gfx/VOYAGER/bin/sg2flash` at 0x1000137c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/sg2flash`.
  Range: 0x1000137c-0x10001388 (12 bytes).
  It occupies 12 bytes.
  The return at 0x10001380 has v0 = ?.

- `flash_rom` in `usr/gfx/VOYAGER/bin/sg2flash` at 0x10002f18 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/sg2flash`.
  Range: 0x10002f18-0x10003640 (1832 bytes).
  It occupies 1832 bytes.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x1c0, including `lw` at 0x10002f6c, `lw` at 0x100030d4, `lw` at 0x10003484.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x19c, including `lw` at 0x10002f98, `lw` at 0x10003488.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x1a0, including `lw` at 0x10002fc8, `lw` at 0x10003498.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x198, including `lw` at 0x10002ff4, `lw` at 0x100034a0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x1ac, including `lw` at 0x10003020, `lw` at 0x100034a8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x1b0, including `lw` at 0x1000304c, `lw` at 0x100034ac.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x1a8, including `lw` at 0x1000307c, `lw` at 0x100034bc.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc40, including `lw` at 0x100030a8, `lw` at 0x10003130, `lw` at 0x100034c0.
  4 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x1c0, including `sw` at 0x10003114, `sw` at 0x100033e4, `sw` at 0x10003538.
  4 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x19c, including `sw` at 0x10003118, `sw` at 0x100033e8, `sw` at 0x1000353c.
  4 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x1a0, including `sw` at 0x1000311c, `sw` at 0x100033f4, `sw` at 0x10003540.
  4 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x198, including `sw` at 0x10003120, `sw` at 0x10003408, `sw` at 0x10003544.
  4 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x1ac, including `sw` at 0x10003124, `sw` at 0x10003414, `sw` at 0x10003548.
  4 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x1b0, including `sw` at 0x10003128, `sw` at 0x10003420, `sw` at 0x1000354c.
  4 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x1a8, including `sw` at 0x1000312c, `sw` at 0x1000342c, `sw` at 0x10003554.
  4 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0xc40, including `sw` at 0x1000316c, `sw` at 0x10003434, `sw` at 0x100034d0.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x30, including `lw` at 0x10003170, `lw` at 0x10003250, `lw` at 0x100034d8.
  4 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x30, including `sw` at 0x100031c8, `sw` at 0x100032a8, `sw` at 0x100034e0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xe4, including `lw` at 0x100031cc, `lw` at 0x100034e8.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x100032c4, `lbu` at 0x100032c8.
  The `jal` at 0x1000321c calls message [0x10004134] with a0=-0x1, a1=0x100082e8, a2=?, a3=0x9, a7=[0x10008a44].
  The `jal` at 0x10003228 calls usage [0x10003640] with a0=0x1, a1=?, a2=?, a3=?.
  The `jal` at 0x10003238 calls (unnamed) [0x100015e8] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x10003440 calls message [0x10004134] with a0=0x0, a1=0x10008a50, a2=?, a3=sym(message).
  The `jal` at 0x100034f8 calls message [0x10004134] with a0=0x1, a1=0x10008308, a2=?, a3=0x9, a7=[0x10008a44].
  The `jal` at 0x10003514 calls (unnamed) [0x10002520] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10003528 calls message [0x10004134] with a0=-0x1, a1=ret(0x10002520), a2=?, a3=?.
  The `jal` at 0x100035a0 calls (unnamed) [0x100018a4] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x100035b4 calls message [0x10004134] with a0=-0x1, a1=ret(0x100018a4), a2=?, a3=?.
  The `jal` at 0x100035cc calls message [0x10004134] with a0=0x1, a1=0x10008318, a2=?, a3=0x9, a7=[0x10008a44].
  The `jal` at 0x100035e8 calls (unnamed) [0x10001b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10003600 calls message [0x10004134] with a0=-0x1, a1=ret(0x10001b40), a2=?, a3=?.
  The `jal` at 0x10003618 calls (unnamed) [0x10001608] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10003630 calls message [0x10004134] with a0=-0x1, a1=ret(0x10001608), a2=?, a3=?.
  The `beq` branch at 0x10002f64 targets 0x10003480, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `beq` branch at 0x10002f90 targets 0x10003488, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `beq` branch at 0x10002fc0 targets 0x10003494, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `beq` branch at 0x10002fec targets 0x1000349c, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `beq` branch at 0x10003018 targets 0x100034a4, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `beq` branch at 0x10003044 targets 0x100034ac, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `beq` branch at 0x10003074 targets 0x100034b8, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `beq` branch at 0x100030a0 targets 0x100034c0, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `beq` branch at 0x100030e8 targets 0x10003538, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `beq` branch at 0x1000313c targets 0x100034cc, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `beq` branch at 0x10003168 targets 0x100034d4, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `beq` branch at 0x10003198 targets 0x100034dc, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `beq` branch at 0x100031c4 targets 0x100034e4, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `beq` branch at 0x100031f4 targets 0x100035c4, is taken when v0(?) == a3(=0x9), and falls through when v0(?) != a3(=0x9).
  The `beq` branch at 0x10003200 targets 0x100034f0, is taken when v0(?) == v1(=0xb), and falls through when v0(?) != v1(=0xb).
  The `beq` branch at 0x1000320c targets 0x100034ec, is taken when v0(?) == a0(=0xc), and falls through when v0(?) != a0(=0xc).
  The `beq` branch at 0x10003248 targets 0x10003584, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `beq` branch at 0x1000327c targets 0x1000358c, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `beq` branch at 0x100032ac targets 0x100032e4, is taken when s0(=a3) == 0, and falls through when s0(=a3) != 0.
  The `bne` branch at 0x100032d4 targets 0x100032e4, is taken when v1(?) != a0(?), and falls through when v1(?) == a0(?).
  The `bne` branch at 0x100032dc targets 0x100032c4, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x100032e4 targets 0x10003558, is taken when a7(=[0x10008a44]) == 0, and falls through when a7(=[0x10008a44]) != 0.
  The `bne` branch at 0x10003480 targets 0x10002f98, is taken when a7(=[0x10008a44]) != 0, and falls through when a7(=[0x10008a44]) == 0.
  The `bne` branch at 0x1000348c targets 0x10002fc8, is taken when a7(=[0x10008a44]) != 0, and falls through when a7(=[0x10008a44]) == 0.
  The `bne` branch at 0x10003494 targets 0x10002ff4, is taken when a7(=[0x10008a44]) != 0, and falls through when a7(=[0x10008a44]) == 0.
  The `bne` branch at 0x1000349c targets 0x10003020, is taken when a7(=[0x10008a44]) != 0, and falls through when a7(=[0x10008a44]) == 0.
  The `bne` branch at 0x100034a4 targets 0x1000304c, is taken when a7(=[0x10008a44]) != 0, and falls through when a7(=[0x10008a44]) == 0.
  The `bne` branch at 0x100034b0 targets 0x1000307c, is taken when a7(=[0x10008a44]) != 0, and falls through when a7(=[0x10008a44]) == 0.
  The `bne` branch at 0x100034b8 targets 0x100030a8, is taken when a7(=[0x10008a44]) != 0, and falls through when a7(=[0x10008a44]) == 0.
  The `beq` branch at 0x100034c4 targets 0x100030d4 and is always taken.
  The `bne` branch at 0x100034cc targets 0x10003170, is taken when a7(=[0x10008a44]) != 0, and falls through when a7(=[0x10008a44]) == 0.
  The `beq` branch at 0x100034d4 targets 0x10003198 and is always taken.
  The `bne` branch at 0x100034dc targets 0x100031cc, is taken when a7(=[0x10008a44]) != 0, and falls through when a7(=[0x10008a44]) == 0.
  The `beq` branch at 0x100034e4 targets 0x100031e8 and is always taken.
  The `beq` branch at 0x1000351c targets 0x10003594, is taken when v0(=ret(0x10002520)) == 0, and falls through when v0(=ret(0x10002520)) != 0.
  The `beq` branch at 0x10003530 targets 0x1000344c and is always taken.
  The `beq` branch at 0x10003550 targets 0x10003130 and is always taken.
  The `beq` branch at 0x1000357c targets 0x10003438 and is always taken.
  The `beq` branch at 0x10003584 targets 0x10003278 and is always taken.
  The `beq` branch at 0x1000358c targets 0x100032ac and is always taken.
  The `beq` branch at 0x100035a8 targets 0x10003230, is taken when v0(=ret(0x100018a4)) == 0, and falls through when v0(=ret(0x100018a4)) != 0.
  The `beq` branch at 0x100035bc targets 0x1000344c and is always taken.
  The `beq` branch at 0x100035f0 targets 0x10003610, is taken when v0(=ret(0x10001b40)) == 0, and falls through when v0(=ret(0x10001b40)) != 0.
  The `beq` branch at 0x10003608 targets 0x1000344c and is always taken.
  The `beq` branch at 0x10003620 targets 0x10003234, is taken when v0(=ret(0x10001608)) == 0, and falls through when v0(=ret(0x10001608)) != 0.
  The `beq` branch at 0x10003638 targets 0x1000344c and is always taken.
  The return at 0x10003478 has v0 = one of 0x0, 0x1.

- `usage` in `usr/gfx/VOYAGER/bin/sg2flash` at 0x10003640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/sg2flash`.
  Range: 0x10003640-0x100036d8 (152 bytes).
  It occupies 152 bytes.
  The `jal` at 0x10003674 calls message [0x10004134] with a0=0x0, a1=0x10008328, a2=[0x10008a40], a3=a3 at entry (arg3).
  The `jal` at 0x10003688 calls message [0x10004134] with a0=0x0, a1=0x10008348, a2=?, a3=?.
  The `jal` at 0x1000369c calls message [0x10004134] with a0=0x0, a1=0x10008360, a2=?, a3=?.
  The `jal` at 0x100036b0 calls message [0x10004134] with a0=0x0, a1=0x10008388, a2=?, a3=?.
  The `jal` at 0x100036c4 calls message [0x10004134] with a0=0x0, a1=0x100083a0, a2=?, a3=?.
  The `jalr` at 0x100036d0 calls exit with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.

- `do_card` in `usr/gfx/VOYAGER/bin/sg2flash` at 0x1000397c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/sg2flash`.
  Range: 0x1000397c-0x10004134 (1976 bytes).
  It occupies 1976 bytes.
  2 such `lbu` accesses load 1 byte from a1 (arg1 at entry) +0x9, including `lbu` at 0x10003b90, `lbu` at 0x10004064.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x5c, including `lw` at 0x10003b9c, `lw` at 0x10004070.
  The `lw` at 0x10003bc8 loads 4 bytes from sym(flag_rbase) +0x0.
  The `lw` at 0x10003cfc loads 4 bytes from ret(mmap) +0x1a4.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10003d3c, `lw` at 0x10003d44, `lw` at 0x10003d70.
  2 such `lw` accesses load 4 bytes from sym(flag_query) +0x0, including `lw` at 0x10003dd0, `lw` at 0x10003e54.
  The `sw` at 0x10003de0 stores 4 bytes to sym(flag_force) +0x0.
  The `lw` at 0x10003e64 loads 4 bytes from sym(flag_force) +0x0.
  The `jalr` at 0x100039c4 calls snprintf with a0=sp-416, a1=0x100, a2=0x10008410, a3=a0 at entry (arg0).
  The `jal` at 0x100039e4 calls message [0x10004134] with a0=0x1, a1=0x10008420, a2=sp-416, a3=?.
  The `jalr` at 0x100039fc calls open with a0=sp-416, a1=0x2, a2=?, a3=?.
  The `jalr` at 0x10003a2c calls ioctl with a0=ret(open), a1=0x40040030, a2=sp-160, a3=?.
  The `jal` at 0x10003a44 calls message [0x10004134] with a0=0x2, a1=0x10008450, a2=?, a3=?.
  The `jalr` at 0x10003a68 calls ioctl with a0=ret(open), a1=0xffffffff80040030, a2=sp-160, a3=?.
  The `jalr` at 0x10003a78 calls close with a0=ret(open), a1=?, a2=?, a3=?.
  The `jalr` at 0x10003a94 calls snprintf with a0=sp-416, a1=0x100, a2=0x10008468, a3=a0 at entry (arg0).
  The `jal` at 0x10003aac calls message [0x10004134] with a0=0x1, a1=0x10008420, a2=sp-416, a3=?.
  The `jalr` at 0x10003abc calls open with a0=sp-416, a1=0x2, a2=?, a3=?.
  The `jalr` at 0x10003ae8 calls mmap with a0=0x0, a1=0x20000, a2=0x3, a3=0x1, a4=ret(open), a5=0x0.
  The `jalr` at 0x10003af8 calls close with a0=ret(open), a1=?, a2=?, a3=?.
  The `jalr` at 0x10003b1c calls snprintf with a0=sp-416, a1=0x100, a2=0x100084b0, a3=a0 at entry (arg0).
  The `jal` at 0x10003b34 calls message [0x10004134] with a0=0x1, a1=0x10008420, a2=sp-416, a3=?.
  The `jalr` at 0x10003b44 calls open with a0=sp-416, a1=0x2, a2=?, a3=?.
  The `jalr` at 0x10003b6c calls mmap with a0=0x0, a1=0x2000, a2=0x3, a3=0x1, a4=ret(open), a5=0x0.
  The `jalr` at 0x10003b7c calls close with a0=ret(open), a1=?, a2=?, a3=?.
  The `jalr` at 0x10003bbc calls getenv with a0=0x10008530, a1=?, a2=?, a3=?.
  The `jalr` at 0x10003c04 calls snprintf with a0=sp-416, a1=0x64, a2=0x10008540, a3=?.
  The `jalr` at 0x10003c14 calls open with a0=sp-416, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x10003c3c calls read with a0=ret(open), a1=0x10008a80, a2=?, a3=?.
  The `jalr` at 0x10003c4c calls close with a0=ret(open), a1=?, a2=?, a3=?.
  The `jal` at 0x10003c68 calls message [0x10004134] with a0=0x2, a1=0x100085a8, a2=ret(read), a3=?.
  The `jal` at 0x10003c84 calls (unnamed) [0x10001388] with a0=0x10008a80, a1=ret(read), a2=sp-144, a3=?.
  The `jal` at 0x10003c9c calls message [0x10004134] with a0=-0x1, a1=0x100085c0, a2=?, a3=?.
  The `jalr` at 0x10003cb0 calls munmap with a0=ret(mmap), a1=0x20000, a2=?, a3=?.
  The `jalr` at 0x10003cc0 calls munmap with a0=ret(mmap), a1=0x2000, a2=?, a3=?.
  The `jalr` at 0x10003d2c calls strcmp with a0=?, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10003d78 calls message [0x10004134] with a0=0x1, a1=0x10008510, a2=?, a3=?.
  The `jal` at 0x10003d98 calls (unnamed) [0x100015e8] with a0=ret(mmap), a1=0x10010000, a2=?, a3=?.
  The `jal` at 0x10003dac calls (unnamed) [0x10001388] with a0=ret(mmap), a1=0x20000, a2=sp-128, a3=?.
  The `jal` at 0x10003dc4 calls message [0x10004134] with a0=-0x1, a1=0x100085e0, a2=?, a3=?.
  The `jal` at 0x10003e00 calls message [0x10004134] with a0=0x0, a1=0x10008618, a2=?, a3=?.
  The `jalr` at 0x10003e14 calls munmap with a0=ret(mmap), a1=0x20000, a2=?, a3=?.
  The `jalr` at 0x10003e24 calls munmap with a0=ret(mmap), a1=0x2000, a2=?, a3=?.
  The `jal` at 0x10003e40 calls message [0x10004134] with a0=-0x1, a1=0x10008490, a2=?, a3=?.
  The `jal` at 0x10003e80 calls message [0x10004134] with a0=0x0, a1=0x10008648, a2=a0 at entry (arg0), a3=?.
  The `jal` at 0x10003e98 calls message [0x10004134] with a0=0x0, a1=0x10008660, a2=0x0, a3=?.
  The `jal` at 0x10003ebc calls message [0x10004134] with a0=-0x1, a1=0x10008430, a2=sp-416, a3=?.
  The `jal` at 0x10003edc calls message [0x10004134] with a0=-0x1, a1=0x10008478, a2=sp-416, a3=?.
  The `jal` at 0x10003ef8 calls flash_rom [0x10002f18] with a0=ret(mmap), a1=ret(mmap), a2=0x10008a80, a3=ret(read).
  The `jal` at 0x10003f18 calls message [0x10004134] with a0=0x0, a1=0x10008660, a2=?, a3=?.
  The `jalr` at 0x10003f38 calls munmap with a0=ret(mmap), a1=0x20000, a2=?, a3=?.
  The `jalr` at 0x10003f48 calls munmap with a0=ret(mmap), a1=0x2000, a2=?, a3=?.
  The `jal` at 0x10003f68 calls message [0x10004134] with a0=-0x1, a1=0x100084c0, a2=sp-416, a3=?.
  The `jalr` at 0x10003f78 calls munmap with a0=ret(mmap), a1=0x20000, a2=?, a3=?.
  The `jal` at 0x10003f98 calls message [0x10004134] with a0=-0x1, a1=0x10008560, a2=sp-416, a3=?.
  The `jal` at 0x10003fb4 calls message [0x10004134] with a0=-0x1, a1=0x10008580, a2=?, a3=?.
  The `jal` at 0x10003fcc calls message [0x10004134] with a0=0x2, a1=0x100084e0, a2=?, a3=?.
  The `jalr` at 0x10003fe8 calls snprintf with a0=sp-416, a1=0x100, a2=0x10008500, a3=a0 at entry (arg0).
  The `jal` at 0x10004000 calls message [0x10004134] with a0=0x1, a1=0x10008420, a2=sp-416, a3=?.
  The `jalr` at 0x10004010 calls open with a0=sp-416, a1=0x2, a2=?, a3=?.
  The `jalr` at 0x10004038 calls mmap with a0=0x0, a1=0x2000, a2=0x3, a3=0x1, a4=ret(open), a5=0x0.
  The `jalr` at 0x1000404c calls close with a0=ret(open), a1=?, a2=?, a3=?.
  The `jal` at 0x100040b4 calls (unnamed) [0x100014c4] with a0=sp-144, a1=sp-128, a2=[sym(flag_query)], a3=[sym(flag_force)].
  The `jal` at 0x100040dc calls message [0x10004134] with a0=-0x1, a1=0x100084c0, a2=sp-416, a3=?.
  The `jalr` at 0x100040ec calls munmap with a0=ret(mmap), a1=0x20000, a2=?, a3=?.
  The `jal` at 0x10004108 calls message [0x10004134] with a0=-0x1, a1=0x100084e0, a2=-0x1, a3=?, a4=0x1.
  The `jalr` at 0x10004118 calls munmap with a0=ret(mmap), a1=0x20000, a2=?, a3=?.
  The `bltz` branch at 0x10003a10 targets 0x10003eac, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The `bltz` branch at 0x10003ac4 targets 0x10003ecc, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The `beq` branch at 0x10003b04 targets 0x10003e34, is taken when s6(=-0x1) == s3(=ret(mmap)), and falls through when s6(=-0x1) != s3(=ret(mmap)).
  The `bltz` branch at 0x10003b4c targets 0x10003f58, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The `beq` branch at 0x10003b88 targets 0x10003fc4, is taken when v0(=-0x1) == s6(=ret(mmap)), and falls through when v0(=-0x1) != s6(=ret(mmap)).
  The `beq` branch at 0x10003b94 targets 0x10003cfc, is taken when a2(=[a1+9]:1) == 0, and falls through when a2(=[a1+9]:1) != 0.
  The `blez` branch at 0x10003ba0 targets 0x10003cfc, is taken when a1(=[a1+92]) <= 0 (signed), and falls through when a1(=[a1+92]) > 0 (signed).
  The `beq` branch at 0x10003bcc targets 0x10003be4, is taken when a3(=[sym(flag_rbase)]) == 0, and falls through when a3(=[sym(flag_rbase)]) != 0.
  The `beq` branch at 0x10003bd4 targets 0x10003bec, is taken when v0(=ret(getenv)) == 0, and falls through when v0(=ret(getenv)) != 0.
  The `beq` branch at 0x10003bdc targets 0x10003bf4 and is always taken.
  The `bne` branch at 0x10003be4 targets 0x10003bdc, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `bltz` branch at 0x10003c1c targets 0x10003f88, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The `beq` branch at 0x10003c54 targets 0x10003fa8, is taken when s1(=ret(read)) == 0, and falls through when s1(=ret(read)) != 0.
  The `beq` branch at 0x10003c8c targets 0x10003d90, is taken when v0(=ret(0x10001388)) == 0, and falls through when v0(=ret(0x10001388)) != 0.
  The `beq` branch at 0x10003d0c targets 0x10003d24 and is always taken.
  The `beq` branch at 0x10003d1c targets 0x10003d88, is taken when s7(?) >= 0x3 (unsigned), and falls through when s7(?) < 0x3 (unsigned).
  The `bne` branch at 0x10003d34 targets 0x10003d14, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `beq` branch at 0x10003d48 targets 0x10003d14, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x10003d50 targets 0x10003d18, is taken when v0(?) != a0(?), and falls through when v0(?) == a0(?).
  The `beq` branch at 0x10003d80 targets 0x10003bb0 and is always taken.
  The `beq` branch at 0x10003d88 targets 0x10003bb0 and is always taken.
  The `beq` branch at 0x10003db4 targets 0x10003e50, is taken when v0(=ret(0x10001388)) == 0, and falls through when v0(=ret(0x10001388)) != 0.
  The `beq` branch at 0x10003ddc targets 0x10003e70, is taken when a4(=[sym(flag_query)]) == 0, and falls through when a4(=[sym(flag_query)]) != 0.
  The `beq` branch at 0x10003e2c targets 0x10003ccc and is always taken.
  The `beq` branch at 0x10003e48 targets 0x10003ccc and is always taken.
  The `bne` branch at 0x10003e58 targets 0x10003de8, is taken when a2(=[sym(flag_query)]) != 0, and falls through when a2(=[sym(flag_query)]) == 0.
  The `beq` branch at 0x10003e68 targets 0x100040ac, is taken when a3(=[sym(flag_force)]) == 0, and falls through when a3(=[sym(flag_force)]) != 0.
  The `beq` branch at 0x10003ea4 targets 0x10004128 and is always taken.
  The `beq` branch at 0x10003ec4 targets 0x10003ccc and is always taken.
  The `beq` branch at 0x10003ee4 targets 0x10003ccc and is always taken.
  The `beq` branch at 0x10003f00 targets 0x10003f2c, is taken when v0(=ret(flash_rom)) == 0, and falls through when v0(=ret(flash_rom)) != 0.
  The `bne` branch at 0x10003f24 targets 0x10003eec, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x10003f50 targets 0x10003ccc and is always taken.
  The `beq` branch at 0x10003f80 targets 0x10003ccc and is always taken.
  The `beq` branch at 0x10003fa0 targets 0x10003ccc and is always taken.
  The `beq` branch at 0x10003fbc targets 0x10003ccc and is always taken.
  The `bltz` branch at 0x10004018 targets 0x100040cc, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The `beq` branch at 0x1000405c targets 0x100040fc, is taken when a2(=-0x1) == v0(?), and falls through when a2(=-0x1) != v0(?).
  The `beq` branch at 0x10004068 targets 0x1000407c, is taken when a3(=[a1+9]:1) == 0, and falls through when a3(=[a1+9]:1) != 0.
  The `bgtz` branch at 0x10004074 targets 0x10003ba8, is taken when a1(=[a1+92]) > 0 (signed), and falls through when a1(=[a1+92]) <= 0 (signed).
  The `beq` branch at 0x100040a4 targets 0x10003d04 and is always taken.
  The `bne` branch at 0x100040bc targets 0x10003e74, is taken when v0(=ret(0x100014c4)) != 0, and falls through when v0(=ret(0x100014c4)) == 0.
  The `beq` branch at 0x100040c4 targets 0x10003f30 and is always taken.
  The `beq` branch at 0x100040f4 targets 0x10003ccc and is always taken.
  The `beq` branch at 0x10004120 targets 0x10003ccc and is always taken.
  The `beq` branch at 0x1000412c targets 0x10003f24 and is always taken.
  The return at 0x10003cf4 has v0 = one of ret(munmap), ret(message).

- `message` in `usr/gfx/VOYAGER/bin/sg2flash` at 0x10004134 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/sg2flash`.
  Range: 0x10004134-0x100041dc (168 bytes).
  It occupies 168 bytes.
  The `lw` at 0x10004164 loads 4 bytes from sym(flag_verbose) +0x0.
  The `jalr` at 0x100041a0 calls fprintf with a0=?, a1=0x10008a70, a2=[0x10008a40], a3=a3 at entry (arg3).
  The `jalr` at 0x100041b4 calls _doprnt with a0=a1 at entry (arg1), a1=sp-48, a2=?, a3=?.
  The `bne` branch at 0x10004184 targets 0x100041bc, is taken when at(=[sym(flag_verbose)]) < a0 (signed), and falls through when at(=[sym(flag_verbose)]) >= a0 (signed).
  The `beq` branch at 0x1000418c targets 0x100041d0, is taken when a0 == t1(=-0x1), and falls through when a0 != t1(=-0x1).
  The `beq` branch at 0x100041d4 targets 0x10004194 and is always taken.
  The return at 0x100041c8 has v0 = one of 0xc7ec, ret(_doprnt).

- `__istart` in `usr/gfx/VOYAGER/bin/sg2flash` at 0x100041ec (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/sg2flash`.
  Range: 0x100041ec-0x100041f0 (4 bytes).
  It occupies 4 bytes.
