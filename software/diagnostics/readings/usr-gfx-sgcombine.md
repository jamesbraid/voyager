# Readings: `usr/gfx/sgcombine`

One entry per routine, filed here from the reading batches by binary.

- `__start` in `usr/gfx/sgcombine` at 0x1000f870 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1000f870-0x1000f97c (268 bytes).
  It occupies 268 bytes.
  3 such `lw` accesses load 4 bytes from table(0x231f4) +0x0, including `lw` at 0x1000f8a4, `lw` at 0x1000f8c8, `lw` at 0x1000f94c.
  2 such `lw` accesses load 4 bytes from entry(0x231f4) +0x0, including `lw` at 0x1000f8b0, `lw` at 0x1000f95c.
  The `sw` at 0x1000f8cc stores 4 bytes to entry(0x231f4) +0x0.
  2 such `lw` accesses load 4 bytes from table(0x23874) +0x0, including `lw` at 0x1000f8d8, `lw` at 0x1000f944.
  The `sw` at 0x1000f8e4 stores 4 bytes to entry(0x23874) +0x0.
  2 such `lw` accesses load 4 bytes from table(0x23870) +0x0, including `lw` at 0x1000f8f0, `lw` at 0x1000f948.
  The `sw` at 0x1000f8f8 stores 4 bytes to entry(0x23870) +0x0.
  The `lw` at 0x1000f8fc loads 4 bytes from table(0x237a8) +0x0.
  The `lw` at 0x1000f914 loads 4 bytes from table(0x232a0) +0x0.
  The `lw` at 0x1000f934 loads 4 bytes from table(0x234d4) +0x0.
  The `lw` at 0x1000f950 loads 4 bytes from entry(0x23874) +0x0.
  The `lw` at 0x1000f954 loads 4 bytes from entry(0x23870) +0x0.
  The `lw` at 0x1000f968 loads 4 bytes from table(0x2329c) +0x0.
  The `bal` at 0x1000f888 calls __start+32 [0x1000f890] with a0=?, a1=sp+4, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1000f904 calls (unknown callee) with a0=?, a1=?, a2=?, a3=[entry(0x231f4)].
  The `jalr` at 0x1000f918 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f958 calls (unknown callee) with a0=[entry(0x23874)], a1=[entry(0x23870)], a2=[entry(0x231f4)], a3=?.
  The `jalr` at 0x1000f970 calls (unknown callee) with a0=ret(?), a1=?, a2=?, a3=?.
  The `bne` branch at 0x1000f8bc targets 0x1000f8d0, is taken when a3(=[entry(0x231f4)]) != 0, and falls through when a3(=[entry(0x231f4)]) == 0.

- `_mcount` in `usr/gfx/sgcombine` at 0x1000f97c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1000f97c-0x1000f988 (12 bytes).
  It occupies 12 bytes.
  The return at 0x1000f980 has v0 = ?.

