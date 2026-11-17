# Readings: `usr/gfx/VOYAGER/bin/vpm`

One entry per routine, filed here from the reading batches by binary.

- `__start` in `usr/gfx/VOYAGER/bin/vpm` at 0x10001fe0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x10001fe0-0x100020ec (268 bytes).
  It occupies 268 bytes.
  3 such `lw` accesses load 4 bytes from table(0x66b4) +0x0, including `lw` at 0x10002014, `lw` at 0x10002038, `lw` at 0x100020bc.
  2 such `lw` accesses load 4 bytes from entry(0x66b4) +0x0, including `lw` at 0x10002020, `lw` at 0x100020cc.
  The `sw` at 0x1000203c stores 4 bytes to entry(0x66b4) +0x0.
  2 such `lw` accesses load 4 bytes from table(0x67f4) +0x0, including `lw` at 0x10002048, `lw` at 0x100020b4.
  The `sw` at 0x10002054 stores 4 bytes to entry(0x67f4) +0x0.
  2 such `lw` accesses load 4 bytes from table(0x67f0) +0x0, including `lw` at 0x10002060, `lw` at 0x100020b8.
  The `sw` at 0x10002068 stores 4 bytes to entry(0x67f0) +0x0.
  The `lw` at 0x1000206c loads 4 bytes from table(0x67d4) +0x0.
  The `lw` at 0x10002084 loads 4 bytes from table(0x66c8) +0x0.
  The `lw` at 0x100020a4 loads 4 bytes from table(0x678c) +0x0.
  The `lw` at 0x100020c0 loads 4 bytes from entry(0x67f4) +0x0.
  The `lw` at 0x100020c4 loads 4 bytes from entry(0x67f0) +0x0.
  The `lw` at 0x100020d8 loads 4 bytes from table(0x66c4) +0x0.
  The `bal` at 0x10001ff8 calls __start+32 [0x10002000] with a0=?, a1=sp+4, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10002074 calls (unknown callee) with a0=?, a1=?, a2=?, a3=[entry(0x66b4)].
  The `jalr` at 0x10002088 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x100020c8 calls (unknown callee) with a0=[entry(0x67f4)], a1=[entry(0x67f0)], a2=[entry(0x66b4)], a3=?.
  The `jalr` at 0x100020e0 calls (unknown callee) with a0=ret(?), a1=?, a2=?, a3=?.
  The `bne` branch at 0x1000202c targets 0x10002040, is taken when a3(=[entry(0x66b4)]) != 0, and falls through when a3(=[entry(0x66b4)]) == 0.

