# Readings: `usr/diags/SG/bin/olsgsys`

One entry per routine, filed here from the reading batches by binary.

- `__start` in `usr/diags/SG/bin/olsgsys` at 0x100086f0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100086f0-0x100087fc (268 bytes).
  It occupies 268 bytes.
  3 such `lw` accesses load 4 bytes from table(0x22910) +0x0, including `lw` at 0x10008730, `lw` at 0x10008748, `lw` at 0x100087cc.
  2 such `lw` accesses load 4 bytes from entry(0x22910) +0x0, including `lw` at 0x10008738, `lw` at 0x100087dc.
  The `sw` at 0x1000874c stores 4 bytes to entry(0x22910) +0x0.
  2 such `lw` accesses load 4 bytes from table(0x22d38) +0x0, including `lw` at 0x10008760, `lw` at 0x100087c0.
  The `sw` at 0x10008768 stores 4 bytes to entry(0x22d38) +0x0.
  2 such `lw` accesses load 4 bytes from table(0x22d34) +0x0, including `lw` at 0x10008774, `lw` at 0x100087c8.
  The `sw` at 0x10008778 stores 4 bytes to entry(0x22d34) +0x0.
  The `lw` at 0x1000877c loads 4 bytes from table(0x22c28) +0x0.
  The `lw` at 0x10008794 loads 4 bytes from table(0x22938) +0x0.
  The `lw` at 0x100087b4 loads 4 bytes from table(0x22a64) +0x0.
  The `lw` at 0x100087d0 loads 4 bytes from entry(0x22d38) +0x0.
  The `lw` at 0x100087d4 loads 4 bytes from entry(0x22d34) +0x0.
  The `lw` at 0x100087ec loads 4 bytes from table(0x22914) +0x0.
  The `bal` at 0x10008708 calls __start+32 [0x10008710] with a0=?, a1=sp+4, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10008784 calls (unknown callee) with a0=?, a1=?, a2=?, a3=[entry(0x22910)].
  The `jalr` at 0x10008798 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x100087d8 calls (unknown callee) with a0=[entry(0x22d38)], a1=[entry(0x22d34)], a2=[entry(0x22910)], a3=?.
  The `jalr` at 0x100087f0 calls (unknown callee) with a0=ret(?), a1=?, a2=?, a3=?.
  The `bne` branch at 0x1000873c targets 0x10008750, is taken when a3(=[entry(0x22910)]) != 0, and falls through when a3(=[entry(0x22910)]) == 0.

- `_mcount` in `usr/diags/SG/bin/olsgsys` at 0x100087fc (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100087fc-0x10008808 (12 bytes).
  It occupies 12 bytes.
  The return at 0x10008800 has v0 = ?.

- `_main` in `usr/diags/SG/bin/olsgsys` at 0x10008810 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10008810-0x10008904 (244 bytes).
  It occupies 244 bytes.
  2 such `lw` accesses load 4 bytes from abs 0x1002b040, including `lw` at 0x10008830, `lw` at 0x1000885c.
  The `lw` at 0x10008848 loads 4 bytes from abs 0x1002b038.
  The `lw` at 0x10008870 loads 4 bytes from abs 0x1002aeb8.
  The `lw` at 0x10008874 loads 4 bytes from abs 0x1002aa88.
  The `lw` at 0x10008884 loads 4 bytes from abs 0x1002b04c.
  The `sw` at 0x10008890 stores 4 bytes to abs 0x1002aa88.
  The `lw` at 0x1000889c loads 4 bytes from abs 0x1002aec0.
  The `lw` at 0x100088b4 loads 4 bytes from abs 0x1002aec4.
  The `lw` at 0x100088cc loads 4 bytes from abs 0x0.
  The `lw` at 0x100088e8 loads 4 bytes from ?.
  The `jalr` at 0x10008860 calls _mpi_sgi_init with a0=a0 at entry (arg0), a1=sym(_mpi_sgi_init), a2=0x0, a3=a3 at entry (arg3).
  The `jalr` at 0x1000888c calls __ct__13Iostream_initGv with a0=0x1, a1=?, a2=0x1002aa78, a3=?.
  The `jalr` at 0x100088d8 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x10008844 targets 0x10008868, is taken when a1(=sym(_mpi_sgi_init)) == 0, and falls through when a1(=sym(_mpi_sgi_init)) != 0.
  The `beq` branch at 0x1000884c targets 0x1000886c, is taken when a1(=sym(_mpi_sgi_init)) == a2(=sym(__missing_function_)), and falls through when a1(=sym(_mpi_sgi_init)) != a2(=sym(__missing_function_)).
  The `beq` branch at 0x10008878 targets 0x100088ec, is taken when ra(=[0x1002aa88]) == 0, and falls through when ra(=[0x1002aa88]) != 0.
  The `beq` branch at 0x100088b8 targets 0x100088ec, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x100088d0 targets 0x100088e0, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bnel` branch at 0x100088e4 targets 0x100088d0, is taken when s5(?) != s7(=table(0x0)), and falls through when s5(?) == s7(=table(0x0)); its branch-likely delay slot `lw t9,0(s5)` at 0x100088e8 runs only when taken and is annulled on fall-through.
  The return at 0x100088fc has v0 = one of ?, ret(__ct__13Iostream_initGv).

- `_fini` in `usr/diags/SG/bin/olsgsys` at 0x10008910 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10008910-0x10008964 (84 bytes).
  It occupies 84 bytes.
  The `lw` at 0x10008930 loads 4 bytes from abs 0x1002aec8.
  The `lw` at 0x10008944 loads 4 bytes from abs 0x1002b050.
  The `jal` at 0x10008934 calls __process_needed_destructions__Gv [0x10008970] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1000894c calls __dt__13Iostream_initGv with a0=0x1, a1=0x2, a2=?, a3=?.
  The return at 0x1000895c has v0 = ret(__dt__13Iostream_initGv).

- `__process_needed_destructions__Gv` in `usr/diags/SG/bin/olsgsys` at 0x10008970 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10008970-0x100089f0 (128 bytes).
  It occupies 128 bytes.
  The `lw` at 0x10008990 loads 4 bytes from abs 0x1002aebc.
  2 such `lw` accesses load 4 bytes from abs 0x1002bc34, including `lw` at 0x10008994, `lw` at 0x100089b0.
  The `lw` at 0x100089bc loads 4 bytes from [0x1002bc34] +0x4.
  The `lw` at 0x100089c0 loads 4 bytes from [0x1002bc34] +0x8.
  The `lw` at 0x100089c4 loads 4 bytes from [0x1002bc34] +0x0.
  The `sw` at 0x100089cc stores 4 bytes to abs 0x1002bc34.
  The `jalr` at 0x100089a8 calls (unknown callee) with a0=[[0x1002bc34]+4], a1=0x2, a2=[0x1002bc34], a3=?.
  The `jalr` at 0x100089d0 calls (unknown callee) with a0=[[0x1002bc34]+4], a1=?, a2=[0x1002bc34], a3=?.
  The `beq` branch at 0x10008998 targets 0x100089e0, is taken when a2(=[0x1002bc34]) == 0, and falls through when a2(=[0x1002bc34]) != 0.
  The `beq` branch at 0x100089a0 targets 0x100089bc and is always taken.
  The `beq` branch at 0x100089b4 targets 0x100089e0, is taken when a2(=[0x1002bc34]) == 0, and falls through when a2(=[0x1002bc34]) != 0.
  The `bne` branch at 0x100089c8 targets 0x100089a8, is taken when a0(=[[0x1002bc34]+4]) != 0, and falls through when a0(=[[0x1002bc34]+4]) == 0.
  The `beq` branch at 0x100089d8 targets 0x100089b0 and is always taken.
  The return at 0x100089e8 has v0 = one of ?, ret(?).

- `__record_needed_destruction` in `usr/diags/SG/bin/olsgsys` at 0x100089f0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100089f0-0x10008a18 (40 bytes).
  It occupies 40 bytes.
  The `lw` at 0x10008a04 loads 4 bytes from abs 0x1002aebc.
  The `lw` at 0x10008a08 loads 4 bytes from abs 0x1002bc34.
  The `sw` at 0x10008a0c stores 4 bytes to abs 0x1002bc34.
  The `sw` at 0x10008a14 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The return at 0x10008a10 has v0 = [0x1002bc34].

- `__std__needed_destruction_list` in `usr/diags/SG/bin/olsgsys` at 0x10008a20 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10008a20-0x10008a5c (60 bytes).
  It occupies 60 bytes.
  The `lw` at 0x10008a40 loads 4 bytes from abs 0x1002aec8.
  The `jal` at 0x10008a44 calls __process_needed_destructions__Gv [0x10008970] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x10008a54 has v0 = ret(__process_needed_destructions__Gv).

- `GetDumpfile` in `usr/diags/SG/bin/olsgsys` at 0x10008b6c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10008b6c-0x10008ba8 (60 bytes).
  It occupies 60 bytes.
  The `lw` at 0x10008b8c loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `jal` at 0x10008b90 calls dl_hash_enter [0x1001d31c] with a0=0x100240a8, a1=[a2], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x10008ba0 has v0 = ret(dl_hash_enter).

- `GetDisplay` in `usr/diags/SG/bin/olsgsys` at 0x10008ba8 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10008ba8-0x10008be0 (56 bytes).
  It occupies 56 bytes.
  The `lw` at 0x10008bc0 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `jal` at 0x10008bc8 calls dl_hash_enter [0x1001d31c] with a0=0x1002b490, a1=[a2], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x10008bd8 has v0 = ret(dl_hash_enter).

- `GetVideoSubtests` in `usr/diags/SG/bin/olsgsys` at 0x10008be0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10008be0-0x10008c1c (60 bytes).
  It occupies 60 bytes.
  The `lw` at 0x10008c00 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `jal` at 0x10008c04 calls dl_hash_enter [0x1001d31c] with a0=0x100241a8, a1=[a2], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x10008c14 has v0 = ret(dl_hash_enter).

- `GetSeqDMASubtests` in `usr/diags/SG/bin/olsgsys` at 0x10008c1c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10008c1c-0x10008c58 (60 bytes).
  It occupies 60 bytes.
  The `lw` at 0x10008c3c loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `jal` at 0x10008c40 calls dl_hash_enter [0x1001d31c] with a0=0x100241c0, a1=[a2], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x10008c50 has v0 = ret(dl_hash_enter).

- `handle_crc_error` in `usr/diags/SG/bin/olsgsys` at 0x10008c58 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10008c58-0x10008c9c (68 bytes).
  It occupies 68 bytes.
  The `jal` at 0x10008c80 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100241d8, a2=a4 at entry (arg4), a3=a3 at entry (arg3).
  The return at 0x10008c94 has v0 = -0x1.

- `isXrunning` in `usr/diags/SG/bin/olsgsys` at 0x10008c9c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10008c9c-0x10008d18 (124 bytes).
  It occupies 124 bytes.
  The `jalr` at 0x10008cb8 calls XOpenDisplay with a0=0x1002b498, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10008cd4 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10024208, a2=?, a3=?.
  The `jalr` at 0x10008ce0 calls XCloseDisplay with a0=ret(XOpenDisplay), a1=?, a2=?, a3=?.
  The `jal` at 0x10008cfc calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10024220, a2=?, a3=?.
  The `beq` branch at 0x10008cc0 targets 0x10008cf0, is taken when v0(=ret(XOpenDisplay)) == 0, and falls through when v0(=ret(XOpenDisplay)) != 0.
  The `beq` branch at 0x10008ce8 targets 0x10008d08 and is always taken.
  The return at 0x10008d10 has v0 = one of -0x1, 0x0.

- `setXErrorValue` in `usr/diags/SG/bin/olsgsys` at 0x10008d18 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10008d18-0x10008d7c (100 bytes).
  It occupies 100 bytes.
  The `lbu` at 0x10008d30 loads 1 byte from a1 (arg1 at entry) +0x10.
  The `sw` at 0x10008d5c stores 4 bytes to sym(xErrorFlag) +0x0.
  The `jalr` at 0x10008d3c calls XGetErrorText with a0=a0 at entry (arg0), a1=[a1+16]:1, a2=sp-96, a3=0x50.
  The `jal` at 0x10008d60 calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x10024238, a2=sp-96, a3=0x1, a4=sym(xErrorFlag).
  The return at 0x10008d74 has v0 = 0x0.

- `initvoy_p` in `usr/diags/SG/bin/olsgsys` at 0x10008d7c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10008d7c-0x10008d94 (24 bytes).
  It occupies 24 bytes.
  The `sb` at 0x10008d7c stores 1 byte to a0 (arg0 at entry) +0x3.
  The `sw` at 0x10008d80 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `sb` at 0x10008d84 stores 1 byte to a0 (arg0 at entry) +0x1.
  The `sw` at 0x10008d88 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `sb` at 0x10008d90 stores 1 byte to a0 (arg0 at entry) +0x2.
  The return at 0x10008d8c has v0 = ?.

- `clearvoy_p` in `usr/diags/SG/bin/olsgsys` at 0x10008d94 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10008d94-0x10008e3c (168 bytes).
  It occupies 168 bytes.
  The `lw` at 0x10008da8 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x10008df8 loads 4 bytes from ?.
  The `sw` at 0x10008e2c stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `sb` at 0x10008e30 stores 1 byte to a0 (arg0 at entry) +0x1.
  The `jal` at 0x10008dec calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10024250, a2=?, a3=?.
  The `jalr` at 0x10008dfc calls free with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x10008dc0 targets 0x10008dd8 and is always taken.
  The `beq` branch at 0x10008dd0 targets 0x10008e18, is taken when s0(?) >= 0x40 (signed), and falls through when s0(?) < 0x40 (signed).
  The `beq` branch at 0x10008dd8 targets 0x10008dc8, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `bne` branch at 0x10008e0c targets 0x10008dd8, is taken when s0(?) < 0x40 (signed), and falls through when s0(?) >= 0x40 (signed).
  The return at 0x10008e34 has v0 = one of ?, ret(free).

- `TEST_discovery` in `usr/diags/SG/bin/olsgsys` at 0x10008e3c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10008e3c-0x10008f78 (316 bytes).
  It occupies 316 bytes.
  The `sw` at 0x10008e98 stores 4 bytes to sym(noXrunning) +0x0.
  The `lbu` at 0x10008ed8 loads 1 byte from a0 (arg0 at entry) +0x1.
  The `jal` at 0x10008e68 calls initvoy_p [0x10008d7c] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10008e7c calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10024268, a2=?, a3=?.
  The `jal` at 0x10008e88 calls isXrunning [0x10008c9c] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10008ea8 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10024288, a2=sym(noXrunning), a3=?.
  The `jal` at 0x10008ebc calls diag_discover_agps [0x1001006c] with a0=a0 at entry (arg0), a1=?, a2=[0x1002bb18], a3=?.
  The `jal` at 0x10008ec8 calls DiscoverLoadIS1Info [0x1000f9e4] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x10008edc calls dl_output_info [0x100189a4] with a0=0x100242b8, a1=[a0+1]:1, a2=?, a3=?.
  The `jal` at 0x10008ee8 calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10008ef4 calls printAGP [0x10008f78] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x10008f00 calls printIS1 [0x100090c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x10008f0c calls sanityCheck [0x100092d4] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x10008f28 calls dl_output_rslt [0x10017d3c] with a0=0x0, a1=0x0, a2=?, a3=?.
  The `jal` at 0x10008f44 calls dl_output_rslt [0x10017d3c] with a0=0x2, a1=0x100242d0, a2=sym(noXrunning), a3=?.
  The `jal` at 0x10008f68 calls dl_output_rslt [0x10017d3c] with a0=0x1, a1=0x0, a2=?, a3=?.
  The `beq` branch at 0x10008e5c targets 0x10008e70, is taken when at(=[0x1002bb18]) == 0, and falls through when at(=[0x1002bb18]) != 0.
  The `bne` branch at 0x10008e94 targets 0x10008f38, is taken when v0(=ret(isXrunning)) != 0, and falls through when v0(=ret(isXrunning)) == 0.
  The `beq` branch at 0x10008eb4 targets 0x10008ed0, is taken when a2(=[0x1002bb18]) == 0, and falls through when a2(=[0x1002bb18]) != 0.
  The `blez` branch at 0x10008f18 targets 0x10008f60, is taken when a1(?) <= 0 (signed), and falls through when a1(?) > 0 (signed).
  The `beq` branch at 0x10008f30 targets 0x10008f50 and is always taken.
  The `beq` branch at 0x10008f70 targets 0x10008f50 and is always taken.
  The return at 0x10008f58 has v0 = ret(dl_output_rslt).

- `printAGP` in `usr/diags/SG/bin/olsgsys` at 0x10008f78 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10008f78-0x100090c0 (328 bytes).
  It occupies 328 bytes.
  The `lbu` at 0x10008fe0 loads 1 byte from a0 (arg0 at entry) +0x1.
  The `lw` at 0x10008ffc loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x1000908c loads 4 bytes from ?.
  The `jal` at 0x10008fbc calls dl_output_dbug [0x10019758] with a0=0x6, a1=0x100242f8, a2=0x29ec0, a3=a3 at entry (arg3).
  The `jal` at 0x10008fcc calls dl_output_indent [0x1001a4d0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10008fe4 calls dl_output_dbug [0x10019758] with a0=0x6, a1=0x10024308, a2=[a0+1]:1, a3=?.
  The `jal` at 0x10008ff4 calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000901c calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10024318, a2=?, a3=?.
  The `jal` at 0x10009028 calls dl_output_indent [0x1001a4d0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10009038 calls read_agpReg16 [0x100158cc] with a0=0xf00, a1=?, a2=?, a3=?.
  The `jal` at 0x10009050 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10024330, a2=ret(read_agpReg16), a3=?.
  The `jal` at 0x10009060 calls read_agpReg16 [0x100158cc] with a0=0xf02, a1=?, a2=?, a3=?.
  The `jal` at 0x10009078 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10024340, a2=ret(read_agpReg16), a3=?.
  The `jal` at 0x10009084 calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x10009004 targets 0x10009098, is taken when s2(=[a0+12]) == 0, and falls through when s2(=[a0+12]) != 0.
  The `bne` branch at 0x10009090 targets 0x1000900c, is taken when s2(?) != 0, and falls through when s2(?) == 0.
  The return at 0x100090b8 has v0 = ret(dl_output_outdent).

- `printIS1` in `usr/diags/SG/bin/olsgsys` at 0x100090c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100090c0-0x100092d4 (532 bytes).
  It occupies 532 bytes.
  The `lw` at 0x100090c8 loads 4 bytes from a0 (arg0 at entry) +0x8.
  16 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10009138, `lw` at 0x10009150, `lw` at 0x10009168.
  The `jal` at 0x10009114 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x10024350, a2=?, a3=?.
  The `jal` at 0x10009120 calls dl_output_indent [0x1001a4d0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000913c calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024360, a2=?, a3=?.
  The `jal` at 0x10009154 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024370, a2=?, a3=?.
  The `jal` at 0x1000916c calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024390, a2=?, a3=?.
  The `jal` at 0x10009184 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100243b0, a2=?, a3=?.
  The `jal` at 0x1000919c calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100243d0, a2=?, a3=?.
  The `jal` at 0x100091b4 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100243f0, a2=?, a3=?.
  The `jal` at 0x100091cc calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024410, a2=?, a3=?.
  The `jal` at 0x100091e4 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024430, a2=?, a3=?.
  The `jal` at 0x100091fc calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024450, a2=?, a3=?.
  The `jal` at 0x10009214 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024470, a2=?, a3=?.
  The `jal` at 0x1000922c calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024490, a2=?, a3=?.
  The `jal` at 0x10009244 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100244b0, a2=?, a3=?.
  The `jal` at 0x1000925c calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100244d0, a2=?, a3=?.
  The `jal` at 0x10009274 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100244f0, a2=?, a3=?.
  The `jal` at 0x1000928c calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024510, a2=?, a3=?.
  The `jal` at 0x10009298 calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x100090f4 targets 0x100092ac, is taken when s2(=[a0+8]) == 0, and falls through when s2(=[a0+8]) != 0.
  The `bne` branch at 0x100092a4 targets 0x10009108, is taken when s2(?) != 0, and falls through when s2(?) == 0.
  The return at 0x100092cc has v0 = one of ?, ret(dl_output_outdent).

- `sanityCheck` in `usr/diags/SG/bin/olsgsys` at 0x100092d4 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100092d4-0x10009338 (100 bytes).
  It occupies 100 bytes.
  The `lbu` at 0x100092d8 loads 1 byte from a0 (arg0 at entry) +0x1.
  The `jal` at 0x10009300 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10024540, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10009328 calls dl_output_error [0x10018b7c] with a0=0x271a, a1=0x10024530, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x100092ec targets 0x1000931c, is taken when v0(=[a0+1]:1) == 0, and falls through when v0(=[a0+1]:1) != 0.
  The `beq` branch at 0x10009330 targets 0x1000930c and is always taken.
  The return at 0x10009314 has v0 = one of 0x0, 0x271a.

- `isSWcursor_on` in `usr/diags/SG/bin/olsgsys` at 0x10009338 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10009338-0x100095b8 (640 bytes).
  It occupies 640 bytes.
  2 such `lbu` accesses load 1 byte from a0 (arg0 at entry) +0x1, including `lbu` at 0x1000933c, `lbu` at 0x100093b0.
  The `lw` at 0x10009368 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x100093c0 loads 4 bytes from ?.
  The `lw` at 0x10009540 loads 4 bytes from sym(options_mask) +0x0.
  The `sw` at 0x10009554 stores 4 bytes to sym(options_mask) +0x0.
  The `jalr` at 0x100093a4 calls fclose with a0=ret(fopen), a1=?, a2=?, a3=?.
  The `jalr` at 0x100093c8 calls atoi with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x100093d8 calls atoi with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x100093f4 calls sprintf with a0=sp-2464, a1=0x10024570, a2=ret(atoi), a3=?.
  The `jalr` at 0x1000940c calls sprintf with a0=sp-2448, a1=0x10024580, a2=ret(atoi), a3=?.
  The `jalr` at 0x1000941c calls fopen with a0=sp-2448, a1=0x1002b4a0, a2=?, a3=?.
  The `jalr` at 0x10009438 calls fgets with a0=sp-2416, a1=0x400, a2=ret(fopen), a3=?.
  The `jalr` at 0x10009460 calls fgets with a0=sp-2416, a1=0x400, a2=ret(fopen), a3=?.
  The `jal` at 0x1000947c calls dl_output_dbug [0x10019758] with a0=0x9, a1=0x100245a8, a2=sp-2416, a3=?.
  The `jalr` at 0x100094a4 calls sscanf with a0=sp-2416, a1=0x100245c0, a2=sp-1392, a3=sp-1136, a4=sp-880, a5=sp-624, a6=sp-368.
  The `jalr` at 0x100094b8 calls strcmp with a0=sp-1136, a1=sp-2464, a2=?, a3=?.
  The `jalr` at 0x100094d0 calls strcmp with a0=sp-880, a1=0x1002b4a8, a2=?, a3=?.
  The `jalr` at 0x100094ec calls strcmp with a0=sp-624, a1=0x100245d0, a2=?, a3=?.
  The `jalr` at 0x10009504 calls strcmp with a0=sp-368, a1=0x1002b4b0, a2=?, a3=?.
  The `jal` at 0x10009528 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x100245e0, a2=ret(atoi), a3=?.
  The `jal` at 0x10009550 calls dl_output_dbug [0x10019758] with a0=0x6, a1=0x10024610, a2=?, a3=sym(options_mask).
  The `jal` at 0x100095a8 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10024598, a2=sp-2448, a3=?.
  The `blez` branch at 0x10009380 targets 0x10009560, is taken when v1(=[a0+1]:1) <= 0 (signed), and falls through when v1(=[a0+1]:1) > 0 (signed).
  The `beq` branch at 0x10009398 targets 0x100093c4 and is always taken.
  The `beq` branch at 0x100093bc targets 0x10009560, is taken when s6(?) >= a2(=[a0+1]:1) (signed), and falls through when s6(?) < a2(=[a0+1]:1) (signed).
  The `beq` branch at 0x10009424 targets 0x10009598, is taken when v0(=ret(fopen)) == 0, and falls through when v0(=ret(fopen)) != 0.
  The `beq` branch at 0x10009440 targets 0x100093a0, is taken when v0(=ret(fgets)) == 0, and falls through when v0(=ret(fgets)) != 0.
  The `beq` branch at 0x1000944c targets 0x1000946c and is always taken.
  The `beq` branch at 0x10009468 targets 0x100093a0, is taken when v0(=ret(fgets)) == 0, and falls through when v0(=ret(fgets)) != 0.
  The `blez` branch at 0x100094ac targets 0x10009454, is taken when v0(=ret(sscanf)) <= 0 (signed), and falls through when v0(=ret(sscanf)) > 0 (signed).
  The `bne` branch at 0x100094c0 targets 0x10009458, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `bne` branch at 0x100094d8 targets 0x10009458, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `bne` branch at 0x100094f4 targets 0x10009458, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `bne` branch at 0x1000950c targets 0x10009458, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `beq` branch at 0x10009558 targets 0x10009458 and is always taken.
  The `beq` branch at 0x100095b0 targets 0x10009564 and is always taken.
  The return at 0x10009590 has v0 = one of -0x1, 0x0.

- `pipeDraw` in `usr/diags/SG/bin/olsgsys` at 0x100095b8 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100095b8-0x10009d8c (2004 bytes).
  It occupies 2004 bytes.
  8 such `lw` accesses load 4 bytes from table(0x10031b18) +0x0, including `lw` at 0x10009664, `lw` at 0x10009688, `lw` at 0x100096bc.
  8 such `lw` accesses load 4 bytes from table(0x10031a18) +0x0, including `lw` at 0x10009670, `lw` at 0x1000968c, `lw` at 0x100096c4.
  2 such `sw` accesses store 4 bytes to a5 (arg5 at entry) +0x0, including `sw` at 0x100096fc, `sw` at 0x10009728.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10009714, `lw` at 0x10009994, `lw` at 0x10009c00.
  4 such `lw` accesses load 4 bytes from a5 (arg5 at entry) +0x0, including `lw` at 0x1000972c, `lw` at 0x10009788, `lw` at 0x100097a0.
  The `lw` at 0x10009790 loads 4 bytes from [a5] +0x0.
  The `lw` at 0x100097c0 loads 4 bytes from ([a5] + (a3 << 0x2)) +0x4.
  The `lw` at 0x100097e0 loads 4 bytes from ([a5] + (a3 << 0x2)) +0x10.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x84, including `lw` at 0x100098c0, `lw` at 0x100098f0, `lw` at 0x10009944.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8c, including `lw` at 0x100098c8, `lw` at 0x100098f8, `lw` at 0x10009a54.
  2 such `lw` accesses load 4 bytes from ([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4)) +0xc, including `lw` at 0x100098ec, `lw` at 0x10009a7c.
  2 such `lw` accesses load 4 bytes from ([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4)) +0x10, including `lw` at 0x1000991c, `lw` at 0x10009a70.
  8 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x100099a0, `lwc1` at 0x100099ac, `lwc1` at 0x100099f4.
  The `lw` at 0x10009cb0 loads 4 bytes from sym(xErrorFlag) +0x0.
  The `sw` at 0x10009cd0 stores 4 bytes to sym(xErrorFlag) +0x0.
  The `swc1` at 0x10009d04 stores 4 bytes to table(0x10031b18) +0x0.
  The `swc1` at 0x10009d10 stores 4 bytes to table(0x10031a18) +0x0.
  The `jal` at 0x1000960c calls dl_output_indent [0x1001a4d0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10009650 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10024a00, a2=a1 at entry (arg1), a3=?.
  The `jal` at 0x10009674 calls dl_output_dbug [0x10019758] with a0=0x6, a1=0x10024a28, a2=a2 at entry (arg2), a3=entry(0x10031a18), a4=a2 at entry (arg2), a5=entry(0x10031b18).
  The `jal` at 0x10009690 calls drawlibDraw [0x10011d6c] with a0=a0 at entry (arg0), a1=entry(0x10031a18), a2=entry(0x10031b18), a3=a2 at entry (arg2), a4=0x0.
  The `jal` at 0x100096ac calls dl_output_error [0x10018b7c] with a0=0x32, a1=0x10024a50, a2=a2 at entry (arg2), a3=?.
  The `jalr` at 0x100096c8 calls sprintf with a0=sp-136, a1=0x1002b4c8, a2=entry(0x10031a18), a3=entry(0x10031b18).
  The `jal` at 0x100096e4 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10024ab0, a2=entry(0x10031a18), a3=entry(0x10031b18).
  The `jalr` at 0x10009710 calls strcmp with a0=sp-136, a1=?, a2=?, a3=?.
  The `jal` at 0x10009748 calls dl_output_error [0x10018b7c] with a0=0x32, a1=0x10024af8, a2=entry(0x10031a18), a3=entry(0x10031b18).
  The `jal` at 0x1000975c calls dl_output_info [0x100189a4] with a0=0x10024b40, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10009778 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10024b80, a2=?, a3=[a5].
  The `jal` at 0x10009794 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10024b98, a2=[[a5]], a3=?.
  The `jal` at 0x100097bc calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10024bb0, a2=[([a5] + (a3 << 0x2))+4], a3=?.
  The `jal` at 0x100097dc calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10024bc8, a2=[([a5] + (a3 << 0x2))+16], a3=?.
  The `jal` at 0x100097e8 calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10009838 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10024a78, a2=a1 at entry (arg1), a3=?.
  The `jalr` at 0x10009844 calls sginap with a0=0x2, a1=?, a2=?, a3=?.
  The `jal` at 0x10009870 calls dl_output_error [0x10018b7c] with a0=0x7d0, a1=0x10024a98, a2=a3 at entry (arg3), a3=?, a4=0x1, a6=0x2.
  The `jal` at 0x10009880 calls swap_buffers [0x10010f9c] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x100098a4 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10024758, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x100098b8 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024780, a2=?, a3=?.
  The `jal` at 0x100098e8 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100247a0, a2=[([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4))+12], a3=((([a0+132] << 0x2) + [a0+132]) << 0x4), a4=[a0+132].
  The `jal` at 0x10009918 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100247b0, a2=[([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4))+16], a3=((([a0+132] << 0x2) + [a0+132]) << 0x4), a4=[a0+132].
  The `jal` at 0x10009930 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x100247c0, a2=a2 at entry (arg2), a3=?.
  The `jalr` at 0x10009948 calls XSGIvcQueryChannelInfo with a0=a0 at entry (arg0), a1=[a0+132], a2=0x0, a3=sp-176.
  The `jal` at 0x1000996c calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x100247e0, a2=a2 at entry (arg2), a3=?.
  The `jalr` at 0x10009978 calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10009984 calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100099e8 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10024878, a2=a1 at entry (arg1), a3=?.
  The `jal` at 0x10009a0c calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100248a0, a2=?, a3=?.
  The `jal` at 0x10009a40 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100248b8, a2=?, a3=?.
  The `jalr` at 0x10009a78 calls sprintf with a0=sp-168, a1=0x100248d0, a2=[([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4))+12], a3=[([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4))+16].
  The `jal` at 0x10009a90 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x100248e0, a2=sp-168, a3=?.
  The `jalr` at 0x10009aa8 calls XSGIvcLoadVideoFormatByName with a0=a0 at entry (arg0), a1=[a0+132], a2=0x0, a3=sp-168.
  The `jal` at 0x10009acc calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x10024908, a2=sp-168, a3=a2 at entry (arg2).
  The `jal` at 0x10009af0 calls rampDraw [0x10011c08] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=entry(0x10031a18), a3=entry(0x10031b18), a4=0x5, a6=0x2.
  The `jal` at 0x10009b0c calls dl_output_error [0x10018b7c] with a0=0x32, a1=0x10024ad8, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10009b34 calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x10024840, a2=?, a3=?, a4=a2 at entry (arg2).
  The `jalr` at 0x10009b40 calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10009b4c calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10009b70 calls nowDraw [0x10011b60] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=entry(0x10031a18), a3=entry(0x10031b18), a4=0x0.
  The `jal` at 0x10009b8c calls dl_output_error [0x10018b7c] with a0=0x32, a1=0x10024ad8, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10009bb0 calls rampDraw [0x10011c08] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=entry(0x10031a18), a3=entry(0x10031b18), a4=0x6, a6=0x2.
  The `jal` at 0x10009bcc calls dl_output_error [0x10018b7c] with a0=0x32, a1=0x10024ad8, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10009be8 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024930, a2=?, a3=0x1.
  The `jal` at 0x10009c04 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024948, a2=?, a3=?.
  The `jal` at 0x10009c28 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024960, a2=?, a3=?.
  The `jal` at 0x10009c4c calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024978, a2=?, a3=?.
  The `jalr` at 0x10009c68 calls XSetScreenSaver with a0=a0 at entry (arg0), a1=0x0, a2=0x64, a3=0x0, a4=0x0.
  The `jalr` at 0x10009c84 calls XResetScreenSaver with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x10009c94 calls sleep with a0=0x3, a1=?, a2=?, a3=?.
  The `jal` at 0x10009ca4 calls flatten_gamma [0x1000ad24] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10009cc8 calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x100249c8, a2=a2 at entry (arg2), a3=?, a4=[sym(xErrorFlag)].
  The `jalr` at 0x10009d0c calls XFree with a0=?, a1=?, a2=table(0x10031a08), a3=0x10031a08.
  The `jal` at 0x10009d28 calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x10024810, a2=a2 at entry (arg2), a3=?.
  The `jalr` at 0x10009d34 calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10009d40 calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10009d60 calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x10024990, a2=?, a3=?.
  The `jal` at 0x10009d7c calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x100249a8, a2=?, a3=?.
  The `beq` branch at 0x10009618 targets 0x10009890, is taken when s2(=a4) == v1(=0x1), and falls through when s2(=a4) != v1(=0x1).
  The `beq` branch at 0x10009698 targets 0x10009828, is taken when v0(=ret(drawlibDraw)) == 0, and falls through when v0(=ret(drawlibDraw)) != 0.
  The `beq` branch at 0x100096f8 targets 0x10009708 and is always taken.
  The `beq` branch at 0x10009700 targets 0x1000972c, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x1000971c targets 0x10009700, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `beq` branch at 0x10009724 targets 0x10009700 and is always taken.
  The `bne` branch at 0x10009730 targets 0x1000976c, is taken when a3(=[a5]) != 0, and falls through when a3(=[a5]) == 0.
  The `beq` branch at 0x10009764 targets 0x100097e4 and is always taken.
  The `beq` branch at 0x10009850 targets 0x10009b5c, is taken when a2(=a3) == 0, and falls through when a2(=a3) != 0.
  The `beq` branch at 0x10009858 targets 0x10009b9c, is taken when a2(=a3) == a4(=0x1), and falls through when a2(=a3) != a4(=0x1).
  The `beq` branch at 0x10009860 targets 0x10009adc, is taken when a2(=a3) == a6(=0x2), and falls through when a2(=a3) != a6(=0x2).
  The `beq` branch at 0x10009888 targets 0x100096bc and is always taken.
  The `beq` branch at 0x10009954 targets 0x10009994, is taken when v0(=ret(XSGIvcQueryChannelInfo)) == a2(=0x1), and falls through when v0(=ret(XSGIvcQueryChannelInfo)) != a2(=0x1).
  The `beq` branch at 0x1000998c targets 0x100097f0 and is always taken.
  The `beq` branch at 0x10009998 targets 0x10009d1c, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bc1t` branch at 0x100099b4 targets 0x10009b1c, is taken when f7 <= f8 (c.le.d at 0x100099b0), and falls through when not (f7 <= f8 (c.le.d at 0x100099b0)).
  The `bc1t` branch at 0x100099c0 targets 0x10009b20, is taken when FP condition code 1 is true, and falls through when FP condition code 1 is false.
  The `beq` branch at 0x10009ab4 targets 0x10009bdc, is taken when v0(=ret(XSGIvcLoadVideoFormatByName)) == a3(=0x1), and falls through when v0(=ret(XSGIvcLoadVideoFormatByName)) != a3(=0x1).
  The `beq` branch at 0x10009ad4 targets 0x100097f0 and is always taken.
  The `beq` branch at 0x10009af8 targets 0x10009878, is taken when v0(=ret(rampDraw)) == 0, and falls through when v0(=ret(rampDraw)) != 0.
  The `beq` branch at 0x10009b14 targets 0x10009878 and is always taken.
  The `beq` branch at 0x10009b54 targets 0x100097f0 and is always taken.
  The `beq` branch at 0x10009b78 targets 0x10009878, is taken when v0(=ret(nowDraw)) == 0, and falls through when v0(=ret(nowDraw)) != 0.
  The `beq` branch at 0x10009b94 targets 0x10009878 and is always taken.
  The `beq` branch at 0x10009bb8 targets 0x10009878, is taken when v0(=ret(rampDraw)) == 0, and falls through when v0(=ret(rampDraw)) != 0.
  The `beq` branch at 0x10009bd4 targets 0x10009878 and is always taken.
  The `beq` branch at 0x10009c74 targets 0x10009d50, is taken when v0(=ret(XSetScreenSaver)) == s4(=0x2), and falls through when v0(=ret(XSetScreenSaver)) != s4(=0x2).
  The `beq` branch at 0x10009c8c targets 0x10009d70, is taken when v0(=ret(XResetScreenSaver)) == s4(=0x2), and falls through when v0(=ret(XResetScreenSaver)) != s4(=0x2).
  The `beq` branch at 0x10009cb4 targets 0x10009cd8, is taken when a4(=[sym(xErrorFlag)]) == 0, and falls through when a4(=[sym(xErrorFlag)]) != 0.
  The `beq` branch at 0x10009d14 targets 0x10009644 and is always taken.
  The `beq` branch at 0x10009d48 targets 0x100097f0 and is always taken.
  The `beq` branch at 0x10009d68 targets 0x10009c80 and is always taken.
  The `beq` branch at 0x10009d84 targets 0x10009c90 and is always taken.
  The return at 0x10009820 has v0 = one of ?, 0x1.

- `TEST_video` in `usr/diags/SG/bin/olsgsys` at 0x10009d8c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10009d8c-0x1000a8bc (2864 bytes).
  It occupies 2864 bytes.
  15 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10009f28, `lw` at 0x10009f78, `lw` at 0x1000a1a8.
  5 such `lbu` accesses load 1 byte from a0 (arg0 at entry) +0x1, including `lbu` at 0x10009f38, `lbu` at 0x10009f64, `lbu` at 0x1000a120.
  The `lw` at 0x10009f48 loads 4 bytes from a0 (arg0 at entry) +0xc.
  3 such `lw` accesses load 4 bytes from sym(options_mask) +0x0, including `lw` at 0x10009fec, `lw` at 0x1000a520, `lw` at 0x1000a550.
  3 such `sw` accesses store 4 bytes to sym(expected_mask) +0x0, including `sw` at 0x1000a394, `sw` at 0x1000a3c0, `sw` at 0x1000a3f4.
  2 such `lw` accesses load 4 bytes from sym(__us_rsthread_stdio) +0x0, including `lw` at 0x1000a438, `lw` at 0x1000a864.
  2 such `lw` accesses load 4 bytes from sym(__iob) +0x0, including `lw` at 0x1000a43c, `lw` at 0x1000a884.
  2 such `lw` accesses load 4 bytes from sym(__iob) +0x4, including `lw` at 0x1000a444, `lw` at 0x1000a898.
  The `lw` at 0x1000a548 loads 4 bytes from sym(expected_mask) +0x0.
  2 such `sw` accesses store 4 bytes to sym(__iob) +0x0, including `sw` at 0x1000a61c, `sw` at 0x1000a890.
  2 such `sw` accesses store 4 bytes to sym(__iob) +0x4, including `sw` at 0x1000a624, `sw` at 0x1000a8a4.
  The `jal` at 0x10009de4 calls isXrunning [0x10008c9c] with a0=a0 at entry (arg0), a1=0x290ac, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10009e00 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10024c10, a2=?, a3=?.
  The `jal` at 0x10009e0c calls isSWcursor_on [0x10009338] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x10009e2c calls dl_output_info [0x100189a4] with a0=0x10024c28, a1=?, a2=?, a3=?.
  The `jal` at 0x10009e3c calls dl_output_rslt [0x10017d3c] with a0=0x2, a1=0x1002b4d0, a2=?, a3=?.
  The `jal` at 0x10009e54 calls dl_output_rslt [0x10017d3c] with a0=0x2, a1=0x10025318, a2=?, a3=?.
  The `jalr` at 0x10009ed8 calls sginap with a0=0x5, a1=?, a2=?, a3=?.
  The `jal` at 0x10009ee8 calls dl_hash_lookup [0x1001d410] with a0=0x10024c60, a1=?, a2=?, a3=?.
  The `jalr` at 0x10009f00 calls strtoul with a0=ret(dl_hash_lookup), a1=0x0, a2=0x0, a3=?.
  The `jal` at 0x10009f2c calls dl_output_info [0x100189a4] with a0=0x10024c78, a1=?, a2=?, a3=?.
  The `jalr` at 0x10009f88 calls sginap with a0=0x5, a1=?, a2=?, a3=?.
  The `jal` at 0x10009f94 calls dl_hash_lookup [0x1001d410] with a0=0x1002b4d8, a1=?, a2=?, a3=?.
  The `jalr` at 0x10009fa8 calls strcmp with a0=ret(dl_hash_lookup), a1=?, a2=?, a3=?.
  The `jal` at 0x10009fcc calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10024ca0, a2=?, a3=?.
  The `jalr` at 0x10009fd8 calls XOpenDisplay with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a014 calls dl_output_info [0x100189a4] with a0=0x10024d20, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a024 calls collect_dac_crc [0x10013a44] with a0=sp-176, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a040 calls dl_output_error [0x10018b7c] with a0=0x3c, a1=0x10024d50, a2=?, a3=?.
  The `jal` at 0x1000a064 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10024d78, a2=?, a3=?.
  The `jal` at 0x1000a084 calls pipeDraw [0x100095b8] with a0=?, a1=?, a2=?, a3=?, a4=0x1, a5=sp-164.
  The `jal` at 0x1000a0a0 calls dl_output_info [0x100189a4] with a0=0x10024db8, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a0bc calls Cleanup [0x10011e48] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a0dc calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x10024cb8, a2=?, a3=?.
  The `jal` at 0x1000a0f8 calls dl_hash_lookup [0x1001d410] with a0=0x1002b4e0, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a114 calls dl_output_info [0x100189a4] with a0=0x10024ce0, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000a128 calls sleep with a0=0x3, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a140 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x10024de0, a2=?, a3=?.
  The `jal` at 0x1000a150 calls collect_dac_crc [0x10013a44] with a0=sp-176, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a16c calls dl_output_error [0x10018b7c] with a0=0x3c, a1=0x10024d50, a2=?, a3=?.
  The `jal` at 0x1000a190 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024e00, a2=?, a3=?.
  The `jal` at 0x1000a1e0 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x10024ff8, a2=?, a3=?, a6=-0x1.
  The `jal` at 0x1000a1f8 calls collect_lcd_crc [0x10014e4c] with a0=0x1, a1=0x1, a2=sp-168, a3=?.
  The `jal` at 0x1000a214 calls collect_lcd_crc [0x10014e4c] with a0=0x1, a1=0x1, a2=sp-168, a3=?.
  The `jal` at 0x1000a230 calls dl_output_error [0x10018b7c] with a0=0x3c, a1=0x10025018, a2=?, a3=?.
  The `jal` at 0x1000a250 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10025040, a2=?, a3=?.
  The `jal` at 0x1000a290 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100250a0, a2=?, a3=?.
  The `jal` at 0x1000a2a8 calls collect_lcd_crc [0x10014e4c] with a0=0x1, a1=0x1, a2=sp-168, a3=?.
  The `jal` at 0x1000a2e8 calls handle_crc_error [0x10008c58] with a0=a0 at entry (arg0), a1=?, a2=?, a3=0x0, a4=[0x1002bb20], a5=0x1002bb24, a6=0x1002bb28.
  The `jal` at 0x1000a304 calls dl_output_info [0x100189a4] with a0=0x10025150, a1=?, a2=?, a3=?, a4=-0x1.
  The `jal` at 0x1000a330 calls dl_output_info [0x100189a4] with a0=0x10024f50, a1=?, a2=?, a3=[0x1002bb24], a4=[0x1002bb28].
  The `jal` at 0x1000a348 calls dl_output_info [0x100189a4] with a0=0x10025178, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a368 calls dl_hash_lookup [0x1001d410] with a0=0x10025198, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a37c calls Cleanup [0x10011e48] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a410 calls dl_output_rslt [0x10017d3c] with a0=0x0, a1=0x100251a8, a2=?, a3=[a0+1]:1.
  The `jal` at 0x1000a428 calls dl_output_info [0x100189a4] with a0=0x10024ee8, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000a44c calls __semgetc with a0=sym(__iob), a1=?, a2=?, a3=?, a4=[sym(__iob)], a7=[sym(__iob)+4].
  The `jal` at 0x1000a470 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10024e40, a2=?, a3=?.
  The `jal` at 0x1000a480 calls collect_dac_crc [0x10013a44] with a0=sp-176, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a4bc calls handle_crc_error [0x10008c58] with a0=a0 at entry (arg0), a1=?, a2=?, a3=0x0, a4=[0x1002bb20], a5=0x1002bb24, a6=0x1002bb28.
  The `jal` at 0x1000a4dc calls dl_output_info [0x100189a4] with a0=0x10024f30, a1=?, a2=?, a3=?, a4=-0x1.
  The `jal` at 0x1000a50c calls dl_output_info [0x100189a4] with a0=0x10024f50, a1=?, a2=?, a3=[0x1002bb24], a4=[0x1002bb28].
  The `jal` at 0x1000a52c calls dl_hash_lookup [0x1001d410] with a0=0x1002b4e0, a1=?, a2=?, a3=[a0+1]:1, a6=[sym(options_mask)].
  The `jal` at 0x1000a554 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x100251d0, a2=[sym(options_mask)], a3=[sym(expected_mask)].
  The `jal` at 0x1000a568 calls dl_output_info [0x100189a4] with a0=0x10025200, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a578 calls dl_output_info [0x100189a4] with a0=0x10025260, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a584 calls dl_output_info [0x100189a4] with a0=0x1002b4e8, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a594 calls dl_output_info [0x100189a4] with a0=0x100252c0, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a5a4 calls dl_output_rslt [0x10017d3c] with a0=0x2, a1=0x1002b4d0, a2=?, a3=?.
  The `jal` at 0x1000a5b8 calls dl_output_info [0x100189a4] with a0=0x10025178, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a5d8 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10024fa8, a2=?, a3=?, a6=-0x1.
  The `jal` at 0x1000a5fc calls dl_output_rslt [0x10017d3c] with a0=0x1, a1=0x10025300, a2=?, a3=?.
  The `jal` at 0x1000a634 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x10025068, a2=?, a3=?.
  The `jal` at 0x1000a64c calls dl_output_info [0x100189a4] with a0=0x10024f88, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a68c calls dl_output_error [0x10018b7c] with a0=0x46, a1=0x100250d8, a2=?, a3=?, a6=[0x1002bb24], a7=[0x1002bb28].
  The `jal` at 0x1000a6a0 calls dl_hash_lookup [0x1001d410] with a0=0x10025140, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a6b4 calls dl_hash_lookup [0x1001d410] with a0=0x10024f08, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a6cc calls dl_hash_lookup [0x1001d410] with a0=0x10024f08, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a6e0 calls dl_output_info [0x100189a4] with a0=0x10024f18, a1=ret(dl_hash_lookup), a2=?, a3=?.
  The `jal` at 0x1000a6f0 calls dl_hash_lookup [0x1001d410] with a0=0x10024f08, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000a6fc calls system with a0=ret(dl_hash_lookup), a1=?, a2=?, a3=?.
  The `jal` at 0x1000a71c calls readback [0x1000a8bc] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000a728 calls glXWaitGL with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000a734 calls glXWaitX with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000a740 calls sleep with a0=0x5, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a780 calls dl_output_error [0x10018b7c] with a0=0x46, a1=0x10024e70, a2=?, a3=?, a6=[0x1002bb24], a7=[0x1002bb28].
  The `jal` at 0x1000a794 calls dl_hash_lookup [0x1001d410] with a0=0x10024ed8, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a7a8 calls dl_hash_lookup [0x1001d410] with a0=0x10024f08, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a7c0 calls dl_hash_lookup [0x1001d410] with a0=0x10024f08, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a7d4 calls dl_output_info [0x100189a4] with a0=0x10024f18, a1=ret(dl_hash_lookup), a2=?, a3=?.
  The `jal` at 0x1000a7e4 calls dl_hash_lookup [0x1001d410] with a0=0x10024f08, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000a7f0 calls system with a0=ret(dl_hash_lookup), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000a804 calls __filbuf with a0=sym(__iob), a1=?, a2=[sym(__iob)]-1, a3=sym(__iob), a4=[sym(__iob)], a7=[sym(__iob)+4].
  The `jal` at 0x1000a824 calls readback [0x1000a8bc] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000a830 calls glXWaitGL with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000a83c calls glXWaitX with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000a848 calls sleep with a0=0x5, a1=?, a2=?, a3=?.
  The `jal` at 0x1000a858 calls dl_output_info [0x100189a4] with a0=0x10024ee8, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000a870 calls __semgetc with a0=sym(__iob), a1=[sym(__us_rsthread_stdio)], a2=?, a3=?.
  The `jalr` at 0x1000a8ac calls __filbuf with a0=sym(__iob), a1=[sym(__us_rsthread_stdio)], a2=[sym(__iob)]-1, a3=sym(__iob).
  The `bne` branch at 0x10009dec targets 0x10009e4c, is taken when v0(=ret(isXrunning)) != 0, and falls through when v0(=ret(isXrunning)) == 0.
  The `beq` branch at 0x10009e1c targets 0x10009e74, is taken when v0(=ret(isSWcursor_on)) == 0, and falls through when v0(=ret(isSWcursor_on)) != 0.
  The `beq` branch at 0x10009e44 targets 0x10009e60 and is always taken.
  The `beq` branch at 0x10009ea8 targets 0x10009ed4 and is always taken.
  The `beq` branch at 0x10009ecc targets 0x1000a38c, is taken when a3(?) >= 0x3 (signed), and falls through when a3(?) < 0x3 (signed).
  The `beq` branch at 0x10009ef0 targets 0x10009f20, is taken when v0(=ret(dl_hash_lookup)) == 0, and falls through when v0(=ret(dl_hash_lookup)) != 0.
  The `bne` branch at 0x10009f1c targets 0x10009eb0, is taken when a1(?) < 0x1 (unsigned), and falls through when a1(?) >= 0x1 (unsigned).
  The `blez` branch at 0x10009f4c targets 0x10009eb0, is taken when t8(=[a0+1]:1) <= 0 (signed), and falls through when t8(=[a0+1]:1) > 0 (signed).
  The `beq` branch at 0x10009f54 targets 0x10009f88 and is always taken.
  The `beq` branch at 0x10009f5c targets 0x10009fb8, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0x10009f7c targets 0x10009eb0, is taken when s2(?) >= t8(=[a0+1]:1) (signed), and falls through when s2(?) < t8(=[a0+1]:1) (signed).
  The `beq` branch at 0x10009f9c targets 0x10009f5c, is taken when v0(=ret(dl_hash_lookup)) == 0, and falls through when v0(=ret(dl_hash_lookup)) != 0.
  The `beq` branch at 0x10009fb0 targets 0x10009f5c and is always taken.
  The `beq` branch at 0x10009fe0 targets 0x1000a0cc, is taken when v0(=ret(XOpenDisplay)) == 0, and falls through when v0(=ret(XOpenDisplay)) != 0.
  The `beq` branch at 0x10009ffc targets 0x1000a0f4, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x1000a02c targets 0x1000a04c, is taken when v0(=ret(collect_dac_crc)) == 0, and falls through when v0(=ret(collect_dac_crc)) != 0.
  The `blez` branch at 0x1000a090 targets 0x1000a124, is taken when s1(?) <= 0 (signed), and falls through when s1(?) > 0 (signed).
  The `beq` branch at 0x1000a0c4 targets 0x10009f64 and is always taken.
  The `beq` branch at 0x1000a0ec targets 0x1000a0c4 and is always taken.
  The `bne` branch at 0x1000a100 targets 0x1000a008, is taken when v0(=ret(dl_hash_lookup)) != 0, and falls through when v0(=ret(dl_hash_lookup)) == 0.
  The `beq` branch at 0x1000a11c targets 0x10009f68 and is always taken.
  The `blez` branch at 0x1000a158 targets 0x1000a178, is taken when v0(=ret(collect_dac_crc)) <= 0 (signed), and falls through when v0(=ret(collect_dac_crc)) > 0 (signed).
  The `bne` branch at 0x1000a1ac targets 0x1000a45c, is taken when a3(?) != a2(?), and falls through when a3(?) == a2(?).
  The `beq` branch at 0x1000a1b4 targets 0x1000a644, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0x1000a1cc targets 0x1000a5c8, is taken when a5(?) == a6(=-0x1), and falls through when a5(?) != a6(=-0x1).
  The `blez` branch at 0x1000a21c targets 0x1000a23c, is taken when v0(=ret(collect_lcd_crc)) <= 0 (signed), and falls through when v0(=ret(collect_lcd_crc)) > 0 (signed).
  The `beq` branch at 0x1000a26c targets 0x1000a5b4, is taken when a3(?) == v0(?), and falls through when a3(?) != v0(?).
  The `beq` branch at 0x1000a274 targets 0x1000a628, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x1000a2c4 targets 0x1000a340, is taken when a2(?) == a3(?), and falls through when a2(?) != a3(?).
  The `beq` branch at 0x1000a2f4 targets 0x1000a65c, is taken when v0(=ret(handle_crc_error)) == a4(=-0x1), and falls through when v0(=ret(handle_crc_error)) != a4(=-0x1).
  The `beq` branch at 0x1000a338 targets 0x1000a350 and is always taken.
  The `bne` branch at 0x1000a370 targets 0x1000a420, is taken when v0(=ret(dl_hash_lookup)) != 0, and falls through when v0(=ret(dl_hash_lookup)) == 0.
  The `beq` branch at 0x1000a384 targets 0x1000a0c4 and is always taken.
  The `blez` branch at 0x1000a3a8 targets 0x1000a3d8, is taken when a3(=[a0+1]:1) <= 0 (signed), and falls through when a3(=[a0+1]:1) > 0 (signed).
  The `bnel` branch at 0x1000a3d0 targets 0x1000a3c0, is taken when a0(?) < a4(=[a0+1]:1) (signed), and falls through when a0(?) >= a4(=[a0+1]:1) (signed); its branch-likely delay slot `addu v0,v0,v0` at 0x1000a3d4 runs only when taken and is annulled on fall-through.
  The `blez` branch at 0x1000a3f0 targets 0x1000a51c, is taken when a5(?) <= 0 (signed), and falls through when a5(?) > 0 (signed).
  The `beq` branch at 0x1000a418 targets 0x10009e60 and is always taken.
  The `beq` branch at 0x1000a440 targets 0x1000a60c, is taken when t0(=[sym(__us_rsthread_stdio)]) == 0, and falls through when t0(=[sym(__us_rsthread_stdio)]) != 0.
  The `beq` branch at 0x1000a454 targets 0x1000a378 and is always taken.
  The `beq` branch at 0x1000a49c targets 0x1000a1b4, is taken when a2(?) == a3(?), and falls through when a2(?) != a3(?).
  The `beq` branch at 0x1000a4c8 targets 0x1000a750, is taken when v0(=ret(handle_crc_error)) == a4(=-0x1), and falls through when v0(=ret(handle_crc_error)) != a4(=-0x1).
  The `beq` branch at 0x1000a514 targets 0x1000a1b4 and is always taken.
  The `beq` branch at 0x1000a524 targets 0x1000a5e8, is taken when a6(=[sym(options_mask)]) == v0(?), and falls through when a6(=[sym(options_mask)]) != v0(?).
  The `bne` branch at 0x1000a534 targets 0x1000a5e8, is taken when v0(=ret(dl_hash_lookup)) != 0, and falls through when v0(=ret(dl_hash_lookup)) == 0.
  The `beq` branch at 0x1000a5ac targets 0x10009e60 and is always taken.
  The `beq` branch at 0x1000a5c0 targets 0x1000a350 and is always taken.
  The `beq` branch at 0x1000a5e0 targets 0x1000a350 and is always taken.
  The `beq` branch at 0x1000a604 targets 0x10009e60 and is always taken.
  The `bltz` branch at 0x1000a618 targets 0x1000a800, is taken when a2(=[sym(__iob)]-1) < 0 (signed), and falls through when a2(=[sym(__iob)]-1) >= 0 (signed).
  The `beq` branch at 0x1000a620 targets 0x1000a374 and is always taken.
  The `beq` branch at 0x1000a63c targets 0x1000a350 and is always taken.
  The `beq` branch at 0x1000a654 targets 0x1000a1bc and is always taken.
  The `bne` branch at 0x1000a6a8 targets 0x1000a70c, is taken when v0(=ret(dl_hash_lookup)) != 0, and falls through when v0(=ret(dl_hash_lookup)) == 0.
  The `beq` branch at 0x1000a6bc targets 0x1000a350, is taken when v0(=ret(dl_hash_lookup)) == 0, and falls through when v0(=ret(dl_hash_lookup)) != 0.
  The `beq` branch at 0x1000a704 targets 0x1000a350 and is always taken.
  The `beq` branch at 0x1000a748 targets 0x1000a6b0 and is always taken.
  The `bne` branch at 0x1000a79c targets 0x1000a814, is taken when v0(=ret(dl_hash_lookup)) != 0, and falls through when v0(=ret(dl_hash_lookup)) == 0.
  The `beq` branch at 0x1000a7b0 targets 0x1000a4e4, is taken when v0(=ret(dl_hash_lookup)) == 0, and falls through when v0(=ret(dl_hash_lookup)) != 0.
  The `beq` branch at 0x1000a7f8 targets 0x1000a4e4 and is always taken.
  The `beq` branch at 0x1000a80c targets 0x1000a378 and is always taken.
  The `beq` branch at 0x1000a868 targets 0x1000a880, is taken when a1(=[sym(__us_rsthread_stdio)]) == 0, and falls through when a1(=[sym(__us_rsthread_stdio)]) != 0.
  The `beq` branch at 0x1000a878 targets 0x1000a7a4 and is always taken.
  The `bltz` branch at 0x1000a88c targets 0x1000a8a8, is taken when a2(=[sym(__iob)]-1) < 0 (signed), and falls through when a2(=[sym(__iob)]-1) >= 0 (signed).
  The `beq` branch at 0x1000a8a0 targets 0x1000a7a0 and is always taken.
  The `beq` branch at 0x1000a8b4 targets 0x1000a7a4 and is always taken.
  The return at 0x10009e6c has v0 = ret(dl_output_rslt).

- `readback` in `usr/diags/SG/bin/olsgsys` at 0x1000a8bc (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000a8bc-0x1000a980 (196 bytes).
  It occupies 196 bytes.
  The `jalr` at 0x1000a904 calls malloc with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1000a92c calls glReadPixels with a0=0x0, a1=0x0, a2=a0 at entry (arg0), a3=a1 at entry (arg1), a4=0x1908, a5=0x1401, a6=ret(malloc).
  The `jal` at 0x1000a948 calls print_retImage [0x1000a980] with a0=ret(malloc), a1=a1 at entry (arg1), a2=a0 at entry (arg0), a3=a2 at entry (arg2), a4=a3 at entry (arg3).
  The `jalr` at 0x1000a954 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The return at 0x1000a978 has v0 = ret(free).

- `print_retImage` in `usr/diags/SG/bin/olsgsys` at 0x1000a980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000a980-0x1000ab74 (500 bytes).
  It occupies 500 bytes.
  The `lw` at 0x1000a9e8 loads 4 bytes from sym(currenttime) +0x0.
  The `lw` at 0x1000a9ec loads 4 bytes from sym(starttime) +0x0.
  The `lw` at 0x1000aa08 loads 4 bytes from sym(currenttime) +0x4.
  The `lw` at 0x1000aa14 loads 4 bytes from sym(starttime) +0x4.
  4 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x1000aa9c, `lbu` at 0x1000aab0, `lbu` at 0x1000aac4.
  The `jalr` at 0x1000a9dc calls gettimeofday with a0=sym(currenttime), a1=0x0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1000aa28 calls sprintf with a0=sp-224, a1=0x10025340, a2=a3 at entry (arg3), a3=a4 at entry (arg4), a6=[sym(starttime)+4].
  The `jal` at 0x1000aa3c calls dl_output_info [0x100189a4] with a0=0x10025368, a1=?, a2=?, a3=?.
  The `jal` at 0x1000aa50 calls dl_output_info [0x100189a4] with a0=0x10025388, a1=sp-224, a2=?, a3=?.
  The `jalr` at 0x1000aa60 calls fopen with a0=sp-224, a1=0x1002b4ec, a2=?, a3=?.
  The `jalr` at 0x1000aaa0 calls fprintf with a0=ret(fopen), a1=0x1002b4f0, a2=?, a3=?.
  The `jalr` at 0x1000aab4 calls fprintf with a0=ret(fopen), a1=0x1002b4f0, a2=?, a3=?.
  The `jalr` at 0x1000aac8 calls fprintf with a0=ret(fopen), a1=0x1002b4f0, a2=?, a3=?.
  The `jalr` at 0x1000aadc calls fprintf with a0=ret(fopen), a1=0x1002b4f0, a2=?, a3=?.
  The `jalr` at 0x1000ab10 calls fflush with a0=ret(fopen), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000ab1c calls fclose with a0=ret(fopen), a1=?, a2=?, a3=?.
  The `jal` at 0x1000ab38 calls diff_images [0x1000ab74] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `blez` branch at 0x1000aa78 targets 0x1000ab04, is taken when s7(=a1) <= 0 (signed), and falls through when s7(=a1) > 0 (signed).
  The `blez` branch at 0x1000aa80 targets 0x1000ab04, is taken when s4(=a2) <= 0 (signed), and falls through when s4(=a2) > 0 (signed).
  The `bne` branch at 0x1000aaec targets 0x1000aa94, is taken when s3(?) < s4(=a2) (signed), and falls through when s3(?) >= s4(=a2) (signed).
  The `bne` branch at 0x1000aafc targets 0x1000aa8c, is taken when s6(?) < s7(=a1) (signed), and falls through when s6(?) >= s7(=a1) (signed).
  The return at 0x1000ab6c has v0 = ret(diff_images).

- `diff_images` in `usr/diags/SG/bin/olsgsys` at 0x1000ab74 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000ab74-0x1000ad24 (432 bytes).
  It occupies 432 bytes.
  The `lw` at 0x1000abf4 loads 4 bytes from (sym(goldfilenames) + (a4 << 0x2)) +0x0.
  The `lbu` at 0x1000acb0 loads 1 byte from ?.
  The `lw` at 0x1000acd0 loads 4 bytes from ?.
  The `jalr` at 0x1000abf0 calls fopen with a0=[(sym(goldfilenames) + (a4 << 0x2))], a1=0x1002b4a0, a2=0x1002b4f8, a3=0x1002b4fc, a5=0x1002b500, a6=0x282c4.
  The `jal` at 0x1000ac04 calls dl_output_info [0x100189a4] with a0=0x100253b0, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000aca8 calls fscanf with a0=ret(fopen), a1=0x1002b508, a2=sp-128, a3=?.
  The `jal` at 0x1000acd4 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x100253e0, a2=?, a3=?.
  The `jalr` at 0x1000ace8 calls fclose with a0=ret(fopen), a1=?, a2=?, a3=?.
  The `blez` branch at 0x1000ac10 targets 0x1000ace4, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `blez` branch at 0x1000ac18 targets 0x1000ace4, is taken when a2 <= 0 (signed), and falls through when a2 > 0 (signed).
  The `beq` branch at 0x1000ac30 targets 0x1000ac58 and is always taken.
  The `beq` branch at 0x1000ac50 targets 0x1000ace4, is taken when s7(?) >= a5(=a1) (signed), and falls through when s7(?) < a5(=a1) (signed).
  The `beq` branch at 0x1000ac5c targets 0x1000ac78 and is always taken.
  The `beq` branch at 0x1000ac70 targets 0x1000ac38, is taken when s5(?) >= a6(=a2) (signed), and falls through when s5(?) < a6(=a2) (signed).
  The `beq` branch at 0x1000ac80 targets 0x1000ac9c and is always taken.
  The `beq` branch at 0x1000ac94 targets 0x1000ac64, is taken when s2(?) >= 0x4 (signed), and falls through when s2(?) < 0x4 (signed).
  The `beq` branch at 0x1000acb8 targets 0x1000ac88, is taken when a5(?) == a6(?), and falls through when a5(?) != a6(?).
  The `beq` branch at 0x1000acdc targets 0x1000ac8c and is always taken.
  The return at 0x1000ad1c has v0 = ret(fclose).

- `flatten_gamma` in `usr/diags/SG/bin/olsgsys` at 0x1000ad24 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000ad24-0x1000adf8 (212 bytes).
  It occupies 212 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x84, including `lw` at 0x1000ad74, `lw` at 0x1000adb0.
  The `jal` at 0x1000ad58 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10025420, a2=a1 at entry (arg1), a3=a3 at entry (arg3).
  The `jalr` at 0x1000ad78 calls XSGIvcQueryGammaMap with a0=a0 at entry (arg0), a1=[a0+132], a2=0x0, a3=sp-48, a4=sp-44, a5=sp-40.
  The `jalr` at 0x1000ad88 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000ada0 calls vCalculateGammaCurve [0x1000adf8] with a0=?, a1=?, a2=ret(malloc), a3=?; fp f12=0x3f800000.
  The `jalr` at 0x1000adc0 calls XSGIvcStoreGammaColors16 with a0=a0 at entry (arg0), a1=[a0+132], a2=0x0, a3=?, a4=0x7, a5=ret(malloc).
  The `jalr` at 0x1000adcc calls XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000add8 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The return at 0x1000adf0 has v0 = ret(free).

- `vCalculateGammaCurve` in `usr/diags/SG/bin/olsgsys` at 0x1000adf8 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000adf8-0x1000af30 (312 bytes).
  It occupies 312 bytes.
  2 such `sh` accesses store 2 bytes to ?, including `sh` at 0x1000ae94, `sh` at 0x1000af00.
  The `jalr` at 0x1000ae6c calls log with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1000aed8 calls pow with a0=?, a1=?, a2=?, a3=?.
  The `bc1f` branch at 0x1000ae48 targets 0x1000aea8, is taken when not (f1 == f2(=0x3ff0000000000000) (c.eq.d at 0x1000ae2c)), and falls through when f1 == f2(=0x3ff0000000000000) (c.eq.d at 0x1000ae2c).
  The `blez` branch at 0x1000ae50 targets 0x1000af04, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `bne` branch at 0x1000ae98 targets 0x1000ae88, is taken when a2(?) < s1(=a1) (signed), and falls through when a2(?) >= s1(=a1) (signed).
  The `beq` branch at 0x1000aea0 targets 0x1000af08 and is always taken.
  The `blez` branch at 0x1000aea8 targets 0x1000af08, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `bne` branch at 0x1000aefc targets 0x1000aec4, is taken when s2(?) < s1(=a1) (signed), and falls through when s2(?) >= s1(=a1) (signed).
  The return at 0x1000af28 has v0 = one of ret(log), ?.

- `dma_pipeSetup` in `usr/diags/SG/bin/olsgsys` at 0x1000af30 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000af30-0x1000b280 (848 bytes).
  It occupies 848 bytes.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x84, including `lw` at 0x1000af74, `lw` at 0x1000b020, `lw` at 0x1000b080.
  The `lw` at 0x1000afb8 loads 4 bytes from ?.
  2 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x1000afc4, `lwc1` at 0x1000aff0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8c, including `lw` at 0x1000b02c, `lw` at 0x1000b164, `lw` at 0x1000b1bc.
  3 such `lw` accesses load 4 bytes from ([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4)) +0xc, including `lw` at 0x1000b048, `lw` at 0x1000b184, `lw` at 0x1000b1d0.
  2 such `lw` accesses load 4 bytes from ([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4)) +0x10, including `lw` at 0x1000b054, `lw` at 0x1000b190.
  The `lw` at 0x1000b118 loads 4 bytes from sym(xErrorFlag) +0x0.
  The `sw` at 0x1000b140 stores 4 bytes to sym(xErrorFlag) +0x0.
  The `jal` at 0x1000af60 calls dl_output_indent [0x1001a4d0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1000af78 calls XSGIvcQueryChannelInfo with a0=a0 at entry (arg0), a1=[a0+132], a2=0x0, a3=sp-96.
  The `jal` at 0x1000af9c calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x10025440, a2=a1 at entry (arg1), a3=?.
  The `jalr` at 0x1000afa8 calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000afe4 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100254a0, a2=?, a3=?.
  The `jal` at 0x1000b018 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100254b8, a2=?, a3=?.
  The `jalr` at 0x1000b050 calls sprintf with a0=sp-88, a1=0x100254d0, a2=[([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4))+12], a3=[([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4))+16], a5=[a0+132].
  The `jal` at 0x1000b06c calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x100254e0, a2=sp-88, a3=a1 at entry (arg1).
  The `jalr` at 0x1000b084 calls XSGIvcLoadVideoFormatByName with a0=a0 at entry (arg0), a1=[a0+132], a2=0x0, a3=sp-88.
  The `jal` at 0x1000b0ac calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x10025508, a2=sp-88, a3=a1 at entry (arg1).
  The `jal` at 0x1000b0c8 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x10025530, a2=a1 at entry (arg1), a3=?.
  The `jalr` at 0x1000b0e4 calls XSetScreenSaver with a0=a0 at entry (arg0), a1=0x0, a2=0x64, a3=0x0, a4=0x0.
  The `jalr` at 0x1000b0f8 calls XResetScreenSaver with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000b10c calls sleep with a0=0x3, a1=?, a2=?, a3=?.
  The `jal` at 0x1000b130 calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x10025588, a2=a1 at entry (arg1), a3=?, a4=[sym(xErrorFlag)].
  The `jal` at 0x1000b154 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x100255b8, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x1000b18c calls drawlibDraw [0x10011d6c] with a0=a0 at entry (arg0), a1=[([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4))+12], a2=[([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4))+16], a3=a1 at entry (arg1), a4=0x0.
  The `jal` at 0x1000b1a8 calls dl_output_error [0x10018b7c] with a0=0x32, a1=0x100255e0, a2=a1 at entry (arg1), a3=?.
  The `jal` at 0x1000b1dc calls dma_init_Draw [0x100110c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4))+12], a3=[([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4))+12], a4=[a0+132].
  The `jalr` at 0x1000b1e8 calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000b1f4 calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000b22c calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x10025470, a2=a1 at entry (arg1), a3=?.
  The `jalr` at 0x1000b238 calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000b254 calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x10025550, a2=0x2, a3=?.
  The `jal` at 0x1000b270 calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x10025568, a2=?, a3=0x2.
  The `beq` branch at 0x1000af84 targets 0x1000afb8, is taken when v0(=ret(XSGIvcQueryChannelInfo)) == v1(=0x1), and falls through when v0(=ret(XSGIvcQueryChannelInfo)) != v1(=0x1).
  The `beq` branch at 0x1000afb0 targets 0x1000b1fc and is always taken.
  The `beq` branch at 0x1000afbc targets 0x1000b21c, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x1000b090 targets 0x1000b0b8, is taken when v0(=ret(XSGIvcLoadVideoFormatByName)) == a3(=0x1), and falls through when v0(=ret(XSGIvcLoadVideoFormatByName)) != a3(=0x1).
  The `beq` branch at 0x1000b0f0 targets 0x1000b248, is taken when v0(=ret(XSetScreenSaver)) == a2(=0x2), and falls through when v0(=ret(XSetScreenSaver)) != a2(=0x2).
  The `beq` branch at 0x1000b104 targets 0x1000b264, is taken when v0(=ret(XResetScreenSaver)) == a3(=0x2), and falls through when v0(=ret(XResetScreenSaver)) != a3(=0x2).
  The `beq` branch at 0x1000b11c targets 0x1000b144, is taken when a4(=[sym(xErrorFlag)]) == 0, and falls through when a4(=[sym(xErrorFlag)]) != 0.
  The `beq` branch at 0x1000b194 targets 0x1000b1b4, is taken when v0(=ret(drawlibDraw)) == 0, and falls through when v0(=ret(drawlibDraw)) != 0.
  The `beq` branch at 0x1000b240 targets 0x1000b1fc and is always taken.
  The `beq` branch at 0x1000b25c targets 0x1000b0f8 and is always taken.
  The `beq` branch at 0x1000b278 targets 0x1000b10c and is always taken.
  The return at 0x1000b214 has v0 = one of 0x0, 0x1, 0x2, 0x3.

- `draw_dma_pattern` in `usr/diags/SG/bin/olsgsys` at 0x1000b280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000b280-0x1000be14 (2964 bytes).
  It occupies 2964 bytes.
  The `lw` at 0x1000b314 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x1000b340 loads 4 bytes from a0 (arg0 at entry) +0x14.
  The `lw` at 0x1000b35c loads 4 bytes from table(0x10025608) +0x0.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4, including `lw` at 0x1000b424, `lw` at 0x1000b4b4, `lw` at 0x1000b648.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x1000b428, `lw` at 0x1000b4b0, `lw` at 0x1000b64c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc, including `lw` at 0x1000b438, `lw` at 0x1000b4a8, `lw` at 0x1000b65c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8, including `lw` at 0x1000b43c, `lw` at 0x1000b4ac, `lw` at 0x1000b650.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x18, including `lw` at 0x1000b498, `lw` at 0x1000b500, `lw` at 0x1000b59c.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x20, including `lw` at 0x1000b4b8, `lw` at 0x1000b644, `lw` at 0x1000b70c.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x1c, including `lw` at 0x1000b4c4, `lw` at 0x1000b640, `lw` at 0x1000b708.
  11 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x1000b4e0, `lbu` at 0x1000b678, `lbu` at 0x1000b6b0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1000b810, `lw` at 0x1000b910.
  The `lw` at 0x1000b99c loads 4 bytes from sym(__us_rsthread_stdio) +0x0.
  The `lw` at 0x1000b9a0 loads 4 bytes from sym(__iob) +0x0.
  The `lw` at 0x1000b9a8 loads 4 bytes from sym(__iob) +0x4.
  The `sw` at 0x1000ba1c stores 4 bytes to sym(__iob) +0x0.
  The `sw` at 0x1000ba24 stores 4 bytes to sym(__iob) +0x4.
  The `sw` at 0x1000ba34 stores 4 bytes to a0 (arg0 at entry) +0x18.
  The `jalr` at 0x1000b308 calls glClear with a0=0x4000, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=0x1002b528, a4=0x27bb8, a5=s8 at entry.
  The `jalr` at 0x1000b334 calls glClear with a0=0x4100, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000b36c calls glBegin with a0=0x1, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000b3a8 calls glColor3f with a0=?, a1=?, a2=?, a3=?; fp f15=0x408f400000000000.
  The `jalr` at 0x1000b3c4 calls glVertex3f with a0=?, a1=?, a2=?, a3=?; fp f12=0xffffffffc4160000, f14=f20.
  The `jalr` at 0x1000b3d8 calls glVertex3f with a0=?, a1=?, a2=?, a3=?; fp f12=0x44160000, f14=f20.
  The `jalr` at 0x1000b3f4 calls glEnd with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000b400 calls glFinish with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000b418 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10025630, a2=?, a3=?.
  The `jalr` at 0x1000b46c calls memset with a0=sp+0xffffffffff447b00, a1=0x0, a2=?, a3=[a0+8], a4=[a0+12].
  The `jalr` at 0x1000b48c calls memset with a0=sp+0xfffffffffe88f700, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x1000b4c0 calls glReadPixels with a0=[a0+28], a1=[a0+32], a2=[a0+4], a3=[a0], a4=[a0+8], a5=[a0+12], a6=sp+0xffffffffff447b00.
  The `jal` at 0x1000b4e4 calls dl_output_dbug [0x10019758] with a0=0x5, a1=0x10025650, a2=?, a3=?.
  The `jalr` at 0x1000b574 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000b588 calls dl_hash_lookup [0x1001d410] with a0=0x100257e0, a1=?, a2=?, a3=?.
  The `jal` at 0x1000b5bc calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10025668, a2=?, a3=?.
  The `jal` at 0x1000b5cc calls swap_buffers [0x10010f9c] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0x1000b5e4 calls glClearColor with a0=?, a1=?, a2=?, a3=?; fp f12=f20, f13=f20, f14=f20, f15=f20.
  The `jalr` at 0x1000b5f0 calls glClear with a0=0x4100, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000b600 calls glRasterPos2i with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000b61c calls glDrawPixels with a0=?, a1=?, a2=?, a3=?, a4=sp+0xffffffffff447b00.
  The `jal` at 0x1000b630 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10025698, a2=?, a3=?.
  The `jalr` at 0x1000b658 calls glReadPixels with a0=[a0+28], a1=[a0+32], a2=[a0+4], a3=[a0], a4=[a0+8], a5=[a0+12], a6=sp+0xfffffffffe88f700.
  The `jal` at 0x1000b67c calls dl_output_dbug [0x10019758] with a0=0x5, a1=0x100256c8, a2=?, a3=?.
  The `jal` at 0x1000b6b4 calls dl_output_dbug [0x10019758] with a0=0x5, a1=0x100256c8, a2=?, a3=?.
  The `jal` at 0x1000b6dc calls dl_output_dbug [0x10019758] with a0=0x5, a1=0x100256e8, a2=?, a3=?.
  The `jalr` at 0x1000b720 calls glReadPixels with a0=[a0+28], a1=[a0+32], a2=[a0+4], a3=[a0], a4=[a0+8], a5=[a0+12], a6=ret(malloc).
  The `jal` at 0x1000b758 calls dl_hash_value [0x1001d48c] with a0=0x10025700, a1=0x14, a2=?, a3=?.
  The `jal` at 0x1000b780 calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000b7a8 calls dl_output_uniq [0x1001910c] with a0=0x1002b530, a1=0x10025710, a2=?, a3=?.
  The `jal` at 0x1000b80c calls dl_output_uniq [0x1001910c] with a0=0x1002b530, a1=0x10025750, a2=?, a3=?.
  The `jal` at 0x1000b818 calls dl_output_indent [0x1001a4d0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000b834 calls dl_output_uniq [0x1001910c] with a0=0x1002b530, a1=0x10025770, a2=?, a3=?.
  The `jalr` at 0x1000b840 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000b85c calls dl_output_error [0x10018b7c] with a0=0x7d0, a1=0x10025788, a2=?, a3=?.
  The `jal` at 0x1000b8a8 calls dl_output_error [0x10018b7c] with a0=0x1, a1=0x100257a8, a2=?, a3=?.
  The `jal` at 0x1000b90c calls dl_output_error [0x10018b7c] with a0=0x1, a1=0x10025750, a2=?, a3=?.
  The `jal` at 0x1000b918 calls dl_output_indent [0x1001a4d0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000b948 calls dl_hash_value [0x1001d48c] with a0=0x10025700, a1=0x14, a2=?, a3=?.
  The `jal` at 0x1000b974 calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000b98c calls dl_output_info [0x100189a4] with a0=0x100257f0, a1=?, a2=a0 at entry (arg0), a3=?.
  The `jalr` at 0x1000b9b0 calls __semgetc with a0=sym(__iob), a1=?, a2=?, a3=?, a4=[sym(__iob)].
  The `jalr` at 0x1000ba38 calls glBegin with a0=0x1, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000ba78 calls glColor3f with a0=?, a1=?, a2=?, a3=?; fp f15=0x4092c00000000000.
  The `jalr` at 0x1000ba94 calls glVertex3f with a0=?, a1=?, a2=?, a3=?; fp f13=0xffffffffc3fa0000, f14=f20.
  The `jalr` at 0x1000baa8 calls glVertex3f with a0=?, a1=?, a2=?, a3=?; fp f13=0x43fa0000, f14=f20.
  The `jalr` at 0x1000bac4 calls glEnd with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000bad0 calls glFinish with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000bae4 calls glBegin with a0=0x1, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000bb28 calls glColor3f with a0=?, a1=?, a2=?, a3=?; fp f15=0x4092c00000000000.
  The `jalr` at 0x1000bb44 calls glVertex3f with a0=?, a1=?, a2=?, a3=?; fp f13=0xffffffffc3fa0000, f14=f20.
  The `jalr` at 0x1000bb58 calls glVertex3f with a0=?, a1=?, a2=?, a3=?; fp f13=0x43fa0000, f14=f20.
  The `jalr` at 0x1000bb78 calls glEnd with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000bb84 calls glFinish with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000bb98 calls glBegin with a0=0x1, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000bbd8 calls glColor3f with a0=?, a1=?, a2=?, a3=?; fp f15=0x408f400000000000.
  The `jalr` at 0x1000bbf4 calls glVertex3f with a0=?, a1=?, a2=?, a3=?; fp f12=0xffffffffc4160000, f14=f20.
  The `jalr` at 0x1000bc08 calls glVertex3f with a0=?, a1=?, a2=?, a3=?; fp f12=0x44160000, f14=f20.
  The `jalr` at 0x1000bc28 calls glEnd with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000bc34 calls glFinish with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000bc50 calls glColor3f with a0=entry(0x10025608), a1=?, a2=?, a3=?; fp f12=0x3f2b851f, f13=0x3eab851f, f14=0x3f2b851f.
  The `jalr` at 0x1000bc5c calls glBegin with a0=0x1, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000bc8c calls glVertex3f with a0=?, a1=?, a2=?, a3=?; fp f13=0xffffffffc3fa0000, f14=f20.
  The `jalr` at 0x1000bca0 calls glVertex3f with a0=?, a1=?, a2=?, a3=?; fp f13=0x43fa0000, f14=f20.
  The `jalr` at 0x1000bcbc calls glEnd with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000bcc8 calls glFinish with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000bce4 calls glColor3f with a0=entry(0x10025608), a1=?, a2=?, a3=?; fp f12=0x3f800000, f13=0x3f800000, f14=0x3f800000.
  The `jalr` at 0x1000bcf0 calls glBegin with a0=0x1, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000bd24 calls glVertex3f with a0=?, a1=?, a2=?, a3=?; fp f13=0xffffffffc3fa0000, f14=f20.
  The `jalr` at 0x1000bd38 calls glVertex3f with a0=?, a1=?, a2=?, a3=?; fp f13=0x43fa0000, f14=f20.
  The `jalr` at 0x1000bd54 calls glEnd with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000bd60 calls glFinish with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000bd7c calls glColor3f with a0=entry(0x10025608), a1=?, a2=?, a3=?; fp f12=0x3f800000, f13=0x3f800000, f14=0x3f800000.
  The `jalr` at 0x1000bd94 calls glRectf with a0=?, a1=?, a2=?, a3=?; fp f12=0xffffffffc37a0000, f13=0xffffffffc37a0000, f14=0x437a0000, f15=0x437a0000.
  The `jalr` at 0x1000bdb4 calls glClearColor with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000bdd4 calls glClearColor with a0=0x2, a1=?, a2=?, a3=?; fp f12=0x3f800000, f13=0x3f800000, f14=0x3f800000, f15=0x3f800000.
  The `jalr` at 0x1000bdf0 calls glClearColor with a0=0x2, a1=?, a2=?, a3=?; fp f12=0x3eab851f, f13=0x3f2b851f, f14=0x3eab851f, f15=0x3f2b851f.
  The `jalr` at 0x1000be04 calls __filbuf with a0=sym(__iob), a1=?, a2=?, a3=?, a4=[sym(__iob)].
  The `beq` branch at 0x1000b318 targets 0x1000bda4, is taken when v0(=[a0+16]) == 0, and falls through when v0(=[a0+16]) != 0.
  The `beq` branch at 0x1000b320 targets 0x1000bdc4, is taken when v0(=[a0+16]) == v1(=0x1), and falls through when v0(=[a0+16]) != v1(=0x1).
  The `beq` branch at 0x1000b328 targets 0x1000bde4, is taken when v0(=[a0+16]) == a0(=0x2), and falls through when v0(=[a0+16]) != a0(=0x2).
  The `beq` branch at 0x1000b354 targets 0x1000b408, is taken when v1(=[a0+20]) >= 0x9 (unsigned), and falls through when v1(=[a0+20]) < 0x9 (unsigned).
  The `bne` branch at 0x1000b3e8 targets 0x1000b38c, is taken when s0(?) < 0x1f4 (signed), and falls through when s0(?) >= 0x1f4 (signed).
  The `beq` branch at 0x1000b49c targets 0x1000ba28, is taken when t8(=[a0+24]) == 0, and falls through when t8(=[a0+24]) != 0.
  The `bne` branch at 0x1000b4f4 targets 0x1000b4d0, is taken when s0(?) < 0x14 (signed), and falls through when s0(?) >= 0x14 (signed).
  The `blez` branch at 0x1000b504 targets 0x1000b9c0, is taken when a3(=[a0+24]) <= 0 (signed), and falls through when a3(=[a0+24]) > 0 (signed).
  The `beq` branch at 0x1000b560 targets 0x1000b5b0 and is always taken.
  The `beq` branch at 0x1000b56c targets 0x1000b57c, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x1000b590 targets 0x1000b984, is taken when v0(=ret(dl_hash_lookup)) != 0, and falls through when v0(=ret(dl_hash_lookup)) == 0.
  The `beq` branch at 0x1000b5ac targets 0x1000b9c4, is taken when a1(?) >= a2(=[a0+24]) (signed), and falls through when a1(?) < a2(=[a0+24]) (signed).
  The `bne` branch at 0x1000b68c targets 0x1000b668, is taken when s1(?) < 0x14 (signed), and falls through when s1(?) >= 0x14 (signed).
  The `bne` branch at 0x1000b6c4 targets 0x1000b6a0, is taken when s0(?) < s3(=0x7a134) (signed), and falls through when s0(?) >= s3(=0x7a134) (signed).
  The `blez` branch at 0x1000b6f0 targets 0x1000b86c, is taken when a2(?) <= 0 (signed), and falls through when a2(?) > 0 (signed).
  The `beq` branch at 0x1000b6f8 targets 0x1000b750 and is always taken.
  The `beq` branch at 0x1000b744 targets 0x1000b86c, is taken when s7(?) >= a7(?) (signed), and falls through when s7(?) < a7(?) (signed).
  The `bne` branch at 0x1000b764 targets 0x1000b870, is taken when v0(=ret(dl_hash_value)) < s6(?) (signed), and falls through when v0(=ret(dl_hash_value)) >= s6(?) (signed).
  The `beq` branch at 0x1000b774 targets 0x1000b738, is taken when a2(?) == a3(?), and falls through when a2(?) != a3(?).
  The `bne` branch at 0x1000b824 targets 0x1000b730, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0x1000b848 targets 0x1000b700, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x1000b864 targets 0x1000b9c8 and is always taken.
  The `beq` branch at 0x1000b870 targets 0x1000b580, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `blez` branch at 0x1000b878 targets 0x1000b568, is taken when a3(?) <= 0 (signed), and falls through when a3(?) > 0 (signed).
  The `beq` branch at 0x1000b884 targets 0x1000b93c and is always taken.
  The `beq` branch at 0x1000b934 targets 0x1000b568, is taken when s7(?) >= a7(?) (signed), and falls through when s7(?) < a7(?) (signed).
  The `bne` branch at 0x1000b958 targets 0x1000b568, is taken when a1(=(ret(dl_hash_value) + ret(dl_hash_value))) < s6(?) (signed), and falls through when a1(=(ret(dl_hash_value) + ret(dl_hash_value))) >= s6(?) (signed).
  The `beq` branch at 0x1000b968 targets 0x1000b928, is taken when a2(?) == a3(?), and falls through when a2(?) != a3(?).
  The `beq` branch at 0x1000b97c targets 0x1000b88c and is always taken.
  The `beq` branch at 0x1000b9a4 targets 0x1000ba0c, is taken when t1(=[sym(__us_rsthread_stdio)]) == 0, and falls through when t1(=[sym(__us_rsthread_stdio)]) != 0.
  The `beq` branch at 0x1000b9b8 targets 0x1000b598 and is always taken.
  The `bltz` branch at 0x1000ba18 targets 0x1000be00, is taken when t3(=[sym(__iob)]-1) < 0 (signed), and falls through when t3(=[sym(__iob)]-1) >= 0 (signed).
  The `beq` branch at 0x1000ba20 targets 0x1000b594 and is always taken.
  The `beq` branch at 0x1000ba30 targets 0x1000b4a0 and is always taken.
  The `bne` branch at 0x1000bab8 targets 0x1000ba5c, is taken when s0(?) < 0x258 (signed), and falls through when s0(?) >= 0x258 (signed).
  The `beq` branch at 0x1000bad8 targets 0x1000b40c and is always taken.
  The `bne` branch at 0x1000bb6c targets 0x1000bb0c, is taken when s4(?) < 0x258 (signed), and falls through when s4(?) >= 0x258 (signed).
  The `beq` branch at 0x1000bb8c targets 0x1000b40c and is always taken.
  The `bne` branch at 0x1000bc1c targets 0x1000bbbc, is taken when s4(?) < 0x1f4 (signed), and falls through when s4(?) >= 0x1f4 (signed).
  The `beq` branch at 0x1000bc3c targets 0x1000b40c and is always taken.
  The `bne` branch at 0x1000bcb0 targets 0x1000bc7c, is taken when s0(?) < 0x258 (signed), and falls through when s0(?) >= 0x258 (signed).
  The `beq` branch at 0x1000bcd0 targets 0x1000b40c and is always taken.
  The `bne` branch at 0x1000bd48 targets 0x1000bd14, is taken when s0(?) < 0x258 (signed), and falls through when s0(?) >= 0x258 (signed).
  The `beq` branch at 0x1000bd68 targets 0x1000b40c and is always taken.
  The `beq` branch at 0x1000bd9c targets 0x1000b40c and is always taken.
  The `beq` branch at 0x1000bdbc targets 0x1000b334 and is always taken.
  The `beq` branch at 0x1000bddc targets 0x1000b334 and is always taken.
  The `beq` branch at 0x1000bdf8 targets 0x1000b334 and is always taken.
  The `beq` branch at 0x1000be0c targets 0x1000b598 and is always taken.
  The return at 0x1000ba04 has v0 = ?.
  The indirect jump at 0x1000b360 uses the jump table at 0x10025608 with targets 0x1000b408, 0x1000bd70, 0x1000bcd8, 0x1000bc44, 0x1000b408, 0x1000b368, 0x1000bb94, 0x1000bae0, 0x1000ba38.

- `draw_func` in `usr/diags/SG/bin/olsgsys` at 0x1000be14 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000be14-0x1000c22c (1048 bytes).
  It occupies 1048 bytes.
  The `ld` at 0x1000bec0 loads 8 bytes from abs 0x10025b20.
  The `ld` at 0x1000bed4 loads 8 bytes from abs 0x10025af0.
  The `lw` at 0x1000bedc loads 4 bytes from abs 0x10025ae4.
  The `lw` at 0x1000bee0 loads 4 bytes from abs 0x10025ae8.
  The `ld` at 0x1000bee4 loads 8 bytes from abs 0x10025b28.
  The `ld` at 0x1000bee8 loads 8 bytes from abs 0x10025b30.
  The `ld` at 0x1000beec loads 8 bytes from abs 0x10025b38.
  The `ld` at 0x1000bef0 loads 8 bytes from abs 0x10025b40.
  The `ld` at 0x1000bef4 loads 8 bytes from abs 0x10025b48.
  The `ld` at 0x1000bef8 loads 8 bytes from abs 0x10025af8.
  The `ld` at 0x1000befc loads 8 bytes from abs 0x10025b00.
  The `ld` at 0x1000bf00 loads 8 bytes from abs 0x10025b08.
  The `ld` at 0x1000bf04 loads 8 bytes from abs 0x10025b10.
  The `ld` at 0x1000bf08 loads 8 bytes from abs 0x10025b18.
  The `lw` at 0x1000bf38 loads 4 bytes from abs 0x10025ae0.
  The `ld` at 0x1000bf68 loads 8 bytes from abs 0x10025b50.
  The `ld` at 0x1000bf70 loads 8 bytes from abs 0x10025b58.
  The `ld` at 0x1000bf74 loads 8 bytes from abs 0x10025b60.
  The `ld` at 0x1000bf78 loads 8 bytes from abs 0x10025b68.
  The `ld` at 0x1000bf7c loads 8 bytes from abs 0x10025b70.
  The `ld` at 0x1000bf84 loads 8 bytes from abs 0x10025b78.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x84, including `lw` at 0x1000bfb4, `lw` at 0x1000bfd4.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8c, including `lw` at 0x1000bfbc, `lw` at 0x1000bfe0.
  The `lw` at 0x1000bfcc loads 4 bytes from ([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4)) +0xc.
  The `lw` at 0x1000bff4 loads 4 bytes from ([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4)) +0x10.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1000c12c, `lw` at 0x1000c138, `lw` at 0x1000c150.
  The `jal` at 0x1000bfac calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10025b80, a2=0x0, a3=0xa0000000a, a4=0xa0000000a, a5=0x0, a6=0x0, a7=0x500000006.
  The `jalr` at 0x1000bffc calls glMatrixMode with a0=0x1700, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000c00c calls glLoadIdentity with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000c018 calls glMatrixMode with a0=0x1701, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000c024 calls glLoadIdentity with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000c038 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10025b90, a2=?, a3=?.
  The `jalr` at 0x1000c068 calls glOrtho with a0=?, a1=?, a2=?, a3=?; fp f16=0xbff0000000000000, f17=0x3ff0000000000000.
  The `jalr` at 0x1000c0a4 calls glTranslated with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000c0bc calls glClearColor with a0=?, a1=?, a2=?, a3=?; fp f12=0x3eae147b, f13=0x3f2b851f, f14=0x3eae147b, f15=0x3f800000.
  The `jalr` at 0x1000c0d4 calls glViewport with a0=0x0, a1=0x0, a2=?, a3=?.
  The `jal` at 0x1000c0e8 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10025ba0, a2=?, a3=?.
  The `jal` at 0x1000c128 calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000c134 calls dl_output_info [0x100189a4] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000c140 calls dl_output_indent [0x1001a4d0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000c168 calls draw_dma_pattern [0x1000b280] with a0=sp-128, a1=a0 at entry (arg0), a2=a1 at entry (arg1), a3=?.
  The `jal` at 0x1000c17c calls swap_buffers [0x10010f9c] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x1000c188 calls sleep with a0=0x5, a1=?, a2=?, a3=?.
  The `jal` at 0x1000c1b4 calls dl_hash_lookup [0x1001d410] with a0=0x10025bb0, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000c1cc calls strtoul with a0=ret(dl_hash_lookup), a1=0x0, a2=0x0, a3=?.
  The `beq` branch at 0x1000c11c targets 0x1000c1ac and is always taken.
  The `beq` branch at 0x1000c1a4 targets 0x1000c1f4, is taken when s4(?) >= 0xc (signed), and falls through when s4(?) < 0xc (signed).
  The `beq` branch at 0x1000c1bc targets 0x1000c124, is taken when v0(=ret(dl_hash_lookup)) == 0, and falls through when v0(=ret(dl_hash_lookup)) != 0.
  The `beq` branch at 0x1000c1e4 targets 0x1000c128, is taken when a1(?) >= 0x1 (unsigned), and falls through when a1(?) < 0x1 (unsigned).
  The `beq` branch at 0x1000c1ec targets 0x1000c194 and is always taken.
  The return at 0x1000c224 has v0 = ?.

- `TEST_seq_ogl_dma` in `usr/diags/SG/bin/olsgsys` at 0x1000c22c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000c22c-0x1000c4a8 (636 bytes).
  It occupies 636 bytes.
  4 such `lbu` accesses load 1 byte from a0 (arg0 at entry) +0x1, including `lbu` at 0x1000c274, `lbu` at 0x1000c2e4, `lbu` at 0x1000c3dc.
  The `lw` at 0x1000c278 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x1000c2f4 loads 4 bytes from ?.
  The `jal` at 0x1000c24c calls isXrunning [0x10008c9c] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1000c26c calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10025bc8, a2=?, a3=?.
  The `jal` at 0x1000c2ac calls dl_output_rslt [0x10017d3c] with a0=0x2, a1=0x10025d08, a2=?, a3=?.
  The `jalr` at 0x1000c2d0 calls strcmp with a0=ret(dl_hash_lookup), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000c2fc calls sginap with a0=0x5, a1=?, a2=?, a3=?.
  The `jal` at 0x1000c308 calls dl_hash_lookup [0x1001d410] with a0=0x1002b538, a1=?, a2=?, a3=?.
  The `jal` at 0x1000c31c calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000c334 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10025bf8, a2=?, a3=?.
  The `jalr` at 0x1000c340 calls XOpenDisplay with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000c360 calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x10025c10, a2=?, a3=?.
  The `jal` at 0x1000c380 calls dl_output_info [0x100189a4] with a0=0x10025c38, a1=?, a2=?, a3=?.
  The `jal` at 0x1000c38c calls dl_output_indent [0x1001a4d0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000c3a0 calls dma_pipeSetup [0x1000af30] with a0=ret(XOpenDisplay), a1=?, a2=?, a3=?.
  The `jal` at 0x1000c3c0 calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x10025c70, a2=?, a3=?.
  The `jal` at 0x1000c3d0 calls Cleanup [0x10011e48] with a0=ret(XOpenDisplay), a1=?, a2=?, a3=?.
  The `jal` at 0x1000c404 calls dl_output_rslt [0x10017d3c] with a0=0x0, a1=0x10025cc8, a2=?, a3=?.
  The `jal` at 0x1000c424 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10025c90, a2=?, a3=?.
  The `jal` at 0x1000c438 calls draw_func [0x1000be14] with a0=ret(XOpenDisplay), a1=?, a2=?, a3=?.
  The `jal` at 0x1000c458 calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x10025ca8, a2=?, a3=?.
  The `jal` at 0x1000c468 calls Cleanup [0x10011e48] with a0=ret(XOpenDisplay), a1=?, a2=?, a3=?.
  The `jal` at 0x1000c498 calls dl_output_rslt [0x10017d3c] with a0=0x1, a1=0x10025ce8, a2=?, a3=?.
  The `bne` branch at 0x1000c254 targets 0x1000c2a4, is taken when v0(=ret(isXrunning)) != 0, and falls through when v0(=ret(isXrunning)) == 0.
  The `blez` branch at 0x1000c290 targets 0x1000c478, is taken when a2(=[a0+1]:1) <= 0 (signed), and falls through when a2(=[a0+1]:1) > 0 (signed).
  The `beq` branch at 0x1000c29c targets 0x1000c2f8 and is always taken.
  The `beq` branch at 0x1000c2dc targets 0x1000c31c, is taken when 0 >= v0(=ret(strcmp)) (unsigned), and falls through when 0 < v0(=ret(strcmp)) (unsigned).
  The `beq` branch at 0x1000c2f0 targets 0x1000c3e0, is taken when s1(?) >= a3(=[a0+1]:1) (signed), and falls through when s1(?) < a3(=[a0+1]:1) (signed).
  The `bne` branch at 0x1000c310 targets 0x1000c2c8, is taken when v0(=ret(dl_hash_lookup)) != 0, and falls through when v0(=ret(dl_hash_lookup)) == 0.
  The `bne` branch at 0x1000c348 targets 0x1000c370, is taken when v0(=ret(XOpenDisplay)) != 0, and falls through when v0(=ret(XOpenDisplay)) == 0.
  The `beq` branch at 0x1000c368 targets 0x1000c2e4 and is always taken.
  The `beq` branch at 0x1000c3ac targets 0x1000c414, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x1000c3d8 targets 0x1000c2e8 and is always taken.
  The `beq` branch at 0x1000c3e0 targets 0x1000c478, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x1000c40c targets 0x1000c2b8 and is always taken.
  The `beq` branch at 0x1000c444 targets 0x1000c460, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x1000c470 targets 0x1000c2e8 and is always taken.
  The `beq` branch at 0x1000c4a0 targets 0x1000c2b8 and is always taken.
  The return at 0x1000c2c0 has v0 = ret(dl_output_rslt).

- `TEST_sys_ogl_dma` in `usr/diags/SG/bin/olsgsys` at 0x1000c4a8 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000c4a8-0x1000c4b0 (8 bytes).
  It occupies 8 bytes.
  The return at 0x1000c4a8 has v0 = ?.

- `draw_dma_rect` in `usr/diags/SG/bin/olsgsys` at 0x1000c4b0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000c4b0-0x1000c550 (160 bytes).
  It occupies 160 bytes.
  The `jalr` at 0x1000c4d4 calls glClear with a0=0x4000, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1000c4e0 calls glPushMatrix with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000c4f4 calls glColor3f with a0=?, a1=?, a2=?, a3=?; fp f12=0x3dcccccd, f13=0x3f666666.
  The `jalr` at 0x1000c510 calls glRotatef with a0=?, a1=?, a2=?, a3=?; fp f15=0x3f800000.
  The `jalr` at 0x1000c528 calls glRectf with a0=?, a1=?, a2=?, a3=?; fp f12=0xffffffffc37a0000, f13=0xffffffffc37a0000, f14=0x437a0000, f15=0x437a0000.
  The `jalr` at 0x1000c534 calls glPopMatrix with a0=?, a1=?, a2=?, a3=?.
  The return at 0x1000c548 has v0 = ret(glPopMatrix).

- `dma_draw_thread` in `usr/diags/SG/bin/olsgsys` at 0x1000c550 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000c550-0x1000c74c (508 bytes).
  It occupies 508 bytes.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x40, including `lw` at 0x1000c59c, `lw` at 0x1000c5b8, `lw` at 0x1000c6f8.
  The `lw` at 0x1000c5a4 loads 4 bytes from a0 (arg0 at entry) +0x48.
  The `sw` at 0x1000c5b4 stores 4 bytes to a0 (arg0 at entry) +0x4c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44, including `lw` at 0x1000c5bc, `lw` at 0x1000c700.
  3 such `lw` accesses load 4 bytes from sym(dma_width) +0x0, including `lw` at 0x1000c618, `lw` at 0x1000c64c, `lw` at 0x1000c6ac.
  3 such `lw` accesses load 4 bytes from sym(dma_height) +0x0, including `lw` at 0x1000c620, `lw` at 0x1000c648, `lw` at 0x1000c6b4.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x50, including `sw` at 0x1000c6cc, `sw` at 0x1000c720.
  The `lw` at 0x1000c710 loads 4 bytes from a0 (arg0 at entry) +0x50.
  The `jalr` at 0x1000c590 calls pthread_mutex_lock with a0=sym(_dma_lock), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1000c5a8 calls glXCreateContext with a0=[a0+64], a1=[a0+72], a2=0x0, a3=0x1.
  The `jalr` at 0x1000c5c0 calls glXMakeCurrent with a0=[a0+64], a1=[a0+68], a2=ret(glXCreateContext), a3=?.
  The `jalr` at 0x1000c5d0 calls pthread_mutex_unlock with a0=sym(_dma_lock), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000c5e0 calls glMatrixMode with a0=0x1700, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000c5f0 calls glLoadIdentity with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000c5fc calls glMatrixMode with a0=0x1701, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000c608 calls glLoadIdentity with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000c640 calls glOrtho with a0=?, a1=?, a2=?, a3=?; fp f16=0xbff0000000000000, f17=0x3ff0000000000000.
  The `jalr` at 0x1000c67c calls glTranslated with a0=?, a1=[sym(dma_height)], a2=?, a3=[sym(dma_width)].
  The `jalr` at 0x1000c694 calls glClearColor with a0=?, a1=?, a2=?, a3=?; fp f15=0x3f800000.
  The `jalr` at 0x1000c6a0 calls pthread_mutex_lock with a0=sym(_dma_lock), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000c6b8 calls glViewport with a0=0x0, a1=0x0, a2=[sym(dma_width)], a3=[sym(dma_height)].
  The `jalr` at 0x1000c6c4 calls pthread_mutex_unlock with a0=sym(_dma_lock), a1=?, a2=?, a3=?.
  The `jal` at 0x1000c6e0 calls draw_dma_rect [0x1000c4b0] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000c6ec calls pthread_mutex_lock with a0=sym(_dma_lock), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000c6fc calls glXSwapBuffers with a0=[a0+64], a1=[a0+68], a2=?, a3=?.
  The `jalr` at 0x1000c708 calls pthread_mutex_unlock with a0=sym(_dma_lock), a1=?, a2=?, a3=?.
  The `bne` branch at 0x1000c71c targets 0x1000c6dc, is taken when a0(=[a0+80]) < 0x167 (signed), and falls through when a0(=[a0+80]) >= 0x167 (signed).
  The return at 0x1000c744 has v0 = ret(pthread_mutex_unlock).

- `cleanup` in `usr/diags/SG/bin/olsgsys` at 0x1000c74c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000c74c-0x1000c7ec (160 bytes).
  It occupies 160 bytes.
  2 such `lbu` accesses load 1 byte from a0 (arg0 at entry) +0x1, including `lbu` at 0x1000c750, `lbu` at 0x1000c79c.
  The `lw` at 0x1000c7b0 loads 4 bytes from ?.
  The `jalr` at 0x1000c794 calls XCloseDisplay with a0=?, a1=?, a2=[a0+1]:1, a3=?.
  The `blez` branch at 0x1000c778 targets 0x1000c7cc, is taken when a2(=[a0+1]:1) <= 0 (signed), and falls through when a2(=[a0+1]:1) > 0 (signed).
  The `beq` branch at 0x1000c78c targets 0x1000c7b0 and is always taken.
  The `beq` branch at 0x1000c7a8 targets 0x1000c7cc, is taken when s1(?) >= a2(=[a0+1]:1) (signed), and falls through when s1(?) < a2(=[a0+1]:1) (signed).
  The `bne` branch at 0x1000c7b4 targets 0x1000c794, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `bne` branch at 0x1000c7c4 targets 0x1000c7b0, is taken when s1(?) < a2(=[a0+1]:1) (signed), and falls through when s1(?) >= a2(=[a0+1]:1) (signed).
  The return at 0x1000c7e4 has v0 = one of ?, ret(XCloseDisplay).

- `swap_pipeDraw` in `usr/diags/SG/bin/olsgsys` at 0x1000c7ec (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000c7ec-0x1000c8d0 (228 bytes).
  It occupies 228 bytes.
  The `lw` at 0x1000c87c loads 4 bytes from table(0x10033240) +0x0.
  The `jal` at 0x1000c81c calls dl_output_indent [0x1001a4d0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1000c834 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x10025d30, a2=a0 at entry (arg0), a3=?.
  The `jal` at 0x1000c84c calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10025d48, a2=a0 at entry (arg0), a3=?.
  The `jal` at 0x1000c878 calls nowDraw [0x10011b60] with a0=entry(0x10033240), a1=a0 at entry (arg0), a2=a1 at entry (arg1), a3=a2 at entry (arg2), a4=a3 at entry (arg3).
  The `jal` at 0x1000c894 calls dl_output_error [0x10018b7c] with a0=0x32, a1=0x10025d60, a2=a0 at entry (arg0), a3=?.
  The `jal` at 0x1000c8ac calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1000c880 targets 0x1000c8a4, is taken when v0(=ret(nowDraw)) == 0, and falls through when v0(=ret(nowDraw)) != 0.
  The `beq` branch at 0x1000c89c targets 0x1000c8a8 and is always taken.
  The return at 0x1000c8c8 has v0 = one of 0x0, 0x1.

- `swap_pipeSetup` in `usr/diags/SG/bin/olsgsys` at 0x1000c8d0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000c8d0-0x1000cb48 (632 bytes).
  It occupies 632 bytes.
  The `sw` at 0x1000c994 stores 4 bytes to table(0x10033240) +0x0.
  4 such `lw` accesses load 4 bytes from table(0x10033240) +0x0, including `lw` at 0x1000c9b8, `lw` at 0x1000ca08, `lw` at 0x1000ca24.
  The `lw` at 0x1000c9c8 loads 4 bytes from entry(0x10033240) +0x84.
  The `lw` at 0x1000ca40 loads 4 bytes from sym(xErrorFlag) +0x0.
  The `sw` at 0x1000ca6c stores 4 bytes to sym(xErrorFlag) +0x0.
  The `jal` at 0x1000c910 calls dl_hash_lookup [0x1001d410] with a0=0x1002b540, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1000c928 calls dl_output_indent [0x1001a4d0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000c938 calls dl_hash_value [0x1001d48c] with a0=0x1002b548, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x1000c950 calls sprintf with a0=sp-112, a1=0x1002b550, a2=ret(dl_hash_value), a3=a0 at entry (arg0).
  The `jal` at 0x1000c96c calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10025d98, a2=sp-112, a3=?.
  The `jalr` at 0x1000c978 calls XOpenDisplay with a0=sp-112, a1=?, a2=?, a3=?.
  The `jal` at 0x1000c9ac calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10025dd0, a2=?, a3=a0 at entry (arg0).
  The `jalr` at 0x1000c9c4 calls XSGIvcLoadVideoFormatByName with a0=entry(0x10033240), a1=[entry(0x10033240)+132], a2=0x0, a3=?.
  The `jal` at 0x1000c9ec calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x10025df8, a2=?, a3=a0 at entry (arg0).
  The `jalr` at 0x1000ca0c calls XSetScreenSaver with a0=entry(0x10033240), a1=0x0, a2=0x64, a3=0x0, a4=0x0.
  The `jalr` at 0x1000ca20 calls XResetScreenSaver with a0=entry(0x10033240), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000ca34 calls sleep with a0=0x3, a1=?, a2=?, a3=?.
  The `jal` at 0x1000ca5c calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x10025e58, a2=?, a3=a0 at entry (arg0), a4=[sym(xErrorFlag)].
  The `jal` at 0x1000ca84 calls drawlibDraw [0x10011d6c] with a0=entry(0x10033240), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a0 at entry (arg0), a4=a3 at entry (arg3).
  The `jal` at 0x1000caa0 calls dl_output_error [0x10018b7c] with a0=0x32, a1=0x10025e88, a2=a0 at entry (arg0), a3=?.
  The `jal` at 0x1000cab0 calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000cae0 calls dl_hash_lookup [0x1001d410] with a0=0x1002b540, a1=?, a2=?, a3=?.
  The `jal` at 0x1000cb00 calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x10025db0, a2=sp-112, a3=?.
  The `jal` at 0x1000cb1c calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x10025e20, a2=0x2, a3=?.
  The `jal` at 0x1000cb38 calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x10025e38, a2=?, a3=0x2.
  The `bne` branch at 0x1000c918 targets 0x1000cadc, is taken when v0(=ret(dl_hash_lookup)) != 0, and falls through when v0(=ret(dl_hash_lookup)) == 0.
  The `beq` branch at 0x1000c990 targets 0x1000caf0, is taken when v0(=ret(XOpenDisplay)) == 0, and falls through when v0(=ret(XOpenDisplay)) != 0.
  The `beq` branch at 0x1000c9d0 targets 0x1000c9f8, is taken when v0(=ret(XSGIvcLoadVideoFormatByName)) == a3(=0x1), and falls through when v0(=ret(XSGIvcLoadVideoFormatByName)) != a3(=0x1).
  The `beq` branch at 0x1000ca18 targets 0x1000cb10, is taken when v0(=ret(XSetScreenSaver)) == a2(=0x2), and falls through when v0(=ret(XSetScreenSaver)) != a2(=0x2).
  The `beq` branch at 0x1000ca2c targets 0x1000cb2c, is taken when v0(=ret(XResetScreenSaver)) == a3(=0x2), and falls through when v0(=ret(XResetScreenSaver)) != a3(=0x2).
  The `beq` branch at 0x1000ca44 targets 0x1000ca70, is taken when a4(=[sym(xErrorFlag)]) == 0, and falls through when a4(=[sym(xErrorFlag)]) != 0.
  The `blez` branch at 0x1000ca8c targets 0x1000caac, is taken when v0(=ret(drawlibDraw)) <= 0 (signed), and falls through when v0(=ret(drawlibDraw)) > 0 (signed).
  The `beq` branch at 0x1000cae8 targets 0x1000c924 and is always taken.
  The `beq` branch at 0x1000cb08 targets 0x1000cab8 and is always taken.
  The `beq` branch at 0x1000cb24 targets 0x1000ca20 and is always taken.
  The `beq` branch at 0x1000cb40 targets 0x1000ca34 and is always taken.
  The return at 0x1000cad4 has v0 = one of 0x0, 0x1, 0x2, 0x3.

- `TEST_swap` in `usr/diags/SG/bin/olsgsys` at 0x1000cb48 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000cb48-0x1000d128 (1504 bytes).
  It occupies 1504 bytes.
  12 such `lbu` accesses load 1 byte from a0 (arg0 at entry) +0x1, including `lbu` at 0x1000cba8, `lbu` at 0x1000cbd8, `lbu` at 0x1000cc84.
  The `lw` at 0x1000cd2c loads 4 bytes from ?.
  The `lw` at 0x1000cf58 loads 4 bytes from sym(__us_rsthread_stdio) +0x0.
  The `lw` at 0x1000cf5c loads 4 bytes from sym(__iob) +0x0.
  The `lw` at 0x1000cf64 loads 4 bytes from sym(__iob) +0x4.
  The `sw` at 0x1000cfcc stores 4 bytes to sym(__iob) +0x0.
  The `sw` at 0x1000cfdc stores 4 bytes to sym(__iob) +0x4.
  The `jal` at 0x1000cb80 calls isXrunning [0x10008c9c] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1000cba0 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10025eb8, a2=?, a3=?.
  The `jal` at 0x1000cbd0 calls swap_pipeSetup [0x1000c8d0] with a0=?, a1=0x500, a2=0x400, a3=0x1.
  The `jal` at 0x1000cc18 calls dl_output_rslt [0x10017d3c] with a0=0x2, a1=0x100262f0, a2=?, a3=?.
  The `jal` at 0x1000cc7c calls dl_output_info [0x100189a4] with a0=0x10026018, a1=?, a2=?, a3=?.
  The `jal` at 0x1000ccac calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x10025f90, a2=?, a3=?.
  The `jal` at 0x1000ccbc calls collect_dac_crc [0x10013a44] with a0=sp-112, a1=?, a2=?, a3=?.
  The `jal` at 0x1000ccd8 calls dl_output_error [0x10018b7c] with a0=0x3c, a1=0x10025fb8, a2=?, a3=?.
  The `jal` at 0x1000ccfc calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10025fe0, a2=?, a3=?.
  The `jal` at 0x1000cd14 calls swap_pipeDraw [0x1000c7ec] with a0=?, a1=0x500, a2=0x400, a3=?.
  The `jal` at 0x1000cd30 calls swap_buffers [0x10010f9c] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000cd3c calls sleep with a0=0x5, a1=?, a2=?, a3=?.
  The `jal` at 0x1000cd4c calls collect_dac_crc [0x10013a44] with a0=sp-112, a1=?, a2=?, a3=?.
  The `jal` at 0x1000cd68 calls dl_output_error [0x10018b7c] with a0=0x3c, a1=0x10025fb8, a2=?, a3=?.
  The `jal` at 0x1000cd8c calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10026040, a2=?, a3=?.
  The `jal` at 0x1000cdcc calls dl_output_error [0x10018b7c] with a0=0x50, a1=0x10026078, a2=?, a3=?.
  The `jal` at 0x1000ce00 calls dl_output_error [0x10018b7c] with a0=0x50, a1=0x100260e8, a2=?, a3=?.
  The `jal` at 0x1000ce20 calls dl_output_dbug [0x10019758] with a0=0x5, a1=0x10026120, a2=?, a3=?.
  The `jal` at 0x1000ce40 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x10026148, a2=?, a3=?.
  The `jal` at 0x1000ce78 calls dl_output_error [0x10018b7c] with a0=0x50, a1=0x100261a8, a2=?, a3=?.
  The `jal` at 0x1000ce9c calls collect_dac_crc [0x10013a44] with a0=sp-112, a1=?, a2=?, a3=?.
  The `jal` at 0x1000ceb8 calls dl_output_error [0x10018b7c] with a0=0x3c, a1=0x10025fb8, a2=?, a3=?.
  The `jal` at 0x1000cedc calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10026040, a2=?, a3=?.
  The `jal` at 0x1000cf14 calls dl_output_error [0x10018b7c] with a0=0x50, a1=0x100261e8, a2=?, a3=?.
  The `jal` at 0x1000cf34 calls dl_hash_lookup [0x1001d410] with a0=0x10026250, a1=?, a2=?, a3=?.
  The `jal` at 0x1000cf48 calls dl_output_info [0x100189a4] with a0=0x10026260, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000cf6c calls __semgetc with a0=sym(__iob), a1=[sym(__iob)], a2=[sym(__iob)+4], a3=[sym(__us_rsthread_stdio)].
  The `jal` at 0x1000cf90 calls dl_output_dbug [0x10019758] with a0=0x5, a1=0x10026180, a2=?, a3=?.
  The `jal` at 0x1000cfb0 calls dl_output_dbug [0x10019758] with a0=0x5, a1=0x100260b8, a2=?, a3=?.
  The `jalr` at 0x1000cfe4 calls __filbuf with a0=sym(__iob), a1=[sym(__iob)], a2=[sym(__iob)+4], a3=[sym(__iob)]-1, a4=[sym(__iob)+4]+1, a5=sym(__iob).
  The `jal` at 0x1000cffc calls dl_output_info [0x100189a4] with a0=0x10026280, a1=?, a2=?, a3=?.
  The `jal` at 0x1000d018 calls collect_dac_crc [0x10013a44] with a0=sp-112, a1=?, a2=?, a3=?.
  The `jal` at 0x1000d034 calls dl_output_error [0x10018b7c] with a0=0x50, a1=0x10025fb8, a2=?, a3=?.
  The `jal` at 0x1000d058 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10026040, a2=?, a3=?.
  The `jal` at 0x1000d084 calls cleanup [0x1000c74c] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x1000d0a0 calls dl_output_rslt [0x10017d3c] with a0=0x0, a1=0x100262b0, a2=?, a3=?.
  The `jal` at 0x1000d0d0 calls dl_output_rslt [0x10017d3c] with a0=0x1, a1=0x100262d8, a2=?, a3=?.
  The `jal` at 0x1000d0ec calls dl_output_info [0x100189a4] with a0=0x10025ee8, a1=[a0+1]:1, a2=?, a3=?.
  The `jal` at 0x1000d100 calls dl_output_diag [0x10018340] with a0=0x0, a1=0x10025f10, a2=?, a3=?.
  The `jal` at 0x1000d118 calls dl_output_rslt [0x10017d3c] with a0=0x0, a1=0x10025f68, a2=?, a3=?.
  The `bne` branch at 0x1000cb88 targets 0x1000cc0c, is taken when v0(=ret(isXrunning)) != 0, and falls through when v0(=ret(isXrunning)) == 0.
  The `blez` branch at 0x1000cbac targets 0x1000d0b0, is taken when a1(=[a0+1]:1) <= 0 (signed), and falls through when a1(=[a0+1]:1) > 0 (signed).
  The `bne` branch at 0x1000cbe4 targets 0x1000cbc0, is taken when s0(?) < a1(=[a0+1]:1) (signed), and falls through when s0(?) >= a1(=[a0+1]:1) (signed).
  The `bgtz` branch at 0x1000cbf0 targets 0x1000d0e0, is taken when s1(?) > 0 (signed), and falls through when s1(?) <= 0 (signed).
  The `beq` branch at 0x1000cc04 targets 0x1000cc5c and is always taken.
  The `bgtz` branch at 0x1000cc44 targets 0x1000cff4, is taken when s1(?) > 0 (signed), and falls through when s1(?) <= 0 (signed).
  The `beq` branch at 0x1000cc54 targets 0x1000d008, is taken when s4(?) >= 0x168 (signed), and falls through when s4(?) < 0x168 (signed).
  The `blez` branch at 0x1000cc5c targets 0x1000cc44, is taken when a1(=[a0+1]:1) <= 0 (signed), and falls through when a1(=[a0+1]:1) > 0 (signed).
  The `beq` branch at 0x1000cc6c targets 0x1000cc98 and is always taken.
  The `beq` branch at 0x1000cc90 targets 0x1000cc44, is taken when s0(?) >= a1(=[a0+1]:1) (signed), and falls through when s0(?) < a1(=[a0+1]:1) (signed).
  The `blez` branch at 0x1000ccc4 targets 0x1000cce4, is taken when v0(=ret(collect_dac_crc)) <= 0 (signed), and falls through when v0(=ret(collect_dac_crc)) > 0 (signed).
  The `bgtz` branch at 0x1000cd20 targets 0x1000cc74, is taken when s1(?) > 0 (signed), and falls through when s1(?) <= 0 (signed).
  The `blez` branch at 0x1000cd54 targets 0x1000cd74, is taken when v0(=ret(collect_dac_crc)) <= 0 (signed), and falls through when v0(=ret(collect_dac_crc)) > 0 (signed).
  The `beq` branch at 0x1000cda4 targets 0x1000cddc, is taken when s0(?) >= a2(=[a0+1]:1-1) (signed), and falls through when s0(?) < a2(=[a0+1]:1-1) (signed).
  The `beq` branch at 0x1000cdac targets 0x1000cfa0, is taken when a3(?) == a7(?), and falls through when a3(?) != a7(?).
  The `beq` branch at 0x1000cdd4 targets 0x1000cf30 and is always taken.
  The `bne` branch at 0x1000cde0 targets 0x1000ce10, is taken when a2(?) != a7(?), and falls through when a2(?) == a7(?).
  The `beq` branch at 0x1000ce08 targets 0x1000ce34 and is always taken.
  The `blez` branch at 0x1000ce4c targets 0x1000cf24, is taken when a2(=[a0+1]:1) <= 0 (signed), and falls through when a2(=[a0+1]:1) > 0 (signed).
  The `beq` branch at 0x1000ce54 targets 0x1000ce98 and is always taken.
  The `beq` branch at 0x1000ce90 targets 0x1000cf24, is taken when s2(?) >= a2(=[a0+1]:1) (signed), and falls through when s2(?) < a2(=[a0+1]:1) (signed).
  The `blez` branch at 0x1000cea4 targets 0x1000cec4, is taken when v0(=ret(collect_dac_crc)) <= 0 (signed), and falls through when v0(=ret(collect_dac_crc)) > 0 (signed).
  The `beq` branch at 0x1000ceec targets 0x1000cf7c, is taken when a2(?) == a7(?), and falls through when a2(?) != a7(?).
  The `beq` branch at 0x1000cef4 targets 0x1000ce5c, is taken when a3(?) == a7(?), and falls through when a3(?) != a7(?).
  The `beq` branch at 0x1000cf1c targets 0x1000ce88 and is always taken.
  The `beq` branch at 0x1000cf3c targets 0x1000cc84, is taken when v0(=ret(dl_hash_lookup)) == 0, and falls through when v0(=ret(dl_hash_lookup)) != 0.
  The `beq` branch at 0x1000cf60 targets 0x1000cfc0, is taken when a3(=[sym(__us_rsthread_stdio)]) == 0, and falls through when a3(=[sym(__us_rsthread_stdio)]) != 0.
  The `beq` branch at 0x1000cf74 targets 0x1000cc88 and is always taken.
  The `beq` branch at 0x1000cf98 targets 0x1000ce88 and is always taken.
  The `beq` branch at 0x1000cfb8 targets 0x1000cf30 and is always taken.
  The `bltz` branch at 0x1000cfd0 targets 0x1000cfe0, is taken when a3(=[sym(__iob)]-1) < 0 (signed), and falls through when a3(=[sym(__iob)]-1) >= 0 (signed).
  The `beq` branch at 0x1000cfd8 targets 0x1000cc84 and is always taken.
  The `beq` branch at 0x1000cfec targets 0x1000cc88 and is always taken.
  The `blez` branch at 0x1000d008 targets 0x1000d074, is taken when a1(=[a0+1]:1) <= 0 (signed), and falls through when a1(=[a0+1]:1) > 0 (signed).
  The `blez` branch at 0x1000d020 targets 0x1000d040, is taken when v0(=ret(collect_dac_crc)) <= 0 (signed), and falls through when v0(=ret(collect_dac_crc)) > 0 (signed).
  The `bne` branch at 0x1000d06c targets 0x1000d014, is taken when s0(?) < a2(=[a0+1]:1) (signed), and falls through when s0(?) >= a2(=[a0+1]:1) (signed).
  The `blez` branch at 0x1000d08c targets 0x1000d0c0, is taken when s1(?) <= 0 (signed), and falls through when s1(?) > 0 (signed).
  The `beq` branch at 0x1000d0a8 targets 0x1000cc20 and is always taken.
  The `beq` branch at 0x1000d0b8 targets 0x1000cbf8 and is always taken.
  The `beq` branch at 0x1000d0d8 targets 0x1000cc24 and is always taken.
  The `beq` branch at 0x1000d120 targets 0x1000cc20 and is always taken.
  The return at 0x1000cc3c has v0 = ret(dl_output_rslt).

- `check_swap_groups` in `usr/diags/SG/bin/olsgsys` at 0x1000d128 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000d128-0x1000d490 (872 bytes).
  It occupies 872 bytes.
  2 such `lbu` accesses load 1 byte from a0 (arg0 at entry) +0x1, including `lbu` at 0x1000d12c, `lbu` at 0x1000d2cc.
  The `lw` at 0x1000d160 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `sb` at 0x1000d280 stores 1 byte to ?.
  The `lbu` at 0x1000d288 loads 1 byte from ?.
  The `lw` at 0x1000d2dc loads 4 bytes from ?.
  2 such `lw` accesses load 4 bytes from sym(ISX_mask) +0x0, including `lw` at 0x1000d450, `lw` at 0x1000d480.
  2 such `sw` accesses store 4 bytes to sym(ISX_mask) +0x0, including `sw` at 0x1000d45c, `sw` at 0x1000d48c.
  The `jalr` at 0x1000d190 calls atoi with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000d1a0 calls atoi with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000d1bc calls sprintf with a0=sp-2720, a1=0x10026318, a2=ret(atoi), a3=?.
  The `jalr` at 0x1000d1d4 calls sprintf with a0=sp-2704, a1=0x10026328, a2=ret(atoi), a3=?.
  The `jalr` at 0x1000d1e4 calls fopen with a0=sp-2704, a1=0x1002b558, a2=?, a3=?.
  The `jalr` at 0x1000d200 calls fgets with a0=sp-2672, a1=0x400, a2=ret(fopen), a3=?.
  The `jal` at 0x1000d228 calls dl_output_dbug [0x10019758] with a0=0x9, a1=0x10026350, a2=sp-2672, a3=?.
  The `jalr` at 0x1000d250 calls sscanf with a0=sp-2672, a1=0x10026368, a2=sp-1648, a3=sp-1392, a4=sp-1136, a5=sp-880, a6=sp-624.
  The `jalr` at 0x1000d294 calls strcmp with a0=sp-1392, a1=sp-2720, a2=?, a3=?.
  The `jalr` at 0x1000d2ac calls fgets with a0=sp-2672, a1=0x400, a2=ret(fopen), a3=?.
  The `jalr` at 0x1000d2c0 calls fclose with a0=ret(fopen), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000d320 calls strcmp with a0=sp-1136, a1=0x1002b560, a2=?, a3=?.
  The `jalr` at 0x1000d33c calls strcmp with a0=sp-880, a1=0x10026378, a2=?, a3=?.
  The `jal` at 0x1000d364 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x10026388, a2=ret(atoi), a3=sp-624.
  The `jal` at 0x1000d370 calls dl_hash_lookup [0x1001d410] with a0=0x1002b568, a1=?, a2=?, a3=?.
  The `jal` at 0x1000d380 calls dl_hash_lookup [0x1001d410] with a0=0x1002b568, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000d390 calls strcmp with a0=sp-368, a1=ret(dl_hash_lookup), a2=?, a3=?.
  The `jal` at 0x1000d3a0 calls dl_hash_lookup [0x1001d410] with a0=0x1002b568, a1=?, a2=?, a3=?.
  The `jal` at 0x1000d3bc calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x100263e0, a2=?, a3=ret(dl_hash_lookup).
  The `jal` at 0x1000d3dc calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10026340, a2=sp-2704, a3=?.
  The `jalr` at 0x1000d3f4 calls strcmp with a0=sp-368, a1=0x1002b570, a2=?, a3=?.
  The `jal` at 0x1000d410 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x10026448, a2=?, a3=?.
  The `jal` at 0x1000d424 calls dl_hash_lookup [0x1001d410] with a0=0x1002b568, a1=?, a2=?, a3=?.
  The `jal` at 0x1000d440 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x100263b0, a2=?, a3=ret(dl_hash_lookup).
  The `jal` at 0x1000d470 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x10026418, a2=?, a3=?.
  The `blez` branch at 0x1000d16c targets 0x1000d2e0, is taken when v1(=[a0+1]:1) <= 0 (signed), and falls through when v1(=[a0+1]:1) > 0 (signed).
  The `beq` branch at 0x1000d1ec targets 0x1000d3cc, is taken when v0(=ret(fopen)) == 0, and falls through when v0(=ret(fopen)) != 0.
  The `beq` branch at 0x1000d208 targets 0x1000d2bc, is taken when v0(=ret(fgets)) == 0, and falls through when v0(=ret(fgets)) != 0.
  The `blez` branch at 0x1000d258 targets 0x1000d2a0, is taken when v0(=ret(sscanf)) <= 0 (signed), and falls through when v0(=ret(sscanf)) > 0 (signed).
  The `beq` branch at 0x1000d274 targets 0x1000d284, is taken when a6(?) == s0(=0x22), and falls through when a6(?) != s0(=0x22).
  The `bnel` branch at 0x1000d284 targets 0x1000d26c, is taken when a2(?) != 0, and falls through when a2(?) == 0; its branch-likely delay slot `lbu a6,0(a5)` at 0x1000d288 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x1000d29c targets 0x1000d318, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0x1000d2b4 targets 0x1000d21c, is taken when v0(=ret(fgets)) != 0, and falls through when v0(=ret(fgets)) == 0.
  The `bne` branch at 0x1000d2d8 targets 0x1000d18c, is taken when s7(?) < a3(=[a0+1]:1) (signed), and falls through when s7(?) >= a3(=[a0+1]:1) (signed).
  The `bne` branch at 0x1000d328 targets 0x1000d2a4, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `bne` branch at 0x1000d344 targets 0x1000d2a4, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `beq` branch at 0x1000d378 targets 0x1000d3ec, is taken when v0(=ret(dl_hash_lookup)) == 0, and falls through when v0(=ret(dl_hash_lookup)) != 0.
  The `beq` branch at 0x1000d398 targets 0x1000d420, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `beq` branch at 0x1000d3c4 targets 0x1000d2a4 and is always taken.
  The `beq` branch at 0x1000d3e4 targets 0x1000d2e4 and is always taken.
  The `beq` branch at 0x1000d3fc targets 0x1000d460, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `beq` branch at 0x1000d418 targets 0x1000d2a4 and is always taken.
  The `beq` branch at 0x1000d458 targets 0x1000d2a0 and is always taken.
  The `beq` branch at 0x1000d488 targets 0x1000d2a0 and is always taken.
  The return at 0x1000d310 has v0 = one of -0x1, 0x0.

- `TEST_swap2` in `usr/diags/SG/bin/olsgsys` at 0x1000d490 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000d490-0x1000e17c (3308 bytes).
  It occupies 3308 bytes.
  The `sw` at 0x1000d52c stores 4 bytes to sym(startDelay) +0x0.
  The `sw` at 0x1000d558 stores 4 bytes to sym(btwDelay) +0x0.
  The `lbu` at 0x1000d56c loads 1 byte from a0 (arg0 at entry) +0x1.
  The `sw` at 0x1000d5b0 stores 4 bytes to sym(XConnectSema) +0x0.
  12 such `sw` accesses store 4 bytes to ?, including `sw` at 0x1000d5e8, `sw` at 0x1000d64c, `sw` at 0x1000d6a8.
  The `lw` at 0x1000d600 loads 4 bytes from a0 (arg0 at entry) +0xc.
  2 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x1000d664, `lhu` at 0x1000d66c.
  The `sh` at 0x1000d668 stores 2 bytes to ret(malloc) +0x100.
  The `sh` at 0x1000d674 stores 2 bytes to ret(malloc) +0x102.
  16 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1000d680, `lw` at 0x1000d69c, `lw` at 0x1000d6c0.
  The `sw` at 0x1000d68c stores 4 bytes to ret(malloc) +0x104.
  The `sw` at 0x1000d6ac stores 4 bytes to ret(malloc) +0x1d8.
  2 such `lw` accesses load 4 bytes from sym(ISX_mask) +0x0, including `lw` at 0x1000d6cc, `lw` at 0x1000e178.
  6 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x1000d808, `lwc1` at 0x1000d82c, `lwc1` at 0x1000d8c4.
  The `lw` at 0x1000d894 loads 4 bytes from sym(xErrorFlag) +0x0.
  The `sw` at 0x1000d8bc stores 4 bytes to sym(xErrorFlag) +0x0.
  2 such `lw` accesses load 4 bytes from ret(glXChooseVisual) +0x0, including `lw` at 0x1000d914, `lw` at 0x1000d9e4.
  The `lw` at 0x1000d9d0 loads 4 bytes from ret(glXChooseVisual) +0xc.
  The `lw` at 0x1000dac4 loads 4 bytes from (sp-3088 + (ret(atoi) << 0x2)) +0x0.
  4 such `lw` accesses load 4 bytes from [(sp-3088 + (ret(atoi) << 0x2))] +0x8c, including `lw` at 0x1000dad0, `lw` at 0x1000db60, `lw` at 0x1000db80.
  The `lw` at 0x1000daec loads 4 bytes from ([[(sp-3088 + (ret(atoi) << 0x2))]+140] + (((ret(atoi) << 0x2) + ret(atoi)) << 0x4)) +0x8.
  2 such `lw` accesses load 4 bytes from ([[(sp-3088 + (ret(atoi) << 0x2))]+140] + (((ret(atoi) << 0x2) + ret(atoi)) << 0x4)) +0xc, including `lw` at 0x1000db7c, `lw` at 0x1000dbcc.
  2 such `lw` accesses load 4 bytes from ([[(sp-3088 + (ret(atoi) << 0x2))]+140] + (((ret(atoi) << 0x2) + ret(atoi)) << 0x4)) +0x10, including `lw` at 0x1000db9c, `lw` at 0x1000dbd8.
  The `lw` at 0x1000ddbc loads 4 bytes from sym(btwDelay) +0x0.
  The `lw` at 0x1000ddcc loads 4 bytes from sym(startDelay) +0x0.
  The `lw` at 0x1000de00 loads 4 bytes from sym(done) +0x0.
  4 such `sw` accesses store 4 bytes to sym(done) +0x0, including `sw` at 0x1000decc, `sw` at 0x1000dedc, `sw` at 0x1000df00.
  4 such `sw` accesses store 4 bytes to sym(ready) +0x0, including `sw` at 0x1000ded8, `sw` at 0x1000dee4, `sw` at 0x1000df08.
  The `lw` at 0x1000dfc4 loads 4 bytes from sym(XConnectSema) +0x0.
  The `jalr` at 0x1000d4c4 calls bzero with a0=sp-3084, a1=0xfc, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1000d4d0 calls isXrunning [0x10008c9c] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000d4f0 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10026480, a2=?, a3=?.
  The `jal` at 0x1000d508 calls dl_hash_value [0x1001d48c] with a0=0x1002b578, a1=0xa, a2=?, a3=?.
  The `jal` at 0x1000d528 calls dl_output_info [0x100189a4] with a0=0x100264b0, a1=ret(dl_hash_value), a2=sym(startDelay), a3=?.
  The `jal` at 0x1000d538 calls dl_hash_value [0x1001d48c] with a0=0x1002b580, a1=0x2, a2=?, a3=?.
  The `jal` at 0x1000d554 calls dl_output_info [0x100189a4] with a0=0x100264d0, a1=ret(dl_hash_value), a2=sym(btwDelay), a3=?.
  The `jal` at 0x1000d560 calls check_swap_groups [0x1000d128] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000d570 calls XInitThreads with a0=?, a1=[a0+1]:1, a2=?, a3=?.
  The `jalr` at 0x1000d594 calls usnewsema with a0=[0x1002bb2c], a1=0x1, a2=?, a3=?.
  The `jalr` at 0x1000d5cc calls sprintf with a0=sp-2832, a1=0x1002b588, a2=?, a3=?.
  The `jalr` at 0x1000d5d8 calls XOpenDisplay with a0=sp-2832, a1=?, a2=?, a3=?.
  The `jal` at 0x1000d624 calls dl_output_rslt [0x10017d3c] with a0=0x2, a1=0x10026938, a2=?, a3=?.
  The `jalr` at 0x1000d644 calls malloc with a0=0x1dc, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000d65c calls strcpy with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jal` at 0x1000d6ec calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x10026570, a2=?, a3=?.
  The `jalr` at 0x1000d700 calls malloc with a0=0x1dc, a1=?, a2=?, a3=?.
  The `jal` at 0x1000d724 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x10026548, a2=?, a3=?.
  The `jal` at 0x1000d744 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x10026590, a2=?, a3=?.
  The `jal` at 0x1000d7c8 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10026730, a2=ret(atoi), a3=?.
  The `jal` at 0x1000d7e0 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10026750, a2=?, a3=?.
  The `jal` at 0x1000d7fc calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10026768, a2=?, a3=?.
  The `jal` at 0x1000d820 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10026780, a2=?, a3=?.
  The `jal` at 0x1000d844 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x10026798, a2=?, a3=?.
  The `jalr` at 0x1000d860 calls XSetScreenSaver with a0=[(sp-3088 + (ret(atoi) << 0x2))], a1=0x0, a2=0x64, a3=0x0, a4=0x0.
  The `jalr` at 0x1000d874 calls XResetScreenSaver with a0=[(sp-3088 + (ret(atoi) << 0x2))], a1=?, a2=?, a3=?.
  The `jalr` at 0x1000d888 calls sleep with a0=0x1, a1=?, a2=?, a3=?.
  The `jal` at 0x1000d8ac calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x100267e8, a2=ret(atoi), a3=?, a5=[sym(xErrorFlag)].
  The `jalr` at 0x1000d8e4 calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000d8f8 calls glXChooseVisual with a0=[(sp-3088 + (ret(atoi) << 0x2))], a1=ret(atoi), a2=sp-720, a3=?.
  The `jalr` at 0x1000d918 calls XCreateColormap with a0=[(sp-3088 + (ret(atoi) << 0x2))], a1=[([[(sp-3088 + (ret(atoi) << 0x2))]+140] + (((ret(atoi) << 0x2) + ret(atoi)) << 0x4))+8], a2=[ret(glXChooseVisual)], a3=0x0.
  The `jalr` at 0x1000d938 calls XCreatePixmap with a0=[(sp-3088 + (ret(atoi) << 0x2))], a1=[([[(sp-3088 + (ret(atoi) << 0x2))]+140] + (((ret(atoi) << 0x2) + ret(atoi)) << 0x4))+8], a2=0x1, a3=0x1, a4=0x1.
  The `jalr` at 0x1000d958 calls XCreatePixmap with a0=[(sp-3088 + (ret(atoi) << 0x2))], a1=[([[(sp-3088 + (ret(atoi) << 0x2))]+140] + (((ret(atoi) << 0x2) + ret(atoi)) << 0x4))+8], a2=0x1, a3=0x1, a4=0x1.
  The `jalr` at 0x1000d97c calls XCreatePixmapCursor with a0=[(sp-3088 + (ret(atoi) << 0x2))], a1=?, a2=ret(XCreatePixmap), a3=sp-216, a4=sp-216, a5=0x0, a6=0x0.
  The `jalr` at 0x1000d990 calls XFreePixmap with a0=[(sp-3088 + (ret(atoi) << 0x2))], a1=?, a2=?, a3=?.
  The `jalr` at 0x1000da04 calls XCreateWindow with a0=[(sp-3088 + (ret(atoi) << 0x2))], a1=[([[(sp-3088 + (ret(atoi) << 0x2))]+140] + (((ret(atoi) << 0x2) + ret(atoi)) << 0x4))+8], a2=0x0, a3=0x0, a6=0x0, a7=[ret(glXChooseVisual)+12].
  The `jalr` at 0x1000da1c calls XMapWindow with a0=[(sp-3088 + (ret(atoi) << 0x2))], a1=ret(XCreateWindow), a2=?, a3=?.
  The `jalr` at 0x1000da60 calls pthread_create with a0=?, a1=sp-744, a2=0x1000e1a8, a3=?.
  The `jalr` at 0x1000daa4 calls atoi with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000dac0 calls atoi with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000dae8 calls pthread_attr_init with a0=sp-744, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000daf8 calls pthread_attr_setdetachstate with a0=sp-744, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x1000db08 calls pthread_attr_setscope with a0=sp-744, a1=0x2, a2=?, a3=?.
  The `jal` at 0x1000db58 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100265a8, a2=0x8, a3=0xa, a4=0x9, a5=0x5, a6=0x4.
  The `jal` at 0x1000db78 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100265c8, a2=[([[(sp-3088 + (ret(atoi) << 0x2))]+140] + (((ret(atoi) << 0x2) + ret(atoi)) << 0x4))+12], a3=?.
  The `jal` at 0x1000db98 calls dl_output_dbug [0x10019758] with a0=0x3, a1=0x100265d8, a2=[([[(sp-3088 + (ret(atoi) << 0x2))]+140] + (((ret(atoi) << 0x2) + ret(atoi)) << 0x4))+16], a3=?.
  The `jal` at 0x1000dbac calls dl_hash_value [0x1001d48c] with a0=0x100265e8, a1=0x3c, a2=?, a3=?.
  The `jalr` at 0x1000dbd4 calls sprintf with a0=sp-320, a1=0x100265f8, a2=[([[(sp-3088 + (ret(atoi) << 0x2))]+140] + (((ret(atoi) << 0x2) + ret(atoi)) << 0x4))+12], a3=[([[(sp-3088 + (ret(atoi) << 0x2))]+140] + (((ret(atoi) << 0x2) + ret(atoi)) << 0x4))+16], a4=ret(dl_hash_value).
  The `jal` at 0x1000dbec calls dl_output_info [0x100189a4] with a0=0x10026608, a1=sp-320, a2=?, a3=?.
  The `jalr` at 0x1000dc04 calls XSGIvcLoadVideoFormatByName with a0=[(sp-3088 + (ret(atoi) << 0x2))], a1=ret(atoi), a2=0x0, a3=sp-320.
  The `jal` at 0x1000dc24 calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x10026630, a2=sp-320, a3=ret(atoi).
  The `jal` at 0x1000dc40 calls dl_output_dbug [0x10019758] with a0=0x2, a1=0x10026660, a2=ret(atoi), a3=?.
  The `jalr` at 0x1000dc58 calls XSGIvcQueryChannelInfo with a0=[(sp-3088 + (ret(atoi) << 0x2))], a1=ret(atoi), a2=0x0, a3=sp-288.
  The `jal` at 0x1000dc74 calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x10026688, a2=ret(atoi), a3=?.
  The `jalr` at 0x1000dc80 calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000dc8c calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000dce0 calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x100266f0, a2=?, a3=?, a4=ret(atoi).
  The `jalr` at 0x1000dcec calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000dcf8 calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000dd14 calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x10026820, a2=?, a3=?.
  The `jalr` at 0x1000dd70 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000dd90 calls sginap with a0=0x3e8, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000ddf8 calls sleep with a0=0x1, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000de44 calls glXJoinSwapGroupSGIX with a0=?, a1=?, a2=0x0, a3=?.
  The `jalr` at 0x1000de58 calls glXBindSwapBarrierSGIX with a0=?, a1=?, a2=0x0, a3=?.
  The `jalr` at 0x1000de64 calls pthread_cancel with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000de7c calls dl_output_info [0x100189a4] with a0=0x10026860, a1=?, a2=ret(pthread_cancel), a3=?.
  The `jal` at 0x1000deac calls dl_output_error [0x10018b7c] with a0=0x50, a1=0x10026888, a2=?, a3=?.
  The `jal` at 0x1000dec0 calls dl_output_diag [0x10018340] with a0=0x50, a1=0x100268c0, a2=?, a3=?.
  The `jalr` at 0x1000df38 calls XDestroyWindow with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000df4c calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000df74 calls sleep with a0=0x5, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000df98 calls XCloseDisplay with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000dfc0 calls usfreesema with a0=[sym(XConnectSema)], a1=[0x1002bb2c], a2=?, a3=?.
  The `jal` at 0x1000dfe4 calls dl_output_rslt [0x10017d3c] with a0=0x0, a1=0x100268f8, a2=?, a3=?.
  The `jal` at 0x1000e000 calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x100266c0, a2=ret(atoi), a3=?.
  The `jalr` at 0x1000e00c calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000e018 calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000e038 calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x100267b0, a2=?, a3=0x2.
  The `jal` at 0x1000e054 calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x100267c8, a2=?, a3=?, a4=0x2.
  The `jal` at 0x1000e06c calls dl_output_info [0x100189a4] with a0=0x10026848, a1=?, a2=?, a3=[sym(done)].
  The `jal` at 0x1000e08c calls dl_output_rslt [0x10017d3c] with a0=0x1, a1=0x10026920, a2=?, a3=?.
  The `jal` at 0x1000e0a8 calls dl_output_error [0x10018b7c] with a0=0x7d0, a1=0x10026518, a2=sym(XConnectSema), a3=?.
  The `jalr` at 0x1000e0f0 calls usconfig with a0=0x1, a1=0x41, a2=?, a3=?.
  The `jalr` at 0x1000e0fc calls tmpnam with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000e108 calls strdup with a0=ret(tmpnam), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000e118 calls usinit with a0=ret(strdup), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000e134 calls unlink with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000e140 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000e15c calls dl_output_error [0x10018b7c] with a0=0x7d0, a1=0x10026508, a2=?, a3=?.
  The `bne` branch at 0x1000d4d8 targets 0x1000d618, is taken when v0(=ret(isXrunning)) != 0, and falls through when v0(=ret(isXrunning)) == 0.
  The `beq` branch at 0x1000d580 targets 0x1000e0e8, is taken when a0(=[0x1002bb2c]) == 0, and falls through when a0(=[0x1002bb2c]) != 0.
  The `beq` branch at 0x1000d5ac targets 0x1000e09c, is taken when v0(=ret(usnewsema)) == 0, and falls through when v0(=ret(usnewsema)) != 0.
  The `beq` branch at 0x1000d5e4 targets 0x1000d5f8, is taken when v0(=ret(XOpenDisplay)) == 0, and falls through when v0(=ret(XOpenDisplay)) != 0.
  The `bne` branch at 0x1000d5f0 targets 0x1000d5c0, is taken when s1(?) < 0x40 (signed), and falls through when s1(?) >= 0x40 (signed).
  The `blez` branch at 0x1000d5fc targets 0x1000e0d4, is taken when a4(?) <= 0 (signed), and falls through when a4(?) > 0 (signed).
  The `beq` branch at 0x1000d610 targets 0x1000e16c and is always taken.
  The `bgtz` branch at 0x1000d6a4 targets 0x1000d690, is taken when a4(?) > 0 (signed), and falls through when a4(?) <= 0 (signed).
  The `beq` branch at 0x1000d6c4 targets 0x1000d734, is taken when s5(?) >= a7(?) (signed), and falls through when s5(?) < a7(?) (signed).
  The `beq` branch at 0x1000d6d8 targets 0x1000d714, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0x1000d6f4 targets 0x1000d644, is taken when s2(?) != 0, and falls through when s2(?) == 0.
  The `beq` branch at 0x1000d70c targets 0x1000d654 and is always taken.
  The `beq` branch at 0x1000d72c targets 0x1000d6b4 and is always taken.
  The `bne` branch at 0x1000d764 targets 0x1000dd28, is taken when s2(?) < 0x1 (signed), and falls through when s2(?) >= 0x1 (signed).
  The `beq` branch at 0x1000d7a0 targets 0x1000da98 and is always taken.
  The `beq` branch at 0x1000d86c targets 0x1000e02c, is taken when v0(=ret(XSetScreenSaver)) == a3(=0x2), and falls through when v0(=ret(XSetScreenSaver)) != a3(=0x2).
  The `beq` branch at 0x1000d880 targets 0x1000e048, is taken when v0(=ret(XResetScreenSaver)) == a4(=0x2), and falls through when v0(=ret(XResetScreenSaver)) != a4(=0x2).
  The `beq` branch at 0x1000d898 targets 0x1000d8c0, is taken when a5(=[sym(xErrorFlag)]) == 0, and falls through when a5(=[sym(xErrorFlag)]) != 0.
  The `beq` branch at 0x1000d900 targets 0x1000dd08, is taken when v0(=ret(glXChooseVisual)) == 0, and falls through when v0(=ret(glXChooseVisual)) != 0.
  The `bltz` branch at 0x1000da90 targets 0x1000dd24, is taken when a6(?) < 0 (signed), and falls through when a6(?) >= 0 (signed).
  The `beq` branch at 0x1000dc0c targets 0x1000dc30, is taken when v0(=ret(XSGIvcLoadVideoFormatByName)) == s7(=0x1), and falls through when v0(=ret(XSGIvcLoadVideoFormatByName)) != s7(=0x1).
  The `beq` branch at 0x1000dc60 targets 0x1000dc98, is taken when v0(=ret(XSGIvcQueryChannelInfo)) == s7(=0x1), and falls through when v0(=ret(XSGIvcQueryChannelInfo)) != s7(=0x1).
  The `beq` branch at 0x1000dca0 targets 0x1000dff4, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bc1t` branch at 0x1000dcb8 targets 0x1000dcc8, is taken when f5 <= f20 (c.le.d at 0x1000dcb4), and falls through when not (f5 <= f20 (c.le.d at 0x1000dcb4)).
  The `bc1f` branch at 0x1000dcc4 targets 0x1000d7a8, is taken when FP condition code 1 is false, and falls through when FP condition code 1 is true.
  The `beq` branch at 0x1000dd00 targets 0x1000d7d0 and is always taken.
  The `beq` branch at 0x1000dd1c targets 0x1000d908 and is always taken.
  The `blez` branch at 0x1000dd40 targets 0x1000dd8c, is taken when s2(?) <= 0 (signed), and falls through when s2(?) > 0 (signed).
  The `beq` branch at 0x1000dd4c targets 0x1000dd68 and is always taken.
  The `beq` branch at 0x1000dd60 targets 0x1000dd8c, is taken when s1(?) >= s2(?) (signed), and falls through when s1(?) < s2(?) (signed).
  The `beq` branch at 0x1000dd68 targets 0x1000dd54, is taken when s0(?) == s8(?), and falls through when s0(?) != s8(?).
  The `bne` branch at 0x1000dd84 targets 0x1000dd68, is taken when s1(?) < s2(?) (signed), and falls through when s1(?) >= s2(?) (signed).
  The `beq` branch at 0x1000dd9c targets 0x1000e0e0, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x1000ddb0 targets 0x1000dda8, is taken when v0(?) < s2(?) (signed), and falls through when v0(?) >= s2(?) (signed).
  The `bne` branch at 0x1000dde0 targets 0x1000dee8, is taken when v0(?) < -0x257 (signed), and falls through when v0(?) >= -0x257 (signed).
  The `beq` branch at 0x1000de04 targets 0x1000e064, is taken when a3(=[sym(done)]) == s4(?), and falls through when a3(=[sym(done)]) != s4(?).
  The `bne` branch at 0x1000de10 targets 0x1000ddf8, is taken when s0(?) < s1(?) (signed), and falls through when s0(?) >= s1(?) (signed).
  The `bne` branch at 0x1000de18 targets 0x1000def4, is taken when s1(?) != s0(?), and falls through when s1(?) == s0(?).
  The `blez` branch at 0x1000de20 targets 0x1000de98, is taken when s2(?) <= 0 (signed), and falls through when s2(?) > 0 (signed).
  The `bne` branch at 0x1000de90 targets 0x1000de38, is taken when s5(?) < s2(?) (signed), and falls through when s5(?) >= s2(?) (signed).
  The `bgtz` branch at 0x1000ded4 targets 0x1000df0c, is taken when s2(?) > 0 (signed), and falls through when s2(?) <= 0 (signed).
  The `beq` branch at 0x1000dee0 targets 0x1000df68 and is always taken.
  The `beq` branch at 0x1000deec targets 0x1000e0c4, is taken when v0(?) == a2(=-0x258), and falls through when v0(?) != a2(=-0x258).
  The `blez` branch at 0x1000df04 targets 0x1000dedc, is taken when s2(?) <= 0 (signed), and falls through when s2(?) > 0 (signed).
  The `beq` branch at 0x1000df2c targets 0x1000df40, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x1000df44 targets 0x1000df54, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x1000df60 targets 0x1000df24, is taken when s5(?) < s2(?) (signed), and falls through when s5(?) >= s2(?) (signed).
  The `beq` branch at 0x1000df90 targets 0x1000dfa4, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x1000dfac targets 0x1000df8c, is taken when s1(?) < 0x40 (signed), and falls through when s1(?) >= 0x40 (signed).
  The `blez` branch at 0x1000dfcc targets 0x1000e07c, is taken when s3(?) <= 0 (signed), and falls through when s3(?) > 0 (signed).
  The `beq` branch at 0x1000dfec targets 0x1000d62c and is always taken.
  The `beq` branch at 0x1000e024 targets 0x1000dca8 and is always taken.
  The `beq` branch at 0x1000e040 targets 0x1000d870 and is always taken.
  The `beq` branch at 0x1000e05c targets 0x1000d884 and is always taken.
  The `beq` branch at 0x1000e074 targets 0x1000de18 and is always taken.
  The `beq` branch at 0x1000e094 targets 0x1000d630 and is always taken.
  The `beq` branch at 0x1000e0bc targets 0x1000d5b4 and is always taken.
  The `bgtz` branch at 0x1000e0c4 targets 0x1000de28, is taken when s2(?) > 0 (signed), and falls through when s2(?) <= 0 (signed).
  The `beq` branch at 0x1000e0cc targets 0x1000de9c and is always taken.
  The `beq` branch at 0x1000e0d8 targets 0x1000d734 and is always taken.
  The `beq` branch at 0x1000e0e0 targets 0x1000ddb8 and is always taken.
  The `beq` branch at 0x1000e124 targets 0x1000e150, is taken when v0(=ret(usinit)) == 0, and falls through when v0(=ret(usinit)) != 0.
  The `beq` branch at 0x1000e148 targets 0x1000d590 and is always taken.
  The `beq` branch at 0x1000e164 targets 0x1000e130 and is always taken.
  The `beq` branch at 0x1000e174 targets 0x1000d6d0 and is always taken.
  The return at 0x1000d63c has v0 = ret(dl_output_rslt).

- `waitForNotify` in `usr/diags/SG/bin/olsgsys` at 0x1000e17c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000e17c-0x1000e1a8 (44 bytes).
  It occupies 44 bytes.
  The `lw` at 0x1000e17c loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x1000e18c loads 4 bytes from a1 (arg1 at entry) +0x14.
  The `lw` at 0x1000e190 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `bne` branch at 0x1000e184 targets 0x1000e1a0, is taken when at(=[a1]) != v0(=0x13), and falls through when at(=[a1]) == v0(=0x13).
  The `beq` branch at 0x1000e194 targets 0x1000e1a0, is taken when v1(=[a2]) == a0(=[a1+20]), and falls through when v1(=[a2]) != a0(=[a1+20]).
  The return at 0x1000e1a0 has v0 = one of 0x0, 0x1.

- `handler` in `usr/diags/SG/bin/olsgsys` at 0x1000eab8 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000eab8-0x1000eafc (68 bytes).
  It occupies 68 bytes.
  The `sw` at 0x1000eae0 stores 4 bytes to sym(local_alarm) +0x0.
  The `jal` at 0x1000eae4 calls dl_output_info [0x100189a4] with a0=0x10026d68, a1=0x1, a2=sym(local_alarm), a3=0x24380.
  The return at 0x1000eaf4 has v0 = ret(dl_output_info).

- `sync_createWindow` in `usr/diags/SG/bin/olsgsys` at 0x1000eafc (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000eafc-0x1000ee48 (844 bytes).
  It occupies 844 bytes.
  The `lw` at 0x1000eb3c loads 4 bytes from a0 (arg0 at entry) +0x84.
  The `sw` at 0x1000eb7c stores 4 bytes to (sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2)) +0x48.
  10 such `lw` accesses load 4 bytes from (sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2)) +0x48, including `lw` at 0x1000eb80, `lw` at 0x1000ebac, `lw` at 0x1000ebe0.
  2 such `lw` accesses load 4 bytes from [(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72] +0x8, including `lw` at 0x1000ec6c, `lw` at 0x1000ecc8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8c, including `lw` at 0x1000ec78, `lw` at 0x1000ecd8.
  2 such `lw` accesses load 4 bytes from [(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72] +0x0, including `lw` at 0x1000ec88, `lw` at 0x1000ed00.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1000ec98, `lw` at 0x1000ecf0.
  The `sw` at 0x1000ecb8 stores 4 bytes to (sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2)) +0x8.
  The `sw` at 0x1000ecbc stores 4 bytes to (sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2)) +0x10.
  The `sw` at 0x1000ecc4 stores 4 bytes to (sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2)) +0x38.
  The `lw` at 0x1000ece8 loads 4 bytes from [(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72] +0xc.
  The `sw` at 0x1000ed2c stores 4 bytes to (sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2)) +0x44.
  The `lw` at 0x1000ed48 loads 4 bytes from (sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2)) +0x44.
  3 such `lw` accesses load 4 bytes from [(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72] +0x4, including `lw` at 0x1000ed9c, `lw` at 0x1000edf8, `lw` at 0x1000ee18.
  The `jalr` at 0x1000eb40 calls glXChooseVisual with a0=a0 at entry (arg0), a1=[a0+132], a2=0x1002ad18, a3=a3 at entry (arg3).
  The `jal` at 0x1000eb78 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10026d80, a2=?, a3=?.
  The `jal` at 0x1000eb94 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10026db0, a2=?, a3=?.
  The `jalr` at 0x1000ebb0 calls glXGetConfig with a0=a0 at entry (arg0), a1=[(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72], a2=0x4, a3=sp-96.
  The `jal` at 0x1000ebcc calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10026de0, a2=?, a3=?.
  The `jalr` at 0x1000ebe4 calls glXGetConfig with a0=a0 at entry (arg0), a1=[(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72], a2=0x5, a3=sp-92.
  The `jalr` at 0x1000ec08 calls glXGetConfig with a0=a0 at entry (arg0), a1=[(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72], a2=0x8, a3=sp-88.
  The `jalr` at 0x1000ec20 calls glXGetConfig with a0=a0 at entry (arg0), a1=[(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72], a2=0x9, a3=sp-84.
  The `jalr` at 0x1000ec38 calls glXGetConfig with a0=a0 at entry (arg0), a1=[(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72], a2=0xa, a3=sp-80.
  The `jalr` at 0x1000ec94 calls XCreateColormap with a0=a0 at entry (arg0), a1=?, a2=[[(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72]], a3=0x0, a4=[[(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72]+8].
  The `jal` at 0x1000ecb0 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10026e60, a2=?, a3=?.
  The `jalr` at 0x1000ed20 calls XCreateWindow with a0=a0 at entry (arg0), a1=?, a2=0x0, a3=0x0, a4=a1 at entry (arg1), a5=a2 at entry (arg2), a6=0x0, a7=[[(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72]+12].
  The `jal` at 0x1000ed3c calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10026e90, a2=?, a3=?.
  The `jalr` at 0x1000ed4c calls XMapWindow with a0=a0 at entry (arg0), a1=[(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+68], a2=?, a3=?.
  The `jal` at 0x1000ed60 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10026ea8, a2=?, a3=?.
  The `jal` at 0x1000eda0 calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x10026e28, a2=[[(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72]+4], a3=?.
  The `jal` at 0x1000edbc calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x10026d98, a2=?, a3=?.
  The `jal` at 0x1000edd8 calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x10026e78, a2=?, a3=?.
  The `jal` at 0x1000edfc calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x10026dc8, a2=[[(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72]+4], a3=?.
  The `jal` at 0x1000ee1c calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x10026e00, a2=[[(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72]+4], a3=?.
  The `jal` at 0x1000ee38 calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x10026e48, a2=?, a3=?.
  The `beq` branch at 0x1000eb84 targets 0x1000edb0, is taken when t9(=[(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72]) == 0, and falls through when t9(=[(sym(threadData) + (((((a3 << 0x2) + a3) << 0x2) + a3) << 0x2))+72]) != 0.
  The `beq` branch at 0x1000ebbc targets 0x1000ede8, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x1000ebf0 targets 0x1000ee0c, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x1000ec48 targets 0x1000ed8c, is taken when a3(?) < 0x8 (signed), and falls through when a3(?) >= 0x8 (signed).
  The `bne` branch at 0x1000ec54 targets 0x1000ed8c, is taken when a4(?) < 0x8 (signed), and falls through when a4(?) >= 0x8 (signed).
  The `bne` branch at 0x1000ec60 targets 0x1000ed90, is taken when a5(?) < 0x8 (signed), and falls through when a5(?) >= 0x8 (signed).
  The `beq` branch at 0x1000ec9c targets 0x1000ee2c, is taken when v0(=ret(XCreateColormap)) == 0, and falls through when v0(=ret(XCreateColormap)) != 0.
  The `beq` branch at 0x1000ed28 targets 0x1000edcc, is taken when v0(=ret(XCreateWindow)) == 0, and falls through when v0(=ret(XCreateWindow)) != 0.
  The `beq` branch at 0x1000eda8 targets 0x1000ed6c and is always taken.
  The `beq` branch at 0x1000edc4 targets 0x1000ed6c and is always taken.
  The `beq` branch at 0x1000ede0 targets 0x1000ed6c and is always taken.
  The `beq` branch at 0x1000ee04 targets 0x1000ed6c and is always taken.
  The `beq` branch at 0x1000ee24 targets 0x1000ed6c and is always taken.
  The `beq` branch at 0x1000ee40 targets 0x1000ed6c and is always taken.
  The return at 0x1000ed84 has v0 = one of 0x0, 0x1.

- `sync_pipeSetup` in `usr/diags/SG/bin/olsgsys` at 0x1000ee48 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000ee48-0x1000f100 (696 bytes).
  It occupies 696 bytes.
  The `sw` at 0x1000ef18 stores 4 bytes to (sym(threadData) + (((((a0 << 0x2) + a0) << 0x2) + a0) << 0x2)) +0x40.
  4 such `lw` accesses load 4 bytes from (sym(threadData) + (((((a0 << 0x2) + a0) << 0x2) + a0) << 0x2)) +0x40, including `lw` at 0x1000ef54, `lw` at 0x1000efa4, `lw` at 0x1000efc0.
  The `lw` at 0x1000ef64 loads 4 bytes from [(sym(threadData) + (((((a0 << 0x2) + a0) << 0x2) + a0) << 0x2))+64] +0x84.
  The `lw` at 0x1000efdc loads 4 bytes from sym(xErrorFlag) +0x0.
  The `sw` at 0x1000f008 stores 4 bytes to sym(xErrorFlag) +0x0.
  The `jal` at 0x1000ee88 calls dl_hash_lookup [0x1001d410] with a0=0x1002b598, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1000eea0 calls dl_output_indent [0x1001a4d0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000eeb0 calls dl_hash_value [0x1001d48c] with a0=0x1002b5a0, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x1000eec8 calls sprintf with a0=sp-112, a1=0x1002b5a8, a2=ret(dl_hash_value), a3=a0 at entry (arg0).
  The `jal` at 0x1000eee4 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10026ed8, a2=sp-112, a3=?.
  The `jalr` at 0x1000eef0 calls XOpenDisplay with a0=sp-112, a1=?, a2=?, a3=?.
  The `jal` at 0x1000ef2c calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10026f10, a2=sp-112, a3=?.
  The `jal` at 0x1000ef48 calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10026f28, a2=?, a3=a0 at entry (arg0).
  The `jalr` at 0x1000ef60 calls XSGIvcLoadVideoFormatByName with a0=[(sym(threadData) + (((((a0 << 0x2) + a0) << 0x2) + a0) << 0x2))+64], a1=[[(sym(threadData) + (((((a0 << 0x2) + a0) << 0x2) + a0) << 0x2))+64]+132], a2=0x0, a3=?.
  The `jal` at 0x1000ef88 calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x10026f50, a2=?, a3=a0 at entry (arg0).
  The `jalr` at 0x1000efa8 calls XSetScreenSaver with a0=[(sym(threadData) + (((((a0 << 0x2) + a0) << 0x2) + a0) << 0x2))+64], a1=0x0, a2=0x64, a3=0x0, a4=0x0.
  The `jalr` at 0x1000efbc calls XResetScreenSaver with a0=[(sym(threadData) + (((((a0 << 0x2) + a0) << 0x2) + a0) << 0x2))+64], a1=?, a2=?, a3=?.
  The `jalr` at 0x1000efd0 calls sleep with a0=0x3, a1=?, a2=?, a3=?.
  The `jal` at 0x1000eff8 calls dl_output_error [0x10018b7c] with a0=0x2710, a1=0x10026fb0, a2=?, a3=a0 at entry (arg0), a4=[sym(xErrorFlag)].
  The `jal` at 0x1000f01c calls dl_output_dbug [0x10019758] with a0=0x4, a1=0x10026fe0, a2=sp-112, a3=?.
  The `jal` at 0x1000f038 calls drawlibDraw [0x10011d6c] with a0=[(sym(threadData) + (((((a0 << 0x2) + a0) << 0x2) + a0) << 0x2))+64], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a0 at entry (arg0), a4=0x0.
  The `jal` at 0x1000f054 calls dl_output_error [0x10018b7c] with a0=0x32, a1=0x10027008, a2=a0 at entry (arg0), a3=?.
  The `jal` at 0x1000f064 calls dl_output_outdent [0x1001a540] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f098 calls dl_hash_lookup [0x1001d410] with a0=0x1002b598, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f0b8 calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x10026ef0, a2=sp-112, a3=?.
  The `jal` at 0x1000f0d4 calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x10026f78, a2=0x2, a3=?.
  The `jal` at 0x1000f0f0 calls dl_output_error [0x10018b7c] with a0=0x64, a1=0x10026f90, a2=?, a3=0x2.
  The `bne` branch at 0x1000ee90 targets 0x1000f094, is taken when v0(=ret(dl_hash_lookup)) != 0, and falls through when v0(=ret(dl_hash_lookup)) == 0.
  The `beq` branch at 0x1000ef14 targets 0x1000f0a8, is taken when v0(=ret(XOpenDisplay)) == 0, and falls through when v0(=ret(XOpenDisplay)) != 0.
  The `beq` branch at 0x1000ef6c targets 0x1000ef94, is taken when v0(=ret(XSGIvcLoadVideoFormatByName)) == a3(=0x1), and falls through when v0(=ret(XSGIvcLoadVideoFormatByName)) != a3(=0x1).
  The `beq` branch at 0x1000efb4 targets 0x1000f0c8, is taken when v0(=ret(XSetScreenSaver)) == a2(=0x2), and falls through when v0(=ret(XSetScreenSaver)) != a2(=0x2).
  The `beq` branch at 0x1000efc8 targets 0x1000f0e4, is taken when v0(=ret(XResetScreenSaver)) == a3(=0x2), and falls through when v0(=ret(XResetScreenSaver)) != a3(=0x2).
  The `beq` branch at 0x1000efe0 targets 0x1000f00c, is taken when a4(=[sym(xErrorFlag)]) == 0, and falls through when a4(=[sym(xErrorFlag)]) != 0.
  The `beq` branch at 0x1000f040 targets 0x1000f060, is taken when v0(=ret(drawlibDraw)) == 0, and falls through when v0(=ret(drawlibDraw)) != 0.
  The `beq` branch at 0x1000f0a0 targets 0x1000ee9c and is always taken.
  The `beq` branch at 0x1000f0c0 targets 0x1000f06c and is always taken.
  The `beq` branch at 0x1000f0dc targets 0x1000efbc and is always taken.
  The `beq` branch at 0x1000f0f8 targets 0x1000efd0 and is always taken.
  The return at 0x1000f08c has v0 = one of 0x0, 0x1, 0x2, 0x3.

- `draw_thread` in `usr/diags/SG/bin/olsgsys` at 0x1000f100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000f100-0x1000f2c4 (452 bytes).
  It occupies 452 bytes.
  10 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x1000f13c, `lw` at 0x1000f15c, `lw` at 0x1000f168.
  2 such `lw` accesses load 4 bytes from sym(width) +0x0, including `lw` at 0x1000f144, `lw` at 0x1000f174.
  2 such `lw` accesses load 4 bytes from sym(height) +0x0, including `lw` at 0x1000f14c, `lw` at 0x1000f180.
  The `sw` at 0x1000f154 stores 4 bytes to (sym(dac_crcs) + ([a0] << 0x2)) +0x0.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x40, including `lw` at 0x1000f164, `lw` at 0x1000f214, `lw` at 0x1000f244.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x50, including `sw` at 0x1000f184, `sw` at 0x1000f274.
  The `lw` at 0x1000f18c loads 4 bytes from sym(local_alarm) +0x0.
  2 such `lw` accesses load 4 bytes from (sym(dac_crcs) + ([a0] << 0x2)) +0x0, including `lw` at 0x1000f1c0, `lw` at 0x1000f2a0.
  The `sw` at 0x1000f208 stores 4 bytes to (sym(valid) + ([a0] << 0x2)) +0x0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x50, including `lw` at 0x1000f24c, `lw` at 0x1000f260.
  The `lw` at 0x1000f27c loads 4 bytes from (sym(frame) + ([a0] << 0x2)) +0x0.
  The `sw` at 0x1000f28c stores 4 bytes to (sym(frame) + ([a0] << 0x2)) +0x0.
  The `lw` at 0x1000f2ac loads 4 bytes from [(sym(dac_crcs) + ([a0] << 0x2))] +0x0.
  The `lw` at 0x1000f2b8 loads 4 bytes from [(sym(dac_crcs) + ([a0] << 0x2))] +0x4.
  The `jalr` at 0x1000f128 calls malloc with a0=0x8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1000f158 calls sync_pipeSetup [0x1000ee48] with a0=[a0], a1=[sym(width)], a2=[sym(height)], a3=?.
  The `jal` at 0x1000f17c calls init_Draw [0x1001115c] with a0=[a0+64], a1=[a0], a2=[sym(width)], a3=[sym(height)].
  The `jal` at 0x1000f1a0 calls dl_output_info [0x100189a4] with a0=0x10027030, a1=[a0], a2=?, a3=[sym(local_alarm)].
  The `jal` at 0x1000f1bc calls collect_dac_crc [0x10013a44] with a0=[(sym(dac_crcs) + ([a0] << 0x2))], a1=[a0], a2=([a0] << 0x2), a3=?.
  The `jal` at 0x1000f1dc calls dl_output_error [0x10018b7c] with a0=0x0, a1=0x10027048, a2=[a0], a3=?, a6=[a0].
  The `jal` at 0x1000f204 calls dl_output_info [0x100189a4] with a0=0x10027090, a1=?, a2=0x1, a3=(sym(valid) + ([a0] << 0x2)), a4=([a0] << 0x2).
  The `jalr` at 0x1000f210 calls XCloseDisplay with a0=[a0+64], a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f21c calls pthread_exit with a0=ret(sync_pipeSetup), a1=?, a2=?, a3=?.
  The `jal` at 0x1000f248 calls reDraw [0x10010e4c] with a0=[a0], a1=[a0+64], a2=[a0+80], a3=[sym(local_alarm)].
  The `jal` at 0x1000f258 calls swap_buffers [0x10010f9c] with a0=[a0+64], a1=[a0], a2=?, a3=?.
  The `jal` at 0x1000f2b4 calls dl_output_info [0x100189a4] with a0=0x10027068, a1=[a0], a2=[[(sym(dac_crcs) + ([a0] << 0x2))]], a3=[[(sym(dac_crcs) + ([a0] << 0x2))]+4], a4=([a0] << 0x2), a6=[a0].
  The `beq` branch at 0x1000f190 targets 0x1000f23c, is taken when a3(=[sym(local_alarm)]) == 0, and falls through when a3(=[sym(local_alarm)]) != 0.
  The `blez` branch at 0x1000f1c4 targets 0x1000f290, is taken when v0(=ret(collect_dac_crc)) <= 0 (signed), and falls through when v0(=ret(collect_dac_crc)) > 0 (signed).
  The `beq` branch at 0x1000f288 targets 0x1000f18c and is always taken.
  The `beq` branch at 0x1000f2bc targets 0x1000f1e8 and is always taken.
  The return at 0x1000f234 has v0 = ret(pthread_exit).

- `start_alarm_handler` in `usr/diags/SG/bin/olsgsys` at 0x1000f2c4 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000f2c4-0x1000f338 (116 bytes).
  It occupies 116 bytes.
  The `jalr` at 0x1000f2e8 calls sigemptyset with a0=sp-40, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1000f300 calls sigaction with a0=0xe, a1=sp-48, a2=0x0, a3=?.
  The `jal` at 0x1000f314 calls dl_hash_value [0x1001d48c] with a0=0x100270a0, a1=0x2d, a2=?, a3=?.
  The `jalr` at 0x1000f320 calls alarm with a0=ret(dl_hash_value), a1=?, a2=?, a3=?.
  The return at 0x1000f330 has v0 = ret(alarm).

- `TEST_sync` in `usr/diags/SG/bin/olsgsys` at 0x1000f338 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000f338-0x1000f48c (340 bytes).
  It occupies 340 bytes.
  2 such `lbu` accesses load 1 byte from a0 (arg0 at entry) +0x1, including `lbu` at 0x1000f38c, `lbu` at 0x1000f3c8.
  The `sw` at 0x1000f3bc stores 4 bytes to ?.
  2 such `lw` accesses load 4 bytes from sym(frame) +0x4, including `lw` at 0x1000f408, `lw` at 0x1000f418.
  2 such `lw` accesses load 4 bytes from sym(frame) +0x0, including `lw` at 0x1000f40c, `lw` at 0x1000f41c.
  The `jal` at 0x1000f358 calls isXrunning [0x10008c9c] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1000f384 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x100270b0, a2=?, a3=?.
  The `jalr` at 0x1000f3c0 calls pthread_create with a0=?, a1=0x0, a2=sym(draw_thread), a3=?.
  The `jal` at 0x1000f3f4 calls start_alarm_handler [0x1000f2c4] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f410 calls dl_output_info [0x100189a4] with a0=0x100270e0, a1=[sym(frame)], a2=[sym(frame)+4], a3=?.
  The `jal` at 0x1000f434 calls dl_output_error [0x10018b7c] with a0=0x5a, a1=0x10027108, a2=[sym(frame)+4], a3=?.
  The `jal` at 0x1000f444 calls dl_output_rslt [0x10017d3c] with a0=0x0, a1=0x0, a2=?, a3=?.
  The `jal` at 0x1000f45c calls dl_output_rslt [0x10017d3c] with a0=0x2, a1=0x10027120, a2=?, a3=?.
  The `jal` at 0x1000f47c calls dl_output_rslt [0x10017d3c] with a0=0x1, a1=0x0, a2=[sym(frame)+4], a3=?.
  The `bne` branch at 0x1000f360 targets 0x1000f454, is taken when v0(=ret(isXrunning)) != 0, and falls through when v0(=ret(isXrunning)) == 0.
  The `blez` branch at 0x1000f3a0 targets 0x1000f3e0, is taken when a2(=[a0+1]:1) <= 0 (signed), and falls through when a2(=[a0+1]:1) > 0 (signed).
  The `bne` branch at 0x1000f3d8 targets 0x1000f3ac, is taken when s2(?) < a3(=[a0+1]:1) (signed), and falls through when s2(?) >= a3(=[a0+1]:1) (signed).
  The `beq` branch at 0x1000f420 targets 0x1000f478, is taken when a1(=[sym(frame)]) == a2(=[sym(frame)+4]), and falls through when a1(=[sym(frame)]) != a2(=[sym(frame)+4]).
  The `beq` branch at 0x1000f44c targets 0x1000f468 and is always taken.
  The `beq` branch at 0x1000f484 targets 0x1000f468 and is always taken.
  The return at 0x1000f470 has v0 = ret(dl_output_rslt).

- `sync_thread` in `usr/diags/SG/bin/olsgsys` at 0x1000f48c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000f48c-0x1000f530 (164 bytes).
  It occupies 164 bytes.
  The `lw` at 0x1000f4b0 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0x1000f518 loads 4 bytes from (sym(vblank) + ([a0] << 0x2)) +0x0.
  The `sw` at 0x1000f524 stores 4 bytes to (sym(vblank) + ([a0] << 0x2)) +0x0.
  The `jal` at 0x1000f4ac calls barrier [0x1000f960] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1000f4d8 calls dl_output_info [0x100189a4] with a0=0x10027148, a1=[a0], a2=?, a3=?.
  The `jal` at 0x1000f4e8 calls dl_output_info [0x100189a4] with a0=0x10027160, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f508 calls collect_verticals [0x10013794] with a0=[a0], a1=?, a2=?, a3=?.
  The `jal` at 0x1000f520 calls barrier [0x1000f960] with a0=?, a1=[(sym(vblank) + ([a0] << 0x2))]+1, a2=(sym(vblank) + ([a0] << 0x2)), a3=?.
  The `beq` branch at 0x1000f4c8 targets 0x1000f504, is taken when a0(=[0x1002bb30]) == 0, and falls through when a0(=[0x1002bb30]) != 0.
  The `beq` branch at 0x1000f528 targets 0x1000f4c8 and is always taken.
  The return at 0x1000f4fc has v0 = ret(dl_output_info).

- `TEST_sync2` in `usr/diags/SG/bin/olsgsys` at 0x1000f530 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000f530-0x1000f960 (1072 bytes).
  It occupies 1072 bytes.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x1000f5c0, `sw` at 0x1000f5cc.
  8 such `lbu` accesses load 1 byte from a0 (arg0 at entry) +0x1, including `lbu` at 0x1000f638, `lbu` at 0x1000f6bc, `lbu` at 0x1000f6fc.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1000f834, `lw` at 0x1000f8a0.
  The `lw` at 0x1000f8c4 loads 4 bytes from table(0x10034450) +0x0.
  The `jal` at 0x1000f568 calls dl_hash_value [0x1001d48c] with a0=0x10027170, a1=0x3e8, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1000f574 calls isXrunning [0x10008c9c] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f598 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10027180, a2=?, a3=?.
  The `jalr` at 0x1000f5d8 calls malloc with a0=0x14, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f5e8 calls pthread_attr_init with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f5f8 calls pthread_attr_setdetachstate with a0=ret(malloc), a1=0x0, a2=?, a3=?.
  The `jalr` at 0x1000f608 calls pthread_attr_setschedpolicy with a0=ret(malloc), a1=0x2, a2=?, a3=?.
  The `jalr` at 0x1000f618 calls pthread_attr_setinheritsched with a0=ret(malloc), a1=0x0, a2=?, a3=?.
  The `jalr` at 0x1000f62c calls pthread_attr_setscope with a0=ret(malloc), a1=0x1, a2=?, a3=?.
  The `jal` at 0x1000f664 calls dl_output_rslt [0x10017d3c] with a0=0x2, a1=0x100272a0, a2=?, a3=?.
  The `jal` at 0x1000f68c calls pipeDraw [0x100095b8] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f6a8 calls dl_output_info [0x100189a4] with a0=0x100271c8, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f6cc calls dl_hash_lookup [0x1001d410] with a0=0x1002b5b0, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f6e0 calls dl_hash_lookup [0x1001d410] with a0=0x1002b5b0, a1=0x10020000, a2=?, a3=?.
  The `jalr` at 0x1000f724 calls pthread_create with a0=?, a1=ret(malloc), a2=sym(sync_thread), a3=sp-88.
  The `jal` at 0x1000f774 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027230, a2=?, a3=?.
  The `jal` at 0x1000f790 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027240, a2=?, a3=?.
  The `jalr` at 0x1000f7a4 calls glXWaitVideoSyncSGI with a0=0x0, a1=0x0, a2=sp-92, a3=?.
  The `jalr` at 0x1000f7bc calls glXGetVideoSyncSGI with a0=sp-96, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f7e8 calls dl_output_info [0x100189a4] with a0=0x100271f0, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f830 calls pthread_join with a0=?, a1=0x0, a2=?, a3=?.
  The `jal` at 0x1000f864 calls dl_output_info [0x100189a4] with a0=0x10027250, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f89c calls dl_output_info [0x100189a4] with a0=0x10027268, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f8b0 calls dl_output_info [0x100189a4] with a0=0x10027280, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f8d0 calls XCloseDisplay with a0=entry(0x10034450), a1=?, a2=?, a3=?.
  The `jal` at 0x1000f8e8 calls dl_output_info [0x100189a4] with a0=0x10027290, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f91c calls dl_output_rslt [0x10017d3c] with a0=0x1, a1=0x0, a2=?, a3=?.
  The `jal` at 0x1000f948 calls dl_output_rslt [0x10017d3c] with a0=0x0, a1=0x0, a2=[a0+1]:1, a3=?.
  The `bne` branch at 0x1000f57c targets 0x1000f658, is taken when v0(=ret(isXrunning)) != 0, and falls through when v0(=ret(isXrunning)) == 0.
  The `bne` branch at 0x1000f5c8 targets 0x1000f5b4, is taken when a2(?) < 0x40 (signed), and falls through when a2(?) >= 0x40 (signed).
  The `blez` branch at 0x1000f648 targets 0x1000f958, is taken when t9(=[a0+1]:1) <= 0 (signed), and falls through when t9(=[a0+1]:1) > 0 (signed).
  The `beq` branch at 0x1000f650 targets 0x1000f6c8 and is always taken.
  The `blez` branch at 0x1000f698 targets 0x1000f6b0, is taken when s1(?) <= 0 (signed), and falls through when s1(?) > 0 (signed).
  The `beq` branch at 0x1000f6c4 targets 0x1000f6f0, is taken when a1(?) >= a2(=[a0+1]:1) (signed), and falls through when a1(?) < a2(=[a0+1]:1) (signed).
  The `beq` branch at 0x1000f6d4 targets 0x1000f684, is taken when v0(=ret(dl_hash_lookup)) == 0, and falls through when v0(=ret(dl_hash_lookup)) != 0.
  The `beq` branch at 0x1000f6e8 targets 0x1000f688 and is always taken.
  The `bne` branch at 0x1000f6f0 targets 0x1000f92c, is taken when s1(?) != 0, and falls through when s1(?) == 0.
  The `blez` branch at 0x1000f708 targets 0x1000f748, is taken when a2(=[a0+1]:1) <= 0 (signed), and falls through when a2(=[a0+1]:1) > 0 (signed).
  The `bne` branch at 0x1000f740 targets 0x1000f714, is taken when a6(?) < a1(=[a0+1]:1) (signed), and falls through when a6(?) >= a1(=[a0+1]:1) (signed).
  The `blez` branch at 0x1000f74c targets 0x1000f800, is taken when s5(=ret(dl_hash_value)) <= 0 (signed), and falls through when s5(=ret(dl_hash_value)) > 0 (signed).
  The `beq` branch at 0x1000f758 targets 0x1000f7b8 and is always taken.
  The `beq` branch at 0x1000f7b4 targets 0x1000f800, is taken when s4(?) >= s5(=ret(dl_hash_value)) (signed), and falls through when s4(?) < s5(=ret(dl_hash_value)) (signed).
  The `bne` branch at 0x1000f7d4 targets 0x1000f764, is taken when a6(?) < 0x2 (signed), and falls through when a6(?) >= 0x2 (signed).
  The `beq` branch at 0x1000f7f8 targets 0x1000f760 and is always taken.
  The `blez` branch at 0x1000f818 targets 0x1000f854, is taken when t0(=[a0+1]:1) <= 0 (signed), and falls through when t0(=[a0+1]:1) > 0 (signed).
  The `bne` branch at 0x1000f84c targets 0x1000f824, is taken when a6(?) < a1(=[a0+1]:1) (signed), and falls through when a6(?) >= a1(=[a0+1]:1) (signed).
  The `blez` branch at 0x1000f878 targets 0x1000f90c, is taken when a1(=[a0+1]:1) <= 0 (signed), and falls through when a1(=[a0+1]:1) > 0 (signed).
  The `beq` branch at 0x1000f8c8 targets 0x1000f8dc, is taken when a0(=entry(0x10034450)) == 0, and falls through when a0(=entry(0x10034450)) != 0.
  The `bne` branch at 0x1000f904 targets 0x1000f888, is taken when a6(?) < a1(=[a0+1]:1) (signed), and falls through when a6(?) >= a1(=[a0+1]:1) (signed).
  The `beq` branch at 0x1000f924 targets 0x1000f670 and is always taken.
  The `beq` branch at 0x1000f950 targets 0x1000f670 and is always taken.
  The `beq` branch at 0x1000f958 targets 0x1000f6f8 and is always taken.
  The return at 0x1000f67c has v0 = ret(dl_output_rslt).

- `barrier` in `usr/diags/SG/bin/olsgsys` at 0x1000f960 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000f960-0x1000f9e4 (132 bytes).
  It occupies 132 bytes.
  The `lw` at 0x1000f988 loads 4 bytes from sym(arrived) +0x0.
  2 such `sw` accesses store 4 bytes to sym(arrived) +0x0, including `sw` at 0x1000f998, `sw` at 0x1000f9ac.
  The `jalr` at 0x1000f97c calls pthread_mutex_lock with a0=sym(_sync2_lock), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1000f9a0 calls pthread_cond_broadcast with a0=sym(_sync2_cond), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f9b4 calls pthread_mutex_unlock with a0=sym(_sync2_lock), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f9d4 calls pthread_cond_wait with a0=sym(_sync2_cond), a1=sym(_sync2_lock), a2=?, a3=?.
  The `bne` branch at 0x1000f994 targets 0x1000f9cc, is taken when v0(=[sym(arrived)]) < 0x1 (signed), and falls through when v0(=[sym(arrived)]) >= 0x1 (signed).
  The `beq` branch at 0x1000f9dc targets 0x1000f9b4 and is always taken.
  The return at 0x1000f9c4 has v0 = ret(pthread_mutex_unlock).

- `DiscoverLoadIS1Info` in `usr/diags/SG/bin/olsgsys` at 0x1000f9e4 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000f9e4-0x1000fc94 (688 bytes).
  It occupies 688 bytes.
  The `sb` at 0x1000fa7c stores 1 byte to a0 (arg0 at entry) +0x3.
  The `lw` at 0x1000fa84 loads 4 bytes from ret(LLCreate) +0x4.
  13 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1000fab4, `lw` at 0x1000fab8, `lw` at 0x1000fac0.
  The `sw` at 0x1000fb00 stores 4 bytes to a0 (arg0 at entry) +0x8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8, including `lw` at 0x1000fb08, `lw` at 0x1000fb2c.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0x1000fb6c, `sw` at 0x1000fbe4, `sw` at 0x1000fc18.
  The `lbu` at 0x1000fbc0 loads 1 byte from a0 (arg0 at entry) +0x2.
  The `sb` at 0x1000fbcc stores 1 byte to a0 (arg0 at entry) +0x2.
  The `jal` at 0x1000fa14 calls dl_output_dbug [0x10019758] with a0=0x5, a1=0x100272c8, a2=a0 at entry (arg0), a3=a3 at entry (arg3).
  The `jal` at 0x1000fa20 calls LLCreate [0x10015a48] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000fa40 calls id_to_vertices [0x10010a88] with a0=0x100272f0, a1=0x0, a2=ret(LLCreate), a3=?.
  The `jal` at 0x1000fa60 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10027300, a2=?, a3=?.
  The `jal` at 0x1000fad8 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10027320, a2=?, a3=?.
  The `jalr` at 0x1000faf4 calls malloc with a0=0x2e0, a1=?, a2=?, a3=?.
  The `jal` at 0x1000fb20 calls dl_output_abrt [0x1001a048] with a0=0x10027358, a1=?, a2=?, a3=[a0+8], a4=a0 at entry (arg0).
  The `jal` at 0x1000fb48 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10027378, a2=[a0+8], a3=?.
  The `jalr` at 0x1000fb60 calls malloc with a0=0x2e0, a1=?, a2=?, a3=?.
  The `jal` at 0x1000fb8c calls dl_output_abrt [0x1001a048] with a0=0x10027358, a1=?, a2=?, a3=?.
  The `jal` at 0x1000fbb4 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10027378, a2=?, a3=?.
  The `jalr` at 0x1000fbd8 calls malloc with a0=0x6c, a1=?, a2=?, a3=[a0+2]:1+1, a4=a0 at entry (arg0).
  The `jal` at 0x1000fc04 calls dl_output_abrt [0x1001a048] with a0=0x10027388, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000fc30 calls strcpy with a0=?, a1=?, a2=0x80, a3=?.
  The `jal` at 0x1000fc70 calls LLDestroy [0x10015b30] with a0=ret(LLCreate), a1=?, a2=?, a3=?.
  The `beq` branch at 0x1000fa48 targets 0x1000fa74, is taken when v0(=ret(id_to_vertices)) == 0, and falls through when v0(=ret(id_to_vertices)) != 0.
  The `beq` branch at 0x1000fa6c targets 0x1000fc7c and is always taken.
  The `beq` branch at 0x1000fa98 targets 0x1000fc68, is taken when a2(=[ret(LLCreate)+4]) == 0, and falls through when a2(=[ret(LLCreate)+4]) != 0.
  The `bne` branch at 0x1000fae4 targets 0x1000fb58, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `bne` branch at 0x1000fb0c targets 0x1000fb28, is taken when a3(=[a0+8]) != 0, and falls through when a3(=[a0+8]) == 0.
  The `beq` branch at 0x1000fb50 targets 0x1000fbbc and is always taken.
  The `bne` branch at 0x1000fb78 targets 0x1000fb94, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x1000fbf0 targets 0x1000fc0c, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x1000fc60 targets 0x1000faa0, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The return at 0x1000fc8c has v0 = 0x0.

- `AGPtoGFX_brd_num` in `usr/diags/SG/bin/olsgsys` at 0x1000fc94 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1000fc94-0x1000fd0c (120 bytes).
  It occupies 120 bytes.
  The `lw` at 0x1000fcf4 loads 4 bytes from table(0x10034668) +0x0.
  The `jalr` at 0x1000fcd8 calls __assert with a0=0x100273a8, a1=0x100273c8, a2=0x79, a3=a3 at entry (arg3).
  The `bne` branch at 0x1000fcb8 targets 0x1000fce0, is taken when at(=a0) < 0x40 (signed), and falls through when at(=a0) >= 0x40 (signed).
  The return at 0x1000fd04 has v0 = entry(0x10034668).

- `diag_discover_agps` in `usr/diags/SG/bin/olsgsys` at 0x1001006c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001006c-0x100106e0 (1652 bytes).
  It occupies 1652 bytes.
  10 such `sw` accesses store 4 bytes to ?, including `sw` at 0x10010100, `sw` at 0x1001011c, `sw` at 0x10010130.
  20 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10010248, `lw` at 0x10010274, `lw` at 0x10010278.
  The `sw` at 0x100102c0 stores 4 bytes to a0 (arg0 at entry) +0xc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc, including `lw` at 0x100102c8, `lw` at 0x100103e0.
  2 such `sh` accesses store 2 bytes to ?, including `sh` at 0x10010364, `sh` at 0x10010378.
  5 such `lbu` accesses load 1 byte from a0 (arg0 at entry) +0x1, including `lbu` at 0x10010394, `lbu` at 0x100103f8, `lbu` at 0x10010680.
  The `sb` at 0x100103a0 stores 1 byte to a0 (arg0 at entry) +0x1.
  2 such `lw` accesses load 4 bytes from table(0x10034768) +0x0, including `lw` at 0x1001057c, `lw` at 0x10010648.
  The `lw` at 0x100105d0 loads 4 bytes from sym(errno) +0x0.
  The `jal` at 0x100100b0 calls dl_hash_value [0x1001d48c] with a0=0x10027498, a1=0x1, a2=0x22dcc, a3=a3 at entry (arg3).
  The `jal` at 0x10010154 calls LLCreate [0x10015a48] with a0=?, a1=?, a2=?, a3=[0x1002bb34], a4=0x1, a5=0x1.
  The `jal` at 0x10010174 calls id_to_vertices [0x10010a88] with a0=0x100274a8, a1=0x0, a2=ret(LLCreate), a3=?.
  The `jal` at 0x1001019c calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x100274b8, a2=0x100274a8, a3=?.
  The `jal` at 0x100101c0 calls id_to_vertices [0x10010a88] with a0=0x100274e0, a1=0x0, a2=?, a3=?.
  The `jal` at 0x100101e8 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x100274b8, a2=0x100274e0, a3=?.
  The `jal` at 0x1001022c calls dl_output_info [0x100189a4] with a0=0x100274f0, a1=0x100274e0, a2=0x100274a8, a3=one of 0x0, 0x1, a4=one of 0x0, 0x1.
  The `jal` at 0x10010298 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10027520, a2=?, a3=?.
  The `jalr` at 0x100102b4 calls malloc with a0=0x6cc, a1=?, a2=?, a3=?.
  The `jal` at 0x100102e4 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10027558, a2=[a0+12], a3=a0 at entry (arg0).
  The `jalr` at 0x100102fc calls malloc with a0=0x6cc, a1=?, a2=?, a3=?.
  The `jal` at 0x1001032c calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10027558, a2=?, a3=?.
  The `jalr` at 0x10010348 calls strcpy with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100103d0 calls LLDestroy [0x10015b30] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10010424 calls (unnamed) [0x1000fe00] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10010448 calls dl_output_error [0x10018b7c] with a0=0x7d0, a1=0x10027568, a2=?, a3=?.
  The `jal` at 0x10010470 calls (unnamed) [0x1000fd0c] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10010494 calls dl_output_error [0x10018b7c] with a0=0x7d0, a1=0x10027590, a2=?, a3=?.
  The `jal` at 0x100104f8 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x100275b8, a2=?, a3=?.
  The `jalr` at 0x1001051c calls munmap with a0=?, a1=0x10000, a2=?, a3=?.
  The `jalr` at 0x10010590 calls mmap with a0=0x0, a1=0x10000, a2=0x3, a3=0x1, a4=entry(0x10034768).
  The `jalr` at 0x100105d8 calls strerror with a0=[sym(errno)], a1=?, a2=?, a3=?, a6=-0x1.
  The `jal` at 0x100105f4 calls dl_output_error [0x10018b7c] with a0=0x7d0, a1=0x100275c8, a2=ret(strerror), a3=?.
  The `jalr` at 0x10010604 calls exit with a0=0x1, a1=?, a2=?, a3=?.
  The `jalr` at 0x10010650 calls close with a0=entry(0x10034768), a1=?, a2=?, a3=?.
  The `jal` at 0x100106bc calls dl_output_info [0x100189a4] with a0=0x100275d8, a1=[a0+1]:1, a2=?, a3=?.
  The `bne` branch at 0x100100c0 targets 0x100106c4, is taken when a3(=[0x1002bb34]) != 0, and falls through when a3(=[0x1002bb34]) == 0.
  The `beq` branch at 0x100100e0 targets 0x10010150 and is never taken: its condition can never hold for these operands, so execution always falls through.
  The `bne` branch at 0x10010148 targets 0x100100e8, is taken when a6(?) < 0x40 (signed), and falls through when a6(?) >= 0x40 (signed).
  The `beq` branch at 0x1001017c targets 0x100101ac, is taken when v0(=ret(id_to_vertices)) == 0, and falls through when v0(=ret(id_to_vertices)) != 0.
  The `beq` branch at 0x100101c8 targets 0x100101f8, is taken when v0(=ret(id_to_vertices)) == 0, and falls through when v0(=ret(id_to_vertices)) != 0.
  The `beq` branch at 0x100101fc targets 0x10010244, is taken when a3(=one of 0x0, 0x1) == 0, and falls through when a3(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x10010208 targets 0x10010244, is taken when a4(=one of 0x0, 0x1) == 0, and falls through when a4(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x1001023c targets 0x100106c8 and is always taken.
  The `beq` branch at 0x10010258 targets 0x100103c8, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x100102a4 targets 0x100102f4, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x100102ec targets 0x10010334 and is always taken.
  The `bne` branch at 0x100103c0 targets 0x10010260, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x10010400 targets 0x10010690, is taken when t3(=0x0) >= t8(=[a0+1]:1) (signed), and falls through when t3(=0x0) < t8(=[a0+1]:1) (signed).
  The `beq` branch at 0x1001040c targets 0x10010460, is taken when at(=ret(dl_hash_value)) == 0, and falls through when at(=ret(dl_hash_value)) != 0.
  The `bgez` branch at 0x1001042c targets 0x10010458, is taken when v0(=ret(0x1000fe00)) >= 0 (signed), and falls through when v0(=ret(0x1000fe00)) < 0 (signed).
  The `beq` branch at 0x10010450 targets 0x10010658 and is always taken.
  The `beq` branch at 0x10010458 targets 0x100104a4 and is always taken.
  The `bgez` branch at 0x10010478 targets 0x100104a4, is taken when v0(=ret(0x1000fd0c)) >= 0 (signed), and falls through when v0(=ret(0x1000fd0c)) < 0 (signed).
  The `beq` branch at 0x1001049c targets 0x10010658 and is always taken.
  The `beq` branch at 0x100104e0 targets 0x10010538, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x1001053c targets 0x10010554, is taken when a4(=ret(dl_hash_value)) == 0, and falls through when a4(=ret(dl_hash_value)) != 0.
  The `beq` branch at 0x1001054c targets 0x10010558 and is always taken.
  The `bne` branch at 0x100105c4 targets 0x1001060c, is taken when a5(?) != a6(=-0x1), and falls through when a5(?) == a6(=-0x1).
  The `bne` branch at 0x10010688 targets 0x10010408, is taken when a3(?) < a4(=[a0+1]:1) (signed), and falls through when a3(?) >= a4(=[a0+1]:1) (signed).
  The `beq` branch at 0x1001069c targets 0x100106c4, is taken when t0(?) == t1(=[a0+1]:1), and falls through when t0(?) != t1(=[a0+1]:1).
  The return at 0x100106d8 has v0 = one of -0x1, 0x0.

- `vertex_to_device` in `usr/diags/SG/bin/olsgsys` at 0x100106e0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100106e0-0x10010870 (400 bytes).
  It occupies 400 bytes.
  The `jalr` at 0x10010710 calls stat with a0=a0 at entry (arg0), a1=sp-616, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10010738 calls opendir with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `jalr` at 0x10010764 calls readdir with a0=ret(opendir), a1=?, a2=?, a3=?.
  The `jalr` at 0x1001079c calls sprintf with a0=sp-448, a1=0x1002b5b8, a2=a1 at entry (arg1), a3=ret(readdir)+18.
  The `jalr` at 0x100107b8 calls fprintf with a0=sym(__iob)+32, a1=0x1002b5c0, a2=sp-448, a3=?.
  The `jalr` at 0x100107cc calls stat with a0=sp-448, a1=sp-192, a2=?, a3=?.
  The `jalr` at 0x1001080c calls strdup with a0=?, a1=-0x1, a2=?, a3=?.
  The `jalr` at 0x10010820 calls readdir with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10010848 calls closedir with a0=?, a1=ret(readdir), a2=ret(readdir), a3=?.
  The `bne` branch at 0x1001071c targets 0x10010730, is taken when v0(=ret(stat)) != v1(=-0x1), and falls through when v0(=ret(stat)) == v1(=-0x1).
  The `beq` branch at 0x10010728 targets 0x10010858 and is always taken.
  The `bne` branch at 0x10010748 targets 0x1001075c, is taken when a0(=ret(opendir)) != 0, and falls through when a0(=ret(opendir)) == 0.
  The `beq` branch at 0x10010754 targets 0x10010858 and is always taken.
  The `beq` branch at 0x1001077c targets 0x10010840, is taken when a1(=ret(readdir)) == 0, and falls through when a1(=ret(readdir)) != 0.
  The `bne` branch at 0x100107d8 targets 0x100107f0, is taken when v0(=ret(stat)) != a1(=-0x1), and falls through when v0(=ret(stat)) == a1(=-0x1).
  The `beq` branch at 0x100107e8 targets 0x10010858 and is always taken.
  The `bne` branch at 0x100107f8 targets 0x10010818, is taken when a3(?) != a4(?), and falls through when a3(?) == a4(?).
  The `bne` branch at 0x10010838 targets 0x10010784, is taken when a1(=ret(readdir)) != 0, and falls through when a1(=ret(readdir)) == 0.
  The return at 0x10010868 has v0 = one of 0x0, ?.

- `device_to_vertex` in `usr/diags/SG/bin/olsgsys` at 0x10010870 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10010870-0x10010964 (244 bytes).
  It occupies 244 bytes.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x100108ec, `lbu` at 0x1001091c.
  The `sb` at 0x10010940 stores 1 byte to ?.
  The `jalr` at 0x100108a0 calls malloc with a0=0xc8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x100108bc calls filename_to_devname with a0=a0 at entry (arg0), a1=ret(malloc), a2=sp-60, a3=?.
  The `bne` branch at 0x100108c4 targets 0x100108d8, is taken when v0(=ret(filename_to_devname)) != 0, and falls through when v0(=ret(filename_to_devname)) == 0.
  The `beq` branch at 0x100108d0 targets 0x1001094c and is always taken.
  The `beq` branch at 0x100108f4 targets 0x1001093c, is taken when v1(?) == a0(=0x2f), and falls through when v1(?) != a0(=0x2f).
  The `beq` branch at 0x10010904 targets 0x1001093c, is taken when a2(=ret(malloc)) == a3(?), and falls through when a2(=ret(malloc)) != a3(?).
  The `beq` branch at 0x10010924 targets 0x1001093c, is taken when a4(?) == a5(=0x2f), and falls through when a4(?) != a5(=0x2f).
  The `bne` branch at 0x10010934 targets 0x1001090c, is taken when a6(=ret(malloc)) != a7(?), and falls through when a6(=ret(malloc)) == a7(?).
  The return at 0x1001095c has v0 = one of 0x0, ret(malloc).

- `isInterfaceUp` in `usr/diags/SG/bin/olsgsys` at 0x10010964 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10010964-0x10010a88 (292 bytes).
  It occupies 292 bytes.
  The `sw` at 0x100109a4 stores 4 bytes to sym(errno) +0x0.
  The `jalr` at 0x10010988 calls strlen with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x100109c4 calls strcpy with a0=sp-96, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0x100109dc calls socket with a0=0x2, a1=0x1, a2=0x0, a3=?.
  The `jalr` at 0x10010a14 calls strncpy with a0=sp-72, a1=sp-96, a2=0x10, a3=?.
  The `jalr` at 0x10010a30 calls ioctl with a0=?, a1=0xffffffffc020697b, a2=sp-72, a3=?.
  The `jalr` at 0x10010a5c calls close with a0=?, a1=?, a2=-0x1, a3=?.
  The `bne` branch at 0x10010994 targets 0x100109b8, is taken when v0(=ret(strlen)) < 0x11 (unsigned), and falls through when v0(=ret(strlen)) >= 0x11 (unsigned).
  The `beq` branch at 0x100109b0 targets 0x10010a70 and is always taken.
  The `bgez` branch at 0x100109ec targets 0x10010a04, is taken when a2(=ret(socket)) >= 0 (signed), and falls through when a2(=ret(socket)) < 0 (signed).
  The `beq` branch at 0x100109fc targets 0x10010a70 and is always taken.
  The `bne` branch at 0x10010a3c targets 0x10010a54, is taken when v0(=ret(ioctl)) != a2(=-0x1), and falls through when v0(=ret(ioctl)) == a2(=-0x1).
  The `beq` branch at 0x10010a4c targets 0x10010a70 and is always taken.
  The return at 0x10010a80 has v0 = one of -0x1, ?.

- `id_to_vertices` in `usr/diags/SG/bin/olsgsys` at 0x10010a88 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10010a88-0x10010de4 (860 bytes).
  It occupies 860 bytes.
  The `ld` at 0x10010adc loads 8 bytes from ?.
  The `sd` at 0x10010ae8 stores 8 bytes to ?.
  The `lw` at 0x10010d04 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x10010b20 calls strcat with a0=sp-1040, a1=0x1002b5c8, a2=a2 at entry (arg2), a3=0x223b0.
  The `jalr` at 0x10010b4c calls strcat with a0=sp-1040, a1=0x1002b5d0, a2=a2 at entry (arg2), a3=0x223b0.
  The `jalr` at 0x10010b64 calls sprintf with a0=sp-784, a1=0x1002b5d8, a2=a0 at entry (arg0), a3=?.
  The `jalr` at 0x10010b78 calls strcat with a0=sp-1040, a1=sp-784, a2=?, a3=?.
  The `jal` at 0x10010b94 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10027710, a2=sp-1040, a3=?.
  The `jalr` at 0x10010ba8 calls stat with a0=sp-1040, a1=sp-768, a2=?, a3=?.
  The `jal` at 0x10010bc8 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10027730, a2=?, a3=?.
  The `jalr` at 0x10010be8 calls opendir with a0=sp-1040, a1=?, a2=?, a3=?.
  The `jalr` at 0x10010c20 calls readdir with a0=ret(opendir), a1=?, a2=?, a3=ret(opendir), a4=ret(opendir).
  The `jalr` at 0x10010c50 calls strcmp with a0=0x1002b5dc, a1=ret(readdir)+18, a2=?, a3=?.
  The `jalr` at 0x10010c70 calls strcmp with a0=0x1002b5e0, a1=?, a2=?, a3=?.
  The `jal` at 0x10010ca0 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10027760, a2=?, a3=?.
  The `jalr` at 0x10010cb8 calls memset with a0=sp-600, a1=0x0, a2=0x100, a3=?.
  The `jalr` at 0x10010cd8 calls sprintf with a0=sp-344, a1=0x1002b5b8, a2=sp-1040, a3=?.
  The `jalr` at 0x10010cf0 calls readlink with a0=sp-344, a1=sp-600, a2=0x100, a3=?.
  The `jalr` at 0x10010d0c calls strerror with a0=[sym(errno)], a1=?, a2=?, a3=?.
  The `jal` at 0x10010d28 calls dl_output_error [0x10018b7c] with a0=0x1, a1=0x10027780, a2=ret(strerror), a3=?.
  The `jal` at 0x10010d54 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10027798, a2=sp-600, a3=?.
  The `jalr` at 0x10010d6c calls strtoul with a0=a0 at entry (arg0), a1=0x0, a2=0x10, a3=?.
  The `jal` at 0x10010d88 calls LLInsert [0x10015bdc] with a0=a2 at entry (arg2), a1=0x0, a2=sp-600, a3=ret(strtoul).
  The `jalr` at 0x10010d98 calls readdir with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10010dc0 calls closedir with a0=?, a1=?, a2=?, a3=?.
  The `bgtz` branch at 0x10010b00 targets 0x10010ad0, is taken when a4(?) > 0 (signed), and falls through when a4(?) <= 0 (signed).
  The `bne` branch at 0x10010b0c targets 0x10010b30, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x10010b28 targets 0x10010b54 and is always taken.
  The `bne` branch at 0x10010b38 targets 0x10010b54, is taken when t0(?) != t1(=0x1), and falls through when t0(?) == t1(=0x1).
  The `bgez` branch at 0x10010bb0 targets 0x10010be0, is taken when v0(=ret(stat)) >= 0 (signed), and falls through when v0(=ret(stat)) < 0 (signed).
  The `beq` branch at 0x10010bd8 targets 0x10010dcc and is always taken.
  The `bne` branch at 0x10010c00 targets 0x10010c18, is taken when a3(=ret(opendir)) != 0, and falls through when a3(=ret(opendir)) == 0.
  The `beq` branch at 0x10010c10 targets 0x10010dcc and is always taken.
  The `beq` branch at 0x10010c38 targets 0x10010db8, is taken when a6(=ret(readdir)) == 0, and falls through when a6(=ret(readdir)) != 0.
  The `beq` branch at 0x10010c58 targets 0x10010d90, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0x10010c78 targets 0x10010c88, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `beq` branch at 0x10010c80 targets 0x10010d90 and is always taken.
  The `bgez` branch at 0x10010cf8 targets 0x10010d40, is taken when v0(=ret(readlink)) >= 0 (signed), and falls through when v0(=ret(readlink)) < 0 (signed).
  The `beq` branch at 0x10010d38 targets 0x10010dcc and is always taken.
  The `bne` branch at 0x10010db0 targets 0x10010c40, is taken when a2(=ret(readdir)) != 0, and falls through when a2(=ret(readdir)) == 0.
  The return at 0x10010ddc has v0 = one of -0x1, 0x0, 0x1.

- `waitForMapNotify` in `usr/diags/SG/bin/olsgsys` at 0x10010de4 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10010de4-0x10010e4c (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x10010dfc loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x10010e10 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lw` at 0x10010e18 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `bne` branch at 0x10010e04 targets 0x10010e34, is taken when at(=[a1]) != v0(=0x13), and falls through when at(=[a1]) == v0(=0x13).
  The `bne` branch at 0x10010e1c targets 0x10010e34, is taken when v0(=[a2]) != v1(=[a1+16]), and falls through when v0(=[a2]) == v1(=[a1+16]).
  The `beq` branch at 0x10010e2c targets 0x10010e38 and is always taken.
  The return at 0x10010e44 has v0 = one of 0x0, 0x1.

- `reDraw` in `usr/diags/SG/bin/olsgsys` at 0x10010e4c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10010e4c-0x10010f9c (336 bytes).
  It occupies 336 bytes.
  The `jalr` at 0x10010e8c calls glClearColor with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10010e9c calls glClear with a0=0x4000, a1=?, a2=?, a3=?.
  The `jalr` at 0x10010eac calls glShadeModel with a0=0x1d00, a1=?, a2=?, a3=?.
  The `jalr` at 0x10010eb8 calls glPushMatrix with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10010ed0 calls dl_hash_value [0x1001d48c] with a0=0x100277b8, a1=-0x1, a2=?, a3=?.
  The `jalr` at 0x10010f3c calls glColor3f with a0=?, a1=?, a2=?, a3=0xff0000, a5=0xffffffffff000000.
  The `jalr` at 0x10010f58 calls glRotatef with a0=?, a1=?, a2=?, a3=?; fp f12=f14, f15=0x3f800000.
  The `jalr` at 0x10010f74 calls glRectf with a0=?, a1=?, a2=?, a3=?; fp f12=0xffffffffc37a0000, f13=0xffffffffc37a0000, f14=0x437a0000, f15=0x437a0000.
  The `jalr` at 0x10010f80 calls glPopMatrix with a0=?, a1=?, a2=?, a3=?.
  The return at 0x10010f94 has v0 = ret(glPopMatrix).

- `swap_buffers` in `usr/diags/SG/bin/olsgsys` at 0x10010f9c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10010f9c-0x1001102c (144 bytes).
  It occupies 144 bytes.
  The `lw` at 0x10010fec loads 4 bytes from table(0x1003497c) +0x0.
  The `jalr` at 0x10010ff4 calls glXSwapBuffers with a0=a0 at entry (arg0), a1=entry(0x1003497c), a2=table(0x10034970), a3=?, a4=a1 at entry (arg1).
  The `jalr` at 0x10011000 calls glXWaitGL with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10011010 calls sleep with a0=0x1, a1=?, a2=?, a3=?.
  The return at 0x10011024 has v0 = ret(sleep).

- `drawlibInit` in `usr/diags/SG/bin/olsgsys` at 0x1001102c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001102c-0x100110c0 (148 bytes).
  It occupies 148 bytes.
  The `lw` at 0x10011054 loads 4 bytes from abs 0x1002ae88.
  3 such `sw` accesses store 4 bytes to ?, including `sw` at 0x10011080, `sw` at 0x10011088, `sw` at 0x10011090.
  The `beq` branch at 0x1001104c targets 0x100110b0 and is never taken: its condition can never hold for these operands, so execution always falls through.
  The `bne` branch at 0x100110a8 targets 0x10011054, is taken when a0(?) < 0x40 (signed), and falls through when a0(?) >= 0x40 (signed).
  The return at 0x100110b8 has v0 = 0x1.

- `dma_init_Draw` in `usr/diags/SG/bin/olsgsys` at 0x100110c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100110c0-0x1001115c (156 bytes).
  It occupies 156 bytes.
  The `lw` at 0x10011118 loads 4 bytes from table(0x1003497c) +0x0.
  The `lw` at 0x10011120 loads 4 bytes from table(0x10034980) +0x0.
  The `jalr` at 0x10011128 calls glXMakeCurrent with a0=a0 at entry (arg0), a1=entry(0x1003497c), a2=entry(0x10034980), a3=?, a4=a1 at entry (arg1).
  The `jal` at 0x10011140 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x100277c8, a2=?, a3=?.
  The return at 0x10011154 has v0 = ret(dl_output_dbug).

- `init_Draw` in `usr/diags/SG/bin/olsgsys` at 0x1001115c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001115c-0x100112ec (400 bytes).
  It occupies 400 bytes.
  The `lw` at 0x100111b4 loads 4 bytes from table(0x1003497c) +0x0.
  The `lw` at 0x100111bc loads 4 bytes from table(0x10034980) +0x0.
  The `jalr` at 0x100111c4 calls glXMakeCurrent with a0=a0 at entry (arg0), a1=entry(0x1003497c), a2=entry(0x10034980), a3=?, a4=a1 at entry (arg1).
  The `jal` at 0x100111dc calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x100277c8, a2=?, a3=?.
  The `jalr` at 0x100111ec calls glMatrixMode with a0=0x1700, a1=?, a2=?, a3=?.
  The `jalr` at 0x100111f8 calls glLoadIdentity with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10011208 calls glMatrixMode with a0=0x1701, a1=?, a2=?, a3=?.
  The `jalr` at 0x10011214 calls glLoadIdentity with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10011248 calls glOrtho with a0=?, a1=?, a2=a3 at entry (arg3), a3=a2 at entry (arg2); fp f16=0xbff0000000000000, f17=0x3ff0000000000000.
  The `jalr` at 0x10011288 calls glTranslated with a0=?, a1=?, a2=?, a3=?, a5=a3 at entry (arg3), a7=a2 at entry (arg2).
  The `jalr` at 0x100112a4 calls glViewport with a0=0x0, a1=0x0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x100112c0 calls glClearColor with a0=?, a1=?, a2=?, a3=?; fp f12=0x3dcccccd, f13=0x3dcccccd, f14=0x3dcccccd, f15=0x3dcccccd.
  The `jalr` at 0x100112d0 calls glClear with a0=0x4000, a1=?, a2=?, a3=?.
  The return at 0x100112e4 has v0 = ret(glClear).

- `setup_glx` in `usr/diags/SG/bin/olsgsys` at 0x100112ec (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100112ec-0x10011b60 (2164 bytes).
  It occupies 2164 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x84, including `lw` at 0x1001137c, `lw` at 0x10011a24.
  The `sw` at 0x10011398 stores 4 bytes to table(0x10034974) +0x0.
  13 such `lw` accesses load 4 bytes from table(0x10034974) +0x0, including `lw` at 0x100113a0, `lw` at 0x10011400, `lw` at 0x10011484.
  The `sw` at 0x1001141c stores 4 bytes to table(0x10034980) +0x0.
  2 such `lw` accesses load 4 bytes from table(0x10034980) +0x0, including `lw` at 0x10011424, `lw` at 0x100119ac.
  2 such `lw` accesses load 4 bytes from entry(0x10034974) +0x4, including `lw` at 0x100114bc, `lw` at 0x10011540.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8c, including `lw` at 0x1001158c, `lw` at 0x10011638, `lw` at 0x10011684.
  4 such `lw` accesses load 4 bytes from entry(0x10034974) +0x8, including `lw` at 0x10011598, `lw` at 0x10011644, `lw` at 0x10011690.
  4 such `lw` accesses load 4 bytes from ([a0+140] + ((([entry(0x10034974)+8] << 0x2) + [entry(0x10034974)+8]) << 0x4)) +0x8, including `lw` at 0x100115ac, `lw` at 0x10011658, `lw` at 0x100116a4.
  2 such `lw` accesses load 4 bytes from entry(0x10034974) +0x0, including `lw` at 0x100115b8, `lw` at 0x1001188c.
  The `sw` at 0x100115d0 stores 4 bytes to table(0x10034978) +0x0.
  2 such `lw` accesses load 4 bytes from table(0x10034978) +0x0, including `lw` at 0x100115d8, `lw` at 0x100117cc.
  The `sw` at 0x10011678 stores 4 bytes to table(0x10034988) +0x0.
  The `sw` at 0x100116c4 stores 4 bytes to table(0x1003498c) +0x0.
  3 such `lw` accesses load 4 bytes from table(0x10034988) +0x0, including `lw` at 0x100116cc, `lw` at 0x1001172c, `lw` at 0x100117a8.
  The `lw` at 0x10011734 loads 4 bytes from table(0x1003498c) +0x0.
  The `sw` at 0x10011758 stores 4 bytes to table(0x10034990) +0x0.
  3 such `lw` accesses load 4 bytes from table(0x10034990) +0x0, including `lw` at 0x10011760, `lw` at 0x100117bc, `lw` at 0x10011928.
  The `sw` at 0x100117c4 stores 4 bytes to table(0x100349d0) +0x0.
  The `sw` at 0x100117d4 stores 4 bytes to table(0x100349cc) +0x0.
  The `sw` at 0x100117dc stores 4 bytes to table(0x100349a0) +0x0.
  The `sw` at 0x100117e4 stores 4 bytes to table(0x100349a4) +0x0.
  The `sw` at 0x100117f4 stores 4 bytes to table(0x100349c0) +0x0.
  The `sw` at 0x10011800 stores 4 bytes to table(0x100349c8) +0x0.
  The `sw` at 0x1001180c stores 4 bytes to table(0x100349c4) +0x0.
  The `lw` at 0x10011878 loads 4 bytes from entry(0x10034974) +0xc.
  The `sw` at 0x100118b8 stores 4 bytes to table(0x1003497c) +0x0.
  7 such `lw` accesses load 4 bytes from table(0x1003497c) +0x0, including `lw` at 0x100118c0, `lw` at 0x10011920, `lw` at 0x10011954.
  The `jal` at 0x10011354 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x100277e0, a2=table(0x10034970), a3=?, a4=a3 at entry (arg3), a5=0x21b4c.
  The `jal` at 0x1001136c calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x100277f8, a2=?, a3=?.
  The `jalr` at 0x1001138c calls glXChooseVisual with a0=a0 at entry (arg0), a1=[a0+132], a2=0x1002ad70, a3=?.
  The `jal` at 0x100113bc calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x10027810, a2=entry(0x10034974), a3=table(0x10034970).
  The `jal` at 0x100113f0 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027828, a2=entry(0x10034974), a3=table(0x10034970).
  The `jalr` at 0x10011410 calls glXCreateContext with a0=a0 at entry (arg0), a1=entry(0x10034974), a2=0x0, a3=0x1.
  The `jal` at 0x10011440 calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x10027848, a2=entry(0x10034980), a3=table(0x10034970).
  The `jal` at 0x10011474 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027860, a2=entry(0x10034980), a3=table(0x10034970).
  The `jalr` at 0x10011494 calls glXGetConfig with a0=a0 at entry (arg0), a1=entry(0x10034974), a2=0x4, a3=sp-216.
  The `jal` at 0x100114c4 calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x10027878, a2=[entry(0x10034974)+4], a3=?.
  The `jal` at 0x100114f8 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027890, a2=?, a3=?.
  The `jalr` at 0x10011518 calls glXGetConfig with a0=a0 at entry (arg0), a1=entry(0x10034974), a2=0x5, a3=sp-212.
  The `jal` at 0x10011548 calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x100278b0, a2=[entry(0x10034974)+4], a3=?.
  The `jal` at 0x1001157c calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x100278d8, a2=?, a3=?.
  The `jalr` at 0x100115c4 calls XCreateColormap with a0=a0 at entry (arg0), a1=[([a0+140] + ((([entry(0x10034974)+8] << 0x2) + [entry(0x10034974)+8]) << 0x4))+8], a2=[entry(0x10034974)], a3=0x0.
  The `jal` at 0x100115f4 calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x100278f0, a2=entry(0x10034978), a3=table(0x10034970).
  The `jal` at 0x10011628 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027908, a2=entry(0x10034978), a3=table(0x10034970).
  The `jalr` at 0x1001166c calls XCreatePixmap with a0=a0 at entry (arg0), a1=[([a0+140] + ((([entry(0x10034974)+8] << 0x2) + [entry(0x10034974)+8]) << 0x4))+8], a2=0x1, a3=0x1, a4=0x1.
  The `jalr` at 0x100116b8 calls XCreatePixmap with a0=a0 at entry (arg0), a1=[([a0+140] + ((([entry(0x10034974)+8] << 0x2) + [entry(0x10034974)+8]) << 0x4))+8], a2=0x1, a3=0x1, a4=0x1.
  The `jal` at 0x100116e8 calls dl_output_error [0x10018b7c] with a0=0x7d0, a1=0x10027920, a2=?, a3=entry(0x10034988), a4=table(0x10034970).
  The `jal` at 0x1001171c calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027940, a2=?, a3=entry(0x10034988), a4=table(0x10034970).
  The `jalr` at 0x1001174c calls XCreatePixmapCursor with a0=a0 at entry (arg0), a1=entry(0x10034988), a2=entry(0x1003498c), a3=sp-208, a4=sp-208, a5=0x0, a6=0x0.
  The `jal` at 0x1001177c calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x10027958, a2=entry(0x10034990), a3=table(0x10034970).
  The `jalr` at 0x100117b0 calls XFreePixmap with a0=a0 at entry (arg0), a1=entry(0x10034988), a2=entry(0x10034990), a3=table(0x10034970).
  The `jal` at 0x10011828 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027978, a2=0x3a0c, a3=0xf, a4=table(0x10034970), a5=0x1, a6=table(0x10034970), a7=0x2800f.
  The `jalr` at 0x100118ac calls XCreateWindow with a0=a0 at entry (arg0), a1=[([a0+140] + ((([entry(0x10034974)+8] << 0x2) + [entry(0x10034974)+8]) << 0x4))+8], a2=0x0, a3=0x0, a4=a2 at entry (arg2), a5=a1 at entry (arg1), a6=0x0, a7=[entry(0x10034974)+12].
  The `jal` at 0x100118dc calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x10027988, a2=entry(0x1003497c), a3=table(0x10034970).
  The `jal` at 0x10011910 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x100279a0, a2=entry(0x1003497c), a3=table(0x10034970).
  The `jalr` at 0x10011930 calls XDefineCursor with a0=a0 at entry (arg0), a1=entry(0x1003497c), a2=entry(0x10034990), a3=?.
  The `jalr` at 0x10011944 calls XSync with a0=a0 at entry (arg0), a1=0x0, a2=?, a3=?.
  The `jalr` at 0x1001195c calls XMapRaised with a0=a0 at entry (arg0), a1=entry(0x1003497c), a2=?, a3=?.
  The `jalr` at 0x1001197c calls XIfEvent with a0=a0 at entry (arg0), a1=sp-184, a2=sym(waitForMapNotify), a3=table(0x1003497c).
  The `jal` at 0x10011994 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x100279b0, a2=?, a3=?.
  The `jalr` at 0x100119b4 calls glXMakeCurrent with a0=a0 at entry (arg0), a1=entry(0x1003497c), a2=entry(0x10034980), a3=?.
  The `jal` at 0x100119d4 calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x100279c8, a2=?, a3=?.
  The `jal` at 0x10011a14 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x100279e8, a2=?, a3=?.
  The `jalr` at 0x10011a2c calls glXQueryExtensionsString with a0=a0 at entry (arg0), a1=[a0+132], a2=?, a3=?.
  The `jal` at 0x10011a50 calls dl_output_info [0x100189a4] with a0=0x10027a08, a1=?, a2=ret(glXQueryExtensionsString), a3=?.
  The `jalr` at 0x10011a84 calls strstr with a0=ret(glXQueryExtensionsString), a1=0x10027a28, a2=ret(glXQueryExtensionsString), a3=?.
  The `jal` at 0x10011aa4 calls dl_output_error [0x10018b7c] with a0=0x28, a1=0x10027a40, a2=?, a3=?.
  The `jal` at 0x10011ad8 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027a78, a2=?, a3=?.
  The `jalr` at 0x10011af8 calls glXJoinSwapGroupSGIX with a0=a0 at entry (arg0), a1=entry(0x1003497c), a2=entry(0x1003497c), a3=?.
  The `jal` at 0x10011b10 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027a90, a2=?, a3=?.
  The `jalr` at 0x10011b2c calls glXBindSwapBarrierSGIX with a0=a0 at entry (arg0), a1=entry(0x1003497c), a2=0x1, a3=?.
  The `jalr` at 0x10011b38 calls glXWaitX with a0=?, a1=?, a2=?, a3=?.
  The `bne` branch at 0x100113a4 targets 0x100113e0, is taken when a2(=entry(0x10034974)) != 0, and falls through when a2(=entry(0x10034974)) == 0.
  The `beq` branch at 0x100113d8 targets 0x10011b48 and is always taken.
  The `bne` branch at 0x10011428 targets 0x10011464, is taken when a2(=entry(0x10034980)) != 0, and falls through when a2(=entry(0x10034980)) == 0.
  The `beq` branch at 0x1001145c targets 0x10011b48 and is always taken.
  The `bne` branch at 0x100114a0 targets 0x100114e8, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x100114e0 targets 0x10011b48 and is always taken.
  The `bne` branch at 0x10011524 targets 0x1001156c, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x10011564 targets 0x10011b48 and is always taken.
  The `bne` branch at 0x100115dc targets 0x10011618, is taken when a2(=entry(0x10034978)) != 0, and falls through when a2(=entry(0x10034978)) == 0.
  The `beq` branch at 0x10011610 targets 0x10011b48 and is always taken.
  The `bne` branch at 0x100116d0 targets 0x1001170c, is taken when a3(=entry(0x10034988)) != 0, and falls through when a3(=entry(0x10034988)) == 0.
  The `beq` branch at 0x10011704 targets 0x10011b48 and is always taken.
  The `bne` branch at 0x10011764 targets 0x100117a0, is taken when a2(=entry(0x10034990)) != 0, and falls through when a2(=entry(0x10034990)) == 0.
  The `beq` branch at 0x10011798 targets 0x10011b48 and is always taken.
  The `bne` branch at 0x100118c4 targets 0x10011900, is taken when a2(=entry(0x1003497c)) != 0, and falls through when a2(=entry(0x1003497c)) == 0.
  The `beq` branch at 0x100118f8 targets 0x10011b48 and is always taken.
  The `bne` branch at 0x100119bc targets 0x100119f8, is taken when v0(=ret(glXMakeCurrent)) != 0, and falls through when v0(=ret(glXMakeCurrent)) == 0.
  The `beq` branch at 0x100119f0 targets 0x10011b48 and is always taken.
  The `beq` branch at 0x100119fc targets 0x10011b40, is taken when a4 == 0, and falls through when a4 != 0.
  The `bne` branch at 0x10011a3c targets 0x10011a74, is taken when a2(=ret(glXQueryExtensionsString)) != 0, and falls through when a2(=ret(glXQueryExtensionsString)) == 0.
  The `beq` branch at 0x10011a6c targets 0x10011b48 and is always taken.
  The `bne` branch at 0x10011a8c targets 0x10011ac8, is taken when v0(=ret(strstr)) != 0, and falls through when v0(=ret(strstr)) == 0.
  The `beq` branch at 0x10011ac0 targets 0x10011b48 and is always taken.
  The return at 0x10011b58 has v0 = one of 0x0, 0x1.

- `nowDraw` in `usr/diags/SG/bin/olsgsys` at 0x10011b60 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10011b60-0x10011c08 (168 bytes).
  It occupies 168 bytes.
  The `jal` at 0x10011bc8 calls init_Draw [0x1001115c] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10011be8 calls reDraw [0x10010e4c] with a0=a1 at entry (arg1), a1=a0 at entry (arg0), a2=?, a3=?.
  The return at 0x10011c00 has v0 = 0x0.

- `rampDraw` in `usr/diags/SG/bin/olsgsys` at 0x10011c08 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10011c08-0x10011d6c (356 bytes).
  It occupies 356 bytes.
  The `jalr` at 0x10011c60 calls glPushMatrix with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10011c78 calls dl_hash_value [0x1001d48c] with a0=0x10027ab0, a1=0xff, a2=?, a3=?.
  The `jal` at 0x10011c94 calls dl_hash_value [0x1001d48c] with a0=0x10027ac0, a1=0xff, a2=?, a3=?.
  The `jal` at 0x10011cb0 calls dl_hash_value [0x1001d48c] with a0=0x10027ad0, a1=0xff, a2=?, a3=?.
  The `jal` at 0x10011cd8 calls ramp_init [0x100121e8] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a4 at entry (arg4), a3=sp-104, a4=a3 at entry (arg3), a5=a2 at entry (arg2).
  The `jal` at 0x10011d00 calls dl_output_error [0x10018b7c] with a0=0x7d0, a1=0x10027ae0, a2=?, a3=?.
  The `jal` at 0x10011d2c calls ramp_draw [0x10012120] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a3 at entry (arg3), a3=a2 at entry (arg2), a4=ret(ramp_init).
  The `jalr` at 0x10011d38 calls glPopMatrix with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10011d48 calls free with a0=?, a1=?, a2=?, a3=?.
  The `bne` branch at 0x10011ce8 targets 0x10011d14, is taken when a1(=ret(ramp_init)) != 0, and falls through when a1(=ret(ramp_init)) == 0.
  The `beq` branch at 0x10011d0c targets 0x10011d54 and is always taken.
  The return at 0x10011d64 has v0 = 0x0.

- `drawlibDraw` in `usr/diags/SG/bin/olsgsys` at 0x10011d6c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10011d6c-0x10011e48 (220 bytes).
  It occupies 220 bytes.
  2 such `lw` accesses load 4 bytes from sym(glx_version_major) +0x0, including `lw` at 0x10011dcc, `lw` at 0x10011de8.
  2 such `lw` accesses load 4 bytes from sym(glx_version_minor) +0x0, including `lw` at 0x10011dd4, `lw` at 0x10011dfc.
  The `jalr` at 0x10011dac calls glXQueryVersion with a0=a0 at entry (arg0), a1=sym(glx_version_major), a2=sym(glx_version_minor), a3=a3 at entry (arg3).
  The `jal` at 0x10011ddc calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10027af8, a2=[sym(glx_version_major)], a3=[sym(glx_version_minor)].
  The `jal` at 0x10011e24 calls setup_glx [0x100112ec] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=a1 at entry (arg1), a3=a3 at entry (arg3).
  The `beq` branch at 0x10011db4 targets 0x10011e30, is taken when v0(=ret(glXQueryVersion)) == 0, and falls through when v0(=ret(glXQueryVersion)) != 0.
  The `bne` branch at 0x10011df0 targets 0x10011e30, is taken when a2(=[sym(glx_version_major)]) != a3(=0x1), and falls through when a2(=[sym(glx_version_major)]) == a3(=0x1).
  The `bne` branch at 0x10011e04 targets 0x10011e30, is taken when a3(=[sym(glx_version_minor)]) < 0x2 (signed), and falls through when a3(=[sym(glx_version_minor)]) >= 0x2 (signed).
  The return at 0x10011e40 has v0 = one of 0x0, ret(setup_glx).

- `Cleanup` in `usr/diags/SG/bin/olsgsys` at 0x10011e48 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10011e48-0x10011efc (180 bytes).
  It occupies 180 bytes.
  The `lw` at 0x10011eb0 loads 4 bytes from table(0x10034980) +0x0.
  The `lw` at 0x10011ec8 loads 4 bytes from table(0x1003497c) +0x0.
  The `jalr` at 0x10011ea0 calls glXMakeCurrent with a0=a0 at entry (arg0), a1=0x0, a2=0x0, a3=a3 at entry (arg3).
  The `jalr` at 0x10011eb8 calls glXDestroyContext with a0=a0 at entry (arg0), a1=entry(0x10034980), a2=?, a3=?.
  The `jalr` at 0x10011ed0 calls XDestroyWindow with a0=a0 at entry (arg0), a1=entry(0x1003497c), a2=?, a3=?.
  The `jalr` at 0x10011ee0 calls XCloseDisplay with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The return at 0x10011ef4 has v0 = ret(XCloseDisplay).

- `diffImages` in `usr/diags/SG/bin/olsgsys` at 0x10011efc (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10011efc-0x10012120 (548 bytes).
  It occupies 548 bytes.
  6 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x10011f78, `lbu` at 0x10011fac, `lbu` at 0x10011ff8.
  The `beq` branch at 0x10011f28 targets 0x1001210c, is taken when at(=0x0) >= v0(=a3) (signed), and falls through when at(=0x0) < v0(=a3) (signed).
  The `beq` branch at 0x10011f40 targets 0x100120ec, is taken when v1(=0x0) >= a0(=a2) (signed), and falls through when v1(=0x0) < a0(=a2) (signed).
  The `beq` branch at 0x10011fb0 targets 0x10011fc4, is taken when a1(?) == a2(?), and falls through when a1(?) != a2(?).
  The `beq` branch at 0x10012034 targets 0x10012048, is taken when a4(?) == a5(?), and falls through when a4(?) != a5(?).
  The `beq` branch at 0x100120b8 targets 0x100120cc, is taken when a7(?) == t0(?), and falls through when a7(?) != t0(?).
  The `bne` branch at 0x100120e4 targets 0x10011f48, is taken when t2(?) < t3(=a2) (signed), and falls through when t2(?) >= t3(=a2) (signed).
  The `bne` branch at 0x10012104 targets 0x10011f30, is taken when t9(?) < ra(=a3) (signed), and falls through when t9(?) >= ra(=a3) (signed).
  The return at 0x10012118 has v0 = one of 0x0, ?.

- `ramp_draw` in `usr/diags/SG/bin/olsgsys` at 0x10012120 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10012120-0x100121e8 (200 bytes).
  It occupies 200 bytes.
  The `jal` at 0x10012188 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027b10, a2=table(0x10034970), a3=?, a4=a1 at entry (arg1), a5=0x20d18.
  The `jalr` at 0x10012198 calls glClear with a0=0x4100, a1=?, a2=?, a3=?.
  The `jalr` at 0x100121ac calls glRasterPos2i with a0=0x0, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x100121cc calls glDrawPixels with a0=a3 at entry (arg3), a1=a2 at entry (arg2), a2=0x1907, a3=0x1401.
  The return at 0x100121e0 has v0 = ret(glDrawPixels).

- `ramp_init` in `usr/diags/SG/bin/olsgsys` at 0x100121e8 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100121e8-0x1001239c (436 bytes).
  It occupies 436 bytes.
  The `lw` at 0x100122b0 loads 4 bytes from table(0x1003497c) +0x0.
  The `lw` at 0x100122b8 loads 4 bytes from table(0x10034980) +0x0.
  The `jal` at 0x10012250 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027b28, a2=table(0x10034970), a3=?, a4=a1 at entry (arg1), a6=0x20c50.
  The `jal` at 0x1001226c calls makeCheckImage [0x1001239c] with a0=a2 at entry (arg2), a1=a3 at entry (arg3), a2=a4 at entry (arg4), a3=a5 at entry (arg5).
  The `jal` at 0x10012294 calls dl_output_error [0x10018b7c] with a0=0x7d0, a1=0x10027b40, a2=?, a3=?, a7=ret(makeCheckImage).
  The `jalr` at 0x100122c0 calls glXMakeCurrent with a0=a0 at entry (arg0), a1=entry(0x1003497c), a2=entry(0x10034980), a3=?, a7=ret(makeCheckImage).
  The `jalr` at 0x100122d0 calls glMatrixMode with a0=0x1700, a1=?, a2=?, a3=?.
  The `jalr` at 0x100122dc calls glLoadIdentity with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x100122ec calls glMatrixMode with a0=0x1701, a1=?, a2=?, a3=?.
  The `jalr` at 0x100122f8 calls glLoadIdentity with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001232c calls glOrtho with a0=?, a1=?, a2=a4 at entry (arg4), a3=a5 at entry (arg5); fp f16=0xbff0000000000000, f17=0x3ff0000000000000.
  The `jalr` at 0x10012348 calls glViewport with a0=0x0, a1=0x0, a2=a5 at entry (arg5), a3=a4 at entry (arg4).
  The `jalr` at 0x10012364 calls glClearColor with a0=?, a1=?, a2=?, a3=?; fp f12=0x3dcccccd, f13=0x3dcccccd, f14=0x3dcccccd, f15=0x3dcccccd.
  The `jalr` at 0x10012374 calls glClear with a0=0x4000, a1=?, a2=?, a3=?.
  The `bne` branch at 0x1001227c targets 0x100122a8, is taken when a7(=ret(makeCheckImage)) != 0, and falls through when a7(=ret(makeCheckImage)) == 0.
  The `beq` branch at 0x100122a0 targets 0x10012384 and is always taken.
  The return at 0x10012394 has v0 = one of 0x0, ret(makeCheckImage).

- `makeCheckImage` in `usr/diags/SG/bin/olsgsys` at 0x1001239c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001239c-0x1001347c (4320 bytes).
  It occupies 4320 bytes.
  The `lw` at 0x10012444 loads 4 bytes from table(0x10027ba0) +0x0.
  7 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x0, including `lw` at 0x10012454, `lw` at 0x1001255c, `lw` at 0x10012708.
  7 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x4, including `lw` at 0x10012464, `lw` at 0x10012598, `lw` at 0x10012718.
  7 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x8, including `lw` at 0x10012474, `lw` at 0x100125d4, `lw` at 0x10012728.
  30 such `sb` accesses store 1 byte to ?, including `sb` at 0x10012590, `sb` at 0x100125cc, `sb` at 0x10012608.
  The `jalr` at 0x100123e0 calls malloc with a0=?, a1=?, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=0x20a9c.
  The `jal` at 0x10012408 calls dl_output_error [0x10018b7c] with a0=0x7d0, a1=0x10027b60, a2=?, a3=?, a5=ret(malloc).
  The `jal` at 0x10012e20 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10027bc0, a2=?, a3=?, a4=a3 at entry (arg3), a5=0xff.
  The `jal` at 0x10012e40 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10027bd8, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10012efc calls dl_output_dbug [0x10019758] with a0=0x9, a1=0x10027bf0, a2=?, a3=?.
  The `jal` at 0x100130bc calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10027bc0, a2=?, a3=?, a4=(a0 << 0x2), a5=ret(malloc).
  The `jal` at 0x100130dc calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10027bd8, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10013194 calls dl_output_dbug [0x10019758] with a0=0x9, a1=0x10027c08, a2=?, a3=?.
  The `bne` branch at 0x100123f0 targets 0x1001241c, is taken when a5(=ret(malloc)) != 0, and falls through when a5(=ret(malloc)) == 0.
  The `beq` branch at 0x10012414 targets 0x10013464 and is always taken.
  The `beq` branch at 0x10012438 targets 0x10013454, is taken when a2(=a0) >= 0x8 (unsigned), and falls through when a2(=a0) < 0x8 (unsigned).
  The `bne` branch at 0x10012488 targets 0x100124ac, is taken when a4(?) < 0x40 (signed), and falls through when a4(?) >= 0x40 (signed).
  The `beq` branch at 0x10012498 targets 0x100124ac, is taken when t0(?) >= 0xef (signed), and falls through when t0(?) < 0xef (signed).
  The `bne` branch at 0x100124b4 targets 0x100124d8, is taken when t2(?) < 0x40 (signed), and falls through when t2(?) >= 0x40 (signed).
  The `beq` branch at 0x100124c4 targets 0x100124d8, is taken when t3(?) >= 0xef (signed), and falls through when t3(?) < 0xef (signed).
  The `bne` branch at 0x100124e0 targets 0x10012504, is taken when t9(?) < 0x40 (signed), and falls through when t9(?) >= 0x40 (signed).
  The `beq` branch at 0x100124f0 targets 0x10012504, is taken when ra(?) >= 0xef (signed), and falls through when ra(?) < 0xef (signed).
  The `beq` branch at 0x10012514 targets 0x100126fc, is taken when v0(=0x0) >= v1(=a2) (signed), and falls through when v0(=0x0) < v1(=a2) (signed).
  The `beq` branch at 0x1001252c targets 0x100126dc, is taken when a0(=0x0) >= a1(=a3) (signed), and falls through when a0(=0x0) < a1(=a3) (signed).
  The `bne` branch at 0x10012550 targets 0x10012614, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x1001260c targets 0x100126bc and is always taken.
  The `bne` branch at 0x100126d4 targets 0x10012534, is taken when at(?) < v0(=a3) (signed), and falls through when at(?) >= v0(=a3) (signed).
  The `bne` branch at 0x100126f4 targets 0x1001251c, is taken when a0(?) < a1(=a2) (signed), and falls through when a0(?) >= a1(=a2) (signed).
  The `beq` branch at 0x100126fc targets 0x1001345c and is always taken.
  The `bne` branch at 0x1001273c targets 0x10012760, is taken when a3(?) < 0x40 (signed), and falls through when a3(?) >= 0x40 (signed).
  The `beq` branch at 0x1001274c targets 0x10012760, is taken when a7(?) >= 0xef (signed), and falls through when a7(?) < 0xef (signed).
  The `bne` branch at 0x10012768 targets 0x1001278c, is taken when t1(?) < 0x40 (signed), and falls through when t1(?) >= 0x40 (signed).
  The `beq` branch at 0x10012778 targets 0x1001278c, is taken when t2(?) >= 0xef (signed), and falls through when t2(?) < 0xef (signed).
  The `bne` branch at 0x10012794 targets 0x100127b8, is taken when t8(?) < 0x40 (signed), and falls through when t8(?) >= 0x40 (signed).
  The `beq` branch at 0x100127a4 targets 0x100127b8, is taken when t9(?) >= 0xef (signed), and falls through when t9(?) < 0xef (signed).
  The `beq` branch at 0x100127c8 targets 0x1001299c, is taken when at(=0x0) >= v0(=a2) (signed), and falls through when at(=0x0) < v0(=a2) (signed).
  The `beq` branch at 0x100127e0 targets 0x1001297c, is taken when v1(=0x0) >= a0(=a3) (signed), and falls through when v1(=0x0) < a0(=a3) (signed).
  The `beq` branch at 0x100127f0 targets 0x100128b4, is taken when (a1(?) & 0x8) == 0, and falls through when (a1(?) & 0x8) != 0.
  The `beq` branch at 0x100128ac targets 0x1001295c and is always taken.
  The `bne` branch at 0x10012974 targets 0x100127e8, is taken when ra(?) < at(=a3) (signed), and falls through when ra(?) >= at(=a3) (signed).
  The `bne` branch at 0x10012994 targets 0x100127d0, is taken when v1(?) < a0(=a2) (signed), and falls through when v1(?) >= a0(=a2) (signed).
  The `beq` branch at 0x1001299c targets 0x1001345c and is always taken.
  The `bne` branch at 0x100129dc targets 0x10012a00, is taken when a2(?) < 0x40 (signed), and falls through when a2(?) >= 0x40 (signed).
  The `beq` branch at 0x100129ec targets 0x10012a00, is taken when a6(?) >= 0xef (signed), and falls through when a6(?) < 0xef (signed).
  The `bne` branch at 0x10012a08 targets 0x10012a2c, is taken when t0(?) < 0x40 (signed), and falls through when t0(?) >= 0x40 (signed).
  The `beq` branch at 0x10012a18 targets 0x10012a2c, is taken when t1(?) >= 0xef (signed), and falls through when t1(?) < 0xef (signed).
  The `bne` branch at 0x10012a34 targets 0x10012a58, is taken when t3(?) < 0x40 (signed), and falls through when t3(?) >= 0x40 (signed).
  The `beq` branch at 0x10012a44 targets 0x10012a58, is taken when t8(?) >= 0xef (signed), and falls through when t8(?) < 0xef (signed).
  The `beq` branch at 0x10012a68 targets 0x10012c3c, is taken when ra(=0x0) >= at(=a2) (signed), and falls through when ra(=0x0) < at(=a2) (signed).
  The `beq` branch at 0x10012a80 targets 0x10012c1c, is taken when v0(=0x0) >= v1(=a3) (signed), and falls through when v0(=0x0) < v1(=a3) (signed).
  The `bne` branch at 0x10012a90 targets 0x10012b54, is taken when (a0(?) & 0x8) != 0, and falls through when (a0(?) & 0x8) == 0.
  The `beq` branch at 0x10012b4c targets 0x10012bfc and is always taken.
  The `bne` branch at 0x10012c14 targets 0x10012a88, is taken when t9(?) < ra(=a3) (signed), and falls through when t9(?) >= ra(=a3) (signed).
  The `bne` branch at 0x10012c34 targets 0x10012a70, is taken when v0(?) < v1(=a2) (signed), and falls through when v0(?) >= v1(=a2) (signed).
  The `beq` branch at 0x10012c3c targets 0x1001345c and is always taken.
  The `beq` branch at 0x10012c54 targets 0x10012d68, is taken when a1(=0x0) >= a2 (signed), and falls through when a1(=0x0) < a2 (signed).
  The `beq` branch at 0x10012c6c targets 0x10012d48, is taken when a3(=0x0) >= a4(=a3) (signed), and falls through when a3(=0x0) < a4(=a3) (signed).
  The `bne` branch at 0x10012d40 targets 0x10012c74, is taken when a5(?) < a6(=a3) (signed), and falls through when a5(?) >= a6(=a3) (signed).
  The `bne` branch at 0x10012d60 targets 0x10012c5c, is taken when t3(?) < t8(=a2) (signed), and falls through when t3(?) >= t8(=a2) (signed).
  The `beq` branch at 0x10012d68 targets 0x1001345c and is always taken.
  The `beq` branch at 0x10012d84 targets 0x10012dac, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0x10012da4 targets 0x10012db4 and is always taken.
  The `beq` branch at 0x10012dd0 targets 0x10012df8, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x10012df0 targets 0x10012e00 and is always taken.
  The `beq` branch at 0x10012e74 targets 0x10013004, is taken when a2(=0x0) >= a3 (signed), and falls through when a2(=0x0) < a3 (signed).
  The `beq` branch at 0x10012e80 targets 0x10012f04, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x10012e9c targets 0x10012f04, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x10012eac targets 0x10012f04, is taken when t1(?) == t2(=0xff), and falls through when t1(?) != t2(=0xff).
  The `beq` branch at 0x10012f14 targets 0x10012fe4, is taken when t0(=0x0) >= t1(=a2) (signed), and falls through when t0(=0x0) < t1(=a2) (signed).
  The `bne` branch at 0x10012fdc targets 0x10012f1c, is taken when t2(?) < t3(=a2) (signed), and falls through when t2(?) >= t3(=a2) (signed).
  The `bne` branch at 0x10012ffc targets 0x10012e7c, is taken when a4(?) < a5(=a3) (signed), and falls through when a4(?) >= a5(=a3) (signed).
  The `beq` branch at 0x10013004 targets 0x1001345c and is always taken.
  The `beq` branch at 0x10013020 targets 0x10013048, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x10013040 targets 0x10013050 and is always taken.
  The `beq` branch at 0x1001306c targets 0x10013094, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0x1001308c targets 0x1001309c and is always taken.
  The `beq` branch at 0x1001310c targets 0x1001329c, is taken when a2(=0x0) >= a3(=a2) (signed), and falls through when a2(=0x0) < a3(=a2) (signed).
  The `beq` branch at 0x10013118 targets 0x1001319c, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x10013134 targets 0x1001319c, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x10013144 targets 0x1001319c, is taken when t1(?) == t2(=0xff), and falls through when t1(?) != t2(=0xff).
  The `beq` branch at 0x100131ac targets 0x1001327c, is taken when t0(=0x0) >= t1(=a3) (signed), and falls through when t0(=0x0) < t1(=a3) (signed).
  The `bne` branch at 0x10013274 targets 0x100131b4, is taken when t2(?) < t3(=a3) (signed), and falls through when t2(?) >= t3(=a3) (signed).
  The `bne` branch at 0x10013294 targets 0x10013114, is taken when a4(?) < a5(=a2) (signed), and falls through when a4(?) >= a5(=a2) (signed).
  The `beq` branch at 0x1001329c targets 0x1001345c and is always taken.
  The `beq` branch at 0x100132c8 targets 0x1001344c, is taken when a7(=0x0) >= t0(=a2) (signed), and falls through when a7(=0x0) < t0(=a2) (signed).
  The `beq` branch at 0x100132d8 targets 0x100132f4, is taken when t1(?) == t2(=0x7), and falls through when t1(?) != t2(=0x7).
  The `beq` branch at 0x100132ec targets 0x100132fc and is always taken.
  The `beq` branch at 0x10013310 targets 0x1001342c, is taken when t9(=0x0) >= ra(=a3) (signed), and falls through when t9(=0x0) < ra(=a3) (signed).
  The `beq` branch at 0x10013320 targets 0x1001333c, is taken when at(?) == v0(=0x1f), and falls through when at(?) != v0(=0x1f).
  The `beq` branch at 0x10013334 targets 0x10013344 and is always taken.
  The `bne` branch at 0x10013424 targets 0x10013318, is taken when a1(?) < a2(=a3) (signed), and falls through when a1(?) >= a2(=a3) (signed).
  The `bne` branch at 0x10013444 targets 0x100132d0, is taken when ra(?) < at(=a2) (signed), and falls through when ra(?) >= at(=a2) (signed).
  The `beq` branch at 0x1001344c targets 0x1001345c and is always taken.
  The `beq` branch at 0x10013454 targets 0x1001345c and is always taken.
  The return at 0x10013474 has v0 = one of 0x0, ret(malloc).
  The indirect jump at 0x10012448 uses the jump table at 0x10027ba0 with targets 0x10013454, 0x10012450, 0x10012704, 0x100129a4, 0x10012c44, 0x10012d70, 0x1001300c, 0x100132a4.

- `waitforvblank` in `usr/diags/SG/bin/olsgsys` at 0x1001347c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001347c-0x10013608 (396 bytes).
  It occupies 396 bytes.
  The `jal` at 0x100134c8 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x1001350c calls sginap with a0=0x1, a1=?, a2=0x64, a3=?.
  The `jal` at 0x1001352c calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10013554 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x10013598 calls sginap with a0=0x1, a1=?, a2=?, a3=?.
  The `jal` at 0x100135b8 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a1 at entry (arg1), a2=?, a3=?.
  The `beq` branch at 0x100134b4 targets 0x100135f0, is taken when at(=0x0) >= v0(=a0) (signed), and falls through when at(=0x0) < v0(=a0) (signed).
  The `bne` branch at 0x100134d8 targets 0x10013544, is taken when (v0(=ret(read_agpReg32)) & 0x1) != 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) == 0.
  The `bne` branch at 0x100134e8 targets 0x10013504, is taken when a1(?) != a2(=0x64), and falls through when a1(?) == a2(=0x64).
  The `beq` branch at 0x100134fc targets 0x10013544 and is always taken.
  The `beq` branch at 0x1001353c targets 0x100134e0, is taken when (v0(=ret(read_agpReg32)) & 0x1) == 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) != 0.
  The `beq` branch at 0x10013564 targets 0x100135d0, is taken when (v0(=ret(read_agpReg32)) & 0x1) == 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) != 0.
  The `bne` branch at 0x10013574 targets 0x10013590, is taken when a7(?) != t0(=0x64), and falls through when a7(?) == t0(=0x64).
  The `beq` branch at 0x10013588 targets 0x100135d0 and is always taken.
  The `bne` branch at 0x100135c8 targets 0x1001356c, is taken when (v0(=ret(read_agpReg32)) & 0x1) != 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) == 0.
  The `bne` branch at 0x100135e8 targets 0x100134bc, is taken when t8(?) < t9(=a0) (signed), and falls through when t8(?) >= t9(=a0) (signed).
  The return at 0x10013600 has v0 = one of 0x0, ?.

- `waitforvblankst` in `usr/diags/SG/bin/olsgsys` at 0x10013608 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10013608-0x10013794 (396 bytes).
  It occupies 396 bytes.
  The `jal` at 0x10013654 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x10013698 calls sginap with a0=0x1, a1=?, a2=0x64, a3=?.
  The `jal` at 0x100136b8 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x100136e0 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x10013724 calls sginap with a0=0x1, a1=?, a2=?, a3=?.
  The `jal` at 0x10013744 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a1 at entry (arg1), a2=?, a3=?.
  The `beq` branch at 0x10013640 targets 0x1001377c, is taken when at(=0x0) >= v0(=a0) (signed), and falls through when at(=0x0) < v0(=a0) (signed).
  The `beq` branch at 0x10013664 targets 0x100136d0, is taken when (v0(=ret(read_agpReg32)) & 0x1) == 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) != 0.
  The `bne` branch at 0x10013674 targets 0x10013690, is taken when a1(?) != a2(=0x64), and falls through when a1(?) == a2(=0x64).
  The `beq` branch at 0x10013688 targets 0x100136d0 and is always taken.
  The `bne` branch at 0x100136c8 targets 0x1001366c, is taken when (v0(=ret(read_agpReg32)) & 0x1) != 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) == 0.
  The `bne` branch at 0x100136f0 targets 0x1001375c, is taken when (v0(=ret(read_agpReg32)) & 0x1) != 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) == 0.
  The `bne` branch at 0x10013700 targets 0x1001371c, is taken when a7(?) != t0(=0x64), and falls through when a7(?) == t0(=0x64).
  The `beq` branch at 0x10013714 targets 0x1001375c and is always taken.
  The `beq` branch at 0x10013754 targets 0x100136f8, is taken when (v0(=ret(read_agpReg32)) & 0x1) == 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) != 0.
  The `bne` branch at 0x10013774 targets 0x10013648, is taken when t8(?) < t9(=a0) (signed), and falls through when t8(?) >= t9(=a0) (signed).
  The return at 0x1001378c has v0 = one of 0x0, ?.

- `collect_verticals` in `usr/diags/SG/bin/olsgsys` at 0x10013794 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10013794-0x10013a44 (688 bytes).
  It occupies 688 bytes.
  4 such `sw` accesses store 4 bytes to sym(val_scratch) +0x0, including `sw` at 0x10013858, `sw` at 0x10013884, `sw` at 0x100138b0.
  4 such `lw` accesses load 4 bytes from sym(val_scratch) +0x0, including `lw` at 0x10013870, `lw` at 0x1001389c, `lw` at 0x100138c8.
  The `jal` at 0x100137c4 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027c20, a2=0x1f6a4, a3=a3 at entry (arg3).
  The `jal` at 0x100137d8 calls read_agpReg32 [0x1001598c] with a0=0x50, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jal` at 0x100137f4 calls read_agpReg32 [0x1001598c] with a0=0xd18, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jal` at 0x1001380c calls read_agpReg32 [0x1001598c] with a0=0xd1c, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jal` at 0x1001382c calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10027c40, a2=ret(read_agpReg32), a3=ret(read_agpReg32).
  The `jal` at 0x10013840 calls read_agpReg32 [0x1001598c] with a0=0x58, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jal` at 0x100138e8 calls write_agpReg32 [0x1001558c] with a0=0x58, a1=?, a2=a0 at entry (arg0), a3=([sym(val_scratch)] << 0x14), a4=sym(val_scratch), a6=([sym(val_scratch)] << 0x13), a7=sym(val_scratch).
  The `jal` at 0x10013900 calls read_agpReg32 [0x1001598c] with a0=0xd18, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jal` at 0x10013918 calls read_agpReg32 [0x1001598c] with a0=0xd1c, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jal` at 0x10013938 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10027c40, a2=ret(read_agpReg32), a3=ret(read_agpReg32).
  The `jal` at 0x10013980 calls write_agpReg32 [0x1001558c] with a0=0x58, a1=?, a2=a0 at entry (arg0), a3=([sym(val_scratch)] << 0x13), a4=0x1, a5=sym(val_scratch).
  The `jal` at 0x100139ac calls waitforvblankst [0x10013608] with a0=0x3, a1=a0 at entry (arg0), a2=?, a3=?, a7=(ret(write_agpReg32) + ret(write_agpReg32)).
  The `jal` at 0x100139d4 calls waitforvblankst [0x10013608] with a0=0x2, a1=a0 at entry (arg0), a2=?, a3=?, a7=(ret(write_agpReg32) + ret(write_agpReg32)).
  The `jal` at 0x100139f4 calls waitforvblank [0x1001347c] with a0=0x1, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jal` at 0x10013a18 calls write_agpReg32 [0x1001558c] with a0=0x58, a1=ret(read_agpReg32), a2=a0 at entry (arg0), a3=?.
  The `beq` branch at 0x10013998 targets 0x100139c8, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x100139c0 targets 0x100139e8 and is always taken.
  The return at 0x10013a3c has v0 = ((((ret(write_agpReg32) + ret(write_agpReg32)) + ret(waitforvblankst)) + ret(waitforvblank)) + ret(write_agpReg32)).

- `collect_dac_crc` in `usr/diags/SG/bin/olsgsys` at 0x10013a44 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10013a44-0x1001400c (1480 bytes).
  It occupies 1480 bytes.
  7 such `sw` accesses store 4 bytes to sym(val_scratch) +0x0, including `sw` at 0x10013b0c, `sw` at 0x10013b38, `sw` at 0x10013b64.
  7 such `lw` accesses load 4 bytes from sym(val_scratch) +0x0, including `lw` at 0x10013b24, `lw` at 0x10013b50, `lw` at 0x10013b7c.
  The `sw` at 0x10013fa0 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `sw` at 0x10013fac stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `jal` at 0x10013a78 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027c20, a2=0x1f3f4, a3=a3 at entry (arg3).
  The `jal` at 0x10013a8c calls read_agpReg32 [0x1001598c] with a0=0x50, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10013aa8 calls read_agpReg32 [0x1001598c] with a0=0xd18, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10013ac0 calls read_agpReg32 [0x1001598c] with a0=0xd1c, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10013ae0 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10027c40, a2=ret(read_agpReg32), a3=ret(read_agpReg32).
  The `jal` at 0x10013af4 calls read_agpReg32 [0x1001598c] with a0=0x58, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10013b9c calls write_agpReg32 [0x1001558c] with a0=0x58, a1=?, a2=a1 at entry (arg1), a3=([sym(val_scratch)] << 0x14), a4=sym(val_scratch), a6=([sym(val_scratch)] << 0x13), a7=sym(val_scratch).
  The `jal` at 0x10013bb4 calls read_agpReg32 [0x1001598c] with a0=0xd18, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10013bcc calls read_agpReg32 [0x1001598c] with a0=0xd1c, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10013bec calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10027c40, a2=ret(read_agpReg32), a3=ret(read_agpReg32).
  The `jal` at 0x10013c40 calls write_agpReg32 [0x1001558c] with a0=0x58, a1=?, a2=a1 at entry (arg1), a3=?, a4=([sym(val_scratch)] << 0x13), a5=0x1, a6=sym(val_scratch).
  The `jal` at 0x10013c6c calls waitforvblankst [0x10013608] with a0=0x3, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10013c94 calls waitforvblankst [0x10013608] with a0=0x2, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10013cb4 calls waitforvblank [0x1001347c] with a0=0x1, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10013cd4 calls read_agpReg32 [0x1001598c] with a0=0xd18, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10013cec calls read_agpReg32 [0x1001598c] with a0=0xd1c, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10013d10 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10027c70, a2=ret(read_agpReg32), a3=ret(read_agpReg32).
  The `jal` at 0x10013d48 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10027c90, a2=?, a3=?.
  The `jal` at 0x10013d98 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10027cb8, a2=?, a3=?, a5=0x3ff0000.
  The `jal` at 0x10013e2c calls write_agpReg32 [0x1001558c] with a0=0x58, a1=?, a2=a1 at entry (arg1), a3=?, a5=0x3f0000, a7=([sym(val_scratch)] << 0x14).
  The `jal` at 0x10013e80 calls write_agpReg32 [0x1001558c] with a0=0x58, a1=?, a2=a1 at entry (arg1), a3=?.
  The `jal` at 0x10013ea0 calls waitforvblankst [0x10013608] with a0=0x3, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10013ec0 calls waitforvblank [0x1001347c] with a0=0x1, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10013ee0 calls read_agpReg32 [0x1001598c] with a0=0xd18, a1=a1 at entry (arg1), a2=(((((((ret(write_agpReg32) + ret(write_agpReg32)) + ret(waitforvblankst)) + ret(waitforvblank)) + ret(write_agpReg32)) + ret(write_agpReg32)) + ret(waitforvblankst)) + ret(waitforvblank)), a3=?.
  The `jal` at 0x10013ef8 calls read_agpReg32 [0x1001598c] with a0=0xd1c, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10013f80 calls write_agpReg32 [0x1001558c] with a0=0x58, a1=ret(read_agpReg32), a2=a1 at entry (arg1), a3=?.
  The `jal` at 0x10013fc0 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027cc8, a2=?, a3=a0 at entry (arg0), a5=a0+4.
  The `beq` branch at 0x10013c58 targets 0x10013c88, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x10013c80 targets 0x10013ca8 and is always taken.
  The `beq` branch at 0x10013db8 targets 0x10013f70, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x10013fcc targets 0x10013fe4, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x10013fdc targets 0x10013ff4 and is always taken.
  The `beq` branch at 0x10013fe8 targets 0x10013ff4 and is always taken.
  The return at 0x10014004 has v0 = one of -0x1, 0x0.
  The instructions from 0x10013ff0 to 0x10013ff0 are not reached by any path from the entry, and their branches are not listed.

- `collect_tvdac_crc` in `usr/diags/SG/bin/olsgsys` at 0x1001400c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001400c-0x100144d4 (1224 bytes).
  It occupies 1224 bytes.
  7 such `sw` accesses store 4 bytes to sym(val_scratch) +0x0, including `sw` at 0x10014088, `sw` at 0x100140b4, `sw` at 0x100140e0.
  7 such `lw` accesses load 4 bytes from sym(val_scratch) +0x0, including `lw` at 0x100140a0, `lw` at 0x100140cc, `lw` at 0x100140f8.
  The `sw` at 0x10014450 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `sw` at 0x1001445c stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `jal` at 0x10014040 calls dl_output_dbug [0x10019758] with a0=0x6, a1=0x10027cf8, a2=0x1ee2c, a3=a3 at entry (arg3).
  The `jal` at 0x10014054 calls read_agpReg32 [0x1001598c] with a0=0x50, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10014070 calls read_agpReg32 [0x1001598c] with a0=0x7c, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10014118 calls write_agpReg32 [0x1001558c] with a0=0x7c, a1=?, a2=a1 at entry (arg1), a3=?, a5=([sym(val_scratch)] << 0x14), a6=sym(val_scratch).
  The `jal` at 0x10014164 calls write_agpReg32 [0x1001558c] with a0=0x7c, a1=?, a2=a1 at entry (arg1), a3=?.
  The `jal` at 0x10014190 calls waitforvblankst [0x10013608] with a0=0x3, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x100141b8 calls waitforvblankst [0x10013608] with a0=0x2, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x100141d8 calls waitforvblank [0x1001347c] with a0=0x1, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x100141f8 calls read_agpReg32 [0x1001598c] with a0=0xd70, a1=a1 at entry (arg1), a2=?, a3=?, a4=(((ret(write_agpReg32) + ret(write_agpReg32)) + ret(waitforvblankst)) + ret(waitforvblank)).
  The `jal` at 0x10014210 calls read_agpReg32 [0x1001598c] with a0=0xd74, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x100142dc calls write_agpReg32 [0x1001558c] with a0=0x7c, a1=?, a2=a1 at entry (arg1), a3=?, a7=0x3f0000.
  The `jal` at 0x10014330 calls write_agpReg32 [0x1001558c] with a0=0x7c, a1=?, a2=a1 at entry (arg1), a3=?.
  The `jal` at 0x10014350 calls waitforvblankst [0x10013608] with a0=0x3, a1=a1 at entry (arg1), a2=?, a3=(((((ret(write_agpReg32) + ret(write_agpReg32)) + ret(waitforvblankst)) + ret(waitforvblank)) + ret(write_agpReg32)) + ret(write_agpReg32)).
  The `jal` at 0x10014370 calls waitforvblank [0x1001347c] with a0=0x1, a1=a1 at entry (arg1), a2=?, a3=?, a4=((((((ret(write_agpReg32) + ret(write_agpReg32)) + ret(waitforvblankst)) + ret(waitforvblank)) + ret(write_agpReg32)) + ret(write_agpReg32)) + ret(waitforvblankst)).
  The `jal` at 0x10014390 calls read_agpReg32 [0x1001598c] with a0=0xd70, a1=a1 at entry (arg1), a2=?, a3=?, a5=(((((((ret(write_agpReg32) + ret(write_agpReg32)) + ret(waitforvblankst)) + ret(waitforvblank)) + ret(write_agpReg32)) + ret(write_agpReg32)) + ret(waitforvblankst)) + ret(waitforvblank)).
  The `jal` at 0x100143a8 calls read_agpReg32 [0x1001598c] with a0=0xd74, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10014430 calls write_agpReg32 [0x1001558c] with a0=0x7c, a1=ret(read_agpReg32), a2=a1 at entry (arg1), a3=?.
  The `jal` at 0x10014470 calls dl_output_dbug [0x10019758] with a0=0x6, a1=0x10027d18, a2=?, a3=a0 at entry (arg0), a5=a0+4.
  The `jal` at 0x10014494 calls dl_output_error [0x10018b7c] with a0=0x0, a1=0x10027d48, a2=?, a3=?.
  The `beq` branch at 0x1001417c targets 0x100141ac, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x100141a4 targets 0x100141cc and is always taken.
  The `beq` branch at 0x10014268 targets 0x10014420, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x1001447c targets 0x100144ac, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x100144a4 targets 0x100144bc and is always taken.
  The `beq` branch at 0x100144b0 targets 0x100144bc and is always taken.
  The return at 0x100144cc has v0 = one of -0x1, 0x0.
  The instructions from 0x100144b8 to 0x100144b8 are not reached by any path from the entry, and their branches are not listed.

- `findcrtcstatusreg` in `usr/diags/SG/bin/olsgsys` at 0x100144d4 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100144d4-0x10014644 (368 bytes).
  It occupies 368 bytes.
  The `jal` at 0x10014530 calls read_agpReg32 [0x1001598c] with a0=0x284, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10014558 calls read_agpReg32 [0x1001598c] with a0=0x288, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x100145e8 calls read_agpReg32 [0x1001598c] with a0=0xd64, a1=a1 at entry (arg1), a2=?, a3=?, a6=0x2.
  The `beq` branch at 0x10014504 targets 0x10014524, is taken when at(=a0) == v0(=0x1), and falls through when at(=a0) != v0(=0x1).
  The `beq` branch at 0x10014514 targets 0x1001454c, is taken when a0 == a1(=0x4), and falls through when a0 != a1(=0x4).
  The `beq` branch at 0x1001451c targets 0x10014574 and is always taken.
  The `beq` branch at 0x10014544 targets 0x10014574 and is always taken.
  The `beq` branch at 0x1001456c targets 0x10014574 and is always taken.
  The `beq` branch at 0x1001457c targets 0x100145bc, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x1001458c targets 0x100145bc, is taken when a5(?) == a6(=0x2), and falls through when a5(?) != a6(=0x2).
  The `beq` branch at 0x1001459c targets 0x100145cc, is taken when a7(?) == t0(=0x1), and falls through when a7(?) != t0(=0x1).
  The `beq` branch at 0x100145ac targets 0x100145dc, is taken when t1(?) == t2(=0x3), and falls through when t1(?) != t2(=0x3).
  The `beq` branch at 0x100145b4 targets 0x1001462c and is always taken.
  The `beq` branch at 0x100145c4 targets 0x1001462c and is always taken.
  The `beq` branch at 0x100145d4 targets 0x1001462c and is always taken.
  The `bne` branch at 0x10014604 targets 0x1001461c, is taken when t9(?) != ra(=0x1), and falls through when t9(?) == ra(=0x1).
  The `beq` branch at 0x10014614 targets 0x10014624 and is always taken.
  The `beq` branch at 0x10014624 targets 0x1001462c and is always taken.
  The return at 0x1001463c has v0 = one of ?, 0x5c, 0x3fc.

- `getlcdhwcontcrc` in `usr/diags/SG/bin/olsgsys` at 0x10014644 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10014644-0x10014e4c (2056 bytes).
  It occupies 2056 bytes.
  The `jal` at 0x1001467c calls read_agpReg32 [0x1001598c] with a0=0x58, a1=a2 at entry (arg2), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x100146a8 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027d68, a2=?, a3=?.
  The `jal` at 0x100146bc calls read_agpReg32 [0x1001598c] with a0=0x2d0, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x100146d4 calls read_agpReg32 [0x1001598c] with a0=0x2d4, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014730 calls write_agpReg32 [0x1001558c] with a0=0x2d4, a1=?, a2=a2 at entry (arg2), a3=0x100000, a4=0x2d4, a5=0x7fffffff, a6=0x2cc, a7=0x40.
  The `jal` at 0x10014744 calls read_agpReg32 [0x1001598c] with a0=0x288, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014764 calls write_agpReg32 [0x1001558c] with a0=0x288, a1=?, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10014794 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027d98, a2=a1 at entry (arg1), a3=0x3.
  The `jal` at 0x100147a8 calls read_agpReg32 [0x1001598c] with a0=0x2d0, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x100147c0 calls read_agpReg32 [0x1001598c] with a0=0x2d4, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014818 calls write_agpReg32 [0x1001558c] with a0=0x2d4, a1=(ret(read_agpReg32) | 0x200000), a2=a2 at entry (arg2), a3=0x100000, a4=0x2d4, a5=0x7fffffff, a6=0x2cc, a7=0x40.
  The `jal` at 0x1001482c calls read_agpReg32 [0x1001598c] with a0=0x288, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x1001484c calls write_agpReg32 [0x1001558c] with a0=0x288, a1=?, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x1001487c calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027dc8, a2=a1 at entry (arg1), a3=0x4.
  The `jal` at 0x10014890 calls read_agpReg32 [0x1001598c] with a0=0x288, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x100148b4 calls write_agpReg32 [0x1001558c] with a0=0x288, a1=(ret(read_agpReg32) | 0x1000000), a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x100148fc calls read_agpReg32 [0x1001598c] with a0=?, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014914 calls read_agpReg32 [0x1001598c] with a0=?, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x1001493c calls write_agpReg32 [0x1001558c] with a0=?, a1=?, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10014954 calls write_agpReg32 [0x1001558c] with a0=?, a1=?, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10014974 calls write_agpReg32 [0x1001558c] with a0=0x58, a1=(ret(read_agpReg32) | 0x40000), a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10014988 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x100149b0 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x100149d8 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x100149fc calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014a20 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014a48 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014a7c calls write_agpReg32 [0x1001558c] with a0=?, a1=?, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10014aa0 calls write_agpReg32 [0x1001558c] with a0=?, a1=?, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10014ac0 calls write_agpReg32 [0x1001558c] with a0=?, a1=?, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10014ad4 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014af8 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014b1c calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014b44 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014b6c calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014b90 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014bb4 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014bdc calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014c1c calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014c40 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014c64 calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014c8c calls read_agpReg32 [0x1001598c] with a0=0x5c, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014cd4 calls read_agpReg32 [0x1001598c] with a0=?, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10014cfc calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10027df8, a2=?, a3=?.
  The `jal` at 0x10014d14 calls write_agpReg32 [0x1001558c] with a0=?, a1=ret(read_agpReg32), a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10014d2c calls write_agpReg32 [0x1001558c] with a0=?, a1=ret(read_agpReg32), a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10014d54 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10027e18, a2=?, a3=a1 at entry (arg1), a4=0x2.
  The `jal` at 0x10014d6c calls write_agpReg32 [0x1001558c] with a0=0x2d0, a1=?, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10014d84 calls write_agpReg32 [0x1001558c] with a0=0x2d4, a1=?, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10014db4 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10027e48, a2=a1 at entry (arg1), a3=0x3, a4=0x2.
  The `jal` at 0x10014dcc calls write_agpReg32 [0x1001558c] with a0=0x2d0, a1=?, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10014de4 calls write_agpReg32 [0x1001558c] with a0=0x2d4, a1=?, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10014e14 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10027e78, a2=a1 at entry (arg1), a3=0x4, a4=0x2.
  The `jal` at 0x10014e2c calls write_agpReg32 [0x1001558c] with a0=0x288, a1=?, a2=a2 at entry (arg2), a3=?.
  The `bne` branch at 0x10014690 targets 0x10014774, is taken when v1(=a1) != a0(=0x2), and falls through when v1(=a1) == a0(=0x2).
  The `beq` branch at 0x1001476c targets 0x100148f0 and is always taken.
  The `bne` branch at 0x1001477c targets 0x1001485c, is taken when a2(=a1) != a3(=0x3), and falls through when a2(=a1) == a3(=0x3).
  The `beq` branch at 0x10014854 targets 0x100148f0 and is always taken.
  The `bne` branch at 0x10014864 targets 0x100148f0, is taken when a2(=a1) != a3(=0x4), and falls through when a2(=a1) == a3(=0x4).
  The `bne` branch at 0x1001499c targets 0x100149cc, is taken when a3(?) != a4(=0x1), and falls through when a3(?) == a4(=0x1).
  The `beq` branch at 0x100149c4 targets 0x100149a4, is taken when a5(?) == a6(=0x1), and falls through when a5(?) != a6(=0x1).
  The `bne` branch at 0x100149e8 targets 0x10014a14, is taken when (v0(=ret(read_agpReg32)) & 0x1) != 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) == 0.
  The `beq` branch at 0x10014a0c targets 0x100149f0, is taken when (v0(=ret(read_agpReg32)) & 0x1) == 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) != 0.
  The `bne` branch at 0x10014a34 targets 0x10014a64, is taken when t1(?) != t2(=0x1), and falls through when t1(?) == t2(=0x1).
  The `beq` branch at 0x10014a5c targets 0x10014a3c, is taken when t3(?) == t8(=0x1), and falls through when t3(?) != t8(=0x1).
  The `bne` branch at 0x10014ae4 targets 0x10014b10, is taken when (v0(=ret(read_agpReg32)) & 0x1) != 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) == 0.
  The `beq` branch at 0x10014b08 targets 0x10014aec, is taken when (v0(=ret(read_agpReg32)) & 0x1) == 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) != 0.
  The `bne` branch at 0x10014b30 targets 0x10014b60, is taken when a5(?) != a6(=0x1), and falls through when a5(?) == a6(=0x1).
  The `beq` branch at 0x10014b58 targets 0x10014b38, is taken when a7(?) == t0(=0x1), and falls through when a7(?) != t0(=0x1).
  The `bne` branch at 0x10014b7c targets 0x10014ba8, is taken when (v0(=ret(read_agpReg32)) & 0x1) != 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) == 0.
  The `beq` branch at 0x10014ba0 targets 0x10014b84, is taken when (v0(=ret(read_agpReg32)) & 0x1) == 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) != 0.
  The `bne` branch at 0x10014bc8 targets 0x10014bf8, is taken when t3(?) != t8(=0x1), and falls through when t3(?) == t8(=0x1).
  The `beq` branch at 0x10014bf0 targets 0x10014bd0, is taken when t9(?) == ra(=0x1), and falls through when t9(?) != ra(=0x1).
  The `beq` branch at 0x10014c08 targets 0x10014cc8, is taken when at(=0x0) >= v0(=a0) (signed), and falls through when at(=0x0) < v0(=a0) (signed).
  The `bne` branch at 0x10014c2c targets 0x10014c58, is taken when (v0(=ret(read_agpReg32)) & 0x1) != 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) == 0.
  The `beq` branch at 0x10014c50 targets 0x10014c34, is taken when (v0(=ret(read_agpReg32)) & 0x1) == 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) != 0.
  The `bne` branch at 0x10014c78 targets 0x10014ca8, is taken when a1(?) != a2(=0x1), and falls through when a1(?) == a2(=0x1).
  The `beq` branch at 0x10014ca0 targets 0x10014c80, is taken when a3(?) == a4(=0x1), and falls through when a3(?) != a4(=0x1).
  The `bne` branch at 0x10014cc0 targets 0x10014c10, is taken when a5(?) < a6(=a0) (signed), and falls through when a5(?) >= a6(=a0) (signed).
  The `bne` branch at 0x10014d3c targets 0x10014d94, is taken when a3(=a1) != a4(=0x2), and falls through when a3(=a1) == a4(=0x2).
  The `beq` branch at 0x10014d8c targets 0x10014e34 and is always taken.
  The `bne` branch at 0x10014d9c targets 0x10014df4, is taken when a2(=a1) != a3(=0x3), and falls through when a2(=a1) == a3(=0x3).
  The `beq` branch at 0x10014dec targets 0x10014e34 and is always taken.
  The `bne` branch at 0x10014dfc targets 0x10014e34, is taken when a2(=a1) != a3(=0x4), and falls through when a2(=a1) == a3(=0x4).
  The return at 0x10014e44 has v0 = ?.

- `collect_lcd_crc` in `usr/diags/SG/bin/olsgsys` at 0x10014e4c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10014e4c-0x1001558c (1856 bytes).
  It occupies 1856 bytes.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x0, including `sw` at 0x10014f58, `sw` at 0x10015538.
  The `jal` at 0x10014e88 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027ea0, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=0x1dfec.
  The `jal` at 0x10014e9c calls findcrtcstatusreg [0x100144d4] with a0=a1 at entry (arg1), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x10014ec4 calls read_agpReg32 [0x1001598c] with a0=0x284, a1=a3 at entry (arg3), a2=?, a3=?, a5=a1 at entry (arg1), a6=0x1.
  The `jal` at 0x10014ee0 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027ec0, a2=?, a3=?.
  The `jal` at 0x10014f34 calls dl_output_dbug [0x10019758] with a0=0x8, a1=0x10027ed8, a2=?, a3=?, a5=a1 at entry (arg1), a6=0x1.
  The `jal` at 0x10014f4c calls getlcdhwcontcrc [0x10014644] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a3 at entry (arg3), a3=?.
  The `jal` at 0x10014f74 calls read_agpReg32 [0x1001598c] with a0=0x294, a1=a3 at entry (arg3), a2=0x40000000, a3=0x294, a4=0x3fffffff, a5=0x2a0, a6=0x40, a7=0x284.
  The `jal` at 0x10014f8c calls read_agpReg32 [0x1001598c] with a0=0x284, a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x10014fb4 calls write_agpReg32 [0x1001558c] with a0=0x294, a1=?, a2=a3 at entry (arg3), a3=?.
  The `jal` at 0x10014fcc calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x10014ff4 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x1001501c calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x10015040 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x10015064 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x1001508c calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x100150c0 calls write_agpReg32 [0x1001558c] with a0=0x284, a1=(0x40 | ret(read_agpReg32)), a2=a3 at entry (arg3), a3=?.
  The `jal` at 0x100150f0 calls write_agpReg32 [0x1001558c] with a0=0x284, a1=?, a2=a3 at entry (arg3), a3=(ret(write_agpReg32) + ret(write_agpReg32)).
  The `jal` at 0x1001512c calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x10015150 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x10015174 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x1001519c calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x100151f0 calls write_agpReg32 [0x1001558c] with a0=0x294, a1=(0x40000000 | ret(read_agpReg32)), a2=a3 at entry (arg3), a3=?.
  The `jal` at 0x10015210 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=(((ret(write_agpReg32) + ret(write_agpReg32)) + ret(write_agpReg32)) + ret(write_agpReg32)).
  The `jal` at 0x10015234 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x10015258 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x10015280 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x100152a8 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x100152cc calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x100152f0 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x10015318 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x1001534c calls write_agpReg32 [0x1001558c] with a0=0x294, a1=(0x40000000 | ret(read_agpReg32)), a2=a3 at entry (arg3), a3=?.
  The `jal` at 0x1001536c calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=((((ret(write_agpReg32) + ret(write_agpReg32)) + ret(write_agpReg32)) + ret(write_agpReg32)) + ret(write_agpReg32)).
  The `jal` at 0x10015390 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x100153b4 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x100153dc calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x10015404 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x10015428 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x1001544c calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x10015474 calls read_agpReg32 [0x1001598c] with a0=ret(findcrtcstatusreg), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x1001549c calls read_agpReg32 [0x1001598c] with a0=0x2a0, a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x100154c4 calls write_agpReg32 [0x1001558c] with a0=0x284, a1=ret(read_agpReg32), a2=a3 at entry (arg3), a3=?.
  The `jal` at 0x100154e8 calls write_agpReg32 [0x1001558c] with a0=0x294, a1=ret(read_agpReg32), a2=a3 at entry (arg3), a3=?.
  The `jal` at 0x1001551c calls write_agpReg32 [0x1001558c] with a0=0x284, a1=ret(read_agpReg32), a2=a3 at entry (arg3), a3=((((((ret(write_agpReg32) + ret(write_agpReg32)) + ret(write_agpReg32)) + ret(write_agpReg32)) + ret(write_agpReg32)) + ret(write_agpReg32)) + ret(write_agpReg32)).
  The `jal` at 0x10015558 calls dl_output_error [0x10018b7c] with a0=0x0, a1=0x10027ef0, a2=?, a3=?, a7=a2 at entry (arg2).
  The `bne` branch at 0x10014eb0 targets 0x10014f24, is taken when a5(=a1) != a6(=0x1), and falls through when a5(=a1) == a6(=0x1).
  The `beq` branch at 0x10014f1c targets 0x10014f68 and is always taken.
  The `beq` branch at 0x10014f60 targets 0x10015574 and is always taken.
  The `bne` branch at 0x10014fe0 targets 0x10015010, is taken when a3(?) != a4(=0x1), and falls through when a3(?) == a4(=0x1).
  The `beq` branch at 0x10015008 targets 0x10014fe8, is taken when a5(?) == a6(=0x1), and falls through when a5(?) != a6(=0x1).
  The `bne` branch at 0x1001502c targets 0x10015058, is taken when (v0(=ret(read_agpReg32)) & 0x1) != 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) == 0.
  The `beq` branch at 0x10015050 targets 0x10015034, is taken when (v0(=ret(read_agpReg32)) & 0x1) == 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) != 0.
  The `bne` branch at 0x10015078 targets 0x100150a8, is taken when t1(?) != t2(=0x1), and falls through when t1(?) == t2(=0x1).
  The `beq` branch at 0x100150a0 targets 0x10015080, is taken when t3(?) == t8(=0x1), and falls through when t3(?) != t8(=0x1).
  The `beq` branch at 0x10015118 targets 0x100151d8, is taken when a4(=0x1) >= a5(=a0) (signed), and falls through when a4(=0x1) < a5(=a0) (signed).
  The `bne` branch at 0x1001513c targets 0x10015168, is taken when (v0(=ret(read_agpReg32)) & 0x1) != 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) == 0.
  The `beq` branch at 0x10015160 targets 0x10015144, is taken when (v0(=ret(read_agpReg32)) & 0x1) == 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) != 0.
  The `bne` branch at 0x10015188 targets 0x100151b8, is taken when t2(?) != t3(=0x1), and falls through when t2(?) == t3(=0x1).
  The `beq` branch at 0x100151b0 targets 0x10015190, is taken when t8(?) == t9(=0x1), and falls through when t8(?) != t9(=0x1).
  The `bne` branch at 0x100151d0 targets 0x10015120, is taken when ra(?) < at(=a0) (signed), and falls through when ra(?) >= at(=a0) (signed).
  The `bne` branch at 0x10015220 targets 0x1001524c, is taken when (v0(=ret(read_agpReg32)) & 0x1) != 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) == 0.
  The `beq` branch at 0x10015244 targets 0x10015228, is taken when (v0(=ret(read_agpReg32)) & 0x1) == 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) != 0.
  The `bne` branch at 0x1001526c targets 0x1001529c, is taken when a6(?) != a7(=0x1), and falls through when a6(?) == a7(=0x1).
  The `beq` branch at 0x10015294 targets 0x10015274, is taken when t0(?) == t1(=0x1), and falls through when t0(?) != t1(=0x1).
  The `bne` branch at 0x100152b8 targets 0x100152e4, is taken when (v0(=ret(read_agpReg32)) & 0x1) != 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) == 0.
  The `beq` branch at 0x100152dc targets 0x100152c0, is taken when (v0(=ret(read_agpReg32)) & 0x1) == 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) != 0.
  The `bne` branch at 0x10015304 targets 0x10015334, is taken when t8(?) != t9(=0x1), and falls through when t8(?) == t9(=0x1).
  The `beq` branch at 0x1001532c targets 0x1001530c, is taken when ra(?) == at(=0x1), and falls through when ra(?) != at(=0x1).
  The `bne` branch at 0x1001537c targets 0x100153a8, is taken when (v0(=ret(read_agpReg32)) & 0x1) != 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) == 0.
  The `beq` branch at 0x100153a0 targets 0x10015384, is taken when (v0(=ret(read_agpReg32)) & 0x1) == 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) != 0.
  The `bne` branch at 0x100153c8 targets 0x100153f8, is taken when a6(?) != a7(=0x1), and falls through when a6(?) == a7(=0x1).
  The `beq` branch at 0x100153f0 targets 0x100153d0, is taken when t0(?) == t1(=0x1), and falls through when t0(?) != t1(=0x1).
  The `bne` branch at 0x10015414 targets 0x10015440, is taken when (v0(=ret(read_agpReg32)) & 0x1) != 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) == 0.
  The `beq` branch at 0x10015438 targets 0x1001541c, is taken when (v0(=ret(read_agpReg32)) & 0x1) == 0, and falls through when (v0(=ret(read_agpReg32)) & 0x1) != 0.
  The `bne` branch at 0x10015460 targets 0x10015490, is taken when t8(?) != t9(=0x1), and falls through when t8(?) == t9(=0x1).
  The `beq` branch at 0x10015488 targets 0x10015468, is taken when ra(?) == at(=0x1), and falls through when ra(?) != at(=0x1).
  The `bne` branch at 0x10015504 targets 0x10015530, is taken when a1 != a2(=0x1), and falls through when a1 == a2(=0x1).
  The `beq` branch at 0x10015540 targets 0x10015570, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x10015568 targets 0x10015574 and is always taken.
  The return at 0x10015584 has v0 = one of -0x1, 0x0.

- `write_agpReg32` in `usr/diags/SG/bin/olsgsys` at 0x1001558c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001558c-0x1001565c (208 bytes).
  It occupies 208 bytes.
  2 such `lw` accesses load 4 bytes from (sym(agp_regs) + (a2 << 0x2)) +0x0, including `lw` at 0x100155c4, `lw` at 0x100155e4.
  The `sw` at 0x100155f0 stores 4 bytes to ([(sym(agp_regs) + (a2 << 0x2))] + a0) +0x0.
  The `jal` at 0x1001560c calls dl_output_dbug [0x10019758] with a0=0x9, a1=0x10027f08, a2=a0 at entry (arg0), a3=a1 at entry (arg1), a4=a0 at entry (arg0).
  The `jal` at 0x10015630 calls dl_output_error [0x10018b7c] with a0=0x1e, a1=0x10027f30, a2=a0 at entry (arg0), a3=a3 at entry (arg3).
  The `beq` branch at 0x100155c8 targets 0x1001561c, is taken when at(=[(sym(agp_regs) + (a2 << 0x2))]) == 0, and falls through when at(=[(sym(agp_regs) + (a2 << 0x2))]) != 0.
  The `beq` branch at 0x10015614 targets 0x10015644 and is always taken.
  The return at 0x10015654 has v0 = one of 0x0, 0x1.

- `write_agpReg16` in `usr/diags/SG/bin/olsgsys` at 0x1001565c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001565c-0x10015734 (216 bytes).
  It occupies 216 bytes.
  2 such `lw` accesses load 4 bytes from (sym(agp_regs) + (a2 << 0x2)) +0x0, including `lw` at 0x10015698, `lw` at 0x100156b8.
  The `sw` at 0x100156c8 stores 4 bytes to ?.
  The `jal` at 0x100156e4 calls dl_output_dbug [0x10019758] with a0=0x9, a1=0x10027f08, a2=a0 at entry (arg0), a3=?.
  The `jal` at 0x10015708 calls dl_output_error [0x10018b7c] with a0=0x1e, a1=0x10027f30, a2=a0 at entry (arg0), a3=0x1d7dc.
  The `beq` branch at 0x1001569c targets 0x100156f4, is taken when at(=[(sym(agp_regs) + (a2 << 0x2))]) == 0, and falls through when at(=[(sym(agp_regs) + (a2 << 0x2))]) != 0.
  The `beq` branch at 0x100156ec targets 0x1001571c and is always taken.
  The return at 0x1001572c has v0 = one of 0x0, 0x1.

- `write_agpReg8` in `usr/diags/SG/bin/olsgsys` at 0x10015734 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10015734-0x1001580c (216 bytes).
  It occupies 216 bytes.
  2 such `lw` accesses load 4 bytes from (sym(agp_regs) + (a2 << 0x2)) +0x0, including `lw` at 0x10015770, `lw` at 0x10015790.
  The `sw` at 0x100157a0 stores 4 bytes to ?.
  The `jal` at 0x100157bc calls dl_output_dbug [0x10019758] with a0=0x9, a1=0x10027f08, a2=a0 at entry (arg0), a3=?.
  The `jal` at 0x100157e0 calls dl_output_error [0x10018b7c] with a0=0x1e, a1=0x10027f30, a2=a0 at entry (arg0), a3=0x1d704.
  The `beq` branch at 0x10015774 targets 0x100157cc, is taken when at(=[(sym(agp_regs) + (a2 << 0x2))]) == 0, and falls through when at(=[(sym(agp_regs) + (a2 << 0x2))]) != 0.
  The `beq` branch at 0x100157c4 targets 0x100157f4 and is always taken.
  The return at 0x10015804 has v0 = one of 0x0, 0x1.

- `read_agpReg8` in `usr/diags/SG/bin/olsgsys` at 0x1001580c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001580c-0x100158cc (192 bytes).
  It occupies 192 bytes.
  2 such `lw` accesses load 4 bytes from (sym(agp_regs) + (a1 << 0x2)) +0x0, including `lw` at 0x1001583c, `lw` at 0x10015858.
  The `lbu` at 0x10015868 loads 1 byte from ?.
  The `jal` at 0x10015888 calls dl_output_dbug [0x10019758] with a0=0x9, a1=0x10027f50, a2=a0 at entry (arg0), a3=?.
  The `jal` at 0x100158ac calls dl_output_error [0x10018b7c] with a0=0x1e, a1=0x10027f30, a2=a0 at entry (arg0), a3=a3 at entry (arg3).
  The `beq` branch at 0x10015840 targets 0x10015898, is taken when at(=[(sym(agp_regs) + (a1 << 0x2))]) == 0, and falls through when at(=[(sym(agp_regs) + (a1 << 0x2))]) != 0.
  The `beq` branch at 0x10015890 targets 0x100158b4 and is always taken.
  The return at 0x100158c4 has v0 = ?.

- `read_agpReg16` in `usr/diags/SG/bin/olsgsys` at 0x100158cc (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100158cc-0x1001598c (192 bytes).
  It occupies 192 bytes.
  2 such `lw` accesses load 4 bytes from (sym(agp_regs) + (a1 << 0x2)) +0x0, including `lw` at 0x100158fc, `lw` at 0x10015918.
  The `lhu` at 0x10015928 loads 2 bytes from ?.
  The `jal` at 0x10015948 calls dl_output_dbug [0x10019758] with a0=0x9, a1=0x10027f50, a2=a0 at entry (arg0), a3=?.
  The `jal` at 0x1001596c calls dl_output_error [0x10018b7c] with a0=0x1e, a1=0x10027f30, a2=a0 at entry (arg0), a3=a3 at entry (arg3).
  The `beq` branch at 0x10015900 targets 0x10015958, is taken when at(=[(sym(agp_regs) + (a1 << 0x2))]) == 0, and falls through when at(=[(sym(agp_regs) + (a1 << 0x2))]) != 0.
  The `beq` branch at 0x10015950 targets 0x10015974 and is always taken.
  The return at 0x10015984 has v0 = ?.

- `read_agpReg32` in `usr/diags/SG/bin/olsgsys` at 0x1001598c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001598c-0x10015a48 (188 bytes).
  It occupies 188 bytes.
  2 such `lw` accesses load 4 bytes from (sym(agp_regs) + (a1 << 0x2)) +0x0, including `lw` at 0x100159bc, `lw` at 0x100159d8.
  The `lw` at 0x100159e4 loads 4 bytes from ([(sym(agp_regs) + (a1 << 0x2))] + a0) +0x0.
  The `jal` at 0x10015a04 calls dl_output_dbug [0x10019758] with a0=0x9, a1=0x10027f50, a2=a0 at entry (arg0), a3=[([(sym(agp_regs) + (a1 << 0x2))] + a0)].
  The `jal` at 0x10015a28 calls dl_output_error [0x10018b7c] with a0=0x1e, a1=0x10027f30, a2=a0 at entry (arg0), a3=a3 at entry (arg3).
  The `beq` branch at 0x100159c0 targets 0x10015a14, is taken when at(=[(sym(agp_regs) + (a1 << 0x2))]) == 0, and falls through when at(=[(sym(agp_regs) + (a1 << 0x2))]) != 0.
  The `beq` branch at 0x10015a0c targets 0x10015a30 and is always taken.
  The return at 0x10015a40 has v0 = ?.

- `LLCreate` in `usr/diags/SG/bin/olsgsys` at 0x10015a48 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10015a48-0x10015b30 (232 bytes).
  It occupies 232 bytes.
  The `sw` at 0x10015ad0 stores 4 bytes to ret(malloc) +0x0.
  3 such `lw` accesses load 4 bytes from ret(malloc) +0x0, including `lw` at 0x10015ad8, `lw` at 0x10015af4, `lw` at 0x10015b00.
  The `sw` at 0x10015adc stores 4 bytes to [ret(malloc)] +0x0.
  The `sw` at 0x10015af8 stores 4 bytes to [ret(malloc)] +0xc.
  The `sw` at 0x10015b04 stores 4 bytes to [ret(malloc)] +0x4.
  The `sw` at 0x10015b0c stores 4 bytes to ret(malloc) +0x4.
  The `jalr` at 0x10015a68 calls malloc with a0=0x8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10015a9c calls malloc with a0=0x10, a1=?, a2=?, a3=?.
  The `jalr` at 0x10015ae8 calls strdup with a0=0x1002b5ed, a1=ret(malloc), a2=[ret(malloc)], a3=ret(malloc), a4=ret(malloc).
  The `bne` branch at 0x10015a80 targets 0x10015a94, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x10015a8c targets 0x10015b18 and is always taken.
  The `bne` branch at 0x10015ab4 targets 0x10015ac8, is taken when a0(=ret(malloc)) != 0, and falls through when a0(=ret(malloc)) == 0.
  The `beq` branch at 0x10015ac0 targets 0x10015b18 and is always taken.
  The return at 0x10015b28 has v0 = one of 0x0, ret(malloc).

- `LLDestroy` in `usr/diags/SG/bin/olsgsys` at 0x10015b30 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10015b30-0x10015bdc (172 bytes).
  It occupies 172 bytes.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10015b64, `lw` at 0x10015b68, `lw` at 0x10015b78.
  The `jalr` at 0x10015b84 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10015b98 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10015bb4 calls free with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x10015b50 targets 0x10015bc8, is taken when at(=a0) == 0, and falls through when at(=a0) != 0.
  The `beq` branch at 0x10015b6c targets 0x10015b8c, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `bne` branch at 0x10015bc0 targets 0x10015b58, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The return at 0x10015bd4 has v0 = one of 0x1d308, ret(free).

- `LLInsert` in `usr/diags/SG/bin/olsgsys` at 0x10015bdc (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10015bdc-0x10015d18 (316 bytes).
  It occupies 316 bytes.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10015c14, `lw` at 0x10015c18, `lw` at 0x10015c40.
  The `sw` at 0x10015c8c stores 4 bytes to ret(malloc) +0x0.
  The `sw` at 0x10015c94 stores 4 bytes to ret(malloc) +0x4.
  3 such `lw` accesses load 4 bytes from ret(malloc) +0x0, including `lw` at 0x10015ca0, `lw` at 0x10015cbc, `lw` at 0x10015ccc.
  The `sw` at 0x10015ca4 stores 4 bytes to [ret(malloc)] +0x0.
  The `sw` at 0x10015cc0 stores 4 bytes to [ret(malloc)] +0xc.
  The `sw` at 0x10015cd0 stores 4 bytes to [ret(malloc)] +0x4.
  The `sw` at 0x10015cdc stores 4 bytes to ?.
  The `jalr` at 0x10015c24 calls strcmp with a0=?, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0x10015c64 calls malloc with a0=0x8, a1=?, a2=?, a3=?.
  The `jalr` at 0x10015c78 calls malloc with a0=0x10, a1=?, a2=?, a3=?.
  The `jal` at 0x10015cb0 calls strsave [0x10016100] with a0=a2 at entry (arg2), a1=?, a2=?, a3=?, a4=a1 at entry (arg1), a5=[ret(malloc)], a6=ret(malloc), a7=ret(malloc).
  The `beq` branch at 0x10015c08 targets 0x10015c50, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x10015c2c targets 0x10015c50, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `beq` branch at 0x10015c48 targets 0x10015c04 and is always taken.
  The `bne` branch at 0x10015c54 targets 0x10015cf0, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x10015ce8 targets 0x10015d00 and is always taken.
  The `beq` branch at 0x10015cf4 targets 0x10015d00 and is always taken.
  The return at 0x10015d10 has v0 = one of ret(malloc), 0x0.
  The instructions from 0x10015cfc to 0x10015cfc are not reached by any path from the entry, and their branches are not listed.

- `LLOrderedInsert` in `usr/diags/SG/bin/olsgsys` at 0x10015d18 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10015d18-0x10015ecc (436 bytes).
  It occupies 436 bytes.
  The `lw` at 0x10015d50 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0x10015d54 loads 4 bytes from [a0] +0x0.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10015d74, `lw` at 0x10015d8c, `lw` at 0x10015d90.
  The `sw` at 0x10015e38 stores 4 bytes to ret(malloc) +0x0.
  3 such `lw` accesses load 4 bytes from ret(malloc) +0x0, including `lw` at 0x10015e44, `lw` at 0x10015e60, `lw` at 0x10015e70.
  The `sw` at 0x10015e48 stores 4 bytes to [ret(malloc)] +0x0.
  The `sw` at 0x10015e64 stores 4 bytes to [ret(malloc)] +0xc.
  The `sw` at 0x10015e74 stores 4 bytes to [ret(malloc)] +0x4.
  The `sw` at 0x10015e80 stores 4 bytes to ret(malloc) +0x4.
  The `sw` at 0x10015e8c stores 4 bytes to ?.
  The `jalr` at 0x10015dd0 calls malloc with a0=0x8, a1=?, a2=?, a3=?.
  The `jalr` at 0x10015e04 calls malloc with a0=0x10, a1=?, a2=?, a3=?, a6=ret(malloc), a7=ret(malloc).
  The `jal` at 0x10015e54 calls strsave [0x10016100] with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `beq` branch at 0x10015d44 targets 0x10015da4, is taken when at(=a0) == 0, and falls through when at(=a0) != 0.
  The `beq` branch at 0x10015d60 targets 0x10015da4, is taken when v1(=[[a0]]) >= a0(=a1) (unsigned), and falls through when v1(=[[a0]]) < a0(=a1) (unsigned).
  The `beq` branch at 0x10015d80 targets 0x10015da4, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x10015d9c targets 0x10015d68, is taken when a3(?) < a4(=a1) (unsigned), and falls through when a3(?) >= a4(=a1) (unsigned).
  The `beq` branch at 0x10015da8 targets 0x10015dc8, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x10015dc0 targets 0x10015ea0, is taken when a5(?) == a6(=a1), and falls through when a5(?) != a6(=a1).
  The `bne` branch at 0x10015de8 targets 0x10015dfc, is taken when a6(=ret(malloc)) != 0, and falls through when a6(=ret(malloc)) == 0.
  The `beq` branch at 0x10015df4 targets 0x10015eb4 and is always taken.
  The `bne` branch at 0x10015e1c targets 0x10015e30, is taken when t0(=ret(malloc)) != 0, and falls through when t0(=ret(malloc)) == 0.
  The `beq` branch at 0x10015e28 targets 0x10015eb4 and is always taken.
  The `beq` branch at 0x10015e98 targets 0x10015eb4 and is always taken.
  The `beq` branch at 0x10015ea8 targets 0x10015eb4 and is always taken.
  The return at 0x10015ec4 has v0 = one of 0x0, ret(malloc), ?.
  The instructions from 0x10015eb0 to 0x10015eb0 are not reached by any path from the entry, and their branches are not listed.

- `LLDelete` in `usr/diags/SG/bin/olsgsys` at 0x10015ecc (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10015ecc-0x10015fbc (240 bytes).
  It occupies 240 bytes.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10015efc, `lw` at 0x10015f00, `lw` at 0x10015f28.
  The `sw` at 0x10015f50 stores 4 bytes to ?.
  The `jalr` at 0x10015f0c calls strcmp with a0=?, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x10015f6c calls printf with a0=0x10027f78, a1=?, a2=?, a3=?.
  The `jalr` at 0x10015f7c calls free with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x10015ef0 targets 0x10015f38, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x10015f14 targets 0x10015f38, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `beq` branch at 0x10015f30 targets 0x10015eec and is always taken.
  The `beq` branch at 0x10015f3c targets 0x10015f94, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x10015f8c targets 0x10015fa4 and is always taken.
  The `beq` branch at 0x10015f98 targets 0x10015fa4 and is always taken.
  The return at 0x10015fb4 has v0 = one of ?, 0x0.
  The instructions from 0x10015fa0 to 0x10015fa0 are not reached by any path from the entry, and their branches are not listed.

- `LLFind` in `usr/diags/SG/bin/olsgsys` at 0x10015fbc (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10015fbc-0x10016038 (124 bytes).
  It occupies 124 bytes.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10015fec, `lw` at 0x10015ff0, `lw` at 0x10016010.
  The `jalr` at 0x10015ffc calls strcmp with a0=?, a1=a1 at entry (arg1), a2=?, a3=?.
  The `beq` branch at 0x10015fe0 targets 0x10016020, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x10016004 targets 0x10016020, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `beq` branch at 0x10016018 targets 0x10015fdc and is always taken.
  The return at 0x10016030 has v0 = ?.

- `LLGetNext` in `usr/diags/SG/bin/olsgsys` at 0x10016038 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10016038-0x10016100 (200 bytes).
  It occupies 200 bytes.
  8 such `lw` accesses load 4 bytes from abs 0x1002bb38, including `lw` at 0x10016054, `lw` at 0x1001606c, `lw` at 0x1001607c.
  The `lw` at 0x10016064 loads 4 bytes from a0 (arg0 at entry) +0x4.
  2 such `sw` accesses store 4 bytes to abs 0x1002bb38, including `sw` at 0x10016068, `sw` at 0x1001609c.
  4 such `lw` accesses load 4 bytes from [0x1002bb38] +0x0, including `lw` at 0x10016070, `lw` at 0x10016080, `lw` at 0x100160b0.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0x10016078, `sw` at 0x100160b8.
  2 such `lw` accesses load 4 bytes from [[0x1002bb38]] +0xc, including `lw` at 0x10016084, `lw` at 0x100160d0.
  The `lw` at 0x10016098 loads 4 bytes from [0x1002bb38] +0x4.
  The `bne` branch at 0x10016058 targets 0x10016094, is taken when v0(=[0x1002bb38]) != 0, and falls through when v0(=[0x1002bb38]) == 0.
  The `beq` branch at 0x1001608c targets 0x100160ec and is always taken.
  The `beq` branch at 0x100160a4 targets 0x100160bc, is taken when a3(=[0x1002bb38]) == 0, and falls through when a3(=[0x1002bb38]) != 0.
  The `beq` branch at 0x100160c0 targets 0x100160e0, is taken when a6(=[0x1002bb38]) == 0, and falls through when a6(=[0x1002bb38]) != 0.
  The `beq` branch at 0x100160d8 targets 0x100160e4 and is always taken.
  The return at 0x100160f8 has v0 = one of [[[0x1002bb38]]+12], ?.

- `strsave` in `usr/diags/SG/bin/olsgsys` at 0x10016100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10016100-0x10016180 (128 bytes).
  It occupies 128 bytes.
  The `jalr` at 0x10016124 calls strlen with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10016134 calls malloc with a0=ret(strlen)+1, a1=?, a2=?, a3=?.
  The `jalr` at 0x10016160 calls strcpy with a0=ret(malloc), a1=a0 at entry (arg0), a2=?, a3=?.
  The `beq` branch at 0x1001614c targets 0x10016168, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The return at 0x10016178 has v0 = ret(malloc).

- `dl_output_init_env` in `usr/diags/SG/bin/olsgsys` at 0x10016180 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10016180-0x10016684 (1284 bytes).
  It occupies 1284 bytes.
  The `sw` at 0x100161d0 stores 4 bytes to abs 0x100362d0.
  The `sw` at 0x100161e0 stores 4 bytes to abs 0x100362d4.
  2 such `sw` accesses store 4 bytes to abs 0x100362dc, including `sw` at 0x100161ec, `sw` at 0x10016230.
  2 such `lw` accesses load 4 bytes from abs 0x100362dc, including `lw` at 0x10016200, `lw` at 0x10016254.
  The `sw` at 0x1001621c stores 4 bytes to abs 0x100362ec.
  The `sw` at 0x10016264 stores 4 bytes to abs 0x100362e4.
  The `sw` at 0x10016284 stores 4 bytes to abs 0x100362e8.
  The `lbu` at 0x1001628c loads 1 byte from a0 (arg0 at entry) +0x8.
  The `sb` at 0x100162ac stores 1 byte to abs 0x100362f0.
  The `lbu` at 0x100162b4 loads 1 byte from a0 (arg0 at entry) +0x9.
  The `sb` at 0x100162d0 stores 1 byte to abs 0x100362f1.
  The `lbu` at 0x100162d8 loads 1 byte from a0 (arg0 at entry) +0xa.
  The `sb` at 0x100162f4 stores 1 byte to abs 0x100362f2.
  The `lbu` at 0x100162fc loads 1 byte from a0 (arg0 at entry) +0xb.
  The `sb` at 0x10016318 stores 1 byte to abs 0x100362f3.
  The `lbu` at 0x10016320 loads 1 byte from a0 (arg0 at entry) +0xc.
  The `sb` at 0x10016340 stores 1 byte to abs 0x100362f4.
  The `lbu` at 0x10016344 loads 1 byte from a0 (arg0 at entry) +0xd.
  The `sb` at 0x10016360 stores 1 byte to abs 0x100362f5.
  The `lbu` at 0x10016364 loads 1 byte from a0 (arg0 at entry) +0xe.
  The `sb` at 0x10016380 stores 1 byte to abs 0x100362f6.
  The `lbu` at 0x10016384 loads 1 byte from a0 (arg0 at entry) +0xf.
  The `sb` at 0x1001639c stores 1 byte to abs 0x100362f7.
  The `lbu` at 0x100163a4 loads 1 byte from a0 (arg0 at entry) +0x10.
  The `sb` at 0x100163c0 stores 1 byte to abs 0x100362f8.
  The `lbu` at 0x100163c8 loads 1 byte from a0 (arg0 at entry) +0x11.
  The `sb` at 0x100163e8 stores 1 byte to abs 0x100362f9.
  The `lbu` at 0x100163ec loads 1 byte from a0 (arg0 at entry) +0x12.
  The `sb` at 0x10016404 stores 1 byte to abs 0x100362fa.
  The `lbu` at 0x1001640c loads 1 byte from a0 (arg0 at entry) +0x13.
  The `sb` at 0x1001642c stores 1 byte to abs 0x100362fd.
  The `lbu` at 0x10016434 loads 1 byte from a0 (arg0 at entry) +0x14.
  The `sb` at 0x10016454 stores 1 byte to abs 0x100362fb.
  The `lw` at 0x1001645c loads 4 bytes from a0 (arg0 at entry) +0x18.
  The `sw` at 0x10016474 stores 4 bytes to abs 0x10036304.
  The `sw` at 0x1001647c stores 4 bytes to abs 0x10036300.
  The `lw` at 0x10016484 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `sw` at 0x100164a8 stores 4 bytes to abs 0x10036308.
  The `lw` at 0x100164ac loads 4 bytes from a0 (arg0 at entry) +0x20.
  The `lw` at 0x100164c8 loads 4 bytes from a0 (arg0 at entry) +0x24.
  2 such `sw` accesses store 4 bytes to abs 0x1003631c, including `sw` at 0x100164d0, `sw` at 0x10016524.
  The `lw` at 0x100164ec loads 4 bytes from a0 (arg0 at entry) +0x28.
  2 such `sw` accesses store 4 bytes to abs 0x10036320, including `sw` at 0x100164f4, `sw` at 0x10016530.
  The `sb` at 0x10016534 stores 1 byte to abs 0x1003633f.
  The `sb` at 0x10016538 stores 1 byte to abs 0x1003633d.
  The `sb` at 0x1001653c stores 1 byte to abs 0x1003633c.
  The `sb` at 0x10016540 stores 1 byte to abs 0x100362fe.
  The `sw` at 0x10016544 stores 4 bytes to abs 0x10036318.
  The `sw` at 0x10016548 stores 4 bytes to abs 0x10036314.
  The `sw` at 0x10016554 stores 4 bytes to abs 0x10036310.
  The `sw` at 0x1001655c stores 4 bytes to abs 0x10036324.
  The `sb` at 0x10016578 stores 1 byte to abs 0x100362fc.
  2 such `sb` accesses store 1 byte to abs 0x1003630c, including `sb` at 0x100165ec, `sb` at 0x100165f8.
  2 such `sb` accesses store 1 byte to abs 0x1003630d, including `sb` at 0x100165f4, `sb` at 0x100165fc.
  The `sb` at 0x10016624 stores 1 byte to abs 0x1003630e.
  The `jal` at 0x100161b8 calls dl_hash_value [0x1001d48c] with a0=0x10027f90, a1=0x14, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x100161dc calls dl_hash_value [0x1001d48c] with a0=0x1002b5f0, a1=0x0, a2=?, a3=?.
  The `jal` at 0x100161f8 calls dl_hash_value [0x1001d48c] with a0=0x10027fa0, a1=0x0, a2=?, a3=?.
  The `jal` at 0x10016234 calls dl_hash_value [0x1001d48c] with a0=0x1002b5f8, a1=0x0, a2=?, a3=?, a4=0x9.
  The `jal` at 0x10016260 calls dl_hash_value [0x1001d48c] with a0=0x1002b600, a1=[0x100362dc], a2=?, a3=?.
  The `jal` at 0x1001629c calls dl_hash_value [0x1001d48c] with a0=0x10027fb0, a1=?, a2=?, a3=?.
  The `jal` at 0x100162c0 calls dl_hash_value [0x1001d48c] with a0=0x1002b608, a1=?, a2=?, a3=?.
  The `jal` at 0x100162e4 calls dl_hash_value [0x1001d48c] with a0=0x1002b610, a1=?, a2=0x10030000, a3=?.
  The `jal` at 0x10016308 calls dl_hash_value [0x1001d48c] with a0=0x1002b618, a1=?, a2=?, a3=0x10030000.
  The `jal` at 0x1001632c calls dl_hash_value [0x1001d48c] with a0=0x1002b620, a1=?, a2=?, a3=?, a4=0x10030000.
  The `jal` at 0x1001634c calls dl_hash_value [0x1001d48c] with a0=0x1002b628, a1=?, a2=?, a3=?, a5=0x10030000.
  The `jal` at 0x1001636c calls dl_hash_value [0x1001d48c] with a0=0x1002b630, a1=?, a2=?, a3=?, a6=0x10030000.
  The `jal` at 0x1001638c calls dl_hash_value [0x1001d48c] with a0=0x1002b638, a1=?, a2=?, a3=?, a7=0x10030000.
  The `jal` at 0x100163b0 calls dl_hash_value [0x1001d48c] with a0=0x1002b640, a1=?, a2=?, a3=?.
  The `jal` at 0x100163d4 calls dl_hash_value [0x1001d48c] with a0=0x1002b648, a1=?, a2=?, a3=?.
  The `jal` at 0x100163f4 calls dl_hash_value [0x1001d48c] with a0=0x1002b650, a1=?, a2=?, a3=?.
  The `jal` at 0x1001641c calls dl_hash_value [0x1001d48c] with a0=0x10027fc0, a1=?, a2=?, a3=?.
  The `jal` at 0x10016444 calls dl_hash_value [0x1001d48c] with a0=0x10027fd0, a1=?, a2=?, a3=?.
  The `jal` at 0x10016468 calls dl_hash_value [0x1001d48c] with a0=0x1002b658, a1=?, a2=?, a3=?.
  The `jal` at 0x10016494 calls dl_hash_value [0x1001d48c] with a0=0x10027fe0, a1=?, a2=0x10030000, a3=?.
  The `jalr` at 0x100164bc calls strdup with a0=[a0+32], a1=0x0, a2=?, a3=?.
  The `jalr` at 0x100164d8 calls strdup with a0=[a0+36], a1=?, a2=?, a3=?.
  The `jalr` at 0x100164fc calls strdup with a0=[a0+40], a1=?, a2=?, a3=?.
  The `jal` at 0x10016560 calls dl_hash_value [0x1001d48c] with a0=0x10028028, a1=0x0, a2=?, a3=?.
  The `jal` at 0x10016574 calls (unnamed) [0x100172ec] with a0=?, a1=0x10030000, a2=?, a3=?.
  The `jal` at 0x10016584 calls dl_hash_lookup [0x1001d410] with a0=0x1002b660, a1=?, a2=?, a3=?.
  The `jal` at 0x10016594 calls (unnamed) [0x10017300] with a0=ret(dl_hash_lookup), a1=?, a2=?, a3=?.
  The `jal` at 0x100165a8 calls dl_hash_lookup [0x1001d410] with a0=0x1002b668, a1=?, a2=?, a3=?.
  The `jal` at 0x100165b8 calls (unnamed) [0x10017358] with a0=ret(dl_hash_lookup), a1=?, a2=?, a3=?.
  The `jal` at 0x100165cc calls (unnamed) [0x10016aa0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100165dc calls dl_hash_lookup [0x1001d410] with a0=0x10028058, a1=?, a2=?, a3=?.
  The `jal` at 0x10016604 calls dl_hash_lookup [0x1001d410] with a0=0x1002b670, a1=?, a2=?, a3=?.
  The `jal` at 0x10016638 calls dl_hash_lookup [0x1001d410] with a0=0x1002b660, a1=?, a2=?, a3=?.
  The `jal` at 0x1001664c calls dl_output_abrt [0x1001a048] with a0=0x10028038, a1=ret(dl_hash_lookup), a2=?, a3=?.
  The `jal` at 0x10016660 calls dl_hash_lookup [0x1001d410] with a0=0x1002b668, a1=?, a2=?, a3=?.
  The `jal` at 0x10016674 calls dl_output_abrt [0x1001a048] with a0=0x10028038, a1=ret(dl_hash_lookup), a2=?, a3=?.
  The `beq` branch at 0x10016280 targets 0x10016290, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x10016288 targets 0x10016294 and is always taken.
  The `beq` branch at 0x100162a8 targets 0x100162b8, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x100162b0 targets 0x100162bc and is always taken.
  The `beq` branch at 0x100162cc targets 0x100162dc, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x100162d4 targets 0x100162e0 and is always taken.
  The `beq` branch at 0x100162f0 targets 0x10016300, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x100162f8 targets 0x10016304 and is always taken.
  The `beq` branch at 0x10016314 targets 0x10016324, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x1001631c targets 0x10016328 and is always taken.
  The `beq` branch at 0x1001633c targets 0x10016348, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x1001635c targets 0x10016368, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x1001637c targets 0x10016388, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x10016398 targets 0x100163a8, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x100163a0 targets 0x100163ac and is always taken.
  The `beq` branch at 0x100163bc targets 0x100163cc, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x100163c4 targets 0x100163d0 and is always taken.
  The `beq` branch at 0x100163e4 targets 0x100163f0, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x10016400 targets 0x10016410, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x10016408 targets 0x10016414 and is always taken.
  The `beq` branch at 0x10016428 targets 0x10016438, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x10016430 targets 0x1001643c and is always taken.
  The `beq` branch at 0x10016450 targets 0x10016460, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x10016458 targets 0x10016464 and is always taken.
  The `beq` branch at 0x10016478 targets 0x10016488, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x10016480 targets 0x1001648c and is always taken.
  The `beq` branch at 0x100164a4 targets 0x10016518, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x100164b0 targets 0x100164c8, is taken when a0(=[a0+32]) == 0, and falls through when a0(=[a0+32]) != 0.
  The `beq` branch at 0x100164cc targets 0x100164e8, is taken when a0(=[a0+36]) == 0, and falls through when a0(=[a0+36]) != 0.
  The `beq` branch at 0x100164e0 targets 0x100164ec and is always taken.
  The `beq` branch at 0x100164f0 targets 0x1001650c, is taken when a0(=[a0+40]) == 0, and falls through when a0(=[a0+40]) != 0.
  The `beq` branch at 0x10016504 targets 0x10016510 and is always taken.
  The `beq` branch at 0x10016510 targets 0x10016534 and is always taken.
  The `beq` branch at 0x100165a0 targets 0x10016634, is taken when v0(=ret(0x10017300)) == s1(=-0x1), and falls through when v0(=ret(0x10017300)) != s1(=-0x1).
  The `beq` branch at 0x100165c0 targets 0x1001665c, is taken when v0(=ret(0x10017358)) == s1(=-0x1), and falls through when v0(=ret(0x10017358)) != s1(=-0x1).
  The `beq` branch at 0x100165e4 targets 0x100165f8, is taken when v0(=ret(dl_hash_lookup)) == 0, and falls through when v0(=ret(dl_hash_lookup)) != 0.
  The `beq` branch at 0x100165f0 targets 0x10016600 and is always taken.
  The `beq` branch at 0x10016654 targets 0x100165a8 and is always taken.
  The `beq` branch at 0x1001667c targets 0x100165c8 and is always taken.
  The return at 0x1001662c has v0 = ret(dl_hash_lookup).

- `dl_output_cleanup` in `usr/diags/SG/bin/olsgsys` at 0x10016684 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10016684-0x10016738 (180 bytes).
  It occupies 180 bytes.
  The `lw` at 0x100166a4 loads 4 bytes from abs 0x1003631c.
  The `lw` at 0x100166b0 loads 4 bytes from abs 0x10036324.
  The `lbu` at 0x100166b4 loads 1 byte from abs 0x1003630e.
  The `lw` at 0x100166b8 loads 4 bytes from abs 0x10036320.
  The `jalr` at 0x100166c8 calls free with a0=[0x1003631c], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x100166d8 calls free with a0=[0x10036320], a1=?, a2=?, a3=?.
  The `jalr` at 0x100166e8 calls free with a0=[0x10036324], a1=?, a2=?, a3=?.
  The `jal` at 0x1001670c calls dl_server_output [0x1001c94c] with a0=0x10036340, a1=[0x1002bb1c]+0xffffffffeffc9cc0, a2=?, a3=?.
  The `jal` at 0x10016718 calls dl_server_endtx [0x1001cfcc] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x100166bc targets 0x100166d0, is taken when a0(=[0x1003631c]) == 0, and falls through when a0(=[0x1003631c]) != 0.
  The `beq` branch at 0x100166d0 targets 0x100166e0, is taken when s1(=[0x10036320]) == 0, and falls through when s1(=[0x10036320]) != 0.
  The `beq` branch at 0x100166e0 targets 0x100166f0, is taken when s0(=[0x10036324]) == 0, and falls through when s0(=[0x10036324]) != 0.
  The `beq` branch at 0x100166f4 targets 0x10016720, is taken when t9(=[0x1003630e]:1) == 0, and falls through when t9(=[0x1003630e]:1) != 0.
  The return at 0x10016730 has v0 = one of ?, ret(dl_server_endtx).

- `dl_output_show_setup` in `usr/diags/SG/bin/olsgsys` at 0x10016738 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10016738-0x10016aa0 (872 bytes).
  It occupies 872 bytes.
  The `lw` at 0x1001677c loads 4 bytes from abs 0x100362d0.
  The `lw` at 0x10016788 loads 4 bytes from abs 0x100362dc.
  The `lw` at 0x1001679c loads 4 bytes from abs 0x100362e4.
  The `lw` at 0x100167b0 loads 4 bytes from abs 0x100362e8.
  The `lbu` at 0x100167bc loads 1 byte from abs 0x100362f0.
  The `lbu` at 0x100167d8 loads 1 byte from abs 0x100362f1.
  The `lbu` at 0x100167f4 loads 1 byte from abs 0x100362f2.
  The `lbu` at 0x10016810 loads 1 byte from abs 0x100362f3.
  The `lbu` at 0x1001682c loads 1 byte from abs 0x100362f4.
  The `lbu` at 0x10016848 loads 1 byte from abs 0x100362f5.
  The `lbu` at 0x10016864 loads 1 byte from abs 0x100362f6.
  The `lbu` at 0x10016880 loads 1 byte from abs 0x100362f7.
  The `lbu` at 0x1001689c loads 1 byte from abs 0x100362f8.
  The `lbu` at 0x100168b8 loads 1 byte from abs 0x100362f9.
  The `lbu` at 0x100168d4 loads 1 byte from abs 0x100362fa.
  The `lbu` at 0x100168f0 loads 1 byte from abs 0x100362fb.
  The `lw` at 0x1001690c loads 4 bytes from abs 0x1003631c.
  The `lw` at 0x10016928 loads 4 bytes from abs 0x10036320.
  The `lw` at 0x10016944 loads 4 bytes from abs 0x10036324.
  The `lw` at 0x10016968 loads 4 bytes from abs 0x10036300.
  The `lw` at 0x1001697c loads 4 bytes from abs 0x10036308.
  The `jal` at 0x10016778 calls dl_output_info [0x100189a4] with a0=0x10028088, a1=[0x100362d0], a2=?, a3=?.
  The `jal` at 0x1001678c calls dl_output_info [0x100189a4] with a0=0x100280a8, a1=[0x100362dc], a2=?, a3=?.
  The `jal` at 0x100167a0 calls dl_output_info [0x100189a4] with a0=0x100280c8, a1=[0x100362e4], a2=?, a3=?.
  The `jal` at 0x100167b4 calls dl_output_info [0x100189a4] with a0=0x100280e8, a1=[0x100362e8], a2=?, a3=?.
  The `jal` at 0x100167d0 calls dl_output_info [0x100189a4] with a0=0x10028108, a1=one of 0x1002b688, 0x1002b68c, a2=?, a3=?.
  The `jal` at 0x100167ec calls dl_output_info [0x100189a4] with a0=0x10028128, a1=one of 0x1002b688, 0x1002b68c, a2=?, a3=?.
  The `jal` at 0x10016808 calls dl_output_info [0x100189a4] with a0=0x10028148, a1=one of 0x1002b688, 0x1002b68c, a2=?, a3=?.
  The `jal` at 0x10016824 calls dl_output_info [0x100189a4] with a0=0x10028168, a1=one of 0x1002b688, 0x1002b68c, a2=?, a3=?.
  The `jal` at 0x10016840 calls dl_output_info [0x100189a4] with a0=0x10028188, a1=one of 0x1002b688, 0x1002b68c, a2=?, a3=?.
  The `jal` at 0x1001685c calls dl_output_info [0x100189a4] with a0=0x100281a8, a1=one of 0x1002b688, 0x1002b68c, a2=?, a3=?.
  The `jal` at 0x10016878 calls dl_output_info [0x100189a4] with a0=0x100281c8, a1=one of 0x1002b688, 0x1002b68c, a2=?, a3=?.
  The `jal` at 0x10016894 calls dl_output_info [0x100189a4] with a0=0x100281e8, a1=one of 0x1002b688, 0x1002b68c, a2=?, a3=?.
  The `jal` at 0x100168b0 calls dl_output_info [0x100189a4] with a0=0x10028208, a1=one of 0x1002b688, 0x1002b68c, a2=?, a3=?.
  The `jal` at 0x100168cc calls dl_output_info [0x100189a4] with a0=0x10028228, a1=one of 0x1002b688, 0x1002b68c, a2=?, a3=?.
  The `jal` at 0x100168e8 calls dl_output_info [0x100189a4] with a0=0x10028248, a1=one of 0x1002b688, 0x1002b68c, a2=?, a3=?.
  The `jal` at 0x10016904 calls dl_output_info [0x100189a4] with a0=0x10028268, a1=one of 0x1002b688, 0x1002b68c, a2=?, a3=?.
  The `jal` at 0x10016920 calls dl_output_info [0x100189a4] with a0=0x10028288, a1=?, a2=?, a3=?.
  The `jal` at 0x1001693c calls dl_output_info [0x100189a4] with a0=0x100282a8, a1=?, a2=?, a3=?.
  The `jal` at 0x10016958 calls dl_output_info [0x100189a4] with a0=0x100282c8, a1=?, a2=?, a3=?.
  The `jal` at 0x1001696c calls dl_output_info [0x100189a4] with a0=0x100282e8, a1=[0x10036300], a2=?, a3=?.
  The `jal` at 0x10016980 calls dl_output_info [0x100189a4] with a0=0x10028308, a1=[0x10036308], a2=?, a3=?.
  The `jal` at 0x10016990 calls dl_hash_lookup [0x1001d410] with a0=0x1002b660, a1=?, a2=?, a3=?.
  The `jal` at 0x100169a8 calls dl_output_info [0x100189a4] with a0=0x10028328, a1=?, a2=?, a3=?.
  The `jal` at 0x100169b4 calls dl_hash_lookup [0x1001d410] with a0=0x1002b668, a1=?, a2=?, a3=?.
  The `jal` at 0x100169cc calls dl_output_info [0x100189a4] with a0=0x10028348, a1=?, a2=?, a3=?.
  The `jal` at 0x100169f0 calls dl_hash_lookup [0x1001d410] with a0=0x1002b660, a1=0x1002b690, a2=?, a3=?.
  The `jal` at 0x10016a04 calls dl_hash_lookup [0x1001d410] with a0=0x1002b668, a1=0x1002b690, a2=?, a3=?.
  The `jal` at 0x10016a90 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x10016758 targets 0x10016a8c, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x100167c0 targets 0x10016a14, is taken when a1(=[0x100362f0]:1) == 0, and falls through when a1(=[0x100362f0]:1) != 0.
  The `beq` branch at 0x100167dc targets 0x10016a1c, is taken when a1(=[0x100362f1]:1) == 0, and falls through when a1(=[0x100362f1]:1) != 0.
  The `beq` branch at 0x100167f8 targets 0x10016a24, is taken when a1(=[0x100362f2]:1) == 0, and falls through when a1(=[0x100362f2]:1) != 0.
  The `beq` branch at 0x10016814 targets 0x10016a2c, is taken when a1(=[0x100362f3]:1) == 0, and falls through when a1(=[0x100362f3]:1) != 0.
  The `beq` branch at 0x10016830 targets 0x10016a34, is taken when a1(=[0x100362f4]:1) == 0, and falls through when a1(=[0x100362f4]:1) != 0.
  The `beq` branch at 0x1001684c targets 0x10016a3c, is taken when a1(=[0x100362f5]:1) == 0, and falls through when a1(=[0x100362f5]:1) != 0.
  The `beq` branch at 0x10016868 targets 0x10016a44, is taken when a1(=[0x100362f6]:1) == 0, and falls through when a1(=[0x100362f6]:1) != 0.
  The `beq` branch at 0x10016884 targets 0x10016a4c, is taken when a1(=[0x100362f7]:1) == 0, and falls through when a1(=[0x100362f7]:1) != 0.
  The `beq` branch at 0x100168a0 targets 0x10016a54, is taken when a1(=[0x100362f8]:1) == 0, and falls through when a1(=[0x100362f8]:1) != 0.
  The `beq` branch at 0x100168bc targets 0x10016a5c, is taken when a1(=[0x100362f9]:1) == 0, and falls through when a1(=[0x100362f9]:1) != 0.
  The `beq` branch at 0x100168d8 targets 0x10016a64, is taken when a1(=[0x100362fa]:1) == 0, and falls through when a1(=[0x100362fa]:1) != 0.
  The `beq` branch at 0x100168f4 targets 0x10016a6c, is taken when a1(=[0x100362fb]:1) == 0, and falls through when a1(=[0x100362fb]:1) != 0.
  The `beq` branch at 0x10016910 targets 0x10016a74, is taken when a1(=[0x1003631c]) == 0, and falls through when a1(=[0x1003631c]) != 0.
  The `beq` branch at 0x1001692c targets 0x10016a7c, is taken when a1(=[0x10036320]) == 0, and falls through when a1(=[0x10036320]) != 0.
  The `beq` branch at 0x10016948 targets 0x10016a84, is taken when a1(=[0x10036324]) == 0, and falls through when a1(=[0x10036324]) != 0.
  The `bne` branch at 0x10016998 targets 0x100169ec, is taken when v0(=ret(dl_hash_lookup)) != 0, and falls through when v0(=ret(dl_hash_lookup)) == 0.
  The `bne` branch at 0x100169bc targets 0x10016a00, is taken when v0(=ret(dl_hash_lookup)) != 0, and falls through when v0(=ret(dl_hash_lookup)) == 0.
  The `beq` branch at 0x100169f8 targets 0x100169a0 and is always taken.
  The `beq` branch at 0x10016a0c targets 0x100169c4 and is always taken.
  The `beq` branch at 0x10016a14 targets 0x100167c8 and is always taken.
  The `beq` branch at 0x10016a1c targets 0x100167e4 and is always taken.
  The `beq` branch at 0x10016a24 targets 0x10016800 and is always taken.
  The `beq` branch at 0x10016a2c targets 0x1001681c and is always taken.
  The `beq` branch at 0x10016a34 targets 0x10016838 and is always taken.
  The `beq` branch at 0x10016a3c targets 0x10016854 and is always taken.
  The `beq` branch at 0x10016a44 targets 0x10016870 and is always taken.
  The `beq` branch at 0x10016a4c targets 0x1001688c and is always taken.
  The `beq` branch at 0x10016a54 targets 0x100168a8 and is always taken.
  The `beq` branch at 0x10016a5c targets 0x100168c4 and is always taken.
  The `beq` branch at 0x10016a64 targets 0x100168e0 and is always taken.
  The `beq` branch at 0x10016a6c targets 0x100168fc and is always taken.
  The `beq` branch at 0x10016a74 targets 0x10016918 and is always taken.
  The `beq` branch at 0x10016a7c targets 0x10016934 and is always taken.
  The `beq` branch at 0x10016a84 targets 0x10016950 and is always taken.
  The `beq` branch at 0x10016a98 targets 0x10016764 and is always taken.
  The return at 0x100169e4 has v0 = ret(dl_output_info).

- `dl_output_init_crashlog` in `usr/diags/SG/bin/olsgsys` at 0x10016cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10016cc0-0x10016e74 (436 bytes).
  It occupies 436 bytes.
  The `lbu` at 0x10016cec loads 1 byte from abs 0x100362fb.
  The `lw` at 0x10016d6c loads 4 bytes from ret(localtime) +0x8.
  The `lw` at 0x10016d70 loads 4 bytes from ret(localtime) +0xc.
  The `lw` at 0x10016d84 loads 4 bytes from ret(localtime) +0x14.
  The `lw` at 0x10016d88 loads 4 bytes from ret(localtime) +0x10.
  The `lw` at 0x10016d8c loads 4 bytes from ret(localtime) +0x4.
  The `lw` at 0x10016d9c loads 4 bytes from ret(localtime) +0x0.
  The `sw` at 0x10016dc8 stores 4 bytes to abs 0x10036318.
  The `lw` at 0x10016e08 loads 4 bytes from abs 0x10036318.
  The `lw` at 0x10016e38 loads 4 bytes from sym(errno) +0x0.
  The `jal` at 0x10016d18 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10016d30 calls (unnamed) [0x10016adc] with a0=0x10027ff0, a1=?, a2=?, a3=?.
  The `jalr` at 0x10016d48 calls malloc with a0=0x3b, a1=?, a2=?, a3=?.
  The `jalr` at 0x10016d60 calls localtime with a0=0x10036328, a1=?, a2=?, a3=?.
  The `jalr` at 0x10016dac calls sprintf with a0=[0x1002bb44], a1=0x100283d8, a2=0x10027ff0, a3=0x10028008, a4=[ret(localtime)+20]+1900, a5=[ret(localtime)+16]+1, a6=[ret(localtime)+12], a7=[ret(localtime)+8].
  The `jalr` at 0x10016dbc calls fopen with a0=[0x1002bb44], a1=0x1002b698, a2=?, a3=?.
  The `jalr` at 0x10016dd4 calls setbuf with a0=ret(fopen), a1=0x0, a2=?, a3=?.
  The `jalr` at 0x10016de0 calls localtime with a0=0x10036328, a1=?, a2=?, a3=?.
  The `jalr` at 0x10016dec calls asctime with a0=ret(localtime), a1=?, a2=?, a3=?.
  The `jalr` at 0x10016e0c calls fprintf with a0=[0x10036318], a1=0x10028418, a2=0x0, a3=0x0, a4=ret(asctime).
  The `jalr` at 0x10016e1c calls free with a0=[0x1002bb44], a1=?, a2=?, a3=?.
  The `jalr` at 0x10016e34 calls strerror with a0=[sym(errno)], a1=?, a2=?, a3=?.
  The `jal` at 0x10016e4c calls dl_output_info [0x100189a4] with a0=0x10028400, a1=[0x1002bb44], a2=ret(strerror), a3=?.
  The `jal` at 0x10016e64 calls dl_output_info [0x100189a4] with a0=0x100283b8, a1=?, a2=?, a3=?.
  The `beq` branch at 0x10016cdc targets 0x10016d14, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x10016cf0 targets 0x10016d28, is taken when a0(=[0x100362fb]:1) == 0, and falls through when a0(=[0x100362fb]:1) != 0.
  The `beq` branch at 0x10016d20 targets 0x10016ce8 and is always taken.
  The `beq` branch at 0x10016d38 targets 0x10016d48, is taken when v0(=ret(0x10016adc)) == 0, and falls through when v0(=ret(0x10016adc)) != 0.
  The `beq` branch at 0x10016d40 targets 0x10016cfc and is always taken.
  The `beq` branch at 0x10016d50 targets 0x10016e5c, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0x10016dc4 targets 0x10016e2c, is taken when v0(=ret(fopen)) == 0, and falls through when v0(=ret(fopen)) != 0.
  The `beq` branch at 0x10016e24 targets 0x10016d00 and is always taken.
  The `beq` branch at 0x10016e54 targets 0x10016e18 and is always taken.
  The `beq` branch at 0x10016e6c targets 0x10016d00 and is always taken.
  The return at 0x10016d0c has v0 = one of -0x1, 0x0, 0x1.

- `dl_output_exit_crashlog` in `usr/diags/SG/bin/olsgsys` at 0x10016e74 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10016e74-0x100171d8 (868 bytes).
  It occupies 868 bytes.
  2 such `lbu` accesses load 1 byte from abs 0x100362fb, including `lbu` at 0x10016ea0, `lbu` at 0x10016f54.
  6 such `lw` accesses load 4 bytes from abs 0x10036318, including `lw` at 0x10016ea8, `lw` at 0x10016f44, `lw` at 0x10016f68.
  The `lw` at 0x10016ee0 loads 4 bytes from abs 0x1003632c.
  2 such `lw` accesses load 4 bytes from abs 0x10036328, including `lw` at 0x10016ee8, `lw` at 0x10017054.
  The `lw` at 0x10016fac loads 4 bytes from ret(localtime) +0xc.
  The `lw` at 0x10016fb0 loads 4 bytes from ret(localtime) +0x8.
  The `lw` at 0x10016fc0 loads 4 bytes from ret(localtime) +0x10.
  The `lw` at 0x10016fc4 loads 4 bytes from ret(localtime) +0x14.
  The `lw` at 0x10016fc8 loads 4 bytes from ret(localtime) +0x4.
  The `lw` at 0x10016fd8 loads 4 bytes from ret(localtime) +0x0.
  The `sw` at 0x10017004 stores 4 bytes to abs 0x10036318.
  The `sb` at 0x1001702c stores 1 byte to abs 0x100362f1.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10017098, `lw` at 0x1001709c, `lw` at 0x100170a0.
  The `lw` at 0x1001718c loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x10016ed8 calls gettimeofday with a0=sp-64, a1=?, a2=?, a3=?.
  The `jalr` at 0x10016f0c calls localtime with a0=sp-64, a1=?, a2=?, a3=?, a5=[0x1003632c].
  The `jalr` at 0x10016f18 calls asctime with a0=ret(localtime), a1=?, a2=?, a3=?.
  The `jalr` at 0x10016f48 calls fprintf with a0=[0x10036318], a1=0x10028418, a2=?, a3=?, a4=ret(asctime).
  The `jal` at 0x10016f60 calls dl_output_trce [0x100192dc] with a0=0x10028430, a1=?, a2=?, a3=?.
  The `jalr` at 0x10016f74 calls fclose with a0=[0x10036318], a1=?, a2=?, a3=?.
  The `jalr` at 0x10016f80 calls malloc with a0=0x3b, a1=?, a2=?, a3=?.
  The `jalr` at 0x10016f98 calls localtime with a0=0x10036328, a1=?, a2=?, a3=?.
  The `jalr` at 0x10016fe8 calls sprintf with a0=[0x1002bb48], a1=0x10028498, a2=0x10027ff0, a3=0x10028008, a4=[ret(localtime)+20]+1900, a5=[ret(localtime)+16]+1, a6=[ret(localtime)+12], a7=[ret(localtime)+8].
  The `jalr` at 0x10016ff8 calls fopen with a0=[0x1002bb48], a1=0x1002b698, a2=?, a3=?.
  The `jalr` at 0x1001700c calls free with a0=[0x1002bb48], a1=?, a2=?, a3=?.
  The `jalr` at 0x1001701c calls setbuf with a0=[0x10036318], a1=0x0, a2=?, a3=?.
  The `jalr` at 0x10017030 calls localtime with a0=?, a1=?, a2=?, a3=0x1.
  The `jalr` at 0x1001703c calls asctime with a0=ret(localtime), a1=?, a2=?, a3=?.
  The `jalr` at 0x10017058 calls fprintf with a0=[0x10036318], a1=0x100284c0, a2=[0x10036328], a3=ret(asctime).
  The `jalr` at 0x10017064 calls fclose with a0=[0x10036318], a1=?, a2=?, a3=?.
  The `jalr` at 0x10017070 calls malloc with a0=0x90, a1=?, a2=?, a3=?.
  The `jalr` at 0x100170fc calls sprintf with a0=ret(malloc), a1=0x100284d0, a2=0x10028018, a3=0x10028008, a4=0x10027ff0, a5=0x10028008.
  The `jal` at 0x10017114 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10028520, a2=[0x1002bb48], a3=?.
  The `jalr` at 0x10017120 calls system with a0=[0x1002bb48], a1=?, a2=?, a3=?.
  The `jalr` at 0x1001712c calls free with a0=[0x1002bb48], a1=?, a2=?, a3=?.
  The `jal` at 0x10017140 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10017158 calls dl_output_info [0x100189a4] with a0=0x10028470, a1=?, a2=?, a3=?.
  The `jal` at 0x10017170 calls dl_output_info [0x100189a4] with a0=0x10028470, a1=?, a2=?, a3=?.
  The `jalr` at 0x10017188 calls strerror with a0=[sym(errno)], a1=?, a2=?, a3=?.
  The `jal` at 0x100171a0 calls dl_output_info [0x100189a4] with a0=0x10028400, a1=[0x1002bb48], a2=ret(strerror), a3=?.
  The `jalr` at 0x100171ac calls free with a0=[0x1002bb48], a1=?, a2=?, a3=?.
  The `beq` branch at 0x10016e90 targets 0x1001713c, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `bne` branch at 0x10016ea4 targets 0x10016eb8, is taken when v0(=[0x100362fb]:1) != 0, and falls through when v0(=[0x100362fb]:1) == 0.
  The `beq` branch at 0x10016eac targets 0x10016ed0 and is always taken.
  The `beq` branch at 0x10016eb4 targets 0x10016f58, is taken when v0(=[0x100362fb]:1) == 0, and falls through when v0(=[0x100362fb]:1) != 0.
  The `beq` branch at 0x10016ed0 targets 0x10016eb4, is taken when t8(=[0x10036318]) == 0, and falls through when t8(=[0x10036318]) != 0.
  The `bltz` branch at 0x10016ef8 targets 0x100171bc, is taken when a4(?) < 0 (signed), and falls through when a4(?) >= 0 (signed).
  The `beq` branch at 0x10016f50 targets 0x10016eb4 and is always taken.
  The `beq` branch at 0x10016f6c targets 0x10016f7c, is taken when a0(=[0x10036318]) == 0, and falls through when a0(=[0x10036318]) != 0.
  The `beq` branch at 0x10016f88 targets 0x10017168, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0x10017000 targets 0x10017180, is taken when v0(=ret(fopen)) == 0, and falls through when v0(=ret(fopen)) != 0.
  The `beq` branch at 0x10017078 targets 0x10017150, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0x10017134 targets 0x10016ebc and is always taken.
  The `beq` branch at 0x10017148 targets 0x10016e9c and is always taken.
  The `beq` branch at 0x10017160 targets 0x10016ebc and is always taken.
  The `beq` branch at 0x10017178 targets 0x10016ebc and is always taken.
  The `beq` branch at 0x100171b4 targets 0x10016ebc and is always taken.
  The `beq` branch at 0x100171d0 targets 0x10016f08 and is always taken.
  The return at 0x10016ec8 has v0 = one of -0x1, 0x0.

- `dl_output_test` in `usr/diags/SG/bin/olsgsys` at 0x100173b0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100173b0-0x1001764c (668 bytes).
  It occupies 668 bytes.
  The `lbu` at 0x10017400 loads 1 byte from abs 0x100362fe.
  The `lbu` at 0x10017408 loads 1 byte from abs 0x100362fc.
  The `sb` at 0x10017424 stores 1 byte to abs 0x100362fe.
  The `lbu` at 0x10017430 loads 1 byte from abs 0x1003630e.
  5 such `lw` accesses load 4 bytes from sym(TEST) +0x0, including `lw` at 0x10017440, `lw` at 0x10017468, `lw` at 0x100174bc.
  4 such `lw` accesses load 4 bytes from [sym(TEST)] +0x0, including `lw` at 0x10017448, `lw` at 0x10017484, `lw` at 0x100174d8.
  The `lbu` at 0x10017454 loads 1 byte from abs 0x100362f6.
  The `lbu` at 0x10017460 loads 1 byte from abs 0x1003630d.
  The `sw` at 0x10017478 stores 4 bytes to abs 0x100362d4.
  The `lw` at 0x100174b4 loads 4 bytes from abs 0x100362dc.
  The `sw` at 0x100174cc stores 4 bytes to abs 0x100362d8.
  The `lw` at 0x1001750c loads 4 bytes from abs 0x100362e4.
  The `sw` at 0x10017518 stores 4 bytes to abs 0x100362e0.
  4 such `lw` accesses load 4 bytes from abs 0x10036300, including `lw` at 0x10017548, `lw` at 0x10017560, `lw` at 0x100175a0.
  The `lw` at 0x100175c8 loads 4 bytes from [sym(TEST)] +0x4.
  The `jalr` at 0x10017428 calls vsnprintf with a0=sp-624, a1=0x100, a2=a0 at entry (arg0), a3=sp-56.
  The `jal` at 0x10017444 calls dl_server_test [0x1001ca68] with a0=[[sym(TEST)]], a1=?, a2=?, a3=?.
  The `jalr` at 0x10017480 calls snprintf with a0=sp-368, a1=0x80, a2=0x100285e0, a3=[[sym(TEST)]].
  The `jal` at 0x10017490 calls dl_hash_value [0x1001d48c] with a0=sp-368, a1=0x0, a2=?, a3=?.
  The `jal` at 0x100174a4 calls dl_hash_value [0x1001d48c] with a0=sp-368, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x100174d4 calls snprintf with a0=sp-240, a1=0x80, a2=0x100285f0, a3=[[sym(TEST)]].
  The `jal` at 0x100174e8 calls dl_hash_value [0x1001d48c] with a0=sp-240, a1=0x0, a2=?, a3=?.
  The `jal` at 0x100174fc calls dl_hash_value [0x1001d48c] with a0=sp-240, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x1001754c calls fprintf with a0=sym(__iob)+16, a1=0x10028568, a2=0xd, a3=[0x10036300], a4=sp-624.
  The `jalr` at 0x10017558 calls strlen with a0=sp-624, a1=?, a2=?, a3=?.
  The `jalr` at 0x10017570 calls malloc with a0=[0x10036300]+1, a1=?, a2=[0x10036300], a3=?.
  The `jalr` at 0x10017580 calls strlen with a0=sp-624, a1=?, a2=?, a3=?.
  The `jalr` at 0x10017590 calls strlen with a0=sp-624, a1=?, a2=?, a3=?.
  The `jalr` at 0x100175cc calls snprintf with a0=?, a1=[0x10036300]+1, a2=0x100285c0, a3=?, a5=[[sym(TEST)]+4], a6=sp-624.
  The `jal` at 0x100175ec calls (unnamed) [0x100171d8] with a0=0x100285d0, a1=[[sym(TEST)]], a2=?, a3=?.
  The `jalr` at 0x100175f8 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001760c calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10017624 calls dl_output_abrt [0x1001a048] with a0=0x10028538, a1=?, a2=?, a3=?.
  The `jal` at 0x1001763c calls dl_output_abrt [0x1001a048] with a0=0x10028588, a1=?, a2=[0x10036300], a3=?.
  The `beq` branch at 0x100173f0 targets 0x10017608, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x10017404 targets 0x10017410, is taken when a0(=[0x100362fe]:1) == 0, and falls through when a0(=[0x100362fe]:1) != 0.
  The `beq` branch at 0x1001740c targets 0x1001761c, is taken when t8(=[0x100362fc]:1) == 0, and falls through when t8(=[0x100362fc]:1) != 0.
  The `beq` branch at 0x10017434 targets 0x10017454, is taken when at(=[0x1003630e]:1) == 0, and falls through when at(=[0x1003630e]:1) != 0.
  The `beq` branch at 0x1001745c targets 0x1001752c, is taken when a2(=[0x100362f6]:1) == 0, and falls through when a2(=[0x100362f6]:1) != 0.
  The `beq` branch at 0x10017498 targets 0x100174b4, is taken when v0(=ret(dl_hash_value)) == 0, and falls through when v0(=ret(dl_hash_value)) != 0.
  The `beq` branch at 0x100174ac targets 0x100174b8 and is always taken.
  The `beq` branch at 0x100174f0 targets 0x1001750c, is taken when v0(=ret(dl_hash_value)) == 0, and falls through when v0(=ret(dl_hash_value)) != 0.
  The `beq` branch at 0x10017504 targets 0x10017510 and is always taken.
  The `beq` branch at 0x1001752c targets 0x10017554, is taken when v0(=[0x1003630d]:1) == 0, and falls through when v0(=[0x1003630d]:1) != 0.
  The `beq` branch at 0x10017568 targets 0x10017634, is taken when v0(=ret(strlen)) >= a2(=[0x10036300]) (unsigned), and falls through when v0(=ret(strlen)) < a2(=[0x10036300]) (unsigned).
  The `beq` branch at 0x10017600 targets 0x10017468 and is always taken.
  The `beq` branch at 0x10017614 targets 0x100173fc and is always taken.
  The `beq` branch at 0x1001762c targets 0x10017414 and is always taken.
  The `beq` branch at 0x10017644 targets 0x1001756c and is always taken.
  The return at 0x10017524 has v0 = ret(dl_hash_value).

- `dl_output_iter` in `usr/diags/SG/bin/olsgsys` at 0x1001764c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001764c-0x10017770 (292 bytes).
  It occupies 292 bytes.
  The `lw` at 0x100176c8 loads 4 bytes from abs 0x10036300.
  The `lw` at 0x100176d0 loads 4 bytes from abs 0x10036304.
  The `jalr` at 0x100176b4 calls vsnprintf with a0=sp-640, a1=0x200, a2=a1 at entry (arg1), a3=sp-48.
  The `jal` at 0x100176e4 calls (unnamed) [0x10018024] with a0=sp-640, a1=sp-128, a2=?, a3=?.
  The `jal` at 0x10017710 calls (unnamed) [0x100171d8] with a0=0x10028600, a1=a0 at entry (arg0), a2=0x1002b6a0, a3=?.
  The `jal` at 0x10017728 calls (unnamed) [0x10018024] with a0=?, a1=sp-128, a2=?, a3=?.
  The `jal` at 0x10017760 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x1001769c targets 0x1001775c, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x100176ec targets 0x10017738, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `bne` branch at 0x10017730 targets 0x10017700, is taken when v0(=ret(0x10018024)) != 0, and falls through when v0(=ret(0x10018024)) == 0.
  The `beq` branch at 0x10017768 targets 0x100176a4 and is always taken.
  The return at 0x10017754 has v0 = ret(0x10018024).

- `dl_output_stat` in `usr/diags/SG/bin/olsgsys` at 0x10017770 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10017770-0x10017924 (436 bytes).
  It occupies 436 bytes.
  2 such `lbu` accesses load 1 byte from abs 0x1003630d, including `lbu` at 0x100177cc, `lbu` at 0x10017824.
  2 such `sb` accesses store 1 byte to abs 0x1003630c, including `sb` at 0x10017804, `sb` at 0x10017830.
  The `lbu` at 0x10017810 loads 1 byte from abs 0x100362fa.
  The `lbu` at 0x10017820 loads 1 byte from abs 0x1003630c.
  The `lw` at 0x10017864 loads 4 bytes from abs 0x1003632c.
  The `lw` at 0x10017868 loads 4 bytes from abs 0x10036328.
  The `sw` at 0x10017878 stores 4 bytes to abs 0x1002bb54.
  The `jalr` at 0x100177b0 calls gettimeofday with a0=sp-64, a1=?, a2=?, a3=?.
  The `jal` at 0x10017808 calls (unnamed) [0x100171d8] with a0=0x1002b6a8, a1=0xd, a2=?, a3=?, a5=[0x1003630d]:1.
  The `jal` at 0x10017884 calls (unnamed) [0x10017c18] with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `jal` at 0x100178b8 calls (unnamed) [0x100171d8] with a0=0x10028618, a1=0x1002b6a0, a2=a0+1, a3=?.
  The `jal` at 0x100178d8 calls (unnamed) [0x100171d8] with a0=0x1002b69c, a1=one of 0x1002b678, 0x1002b680, a2=?, a3=?, a6=a1 at entry (arg1), a7=0x1.
  The `jal` at 0x100178e8 calls (unnamed) [0x10017ce8] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100178f8 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=?, a3=?.
  The `jal` at 0x1001790c calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x10017798 targets 0x10017908, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x100177a0 targets 0x1001785c, is taken when s1(=a0) == 0, and falls through when s1(=a0) != 0.
  The `bltz` branch at 0x100177d8 targets 0x10017840, is taken when t0(?) < 0 (signed), and falls through when t0(?) >= 0 (signed).
  The `beq` branch at 0x100177ec targets 0x10017810, is taken when a5(=[0x1003630d]:1) == 0, and falls through when a5(=[0x1003630d]:1) != 0.
  The `beq` branch at 0x10017814 targets 0x1001787c, is taken when at(=[0x100362fa]:1) == 0, and falls through when at(=[0x100362fa]:1) != 0.
  The `beq` branch at 0x10017854 targets 0x100177e8 and is always taken.
  The `beq` branch at 0x10017874 targets 0x100177a4 and is always taken.
  The `beq` branch at 0x100178c8 targets 0x1001791c, is taken when a6(=a1) == a7(=0x1), and falls through when a6(=a1) != a7(=0x1).
  The `beq` branch at 0x10017900 targets 0x1001781c and is always taken.
  The `beq` branch at 0x10017914 targets 0x100177a0 and is always taken.
  The `beq` branch at 0x1001791c targets 0x100178d0 and is always taken.
  The return at 0x10017838 has v0 = ?.

- `dl_output_loop` in `usr/diags/SG/bin/olsgsys` at 0x10017924 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10017924-0x10017b98 (628 bytes).
  It occupies 628 bytes.
  The `lbu` at 0x1001799c loads 1 byte from abs 0x1003630e.
  2 such `lbu` accesses load 1 byte from abs 0x1003630d, including `lbu` at 0x100179c4, `lbu` at 0x10017a5c.
  2 such `sb` accesses store 1 byte to abs 0x1003630c, including `sb` at 0x100179dc, `sb` at 0x10017a68.
  The `lbu` at 0x100179e8 loads 1 byte from abs 0x100362fa.
  The `lw` at 0x10017a2c loads 4 bytes from sym(__us_rsthread_stdio) +0x0.
  The `lbu` at 0x10017a58 loads 1 byte from abs 0x1003630c.
  The `lw` at 0x10017a9c loads 4 bytes from abs 0x10036328.
  The `lw` at 0x10017aa0 loads 4 bytes from abs 0x1003632c.
  The `sw` at 0x10017ab0 stores 4 bytes to abs 0x1002bb64.
  The `lw` at 0x10017ab4 loads 4 bytes from sym(__iob) +0x0.
  The `lw` at 0x10017ab8 loads 4 bytes from sym(__iob) +0x4.
  The `sw` at 0x10017ac8 stores 4 bytes to sym(__iob) +0x0.
  The `sw` at 0x10017ad0 stores 4 bytes to sym(__iob) +0x4.
  The `jalr` at 0x10017968 calls gettimeofday with a0=sp-64, a1=?, a2=?, a3=?.
  The `jal` at 0x100179bc calls dl_server_loop [0x1001ce6c] with a0=?, a1=a0-1, a2=?, a3=?, a7=[0x1003630e]:1.
  The `jal` at 0x100179e0 calls (unnamed) [0x100171d8] with a0=0x1002b6a8, a1=0xd, a2=[0x1003630d]:1, a3=?.
  The `jal` at 0x100179f8 calls dl_hash_lookup [0x1001d410] with a0=0x10028698, a1=?, a2=?, a3=?.
  The `jal` at 0x10017a20 calls dl_output_info [0x100189a4] with a0=0x100286a8, a1=[0x1002bb58]+1, a2=?, a3=?.
  The `jalr` at 0x10017a3c calls __semgetc with a0=sym(__iob), a1=[sym(__us_rsthread_stdio)], a2=?, a3=?.
  The `jal` at 0x10017ad8 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10017b1c calls (unnamed) [0x100171d8] with a0=0x10028658, a1=0x1002b6ae, a2=[0x1002bb58]+1, a3=a0 at entry (arg0).
  The `jal` at 0x10017b2c calls (unnamed) [0x10017c18] with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `jal` at 0x10017b4c calls (unnamed) [0x100171d8] with a0=0x1002b69c, a1=one of 0x1002b678, 0x1002b680, a2=?, a3=?.
  The `jal` at 0x10017b5c calls (unnamed) [0x10017ce8] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10017b6c calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=?, a3=?.
  The `jalr` at 0x10017b88 calls __filbuf with a0=sym(__iob), a1=[sym(__iob)+4]+1, a2=?, a3=?.
  The `beq` branch at 0x1001794c targets 0x10017ad4, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x10017958 targets 0x10017a94, is taken when a0(=[0x1002bb58]) == 0, and falls through when a0(=[0x1002bb58]) != 0.
  The `bltz` branch at 0x1001798c targets 0x10017a78, is taken when a7(?) < 0 (signed), and falls through when a7(?) >= 0 (signed).
  The `beq` branch at 0x100179a4 targets 0x100179c4, is taken when a7(=[0x1003630e]:1) == 0, and falls through when a7(=[0x1003630e]:1) != 0.
  The `beq` branch at 0x100179c8 targets 0x100179e8, is taken when a2(=[0x1003630d]:1) == 0, and falls through when a2(=[0x1003630d]:1) != 0.
  The `beq` branch at 0x100179ec targets 0x10017ae8, is taken when at(=[0x100362fa]:1) == 0, and falls through when at(=[0x100362fa]:1) != 0.
  The `beq` branch at 0x10017a00 targets 0x10017a48, is taken when v0(=ret(dl_hash_lookup)) == 0, and falls through when v0(=ret(dl_hash_lookup)) != 0.
  The `beq` branch at 0x10017a10 targets 0x10017a4c, is taken when a1(=[0x1002bb58]+1) >= s1(=a0) (signed), and falls through when a1(=[0x1002bb58]+1) < s1(=a0) (signed).
  The `beq` branch at 0x10017a30 targets 0x10017ab4, is taken when a1(=[sym(__us_rsthread_stdio)]) == 0, and falls through when a1(=[sym(__us_rsthread_stdio)]) != 0.
  The `beq` branch at 0x10017a8c targets 0x1001799c and is always taken.
  The `beq` branch at 0x10017aac targets 0x1001795c and is always taken.
  The `bltz` branch at 0x10017ac4 targets 0x10017b84, is taken when t3(=[sym(__iob)]-1) < 0 (signed), and falls through when t3(=[sym(__iob)]-1) >= 0 (signed).
  The `beq` branch at 0x10017acc targets 0x10017a44 and is always taken.
  The `beq` branch at 0x10017ae0 targets 0x10017958 and is always taken.
  The `beq` branch at 0x10017b3c targets 0x10017b7c, is taken when ra(=a1) == at(=0x1), and falls through when ra(=a1) != at(=0x1).
  The `beq` branch at 0x10017b74 targets 0x100179f4 and is always taken.
  The `beq` branch at 0x10017b7c targets 0x10017b44 and is always taken.
  The `beq` branch at 0x10017b90 targets 0x10017a48 and is always taken.
  The return at 0x10017a70 has v0 = one of ret(dl_hash_lookup), ?.

- `dl_output_assert_in_test_again` in `usr/diags/SG/bin/olsgsys` at 0x10017b98 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10017b98-0x10017c18 (128 bytes).
  It occupies 128 bytes.
  The `lbu` at 0x10017bc0 loads 1 byte from abs 0x100362fe.
  The `lbu` at 0x10017bc8 loads 1 byte from abs 0x100362fc.
  The `sb` at 0x10017bd8 stores 1 byte to abs 0x100362fe.
  The `jal` at 0x10017bec calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10017c04 calls dl_output_abrt [0x1001a048] with a0=0x100286d0, a1=[0x100362fc]:1, a2=0x10036278, a3=?.
  The `beq` branch at 0x10017bb0 targets 0x10017be8, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x10017bc4 targets 0x10017bd0, is taken when v1(=[0x100362fe]:1) == 0, and falls through when v1(=[0x100362fe]:1) != 0.
  The `beq` branch at 0x10017bcc targets 0x10017bfc, is taken when a1(=[0x100362fc]:1) == 0, and falls through when a1(=[0x100362fc]:1) != 0.
  The `beq` branch at 0x10017bf4 targets 0x10017bbc and is always taken.
  The `beq` branch at 0x10017c10 targets 0x10017bd0 and is always taken.
  The return at 0x10017be0 has v0 = ?.

- `dl_output_rslt` in `usr/diags/SG/bin/olsgsys` at 0x10017d3c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10017d3c-0x10018024 (744 bytes).
  It occupies 744 bytes.
  The `lbu` at 0x10017d90 loads 1 byte from abs 0x100362fe.
  The `lbu` at 0x10017d98 loads 1 byte from abs 0x100362fc.
  3 such `lbu` accesses load 1 byte from abs 0x100362f7, including `lbu` at 0x10017d9c, `lbu` at 0x10017e60, `lbu` at 0x10017e78.
  The `sb` at 0x10017da4 stores 1 byte to abs 0x100362fe.
  3 such `lbu` accesses load 1 byte from abs 0x1003630c, including `lbu` at 0x10017dac, `lbu` at 0x10017f48, `lbu` at 0x10017fbc.
  2 such `lbu` accesses load 1 byte from abs 0x1003630d, including `lbu` at 0x10017db0, `lbu` at 0x10017e94.
  The `lbu` at 0x10017db4 loads 1 byte from abs 0x1003630e.
  2 such `sb` accesses store 1 byte to abs 0x1003630c, including `sb` at 0x10017dc0, `sb` at 0x10018020.
  6 such `lw` accesses load 4 bytes from sym(TEST) +0x0, including `lw` at 0x10017dc8, `lw` at 0x10017df4, `lw` at 0x10017e10.
  3 such `lw` accesses load 4 bytes from [sym(TEST)] +0x0, including `lw` at 0x10017dd4, `lw` at 0x10017eec, `lw` at 0x10017f94.
  The `lw` at 0x10017e04 loads 4 bytes from [sym(TEST)] +0x1c.
  The `sw` at 0x10017e0c stores 4 bytes to [sym(TEST)] +0x1c.
  2 such `lw` accesses load 4 bytes from [sym(TEST)] +0x14, including `lw` at 0x10017e14, `lw` at 0x10017e30.
  2 such `sw` accesses store 4 bytes to [sym(TEST)] +0x14, including `sw` at 0x10017e1c, `sw` at 0x10017e3c.
  The `lw` at 0x10017e40 loads 4 bytes from abs 0x100362dc.
  The `lw` at 0x10017e44 loads 4 bytes from abs 0x100362e4.
  The `sw` at 0x10017e48 stores 4 bytes to abs 0x100362e0.
  The `sw` at 0x10017e4c stores 4 bytes to abs 0x100362d8.
  The `lw` at 0x10017e7c loads 4 bytes from abs 0x100362d4.
  The `lw` at 0x10017e80 loads 4 bytes from abs 0x100362d0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10017ee0, `lw` at 0x10017f88.
  2 such `lw` accesses load 4 bytes from abs 0x10036300, including `lw` at 0x10017f10, `lw` at 0x10017f70.
  The `lw` at 0x10017f4c loads 4 bytes from [sym(TEST)] +0x20.
  The `sw` at 0x10017f58 stores 4 bytes to [sym(TEST)] +0x20.
  The `lw` at 0x10017fc0 loads 4 bytes from [sym(TEST)] +0x18.
  The `sw` at 0x10017fcc stores 4 bytes to [sym(TEST)] +0x18.
  The `jal` at 0x10017dd0 calls dl_server_rslt [0x1001cbcc] with a0=[[sym(TEST)]], a1=a0 at entry (arg0), a2=?, a3=?.
  The `jal` at 0x10017de4 calls dl_server_output [0x1001c94c] with a0=0x10036340, a1=[0x1002bb1c]+0xffffffffeffc9cc0, a2=?, a3=?.
  The `jal` at 0x10017e6c calls dl_output_abrt [0x1001a048] with a0=0x10028728, a1=?, a2=?, a3=?.
  The `jal` at 0x10017ebc calls (unnamed) [0x10017c18] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=a1 at entry (arg1), a5=table(0x1002ada8), a6=(a0 << 0x2).
  The `jal` at 0x10017ee8 calls (unnamed) [0x100171d8] with a0=0x10028790, a1=[[sym(TEST)]], a2=0xd, a3=?.
  The `jalr` at 0x10017f00 calls vsnprintf with a0=sp-4208, a1=0x1000, a2=a1 at entry (arg1), a3=sp-48.
  The `jal` at 0x10017f1c calls (unnamed) [0x100171d8] with a0=0x1002b6b8, a1=[0x10036300]-13, a2=sp-4208, a3=?.
  The `jal` at 0x10017f2c calls (unnamed) [0x10017ce8] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10017f3c calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=?, a3=?.
  The `jal` at 0x10017f64 calls (unnamed) [0x10017c18] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=a1 at entry (arg1), a5=table(0x1002ada8), a6=(a0 << 0x2).
  The `jal` at 0x10017f90 calls (unnamed) [0x100171d8] with a0=0x10028790, a1=[[sym(TEST)]], a2=[0x10036300], a3=?.
  The `jal` at 0x10017fa0 calls (unnamed) [0x10017ce8] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10017fb0 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=?, a3=?.
  The `jal` at 0x10017fd4 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10017fec calls dl_output_info [0x100189a4] with a0=0x10028750, a1=[0x100362d0], a2=[0x100362d4], a3=[0x100362d4].
  The `jalr` at 0x10018010 calls fprintf with a0=sym(__iob)+16, a1=0x1002b6a8, a2=0xd, a3=?.
  The `beq` branch at 0x10017d80 targets 0x10017fd0, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x10017d94 targets 0x10017e5c, is taken when v1(=[0x100362fe]:1) == 0, and falls through when v1(=[0x100362fe]:1) != 0.
  The `beq` branch at 0x10017da0 targets 0x10017e7c, is taken when t8(=[0x100362f7]:1) == 0, and falls through when t8(=[0x100362f7]:1) != 0.
  The `beq` branch at 0x10017dbc targets 0x10017dec, is taken when ra(=[0x1003630e]:1) == 0, and falls through when ra(=[0x1003630e]:1) != 0.
  The `beq` branch at 0x10017df0 targets 0x10017fc0, is taken when s1(=a0) == a3(=0x1), and falls through when s1(=a0) != a3(=0x1).
  The `beq` branch at 0x10017dfc targets 0x10017f4c, is taken when s1(=a0) == a4(=0x2), and falls through when s1(=a0) != a4(=0x2).
  The `bne` branch at 0x10017e5c targets 0x10017da0, is taken when t2(=[0x100362fc]:1) != 0, and falls through when t2(=[0x100362fc]:1) == 0.
  The `beq` branch at 0x10017e74 targets 0x10017da0 and is always taken.
  The `bne` branch at 0x10017e88 targets 0x10017fe4, is taken when a1(=[0x100362d0]) < a2(=[0x100362d4]) (unsigned), and falls through when a1(=[0x100362d0]) >= a2(=[0x100362d4]) (unsigned).
  The `beq` branch at 0x10017e90 targets 0x10017ffc, is taken when s1(=a0) == 0, and falls through when s1(=a0) != 0.
  The `beq` branch at 0x10017eac targets 0x10017f5c, is taken when a4(=a1) == 0, and falls through when a4(=a1) != 0.
  The `beq` branch at 0x10017f44 targets 0x10017db0 and is always taken.
  The `beq` branch at 0x10017f54 targets 0x10017e20 and is always taken.
  The `beq` branch at 0x10017fb8 targets 0x10017db0 and is always taken.
  The `beq` branch at 0x10017fc8 targets 0x10017e20 and is always taken.
  The `beq` branch at 0x10017fdc targets 0x10017d8c and is always taken.
  The `beq` branch at 0x10017ff4 targets 0x10017e90 and is always taken.
  The `beq` branch at 0x10017ffc targets 0x10017e98, is taken when a1(=[0x1003630d]:1) == 0, and falls through when a1(=[0x1003630d]:1) != 0.
  The `beq` branch at 0x1001801c targets 0x10017e98 and is always taken.
  The return at 0x10017e54 has v0 = ?.

- `dl_output_diag` in `usr/diags/SG/bin/olsgsys` at 0x10018340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10018340-0x100184ac (364 bytes).
  It occupies 364 bytes.
  The `lbu` at 0x1001838c loads 1 byte from abs 0x100362f9.
  The `lw` at 0x10018398 loads 4 bytes from abs 0x100362d0.
  The `lw` at 0x1001839c loads 4 bytes from abs 0x100362d4.
  2 such `lbu` accesses load 1 byte from abs 0x100362fd, including `lbu` at 0x100183ec, `lbu` at 0x1001847c.
  2 such `lw` accesses load 4 bytes from abs 0x10036304, including `lw` at 0x100183f0, `lw` at 0x10018448.
  The `lw` at 0x100183f4 loads 4 bytes from abs 0x10036300.
  The `jal` at 0x100183cc calls (unnamed) [0x100180f0] with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x100183e4 calls vsnprintf with a0=sp-4208, a1=0x1000, a2=a1 at entry (arg1), a3=sp-48.
  The `jal` at 0x10018408 calls dl_output_set_lock [0x1001a784] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10018420 calls (unnamed) [0x10018024] with a0=sp-4208, a1=sp-112, a2=?, a3=?.
  The `jal` at 0x1001844c calls (unnamed) [0x100171d8] with a0=0x100287b8, a1=a0 at entry (arg0), a2=[0x10036304], a3=0x1002b6ae, a4=ret(0x10018024).
  The `jal` at 0x1001846c calls (unnamed) [0x10018024] with a0=?, a1=sp-112, a2=?, a3=?.
  The `jal` at 0x10018488 calls dl_output_unset_lock [0x1001a7bc] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001849c calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x1001837c targets 0x10018498, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `bne` branch at 0x10018390 targets 0x100183b4, is taken when a0(=[0x100362f9]:1) != 0, and falls through when a0(=[0x100362f9]:1) == 0.
  The `bne` branch at 0x100183a4 targets 0x100183c4, is taken when t8(=[0x100362d4]) < t9(=[0x100362d0]) (unsigned), and falls through when t8(=[0x100362d4]) >= t9(=[0x100362d0]) (unsigned).
  The `beq` branch at 0x100183ac targets 0x100183c4, is taken when ra(=a0) == 0, and falls through when ra(=a0) != 0.
  The `beq` branch at 0x100183fc targets 0x10018410, is taken when ra(=[0x100362fd]:1) == 0, and falls through when ra(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10018428 targets 0x1001847c, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `bne` branch at 0x10018474 targets 0x10018430, is taken when v0(=ret(0x10018024)) != 0, and falls through when v0(=ret(0x10018024)) == 0.
  The `beq` branch at 0x10018480 targets 0x100183b0, is taken when at(=[0x100362fd]:1) == 0, and falls through when at(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10018490 targets 0x100183b4 and is always taken.
  The `beq` branch at 0x100184a4 targets 0x10018388 and is always taken.
  The return at 0x100183bc has v0 = one of ?, ret(dl_output_unset_lock).

- `dl_output_hdbg` in `usr/diags/SG/bin/olsgsys` at 0x100184ac (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100184ac-0x100186c8 (540 bytes).
  It occupies 540 bytes.
  The `lw` at 0x10018500 loads 4 bytes from abs 0x100362e0.
  The `lw` at 0x10018504 loads 4 bytes from abs 0x100362e4.
  The `lbu` at 0x10018508 loads 1 byte from abs 0x100362fc.
  The `lw` at 0x1001850c loads 4 bytes from abs 0x10036314.
  The `lw` at 0x10018514 loads 4 bytes from abs 0x100362d0.
  The `lw` at 0x1001851c loads 4 bytes from abs 0x100362e8.
  The `sw` at 0x10018520 stores 4 bytes to abs 0x100362e0.
  The `lw` at 0x10018538 loads 4 bytes from abs 0x100362d4.
  2 such `lbu` accesses load 1 byte from abs 0x100362fd, including `lbu` at 0x10018574, `lbu` at 0x10018654.
  2 such `lw` accesses load 4 bytes from abs 0x10036304, including `lw` at 0x10018578, `lw` at 0x10018608.
  The `lw` at 0x1001857c loads 4 bytes from abs 0x10036300.
  2 such `lbu` accesses load 1 byte from abs 0x1003633c, including `lbu` at 0x10018594, `lbu` at 0x10018634.
  2 such `lbu` accesses load 1 byte from abs 0x1003633d, including `lbu` at 0x10018598, `lbu` at 0x100186ac.
  The `lbu` at 0x100185b0 loads 1 byte from abs 0x1003633f.
  The `sb` at 0x100186c4 stores 1 byte to abs 0x1003633f.
  The `jal` at 0x10018550 calls (unnamed) [0x100180f0] with a0=0x0, a1=[0x100362e8], a2=[0x100362d0], a3=?, a4=[one of 0x100362e0, 0x100362e4], a5=[0x100362fc]:1, a6=[0x100362e0].
  The `jalr` at 0x1001856c calls vsnprintf with a0=sp-4240, a1=0x1000, a2=a1 at entry (arg1), a3=sp-48.
  The `jal` at 0x1001858c calls dl_output_set_lock [0x1001a784] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100185dc calls (unnamed) [0x10018024] with a0=sp-4240, a1=sp-144, a2=?, a3=?.
  The `jal` at 0x1001860c calls (unnamed) [0x100171d8] with a0=0x100287d8, a1=a0 at entry (arg0), a2=[0x10036304], a3=0x1002b6ae, a4=ret(0x10018024).
  The `jal` at 0x10018624 calls (unnamed) [0x10018024] with a0=?, a1=sp-144, a2=?, a3=?.
  The `jal` at 0x1001864c calls dl_output_hrtb_cont [0x10019b80] with a0=?, a1=[0x1003633c]:1, a2=?, a3=?.
  The `jal` at 0x10018660 calls dl_output_unset_lock [0x1001a7bc] with a0=?, a1=?, a2=[0x100362fd]:1, a3=?.
  The `jal` at 0x10018688 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x100186a0 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=?, a3=?.
  The `jal` at 0x100186b4 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=?, a3=?.
  The `beq` branch at 0x100184f0 targets 0x10018684, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x10018524 targets 0x10018538, is taken when a4(=[one of 0x100362e0, 0x100362e4]) >= s1(=a0) (signed), and falls through when a4(=[one of 0x100362e0, 0x100362e4]) < s1(=a0) (signed).
  The `beq` branch at 0x1001852c targets 0x10018668, is taken when a0(=[0x10036314]) == 0, and falls through when a0(=[0x10036314]) != 0.
  The `bne` branch at 0x10018534 targets 0x10018668, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `bne` branch at 0x10018540 targets 0x1001866c, is taken when v0(=[0x100362d0]+1) < t9(=[0x100362d4]) (unsigned), and falls through when v0(=[0x100362d0]+1) >= t9(=[0x100362d4]) (unsigned).
  The `beq` branch at 0x10018580 targets 0x10018594, is taken when t9(=[0x100362fd]:1) == 0, and falls through when t9(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x1001859c targets 0x100185c0, is taken when ra(=[0x1003633c]:1) == 0, and falls through when ra(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x100185a4 targets 0x10018698, is taken when v0(=[0x1003633d]:1) == 0, and falls through when v0(=[0x1003633d]:1) != 0.
  The `beq` branch at 0x100185b4 targets 0x100185c0, is taken when v0(=[0x1003633d]:1) == 0, and falls through when v0(=[0x1003633d]:1) != 0.
  The `beq` branch at 0x100185bc targets 0x100186b0, is taken when a0(=[0x1003633f]:1) == 0, and falls through when a0(=[0x1003633f]:1) != 0.
  The `beq` branch at 0x100185e4 targets 0x10018634, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `bne` branch at 0x1001862c targets 0x100185f4, is taken when v0(=ret(0x10018024)) != 0, and falls through when v0(=ret(0x10018024)) == 0.
  The `beq` branch at 0x10018640 targets 0x10018654, is taken when a1(=[0x1003633c]:1) == 0, and falls through when a1(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x10018658 targets 0x10018668, is taken when a2(=[0x100362fd]:1) == 0, and falls through when a2(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10018690 targets 0x100184fc and is always taken.
  The `beq` branch at 0x100186a8 targets 0x100185ac and is always taken.
  The `beq` branch at 0x100186c0 targets 0x100185c0 and is always taken.
  The return at 0x1001867c has v0 = one of [0x100362d0]+1, ?.

- `dl_output_rev` in `usr/diags/SG/bin/olsgsys` at 0x100186c8 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100186c8-0x10018814 (332 bytes).
  It occupies 332 bytes.
  The `lbu` at 0x10018714 loads 1 byte from abs 0x100362f8.
  2 such `lbu` accesses load 1 byte from abs 0x100362fd, including `lbu` at 0x10018758, `lbu` at 0x100187e4.
  2 such `lw` accesses load 4 bytes from abs 0x10036304, including `lw` at 0x1001875c, `lw` at 0x100187b0.
  The `lw` at 0x10018760 loads 4 bytes from abs 0x10036300.
  The `jal` at 0x10018738 calls (unnamed) [0x100180f0] with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x10018750 calls vsnprintf with a0=sp-4208, a1=0x1000, a2=a0 at entry (arg0), a3=sp-56.
  The `jal` at 0x10018774 calls dl_output_set_lock [0x1001a784] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001878c calls (unnamed) [0x10018024] with a0=sp-4208, a1=sp-112, a2=?, a3=?.
  The `jal` at 0x100187b4 calls (unnamed) [0x100171d8] with a0=0x100287f8, a1=[0x10036304], a2=0x1002b6ae, a3=ret(0x10018024).
  The `jal` at 0x100187d4 calls (unnamed) [0x10018024] with a0=?, a1=sp-112, a2=?, a3=?.
  The `jal` at 0x100187f0 calls dl_output_unset_lock [0x1001a7bc] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10018804 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x10018704 targets 0x10018800, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x10018718 targets 0x10018730, is taken when a0(=[0x100362f8]:1) == 0, and falls through when a0(=[0x100362f8]:1) != 0.
  The `beq` branch at 0x10018768 targets 0x1001877c, is taken when ra(=[0x100362fd]:1) == 0, and falls through when ra(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10018794 targets 0x100187e4, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `bne` branch at 0x100187dc targets 0x1001879c, is taken when v0(=ret(0x10018024)) != 0, and falls through when v0(=ret(0x10018024)) == 0.
  The `beq` branch at 0x100187e8 targets 0x1001871c, is taken when at(=[0x100362fd]:1) == 0, and falls through when at(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x100187f8 targets 0x10018720 and is always taken.
  The `beq` branch at 0x1001880c targets 0x10018710 and is always taken.
  The return at 0x10018728 has v0 = one of ?, ret(dl_output_unset_lock).

- `dl_output_help` in `usr/diags/SG/bin/olsgsys` at 0x10018814 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10018814-0x100189a4 (400 bytes).
  It occupies 400 bytes.
  2 such `lbu` accesses load 1 byte from abs 0x100362fd, including `lbu` at 0x10018874, `lbu` at 0x10018954.
  2 such `lw` accesses load 4 bytes from abs 0x10036304, including `lw` at 0x100188a4, `lw` at 0x10018928.
  The `lw` at 0x100188ac loads 4 bytes from abs 0x10036300.
  The `jal` at 0x10018880 calls dl_output_set_lock [0x1001a784] with a0=[0x100362fd]:1, a1=?, a2=?, a3=?.
  The `jalr` at 0x10018898 calls vsnprintf with a0=sp-4240, a1=0x1000, a2=a1 at entry (arg1), a3=sp-48.
  The `jal` at 0x100188c4 calls (unnamed) [0x10018024] with a0=a0 at entry (arg0), a1=sp-144, a2=?, a3=?.
  The `jal` at 0x100188f8 calls (unnamed) [0x100171d8] with a0=0x10028818, a1=sp-4240, a2=[0x10036304], a3=0x1002b6ae, a4=ret(0x10018024).
  The `jal` at 0x10018914 calls (unnamed) [0x10018024] with a0=?, a1=sp-144, a2=?, a3=?.
  The `jal` at 0x10018944 calls (unnamed) [0x100171d8] with a0=0x10028818, a1=0x1002b6c0, a2=[0x10036304], a3=0x1002b6ae, a4=ret(0x10018024).
  The `jal` at 0x10018960 calls dl_output_unset_lock [0x1001a7bc] with a0=?, a1=[0x100362fd]:1, a2=?, a3=?.
  The `jal` at 0x10018994 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x10018864 targets 0x10018990, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x10018878 targets 0x10018888, is taken when a0(=[0x100362fd]:1) == 0, and falls through when a0(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x100188d0 targets 0x10018954, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `beq` branch at 0x100188d8 targets 0x10018924 and is always taken.
  The `beq` branch at 0x1001891c targets 0x10018954, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `bne` branch at 0x10018924 targets 0x100188e0, is taken when s3(=one of 0x0, 0x1) != 0, and falls through when s3(=one of 0x0, 0x1) == 0.
  The `beq` branch at 0x1001894c targets 0x10018908 and is always taken.
  The `beq` branch at 0x10018958 targets 0x10018968, is taken when a1(=[0x100362fd]:1) == 0, and falls through when a1(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x1001899c targets 0x10018870 and is always taken.
  The return at 0x10018988 has v0 = one of ret(0x10018024), ret(dl_output_unset_lock).

- `dl_output_info` in `usr/diags/SG/bin/olsgsys` at 0x100189a4 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100189a4-0x10018b7c (472 bytes).
  It occupies 472 bytes.
  3 such `lbu` accesses load 1 byte from abs 0x100362f3, including `lbu` at 0x100189f4, `lbu` at 0x10018a9c, `lbu` at 0x10018ac0.
  The `lw` at 0x100189fc loads 4 bytes from abs 0x10036314.
  2 such `lbu` accesses load 1 byte from abs 0x100362fd, including `lbu` at 0x10018a30, `lbu` at 0x10018ae0.
  2 such `lw` accesses load 4 bytes from abs 0x10036304, including `lw` at 0x10018a34, `lw` at 0x10018b24.
  The `lw` at 0x10018a38 loads 4 bytes from abs 0x10036300.
  2 such `lbu` accesses load 1 byte from abs 0x1003633c, including `lbu` at 0x10018a50, `lbu` at 0x10018ac4.
  2 such `lbu` accesses load 1 byte from abs 0x1003633d, including `lbu` at 0x10018a58, `lbu` at 0x10018b60.
  The `lbu` at 0x10018a64 loads 1 byte from abs 0x1003633f.
  The `sb` at 0x10018b78 stores 1 byte to abs 0x1003633f.
  The `jal` at 0x10018a0c calls (unnamed) [0x100180f0] with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x10018a28 calls vsnprintf with a0=sp-4224, a1=0x1000, a2=a0 at entry (arg0), a3=sp-56.
  The `jal` at 0x10018a48 calls dl_output_set_lock [0x1001a784] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10018a88 calls (unnamed) [0x10018024] with a0=sp-4224, a1=sp-128, a2=?, a3=?.
  The `jal` at 0x10018ab4 calls (unnamed) [0x10018024] with a0=?, a1=sp-128, a2=?, a3=?.
  The `jal` at 0x10018ad8 calls dl_output_hrtb_cont [0x10019b80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10018aec calls dl_output_unset_lock [0x1001a7bc] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10018b28 calls (unnamed) [0x100171d8] with a0=0x10028830, a1=[0x10036304], a2=0x1002b6ae, a3=ret(0x10018024).
  The `jal` at 0x10018b3c calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10018b54 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=0x10010000, a3=?.
  The `jal` at 0x10018b68 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=0x100171d8, a3=[0x1003633f]:1.
  The `beq` branch at 0x100189e4 targets 0x10018b38, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x100189f8 targets 0x10018a04, is taken when a0(=[0x100362f3]:1) == 0, and falls through when a0(=[0x100362f3]:1) != 0.
  The `beq` branch at 0x10018a00 targets 0x10018af4, is taken when v0(=[0x10036314]) == 0, and falls through when v0(=[0x10036314]) != 0.
  The `beq` branch at 0x10018a3c targets 0x10018a50, is taken when t9(=[0x100362fd]:1) == 0, and falls through when t9(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10018a54 targets 0x10018a74, is taken when ra(=[0x1003633c]:1) == 0, and falls through when ra(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x10018a5c targets 0x10018b4c, is taken when v0(=[0x1003633d]:1) == 0, and falls through when v0(=[0x1003633d]:1) != 0.
  The `beq` branch at 0x10018a68 targets 0x10018a74, is taken when v0(=[0x1003633d]:1) == 0, and falls through when v0(=[0x1003633d]:1) != 0.
  The `beq` branch at 0x10018a70 targets 0x10018b64, is taken when a3(=[0x1003633f]:1) == 0, and falls through when a3(=[0x1003633f]:1) != 0.
  The `beq` branch at 0x10018a90 targets 0x10018ac4, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `beq` branch at 0x10018aa0 targets 0x10018b0c, is taken when t8(=[0x100362f3]:1) == 0, and falls through when t8(=[0x100362f3]:1) != 0.
  The `bne` branch at 0x10018abc targets 0x10018aa0, is taken when v0(=ret(0x10018024)) != 0, and falls through when v0(=ret(0x10018024)) == 0.
  The `beq` branch at 0x10018acc targets 0x10018ae0, is taken when t9(=[0x1003633c]:1) == 0, and falls through when t9(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x10018ae4 targets 0x10018af4, is taken when ra(=[0x100362fd]:1) == 0, and falls through when ra(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10018b30 targets 0x10018aa8 and is always taken.
  The `beq` branch at 0x10018b44 targets 0x100189f0 and is always taken.
  The `beq` branch at 0x10018b5c targets 0x10018a60 and is always taken.
  The `beq` branch at 0x10018b74 targets 0x10018a74 and is always taken.
  The return at 0x10018b04 has v0 = one of [0x10036314], ?, ret(dl_output_unset_lock).

- `dl_output_error` in `usr/diags/SG/bin/olsgsys` at 0x10018b7c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10018b7c-0x10018dc8 (588 bytes).
  It occupies 588 bytes.
  The `lw` at 0x10018bd0 loads 4 bytes from abs 0x100362d0.
  2 such `lw` accesses load 4 bytes from abs 0x100362d4, including `lw` at 0x10018bd4, `lw` at 0x10018d5c.
  2 such `lbu` accesses load 1 byte from abs 0x100362fd, including `lbu` at 0x10018be0, `lbu` at 0x10018d48.
  2 such `lbu` accesses load 1 byte from abs 0x1003633c, including `lbu` at 0x10018bf4, `lbu` at 0x10018d20.
  2 such `lbu` accesses load 1 byte from abs 0x1003633d, including `lbu` at 0x10018bfc, `lbu` at 0x10018dac.
  The `lbu` at 0x10018c08 loads 1 byte from abs 0x1003633f.
  2 such `lw` accesses load 4 bytes from abs 0x10036304, including `lw` at 0x10018c50, `lw` at 0x10018ce4.
  The `lw` at 0x10018c54 loads 4 bytes from abs 0x10036300.
  2 such `lbu` accesses load 1 byte from abs 0x1003630d, including `lbu` at 0x10018ca8, `lbu` at 0x10018cf4.
  2 such `sb` accesses store 1 byte to abs 0x1003630c, including `sb` at 0x10018cb4, `sb` at 0x10018d0c.
  The `lbu` at 0x10018cf0 loads 1 byte from abs 0x1003630c.
  The `sw` at 0x10018d6c stores 4 bytes to abs 0x100362d4.
  The `sb` at 0x10018dc4 stores 1 byte to abs 0x1003633f.
  The `jal` at 0x10018bec calls dl_output_set_lock [0x1001a784] with a0=[0x100362fd]:1, a1=?, a2=?, a3=?.
  The `jal` at 0x10018c28 calls (unnamed) [0x100180f0] with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x10018c44 calls vsnprintf with a0=sp-4256, a1=0x1000, a2=a1 at entry (arg1), a3=sp-48.
  The `jal` at 0x10018c64 calls dl_server_error [0x1001cf1c] with a0=a0 at entry (arg0), a1=sp-4256, a2=?, a3=?.
  The `jal` at 0x10018c84 calls (unnamed) [0x10018024] with a0=sp-4256, a1=sp-160, a2=?, a3=?.
  The `jalr` at 0x10018cc4 calls fprintf with a0=sym(__iob)+16, a1=0x1002b6a8, a2=0xd, a3=?.
  The `jal` at 0x10018ce8 calls (unnamed) [0x100171d8] with a0=0x10028850, a1=a0 at entry (arg0), a2=[0x10036304], a3=0x1002b6ae, a4=ret(0x10018024).
  The `jal` at 0x10018d10 calls (unnamed) [0x10018024] with a0=?, a1=sp-160, a2=?, a3=[0x1003630d]:1.
  The `jal` at 0x10018d40 calls dl_output_hrtb_cont [0x10019b80] with a0=?, a1=?, a2=?, a3=[0x1003633c]:1.
  The `jal` at 0x10018d54 calls dl_output_unset_lock [0x1001a7bc] with a0=?, a1=?, a2=?, a3=?, a4=[0x100362fd]:1.
  The `jal` at 0x10018d88 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10018da0 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=?, a3=?.
  The `jal` at 0x10018db4 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=?, a3=?.
  The `beq` branch at 0x10018bc0 targets 0x10018d84, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x10018bdc targets 0x10018d60, is taken when v0(=[0x100362d4]) >= a0(=[0x100362d0]) (unsigned), and falls through when v0(=[0x100362d4]) < a0(=[0x100362d0]) (unsigned).
  The `beq` branch at 0x10018be4 targets 0x10018bf4, is taken when a0(=[0x100362fd]:1) == 0, and falls through when a0(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10018bf8 targets 0x10018c18, is taken when t8(=[0x1003633c]:1) == 0, and falls through when t8(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x10018c00 targets 0x10018d98, is taken when v0(=[0x1003633d]:1) == 0, and falls through when v0(=[0x1003633d]:1) != 0.
  The `beq` branch at 0x10018c0c targets 0x10018c18, is taken when v0(=[0x1003633d]:1) == 0, and falls through when v0(=[0x1003633d]:1) != 0.
  The `beq` branch at 0x10018c14 targets 0x10018db0, is taken when a0(=[0x1003633f]:1) == 0, and falls through when a0(=[0x1003633f]:1) != 0.
  The `beq` branch at 0x10018c98 targets 0x10018d20, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `beq` branch at 0x10018cac targets 0x10018ccc, is taken when t8(=[0x1003630d]:1) == 0, and falls through when t8(=[0x1003630d]:1) != 0.
  The `bne` branch at 0x10018d18 targets 0x10018ca8, is taken when v0(=ret(0x10018024)) != 0, and falls through when v0(=ret(0x10018024)) == 0.
  The `beq` branch at 0x10018d34 targets 0x10018d48, is taken when a3(=[0x1003633c]:1) == 0, and falls through when a3(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x10018d4c targets 0x10018d5c, is taken when a4(=[0x100362fd]:1) == 0, and falls through when a4(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10018d90 targets 0x10018bcc and is always taken.
  The `beq` branch at 0x10018da8 targets 0x10018c04 and is always taken.
  The `beq` branch at 0x10018dc0 targets 0x10018c18 and is always taken.
  The return at 0x10018d7c has v0 = [0x100362d4].

- `dl_output_nshp` in `usr/diags/SG/bin/olsgsys` at 0x10018dc8 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10018dc8-0x10018f78 (432 bytes).
  It occupies 432 bytes.
  3 such `lbu` accesses load 1 byte from abs 0x100362fd, including `lbu` at 0x10018e24, `lbu` at 0x10018ee8, `lbu` at 0x10018f74.
  2 such `lbu` accesses load 1 byte from abs 0x100362f0, including `lbu` at 0x10018e60, `lbu` at 0x10018ee0.
  2 such `lw` accesses load 4 bytes from abs 0x10036304, including `lw` at 0x10018e64, `lw` at 0x10018eb4.
  The `lw` at 0x10018e68 loads 4 bytes from abs 0x10036300.
  The `jal` at 0x10018e30 calls dl_output_set_lock [0x1001a784] with a0=[0x100362fd]:1, a1=?, a2=?, a3=?.
  The `jal` at 0x10018e40 calls (unnamed) [0x100180f0] with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x10018e58 calls vsnprintf with a0=sp-4224, a1=0x1000, a2=a0 at entry (arg0), a3=sp-56.
  The `jal` at 0x10018e90 calls (unnamed) [0x10018024] with a0=sp-4224, a1=sp-128, a2=?, a3=?.
  The `jal` at 0x10018eb8 calls (unnamed) [0x100171d8] with a0=0x10028870, a1=[0x10036304], a2=0x1002b6ae, a3=ret(0x10018024).
  The `jal` at 0x10018ed0 calls (unnamed) [0x10018024] with a0=?, a1=sp-128, a2=?, a3=?.
  The `jal` at 0x10018ef4 calls dl_output_unset_lock [0x1001a7bc] with a0=?, a1=?, a2=[0x100362fd]:1, a3=?.
  The `jal` at 0x10018f24 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10018f50 calls (unnamed) [0x100171d8] with a0=0x10028700, a1=0x1b, a2=0x7, a3=0x1b, a4=0x4.
  The `jal` at 0x10018f68 calls (unnamed) [0x100171d8] with a0=0x1002b6b0, a1=0x1b, a2=[0x100362fd]:1, a3=?.
  The `beq` branch at 0x10018e14 targets 0x10018f20, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x10018e28 targets 0x10018e38, is taken when a0(=[0x100362fd]:1) == 0, and falls through when a0(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10018e6c targets 0x10018f34, is taken when t9(=[0x100362f0]:1) == 0, and falls through when t9(=[0x100362f0]:1) != 0.
  The `beq` branch at 0x10018e98 targets 0x10018ee0, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `bne` branch at 0x10018ed8 targets 0x10018ea4, is taken when v0(=ret(0x10018024)) != 0, and falls through when v0(=ret(0x10018024)) == 0.
  The `beq` branch at 0x10018ee4 targets 0x10018f60, is taken when a1(=[0x100362f0]:1) == 0, and falls through when a1(=[0x100362f0]:1) != 0.
  The `beq` branch at 0x10018eec targets 0x10018efc, is taken when a2(=[0x100362fd]:1) == 0, and falls through when a2(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10018f2c targets 0x10018e20 and is always taken.
  The `beq` branch at 0x10018f58 targets 0x10018e78 and is always taken.
  The `beq` branch at 0x10018f70 targets 0x10018eec and is always taken.
  The return at 0x10018f18 has v0 = one of ?, ret(dl_output_unset_lock).

- `dl_output_meta` in `usr/diags/SG/bin/olsgsys` at 0x10018f78 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10018f78-0x1001910c (404 bytes).
  It occupies 404 bytes.
  2 such `lbu` accesses load 1 byte from abs 0x1003630c, including `lbu` at 0x10018fd4, `lbu` at 0x100190b0.
  2 such `lbu` accesses load 1 byte from abs 0x1003630d, including `lbu` at 0x10018fd8, `lbu` at 0x100190b4.
  2 such `lbu` accesses load 1 byte from abs 0x100362fd, including `lbu` at 0x10018fdc, `lbu` at 0x100190b8.
  2 such `sb` accesses store 1 byte to abs 0x1003630c, including `sb` at 0x10018fec, `sb` at 0x100190c4.
  2 such `lw` accesses load 4 bytes from abs 0x10036300, including `lw` at 0x1001902c, `lw` at 0x10019074.
  The `jal` at 0x10018ff4 calls dl_output_set_lock [0x1001a784] with a0=?, a1=[0x100362fd]:1, a2=[0x1003630d]:1, a3=[0x1003630c]:1.
  The `jal` at 0x10019004 calls (unnamed) [0x100180f0] with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001901c calls vsnprintf with a0=sp-4224, a1=0x1000, a2=a1 at entry (arg1), a3=sp-48.
  The `jal` at 0x10019030 calls (unnamed) [0x10017c18] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x1001904c calls (unnamed) [0x10018024] with a0=sp-4224, a1=sp-128, a2=[0x10036300], a3=?.
  The `jal` at 0x10019078 calls (unnamed) [0x100171d8] with a0=0x10028890, a1=0x1002b6ae, a2=[0x10036300], a3=?.
  The `jal` at 0x10019090 calls (unnamed) [0x10018024] with a0=?, a1=sp-128, a2=[0x10036300], a3=?.
  The `jal` at 0x100190a8 calls (unnamed) [0x10017ce8] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100190cc calls dl_output_unset_lock [0x1001a7bc] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100190fc calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x10018fc4 targets 0x100190f8, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x10018fe8 targets 0x10018ffc, is taken when a1(=[0x100362fd]:1) == 0, and falls through when a1(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10019054 targets 0x100190a0, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `bne` branch at 0x10019098 targets 0x10019068, is taken when v0(=ret(0x10018024)) != 0, and falls through when v0(=ret(0x10018024)) == 0.
  The `beq` branch at 0x100190c0 targets 0x100190d4, is taken when at(=[0x100362fd]:1) == 0, and falls through when at(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10019104 targets 0x10018fd0 and is always taken.
  The return at 0x100190f0 has v0 = one of [0x1003630d]:1, ret(dl_output_unset_lock).

- `dl_output_uniq` in `usr/diags/SG/bin/olsgsys` at 0x1001910c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001910c-0x100192dc (464 bytes).
  It occupies 464 bytes.
  2 such `lbu` accesses load 1 byte from abs 0x100362fd, including `lbu` at 0x10019168, `lbu` at 0x10019248.
  2 such `lbu` accesses load 1 byte from abs 0x1003633c, including `lbu` at 0x100191a4, `lbu` at 0x10019260.
  2 such `lw` accesses load 4 bytes from abs 0x10036304, including `lw` at 0x100191a8, `lw` at 0x1001921c.
  The `lw` at 0x100191ac loads 4 bytes from abs 0x10036300.
  2 such `lbu` accesses load 1 byte from abs 0x1003633d, including `lbu` at 0x100191b0, `lbu` at 0x100192c0.
  The `lbu` at 0x100191c4 loads 1 byte from abs 0x1003633f.
  The `sb` at 0x100192d8 stores 1 byte to abs 0x1003633f.
  The `jal` at 0x10019174 calls dl_output_set_lock [0x1001a784] with a0=[0x100362fd]:1, a1=?, a2=?, a3=?.
  The `jal` at 0x10019184 calls (unnamed) [0x100180f0] with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001919c calls vsnprintf with a0=sp-4240, a1=0x1000, a2=a1 at entry (arg1), a3=sp-48.
  The `jal` at 0x100191f0 calls (unnamed) [0x10018024] with a0=sp-4240, a1=sp-144, a2=?, a3=?.
  The `jal` at 0x10019220 calls (unnamed) [0x100171d8] with a0=0x100288b0, a1=a0 at entry (arg0), a2=[0x10036304], a3=0x1002b6ae, a4=ret(0x10018024).
  The `jal` at 0x10019238 calls (unnamed) [0x10018024] with a0=?, a1=sp-144, a2=?, a3=?.
  The `jal` at 0x10019258 calls dl_output_unset_lock [0x1001a7bc] with a0=?, a1=[0x100362fd]:1, a2=?, a3=?.
  The `jal` at 0x1001926c calls dl_output_hrtb_cont [0x10019b80] with a0=?, a1=?, a2=[0x1003633c]:1, a3=?.
  The `jal` at 0x1001929c calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x100192b4 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=?, a3=?.
  The `jal` at 0x100192c8 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=?, a3=?.
  The `beq` branch at 0x10019158 targets 0x10019298, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x1001916c targets 0x1001917c, is taken when a0(=[0x100362fd]:1) == 0, and falls through when a0(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x100191b4 targets 0x100191d4, is taken when t9(=[0x1003633c]:1) == 0, and falls through when t9(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x100191bc targets 0x100192ac, is taken when v0(=[0x1003633d]:1) == 0, and falls through when v0(=[0x1003633d]:1) != 0.
  The `beq` branch at 0x100191c8 targets 0x100191d4, is taken when v0(=[0x1003633d]:1) == 0, and falls through when v0(=[0x1003633d]:1) != 0.
  The `beq` branch at 0x100191d0 targets 0x100192c4, is taken when a0(=[0x1003633f]:1) == 0, and falls through when a0(=[0x1003633f]:1) != 0.
  The `beq` branch at 0x100191f8 targets 0x10019248, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `bne` branch at 0x10019240 targets 0x10019208, is taken when v0(=ret(0x10018024)) != 0, and falls through when v0(=ret(0x10018024)) == 0.
  The `beq` branch at 0x1001924c targets 0x10019260, is taken when a1(=[0x100362fd]:1) == 0, and falls through when a1(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10019264 targets 0x10019274, is taken when a2(=[0x1003633c]:1) == 0, and falls through when a2(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x100192a4 targets 0x10019164 and is always taken.
  The `beq` branch at 0x100192bc targets 0x100191c0 and is always taken.
  The `beq` branch at 0x100192d4 targets 0x100191d4 and is always taken.
  The return at 0x10019290 has v0 = one of ?, ret(dl_output_hrtb_cont).

- `dl_output_trce` in `usr/diags/SG/bin/olsgsys` at 0x100192dc (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100192dc-0x100194dc (512 bytes).
  It occupies 512 bytes.
  3 such `lbu` accesses load 1 byte from abs 0x100362f4, including `lbu` at 0x1001932c, `lbu` at 0x100193d4, `lbu` at 0x10019420.
  2 such `lw` accesses load 4 bytes from abs 0x10036314, including `lw` at 0x10019334, `lw` at 0x100193dc.
  2 such `lbu` accesses load 1 byte from abs 0x100362fd, including `lbu` at 0x10019368, `lbu` at 0x10019440.
  3 such `lw` accesses load 4 bytes from abs 0x10036304, including `lw` at 0x1001936c, `lw` at 0x100193f8, `lw` at 0x10019484.
  The `lw` at 0x10019370 loads 4 bytes from abs 0x10036300.
  2 such `lbu` accesses load 1 byte from abs 0x1003633c, including `lbu` at 0x10019388, `lbu` at 0x10019424.
  2 such `lbu` accesses load 1 byte from abs 0x1003633d, including `lbu` at 0x10019390, `lbu` at 0x100194c0.
  The `lbu` at 0x1001939c loads 1 byte from abs 0x1003633f.
  The `sb` at 0x100194d8 stores 1 byte to abs 0x1003633f.
  The `jal` at 0x10019344 calls (unnamed) [0x100180f0] with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x10019360 calls vsnprintf with a0=sp-4224, a1=0x1000, a2=a0 at entry (arg0), a3=sp-56.
  The `jal` at 0x10019380 calls dl_output_set_lock [0x1001a784] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100193c0 calls (unnamed) [0x10018024] with a0=sp-4224, a1=sp-128, a2=?, a3=?.
  The `jalr` at 0x100193fc calls fprintf with a0=[0x10036314], a1=0x100288d0, a2=[0x10036304], a3=0x1002b6ae, a4=ret(0x10018024).
  The `jal` at 0x10019414 calls (unnamed) [0x10018024] with a0=?, a1=sp-128, a2=?, a3=?.
  The `jal` at 0x10019438 calls dl_output_hrtb_cont [0x10019b80] with a0=?, a1=?, a2=[0x1003633c]:1, a3=?.
  The `jal` at 0x1001944c calls dl_output_unset_lock [0x1001a7bc] with a0=?, a1=?, a2=?, a3=[0x100362fd]:1.
  The `jal` at 0x10019488 calls (unnamed) [0x100171d8] with a0=0x100288d0, a1=[0x10036304], a2=0x1002b6ae, a3=ret(0x10018024).
  The `jal` at 0x1001949c calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x100194b4 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=0x10010000, a3=?.
  The `jal` at 0x100194c8 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=0x100171d8, a3=?.
  The `beq` branch at 0x1001931c targets 0x10019498, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x10019330 targets 0x1001933c, is taken when a0(=[0x100362f4]:1) == 0, and falls through when a0(=[0x100362f4]:1) != 0.
  The `beq` branch at 0x10019338 targets 0x10019454, is taken when v0(=[0x10036314]) == 0, and falls through when v0(=[0x10036314]) != 0.
  The `beq` branch at 0x10019374 targets 0x10019388, is taken when t9(=[0x100362fd]:1) == 0, and falls through when t9(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x1001938c targets 0x100193ac, is taken when ra(=[0x1003633c]:1) == 0, and falls through when ra(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x10019394 targets 0x100194ac, is taken when v0(=[0x1003633d]:1) == 0, and falls through when v0(=[0x1003633d]:1) != 0.
  The `beq` branch at 0x100193a0 targets 0x100193ac, is taken when v0(=[0x1003633d]:1) == 0, and falls through when v0(=[0x1003633d]:1) != 0.
  The `beq` branch at 0x100193a8 targets 0x100194c4, is taken when a0(=[0x1003633f]:1) == 0, and falls through when a0(=[0x1003633f]:1) != 0.
  The `beq` branch at 0x100193c8 targets 0x10019424, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `beq` branch at 0x100193d8 targets 0x1001946c, is taken when t8(=[0x100362f4]:1) == 0, and falls through when t8(=[0x100362f4]:1) != 0.
  The `beq` branch at 0x100193e0 targets 0x10019404, is taken when a0(=[0x10036314]) == 0, and falls through when a0(=[0x10036314]) != 0.
  The `bne` branch at 0x1001941c targets 0x100193d8, is taken when v0(=ret(0x10018024)) != 0, and falls through when v0(=ret(0x10018024)) == 0.
  The `beq` branch at 0x1001942c targets 0x10019440, is taken when a2(=[0x1003633c]:1) == 0, and falls through when a2(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x10019444 targets 0x10019454, is taken when a3(=[0x100362fd]:1) == 0, and falls through when a3(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10019490 targets 0x10019408 and is always taken.
  The `beq` branch at 0x100194a4 targets 0x10019328 and is always taken.
  The `beq` branch at 0x100194bc targets 0x10019398 and is always taken.
  The `beq` branch at 0x100194d4 targets 0x100193ac and is always taken.
  The return at 0x10019464 has v0 = one of [0x10036314], ?, ret(dl_output_unset_lock).

- `dl_output_lmask` in `usr/diags/SG/bin/olsgsys` at 0x100194dc (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100194dc-0x10019758 (636 bytes).
  It occupies 636 bytes.
  3 such `lw` accesses load 4 bytes from abs 0x100362d8, including `lw` at 0x10019534, `lw` at 0x1001956c, `lw` at 0x100196f0.
  The `lw` at 0x10019538 loads 4 bytes from abs 0x100362dc.
  The `lbu` at 0x1001953c loads 1 byte from abs 0x100362fc.
  The `sw` at 0x10019548 stores 4 bytes to abs 0x100362d8.
  2 such `lw` accesses load 4 bytes from abs 0x100362ec, including `lw` at 0x10019560, `lw` at 0x10019724.
  2 such `lbu` accesses load 1 byte from abs 0x100362fd, including `lbu` at 0x100195a8, `lbu` at 0x1001968c.
  2 such `lw` accesses load 4 bytes from abs 0x10036304, including `lw` at 0x100195ac, `lw` at 0x10019640.
  The `lw` at 0x100195b0 loads 4 bytes from abs 0x10036300.
  2 such `lbu` accesses load 1 byte from abs 0x1003633c, including `lbu` at 0x100195c8, `lbu` at 0x1001966c.
  2 such `lbu` accesses load 1 byte from abs 0x1003633d, including `lbu` at 0x100195cc, `lbu` at 0x1001973c.
  The `lbu` at 0x100195e4 loads 1 byte from abs 0x1003633f.
  The `sb` at 0x10019754 stores 1 byte to abs 0x1003633f.
  The `jal` at 0x10019584 calls (unnamed) [0x100180f0] with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x100195a0 calls vsnprintf with a0=sp-4240, a1=0x1000, a2=a2 at entry (arg2), a3=sp-40.
  The `jal` at 0x100195c0 calls dl_output_set_lock [0x1001a784] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10019610 calls (unnamed) [0x10018024] with a0=sp-4240, a1=sp-144, a2=?, a3=?.
  The `jal` at 0x10019644 calls (unnamed) [0x100171d8] with a0=0x10028950, a1=a1 at entry (arg1), a2=a0 at entry (arg0), a3=[0x10036304], a4=0x1002b6ae, a5=ret(0x10018024).
  The `jal` at 0x1001965c calls (unnamed) [0x10018024] with a0=?, a1=sp-144, a2=?, a3=?.
  The `jal` at 0x10019684 calls dl_output_hrtb_cont [0x10019b80] with a0=?, a1=[0x1003633c]:1, a2=?, a3=?.
  The `jal` at 0x10019698 calls dl_output_unset_lock [0x1001a7bc] with a0=?, a1=?, a2=[0x100362fd]:1, a3=?.
  The `jalr` at 0x100196d4 calls __assert with a0=0x100288f0, a1=0x10028918, a2=0x65b, a3=?.
  The `jal` at 0x100196f8 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10019718 calls __assert with a0=0x10028928, a1=0x10028918, a2=0x65e, a3=?.
  The `jal` at 0x10019730 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=?, a3=?.
  The `jal` at 0x10019744 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=?, a3=?.
  The `beq` branch at 0x10019524 targets 0x100196f4, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `bltz` branch at 0x10019544 targets 0x100196c0, is taken when s1(=a0) < 0 (signed), and falls through when s1(=a0) >= 0 (signed).
  The `beq` branch at 0x10019550 targets 0x100196c4, is taken when s1(=a0) >= 0xa (signed), and falls through when s1(=a0) < 0xa (signed).
  The `bltz` branch at 0x10019558 targets 0x10019708, is taken when s2(=a1) < 0 (signed), and falls through when s2(=a1) >= 0 (signed).
  The `beq` branch at 0x10019568 targets 0x100196e4, is taken when (t9(=[0x100362ec]) & s2(=a1)) == 0, and falls through when (t9(=[0x100362ec]) & s2(=a1)) != 0.
  The `bne` branch at 0x10019574 targets 0x100196a4, is taken when ra(=[0x100362d8]) < s1(=a0) (signed), and falls through when ra(=[0x100362d8]) >= s1(=a0) (signed).
  The `beq` branch at 0x100195b4 targets 0x100195c8, is taken when t9(=[0x100362fd]:1) == 0, and falls through when t9(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x100195d0 targets 0x100195f4, is taken when ra(=[0x1003633c]:1) == 0, and falls through when ra(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x100195d8 targets 0x10019728, is taken when v0(=[0x1003633d]:1) == 0, and falls through when v0(=[0x1003633d]:1) != 0.
  The `beq` branch at 0x100195e8 targets 0x100195f4, is taken when v0(=[0x1003633d]:1) == 0, and falls through when v0(=[0x1003633d]:1) != 0.
  The `beq` branch at 0x100195f0 targets 0x10019740, is taken when a0(=[0x1003633f]:1) == 0, and falls through when a0(=[0x1003633f]:1) != 0.
  The `beq` branch at 0x10019618 targets 0x1001966c, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `bne` branch at 0x10019664 targets 0x10019628, is taken when v0(=ret(0x10018024)) != 0, and falls through when v0(=ret(0x10018024)) == 0.
  The `beq` branch at 0x10019678 targets 0x1001968c, is taken when a1(=[0x1003633c]:1) == 0, and falls through when a1(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x10019690 targets 0x100196a0, is taken when a2(=[0x100362fd]:1) == 0, and falls through when a2(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x100196dc targets 0x10019558 and is always taken.
  The `bne` branch at 0x100196e4 targets 0x100196a4, is taken when s2(=a1) != 0, and falls through when s2(=a1) == 0.
  The `beq` branch at 0x100196ec targets 0x10019570 and is always taken.
  The `beq` branch at 0x10019700 targets 0x10019530 and is always taken.
  The `beq` branch at 0x10019720 targets 0x10019564 and is always taken.
  The `beq` branch at 0x10019738 targets 0x100195e0 and is always taken.
  The `beq` branch at 0x10019750 targets 0x100195f4 and is always taken.
  The return at 0x100196b8 has v0 = ?.

- `dl_output_dbug` in `usr/diags/SG/bin/olsgsys` at 0x10019758 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10019758-0x1001999c (580 bytes).
  It occupies 580 bytes.
  3 such `lw` accesses load 4 bytes from abs 0x100362d8, including `lw` at 0x100197ac, `lw` at 0x100198bc, `lw` at 0x10019954.
  The `lw` at 0x100197b0 loads 4 bytes from abs 0x100362dc.
  The `lbu` at 0x100197b4 loads 1 byte from abs 0x100362fc.
  The `sw` at 0x100197c0 stores 4 bytes to abs 0x100362d8.
  The `lw` at 0x100197d4 loads 4 bytes from abs 0x10036314.
  The `lw` at 0x100197dc loads 4 bytes from abs 0x100362e8.
  2 such `lbu` accesses load 1 byte from abs 0x100362fd, including `lbu` at 0x10019830, `lbu` at 0x10019918.
  2 such `lw` accesses load 4 bytes from abs 0x10036304, including `lw` at 0x10019834, `lw` at 0x100198e8.
  The `lw` at 0x10019838 loads 4 bytes from abs 0x10036300.
  2 such `lbu` accesses load 1 byte from abs 0x1003633c, including `lbu` at 0x10019850, `lbu` at 0x100198fc.
  2 such `lbu` accesses load 1 byte from abs 0x1003633d, including `lbu` at 0x10019858, `lbu` at 0x10019980.
  The `lbu` at 0x10019864 loads 1 byte from abs 0x1003633f.
  The `sb` at 0x10019998 stores 1 byte to abs 0x1003633f.
  The `jal` at 0x1001980c calls (unnamed) [0x100180f0] with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x10019828 calls vsnprintf with a0=sp-4224, a1=0x1000, a2=a1 at entry (arg1), a3=sp-48.
  The `jal` at 0x10019848 calls dl_output_set_lock [0x1001a784] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10019888 calls (unnamed) [0x10018024] with a0=sp-4224, a1=sp-128, a2=?, a3=?.
  The `jal` at 0x100198b0 calls (unnamed) [0x10018024] with a0=?, a1=sp-128, a2=?, a3=?.
  The `jal` at 0x100198ec calls (unnamed) [0x100171d8] with a0=0x10028970, a1=a0 at entry (arg0), a2=[0x10036304], a3=0x1002b6ae, a4=ret(0x10018024).
  The `jal` at 0x10019910 calls dl_output_hrtb_cont [0x10019b80] with a0=?, a1=[0x1003633c]:1, a2=?, a3=?.
  The `jal` at 0x10019924 calls dl_output_unset_lock [0x1001a7bc] with a0=?, a1=?, a2=[0x100362fd]:1, a3=?.
  The `jalr` at 0x10019948 calls __assert with a0=0x100288f0, a1=0x10028918, a2=0x69b, a3=?.
  The `jal` at 0x1001995c calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10019974 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=0x10010000, a2=?, a3=?.
  The `jal` at 0x10019988 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=0x100171d8, a2=?, a3=?.
  The `beq` branch at 0x1001979c targets 0x10019958, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `bltz` branch at 0x100197bc targets 0x10019934, is taken when s1(=a0) < 0 (signed), and falls through when s1(=a0) >= 0 (signed).
  The `beq` branch at 0x100197c8 targets 0x10019934, is taken when s1(=a0) >= 0xa (signed), and falls through when s1(=a0) < 0xa (signed).
  The `beq` branch at 0x100197d0 targets 0x10019804, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x100197d8 targets 0x100197e8, is taken when ra(=[0x10036314]) == 0, and falls through when ra(=[0x10036314]) != 0.
  The `beq` branch at 0x100197e4 targets 0x10019804, is taken when at(=[0x100362e8]) >= s1(=a0) (signed), and falls through when at(=[0x100362e8]) < s1(=a0) (signed).
  The `beq` branch at 0x1001983c targets 0x10019850, is taken when t9(=[0x100362fd]:1) == 0, and falls through when t9(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10019854 targets 0x10019874, is taken when ra(=[0x1003633c]:1) == 0, and falls through when ra(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x1001985c targets 0x1001996c, is taken when v0(=[0x1003633d]:1) == 0, and falls through when v0(=[0x1003633d]:1) != 0.
  The `beq` branch at 0x10019868 targets 0x10019874, is taken when v0(=[0x1003633d]:1) == 0, and falls through when v0(=[0x1003633d]:1) != 0.
  The `beq` branch at 0x10019870 targets 0x10019984, is taken when a0(=[0x1003633f]:1) == 0, and falls through when a0(=[0x1003633f]:1) != 0.
  The `beq` branch at 0x10019890 targets 0x100198fc, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `beq` branch at 0x10019898 targets 0x100198bc and is always taken.
  The `beq` branch at 0x100198b8 targets 0x100198fc, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `bne` branch at 0x100198c4 targets 0x100198a4, is taken when t8(=[0x100362d8]) < s1(=a0) (signed), and falls through when t8(=[0x100362d8]) >= s1(=a0) (signed).
  The `beq` branch at 0x100198f4 targets 0x100198a4 and is always taken.
  The `beq` branch at 0x10019904 targets 0x10019918, is taken when a1(=[0x1003633c]:1) == 0, and falls through when a1(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x1001991c targets 0x100197e8, is taken when a2(=[0x100362fd]:1) == 0, and falls through when a2(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x1001992c targets 0x100197ec and is always taken.
  The `beq` branch at 0x10019950 targets 0x100197cc and is always taken.
  The `beq` branch at 0x10019964 targets 0x100197a8 and is always taken.
  The `beq` branch at 0x1001997c targets 0x10019860 and is always taken.
  The `beq` branch at 0x10019994 targets 0x10019874 and is always taken.
  The return at 0x100197fc has v0 = one of [one of 0x100362d8, 0x100362dc], ?, ret(dl_output_unset_lock).
  The instructions from 0x100198a0 to 0x100198a0 are not reached by any path from the entry, and their branches are not listed.

- `dl_output_hrtb_start` in `usr/diags/SG/bin/olsgsys` at 0x1001999c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001999c-0x10019b80 (484 bytes).
  It occupies 484 bytes.
  The `lbu` at 0x100199e8 loads 1 byte from abs 0x100362f5.
  The `lbu` at 0x100199f0 loads 1 byte from abs 0x1003633c.
  2 such `lbu` accesses load 1 byte from abs 0x100362fd, including `lbu` at 0x10019a2c, `lbu` at 0x10019ab4.
  2 such `lw` accesses load 4 bytes from abs 0x10036304, including `lw` at 0x10019a4c, `lw` at 0x10019b48.
  The `lw` at 0x10019a50 loads 4 bytes from abs 0x10036300.
  The `sb` at 0x10019ad8 stores 1 byte to abs 0x1003633c.
  The `sw` at 0x10019b28 stores 4 bytes to abs 0x10036338.
  The `jalr` at 0x10019a0c calls __assert with a0=0x10028988, a1=0x10028918, a2=0x6d6, a3=?.
  The `jalr` at 0x10019a24 calls vsnprintf with a0=sp-4240, a1=0x1000, a2=a0 at entry (arg0), a3=sp-56.
  The `jal` at 0x10019a3c calls dl_output_set_lock [0x1001a784] with a0=?, a1=?, a2=[0x100362fd]:1, a3=?.
  The `jalr` at 0x10019a60 calls strlen with a0=sp-4240, a1=?, a2=?, a3=?.
  The `jal` at 0x10019a8c calls (unnamed) [0x10018024] with a0=sp-4240, a1=sp-144, a2=?, a3=?.
  The `jal` at 0x10019ae0 calls dl_output_unset_lock [0x1001a7bc] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10019b10 calls (unnamed) [0x100171d8] with a0=0x100289c0, a1=[0x10036304], a2=0x1002b6ae, a3=ret(0x10018024).
  The `jal` at 0x10019b2c calls (unnamed) [0x10018024] with a0=?, a1=sp-144, a2=?, a3=?.
  The `jal` at 0x10019b5c calls (unnamed) [0x100171d8] with a0=0x100289a0, a1=[0x10036304], a2=0x1002b6ae, a3=?.
  The `jal` at 0x10019b70 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x100199d8 targets 0x10019b6c, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `bne` branch at 0x100199ec targets 0x10019ae8, is taken when a0(=[0x100362f5]:1) != 0, and falls through when a0(=[0x100362f5]:1) == 0.
  The `beq` branch at 0x100199f4 targets 0x10019a14, is taken when v0(=[0x1003633c]:1) == 0, and falls through when v0(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x10019a30 targets 0x10019a48, is taken when a2(=[0x100362fd]:1) == 0, and falls through when a2(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10019aa0 targets 0x10019ab4, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `beq` branch at 0x10019aac targets 0x10019b3c and is always taken.
  The `beq` branch at 0x10019ad4 targets 0x10019ae8, is taken when t9(=[0x100362fd]:1) == 0, and falls through when t9(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10019b34 targets 0x10019ab4, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `bne` branch at 0x10019b44 targets 0x10019afc, is taken when s2(?) != a1(=-0x1), and falls through when s2(?) == a1(=-0x1).
  The `beq` branch at 0x10019b64 targets 0x10019b1c and is always taken.
  The `beq` branch at 0x10019b78 targets 0x100199e4 and is always taken.
  The return at 0x10019af4 has v0 = one of [0x1003633c]:1, ret(0x10018024), ret(dl_output_unset_lock).

- `dl_output_hrtb_cont` in `usr/diags/SG/bin/olsgsys` at 0x10019b80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10019b80-0x10019d18 (408 bytes).
  It occupies 408 bytes.
  The `lbu` at 0x10019bb0 loads 1 byte from abs 0x100362f5.
  The `lbu` at 0x10019bb8 loads 1 byte from abs 0x1003633c.
  2 such `lbu` accesses load 1 byte from abs 0x1003633d, including `lbu` at 0x10019bc0, `lbu` at 0x10019d14.
  The `sb` at 0x10019bcc stores 1 byte to abs 0x1003633e.
  2 such `lw` accesses load 4 bytes from abs 0x10036304, including `lw` at 0x10019c14, `lw` at 0x10019cbc.
  The `lw` at 0x10019c18 loads 4 bytes from abs 0x10036300.
  The `sw` at 0x10019c84 stores 4 bytes to abs 0x10036338.
  The `jal` at 0x10019bec calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10019c08 calls sprintf with a0=sp-4160, a1=0x100289f8, a2=?, a3=?.
  The `jalr` at 0x10019c20 calls strlen with a0=sp-4160, a1=?, a2=?, a3=?.
  The `jal` at 0x10019c4c calls (unnamed) [0x10018024] with a0=sp-4160, a1=sp-64, a2=?, a3=?.
  The `jal` at 0x10019c78 calls (unnamed) [0x100171d8] with a0=0x100289c0, a1=[0x10036304], a2=0x1002b6ae, a3=ret(0x10018024).
  The `jal` at 0x10019c9c calls (unnamed) [0x10018024] with a0=?, a1=sp-64, a2=?, a3=?.
  The `jal` at 0x10019cdc calls (unnamed) [0x100171d8] with a0=0x100289a0, a1=[0x10036304], a2=0x1002b6ae, a3=?.
  The `jalr` at 0x10019d08 calls __assert with a0=0x100289e0, a1=0x10028918, a2=0x709, a3=?.
  The `beq` branch at 0x10019ba0 targets 0x10019be8, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `bne` branch at 0x10019bb4 targets 0x10019bd0, is taken when a0(=[0x100362f5]:1) != 0, and falls through when a0(=[0x100362f5]:1) == 0.
  The `beq` branch at 0x10019bbc targets 0x10019cf4, is taken when v0(=[0x1003633c]:1) == 0, and falls through when v0(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x10019bc4 targets 0x10019bfc, is taken when t8(=[0x1003633d]:1) == 0, and falls through when t8(=[0x1003633d]:1) != 0.
  The `beq` branch at 0x10019bf4 targets 0x10019bac and is always taken.
  The `beq` branch at 0x10019c54 targets 0x10019bd0, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `beq` branch at 0x10019c5c targets 0x10019cb0 and is always taken.
  The `beq` branch at 0x10019ca8 targets 0x10019cec, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `bne` branch at 0x10019cc0 targets 0x10019c64, is taken when at(?) != v1(=-0x1), and falls through when at(?) == v1(=-0x1).
  The `beq` branch at 0x10019ce4 targets 0x10019c84 and is always taken.
  The `beq` branch at 0x10019cec targets 0x10019bd4 and is always taken.
  The `beq` branch at 0x10019d10 targets 0x10019bc4 and is always taken.
  The return at 0x10019be0 has v0 = one of ?, ret(0x10018024).

- `dl_output_hrtb` in `usr/diags/SG/bin/olsgsys` at 0x10019d18 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10019d18-0x10019e50 (312 bytes).
  It occupies 312 bytes.
  2 such `lbu` accesses load 1 byte from abs 0x100362fd, including `lbu` at 0x10019d44, `lbu` at 0x10019df0.
  The `lbu` at 0x10019d58 loads 1 byte from abs 0x100362f5.
  The `lbu` at 0x10019d60 loads 1 byte from abs 0x1003633c.
  The `lw` at 0x10019d74 loads 4 bytes from abs 0x10036304.
  The `lw` at 0x10019d78 loads 4 bytes from abs 0x10036300.
  2 such `lw` accesses load 4 bytes from abs 0x10036338, including `lw` at 0x10019d7c, `lw` at 0x10019de4.
  2 such `sw` accesses store 4 bytes to abs 0x10036338, including `sw` at 0x10019dc4, `sw` at 0x10019dec.
  The `jal` at 0x10019d50 calls dl_output_set_lock [0x1001a784] with a0=[0x100362fd]:1, a1=?, a2=?, a3=?.
  The `jalr` at 0x10019d6c calls strlen with a0=0x1002b6c2, a1=?, a2=?, a3=?.
  The `jal` at 0x10019da8 calls (unnamed) [0x100171d8] with a0=0x10028a08, a1=[0x10036304], a2=0x1002b6ae, a3=0x1002b6c2.
  The `jalr` at 0x10019db4 calls strlen with a0=0x1002b6c2, a1=?, a2=?, a3=?.
  The `jal` at 0x10019dd0 calls (unnamed) [0x100171d8] with a0=0x1002b69c, a1=0x1002b6c2, a2=?, a3=?.
  The `jalr` at 0x10019ddc calls strlen with a0=0x1002b6c2, a1=?, a2=?, a3=?.
  The `jal` at 0x10019dfc calls dl_output_unset_lock [0x1001a7bc] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10019e1c calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10019e40 calls __assert with a0=0x100289e0, a1=0x10028918, a2=0x73b, a3=?.
  The `beq` branch at 0x10019d34 targets 0x10019e18, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x10019d48 targets 0x10019d58, is taken when a0(=[0x100362fd]:1) == 0, and falls through when a0(=[0x100362fd]:1) != 0.
  The `bne` branch at 0x10019d5c targets 0x10019df0, is taken when t8(=[0x100362f5]:1) != 0, and falls through when t8(=[0x100362f5]:1) == 0.
  The `beq` branch at 0x10019d64 targets 0x10019e2c, is taken when a1(=[0x1003633c]:1) == 0, and falls through when a1(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x10019d8c targets 0x10019dc8, is taken when t9(?) >= ra(=([0x10036338] + ret(strlen))) (unsigned), and falls through when t9(?) < ra(=([0x10036338] + ret(strlen))) (unsigned).
  The `beq` branch at 0x10019dc0 targets 0x10019df0 and is always taken.
  The `beq` branch at 0x10019df4 targets 0x10019e04, is taken when at(=[0x100362fd]:1) == 0, and falls through when at(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x10019e24 targets 0x10019d40 and is always taken.
  The `beq` branch at 0x10019e48 targets 0x10019d6c and is always taken.
  The return at 0x10019e10 has v0 = one of ?, ret(dl_output_unset_lock).

- `dl_output_hrtb_end` in `usr/diags/SG/bin/olsgsys` at 0x10019e50 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10019e50-0x10019f48 (248 bytes).
  It occupies 248 bytes.
  The `lbu` at 0x10019e78 loads 1 byte from abs 0x100362f5.
  The `lbu` at 0x10019e80 loads 1 byte from abs 0x1003633c.
  The `lw` at 0x10019e9c loads 4 bytes from abs 0x10036300.
  The `lw` at 0x10019ea0 loads 4 bytes from abs 0x10036338.
  The `lw` at 0x10019ea4 loads 4 bytes from abs 0x10036304.
  The `sb` at 0x10019ee0 stores 1 byte to abs 0x1003633c.
  The `jalr` at 0x10019e8c calls strlen with a0=0x1002b6c8, a1=?, a2=?, a3=?.
  The `jal` at 0x10019ed0 calls (unnamed) [0x100171d8] with a0=0x10028a28, a1=[0x10036304], a2=0x1002b6ae, a3=0x1002b6c8.
  The `jal` at 0x10019f00 calls (unnamed) [0x100171d8] with a0=0x1002b6d0, a1=0x1002b6c8, a2=?, a3=([0x10036338] + ret(strlen))+1.
  The `jal` at 0x10019f14 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10019f38 calls __assert with a0=0x100289e0, a1=0x10028918, a2=0x75a, a3=?.
  The `beq` branch at 0x10019e68 targets 0x10019f10, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `bne` branch at 0x10019e7c targets 0x10019ee4, is taken when a2(=[0x100362f5]:1) != 0, and falls through when a2(=[0x100362f5]:1) == 0.
  The `beq` branch at 0x10019e84 targets 0x10019f24, is taken when a1(=[0x1003633c]:1) == 0, and falls through when a1(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x10019eb8 targets 0x10019ef4, is taken when a2(?) >= a3(=([0x10036338] + ret(strlen))+1) (unsigned), and falls through when a2(?) < a3(=([0x10036338] + ret(strlen))+1) (unsigned).
  The `beq` branch at 0x10019f08 targets 0x10019edc and is always taken.
  The `beq` branch at 0x10019f1c targets 0x10019e74 and is always taken.
  The `beq` branch at 0x10019f40 targets 0x10019e8c and is always taken.
  The return at 0x10019eec has v0 = one of ?, ret(0x100171d8).

- `dl_output_hrtb_pause` in `usr/diags/SG/bin/olsgsys` at 0x10019f48 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10019f48-0x10019fc0 (120 bytes).
  It occupies 120 bytes.
  The `lbu` at 0x10019f64 loads 1 byte from abs 0x100362f5.
  The `lbu` at 0x10019f6c loads 1 byte from abs 0x1003633c.
  The `sb` at 0x10019f78 stores 1 byte to abs 0x1003633e.
  The `sb` at 0x10019f7c stores 1 byte to abs 0x1003633f.
  The `sb` at 0x10019f84 stores 1 byte to abs 0x1003633d.
  The `jalr` at 0x10019fa8 calls __assert with a0=0x100289e0, a1=0x10028918, a2=0x771, a3=0x18ef0.
  The `bne` branch at 0x10019f68 targets 0x10019f88, is taken when at(=[0x100362f5]:1) != 0, and falls through when at(=[0x100362f5]:1) == 0.
  The `beq` branch at 0x10019f70 targets 0x10019f94, is taken when a1(=[0x1003633c]:1) == 0, and falls through when a1(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x10019fb8 targets 0x10019f78 and is always taken.
  The return at 0x10019f8c has v0 = ?.

- `dl_output_hrtb_unpause` in `usr/diags/SG/bin/olsgsys` at 0x10019fc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10019fc0-0x1001a048 (136 bytes).
  It occupies 136 bytes.
  The `lbu` at 0x10019fe0 loads 1 byte from abs 0x100362f5.
  The `lbu` at 0x10019fec loads 1 byte from abs 0x1003633c.
  2 such `sb` accesses store 1 byte to abs 0x1003633f, including `sb` at 0x10019ff8, `sb` at 0x1001a044.
  The `sb` at 0x10019ffc stores 1 byte to abs 0x1003633d.
  The `lbu` at 0x1001a000 loads 1 byte from abs 0x1003633e.
  The `jal` at 0x1001a00c calls dl_output_hrtb_cont [0x10019b80] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001a038 calls __assert with a0=0x100289e0, a1=0x10028918, a2=0x77d, a3=a3 at entry (arg3).
  The `bne` branch at 0x10019fe8 targets 0x1001a000, is taken when at(=[0x100362f5]:1) != 0, and falls through when at(=[0x100362f5]:1) == 0.
  The `beq` branch at 0x10019ff0 targets 0x1001a028, is taken when a1(=[0x1003633c]:1) == 0, and falls through when a1(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x1001a004 targets 0x1001a014, is taken when t9(=[0x1003633e]:1) == 0, and falls through when t9(=[0x1003633e]:1) != 0.
  The `beq` branch at 0x1001a040 targets 0x10019ffc and is always taken.
  The return at 0x1001a020 has v0 = one of ?, ret(dl_output_hrtb_cont).

- `dl_output_abrt` in `usr/diags/SG/bin/olsgsys` at 0x1001a048 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a048-0x1001a220 (472 bytes).
  It occupies 472 bytes.
  2 such `lbu` accesses load 1 byte from abs 0x100362fd, including `lbu` at 0x1001a0b4, `lbu` at 0x1001a1ac.
  The `lbu` at 0x1001a0f4 loads 1 byte from abs 0x1003633c.
  2 such `lw` accesses load 4 bytes from abs 0x10036304, including `lw` at 0x1001a0f8, `lw` at 0x1001a164.
  2 such `lw` accesses load 4 bytes from abs 0x10036300, including `lw` at 0x1001a0fc, `lw` at 0x1001a170.
  The `jalr` at 0x1001a094 calls exit with a0=0x1, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1001a0c0 calls dl_output_set_lock [0x1001a784] with a0=[0x100362fd]:1, a1=?, a2=?, a3=?.
  The `jal` at 0x1001a0d0 calls (unnamed) [0x100180f0] with a0=0x1, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001a0ec calls vsnprintf with a0=sp-4224, a1=0x1000, a2=a0 at entry (arg0), a3=sp-56.
  The `jal` at 0x1001a110 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=?, a2=?, a3=?.
  The `jal` at 0x1001a12c calls (unnamed) [0x10017c18] with a0=0x10, a1=?, a2=?, a3=?.
  The `jal` at 0x1001a148 calls (unnamed) [0x10018024] with a0=sp-4224, a1=sp-128, a2=?, a3=?.
  The `jal` at 0x1001a174 calls (unnamed) [0x100171d8] with a0=0x10028a48, a1=[0x10036304], a2=0x1002b6ae, a3=[0x10036300], a4=ret(0x10018024).
  The `jal` at 0x1001a18c calls (unnamed) [0x10018024] with a0=?, a1=sp-128, a2=?, a3=?.
  The `jal` at 0x1001a1a4 calls (unnamed) [0x10017ce8] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001a1b8 calls dl_output_unset_lock [0x1001a7bc] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001a1c4 calls dl_output_exit_printlock [0x1001a68c] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001a1d0 calls dl_output_exit_crashlog [0x10016e74] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001a1dc calls dl_output_cleanup [0x10016684] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001a1ec calls dl_hash_lookup [0x1001d410] with a0=0x10028a68, a1=?, a2=?, a3=?.
  The `jal` at 0x1001a1f8 calls dl_logInterruptedEvent [0x1001aa18] with a0=ret(dl_hash_lookup), a1=?, a2=?, a3=?.
  The `jalr` at 0x1001a204 calls exit with a0=0x1, a1=?, a2=?, a3=?.
  The `jal` at 0x1001a210 calls dl_output_init_env [0x10016180] with a0=0x0, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1001a088 targets 0x1001a09c, is taken when at(=[0x1002bb68]) == 0, and falls through when at(=[0x1002bb68]) != 0.
  The `beq` branch at 0x1001a0a4 targets 0x1001a20c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x1001a0b8 targets 0x1001a0c8, is taken when a0(=[0x100362fd]:1) == 0, and falls through when a0(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x1001a100 targets 0x1001a118, is taken when t9(=[0x1003633c]:1) == 0, and falls through when t9(=[0x1003633c]:1) != 0.
  The `beq` branch at 0x1001a150 targets 0x1001a19c, is taken when v0(=ret(0x10018024)) == 0, and falls through when v0(=ret(0x10018024)) != 0.
  The `bne` branch at 0x1001a194 targets 0x1001a15c, is taken when v0(=ret(0x10018024)) != 0, and falls through when v0(=ret(0x10018024)) == 0.
  The `beq` branch at 0x1001a1b0 targets 0x1001a1c0, is taken when ra(=[0x100362fd]:1) == 0, and falls through when ra(=[0x100362fd]:1) != 0.
  The `beq` branch at 0x1001a218 targets 0x1001a0b0 and is always taken.

- `dl_output_time` in `usr/diags/SG/bin/olsgsys` at 0x1001a220 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a220-0x1001a258 (56 bytes).
  It occupies 56 bytes.
  The `jal` at 0x1001a240 calls (unnamed) [0x100180f0] with a0=0x1, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x1001a250 has v0 = ret(0x100180f0).

- `dl_output_code_start` in `usr/diags/SG/bin/olsgsys` at 0x1001a258 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a258-0x1001a32c (212 bytes).
  It occupies 212 bytes.
  The `lbu` at 0x1001a2b0 loads 1 byte from abs 0x100362f1.
  The `lw` at 0x1001a2d0 loads 4 bytes from sym(TEST) +0x0.
  The `lw` at 0x1001a2dc loads 4 bytes from [sym(TEST)] +0x0.
  The `jal` at 0x1001a300 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1001a31c calls (unnamed) [0x100171d8] with a0=0x10028a78, a1=?, a2=?, a3=[0x100362f1]:1.
  The `beq` branch at 0x1001a278 targets 0x1001a2fc, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x1001a284 targets 0x1001a2cc, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x1001a290 targets 0x1001a2e0, is taken when s0(=a0) == v1(=0x1), and falls through when s0(=a0) != v1(=0x1).
  The `beq` branch at 0x1001a298 targets 0x1001a2e8, is taken when s0(=a0) == a1(=0x2), and falls through when s0(=a0) != a1(=0x2).
  The `beq` branch at 0x1001a2a0 targets 0x1001a2f4, is taken when s0(=a0) == a1(=0x3), and falls through when s0(=a0) != a1(=0x3).
  The `beq` branch at 0x1001a2b4 targets 0x1001a310, is taken when a3(=[0x100362f1]:1) == 0, and falls through when a3(=[0x100362f1]:1) != 0.
  The `beq` branch at 0x1001a2d8 targets 0x1001a2b0 and is always taken.
  The `beq` branch at 0x1001a2e0 targets 0x1001a2b0 and is always taken.
  The `beq` branch at 0x1001a2ec targets 0x1001a2b0 and is always taken.
  The `beq` branch at 0x1001a2f4 targets 0x1001a2b0 and is always taken.
  The `beq` branch at 0x1001a308 targets 0x1001a284 and is always taken.
  The `beq` branch at 0x1001a324 targets 0x1001a2bc and is always taken.
  The return at 0x1001a2c4 has v0 = one of ?, ret(0x100171d8).

- `dl_output_code` in `usr/diags/SG/bin/olsgsys` at 0x1001a32c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a32c-0x1001a3f4 (200 bytes).
  It occupies 200 bytes.
  The `lbu` at 0x1001a394 loads 1 byte from abs 0x100362f1.
  The `lw` at 0x1001a39c loads 4 bytes from abs 0x10036318.
  The `jalr` at 0x1001a384 calls vsnprintf with a0=sp-4176, a1=0x1000, a2=a0 at entry (arg0), a3=sp-56.
  The `jalr` at 0x1001a3ac calls fprintf with a0=[0x10036318], a1=0x1002b69c, a2=sp-4176, a3=?.
  The `jal` at 0x1001a3c8 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1001a3e4 calls (unnamed) [0x100171d8] with a0=0x1002b69c, a1=sp-4176, a2=?, a3=?.
  The `beq` branch at 0x1001a368 targets 0x1001a3c4, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x1001a370 targets 0x1001a3b4, is taken when t1(=a0) == 0, and falls through when t1(=a0) != 0.
  The `beq` branch at 0x1001a398 targets 0x1001a3d8, is taken when a1(=[0x100362f1]:1) == 0, and falls through when a1(=[0x100362f1]:1) != 0.
  The `beq` branch at 0x1001a3a0 targets 0x1001a3b4, is taken when a0(=[0x10036318]) == 0, and falls through when a0(=[0x10036318]) != 0.
  The `beq` branch at 0x1001a3d0 targets 0x1001a370 and is always taken.
  The `beq` branch at 0x1001a3ec targets 0x1001a3b8 and is always taken.
  The return at 0x1001a3bc has v0 = one of ?, ret(0x100171d8).

- `dl_output_code_end` in `usr/diags/SG/bin/olsgsys` at 0x1001a3f4 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a3f4-0x1001a4d0 (220 bytes).
  It occupies 220 bytes.
  The `lbu` at 0x1001a41c loads 1 byte from abs 0x100362f1.
  3 such `lw` accesses load 4 bytes from abs 0x10036318, including `lw` at 0x1001a42c, `lw` at 0x1001a45c, `lw` at 0x1001a474.
  The `lw` at 0x1001a434 loads 4 bytes from sym(__us_rsthread_stdio) +0x0.
  2 such `lw` accesses load 4 bytes from [0x10036318] +0x0, including `lw` at 0x1001a450, `lw` at 0x1001a460.
  The `sw` at 0x1001a458 stores 4 bytes to [0x10036318] +0x0.
  2 such `lw` accesses load 4 bytes from [0x10036318] +0x4, including `lw` at 0x1001a468, `lw` at 0x1001a478.
  The `sw` at 0x1001a470 stores 4 bytes to [0x10036318] +0x4.
  The `sb` at 0x1001a47c stores 1 byte to [[0x10036318]+4] -0x1.
  The `jalr` at 0x1001a440 calls __semputc with a0=0xa, a1=[0x10036318], a2=0x10036278, a3=sym(__us_rsthread_stdio), a4=[sym(__us_rsthread_stdio)], a7=0xa.
  The `jal` at 0x1001a494 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1001a4a8 calls __flsbuf with a0=0xa, a1=[0x10036318], a2=0x10036278, a3=[[0x10036318]+4], a4=[sym(__us_rsthread_stdio)], a5=[[0x10036318]], a6=[[0x10036318]]-1, a7=0xa.
  The `jal` at 0x1001a4c0 calls (unnamed) [0x100171d8] with a0=0x1002b6ac, a1=[0x10036318], a2=0x10036278, a3=sym(__us_rsthread_stdio), a7=0xa.
  The `beq` branch at 0x1001a40c targets 0x1001a490, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x1001a428 targets 0x1001a4b8, is taken when v1(=[0x100362f1]:1) == 0, and falls through when v1(=[0x100362f1]:1) != 0.
  The `beq` branch at 0x1001a430 targets 0x1001a480, is taken when a1(=[0x10036318]) == 0, and falls through when a1(=[0x10036318]) != 0.
  The `beq` branch at 0x1001a438 targets 0x1001a450, is taken when a4(=[sym(__us_rsthread_stdio)]) == 0, and falls through when a4(=[sym(__us_rsthread_stdio)]) != 0.
  The `beq` branch at 0x1001a448 targets 0x1001a484 and is always taken.
  The `bltz` branch at 0x1001a464 targets 0x1001a4a4, is taken when a5(=[[0x10036318]]) < 0 (signed), and falls through when a5(=[[0x10036318]]) >= 0 (signed).
  The `beq` branch at 0x1001a49c targets 0x1001a418 and is always taken.
  The `beq` branch at 0x1001a4b0 targets 0x1001a484 and is always taken.
  The `beq` branch at 0x1001a4c8 targets 0x1001a484 and is always taken.
  The return at 0x1001a488 has v0 = one of ret(__semputc), ?, ret(__flsbuf), ret(0x100171d8).

- `dl_output_indent` in `usr/diags/SG/bin/olsgsys` at 0x1001a4d0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a4d0-0x1001a540 (112 bytes).
  It occupies 112 bytes.
  The `lw` at 0x1001a4f8 loads 4 bytes from abs 0x10036308.
  The `lw` at 0x1001a4fc loads 4 bytes from abs 0x10036300.
  The `lw` at 0x1001a504 loads 4 bytes from abs 0x10036304.
  The `sw` at 0x1001a520 stores 4 bytes to abs 0x10036304.
  The `jal` at 0x1001a530 calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x1001a4e8 targets 0x1001a52c, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `bne` branch at 0x1001a518 targets 0x1001a524, is taken when a4(?) < a3(=[0x10036304]) (unsigned), and falls through when a4(?) >= a3(=[0x10036304]) (unsigned).
  The `beq` branch at 0x1001a538 targets 0x1001a4f0 and is always taken.
  The return at 0x1001a524 has v0 = ?.

- `dl_output_outdent` in `usr/diags/SG/bin/olsgsys` at 0x1001a540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a540-0x1001a59c (92 bytes).
  It occupies 92 bytes.
  The `lw` at 0x1001a568 loads 4 bytes from abs 0x10036304.
  The `lw` at 0x1001a574 loads 4 bytes from abs 0x10036308.
  The `sw` at 0x1001a57c stores 4 bytes to abs 0x10036304.
  The `jal` at 0x1001a58c calls dl_output_init_env [0x10016180] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x1001a558 targets 0x1001a588, is taken when at(=[0x1002bb40]:1) == 0, and falls through when at(=[0x1002bb40]:1) != 0.
  The `beq` branch at 0x1001a570 targets 0x1001a580, is taken when a1(=[0x10036304]) == 0, and falls through when a1(=[0x10036304]) != 0.
  The `beq` branch at 0x1001a594 targets 0x1001a560 and is always taken.
  The return at 0x1001a580 has v0 = ?.

- `dl_output_init_printlock` in `usr/diags/SG/bin/olsgsys` at 0x1001a59c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a59c-0x1001a68c (240 bytes).
  It occupies 240 bytes.
  The `sw` at 0x1001a5d4 stores 4 bytes to sym(dlpid) +0x0.
  The `sw` at 0x1001a604 stores 4 bytes to sym(print_sema) +0x0.
  The `lw` at 0x1001a618 loads 4 bytes from sym(dlpid) +0x0.
  The `sw` at 0x1001a648 stores 4 bytes to sym(ext_sema) +0x0.
  The `jalr` at 0x1001a5b8 calls getpid with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1001a5d8 calls sprintf with a0=sym(sema_name), a1=0x10028a88, a2=ret(getpid), a3=sym(dlpid).
  The `jalr` at 0x1001a5f0 calls sem_open with a0=sym(sema_name), a1=0x100, a2=0x1c0, a3=0x1.
  The `jalr` at 0x1001a61c calls sprintf with a0=sym(ext_sema_name), a1=0x10028ac0, a2=[sym(dlpid)], a3=?.
  The `jalr` at 0x1001a634 calls sem_open with a0=sym(ext_sema_name), a1=0x100, a2=0x1c0, a3=0x1.
  The `jal` at 0x1001a664 calls dl_output_abrt [0x1001a048] with a0=0x10028aa8, a1=?, a2=?, a3=?, a5=sym(print_sema), a6=-0x1.
  The `jal` at 0x1001a67c calls dl_output_abrt [0x1001a048] with a0=0x10028ae0, a1=?, a2=?, a3=sym(ext_sema), a4=-0x1.
  The `beq` branch at 0x1001a600 targets 0x1001a65c, is taken when v0(=ret(sem_open)) == a6(=-0x1), and falls through when v0(=ret(sem_open)) != a6(=-0x1).
  The `beq` branch at 0x1001a644 targets 0x1001a674, is taken when v0(=ret(sem_open)) == a4(=-0x1), and falls through when v0(=ret(sem_open)) != a4(=-0x1).
  The `beq` branch at 0x1001a66c targets 0x1001a60c and is always taken.
  The `beq` branch at 0x1001a684 targets 0x1001a650 and is always taken.
  The return at 0x1001a654 has v0 = one of ret(sem_open), ret(dl_output_abrt).

- `dl_output_exit_printlock` in `usr/diags/SG/bin/olsgsys` at 0x1001a68c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a68c-0x1001a784 (248 bytes).
  It occupies 248 bytes.
  The `sb` at 0x1001a6b0 stores 1 byte to abs 0x100362fd.
  The `lw` at 0x1001a6b8 loads 4 bytes from sym(dlpid) +0x0.
  The `lw` at 0x1001a6d0 loads 4 bytes from sym(print_sema) +0x0.
  The `lw` at 0x1001a6f8 loads 4 bytes from sym(ext_sema) +0x0.
  The `jalr` at 0x1001a6ac calls getpid with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1001a6cc calls sem_close with a0=[sym(print_sema)], a1=?, a2=?, a3=?.
  The `jalr` at 0x1001a6e0 calls sem_unlink with a0=sym(sema_name), a1=?, a2=?, a3=?.
  The `jalr` at 0x1001a6f4 calls sem_close with a0=[sym(ext_sema)], a1=?, a2=?, a3=?.
  The `jalr` at 0x1001a708 calls sem_unlink with a0=sym(ext_sema_name), a1=?, a2=?, a3=?.
  The `jal` at 0x1001a72c calls dl_output_info [0x100189a4] with a0=0x10028b00, a1=?, a2=?, a3=?.
  The `jal` at 0x1001a744 calls dl_output_info [0x100189a4] with a0=0x10028b40, a1=?, a2=?, a3=?.
  The `jal` at 0x1001a75c calls dl_output_abrt [0x1001a048] with a0=0x10028b20, a1=?, a2=?, a3=?.
  The `jal` at 0x1001a774 calls dl_output_abrt [0x1001a048] with a0=0x10028b20, a1=?, a2=?, a3=?.
  The `bne` branch at 0x1001a6bc targets 0x1001a718, is taken when v1(=[sym(dlpid)]) != v0(=ret(getpid)), and falls through when v1(=[sym(dlpid)]) == v0(=ret(getpid)).
  The `bne` branch at 0x1001a6d8 targets 0x1001a724, is taken when v0(=ret(sem_close)) < -0x1 (signed), and falls through when v0(=ret(sem_close)) >= -0x1 (signed).
  The `bltz` branch at 0x1001a6e8 targets 0x1001a754, is taken when v0(=ret(sem_unlink)) < 0 (signed), and falls through when v0(=ret(sem_unlink)) >= 0 (signed).
  The `bne` branch at 0x1001a700 targets 0x1001a73c, is taken when v0(=ret(sem_close)) < -0x1 (signed), and falls through when v0(=ret(sem_close)) >= -0x1 (signed).
  The `bltz` branch at 0x1001a710 targets 0x1001a76c, is taken when v0(=ret(sem_unlink)) < 0 (signed), and falls through when v0(=ret(sem_unlink)) >= 0 (signed).
  The `beq` branch at 0x1001a734 targets 0x1001a6e0 and is always taken.
  The `beq` branch at 0x1001a74c targets 0x1001a708 and is always taken.
  The `beq` branch at 0x1001a764 targets 0x1001a6f0 and is always taken.
  The `beq` branch at 0x1001a77c targets 0x1001a718 and is always taken.
  The return at 0x1001a71c has v0 = one of ret(getpid), ret(sem_unlink), ret(dl_output_abrt).

- `dl_output_set_lock` in `usr/diags/SG/bin/olsgsys` at 0x1001a784 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a784-0x1001a7bc (56 bytes).
  It occupies 56 bytes.
  The `lw` at 0x1001a7a8 loads 4 bytes from sym(print_sema) +0x0.
  The `jalr` at 0x1001a7a4 calls sem_wait with a0=[sym(print_sema)], a1=0x186b4, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x1001a7b4 has v0 = ret(sem_wait).

- `dl_output_unset_lock` in `usr/diags/SG/bin/olsgsys` at 0x1001a7bc (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a7bc-0x1001a7f4 (56 bytes).
  It occupies 56 bytes.
  The `lw` at 0x1001a7e0 loads 4 bytes from sym(print_sema) +0x0.
  The `jalr` at 0x1001a7dc calls sem_post with a0=[sym(print_sema)], a1=0x1867c, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x1001a7ec has v0 = ret(sem_post).

- `dl_output_set_ext_lock` in `usr/diags/SG/bin/olsgsys` at 0x1001a7f4 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a7f4-0x1001a82c (56 bytes).
  It occupies 56 bytes.
  The `lw` at 0x1001a818 loads 4 bytes from sym(ext_sema) +0x0.
  The `jalr` at 0x1001a814 calls sem_wait with a0=[sym(ext_sema)], a1=0x18644, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x1001a824 has v0 = ret(sem_wait).

- `dl_output_unset_ext_lock` in `usr/diags/SG/bin/olsgsys` at 0x1001a82c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a82c-0x1001a864 (56 bytes).
  It occupies 56 bytes.
  The `lw` at 0x1001a850 loads 4 bytes from sym(ext_sema) +0x0.
  The `jalr` at 0x1001a84c calls sem_post with a0=[sym(ext_sema)], a1=0x1860c, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x1001a85c has v0 = ret(sem_post).

- `dl_enableEspLogging` in `usr/diags/SG/bin/olsgsys` at 0x1001a864 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a864-0x1001a954 (240 bytes).
  It occupies 240 bytes.
  The `sw` at 0x1001a8d4 stores 4 bytes to sym(IsDaemonStarted) +0x0.
  The `lw` at 0x1001a8e4 loads 4 bytes from sym(IsDaemonStarted) +0x0.
  The `sw` at 0x1001a8f0 stores 4 bytes to sym(SendEvent) +0x0.
  The `jal` at 0x1001a88c calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10028b60, a2=0x185d4, a3=a3 at entry (arg3).
  The `jalr` at 0x1001a8a0 calls dlopen with a0=0x10028b80, a1=0x2, a2=?, a3=?.
  The `jalr` at 0x1001a8bc calls dlsym with a0=ret(dlopen), a1=0x10028b90, a2=?, a3=?.
  The `jalr` at 0x1001a8d8 calls dlsym with a0=ret(dlopen), a1=0x10028ba8, a2=sym(IsDaemonStarted), a3=?.
  The `jalr` at 0x1001a8fc calls (unknown callee) with a0=?, a1=?, a2=?, a3=sym(SendEvent).
  The `jal` at 0x1001a914 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10028be8, a2=?, a3=?.
  The `jal` at 0x1001a944 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10028bb8, a2=?, a3=sym(SendEvent).
  The `beq` branch at 0x1001a8a8 targets 0x1001a924, is taken when v0(=ret(dlopen)) == 0, and falls through when v0(=ret(dlopen)) != 0.
  The `beq` branch at 0x1001a8ec targets 0x1001a938, is taken when t9(=[sym(IsDaemonStarted)]) == 0, and falls through when t9(=[sym(IsDaemonStarted)]) != 0.
  The `beq` branch at 0x1001a8f4 targets 0x1001a938, is taken when v0(=ret(dlsym)) == 0, and falls through when v0(=ret(dlsym)) != 0.
  The `beq` branch at 0x1001a904 targets 0x1001a924, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `beq` branch at 0x1001a94c targets 0x1001a928 and is always taken.
  The return at 0x1001a930 has v0 = one of ?, ret(dl_output_dbug).

- `dl_disableEspLogging` in `usr/diags/SG/bin/olsgsys` at 0x1001a954 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a954-0x1001a994 (64 bytes).
  It occupies 64 bytes.
  The `jal` at 0x1001a97c calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10028c00, a2=0x184e4, a3=a3 at entry (arg3).
  The return at 0x1001a98c has v0 = ret(dl_output_dbug).

- `dl_isEspLoggingEnabled` in `usr/diags/SG/bin/olsgsys` at 0x1001a994 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a994-0x1001a9a8 (20 bytes).
  It occupies 20 bytes.
  The `lw` at 0x1001a9a4 loads 4 bytes from abs 0x1002bb6c.
  The return at 0x1001a9a0 has v0 = [0x1002bb6c].

- `dl_logStartEvent` in `usr/diags/SG/bin/olsgsys` at 0x1001a9a8 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001a9a8-0x1001aa18 (112 bytes).
  It occupies 112 bytes.
  The `lw` at 0x1001a9e0 loads 4 bytes from sym(SendEvent) +0x0.
  The `jal` at 0x1001a9cc calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10028c20, a2=0x18490, a3=a3 at entry (arg3).
  The `jalr` at 0x1001a9fc calls (unknown callee) with a0=0x0, a1=0x0, a2=0x200400, a3=0x46, a4=0x10028c40.
  The `beq` branch at 0x1001a9d8 targets 0x1001aa08, is taken when v0(=[0x1002bb6c]) == 0, and falls through when v0(=[0x1002bb6c]) != 0.
  The return at 0x1001aa10 has v0 = [0x1002bb6c].

- `dl_logInterruptedEvent` in `usr/diags/SG/bin/olsgsys` at 0x1001aa18 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001aa18-0x1001aa88 (112 bytes).
  It occupies 112 bytes.
  The `lw` at 0x1001aa50 loads 4 bytes from sym(SendEvent) +0x0.
  The `jal` at 0x1001aa3c calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10028c58, a2=0x18420, a3=a3 at entry (arg3).
  The `jalr` at 0x1001aa6c calls (unknown callee) with a0=0x0, a1=0x0, a2=0x200401, a3=0x46, a4=0x10028c78.
  The `beq` branch at 0x1001aa48 targets 0x1001aa78, is taken when v0(=[0x1002bb6c]) == 0, and falls through when v0(=[0x1002bb6c]) != 0.
  The return at 0x1001aa80 has v0 = [0x1002bb6c].

- `dl_logSingleTestEnd` in `usr/diags/SG/bin/olsgsys` at 0x1001aa88 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001aa88-0x1001ab3c (180 bytes).
  It occupies 180 bytes.
  The `lw` at 0x1001aaf8 loads 4 bytes from sym(SendEvent) +0x0.
  The `jalr` at 0x1001aab8 calls strlen with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1001aac8 calls malloc with a0=ret(strlen)+10, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001aae8 calls sprintf with a0=ret(malloc), a1=0x10028c90, a2=a0 at entry (arg0), a3=a1 at entry (arg1).
  The `jalr` at 0x1001ab0c calls (unknown callee) with a0=0x0, a1=0x0, a2=0x200402, a3=0x46, a4=ret(malloc).
  The `jalr` at 0x1001ab18 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0x1001aaac targets 0x1001ab28, is taken when at(=[0x1002bb6c]) == 0, and falls through when at(=[0x1002bb6c]) != 0.
  The return at 0x1001ab34 has v0 = 0x0.

- `dl_logMultipleTestEnd` in `usr/diags/SG/bin/olsgsys` at 0x1001ab3c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001ab3c-0x1001ada8 (620 bytes).
  It occupies 620 bytes.
  8 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1001abe0, `lw` at 0x1001abf4, `lw` at 0x1001ac14.
  The `lw` at 0x1001ad4c loads 4 bytes from sym(SendEvent) +0x0.
  The `jal` at 0x1001ab84 calls dl_hash_lookup [0x1001d410] with a0=0x10028ca0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1001ab9c calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10028cb0, a2=?, a3=?.
  The `jalr` at 0x1001abb4 calls strlen with a0=ret(dl_hash_lookup), a1=?, a2=[0x1002bb6c], a3=?.
  The `jalr` at 0x1001abdc calls strlen with a0=?, a1=?, a2=?, a3=?, a7=one of 0x0, 0x1, 0x3.
  The `jalr` at 0x1001acb4 calls malloc with a0=?, a1=?, a2=?, a3=?, a7=one of 0x0, 0x1, 0x2, 0x3.
  The `jalr` at 0x1001ace0 calls snprintf with a0=ret(malloc), a1=?, a2=0x10028cd0, a3=ret(dl_hash_lookup), a4=a1 at entry (arg1).
  The `jalr` at 0x1001ad2c calls snprintf with a0=ret(malloc), a1=?, a2=0x10028ce0, a3=ret(malloc), a4=0x7, a5=ret(dl_hash_lookup).
  The `jalr` at 0x1001ad60 calls (unknown callee) with a0=0x0, a1=0x0, a2=0x200402, a3=0x46, a4=ret(malloc).
  The `jalr` at 0x1001ad6c calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jal` at 0x1001ad84 calls dl_logSingleTestEnd [0x1001aa88] with a0=ret(dl_hash_lookup), a1=0x49, a2=?, a3=?, a7=one of 0x0, 0x1, 0x2, 0x3.
  The `jal` at 0x1001ad98 calls dl_logSingleTestEnd [0x1001aa88] with a0=ret(dl_hash_lookup), a1=0x50, a2=?, a3=?, a7=one of 0x0, 0x1, 0x2, 0x3.
  The `beq` branch at 0x1001aba8 targets 0x1001ac68, is taken when a2(=[0x1002bb6c]) == 0, and falls through when a2(=[0x1002bb6c]) != 0.
  The `bltz` branch at 0x1001abbc targets 0x1001ac98, is taken when s1(=a1) < 0 (signed), and falls through when s1(=a1) >= 0 (signed).
  The `beq` branch at 0x1001abd4 targets 0x1001ac14 and is always taken.
  The `bne` branch at 0x1001ac04 targets 0x1001ac48, is taken when s1(=a1) < s2(?) (signed), and falls through when s1(=a1) >= s2(?) (signed).
  The `beq` branch at 0x1001ac0c targets 0x1001ac4c, is taken when a7(=one of 0x1, 0x3) == s3(=0x1), and falls through when a7(=one of 0x1, 0x3) != s3(=0x1).
  The `beq` branch at 0x1001ac1c targets 0x1001ac34, is taken when (t9(?) & 0x2) == 0, and falls through when (t9(?) & 0x2) != 0.
  The `bne` branch at 0x1001ac24 targets 0x1001abdc, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bne` branch at 0x1001ac3c targets 0x1001ac48, is taken when s1(=a1) < s2(?) (signed), and falls through when s1(=a1) >= s2(?) (signed).
  The `bne` branch at 0x1001ac44 targets 0x1001ac14, is taken when a7(=one of 0x0, 0x1, 0x3) != s3(=0x1), and falls through when a7(=one of 0x0, 0x1, 0x3) == s3(=0x1).
  The `beq` branch at 0x1001ac50 targets 0x1001ad7c, is taken when a7(=one of 0x0, 0x1, 0x2, 0x3) == s3(=0x1), and falls through when a7(=one of 0x0, 0x1, 0x2, 0x3) != s3(=0x1).
  The `beq` branch at 0x1001ac58 targets 0x1001ad94, is taken when a7(=one of 0x0, 0x1, 0x2, 0x3) == a0(=0x2), and falls through when a7(=one of 0x0, 0x1, 0x2, 0x3) != a0(=0x2).
  The `beq` branch at 0x1001ac60 targets 0x1001aca8, is taken when a7(=one of 0x0, 0x1, 0x2, 0x3) == v0(=0x3), and falls through when a7(=one of 0x0, 0x1, 0x2, 0x3) != v0(=0x3).
  The `beq` branch at 0x1001aca0 targets 0x1001ac48 and is always taken.
  The `bltz` branch at 0x1001ace8 targets 0x1001ad44, is taken when s1(=a1) < 0 (signed), and falls through when s1(=a1) >= 0 (signed).
  The `beq` branch at 0x1001acfc targets 0x1001ad34, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x1001ad08 targets 0x1001ad34, is taken when (v0(?) & 0x2) == 0, and falls through when (v0(?) & 0x2) != 0.
  The `beq` branch at 0x1001ad3c targets 0x1001acf4, is taken when s1(=a1) >= s3(?) (signed), and falls through when s1(=a1) < s3(?) (signed).
  The `beq` branch at 0x1001ad74 targets 0x1001ac68 and is always taken.
  The `beq` branch at 0x1001ad8c targets 0x1001ac6c and is always taken.
  The `beq` branch at 0x1001ada0 targets 0x1001ac6c and is always taken.
  The return at 0x1001ac90 has v0 = one of 0x0, ret(dl_logSingleTestEnd).

- `build_header` in `usr/diags/SG/bin/olsgsys` at 0x1001bcac (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001bcac-0x1001bcd0 (36 bytes).
  It occupies 36 bytes.
  The `sb` at 0x1001bcb4 stores 1 byte to a2 (arg2 at entry) +0x1.
  The `lw` at 0x1001bcbc loads 4 bytes from abs 0x1002b404.
  The `sb` at 0x1001bcc0 stores 1 byte to a2 (arg2 at entry) +0x0.
  The `lw` at 0x1001bcc4 loads 4 bytes from sym(gSeqNumber) +0x0.
  The `sb` at 0x1001bccc stores 1 byte to a2 (arg2 at entry) +0x2.
  The return at 0x1001bcc8 has v0 = [sym(gSeqNumber)].

- `check_integrity` in `usr/diags/SG/bin/olsgsys` at 0x1001bcd0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001bcd0-0x1001be54 (388 bytes).
  It occupies 388 bytes.
  The `lbu` at 0x1001bcf4 loads 1 byte from sym(gMsgIn) +0x11.
  The `lbu` at 0x1001bd34 loads 1 byte from sym(gMsgIn) +0x10.
  The `jal` at 0x1001bd80 calls dl_output_dbug [0x10019758] with a0=0x5, a1=0x10028fc8, a2=[sym(gMsgIn)+16]:1, a3=a3 at entry (arg3), a4=0xc, a5=0x2, a6=0x7, a7=0x3.
  The `jal` at 0x1001bd90 calls dl_output_abrt [0x1001a048] with a0=0x10028ff0, a1=?, a2=?, a3=?.
  The `jal` at 0x1001bdcc calls dl_output_dbug [0x10019758] with a0=0x5, a1=0x10029020, a2=[sym(gMsgIn)+16]:1, a3=a3 at entry (arg3), a4=0xc, a5=0x2, a6=0x7, a7=0x3.
  The `jal` at 0x1001bdfc calls dl_output_dbug [0x10019758] with a0=0x5, a1=0x100290c0, a2=[sym(gMsgIn)+16]:1, a3=a3 at entry (arg3), a4=0xc, a5=0x2, a6=0x7, a7=0x3.
  The `jal` at 0x1001be14 calls dl_output_dbug [0x10019758] with a0=0x5, a1=0x10029098, a2=[sym(gMsgIn)+16]:1, a3=a3 at entry (arg3), a4=0xc, a5=0x2, a6=0x7, a7=0x3.
  The `jal` at 0x1001be2c calls dl_output_dbug [0x10019758] with a0=0x5, a1=0x10029070, a2=[sym(gMsgIn)+16]:1, a3=a3 at entry (arg3), a4=0xc, a5=0x2, a6=0x7, a7=0x3.
  The `jal` at 0x1001be44 calls dl_output_dbug [0x10019758] with a0=0x5, a1=0x10029048, a2=[sym(gMsgIn)+16]:1, a3=a3 at entry (arg3), a4=0xc, a5=0x2, a6=0x7, a7=0x3.
  The `bne` branch at 0x1001bce8 targets 0x1001bd2c, is taken when a1 < 0x3 (unsigned), and falls through when a1 >= 0x3 (unsigned).
  The `beq` branch at 0x1001bcfc targets 0x1001bd34, is taken when a4(=[sym(gMsgIn)+17]:1) == v0(=0x1), and falls through when a4(=[sym(gMsgIn)+17]:1) != v0(=0x1).
  The `beq` branch at 0x1001bd04 targets 0x1001bda0, is taken when a4(=[sym(gMsgIn)+17]:1) == v1(=0x3), and falls through when a4(=[sym(gMsgIn)+17]:1) != v1(=0x3).
  The `beq` branch at 0x1001bd10 targets 0x1001bdb0, is taken when a4(=[sym(gMsgIn)+17]:1) == a0(=0x2), and falls through when a4(=[sym(gMsgIn)+17]:1) != a0(=0x2).
  The `beq` branch at 0x1001bd2c targets 0x1001bd1c and is always taken.
  The `bne` branch at 0x1001bd44 targets 0x1001bdb8, is taken when a0 != a2(=[sym(gMsgIn)+16]:1), and falls through when a0 == a2(=[sym(gMsgIn)+16]:1).
  The `beq` branch at 0x1001bd4c targets 0x1001bdf4, is taken when a0 == a4(=0xc), and falls through when a0 != a4(=0xc).
  The `beq` branch at 0x1001bd54 targets 0x1001be0c, is taken when a0 == v0(=0x1), and falls through when a0 != v0(=0x1).
  The `beq` branch at 0x1001bd5c targets 0x1001be24, is taken when a0 == a5(=0x2), and falls through when a0 != a5(=0x2).
  The `beq` branch at 0x1001bd64 targets 0x1001be3c, is taken when a0 == a6(=0x7), and falls through when a0 != a6(=0x7).
  The `beq` branch at 0x1001bd6c targets 0x1001bdc0, is taken when a0 == a7(=0x3), and falls through when a0 != a7(=0x3).
  The `beq` branch at 0x1001bd98 targets 0x1001bd1c and is always taken.
  The `beq` branch at 0x1001bda0 targets 0x1001bdec, is taken when a1 == a0(=0x8), and falls through when a1 != a0(=0x8).
  The `beq` branch at 0x1001bda8 targets 0x1001bd1c and is always taken.
  The `beq` branch at 0x1001bdb0 targets 0x1001bd20 and is always taken.
  The `beq` branch at 0x1001bdb8 targets 0x1001bd1c and is always taken.
  The `beq` branch at 0x1001bde4 targets 0x1001bd1c and is always taken.
  The `beq` branch at 0x1001bdec targets 0x1001bd20 and is always taken.
  The `beq` branch at 0x1001be04 targets 0x1001bd1c and is always taken.
  The `beq` branch at 0x1001be1c targets 0x1001bd1c and is always taken.
  The `beq` branch at 0x1001be34 targets 0x1001bd1c and is always taken.
  The `beq` branch at 0x1001be4c targets 0x1001bd1c and is always taken.
  The return at 0x1001bd24 has v0 = one of 0x0, 0x1.

- `dl_protocol_remote_call` in `usr/diags/SG/bin/olsgsys` at 0x1001be54 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001be54-0x1001c4a8 (1620 bytes).
  It occupies 1620 bytes.
  6 such `lw` accesses load 4 bytes from sym(gSockFd) +0x0, including `lw` at 0x1001beb8, `lw` at 0x1001bf38, `lw` at 0x1001c03c.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1001bee4, `lw` at 0x1001c07c, `lw` at 0x1001c0c8.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x1001bef8, `sw` at 0x1001c094.
  The `sw` at 0x1001bf6c stores 4 bytes to sym(gSender_addr_len) +0x0.
  The `sw` at 0x1001bf70 stores 4 bytes to sym(gSender_addr) +0xc.
  The `sw` at 0x1001bf7c stores 4 bytes to sym(gSender_addr) +0x8.
  The `sw` at 0x1001bf84 stores 4 bytes to sym(gSender_addr) +0x4.
  The `sw` at 0x1001bf8c stores 4 bytes to sym(gSender_addr) +0x0.
  The `lbu` at 0x1001bfa4 loads 1 byte from sym(gMsgIn) +0x10.
  The `lbu` at 0x1001bfa8 loads 1 byte from sym(gMsgIn) +0x11.
  The `lbu` at 0x1001bfac loads 1 byte from sym(gMsgIn) +0x12.
  2 such `lw` accesses load 4 bytes from sym(gMsgOut) +0x0, including `lw` at 0x1001c0e4, `lw` at 0x1001c100.
  The `lw` at 0x1001c1a8 loads 4 bytes from sym(errno) +0x0.
  The `sw` at 0x1001c218 stores 4 bytes to sym(gSeqNumber) +0x0.
  The `lbu` at 0x1001c2f0 loads 1 byte from sym(gMsgIn) +0x13.
  5 such `sw` accesses store 4 bytes to sym(gMsgOut) +0x0, including `sw` at 0x1001c364, `sw` at 0x1001c3a8, `sw` at 0x1001c400.
  The `sb` at 0x1001c3f0 stores 1 byte to sym(gMsgOut) +0x7.
  The `jalr` at 0x1001beac calls memset with a0=sp-392, a1=0x0, a2=0x80, a3=a3 at entry (arg3).
  The `jalr` at 0x1001bf14 calls select with a0=0x400, a1=sp-392, a2=0x0, a3=0x0, a4=0x0.
  The `jalr` at 0x1001bf3c calls recvfrom with a0=[sym(gSockFd)], a1=sym(gMsgIn)+16, a2=0xc80, a3=0x0, a4=sp-264, a5=sp-400.
  The `jal` at 0x1001bf90 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10029120, a2=ret(recvfrom), a3=sym(gSender_addr).
  The `jal` at 0x1001bfdc calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10029138, a2=?, a3=?, a5=[sym(gMsgIn)+16]:1.
  The `jal` at 0x1001bfec calls check_integrity [0x1001bcd0] with a0=?, a1=ret(recvfrom), a2=?, a3=?.
  The `jal` at 0x1001c018 calls dl_output_abrt [0x1001a048] with a0=0x100291a0, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001c034 calls memset with a0=sp-240, a1=0x0, a2=0x80, a3=?.
  The `jalr` at 0x1001c090 calls select with a0=0x400, a1=0x0, a2=sp-240, a3=0x0, a4=0x1002bb70.
  The `jal` at 0x1001c0e8 calls dl_output_dbug [0x10019758] with a0=0x5, a1=0x10029340, a2=[sym(gMsgOut)], a3=?.
  The `jalr` at 0x1001c108 calls sendto with a0=[sym(gSockFd)], a1=sym(gMsgOut)+4, a2=[sym(gMsgOut)], a3=0x0, a4=sp-264.
  The `jal` at 0x1001c148 calls dl_output_abrt [0x1001a048] with a0=0x100290e0, a1=?, a2=?, a3=sp-392.
  The `jal` at 0x1001c160 calls dl_output_abrt [0x1001a048] with a0=0x10029108, a1=?, a2=?, a3=?.
  The `jal` at 0x1001c174 calls dl_output_abrt [0x1001a048] with a0=0x100292e0, a1=?, a2=?, a3=?.
  The `jal` at 0x1001c18c calls dl_output_info [0x100189a4] with a0=0x10029310, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001c1a4 calls strerror with a0=[sym(errno)], a1=?, a2=?, a3=?.
  The `jal` at 0x1001c1b8 calls dl_output_abrt [0x1001a048] with a0=0x10029360, a1=ret(strerror), a2=?, a3=?.
  The `jal` at 0x1001c1d0 calls dl_output_info [0x100189a4] with a0=0x100291c8, a1=?, a2=?, a3=?, a4=0x2, a5=0x3.
  The `jal` at 0x1001c1ec calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10029178, a2=?, a3=?, a4=0x2, a5=0x3.
  The `jal` at 0x1001c214 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x100291e8, a2=?, a3=sym(gSeqNumber), a4=0x2.
  The `jal` at 0x1001c24c calls dl_output_abrt [0x1001a048] with a0=0x10029200, a1=?, a2=0xc, a3=0x2, a4=0x7, a5=0x3.
  The `jal` at 0x1001c260 calls dl_output_info [0x100189a4] with a0=0x10029150, a1=?, a2=?, a3=?.
  The `jal` at 0x1001c278 calls dl_output_info [0x100189a4] with a0=0x100292f0, a1=?, a2=?, a3=?.
  The `jal` at 0x1001c2e0 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10029220, a2=0xc, a3=0x2, a4=0x7, a5=0x3.
  The `jal` at 0x1001c304 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10029238, a2=[sym(gMsgIn)+19]:1, a3=?.
  The `jal` at 0x1001c324 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10029250, a2=sym(gMsgIn)+20, a3=?.
  The `jal` at 0x1001c33c calls (unnamed) [0x1001bbb0] with a0=[sym(gMsgIn)+19]:1, a1=sym(gMsgIn)+20, a2=a4 at entry (arg4), a3=?.
  The `jal` at 0x1001c354 calls build_header [0x1001bcac] with a0=0x3, a1=0x2, a2=sym(gMsgOut)+4, a3=?.
  The `jal` at 0x1001c370 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x100292c8, a2=0xc, a3=?.
  The `jal` at 0x1001c388 calls build_header [0x1001bcac] with a0=0xc, a1=0x2, a2=sym(gMsgOut)+4, a3=?.
  The `jal` at 0x1001c39c calls (unnamed) [0x1001ada8] with a0=sym(gMsgOut)+7, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jal` at 0x1001c3bc calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x100292a8, a2=?, a3=0x2.
  The `jal` at 0x1001c3d4 calls build_header [0x1001bcac] with a0=0x1, a1=0x2, a2=sym(gMsgOut)+4, a3=?.
  The `jal` at 0x1001c3f4 calls (unnamed) [0x1001ae0c] with a0=sym(gMsgOut)+8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a2 at entry (arg2).
  The `jal` at 0x1001c414 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10029288, a2=0xc, a3=?, a4=0x7.
  The `jal` at 0x1001c42c calls build_header [0x1001bcac] with a0=0x2, a1=0x2, a2=sym(gMsgOut)+4, a3=?.
  The `jal` at 0x1001c444 calls (unnamed) [0x1001afa0] with a0=sym(gMsgOut)+8, a1=sym(gMsgOut)+7, a2=a3 at entry (arg3), a3=?.
  The `jal` at 0x1001c464 calls dl_output_dbug [0x10019758] with a0=0x7, a1=0x10029268, a2=0xc, a3=0x2, a5=0x3.
  The `jal` at 0x1001c47c calls build_header [0x1001bcac] with a0=0x7, a1=0x2, a2=sym(gMsgOut)+4, a3=?.
  The `jal` at 0x1001c490 calls (unnamed) [0x1001b850] with a0=sym(gMsgOut)+8, a1=sym(gMsgOut)+7, a2=?, a3=?.
  The `beq` branch at 0x1001bef4 targets 0x1001c140, is taken when (a1(?) & v1(?)) == 0, and falls through when (a1(?) & v1(?)) != 0.
  The `bltz` branch at 0x1001bf1c targets 0x1001c158, is taken when v0(=ret(select)) < 0 (signed), and falls through when v0(=ret(select)) >= 0 (signed).
  The `beq` branch at 0x1001bff4 targets 0x1001c25c, is taken when v0(=ret(check_integrity)) == 0, and falls through when v0(=ret(check_integrity)) != 0.
  The `beq` branch at 0x1001bffc targets 0x1001c1fc, is taken when s2(?) == s5(=0x1), and falls through when s2(?) != s5(=0x1).
  The `beq` branch at 0x1001c004 targets 0x1001c1c8, is taken when s2(?) == a4(=0x2), and falls through when s2(?) != a4(=0x2).
  The `beq` branch at 0x1001c00c targets 0x1001c1e0, is taken when s2(?) == a5(=0x3), and falls through when s2(?) != a5(=0x3).
  The `bltz` branch at 0x1001c098 targets 0x1001c170, is taken when v0(=ret(select)) < 0 (signed), and falls through when v0(=ret(select)) >= 0 (signed).
  The `beq` branch at 0x1001c0a0 targets 0x1001c270, is taken when v0(=ret(select)) == 0, and falls through when v0(=ret(select)) != 0.
  The `beq` branch at 0x1001c0d4 targets 0x1001c184, is taken when (t2(?) & t3(?)) == 0, and falls through when (t2(?) & t3(?)) != 0.
  The `bltz` branch at 0x1001c110 targets 0x1001c19c, is taken when v0(=ret(sendto)) < 0 (signed), and falls through when v0(=ret(sendto)) >= 0 (signed).
  The `beq` branch at 0x1001c150 targets 0x1001bf00 and is always taken.
  The `beq` branch at 0x1001c168 targets 0x1001bf24 and is always taken.
  The `beq` branch at 0x1001c17c targets 0x1001c0a8 and is always taken.
  The `beq` branch at 0x1001c194 targets 0x1001c0dc and is always taken.
  The `beq` branch at 0x1001c1c0 targets 0x1001c118 and is always taken.
  The `beq` branch at 0x1001c1d8 targets 0x1001c024 and is always taken.
  The `beq` branch at 0x1001c1f4 targets 0x1001c014 and is always taken.
  The `beq` branch at 0x1001c220 targets 0x1001c288, is taken when s4(?) == a2(=0xc), and falls through when s4(?) != a2(=0xc).
  The `beq` branch at 0x1001c228 targets 0x1001c298, is taken when s4(?) == s5(=0x1), and falls through when s4(?) != s5(=0x1).
  The `beq` branch at 0x1001c230 targets 0x1001c2ac, is taken when s4(?) == a3(=0x2), and falls through when s4(?) != a3(=0x2).
  The `beq` branch at 0x1001c238 targets 0x1001c2c0, is taken when s4(?) == a4(=0x7), and falls through when s4(?) != a4(=0x7).
  The `beq` branch at 0x1001c240 targets 0x1001c2d4, is taken when s4(?) == a5(=0x3), and falls through when s4(?) != a5(=0x3).
  The `beq` branch at 0x1001c254 targets 0x1001c024 and is always taken.
  The `beq` branch at 0x1001c268 targets 0x1001c118 and is always taken.
  The `beq` branch at 0x1001c280 targets 0x1001c118 and is always taken.
  The `beq` branch at 0x1001c288 targets 0x1001c368, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x1001c290 targets 0x1001c118 and is always taken.
  The `beq` branch at 0x1001c29c targets 0x1001c3b4, is taken when s1(=ret(recvfrom)) >= 0x3 (unsigned), and falls through when s1(=ret(recvfrom)) < 0x3 (unsigned).
  The `beq` branch at 0x1001c2a4 targets 0x1001c118 and is always taken.
  The `beq` branch at 0x1001c2b0 targets 0x1001c40c, is taken when s1(=ret(recvfrom)) >= 0x3 (unsigned), and falls through when s1(=ret(recvfrom)) < 0x3 (unsigned).
  The `beq` branch at 0x1001c2b8 targets 0x1001c118 and is always taken.
  The `beq` branch at 0x1001c2c4 targets 0x1001c45c, is taken when s1(=ret(recvfrom)) >= 0x3 (unsigned), and falls through when s1(=ret(recvfrom)) < 0x3 (unsigned).
  The `beq` branch at 0x1001c2cc targets 0x1001c118 and is always taken.
  The `beq` branch at 0x1001c360 targets 0x1001c024 and is always taken.
  The `beq` branch at 0x1001c3ac targets 0x1001c024 and is always taken.
  The `beq` branch at 0x1001c404 targets 0x1001c024 and is always taken.
  The `beq` branch at 0x1001c454 targets 0x1001c024 and is always taken.
  The `beq` branch at 0x1001c4a0 targets 0x1001c024 and is always taken.
  The return at 0x1001c138 has v0 = one of ?, -0x1.

- `dl_server_output` in `usr/diags/SG/bin/olsgsys` at 0x1001c94c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001c94c-0x1001ca68 (284 bytes).
  It occupies 284 bytes.
  The `lw` at 0x1001c964 loads 4 bytes from sym(outputOn) +0x0.
  The `sw` at 0x1001ca0c stores 4 bytes to sym(gMsgOut) +0x0.
  The `jal` at 0x1001c9d8 calls build_header [0x1001bcac] with a0=0x4, a1=0x1, a2=sym(gMsgOut)+4, a3=?.
  The `jalr` at 0x1001c9f8 calls strncpy with a0=sym(gMsgOut)+7, a1=?, a2=?, a3=?.
  The `jal` at 0x1001ca08 calls (unnamed) [0x1001c4a8] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001ca1c calls (unnamed) [0x1001c4a8] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1001c99c targets 0x1001ca34, is taken when at(=[sym(outputOn)]) == 0, and falls through when at(=[sym(outputOn)]) != 0.
  The `blez` branch at 0x1001c9a4 targets 0x1001ca34, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `beq` branch at 0x1001c9b8 targets 0x1001c9cc and is always taken.
  The `blez` branch at 0x1001c9c4 targets 0x1001ca34, is taken when s1(?) <= 0 (signed), and falls through when s1(?) > 0 (signed).
  The `bne` branch at 0x1001ca10 targets 0x1001c9c0, is taken when v0(=ret(0x1001c4a8)) != 0, and falls through when v0(=ret(0x1001c4a8)) == 0.
  The `beq` branch at 0x1001ca24 targets 0x1001ca1c, is taken when v0(=ret(0x1001c4a8)) == 0, and falls through when v0(=ret(0x1001c4a8)) != 0.
  The `beq` branch at 0x1001ca2c targets 0x1001c9c4 and is always taken.
  The return at 0x1001ca60 has v0 = one of ?, ret(0x1001c4a8).

- `dl_server_test` in `usr/diags/SG/bin/olsgsys` at 0x1001ca68 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001ca68-0x1001cbcc (356 bytes).
  It occupies 356 bytes.
  2 such `lw` accesses load 4 bytes from sym(outputOn) +0x0, including `lw` at 0x1001ca80, `lw` at 0x1001cb34.
  The `sw` at 0x1001caac stores 4 bytes to sym(test_errors) +0x0.
  The `sw` at 0x1001cad8 stores 4 bytes to sym(test_errors) +0x4.
  2 such `sw` accesses store 4 bytes to sym(gMsgOut) +0x0, including `sw` at 0x1001cb1c, `sw` at 0x1001cb74.
  The `jal` at 0x1001cab0 calls dl_hash_value [0x1001d48c] with a0=0x10028f70, a1=0x14, a2=a0 at entry (arg0), a3=sym(test_errors).
  The `jalr` at 0x1001cabc calls malloc with a0=(ret(dl_hash_value) << 0x2), a1=?, a2=?, a3=?.
  The `jal` at 0x1001cae0 calls build_header [0x1001bcac] with a0=0x5, a1=0x1, a2=sym(gMsgOut)+4, a3=?, a4=sym(test_errors).
  The `jalr` at 0x1001caf8 calls sprintf with a0=sym(gMsgOut)+7, a1=0x1002b708, a2=a0 at entry (arg0), a3=?.
  The `jalr` at 0x1001cb04 calls strlen with a0=sym(gMsgOut)+7, a1=?, a2=?, a3=?.
  The `jal` at 0x1001cb24 calls (unnamed) [0x1001c4a8] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001cb48 calls build_header [0x1001bcac] with a0=0x9, a1=0x1, a2=sym(gMsgOut)+4, a3=?.
  The `jalr` at 0x1001cb5c calls sprintf with a0=sym(gMsgOut)+7, a1=0x1002b708, a2=sym(last_time_msg), a3=?.
  The `jal` at 0x1001cb70 calls (unnamed) [0x1001c4a8] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001cb98 calls (unnamed) [0x1001c4a8] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001cbb4 calls (unnamed) [0x1001c4a8] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1001ca90 targets 0x1001cb7c, is taken when at(=[sym(outputOn)]) == 0, and falls through when at(=[sym(outputOn)]) != 0.
  The `beq` branch at 0x1001cb2c targets 0x1001cbb0, is taken when v0(=ret(0x1001c4a8)) == 0, and falls through when v0(=ret(0x1001c4a8)) != 0.
  The `beq` branch at 0x1001cb38 targets 0x1001cb7c, is taken when at(=[sym(outputOn)]) == 0, and falls through when at(=[sym(outputOn)]) != 0.
  The `beq` branch at 0x1001cb78 targets 0x1001cb94, is taken when v0(=ret(0x1001c4a8)) == 0, and falls through when v0(=ret(0x1001c4a8)) != 0.
  The `beq` branch at 0x1001cba0 targets 0x1001cb98, is taken when v0(=ret(0x1001c4a8)) == 0, and falls through when v0(=ret(0x1001c4a8)) != 0.
  The `beq` branch at 0x1001cba8 targets 0x1001cb80 and is always taken.
  The `beq` branch at 0x1001cbbc targets 0x1001cbb4, is taken when v0(=ret(0x1001c4a8)) == 0, and falls through when v0(=ret(0x1001c4a8)) != 0.
  The `beq` branch at 0x1001cbc4 targets 0x1001cb34 and is always taken.
  The return at 0x1001cb8c has v0 = one of ret(0x1001c4a8), ?.

- `dl_server_rslt` in `usr/diags/SG/bin/olsgsys` at 0x1001cbcc (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001cbcc-0x1001ce6c (672 bytes).
  It occupies 672 bytes.
  5 such `lw` accesses load 4 bytes from sym(outputOn) +0x0, including `lw` at 0x1001cbe8, `lw` at 0x1001cc94, `lw` at 0x1001cd60.
  2 such `lw` accesses load 4 bytes from sym(test_errors) +0x0, including `lw` at 0x1001cc18, `lw` at 0x1001cc5c.
  7 such `lw` accesses load 4 bytes from sym(test_errors) +0x4, including `lw` at 0x1001cc54, `lw` at 0x1001cc68, `lw` at 0x1001ccb0.
  7 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1001cc64, `lw` at 0x1001cc70, `lw` at 0x1001cc80.
  2 such `sb` accesses store 1 byte to sym(gMsgOut) +0x7, including `sb` at 0x1001ccd8, `sb` at 0x1001cd84.
  3 such `sw` accesses store 4 bytes to sym(gMsgOut) +0x0, including `sw` at 0x1001cd14, `sw` at 0x1001cdb4, `sw` at 0x1001ce00.
  The `jalr` at 0x1001cc6c calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001cc7c calls free with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001cca8 calls build_header [0x1001bcac] with a0=0xa, a1=0x1, a2=sym(gMsgOut)+4, a3=?.
  The `jalr` at 0x1001ccc8 calls sprintf with a0=sym(gMsgOut)+8, a1=0x1002b718, a2=?, a3=?.
  The `jalr` at 0x1001ccf8 calls sprintf with a0=?, a1=0x1002b708, a2=?, a3=?.
  The `jal` at 0x1001cd10 calls (unnamed) [0x1001c4a8] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001cd24 calls (unnamed) [0x1001c4a8] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001cd58 calls free with a0=[sym(test_errors)+4], a1=?, a2=?, a3=?.
  The `jal` at 0x1001cd78 calls build_header [0x1001bcac] with a0=0x6, a1=0x1, a2=sym(gMsgOut)+4, a3=?.
  The `jalr` at 0x1001cd98 calls sprintf with a0=sym(gMsgOut)+8, a1=0x1002b708, a2=a0 at entry (arg0), a3=?.
  The `jalr` at 0x1001cda4 calls strlen with a0=sym(gMsgOut)+8, a1=?, a2=?, a3=?.
  The `jal` at 0x1001cdb8 calls (unnamed) [0x1001c4a8] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001cdd8 calls build_header [0x1001bcac] with a0=0x9, a1=0x1, a2=sym(gMsgOut)+4, a3=?.
  The `jalr` at 0x1001cdec calls sprintf with a0=sym(gMsgOut)+7, a1=0x1002b708, a2=sym(last_time_msg), a3=?.
  The `jal` at 0x1001cdfc calls (unnamed) [0x1001c4a8] with a0=0x63, a1=?, a2=?, a3=?.
  The `jal` at 0x1001ce38 calls (unnamed) [0x1001c4a8] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001ce54 calls (unnamed) [0x1001c4a8] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1001cc10 targets 0x1001ce08, is taken when at(=[sym(outputOn)]) == 0, and falls through when at(=[sym(outputOn)]) != 0.
  The `blez` branch at 0x1001cc2c targets 0x1001cd3c, is taken when a2(=[sym(test_errors)]) <= 0 (signed), and falls through when a2(=[sym(test_errors)]) > 0 (signed).
  The `beq` branch at 0x1001cc4c targets 0x1001cc94 and is always taken.
  The `beq` branch at 0x1001cc8c targets 0x1001cd3c, is taken when s5(?) >= s3(=[sym(test_errors)]) (signed), and falls through when s5(?) < s3(=[sym(test_errors)]) (signed).
  The `beq` branch at 0x1001cc98 targets 0x1001cc54, is taken when a2(=[sym(outputOn)]) == 0, and falls through when a2(=[sym(outputOn)]) != 0.
  The `bne` branch at 0x1001cd18 targets 0x1001cc58, is taken when v0(=ret(0x1001c4a8)) != 0, and falls through when v0(=ret(0x1001c4a8)) == 0.
  The `beq` branch at 0x1001cd2c targets 0x1001cd24, is taken when v0(=ret(0x1001c4a8)) == 0, and falls through when v0(=ret(0x1001c4a8)) != 0.
  The `beq` branch at 0x1001cd34 targets 0x1001cc58 and is always taken.
  The `beq` branch at 0x1001cd64 targets 0x1001ce08, is taken when t8(=[sym(outputOn)]) == 0, and falls through when t8(=[sym(outputOn)]) != 0.
  The `beq` branch at 0x1001cdc0 targets 0x1001ce50, is taken when v0(=ret(0x1001c4a8)) == 0, and falls through when v0(=ret(0x1001c4a8)) != 0.
  The `beq` branch at 0x1001cdc8 targets 0x1001ce08, is taken when v1(=[sym(outputOn)]) == 0, and falls through when v1(=[sym(outputOn)]) != 0.
  The `beq` branch at 0x1001ce04 targets 0x1001ce34, is taken when v0(=ret(0x1001c4a8)) == 0, and falls through when v0(=ret(0x1001c4a8)) != 0.
  The `beq` branch at 0x1001ce40 targets 0x1001ce38, is taken when v0(=ret(0x1001c4a8)) == 0, and falls through when v0(=ret(0x1001c4a8)) != 0.
  The `beq` branch at 0x1001ce48 targets 0x1001ce0c and is always taken.
  The `beq` branch at 0x1001ce5c targets 0x1001ce54, is taken when v0(=ret(0x1001c4a8)) == 0, and falls through when v0(=ret(0x1001c4a8)) != 0.
  The `beq` branch at 0x1001ce64 targets 0x1001cdc8 and is always taken.
  The return at 0x1001ce2c has v0 = one of ret(0x1001c4a8), ?.

- `dl_server_loop` in `usr/diags/SG/bin/olsgsys` at 0x1001ce6c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001ce6c-0x1001cee0 (116 bytes).
  It occupies 116 bytes.
  The `lw` at 0x1001ce84 loads 4 bytes from sym(outputOn) +0x0.
  The `sb` at 0x1001cec0 stores 1 byte to sym(gMsgOut) +0x7.
  The `sw` at 0x1001cecc stores 4 bytes to sym(gMsgOut) +0x0.
  The `jal` at 0x1001cea4 calls build_header [0x1001bcac] with a0=0x8, a1=0x1, a2=sym(gMsgOut)+4, a3=a3 at entry (arg3).
  The `jal` at 0x1001cec8 calls (unnamed) [0x1001c4a8] with a0=?, a1=?, a2=?, a3=0x4, a4=sym(gMsgOut).
  The `beq` branch at 0x1001ce8c targets 0x1001ced4, is taken when at(=[sym(outputOn)]) == 0, and falls through when at(=[sym(outputOn)]) != 0.
  The return at 0x1001ced8 has v0 = one of 0x15fcc, ret(0x1001c4a8).

- `dl_server_time` in `usr/diags/SG/bin/olsgsys` at 0x1001cee0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001cee0-0x1001cf1c (60 bytes).
  It occupies 60 bytes.
  The `jalr` at 0x1001cf04 calls sprintf with a0=sym(last_time_msg), a1=0x1002b708, a2=a0 at entry (arg0), a3=a3 at entry (arg3).
  The return at 0x1001cf14 has v0 = ret(sprintf).

- `dl_server_error` in `usr/diags/SG/bin/olsgsys` at 0x1001cf1c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001cf1c-0x1001cfcc (176 bytes).
  It occupies 176 bytes.
  The `lw` at 0x1001cf34 loads 4 bytes from sym(outputOn) +0x0.
  4 such `lw` accesses load 4 bytes from sym(test_errors) +0x0, including `lw` at 0x1001cf58, `lw` at 0x1001cf6c, `lw` at 0x1001cf98.
  3 such `lw` accesses load 4 bytes from sym(test_errors) +0x4, including `lw` at 0x1001cf5c, `lw` at 0x1001cf70, `lw` at 0x1001cf9c.
  The `sw` at 0x1001cf68 stores 4 bytes to ([sym(test_errors)+4] + ([sym(test_errors)] << 0x2)) +0x0.
  2 such `lw` accesses load 4 bytes from ([sym(test_errors)+4] + ([sym(test_errors)] << 0x2)) +0x0, including `lw` at 0x1001cf84, `lw` at 0x1001cfa8.
  The `sw` at 0x1001cf90 stores 4 bytes to [([sym(test_errors)+4] + ([sym(test_errors)] << 0x2))] +0x0.
  The `sw` at 0x1001cfac stores 4 bytes to [([sym(test_errors)+4] + ([sym(test_errors)] << 0x2))] +0x4.
  The `sw` at 0x1001cfbc stores 4 bytes to sym(test_errors) +0x0.
  The `jalr` at 0x1001cf4c calls malloc with a0=0x8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1001cf8c calls strdup with a0=a1 at entry (arg1), a1=a0 at entry (arg0), a2=[([sym(test_errors)+4] + ([sym(test_errors)] << 0x2))], a3=([sym(test_errors)] << 0x2), a4=([sym(test_errors)] << 0x2).
  The `beq` branch at 0x1001cf40 targets 0x1001cfc0, is taken when at(=[sym(outputOn)]) == 0, and falls through when at(=[sym(outputOn)]) != 0.
  The return at 0x1001cfc4 has v0 = one of ?, ret(strdup).

- `dl_server_endtx` in `usr/diags/SG/bin/olsgsys` at 0x1001cfcc (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001cfcc-0x1001d060 (148 bytes).
  It occupies 148 bytes.
  The `lw` at 0x1001cfe4 loads 4 bytes from sym(outputOn) +0x0.
  The `sw` at 0x1001d01c stores 4 bytes to sym(gMsgOut) +0x0.
  The `jal` at 0x1001d004 calls build_header [0x1001bcac] with a0=0xb, a1=0x1, a2=sym(gMsgOut)+4, a3=a3 at entry (arg3).
  The `jal` at 0x1001d024 calls (unnamed) [0x1001c4a8] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001d048 calls (unnamed) [0x1001c4a8] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1001cfec targets 0x1001d030, is taken when at(=[sym(outputOn)]) == 0, and falls through when at(=[sym(outputOn)]) != 0.
  The `beq` branch at 0x1001d02c targets 0x1001d044, is taken when v0(=ret(0x1001c4a8)) == 0, and falls through when v0(=ret(0x1001c4a8)) != 0.
  The `beq` branch at 0x1001d050 targets 0x1001d048, is taken when v0(=ret(0x1001c4a8)) == 0, and falls through when v0(=ret(0x1001c4a8)) != 0.
  The `beq` branch at 0x1001d058 targets 0x1001d034 and is always taken.
  The return at 0x1001d03c has v0 = one of ret(0x1001c4a8), ?.

- `dl_server_start` in `usr/diags/SG/bin/olsgsys` at 0x1001d060 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001d060-0x1001d198 (312 bytes).
  It occupies 312 bytes.
  The `sw` at 0x1001d0c4 stores 4 bytes to sym(gSockFd) +0x0.
  3 such `lw` accesses load 4 bytes from sym(gSockFd) +0x0, including `lw` at 0x1001d0f0, `lw` at 0x1001d10c, `lw` at 0x1001d168.
  2 such `lw` accesses load 4 bytes from sym(errno) +0x0, including `lw` at 0x1001d148, `lw` at 0x1001d178.
  The `jal` at 0x1001d084 calls dl_hash_value [0x1001d48c] with a0=0x1002b7b0, a1=0x1f41, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1001d0b0 calls socket with a0=0x2, a1=0x1, a2=0x0, a3=?.
  The `jal` at 0x1001d0d4 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x100295f8, a2=?, a3=?.
  The `jalr` at 0x1001d0ec calls bind with a0=[sym(gSockFd)], a1=sp-48, a2=0x10, a3=?.
  The `jal` at 0x1001d110 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x10029640, a2=[sym(gSockFd)], a3=ret(dl_hash_value).
  The `jal` at 0x1001d120 calls dl_output_info [0x100189a4] with a0=0x10029668, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001d144 calls strerror with a0=[sym(errno)], a1=sym(gSockFd), a2=ret(socket), a3=?.
  The `jal` at 0x1001d158 calls dl_output_abrt [0x1001a048] with a0=0x100295d0, a1=ret(strerror), a2=?, a3=?.
  The `jalr` at 0x1001d174 calls strerror with a0=[sym(errno)], a1=?, a2=?, a3=?.
  The `jal` at 0x1001d188 calls dl_output_abrt [0x1001a048] with a0=0x10029618, a1=ret(strerror), a2=?, a3=?.
  The `bltz` branch at 0x1001d0c0 targets 0x1001d13c, is taken when v0(=ret(socket)) < 0 (signed), and falls through when v0(=ret(socket)) >= 0 (signed).
  The `bltz` branch at 0x1001d0f4 targets 0x1001d16c, is taken when v0(=ret(bind)) < 0 (signed), and falls through when v0(=ret(bind)) >= 0 (signed).
  The `beq` branch at 0x1001d164 targets 0x1001d0c8 and is always taken.
  The `beq` branch at 0x1001d190 targets 0x1001d0fc and is always taken.
  The return at 0x1001d134 has v0 = ret(dl_output_info).

- `dl_server_cleanup` in `usr/diags/SG/bin/olsgsys` at 0x1001d198 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001d198-0x1001d1d0 (56 bytes).
  It occupies 56 bytes.
  The `lw` at 0x1001d1bc loads 4 bytes from sym(gSockFd) +0x0.
  The `jalr` at 0x1001d1b8 calls close with a0=[sym(gSockFd)], a1=0x15ca0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x1001d1c8 has v0 = ret(close).

- `dl_server_protocol1` in `usr/diags/SG/bin/olsgsys` at 0x1001d1d0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001d1d0-0x1001d27c (172 bytes).
  It occupies 172 bytes.
  2 such `sw` accesses store 4 bytes to sym(outputOn) +0x0, including `sw` at 0x1001d21c, `sw` at 0x1001d278.
  The `jal` at 0x1001d234 calls dl_protocol_remote_call [0x1001be54] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x1001d240 targets 0x1001d224, is taken when v0(=ret(dl_protocol_remote_call)) < 0x2 (signed), and falls through when v0(=ret(dl_protocol_remote_call)) >= 0x2 (signed).
  The return at 0x1001d274 has v0 = ret(dl_protocol_remote_call).

- `dl_hash_enter` in `usr/diags/SG/bin/olsgsys` at 0x1001d31c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001d31c-0x1001d410 (244 bytes).
  It occupies 244 bytes.
  The `lw` at 0x1001d374 loads 4 bytes from table(0x1003c880) +0x0.
  The `lw` at 0x1001d38c loads 4 bytes from ret(0x1001d2b8) +0x4.
  The `sw` at 0x1001d3ac stores 4 bytes to ret(0x1001d2b8) +0x4.
  The `sw` at 0x1001d3ec stores 4 bytes to ret(malloc) +0x0.
  The `sw` at 0x1001d3f8 stores 4 bytes to ret(malloc) +0x4.
  The `sw` at 0x1001d404 stores 4 bytes to ret(malloc) +0x8.
  The `sw` at 0x1001d40c stores 4 bytes to table(0x1003c880) +0x0.
  The `jal` at 0x1001d350 calls (unnamed) [0x1001d27c] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1001d37c calls (unnamed) [0x1001d2b8] with a0=entry(0x1003c880), a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0x1001d398 calls free with a0=[ret(0x1001d2b8)+4], a1=?, a2=?, a3=?.
  The `jalr` at 0x1001d3a4 calls strdup with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `jalr` at 0x1001d3d0 calls malloc with a0=0xc, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001d3e0 calls strdup with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x1001d3f0 calls strdup with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `beq` branch at 0x1001d384 targets 0x1001d3cc, is taken when v0(=ret(0x1001d2b8)) == 0, and falls through when v0(=ret(0x1001d2b8)) != 0.
  The `beq` branch at 0x1001d390 targets 0x1001d3a0, is taken when a0(=[ret(0x1001d2b8)+4]) == 0, and falls through when a0(=[ret(0x1001d2b8)+4]) != 0.
  The `beq` branch at 0x1001d408 targets 0x1001d3b0 and is always taken.
  The return at 0x1001d3c4 has v0 = ret(strdup).

- `dl_hash_lookup` in `usr/diags/SG/bin/olsgsys` at 0x1001d410 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001d410-0x1001d48c (124 bytes).
  It occupies 124 bytes.
  The `lw` at 0x1001d460 loads 4 bytes from table(0x1003c880) +0x0.
  The `lw` at 0x1001d478 loads 4 bytes from ret(0x1001d2b8) +0x4.
  The `jal` at 0x1001d438 calls (unnamed) [0x1001d27c] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1001d45c calls (unnamed) [0x1001d2b8] with a0=entry(0x1003c880), a1=a0 at entry (arg0), a2=?, a3=?.
  The `beq` branch at 0x1001d46c targets 0x1001d47c, is taken when v0(=ret(0x1001d2b8)) == 0, and falls through when v0(=ret(0x1001d2b8)) != 0.
  The `beq` branch at 0x1001d474 targets 0x1001d480 and is always taken.
  The return at 0x1001d484 has v0 = one of [ret(0x1001d2b8)+4], 0x0.

- `dl_hash_value` in `usr/diags/SG/bin/olsgsys` at 0x1001d48c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001d48c-0x1001d500 (116 bytes).
  It occupies 116 bytes.
  The `jal` at 0x1001d4ac calls dl_hash_lookup [0x1001d410] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1001d4dc calls sscanf with a0=ret(dl_hash_lookup), a1=0x1002b7b8, a2=sp-32, a3=?.
  The `bne` branch at 0x1001d4b4 targets 0x1001d4d4, is taken when v0(=ret(dl_hash_lookup)) != 0, and falls through when v0(=ret(dl_hash_lookup)) == 0.
  The `beq` branch at 0x1001d4e8 targets 0x1001d4f8, is taken when v0(=ret(sscanf)) == v1(=0x1), and falls through when v0(=ret(sscanf)) != v1(=0x1).
  The `beq` branch at 0x1001d4f0 targets 0x1001d4c0 and is always taken.
  The `beq` branch at 0x1001d4f8 targets 0x1001d4c0 and is always taken.
  The return at 0x1001d4cc has v0 = one of a1, ?.

- `dl_hash_value_ll` in `usr/diags/SG/bin/olsgsys` at 0x1001d500 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001d500-0x1001d574 (116 bytes).
  It occupies 116 bytes.
  The `jal` at 0x1001d520 calls dl_hash_lookup [0x1001d410] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1001d550 calls sscanf with a0=ret(dl_hash_lookup), a1=0x1002b7c0, a2=sp-32, a3=?.
  The `bne` branch at 0x1001d528 targets 0x1001d548, is taken when v0(=ret(dl_hash_lookup)) != 0, and falls through when v0(=ret(dl_hash_lookup)) == 0.
  The `beq` branch at 0x1001d55c targets 0x1001d56c, is taken when v0(=ret(sscanf)) == v1(=0x1), and falls through when v0(=ret(sscanf)) != v1(=0x1).
  The `beq` branch at 0x1001d564 targets 0x1001d534 and is always taken.
  The `beq` branch at 0x1001d56c targets 0x1001d534 and is always taken.
  The return at 0x1001d540 has v0 = one of a1, ?.

- `dl_harness_print_meta_results` in `usr/diags/SG/bin/olsgsys` at 0x1001f834 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001f834-0x1001f9a8 (372 bytes).
  It occupies 372 bytes.
  3 such `lw` accesses load 4 bytes from sym(diagEnv) +0x0, including `lw` at 0x1001f874, `lw` at 0x1001f894, `lw` at 0x1001f8cc.
  The `lw` at 0x1001f88c loads 4 bytes from [sym(diagEnv)] +0x8.
  8 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1001f8b8, `lw` at 0x1001f8c0, `lw` at 0x1001f904.
  The `lw` at 0x1001f8d0 loads 4 bytes from sym(TEST) +0x0.
  2 such `lw` accesses load 4 bytes from [sym(diagEnv)] +0x10, including `lw` at 0x1001f8d4, `lw` at 0x1001f934.
  The `lw` at 0x1001f8d8 loads 4 bytes from [sym(TEST)] +0x18.
  The `lw` at 0x1001f8dc loads 4 bytes from [sym(TEST)] +0x1c.
  The `lw` at 0x1001f8e4 loads 4 bytes from [sym(TEST)] +0x20.
  The `sw` at 0x1001f900 stores 4 bytes to sym(TEST) +0x0.
  The `jal` at 0x1001f888 calls dl_output_meta [0x10018f78] with a0=0x3, a1=0x1002a670, a2=[[sym(diagEnv)]+8], a3=a3 at entry (arg3).
  The `jal` at 0x1001f8c4 calls dl_output_meta [0x10018f78] with a0=one of 0x0, 0x1, 0x2, a1=0x1002a6a0, a2=?, a3=?.
  The `jal` at 0x1001f974 calls dl_output_meta [0x10018f78] with a0=0x3, a1=0x1002a6c0, a2=?, a3=?.
  The `beq` branch at 0x1001f8a4 targets 0x1001f900 and is always taken.
  The `bne` branch at 0x1001f8f8 targets 0x1001f960, is taken when a4(=[[sym(diagEnv)]+16]) < s3(?) (unsigned), and falls through when a4(=[[sym(diagEnv)]+16]) >= s3(?) (unsigned).
  The `beq` branch at 0x1001f90c targets 0x1001f934, is taken when (a5(?) & 0x2) == 0, and falls through when (a5(?) & 0x2) != 0.
  The `bgtz` branch at 0x1001f918 targets 0x1001f8ac, is taken when a7(?) > 0 (signed), and falls through when a7(?) <= 0 (signed).
  The `beq` branch at 0x1001f92c targets 0x1001f8b0 and is always taken.
  The `beq` branch at 0x1001f958 targets 0x1001f900, is taken when t3(=[[sym(diagEnv)]+16]) >= s3(?) (unsigned), and falls through when t3(=[[sym(diagEnv)]+16]) < s3(?) (unsigned).
  The return at 0x1001f9a0 has v0 = ret(dl_output_meta).

- `dl_harness_maybe_print_meta_results` in `usr/diags/SG/bin/olsgsys` at 0x1001f9a8 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001f9a8-0x1001fa14 (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x1001f9c0 loads 4 bytes from sym(diagEnv) +0x0.
  The `lw` at 0x1001f9c4 loads 4 bytes from [sym(diagEnv)] +0x0.
  The `lw` at 0x1001f9cc loads 4 bytes from [sym(diagEnv)] +0x8.
  The `lw` at 0x1001f9d4 loads 4 bytes from [sym(diagEnv)] +0xc.
  The `jal` at 0x1001fa04 calls dl_harness_print_meta_results [0x1001f834] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[[sym(diagEnv)]+12], a3=[[sym(diagEnv)]+8], a4=[sym(diagEnv)], a5=0x13490.
  The `beq` branch at 0x1001f9d0 targets 0x1001f9f4, is taken when at(=[[sym(diagEnv)]]) == v0(=0x1), and falls through when at(=[[sym(diagEnv)]]) != v0(=0x1).
  The `beq` branch at 0x1001f9d8 targets 0x1001f9f4, is taken when a2(=[[sym(diagEnv)]+12]) == 0, and falls through when a2(=[[sym(diagEnv)]+12]) != 0.
  The `beq` branch at 0x1001f9ec targets 0x1001fa00, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x1001fa0c targets 0x1001f9f4 and is always taken.
  The return at 0x1001f9f8 has v0 = one of 0x1, ret(dl_harness_print_meta_results).

- `dl_harness_abnormal_exit` in `usr/diags/SG/bin/olsgsys` at 0x1001fe30 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1001fe30-0x1002004c (540 bytes).
  It occupies 540 bytes.
  The `lw` at 0x1001fe88 loads 4 bytes from sym(TEST) +0x0.
  The `lw` at 0x1001fe8c loads 4 bytes from [sym(TEST)] +0x14.
  2 such `lw` accesses load 4 bytes from sym(diagEnv) +0x0, including `lw` at 0x1001feb4, `lw` at 0x1001ff0c.
  The `lw` at 0x1001feb8 loads 4 bytes from [sym(diagEnv)] +0xc.
  2 such `lw` accesses load 4 bytes from sym(currTestList) +0x0, including `lw` at 0x1001fecc, `lw` at 0x1001ff00.
  6 such `sw` accesses store 4 bytes to ?, including `sw` at 0x1001ff28, `sw` at 0x1001ffe8, `sw` at 0x1001fffc.
  9 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1001ff2c, `lw` at 0x1001ff34, `lw` at 0x1001ff4c.
  The `lw` at 0x1001ff3c loads 4 bytes from [sym(diagEnv)] +0x10.
  The `jalr` at 0x1001fe7c calls vsnprintf with a0=sp-4192, a1=0x1000, a2=a1 at entry (arg1), a3=sp-48.
  The `jal` at 0x1001fea8 calls dl_output_uniq [0x1001910c] with a0=0x1002baa8, a1=sp-4192, a2=?, a3=?.
  The `jal` at 0x1001fec8 calls dl_harness_print_meta_results [0x1001f834] with a0=[sym(currTestList)], a1=?, a2=?, a3=?.
  The `jal` at 0x1001fed8 calls dl_hash_lookup [0x1001d410] with a0=0x1002a818, a1=?, a2=?, a3=?.
  The `jal` at 0x1001fee4 calls dl_logInterruptedEvent [0x1001aa18] with a0=ret(dl_hash_lookup), a1=?, a2=?, a3=?.
  The `jalr` at 0x1001ff6c calls exit with a0=0x2, a1=?, a2=?, a3=[[sym(diagEnv)]+16].
  The `jalr` at 0x1001ff84 calls exit with a0=0x2, a1=?, a2=?, a3=?.
  The `jal` at 0x1001ff9c calls dl_output_exit_printlock [0x1001a68c] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001ffa8 calls dl_output_exit_crashlog [0x10016e74] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1001ffb4 calls dl_output_cleanup [0x10016684] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1001ffc0 calls exit with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x1002000c calls exit with a0=0x1, a1=?, a2=?, a3=?.
  The `jalr` at 0x10020018 calls exit with a0=0x1, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1001fe98 targets 0x1001ffc8, is taken when (v1(=[[sym(TEST)]+20]) & 0x2) == 0, and falls through when (v1(=[[sym(TEST)]+20]) & 0x2) != 0.
  The `beq` branch at 0x1001febc targets 0x1001fed0, is taken when a0(=[[sym(diagEnv)]+12]) == 0, and falls through when a0(=[[sym(diagEnv)]+12]) != 0.
  The `beq` branch at 0x1001ff08 targets 0x10020040 and is always taken.
  The `bne` branch at 0x1001ff20 targets 0x1001ff64, is taken when a3(=[[sym(diagEnv)]+16]) < a5(?) (unsigned), and falls through when a3(=[[sym(diagEnv)]+16]) >= a5(?) (unsigned).
  The `beq` branch at 0x1001ff40 targets 0x1001ff18, is taken when (t3(?) & 0x2) == 0, and falls through when (t3(?) & 0x2) != 0.
  The `blez` branch at 0x1001ff48 targets 0x1001ff54, is taken when a4(?) <= 0 (signed), and falls through when a4(?) > 0 (signed).
  The `bgtz` branch at 0x1001ff54 targets 0x1001ff10, is taken when a2(?) > 0 (signed), and falls through when a2(?) <= 0 (signed).
  The `beq` branch at 0x1001ff5c targets 0x1001ff14 and is always taken.
  The `blez` branch at 0x1001ff64 targets 0x1001ff74, is taken when a7(?) <= 0 (signed), and falls through when a7(?) > 0 (signed).
  The `blez` branch at 0x1001ff78 targets 0x1001ff8c, is taken when s0(?) <= 0 (signed), and falls through when s0(?) > 0 (signed).
  The `beq` branch at 0x1001ff8c targets 0x10020000, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x1001ff94 targets 0x10020014, is taken when s1(=a0) == t8(=-0x1), and falls through when s1(=a0) != t8(=-0x1).
  The `beq` branch at 0x1001ffc8 targets 0x10020020, is taken when s1(=a0) == a1(?), and falls through when s1(=a0) != a1(?).
  The `beq` branch at 0x1001ffd0 targets 0x10020030, is taken when s1(=a0) == a2(?), and falls through when s1(=a0) != a2(?).
  The `bne` branch at 0x1001ffd8 targets 0x1001fea4, is taken when s1(=a0) != 0, and falls through when s1(=a0) == 0.
  The `beq` branch at 0x1001fff8 targets 0x1001fea0 and is always taken.
  The `blez` branch at 0x10020000 targets 0x1001ff94, is taken when t0(?) <= 0 (signed), and falls through when t0(?) > 0 (signed).
  The `beq` branch at 0x10020028 targets 0x1001fea0 and is always taken.
  The `beq` branch at 0x10020038 targets 0x1001fea0 and is always taken.
  The `beq` branch at 0x10020044 targets 0x1001ff2c and is always taken.

- `dl_harness_obtain_realName` in `usr/diags/SG/bin/olsgsys` at 0x100203a8 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100203a8-0x1002047c (212 bytes).
  It occupies 212 bytes.
  The `jalr` at 0x100203e8 calls attr_get with a0=0x1002a880, a1=0x1002bac8, a2=sp-2040, a3=sp-2048, a4=0x0, a5=0x7d0, a6=0x12a90.
  The `jalr` at 0x10020400 calls strtok with a0=sp-2040, a1=0x1002bad0, a2=?, a3=?, a7=-0x1.
  The `jal` at 0x10020420 calls dl_hash_enter [0x1001d31c] with a0=0x1002a890, a1=?, a2=?, a3=?.
  The `jalr` at 0x1002043c calls strstr with a0=?, a1=0x1002bad8, a2=?, a3=?.
  The `jalr` at 0x10020454 calls strtok with a0=0x0, a1=0x1002bad0, a2=?, a3=?.
  The `beq` branch at 0x100203f4 targets 0x10020464, is taken when v0(=ret(attr_get)) == a7(=-0x1), and falls through when v0(=ret(attr_get)) != a7(=-0x1).
  The `beq` branch at 0x10020408 targets 0x10020464, is taken when v0(=ret(strtok)) == 0, and falls through when v0(=ret(strtok)) != 0.
  The `beq` branch at 0x10020410 targets 0x10020434 and is always taken.
  The `beq` branch at 0x1002042c targets 0x10020464, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `bne` branch at 0x10020444 targets 0x10020418, is taken when v0(=ret(strstr)) != 0, and falls through when v0(=ret(strstr)) == 0.
  The `beq` branch at 0x1002045c targets 0x1002042c and is always taken.
  The return at 0x10020474 has v0 = one of ret(attr_get), ret(strtok), ?.

- `dl_harness_verify_IP` in `usr/diags/SG/bin/olsgsys` at 0x1002047c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x1002047c-0x100204b4 (56 bytes).
  It occupies 56 bytes.
  The `jal` at 0x10020498 calls dl_harness_obtain_realName [0x100203a8] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x100204ac has v0 = 0x1.

- `dl_harness` in `usr/diags/SG/bin/olsgsys` at 0x100205ac (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x100205ac-0x10020a7c (1232 bytes).
  It occupies 1232 bytes.
  The `sw` at 0x1002066c stores 4 bytes to sym(startTime) +0x0.
  The `sw` at 0x10020678 stores 4 bytes to sym(runTime) +0x0.
  The `lw` at 0x1002068c loads 4 bytes from sym(startTime) +0x0.
  2 such `sw` accesses store 4 bytes to sym(endTime) +0x0, including `sw` at 0x10020698, `sw` at 0x10020a60.
  4 such `lw` accesses load 4 bytes from sym(diagEnv) +0x0, including `lw` at 0x100206e8, `lw` at 0x10020824, `lw` at 0x10020834.
  2 such `lbu` accesses load 1 byte from [sym(diagEnv)] +0x1c, including `lbu` at 0x100206ec, `lbu` at 0x100208a8.
  2 such `lw` accesses load 4 bytes from [sym(diagEnv)] +0x10, including `lw` at 0x10020830, `lw` at 0x10020848.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1002084c, `lw` at 0x1002085c, `lw` at 0x100208d0.
  3 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x0, including `lw` at 0x1002094c, `lw` at 0x10020a00, `lw` at 0x10020a2c.
  The `sw` at 0x100209f4 stores 4 bytes to sym(fakeTest) +0x0.
  The `lw` at 0x10020a08 loads 4 bytes from sym(fakeTest) +0x0.
  The `sb` at 0x10020a14 stores 1 byte to [sym(fakeTest)] +0x1f.
  The `sw` at 0x10020a28 stores 4 bytes to sym(fakeTest) +0x4.
  The `sw` at 0x10020a48 stores 4 bytes to sym(TEST) +0x0.
  The `jal` at 0x10020610 calls dl_output_init_env [0x10016180] with a0=a6 at entry (arg6), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1002061c calls dl_output_init_printlock [0x1001a59c] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10020628 calls dl_harness_verify_IP [0x1002047c] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10020638 calls dl_enableEspLogging [0x1001a864] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10020650 calls time with a0=0x0, a1=?, a2=?, a3=?.
  The `jal` at 0x10020668 calls dl_hash_value [0x1001d48c] with a0=0x1002ba00, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x100206a8 calls snprintf with a0=sp-232, a1=0x80, a2=0x1002bae8, a3=?.
  The `jal` at 0x100206bc calls dl_hash_enter [0x1001d31c] with a0=0x1002baf0, a1=sp-232, a2=?, a3=?.
  The `jal` at 0x100206d0 calls (unnamed) [0x10020238] with a0=a6 at entry (arg6), a1=?, a2=?, a3=?.
  The `jal` at 0x100206dc calls dl_output_init_env [0x10016180] with a0=a6 at entry (arg6), a1=?, a2=?, a3=?.
  The `jal` at 0x10020700 calls dl_server_start [0x1001d060] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1002071c calls dl_server_protocol1 [0x1001d1d0] with a0=?, a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=a6 at entry (arg6), a4=sp-104.
  The `jal` at 0x10020738 calls (unnamed) [0x1002004c] with a0=0x0, a1=ret(dl_server_protocol1), a2=?, a3=?.
  The `jal` at 0x10020764 calls (unnamed) [0x1001e48c] with a0=ret(dl_server_protocol1), a1=?, a2=?, a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=a4 at entry (arg4), a6=a5 at entry (arg5).
  The `jal` at 0x10020774 calls (unnamed) [0x10020238] with a0=a6 at entry (arg6), a1=?, a2=?, a3=?.
  The `jal` at 0x10020788 calls dl_output_init_env [0x10016180] with a0=a6 at entry (arg6), a1=?, a2=?, a3=?.
  The `jal` at 0x10020794 calls dl_output_init_crashlog [0x10016cc0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100207a0 calls dl_revision [0x10020a7c] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100207b0 calls dl_output_time [0x1001a220] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100207c4 calls dl_hash_enter [0x1001d31c] with a0=0x1002a818, a1=?, a2=?, a3=?.
  The `jal` at 0x100207d8 calls (unnamed) [0x1001f6bc] with a0=a2 at entry (arg2), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x100207e8 calls dl_hash_lookup [0x1001d410] with a0=0x1002a438, a1=?, a2=?, a3=?.
  The `jal` at 0x10020800 calls (unnamed) [0x1001fa14] with a0=a2 at entry (arg2), a1=a7 at entry (arg7), a2=?, a3=?.
  The `jal` at 0x10020818 calls dl_output_dbug [0x10019758] with a0=0x6, a1=0x1002a9a8, a2=ret(0x1001fa14), a3=?.
  The `jal` at 0x1002082c calls dl_logMultipleTestEnd [0x1001ab3c] with a0=a2 at entry (arg2), a1=[[sym(diagEnv)]+16], a2=?, a3=?.
  The `jal` at 0x10020878 calls dl_output_time [0x1001a220] with a0=?, a1=?, a2=?, a3=?, a5=[[sym(diagEnv)]+16], a6=0x2.
  The `jal` at 0x10020884 calls dl_output_exit_printlock [0x1001a68c] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10020890 calls dl_output_exit_crashlog [0x10016e74] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1002089c calls dl_output_cleanup [0x10016684] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x100208cc calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x100208e8 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10020930 calls (unnamed) [0x1001d584] with a0=a2 at entry (arg2), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x10020948 calls (unnamed) [0x10020358] with a0=[a1], a1=?, a2=?, a3=?.
  The `jal` at 0x10020968 calls (unnamed) [0x1002004c] with a0=0x0, a1=a0 at entry (arg0), a2=a1 at entry (arg1), a3=?.
  The `jal` at 0x10020994 calls (unnamed) [0x1001e48c] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=ret(0x10020358), a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=a4 at entry (arg4), a6=a5 at entry (arg5).
  The `jal` at 0x100209a0 calls dl_logStartEvent [0x1001a9a8] with a0=ret(0x10020358), a1=?, a2=?, a3=?.
  The `jal` at 0x100209b8 calls (unnamed) [0x100204b4] with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `jal` at 0x100209d4 calls dl_hash_enter [0x1001d31c] with a0=0x1002a988, a1=0x1002b928, a2=?, a3=?.
  The `jalr` at 0x100209e0 calls malloc with a0=0x20, a1=?, a2=?, a3=?.
  The `jalr` at 0x100209fc calls strncpy with a0=ret(malloc), a1=[a1], a2=0x20, a3=?.
  The `jalr` at 0x10020a10 calls malloc with a0=0x80, a1=[sym(fakeTest)], a2=?, a3=?.
  The `jalr` at 0x10020a30 calls snprintf with a0=ret(malloc), a1=0x80, a2=0x1002a998, a3=[a1].
  The `jal` at 0x10020a44 calls dl_output_init_env [0x10016180] with a0=a6 at entry (arg6), a1=?, a2=?, a3=sym(TEST).
  The `jal` at 0x10020a6c calls dl_output_abrt [0x1001a048] with a0=0x1002a940, a1=?, a2=?, a3=?.
  The `beq` branch at 0x10020630 targets 0x10020a64, is taken when v0(=ret(dl_harness_verify_IP)) == 0, and falls through when v0(=ret(dl_harness_verify_IP)) != 0.
  The `bne` branch at 0x10020640 targets 0x10020928, is taken when s1(=a2) != 0, and falls through when s1(=a2) == 0.
  The `bne` branch at 0x10020648 targets 0x10020940, is taken when s2(=a1) != 0, and falls through when s2(=a1) == 0.
  The `beq` branch at 0x10020674 targets 0x10020a54, is taken when v0(=ret(dl_hash_value)) == 0, and falls through when v0(=ret(dl_hash_value)) != 0.
  The `beq` branch at 0x100206c4 targets 0x100209c8, is taken when s1(=a2) == 0, and falls through when s1(=a2) != 0.
  The `beq` branch at 0x100206f4 targets 0x10020784, is taken when ra(=[[sym(diagEnv)]+28]:1) == 0, and falls through when ra(=[[sym(diagEnv)]+28]:1) != 0.
  The `beq` branch at 0x1002077c targets 0x10020788 and is always taken.
  The `bne` branch at 0x100207f0 targets 0x100209b0, is taken when v0(=ret(dl_hash_lookup)) != 0, and falls through when v0(=ret(dl_hash_lookup)) == 0.
  The `beq` branch at 0x10020860 targets 0x1002086c, is taken when (a7(?) & 0x2) == 0, and falls through when (a7(?) & 0x2) != 0.
  The `beq` branch at 0x1002086c targets 0x1002084c, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x100208ac targets 0x100208f0, is taken when t1(=[[sym(diagEnv)]+28]:1) == 0, and falls through when t1(=[[sym(diagEnv)]+28]:1) != 0.
  The `bne` branch at 0x100208b4 targets 0x100208e4, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x100208dc targets 0x100208c0, is taken when s2(?) < s3(?) (signed), and falls through when s2(?) >= s3(?) (signed).
  The `beq` branch at 0x10020938 targets 0x10020648 and is always taken.
  The `beq` branch at 0x100209a8 targets 0x1002064c and is always taken.
  The `beq` branch at 0x100209c0 targets 0x100207f8 and is always taken.
  The `beq` branch at 0x10020a4c targets 0x100208f0 and is always taken.
  The `beq` branch at 0x10020a5c targets 0x1002069c and is always taken.
  The `beq` branch at 0x10020a74 targets 0x10020638 and is always taken.
  The return at 0x10020920 has v0 = one of -0x1, 0x0, 0x2.

- `dl_revision` in `usr/diags/SG/bin/olsgsys` at 0x10020a7c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10020a7c-0x10020ad4 (88 bytes).
  It occupies 88 bytes.
  The `jal` at 0x10020aa4 calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x1002a9c8, a2=0x1002baf8, a3=a3 at entry (arg3).
  The `jal` at 0x10020abc calls dl_output_dbug [0x10019758] with a0=0x1, a1=0x1002bafc, a2=0x1002a9f0, a3=?.
  The return at 0x10020acc has v0 = ret(dl_output_dbug).

- `dl_output_banner` in `usr/diags/SG/bin/olsgsys` at 0x10020ad4 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10020ad4-0x10020c10 (316 bytes).
  It occupies 316 bytes.
  The `lbu` at 0x10020b60 loads 1 byte from ?.
  The `sb` at 0x10020b74 stores 1 byte to ?.
  The `jal` at 0x10020b0c calls dl_output_rev [0x100186c8] with a0=0x1002aa00, a1=a0 at entry (arg0), a2=a1 at entry (arg1), a3=0x1002a9f0, a4=0x1002aa20, a5=0x10030000, a6=0x12364.
  The `jalr` at 0x10020b18 calls time with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x10020b28 calls ctime with a0=sp-3664, a1=?, a2=?, a3=?.
  The `jalr` at 0x10020b40 calls snprintf with a0=sp-3656, a1=0x1e, a2=0x1002bafc, a3=ret(ctime).
  The `jal` at 0x10020b84 calls dl_output_info [0x100189a4] with a0=0x1002aa30, a1=sp-3656, a2=?, a3=0xa.
  The `jalr` at 0x10020b90 calls uname with a0=sp-3624, a1=?, a2=?, a3=?.
  The `jalr` at 0x10020bac calls syssgi with a0=0xbc, a1=0x100, a2=sp-280, a3=?.
  The `jal` at 0x10020be0 calls dl_output_info [0x100189a4] with a0=0x1002aa58, a1=sp-3624, a2=sp-280, a3=sp-2853, a4=sp-2596, a5=sp-3367.
  The `jal` at 0x10020c00 calls dl_output_info [0x100189a4] with a0=0x1002aa40, a1=?, a2=?, a3=?.
  The `beq` branch at 0x10020b50 targets 0x10020b60 and is always taken.
  The `beq` branch at 0x10020b58 targets 0x10020b78, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0x10020b68 targets 0x10020b58, is taken when t0(?) != a3(=0xa), and falls through when t0(?) == a3(=0xa).
  The `beq` branch at 0x10020b70 targets 0x10020b58 and is always taken.
  The `bltz` branch at 0x10020b98 targets 0x10020bf8, is taken when v0(=ret(uname)) < 0 (signed), and falls through when v0(=ret(uname)) >= 0 (signed).
  The `beq` branch at 0x10020bb4 targets 0x10020bc4, is taken when v0(=ret(syssgi)) == 0, and falls through when v0(=ret(syssgi)) != 0.
  The `beq` branch at 0x10020c08 targets 0x10020bec and is always taken.
  The return at 0x10020bf0 has v0 = ret(dl_output_info).

- `__istart` in `usr/diags/SG/bin/olsgsys` at 0x10020c1c (n32).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/olsgsys`.
  Range: 0x10020c1c-0x10020c20 (4 bytes).
  It occupies 4 bytes.