- `_main` in `usr/gfx/sgcombine` at 0x1000f990 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1000f990-0x1000fa44 (180 bytes).
  It occupies 180 bytes.
  The `lw` at 0x1000f9ac loads 4 bytes from abs 0x10032960.
  The `lw` at 0x1000f9b0 loads 4 bytes from abs 0x1002ff28.
  The `lw` at 0x1000f9cc loads 4 bytes from abs 0x10032b34.
  The `sw` at 0x1000f9d8 stores 4 bytes to abs 0x1002ff28.
  The `lw` at 0x1000f9e4 loads 4 bytes from abs 0x1003296c.
  The `lw` at 0x1000f9fc loads 4 bytes from abs 0x10032968.
  The `lw` at 0x1000fa0c loads 4 bytes from abs 0x0.
  The `lw` at 0x1000fa28 loads 4 bytes from ?.
  The `jalr` at 0x1000f9d4 calls __ct__13Iostream_initGv with a0=0x1, a1=a1 at entry (arg1), a2=0x1002ff18, a3=a3 at entry (arg3).
  The `jalr` at 0x1000fa18 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1000f9bc targets 0x1000fa2c, is taken when v0(=[0x1002ff28]) == 0, and falls through when v0(=[0x1002ff28]) != 0.
  The `beq` branch at 0x1000fa00 targets 0x1000fa2c, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x1000fa10 targets 0x1000fa20, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bnel` branch at 0x1000fa24 targets 0x1000fa10, is taken when s5(?) != s7(=table(0x0)), and falls through when s5(?) == s7(=table(0x0)); its branch-likely delay slot `lw t9,0(s5)` at 0x1000fa28 runs only when taken and is annulled on fall-through.
  The return at 0x1000fa3c has v0 = one of [0x1002ff28], ret(__ct__13Iostream_initGv), ?.

- `_fini` in `usr/gfx/sgcombine` at 0x1000fa50 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1000fa50-0x1000faa4 (84 bytes).
  It occupies 84 bytes.
  The `lw` at 0x1000fa70 loads 4 bytes from abs 0x10032970.
  The `lw` at 0x1000fa84 loads 4 bytes from abs 0x10032b38.
  The `jal` at 0x1000fa74 calls __process_needed_destructions__Gv [0x1000fab0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1000fa8c calls __dt__13Iostream_initGv with a0=0x1, a1=0x2, a2=?, a3=?.
  The return at 0x1000fa9c has v0 = ret(__dt__13Iostream_initGv).

- `__process_needed_destructions__Gv` in `usr/gfx/sgcombine` at 0x1000fab0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1000fab0-0x1000fb30 (128 bytes).
  It occupies 128 bytes.
  The `lw` at 0x1000fad0 loads 4 bytes from abs 0x10032964.
  2 such `lw` accesses load 4 bytes from abs 0x10033804, including `lw` at 0x1000fad4, `lw` at 0x1000faf0.
  The `lw` at 0x1000fafc loads 4 bytes from [0x10033804] +0x4.
  The `lw` at 0x1000fb00 loads 4 bytes from [0x10033804] +0x8.
  The `lw` at 0x1000fb04 loads 4 bytes from [0x10033804] +0x0.
  The `sw` at 0x1000fb0c stores 4 bytes to abs 0x10033804.
  The `jalr` at 0x1000fae8 calls (unknown callee) with a0=[[0x10033804]+4], a1=0x2, a2=[0x10033804], a3=?.
  The `jalr` at 0x1000fb10 calls (unknown callee) with a0=[[0x10033804]+4], a1=?, a2=[0x10033804], a3=?.
  The `beq` branch at 0x1000fad8 targets 0x1000fb20, is taken when a2(=[0x10033804]) == 0, and falls through when a2(=[0x10033804]) != 0.
  The `beq` branch at 0x1000fae0 targets 0x1000fafc and is always taken.
  The `beq` branch at 0x1000faf4 targets 0x1000fb20, is taken when a2(=[0x10033804]) == 0, and falls through when a2(=[0x10033804]) != 0.
  The `bne` branch at 0x1000fb08 targets 0x1000fae8, is taken when a0(=[[0x10033804]+4]) != 0, and falls through when a0(=[[0x10033804]+4]) == 0.
  The `beq` branch at 0x1000fb18 targets 0x1000faf0 and is always taken.
  The return at 0x1000fb28 has v0 = one of ?, ret(?).

- `__record_needed_destruction` in `usr/gfx/sgcombine` at 0x1000fb30 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1000fb30-0x1000fb58 (40 bytes).
  It occupies 40 bytes.
  The `lw` at 0x1000fb44 loads 4 bytes from abs 0x10032964.
  The `lw` at 0x1000fb48 loads 4 bytes from abs 0x10033804.
  The `sw` at 0x1000fb4c stores 4 bytes to abs 0x10033804.
  The `sw` at 0x1000fb54 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The return at 0x1000fb50 has v0 = [0x10033804].

- `__std__needed_destruction_list` in `usr/gfx/sgcombine` at 0x1000fb60 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1000fb60-0x1000fb9c (60 bytes).
  It occupies 60 bytes.
  The `lw` at 0x1000fb80 loads 4 bytes from abs 0x10032970.
  The `jal` at 0x1000fb84 calls __process_needed_destructions__Gv [0x1000fab0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x1000fb94 has v0 = ret(__process_needed_destructions__Gv).

- `iGUIReadFormatFile__GPCcP11cmpFormat_t` in `usr/gfx/sgcombine` at 0x1000fd40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1000fd40-0x1000fedc (412 bytes).
  It occupies 412 bytes.
  3 such `lw` accesses load 4 bytes from ret(getTheErrorDialog__Gv) +0x8, including `lw` at 0x1000fde0, `lw` at 0x1000fe44, `lw` at 0x1000fea0.
  3 such `lw` accesses load 4 bytes from [ret(getTheErrorDialog__Gv)+8] +0x110, including `lw` at 0x1000fdf0, `lw` at 0x1000fe54, `lw` at 0x1000feb0.
  3 such `lw` accesses load 4 bytes from [ret(getTheErrorDialog__Gv)+8] +0x108, including `lw` at 0x1000fdfc, `lw` at 0x1000fe60, `lw` at 0x1000febc.
  The `jal` at 0x1000fd5c calls vfmtReadCmp1Format [0x10021650] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1000fdcc calls sprintf with a0=sp-288, a1=0x1002c098, a2=a0 at entry (arg0), a3=?.
  The `jalr` at 0x1000fdd8 calls getTheErrorDialog__Gv with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000fe08 calls (unknown callee) with a0=([[ret(getTheErrorDialog__Gv)+8]+264] + ret(getTheErrorDialog__Gv)), a1=sp-288, a2=-0x1, a3=-0x1, a4=-0x1, a5=0x0, a6=0x0, a7=0x0.
  The `jalr` at 0x1000fe30 calls sprintf with a0=sp-288, a1=0x1002c060, a2=a0 at entry (arg0), a3=?.
  The `jalr` at 0x1000fe3c calls getTheErrorDialog__Gv with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000fe6c calls (unknown callee) with a0=([[ret(getTheErrorDialog__Gv)+8]+264] + ret(getTheErrorDialog__Gv)), a1=sp-288, a2=-0x1, a3=-0x1, a4=-0x1, a5=0x0, a6=0x0, a7=0x0.
  The `jalr` at 0x1000fe8c calls sprintf with a0=sp-288, a1=0x1002c038, a2=a0 at entry (arg0), a3=?.
  The `jalr` at 0x1000fe98 calls getTheErrorDialog__Gv with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000fec8 calls (unknown callee) with a0=([[ret(getTheErrorDialog__Gv)+8]+264] + ret(getTheErrorDialog__Gv)), a1=sp-288, a2=-0x1, a3=-0x1, a4=-0x1, a5=0x0, a6=0x0, a7=0x0.
  The `beq` branch at 0x1000fd70 targets 0x1000fdbc, is taken when v0(=ret(vfmtReadCmp1Format)) == v1(=0x1), and falls through when v0(=ret(vfmtReadCmp1Format)) != v1(=0x1).
  The `beq` branch at 0x1000fd78 targets 0x1000fe24, is taken when v0(=ret(vfmtReadCmp1Format)) == a0(=0x3), and falls through when v0(=ret(vfmtReadCmp1Format)) != a0(=0x3).
  The `beq` branch at 0x1000fd80 targets 0x1000fe80, is taken when v0(=ret(vfmtReadCmp1Format)) == a1(=0x2), and falls through when v0(=ret(vfmtReadCmp1Format)) != a1(=0x2).
  The `beq` branch at 0x1000fd88 targets 0x1000fda8, is taken when v0(=ret(vfmtReadCmp1Format)) == 0, and falls through when v0(=ret(vfmtReadCmp1Format)) != 0.
  The `beq` branch at 0x1000fe78 targets 0x1000fd9c and is always taken.
  The `beq` branch at 0x1000fed4 targets 0x1000fd9c and is always taken.
  The return at 0x1000fd94 has v0 = 0x0.
  The return at 0x1000fda0 has v0 = 0x0.
  The return at 0x1000fdb4 has v0 = 0x1.
  The return at 0x1000fe1c has v0 = 0x0.

- `iGUIReadOdsyFormatFile__GPCcP11cmpFormat_t` in `usr/gfx/sgcombine` at 0x1000fee0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1000fee0-0x10010124 (580 bytes).
  It occupies 580 bytes.
  2 such `lw` accesses load 4 bytes from sym(work_order) +0x70c, including `lw` at 0x1000fef8, `lw` at 0x100100d0.
  4 such `lw` accesses load 4 bytes from ret(getTheErrorDialog__Gv) +0x8, including `lw` at 0x1000ffcc, `lw` at 0x10010028, `lw` at 0x10010084.
  4 such `lw` accesses load 4 bytes from [ret(getTheErrorDialog__Gv)+8] +0x110, including `lw` at 0x1000ffdc, `lw` at 0x10010038, `lw` at 0x10010094.
  4 such `lw` accesses load 4 bytes from [ret(getTheErrorDialog__Gv)+8] +0x108, including `lw` at 0x1000ffe8, `lw` at 0x10010044, `lw` at 0x100100a0.
  The `jal` at 0x1000ff80 calls vfmtReadCmp1OdyFormat [0x10021870] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=0x1, a6=sym(work_order).
  The `jal` at 0x1000ff94 calls vfmtReadCmp1SG2Format [0x100219b0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=0x1, a6=sym(work_order).
  The `jalr` at 0x1000ffb8 calls sprintf with a0=sp-288, a1=0x1002c098, a2=a0 at entry (arg0), a3=0x4, a5=0x1.
  The `jalr` at 0x1000ffc4 calls getTheErrorDialog__Gv with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000fff4 calls (unknown callee) with a0=([[ret(getTheErrorDialog__Gv)+8]+264] + ret(getTheErrorDialog__Gv)), a1=sp-288, a2=-0x1, a3=-0x1, a4=-0x1, a5=0x0, a6=0x0, a7=0x0.
  The `jalr` at 0x10010014 calls sprintf with a0=sp-288, a1=0x1002c060, a2=a0 at entry (arg0), a3=0x4, a5=0x1.
  The `jalr` at 0x10010020 calls getTheErrorDialog__Gv with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10010050 calls (unknown callee) with a0=([[ret(getTheErrorDialog__Gv)+8]+264] + ret(getTheErrorDialog__Gv)), a1=sp-288, a2=-0x1, a3=-0x1, a4=-0x1, a5=0x0, a6=0x0, a7=0x0.
  The `jalr` at 0x10010070 calls sprintf with a0=sp-288, a1=0x1002c038, a2=a0 at entry (arg0), a3=0x4, a5=0x1.
  The `jalr` at 0x1001007c calls getTheErrorDialog__Gv with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x100100ac calls (unknown callee) with a0=([[ret(getTheErrorDialog__Gv)+8]+264] + ret(getTheErrorDialog__Gv)), a1=sp-288, a2=-0x1, a3=-0x1, a4=-0x1, a5=0x0, a6=0x0, a7=0x0.
  The `jalr` at 0x100100d4 calls sprintf with a0=sp-288, a1=0x1002c0b0, a2=[sym(work_order)+1804], a3=0x4, a5=0x1.
  The `jalr` at 0x100100e0 calls getTheErrorDialog__Gv with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10010110 calls (unknown callee) with a0=([[ret(getTheErrorDialog__Gv)+8]+264] + ret(getTheErrorDialog__Gv)), a1=sp-288, a2=-0x1, a3=-0x1, a4=-0x1, a5=0x0, a6=0x0, a7=0x0.
  The `beq` branch at 0x1000ff04 targets 0x1000ff7c, is taken when v0(=[sym(work_order)+1804]) == a5(=0x1), and falls through when v0(=[sym(work_order)+1804]) != a5(=0x1).
  The `beq` branch at 0x1000ff10 targets 0x1000ff94, is taken when v0(=[sym(work_order)+1804]) == v1(=0x2), and falls through when v0(=[sym(work_order)+1804]) != v1(=0x2).
  The `beq` branch at 0x1000ff1c targets 0x1000ffa8, is taken when a1(?) == a5(=0x1), and falls through when a1(?) != a5(=0x1).
  The `beq` branch at 0x1000ff28 targets 0x10010008, is taken when a1(?) == a0(=0x3), and falls through when a1(?) != a0(=0x3).
  The `beq` branch at 0x1000ff34 targets 0x10010064, is taken when a1(?) == a2(=0x2), and falls through when a1(?) != a2(=0x2).
  The `beq` branch at 0x1000ff3c targets 0x100100c0, is taken when a1(?) == a3(=0x4), and falls through when a1(?) != a3(=0x4).
  The `beq` branch at 0x1000ff44 targets 0x1000ff6c, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x1000ff8c targets 0x1000ff1c and is always taken.
  The `beq` branch at 0x1000ffa0 targets 0x1000ff1c and is always taken.
  The `beq` branch at 0x10010000 targets 0x1000ff60 and is always taken.
  The `beq` branch at 0x1001005c targets 0x1000ff60 and is always taken.
  The `beq` branch at 0x100100b8 targets 0x1000ff60 and is always taken.
  The `beq` branch at 0x1001011c targets 0x1000ff60 and is always taken.
  The return at 0x1000ff58 has v0 = 0x0.
  The return at 0x1000ff64 has v0 = 0x0.
  The return at 0x1000ff74 has v0 = 0x1.

- `vfcGetNextTokenValuePair` in `usr/gfx/sgcombine` at 0x1001e4d0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1001e4d0-0x1001e834 (868 bytes).
  It occupies 868 bytes.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0x1001e4d4, `sw` at 0x1001e680.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x0, including `sw` at 0x1001e4ec, `sw` at 0x1001e524.
  9 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x0, including `lw` at 0x1001e508, `lw` at 0x1001e528, `lw` at 0x1001e5c0.
  8 such `lbu` accesses load 1 byte from [a2] +0x0, including `lbu` at 0x1001e50c, `lbu` at 0x1001e52c, `lbu` at 0x1001e5c4.
  4 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x0, including `sw` at 0x1001e554, `sw` at 0x1001e5b8, `sw` at 0x1001e668.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x1001e558, `lbu` at 0x1001e6a8.
  2 such `sb` accesses store 1 byte to ?, including `sb` at 0x1001e5bc, `sb` at 0x1001e66c.
  The `lw` at 0x1001e5d0 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `jal` at 0x1001e628 calls (unnamed) [0x1001e3e0] with a0=a2 at entry (arg2), a1=0x0, a2=0x0, a3=0x0, a7=[0x10033798].
  The `jalr` at 0x1001e6dc calls fprintf with a0=sym(__iob)+32, a1=0x1002ece0, a2=0x2d, a3=?, a5=[a2], a7=[0x10033798].
  The `jal` at 0x1001e71c calls (unnamed) [0x1001e3e0] with a0=a2 at entry (arg2), a1=0x0, a2=0x0, a3=0x0, a5=[a2], a6=0x2.
  The `jal` at 0x1001e74c calls (unnamed) [0x1001e3e0] with a0=a2 at entry (arg2), a1=0x0, a2=0x0, a3=0x0.
  The `jal` at 0x1001e794 calls (unnamed) [0x1001e3e0] with a0=a2 at entry (arg2), a1=0x0, a2=0x0, a3=0x0, a6=a1 at entry (arg1).
  The `jal` at 0x1001e7d8 calls (unnamed) [0x1001e3e0] with a0=a2 at entry (arg2), a1=0x0, a2=0x0, a3=0x0, a5=[a2].
  The `jalr` at 0x1001e7fc calls fprintf with a0=sym(__iob)+32, a1=0x1002ece0, a2=?, a3=?.
  The `jalr` at 0x1001e824 calls fprintf with a0=sym(__iob)+32, a1=0x1002ece0, a2=?, a3=?.
  The `beq` branch at 0x1001e500 targets 0x1001e6fc, is taken when at(=[0x10033798]) == a6(=0x2), and falls through when at(=[0x10033798]) != a6(=0x2).
  The `beq` branch at 0x1001e510 targets 0x1001e704, is taken when v0(=[[a2]]:1) == 0, and falls through when v0(=[[a2]]:1) != 0.
  The `beq` branch at 0x1001e51c targets 0x1001e5ec, is taken when v0(=[[a2]]:1) == a2(=0x2d), and falls through when v0(=[[a2]]:1) != a2(=0x2d).
  The `beq` branch at 0x1001e530 targets 0x1001e618, is taken when v0(=[[a2]]:1) == 0, and falls through when v0(=[[a2]]:1) != 0.
  The `beq` branch at 0x1001e53c targets 0x1001e574, is taken when a2(=0x3d) == v0(=[[a2]]:1), and falls through when a2(=0x3d) != v0(=[[a2]]:1).
  The `beq` branch at 0x1001e544 targets 0x1001e574, is taken when a0(=0x2c) == v0(=[[a2]]:1), and falls through when a0(=0x2c) != v0(=[[a2]]:1).
  The `beq` branch at 0x1001e55c targets 0x1001e618, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x1001e564 targets 0x1001e574, is taken when a2(=0x3d) == v0(?), and falls through when a2(=0x3d) != v0(?).
  The `bne` branch at 0x1001e56c targets 0x1001e550, is taken when a0(=0x2c) != v0(?), and falls through when a0(=0x2c) == v0(?).
  The `beq` branch at 0x1001e574 targets 0x1001e614, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x1001e57c targets 0x1001e664, is taken when a2(=0x3d) == v0(?), and falls through when a2(=0x3d) != v0(?).
  The `beq` branch at 0x1001e584 targets 0x1001e5b4, is taken when a0(=0x2c) == v0(?), and falls through when a0(=0x2c) != v0(?).
  The `beq` branch at 0x1001e5c8 targets 0x1001e780, is taken when a3(=[[a2]]:1) == 0, and falls through when a3(=[[a2]]:1) != 0.
  The `bne` branch at 0x1001e5dc targets 0x1001e5fc, is taken when a6(=[a1]) != 0, and falls through when a6(=[a1]) == 0.
  The `beq` branch at 0x1001e5e4 targets 0x1001e5a4 and is always taken.
  The `bne` branch at 0x1001e5ec targets 0x1001e6cc, is taken when a7(=[0x10033798]) != 0, and falls through when a7(=[0x10033798]) == 0.
  The `beq` branch at 0x1001e5f4 targets 0x1001e5a4 and is always taken.
  The `beq` branch at 0x1001e630 targets 0x1001e7b8, is taken when v0(=ret(0x1001e3e0)) == 0, and falls through when v0(=ret(0x1001e3e0)) != 0.
  The `beq` branch at 0x1001e644 targets 0x1001e668, is taken when a2(=0x3d) == v0(=[[a2]]:1), and falls through when a2(=0x3d) != v0(=[[a2]]:1).
  The `beq` branch at 0x1001e650 targets 0x1001e57c, is taken when v0(=[[a2]]:1) == ra(=0x2c), and falls through when v0(=[[a2]]:1) != ra(=0x2c).
  The `beq` branch at 0x1001e65c targets 0x1001e5a0 and is always taken.
  The `beq` branch at 0x1001e678 targets 0x1001e7c4, is taken when v0(=[[a2]]:1) == 0, and falls through when v0(=[[a2]]:1) != 0.
  The `beq` branch at 0x1001e68c targets 0x1001e73c, is taken when v0(=[[a2]]:1) == 0, and falls through when v0(=[[a2]]:1) != 0.
  The `beq` branch at 0x1001e698 targets 0x1001e6bc, is taken when a0(=0x2c) == v0(=[[a2]]:1), and falls through when a0(=0x2c) != v0(=[[a2]]:1).
  The `beq` branch at 0x1001e6ac targets 0x1001e73c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x1001e6b4 targets 0x1001e6a0, is taken when a0(=0x2c) != v0(?), and falls through when a0(=0x2c) == v0(?).
  The `bne` branch at 0x1001e6bc targets 0x1001e584, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x1001e6c4 targets 0x1001e738 and is always taken.
  The `beq` branch at 0x1001e6fc targets 0x1001e5a0 and is always taken.
  The `beq` branch at 0x1001e724 targets 0x1001e7a4, is taken when v0(=ret(0x1001e3e0)) == 0, and falls through when v0(=ret(0x1001e3e0)) != 0.
  The `beq` branch at 0x1001e730 targets 0x1001e518 and is always taken.
  The `beq` branch at 0x1001e754 targets 0x1001e80c, is taken when v0(=ret(0x1001e3e0)) == 0, and falls through when v0(=ret(0x1001e3e0)) != 0.
  The `beq` branch at 0x1001e768 targets 0x1001e5b8, is taken when ra(=0x2c) == at(=[[a2]]:1), and falls through when ra(=0x2c) != at(=[[a2]]:1).
  The `beq` branch at 0x1001e778 targets 0x1001e5a0 and is always taken.
  The `beq` branch at 0x1001e79c targets 0x1001e5d0 and is always taken.
  The `bne` branch at 0x1001e7a8 targets 0x1001e7f0, is taken when ra(=[0x10033798]) != 0, and falls through when ra(=[0x10033798]) == 0.
  The `beq` branch at 0x1001e7b0 targets 0x1001e5a0 and is always taken.
  The `beq` branch at 0x1001e7bc targets 0x1001e5a0 and is always taken.
  The `beq` branch at 0x1001e7e0 targets 0x1001e818, is taken when v0(=ret(0x1001e3e0)) == 0, and falls through when v0(=ret(0x1001e3e0)) != 0.
  The `beq` branch at 0x1001e7e8 targets 0x1001e67c and is always taken.
  The `beq` branch at 0x1001e804 targets 0x1001e5a0 and is always taken.
  The `beq` branch at 0x1001e810 targets 0x1001e5a0 and is always taken.
  The `beq` branch at 0x1001e82c targets 0x1001e5a0 and is always taken.
  The return at 0x1001e598 has v0 = 0x1.
  The return at 0x1001e5ac has v0 = one of 0x0, 0x1, 0x2, 0x3.
  The return at 0x1001e60c has v0 = 0x3.
  The return at 0x1001e6f4 has v0 = 0x0.

- `vfcGetOption` in `usr/gfx/sgcombine` at 0x1001e900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1001e900-0x1001eae0 (480 bytes).
  It occupies 480 bytes.
  The `lw` at 0x1001e938 loads 4 bytes from abs 0x10031b60.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1001e95c, `lw` at 0x1001e968, `lw` at 0x1001e98c.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x1001e984, `lw` at 0x1001e998, `lw` at 0x1001e9b8.
  The `lw` at 0x1001e9fc loads 4 bytes from abs 0x10031b98.
  The `sw` at 0x1001eab4 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `jalr` at 0x1001e93c calls strcmp with a0=[0x10031b60], a1=0x10033568, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1001e96c calls strcmp with a0=?, a1=0x10033568, a2=?, a3=?.
  The `jalr` at 0x1001e980 calls strlen with a0=[a0], a1=?, a2=?, a3=?.
  The `jalr` at 0x1001e994 calls strncmp with a0=[a0], a1=?, a2=ret(strlen), a3=?.
  The `jalr` at 0x1001e9bc calls fprintf with a0=sym(__iob)+32, a1=0x1002ed00, a2=[a0], a3=?.
  The `jalr` at 0x1001e9f8 calls strcmp with a0=[0x10031b98], a1=0x10033568, a2=?, a3=?.
  The `jalr` at 0x1001ea1c calls strcmp with a0=?, a1=0x10033568, a2=?, a3=?.
  The `jalr` at 0x1001ea2c calls strlen with a0=[a0], a1=?, a2=?, a3=?.
  The `jalr` at 0x1001ea40 calls strncmp with a0=[a0], a1=?, a2=ret(strlen), a3=?.
  The `jalr` at 0x1001ea6c calls fprintf with a0=sym(__iob)+32, a1=0x1002ed00, a2=[a0], a3=?.
  The `jalr` at 0x1001eaa4 calls strlen with a0=[a0], a1=?, a2=?, a3=?.
  The `beq` branch at 0x1001e94c targets 0x1001e9ec, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `beq` branch at 0x1001e954 targets 0x1001e97c and is always taken.
  The `beq` branch at 0x1001e974 targets 0x1001e9f4, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0x1001e99c targets 0x1001e964, is taken when v0(=ret(strncmp)) != 0, and falls through when v0(=ret(strncmp)) == 0.
  The `beq` branch at 0x1001e9a4 targets 0x1001e95c, is taken when s2(?) == s4(=0x7), and falls through when s2(?) != s4(=0x7).
  The `beq` branch at 0x1001ea00 targets 0x1001ea9c, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `beq` branch at 0x1001ea08 targets 0x1001ea2c and is always taken.
  The `beq` branch at 0x1001ea24 targets 0x1001ea9c, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0x1001ea48 targets 0x1001ea14, is taken when v0(=ret(strncmp)) != 0, and falls through when v0(=ret(strncmp)) == 0.
  The `beq` branch at 0x1001ea50 targets 0x1001ea10, is taken when s2(?) == s4(=0x7), and falls through when s2(?) != s4(=0x7).
  The `beq` branch at 0x1001ea9c targets 0x1001eab8, is taken when s2(?) == s4(=0x7), and falls through when s2(?) != s4(=0x7).
  The return at 0x1001e9e4 has v0 = 0x8.
  The return at 0x1001ea94 has v0 = 0x8.
  The return at 0x1001ead8 has v0 = ?.

- `vfcParseCommand` in `usr/gfx/sgcombine` at 0x1001eae0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1001eae0-0x1001f080 (1440 bytes).
  It occupies 1440 bytes.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x0, including `lw` at 0x1001eb0c, `lw` at 0x1001eb48.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x0, including `lw` at 0x1001eb2c, `lw` at 0x1001eb4c.
  The `lw` at 0x1001eb38 loads 4 bytes from [a2] +0x0.
  The `sw` at 0x1001eb40 stores 4 bytes to ret(malloc) +0x0.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x1001ebcc, `sw` at 0x1001edac.
  3 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x1001ebf0, `lbu` at 0x1001ec10, `lbu` at 0x1001ec60.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x208, including `lw` at 0x1001ecc0, `lw` at 0x1001ee08, `lw` at 0x1001eea8.
  The `sw` at 0x1001ecd8 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x1001ecdc stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x104, including `lw` at 0x1001ece0, `lw` at 0x1001ed24.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x208, including `sw` at 0x1001edf4, `sw` at 0x1001ee94.
  2 such `lw` accesses load 4 bytes from [a0+520] +0x84, including `lw` at 0x1001ee0c, `lw` at 0x1001eeac.
  3 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x30c, including `sw` at 0x1001ee14, `sw` at 0x1001eeb4, `sw` at 0x1001ef04.
  3 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x104, including `sw` at 0x1001eef0, `sw` at 0x1001eefc, `sw` at 0x1001ef28.
  The `jalr` at 0x1001eb18 calls malloc with a0=([a1] << 0x2), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1001eb50 calls (unnamed) [0x1001e3e0] with a0=0x0, a1=[a2], a2=[a1], a3=0x0.
  The `jal` at 0x1001eb68 calls (unnamed) [0x1001e3e0] with a0=sp-1168, a1=0x0, a2=0x0, a3=0x0.
  The `jal` at 0x1001ebe0 calls (unnamed) [0x1001e3e0] with a0=sp-1168, a1=0x0, a2=0x0, a3=0x0.
  The `jal` at 0x1001ec24 calls vfcGetOption [0x1001e900] with a0=sp-1168, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001ec80 calls fprintf with a0=sym(__iob)+32, a1=0x1002ed18, a2=?, a3=?.
  The `jalr` at 0x1001ed48 calls fprintf with a0=sym(__iob)+32, a1=0x1002ed88, a2=?, a3=[a0+260].
  The `jalr` at 0x1001ed60 calls fprintf with a0=sym(__iob)+32, a1=0x1002edd0, a2=?, a3=[a0+260].
  The `jalr` at 0x1001edc0 calls putenv with a0=0x1002ee98, a1=?, a2=?, a3=?.
  The `jal` at 0x1001edd4 calls (unnamed) [0x1001e840] with a0=sp-1160, a1=sp-1168, a2=?, a3=?.
  The `jalr` at 0x1001ede8 calls XOpenDisplay with a0=sp-1160, a1=0x10030000, a2=?, a3=?.
  The `jalr` at 0x1001ee00 calls strcpy with a0=?, a1=sp-1160, a2=?, a3=?.
  The `jal` at 0x1001ee20 calls (unnamed) [0x1001e840] with a0=sp-1160, a1=sp-1168, a2=?, a3=?.
  The `jalr` at 0x1001ee38 calls fopen with a0=sp-1160, a1=0x1003356c, a2=?, a3=?.
  The `jal` at 0x1001ee54 calls (unnamed) [0x1001e3e0] with a0=0x0, a1=0x0, a2=0x0, a3=ret(fopen).
  The `jalr` at 0x1001ee64 calls getenv with a0=0x10033580, a1=?, a2=[a0+520], a3=?.
  The `jalr` at 0x1001ee78 calls strlen with a0=ret(getenv), a1=?, a2=?, a3=?.
  The `jalr` at 0x1001ee88 calls XOpenDisplay with a0=ret(getenv), a1=?, a2=?, a3=?.
  The `jalr` at 0x1001eea0 calls strcpy with a0=a0+524, a1=ret(getenv), a2=?, a3=?.
  The `jal` at 0x1001eec8 calls (unnamed) [0x1001e840] with a0=sp-1160, a1=sp-1168, a2=?, a3=[a0+260].
  The `jalr` at 0x1001eedc calls strcmp with a0=sp-1160, a1=0x10033570, a2=?, a3=?.
  The `jalr` at 0x1001ef10 calls strcmp with a0=sp-1160, a1=0x10033578, a2=?, a3=?.
  The `jal` at 0x1001ef30 calls (unnamed) [0x1001e840] with a0=?, a1=sp-1168, a2=?, a3=?.
  The `jalr` at 0x1001ef4c calls fprintf with a0=sym(__iob)+32, a1=0x1002ee38, a2=?, a3=?.
  The `jalr` at 0x1001ef78 calls fprintf with a0=sym(__iob)+32, a1=0x1002ee70, a2=sp-1160, a3=?.
  The `jalr` at 0x1001ef9c calls fprintf with a0=sym(__iob)+32, a1=0x1002eed0, a2=sp-1160, a3=?.
  The `jalr` at 0x1001efc4 calls fprintf with a0=sym(__iob)+32, a1=0x1002ed18, a2=?, a3=?.
  The `jalr` at 0x1001efd8 calls getenv with a0=0x10033580, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001eff4 calls fprintf with a0=sym(__iob)+32, a1=0x1002eed0, a2=ret(getenv), a3=?.
  The `jalr` at 0x1001f018 calls fprintf with a0=sym(__iob)+32, a1=0x1002ed68, a2=sp-1160, a3=?.
  The `jalr` at 0x1001f034 calls fprintf with a0=sym(__iob)+32, a1=0x1002eeb0, a2=?, a3=?.
  The `jalr` at 0x1001f050 calls fprintf with a0=sym(__iob)+32, a1=0x1002ed40, a2=?, a3=?.
  The `jalr` at 0x1001f070 calls fprintf with a0=sym(__iob)+32, a1=0x1002ee08, a2=?, a3=?.
  The `beq` branch at 0x1001eb84 targets 0x1001ecbc, is taken when v0(=ret(0x1001e3e0)) == 0, and falls through when v0(=ret(0x1001e3e0)) != 0.
  The `beq` branch at 0x1001ebb4 targets 0x1001ebec and is always taken.
  The `bne` branch at 0x1001ebbc targets 0x1001ec74, is taken when s3(?) != s7(=0x5), and falls through when s3(?) == s7(=0x5).
  The `beq` branch at 0x1001ebe8 targets 0x1001ecc0, is taken when v0(=ret(0x1001e3e0)) == 0, and falls through when v0(=ret(0x1001e3e0)) != 0.
  The `beq` branch at 0x1001ebf4 targets 0x1001ebd4, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x1001ebfc targets 0x1001ec0c, is taken when s4(=0x2d) == a3(?), and falls through when s4(=0x2d) != a3(?).
  The `bne` branch at 0x1001ec04 targets 0x1001ebbc, is taken when s6(=0x2b) != a3(?), and falls through when s6(=0x2b) == a3(?).
  The `beq` branch at 0x1001ec14 targets 0x1001edb0, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x1001ec2c targets 0x1001edb8, is taken when v0(=ret(vfcGetOption)) == 0, and falls through when v0(=ret(vfcGetOption)) != 0.
  The `beq` branch at 0x1001ec38 targets 0x1001ed24, is taken when v0(=ret(vfcGetOption)) == ra(=0x6), and falls through when v0(=ret(vfcGetOption)) != ra(=0x6).
  The `beq` branch at 0x1001ec40 targets 0x1001ee18, is taken when v0(=ret(vfcGetOption)) == at(=0x2), and falls through when v0(=ret(vfcGetOption)) != at(=0x2).
  The `beq` branch at 0x1001ec48 targets 0x1001ed9c, is taken when v0(=ret(vfcGetOption)) == s7(=0x5), and falls through when v0(=ret(vfcGetOption)) != s7(=0x5).
  The `beq` branch at 0x1001ec50 targets 0x1001efac, is taken when v0(=ret(vfcGetOption)) == v1(=0x7), and falls through when v0(=ret(vfcGetOption)) != v1(=0x7).
  The `beq` branch at 0x1001ec58 targets 0x1001ef5c, is taken when v0(=ret(vfcGetOption)) == a0(=0x8), and falls through when v0(=ret(vfcGetOption)) != a0(=0x8).
  The `bne` branch at 0x1001ec64 targets 0x1001ebfc, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x1001ec6c targets 0x1001ebd4 and is always taken.
  The `beq` branch at 0x1001ecc4 targets 0x1001ee64, is taken when a2(=[a0+520]) == 0, and falls through when a2(=[a0+520]) != 0.
  The `beq` branch at 0x1001ece4 targets 0x1001eef4, is taken when a3(=[a0+260]) == 0, and falls through when a3(=[a0+260]) != 0.
  The `beq` branch at 0x1001ecec targets 0x1001eeb8, is taken when a3(?) == a0(=0x4), and falls through when a3(?) != a0(=0x4).
  The `beq` branch at 0x1001ed28 targets 0x1001eec0, is taken when a3(=[a0+260]) == 0, and falls through when a3(=[a0+260]) != 0.
  The `bne` branch at 0x1001ed38 targets 0x1001ed58, is taken when a3(=[a0+260]) != a1(=0x4), and falls through when a3(=[a0+260]) == a1(=0x4).
  The `beq` branch at 0x1001ed50 targets 0x1001ed68 and is always taken.
  The `beq` branch at 0x1001eda8 targets 0x1001ec5c and is always taken.
  The `beq` branch at 0x1001edb0 targets 0x1001ec8c and is always taken.
  The `beq` branch at 0x1001eddc targets 0x1001f028, is taken when v0(=ret(0x1001e840)) == 0, and falls through when v0(=ret(0x1001e840)) != 0.
  The `beq` branch at 0x1001edf0 targets 0x1001ef88, is taken when v0(=ret(XOpenDisplay)) == 0, and falls through when v0(=ret(XOpenDisplay)) != 0.
  The `beq` branch at 0x1001ee10 targets 0x1001ec5c and is always taken.
  The `beq` branch at 0x1001ee28 targets 0x1001f044, is taken when v0(=ret(0x1001e840)) == 0, and falls through when v0(=ret(0x1001e840)) != 0.
  The `beq` branch at 0x1001ee40 targets 0x1001f004, is taken when v0(=ret(fopen)) == 0, and falls through when v0(=ret(fopen)) != 0.
  The `beq` branch at 0x1001ee5c targets 0x1001ec60 and is always taken.
  The `beq` branch at 0x1001ee6c targets 0x1001ef00, is taken when v0(=ret(getenv)) == 0, and falls through when v0(=ret(getenv)) != 0.
  The `beq` branch at 0x1001ee80 targets 0x1001ef00, is taken when v0(=ret(strlen)) == 0, and falls through when v0(=ret(strlen)) != 0.
  The `beq` branch at 0x1001ee90 targets 0x1001efd4, is taken when v0(=ret(XOpenDisplay)) == 0, and falls through when v0(=ret(XOpenDisplay)) != 0.
  The `beq` branch at 0x1001eeb0 targets 0x1001eccc and is always taken.
  The `beq` branch at 0x1001eeb8 targets 0x1001ec8c and is always taken.
  The `beq` branch at 0x1001eed0 targets 0x1001f060, is taken when v0(=ret(0x1001e840)) == 0, and falls through when v0(=ret(0x1001e840)) != 0.
  The `bne` branch at 0x1001eee4 targets 0x1001ef08, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `beq` branch at 0x1001eeec targets 0x1001ec5c and is always taken.
  The `beq` branch at 0x1001eef8 targets 0x1001ecec and is always taken.
  The `beq` branch at 0x1001ef00 targets 0x1001eccc and is always taken.
  The `bne` branch at 0x1001ef18 targets 0x1001ef64, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `bne` branch at 0x1001ef38 targets 0x1001ec5c, is taken when v0(=ret(0x1001e840)) != 0, and falls through when v0(=ret(0x1001e840)) == 0.
  The `beq` branch at 0x1001ef54 targets 0x1001ec8c and is always taken.
  The `beq` branch at 0x1001ef5c targets 0x1001ec8c and is always taken.
  The `beq` branch at 0x1001ef80 targets 0x1001ec8c and is always taken.
  The `beq` branch at 0x1001efa4 targets 0x1001ec8c and is always taken.
  The `beq` branch at 0x1001efcc targets 0x1001ec8c and is always taken.
  The `beq` branch at 0x1001effc targets 0x1001ec8c and is always taken.
  The `beq` branch at 0x1001f020 targets 0x1001ec8c and is always taken.
  The `beq` branch at 0x1001f03c targets 0x1001ec8c and is always taken.
  The `beq` branch at 0x1001f058 targets 0x1001ec8c and is always taken.
  The `beq` branch at 0x1001f078 targets 0x1001ec8c and is always taken.
  The return at 0x1001ecb4 has v0 = one of 0x0, 0x5.
  The return at 0x1001ed1c has v0 = 0x4.
  The return at 0x1001ed94 has v0 = 0x0.

- `usage` in `usr/gfx/sgcombine` at 0x1001f080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1001f080-0x1001f0bc (60 bytes).
  It occupies 60 bytes.
  The `jalr` at 0x1001f0a4 calls fprintf with a0=sym(__iob)+32, a1=0x10033588, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x1001f0b4 has v0 = ret(fprintf).

- `vfcInitCmpCombination` in `usr/gfx/sgcombine` at 0x1001f0c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1001f0c0-0x1001f104 (68 bytes).
  It occupies 68 bytes.
  The `sw` at 0x1001f0c4 stores 4 bytes to a0 (arg0 at entry) +0x308.
  The `sw` at 0x1001f0cc stores 4 bytes to a0 (arg0 at entry) +0x300.
  The `sw` at 0x1001f0d0 stores 4 bytes to a0 (arg0 at entry) +0x370.
  The `sw` at 0x1001f0d4 stores 4 bytes to a0 (arg0 at entry) +0x36c.
  The `sw` at 0x1001f0d8 stores 4 bytes to a0 (arg0 at entry) +0x368.
  The `sw` at 0x1001f0dc stores 4 bytes to a0 (arg0 at entry) +0x364.
  The `sw` at 0x1001f0e0 stores 4 bytes to a0 (arg0 at entry) +0x360.
  The `sw` at 0x1001f0e4 stores 4 bytes to a0 (arg0 at entry) +0x35c.
  The `sw` at 0x1001f0ec stores 4 bytes to a0 (arg0 at entry) +0x358.
  The `sw` at 0x1001f0f4 stores 4 bytes to a0 (arg0 at entry) +0x354.
  The `sw` at 0x1001f100 stores 4 bytes to a0 (arg0 at entry) +0x350.
  The return at 0x1001f0fc has v0 = 0x500.

- `vfcDoCommandLine` in `usr/gfx/sgcombine` at 0x1001f110 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1001f110-0x1001f1f4 (228 bytes).
  It occupies 228 bytes.
  The `lw` at 0x1001f160 loads 4 bytes from a3 (arg3 at entry) +0x104.
  The `lw` at 0x1001f188 loads 4 bytes from a3 (arg3 at entry) +0x30c.
  The `lw` at 0x1001f194 loads 4 bytes from a3 (arg3 at entry) +0x208.
  The `lw` at 0x1001f1dc loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x1001f1e4 loads 4 bytes from [a1] +0x0.
  The `jal` at 0x1001f148 calls vfcParseCommand [0x1001eae0] with a0=a3 at entry (arg3), a1=a0 at entry (arg0), a2=a1 at entry (arg1), a3=a3 at entry (arg3).
  The `jal` at 0x1001f158 calls vfcInitCmpCombination [0x1001f0c0] with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `jalr` at 0x1001f190 calls XSGIvcQueryVideoScreenInfo with a0=[a3+520], a1=[a3+780], a2=sp-96, a3=?.
  The `jalr` at 0x1001f1a4 calls strncmp with a0=sp-84, a1=0x10033590, a2=0x7, a3=?.
  The `jalr` at 0x1001f1c0 calls fprintf with a0=sym(__iob)+32, a1=0x1002eef8, a2=?, a3=?.
  The `jalr` at 0x1001f1cc calls exit with a0=0x1, a1=?, a2=?, a3=?.
  The `jal` at 0x1001f1e0 calls usage [0x1001f080] with a0=[[a1]], a1=?, a2=?, a3=?.
  The `jalr` at 0x1001f1ec calls exit with a0=0x1, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1001f150 targets 0x1001f1d4, is taken when v0(=ret(vfcParseCommand)) == 0, and falls through when v0(=ret(vfcParseCommand)) != 0.
  The `beq` branch at 0x1001f168 targets 0x1001f184, is taken when v0(=[a3+260]) == v1(=0x1), and falls through when v0(=[a3+260]) != v1(=0x1).
  The `beq` branch at 0x1001f1ac targets 0x1001f16c, is taken when v0(=ret(strncmp)) == 0, and falls through when v0(=ret(strncmp)) != 0.
  The return at 0x1001f17c has v0 = one of [a3+260], ?.

- `vfcQueryXSGIvc` in `usr/gfx/sgcombine` at 0x1001f200 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1001f200-0x1001f27c (124 bytes).
  It occupies 124 bytes.
  The `jalr` at 0x1001f244 calls XSGIvcQueryVersion with a0=a0 at entry (arg0), a1=sp-32, a2=sp-28, a3=a3 at entry (arg3).
  The `beq` branch at 0x1001f218 targets 0x1001f230, is taken when at(=[0x100337a0]) == 0, and falls through when at(=[0x100337a0]) != 0.
  The `beq` branch at 0x1001f230 targets 0x1001f268, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x1001f24c targets 0x1001f268, is taken when v0(=ret(XSGIvcQueryVersion)) == 0, and falls through when v0(=ret(XSGIvcQueryVersion)) != 0.
  The return at 0x1001f228 has v0 = [0x1003379c].
  The return at 0x1001f260 has v0 = 0x1.
  The return at 0x1001f274 has v0 = 0x0.

- `vfcQueryGLXHyper` in `usr/gfx/sgcombine` at 0x1001f280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1001f280-0x1001f308 (136 bytes).
  It occupies 136 bytes.
  The `lw` at 0x1001f2b0 loads 4 bytes from a0 (arg0 at entry) +0x84.
  The `jalr` at 0x1001f2bc calls glXQueryExtensionsString with a0=a0 at entry (arg0), a1=[a0+132], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1001f2d0 calls strstr with a0=ret(glXQueryExtensionsString), a1=0x1002efd8, a2=?, a3=?.
  The `beq` branch at 0x1001f298 targets 0x1001f2ac, is taken when at(=[0x100337a8]) == 0, and falls through when at(=[0x100337a8]) != 0.
  The `bne` branch at 0x1001f2d8 targets 0x1001f2f4, is taken when v0(=ret(strstr)) != 0, and falls through when v0(=ret(strstr)) == 0.
  The return at 0x1001f2a4 has v0 = [0x100337a4].
  The return at 0x1001f2ec has v0 = 0x0.
  The return at 0x1001f300 has v0 = 0x1.

- `vfcQueryOdysseyTarget` in `usr/gfx/sgcombine` at 0x1001f310 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1001f310-0x1001f58c (636 bytes).
  It occupies 636 bytes.
  The `lw` at 0x1001f320 loads 4 bytes from a0 (arg0 at entry) +0x208.
  The `lbu` at 0x1001f3e0 loads 1 byte from a0 (arg0 at entry) +0x20c.
  4 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x1001f3f8, `lbu` at 0x1001f400, `lbu` at 0x1001f414.
  4 such `sb` accesses store 1 byte to ?, including `sb` at 0x1001f3fc, `sb` at 0x1001f410, `sb` at 0x1001f424.
  4 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0x1001f43c, `sw` at 0x1001f4cc, `sw` at 0x1001f510.
  The `lw` at 0x1001f468 loads 4 bytes from a1 (arg1 at entry) +0x4.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1001f470, `lw` at 0x1001f558.
  The `lw` at 0x1001f508 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `sw` at 0x1001f55c stores 4 bytes to a1 (arg1 at entry) +0x4.
  The `jalr` at 0x1001f344 calls glXQueryHyperpipeNetworkSGIX with a0=[a0+520], a1=sp-336, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1001f374 calls strchr with a0=a0+524, a1=0x3a, a2=?, a3=?.
  The `jalr` at 0x1001f388 calls strchr with a0=ret(strchr), a1=0x2e, a2=?, a3=?.
  The `jalr` at 0x1001f3b8 calls strcmp with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001f500 calls sprintf with a0=?, a1=0x10033610, a2=sp-328, a3=?.
  The `jalr` at 0x1001f574 calls sprintf with a0=sp-328, a1=0x10033608, a2=ret(strchr), a3=?.
  The `beq` branch at 0x1001f354 targets 0x1001f530, is taken when v0(=ret(glXQueryHyperpipeNetworkSGIX)) == 0, and falls through when v0(=ret(glXQueryHyperpipeNetworkSGIX)) != 0.
  The `beq` branch at 0x1001f360 targets 0x1001f530, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x1001f390 targets 0x1001f568, is taken when v0(=ret(strchr)) == 0, and falls through when v0(=ret(strchr)) != 0.
  The `blez` branch at 0x1001f398 targets 0x1001f4b4, is taken when a1(?) <= 0 (signed), and falls through when a1(?) > 0 (signed).
  The `beq` branch at 0x1001f3c0 targets 0x1001f558, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0x1001f3d0 targets 0x1001f3b0, is taken when s1(?) < a1(?) (signed), and falls through when s1(?) >= a1(?) (signed).
  The `beq` branch at 0x1001f3d8 targets 0x1001f4c0, is taken when s1(?) == a1(?), and falls through when s1(?) != a1(?).
  The `beq` branch at 0x1001f3ec targets 0x1001f584, is taken when a2(=0x3a) == a1(=[a0+524]:1), and falls through when a2(=0x3a) != a1(=[a0+524]:1).
  The `beq` branch at 0x1001f408 targets 0x1001f438, is taken when a2(=0x3a) == a1(?), and falls through when a2(=0x3a) != a1(?).
  The `beq` branch at 0x1001f41c targets 0x1001f438, is taken when a2(=0x3a) == a1(?), and falls through when a2(=0x3a) != a1(?).
  The `bne` branch at 0x1001f430 targets 0x1001f3fc, is taken when a2(=0x3a) != a1(?), and falls through when a2(=0x3a) == a1(?).
  The `blez` branch at 0x1001f444 targets 0x1001f48c, is taken when a1(?) <= 0 (signed), and falls through when a1(?) > 0 (signed).
  The `beq` branch at 0x1001f474 targets 0x1001f4e8, is taken when a3(?) == a0(=[a1+4]), and falls through when a3(?) != a0(=[a1+4]).
  The `bne` branch at 0x1001f484 targets 0x1001f470, is taken when s0(?) < a2(?) (unsigned), and falls through when s0(?) >= a2(?) (unsigned).
  The `bne` branch at 0x1001f4b4 targets 0x1001f3e0, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bne` branch at 0x1001f520 targets 0x1001f454, is taken when s1(?) < a1(?) (signed), and falls through when s1(?) >= a1(?) (signed).
  The `beq` branch at 0x1001f528 targets 0x1001f490 and is always taken.
  The `beq` branch at 0x1001f560 targets 0x1001f3d8 and is always taken.
  The `beq` branch at 0x1001f57c targets 0x1001f394 and is always taken.
  The `beq` branch at 0x1001f584 targets 0x1001f438 and is always taken.
  The return at 0x1001f4ac has v0 = one of ?, [a1]+1.
  The return at 0x1001f4e0 has v0 = one of ret(strcmp), ?.
  The return at 0x1001f550 has v0 = one of ret(glXQueryHyperpipeNetworkSGIX), ?.

