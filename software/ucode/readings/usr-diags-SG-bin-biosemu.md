# Readings: `usr/diags/SG/bin/biosemu`

One entry per routine, filed here from the reading batches by binary.

- `__start` in `usr/diags/SG/bin/biosemu` at 0x10008be0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x10008be0-0x10008cec (268 bytes).
  It occupies 268 bytes.
  3 such `ld` accesses load 8 bytes from table(0x39b98) +0x0, including `ld` at 0x10008c20, `ld` at 0x10008c38, `ld` at 0x10008cbc.
  2 such `ld` accesses load 8 bytes from entry(0x39b98) +0x0, including `ld` at 0x10008c28, `ld` at 0x10008ccc.
  The `sd` at 0x10008c3c stores 8 bytes to entry(0x39b98) +0x0.
  2 such `ld` accesses load 8 bytes from table(0x3a1d8) +0x0, including `ld` at 0x10008c50, `ld` at 0x10008cb0.
  The `sw` at 0x10008c58 stores 4 bytes to entry(0x3a1d8) +0x0.
  2 such `ld` accesses load 8 bytes from table(0x3a1e0) +0x0, including `ld` at 0x10008c64, `ld` at 0x10008cb8.
  The `sd` at 0x10008c68 stores 8 bytes to entry(0x3a1e0) +0x0.
  The `ld` at 0x10008c6c loads 8 bytes from table(0x3a138) +0x0.
  The `ld` at 0x10008c84 loads 8 bytes from table(0x39bb8) +0x0.
  The `ld` at 0x10008ca4 loads 8 bytes from table(0x39dd0) +0x0.
  The `lw` at 0x10008cc0 loads 4 bytes from entry(0x3a1d8) +0x0.
  The `ld` at 0x10008cc4 loads 8 bytes from entry(0x3a1e0) +0x0.
  The `ld` at 0x10008cdc loads 8 bytes from table(0x39bb0) +0x0.
  The `bal` at 0x10008bf8 calls __start+32 [0x10008c00] with a0=?, a1=sp+8, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10008c74 calls (unknown callee) with a0=?, a1=?, a2=?, a3=[entry(0x39b98)]:8.
  The `jalr` at 0x10008c88 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10008cc8 calls (unknown callee) with a0=[entry(0x3a1d8)], a1=[entry(0x3a1e0)]:8, a2=[entry(0x39b98)]:8, a3=?.
  The `jalr` at 0x10008ce0 calls (unknown callee) with a0=ret(?), a1=?, a2=?, a3=?.
  The `bne` branch at 0x10008c2c targets 0x10008c40, is taken when a3(=[entry(0x39b98)]:8) != 0, and falls through when a3(=[entry(0x39b98)]:8) == 0.