- `_mcount` in `usr/gfx/VOYAGER/bin/vpm` at 0x100020ec (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x100020ec-0x100020f8 (12 bytes).
  It occupies 12 bytes.
  The return at 0x100020f0 has v0 = ?.

- `usage` in `usr/gfx/VOYAGER/bin/vpm` at 0x10002100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x10002100-0x1000216c (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x1000212c loads 4 bytes from sym(_progname) +0x0.
  The `jalr` at 0x10002134 calls fprintf with a0=sym(__iob)+32, a1=0x10008000, a2=[sym(_progname)], a3=a3 at entry (arg3).
  The `jalr` at 0x10002150 calls fprintf with a0=sym(__iob)+32, a1=0x10008010, a2=?, a3=?.
  The return at 0x10002164 has v0 = ret(fprintf).

- `dfCreateDumpFile` in `usr/gfx/VOYAGER/bin/vpm` at 0x100026b0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x100026b0-0x100028ac (508 bytes).
  It occupies 508 bytes.
  The `lw` at 0x100026f8 loads 4 bytes from sym(errno) +0x0.
  The `sw` at 0x10002780 stores 4 bytes to ret(malloc) +0x0.
  The `sw` at 0x1000279c stores 4 bytes to ret(malloc) +0x4.
  2 such `lw` accesses load 4 bytes from ret(malloc) +0x4, including `lw` at 0x100027a4, `lw` at 0x1000285c.
  The `sb` at 0x100027e4 stores 1 byte to ret(malloc) +0x8.
  The `sw` at 0x100027ec stores 4 bytes to ret(malloc) +0xc.
  The `sw` at 0x100027f4 stores 4 bytes to ret(malloc) +0x10.
  The `sw` at 0x100027fc stores 4 bytes to ret(malloc) +0x14.
  The `sw` at 0x10002808 stores 4 bytes to ret(malloc) +0x18.
  The `sw` at 0x10002814 stores 4 bytes to ret(malloc) +0x1c.
  The `lw` at 0x1000281c loads 4 bytes from ret(malloc) +0x0.
  The `jal` at 0x100026d8 calls create_file [0x10004310] with a0=a0 at entry (arg0), a1=0x10008810, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10002700 calls strerror with a0=[sym(errno)], a1=?, a2=?, a3=?.
  The `jal` at 0x10002724 calls kerror [0x10003db0] with a0=0x0, a1=0x10008158, a2=a0 at entry (arg0), a3=ret(strerror).
  The `jalr` at 0x10002740 calls malloc with a0=0x20, a1=?, a2=?, a3=?.
  The `jalr` at 0x10002764 calls fclose with a0=ret(create_file), a1=?, a2=ret(malloc), a3=?.
  The `jalr` at 0x1000278c calls strdup with a0=a0 at entry (arg0), a1=?, a2=ret(malloc), a3=ret(create_file), a4=ret(malloc).
  The `jalr` at 0x100027b8 calls fclose with a0=ret(create_file), a1=?, a2=?, a3=?, a5=[ret(malloc)+4], a6=ret(malloc).
  The `jalr` at 0x100027c8 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000282c calls fseek with a0=[ret(malloc)], a1=0x800, a2=0x0, a3=-0x1, a4=ret(malloc), a5=ret(malloc), a6=ret(malloc), a7=ret(malloc).
  The `jalr` at 0x10002850 calls fclose with a0=ret(create_file), a1=?, a2=?, a3=?.
  The `jalr` at 0x10002864 calls free with a0=[ret(malloc)+4], a1=?, a2=?, a3=?.
  The `jalr` at 0x10002874 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `bne` branch at 0x100026ec targets 0x10002738, is taken when v0(=ret(create_file)) != 0, and falls through when v0(=ret(create_file)) == 0.
  The `beq` branch at 0x10002730 targets 0x10002894 and is always taken.
  The `bne` branch at 0x10002754 targets 0x10002778, is taken when a2(=ret(malloc)) != 0, and falls through when a2(=ret(malloc)) == 0.
  The `beq` branch at 0x10002770 targets 0x10002894 and is always taken.
  The `bne` branch at 0x100027a8 targets 0x100027dc, is taken when a5(=[ret(malloc)+4]) != 0, and falls through when a5(=[ret(malloc)+4]) == 0.
  The `beq` branch at 0x100027d4 targets 0x10002894 and is always taken.
  The `beq` branch at 0x10002840 targets 0x10002888, is taken when t2(=ret(fseek)) == 0, and falls through when t2(=ret(fseek)) != 0.
  The `beq` branch at 0x10002880 targets 0x10002894 and is always taken.
  The return at 0x100028a4 has v0 = one of 0x0, ret(malloc).

- `dfNewSection` in `usr/gfx/VOYAGER/bin/vpm` at 0x100028b0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x100028b0-0x10002a4c (412 bytes).
  It occupies 412 bytes.
  The `lbu` at 0x100028ec loads 1 byte from a0 (arg0 at entry) +0x8.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc, including `lw` at 0x10002920, `lw` at 0x100029b8, `lw` at 0x100029dc.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x10, including `lw` at 0x10002928, `lw` at 0x1000293c, `lw` at 0x10002958.
  The `sw` at 0x10002948 stores 4 bytes to a0 (arg0 at entry) +0x10.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x14, including `lw` at 0x10002950, `lw` at 0x1000297c, `lw` at 0x100029b0.
  The `sw` at 0x10002974 stores 4 bytes to a0 (arg0 at entry) +0x14.
  The `sw` at 0x100029c4 stores 4 bytes to ([a0+20] + ([a0+12] << 0x4)) +0x0.
  The `lw` at 0x100029cc loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `sw` at 0x100029e8 stores 4 bytes to ([a0+20] + ([a0+12] << 0x4)) +0x4.
  The `sw` at 0x10002a04 stores 4 bytes to ([a0+20] + ([a0+12] << 0x4)) +0x8.
  The `sw` at 0x10002a14 stores 4 bytes to a0 (arg0 at entry) +0x18.
  The `sw` at 0x10002a28 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `jalr` at 0x10002914 calls __assert with a0=0x10008180, a1=0x10008198, a2=0xa8, a3=a3 at entry (arg3).
  The `jalr` at 0x10002964 calls realloc with a0=[a0+20], a1=([a0+16] << 0x4), a2=a0 at entry (arg0), a3=?.
  The `jalr` at 0x100029a0 calls strdup with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `bne` branch at 0x100028d4 targets 0x100028e8, is taken when at(=a0) != 0, and falls through when at(=a0) == 0.
  The `beq` branch at 0x100028e0 targets 0x10002a34 and is always taken.
  The `beq` branch at 0x100028f4 targets 0x1000291c, is taken when v1(=[a0+8]:1) == a0(=0x2), and falls through when v1(=[a0+8]:1) != a0(=0x2).
  The `bne` branch at 0x10002930 targets 0x10002998, is taken when a1(=[a0+12]) < a2(=[a0+16]) (signed), and falls through when a1(=[a0+12]) >= a2(=[a0+16]) (signed).
  The `bne` branch at 0x10002980 targets 0x10002998, is taken when a2(=[a0+20]) != 0, and falls through when a2(=[a0+20]) == 0.
  The `beq` branch at 0x10002990 targets 0x10002a34 and is always taken.
  The return at 0x10002a44 has v0 = one of 0x0, 0x1.

- `dfWriteSection` in `usr/gfx/VOYAGER/bin/vpm` at 0x10002a50 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x10002a50-0x10002b84 (308 bytes).
  It occupies 308 bytes.
  The `lbu` at 0x10002a90 loads 1 byte from a0 (arg0 at entry) +0x8.
  The `lw` at 0x10002ad0 loads 4 bytes from a0 (arg0 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x14, including `lw` at 0x10002aec, `lw` at 0x10002b0c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x18, including `lw` at 0x10002af4, `lw` at 0x10002b14.
  The `lw` at 0x10002b00 loads 4 bytes from ([a0+20] + ([a0+24] << 0x4)) +0x8.
  The `sw` at 0x10002b20 stores 4 bytes to ([a0+20] + ([a0+24] << 0x4)) +0x8.
  The `lw` at 0x10002b2c loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `sw` at 0x10002b38 stores 4 bytes to a0 (arg0 at entry) +0x1c.
  The `jalr` at 0x10002ab8 calls __assert with a0=0x10008180, a1=0x10008198, a2=0xc2, a3=a3 at entry (arg3).
  The `jalr` at 0x10002ad8 calls fwrite with a0=a1 at entry (arg1), a1=0x1, a2=a2 at entry (arg2), a3=[a0].
  The `bne` branch at 0x10002a78 targets 0x10002a8c, is taken when at(=a0) != 0, and falls through when at(=a0) == 0.
  The `beq` branch at 0x10002a84 targets 0x10002b6c and is always taken.
  The `beq` branch at 0x10002a98 targets 0x10002ac0, is taken when v1(=[a0+8]:1) == a0(=0x2), and falls through when v1(=[a0+8]:1) != a0(=0x2).
  The `beq` branch at 0x10002b44 targets 0x10002b5c, is taken when a4(=a2) == a5(=ret(fwrite)), and falls through when a4(=a2) != a5(=ret(fwrite)).
  The `beq` branch at 0x10002b54 targets 0x10002b6c and is always taken.
  The `beq` branch at 0x10002b64 targets 0x10002b6c and is always taken.
  The return at 0x10002b7c has v0 = one of 0x0, 0x1.

- `dfWriteNewSectionFromPipe` in `usr/gfx/VOYAGER/bin/vpm` at 0x10002b90 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x10002b90-0x10002d40 (432 bytes).
  It occupies 432 bytes.
  3 such `lbu` accesses load 1 byte from ret(popen) +0xc, including `lbu` at 0x10002c3c, `lbu` at 0x10002cbc, `lbu` at 0x10002ce0.
  The `jalr` at 0x10002bc0 calls popen with a0=a2 at entry (arg2), a1=0x10008812, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10002bf8 calls dfNewSection [0x100028b0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x10002c1c calls pclose with a0=ret(popen), a1=?, a2=?, a3=?.
  The `jalr` at 0x10002c60 calls fread with a0=sp-4176, a1=0x1, a2=0x1000, a3=ret(popen).
  The `jal` at 0x10002c8c calls dfWriteSection [0x10002a50] with a0=a0 at entry (arg0), a1=sp-4176, a2=ret(fread), a3=ret(fread).
  The `jalr` at 0x10002cf8 calls pclose with a0=ret(popen), a1=?, a2=?, a3=?.
  The `jal` at 0x10002d14 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008814, a2=0x100081a8, a3=?.
  The `bne` branch at 0x10002bd4 targets 0x10002bec, is taken when v0(=ret(popen)) != 0, and falls through when v0(=ret(popen)) == 0.
  The `beq` branch at 0x10002be4 targets 0x10002d28 and is always taken.
  The `beq` branch at 0x10002c0c targets 0x10002c34, is taken when a0(=ret(dfNewSection)) == 0, and falls through when a0(=ret(dfNewSection)) != 0.
  The `beq` branch at 0x10002c2c targets 0x10002d28 and is always taken.
  The `bne` branch at 0x10002c44 targets 0x10002cf0, is taken when (a2(=[ret(popen)+12]:1) & 0x10) != 0, and falls through when (a2(=[ret(popen)+12]:1) & 0x10) == 0.
  The `blez` branch at 0x10002c74 targets 0x10002cb8, is taken when a3(=ret(fread)) <= 0 (signed), and falls through when a3(=ret(fread)) > 0 (signed).
  The `beq` branch at 0x10002ca0 targets 0x10002cb8, is taken when a4(=ret(dfWriteSection)) == 0, and falls through when a4(=ret(dfWriteSection)) != 0.
  The `beq` branch at 0x10002cb0 targets 0x10002cf0 and is always taken.
  The `beq` branch at 0x10002cc4 targets 0x10002cdc, is taken when (a6(=[ret(popen)+12]:1) & 0x20) == 0, and falls through when (a6(=[ret(popen)+12]:1) & 0x20) != 0.
  The `beq` branch at 0x10002cd4 targets 0x10002cf0 and is always taken.
  The `beq` branch at 0x10002ce8 targets 0x10002c4c, is taken when (t0(=[ret(popen)+12]:1) & 0x10) == 0, and falls through when (t0(=[ret(popen)+12]:1) & 0x10) != 0.
  The return at 0x10002d38 has v0 = one of 0x1, ret(dfNewSection), ?.

- `dfPrintf` in `usr/gfx/VOYAGER/bin/vpm` at 0x10002d40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x10002d40-0x10002dd4 (148 bytes).
  It occupies 148 bytes.
  The `jalr` at 0x10002d90 calls vsprintf with a0=sp-1112, a1=a1 at entry (arg1), a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x10002da0 calls strlen with a0=sp-1112, a1=?, a2=?, a3=?.
  The `jal` at 0x10002db8 calls dfWriteSection [0x10002a50] with a0=a0 at entry (arg0), a1=sp-1112, a2=ret(strlen), a3=?.
  The return at 0x10002dcc has v0 = ret(dfWriteSection).

- `dfOpenDumpFile` in `usr/gfx/VOYAGER/bin/vpm` at 0x10002de0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x10002de0-0x100031dc (1020 bytes).
  It occupies 1020 bytes.
  The `sw` at 0x10002ea4 stores 4 bytes to ret(malloc) +0x4.
  The `sw` at 0x10002eb0 stores 4 bytes to ret(malloc) +0x0.
  The `lw` at 0x10002eb8 loads 4 bytes from ret(malloc) +0x4.
  The `sb` at 0x10002ef8 stores 1 byte to ret(malloc) +0x8.
  The `sw` at 0x10002f78 stores 4 bytes to ret(malloc) +0xc.
  The `sw` at 0x10002f84 stores 4 bytes to ret(malloc) +0x10.
  The `sw` at 0x10002fa4 stores 4 bytes to ret(malloc) +0x14.
  9 such `lw` accesses load 4 bytes from ret(malloc) +0x14, including `lw` at 0x10002fac, `lw` at 0x10003014, `lw` at 0x1000302c.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x10003074, `sw` at 0x1000308c.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x100030a4, `lw` at 0x10003110, `lw` at 0x10003130.
  The `sw` at 0x100031a8 stores 4 bytes to ret(malloc) +0x18.
  The `sw` at 0x100031b4 stores 4 bytes to ret(malloc) +0x1c.
  The `jal` at 0x10002e08 calls open_file [0x100045a0] with a0=a0 at entry (arg0), a1=0x10008812, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10002e38 calls kerror [0x10003db0] with a0=0x0, a1=0x100081b8, a2=a0 at entry (arg0), a3=?.
  The `jalr` at 0x10002e54 calls malloc with a0=0x20, a1=?, a2=?, a3=?.
  The `jalr` at 0x10002e78 calls fclose with a0=ret(open_file), a1=?, a2=ret(malloc), a3=?.
  The `jalr` at 0x10002e94 calls strdup with a0=a0 at entry (arg0), a1=?, a2=ret(malloc), a3=?.
  The `jalr` at 0x10002ecc calls free with a0=ret(malloc), a1=?, a2=?, a3=[ret(malloc)+4], a4=ret(open_file), a5=ret(malloc), a6=ret(malloc).
  The `jalr` at 0x10002edc calls fclose with a0=ret(open_file), a1=?, a2=?, a3=?.
  The `jalr` at 0x10002f14 calls fscanf with a0=ret(open_file), a1=0x100081d8, a2=sp-328, a3=sp-324, a4=ret(open_file), a5=ret(malloc), a6=ret(malloc).
  The `jalr` at 0x10002f4c calls fclose with a0=ret(open_file), a1=?, a2=?, a3=?, a4=ret(fscanf), a5=0x2.
  The `jalr` at 0x10002f5c calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x10002f94 calls malloc with a0=?, a1=?, a2=ret(malloc), a3=?, a4=ret(malloc), a5=0x2, a7=0x1.
  The `jalr` at 0x10002fc0 calls fclose with a0=ret(open_file), a1=?, a2=?, a3=?, a5=[ret(malloc)+20], a6=ret(malloc).
  The `jalr` at 0x10002fd0 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x10003044 calls fscanf with a0=ret(open_file), a1=0x100081e8, a2=sp-304, a3=?.
  The `jalr` at 0x10003054 calls strdup with a0=sp-304, a1=?, a2=?, a3=?.
  The `jalr` at 0x10003138 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000316c calls free with a0=[ret(malloc)+20], a1=?, a2=?, a3=?.
  The `jalr` at 0x1000317c calls fclose with a0=ret(open_file), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000318c calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `bne` branch at 0x10002e1c targets 0x10002e4c, is taken when v0(=ret(open_file)) != 0, and falls through when v0(=ret(open_file)) == 0.
  The `beq` branch at 0x10002e44 targets 0x100031c4 and is always taken.
  The `bne` branch at 0x10002e68 targets 0x10002e8c, is taken when a2(=ret(malloc)) != 0, and falls through when a2(=ret(malloc)) == 0.
  The `beq` branch at 0x10002e84 targets 0x100031c4 and is always taken.
  The `bne` branch at 0x10002ebc targets 0x10002ef0, is taken when a3(=[ret(malloc)+4]) != 0, and falls through when a3(=[ret(malloc)+4]) == 0.
  The `beq` branch at 0x10002ee8 targets 0x100031c4 and is always taken.
  The `bne` branch at 0x10002f2c targets 0x10002f44, is taken when a4(=ret(fscanf)) != a5(=0x2), and falls through when a4(=ret(fscanf)) == a5(=0x2).
  The `beq` branch at 0x10002f3c targets 0x10002f70, is taken when a6(?) == a7(=0x1), and falls through when a6(?) != a7(=0x1).
  The `beq` branch at 0x10002f68 targets 0x100031c4 and is always taken.
  The `bne` branch at 0x10002fb0 targets 0x10002fe4, is taken when a5(=[ret(malloc)+20]) != 0, and falls through when a5(=[ret(malloc)+20]) == 0.
  The `beq` branch at 0x10002fdc targets 0x100031c4 and is always taken.
  The `beq` branch at 0x10002ff8 targets 0x100030d8, is taken when a7(=0x0) >= t0(?) (signed), and falls through when a7(=0x0) < t0(?) (signed).
  The `bne` branch at 0x100030a8 targets 0x100030b8, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `bne` branch at 0x100030d0 targets 0x10003000, is taken when a6(?) < a7(?) (signed), and falls through when a6(?) >= a7(?) (signed).
  The `beq` branch at 0x100030dc targets 0x100031a0, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x100030f4 targets 0x10003160, is taken when t2(=0x0) >= t3(?) (signed), and falls through when t2(=0x0) < t3(?) (signed).
  The `beq` branch at 0x10003114 targets 0x10003140, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x10003158 targets 0x100030fc, is taken when a1(?) < a2(?) (signed), and falls through when a1(?) >= a2(?) (signed).
  The `beq` branch at 0x10003198 targets 0x100031c4 and is always taken.
  The return at 0x100031d4 has v0 = one of 0x0, ret(malloc).

- `dfListSections` in `usr/gfx/VOYAGER/bin/vpm` at 0x100031e0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x100031e0-0x100033b8 (472 bytes).
  It occupies 472 bytes.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc, including `lw` at 0x10003208, `lw` at 0x10003248, `lw` at 0x100032cc.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x14, including `lw` at 0x10003260, `lw` at 0x10003320, `lw` at 0x10003340.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10003270, `lw` at 0x100032a8, `lw` at 0x10003330.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x10003294, `sw` at 0x100032f0.
  The `sw` at 0x10003390 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `jalr` at 0x10003218 calls malloc with a0=([a0+12]+1 << 0x2), a1=a1 at entry (arg1), a2=0xd460, a3=a3 at entry (arg3).
  The `jalr` at 0x10003278 calls strdup with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10003358 calls free with a0=?, a1=?, a2=?, a3=?.
  The `bne` branch at 0x1000322c targets 0x10003240, is taken when a3(=ret(malloc)) != 0, and falls through when a3(=ret(malloc)) == 0.
  The `beq` branch at 0x10003238 targets 0x100033a0 and is always taken.
  The `beq` branch at 0x10003254 targets 0x100032e0, is taken when a4(=0x0) >= a5(=[a0+12]) (signed), and falls through when a4(=0x0) < a5(=[a0+12]) (signed).
  The `bne` branch at 0x100032ac targets 0x100032bc, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bne` branch at 0x100032d8 targets 0x1000325c, is taken when a6(?) < a7(=[a0+12]) (signed), and falls through when a6(?) >= a7(=[a0+12]) (signed).
  The `beq` branch at 0x100032f8 targets 0x10003384, is taken when t1(=one of 0x0, 0x1) == 0, and falls through when t1(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x10003314 targets 0x10003384, is taken when t8(=0x0) >= t9(=[a0+12]) (signed), and falls through when t8(=0x0) < t9(=[a0+12]) (signed).
  The `beq` branch at 0x10003334 targets 0x10003360, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `bne` branch at 0x1000337c targets 0x1000331c, is taken when a1(?) < a2(=[a0+12]) (signed), and falls through when a1(?) >= a2(=[a0+12]) (signed).
  The return at 0x100033b0 has v0 = one of 0x0, ret(malloc).

- `dfSeekSection` in `usr/gfx/VOYAGER/bin/vpm` at 0x100033c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x100033c0-0x100034bc (252 bytes).
  It occupies 252 bytes.
  The `lbu` at 0x100033e4 loads 1 byte from a0 (arg0 at entry) +0x8.
  The `lw` at 0x10003418 loads 4 bytes from a0 (arg0 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x14, including `lw` at 0x10003424, `lw` at 0x10003478.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x18, including `lw` at 0x1000342c, `lw` at 0x10003480.
  2 such `lw` accesses load 4 bytes from ([a0+20] + ([a0+24] << 0x4)) +0x4, including `lw` at 0x10003438, `lw` at 0x1000348c.
  The `sw` at 0x10003498 stores 4 bytes to a0 (arg0 at entry) +0x1c.
  The `jalr` at 0x1000340c calls __assert with a0=0x100081f8, a1=0x10008198, a2=0x161, a3=a3 at entry (arg3).
  The `jalr` at 0x10003448 calls fseek with a0=[a0], a1=(a1 + [([a0+20] + ([a0+24] << 0x4))+4]), a2=0x0, a3=([a0+24] << 0x4).
  The `beq` branch at 0x100033ec targets 0x10003414, is taken when at(=[a0+8]:1) == v0(=0x1), and falls through when at(=[a0+8]:1) != v0(=0x1).
  The `beq` branch at 0x10003458 targets 0x10003470, is taken when a1(=ret(fseek)) == 0, and falls through when a1(=ret(fseek)) != 0.
  The `beq` branch at 0x10003468 targets 0x100034a4 and is always taken.
  The return at 0x100034b4 has v0 = one of 0x0, 0x1.

- `dfFindSection` in `usr/gfx/VOYAGER/bin/vpm` at 0x100034c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x100034c0-0x100035e4 (292 bytes).
  It occupies 292 bytes.
  The `lbu` at 0x100034e8 loads 1 byte from a0 (arg0 at entry) +0x8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc, including `lw` at 0x10003520, `lw` at 0x100035ac.
  The `lw` at 0x10003538 loads 4 bytes from a0 (arg0 at entry) +0x14.
  The `lw` at 0x10003548 loads 4 bytes from ?.
  The `sw` at 0x10003570 stores 4 bytes to a0 (arg0 at entry) +0x18.
  The `jalr` at 0x10003510 calls __assert with a0=0x100081f8, a1=0x10008198, a2=0x171, a3=a3 at entry (arg3).
  The `jalr` at 0x10003554 calls strcmp with a0=?, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10003580 calls dfSeekSection [0x100033c0] with a0=a0 at entry (arg0), a1=0x0, a2=a0 at entry (arg0), a3=?.
  The `beq` branch at 0x100034f0 targets 0x10003518, is taken when at(=[a0+8]:1) == v0(=0x1), and falls through when at(=[a0+8]:1) != v0(=0x1).
  The `beq` branch at 0x1000352c targets 0x100035c0, is taken when a1(=0x0) >= a2(=[a0+12]) (signed), and falls through when a1(=0x0) < a2(=[a0+12]) (signed).
  The `bne` branch at 0x10003560 targets 0x1000359c, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `beq` branch at 0x10003594 targets 0x100035cc and is always taken.
  The `bne` branch at 0x100035b8 targets 0x10003534, is taken when a4(?) < a5(=[a0+12]) (signed), and falls through when a4(?) >= a5(=[a0+12]) (signed).
  The return at 0x100035dc has v0 = one of ret(dfSeekSection), -0x1.

- `dfReadSection` in `usr/gfx/VOYAGER/bin/vpm` at 0x100035f0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x100035f0-0x100036c4 (212 bytes).
  It occupies 212 bytes.
  The `lbu` at 0x10003618 loads 1 byte from a0 (arg0 at entry) +0x8.
  The `lw` at 0x10003658 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0x10003674 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `sw` at 0x10003680 stores 4 bytes to a0 (arg0 at entry) +0x1c.
  The `jalr` at 0x10003640 calls __assert with a0=0x100081f8, a1=0x10008198, a2=0x180, a3=a3 at entry (arg3).
  The `jalr` at 0x10003660 calls fread with a0=a1 at entry (arg1), a1=0x1, a2=a2 at entry (arg2), a3=[a0].
  The `beq` branch at 0x10003620 targets 0x10003648, is taken when at(=[a0+8]:1) == v0(=0x1), and falls through when at(=[a0+8]:1) != v0(=0x1).
  The `beq` branch at 0x1000368c targets 0x100036a4, is taken when a4(=a2) == a5(=ret(fread)), and falls through when a4(=a2) != a5(=ret(fread)).
  The `beq` branch at 0x1000369c targets 0x100036ac and is always taken.
  The return at 0x100036bc has v0 = one of 0x0, 0x1.

- `dfMarkSection` in `usr/gfx/VOYAGER/bin/vpm` at 0x100036d0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x100036d0-0x100037d0 (256 bytes).
  It occupies 256 bytes.
  The `lbu` at 0x100036f4 loads 1 byte from a0 (arg0 at entry) +0x8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc, including `lw` at 0x1000372c, `lw` at 0x100037a4.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x14, including `lw` at 0x10003744, `lw` at 0x10003778.
  The `lw` at 0x10003754 loads 4 bytes from ?.
  The `sw` at 0x10003788 stores 4 bytes to ?.
  The `jalr` at 0x1000371c calls __assert with a0=0x100081f8, a1=0x10008198, a2=0x18e, a3=a3 at entry (arg3).
  The `jalr` at 0x10003760 calls strcmp with a0=?, a1=a1 at entry (arg1), a2=?, a3=?.
  The `beq` branch at 0x100036fc targets 0x10003724, is taken when at(=[a0+8]:1) == v0(=0x1), and falls through when at(=[a0+8]:1) != v0(=0x1).
  The `beq` branch at 0x10003738 targets 0x100037b8, is taken when a1(=0x0) >= a2(=[a0+12]) (signed), and falls through when a1(=0x0) < a2(=[a0+12]) (signed).
  The `bne` branch at 0x10003768 targets 0x10003794, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `beq` branch at 0x1000378c targets 0x100037b8 and is always taken.
  The `bne` branch at 0x100037b0 targets 0x10003740, is taken when a3(?) < a4(=[a0+12]) (signed), and falls through when a3(?) >= a4(=[a0+12]) (signed).
  The return at 0x100037c8 has v0 = 0x1.

- `dfUnmarkSection` in `usr/gfx/VOYAGER/bin/vpm` at 0x100037d0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x100037d0-0x100038cc (252 bytes).
  It occupies 252 bytes.
  The `lbu` at 0x100037f4 loads 1 byte from a0 (arg0 at entry) +0x8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc, including `lw` at 0x1000382c, `lw` at 0x100038a0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x14, including `lw` at 0x10003844, `lw` at 0x10003874.
  The `lw` at 0x10003854 loads 4 bytes from ?.
  The `sw` at 0x10003884 stores 4 bytes to ?.
  The `jalr` at 0x1000381c calls __assert with a0=0x100081f8, a1=0x10008198, a2=0x19d, a3=a3 at entry (arg3).
  The `jalr` at 0x10003860 calls strcmp with a0=?, a1=a1 at entry (arg1), a2=?, a3=?.
  The `beq` branch at 0x100037fc targets 0x10003824, is taken when at(=[a0+8]:1) == v0(=0x1), and falls through when at(=[a0+8]:1) != v0(=0x1).
  The `beq` branch at 0x10003838 targets 0x100038b4, is taken when a1(=0x0) >= a2(=[a0+12]) (signed), and falls through when a1(=0x0) < a2(=[a0+12]) (signed).
  The `bne` branch at 0x10003868 targets 0x10003890, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `beq` branch at 0x10003888 targets 0x100038b4 and is always taken.
  The `bne` branch at 0x100038ac targets 0x10003840, is taken when a2(?) < a3(=[a0+12]) (signed), and falls through when a2(?) >= a3(=[a0+12]) (signed).
  The return at 0x100038c4 has v0 = 0x1.

- `dfIsSectionMarked` in `usr/gfx/VOYAGER/bin/vpm` at 0x100038d0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x100038d0-0x100039dc (268 bytes).
  It occupies 268 bytes.
  The `lbu` at 0x100038f4 loads 1 byte from a0 (arg0 at entry) +0x8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc, including `lw` at 0x1000392c, `lw` at 0x100039a4.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x14, including `lw` at 0x10003944, `lw` at 0x10003974.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10003954, `lw` at 0x10003984.
  The `jalr` at 0x1000391c calls __assert with a0=0x100081f8, a1=0x10008198, a2=0x1ad, a3=a3 at entry (arg3).
  The `jalr` at 0x10003960 calls strcmp with a0=?, a1=a1 at entry (arg1), a2=?, a3=?.
  The `beq` branch at 0x100038fc targets 0x10003924, is taken when at(=[a0+8]:1) == v0(=0x1), and falls through when at(=[a0+8]:1) != v0(=0x1).
  The `beq` branch at 0x10003938 targets 0x100039b8, is taken when a1(=0x0) >= a2(=[a0+12]) (signed), and falls through when a1(=0x0) < a2(=[a0+12]) (signed).
  The `bne` branch at 0x10003968 targets 0x10003994, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `beq` branch at 0x1000398c targets 0x100039c4 and is always taken.
  The `bne` branch at 0x100039b0 targets 0x10003940, is taken when a2(?) < a3(=[a0+12]) (signed), and falls through when a2(?) >= a3(=[a0+12]) (signed).
  The return at 0x100039d4 has v0 = one of ?, -0x1.

- `dfGetFilePointer` in `usr/gfx/VOYAGER/bin/vpm` at 0x100039e0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x100039e0-0x10003a4c (108 bytes).
  It occupies 108 bytes.
  The `lbu` at 0x10003a00 loads 1 byte from a0 (arg0 at entry) +0x8.
  The `lw` at 0x10003a34 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0x10003a28 calls __assert with a0=0x100081f8, a1=0x10008198, a2=0x1b8, a3=a3 at entry (arg3).
  The `beq` branch at 0x10003a08 targets 0x10003a30, is taken when at(=[a0+8]:1) == v0(=0x1), and falls through when at(=[a0+8]:1) != v0(=0x1).
  The return at 0x10003a44 has v0 = [a0].

- `dfCloseDumpFile` in `usr/gfx/VOYAGER/bin/vpm` at 0x10003a50 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x10003a50-0x10003da8 (856 bytes).
  It occupies 856 bytes.
  The `lbu` at 0x10003a70 loads 1 byte from a0 (arg0 at entry) +0x8.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x10003aa0, `lw` at 0x10003ae4, `lw` at 0x10003b5c.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc, including `lw` at 0x10003af8, `lw` at 0x10003b44, `lw` at 0x10003c00.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x14, including `lw` at 0x10003b6c, `lw` at 0x10003b84, `lw` at 0x10003b9c.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10003b7c, `lw` at 0x10003b94, `lw` at 0x10003bac.
  The `lw` at 0x10003d34 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `jalr` at 0x10003ab0 calls fseek with a0=[a0], a1=0x0, a2=0x0, a3=a3 at entry (arg3).
  The `jalr` at 0x10003b00 calls fprintf with a0=[a0], a1=0x100081d8, a2=0x1, a3=[a0+12].
  The `jalr` at 0x10003bb4 calls fprintf with a0=[a0], a1=0x100081e8, a2=?, a3=?.
  The `jalr` at 0x10003c20 calls ftell with a0=[a0], a1=ret(fprintf), a2=?, a3=?, a4=[a0+12].
  The `jalr` at 0x10003c58 calls __assert with a0=0x10008210, a1=0x10008198, a2=0x1db, a3=?.
  The `jalr` at 0x10003c80 calls fputc with a0=0x0, a1=[a0], a2=?, a3=?.
  The `jalr` at 0x10003cdc calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10003d14 calls free with a0=[a0+20], a1=?, a2=?, a3=?.
  The `jalr` at 0x10003d28 calls fclose with a0=[a0], a1=?, a2=?, a3=?.
  The `jalr` at 0x10003d3c calls free with a0=[a0+4], a1=?, a2=?, a3=?.
  The `jalr` at 0x10003d4c calls free with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x10003d78 calls __assert with a0=0x10008818, a1=0x10008198, a2=0x1ec, a3=a3 at entry (arg3).
  The `beq` branch at 0x10003a7c targets 0x10003a9c, is taken when at(=[a0+8]:1) == v0(=0x2), and falls through when at(=[a0+8]:1) != v0(=0x2).
  The `beq` branch at 0x10003a8c targets 0x10003d5c, is taken when v1(=[a0+8]:1) == a0(=0x1), and falls through when v1(=[a0+8]:1) != a0(=0x1).
  The `beq` branch at 0x10003a94 targets 0x10003d64 and is always taken.
  The `beq` branch at 0x10003ac4 targets 0x10003adc, is taken when a1(=ret(fseek)) == 0, and falls through when a1(=ret(fseek)) != 0.
  The `beq` branch at 0x10003ad4 targets 0x10003d90 and is always taken.
  The `bgez` branch at 0x10003b14 targets 0x10003b2c, is taken when a1(=ret(fprintf)) >= 0 (signed), and falls through when a1(=ret(fprintf)) < 0 (signed).
  The `beq` branch at 0x10003b24 targets 0x10003d90 and is always taken.
  The `beq` branch at 0x10003b50 targets 0x10003c14, is taken when a3(=0x0) >= a4(=[a0+12]) (signed), and falls through when a3(=0x0) < a4(=[a0+12]) (signed).
  The `bgez` branch at 0x10003bc8 targets 0x10003be0, is taken when a1(=ret(fprintf)) >= 0 (signed), and falls through when a1(=ret(fprintf)) < 0 (signed).
  The `beq` branch at 0x10003bd8 targets 0x10003d90 and is always taken.
  The `bne` branch at 0x10003c0c targets 0x10003b58, is taken when a3(?) < a4(=[a0+12]) (signed), and falls through when a3(?) >= a4(=[a0+12]) (signed).
  The `beq` branch at 0x10003c38 targets 0x10003c60, is taken when a1(=ret(ftell)) == a2(?), and falls through when a1(=ret(ftell)) != a2(?).
  The `beq` branch at 0x10003c68 targets 0x10003ca4, is taken when a1(=ret(ftell)) >= 0x800 (signed), and falls through when a1(=ret(ftell)) < 0x800 (signed).
  The `bne` branch at 0x10003c9c targets 0x10003c70, is taken when a2(?) < 0x800 (signed), and falls through when a2(?) >= 0x800 (signed).
  The `beq` branch at 0x10003cb8 targets 0x10003d08, is taken when a4(=0x0) >= a5(=[a0+12]) (signed), and falls through when a4(=0x0) < a5(=[a0+12]) (signed).
  The `bne` branch at 0x10003d00 targets 0x10003cc0, is taken when a1(?) < a2(=[a0+12]) (signed), and falls through when a1(?) >= a2(=[a0+12]) (signed).
  The `beq` branch at 0x10003d54 targets 0x10003d88 and is always taken.
  The `beq` branch at 0x10003d5c targets 0x10003d88 and is always taken.
  The `beq` branch at 0x10003d80 targets 0x10003d88 and is always taken.
  The return at 0x10003da0 has v0 = one of 0x0, 0x1.

- `kerror` in `usr/gfx/VOYAGER/bin/vpm` at 0x10003db0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x10003db0-0x10003fdc (556 bytes).
  It occupies 556 bytes.
  The `lw` at 0x10003df4 loads 4 bytes from sym(opts) +0x260.
  2 such `lw` accesses load 4 bytes from sym(output) +0x0, including `lw` at 0x10003e1c, `lw` at 0x10003e4c.
  3 such `lw` accesses load 4 bytes from table(0x1000861c) +0x0, including `lw` at 0x10003e38, `lw` at 0x10003e84, `lw` at 0x10003f2c.
  2 such `lw` accesses load 4 bytes from sym(summary) +0x0, including `lw` at 0x10003e68, `lw` at 0x10003e98.
  The `sw` at 0x10003eb8 stores 4 bytes to sym(summary_error) +0x0.
  2 such `lw` accesses load 4 bytes from sym(opts) +0x264, including `lw` at 0x10003ec8, `lw` at 0x10003f5c.
  The `jalr` at 0x10003e10 calls vsyslog with a0=0x3, a1=a1 at entry (arg1), a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x10003e40 calls fprintf with a0=[sym(output)], a1=0x10008820, a2=entry(0x1000861c), a3=(a0 << 0x3).
  The `jalr` at 0x10003e5c calls vfprintf with a0=[sym(output)], a1=a1 at entry (arg1), a2=sp-48, a3=?.
  The `jalr` at 0x10003e8c calls fprintf with a0=[sym(summary)], a1=0x10008820, a2=entry(0x1000861c), a3=(a0 << 0x3).
  The `jalr` at 0x10003ea8 calls vfprintf with a0=[sym(summary)], a1=a1 at entry (arg1), a2=sp-48, a3=?.
  The `jalr` at 0x10003ee4 calls fprintf with a0=sym(__iob)+32, a1=0x10008828, a2=a2 at entry (arg2), a3=[sym(opts)+612].
  The `jalr` at 0x10003f34 calls fprintf with a0=sym(__iob)+32, a1=0x10008820, a2=entry(0x1000861c), a3=(a0 << 0x3).
  The `jalr` at 0x10003f50 calls vfprintf with a0=sym(__iob)+32, a1=a1 at entry (arg1), a2=sp-48, a3=?.
  The `jalr` at 0x10003f78 calls fprintf with a0=sym(__iob)+32, a1=0x10008830, a2=?, a3=?.
  The `jal` at 0x10003fb0 calls close_report [0x10004860] with a0=?, a1=?, a2=a0 at entry (arg0), a3=?.
  The `jalr` at 0x10003fc0 calls exit with a0=0x1, a1=?, a2=?, a3=?.
  The `beq` branch at 0x10003df8 targets 0x10003ec4, is taken when at(=[sym(opts)+608]) == 0, and falls through when at(=[sym(opts)+608]) != 0.
  The `beq` branch at 0x10003ebc targets 0x10003fa0 and is always taken.
  The `bne` branch at 0x10003ecc targets 0x10003f08, is taken when a3(=[sym(opts)+612]) != 0, and falls through when a3(=[sym(opts)+612]) == 0.
  The `beq` branch at 0x10003ef0 targets 0x10003f08, is taken when v0(=ret(fprintf)) == 0, and falls through when v0(=ret(fprintf)) != 0.
  The `beq` branch at 0x10003f00 targets 0x10003f0c and is always taken.
  The `bne` branch at 0x10003f60 targets 0x10003f9c, is taken when a1(=[sym(opts)+612]) != 0, and falls through when a1(=[sym(opts)+612]) == 0.
  The `beq` branch at 0x10003f84 targets 0x10003f9c, is taken when v0(=ret(fprintf)) == 0, and falls through when v0(=ret(fprintf)) != 0.
  The `beq` branch at 0x10003f94 targets 0x10003fa0 and is always taken.
  The `bne` branch at 0x10003fa4 targets 0x10003fc8, is taken when a2(=a0) != 0, and falls through when a2(=a0) == 0.
  The return at 0x10003fd4 has v0 = one of ?, ret(exit).

- `klog` in `usr/gfx/VOYAGER/bin/vpm` at 0x10003fe0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x10003fe0-0x10004188 (424 bytes).
  It occupies 424 bytes.
  The `lw` at 0x10004024 loads 4 bytes from sym(opts) +0x258.
  3 such `lw` accesses load 4 bytes from sym(opts) +0x260, including `lw` at 0x1000403c, `lw` at 0x100040d0, `lw` at 0x10004118.
  2 such `lw` accesses load 4 bytes from sym(opts) +0x264, including `lw` at 0x1000405c, `lw` at 0x100040f0.
  4 such `lw` accesses load 4 bytes from sym(output) +0x0, including `lw` at 0x1000406c, `lw` at 0x10004084, `lw` at 0x100040b4.
  The `lw` at 0x100040a0 loads 4 bytes from table(0x1000861c) +0x0.
  The `lw` at 0x10004150 loads 4 bytes from sym(summary) +0x0.
  The `sw` at 0x10004170 stores 4 bytes to sym(summary_error) +0x0.
  The `jalr` at 0x10004078 calls fprintf with a0=[sym(output)], a1=0x10008828, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x100040a8 calls fprintf with a0=[sym(output)], a1=0x10008820, a2=entry(0x1000861c), a3=(a0 << 0x3).
  The `jalr` at 0x100040c4 calls vfprintf with a0=[sym(output)], a1=a1 at entry (arg1), a2=sp-48, a3=?.
  The `jalr` at 0x1000410c calls fprintf with a0=[sym(output)], a1=0x10008830, a2=?, a3=[sym(opts)+612].
  The `jalr` at 0x10004144 calls vsyslog with a0=0x6, a1=a1 at entry (arg1), a2=sp-48, a3=?.
  The `jalr` at 0x10004160 calls vfprintf with a0=[sym(summary)], a1=a1 at entry (arg1), a2=sp-48, a3=?.
  The `beq` branch at 0x10004030 targets 0x10004174, is taken when at(=a0) >= v0(=[sym(opts)+600]) (signed), and falls through when at(=a0) < v0(=[sym(opts)+600]) (signed).
  The `bne` branch at 0x10004040 targets 0x10004080, is taken when t1(=[sym(opts)+608]) != 0, and falls through when t1(=[sym(opts)+608]) == 0.
  The `beq` branch at 0x10004050 targets 0x10004080, is taken when t2(=a0) >= 0x3 (signed), and falls through when t2(=a0) < 0x3 (signed).
  The `bne` branch at 0x10004060 targets 0x10004080, is taken when t3(=[sym(opts)+612]) != 0, and falls through when t3(=[sym(opts)+612]) == 0.
  The `bne` branch at 0x100040d4 targets 0x10004114, is taken when a1(=[sym(opts)+608]) != 0, and falls through when a1(=[sym(opts)+608]) == 0.
  The `beq` branch at 0x100040e4 targets 0x10004114, is taken when a2(=a0) >= 0x3 (signed), and falls through when a2(=a0) < 0x3 (signed).
  The `bne` branch at 0x100040f4 targets 0x10004114, is taken when a3(=[sym(opts)+612]) != 0, and falls through when a3(=[sym(opts)+612]) == 0.
  The `beq` branch at 0x1000411c targets 0x10004174, is taken when a1(=[sym(opts)+608]) == 0, and falls through when a1(=[sym(opts)+608]) != 0.
  The `beq` branch at 0x1000412c targets 0x10004174, is taken when a2(=a0) >= 0x3 (signed), and falls through when a2(=a0) < 0x3 (signed).
  The return at 0x10004180 has v0 = one of [sym(opts)+600], ?, ret(vfprintf).

- `get_time` in `usr/gfx/VOYAGER/bin/vpm` at 0x10004190 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x10004190-0x100041e8 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x100041b0 calls time with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x100041c8 calls ctime with a0=sp-32, a1=?, a2=?, a3=?.
  The return at 0x100041e0 has v0 = ret(ctime).

- `findfile` in `usr/gfx/VOYAGER/bin/vpm` at 0x100041f0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x100041f0-0x10004310 (288 bytes).
  It occupies 288 bytes.
  The `jalr` at 0x1000421c calls getenv with a0=0x10008220, a1=a1 at entry (arg1), a2=0xc450, a3=a3 at entry (arg3).
  The `jalr` at 0x10004248 calls strcpy with a0=0x10008b10, a1=ret(getenv), a2=?, a3=ret(getenv).
  The `jalr` at 0x10004260 calls strcat with a0=0x10008b10, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0x10004278 calls access with a0=0x10008b10, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x100042b0 calls strcpy with a0=0x10008b10, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0x100042c8 calls access with a0=0x10008b10, a1=a1 at entry (arg1), a2=?, a3=?.
  The `beq` branch at 0x10004230 targets 0x100042a0, is taken when a3(=ret(getenv)) == 0, and falls through when a3(=ret(getenv)) != 0.
  The `bne` branch at 0x10004284 targets 0x100042a0, is taken when v0(=ret(access)) != 0, and falls through when v0(=ret(access)) == 0.
  The `beq` branch at 0x10004298 targets 0x100042f8 and is always taken.
  The `bne` branch at 0x100042d4 targets 0x100042f0, is taken when v0(=ret(access)) != 0, and falls through when v0(=ret(access)) == 0.
  The `beq` branch at 0x100042e8 targets 0x100042f8 and is always taken.
  The return at 0x10004308 has v0 = one of 0x0, 0x10008b10.

- `create_file` in `usr/gfx/VOYAGER/bin/vpm` at 0x10004310 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x10004310-0x10004594 (644 bytes).
  It occupies 644 bytes.
  The `lhu` at 0x10004378 loads 2 bytes from abs 0x10008838.
  The `lw` at 0x100043d4 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x1000433c calls strcpy with a0=sp-8416, a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10004350 calls strtok with a0=sp-8416, a1=0x10008838, a2=?, a3=?.
  The `jalr` at 0x100043a8 calls strcat with a0=sp-4312, a1=?, a2=?, a3=?.
  The `jalr` at 0x100043bc calls stat with a0=sp-4312, a1=sp-216, a2=?, a3=?.
  The `jalr` at 0x100043fc calls strtok with a0=0x0, a1=0x10008838, a2=?, a3=[sym(errno)], a4=0x2.
  The `jalr` at 0x10004428 calls fopen with a0=sp-4312, a1=a1 at entry (arg1), a2=?, a3=?, a4=ret(strtok).
  The `jalr` at 0x10004450 calls perror with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=ret(fopen).
  The `jalr` at 0x10004478 calls mkdir with a0=sp-4312, a1=0x1ed, a2=?, a3=?, a4=ret(strtok).
  The `jalr` at 0x10004494 calls perror with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x100044b8 calls perror with a0=a0 at entry (arg0), a1=?, a2=?, a3=[sym(errno)], a4=0x2.
  The `jalr` at 0x100044e0 calls strtok with a0=0x0, a1=0x10008838, a2=?, a3=?.
  The `jalr` at 0x1000450c calls fopen with a0=sp-4312, a1=a1 at entry (arg1), a2=?, a3=?, a6=ret(strtok).
  The `jalr` at 0x10004534 calls perror with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a7=ret(fopen).
  The `jalr` at 0x1000455c calls strcat with a0=sp-4312, a1=0x10008838, a2=?, a3=?.
  The `bne` branch at 0x10004368 targets 0x1000438c, is taken when v0(?) != v1(=0x2f), and falls through when v0(?) == v1(=0x2f).
  The `beq` branch at 0x10004384 targets 0x10004390 and is always taken.
  The `beq` branch at 0x10004394 targets 0x10004570, is taken when a2(=ret(strtok)) == 0, and falls through when a2(=ret(strtok)) != 0.
  The `bgez` branch at 0x100043c8 targets 0x100044d4, is taken when v0(=ret(stat)) >= 0 (signed), and falls through when v0(=ret(stat)) < 0 (signed).
  The `beq` branch at 0x100043e0 targets 0x100043f0, is taken when a3(=[sym(errno)]) == a4(=0x2), and falls through when a3(=[sym(errno)]) != a4(=0x2).
  The `beq` branch at 0x100043e8 targets 0x100044b0 and is always taken.
  The `bne` branch at 0x10004414 targets 0x1000446c, is taken when a4(=ret(strtok)) != 0, and falls through when a4(=ret(strtok)) == 0.
  The `bne` branch at 0x10004440 targets 0x10004464, is taken when a5(=ret(fopen)) != 0, and falls through when a5(=ret(fopen)) == 0.
  The `beq` branch at 0x1000445c targets 0x1000457c and is always taken.
  The `beq` branch at 0x10004464 targets 0x100044a8 and is always taken.
  The `bgez` branch at 0x10004484 targets 0x100044a8, is taken when v0(=ret(mkdir)) >= 0 (signed), and falls through when v0(=ret(mkdir)) < 0 (signed).
  The `beq` branch at 0x100044a0 targets 0x1000457c and is always taken.
  The `beq` branch at 0x100044a8 targets 0x100044cc and is always taken.
  The `beq` branch at 0x100044c4 targets 0x1000457c and is always taken.
  The `beq` branch at 0x100044cc targets 0x10004548 and is always taken.
  The `bne` branch at 0x100044f8 targets 0x10004548, is taken when a6(=ret(strtok)) != 0, and falls through when a6(=ret(strtok)) == 0.
  The `bne` branch at 0x10004524 targets 0x10004548, is taken when a7(=ret(fopen)) != 0, and falls through when a7(=ret(fopen)) == 0.
  The `beq` branch at 0x10004540 targets 0x1000457c and is always taken.
  The `bne` branch at 0x10004568 targets 0x1000439c, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The return at 0x1000458c has v0 = one of 0x0, ?.

- `open_file` in `usr/gfx/VOYAGER/bin/vpm` at 0x100045a0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x100045a0-0x10004858 (696 bytes).
  It occupies 696 bytes.
  The `lw` at 0x100045c8 loads 4 bytes from sym(opts) +0x25c.
  2 such `lw` accesses load 4 bytes from sym(output) +0x0, including `lw` at 0x1000461c, `lw` at 0x1000480c.
  The `lhu` at 0x100046b0 loads 2 bytes from ret(BSDreaddir) +0xa.
  The `ld` at 0x100046ec loads 8 bytes from abs 0x10008248.
  The `ld` at 0x100046f4 loads 8 bytes from abs 0x10008250.
  The `ld` at 0x100046fc loads 8 bytes from abs 0x10008258.
  The `lw` at 0x10004704 loads 4 bytes from abs 0x10008260.
  The `lbu` at 0x1000470c loads 1 byte from abs 0x10008264.
  The `jalr` at 0x100045e0 calls fopen with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10004608 calls perror with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x10004630 calls fprintf with a0=[sym(output)], a1=0x10008230, a2=a0 at entry (arg0), a3=?.
  The `jalr` at 0x10004654 calls BSDopendir with a0=0x10008248, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10004688 calls BSDreaddir with a0=ret(BSDopendir), a1=ret(BSDopendir), a2=?, a3=?.
  The `jalr` at 0x100046cc calls strncmp with a0=(ret(BSDreaddir) + [ret(BSDreaddir)+10]:2-5)+12, a1=0x10008840, a2=0x5, a3=?.
  The `jalr` at 0x10004728 calls strcat with a0=sp-2256, a1=ret(BSDreaddir)+12, a2=sp-2256, a3=0x0, a4=sp-2256, a5=0x2f53472f, a6=0x696167732f676678, a7=0x2f63726173682f64.
  The `jalr` at 0x1000473c calls stat with a0=sp-2256, a1=sp-1232, a2=?, a3=?.
  The `jalr` at 0x10004778 calls strcpy with a0=sp-1080, a1=sp-2256, a2=?, a3=?.
  The `jalr` at 0x10004788 calls BSDreaddir with a0=ret(BSDopendir), a1=?, a2=?, a3=?.
  The `jalr` at 0x100047b0 calls BSDclosedir with a0=ret(BSDopendir), a1=?, a2=?, a3=?.
  The `jalr` at 0x100047d0 calls fopen with a0=sp-1080, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x100047f8 calls perror with a0=sp-1080, a1=?, a2=?, a3=?.
  The `jalr` at 0x10004820 calls fprintf with a0=[sym(output)], a1=0x10008230, a2=sp-1080, a3=?.
  The `beq` branch at 0x100045cc targets 0x10004648, is taken when at(=[sym(opts)+604]) == 0, and falls through when at(=[sym(opts)+604]) != 0.
  The `bne` branch at 0x100045f8 targets 0x10004618, is taken when v1(=ret(fopen)) != 0, and falls through when v1(=ret(fopen)) == 0.
  The `beq` branch at 0x10004610 targets 0x10004638 and is always taken.
  The `beq` branch at 0x10004640 targets 0x10004840 and is always taken.
  The `bne` branch at 0x1000466c targets 0x10004680, is taken when a1(=ret(BSDopendir)) != 0, and falls through when a1(=ret(BSDopendir)) == 0.
  The `beq` branch at 0x10004678 targets 0x10004840 and is always taken.
  The `beq` branch at 0x100046a0 targets 0x100047a8, is taken when a2(=ret(BSDreaddir)) == 0, and falls through when a2(=ret(BSDreaddir)) != 0.
  The `bne` branch at 0x100046d8 targets 0x10004780, is taken when v0(=ret(strncmp)) != 0, and falls through when v0(=ret(strncmp)) == 0.
  The `bltz` branch at 0x10004748 targets 0x10004780, is taken when v0(=ret(stat)) < 0 (signed), and falls through when v0(=ret(stat)) >= 0 (signed).
  The `beq` branch at 0x1000475c targets 0x10004780, is taken when a4(?) >= a5(?) (unsigned), and falls through when a4(?) < a5(?) (unsigned).
  The `bne` branch at 0x100047a0 targets 0x100046a8, is taken when a7(=ret(BSDreaddir)) != 0, and falls through when a7(=ret(BSDreaddir)) == 0.
  The `beq` branch at 0x100047bc targets 0x10004838, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0x100047e8 targets 0x10004808, is taken when t1(=ret(fopen)) != 0, and falls through when t1(=ret(fopen)) == 0.
  The `beq` branch at 0x10004800 targets 0x10004828 and is always taken.
  The `beq` branch at 0x10004830 targets 0x10004840 and is always taken.
  The return at 0x10004850 has v0 = one of ret(fopen), 0x0.

- `close_report` in `usr/gfx/VOYAGER/bin/vpm` at 0x10004860 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x10004860-0x10004868 (8 bytes).
  It occupies 8 bytes.
  The return at 0x10004860 has v0 = ?.

- `save_system_info` in `usr/gfx/VOYAGER/bin/vpm` at 0x10004870 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x10004870-0x10004968 (248 bytes).
  It occupies 248 bytes.
  The `jal` at 0x1000489c calls klog [0x10003fe0] with a0=0x5, a1=0x10008278, a2=0xbdd0, a3=a3 at entry (arg3).
  The `jal` at 0x100048bc calls dfWriteNewSectionFromPipe [0x10002b90] with a0=a0 at entry (arg0), a1=0x10008298, a2=0x100082a8, a3=?.
  The `jal` at 0x100048d8 calls dfWriteNewSectionFromPipe [0x10002b90] with a0=a0 at entry (arg0), a1=0x10008858, a2=0x100082c8, a3=?.
  The `jal` at 0x100048f4 calls dfWriteNewSectionFromPipe [0x10002b90] with a0=a0 at entry (arg0), a1=0x10008860, a2=0x100082d8, a3=?.
  The `jal` at 0x10004910 calls dfWriteNewSectionFromPipe [0x10002b90] with a0=a0 at entry (arg0), a1=0x10008868, a2=0x100082e8, a3=?.
  The `jalr` at 0x10004928 calls access with a0=0x100082f8, a1=0x10, a2=?, a3=?.
  The `jal` at 0x1000494c calls dfWriteNewSectionFromPipe [0x10002b90] with a0=a0 at entry (arg0), a1=0x10008870, a2=0x10008310, a3=?.
  The `bne` branch at 0x10004930 targets 0x10004954, is taken when v0(=ret(access)) != 0, and falls through when v0(=ret(access)) == 0.
  The return at 0x10004960 has v0 = one of ret(access), ret(dfWriteNewSectionFromPipe).

- `clockRead` in `usr/gfx/VOYAGER/bin/vpm` at 0x10004a80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x10004a80-0x10004b0c (140 bytes).
  It occupies 140 bytes.
  4 such `lw` accesses load 4 bytes from abs 0x100087e4, including `lw` at 0x10004a94, `lw` at 0x10004acc, `lw` at 0x10004ad8.
  4 such `lw` accesses load 4 bytes from sym(regs) +0x0, including `lw` at 0x10004a98, `lw` at 0x10004ad0, `lw` at 0x10004adc.
  The `lw` at 0x10004aa0 loads 4 bytes from [sym(regs)] +0x8.
  2 such `sw` accesses store 4 bytes to [sym(regs)] +0x8, including `sw` at 0x10004ad4, `sw` at 0x10004af8.
  The `lw` at 0x10004ae4 loads 4 bytes from [sym(regs)] +0xc.
  The return at 0x10004b04 has v0 = [[sym(regs)]+12].

- `dump_board` in `usr/gfx/VOYAGER/bin/vpm` at 0x10004c00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x10004c00-0x1000512c (1324 bytes).
  It occupies 1324 bytes.
  The `jalr` at 0x10004c2c calls signal with a0=0xa, a1=sym(sigbusHandler), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10004c48 calls setjmp with a0=0x10009b10, a1=?, a2=?, a3=?.
  The `jalr` at 0x10004c68 calls signal with a0=0xa, a1=ret(signal), a2=?, a3=?.
  The `jal` at 0x10004c80 calls kerror [0x10003db0] with a0=0x0, a1=0x10008390, a2=?, a3=?.
  The `jal` at 0x10004ca0 calls (unnamed) [0x10004b10] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x10004cbc calls sprintf with a0=sp-104, a1=0x100083c0, a2=a1 at entry (arg1), a3=?.
  The `jal` at 0x10004cd0 calls dfNewSection [0x100028b0] with a0=a0 at entry (arg0), a1=sp-104, a2=?, a3=?.
  The `jal` at 0x10004d00 calls kerror [0x10003db0] with a0=0x1, a1=0x10008360, a2=0x100083d8, a3=?.
  The `jal` at 0x10004d14 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008878, a2=?, a3=?.
  The `jal` at 0x10004d28 calls (unnamed) [0x100049c0] with a0=0x44, a1=?, a2=?, a3=?.
  The `jal` at 0x10004d48 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x100083e8, a2=ret(0x100049c0), a3=?.
  The `jal` at 0x10004d5c calls (unnamed) [0x100049c0] with a0=0x710, a1=?, a2=?, a3=?.
  The `jal` at 0x10004d74 calls (unnamed) [0x100049c0] with a0=0x714, a1=?, a2=?, a3=?.
  The `jal` at 0x10004d98 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008400, a2=?, a3=ret(0x100049c0).
  The `jal` at 0x10004dac calls (unnamed) [0x10004a40] with a0=0x15e0, a1=?, a2=?, a3=?.
  The `jal` at 0x10004dc4 calls (unnamed) [0x10004a40] with a0=0x15e8, a1=?, a2=?, a3=?.
  The `jal` at 0x10004de4 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008428, a2=?, a3=ret(0x10004a40).
  The `jal` at 0x10004df8 calls (unnamed) [0x10004a40] with a0=0x15f0, a1=?, a2=?, a3=?.
  The `jal` at 0x10004e18 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008460, a2=ret(0x10004a40), a3=?.
  The `jal` at 0x10004e2c calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008878, a2=?, a3=?.
  The `jal` at 0x10004e40 calls (unnamed) [0x100049c0] with a0=0x4018, a1=?, a2=?, a3=?.
  The `jal` at 0x10004e60 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008478, a2=ret(0x100049c0), a3=?.
  The `jal` at 0x10004e74 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008878, a2=?, a3=?.
  The `jal` at 0x10004e84 calls clockRead [0x10004a80] with a0=0x14, a1=?, a2=?, a3=?.
  The `jal` at 0x10004e98 calls clockRead [0x10004a80] with a0=0x15, a1=?, a2=?, a3=?.
  The `jal` at 0x10004ebc calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008490, a2=?, a3=ret(clockRead).
  The `jal` at 0x10004ecc calls clockRead [0x10004a80] with a0=0xe, a1=?, a2=?, a3=?.
  The `jal` at 0x10004eec calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x100084b8, a2=ret(clockRead), a3=?.
  The `jal` at 0x10004efc calls clockRead [0x10004a80] with a0=0x12, a1=?, a2=?, a3=?.
  The `jal` at 0x10004f1c calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x100084d0, a2=ret(clockRead), a3=?.
  The `jal` at 0x10004f30 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008878, a2=?, a3=?.
  The `jal` at 0x10004f44 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008880, a2=?, a3=?.
  The `jal` at 0x10004f58 calls (unnamed) [0x100049c0] with a0=0x224, a1=?, a2=?, a3=?.
  The `jal` at 0x10004f78 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x100084e0, a2=ret(0x100049c0), a3=?.
  The `jal` at 0x10004f8c calls (unnamed) [0x100049c0] with a0=0x228, a1=?, a2=?, a3=?.
  The `jal` at 0x10004fac calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x100084f8, a2=ret(0x100049c0), a3=?.
  The `jal` at 0x10004fc0 calls (unnamed) [0x100049c0] with a0=0x350, a1=?, a2=?, a3=?.
  The `jal` at 0x10004fe0 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008510, a2=ret(0x100049c0), a3=?.
  The `jal` at 0x10004ff4 calls (unnamed) [0x100049c0] with a0=0x354, a1=?, a2=?, a3=?.
  The `jal` at 0x10005014 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008528, a2=ret(0x100049c0), a3=?.
  The `jal` at 0x1000502c calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008548, a2=?, a3=?.
  The `jal` at 0x10005040 calls (unnamed) [0x100049c0] with a0=0x324, a1=?, a2=?, a3=?.
  The `jal` at 0x10005060 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008558, a2=ret(0x100049c0), a3=?.
  The `jal` at 0x10005074 calls (unnamed) [0x100049c0] with a0=0x328, a1=?, a2=?, a3=?.
  The `jal` at 0x10005094 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008570, a2=ret(0x100049c0), a3=?.
  The `jal` at 0x100050a8 calls (unnamed) [0x100049c0] with a0=0x358, a1=?, a2=?, a3=?.
  The `jal` at 0x100050c8 calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x10008588, a2=ret(0x100049c0), a3=?.
  The `jal` at 0x100050dc calls (unnamed) [0x100049c0] with a0=0x35c, a1=?, a2=?, a3=?.
  The `jal` at 0x100050fc calls dfPrintf [0x10002d40] with a0=a0 at entry (arg0), a1=0x100085a0, a2=ret(0x100049c0), a3=?.
  The `jalr` at 0x10005110 calls signal with a0=0xa, a1=ret(signal), a2=?, a3=?.
  The `beq` branch at 0x10004c54 targets 0x10004c90, is taken when v0(=ret(setjmp)) == 0, and falls through when v0(=ret(setjmp)) != 0.
  The `beq` branch at 0x10004c88 targets 0x10005118 and is always taken.
  The `bne` branch at 0x10004ce0 targets 0x10004d08, is taken when v0(=ret(dfNewSection)) != a2(=-0x1), and falls through when v0(=ret(dfNewSection)) == a2(=-0x1).
  The return at 0x10005124 has v0 = one of ret(kerror), ret(signal).

- `__istart` in `usr/gfx/VOYAGER/bin/vpm` at 0x1000513c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/VOYAGER/bin/vpm`.
  Range: 0x1000513c-0x10005140 (4 bytes).
  It occupies 4 bytes.