- `vfmtIsCmpCombinationValidForTarget` in `usr/gfx/sgcombine` at 0x1001f590 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1001f590-0x1001f8b8 (808 bytes).
  It occupies 808 bytes.
  The `lbu` at 0x1001f5c0 loads 1 byte from a0 (arg0 at entry) +0x0.
  The `lbu` at 0x1001f5fc loads 1 byte from a0 (arg0 at entry) +0xff.
  The `lbu` at 0x1001f638 loads 1 byte from a0 (arg0 at entry) +0x1fe.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x55c, including `lw` at 0x1001f670, `lw` at 0x1001f690.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xab4, including `lw` at 0x1001f678, `lw` at 0x1001f688.
  4 such `ldc1` accesses load 8 bytes from a0 (arg0 at entry) +0x550, including `ldc1` at 0x1001f6cc, `ldc1` at 0x1001f714, `ldc1` at 0x1001f740.
  5 such `ldc1` accesses load 8 bytes from a0 (arg0 at entry) +0xaa8, including `ldc1` at 0x1001f71c, `ldc1` at 0x1001f72c, `ldc1` at 0x1001f748.
  The `lw` at 0x1001f80c loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x1001f814 loads 4 bytes from a0 (arg0 at entry) +0x350.
  The `sb` at 0x1001f85c stores 1 byte to a2 (arg2 at entry) +0x0.
  The `sb` at 0x1001f89c stores 1 byte to ?.
  The `jalr` at 0x1001f5e0 calls sprintf with a0=0x10035428, a1=0x1002eff0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1001f61c calls sprintf with a0=0x10035428, a1=0x1002f018, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1001f658 calls sprintf with a0=0x10035428, a1=0x1002f040, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1001f6b4 calls sprintf with a0=0x10035428, a1=0x1002f070, a2=[a0+2740], a3=([a0+1372] + [a0+1372]).
  The `jalr` at 0x1001f6fc calls sprintf with a0=0x10035428, a1=0x1002f0b0, a2=[a0+2740], a3=?.
  The `jalr` at 0x1001f7dc calls snprintf with a0=sp-256, a1=0xc8, a2=0x1002f0d8, a3=?, a5=a0 at entry (arg0), a6=a0 at entry (arg0), a7=a0 at entry (arg0).
  The `jalr` at 0x1001f7f4 calls sprintf with a0=0x10035428, a1=sp-256, a2=?, a3=?.
  The `jalr` at 0x1001f838 calls sprintf with a0=0x10035428, a1=0x1002f110, a2=[a0+848], a3=a0 at entry (arg0), a4=a0 at entry (arg0), a5=a0 at entry (arg0), a6=a0 at entry (arg0).
  The `jalr` at 0x1001f884 calls strncpy with a0=a2 at entry (arg2), a1=0x10035428, a2=?, a3=?.
  The `bne` branch at 0x1001f5c4 targets 0x1001f5f4, is taken when at(=[a0]:1) != 0, and falls through when at(=[a0]:1) == 0.
  The `beq` branch at 0x1001f5ec targets 0x1001f860 and is always taken.
  The `bne` branch at 0x1001f600 targets 0x1001f630, is taken when a1(=[a0+255]:1) != 0, and falls through when a1(=[a0+255]:1) == 0.
  The `beq` branch at 0x1001f628 targets 0x1001f860 and is always taken.
  The `bne` branch at 0x1001f63c targets 0x1001f66c, is taken when a1(=[a0+510]:1) != 0, and falls through when a1(=[a0+510]:1) == 0.
  The `beq` branch at 0x1001f664 targets 0x1001f860 and is always taken.
  The `beq` branch at 0x1001f67c targets 0x1001f6c8, is taken when a1(=[a0+1372]) == a2(=[a0+2740]), and falls through when a1(=[a0+1372]) != a2(=[a0+2740]).
  The `beq` branch at 0x1001f698 targets 0x1001f6c8, is taken when a2(=[a0+2740]) == a3(=([a0+1372] + [a0+1372])), and falls through when a2(=[a0+2740]) != a3(=([a0+1372] + [a0+1372])).
  The `beq` branch at 0x1001f6c0 targets 0x1001f860 and is always taken.
  The `bc1f` branch at 0x1001f6e0 targets 0x1001f710, is taken when not (f0(=[a0+1360]:8) == f1 (c.eq.d at 0x1001f6d8)), and falls through when f0(=[a0+1360]:8) == f1 (c.eq.d at 0x1001f6d8).
  The `beq` branch at 0x1001f708 targets 0x1001f860 and is always taken.
  The `bc1f` branch at 0x1001f784 targets 0x1001f808, is taken when not (f2(=0x3f847ae147ae147b) < f3 (c.lt.d at 0x1001f77c)), and falls through when f2(=0x3f847ae147ae147b) < f3 (c.lt.d at 0x1001f77c).
  The `bc1f` branch at 0x1001f7a0 targets 0x1001f808, is taken when not (f9(=0x3f947ae147ae147b) < f10 (c.lt.d at 0x1001f798)), and falls through when f9(=0x3f947ae147ae147b) < f10 (c.lt.d at 0x1001f798).
  The `beq` branch at 0x1001f800 targets 0x1001f860 and is always taken.
  The `beq` branch at 0x1001f81c targets 0x1001f84c, is taken when a1(=[a1]) >= a2(=[a0+848]) (signed), and falls through when a1(=[a1]) < a2(=[a0+848]) (signed).
  The `beq` branch at 0x1001f844 targets 0x1001f860 and is always taken.
  The `blez` branch at 0x1001f864 targets 0x1001f8a0, is taken when a3(?) <= 0 (signed), and falls through when a3(?) > 0 (signed).
  The return at 0x1001f8b0 has v0 = one of 0x0, 0x1.