- `_mcount` in `usr/diags/SG/bin/biosemu` at 0x10008cec (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x10008cec-0x10008cf8 (12 bytes).
  It occupies 12 bytes.
  The return at 0x10008cf0 has v0 = ?.

- `MapCurrentInt10` in `usr/diags/SG/bin/biosemu` at 0x10008f10 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x10008f10-0x10008f28 (24 bytes).
  It occupies 24 bytes.
  The return at 0x10008f20 has v0 = 0x1.

- `xf86getsecs` in `usr/diags/SG/bin/biosemu` at 0x1000ddc0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x1000ddc0-0x1000de34 (116 bytes).
  It occupies 116 bytes.
  The `sd` at 0x1000de04 stores 8 bytes to a0 (arg0 at entry) +0x0.
  The `sd` at 0x1000de1c stores 8 bytes to a1 (arg1 at entry) +0x0.
  The `jalr` at 0x1000dde8 calls gettimeofday with a0=sp-48, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x1000ddf4 targets 0x1000de08, is taken when v0(=a0) == 0, and falls through when v0(=a0) != 0.
  The `beq` branch at 0x1000de0c targets 0x1000de20, is taken when a1 == 0, and falls through when a1 != 0.
  The return at 0x1000de2c has v0 = a0.

- `xf86GetVerbosity` in `usr/diags/SG/bin/biosemu` at 0x1000de40 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x1000de40-0x1000de4c (12 bytes).
  It occupies 12 bytes.
  The return at 0x1000de44 has v0 = 0x2a.

- `setup_pvp` in `usr/diags/SG/bin/biosemu` at 0x1000eef0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x1000eef0-0x1000f00c (284 bytes).
  It occupies 284 bytes.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x1000ef10, `lw` at 0x1000ef3c, `lw` at 0x1000ef6c.
  The `sw` at 0x1000ef34 stores 4 bytes to a0 (arg0 at entry) +0x50.
  The `sw` at 0x1000ef64 stores 4 bytes to a0 (arg0 at entry) +0x54.
  The `sw` at 0x1000ef94 stores 4 bytes to a0 (arg0 at entry) +0x64.
  The `sw` at 0x1000efc4 stores 4 bytes to a0 (arg0 at entry) +0x68.
  The `lw` at 0x1000efcc loads 4 bytes from a0 (arg0 at entry) +0x64.
  The `sw` at 0x1000efd4 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0x1000efe0 stores 4 bytes to a0 (arg0 at entry) +0x58.
  The `sw` at 0x1000efe8 stores 4 bytes to a0 (arg0 at entry) +0x5c.
  The `sw` at 0x1000eff0 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `jalr` at 0x1000ef20 calls ioctl with a0=[a0], a1=0x40040000, a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x1000ef50 calls ioctl with a0=[a0], a1=0x40040002, a2=sp-48, a3=?.
  The `jalr` at 0x1000ef80 calls ioctl with a0=[a0], a1=0x4004000b, a2=sp-48, a3=?.
  The `jalr` at 0x1000efb0 calls ioctl with a0=[a0], a1=0x4004000a, a2=sp-48, a3=?.
  The return at 0x1000f004 has v0 = 0x0.

- `pciba_scan` in `usr/diags/SG/bin/biosemu` at 0x1000f010 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x1000f010-0x1000f1c4 (436 bytes).
  It occupies 436 bytes.
  4 such `ld` accesses load 8 bytes from ?, including `ld` at 0x1000f08c, `ld` at 0x1000f0c0, `ld` at 0x1000f124.
  The `jalr` at 0x1000f04c calls scandir with a0=0x10040908, a1=sp-72, a2=0x0, a3=0x0.
  The `jal` at 0x1000f0a0 calls (unnamed) [0x1000f1d0] with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jal` at 0x1000f0cc calls get_pciba_dir [0x1000f290] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f0f8 calls pciba_add_to_list [0x1000f5d0] with a0=a1 at entry (arg1), a1=ret(get_pciba_dir), a2=ret(get_pciba_dir), a3=ret(get_pciba_dir).
  The `jalr` at 0x1000f12c calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f148 calls printf with a0=0x10040918, a1=?, a2=ret(get_pciba_dir), a3=ret(get_pciba_dir).
  The `jalr` at 0x1000f170 calls free with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1000f05c targets 0x1000f1a8, is taken when a3(=ret(scandir)) == 0, and falls through when a3(=ret(scandir)) != 0.
  The `beq` branch at 0x1000f074 targets 0x1000f198, is taken when a4(=0x0) >= a5(=ret(scandir)) (signed), and falls through when a4(=0x0) < a5(=ret(scandir)) (signed).
  The `beq` branch at 0x1000f0a8 targets 0x1000f158, is taken when v0(=ret(0x1000f1d0)) == 0, and falls through when v0(=ret(0x1000f1d0)) != 0.
  The `beq` branch at 0x1000f0e4 targets 0x1000f13c, is taken when a2(=ret(get_pciba_dir)) == 0, and falls through when a2(=ret(get_pciba_dir)) != 0.
  The `beq` branch at 0x1000f100 targets 0x1000f114, is taken when v0(=ret(pciba_add_to_list)) == 0, and falls through when v0(=ret(pciba_add_to_list)) != 0.
  The `beq` branch at 0x1000f134 targets 0x1000f150 and is always taken.
  The `beq` branch at 0x1000f150 targets 0x1000f178 and is always taken.
  The `bne` branch at 0x1000f190 targets 0x1000f07c, is taken when a2(?) < a3(?) (signed), and falls through when a2(?) >= a3(?) (signed).
  The `beq` branch at 0x1000f1a0 targets 0x1000f1ac and is always taken.
  The return at 0x1000f1bc has v0 = one of ?, 0x0.

- `get_pciba_dir` in `usr/diags/SG/bin/biosemu` at 0x1000f290 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x1000f290-0x1000f5d0 (832 bytes).
  It occupies 832 bytes.
  The `sb` at 0x1000f344 stores 1 byte to (ret(strlen)+13 + ret(malloc)) +0x0.
  4 such `ld` accesses load 8 bytes from ?, including `ld` at 0x1000f39c, `ld` at 0x1000f400, `ld` at 0x1000f500.
  The `sb` at 0x1000f420 stores 1 byte to ?.
  The `sb` at 0x1000f4d8 stores 1 byte to (ret(readlink)+1 + sp-1072) +0x0.
  The `jalr` at 0x1000f2c0 calls strlen with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1000f2dc calls malloc with a0=ret(strlen)+13, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f300 calls perror with a0=0x10040930, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f330 calls snprintf with a0=ret(malloc), a1=ret(strlen)+13, a2=0x10042e48, a3=0x10040908, a4=a0 at entry (arg0).
  The `jalr` at 0x1000f35c calls scandir with a0=ret(malloc), a1=sp-1336, a2=0x0, a3=0x0, a4=(ret(strlen)+13 + ret(malloc)), a5=ret(malloc).
  The `jalr` at 0x1000f3a8 calls strlen with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f3d4 calls realloc with a0=?, a1=(ret(strlen) + ret(strlen)+14)+2, a2=(ret(strlen) + ret(strlen)+14)+1, a3=?.
  The `jalr` at 0x1000f40c calls snprintf with a0=ret(realloc), a1=?, a2=0x10042e48, a3=ret(malloc).
  The `jalr` at 0x1000f430 calls lstat with a0=ret(realloc), a1=sp-1312, a2=?, a3=?, a7=ret(realloc).
  The `jalr` at 0x1000f458 calls fprintf with a0=sym(__iob)+64, a1=0x10040940, a2=ret(realloc), a3=?.
  The `jalr` at 0x1000f468 calls perror with a0=0x10042e50, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f494 calls readlink with a0=ret(realloc), a1=sp-1072, a2=0x400, a3=?.
  The `jalr` at 0x1000f4b8 calls perror with a0=0x10040950, a1=?, a2=ret(readlink), a3=?.
  The `jalr` at 0x1000f4e4 calls strdup with a0=sp-1072, a1=(ret(readlink)+1 + sp-1072), a2=sp-1072, a3=?.
  The `jalr` at 0x1000f508 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f530 calls free with a0=?, a1=?, a2=0xa000, a3=?.
  The `jalr` at 0x1000f560 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f570 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f580 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f5a0 calls free with a0=ret(malloc), a1=?, a2=?, a3=?, a6=ret(scandir).
  The `bne` branch at 0x1000f2ec targets 0x1000f314, is taken when a0(=ret(malloc)) != 0, and falls through when a0(=ret(malloc)) == 0.
  The `beq` branch at 0x1000f30c targets 0x1000f5b8 and is always taken.
  The `beq` branch at 0x1000f36c targets 0x1000f598, is taken when a6(=ret(scandir)) == 0, and falls through when a6(=ret(scandir)) != 0.
  The `beq` branch at 0x1000f384 targets 0x1000f558, is taken when a7(=0x0) >= t0(=ret(scandir)) (signed), and falls through when a7(=0x0) < t0(=ret(scandir)) (signed).
  The `beq` branch at 0x1000f438 targets 0x1000f470, is taken when v0(=ret(lstat)) == 0, and falls through when v0(=ret(lstat)) != 0.
  The `bne` branch at 0x1000f47c targets 0x1000f518, is taken when a1(?) != a2(=0xa000), and falls through when a1(?) == a2(=0xa000).
  The `bgez` branch at 0x1000f4a4 targets 0x1000f4c8, is taken when a2(=ret(readlink)) >= 0 (signed), and falls through when a2(=ret(readlink)) < 0 (signed).
  The `beq` branch at 0x1000f4c0 targets 0x1000f510 and is always taken.
  The `beq` branch at 0x1000f510 targets 0x1000f538 and is always taken.
  The `bne` branch at 0x1000f550 targets 0x1000f38c, is taken when a2(?) < a3(?) (signed), and falls through when a2(?) >= a3(?) (signed).
  The `beq` branch at 0x1000f590 targets 0x1000f5b8 and is always taken.
  The `beq` branch at 0x1000f5ac targets 0x1000f5b8 and is always taken.
  The return at 0x1000f5c8 has v0 = one of 0x0, ?.
  The instructions from 0x1000f5b4 to 0x1000f5b4 are not reached by any path from the entry, and their branches are not listed.

- `pciba_add_to_list` in `usr/diags/SG/bin/biosemu` at 0x1000f5d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x1000f5d0-0x1000f718 (328 bytes).
  It occupies 328 bytes.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x0, including `ld` at 0x1000f5f4, `ld` at 0x1000f6a8, `ld` at 0x1000f6b8.
  3 such `ld` accesses load 8 bytes from ?, including `ld` at 0x1000f60c, `ld` at 0x1000f63c, `ld` at 0x1000f660.
  2 such `sd` accesses store 8 bytes to ret(malloc) +0x58, including `sd` at 0x1000f6c0, `sd` at 0x1000f6e8.
  2 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0x0, including `sd` at 0x1000f6cc, `sd` at 0x1000f6e0.
  The `jalr` at 0x1000f618 calls strcmp with a0=?, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x1000f648 calls fprintf with a0=sym(__iob)+64, a1=0x10040960, a2=?, a3=a1 at entry (arg1).
  The `jalr` at 0x1000f67c calls malloc with a0=0x60, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f694 calls pciba_check_device [0x1000f720] with a0=a1 at entry (arg1), a1=ret(malloc), a2=?, a3=?.
  The `beq` branch at 0x1000f600 targets 0x1000f674, is taken when at(=[a0]:8) == 0, and falls through when at(=[a0]:8) != 0.
  The `bne` branch at 0x1000f620 targets 0x1000f65c, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `beq` branch at 0x1000f654 targets 0x1000f700 and is always taken.
  The `bne` branch at 0x1000f66c targets 0x1000f608, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x1000f69c targets 0x1000f6fc, is taken when v0(=ret(pciba_check_device)) == 0, and falls through when v0(=ret(pciba_check_device)) != 0.
  The `beq` branch at 0x1000f6ac targets 0x1000f6d8, is taken when a3(=[a0]:8) == 0, and falls through when a3(=[a0]:8) != 0.
  The `beq` branch at 0x1000f6d0 targets 0x1000f6ec and is always taken.
  The `beq` branch at 0x1000f6f4 targets 0x1000f700 and is always taken.
  The return at 0x1000f710 has v0 = one of 0x0, 0x1.

- `pciba_check_device` in `usr/diags/SG/bin/biosemu` at 0x1000f720 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x1000f720-0x1000f9f8 (728 bytes).
  It occupies 728 bytes.
  The `sd` at 0x1000f74c stores 8 bytes to a1 (arg1 at entry) +0x0.
  9 such `ld` accesses load 8 bytes from ?, including `ld` at 0x1000f7a8, `ld` at 0x1000f7d8, `ld` at 0x1000f818.
  The `sd` at 0x1000f7f0 stores 8 bytes to a1 (arg1 at entry) +0x8.
  The `sd` at 0x1000f860 stores 8 bytes to a1 (arg1 at entry) +0x48.
  The `sd` at 0x1000f8cc stores 8 bytes to a1 (arg1 at entry) +0x18.
  The `sd` at 0x1000f93c stores 8 bytes to a1 (arg1 at entry) +0x28.
  The `jalr` at 0x1000f764 calls scandir with a0=a0 at entry (arg0), a1=sp-56, a2=0x0, a3=0x0.
  The `jalr` at 0x1000f7b4 calls strcmp with a0=0x10042e58, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f7e4 calls path_concat [0x1000fa00] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f824 calls strcmp with a0=0x10040970, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f854 calls path_concat [0x1000fa00] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f890 calls strcmp with a0=0x10042e60, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f8c0 calls path_concat [0x1000fa00] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f900 calls strcmp with a0=0x10040980, a1=?, a2=?, a3=?.
  The `jal` at 0x1000f930 calls path_concat [0x1000fa00] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f964 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000f994 calls free with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1000f774 targets 0x1000f9d0, is taken when a0(=ret(scandir)) == 0, and falls through when a0(=ret(scandir)) != 0.
  The `beq` branch at 0x1000f78c targets 0x1000f98c, is taken when a1(=0x0) >= a2(=ret(scandir)) (signed), and falls through when a1(=0x0) < a2(=ret(scandir)) (signed).
  The `bne` branch at 0x1000f7bc targets 0x1000f800, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `bne` branch at 0x1000f82c targets 0x1000f870, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `bne` branch at 0x1000f898 targets 0x1000f8dc, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `bne` branch at 0x1000f908 targets 0x1000f94c, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `bne` branch at 0x1000f984 targets 0x1000f794, is taken when a2(?) < a3(?) (signed), and falls through when a2(?) >= a3(?) (signed).
  The `bne` branch at 0x1000f9a4 targets 0x1000f9bc, is taken when a5(?) < 0x4 (signed), and falls through when a5(?) >= 0x4 (signed).
  The `beq` branch at 0x1000f9b4 targets 0x1000f9e0 and is always taken.
  The `beq` branch at 0x1000f9c0 targets 0x1000f9e0 and is always taken.
  The `beq` branch at 0x1000f9d4 targets 0x1000f9e0 and is always taken.
  The return at 0x1000f9f0 has v0 = one of 0x0, 0x1.
  The instructions from 0x1000f9c8 to 0x1000f9cc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1000f9dc to 0x1000f9dc are not reached by any path from the entry, and their branches are not listed.

- `path_concat` in `usr/diags/SG/bin/biosemu` at 0x1000fa00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x1000fa00-0x1000fab8 (184 bytes).
  It occupies 184 bytes.
  The `sb` at 0x1000fa9c stores 1 byte to ((ret(strlen) + ret(strlen))+2 + ret(malloc)) +0x0.
  The `jalr` at 0x1000fa2c calls strlen with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1000fa40 calls strlen with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `jalr` at 0x1000fa64 calls malloc with a0=(ret(strlen) + ret(strlen))+3, a1=(ret(strlen) + ret(strlen))+2, a2=?, a3=?.
  The `jalr` at 0x1000fa88 calls snprintf with a0=ret(malloc), a1=(ret(strlen) + ret(strlen))+2, a2=0x10042e48, a3=a0 at entry (arg0), a4=a1 at entry (arg1).
  The return at 0x1000fab0 has v0 = ret(malloc).

- `pciba_list_devs` in `usr/diags/SG/bin/biosemu` at 0x1000fac0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x1000fac0-0x1000fc30 (368 bytes).
  It occupies 368 bytes.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x0, including `ld` at 0x1000faf0, `ld` at 0x1000fb10.
  7 such `ld` accesses load 8 bytes from ?, including `ld` at 0x1000fb4c, `ld` at 0x1000fb68, `ld` at 0x1000fb84.
  The `jalr` at 0x1000fb3c calls printf with a0=0x10040990, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000fb54 calls printf with a0=0x10042e68, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000fb70 calls printf with a0=0x100409a0, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000fb8c calls printf with a0=0x100409b8, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000fba8 calls printf with a0=0x100409d0, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000fbc4 calls printf with a0=0x100409e8, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000fbe0 calls printf with a0=0x10040a00, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1000fae4 targets 0x1000fafc, is taken when at(=a0) == 0, and falls through when at(=a0) != 0.
  The `bne` branch at 0x1000faf4 targets 0x1000fb08, is taken when v1(=[a0]:8) != 0, and falls through when v1(=[a0]:8) == 0.
  The `beq` branch at 0x1000fb00 targets 0x1000fc18 and is always taken.
  The `beq` branch at 0x1000fb24 targets 0x1000fc0c, is taken when a0(=[a0]:8) == 0, and falls through when a0(=[a0]:8) != 0.
  The `bne` branch at 0x1000fc04 targets 0x1000fb2c, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The return at 0x1000fc28 has v0 = one of 0x0, ?.

- `pciba_find_dev` in `usr/diags/SG/bin/biosemu` at 0x1000fc30 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x1000fc30-0x1000fcf4 (196 bytes).
  It occupies 196 bytes.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x0, including `ld` at 0x1000fc60, `ld` at 0x1000fc7c.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x1000fc94, `ld` at 0x1000fcc4.
  The `jalr` at 0x1000fca0 calls strcmp with a0=?, a1=a1 at entry (arg1), a2=?, a3=?.
  The `beq` branch at 0x1000fc54 targets 0x1000fc6c, is taken when at(=a0) == 0, and falls through when at(=a0) != 0.
  The `bne` branch at 0x1000fc64 targets 0x1000fc78, is taken when v1(=[a0]:8) != 0, and falls through when v1(=[a0]:8) == 0.
  The `beq` branch at 0x1000fc70 targets 0x1000fcdc and is always taken.
  The `beq` branch at 0x1000fc88 targets 0x1000fcd8, is taken when a0(=[a0]:8) == 0, and falls through when a0(=[a0]:8) != 0.
  The `bne` branch at 0x1000fca8 targets 0x1000fcc0, is taken when v0(=ret(strcmp)) != 0, and falls through when v0(=ret(strcmp)) == 0.
  The `beq` branch at 0x1000fcb8 targets 0x1000fcdc and is always taken.
  The `bne` branch at 0x1000fcd0 targets 0x1000fc90, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The return at 0x1000fcec has v0 = one of 0x0, ?.

- `pciba_enable_rom` in `usr/diags/SG/bin/biosemu` at 0x1000fd00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x1000fd00-0x1000fd84 (132 bytes).
  It occupies 132 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x10, including `lw` at 0x1000fd24, `lw` at 0x1000fd50.
  The `jalr` at 0x1000fd38 calls ioctl with a0=[a0+16], a1=0x40040030, a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x1000fd64 calls ioctl with a0=[a0+16], a1=0xffffffff80040030, a2=sp-48, a3=?.
  The return at 0x1000fd7c has v0 = 0x1.

- `pciba_disable_rom` in `usr/diags/SG/bin/biosemu` at 0x1000fd90 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x1000fd90-0x1000fe30 (160 bytes).
  It occupies 160 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x10, including `lw` at 0x1000fdb4, `lw` at 0x1000fdfc.
  The `jalr` at 0x1000fdc8 calls ioctl with a0=[a0+16], a1=0x40040030, a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x1000fde0 calls printf with a0=0x10040a18, a1=?, a2=?, a3=?.
  The `jalr` at 0x1000fe10 calls ioctl with a0=[a0+16], a1=0xffffffff80040030, a2=sp-48, a3=?.
  The return at 0x1000fe28 has v0 = 0x1.

- `__istart` in `usr/diags/SG/bin/biosemu` at 0x1003ff1c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/diags/SG/bin/biosemu`.
  Range: 0x1003ff1c-0x1003ff20 (4 bytes).
  It occupies 4 bytes.