- `vfmtIsCombinationValidForDmxTarget` in `usr/gfx/sgcombine` at 0x1001f8c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1001f8c0-0x1001fab4 (500 bytes).
  It occupies 500 bytes.
  The `lbu` at 0x1001f8f0 loads 1 byte from a0 (arg0 at entry) +0xff.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x354, including `lw` at 0x1001f92c, `lw` at 0x1001f960.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x148c, including `lw` at 0x1001f938, `lw` at 0x1001f994.
  The `lw` at 0x1001f944 loads 4 bytes from a0 (arg0 at entry) +0x1494.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x1490, including `lw` at 0x1001f96c, `lw` at 0x1001f9a8.
  The `lw` at 0x1001f978 loads 4 bytes from a0 (arg0 at entry) +0x1498.
  The `lw` at 0x1001f9e0 loads 4 bytes from a0 (arg0 at entry) +0x55c.
  The `lw` at 0x1001f9e8 loads 4 bytes from a0 (arg0 at entry) +0x560.
  The `ldc1` at 0x1001fa04 loads 8 bytes from a0 (arg0 at entry) +0x550.
  The `sb` at 0x1001fa58 stores 1 byte to a1 (arg1 at entry) +0x0.
  The `sb` at 0x1001fa98 stores 1 byte to ?.
  The `jalr` at 0x1001f910 calls sprintf with a0=0x10035428, a1=0x1002f138, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1001f9c8 calls sprintf with a0=0x10035428, a1=0x1002f160, a2=?, a3=?.
  The `jalr` at 0x1001fa34 calls sprintf with a0=0x10035428, a1=0x1002f198, a2=?, a3=[a0+1372], a4=[a0+1376].
  The `jalr` at 0x1001fa80 calls strncpy with a0=a1 at entry (arg1), a1=0x10035428, a2=?, a3=?.
  The `bne` branch at 0x1001f8f4 targets 0x1001f924, is taken when at(=[a0+255]:1) != 0, and falls through when at(=[a0+255]:1) == 0.
  The `beq` branch at 0x1001f91c targets 0x1001fa5c and is always taken.
  The `bne` branch at 0x1001f950 targets 0x1001f9b4, is taken when a1(=[a0+852]) < a2(=([a0+5260] + [a0+5268])) (signed), and falls through when a1(=[a0+852]) >= a2(=([a0+5260] + [a0+5268])) (signed).
  The `bne` branch at 0x1001f984 targets 0x1001f9b4, is taken when a2(=[a0+852]) < a3(=([a0+5264] + [a0+5272])) (signed), and falls through when a2(=[a0+852]) >= a3(=([a0+5264] + [a0+5272])) (signed).
  The `bltz` branch at 0x1001f998 targets 0x1001f9b4, is taken when a3(=[a0+5260]) < 0 (signed), and falls through when a3(=[a0+5260]) >= 0 (signed).
  The `bgez` branch at 0x1001f9ac targets 0x1001f9dc, is taken when a4(=[a0+5264]) >= 0 (signed), and falls through when a4(=[a0+5264]) < 0 (signed).
  The `beq` branch at 0x1001f9d4 targets 0x1001fa5c and is always taken.
  The `bc1f` branch at 0x1001fa18 targets 0x1001fa48, is taken when not (f0(=0x41a3ab6680000000) < f1 (c.lt.d at 0x1001fa10)), and falls through when f0(=0x41a3ab6680000000) < f1 (c.lt.d at 0x1001fa10).
  The `beq` branch at 0x1001fa40 targets 0x1001fa5c and is always taken.
  The `blez` branch at 0x1001fa60 targets 0x1001fa9c, is taken when a3(?) <= 0 (signed), and falls through when a3(?) > 0 (signed).
  The return at 0x1001faac has v0 = one of 0x0, 0x1.

- `__istart` in `usr/gfx/sgcombine` at 0x1002aa0c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/sgcombine`.
  Range: 0x1002aa0c-0x1002aa10 (4 bytes).
  It occupies 4 bytes.
