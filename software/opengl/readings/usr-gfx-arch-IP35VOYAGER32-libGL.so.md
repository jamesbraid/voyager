# Readings: `usr/gfx/arch/IP35VOYAGER32/libGL.so`

One entry per routine, filed here from the reading batches by binary.

- `__glFreeAttributeState` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82b8c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82b8c0-0xd82b944 (132 bytes).
  It occupies 132 bytes.
  The `lw` at 0xd82b900 loads 4 bytes from ?.
  The `jalr` at 0xd82b90c calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0xd82b904 targets 0xd82b924, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0xd82b91c targets 0xd82b900, is taken when s1(?) < s2(=a0+1284) (unsigned), and falls through when s1(?) >= s2(=a0+1284) (unsigned).
  The return at 0xd82b93c has v0 = ?.

- `__glFogiv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82b980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82b980-0xd82ba00 (128 bytes).
  It occupies 128 bytes.
  The `beq` branch at 0xd82b998 targets 0xd82b9d8, is taken when a0 == at(=0xb66), and falls through when a0 != at(=0xb66).
  The `beq` branch at 0xd82b9a0 targets 0xd82b9e0, is taken when a0 == a2(=0xb62), and falls through when a0 != a2(=0xb62).
  The `beq` branch at 0xd82b9a8 targets 0xd82b9e8, is taken when a0 == a3(=0xb64), and falls through when a0 != a3(=0xb64).
  The `beq` branch at 0xd82b9b0 targets 0xd82b9f0, is taken when a0 == a4(=0xb65), and falls through when a0 != a4(=0xb65).
  The `beq` branch at 0xd82b9b8 targets 0xd82b9f8, is taken when a0 == a5(=0xb61), and falls through when a0 != a5(=0xb61).
  The `beq` branch at 0xd82b9c0 targets 0xd82b9d0, is taken when a0 == a6(=0xb63), and falls through when a0 != a6(=0xb63).
  The return at 0xd82b9c8 has v0 = 0x0.
  The return at 0xd82b9d0 has v0 = 0x1.
  The return at 0xd82b9d8 has v0 = 0x4.
  The return at 0xd82b9e0 has v0 = 0x1.
  The return at 0xd82b9e8 has v0 = 0x1.
  The return at 0xd82b9f0 has v0 = 0x1.
  The return at 0xd82b9f8 has v0 = 0x1.

- `__glFogfv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82ba00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82ba00-0xd82ba34 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0xd82ba1c calls __glFogiv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd82ba2c has v0 = ret(__glFogiv_size).

- `__glCallLists_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82ba40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82ba40-0xd82baf0 (176 bytes).
  It occupies 176 bytes.
  The `lw` at 0xd82ba54 loads 4 bytes from abs 0xd881268.
  The `lw` at 0xd82ba70 loads 4 bytes from table(0xd878010) +0x0.
  The `bltz` branch at 0xd82ba48 targets 0xd82ba9c, is taken when a0 < 0 (signed), and falls through when a0 >= 0 (signed).
  The `beq` branch at 0xd82ba68 targets 0xd82ba80, is taken when a5(=a1-5120) >= 0xa (unsigned), and falls through when a5(=a1-5120) < 0xa (unsigned).
  The `beq` branch at 0xd82baa4 targets 0xd82ba8c and is always taken.
  The `beq` branch at 0xd82baac targets 0xd82ba8c and is always taken.
  The `beq` branch at 0xd82bab4 targets 0xd82ba8c and is always taken.
  The `beq` branch at 0xd82bac0 targets 0xd82ba8c and is always taken.
  The `beq` branch at 0xd82bac8 targets 0xd82ba8c and is always taken.
  The `beq` branch at 0xd82bad0 targets 0xd82ba8c and is always taken.
  The `beq` branch at 0xd82bad8 targets 0xd82ba8c and is always taken.
  The `beq` branch at 0xd82bae0 targets 0xd82ba8c and is always taken.
  The `beq` branch at 0xd82bae8 targets 0xd82ba8c and is always taken.
  The return at 0xd82ba80 has v0 = 0x0.
  The return at 0xd82ba94 has v0 = ?.
  The return at 0xd82ba9c has v0 = 0x0.
  The instructions from 0xd82ba7c to 0xd82ba7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd82babc to 0xd82babc are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0xd82ba74 uses the jump table at 0xd878010 with targets 0xd82baa4, 0xd82ba88, 0xd82bae8, 0xd82bae0, 0xd82bad8, 0xd82bad0, 0xd82bac8, 0xd82bac0, 0xd82bab4, 0xd82baac.

- `__glDrawPixels_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82bb00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82bb00-0xd82be28 (808 bytes).
  It occupies 808 bytes.
  The `bne` branch at 0xd82bb04 targets 0xd82bb54, is taken when a0 < 0x1906 (unsigned), and falls through when a0 >= 0x1906 (unsigned).
  The `bne` branch at 0xd82bb10 targets 0xd82bb7c, is taken when a0 < 0x1907 (unsigned), and falls through when a0 >= 0x1907 (unsigned).
  The `bne` branch at 0xd82bb1c targets 0xd82bcc0, is taken when a0 < 0x1909 (unsigned), and falls through when a0 >= 0x1909 (unsigned).
  The `bne` branch at 0xd82bb28 targets 0xd82bb7c, is taken when a0 < 0x190a (unsigned), and falls through when a0 >= 0x190a (unsigned).
  The `bne` branch at 0xd82bb38 targets 0xd82bdb8, is taken when a0 < a5(=0x8000) (unsigned), and falls through when a0 >= a5(=0x8000) (unsigned).
  The `beq` branch at 0xd82bb44 targets 0xd82bcd0, is taken when a5(=0x8000) >= a0 (unsigned), and falls through when a5(=0x8000) < a0 (unsigned).
  The `beq` branch at 0xd82bb4c targets 0xd82bc70 and is always taken.
  The `bne` branch at 0xd82bb54 targets 0xd82bc54, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0xd82bb60 targets 0xd82bb7c, is taken when a0 < 0x1904 (unsigned), and falls through when a0 >= 0x1904 (unsigned).
  The `bne` branch at 0xd82bb6c targets 0xd82bd58, is taken when a0 < 0x1905 (unsigned), and falls through when a0 >= 0x1905 (unsigned).
  The `beq` branch at 0xd82bb74 targets 0xd82bc70, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0xd82bb84 targets 0xd82bbe0, is taken when a1 < a5(=0x8034) (unsigned), and falls through when a1 >= a5(=0x8034) (unsigned).
  The `beq` branch at 0xd82bb8c targets 0xd82bc20, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0xd82bb9c targets 0xd82bcd8, is taken when a1 < a0(=0x8364) (unsigned), and falls through when a1 >= a0(=0x8364) (unsigned).
  The `beq` branch at 0xd82bba4 targets 0xd82bc20, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0xd82bbb8 targets 0xd82bdc8, is taken when a1 < a5(=0x8367) (unsigned), and falls through when a1 >= a5(=0x8367) (unsigned).
  The `beq` branch at 0xd82bbc4 targets 0xd82bd84, is taken when a5(=0x8367) >= a1 (unsigned), and falls through when a5(=0x8367) < a1 (unsigned).
  The `bne` branch at 0xd82bbd0 targets 0xd82bd30, is taken when a1 != a0(=0x8368), and falls through when a1 == a0(=0x8368).
  The `beq` branch at 0xd82bbd8 targets 0xd82bd84 and is always taken.
  The `bne` branch at 0xd82bbe4 targets 0xd82bc80, is taken when a1 < 0x1405 (unsigned), and falls through when a1 >= 0x1405 (unsigned).
  The `bne` branch at 0xd82bbec targets 0xd82bca8, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0xd82bbf8 targets 0xd82bd8c, is taken when a1 < a5(=0x8032) (unsigned), and falls through when a1 >= a5(=0x8032) (unsigned).
  The `bne` branch at 0xd82bc04 targets 0xd82bc18, is taken when a5(=0x8032) < a1 (unsigned), and falls through when a5(=0x8032) >= a1 (unsigned).
  The `beq` branch at 0xd82bc10 targets 0xd82bc24 and is always taken.
  The `bne` branch at 0xd82bc18 targets 0xd82bd30, is taken when a1 != a0(=0x8033), and falls through when a1 == a0(=0x8033).
  The `bne` branch at 0xd82bc54 targets 0xd82bcb0, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `bne` branch at 0xd82bc60 targets 0xd82bcb8, is taken when a0 < 0x1902 (unsigned), and falls through when a0 >= 0x1902 (unsigned).
  The `beq` branch at 0xd82bc68 targets 0xd82bcb8, is taken when a0 == t9(=0x1902), and falls through when a0 != t9(=0x1902).
  The `bne` branch at 0xd82bc84 targets 0xd82bd00, is taken when a1 < 0x1402 (unsigned), and falls through when a1 >= 0x1402 (unsigned).
  The `bne` branch at 0xd82bc90 targets 0xd82bd40, is taken when a1 < 0x1403 (unsigned), and falls through when a1 >= 0x1403 (unsigned).
  The `bne` branch at 0xd82bc98 targets 0xd82bd38, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0xd82bca0 targets 0xd82bd30, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0xd82bca8 targets 0xd82bc24 and is always taken.
  The `bne` branch at 0xd82bcb0 targets 0xd82bc70, is taken when a0 != v1(=0x1900), and falls through when a0 == v1(=0x1900).
  The `beq` branch at 0xd82bcb8 targets 0xd82bb7c and is always taken.
  The `bne` branch at 0xd82bcc0 targets 0xd82bd48, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0xd82bcc8 targets 0xd82bc70, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0xd82bcd0 targets 0xd82bb7c and is always taken.
  The `bne` branch at 0xd82bce0 targets 0xd82bd68, is taken when a1 < a0(=0x8362) (unsigned), and falls through when a1 >= a0(=0x8362) (unsigned).
  The `beq` branch at 0xd82bce8 targets 0xd82bc0c, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bne` branch at 0xd82bcf0 targets 0xd82bd30, is taken when a1 != a5(=0x8363), and falls through when a1 == a5(=0x8363).
  The `beq` branch at 0xd82bcf8 targets 0xd82bc20 and is always taken.
  The `bne` branch at 0xd82bd00 targets 0xd82bd18, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0xd82bd08 targets 0xd82bd20, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0xd82bd10 targets 0xd82bd30 and is always taken.
  The `bne` branch at 0xd82bd18 targets 0xd82bd30, is taken when a1 != t0(=0x1400), and falls through when a1 == t0(=0x1400).
  The `beq` branch at 0xd82bd20 targets 0xd82bc24 and is always taken.
  The `beq` branch at 0xd82bd28 targets 0xd82bca8, is taken when a1 == a7(=0x1406), and falls through when a1 != a7(=0x1406).
  The `bne` branch at 0xd82bd38 targets 0xd82bd30, is taken when a1 != a0(=0x1403), and falls through when a1 == a0(=0x1403).
  The `beq` branch at 0xd82bd40 targets 0xd82bc24 and is always taken.
  The `bne` branch at 0xd82bd48 targets 0xd82bc70, is taken when a0 != t1(=0x1907), and falls through when a0 == t1(=0x1907).
  The `beq` branch at 0xd82bd50 targets 0xd82bb80 and is always taken.
  The `bne` branch at 0xd82bd58 targets 0xd82bc70, is taken when a0 != t2(=0x1904), and falls through when a0 == t2(=0x1904).
  The `beq` branch at 0xd82bd60 targets 0xd82bb7c and is always taken.
  The `bne` branch at 0xd82bd70 targets 0xd82bde4, is taken when a1 < a0(=0x8036) (unsigned), and falls through when a1 >= a0(=0x8036) (unsigned).
  The `bne` branch at 0xd82bd7c targets 0xd82bd30, is taken when a0(=0x8036) < a1 (unsigned), and falls through when a0(=0x8036) >= a1 (unsigned).
  The `beq` branch at 0xd82bd84 targets 0xd82bc24 and is always taken.
  The `bne` branch at 0xd82bd90 targets 0xd82bd28, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `beq` branch at 0xd82bd98 targets 0xd82bd30, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0xd82bda0 targets 0xd82be04, is taken when a0 == at(=0x1900), and falls through when a0 != at(=0x1900).
  The `beq` branch at 0xd82bda8 targets 0xd82be08, is taken when a0 == v0(=0x1901), and falls through when a0 != v0(=0x1901).
  The `bne` branch at 0xd82bdb8 targets 0xd82bc70, is taken when a0 != v1(=0x190a), and falls through when a0 == v1(=0x190a).
  The `beq` branch at 0xd82bdc0 targets 0xd82bb7c and is always taken.
  The `bne` branch at 0xd82bdc8 targets 0xd82bdf4, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0xd82bdd4 targets 0xd82bc20, is taken when a6(=0x8366) >= a1 (unsigned), and falls through when a6(=0x8366) < a1 (unsigned).
  The `beq` branch at 0xd82bddc targets 0xd82bd30 and is always taken.
  The `bne` branch at 0xd82bde4 targets 0xd82bd30, is taken when a1 != a4(=0x8035), and falls through when a1 == a4(=0x8035).
  The `beq` branch at 0xd82bdec targets 0xd82bd84 and is always taken.
  The `bne` branch at 0xd82bdf4 targets 0xd82bd30, is taken when a1 != a5(=0x8365), and falls through when a1 == a5(=0x8365).
  The `beq` branch at 0xd82bdfc targets 0xd82bc20 and is always taken.
  The return at 0xd82bc4c has v0 = ?.
  The return at 0xd82bc70 has v0 = 0x0.
  The return at 0xd82bd30 has v0 = 0x0.
  The return at 0xd82bdb0 has v0 = 0x0.
  The return at 0xd82be20 has v0 = ?.
  The instructions from 0xd82bc78 to 0xd82bc7c are not reached by any path from the entry, and their branches are not listed.

- `__glBitmap_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82be40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82be40-0xd82be80 (64 bytes).
  It occupies 64 bytes.
  The `jalr` at 0xd82be68 calls __glDrawPixels_size with a0=0x1900, a1=0x1a00, a2=a0 at entry (arg0), a3=a1 at entry (arg1).
  The return at 0xd82be78 has v0 = ret(__glDrawPixels_size).

- `__glTexGendv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82be80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82be80-0xd82beb8 (56 bytes).
  It occupies 56 bytes.
  The `beq` branch at 0xd82be88 targets 0xd82beb0, is taken when a0 == at(=0x2500), and falls through when a0 != at(=0x2500).
  The `beq` branch at 0xd82be90 targets 0xd82bea8, is taken when a0 == a2(=0x2501), and falls through when a0 != a2(=0x2501).
  The `beq` branch at 0xd82be98 targets 0xd82bea8, is taken when a0 == a3(=0x2502), and falls through when a0 != a3(=0x2502).
  The return at 0xd82bea0 has v0 = 0x0.
  The return at 0xd82bea8 has v0 = 0x4.
  The return at 0xd82beb0 has v0 = 0x1.

- `__glTexGenfv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82bec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82bec0-0xd82bef4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0xd82bedc calls __glTexGendv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd82beec has v0 = ret(__glTexGendv_size).

- `__glTexGeniv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82bf00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82bf00-0xd82bf34 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0xd82bf1c calls __glTexGendv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd82bf2c has v0 = ret(__glTexGendv_size).

- `__glTexParameterfv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82bf40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82bf40-0xd82c05c (284 bytes).
  It occupies 284 bytes.
  The `bne` branch at 0xd82bf48 targets 0xd82bf9c, is taken when a0 < v0(=0x8066) (unsigned), and falls through when a0 >= v0(=0x8066) (unsigned).
  The `beq` branch at 0xd82bf58 targets 0xd82c01c, is taken when v0(=0x8066) >= a0 (unsigned), and falls through when v0(=0x8066) < a0 (unsigned).
  The `bne` branch at 0xd82bf70 targets 0xd82c000, is taken when a0 < a3(=0x813b) (unsigned), and falls through when a0 >= a3(=0x813b) (unsigned).
  The `beq` branch at 0xd82bf7c targets 0xd82bf94, is taken when a3(=0x813b) >= a0 (unsigned), and falls through when a3(=0x813b) < a0 (unsigned).
  The `bne` branch at 0xd82bf84 targets 0xd82c044, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0xd82bf8c targets 0xd82bfe0, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0xd82bfac targets 0xd82bfe8, is taken when a0 < 0x2801 (unsigned), and falls through when a0 >= 0x2801 (unsigned).
  The `bne` branch at 0xd82bfb8 targets 0xd82bfd0, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0xd82bfc0 targets 0xd82c034, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0xd82bfc8 targets 0xd82bfe0, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0xd82bfd8 targets 0xd82c054, is taken when a0 == a6(=0x1004), and falls through when a0 != a6(=0x1004).
  The `bne` branch at 0xd82bfe8 targets 0xd82bfd8, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0xd82bff0 targets 0xd82bfe0, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0xd82bff8 targets 0xd82bfd0 and is always taken.
  The `bne` branch at 0xd82c004 targets 0xd82c024, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0xd82c00c targets 0xd82bfe0, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0xd82c014 targets 0xd82bf94 and is always taken.
  The `bne` branch at 0xd82c024 targets 0xd82bfe0, is taken when a0 != a5(=0x8072), and falls through when a0 == a5(=0x8072).
  The `beq` branch at 0xd82c02c targets 0xd82bfd0 and is always taken.
  The `bne` branch at 0xd82c034 targets 0xd82bfe0, is taken when a0 != a3(=0x2802), and falls through when a0 == a3(=0x2802).
  The `beq` branch at 0xd82c03c targets 0xd82bfd0 and is always taken.
  The `bne` branch at 0xd82c044 targets 0xd82bfe0, is taken when a0 != a4(=0x813c), and falls through when a0 == a4(=0x813c).
  The `beq` branch at 0xd82c04c targets 0xd82bf94 and is always taken.
  The return at 0xd82bf94 has v0 = 0x1.
  The return at 0xd82bfd0 has v0 = 0x1.
  The return at 0xd82bfe0 has v0 = 0x0.
  The return at 0xd82c01c has v0 = 0x1.
  The return at 0xd82c054 has v0 = 0x4.

- `__glTexParameteriv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82c080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82c080-0xd82c0b4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0xd82c09c calls __glTexParameterfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd82c0ac has v0 = ret(__glTexParameterfv_size).

- `__glTexEnvfv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82c0c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82c0c0-0xd82c0f0 (48 bytes).
  It occupies 48 bytes.
  The `beq` branch at 0xd82c0c8 targets 0xd82c0e8, is taken when a0 == at(=0x2200), and falls through when a0 != at(=0x2200).
  The `beq` branch at 0xd82c0d0 targets 0xd82c0e0, is taken when a0 == a2(=0x2201), and falls through when a0 != a2(=0x2201).
  The return at 0xd82c0d8 has v0 = 0x0.
  The return at 0xd82c0e0 has v0 = 0x4.
  The return at 0xd82c0e8 has v0 = 0x1.

- `__glTexEnviv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82c100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82c100-0xd82c134 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0xd82c11c calls __glTexEnvfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd82c12c has v0 = ret(__glTexEnvfv_size).

- `__glTexImage1D_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82c140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82c140-0xd82c424 (740 bytes).
  It occupies 740 bytes.
  The `bltz` branch at 0xd82c140 targets 0xd82c348, is taken when a2 < 0 (signed), and falls through when a2 >= 0 (signed).
  The `bne` branch at 0xd82c148 targets 0xd82c164, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0xd82c154 targets 0xd82c298, is taken when a0 >= 0x1908 (unsigned), and falls through when a0 < 0x1908 (unsigned).
  The `beq` branch at 0xd82c15c targets 0xd82c1a4 and is always taken.
  The `bne` branch at 0xd82c164 targets 0xd82c194, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0xd82c170 targets 0xd82c1a4, is taken when a0 < 0x1905 (unsigned), and falls through when a0 >= 0x1905 (unsigned).
  The `bne` branch at 0xd82c17c targets 0xd82c2cc, is taken when a0 < 0x1906 (unsigned), and falls through when a0 >= 0x1906 (unsigned).
  The `bne` branch at 0xd82c184 targets 0xd82c1a4, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0xd82c18c targets 0xd82c2d4 and is always taken.
  The `bne` branch at 0xd82c194 targets 0xd82c2dc, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0xd82c19c targets 0xd82c2d4, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0xd82c1ac targets 0xd82c208, is taken when a1 < a4(=0x8034) (unsigned), and falls through when a1 >= a4(=0x8034) (unsigned).
  The `beq` branch at 0xd82c1b4 targets 0xd82c248, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0xd82c1c4 targets 0xd82c2ec, is taken when a1 < a0(=0x8364) (unsigned), and falls through when a1 >= a0(=0x8364) (unsigned).
  The `beq` branch at 0xd82c1cc targets 0xd82c248, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0xd82c1e4 targets 0xd82c3c4, is taken when a1 < a4(=0x8367) (unsigned), and falls through when a1 >= a4(=0x8367) (unsigned).
  The `beq` branch at 0xd82c1ec targets 0xd82c398, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0xd82c1f8 targets 0xd82c310, is taken when a1 != a5(=0x8368), and falls through when a1 == a5(=0x8368).
  The `beq` branch at 0xd82c200 targets 0xd82c398 and is always taken.
  The `bne` branch at 0xd82c20c targets 0xd82c26c, is taken when a1 < 0x1405 (unsigned), and falls through when a1 >= 0x1405 (unsigned).
  The `bne` branch at 0xd82c214 targets 0xd82c290, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0xd82c220 targets 0xd82c3a0, is taken when a1 < a4(=0x8032) (unsigned), and falls through when a1 >= a4(=0x8032) (unsigned).
  The `bne` branch at 0xd82c22c targets 0xd82c240, is taken when a4(=0x8032) < a1 (unsigned), and falls through when a4(=0x8032) >= a1 (unsigned).
  The `beq` branch at 0xd82c238 targets 0xd82c24c and is always taken.
  The `bne` branch at 0xd82c240 targets 0xd82c310, is taken when a1 != a0(=0x8033), and falls through when a1 == a0(=0x8033).
  The `bne` branch at 0xd82c270 targets 0xd82c318, is taken when a1 < 0x1402 (unsigned), and falls through when a1 >= 0x1402 (unsigned).
  The `bne` branch at 0xd82c278 targets 0xd82c358, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0xd82c280 targets 0xd82c350, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `beq` branch at 0xd82c288 targets 0xd82c310, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0xd82c290 targets 0xd82c24c and is always taken.
  The `bne` branch at 0xd82c298 targets 0xd82c2b4, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0xd82c2a4 targets 0xd82c360, is taken when a0 >= 0x190b (unsigned), and falls through when a0 < 0x190b (unsigned).
  The `beq` branch at 0xd82c2ac targets 0xd82c1a4 and is always taken.
  The `bne` branch at 0xd82c2b4 targets 0xd82c370, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0xd82c2bc targets 0xd82c1a4, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0xd82c2c4 targets 0xd82c2d4 and is always taken.
  The `beq` branch at 0xd82c2cc targets 0xd82c1a4, is taken when a0 == at(=0x1905), and falls through when a0 != at(=0x1905).
  The `bne` branch at 0xd82c2dc targets 0xd82c2d4, is taken when a0 != v0(=0x1900), and falls through when a0 == v0(=0x1900).
  The `beq` branch at 0xd82c2e4 targets 0xd82c1a4 and is always taken.
  The `bne` branch at 0xd82c2f4 targets 0xd82c380, is taken when a1 < a0(=0x8362) (unsigned), and falls through when a1 >= a0(=0x8362) (unsigned).
  The `beq` branch at 0xd82c300 targets 0xd82c234, is taken when a0(=0x8362) >= a1 (unsigned), and falls through when a0(=0x8362) < a1 (unsigned).
  The `beq` branch at 0xd82c308 targets 0xd82c248, is taken when a1 == a4(=0x8363), and falls through when a1 != a4(=0x8363).
  The `bne` branch at 0xd82c31c targets 0xd82c334, is taken when a1 < 0x1401 (unsigned), and falls through when a1 >= 0x1401 (unsigned).
  The `bne` branch at 0xd82c324 targets 0xd82c340, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0xd82c32c targets 0xd82c310 and is always taken.
  The `bne` branch at 0xd82c338 targets 0xd82c310, is taken when a1 != a6(=0x1400), and falls through when a1 == a6(=0x1400).
  The `beq` branch at 0xd82c340 targets 0xd82c24c and is always taken.
  The `bne` branch at 0xd82c350 targets 0xd82c310, is taken when a1 != a0(=0x1403), and falls through when a1 == a0(=0x1403).
  The `beq` branch at 0xd82c358 targets 0xd82c24c and is always taken.
  The `bne` branch at 0xd82c360 targets 0xd82c2d4, is taken when a0 != a7(=0x8000), and falls through when a0 == a7(=0x8000).
  The `beq` branch at 0xd82c368 targets 0xd82c378 and is always taken.
  The `bne` branch at 0xd82c370 targets 0xd82c2d4, is taken when a0 != t0(=0x1908), and falls through when a0 == t0(=0x1908).
  The `beq` branch at 0xd82c378 targets 0xd82c1a4 and is always taken.
  The `bne` branch at 0xd82c388 targets 0xd82c3e0, is taken when a1 < a4(=0x8036) (unsigned), and falls through when a1 >= a4(=0x8036) (unsigned).
  The `bne` branch at 0xd82c390 targets 0xd82c310, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0xd82c398 targets 0xd82c24c and is always taken.
  The `bne` branch at 0xd82c3a4 targets 0xd82c3f0, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0xd82c3ac targets 0xd82c310, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0xd82c3b4 targets 0xd82c410, is taken when a0 == t0(=0x1900), and falls through when a0 != t0(=0x1900).
  The `bne` branch at 0xd82c3c4 targets 0xd82c400, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0xd82c3d0 targets 0xd82c248, is taken when a5(=0x8366) >= a1 (unsigned), and falls through when a5(=0x8366) < a1 (unsigned).
  The `beq` branch at 0xd82c3d8 targets 0xd82c310 and is always taken.
  The `bne` branch at 0xd82c3e0 targets 0xd82c310, is taken when a1 != a0(=0x8035), and falls through when a1 == a0(=0x8035).
  The `beq` branch at 0xd82c3e8 targets 0xd82c398 and is always taken.
  The `bne` branch at 0xd82c3f0 targets 0xd82c310, is taken when a1 != a6(=0x1406), and falls through when a1 == a6(=0x1406).
  The `beq` branch at 0xd82c3f8 targets 0xd82c290 and is always taken.
  The `bne` branch at 0xd82c400 targets 0xd82c310, is taken when a1 != t2(=0x8365), and falls through when a1 == t2(=0x8365).
  The `beq` branch at 0xd82c408 targets 0xd82c248 and is always taken.
  The return at 0xd82c264 has v0 = ?.
  The return at 0xd82c2d4 has v0 = 0x0.
  The return at 0xd82c310 has v0 = 0x0.
  The return at 0xd82c348 has v0 = 0x0.
  The return at 0xd82c3bc has v0 = 0x0.
  The return at 0xd82c41c has v0 = ?.

- `__glTexImage2D_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82c440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82c440-0xd82c764 (804 bytes).
  It occupies 804 bytes.
  The `bltz` branch at 0xd82c440 targets 0xd82c648, is taken when a2 < 0 (signed), and falls through when a2 >= 0 (signed).
  The `bltz` branch at 0xd82c448 targets 0xd82c674, is taken when a3 < 0 (signed), and falls through when a3 >= 0 (signed).
  The `bne` branch at 0xd82c450 targets 0xd82c46c, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0xd82c45c targets 0xd82c5b0, is taken when a0 >= 0x1908 (unsigned), and falls through when a0 < 0x1908 (unsigned).
  The `beq` branch at 0xd82c464 targets 0xd82c4ac and is always taken.
  The `bne` branch at 0xd82c46c targets 0xd82c49c, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0xd82c478 targets 0xd82c4ac, is taken when a0 < 0x1905 (unsigned), and falls through when a0 >= 0x1905 (unsigned).
  The `bne` branch at 0xd82c484 targets 0xd82c5e4, is taken when a0 < 0x1906 (unsigned), and falls through when a0 >= 0x1906 (unsigned).
  The `bne` branch at 0xd82c48c targets 0xd82c4ac, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0xd82c494 targets 0xd82c5ec and is always taken.
  The `bne` branch at 0xd82c49c targets 0xd82c5f4, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0xd82c4a4 targets 0xd82c5ec, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bne` branch at 0xd82c4b4 targets 0xd82c508, is taken when a1 < a5(=0x8034) (unsigned), and falls through when a1 >= a5(=0x8034) (unsigned).
  The `beq` branch at 0xd82c4bc targets 0xd82c548, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0xd82c4cc targets 0xd82c604, is taken when a1 < a0(=0x8364) (unsigned), and falls through when a1 >= a0(=0x8364) (unsigned).
  The `beq` branch at 0xd82c4d4 targets 0xd82c548, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `bne` branch at 0xd82c4e4 targets 0xd82c700, is taken when a1 < a0(=0x8367) (unsigned), and falls through when a1 >= a0(=0x8367) (unsigned).
  The `beq` branch at 0xd82c4ec targets 0xd82c6cc, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0xd82c4f8 targets 0xd82c66c, is taken when a1 != t9(=0x8368), and falls through when a1 == t9(=0x8368).
  The `beq` branch at 0xd82c500 targets 0xd82c6cc and is always taken.
  The `bne` branch at 0xd82c50c targets 0xd82c580, is taken when a1 < 0x1405 (unsigned), and falls through when a1 >= 0x1405 (unsigned).
  The `bne` branch at 0xd82c514 targets 0xd82c5a8, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `bne` branch at 0xd82c520 targets 0xd82c6d4, is taken when a1 < a5(=0x8032) (unsigned), and falls through when a1 >= a5(=0x8032) (unsigned).
  The `bne` branch at 0xd82c52c targets 0xd82c540, is taken when a5(=0x8032) < a1 (unsigned), and falls through when a5(=0x8032) >= a1 (unsigned).
  The `beq` branch at 0xd82c538 targets 0xd82c54c and is always taken.
  The `bne` branch at 0xd82c540 targets 0xd82c66c, is taken when a1 != a0(=0x8033), and falls through when a1 == a0(=0x8033).
  The `bne` branch at 0xd82c584 targets 0xd82c630, is taken when a1 < 0x1402 (unsigned), and falls through when a1 >= 0x1402 (unsigned).
  The `bne` branch at 0xd82c590 targets 0xd82c688, is taken when a1 < 0x1403 (unsigned), and falls through when a1 >= 0x1403 (unsigned).
  The `bne` branch at 0xd82c598 targets 0xd82c680, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0xd82c5a0 targets 0xd82c66c, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0xd82c5a8 targets 0xd82c54c and is always taken.
  The `bne` branch at 0xd82c5b0 targets 0xd82c5cc, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0xd82c5bc targets 0xd82c690, is taken when a0 >= 0x190b (unsigned), and falls through when a0 < 0x190b (unsigned).
  The `beq` branch at 0xd82c5c4 targets 0xd82c4ac and is always taken.
  The `bne` branch at 0xd82c5cc targets 0xd82c6a0, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0xd82c5d4 targets 0xd82c4ac, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0xd82c5dc targets 0xd82c5ec and is always taken.
  The `beq` branch at 0xd82c5e4 targets 0xd82c4ac, is taken when a0 == t2(=0x1905), and falls through when a0 != t2(=0x1905).
  The `bne` branch at 0xd82c5f4 targets 0xd82c5ec, is taken when a0 != t3(=0x1900), and falls through when a0 == t3(=0x1900).
  The `beq` branch at 0xd82c5fc targets 0xd82c4ac and is always taken.
  The `bne` branch at 0xd82c60c targets 0xd82c6b0, is taken when a1 < a0(=0x8362) (unsigned), and falls through when a1 >= a0(=0x8362) (unsigned).
  The `beq` branch at 0xd82c614 targets 0xd82c538, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bne` branch at 0xd82c620 targets 0xd82c66c, is taken when a1 != at(=0x8363), and falls through when a1 == at(=0x8363).
  The `beq` branch at 0xd82c628 targets 0xd82c548 and is always taken.
  The `bne` branch at 0xd82c630 targets 0xd82c650, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0xd82c638 targets 0xd82c658, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0xd82c640 targets 0xd82c66c and is always taken.
  The `bne` branch at 0xd82c650 targets 0xd82c66c, is taken when a1 != v1(=0x1400), and falls through when a1 == v1(=0x1400).
  The `beq` branch at 0xd82c658 targets 0xd82c54c and is always taken.
  The `beq` branch at 0xd82c664 targets 0xd82c5a8, is taken when a1 == a0(=0x1406), and falls through when a1 != a0(=0x1406).
  The `bne` branch at 0xd82c680 targets 0xd82c66c, is taken when a1 != a4(=0x1403), and falls through when a1 == a4(=0x1403).
  The `beq` branch at 0xd82c688 targets 0xd82c54c and is always taken.
  The `bne` branch at 0xd82c690 targets 0xd82c5ec, is taken when a0 != a5(=0x8000), and falls through when a0 == a5(=0x8000).
  The `beq` branch at 0xd82c698 targets 0xd82c6a8 and is always taken.
  The `bne` branch at 0xd82c6a0 targets 0xd82c5ec, is taken when a0 != a6(=0x1908), and falls through when a0 == a6(=0x1908).
  The `beq` branch at 0xd82c6a8 targets 0xd82c4ac and is always taken.
  The `bne` branch at 0xd82c6b8 targets 0xd82c724, is taken when a1 < a0(=0x8036) (unsigned), and falls through when a1 >= a0(=0x8036) (unsigned).
  The `bne` branch at 0xd82c6c4 targets 0xd82c66c, is taken when a0(=0x8036) < a1 (unsigned), and falls through when a0(=0x8036) >= a1 (unsigned).
  The `beq` branch at 0xd82c6cc targets 0xd82c54c and is always taken.
  The `bne` branch at 0xd82c6d4 targets 0xd82c660, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `beq` branch at 0xd82c6dc targets 0xd82c66c, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0xd82c6e4 targets 0xd82c744, is taken when a0 == t3(=0x1900), and falls through when a0 != t3(=0x1900).
  The `bne` branch at 0xd82c708 targets 0xd82c734, is taken when a1 < a0(=0x8366) (unsigned), and falls through when a1 >= a0(=0x8366) (unsigned).
  The `beq` branch at 0xd82c714 targets 0xd82c548, is taken when a0(=0x8366) >= a1 (unsigned), and falls through when a0(=0x8366) < a1 (unsigned).
  The `beq` branch at 0xd82c71c targets 0xd82c66c and is always taken.
  The `bne` branch at 0xd82c724 targets 0xd82c66c, is taken when a1 != at(=0x8035), and falls through when a1 == at(=0x8035).
  The `beq` branch at 0xd82c72c targets 0xd82c6cc and is always taken.
  The `bne` branch at 0xd82c734 targets 0xd82c66c, is taken when a1 != v0(=0x8365), and falls through when a1 == v0(=0x8365).
  The `beq` branch at 0xd82c73c targets 0xd82c548 and is always taken.
  The return at 0xd82c574 has v0 = ?.
  The return at 0xd82c5ec has v0 = 0x0.
  The return at 0xd82c648 has v0 = 0x0.
  The return at 0xd82c66c has v0 = 0x0.
  The return at 0xd82c674 has v0 = 0x0.
  The return at 0xd82c6ec has v0 = 0x0.
  The return at 0xd82c75c has v0 = ?.
  The instructions from 0xd82c57c to 0xd82c57c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd82c67c to 0xd82c67c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd82c6f4 to 0xd82c6fc are not reached by any path from the entry, and their branches are not listed.

- `__glTexImage3D_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82c780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82c780-0xd82cad0 (848 bytes).
  It occupies 848 bytes.
  The `bltz` branch at 0xd82c780 targets 0xd82c9a8, is taken when a2 < 0 (signed), and falls through when a2 >= 0 (signed).
  The `bltz` branch at 0xd82c788 targets 0xd82c9b0, is taken when a3 < 0 (signed), and falls through when a3 >= 0 (signed).
  The `bltz` branch at 0xd82c790 targets 0xd82c9d8, is taken when a4 < 0 (signed), and falls through when a4 >= 0 (signed).
  The `bne` branch at 0xd82c798 targets 0xd82c7b4, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0xd82c7a4 targets 0xd82c910, is taken when a0 >= 0x1908 (unsigned), and falls through when a0 < 0x1908 (unsigned).
  The `beq` branch at 0xd82c7ac targets 0xd82c800 and is always taken.
  The `bne` branch at 0xd82c7b4 targets 0xd82c7e4, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0xd82c7c0 targets 0xd82c7f4, is taken when a0 < 0x1905 (unsigned), and falls through when a0 >= 0x1905 (unsigned).
  The `bne` branch at 0xd82c7cc targets 0xd82c944, is taken when a0 < 0x1906 (unsigned), and falls through when a0 >= 0x1906 (unsigned).
  The `bne` branch at 0xd82c7d4 targets 0xd82c7f4, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0xd82c7dc targets 0xd82c94c and is always taken.
  The `bne` branch at 0xd82c7e4 targets 0xd82c954, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0xd82c7ec targets 0xd82c94c, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0xd82c808 targets 0xd82c85c, is taken when a1 < a6(=0x8034) (unsigned), and falls through when a1 >= a6(=0x8034) (unsigned).
  The `beq` branch at 0xd82c810 targets 0xd82c89c, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0xd82c820 targets 0xd82c964, is taken when a1 < a0(=0x8364) (unsigned), and falls through when a1 >= a0(=0x8364) (unsigned).
  The `beq` branch at 0xd82c828 targets 0xd82c89c, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `bne` branch at 0xd82c838 targets 0xd82ca58, is taken when a1 < a0(=0x8367) (unsigned), and falls through when a1 >= a0(=0x8367) (unsigned).
  The `beq` branch at 0xd82c840 targets 0xd82ca2c, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bne` branch at 0xd82c84c targets 0xd82c9d0, is taken when a1 != at(=0x8368), and falls through when a1 == at(=0x8368).
  The `beq` branch at 0xd82c854 targets 0xd82ca2c and is always taken.
  The `bne` branch at 0xd82c860 targets 0xd82c8e0, is taken when a1 < 0x1405 (unsigned), and falls through when a1 >= 0x1405 (unsigned).
  The `bne` branch at 0xd82c868 targets 0xd82c908, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0xd82c874 targets 0xd82ca34, is taken when a1 < a6(=0x8032) (unsigned), and falls through when a1 >= a6(=0x8032) (unsigned).
  The `bne` branch at 0xd82c880 targets 0xd82c894, is taken when a6(=0x8032) < a1 (unsigned), and falls through when a6(=0x8032) >= a1 (unsigned).
  The `beq` branch at 0xd82c88c targets 0xd82c8a0 and is always taken.
  The `bne` branch at 0xd82c894 targets 0xd82c9d0, is taken when a1 != a5(=0x8033), and falls through when a1 == a5(=0x8033).
  The `bne` branch at 0xd82c8e4 targets 0xd82c990, is taken when a1 < 0x1402 (unsigned), and falls through when a1 >= 0x1402 (unsigned).
  The `bne` branch at 0xd82c8f0 targets 0xd82c9e8, is taken when a1 < 0x1403 (unsigned), and falls through when a1 >= 0x1403 (unsigned).
  The `bne` branch at 0xd82c8f8 targets 0xd82c9e0, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `beq` branch at 0xd82c900 targets 0xd82c9d0, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0xd82c908 targets 0xd82c8a0 and is always taken.
  The `bne` branch at 0xd82c910 targets 0xd82c92c, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0xd82c91c targets 0xd82c9f0, is taken when a0 >= 0x190b (unsigned), and falls through when a0 < 0x190b (unsigned).
  The `beq` branch at 0xd82c924 targets 0xd82c800 and is always taken.
  The `bne` branch at 0xd82c92c targets 0xd82ca00, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `bne` branch at 0xd82c934 targets 0xd82c7f4, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0xd82c93c targets 0xd82c94c and is always taken.
  The `beq` branch at 0xd82c944 targets 0xd82c7f4, is taken when a0 == t9(=0x1905), and falls through when a0 != t9(=0x1905).
  The `bne` branch at 0xd82c954 targets 0xd82c94c, is taken when a0 != at(=0x1900), and falls through when a0 == at(=0x1900).
  The `beq` branch at 0xd82c95c targets 0xd82c800 and is always taken.
  The `bne` branch at 0xd82c96c targets 0xd82ca10, is taken when a1 < a0(=0x8362) (unsigned), and falls through when a1 >= a0(=0x8362) (unsigned).
  The `beq` branch at 0xd82c974 targets 0xd82c88c, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `bne` branch at 0xd82c980 targets 0xd82c9d0, is taken when a1 != a0(=0x8363), and falls through when a1 == a0(=0x8363).
  The `beq` branch at 0xd82c988 targets 0xd82c89c and is always taken.
  The `bne` branch at 0xd82c990 targets 0xd82c9b8, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0xd82c998 targets 0xd82c9c0, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0xd82c9a0 targets 0xd82c9d0 and is always taken.
  The `bne` branch at 0xd82c9b8 targets 0xd82c9d0, is taken when a1 != a6(=0x1400), and falls through when a1 == a6(=0x1400).
  The `beq` branch at 0xd82c9c0 targets 0xd82c8a0 and is always taken.
  The `beq` branch at 0xd82c9c8 targets 0xd82c908, is taken when a1 == t0(=0x1406), and falls through when a1 != t0(=0x1406).
  The `bne` branch at 0xd82c9e0 targets 0xd82c9d0, is taken when a1 != t1(=0x1403), and falls through when a1 == t1(=0x1403).
  The `beq` branch at 0xd82c9e8 targets 0xd82c8a0 and is always taken.
  The `bne` branch at 0xd82c9f0 targets 0xd82c94c, is taken when a0 != t2(=0x8000), and falls through when a0 == t2(=0x8000).
  The `beq` branch at 0xd82c9f8 targets 0xd82ca08 and is always taken.
  The `bne` branch at 0xd82ca00 targets 0xd82c94c, is taken when a0 != t3(=0x1908), and falls through when a0 == t3(=0x1908).
  The `beq` branch at 0xd82ca08 targets 0xd82c800 and is always taken.
  The `bne` branch at 0xd82ca18 targets 0xd82ca80, is taken when a1 < a0(=0x8036) (unsigned), and falls through when a1 >= a0(=0x8036) (unsigned).
  The `bne` branch at 0xd82ca24 targets 0xd82c9d0, is taken when a0(=0x8036) < a1 (unsigned), and falls through when a0(=0x8036) >= a1 (unsigned).
  The `beq` branch at 0xd82ca2c targets 0xd82c8a0 and is always taken.
  The `bne` branch at 0xd82ca34 targets 0xd82c9c8, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0xd82ca40 targets 0xd82c9d0, is taken when a1 >= 0x1a01 (unsigned), and falls through when a1 < 0x1a01 (unsigned).
  The `beq` branch at 0xd82ca48 targets 0xd82caa0, is taken when a0 == v1(=0x1900), and falls through when a0 != v1(=0x1900).
  The `bne` branch at 0xd82ca60 targets 0xd82ca90, is taken when a1 < a0(=0x8366) (unsigned), and falls through when a1 >= a0(=0x8366) (unsigned).
  The `beq` branch at 0xd82ca6c targets 0xd82c89c, is taken when a0(=0x8366) >= a1 (unsigned), and falls through when a0(=0x8366) < a1 (unsigned).
  The `beq` branch at 0xd82ca74 targets 0xd82c9d0 and is always taken.
  The `bne` branch at 0xd82ca80 targets 0xd82c9d0, is taken when a1 != a7(=0x8035), and falls through when a1 == a7(=0x8035).
  The `beq` branch at 0xd82ca88 targets 0xd82ca2c and is always taken.
  The `bne` branch at 0xd82ca90 targets 0xd82c9d0, is taken when a1 != t0(=0x8365), and falls through when a1 == t0(=0x8365).
  The `beq` branch at 0xd82ca98 targets 0xd82c89c and is always taken.
  The return at 0xd82c8d8 has v0 = ?.
  The return at 0xd82c94c has v0 = 0x0.
  The return at 0xd82c9a8 has v0 = 0x0.
  The return at 0xd82c9b0 has v0 = 0x0.
  The return at 0xd82c9d0 has v0 = 0x0.
  The return at 0xd82c9d8 has v0 = 0x0.
  The return at 0xd82ca50 has v0 = 0x0.
  The return at 0xd82cac8 has v0 = ?.
  The instructions from 0xd82ca7c to 0xd82ca7c are not reached by any path from the entry, and their branches are not listed.

- `__glLightfv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82cb00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82cb00-0xd82cb88 (136 bytes).
  It occupies 136 bytes.
  The `lw` at 0xd82cb14 loads 4 bytes from abs 0xd881268.
  The `lw` at 0xd82cb28 loads 4 bytes from table(0xd878038) +0x0.
  The `beq` branch at 0xd82cb20 targets 0xd82cb34, is taken when v1(=a0-4608) >= 0xa (unsigned), and falls through when v1(=a0-4608) < 0xa (unsigned).
  The return at 0xd82cb38 has v0 = one of 0x0, 0x1.
  The return at 0xd82cb40 has v0 = 0x1.
  The return at 0xd82cb48 has v0 = 0x1.
  The return at 0xd82cb50 has v0 = 0x1.
  The return at 0xd82cb58 has v0 = 0x1.
  The return at 0xd82cb60 has v0 = 0x3.
  The return at 0xd82cb68 has v0 = 0x4.
  The return at 0xd82cb70 has v0 = 0x4.
  The return at 0xd82cb78 has v0 = 0x4.
  The return at 0xd82cb80 has v0 = 0x4.
  The indirect jump at 0xd82cb2c uses the jump table at 0xd878038 with targets 0xd82cb80, 0xd82cb78, 0xd82cb70, 0xd82cb68, 0xd82cb60, 0xd82cb40, 0xd82cb38, 0xd82cb58, 0xd82cb50, 0xd82cb48.

- `__glLightiv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82cbc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82cbc0-0xd82cbf4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0xd82cbdc calls __glLightfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd82cbec has v0 = ret(__glLightfv_size).

- `__glLightModelfv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82cc00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82cc00-0xd82cc58 (88 bytes).
  It occupies 88 bytes.
  The `beq` branch at 0xd82cc10 targets 0xd82cc40, is taken when a0 == at(=0xb53), and falls through when a0 != at(=0xb53).
  The `beq` branch at 0xd82cc18 targets 0xd82cc48, is taken when a0 == a2(=0xb51), and falls through when a0 != a2(=0xb51).
  The `beq` branch at 0xd82cc20 targets 0xd82cc50, is taken when a0 == a3(=0xb52), and falls through when a0 != a3(=0xb52).
  The `beq` branch at 0xd82cc28 targets 0xd82cc38, is taken when a0 == a4(=0x81f8), and falls through when a0 != a4(=0x81f8).
  The return at 0xd82cc30 has v0 = 0x0.
  The return at 0xd82cc38 has v0 = 0x1.
  The return at 0xd82cc40 has v0 = 0x4.
  The return at 0xd82cc48 has v0 = 0x1.
  The return at 0xd82cc50 has v0 = 0x1.

- `__glLightModeliv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82cc80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82cc80-0xd82ccb4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0xd82cc9c calls __glLightModelfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd82ccac has v0 = ret(__glLightModelfv_size).

- `__glMaterialfv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82ccc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82ccc0-0xd82cd70 (176 bytes).
  It occupies 176 bytes.
  The `bne` branch at 0xd82ccc8 targets 0xd82cd00, is taken when a0 < 0x1600 (unsigned), and falls through when a0 >= 0x1600 (unsigned).
  The `bne` branch at 0xd82ccd8 targets 0xd82cd50, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0xd82cce0 targets 0xd82cd40, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `bne` branch at 0xd82cce8 targets 0xd82cd60, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0xd82ccf0 targets 0xd82cd34, is taken when a0 != a5(=0x1603), and falls through when a0 == a5(=0x1603).
  The `bne` branch at 0xd82cd0c targets 0xd82cd2c, is taken when a0 < 0x1201 (unsigned), and falls through when a0 >= 0x1201 (unsigned).
  The `bne` branch at 0xd82cd14 targets 0xd82cd58, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0xd82cd1c targets 0xd82cd34, is taken when a0 != a4(=0x1202), and falls through when a0 == a4(=0x1202).
  The `beq` branch at 0xd82cd2c targets 0xd82cd68, is taken when a0 == a2(=0x1200), and falls through when a0 != a2(=0x1200).
  The `bne` branch at 0xd82cd40 targets 0xd82cd34, is taken when a0 != a4(=0x1601), and falls through when a0 == a4(=0x1601).
  The return at 0xd82ccf8 has v0 = 0x3.
  The return at 0xd82cd24 has v0 = 0x4.
  The return at 0xd82cd34 has v0 = 0x0.
  The return at 0xd82cd48 has v0 = 0x1.
  The return at 0xd82cd50 has v0 = 0x4.
  The return at 0xd82cd58 has v0 = 0x4.
  The return at 0xd82cd60 has v0 = 0x4.
  The return at 0xd82cd68 has v0 = 0x4.
  The instructions from 0xd82cd3c to 0xd82cd3c are not reached by any path from the entry, and their branches are not listed.

- `__glMaterialiv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82cd80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82cd80-0xd82cdb4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0xd82cd9c calls __glMaterialfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd82cdac has v0 = ret(__glMaterialfv_size).

- `__glColorTableParameterfv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82cdc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82cdc0-0xd82ce1c (92 bytes).
  It occupies 92 bytes.
  The `lw` at 0xd82cddc loads 4 bytes from abs 0xd881268.
  The `lw` at 0xd82cdf8 loads 4 bytes from table(0xd878060) +0x0.
  The `beq` branch at 0xd82cdf0 targets 0xd82ce0c, is taken when a6(=a0-32982) >= 0xa (unsigned), and falls through when a6(=a0-32982) < 0xa (unsigned).
  The return at 0xd82ce04 has v0 = 0x1.
  The return at 0xd82ce0c has v0 = -0x1.
  The return at 0xd82ce14 has v0 = 0x4.
  The indirect jump at 0xd82cdfc uses the jump table at 0xd878060 with targets 0xd82ce14, 0xd82ce14, 0xd82ce04, 0xd82ce04, 0xd82ce04, 0xd82ce04, 0xd82ce04, 0xd82ce04, 0xd82ce04, 0xd82ce04.

- `__glColorTableParameteriv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82ce40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82ce40-0xd82ce74 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0xd82ce5c calls __glColorTableParameterfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd82ce6c has v0 = ret(__glColorTableParameterfv_size).

- `__glFillMap1f` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82cf40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82cf40-0xd82d004 (196 bytes).
  It occupies 196 bytes.
  The `jalr` at 0xd82cfa0 calls memcpy with a0=?, a1=?, a2=(a0 << 0x2), a3=?.
  The `jalr` at 0xd82cff4 calls memcpy with a0=a4 at entry (arg4), a1=a3 at entry (arg3), a2=?, a3=a3 at entry (arg3), a6=a0 at entry (arg0).
  The `beq` branch at 0xd82cf78 targets 0xd82cfe0, is taken when a0 == a2, and falls through when a0 != a2.
  The `blez` branch at 0xd82cf80 targets 0xd82cfb8, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `bne` branch at 0xd82cfb0 targets 0xd82cf94, is taken when s2(?) != s4(=a1), and falls through when s2(?) == s4(=a1).
  The `beq` branch at 0xd82cffc targets 0xd82cfbc and is always taken.
  The return at 0xd82cfd8 has v0 = one of ?, ret(memcpy).

- `__glFillMap1d` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82d040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82d040-0xd82d104 (196 bytes).
  It occupies 196 bytes.
  The `jalr` at 0xd82d0a0 calls memcpy with a0=?, a1=?, a2=(a0 << 0x3), a3=?.
  The `jalr` at 0xd82d0f4 calls memcpy with a0=a4 at entry (arg4), a1=a3 at entry (arg3), a2=?, a3=a3 at entry (arg3), a6=a0 at entry (arg0).
  The `beq` branch at 0xd82d078 targets 0xd82d0e0, is taken when a0 == a2, and falls through when a0 != a2.
  The `blez` branch at 0xd82d080 targets 0xd82d0b8, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `bne` branch at 0xd82d0b0 targets 0xd82d094, is taken when s2(?) != s4(=a1), and falls through when s2(?) == s4(=a1).
  The `beq` branch at 0xd82d0fc targets 0xd82d0bc and is always taken.
  The return at 0xd82d0d8 has v0 = one of ?, ret(memcpy).

- `__glFillMap2f` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82d140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82d140-0xd82d2fc (444 bytes).
  It occupies 444 bytes.
  5 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0xd82d224, `lwc1` at 0xd82d248, `lwc1` at 0xd82d250.
  5 such `swc1` accesses store 4 bytes to ?, including `swc1` at 0xd82d238, `swc1` at 0xd82d24c, `swc1` at 0xd82d254.
  The `jalr` at 0xd82d2c4 calls memcpy with a0=a6 at entry (arg6), a1=a5 at entry (arg5), a2=?, a3=a3 at entry (arg3).
  The `bne` branch at 0xd82d178 targets 0xd82d190, is taken when a0 != a4, and falls through when a0 == a4.
  The `beq` branch at 0xd82d188 targets 0xd82d2b0, is taken when a3 == v0(?), and falls through when a3 != v0(?).
  The `blez` branch at 0xd82d190 targets 0xd82d2d0, is taken when s3(=a1) <= 0 (signed), and falls through when s3(=a1) > 0 (signed).
  The `beq` branch at 0xd82d1b4 targets 0xd82d1c0, is taken when a2 >= 0 (signed), and falls through when a2 < 0 (signed).
  The `beq` branch at 0xd82d1fc targets 0xd82d290 and is always taken.
  The `beq` branch at 0xd82d21c targets 0xd82d23c, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0xd82d234 targets 0xd82d224, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `beq` branch at 0xd82d240 targets 0xd82d274, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0xd82d26c targets 0xd82d248, is taken when a3(?) != t0(?), and falls through when a3(?) == t0(?).
  The `bne` branch at 0xd82d27c targets 0xd82d214, is taken when t2(?) != a2, and falls through when t2(?) == a2.
  The `beq` branch at 0xd82d288 targets 0xd82d2cc, is taken when s0(?) == s3(=a1), and falls through when s0(?) != s3(=a1).
  The `beq` branch at 0xd82d298 targets 0xd82d284, is taken when s4(?) == 0, and falls through when s4(?) != 0.
  The `bne` branch at 0xd82d2a0 targets 0xd82d204, is taken when s7(?) != 0, and falls through when s7(?) == 0.
  The `beq` branch at 0xd82d2a8 targets 0xd82d288 and is always taken.
  The return at 0xd82d2f4 has v0 = ?.

- `__glFillMap2d` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82d300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82d300-0xd82d490 (400 bytes).
  It occupies 400 bytes.
  The `jalr` at 0xd82d3cc calls memcpy with a0=?, a1=?, a2=(a0 << 0x3), a3=?.
  The `jalr` at 0xd82d474 calls memcpy with a0=a6 at entry (arg6), a1=a5 at entry (arg5), a2=?, a3=a3 at entry (arg3).
  The `bne` branch at 0xd82d338 targets 0xd82d350, is taken when a0 != a4, and falls through when a0 == a4.
  The `beq` branch at 0xd82d348 targets 0xd82d460, is taken when a3 == v1(?), and falls through when a3 != v1(?).
  The `blez` branch at 0xd82d354 targets 0xd82d440, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `beq` branch at 0xd82d3a8 targets 0xd82d484 and is always taken.
  The `bne` branch at 0xd82d3dc targets 0xd82d3c0, is taken when s2(?) != s4(=a2), and falls through when s2(?) == s4(=a2).
  The `beq` branch at 0xd82d414 targets 0xd82d42c, is taken when s8(?) == t9(=a1), and falls through when s8(?) != t9(=a1).
  The `bgtz` branch at 0xd82d41c targets 0xd82d3b0, is taken when s4(=a2) > 0 (signed), and falls through when s4(=a2) <= 0 (signed).
  The `beq` branch at 0xd82d424 targets 0xd82d3e8 and is always taken.
  The `beq` branch at 0xd82d47c targets 0xd82d440 and is always taken.
  The `beq` branch at 0xd82d488 targets 0xd82d41c and is always taken.
  The return at 0xd82d458 has v0 = one of 0x5bf0c, ?, ret(memcpy).

- `__glEvalComputeK` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82d4c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd82d4c0-0xd82d520 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0xd82d4d4 loads 4 bytes from abs 0xd881268.
  The `lw` at 0xd82d4ec loads 4 bytes from table(0xd878088) +0x0.
  The `beq` branch at 0xd82d4e4 targets 0xd82d4f8, is taken when a4(=a0-3472) >= 0x29 (unsigned), and falls through when a4(=a0-3472) < 0x29 (unsigned).
  The return at 0xd82d4f8 has v0 = 0x0.
  The return at 0xd82d500 has v0 = 0x4.
  The return at 0xd82d508 has v0 = 0x2.
  The return at 0xd82d510 has v0 = 0x3.
  The return at 0xd82d518 has v0 = 0x1.
  The indirect jump at 0xd82d4f0 uses the jump table at 0xd878088 with targets 0xd82d500, 0xd82d518, 0xd82d510, 0xd82d518, 0xd82d508, 0xd82d510, 0xd82d500, 0xd82d510, 0xd82d500, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d4f8, 0xd82d500, 0xd82d518, 0xd82d510, 0xd82d518, 0xd82d508, 0xd82d510, 0xd82d500, 0xd82d510, 0xd82d500.

- `str_dup` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8410c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8410c0-0xd841120 (96 bytes).
  It occupies 96 bytes.
  The `jalr` at 0xd8410cc calls strlen with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8410d8 calls malloc with a0=ret(strlen)+1, a1=?, a2=?, a3=?.
  The `jalr` at 0xd841108 calls strcpy with a0=ret(malloc), a1=a0 at entry (arg0), a2=?, a3=?.
  The `bne` branch at 0xd8410e0 targets 0xd841100, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The return at 0xd8410f0 has v0 = 0x0.
  The return at 0xd841118 has v0 = ret(malloc).
  The instructions from 0xd8410f8 to 0xd8410fc are not reached by any path from the entry, and their branches are not listed.

- `_glapi_check_multithread` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841140-0xd8411d8 (152 bytes).
  It occupies 152 bytes.
  The `jalr` at 0xd84116c calls _glthread_GetID with a0=a0 at entry (arg0), a1=[0xd882ae0]:1, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd841188 calls _glapi_get_dispatch with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd8411a8 calls _glthread_GetID with a0=a0 at entry (arg0), a1=[0xd882ae0]:1, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8411c8 calls _glapi_set_dispatch with a0=0x0, a1=?, a2=?, a3=?.
  The `bne` branch at 0xd84115c targets 0xd841184, is taken when at(=[0xd882ad8]:1) != 0, and falls through when at(=[0xd882ad8]:1) == 0.
  The `beq` branch at 0xd841164 targets 0xd8411a4, is taken when a1(=[0xd882ae0]:1) == 0, and falls through when a1(=[0xd882ae0]:1) != 0.
  The `beq` branch at 0xd841180 targets 0xd841194, is taken when a0(=[0xd882ad8]:1) == 0, and falls through when a0(=[0xd882ad8]:1) != 0.
  The `beq` branch at 0xd841190 targets 0xd8411c4, is taken when v0(=ret(_glapi_get_dispatch)) == 0, and falls through when v0(=ret(_glapi_get_dispatch)) != 0.
  The `beq` branch at 0xd8411b4 targets 0xd84117c, is taken when a1(=[0xd882b78]) == v0(=ret(_glthread_GetID)), and falls through when a1(=[0xd882b78]) != v0(=ret(_glthread_GetID)).
  The `beq` branch at 0xd8411bc targets 0xd84117c and is always taken.
  The `beq` branch at 0xd8411d0 targets 0xd841198 and is always taken.
  The return at 0xd84119c has v0 = one of ret(_glapi_get_dispatch), ?, ret(_glapi_set_dispatch).

- `_glapi_set_context` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841200 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841200-0xd841208 (8 bytes).
  It occupies 8 bytes.
  The `sw` at 0xd841204 stores 4 bytes to abs 0x1010.
  The return at 0xd841200 has v0 = ?.

- `_glapi_get_context` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841240-0xd841248 (8 bytes).
  It occupies 8 bytes.
  The `lw` at 0xd841244 loads 4 bytes from abs 0x1010.
  The return at 0xd841240 has v0 = [0x1010].

- `_glapi_set_dispatch` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841280-0xd8413ec (364 bytes).
  It occupies 364 bytes.
  The `lw` at 0xd8412c0 loads 4 bytes from abs 0xd88293c.
  The `sw` at 0xd8412d0 stores 4 bytes to abs 0x104c.
  9 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd8412ec, `lw` at 0xd84134c, `lw` at 0xd84135c.
  9 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd8412f8, `sw` at 0xd841350, `sw` at 0xd841360.
  The `bne` branch at 0xd8412b8 targets 0xd8412c8, is taken when a0 != 0, and falls through when a0 == 0.
  The `bne` branch at 0xd8412f4 targets 0xd8412dc, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bgtz` branch at 0xd8413c8 targets 0xd841344, is taken when ra(?) > 0 (signed), and falls through when ra(?) <= 0 (signed).
  The return at 0xd8413e4 has v0 = ?.

- `_glapi_get_dispatch` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841400-0xd841408 (8 bytes).
  It occupies 8 bytes.
  The return at 0xd841400 has v0 = 0x1050.

- `_glapi_get_dispatch_table_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841440-0xd841460 (32 bytes).
  It occupies 32 bytes.
  The `lw` at 0xd84144c loads 4 bytes from abs 0xd882adc.
  The `sb` at 0xd841454 stores 1 byte to abs 0xd882b70.
  The return at 0xd841458 has v0 = [0xd882adc]+1.

- `_glapi_get_version` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841480-0xd841498 (24 bytes).
  It occupies 24 bytes.
  The `lw` at 0xd84148c loads 4 bytes from abs 0xd881268.
  The return at 0xd841490 has v0 = 0xd87bfa0.

- `get_static_proc_offset` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8414c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8414c0-0xd841548 (136 bytes).
  It occupies 136 bytes.
  The `lw` at 0xd8414c4 loads 4 bytes from abs 0xd87d688.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd841508, `lw` at 0xd841530.
  The `jalr` at 0xd8414f8 calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `beq` branch at 0xd8414e8 targets 0xd841514, is taken when a1(=[0xd87d688]) == 0, and falls through when a1(=[0xd87d688]) != 0.
  The `beq` branch at 0xd841500 targets 0xd841530, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0xd84150c targets 0xd8414f4, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The return at 0xd841528 has v0 = -0x1.
  The return at 0xd841540 has v0 = ?.

- `get_static_proc_address` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841580-0xd841608 (136 bytes).
  It occupies 136 bytes.
  The `lw` at 0xd841584 loads 4 bytes from abs 0xd87d688.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd8415c8, `lw` at 0xd8415f0.
  The `jalr` at 0xd8415b8 calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `beq` branch at 0xd8415a8 targets 0xd8415d4, is taken when a1(=[0xd87d688]) == 0, and falls through when a1(=[0xd87d688]) != 0.
  The `beq` branch at 0xd8415c0 targets 0xd8415f0, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0xd8415cc targets 0xd8415b4, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The return at 0xd8415e8 has v0 = 0x0.
  The return at 0xd841600 has v0 = ?.

- `generate_entrypoint` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841640-0xd841648 (8 bytes).
  It occupies 8 bytes.
  The return at 0xd841640 has v0 = 0x0.

- `_glapi_add_entrypoint` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841680-0xd84182c (428 bytes).
  It occupies 428 bytes.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd841710, `lw` at 0xd841798.
  The `sw` at 0xd84180c stores 4 bytes to table(0xd882be4) +0x0.
  The `sw` at 0xd841814 stores 4 bytes to table(0xd882be8) +0x0.
  The `sw` at 0xd84181c stores 4 bytes to table(0xd882be0) +0x0.
  The `bgezall` at 0xd8416a8 calls (unnamed) [0xd8414c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8416d8 calls _glapi_get_proc_name with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84170c calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0xd841764 calls strcmp with a0=ret(_glapi_get_proc_name), a1=a0 at entry (arg0), a2=?, a3=?.
  The `bgezall` at 0xd8417b8 calls (unnamed) [0xd841640] with a0=a1 at entry (arg1), a1=?, a2=[0xd882b70]:1, a3=?.
  The `bgezall` at 0xd8417d8 calls (unnamed) [0xd8410c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bltz` branch at 0xd8416b0 targets 0xd8416d4, is taken when v0(=ret(0xd8414c0)) < 0 (signed), and falls through when v0(=ret(0xd8414c0)) >= 0 (signed).
  The `bne` branch at 0xd8416e0 targets 0xd841760, is taken when v0(=ret(_glapi_get_proc_name)) != 0, and falls through when v0(=ret(_glapi_get_proc_name)) == 0.
  The `beq` branch at 0xd8416f0 targets 0xd84173c, is taken when v0(=[0xd882b74]) == 0, and falls through when v0(=[0xd882b74]) != 0.
  The `beq` branch at 0xd841714 targets 0xd841798, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0xd841734 targets 0xd841700, is taken when a1(?) < v0(=[0xd882b74]) (unsigned), and falls through when a1(?) >= v0(=[0xd882b74]) (unsigned).
  The `beq` branch at 0xd841744 targets 0xd841788, is taken when a2(=[0xd882b70]:1) == 0, and falls through when a2(=[0xd882b70]:1) != 0.
  The `beq` branch at 0xd84176c targets 0xd8416e8, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0xd841788 targets 0xd8417b4, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0xd841790 targets 0xd8416bc and is always taken.
  The `bne` branch at 0xd84179c targets 0xd8417ac, is taken when a5(?) != s0(=a1), and falls through when a5(?) == s0(=a1).
  The `beq` branch at 0xd8417a4 targets 0xd8416bc and is always taken.
  The `beq` branch at 0xd8417ac targets 0xd8416bc and is always taken.
  The `bne` branch at 0xd8417c0 targets 0xd8417d0, is taken when v0(=ret(0xd841640)) != 0, and falls through when v0(=ret(0xd841640)) == 0.
  The `beq` branch at 0xd8417c8 targets 0xd8416bc and is always taken.
  The `beq` branch at 0xd841818 targets 0xd841824, is taken when at(=[0xd882adc]) >= s0(=a1) (unsigned), and falls through when at(=[0xd882adc]) < s0(=a1) (unsigned).
  The `beq` branch at 0xd841824 targets 0xd8416bc and is always taken.
  The return at 0xd8416cc has v0 = one of ?, 0x0, 0x1.
  The return at 0xd841758 has v0 = 0x0.
  The return at 0xd841780 has v0 = 0x0.

- `_glapi_get_proc_offset` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841840 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841840-0xd841900 (192 bytes).
  It occupies 192 bytes.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd841888, `lw` at 0xd8418e4.
  The `jalr` at 0xd84188c calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `bgezall` at 0xd8418b4 calls (unnamed) [0xd8414c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd841878 targets 0xd8418ac, is taken when at(=[0xd882b74]) == 0, and falls through when at(=[0xd882b74]) != 0.
  The `beq` branch at 0xd841894 targets 0xd8418dc, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0xd8418a4 targets 0xd841884, is taken when s1(?) < a0(=[0xd882b74]) (unsigned), and falls through when s1(?) >= a0(=[0xd882b74]) (unsigned).
  The return at 0xd8418d4 has v0 = ret(0xd8414c0).
  The return at 0xd8418f8 has v0 = ?.

- `_glapi_get_proc_address` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841900-0xd8419c0 (192 bytes).
  It occupies 192 bytes.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd841948, `lw` at 0xd8419a4.
  The `jalr` at 0xd84194c calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `bgezall` at 0xd841974 calls (unnamed) [0xd841580] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd841938 targets 0xd84196c, is taken when at(=[0xd882b74]) == 0, and falls through when at(=[0xd882b74]) != 0.
  The `beq` branch at 0xd841954 targets 0xd84199c, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0xd841964 targets 0xd841944, is taken when s1(?) < a0(=[0xd882b74]) (unsigned), and falls through when s1(?) >= a0(=[0xd882b74]) (unsigned).
  The return at 0xd841994 has v0 = ret(0xd841580).
  The return at 0xd8419b8 has v0 = ?.

- `_glapi_get_proc_name` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8419c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8419c0-0xd841a44 (132 bytes).
  It occupies 132 bytes.
  2 such `lw` accesses load 4 bytes from abs 0xd881268, including `lw` at 0xd8419cc, `lw` at 0xd8419d8.
  The `lw` at 0xd8419e0 loads 4 bytes from abs 0xd87d690.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd8419f4, `lw` at 0xd841a28, `lw` at 0xd841a38.
  The `lw` at 0xd8419f8 loads 4 bytes from abs 0xd882b74.
  The `lw` at 0xd841a14 loads 4 bytes from abs 0xd882be8.
  The `beq` branch at 0xd8419e4 targets 0xd841a34, is taken when a6(?) == a0, and falls through when a6(?) != a0.
  The `bnel` branch at 0xd8419f0 targets 0xd8419e4, is taken when a4(?) != a3(=0xd87fa64), and falls through when a4(?) == a3(=0xd87fa64); its branch-likely delay slot `lw a6,8(a4)` at 0xd8419f4 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0xd8419fc targets 0xd841a2c, is taken when a6(=[0xd882b74]) == 0, and falls through when a6(=[0xd882b74]) != 0.
  The `beq` branch at 0xd841a18 targets 0xd841a3c, is taken when a5(?) == a0, and falls through when a5(?) != a0.
  The `bnel` branch at 0xd841a24 targets 0xd841a18, is taken when a4(?) != a3(=table(0xd882be0)), and falls through when a4(?) == a3(=table(0xd882be0)); its branch-likely delay slot `lw a5,8(a4)` at 0xd841a28 runs only when taken and is annulled on fall-through.
  The return at 0xd841a2c has v0 = 0x0.
  The return at 0xd841a34 has v0 = ?.
  The return at 0xd841a3c has v0 = ?.

- `_glapi_check_table` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841a80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841a80-0xd841a88 (8 bytes).
  It occupies 8 bytes.
  The return at 0xd841a80 has v0 = ?.

- `_glapi_noop_enable_warnings` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841ac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841ac0-0xd841ad4 (20 bytes).
  It occupies 20 bytes.
  The `sb` at 0xd841ad0 stores 1 byte to abs 0xd882b7c.
  The return at 0xd841acc has v0 = 0x4774c.

- `warn` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841b00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841b00-0xd841b58 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0xd841b24 calls getenv with a0=0xd87bfb0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd841b3c calls getenv with a0=0xd87bfc0, a1=?, a2=?, a3=?.
  The `beq` branch at 0xd841b04 targets 0xd841b18, is taken when at(=[0xd882b7c]:1) == 0, and falls through when at(=[0xd882b7c]:1) != 0.
  The `bne` branch at 0xd841b2c targets 0xd841b0c, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `bne` branch at 0xd841b44 targets 0xd841b0c, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The return at 0xd841b10 has v0 = 0x1.
  The return at 0xd841b50 has v0 = 0x0.

- `NoOpGeneric` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841b80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841b80-0xd841bdc (92 bytes).
  It occupies 92 bytes.
  The `bgezall` at 0xd841ba0 calls warn [0xd841b00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd841bc0 calls fprintf with a0=sym(__iob)+32, a1=0xd87bfd0, a2=?, a3=?.
  The `beq` branch at 0xd841ba8 targets 0xd841bc8, is taken when v0(=ret(warn)) == 0, and falls through when v0(=ret(warn)) != 0.
  The return at 0xd841bd4 has v0 = 0x0.

- `_glthread_GetID` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841c00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841c00-0xd841c34 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0xd841c1c calls pthread_self with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd841c2c has v0 = ret(pthread_self).

- `_glthread_InitTSD` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841c40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841c40-0xd841cb0 (112 bytes).
  It occupies 112 bytes.
  The `sw` at 0xd841ca0 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `jalr` at 0xd841c68 calls pthread_key_create with a0=a0 at entry (arg0), a1=0x0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd841c7c calls perror with a0=0xd87c018, a1=?, a2=?, a3=?.
  The `jalr` at 0xd841c88 calls exit with a0=-0x1, a1=?, a2=?, a3=?.
  The `beq` branch at 0xd841c70 targets 0xd841c90, is taken when v0(=ret(pthread_key_create)) == 0, and falls through when v0(=ret(pthread_key_create)) != 0.
  The return at 0xd841ca8 has v0 = one of ret(pthread_key_create), ret(exit).

- `_glthread_GetTSD` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841cc0-0xd841d24 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0xd841cc8 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0xd841cf8 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0xd841cf4 calls pthread_getspecific with a0=[a0], a1=?, a2=?, a3=?.
  The `jalr` at 0xd841d14 calls _glthread_InitTSD with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0xd841ce8 targets 0xd841d10, is taken when at(=[a0+4]) != v1(=0xffffffffff8adc98), and falls through when at(=[a0+4]) == v1(=0xffffffffff8adc98).
  The `beq` branch at 0xd841d1c targets 0xd841cf4 and is always taken.
  The return at 0xd841d08 has v0 = ret(pthread_getspecific).

- `_glthread_SetTSD` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841d40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841d40-0xd841db4 (116 bytes).
  It occupies 116 bytes.
  The `lw` at 0xd841d44 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0xd841d7c loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0xd841d80 calls pthread_setspecific with a0=[a0], a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0xd841da4 calls _glthread_InitTSD with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0xd841d70 targets 0xd841da0, is taken when at(=[a0+4]) != v0(=0xffffffffff8adc98), and falls through when at(=[a0+4]) == v0(=0xffffffffff8adc98).
  The `beq` branch at 0xd841dac targets 0xd841d7c and is always taken.
  The return at 0xd841d98 has v0 = ret(pthread_setspecific).

- `__glXInitPageOne` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841dc0-0xd841ec0 (256 bytes).
  It occupies 256 bytes.
  The `sw` at 0xd841e5c stores 4 bytes to abs 0x1014.
  The `jalr` at 0xd841de8 calls open with a0=0xd87c058, a1=0x2, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd841e00 calls getpagesize with a0=?, a1=?, a2=-0x1, a3=?.
  The `jalr` at 0xd841e2c calls mmap with a0=?, a1=0x1000, a2=0x3, a3=0x92, a4=ret(open), a5=0x0.
  The `jalr` at 0xd841e40 calls close with a0=ret(open), a1=?, a2=?, a3=?.
  The `jalr` at 0xd841e58 calls __glXInitDummyContext with a0=?, a1=?, a2=0xd885ac0, a3=?.
  The `jalr` at 0xd841e64 calls _glapi_set_dispatch with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0xd841e94 calls fprintf with a0=sym(__iob)+32, a1=0xd87c068, a2=ret(mmap), a3=?.
  The `jalr` at 0xd841eac calls perror with a0=0xd87c058, a1=?, a2=-0x1, a3=?.
  The `jalr` at 0xd841eb8 calls exit with a0=0x1, a1=?, a2=?, a3=?.
  The `beq` branch at 0xd841df4 targets 0xd841ea4, is taken when v0(=ret(open)) == a2(=-0x1), and falls through when v0(=ret(open)) != a2(=-0x1).
  The `bne` branch at 0xd841e38 targets 0xd841e80, is taken when a1(?) != v0(=ret(mmap)), and falls through when a1(?) == v0(=ret(mmap)).
  The `beq` branch at 0xd841e9c targets 0xd841e40 and is always taken.
  The return at 0xd841e74 has v0 = ret(_glapi_set_dispatch).
  The instructions from 0xd841e7c to 0xd841e7c are not reached by any path from the entry, and their branches are not listed.

- `__glXInitThread` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841fc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd841fc0-0xd842144 (388 bytes).
  It occupies 388 bytes.
  The `lw` at 0xd841fec loads 4 bytes from abs 0x200e00.
  14 such `lw` accesses load 4 bytes from abs 0x1014, including `lw` at 0xd841ff0, `lw` at 0xd842044, `lw` at 0xd842050.
  The `lw` at 0xd841ffc loads 4 bytes from [0x1014] +0x0.
  The `lw` at 0xd842004 loads 4 bytes from [0x1014] +0x4.
  The `sw` at 0xd84202c stores 4 bytes to abs 0x1014.
  The `sw` at 0xd842034 stores 4 bytes to ret(malloc) +0x10.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd84204c, `sw` at 0xd84205c, `sw` at 0xd84206c.
  The `sw` at 0xd84208c stores 4 bytes to [0x1014] +0x114.
  The `sw` at 0xd842094 stores 4 bytes to [0x1014] +0x118.
  The `sw` at 0xd84209c stores 4 bytes to [0x1014] +0x0.
  The `sw` at 0xd8420a4 stores 4 bytes to [0x1014] +0x4.
  The `sw` at 0xd8420b0 stores 4 bytes to [0x1014] +0x8.
  The `sw` at 0xd8420bc stores 4 bytes to [0x1014] +0xc.
  The `sw` at 0xd8420c4 stores 4 bytes to [0x1014] +0x120.
  The `sw` at 0xd8420cc stores 4 bytes to [0x1014] +0x124.
  The `sw` at 0xd8420d8 stores 4 bytes to [0x1014] +0x128.
  The `sw` at 0xd8420dc stores 4 bytes to abs 0x1044.
  The `sw` at 0xd8420e0 stores 4 bytes to abs 0x1040.
  The `sw` at 0xd8420e4 stores 4 bytes to abs 0x103c.
  The `sw` at 0xd8420e8 stores 4 bytes to abs 0x1038.
  The `sw` at 0xd8420f4 stores 4 bytes to abs 0x1048.
  The `jalr` at 0xd841fe8 calls _mplib_get_thread_id with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd842014 calls __libc_threadbind with a0=?, a1=?, a2=[0x1014], a3=?.
  The `jalr` at 0xd842020 calls malloc with a0=0x12c, a1=?, a2=?, a3=?.
  The `jalr` at 0xd842030 calls __libc_threadbind with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd8420b8 calls __glXInitDummyContext with a0=?, a1=?, a2=?, a3=-0x1, a4=0x100, a6=[0x1014], a7=[0x1014].
  The `jalr` at 0xd8420f0 calls _glapi_set_context with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0xd8420fc calls _glapi_set_dispatch with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0xd842134 calls __ateachexit with a0=0xd841ec0, a1=0x1, a2=?, a3=?.
  The `beq` branch at 0xd841ff4 targets 0xd842010, is taken when a2(=[0x1014]) == 0, and falls through when a2(=[0x1014]) != 0.
  The `bne` branch at 0xd842000 targets 0xd842010, is taken when t9(=[[0x1014]]) != s0(=[0x200e00]), and falls through when t9(=[[0x1014]]) == s0(=[0x200e00]).
  The `beq` branch at 0xd842008 targets 0xd842110, is taken when v0(=[[0x1014]+4]) == s1(=ret(_mplib_get_thread_id)), and falls through when v0(=[[0x1014]+4]) != s1(=ret(_mplib_get_thread_id)).
  The `bne` branch at 0xd842080 targets 0xd842044, is taken when a2(?) != a4(=0x100), and falls through when a2(?) == a4(=0x100).
  The `beq` branch at 0xd842108 targets 0xd842124, is taken when at(=[0xd882b80]) == 0, and falls through when at(=[0xd882b80]) != 0.
  The `beq` branch at 0xd84213c targets 0xd842110 and is always taken.
  The return at 0xd84211c has v0 = one of [[0x1014]+4], ret(_glapi_set_dispatch), ret(__ateachexit).

- `__glXFreeContext` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd842ec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd842ec0-0xd842fb0 (240 bytes).
  It occupies 240 bytes.
  The `lw` at 0xd842eec loads 4 bytes from sym(__glx_contextList) +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd842f00, `lw` at 0xd842f18.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x538, including `lw` at 0xd842f14, `lw` at 0xd842f20.
  The `sw` at 0xd842f1c stores 4 bytes to ?.
  The `lw` at 0xd842f34 loads 4 bytes from a0 (arg0 at entry) +0x53c.
  The `lw` at 0xd842f4c loads 4 bytes from a0 (arg0 at entry) +0x540.
  The `lw` at 0xd842f60 loads 4 bytes from a0 (arg0 at entry) +0x544.
  The `lw` at 0xd842f88 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0xd842f2c calls XFree with a0=[a0+1336], a1=?, a2=?, a3=a3 at entry (arg3).
  The `jalr` at 0xd842f44 calls XFree with a0=[a0+1340], a1=?, a2=?, a3=?.
  The `jalr` at 0xd842f58 calls XFree with a0=[a0+1344], a1=?, a2=?, a3=?.
  The `jalr` at 0xd842f6c calls XFree with a0=[a0+1348], a1=?, a2=?, a3=?.
  The `jalr` at 0xd842f78 calls __glFreeAttributeState with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd842f84 calls XFree with a0=[a0], a1=?, a2=?, a3=?.
  The `jalr` at 0xd842f90 calls XFree with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd842ee0 targets 0xd842f20, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0xd842ef0 targets 0xd842f20, is taken when v0(=[sym(__glx_contextList)]) == 0, and falls through when v0(=[sym(__glx_contextList)]) != 0.
  The `beq` branch at 0xd842ef8 targets 0xd842f18, is taken when s0(=a0) == a0(?), and falls through when s0(=a0) != a0(?).
  The `bne` branch at 0xd842f08 targets 0xd842ef8, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `beq` branch at 0xd842f10 targets 0xd842f24 and is always taken.
  The `beq` branch at 0xd842f24 targets 0xd842f34, is taken when a0(=[a0+1336]) == 0, and falls through when a0(=[a0+1336]) != 0.
  The `beq` branch at 0xd842f38 targets 0xd842f4c, is taken when a0(=[a0+1340]) == 0, and falls through when a0(=[a0+1340]) != 0.
  The `beq` branch at 0xd842f50 targets 0xd842f60, is taken when a0(=[a0+1344]) == 0, and falls through when a0(=[a0+1344]) != 0.
  The `beq` branch at 0xd842f64 targets 0xd842f74, is taken when a0(=[a0+1348]) == 0, and falls through when a0(=[a0+1348]) != 0.
  The return at 0xd842fa8 has v0 = ret(XFree).

- `__glXGetModes` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd843f80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd843f80-0xd84403c (188 bytes).
  It occupies 188 bytes.
  The `bgezall` at 0xd843fa8 calls (unnamed) [0xd8442c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0xd843fe8 calls (unnamed) [0xd844180] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?, a5=ret(0xd8442c0).
  The `jalr` at 0xd844018 calls __glXFindVisualConfig with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?, a5=ret(0xd844180).
  The `beq` branch at 0xd843fb4 targets 0xd843fd8, is taken when v0(=ret(0xd8442c0)) == 0, and falls through when v0(=ret(0xd8442c0)) != 0.
  The `beq` branch at 0xd843ff4 targets 0xd84400c, is taken when v0(=ret(0xd844180)) == 0, and falls through when v0(=ret(0xd844180)) != 0.
  The `beq` branch at 0xd844024 targets 0xd844034, is taken when v0(=ret(__glXFindVisualConfig)) == 0, and falls through when v0(=ret(__glXFindVisualConfig)) != 0.
  The `beq` branch at 0xd84402c targets 0xd843fcc and is always taken.
  The `beq` branch at 0xd844034 targets 0xd843fcc and is always taken.
  The return at 0xd843fc4 has v0 = ret(0xd8442c0)+72.
  The return at 0xd843fd0 has v0 = one of ret(__glXFindVisualConfig)+40, 0x0.
  The return at 0xd844004 has v0 = ret(0xd844180)+72.

- `__glXFindVisualConfig` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd844040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd844040-0xd844150 (272 bytes).
  It occupies 272 bytes.
  The `lw` at 0xd844084 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0xd844098 loads 4 bytes from ret(__glXInitialize) +0x20.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd8440a8, `lw` at 0xd8440b8, `lw` at 0xd8440d8.
  The `jalr` at 0xd84406c calls __glXInitialize with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0xd844074 targets 0xd844140, is taken when v0(=ret(__glXInitialize)) == 0, and falls through when v0(=ret(__glXInitialize)) != 0.
  The `bltz` branch at 0xd84407c targets 0xd84410c, is taken when s1(=a1) < 0 (signed), and falls through when s1(=a1) >= 0 (signed).
  The `beq` branch at 0xd84408c targets 0xd84410c, is taken when s1(=a1) >= v1(=[a0+136]) (signed), and falls through when s1(=a1) < v1(=[a0+136]) (signed).
  The `beq` branch at 0xd8440b4 targets 0xd844148, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `blez` branch at 0xd8440bc targets 0xd8440f0, is taken when a4(?) <= 0 (signed), and falls through when a4(?) > 0 (signed).
  The `beq` branch at 0xd8440dc targets 0xd844128, is taken when v1(?) == s0(=a2), and falls through when v1(?) != s0(=a2).
  The `bnel` branch at 0xd8440e8 targets 0xd8440dc, is taken when a1(?) != v0(?), and falls through when a1(?) == v0(?); its branch-likely delay slot `lw v1,40(a1)` at 0xd8440ec runs only when taken and is annulled on fall-through.
  The `beq` branch at 0xd844140 targets 0xd844110 and is always taken.
  The `beq` branch at 0xd844148 targets 0xd844114 and is always taken.
  The return at 0xd844104 has v0 = 0x0.
  The return at 0xd844120 has v0 = 0x0.
  The return at 0xd844134 has v0 = ?.
  The instructions from 0xd84413c to 0xd84413c are not reached by any path from the entry, and their branches are not listed.

- `__glXClientInfo` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd846480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd846480-0xd8465f8 (376 bytes).
  It occupies 376 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd846484, `lw` at 0xd84659c.
  The `lw` at 0xd8464b0 loads 4 bytes from [a0+1232] +0x0.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8464bc, `lw` at 0xd8464f0, `lw` at 0xd846544.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0xd8464c0, `lw` at 0xd846548.
  The `sw` at 0xd8464dc stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd8464e4, `sb` at 0xd846524.
  2 such `sh` accesses store 2 bytes to [a0+108] +0x2, including `sh` at 0xd8464ec, `sh` at 0xd846540.
  The `lw` at 0xd8464f4 loads 4 bytes from a0 (arg0 at entry) +0x60.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x6c, including `sw` at 0xd8464fc, `sw` at 0xd846588.
  The `sw` at 0xd846504 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sw` at 0xd846508 stores 4 bytes to [a0+108] +0x8.
  The `sw` at 0xd846510 stores 4 bytes to [a0+108] +0x4.
  The `sb` at 0xd846518 stores 1 byte to [a0+108] +0x1.
  The `lhu` at 0xd846528 loads 2 bytes from [a0+108] +0x2.
  The `sw` at 0xd846534 stores 4 bytes to [a0+108] +0xc.
  The `lw` at 0xd8465a8 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd8465b4 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `jalr` at 0xd8464b4 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[a0+1232], a3=a3 at entry (arg3).
  The `jalr` at 0xd846520 calls strlen with a0=0xd87c090, a1=0x14, a2=0x1, a3=0x4, a4=[a0+96]+1, a5=[a0+108], a6=[a0+108]+16.
  The `jalr` at 0xd84656c calls memcpy with a0=[a0+108], a1=0xd87c090, a2=ret(strlen)+1, a3=?, a5=[a0+108].
  The `jalr` at 0xd846594 calls _XSend with a0=a0 at entry (arg0), a1=0xd87c090, a2=ret(strlen)+1, a3=?, a5=[a0+108].
  The `jalr` at 0xd8465ac calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+1232], a3=?.
  The `jalr` at 0xd8465c0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8465e8 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+108].
  The `beq` branch at 0xd8464a8 targets 0xd8464bc, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The `bne` branch at 0xd8464cc targets 0xd8465e4, is taken when v1(=[a0+112]) < a0(=[a0+108]+16) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+16) (unsigned).
  The `bne` branch at 0xd846558 targets 0xd84658c, is taken when a7(=[a0+112]) < t0(=(ret(strlen) + [a0+108])+1) (unsigned), and falls through when a7(=[a0+112]) >= t0(=(ret(strlen) + [a0+108])+1) (unsigned).
  The `beq` branch at 0xd846584 targets 0xd84659c and is always taken.
  The `beq` branch at 0xd8465a0 targets 0xd8465b4, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The `beq` branch at 0xd8465b8 targets 0xd8465cc, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8465f0 targets 0xd8464d4 and is always taken.
  The return at 0xd8465dc has v0 = one of ?, ret(?).

- `__glXRegisterGLXExtensionString` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84bac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd84bac0-0xd84bb94 (212 bytes).
  It occupies 212 bytes.
  The `jalr` at 0xd84bae4 calls strlen with a0=[0xd882ae4], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd84baf4 calls strlen with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84bb08 calls malloc with a0=(ret(strlen) + ret(strlen))+2, a1=?, a2=?, a3=?.
  The `jalr` at 0xd84bb20 calls strcpy with a0=ret(malloc), a1=[0xd882ae4], a2=?, a3=?.
  The `jalr` at 0xd84bb30 calls strcat with a0=ret(malloc), a1=0xd882a24, a2=?, a3=?.
  The `jalr` at 0xd84bb40 calls strcat with a0=ret(malloc), a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0xd84bb84 calls free with a0=[0xd882ae4], a1=0xd87c578, a2=?, a3=?.
  The `beq` branch at 0xd84bad8 targets 0xd84bb70, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0xd84bb10 targets 0xd84bb70, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `bne` branch at 0xd84bb54 targets 0xd84bb80, is taken when a0(=[0xd882ae4]) != a1(=0xd87c578), and falls through when a0(=[0xd882ae4]) == a1(=0xd87c578).
  The `beq` branch at 0xd84bb8c targets 0xd84bb5c and is always taken.
  The return at 0xd84bb68 has v0 = one of ret(strcat), ret(free).
  The return at 0xd84bb78 has v0 = one of ?, ret(malloc).

- `__glXRegisterGLXFunction` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84bbc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd84bbc0-0xd84bcd4 (276 bytes).
  It occupies 276 bytes.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd84bc00, `lw` at 0xd84bc14, `lw` at 0xd84bcac.
  The `sw` at 0xd84bc74 stores 4 bytes to ret(malloc) +0x0.
  The `sw` at 0xd84bc90 stores 4 bytes to ret(malloc) +0x8.
  The `sw` at 0xd84bc9c stores 4 bytes to ret(malloc) +0x4.
  The `sw` at 0xd84bcb8 stores 4 bytes to ?.
  The `jalr` at 0xd84bc04 calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0xd84bc24 calls malloc with a0=0xc, a1=?, a2=?, a3=?.
  The `jalr` at 0xd84bc6c calls strdup with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84bcc4 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd84bbf4 targets 0xd84bc20, is taken when at(=[0xd882b84]) == 0, and falls through when at(=[0xd882b84]) != 0.
  The `beq` branch at 0xd84bc0c targets 0xd84bcac, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0xd84bc18 targets 0xd84bc00, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `bne` branch at 0xd84bc30 targets 0xd84bc68, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0xd84bc78 targets 0xd84bcc0, is taken when v0(=ret(strdup)) == 0, and falls through when v0(=ret(strdup)) != 0.
  The `beq` branch at 0xd84bcb4 targets 0xd84bc50 and is always taken.
  The `beq` branch at 0xd84bccc targets 0xd84bc50 and is always taken.
  The return at 0xd84bc48 has v0 = 0x0.
  The return at 0xd84bc60 has v0 = one of ?, 0x0.
  The return at 0xd84bca4 has v0 = 0x0.
  The instructions from 0xd84bcbc to 0xd84bcbc are not reached by any path from the entry, and their branches are not listed.

- `get_glx_proc_address` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84bd00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd84bd00-0xd84bdc8 (200 bytes).
  It occupies 200 bytes.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd84bd2c, `lw` at 0xd84bd40, `lw` at 0xd84bd70.
  The `lw` at 0xd84bd50 loads 4 bytes from abs 0xd880660.
  The `jalr` at 0xd84bd30 calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0xd84bd60 calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `beq` branch at 0xd84bd20 targets 0xd84bd4c, is taken when at(=[0xd882b84]) == 0, and falls through when at(=[0xd882b84]) != 0.
  The `beq` branch at 0xd84bd38 targets 0xd84bdb0, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0xd84bd44 targets 0xd84bd2c, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0xd84bd54 targets 0xd84bd7c, is taken when a0(=[0xd880660]) == 0, and falls through when a0(=[0xd880660]) != 0.
  The `beq` branch at 0xd84bd68 targets 0xd84bd98, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0xd84bd74 targets 0xd84bd5c, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The return at 0xd84bd90 has v0 = 0x0.
  The return at 0xd84bda8 has v0 = ?.
  The return at 0xd84bdc0 has v0 = ?.

- `__glXPostError` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84bf00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd84bf00-0xd84bfb0 (176 bytes).
  It occupies 176 bytes.
  The `lw` at 0xd84bf40 loads 4 bytes from sym(_XErrorFunction) +0x0.
  The `jalr` at 0xd84bf34 calls __glXSetupForCommand with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd84bf74 calls (unknown callee) with a0=a0 at entry (arg0), a1=sp-80, a2=?, a3=?.
  The `jalr` at 0xd84bf9c calls _XDefaultError with a0=a0 at entry (arg0), a1=sp-80, a2=?, a3=?.
  The `beq` branch at 0xd84bf64 targets 0xd84bf90, is taken when t9(=[sym(_XErrorFunction)]) == 0, and falls through when t9(=[sym(_XErrorFunction)]) != 0.
  The `beq` branch at 0xd84bfa8 targets 0xd84bf84 and is always taken.
  The return at 0xd84bf88 has v0 = one of ret(?), ret(_XDefaultError).

- `__glXPostHiddenError` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84bfc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd84bfc0-0xd84c018 (88 bytes).
  It occupies 88 bytes.
  The `lbu` at 0xd84bfc4 loads 1 byte from a1 (arg1 at entry) +0x0.
  The `lbu` at 0xd84bfdc loads 1 byte from a1 (arg1 at entry) +0x1.
  The `jalr` at 0xd84c008 calls __glXPostError with a0=a0 at entry (arg0), a1=[a1+1]:1, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=[a1+1]:1, a6=0xb.
  The `bne` branch at 0xd84bfd4 targets 0xd84bff4, is taken when v0(=[a1]:1) != 0, and falls through when v0(=[a1]:1) == 0.
  The `beq` branch at 0xd84bfe4 targets 0xd84c000, is taken when a5(=[a1+1]:1) == v0(=0xa), and falls through when a5(=[a1+1]:1) != v0(=0xa).
  The `beq` branch at 0xd84bfec targets 0xd84c004, is taken when a5(=[a1+1]:1) == a6(=0xb), and falls through when a5(=[a1+1]:1) != a6(=0xb).
  The `beq` branch at 0xd84c010 targets 0xd84bff4 and is always taken.
  The return at 0xd84bff8 has v0 = one of [a1]:1, 0xa, ret(__glXPostError).

- `__glXRemoveDrawableInterest` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84c040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd84c040-0xd84c07c (60 bytes).
  It occupies 60 bytes.
  The `lw` at 0xd84c058 loads 4 bytes from a0 (arg0 at entry) +0x14.
  The `sw` at 0xd84c068 stores 4 bytes to a0 (arg0 at entry) +0x14.
  The `jalr` at 0xd84c064 calls __glXFreeDrawablePrivate with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd84c074 has v0 = ret(__glXFreeDrawablePrivate).

- `__glXInitDummyContext` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84c140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd84c140-0xd84c168 (40 bytes).
  It occupies 40 bytes.
  The `lw` at 0xd84c14c loads 4 bytes from abs 0xd881268.
  The `sw` at 0xd84c154 stores 4 bytes to abs 0xd880ef0.
  The `sw` at 0xd84c158 stores 4 bytes to abs 0xd880edc.
  The `lw` at 0xd84c15c loads 4 bytes from abs 0x1014.
  The `sw` at 0xd84c164 stores 4 bytes to [0x1014] +0x11c.
  The return at 0xd84c160 has v0 = 0xd8809d0.

- `__glXCloseDisplay` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84c340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd84c340-0xd84c3c4 (132 bytes).
  It occupies 132 bytes.
  The `lw` at 0xd84c340 loads 4 bytes from abs 0x1014.
  The `lw` at 0xd84c344 loads 4 bytes from [0x1014] +0x11c.
  The `lw` at 0xd84c350 loads 4 bytes from [[0x1014]+284] +0x518.
  The `lw` at 0xd84c37c loads 4 bytes from sym(__glXExtensionInfo) +0x0.
  The `sw` at 0xd84c3a8 stores 4 bytes to [0x1014] +0x11c.
  The `jalr` at 0xd84c378 calls XextRemoveDisplay with a0=[sym(__glXExtensionInfo)], a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0xd84c3a4 calls _glapi_set_dispatch with a0=0x0, a1=0xd8809d0, a2=a2 at entry (arg2), a3=[0x1014].
  The `jalr` at 0xd84c3b4 calls __glXFreeContext with a0=[[0x1014]+284], a1=0x0, a2=?, a3=?.
  The `beq` branch at 0xd84c368 targets 0xd84c390, is taken when at(=[[[0x1014]+284]+1304]) == a0, and falls through when at(=[[[0x1014]+284]+1304]) != a0.
  The `beq` branch at 0xd84c3bc targets 0xd84c370 and is always taken.
  The return at 0xd84c388 has v0 = ret(XextRemoveDisplay).

- `__glXFindDisplay` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84c600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd84c600-0xd84c6bc (188 bytes).
  It occupies 188 bytes.
  2 such `lw` accesses load 4 bytes from sym(__glXExtensionInfo) +0x0, including `lw` at 0xd84c618, `lw` at 0xd84c660.
  The `sw` at 0xd84c6a4 stores 4 bytes to sym(__glXExtensionInfo) +0x0.
  The `jalr` at 0xd84c634 calls XextFindDisplay with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0xd84c664 calls XextAddDisplay with a0=[sym(__glXExtensionInfo)], a1=a0 at entry (arg0), a2=[0xd882ae8], a3=0xd880fb0, a4=0x11, a5=0x0.
  The `jalr` at 0xd84c68c calls XextCreateExtension with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[sym(__glXExtensionInfo)], a5=0x3cc0c.
  The `beq` branch at 0xd84c624 targets 0xd84c688, is taken when a4(=[sym(__glXExtensionInfo)]) == 0, and falls through when a4(=[sym(__glXExtensionInfo)]) != 0.
  The `bne` branch at 0xd84c63c targets 0xd84c670, is taken when v0(=ret(XextFindDisplay)) != 0, and falls through when v0(=ret(XextFindDisplay)) == 0.
  The `bne` branch at 0xd84c6a0 targets 0xd84c62c, is taken when v0(=ret(XextCreateExtension)) != 0, and falls through when v0(=ret(XextCreateExtension)) == 0.
  The return at 0xd84c680 has v0 = one of ret(XextFindDisplay), ret(XextAddDisplay).
  The return at 0xd84c6b4 has v0 = 0x0.

- `__glXQueryServerString` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84ca00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd84ca00-0xd84cb94 (404 bytes).
  It occupies 404 bytes.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd84ca04, `lw` at 0xd84caf0, `lw` at 0xd84cb2c.
  The `lw` at 0xd84ca3c loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd84ca48, `lw` at 0xd84ca78, `lw` at 0xd84cb90.
  The `lw` at 0xd84ca4c loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd84ca64 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd84ca6c, `sb` at 0xd84cab0.
  The `sh` at 0xd84ca74 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd84ca7c loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd84ca84 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd84ca8c stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sw` at 0xd84ca90 stores 4 bytes to [a0+108] +0x8.
  The `sw` at 0xd84ca98 stores 4 bytes to [a0+108] +0x4.
  The `sb` at 0xd84caa4 stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd84cb38 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd84cb44 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `jalr` at 0xd84ca40 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a6=[a0+1232].
  The `jalr` at 0xd84caac calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x0, a3=0x0, a4=0x13, a5=a3 at entry (arg3), a6=[a0+96]+1, a7=[a0+108]+12.
  The `jalr` at 0xd84cacc calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd84cae4 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84cb0c calls _XRead with a0=a0 at entry (arg0), a1=ret(malloc), a2=?, a3=?.
  The `jalr` at 0xd84cb24 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84cb3c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=[a0+1232].
  The `jalr` at 0xd84cb50 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84cb84 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd84ca34 targets 0xd84ca48, is taken when a6(=[a0+1232]) == 0, and falls through when a6(=[a0+1232]) != 0.
  The `bne` branch at 0xd84ca58 targets 0xd84cb80, is taken when v1(=[a0+112]) < a0(=[a0+108]+12) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+12) (unsigned).
  The `bne` branch at 0xd84cad4 targets 0xd84cb00, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0xd84caec targets 0xd84cb30 and is always taken.
  The `beq` branch at 0xd84cb14 targets 0xd84cb2c, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0xd84cb30 targets 0xd84cb44, is taken when a6(=[a0+1232]) == 0, and falls through when a6(=[a0+1232]) != 0.
  The `beq` branch at 0xd84cb48 targets 0xd84cb5c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd84cb8c targets 0xd84ca5c and is always taken.
  The return at 0xd84cb70 has v0 = ret(malloc).
  The instructions from 0xd84caf4 to 0xd84cafc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd84cb78 to 0xd84cb7c are not reached by any path from the entry, and their branches are not listed.

- `getBoardNumErrHandler` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84cbc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd84cbc0-0xd84cbc8 (8 bytes).
  It occupies 8 bytes.
  The return at 0xd84cbc0 has v0 = 0x0.

- `__glXInitialize` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84f8c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd84f8c0-0xd84fc84 (964 bytes).
  It occupies 964 bytes.
  7 such `lw` accesses load 4 bytes from ret(__glXFindDisplay) +0x8, including `lw` at 0xd84f93c, `lw` at 0xd84f974, `lw` at 0xd84fa04.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd84f948, `lw` at 0xd84f98c, `lw` at 0xd84fb30.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x0, including `lw` at 0xd84f954, `lw` at 0xd84fb3c.
  2 such `lw` accesses load 4 bytes from [ret(__glXFindDisplay)+8] +0x0, including `lw` at 0xd84f984, `lw` at 0xd84fb18.
  3 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd84f99c, `lw` at 0xd84f9f0, `lw` at 0xd84fb74.
  The `lw` at 0xd84f9c4 loads 4 bytes from ?.
  2 such `lw` accesses load 4 bytes from [ret(__glXFindDisplay)+8] +0x4, including `lw` at 0xd84fa18, `lw` at 0xd84fa50.
  The `sw` at 0xd84fa54 stores 4 bytes to ret(malloc) +0x4.
  The `lw` at 0xd84fa5c loads 4 bytes from [ret(__glXFindDisplay)+8] +0x8.
  The `sw` at 0xd84fa60 stores 4 bytes to ret(malloc) +0x8.
  The `lw` at 0xd84fa68 loads 4 bytes from [ret(__glXFindDisplay)+8] +0xc.
  The `sw` at 0xd84fa6c stores 4 bytes to ret(malloc) +0xc.
  The `sw` at 0xd84fa74 stores 4 bytes to ret(malloc) +0x10.
  The `sw` at 0xd84fa7c stores 4 bytes to ret(malloc) +0x0.
  The `sw` at 0xd84fa80 stores 4 bytes to ret(malloc) +0x18.
  The `sw` at 0xd84fa84 stores 4 bytes to ret(malloc) +0x1c.
  The `sw` at 0xd84fa88 stores 4 bytes to ret(malloc) +0x14.
  The `sb` at 0xd84fa8c stores 1 byte to ret(malloc) +0x49.
  The `sb` at 0xd84fa90 stores 1 byte to ret(malloc) +0x71.
  The `sb` at 0xd84fa94 stores 1 byte to ret(malloc) +0x99.
  The `sb` at 0xd84fa98 stores 1 byte to ret(malloc) +0xc1.
  The `sb` at 0xd84fa9c stores 1 byte to ret(malloc) +0xe9.
  The `sb` at 0xd84faa0 stores 1 byte to ret(malloc) +0x111.
  The `sb` at 0xd84faa4 stores 1 byte to ret(malloc) +0x139.
  The `sb` at 0xd84faa8 stores 1 byte to ret(malloc) +0x161.
  The `sb` at 0xd84faac stores 1 byte to ret(malloc) +0x189.
  The `sb` at 0xd84fab0 stores 1 byte to ret(malloc) +0x1b1.
  The `sb` at 0xd84fab4 stores 1 byte to ret(malloc) +0x1d9.
  The `sb` at 0xd84fab8 stores 1 byte to ret(malloc) +0x201.
  The `sb` at 0xd84fabc stores 1 byte to ret(malloc) +0x229.
  The `sb` at 0xd84fac0 stores 1 byte to ret(malloc) +0x251.
  The `sb` at 0xd84fac4 stores 1 byte to ret(malloc) +0x279.
  The `sb` at 0xd84fac8 stores 1 byte to ret(malloc) +0x2a1.
  2 such `sw` accesses store 4 bytes to ret(malloc) +0x2ac, including `sw` at 0xd84fae4, `sw` at 0xd84fc18.
  The `sw` at 0xd84fae8 stores 4 bytes to ret(malloc) +0x2a4.
  The `sw` at 0xd84faec stores 4 bytes to ret(malloc) +0x2a8.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd84fb1c, `sw` at 0xd84fb24, `sw` at 0xd84fb28.
  The `lw` at 0xd84fb80 loads 4 bytes from ret(malloc) +0x10.
  The `lw` at 0xd84fb8c loads 4 bytes from ret(malloc) +0x14.
  The `lw` at 0xd84fb98 loads 4 bytes from ret(malloc) +0x4.
  The `jalr` at 0xd84f8e4 calls __glXFindDisplay with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd84f900 calls pthread_mutex_init with a0=sym(__glXmutex), a1=0x0, a2=?, a3=?.
  The `jalr` at 0xd84f910 calls pthread_mutex_init with a0=sym(__glXSwapBuffersMutex), a1=0x0, a2=?, a3=?.
  The `jalr` at 0xd84f920 calls __glXInitThread with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd84f92c calls pthread_mutex_lock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84f958 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+1232].
  The `jalr` at 0xd84f968 calls XEHeadOfExtensionList with a0=(a0 << 0x20), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84f980 calls XFindOnExtensionList with a0=ret(XEHeadOfExtensionList), a1=[[ret(__glXFindDisplay)+8]], a2=?, a3=?.
  The `jalr` at 0xd84f9a0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+1232].
  The `jalr` at 0xd84f9ac calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84f9f4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+1232].
  The `bgezall` at 0xd84fa14 calls QueryVersion [0xd84c880] with a0=a0 at entry (arg0), a1=[[ret(__glXFindDisplay)+8]+4], a2=sp-76, a3=sp-72.
  The `jalr` at 0xd84fa24 calls malloc with a0=0x10, a1=?, a2=?, a3=?.
  The `jalr` at 0xd84fa3c calls malloc with a0=0x2b0, a1=?, a2=?, a3=?.
  The `jalr` at 0xd84fad4 calls getenv with a0=0xd87cf78, a1=[[ret(__glXFindDisplay)+8]+8], a2=[[ret(__glXFindDisplay)+8]+4], a3=?.
  The `bgezall` at 0xd84fb00 calls AllocAndFetchScreenConfigs [0xd84f5c0] with a0=a0 at entry (arg0), a1=ret(malloc), a2=?, a3=?.
  The `jalr` at 0xd84fb40 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+1232].
  The `jalr` at 0xd84fb50 calls XEHeadOfExtensionList with a0=(a0 << 0x20), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84fb60 calls XAddToExtensionList with a0=ret(XEHeadOfExtensionList), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84fb78 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+1232].
  The `jalr` at 0xd84fb9c calls __glXClientInfo with a0=a0 at entry (arg0), a1=[ret(malloc)+4], a2=0x1, a3=?.
  The `jalr` at 0xd84fbac calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84fbd4 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84fbe4 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882ae8], a2=?, a3=?.
  The `jalr` at 0xd84fbf8 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84fc0c calls driCreateDisplay with a0=a0 at entry (arg0), a1=ret(malloc)+676, a2=?, a3=?.
  The `jalr` at 0xd84fc20 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84fc38 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84fc44 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd84fc58 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84fc64 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0xd84fc74 calls free with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0xd84f8f0 targets 0xd84f91c, is taken when v1(=[0xd882aec]) == 0, and falls through when v1(=[0xd882aec]) != 0.
  The `beq` branch at 0xd84f934 targets 0xd84fbd4, is taken when s1(=ret(__glXFindDisplay)) == 0, and falls through when s1(=ret(__glXFindDisplay)) != 0.
  The `beq` branch at 0xd84f940 targets 0xd84fbd4, is taken when a0(=[ret(__glXFindDisplay)+8]) == 0, and falls through when a0(=[ret(__glXFindDisplay)+8]) != 0.
  The `beq` branch at 0xd84f94c targets 0xd84f964, is taken when a4(=[a0+1232]) == 0, and falls through when a4(=[a0+1232]) != 0.
  The `beq` branch at 0xd84f988 targets 0xd84f9e8, is taken when v0(=ret(XFindOnExtensionList)) == 0, and falls through when v0(=ret(XFindOnExtensionList)) != 0.
  The `beq` branch at 0xd84f994 targets 0xd84f9a8, is taken when a4(=[a0+1232]) == 0, and falls through when a4(=[a0+1232]) != 0.
  The `beq` branch at 0xd84f9e8 targets 0xd84fa00, is taken when a4(=[a0+1232]) == 0, and falls through when a4(=[a0+1232]) != 0.
  The `beq` branch at 0xd84fa1c targets 0xd84fc1c, is taken when v0(=ret(QueryVersion)) == 0, and falls through when v0(=ret(QueryVersion)) != 0.
  The `beq` branch at 0xd84fa2c targets 0xd84fbf4, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0xd84fa44 targets 0xd84fc30, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0xd84fadc targets 0xd84fc08, is taken when v0(=ret(getenv)) == 0, and falls through when v0(=ret(getenv)) != 0.
  The `beq` branch at 0xd84fb08 targets 0xd84fc54, is taken when v0(=ret(AllocAndFetchScreenConfigs)) == 0, and falls through when v0(=ret(AllocAndFetchScreenConfigs)) != 0.
  The `beq` branch at 0xd84fb34 targets 0xd84fb4c, is taken when a4(=[a0+1232]) == 0, and falls through when a4(=[a0+1232]) != 0.
  The `beq` branch at 0xd84fb6c targets 0xd84fb80, is taken when a4(=[a0+1232]) == 0, and falls through when a4(=[a0+1232]) != 0.
  The `bne` branch at 0xd84fb88 targets 0xd84fba4, is taken when a1(=[ret(malloc)+16]) != a2(=0x1), and falls through when a1(=[ret(malloc)+16]) == a2(=0x1).
  The `blez` branch at 0xd84fb90 targets 0xd84fba4, is taken when v0(=[ret(malloc)+20]) <= 0 (signed), and falls through when v0(=[ret(malloc)+20]) > 0 (signed).
  The `beq` branch at 0xd84fbec targets 0xd84f9d0 and is always taken.
  The `beq` branch at 0xd84fc00 targets 0xd84f9d0 and is always taken.
  The `beq` branch at 0xd84fc14 targets 0xd84faf0 and is always taken.
  The `beq` branch at 0xd84fc28 targets 0xd84f9d0 and is always taken.
  The `beq` branch at 0xd84fc4c targets 0xd84f9d0 and is always taken.
  The `beq` branch at 0xd84fc7c targets 0xd84f9d0 and is always taken.
  The return at 0xd84f9c8 has v0 = ?.
  The return at 0xd84f9e0 has v0 = 0x0.
  The return at 0xd84fbc8 has v0 = ret(malloc).
  The instructions from 0xd84fbd0 to 0xd84fbd0 are not reached by any path from the entry, and their branches are not listed.

- `__glXSetupForCommand` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84fcc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd84fcc0-0xd84fd74 (180 bytes).
  It occupies 180 bytes.
  The `lw` at 0xd84fcc8 loads 4 bytes from abs 0x1014.
  The `lw` at 0xd84fccc loads 4 bytes from [0x1014] +0x11c.
  2 such `lw` accesses load 4 bytes from [[0x1014]+284] +0x518, including `lw` at 0xd84fcd0, `lw` at 0xd84fd04.
  The `lw` at 0xd84fcf8 loads 4 bytes from [[0x1014]+284] +0x4.
  The `lbu` at 0xd84fd10 loads 1 byte from [[0x1014]+284] +0x553.
  The `lbu` at 0xd84fd5c loads 1 byte from ret(__glXInitialize) +0x7.
  The `jalr` at 0xd84fcfc calls __glXFlushRenderBuffer with a0=[[0x1014]+284], a1=[[[0x1014]+284]+4], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd84fd2c calls __glXInitialize with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd84fcec targets 0xd84fd28, is taken when at(=[[[0x1014]+284]+1304]) == 0, and falls through when at(=[[[0x1014]+284]+1304]) != 0.
  The `bne` branch at 0xd84fd0c targets 0xd84fd28, is taken when t8(=[[[0x1014]+284]+1304]) != s0(=a0), and falls through when t8(=[[[0x1014]+284]+1304]) == s0(=a0).
  The `bne` branch at 0xd84fd38 targets 0xd84fd58, is taken when v0(=ret(__glXInitialize)) != 0, and falls through when v0(=ret(__glXInitialize)) == 0.
  The return at 0xd84fd20 has v0 = [[[0x1014]+284]+1363]:1.
  The return at 0xd84fd50 has v0 = 0x0.
  The return at 0xd84fd6c has v0 = [ret(__glXInitialize)+7]:1.

- `__glXFlushRenderBuffer` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84fd80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd84fd80-0xd84fed4 (340 bytes).
  It occupies 340 bytes.
  The `lw` at 0xd84fd88 loads 4 bytes from a0 (arg0 at entry) +0x518.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0xd84fd8c, `lw` at 0xd84fe4c, `lw` at 0xd84fe7c.
  2 such `lw` accesses load 4 bytes from [a0+1304] +0x4d0, including `lw` at 0xd84fdbc, `lw` at 0xd84fe50.
  The `lw` at 0xd84fdc8 loads 4 bytes from [[a0+1304]+1232] +0x0.
  3 such `lw` accesses load 4 bytes from [a0+1304] +0x6c, including `lw` at 0xd84fdd4, `lw` at 0xd84fe00, `lw` at 0xd84fed0.
  The `lw` at 0xd84fdd8 loads 4 bytes from [a0+1304] +0x70.
  The `sw` at 0xd84fdec stores 4 bytes to [a0+1304] +0x64.
  2 such `sb` accesses store 1 byte to [[a0+1304]+108] +0x0, including `sb` at 0xd84fdf4, `sb` at 0xd84fe28.
  2 such `sh` accesses store 2 bytes to [[a0+1304]+108] +0x2, including `sh` at 0xd84fdfc, `sh` at 0xd84fe40.
  The `lw` at 0xd84fe04 loads 4 bytes from [a0+1304] +0x60.
  The `sw` at 0xd84fe0c stores 4 bytes to [a0+1304] +0x6c.
  The `sw` at 0xd84fe14 stores 4 bytes to [a0+1304] +0x60.
  The `lw` at 0xd84fe18 loads 4 bytes from a0 (arg0 at entry) +0x550.
  The `sb` at 0xd84fe1c stores 1 byte to [[a0+1304]+108] +0x1.
  The `lhu` at 0xd84fe24 loads 2 bytes from [[a0+1304]+108] +0x2.
  The `lw` at 0xd84fe30 loads 4 bytes from a0 (arg0 at entry) +0x38.
  The `sw` at 0xd84fe38 stores 4 bytes to [[a0+1304]+108] +0x4.
  The `lw` at 0xd84fe5c loads 4 bytes from [[a0+1304]+1232] +0x4.
  The `lw` at 0xd84fe68 loads 4 bytes from [a0+1304] +0x7c.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x4, including `sw` at 0xd84fe90, `sw` at 0xd84fea0.
  The `jalr` at 0xd84fdcc calls (unknown callee) with a0=[a0+1304], a1=[[a0+1304]+1232], a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=[a0].
  The `jalr` at 0xd84fe48 calls _XSend with a0=[a0+1304], a1=[a0], a2=?, a3=?, a4=[[a0+1304]+108], a5=[a0+56], a6=0x1, a7=[a0+1360].
  The `jalr` at 0xd84fe60 calls (unknown callee) with a0=[a0+1304], a1=[[a0+1304]+1232], a2=?, a3=?.
  The `jalr` at 0xd84fe74 calls (unknown callee) with a0=[a0+1304], a1=?, a2=?, a3=?.
  The `jalr` at 0xd84fec4 calls _XFlush with a0=[a0+1304], a1=?, a2=?, a3=?, a4=[[a0+1304]+108].
  The `beq` branch at 0xd84fda8 targets 0xd84fea0, is taken when s0(=[a0+1304]) == 0, and falls through when s0(=[a0+1304]) != 0.
  The `beq` branch at 0xd84fdb4 targets 0xd84fe84, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0xd84fdc0 targets 0xd84fdd4, is taken when a1(=[[a0+1304]+1232]) == 0, and falls through when a1(=[[a0+1304]+1232]) != 0.
  The `bne` branch at 0xd84fde4 targets 0xd84fec0, is taken when v0(=[[a0+1304]+112]) < v1(=[[a0+1304]+108]+8) (unsigned), and falls through when v0(=[[a0+1304]+112]) >= v1(=[[a0+1304]+108]+8) (unsigned).
  The `beq` branch at 0xd84fe54 targets 0xd84fe68, is taken when a1(=[[a0+1304]+1232]) == 0, and falls through when a1(=[[a0+1304]+1232]) != 0.
  The `beq` branch at 0xd84fe6c targets 0xd84fe7c, is taken when t9(=[[a0+1304]+124]) == 0, and falls through when t9(=[[a0+1304]+124]) != 0.
  The `beq` branch at 0xd84fecc targets 0xd84fde8 and is always taken.
  The return at 0xd84fe98 has v0 = [a0].
  The return at 0xd84feb8 has v0 = [a0].

- `__glXSendLargeCommand` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84ff00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd84ff00-0xd850254 (852 bytes).
  It occupies 852 bytes.
  The `lw` at 0xd84ff08 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0xd84ff58 loads 4 bytes from a0 (arg0 at entry) +0x518.
  2 such `lw` accesses load 4 bytes from [a0+1304] +0x4d0, including `lw` at 0xd84ff68, `lw` at 0xd8501dc.
  The `lw` at 0xd84ff80 loads 4 bytes from [[a0+1304]+1232] +0x0.
  12 such `lw` accesses load 4 bytes from [a0+1304] +0x6c, including `lw` at 0xd84ff8c, `lw` at 0xd84ffb8, `lw` at 0xd850008.
  5 such `lw` accesses load 4 bytes from [a0+1304] +0x70, including `lw` at 0xd84ff90, `lw` at 0xd85000c, `lw` at 0xd8500dc.
  3 such `sw` accesses store 4 bytes to [a0+1304] +0x64, including `sw` at 0xd84ffa4, `sw` at 0xd850080, `sw` at 0xd850140.
  6 such `sb` accesses store 1 byte to [[a0+1304]+108] +0x0, including `sb` at 0xd84ffac, `sb` at 0xd84ffd8, `sb` at 0xd850088.
  6 such `sh` accesses store 2 bytes to [[a0+1304]+108] +0x2, including `sh` at 0xd84ffb4, `sh` at 0xd850004, `sh` at 0xd850090.
  3 such `lw` accesses load 4 bytes from [a0+1304] +0x60, including `lw` at 0xd84ffbc, `lw` at 0xd850098, `lw` at 0xd850154.
  5 such `sw` accesses store 4 bytes to [a0+1304] +0x6c, including `sw` at 0xd84ffc4, `sw` at 0xd850044, `sw` at 0xd8500a0.
  3 such `sw` accesses store 4 bytes to [a0+1304] +0x60, including `sw` at 0xd84ffcc, `sw` at 0xd8500a8, `sw` at 0xd850160.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x550, including `lw` at 0xd84ffd0, `lw` at 0xd8500ac, `lw` at 0xd85016c.
  3 such `sb` accesses store 1 byte to [[a0+1304]+108] +0x1, including `sb` at 0xd84ffd4, `sb` at 0xd8500b0, `sb` at 0xd850170.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x38, including `lw` at 0xd84ffdc, `lw` at 0xd8500b8, `lw` at 0xd850178.
  3 such `sh` accesses store 2 bytes to [[a0+1304]+108] +0x8, including `sh` at 0xd84ffe4, `sh` at 0xd8500bc, `sh` at 0xd850188.
  3 such `sh` accesses store 2 bytes to [[a0+1304]+108] +0xa, including `sh` at 0xd84ffe8, `sh` at 0xd8500c0, `sh` at 0xd850180.
  3 such `sw` accesses store 4 bytes to [[a0+1304]+108] +0xc, including `sw` at 0xd84ffec, `sw` at 0xd8500c4, `sw` at 0xd85017c.
  3 such `lhu` accesses load 2 bytes from [[a0+1304]+108] +0x2, including `lhu` at 0xd84fff4, `lhu` at 0xd8500c8, `lhu` at 0xd850184.
  3 such `sw` accesses store 4 bytes to [[a0+1304]+108] +0x4, including `sw` at 0xd84fffc, `sw` at 0xd8500cc, `sw` at 0xd850194.
  The `lw` at 0xd8501e8 loads 4 bytes from [[a0+1304]+1232] +0x4.
  The `lw` at 0xd8501f4 loads 4 bytes from [a0+1304] +0x7c.
  The `jalr` at 0xd84ff84 calls (unknown callee) with a0=[a0+1304], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a6=[[a0+1304]+1232].
  The `jalr` at 0xd850028 calls memcpy with a0=[[a0+1304]+108], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=0x2, a4=[a0+1360], a5=[[a0+1304]+96]+1, a6=[[a0+1304]+108]+16, a7=0x4.
  The `jalr` at 0xd850050 calls _XSend with a0=[a0+1304], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=0x2, a4=[a0+1360], a5=[[a0+1304]+96]+1, a6=[[a0+1304]+108]+16, a7=0x4.
  The `jalr` at 0xd850070 calls _XFlush with a0=[a0+1304], a1=[[a0+1304]+108], a2=[[a0+1304]+112], a3=?.
  The `jalr` at 0xd8500f8 calls _XSend with a0=[a0+1304], a1=?, a2=?, a3=?.
  The `jalr` at 0xd8501b8 calls memcpy with a0=[[a0+1304]+108], a1=?, a2=?, a3=?.
  The `jalr` at 0xd8501ec calls (unknown callee) with a0=[a0+1304], a1=?, a2=?, a3=?, a6=[[a0+1304]+1232].
  The `jalr` at 0xd850200 calls (unknown callee) with a0=[a0+1304], a1=?, a2=?, a3=?.
  The `jalr` at 0xd850244 calls _XFlush with a0=[a0+1304], a1=?, a2=a0 at entry (arg0), a3=?.
  The `beq` branch at 0xd84ff6c targets 0xd84ff78, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0xd84ff78 targets 0xd84ff8c, is taken when a6(=[[a0+1304]+1232]) == 0, and falls through when a6(=[[a0+1304]+1232]) != 0.
  The `bne` branch at 0xd84ff9c targets 0xd850240, is taken when t8(=[[a0+1304]+112]) < t9(=[[a0+1304]+108]+16) (unsigned), and falls through when t8(=[[a0+1304]+112]) >= t9(=[[a0+1304]+108]+16) (unsigned).
  The `bne` branch at 0xd850018 targets 0xd850048, is taken when ra(=[[a0+1304]+112]) < at(=(a2 + [[a0+1304]+108])) (unsigned), and falls through when ra(=[[a0+1304]+112]) >= at(=(a2 + [[a0+1304]+108])) (unsigned).
  The `beq` branch at 0xd850040 targets 0xd850058 and is always taken.
  The `blez` branch at 0xd850058 targets 0xd8501dc, is taken when s2(=a4) <= 0 (signed), and falls through when s2(=a4) > 0 (signed).
  The `beq` branch at 0xd850064 targets 0xd850110 and is always taken.
  The `beq` branch at 0xd8500e8 targets 0xd8501b0, is taken when t2(=[[a0+1304]+112]) >= t3(?) (unsigned), and falls through when t2(=[[a0+1304]+112]) < t3(?) (unsigned).
  The `blez` branch at 0xd850108 targets 0xd8501d8, is taken when s2(?) <= 0 (signed), and falls through when s2(?) > 0 (signed).
  The `beq` branch at 0xd85011c targets 0xd850128, is taken when s6(=[a0+16]-16) >= s2(?) (signed), and falls through when s6(=[a0+16]-16) < s2(?) (signed).
  The `bne` branch at 0xd850138 targets 0xd85006c, is taken when a2(=[[a0+1304]+112]) < a4(=[[a0+1304]+108]+16) (unsigned), and falls through when a2(=[[a0+1304]+112]) >= a4(=[[a0+1304]+108]+16) (unsigned).
  The `bne` branch at 0xd8501a8 targets 0xd8500f0, is taken when a5(=[[a0+1304]+112]) < a6(?) (unsigned), and falls through when a5(=[[a0+1304]+112]) >= a6(?) (unsigned).
  The `beq` branch at 0xd8501d0 targets 0xd850100 and is always taken.
  The `beq` branch at 0xd8501e0 targets 0xd8501f4, is taken when a6(=[[a0+1304]+1232]) == 0, and falls through when a6(=[[a0+1304]+1232]) != 0.
  The `beq` branch at 0xd8501f8 targets 0xd85020c, is taken when t9(=[[a0+1304]+124]) == 0, and falls through when t9(=[[a0+1304]+124]) != 0.
  The `beq` branch at 0xd85024c targets 0xd84ffa0 and is always taken.
  The return at 0xd850230 has v0 = one of ?, ret(?).
  The instructions from 0xd850238 to 0xd85023c are not reached by any path from the entry, and their branches are not listed.

- `__glXMakeContextCurrent` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd850940 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd850940-0xd8513b4 (2676 bytes).
  It occupies 2676 bytes.
  4 such `lw` accesses load 4 bytes from abs 0x1014, including `lw` at 0xd8509a4, `lw` at 0xd850c8c, `lw` at 0xd850da4.
  The `lw` at 0xd8509a8 loads 4 bytes from [0x1014] +0x11c.
  7 such `lw` accesses load 4 bytes from [[0x1014]+284] +0x50c, including `lw` at 0xd8509ac, `lw` at 0xd850ac0, `lw` at 0xd850f08.
  4 such `lw` accesses load 4 bytes from [[0x1014]+284] +0x520, including `lw` at 0xd8509c0, `lw` at 0xd8509f4, `lw` at 0xd850a08.
  2 such `lw` accesses load 4 bytes from [[0x1014]+284] +0x51c, including `lw` at 0xd8509cc, `lw` at 0xd850c90.
  The `lw` at 0xd8509d8 loads 4 bytes from [[0x1014]+284] +0x57c.
  5 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x50c, including `lw` at 0xd8509ec, `lw` at 0xd850a44, `lw` at 0xd850b8c.
  The `lw` at 0xd850a10 loads 4 bytes from [[0x1014]+284] +0x574.
  The `lw` at 0xd850a14 loads 4 bytes from [[0x1014]+284] +0x20.
  3 such `lw` accesses load 4 bytes from [[0x1014]+284] +0x518, including `lw` at 0xd850a20, `lw` at 0xd850c98, `lw` at 0xd850f70.
  The `lw` at 0xd850a2c loads 4 bytes from [[0x1014]+284] +0x528.
  The `lw` at 0xd850a34 loads 4 bytes from [[0x1014]+284] +0x524.
  3 such `sw` accesses store 4 bytes to [[0x1014]+284] +0x38, including `sw` at 0xd850a38, `sw` at 0xd850bac, `sw` at 0xd850fa0.
  8 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x20, including `lw` at 0xd850a74, `lw` at 0xd850bc8, `lw` at 0xd850c04.
  2 such `lw` accesses load 4 bytes from ret(__glXAddDrawableInterest) +0x8, including `lw` at 0xd850a78, `lw` at 0xd850ef0.
  2 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x2c, including `lw` at 0xd850a84, `lw` at 0xd850bf0.
  The `lw` at 0xd850a88 loads 4 bytes from ret(__glXAddDrawableInterest) +0xc.
  The `lw` at 0xd850a94 loads 4 bytes from ret(__glXAddDrawableInterest) +0x2c.
  3 such `lw` accesses load 4 bytes from [[0x1014]+284] +0x38, including `lw` at 0xd850ae4, `lw` at 0xd850f78, `lw` at 0xd851134.
  2 such `lbu` accesses load 1 byte from a3 (arg3 at entry) +0x1d, including `lbu` at 0xd850af4, `lbu` at 0xd850bd4.
  13 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd850bb8, `lw` at 0xd850c40, `lw` at 0xd850c50.
  11 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd850bc4, `sw` at 0xd850bd0, `sw` at 0xd850be0.
  2 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x55c, including `lw` at 0xd850c14, `lw` at 0xd850ff0.
  2 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x560, including `lw` at 0xd850c24, `lw` at 0xd851000.
  2 such `sw` accesses store 4 bytes to [0x1014] +0x11c, including `sw` at 0xd850c9c, `sw` at 0xd850f58.
  The `sw` at 0xd850ca4 stores 4 bytes to a3 (arg3 at entry) +0x528.
  The `sw` at 0xd850ca8 stores 4 bytes to a3 (arg3 at entry) +0x51c.
  The `sw` at 0xd850cac stores 4 bytes to a3 (arg3 at entry) +0x524.
  The `sw` at 0xd850cb0 stores 4 bytes to a3 (arg3 at entry) +0x520.
  The `sw` at 0xd850cb8 stores 4 bytes to a3 (arg3 at entry) +0x518.
  The `lw` at 0xd850cbc loads 4 bytes from a3 (arg3 at entry) +0x57c.
  2 such `lw` accesses load 4 bytes from [[0x1014]+284] +0x14, including `lw` at 0xd850ce4, `lw` at 0xd8511dc.
  The `sw` at 0xd850cf0 stores 4 bytes to [[0x1014]+284] +0x510.
  The `sw` at 0xd850cf4 stores 4 bytes to [[0x1014]+284] +0x514.
  2 such `sw` accesses store 4 bytes to [[0x1014]+284] +0x524, including `sw` at 0xd850cf8, `sw` at 0xd850e3c.
  2 such `sw` accesses store 4 bytes to [[0x1014]+284] +0x528, including `sw` at 0xd850cfc, `sw` at 0xd850e4c.
  2 such `sw` accesses store 4 bytes to [[0x1014]+284] +0x520, including `sw` at 0xd850d00, `sw` at 0xd850e54.
  2 such `sw` accesses store 4 bytes to [[0x1014]+284] +0x51c, including `sw` at 0xd850d04, `sw` at 0xd850e50.
  2 such `sw` accesses store 4 bytes to [[0x1014]+284] +0x518, including `sw` at 0xd850d08, `sw` at 0xd850e60.
  5 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x14, including `lw` at 0xd850d94, `lw` at 0xd850e64, `lw` at 0xd851070.
  The `lw` at 0xd850da0 loads 4 bytes from a3 (arg3 at entry) +0x510.
  The `lw` at 0xd850dac loads 4 bytes from [0x1014] +0x0.
  The `lw` at 0xd850db8 loads 4 bytes from a3 (arg3 at entry) +0x514.
  2 such `lw` accesses load 4 bytes from [0x1014] +0x4, including `lw` at 0xd850dbc, `lw` at 0xd850eac.
  The `lw` at 0xd850e14 loads 4 bytes from a3 (arg3 at entry) +0x570.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x510, including `sw` at 0xd850ea4, `sw` at 0xd8511f8.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x514, including `sw` at 0xd850eb8, `sw` at 0xd8511fc.
  The `lw` at 0xd850efc loads 4 bytes from ret(__glXAddDrawableInterest) +0x10.
  The `sw` at 0xd851104 stores 4 bytes to a3 (arg3 at entry) +0x38.
  The `sb` at 0xd8511b0 stores 1 byte to a3 (arg3 at entry) +0x564.
  The `lw` at 0xd8511d0 loads 4 bytes from [[0x1014]+284] +0x558.
  The `jalr` at 0xd85097c calls __glXInitThread with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd850988 calls __glXSetupForCommand with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd850a1c calls (unknown callee) with a0=[[[0x1014]+284]+1304], a1=[[[0x1014]+284]+32], a2=[[[0x1014]+284]+1312], a3=[[0x1014]+284], a4=one of 0x0, 0x1.
  The `jalr` at 0xd850a64 calls __glXAddDrawableInterest with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `bgezall` at 0xd850b10 calls __glXSendMakeCurrent [0xd8505c0] with a0=a0 at entry (arg0), a1=a3 at entry (arg3), a2=?, a3=sp-176, a4=a1 at entry (arg1).
  The `bgezall` at 0xd850b30 calls __glXRestoreCurrent [0xd850780] with a0=a3 at entry (arg3), a1=[[0x1014]+284], a2=?, a3=?.
  The `bgezall` at 0xd850b74 calls __glXSendMakeCurrentRead [0xd850280] with a0=a0 at entry (arg0), a1=a3 at entry (arg3), a2=?, a3=sp-176, a4=a1 at entry (arg1), a5=a2 at entry (arg2).
  The `jalr` at 0xd850c08 calls __glXGetModes with a0=a0 at entry (arg0), a1=[a3+32], a2=?, a3=?.
  The `jalr` at 0xd850d1c calls __glXRemoveDrawableInterest with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd850d8c calls pthread_mutex_lock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0xd850ddc calls __glXPostError with a0=a0 at entry (arg0), a1=0xa, a2=0x5, a3=[a3+20].
  The `jalr` at 0xd850de8 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0xd850e28 calls (unknown callee) with a0=a0 at entry (arg0), a1=[a3+32], a2=a1 at entry (arg1), a3=a2 at entry (arg2), a4=a3 at entry (arg3).
  The `jalr` at 0xd850e68 calls __glXPostError with a0=a0 at entry (arg0), a1=0xb, a2=0x5, a3=[a3+20].
  The `bgezall` at 0xd850e84 calls __glXRestoreCurrent [0xd850780] with a0=a3 at entry (arg3), a1=[[0x1014]+284], a2=?, a3=?.
  The `jalr` at 0xd850eb4 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=[[0x1014]], a2=[a3+1296], a3=[a3+20].
  The `jalr` at 0xd850edc calls __glXAddDrawableInterest with a0=a2 at entry (arg2), a1=[ret(__glXAddDrawableInterest)+8], a2=[a3+32], a3=?.
  The `jalr` at 0xd850f34 calls __glXRemoveDrawableInterest with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd850f54 calls _glapi_set_dispatch with a0=0x0, a1=?, a2=?, a3=?, a5=0xd8809d0.
  The `bgezall` at 0xd850f8c calls __glXSendMakeCurrent [0xd8505c0] with a0=[[[0x1014]+284]+1304], a1=0x0, a2=[[[0x1014]+284]+56], a3=sp-176, a4=0x0, a6=0xd8809d0.
  The `jalr` at 0xd850fe4 calls __glXGetModes with a0=a0 at entry (arg0), a1=[a3+32], a2=?, a3=?.
  The `jalr` at 0xd85102c calls glXQueryDrawable with a0=a0 at entry (arg0), a1=?, a2=0x8025, a3=?.
  The `jalr` at 0xd851074 calls __glXPostError with a0=a0 at entry (arg0), a1=0xb, a2=0x5, a3=[a3+20].
  The `bgezall` at 0xd851090 calls __glXRestoreCurrent [0xd850780] with a0=a3 at entry (arg3), a1=[[0x1014]+284], a2=?, a3=?.
  The `jalr` at 0xd85118c calls glXQueryServerString with a0=a0 at entry (arg0), a1=[a3+32], a2=0x2, a3=[[[0x1014]+284]+1308].
  The `jalr` at 0xd85119c calls strstr with a0=ret(glXQueryServerString), a1=0xd882a40, a2=?, a3=?.
  The `jalr` at 0xd8511c0 calls _glapi_set_dispatch with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd8511e0 calls __glXPostError with a0=a0 at entry (arg0), a1=[[[0x1014]+284]+1368]+1, a2=0x5, a3=[[[0x1014]+284]+20].
  The `jalr` at 0xd851234 calls __glXFreeContext with a0=[[0x1014]+284], a1=0x1, a2=?, a3=?.
  The `jalr` at 0xd851250 calls glXQueryDrawable with a0=a0 at entry (arg0), a1=?, a2=0x8025, a3=?, a6=0x6.
  The `jalr` at 0xd851278 calls __glXPostError with a0=a0 at entry (arg0), a1=0xb, a2=0x5, a3=[a3+20].
  The `bgezall` at 0xd851294 calls __glXRestoreCurrent [0xd850780] with a0=a3 at entry (arg3), a1=[[0x1014]+284], a2=?, a3=0x0.
  The `jalr` at 0xd8512a8 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=[a3+20].
  The `jalr` at 0xd8512ec calls __glXPostError with a0=a0 at entry (arg0), a1=0xb, a2=0x5, a3=[a3+20].
  The `bgezall` at 0xd851308 calls __glXRestoreCurrent [0xd850780] with a0=a3 at entry (arg3), a1=[[0x1014]+284], a2=0x0, a3=0x0.
  The `bgezall` at 0xd851378 calls __glXRestoreCurrent [0xd850780] with a0=a3 at entry (arg3), a1=[[0x1014]+284], a2=?, a3=0x0.
  The `jalr` at 0xd8513a0 calls __glXNewIndirectAPI with a0=[0xd882b88], a1=?, a2=[a3+1292], a3=?.
  The `beq` branch at 0xd850990 targets 0xd8510c4, is taken when v0(=ret(__glXSetupForCommand)) == 0, and falls through when v0(=ret(__glXSetupForCommand)) != 0.
  The `bne` branch at 0xd850998 targets 0xd850d88, is taken when s0(=a3) != 0, and falls through when s0(=a3) == 0.
  The `beq` branch at 0xd8509b0 targets 0xd850f28, is taken when v1(=[[[0x1014]+284]+1292]) == 0, and falls through when v1(=[[[0x1014]+284]+1292]) != 0.
  The `bne` branch at 0xd8509b8 targets 0xd8509d8, is taken when s0(=a3) != s1(=[[0x1014]+284]), and falls through when s0(=a3) == s1(=[[0x1014]+284]).
  The `bne` branch at 0xd8509c4 targets 0xd8509d8, is taken when t8(=[[[0x1014]+284]+1312]) != s2(=a1), and falls through when t8(=[[[0x1014]+284]+1312]) == s2(=a1).
  The `beq` branch at 0xd8509d0 targets 0xd851140, is taken when t9(=[[[0x1014]+284]+1308]) == s5(=a2), and falls through when t9(=[[[0x1014]+284]+1308]) != s5(=a2).
  The `beq` branch at 0xd8509dc targets 0xd850a2c, is taken when ra(=[[[0x1014]+284]+1404]) == 0, and falls through when ra(=[[[0x1014]+284]+1404]) != 0.
  The `beq` branch at 0xd8509e4 targets 0xd850a08, is taken when s0(=a3) == 0, and falls through when s0(=a3) != 0.
  The `beq` branch at 0xd8509f0 targets 0xd850a0c, is taken when at(=[a3+1292]) == 0, and falls through when at(=[a3+1292]) != 0.
  The `bne` branch at 0xd8509f8 targets 0xd850a10, is taken when a2(=[[[0x1014]+284]+1312]) != s2(=a1), and falls through when a2(=[[[0x1014]+284]+1312]) == s2(=a1).
  The `beq` branch at 0xd850a00 targets 0xd850a10 and is always taken.
  The `beq` branch at 0xd850a24 targets 0xd8511d0, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `beq` branch at 0xd850a3c targets 0xd850ab8, is taken when s0(=a3) == 0, and falls through when s0(=a3) != 0.
  The `beq` branch at 0xd850a48 targets 0xd850ac0, is taken when a0(=[a3+1292]) == 0, and falls through when a0(=[a3+1292]) != 0.
  The `beq` branch at 0xd850a50 targets 0xd850ac0, is taken when s2(=a1) == 0, and falls through when s2(=a1) != 0.
  The `beq` branch at 0xd850a58 targets 0xd850ac0, is taken when s5(=a2) == 0, and falls through when s5(=a2) != 0.
  The `beq` branch at 0xd850a6c targets 0xd8512d8, is taken when v0(=ret(__glXAddDrawableInterest)) == 0, and falls through when v0(=ret(__glXAddDrawableInterest)) != 0.
  The `bne` branch at 0xd850a7c targets 0xd850ec4, is taken when a1(=[ret(__glXAddDrawableInterest)+8]) != a2(=[a3+32]), and falls through when a1(=[ret(__glXAddDrawableInterest)+8]) == a2(=[a3+32]).
  The `bne` branch at 0xd850a8c targets 0xd850ec4, is taken when a3(=[ret(__glXAddDrawableInterest)+12]) != a4(=[a3+44]), and falls through when a3(=[ret(__glXAddDrawableInterest)+12]) == a4(=[a3+44]).
  The `beq` branch at 0xd850a9c targets 0xd850ec4, is taken when a5(=[ret(__glXAddDrawableInterest)+44]) == a6(=0x3), and falls through when a5(=[ret(__glXAddDrawableInterest)+44]) != a6(=0x3).
  The `beq` branch at 0xd850aa4 targets 0xd85120c, is taken when s2(=a1) == s5(=a2), and falls through when s2(=a1) != s5(=a2).
  The `beq` branch at 0xd850ab0 targets 0xd850ed4 and is always taken.
  The `beq` branch at 0xd850ab8 targets 0xd851108, is taken when s2(=a1) == 0, and falls through when s2(=a1) != 0.
  The `beq` branch at 0xd850ac4 targets 0xd850fa4, is taken when a7(=[[[0x1014]+284]+1292]) == 0, and falls through when a7(=[[[0x1014]+284]+1292]) != 0.
  The `beq` branch at 0xd850adc targets 0xd850f64, is taken when a1(=[[[0x1014]+284]+1292]) == 0, and falls through when a1(=[[[0x1014]+284]+1292]) != 0.
  The `beq` branch at 0xd850aec targets 0xd850b00, is taken when s0(=a3) == 0, and falls through when s0(=a3) != 0.
  The `bne` branch at 0xd850af8 targets 0xd850b4c, is taken when ra(=[a3+29]:1) != 0, and falls through when ra(=[a3+29]:1) == 0.
  The `bne` branch at 0xd850b00 targets 0xd850b4c, is taken when s2(=a1) != s5(=a2), and falls through when s2(=a1) == s5(=a2).
  The `bne` branch at 0xd850b18 targets 0xd850b84, is taken when v0(=ret(__glXSendMakeCurrent)) != 0, and falls through when v0(=ret(__glXSendMakeCurrent)) == 0.
  The `beq` branch at 0xd850b44 targets 0xd850d60 and is always taken.
  The `beq` branch at 0xd850b7c targets 0xd850b20, is taken when v0(=ret(__glXSendMakeCurrentRead)) == 0, and falls through when v0(=ret(__glXSendMakeCurrentRead)) != 0.
  The `beq` branch at 0xd850b84 targets 0xd850b98, is taken when s0(=a3) == 0, and falls through when s0(=a3) != 0.
  The `beq` branch at 0xd850b90 targets 0xd851100, is taken when ra(=[a3+1292]) == 0, and falls through when ra(=[a3+1292]) != 0.
  The `beq` branch at 0xd850b98 targets 0xd850bb0, is taken when s0(=a3) == s1(=[[0x1014]+284]), and falls through when s0(=a3) != s1(=[[0x1014]+284]).
  The `beq` branch at 0xd850ba4 targets 0xd850bb0, is taken when s1(=[[0x1014]+284]) == at(=0xd8809d0), and falls through when s1(=[[0x1014]+284]) != at(=0xd8809d0).
  The `beq` branch at 0xd850bb0 targets 0xd850c88, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `bne` branch at 0xd850bbc targets 0xd850c50, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `beq` branch at 0xd850bcc targets 0xd850bf0, is taken when s0(=a3) == 0, and falls through when s0(=a3) != 0.
  The `beq` branch at 0xd850bd8 targets 0xd850bf0, is taken when a1(=[a3+29]:1) == 0, and falls through when a1(=[a3+29]:1) != 0.
  The `beq` branch at 0xd850be8 targets 0xd850c00 and is always taken.
  The `beq` branch at 0xd850c1c targets 0xd850c40, is taken when a3(=[a3+1372]) >= 0x2 (signed), and falls through when a3(=[a3+1372]) < 0x2 (signed).
  The `bne` branch at 0xd850c38 targets 0xd850c50, is taken when a4(=[a3+1376]) < 0x3 (signed), and falls through when a4(=[a3+1376]) >= 0x3 (signed).
  The `beq` branch at 0xd850c48 targets 0xd851244, is taken when a5(?) == a6(=0x6), and falls through when a5(?) != a6(=0x6).
  The `beq` branch at 0xd850c54 targets 0xd850fc4, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0xd850c5c targets 0xd850c88, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0xd850c64 targets 0xd850c88, is taken when s6(?) == s3(?), and falls through when s6(?) != s3(?).
  The `beq` branch at 0xd850c74 targets 0xd851040, is taken when t0(?) == v0(=0x4), and falls through when t0(?) != v0(=0x4).
  The `beq` branch at 0xd850c80 targets 0xd851040, is taken when t1(?) == v0(=0x4), and falls through when t1(?) != v0(=0x4).
  The `beq` branch at 0xd850c88 targets 0xd850f44, is taken when s0(=a3) == 0, and falls through when s0(=a3) != 0.
  The `beq` branch at 0xd850cb4 targets 0xd851180, is taken when t2(=[a3+1292]) == 0, and falls through when t2(=[a3+1292]) != 0.
  The `bne` branch at 0xd850cc8 targets 0xd850e14, is taken when t3(=[a3+1404]) != 0, and falls through when t3(=[a3+1404]) == 0.
  The `beq` branch at 0xd850cd0 targets 0xd850d0c, is taken when s0(=a3) == s1(=[[0x1014]+284]), and falls through when s0(=a3) != s1(=[[0x1014]+284]).
  The `beq` branch at 0xd850cdc targets 0xd850d0c, is taken when s1(=[[0x1014]+284]) == t8(=0xd8809d0), and falls through when s1(=[[0x1014]+284]) != t8(=0xd8809d0).
  The `beq` branch at 0xd850ce8 targets 0xd851230, is taken when t9(=[[[0x1014]+284]+20]) == 0, and falls through when t9(=[[[0x1014]+284]+20]) != 0.
  The `beq` branch at 0xd850d0c targets 0xd850d30, is taken when s7(?) == 0, and falls through when s7(?) != 0.
  The `bne` branch at 0xd850d28 targets 0xd850f30, is taken when s7(?) != ra(?), and falls through when s7(?) == ra(?).
  The `beq` branch at 0xd850d98 targets 0xd8512a8, is taken when a3(=[a3+20]) == 0, and falls through when a3(=[a3+20]) != 0.
  The `beq` branch at 0xd850da8 targets 0xd850ea0, is taken when a2(=[a3+1296]) == 0, and falls through when a2(=[a3+1296]) != 0.
  The `bne` branch at 0xd850db0 targets 0xd850dcc, is taken when a2(=[a3+1296]) != a1(=[[0x1014]]), and falls through when a2(=[a3+1296]) == a1(=[[0x1014]]).
  The `beq` branch at 0xd850dc0 targets 0xd850ea4, is taken when at(=[[0x1014]+4]) == v1(=[a3+1300]), and falls through when at(=[[0x1014]+4]) != v1(=[a3+1300]).
  The `bne` branch at 0xd850e30 targets 0xd850cd0, is taken when v0(=ret(?)) != 0, and falls through when v0(=ret(?)) == 0.
  The `beq` branch at 0xd850e98 targets 0xd850d60 and is always taken.
  The `beq` branch at 0xd850ebc targets 0xd8509a0 and is always taken.
  The `beq` branch at 0xd850ec4 targets 0xd8510ac, is taken when s2(=a1) == s5(=a2), and falls through when s2(=a1) != s5(=a2).
  The `beq` branch at 0xd850ee4 targets 0xd851260, is taken when v0(=ret(__glXAddDrawableInterest)) == 0, and falls through when v0(=ret(__glXAddDrawableInterest)) != 0.
  The `bne` branch at 0xd850ef4 targets 0xd8510ec, is taken when a0(=[ret(__glXAddDrawableInterest)+8]) != a1(=[a3+32]), and falls through when a0(=[ret(__glXAddDrawableInterest)+8]) == a1(=[a3+32]).
  The `beq` branch at 0xd850f00 targets 0xd8510ec, is taken when a2(=[ret(__glXAddDrawableInterest)+16]) == 0, and falls through when a2(=[ret(__glXAddDrawableInterest)+16]) != 0.
  The `beq` branch at 0xd850f0c targets 0xd8512c0, is taken when a3(=[[[0x1014]+284]+1292]) == 0, and falls through when a3(=[[[0x1014]+284]+1292]) != 0.
  The `bne` branch at 0xd850f18 targets 0xd850adc, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0xd850f20 targets 0xd850c5c and is always taken.
  The `beq` branch at 0xd850f28 targets 0xd850a3c and is always taken.
  The `beq` branch at 0xd850f3c targets 0xd850d34 and is always taken.
  The `beq` branch at 0xd850f5c targets 0xd850cd0 and is always taken.
  The `beq` branch at 0xd850f68 targets 0xd851130, is taken when s1(=[[0x1014]+284]) == a6(=0xd8809d0), and falls through when s1(=[[0x1014]+284]) != a6(=0xd8809d0).
  The `beq` branch at 0xd850f74 targets 0xd850ae8, is taken when a0(=[[[0x1014]+284]+1304]) == s4(=a0), and falls through when a0(=[[[0x1014]+284]+1304]) != s4(=a0).
  The `beq` branch at 0xd850f94 targets 0xd851360, is taken when v0(=ret(__glXSendMakeCurrent)) == 0, and falls through when v0(=ret(__glXSendMakeCurrent)) != 0.
  The `beq` branch at 0xd850f9c targets 0xd850ae8 and is always taken.
  The `beq` branch at 0xd850fb0 targets 0xd851168, is taken when s1(=[[0x1014]+284]) == ra(=0xd8809d0), and falls through when s1(=[[0x1014]+284]) != ra(=0xd8809d0).
  The `beq` branch at 0xd850fbc targets 0xd850adc and is always taken.
  The `beq` branch at 0xd850ff8 targets 0xd851010, is taken when v1(=[a3+1372]) >= 0x2 (signed), and falls through when v1(=[a3+1372]) < 0x2 (signed).
  The `bne` branch at 0xd851008 targets 0xd850c5c, is taken when a0(=[a3+1376]) < 0x3 (signed), and falls through when a0(=[a3+1376]) >= 0x3 (signed).
  The `bne` branch at 0xd851018 targets 0xd850c5c, is taken when a1(?) != a2(=0x6), and falls through when a1(?) == a2(=0x6).
  The `beq` branch at 0xd851034 targets 0xd850c5c and is always taken.
  The `bne` branch at 0xd85104c targets 0xd850c88, is taken when a3(?) < a4(?) (signed), and falls through when a3(?) >= a4(?) (signed).
  The `bne` branch at 0xd851060 targets 0xd850c88, is taken when a5(?) < a6(?) (signed), and falls through when a5(?) >= a6(?) (signed).
  The `beq` branch at 0xd8510a4 targets 0xd850d60 and is always taken.
  The `beq` branch at 0xd8510bc targets 0xd850adc and is always taken.
  The `beq` branch at 0xd8510f4 targets 0xd850adc and is always taken.
  The `beq` branch at 0xd851100 targets 0xd850b98 and is always taken.
  The `bne` branch at 0xd851108 targets 0xd850ac0, is taken when s5(=a2) != 0, and falls through when s5(=a2) == 0.
  The `beq` branch at 0xd851114 targets 0xd851340, is taken when a0(=[[[0x1014]+284]+1292]) == 0, and falls through when a0(=[[[0x1014]+284]+1292]) != 0.
  The `beq` branch at 0xd851128 targets 0xd850c88 and is always taken.
  The `beq` branch at 0xd851130 targets 0xd850ae8 and is always taken.
  The `beq` branch at 0xd85116c targets 0xd850adc and is always taken.
  The `bne` branch at 0xd8511ac targets 0xd850cd0, is taken when a2(=[a3+1292]) != 0, and falls through when a2(=[a3+1292]) == 0.
  The `beq` branch at 0xd8511b8 targets 0xd85139c, is taken when a0(=[0xd882b88]) == 0, and falls through when a0(=[0xd882b88]) != 0.
  The `beq` branch at 0xd8511c8 targets 0xd850cd0 and is always taken.
  The `beq` branch at 0xd8511e8 targets 0xd851204, is taken when s0(=a3) == 0, and falls through when s0(=a3) != 0.
  The `beq` branch at 0xd8511f0 targets 0xd851204, is taken when s0(=a3) == s1(=[[0x1014]+284]), and falls through when s0(=a3) != s1(=[[0x1014]+284]).
  The `beq` branch at 0xd851204 targets 0xd850d60 and is always taken.
  The `beq` branch at 0xd851218 targets 0xd85131c, is taken when a2(=[[[0x1014]+284]+1292]) == 0, and falls through when a2(=[[[0x1014]+284]+1292]) != 0.
  The `bne` branch at 0xd851220 targets 0xd850c64, is taken when v0(=ret(__glXAddDrawableInterest)) != 0, and falls through when v0(=ret(__glXAddDrawableInterest)) == 0.
  The `beq` branch at 0xd851228 targets 0xd850c88 and is always taken.
  The `beq` branch at 0xd85123c targets 0xd850d0c and is always taken.
  The `beq` branch at 0xd851258 targets 0xd850c54 and is always taken.
  The `beq` branch at 0xd8512a0 targets 0xd850d60 and is always taken.
  The `beq` branch at 0xd8512b0 targets 0xd850d60 and is always taken.
  The `bne` branch at 0xd8512c8 targets 0xd850adc, is taken when s1(=[[0x1014]+284]) != ra(=0xd8809d0), and falls through when s1(=[[0x1014]+284]) == ra(=0xd8809d0).
  The `beq` branch at 0xd8512d0 targets 0xd850f18 and is always taken.
  The `beq` branch at 0xd851314 targets 0xd850d60 and is always taken.
  The `bne` branch at 0xd851324 targets 0xd850adc, is taken when s1(=[[0x1014]+284]) != ra(=0xd8809d0), and falls through when s1(=[[0x1014]+284]) == ra(=0xd8809d0).
  The `beq` branch at 0xd85132c targets 0xd850c5c and is always taken.
  The `beq` branch at 0xd85134c targets 0xd851390, is taken when s1(=[[0x1014]+284]) == at(=0xd8809d0), and falls through when s1(=[[0x1014]+284]) != at(=0xd8809d0).
  The `beq` branch at 0xd851358 targets 0xd850adc and is always taken.
  The `beq` branch at 0xd851388 targets 0xd850d60 and is always taken.
  The `beq` branch at 0xd851394 targets 0xd850c88 and is always taken.
  The `beq` branch at 0xd8513ac targets 0xd8511bc and is always taken.
  The return at 0xd850d58 has v0 = 0x1.
  The return at 0xd850d80 has v0 = 0x0.
  The return at 0xd850e0c has v0 = 0x0.
  The return at 0xd8510e4 has v0 = 0x0.
  The return at 0xd851160 has v0 = 0x1.
  The instructions from 0xd85103c to 0xd85103c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd8510fc to 0xd8510fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd851138 to 0xd85113c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd851174 to 0xd85117c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd8512b8 to 0xd8512bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd851334 to 0xd85133c are not reached by any path from the entry, and their branches are not listed.

- `__glXFindDRIScreen` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8513c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8513c0-0xd8514a0 (224 bytes).
  It occupies 224 bytes.
  The `lw` at 0xd851418 loads 4 bytes from ret(__glXFindDisplay) +0x8.
  The `lw` at 0xd851428 loads 4 bytes from [ret(__glXFindDisplay)+8] +0x0.
  The `lw` at 0xd851450 loads 4 bytes from ret(XFindOnExtensionList) +0xc.
  The `lw` at 0xd851460 loads 4 bytes from [ret(XFindOnExtensionList)+12] +0x20.
  The `jalr` at 0xd8513e8 calls __glXFindDisplay with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8513f8 calls pthread_mutex_lock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0xd85140c calls XEHeadOfExtensionList with a0=(a0 << 0x20), a1=?, a2=?, a3=?.
  The `jalr` at 0xd851424 calls XFindOnExtensionList with a0=ret(XEHeadOfExtensionList), a1=[[ret(__glXFindDisplay)+8]], a2=?, a3=?.
  The `jalr` at 0xd851438 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd851440 targets 0xd851484, is taken when s0(=ret(XFindOnExtensionList)) == 0, and falls through when s0(=ret(XFindOnExtensionList)) != 0.
  The return at 0xd85147c has v0 = ?.
  The return at 0xd851498 has v0 = 0x0.

- `__glXDispatchExec` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd852280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd852280-0xd852310 (144 bytes).
  It occupies 144 bytes.
  The `lw` at 0xd852280 loads 4 bytes from abs 0x1014.
  The `lw` at 0xd85229c loads 4 bytes from [0x1014] +0x11c.
  The `lw` at 0xd8522a0 loads 4 bytes from [[0x1014]+284] +0x50c.
  The `lw` at 0xd8522b0 loads 4 bytes from [[0x1014]+284] +0x518.
  The `lw` at 0xd8522b4 loads 4 bytes from [[0x1014]+284] +0x57c.
  The `lw` at 0xd8522e0 loads 4 bytes from [[0x1014]+284] +0x588.
  The `jalr` at 0xd8522e8 calls (unknown callee) with a0=[[0x1014]+284], a1=[[[0x1014]+284]+1404], a2=a2 at entry (arg2), a3=[0x1014], a4=[[[0x1014]+284]+1304], a5=sym(__glx_noop_dispatch).
  The `beq` branch at 0xd852294 targets 0xd852300, is taken when a3(=[0x1014]) == 0, and falls through when a3(=[0x1014]) != 0.
  The `beq` branch at 0xd8522ac targets 0xd8522c0, is taken when v1(=[[[0x1014]+284]+1292]) == 0, and falls through when v1(=[[[0x1014]+284]+1292]) != 0.
  The `bne` branch at 0xd8522b8 targets 0xd8522e0, is taken when a1(=[[[0x1014]+284]+1404]) != 0, and falls through when a1(=[[[0x1014]+284]+1404]) == 0.
  The `beq` branch at 0xd8522c0 targets 0xd8522d0, is taken when a4(=[[[0x1014]+284]+1304]) == 0, and falls through when a4(=[[[0x1014]+284]+1304]) != 0.
  The return at 0xd8522c8 has v0 = sym(__glx_indirect_dispatch).
  The return at 0xd8522d8 has v0 = sym(__glx_noop_dispatch).
  The return at 0xd8522f8 has v0 = ret(?).
  The return at 0xd852308 has v0 = sym(__glx_noop_dispatch).

- `__glXBeginDispatchOverride` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd852340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd852340-0xd8524e0 (416 bytes).
  It occupies 416 bytes.
  The `lw` at 0xd852340 loads 4 bytes from abs 0x1048.
  The `lw` at 0xd852364 loads 4 bytes from abs 0x1014.
  The `sw` at 0xd852370 stores 4 bytes to abs 0x1048.
  The `lw` at 0xd852384 loads 4 bytes from [0x1014] +0x11c.
  The `lw` at 0xd852388 loads 4 bytes from [[0x1014]+284] +0x50c.
  The `lw` at 0xd852394 loads 4 bytes from [[0x1014]+284] +0x57c.
  9 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd8523d0, `lw` at 0xd85242c, `lw` at 0xd85243c.
  9 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd8523dc, `sw` at 0xd852430, `sw` at 0xd852440.
  The `lw` at 0xd8524cc loads 4 bytes from [[0x1014]+284] +0x58c.
  The `jalr` at 0xd8524d0 calls (unknown callee) with a0=[[0x1014]+284], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0xd85235c targets 0xd8524bc, is taken when v0(=[0x1048]) != 0, and falls through when v0(=[0x1048]) == 0.
  The `beq` branch at 0xd85237c targets 0xd85239c, is taken when at(=[0x1014]) == 0, and falls through when at(=[0x1014]) != 0.
  The `beq` branch at 0xd85238c targets 0xd8523a0, is taken when v0(=[[[0x1014]+284]+1292]) == 0, and falls through when v0(=[[[0x1014]+284]+1292]) != 0.
  The `bne` branch at 0xd852398 targets 0xd8524cc, is taken when v1(=[[[0x1014]+284]+1404]) != 0, and falls through when v1(=[[[0x1014]+284]+1404]) == 0.
  The `bne` branch at 0xd8523d8 targets 0xd8523c0, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bgtz` branch at 0xd8524a8 targets 0xd852424, is taken when ra(?) > 0 (signed), and falls through when ra(?) <= 0 (signed).
  The `beq` branch at 0xd8524d8 targets 0xd8523a0 and is always taken.
  The return at 0xd8524c4 has v0 = one of [0x1048], 0x104c.

- `__glXEndDispatchOverride` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd852500 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd852500-0xd8526a8 (424 bytes).
  It occupies 424 bytes.
  The `lw` at 0xd852500 loads 4 bytes from abs 0x1048.
  The `lw` at 0xd85251c loads 4 bytes from abs 0x1014.
  The `sw` at 0xd852528 stores 4 bytes to abs 0x1048.
  The `lw` at 0xd852534 loads 4 bytes from [0x1014] +0x11c.
  The `lw` at 0xd852538 loads 4 bytes from [[0x1014]+284] +0x50c.
  The `lw` at 0xd852544 loads 4 bytes from [[0x1014]+284] +0x57c.
  9 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd852590, `lw` at 0xd8525f4, `lw` at 0xd852604.
  9 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd85259c, `sw` at 0xd8525f8, `sw` at 0xd852608.
  The `lw` at 0xd852694 loads 4 bytes from [[0x1014]+284] +0x590.
  The `jalr` at 0xd852550 calls __glXDispatchExec with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd852698 calls (unknown callee) with a0=[[0x1014]+284], a1=[[[0x1014]+284]+1404], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0xd852514 targets 0xd852688, is taken when v1(=[0x1048]) == 0, and falls through when v1(=[0x1048]) != 0.
  The `beq` branch at 0xd85252c targets 0xd85254c, is taken when at(=[0x1014]) == 0, and falls through when at(=[0x1014]) != 0.
  The `beq` branch at 0xd85253c targets 0xd852550, is taken when v1(=[[[0x1014]+284]+1292]) == 0, and falls through when v1(=[[[0x1014]+284]+1292]) != 0.
  The `bne` branch at 0xd852548 targets 0xd852694, is taken when a1(=[[[0x1014]+284]+1404]) != 0, and falls through when a1(=[[[0x1014]+284]+1404]) == 0.
  The `bne` branch at 0xd852598 targets 0xd852580, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `bgtz` branch at 0xd852670 targets 0xd8525ec, is taken when ra(?) > 0 (signed), and falls through when ra(?) <= 0 (signed).
  The `beq` branch at 0xd8526a0 targets 0xd852550 and is always taken.
  The return at 0xd85268c has v0 = one of ?, 0x104c.

- `__glXInitializeVideoLibrary` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd852e40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd852e40-0xd852ed0 (144 bytes).
  It occupies 144 bytes.
  The `jalr` at 0xd852e7c calls dlopen with a0=0xd87cf90, a1=0x2, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd852e98 calls dlsym with a0=ret(dlopen), a1=0xd87cfa0, a2=?, a3=?.
  The `beq` branch at 0xd852e58 targets 0xd852e6c, is taken when at(=[0xd882b90]) == 0, and falls through when at(=[0xd882b90]) != 0.
  The `beq` branch at 0xd852e84 targets 0xd852ebc, is taken when v0(=ret(dlopen)) == 0, and falls through when v0(=ret(dlopen)) != 0.
  The `bne` branch at 0xd852ea4 targets 0xd852e5c, is taken when v0(=ret(dlsym)) != 0, and falls through when v0(=ret(dlsym)) == 0.
  The return at 0xd852e64 has v0 = 0x1.
  The return at 0xd852eb4 has v0 = 0x0.
  The return at 0xd852ec8 has v0 = 0x0.

- `__glXAddDrawableInterest` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8544c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8544c0-0xd854590 (208 bytes).
  It occupies 208 bytes.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd8544ec, `lw` at 0xd8544f8, `lw` at 0xd854574.
  The `sw` at 0xd854520 stores 4 bytes to ret(malloc) +0x28.
  The `sw` at 0xd854524 stores 4 bytes to ret(malloc) +0x2c.
  The `sw` at 0xd854528 stores 4 bytes to ret(malloc) +0x30.
  The `sw` at 0xd85452c stores 4 bytes to ret(malloc) +0x0.
  The `sw` at 0xd854530 stores 4 bytes to ret(malloc) +0x4.
  The `sw` at 0xd854538 stores 4 bytes to ret(malloc) +0x8.
  The `sw` at 0xd85453c stores 4 bytes to ret(malloc) +0x10.
  The `sw` at 0xd854540 stores 4 bytes to ret(malloc) +0xc.
  The `sw` at 0xd854544 stores 4 bytes to ret(malloc) +0x14.
  The `sw` at 0xd854548 stores 4 bytes to ret(malloc) +0x18.
  The `sw` at 0xd85454c stores 4 bytes to ret(malloc) +0x1c.
  The `sb` at 0xd854550 stores 1 byte to ret(malloc) +0x20.
  The `sw` at 0xd854554 stores 4 bytes to ret(malloc) +0x24.
  The `sw` at 0xd85458c stores 4 bytes to ?.
  The `jalr` at 0xd854504 calls malloc with a0=0x34, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?.
  The `beq` branch at 0xd8544e4 targets 0xd854500, is taken when at(=[0xd882b98]) == 0, and falls through when at(=[0xd882b98]) != 0.
  The `beq` branch at 0xd8544f0 targets 0xd854570, is taken when a0(?) == s0(=a0), and falls through when a0(?) != s0(=a0).
  The `bne` branch at 0xd8544fc targets 0xd8544ec, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0xd854518 targets 0xd85455c, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The return at 0xd854568 has v0 = ret(malloc).
  The return at 0xd854588 has v0 = ?.

- `__glXFreeDrawablePrivate` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8545c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8545c0-0xd854664 (164 bytes).
  It occupies 164 bytes.
  The `lw` at 0xd8545c4 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0xd8545dc loads 4 bytes from a0 (arg0 at entry) +0x14.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd8545fc, `lw` at 0xd854614, `lw` at 0xd854630.
  The `sw` at 0xd854634 stores 4 bytes to ?.
  The `jalr` at 0xd85463c calls free with a0=?, a1=?, a2=?, a3=?.
  The `bne` branch at 0xd8545d4 targets 0xd854648, is taken when v0(=[a0]) != 0, and falls through when v0(=[a0]) == 0.
  The `bne` branch at 0xd8545e0 targets 0xd854648, is taken when v0(=[a0+20]) != 0, and falls through when v0(=[a0+20]) == 0.
  The `beq` branch at 0xd8545ec targets 0xd854654, is taken when v1(=[0xd882b98]) == 0, and falls through when v1(=[0xd882b98]) != 0.
  The `beq` branch at 0xd8545f4 targets 0xd854624, is taken when a0 == a2(?), and falls through when a0 != a2(?).
  The `beq` branch at 0xd854604 targets 0xd854624, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0xd85460c targets 0xd854624, is taken when a0 == a4(?), and falls through when a0 != a4(?).
  The `bne` branch at 0xd85461c targets 0xd8545f4, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0xd854624 targets 0xd854654, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0xd85465c targets 0xd854638 and is always taken.
  The return at 0xd85464c has v0 = one of [a0], [a0+20], ret(free).

- `__glXGetDrawableAttributes` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd854e40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd854e40-0xd85523c (1020 bytes).
  It occupies 1020 bytes.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd854e84, `lw` at 0xd854f50, `lw` at 0xd855028.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x0, including `lw` at 0xd854e98, `lw` at 0xd854fa0.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd854ea4, `lw` at 0xd854edc, `lw` at 0xd854fac.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0xd854ea8, `lw` at 0xd854fb0.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x64, including `sw` at 0xd854ec4, `sw` at 0xd854fcc.
  2 such `sh` accesses store 2 bytes to [a0+108] +0x2, including `sh` at 0xd854ecc, `sh` at 0xd854fd4.
  4 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd854ed4, `sb` at 0xd854f1c, `sb` at 0xd854fdc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x60, including `lw` at 0xd854ed8, `lw` at 0xd854fe0.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x60, including `sw` at 0xd854ee4, `sw` at 0xd854fec.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x6c, including `sw` at 0xd854eec, `sw` at 0xd854ff4.
  The `sw` at 0xd854ef8 stores 4 bytes to [a0+108] +0xc.
  2 such `sw` accesses store 4 bytes to [a0+108] +0x4, including `sw` at 0xd854f04, `sw` at 0xd855014.
  2 such `sb` accesses store 1 byte to [a0+108] +0x1, including `sb` at 0xd854f10, `sb` at 0xd855008.
  5 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd854f5c, `lw` at 0xd855034, `lw` at 0xd855090.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd854f68, `lw` at 0xd855040, `lw` at 0xd85509c.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x18, including `sw` at 0xd8550e4, `sw` at 0xd85516c.
  The `sw` at 0xd8550e8 stores 4 bytes to a2 (arg2 at entry) +0x14.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x10, including `sw` at 0xd8550ec, `sw` at 0xd855120.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0xc, including `sw` at 0xd8550f0, `sw` at 0xd855174.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x8, including `sw` at 0xd8550f4, `sw` at 0xd85517c.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x4, including `sw` at 0xd855104, `sw` at 0xd855164.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x0, including `sw` at 0xd85510c, `sw` at 0xd855194.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd85512c, `lw` at 0xd855148.
  The `lw` at 0xd855154 loads 4 bytes from table(0xd87cfd8) +0x0.
  The `sb` at 0xd855184 stores 1 byte to a2 (arg2 at entry) +0x15.
  The `sb` at 0xd85518c stores 1 byte to a2 (arg2 at entry) +0x14.
  The `jalr` at 0xd854e74 calls __glXSetupForCommand with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd854e9c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+1232], a3=?.
  The `jalr` at 0xd854f18 calls _XReply with a0=a0 at entry (arg0), a1=sp-144, a2=0x0, a3=0x0, a5=0x11, a6=[a0+108], a7=0x1000a.
  The `jalr` at 0xd854f40 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd854f60 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+1232], a3=?.
  The `jalr` at 0xd854f74 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd854fa4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+1232], a3=?.
  The `jalr` at 0xd855010 calls _XReply with a0=a0 at entry (arg0), a1=sp-112, a2=0x0, a3=0x0, a4=a1 at entry (arg1), a5=0x1d, a6=[a0+108].
  The `jalr` at 0xd855038 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+1232], a3=?.
  The `jalr` at 0xd85504c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd855074 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+108]+16, a2=?, a3=?, a6=[a0+108].
  The `jalr` at 0xd855094 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+1232], a3=?.
  The `jalr` at 0xd8550a8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8550d8 calls _XRead with a0=a0 at entry (arg0), a1=ret(malloc), a2=?, a3=?.
  The `jalr` at 0xd8551a8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+1232], a3=?, a6=-0x800c.
  The `jalr` at 0xd8551bc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8551c8 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd8551f8 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+108]+8, a6=[a0+108].
  The `jalr` at 0xd855218 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+1232], a3=?.
  The `jalr` at 0xd85522c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd854e7c targets 0xd8551ec, is taken when v0(=ret(__glXSetupForCommand)) == 0, and falls through when v0(=ret(__glXSetupForCommand)) != 0.
  The `beq` branch at 0xd854e88 targets 0xd854f98, is taken when v1(=a3) == 0, and falls through when v1(=a3) != 0.
  The `beq` branch at 0xd854e90 targets 0xd854ea4, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The `bne` branch at 0xd854eb4 targets 0xd855070, is taken when a0(=[a0+112]) < a1(=[a0+108]+16) (unsigned), and falls through when a0(=[a0+112]) >= a1(=[a0+108]+16) (unsigned).
  The `beq` branch at 0xd854f20 targets 0xd855084, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd854f28 targets 0xd855028, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bne` branch at 0xd854f48 targets 0xd8550cc, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0xd854f54 targets 0xd854f68, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The `beq` branch at 0xd854f6c targets 0xd854f80, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd854f98 targets 0xd854fac, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The `bne` branch at 0xd854fbc targets 0xd8551f4, is taken when a2(=[a0+112]) < a3(=[a0+108]+8) (unsigned), and falls through when a2(=[a0+112]) >= a3(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd855018 targets 0xd855208, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `bne` branch at 0xd855020 targets 0xd854f30, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `beq` branch at 0xd85502c targets 0xd855040, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The `beq` branch at 0xd855044 targets 0xd855058, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd85507c targets 0xd854eb8 and is always taken.
  The `beq` branch at 0xd855088 targets 0xd85509c, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The `beq` branch at 0xd8550a0 targets 0xd8550b4, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `blez` branch at 0xd855110 targets 0xd855198, is taken when a7(?) <= 0 (signed), and falls through when a7(?) > 0 (signed).
  The `beq` branch at 0xd855118 targets 0xd85512c and is always taken.
  The `beq` branch at 0xd855124 targets 0xd855198, is taken when a3(?) == t1(?), and falls through when a3(?) != t1(?).
  The `beq` branch at 0xd85514c targets 0xd855124, is taken when t2(=table(-0x800c)) >= 0x1a (unsigned), and falls through when t2(=table(-0x800c)) < 0x1a (unsigned).
  The `beq` branch at 0xd855160 targets 0xd855124 and is always taken.
  The `beq` branch at 0xd855168 targets 0xd855124 and is always taken.
  The `beq` branch at 0xd855170 targets 0xd855124 and is always taken.
  The `beq` branch at 0xd855178 targets 0xd855124 and is always taken.
  The `beq` branch at 0xd855180 targets 0xd855124 and is always taken.
  The `beq` branch at 0xd855188 targets 0xd855124 and is always taken.
  The `beq` branch at 0xd855190 targets 0xd855124 and is always taken.
  The `beq` branch at 0xd85519c targets 0xd8551b0, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The `beq` branch at 0xd8551b4 targets 0xd8551c4, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8551ec targets 0xd854f80 and is always taken.
  The `beq` branch at 0xd855200 targets 0xd854fc0 and is always taken.
  The `beq` branch at 0xd85520c targets 0xd855220, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The `beq` branch at 0xd855224 targets 0xd855234, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd855234 targets 0xd854f80 and is always taken.
  The return at 0xd854f90 has v0 = 0x0.
  The return at 0xd855068 has v0 = 0x0.
  The return at 0xd8550c4 has v0 = 0x0.
  The return at 0xd8551e4 has v0 = 0x1.
  The indirect jump at 0xd855158 uses the jump table at 0xd87cfd8 with targets 0xd855190, 0xd855124, 0xd855124, 0xd855124, 0xd855124, 0xd855124, 0xd855124, 0xd855160, 0xd855124, 0xd855124, 0xd855124, 0xd855124, 0xd855124, 0xd855124, 0xd855124, 0xd855188, 0xd855180, 0xd855178, 0xd855170, 0xd855120, 0xd855124, 0xd855124, 0xd855124, 0xd855124, 0xd855124, 0xd855168.

- `NoOp` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd855f80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd855f80-0xd855f88 (8 bytes).
  It occupies 8 bytes.
  The return at 0xd855f80 has v0 = 0x0.

- `__glXNewIndirectAPI` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd855fc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd855fc0-0xd8572bc (4860 bytes).
  It occupies 4860 bytes.
  The `lw` at 0xd855fcc loads 4 bytes from abs 0xd88223c.
  The `lw` at 0xd855fd0 loads 4 bytes from abs 0xd88122c.
  The `lw` at 0xd855fd8 loads 4 bytes from abs 0xd882958.
  The `lw` at 0xd855fe0 loads 4 bytes from abs 0xd88210c.
  The `sw` at 0xd855fe8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x0.
  17 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd85600c, `sw` at 0xd856010, `sw` at 0xd856018.
  The `lw` at 0xd856040 loads 4 bytes from abs 0xd8825bc.
  The `lw` at 0xd856044 loads 4 bytes from abs 0xd8820e4.
  The `lw` at 0xd856048 loads 4 bytes from abs 0xd8820e8.
  The `lw` at 0xd85604c loads 4 bytes from abs 0xd88283c.
  The `lw` at 0xd85606c loads 4 bytes from abs 0xd88216c.
  The `lw` at 0xd856070 loads 4 bytes from abs 0xd882170.
  The `sw` at 0xd856074 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2c.
  The `lw` at 0xd856078 loads 4 bytes from abs 0xd882348.
  The `sw` at 0xd85607c stores 4 bytes to sym(__glx_indirect_dispatch) +0x28.
  The `lw` at 0xd856080 loads 4 bytes from abs 0xd882344.
  The `sw` at 0xd856084 stores 4 bytes to sym(__glx_indirect_dispatch) +0x24.
  The `lw` at 0xd856088 loads 4 bytes from abs 0xd882340.
  The `sw` at 0xd85608c stores 4 bytes to sym(__glx_indirect_dispatch) +0x20.
  The `lw` at 0xd856090 loads 4 bytes from abs 0xd88233c.
  The `sw` at 0xd856094 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1c.
  The `lw` at 0xd856098 loads 4 bytes from abs 0xd882338.
  The `sw` at 0xd85609c stores 4 bytes to sym(__glx_indirect_dispatch) +0x18.
  The `lw` at 0xd8560a0 loads 4 bytes from abs 0xd882334.
  The `sw` at 0xd8560a4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x48.
  The `lw` at 0xd8560a8 loads 4 bytes from abs 0xd882364.
  The `sw` at 0xd8560ac stores 4 bytes to sym(__glx_indirect_dispatch) +0x4c.
  The `lw` at 0xd8560b0 loads 4 bytes from abs 0xd882368.
  The `sw` at 0xd8560b4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x50.
  The `lw` at 0xd8560b8 loads 4 bytes from abs 0xd88236c.
  The `sw` at 0xd8560bc stores 4 bytes to sym(__glx_indirect_dispatch) +0x54.
  The `lw` at 0xd8560c0 loads 4 bytes from abs 0xd882370.
  The `sw` at 0xd8560c4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x58.
  The `lw` at 0xd8560c8 loads 4 bytes from abs 0xd882374.
  The `sw` at 0xd8560cc stores 4 bytes to sym(__glx_indirect_dispatch) +0x5c.
  The `lw` at 0xd8560d0 loads 4 bytes from abs 0xd882378.
  The `sw` at 0xd8560d4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8c.
  The `lw` at 0xd8560d8 loads 4 bytes from abs 0xd88239c.
  The `sw` at 0xd8560dc stores 4 bytes to sym(__glx_indirect_dispatch) +0x88.
  The `lw` at 0xd8560e0 loads 4 bytes from abs 0xd882844.
  The `sw` at 0xd8560e4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x84.
  The `lw` at 0xd8560e8 loads 4 bytes from abs 0xd882840.
  The `sw` at 0xd8560ec stores 4 bytes to sym(__glx_indirect_dispatch) +0x80.
  The `lw` at 0xd8560f0 loads 4 bytes from abs 0xd882398.
  The `sw` at 0xd8560f4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7c.
  The `lw` at 0xd8560f8 loads 4 bytes from abs 0xd882394.
  The `sw` at 0xd8560fc stores 4 bytes to sym(__glx_indirect_dispatch) +0x78.
  The `lw` at 0xd856100 loads 4 bytes from abs 0xd882390.
  The `sw` at 0xd856104 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa8.
  The `lw` at 0xd856108 loads 4 bytes from abs 0xd8823b8.
  The `sw` at 0xd85610c stores 4 bytes to sym(__glx_indirect_dispatch) +0xac.
  The `lw` at 0xd856110 loads 4 bytes from abs 0xd8823bc.
  The `sw` at 0xd856114 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb0.
  The `lw` at 0xd856118 loads 4 bytes from abs 0xd8823c0.
  The `sw` at 0xd85611c stores 4 bytes to sym(__glx_indirect_dispatch) +0xb4.
  The `lw` at 0xd856120 loads 4 bytes from abs 0xd88288c.
  The `sw` at 0xd856124 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb8.
  The `lw` at 0xd856128 loads 4 bytes from abs 0xd882890.
  The `sw` at 0xd85612c stores 4 bytes to sym(__glx_indirect_dispatch) +0xbc.
  The `lw` at 0xd856130 loads 4 bytes from abs 0xd882894.
  The `sw` at 0xd856134 stores 4 bytes to sym(__glx_indirect_dispatch) +0xec.
  The `lw` at 0xd856138 loads 4 bytes from abs 0xd8823f0.
  The `sw` at 0xd85613c stores 4 bytes to sym(__glx_indirect_dispatch) +0xe8.
  The `lw` at 0xd856140 loads 4 bytes from abs 0xd8823ec.
  The `sw` at 0xd856144 stores 4 bytes to sym(__glx_indirect_dispatch) +0xe4.
  The `lw` at 0xd856148 loads 4 bytes from abs 0xd8823e8.
  The `sw` at 0xd85614c stores 4 bytes to sym(__glx_indirect_dispatch) +0xe0.
  The `lw` at 0xd856150 loads 4 bytes from abs 0xd8823e4.
  The `sw` at 0xd856154 stores 4 bytes to sym(__glx_indirect_dispatch) +0xdc.
  The `lw` at 0xd856158 loads 4 bytes from abs 0xd8823e0.
  The `sw` at 0xd85615c stores 4 bytes to sym(__glx_indirect_dispatch) +0xd8.
  The `lw` at 0xd856160 loads 4 bytes from abs 0xd8823dc.
  The `sw` at 0xd856164 stores 4 bytes to sym(__glx_indirect_dispatch) +0x108.
  The `lw` at 0xd856168 loads 4 bytes from abs 0xd882830.
  The `sw` at 0xd85616c stores 4 bytes to sym(__glx_indirect_dispatch) +0x10c.
  The `lw` at 0xd856170 loads 4 bytes from abs 0xd882898.
  The `sw` at 0xd856174 stores 4 bytes to sym(__glx_indirect_dispatch) +0x110.
  The `lw` at 0xd856178 loads 4 bytes from abs 0xd882888.
  The `sw` at 0xd85617c stores 4 bytes to sym(__glx_indirect_dispatch) +0x114.
  The `lw` at 0xd856180 loads 4 bytes from abs 0xd882408.
  The `sw` at 0xd856184 stores 4 bytes to sym(__glx_indirect_dispatch) +0x118.
  The `lw` at 0xd856188 loads 4 bytes from abs 0xd88240c.
  The `sw` at 0xd85618c stores 4 bytes to sym(__glx_indirect_dispatch) +0x11c.
  The `lw` at 0xd856190 loads 4 bytes from abs 0xd882814.
  The `sw` at 0xd856194 stores 4 bytes to sym(__glx_indirect_dispatch) +0x14c.
  The `lw` at 0xd856198 loads 4 bytes from abs 0xd882430.
  The `sw` at 0xd85619c stores 4 bytes to sym(__glx_indirect_dispatch) +0x148.
  The `lw` at 0xd8561a0 loads 4 bytes from abs 0xd88242c.
  The `sw` at 0xd8561a4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x144.
  The `lw` at 0xd8561a8 loads 4 bytes from abs 0xd882428.
  The `sw` at 0xd8561ac stores 4 bytes to sym(__glx_indirect_dispatch) +0x140.
  The `lw` at 0xd8561b0 loads 4 bytes from abs 0xd882424.
  The `sw` at 0xd8561b4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x13c.
  The `lw` at 0xd8561b8 loads 4 bytes from abs 0xd882420.
  The `sw` at 0xd8561bc stores 4 bytes to sym(__glx_indirect_dispatch) +0x138.
  The `lw` at 0xd8561c0 loads 4 bytes from abs 0xd88241c.
  The `sw` at 0xd8561c4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x168.
  The `lw` at 0xd8561c8 loads 4 bytes from abs 0xd88244c.
  The `sw` at 0xd8561cc stores 4 bytes to sym(__glx_indirect_dispatch) +0x16c.
  The `lw` at 0xd8561d0 loads 4 bytes from abs 0xd882450.
  The `sw` at 0xd8561d4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x170.
  The `lw` at 0xd8561d8 loads 4 bytes from abs 0xd882454.
  The `sw` at 0xd8561dc stores 4 bytes to sym(__glx_indirect_dispatch) +0x174.
  The `lw` at 0xd8561e0 loads 4 bytes from abs 0xd882458.
  The `sw` at 0xd8561e4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x178.
  The `lw` at 0xd8561e8 loads 4 bytes from abs 0xd88245c.
  The `sw` at 0xd8561ec stores 4 bytes to sym(__glx_indirect_dispatch) +0x17c.
  The `lw` at 0xd8561f0 loads 4 bytes from abs 0xd882460.
  The `sw` at 0xd8561f4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1ac.
  The `lw` at 0xd8561f8 loads 4 bytes from abs 0xd8828a8.
  The `sw` at 0xd8561fc stores 4 bytes to sym(__glx_indirect_dispatch) +0x1a8.
  The `lw` at 0xd856200 loads 4 bytes from abs 0xd882478.
  The `sw` at 0xd856204 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1a4.
  The `lw` at 0xd856208 loads 4 bytes from abs 0xd882474.
  The `sw` at 0xd85620c stores 4 bytes to sym(__glx_indirect_dispatch) +0x1a0.
  The `lw` at 0xd856210 loads 4 bytes from abs 0xd88282c.
  The `sw` at 0xd856214 stores 4 bytes to sym(__glx_indirect_dispatch) +0x19c.
  The `lw` at 0xd856218 loads 4 bytes from abs 0xd882828.
  The `sw` at 0xd85621c stores 4 bytes to sym(__glx_indirect_dispatch) +0x198.
  The `lw` at 0xd856220 loads 4 bytes from abs 0xd882824.
  The `sw` at 0xd856224 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1c8.
  The `lw` at 0xd856228 loads 4 bytes from abs 0xd882884.
  The `sw` at 0xd85622c stores 4 bytes to sym(__glx_indirect_dispatch) +0x1cc.
  The `lw` at 0xd856230 loads 4 bytes from abs 0xd8825c0.
  The `sw` at 0xd856234 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1d0.
  The `lw` at 0xd856238 loads 4 bytes from abs 0xd8825c4.
  The `sw` at 0xd85623c stores 4 bytes to sym(__glx_indirect_dispatch) +0x1d4.
  The `lw` at 0xd856240 loads 4 bytes from abs 0xd8825c8.
  The `sw` at 0xd856244 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1d8.
  The `lw` at 0xd856248 loads 4 bytes from abs 0xd8825cc.
  The `sw` at 0xd85624c stores 4 bytes to sym(__glx_indirect_dispatch) +0x1dc.
  The `lw` at 0xd856250 loads 4 bytes from abs 0xd8825d0.
  The `sw` at 0xd856254 stores 4 bytes to sym(__glx_indirect_dispatch) +0x20c.
  The `lw` at 0xd856258 loads 4 bytes from abs 0xd8825f8.
  The `sw` at 0xd85625c stores 4 bytes to sym(__glx_indirect_dispatch) +0x208.
  The `lw` at 0xd856260 loads 4 bytes from abs 0xd8825f4.
  The `sw` at 0xd856264 stores 4 bytes to sym(__glx_indirect_dispatch) +0x204.
  The `lw` at 0xd856268 loads 4 bytes from abs 0xd8825f0.
  The `sw` at 0xd85626c stores 4 bytes to sym(__glx_indirect_dispatch) +0x200.
  The `lw` at 0xd856270 loads 4 bytes from abs 0xd8825ec.
  The `sw` at 0xd856274 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1fc.
  The `lw` at 0xd856278 loads 4 bytes from abs 0xd8825e8.
  The `sw` at 0xd85627c stores 4 bytes to sym(__glx_indirect_dispatch) +0x1f8.
  The `lw` at 0xd856280 loads 4 bytes from abs 0xd88289c.
  The `sw` at 0xd856284 stores 4 bytes to sym(__glx_indirect_dispatch) +0x228.
  The `sw` at 0xd856288 stores 4 bytes to sym(__glx_indirect_dispatch) +0x22c.
  The `lw` at 0xd85628c loads 4 bytes from abs 0xd88247c.
  The `sw` at 0xd856290 stores 4 bytes to sym(__glx_indirect_dispatch) +0x230.
  The `lw` at 0xd856294 loads 4 bytes from abs 0xd882480.
  The `sw` at 0xd856298 stores 4 bytes to sym(__glx_indirect_dispatch) +0x234.
  The `lw` at 0xd85629c loads 4 bytes from abs 0xd882484.
  The `sw` at 0xd8562a0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x238.
  The `lw` at 0xd8562a4 loads 4 bytes from abs 0xd882488.
  The `sw` at 0xd8562a8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x23c.
  The `lw` at 0xd8562ac loads 4 bytes from abs 0xd88248c.
  The `lw` at 0xd8562b0 loads 4 bytes from abs 0xd88260c.
  The `lw` at 0xd8562b4 loads 4 bytes from abs 0xd8825b0.
  The `lw` at 0xd8562b8 loads 4 bytes from abs 0xd8825b4.
  The `lw` at 0xd8562bc loads 4 bytes from abs 0xd8820e0.
  The `lw` at 0xd8562c0 loads 4 bytes from abs 0xd882810.
  The `lw` at 0xd8562c4 loads 4 bytes from abs 0xd8825b8.
  The `sw` at 0xd8562c8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x14.
  The `lw` at 0xd8562cc loads 4 bytes from abs 0xd882330.
  The `sw` at 0xd8562d0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x10.
  The `lw` at 0xd8562d4 loads 4 bytes from abs 0xd88232c.
  The `sw` at 0xd8562d8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xc.
  The `lw` at 0xd8562dc loads 4 bytes from abs 0xd882328.
  The `sw` at 0xd8562e0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8.
  The `lw` at 0xd8562e4 loads 4 bytes from abs 0xd882324.
  The `sw` at 0xd8562e8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4.
  The `lw` at 0xd8562ec loads 4 bytes from abs 0xd882320.
  The `sw` at 0xd8562f0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x258.
  The `lw` at 0xd8562f4 loads 4 bytes from abs 0xd882174.
  The `sw` at 0xd8562f8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x30.
  The `lw` at 0xd8562fc loads 4 bytes from abs 0xd88234c.
  The `sw` at 0xd856300 stores 4 bytes to sym(__glx_indirect_dispatch) +0x34.
  The `lw` at 0xd856304 loads 4 bytes from abs 0xd882350.
  The `sw` at 0xd856308 stores 4 bytes to sym(__glx_indirect_dispatch) +0x38.
  The `lw` at 0xd85630c loads 4 bytes from abs 0xd882354.
  The `sw` at 0xd856310 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3c.
  The `lw` at 0xd856314 loads 4 bytes from abs 0xd882358.
  The `sw` at 0xd856318 stores 4 bytes to sym(__glx_indirect_dispatch) +0x40.
  The `lw` at 0xd85631c loads 4 bytes from abs 0xd88235c.
  The `sw` at 0xd856320 stores 4 bytes to sym(__glx_indirect_dispatch) +0x44.
  The `lw` at 0xd856324 loads 4 bytes from abs 0xd882360.
  The `sw` at 0xd856328 stores 4 bytes to sym(__glx_indirect_dispatch) +0x74.
  The `lw` at 0xd85632c loads 4 bytes from abs 0xd88238c.
  The `sw` at 0xd856330 stores 4 bytes to sym(__glx_indirect_dispatch) +0x70.
  The `lw` at 0xd856334 loads 4 bytes from abs 0xd882388.
  The `sw` at 0xd856338 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6c.
  The `lw` at 0xd85633c loads 4 bytes from abs 0xd882384.
  The `sw` at 0xd856340 stores 4 bytes to sym(__glx_indirect_dispatch) +0x68.
  The `lw` at 0xd856344 loads 4 bytes from abs 0xd882838.
  The `sw` at 0xd856348 stores 4 bytes to sym(__glx_indirect_dispatch) +0x64.
  The `lw` at 0xd85634c loads 4 bytes from abs 0xd882380.
  The `sw` at 0xd856350 stores 4 bytes to sym(__glx_indirect_dispatch) +0x60.
  The `lw` at 0xd856354 loads 4 bytes from abs 0xd88237c.
  The `sw` at 0xd856358 stores 4 bytes to sym(__glx_indirect_dispatch) +0x90.
  The `lw` at 0xd85635c loads 4 bytes from abs 0xd8823a0.
  The `sw` at 0xd856360 stores 4 bytes to sym(__glx_indirect_dispatch) +0x94.
  The `lw` at 0xd856364 loads 4 bytes from abs 0xd8823a4.
  The `sw` at 0xd856368 stores 4 bytes to sym(__glx_indirect_dispatch) +0x98.
  The `lw` at 0xd85636c loads 4 bytes from abs 0xd8823a8.
  The `sw` at 0xd856370 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9c.
  The `lw` at 0xd856374 loads 4 bytes from abs 0xd8823ac.
  The `sw` at 0xd856378 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa0.
  The `lw` at 0xd85637c loads 4 bytes from abs 0xd8823b0.
  The `sw` at 0xd856380 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa4.
  The `lw` at 0xd856384 loads 4 bytes from abs 0xd8823b4.
  The `sw` at 0xd856388 stores 4 bytes to sym(__glx_indirect_dispatch) +0xd4.
  The `lw` at 0xd85638c loads 4 bytes from abs 0xd8823d8.
  The `sw` at 0xd856390 stores 4 bytes to sym(__glx_indirect_dispatch) +0xd0.
  The `lw` at 0xd856394 loads 4 bytes from abs 0xd8823d4.
  The `sw` at 0xd856398 stores 4 bytes to sym(__glx_indirect_dispatch) +0xcc.
  The `lw` at 0xd85639c loads 4 bytes from abs 0xd8823d0.
  The `sw` at 0xd8563a0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xc8.
  The `lw` at 0xd8563a4 loads 4 bytes from abs 0xd8823cc.
  The `sw` at 0xd8563a8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xc4.
  The `lw` at 0xd8563ac loads 4 bytes from abs 0xd8823c8.
  The `sw` at 0xd8563b0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xc0.
  The `lw` at 0xd8563b4 loads 4 bytes from abs 0xd8823c4.
  The `sw` at 0xd8563b8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xf0.
  The `lw` at 0xd8563bc loads 4 bytes from abs 0xd8823f4.
  The `sw` at 0xd8563c0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xf4.
  The `lw` at 0xd8563c4 loads 4 bytes from abs 0xd8823f8.
  The `sw` at 0xd8563c8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xf8.
  The `lw` at 0xd8563cc loads 4 bytes from abs 0xd8823fc.
  The `sw` at 0xd8563d0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xfc.
  The `lw` at 0xd8563d4 loads 4 bytes from abs 0xd882400.
  The `sw` at 0xd8563d8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x100.
  The `lw` at 0xd8563dc loads 4 bytes from abs 0xd882404.
  The `sw` at 0xd8563e0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x104.
  The `lw` at 0xd8563e4 loads 4 bytes from abs 0xd882834.
  The `sw` at 0xd8563e8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x134.
  The `lw` at 0xd8563ec loads 4 bytes from abs 0xd882418.
  The `sw` at 0xd8563f0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x130.
  The `lw` at 0xd8563f4 loads 4 bytes from abs 0xd882414.
  The `sw` at 0xd8563f8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x12c.
  The `lw` at 0xd8563fc loads 4 bytes from abs 0xd882410.
  The `sw` at 0xd856400 stores 4 bytes to sym(__glx_indirect_dispatch) +0x128.
  The `lw` at 0xd856404 loads 4 bytes from abs 0xd882820.
  The `sw` at 0xd856408 stores 4 bytes to sym(__glx_indirect_dispatch) +0x124.
  The `lw` at 0xd85640c loads 4 bytes from abs 0xd88281c.
  The `sw` at 0xd856410 stores 4 bytes to sym(__glx_indirect_dispatch) +0x120.
  The `lw` at 0xd856414 loads 4 bytes from abs 0xd882818.
  The `sw` at 0xd856418 stores 4 bytes to sym(__glx_indirect_dispatch) +0x150.
  The `lw` at 0xd85641c loads 4 bytes from abs 0xd882434.
  The `sw` at 0xd856420 stores 4 bytes to sym(__glx_indirect_dispatch) +0x154.
  The `lw` at 0xd856424 loads 4 bytes from abs 0xd882438.
  The `sw` at 0xd856428 stores 4 bytes to sym(__glx_indirect_dispatch) +0x158.
  The `lw` at 0xd85642c loads 4 bytes from abs 0xd88243c.
  The `sw` at 0xd856430 stores 4 bytes to sym(__glx_indirect_dispatch) +0x15c.
  The `lw` at 0xd856434 loads 4 bytes from abs 0xd882440.
  The `sw` at 0xd856438 stores 4 bytes to sym(__glx_indirect_dispatch) +0x160.
  The `lw` at 0xd85643c loads 4 bytes from abs 0xd882444.
  The `sw` at 0xd856440 stores 4 bytes to sym(__glx_indirect_dispatch) +0x164.
  The `lw` at 0xd856444 loads 4 bytes from abs 0xd882448.
  The `sw` at 0xd856448 stores 4 bytes to sym(__glx_indirect_dispatch) +0x194.
  The `lw` at 0xd85644c loads 4 bytes from abs 0xd88280c.
  The `sw` at 0xd856450 stores 4 bytes to sym(__glx_indirect_dispatch) +0x190.
  The `lw` at 0xd856454 loads 4 bytes from abs 0xd882808.
  The `sw` at 0xd856458 stores 4 bytes to sym(__glx_indirect_dispatch) +0x18c.
  The `lw` at 0xd85645c loads 4 bytes from abs 0xd882470.
  The `sw` at 0xd856460 stores 4 bytes to sym(__glx_indirect_dispatch) +0x188.
  The `lw` at 0xd856464 loads 4 bytes from abs 0xd88246c.
  The `sw` at 0xd856468 stores 4 bytes to sym(__glx_indirect_dispatch) +0x184.
  The `lw` at 0xd85646c loads 4 bytes from abs 0xd882468.
  The `sw` at 0xd856470 stores 4 bytes to sym(__glx_indirect_dispatch) +0x180.
  The `lw` at 0xd856474 loads 4 bytes from abs 0xd882464.
  The `sw` at 0xd856478 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1b0.
  The `lw` at 0xd85647c loads 4 bytes from abs 0xd882848.
  The `sw` at 0xd856480 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1b4.
  The `lw` at 0xd856484 loads 4 bytes from abs 0xd882878.
  The `sw` at 0xd856488 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1b8.
  The `lw` at 0xd85648c loads 4 bytes from abs 0xd882874.
  The `sw` at 0xd856490 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1bc.
  The `lw` at 0xd856494 loads 4 bytes from abs 0xd88287c.
  The `sw` at 0xd856498 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1c0.
  The `lw` at 0xd85649c loads 4 bytes from abs 0xd882870.
  The `sw` at 0xd8564a0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1c4.
  The `lw` at 0xd8564a4 loads 4 bytes from abs 0xd882880.
  The `sw` at 0xd8564a8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1f4.
  The `lw` at 0xd8564ac loads 4 bytes from abs 0xd8828b0.
  The `sw` at 0xd8564b0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1f0.
  The `lw` at 0xd8564b4 loads 4 bytes from abs 0xd8825e4.
  The `sw` at 0xd8564b8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1ec.
  The `lw` at 0xd8564bc loads 4 bytes from abs 0xd8825e0.
  The `sw` at 0xd8564c0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1e8.
  The `lw` at 0xd8564c4 loads 4 bytes from abs 0xd8825dc.
  The `sw` at 0xd8564c8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1e4.
  The `lw` at 0xd8564cc loads 4 bytes from abs 0xd8825d8.
  The `sw` at 0xd8564d0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x1e0.
  The `lw` at 0xd8564d4 loads 4 bytes from abs 0xd8825d4.
  The `sw` at 0xd8564d8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x210.
  The `lw` at 0xd8564dc loads 4 bytes from abs 0xd8828ac.
  The `sw` at 0xd8564e0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x214.
  The `lw` at 0xd8564e4 loads 4 bytes from abs 0xd8825fc.
  The `sw` at 0xd8564e8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x218.
  The `lw` at 0xd8564ec loads 4 bytes from abs 0xd882600.
  The `sw` at 0xd8564f0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x21c.
  The `lw` at 0xd8564f4 loads 4 bytes from abs 0xd882604.
  The `sw` at 0xd8564f8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x220.
  The `lw` at 0xd8564fc loads 4 bytes from abs 0xd882608.
  The `sw` at 0xd856500 stores 4 bytes to sym(__glx_indirect_dispatch) +0x224.
  The `lw` at 0xd856504 loads 4 bytes from abs 0xd8828a0.
  The `sw` at 0xd856508 stores 4 bytes to sym(__glx_indirect_dispatch) +0x254.
  The `lw` at 0xd85650c loads 4 bytes from abs 0xd8824a4.
  The `sw` at 0xd856510 stores 4 bytes to sym(__glx_indirect_dispatch) +0x250.
  The `lw` at 0xd856514 loads 4 bytes from abs 0xd8824a0.
  The `sw` at 0xd856518 stores 4 bytes to sym(__glx_indirect_dispatch) +0x24c.
  The `lw` at 0xd85651c loads 4 bytes from abs 0xd88249c.
  The `sw` at 0xd856520 stores 4 bytes to sym(__glx_indirect_dispatch) +0x248.
  The `lw` at 0xd856524 loads 4 bytes from abs 0xd882498.
  The `sw` at 0xd856528 stores 4 bytes to sym(__glx_indirect_dispatch) +0x244.
  The `lw` at 0xd85652c loads 4 bytes from abs 0xd882494.
  The `sw` at 0xd856530 stores 4 bytes to sym(__glx_indirect_dispatch) +0x240.
  The `lw` at 0xd856534 loads 4 bytes from abs 0xd882490.
  The `sw` at 0xd856538 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2ac.
  The `sw` at 0xd85653c stores 4 bytes to sym(__glx_indirect_dispatch) +0x2d8.
  The `sw` at 0xd856540 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2dc.
  The `sw` at 0xd856544 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2e0.
  The `sw` at 0xd856548 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2e4.
  The `sw` at 0xd85654c stores 4 bytes to sym(__glx_indirect_dispatch) +0x2ec.
  The `sw` at 0xd856550 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2f0.
  The `sw` at 0xd856554 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2f4.
  The `sw` at 0xd856558 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2f8.
  The `sw` at 0xd85655c stores 4 bytes to sym(__glx_indirect_dispatch) +0x2fc.
  The `sw` at 0xd856560 stores 4 bytes to sym(__glx_indirect_dispatch) +0x300.
  The `sw` at 0xd856564 stores 4 bytes to sym(__glx_indirect_dispatch) +0x320.
  The `sw` at 0xd856568 stores 4 bytes to sym(__glx_indirect_dispatch) +0x324.
  The `sw` at 0xd85656c stores 4 bytes to sym(__glx_indirect_dispatch) +0x328.
  The `sw` at 0xd856570 stores 4 bytes to sym(__glx_indirect_dispatch) +0x330.
  The `sw` at 0xd856574 stores 4 bytes to sym(__glx_indirect_dispatch) +0x334.
  The `sw` at 0xd856578 stores 4 bytes to sym(__glx_indirect_dispatch) +0x338.
  The `sw` at 0xd85657c stores 4 bytes to sym(__glx_indirect_dispatch) +0x33c.
  The `sw` at 0xd856580 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3a0.
  The `sw` at 0xd856584 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3a4.
  The `sw` at 0xd856588 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3a8.
  The `sw` at 0xd85658c stores 4 bytes to sym(__glx_indirect_dispatch) +0x3ac.
  The `sw` at 0xd856590 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3b0.
  The `sw` at 0xd856594 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3b4.
  The `sw` at 0xd856598 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3b8.
  The `sw` at 0xd85659c stores 4 bytes to sym(__glx_indirect_dispatch) +0x3cc.
  The `sw` at 0xd8565a0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3d0.
  The `sw` at 0xd8565a4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3d4.
  The `sw` at 0xd8565a8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3d8.
  The `sw` at 0xd8565ac stores 4 bytes to sym(__glx_indirect_dispatch) +0x3dc.
  The `sw` at 0xd8565b0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3e0.
  The `sw` at 0xd8565b4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3e4.
  The `sw` at 0xd8565b8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3e8.
  The `sw` at 0xd8565bc stores 4 bytes to sym(__glx_indirect_dispatch) +0x3ec.
  The `sw` at 0xd8565c0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3f0.
  The `sw` at 0xd8565c4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3f4.
  The `sw` at 0xd8565c8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3f8.
  The `sw` at 0xd8565cc stores 4 bytes to sym(__glx_indirect_dispatch) +0x3fc.
  The `sw` at 0xd8565d0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x400.
  The `sw` at 0xd8565d4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x404.
  The `sw` at 0xd8565d8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x408.
  The `sw` at 0xd8565dc stores 4 bytes to sym(__glx_indirect_dispatch) +0x40c.
  The `sw` at 0xd8565e0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x410.
  The `sw` at 0xd8565e4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x414.
  The `sw` at 0xd8565e8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x418.
  The `sw` at 0xd8565ec stores 4 bytes to sym(__glx_indirect_dispatch) +0x41c.
  The `sw` at 0xd8565f0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x420.
  The `sw` at 0xd8565f4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x424.
  The `sw` at 0xd8565f8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x428.
  The `sw` at 0xd8565fc stores 4 bytes to sym(__glx_indirect_dispatch) +0x42c.
  The `sw` at 0xd856600 stores 4 bytes to sym(__glx_indirect_dispatch) +0x430.
  The `sw` at 0xd856604 stores 4 bytes to sym(__glx_indirect_dispatch) +0x434.
  The `sw` at 0xd856608 stores 4 bytes to sym(__glx_indirect_dispatch) +0x438.
  The `sw` at 0xd85660c stores 4 bytes to sym(__glx_indirect_dispatch) +0x43c.
  The `sw` at 0xd856610 stores 4 bytes to sym(__glx_indirect_dispatch) +0x440.
  The `sw` at 0xd856614 stores 4 bytes to sym(__glx_indirect_dispatch) +0x444.
  The `sw` at 0xd856618 stores 4 bytes to sym(__glx_indirect_dispatch) +0x448.
  The `sw` at 0xd85661c stores 4 bytes to sym(__glx_indirect_dispatch) +0x44c.
  The `sw` at 0xd856620 stores 4 bytes to sym(__glx_indirect_dispatch) +0x450.
  The `sw` at 0xd856624 stores 4 bytes to sym(__glx_indirect_dispatch) +0x454.
  The `sw` at 0xd856628 stores 4 bytes to sym(__glx_indirect_dispatch) +0x464.
  The `sw` at 0xd85662c stores 4 bytes to sym(__glx_indirect_dispatch) +0x468.
  The `sw` at 0xd856630 stores 4 bytes to sym(__glx_indirect_dispatch) +0x46c.
  The `sw` at 0xd856634 stores 4 bytes to sym(__glx_indirect_dispatch) +0x470.
  The `sw` at 0xd856638 stores 4 bytes to sym(__glx_indirect_dispatch) +0x474.
  The `sw` at 0xd85663c stores 4 bytes to sym(__glx_indirect_dispatch) +0x478.
  The `sw` at 0xd856640 stores 4 bytes to sym(__glx_indirect_dispatch) +0x47c.
  The `sw` at 0xd856644 stores 4 bytes to sym(__glx_indirect_dispatch) +0x480.
  The `sw` at 0xd856648 stores 4 bytes to sym(__glx_indirect_dispatch) +0x484.
  The `sw` at 0xd85664c stores 4 bytes to sym(__glx_indirect_dispatch) +0x488.
  The `sw` at 0xd856650 stores 4 bytes to sym(__glx_indirect_dispatch) +0x48c.
  The `sw` at 0xd856654 stores 4 bytes to sym(__glx_indirect_dispatch) +0x490.
  The `sw` at 0xd856658 stores 4 bytes to sym(__glx_indirect_dispatch) +0x494.
  The `sw` at 0xd85665c stores 4 bytes to sym(__glx_indirect_dispatch) +0x498.
  The `sw` at 0xd856660 stores 4 bytes to sym(__glx_indirect_dispatch) +0x49c.
  The `sw` at 0xd856664 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4a0.
  The `sw` at 0xd856668 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4a4.
  The `sw` at 0xd85666c stores 4 bytes to sym(__glx_indirect_dispatch) +0x4a8.
  The `sw` at 0xd856670 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4ac.
  The `sw` at 0xd856674 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4b0.
  The `sw` at 0xd856678 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4b4.
  The `sw` at 0xd85667c stores 4 bytes to sym(__glx_indirect_dispatch) +0x4b8.
  The `sw` at 0xd856680 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4bc.
  The `sw` at 0xd856684 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4c0.
  The `sw` at 0xd856688 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4c4.
  The `sw` at 0xd85668c stores 4 bytes to sym(__glx_indirect_dispatch) +0x4c8.
  The `sw` at 0xd856690 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4cc.
  The `sw` at 0xd856694 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4d0.
  The `sw` at 0xd856698 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4d4.
  The `sw` at 0xd85669c stores 4 bytes to sym(__glx_indirect_dispatch) +0x4d8.
  The `sw` at 0xd8566a0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4dc.
  The `sw` at 0xd8566a4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4e0.
  The `sw` at 0xd8566a8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x52c.
  The `sw` at 0xd8566ac stores 4 bytes to sym(__glx_indirect_dispatch) +0x530.
  The `sw` at 0xd8566b0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x53c.
  The `sw` at 0xd8566b4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x540.
  The `sw` at 0xd8566b8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x544.
  The `sw` at 0xd8566bc stores 4 bytes to sym(__glx_indirect_dispatch) +0x548.
  The `sw` at 0xd8566c0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x54c.
  The `sw` at 0xd8566c4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x550.
  The `sw` at 0xd8566c8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x554.
  The `sw` at 0xd8566cc stores 4 bytes to sym(__glx_indirect_dispatch) +0x558.
  The `sw` at 0xd8566d0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x55c.
  The `sw` at 0xd8566d4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x560.
  The `sw` at 0xd8566d8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x564.
  The `sw` at 0xd8566dc stores 4 bytes to sym(__glx_indirect_dispatch) +0x568.
  The `sw` at 0xd8566e0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x56c.
  The `sw` at 0xd8566e4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x570.
  The `sw` at 0xd8566e8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x574.
  The `sw` at 0xd8566ec stores 4 bytes to sym(__glx_indirect_dispatch) +0x578.
  The `sw` at 0xd8566f0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x57c.
  The `sw` at 0xd8566f4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x580.
  The `sw` at 0xd8566f8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x584.
  The `sw` at 0xd8566fc stores 4 bytes to sym(__glx_indirect_dispatch) +0x588.
  The `sw` at 0xd856700 stores 4 bytes to sym(__glx_indirect_dispatch) +0x58c.
  The `sw` at 0xd856704 stores 4 bytes to sym(__glx_indirect_dispatch) +0x590.
  The `sw` at 0xd856708 stores 4 bytes to sym(__glx_indirect_dispatch) +0x594.
  The `sw` at 0xd85670c stores 4 bytes to sym(__glx_indirect_dispatch) +0x598.
  The `sw` at 0xd856710 stores 4 bytes to sym(__glx_indirect_dispatch) +0x59c.
  The `sw` at 0xd856714 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5a0.
  The `sw` at 0xd856718 stores 4 bytes to sym(__glx_indirect_dispatch) +0x270.
  The `lw` at 0xd85671c loads 4 bytes from abs 0xd8824c0.
  The `sw` at 0xd856720 stores 4 bytes to sym(__glx_indirect_dispatch) +0x274.
  The `lw` at 0xd856724 loads 4 bytes from abs 0xd8824e8.
  The `sw` at 0xd856728 stores 4 bytes to sym(__glx_indirect_dispatch) +0x278.
  The `lw` at 0xd85672c loads 4 bytes from abs 0xd8824ec.
  The `sw` at 0xd856730 stores 4 bytes to sym(__glx_indirect_dispatch) +0x27c.
  The `lw` at 0xd856734 loads 4 bytes from abs 0xd88284c.
  The `sw` at 0xd856738 stores 4 bytes to sym(__glx_indirect_dispatch) +0x280.
  The `lw` at 0xd85673c loads 4 bytes from abs 0xd882850.
  The `sw` at 0xd856740 stores 4 bytes to sym(__glx_indirect_dispatch) +0x284.
  The `lw` at 0xd856744 loads 4 bytes from abs 0xd88285c.
  The `sw` at 0xd856748 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2b8.
  The `lw` at 0xd85674c loads 4 bytes from abs 0xd882524.
  The `sw` at 0xd856750 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2b4.
  The `lw` at 0xd856754 loads 4 bytes from abs 0xd882520.
  The `sw` at 0xd856758 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2b0.
  The `lw` at 0xd85675c loads 4 bytes from abs 0xd88251c.
  The `sw` at 0xd856760 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2a8.
  The `lw` at 0xd856764 loads 4 bytes from abs 0xd882518.
  The `sw` at 0xd856768 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2a4.
  The `lw` at 0xd85676c loads 4 bytes from abs 0xd882864.
  The `sw` at 0xd856770 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2a0.
  The `lw` at 0xd856774 loads 4 bytes from abs 0xd882514.
  The `sw` at 0xd856778 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2d4.
  The `lw` at 0xd85677c loads 4 bytes from abs 0xd882644.
  The `sw` at 0xd856780 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2e8.
  The `lw` at 0xd856784 loads 4 bytes from abs 0xd882648.
  The `sw` at 0xd856788 stores 4 bytes to sym(__glx_indirect_dispatch) +0x304.
  The `lw` at 0xd85678c loads 4 bytes from abs 0xd88264c.
  The `sw` at 0xd856790 stores 4 bytes to sym(__glx_indirect_dispatch) +0x308.
  The `lw` at 0xd856794 loads 4 bytes from abs 0xd8824dc.
  The `sw` at 0xd856798 stores 4 bytes to sym(__glx_indirect_dispatch) +0x30c.
  The `lw` at 0xd85679c loads 4 bytes from abs 0xd8824c8.
  The `sw` at 0xd8567a0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x310.
  The `lw` at 0xd8567a4 loads 4 bytes from abs 0xd8824cc.
  The `sw` at 0xd8567a8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x35c.
  The `lw` at 0xd8567ac loads 4 bytes from abs 0xd8828dc.
  The `sw` at 0xd8567b0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x358.
  The `lw` at 0xd8567b4 loads 4 bytes from abs 0xd8828d0.
  The `sw` at 0xd8567b8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x354.
  The `lw` at 0xd8567bc loads 4 bytes from abs 0xd8828e4.
  The `sw` at 0xd8567c0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x350.
  The `lw` at 0xd8567c4 loads 4 bytes from abs 0xd8828d8.
  The `sw` at 0xd8567c8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x34c.
  The `lw` at 0xd8567cc loads 4 bytes from abs 0xd88145c.
  The `sw` at 0xd8567d0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x348.
  The `lw` at 0xd8567d4 loads 4 bytes from abs 0xd8828e0.
  The `sw` at 0xd8567d8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x378.
  The `lw` at 0xd8567dc loads 4 bytes from abs 0xd8824f4.
  The `sw` at 0xd8567e0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x37c.
  The `lw` at 0xd8567e4 loads 4 bytes from abs 0xd8824f8.
  The `sw` at 0xd8567e8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x380.
  The `lw` at 0xd8567ec loads 4 bytes from abs 0xd882858.
  The `sw` at 0xd8567f0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x384.
  The `lw` at 0xd8567f4 loads 4 bytes from abs 0xd8824fc.
  The `sw` at 0xd8567f8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x388.
  The `lw` at 0xd8567fc loads 4 bytes from abs 0xd8828f4.
  The `sw` at 0xd856800 stores 4 bytes to sym(__glx_indirect_dispatch) +0x38c.
  The `lw` at 0xd856804 loads 4 bytes from abs 0xd8828ec.
  The `sw` at 0xd856808 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4e4.
  The `lw` at 0xd85680c loads 4 bytes from abs 0xd8828c0.
  The `sw` at 0xd856810 stores 4 bytes to sym(__glx_indirect_dispatch) +0x460.
  The `lw` at 0xd856814 loads 4 bytes from abs 0xd8828bc.
  The `sw` at 0xd856818 stores 4 bytes to sym(__glx_indirect_dispatch) +0x45c.
  The `lw` at 0xd85681c loads 4 bytes from abs 0xd88262c.
  The `sw` at 0xd856820 stores 4 bytes to sym(__glx_indirect_dispatch) +0x458.
  The `lw` at 0xd856824 loads 4 bytes from abs 0xd882628.
  The `sw` at 0xd856828 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3c8.
  The `lw` at 0xd85682c loads 4 bytes from abs 0xd8828b8.
  The `sw` at 0xd856830 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3c4.
  The `lw` at 0xd856834 loads 4 bytes from abs 0xd882624.
  The `sw` at 0xd856838 stores 4 bytes to sym(__glx_indirect_dispatch) +0x500.
  The `sw` at 0xd85683c stores 4 bytes to sym(__glx_indirect_dispatch) +0x504.
  The `lw` at 0xd856840 loads 4 bytes from abs 0xd8822c0.
  The `sw` at 0xd856844 stores 4 bytes to sym(__glx_indirect_dispatch) +0x508.
  The `lw` at 0xd856848 loads 4 bytes from abs 0xd8822c4.
  The `sw` at 0xd85684c stores 4 bytes to sym(__glx_indirect_dispatch) +0x50c.
  The `lw` at 0xd856850 loads 4 bytes from abs 0xd8822c8.
  The `sw` at 0xd856854 stores 4 bytes to sym(__glx_indirect_dispatch) +0x510.
  The `lw` at 0xd856858 loads 4 bytes from abs 0xd8822cc.
  The `sw` at 0xd85685c stores 4 bytes to sym(__glx_indirect_dispatch) +0x514.
  The `lw` at 0xd856860 loads 4 bytes from abs 0xd8822d0.
  The `sw` at 0xd856864 stores 4 bytes to sym(__glx_indirect_dispatch) +0x25c.
  The `lw` at 0xd856868 loads 4 bytes from abs 0xd8824ac.
  The `sw` at 0xd85686c stores 4 bytes to sym(__glx_indirect_dispatch) +0x260.
  The `lw` at 0xd856870 loads 4 bytes from abs 0xd8824b0.
  The `sw` at 0xd856874 stores 4 bytes to sym(__glx_indirect_dispatch) +0x264.
  The `lw` at 0xd856878 loads 4 bytes from abs 0xd8824b4.
  The `sw` at 0xd85687c stores 4 bytes to sym(__glx_indirect_dispatch) +0x268.
  The `lw` at 0xd856880 loads 4 bytes from abs 0xd8824b8.
  The `sw` at 0xd856884 stores 4 bytes to sym(__glx_indirect_dispatch) +0x26c.
  The `lw` at 0xd856888 loads 4 bytes from abs 0xd8824bc.
  The `sw` at 0xd85688c stores 4 bytes to sym(__glx_indirect_dispatch) +0x29c.
  The `lw` at 0xd856890 loads 4 bytes from abs 0xd882510.
  The `sw` at 0xd856894 stores 4 bytes to sym(__glx_indirect_dispatch) +0x298.
  The `lw` at 0xd856898 loads 4 bytes from abs 0xd88250c.
  The `sw` at 0xd85689c stores 4 bytes to sym(__glx_indirect_dispatch) +0x294.
  The `lw` at 0xd8568a0 loads 4 bytes from abs 0xd882508.
  The `sw` at 0xd8568a4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x290.
  The `lw` at 0xd8568a8 loads 4 bytes from abs 0xd882504.
  The `sw` at 0xd8568ac stores 4 bytes to sym(__glx_indirect_dispatch) +0x28c.
  The `lw` at 0xd8568b0 loads 4 bytes from abs 0xd882500.
  The `sw` at 0xd8568b4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2c0.
  The `lw` at 0xd8568b8 loads 4 bytes from abs 0xd88286c.
  The `sw` at 0xd8568bc stores 4 bytes to sym(__glx_indirect_dispatch) +0x2c4.
  The `lw` at 0xd8568c0 loads 4 bytes from abs 0xd8828e8.
  The `sw` at 0xd8568c4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2c8.
  The `lw` at 0xd8568c8 loads 4 bytes from abs 0xd8828a4.
  The `sw` at 0xd8568cc stores 4 bytes to sym(__glx_indirect_dispatch) +0x2cc.
  The `lw` at 0xd8568d0 loads 4 bytes from abs 0xd882640.
  The `sw` at 0xd8568d4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2d0.
  The `lw` at 0xd8568d8 loads 4 bytes from abs 0xd8824d8.
  The `sw` at 0xd8568dc stores 4 bytes to sym(__glx_indirect_dispatch) +0x344.
  The `lw` at 0xd8568e0 loads 4 bytes from abs 0xd8828f0.
  The `sw` at 0xd8568e4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x340.
  The `lw` at 0xd8568e8 loads 4 bytes from abs 0xd881460.
  The `sw` at 0xd8568ec stores 4 bytes to sym(__glx_indirect_dispatch) +0x32c.
  The `lw` at 0xd8568f0 loads 4 bytes from abs 0xd8828d4.
  The `sw` at 0xd8568f4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x31c.
  The `lw` at 0xd8568f8 loads 4 bytes from abs 0xd882528.
  The `sw` at 0xd8568fc stores 4 bytes to sym(__glx_indirect_dispatch) +0x318.
  The `lw` at 0xd856900 loads 4 bytes from abs 0xd8824d4.
  The `sw` at 0xd856904 stores 4 bytes to sym(__glx_indirect_dispatch) +0x364.
  The `lw` at 0xd856908 loads 4 bytes from abs 0xd8824c4.
  The `sw` at 0xd85690c stores 4 bytes to sym(__glx_indirect_dispatch) +0x368.
  The `lw` at 0xd856910 loads 4 bytes from abs 0xd881468.
  The `sw` at 0xd856914 stores 4 bytes to sym(__glx_indirect_dispatch) +0x36c.
  The `lw` at 0xd856918 loads 4 bytes from abs 0xd881464.
  The `sw` at 0xd85691c stores 4 bytes to sym(__glx_indirect_dispatch) +0x370.
  The `lw` at 0xd856920 loads 4 bytes from abs 0xd882854.
  The `sw` at 0xd856924 stores 4 bytes to sym(__glx_indirect_dispatch) +0x374.
  The `lw` at 0xd856928 loads 4 bytes from abs 0xd8824f0.
  The `sw` at 0xd85692c stores 4 bytes to sym(__glx_indirect_dispatch) +0x3c0.
  The `lw` at 0xd856930 loads 4 bytes from abs 0xd882620.
  The `sw` at 0xd856934 stores 4 bytes to sym(__glx_indirect_dispatch) +0x3bc.
  The `lw` at 0xd856938 loads 4 bytes from abs 0xd8828b4.
  The `sw` at 0xd85693c stores 4 bytes to sym(__glx_indirect_dispatch) +0x39c.
  The `lw` at 0xd856940 loads 4 bytes from abs 0xd88261c.
  The `sw` at 0xd856944 stores 4 bytes to sym(__glx_indirect_dispatch) +0x398.
  The `lw` at 0xd856948 loads 4 bytes from abs 0xd882618.
  The `sw` at 0xd85694c stores 4 bytes to sym(__glx_indirect_dispatch) +0x394.
  The `lw` at 0xd856950 loads 4 bytes from abs 0xd882614.
  The `sw` at 0xd856954 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4ec.
  The `lw` at 0xd856958 loads 4 bytes from abs 0xd882634.
  The `sw` at 0xd85695c stores 4 bytes to sym(__glx_indirect_dispatch) +0x4f0.
  The `lw` at 0xd856960 loads 4 bytes from abs 0xd8828c4.
  The `sw` at 0xd856964 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4f4.
  The `lw` at 0xd856968 loads 4 bytes from abs 0xd882638.
  The `sw` at 0xd85696c stores 4 bytes to sym(__glx_indirect_dispatch) +0x4f8.
  The `lw` at 0xd856970 loads 4 bytes from abs 0xd88263c.
  The `sw` at 0xd856974 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4fc.
  The `lw` at 0xd856978 loads 4 bytes from abs 0xd88252c.
  The `sw` at 0xd85697c stores 4 bytes to sym(__glx_indirect_dispatch) +0x534.
  The `lw` at 0xd856980 loads 4 bytes from abs 0xd8822e8.
  The `sw` at 0xd856984 stores 4 bytes to sym(__glx_indirect_dispatch) +0x528.
  The `lw` at 0xd856988 loads 4 bytes from abs 0xd8822e4.
  The `sw` at 0xd85698c stores 4 bytes to sym(__glx_indirect_dispatch) +0x524.
  The `lw` at 0xd856990 loads 4 bytes from abs 0xd8822e0.
  The `sw` at 0xd856994 stores 4 bytes to sym(__glx_indirect_dispatch) +0x520.
  The `lw` at 0xd856998 loads 4 bytes from abs 0xd8822dc.
  The `sw` at 0xd85699c stores 4 bytes to sym(__glx_indirect_dispatch) +0x51c.
  The `lw` at 0xd8569a0 loads 4 bytes from abs 0xd8822d8.
  The `lw` at 0xd8569a4 loads 4 bytes from abs 0xd8828f8.
  The `sw` at 0xd8569a8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x538.
  The `lw` at 0xd8569ac loads 4 bytes from abs 0xd8824a8.
  The `sw` at 0xd8569b0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x288.
  The `lw` at 0xd8569b4 loads 4 bytes from abs 0xd882860.
  The `sw` at 0xd8569b8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x2bc.
  The `lw` at 0xd8569bc loads 4 bytes from abs 0xd882868.
  The `sw` at 0xd8569c0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x314.
  The `lw` at 0xd8569c4 loads 4 bytes from abs 0xd8824d0.
  The `sw` at 0xd8569c8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x360.
  The `lw` at 0xd8569cc loads 4 bytes from abs 0xd8828cc.
  The `sw` at 0xd8569d0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x390.
  The `lw` at 0xd8569d4 loads 4 bytes from abs 0xd882610.
  The `sw` at 0xd8569d8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x4e8.
  The `lw` at 0xd8569dc loads 4 bytes from abs 0xd882630.
  The `sw` at 0xd8569e0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x518.
  The `sw` at 0xd8569e4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5a4.
  The `sw` at 0xd8569e8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5a8.
  The `sw` at 0xd8569ec stores 4 bytes to sym(__glx_indirect_dispatch) +0x5ac.
  The `sw` at 0xd8569f0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5b0.
  The `sw` at 0xd8569f4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5b4.
  The `sw` at 0xd8569f8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5b8.
  The `sw` at 0xd8569fc stores 4 bytes to sym(__glx_indirect_dispatch) +0x5bc.
  The `sw` at 0xd856a00 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5c0.
  The `sw` at 0xd856a04 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5c4.
  The `sw` at 0xd856a08 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5c8.
  The `sw` at 0xd856a0c stores 4 bytes to sym(__glx_indirect_dispatch) +0x5cc.
  The `sw` at 0xd856a10 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5d0.
  The `sw` at 0xd856a14 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5d4.
  The `sw` at 0xd856a18 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5d8.
  The `sw` at 0xd856a1c stores 4 bytes to sym(__glx_indirect_dispatch) +0x5dc.
  The `sw` at 0xd856a20 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5e0.
  The `sw` at 0xd856a24 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5e4.
  The `sw` at 0xd856a28 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5e8.
  The `sw` at 0xd856a2c stores 4 bytes to sym(__glx_indirect_dispatch) +0x5ec.
  The `sw` at 0xd856a30 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5f0.
  The `sw` at 0xd856a34 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5f4.
  The `sw` at 0xd856a38 stores 4 bytes to sym(__glx_indirect_dispatch) +0x5f8.
  The `sw` at 0xd856a3c stores 4 bytes to sym(__glx_indirect_dispatch) +0x5fc.
  The `sw` at 0xd856a40 stores 4 bytes to sym(__glx_indirect_dispatch) +0x600.
  The `sw` at 0xd856a44 stores 4 bytes to sym(__glx_indirect_dispatch) +0x604.
  The `sw` at 0xd856a48 stores 4 bytes to sym(__glx_indirect_dispatch) +0x608.
  The `sw` at 0xd856a4c stores 4 bytes to sym(__glx_indirect_dispatch) +0x60c.
  The `sw` at 0xd856a50 stores 4 bytes to sym(__glx_indirect_dispatch) +0x610.
  The `sw` at 0xd856a54 stores 4 bytes to sym(__glx_indirect_dispatch) +0x614.
  The `sw` at 0xd856a58 stores 4 bytes to sym(__glx_indirect_dispatch) +0x618.
  The `sw` at 0xd856a5c stores 4 bytes to sym(__glx_indirect_dispatch) +0x61c.
  The `sw` at 0xd856a60 stores 4 bytes to sym(__glx_indirect_dispatch) +0x620.
  The `sw` at 0xd856a64 stores 4 bytes to sym(__glx_indirect_dispatch) +0x624.
  The `sw` at 0xd856a68 stores 4 bytes to sym(__glx_indirect_dispatch) +0x628.
  The `sw` at 0xd856a6c stores 4 bytes to sym(__glx_indirect_dispatch) +0x62c.
  The `sw` at 0xd856a70 stores 4 bytes to sym(__glx_indirect_dispatch) +0x630.
  The `sw` at 0xd856a74 stores 4 bytes to sym(__glx_indirect_dispatch) +0x634.
  The `sw` at 0xd856a78 stores 4 bytes to sym(__glx_indirect_dispatch) +0x638.
  The `sw` at 0xd856a7c stores 4 bytes to sym(__glx_indirect_dispatch) +0x63c.
  The `sw` at 0xd856a80 stores 4 bytes to sym(__glx_indirect_dispatch) +0x640.
  The `sw` at 0xd856a84 stores 4 bytes to sym(__glx_indirect_dispatch) +0x644.
  The `sw` at 0xd856a88 stores 4 bytes to sym(__glx_indirect_dispatch) +0x648.
  The `sw` at 0xd856a8c stores 4 bytes to sym(__glx_indirect_dispatch) +0x64c.
  The `sw` at 0xd856a90 stores 4 bytes to sym(__glx_indirect_dispatch) +0x650.
  The `sw` at 0xd856a94 stores 4 bytes to sym(__glx_indirect_dispatch) +0x654.
  The `sw` at 0xd856a98 stores 4 bytes to sym(__glx_indirect_dispatch) +0x658.
  The `sw` at 0xd856a9c stores 4 bytes to sym(__glx_indirect_dispatch) +0x65c.
  The `sw` at 0xd856aa0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x660.
  The `sw` at 0xd856aa4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x664.
  The `sw` at 0xd856aa8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x668.
  The `sw` at 0xd856aac stores 4 bytes to sym(__glx_indirect_dispatch) +0x66c.
  The `sw` at 0xd856ab0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x670.
  The `sw` at 0xd856ab4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x674.
  The `sw` at 0xd856ab8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x678.
  The `sw` at 0xd856abc stores 4 bytes to sym(__glx_indirect_dispatch) +0x67c.
  The `sw` at 0xd856ac0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x680.
  The `sw` at 0xd856ac4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x684.
  The `sw` at 0xd856ac8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x688.
  The `sw` at 0xd856acc stores 4 bytes to sym(__glx_indirect_dispatch) +0x68c.
  The `sw` at 0xd856ad0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x690.
  The `sw` at 0xd856ad4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x694.
  The `sw` at 0xd856ad8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x698.
  The `sw` at 0xd856adc stores 4 bytes to sym(__glx_indirect_dispatch) +0x69c.
  The `sw` at 0xd856ae0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6a0.
  The `sw` at 0xd856ae4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6a4.
  The `sw` at 0xd856ae8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6a8.
  The `sw` at 0xd856aec stores 4 bytes to sym(__glx_indirect_dispatch) +0x6ac.
  The `sw` at 0xd856af0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6b0.
  The `sw` at 0xd856af4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6b4.
  The `sw` at 0xd856af8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6b8.
  The `sw` at 0xd856afc stores 4 bytes to sym(__glx_indirect_dispatch) +0x6bc.
  The `sw` at 0xd856b00 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6c0.
  The `sw` at 0xd856b04 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6c4.
  The `sw` at 0xd856b08 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6c8.
  The `sw` at 0xd856b0c stores 4 bytes to sym(__glx_indirect_dispatch) +0x6cc.
  The `sw` at 0xd856b10 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6d0.
  The `sw` at 0xd856b14 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6d4.
  The `sw` at 0xd856b18 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6d8.
  The `sw` at 0xd856b1c stores 4 bytes to sym(__glx_indirect_dispatch) +0x6dc.
  The `sw` at 0xd856b20 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6e0.
  The `sw` at 0xd856b24 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6e4.
  The `sw` at 0xd856b28 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6e8.
  The `sw` at 0xd856b2c stores 4 bytes to sym(__glx_indirect_dispatch) +0x6ec.
  The `sw` at 0xd856b30 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6f0.
  The `sw` at 0xd856b34 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6f4.
  The `sw` at 0xd856b38 stores 4 bytes to sym(__glx_indirect_dispatch) +0x6f8.
  The `sw` at 0xd856b3c stores 4 bytes to sym(__glx_indirect_dispatch) +0x6fc.
  The `sw` at 0xd856b40 stores 4 bytes to sym(__glx_indirect_dispatch) +0x700.
  The `sw` at 0xd856b44 stores 4 bytes to sym(__glx_indirect_dispatch) +0x704.
  The `sw` at 0xd856b48 stores 4 bytes to sym(__glx_indirect_dispatch) +0x708.
  The `sw` at 0xd856b4c stores 4 bytes to sym(__glx_indirect_dispatch) +0x70c.
  The `sw` at 0xd856b50 stores 4 bytes to sym(__glx_indirect_dispatch) +0x710.
  The `sw` at 0xd856b54 stores 4 bytes to sym(__glx_indirect_dispatch) +0x714.
  The `sw` at 0xd856b58 stores 4 bytes to sym(__glx_indirect_dispatch) +0x718.
  The `sw` at 0xd856b5c stores 4 bytes to sym(__glx_indirect_dispatch) +0x71c.
  The `sw` at 0xd856b60 stores 4 bytes to sym(__glx_indirect_dispatch) +0x720.
  The `sw` at 0xd856b64 stores 4 bytes to sym(__glx_indirect_dispatch) +0x724.
  The `sw` at 0xd856b68 stores 4 bytes to sym(__glx_indirect_dispatch) +0x728.
  The `sw` at 0xd856b6c stores 4 bytes to sym(__glx_indirect_dispatch) +0x72c.
  The `sw` at 0xd856b70 stores 4 bytes to sym(__glx_indirect_dispatch) +0x730.
  The `sw` at 0xd856b74 stores 4 bytes to sym(__glx_indirect_dispatch) +0x734.
  The `sw` at 0xd856b78 stores 4 bytes to sym(__glx_indirect_dispatch) +0x738.
  The `sw` at 0xd856b7c stores 4 bytes to sym(__glx_indirect_dispatch) +0x73c.
  The `sw` at 0xd856b80 stores 4 bytes to sym(__glx_indirect_dispatch) +0x740.
  The `sw` at 0xd856b84 stores 4 bytes to sym(__glx_indirect_dispatch) +0x744.
  The `sw` at 0xd856b88 stores 4 bytes to sym(__glx_indirect_dispatch) +0x748.
  The `sw` at 0xd856b8c stores 4 bytes to sym(__glx_indirect_dispatch) +0x74c.
  The `sw` at 0xd856b90 stores 4 bytes to sym(__glx_indirect_dispatch) +0x750.
  The `sw` at 0xd856b94 stores 4 bytes to sym(__glx_indirect_dispatch) +0x754.
  The `sw` at 0xd856b98 stores 4 bytes to sym(__glx_indirect_dispatch) +0x758.
  The `sw` at 0xd856b9c stores 4 bytes to sym(__glx_indirect_dispatch) +0x75c.
  The `sw` at 0xd856ba0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x760.
  The `sw` at 0xd856ba4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x764.
  The `sw` at 0xd856ba8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x768.
  The `sw` at 0xd856bac stores 4 bytes to sym(__glx_indirect_dispatch) +0x76c.
  The `sw` at 0xd856bb0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x770.
  The `sw` at 0xd856bb4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x774.
  The `sw` at 0xd856bb8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x778.
  The `sw` at 0xd856bbc stores 4 bytes to sym(__glx_indirect_dispatch) +0x77c.
  The `sw` at 0xd856bc0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x780.
  The `sw` at 0xd856bc4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x784.
  The `sw` at 0xd856bc8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x788.
  The `sw` at 0xd856bcc stores 4 bytes to sym(__glx_indirect_dispatch) +0x78c.
  The `sw` at 0xd856bd0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x790.
  The `sw` at 0xd856bd4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x794.
  The `sw` at 0xd856bd8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x798.
  The `sw` at 0xd856bdc stores 4 bytes to sym(__glx_indirect_dispatch) +0x79c.
  The `sw` at 0xd856be0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7a0.
  The `sw` at 0xd856be4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7a4.
  The `sw` at 0xd856be8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7a8.
  The `sw` at 0xd856bec stores 4 bytes to sym(__glx_indirect_dispatch) +0x7ac.
  The `sw` at 0xd856bf0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7b0.
  The `sw` at 0xd856bf4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7b4.
  The `sw` at 0xd856bf8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7b8.
  The `sw` at 0xd856bfc stores 4 bytes to sym(__glx_indirect_dispatch) +0x7bc.
  The `sw` at 0xd856c00 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7c0.
  The `sw` at 0xd856c04 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7c4.
  The `sw` at 0xd856c08 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7c8.
  The `sw` at 0xd856c0c stores 4 bytes to sym(__glx_indirect_dispatch) +0x7cc.
  The `sw` at 0xd856c10 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7d0.
  The `sw` at 0xd856c14 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7d4.
  The `sw` at 0xd856c18 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7d8.
  The `sw` at 0xd856c1c stores 4 bytes to sym(__glx_indirect_dispatch) +0x7dc.
  The `sw` at 0xd856c20 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7e0.
  The `sw` at 0xd856c24 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7e4.
  The `sw` at 0xd856c28 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7e8.
  The `sw` at 0xd856c2c stores 4 bytes to sym(__glx_indirect_dispatch) +0x7ec.
  The `sw` at 0xd856c30 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7f0.
  The `sw` at 0xd856c34 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7f4.
  The `sw` at 0xd856c38 stores 4 bytes to sym(__glx_indirect_dispatch) +0x7f8.
  The `sw` at 0xd856c3c stores 4 bytes to sym(__glx_indirect_dispatch) +0x7fc.
  The `sw` at 0xd856c40 stores 4 bytes to sym(__glx_indirect_dispatch) +0x800.
  The `sw` at 0xd856c44 stores 4 bytes to sym(__glx_indirect_dispatch) +0x804.
  The `sw` at 0xd856c48 stores 4 bytes to sym(__glx_indirect_dispatch) +0x808.
  The `sw` at 0xd856c4c stores 4 bytes to sym(__glx_indirect_dispatch) +0x80c.
  The `sw` at 0xd856c50 stores 4 bytes to sym(__glx_indirect_dispatch) +0x810.
  The `sw` at 0xd856c54 stores 4 bytes to sym(__glx_indirect_dispatch) +0x814.
  The `sw` at 0xd856c58 stores 4 bytes to sym(__glx_indirect_dispatch) +0x818.
  The `sw` at 0xd856c5c stores 4 bytes to sym(__glx_indirect_dispatch) +0x81c.
  The `sw` at 0xd856c60 stores 4 bytes to sym(__glx_indirect_dispatch) +0x820.
  The `sw` at 0xd856c64 stores 4 bytes to sym(__glx_indirect_dispatch) +0x824.
  The `sw` at 0xd856c68 stores 4 bytes to sym(__glx_indirect_dispatch) +0x828.
  The `sw` at 0xd856c6c stores 4 bytes to sym(__glx_indirect_dispatch) +0x82c.
  The `sw` at 0xd856c70 stores 4 bytes to sym(__glx_indirect_dispatch) +0x830.
  The `sw` at 0xd856c74 stores 4 bytes to sym(__glx_indirect_dispatch) +0x834.
  The `sw` at 0xd856c78 stores 4 bytes to sym(__glx_indirect_dispatch) +0x838.
  The `sw` at 0xd856c7c stores 4 bytes to sym(__glx_indirect_dispatch) +0x83c.
  The `sw` at 0xd856c80 stores 4 bytes to sym(__glx_indirect_dispatch) +0x840.
  The `sw` at 0xd856c84 stores 4 bytes to sym(__glx_indirect_dispatch) +0x844.
  The `sw` at 0xd856c88 stores 4 bytes to sym(__glx_indirect_dispatch) +0x848.
  The `sw` at 0xd856c8c stores 4 bytes to sym(__glx_indirect_dispatch) +0x84c.
  The `sw` at 0xd856c90 stores 4 bytes to sym(__glx_indirect_dispatch) +0x850.
  The `sw` at 0xd856c94 stores 4 bytes to sym(__glx_indirect_dispatch) +0x854.
  The `sw` at 0xd856c98 stores 4 bytes to sym(__glx_indirect_dispatch) +0x858.
  The `sw` at 0xd856c9c stores 4 bytes to sym(__glx_indirect_dispatch) +0x85c.
  The `sw` at 0xd856ca0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x860.
  The `sw` at 0xd856ca4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x864.
  The `sw` at 0xd856ca8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x868.
  The `sw` at 0xd856cac stores 4 bytes to sym(__glx_indirect_dispatch) +0x86c.
  The `sw` at 0xd856cb0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x870.
  The `sw` at 0xd856cb4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x874.
  The `sw` at 0xd856cb8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x878.
  The `sw` at 0xd856cbc stores 4 bytes to sym(__glx_indirect_dispatch) +0x87c.
  The `sw` at 0xd856cc0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x880.
  The `sw` at 0xd856cc4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x884.
  The `sw` at 0xd856cc8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x888.
  The `sw` at 0xd856ccc stores 4 bytes to sym(__glx_indirect_dispatch) +0x88c.
  The `sw` at 0xd856cd0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x890.
  The `sw` at 0xd856cd4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x894.
  The `sw` at 0xd856cd8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x898.
  The `sw` at 0xd856cdc stores 4 bytes to sym(__glx_indirect_dispatch) +0x89c.
  The `sw` at 0xd856ce0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8a0.
  The `sw` at 0xd856ce4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8a4.
  The `sw` at 0xd856ce8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8a8.
  The `sw` at 0xd856cec stores 4 bytes to sym(__glx_indirect_dispatch) +0x8ac.
  The `sw` at 0xd856cf0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8b0.
  The `sw` at 0xd856cf4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8b4.
  The `sw` at 0xd856cf8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8b8.
  The `sw` at 0xd856cfc stores 4 bytes to sym(__glx_indirect_dispatch) +0x8bc.
  The `sw` at 0xd856d00 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8c0.
  The `sw` at 0xd856d04 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8c4.
  The `sw` at 0xd856d08 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8c8.
  The `sw` at 0xd856d0c stores 4 bytes to sym(__glx_indirect_dispatch) +0x8cc.
  The `sw` at 0xd856d10 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8d0.
  The `sw` at 0xd856d14 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8d4.
  The `sw` at 0xd856d18 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8d8.
  The `sw` at 0xd856d1c stores 4 bytes to sym(__glx_indirect_dispatch) +0x8dc.
  The `sw` at 0xd856d20 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8e0.
  The `sw` at 0xd856d24 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8e4.
  The `sw` at 0xd856d28 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8e8.
  The `sw` at 0xd856d2c stores 4 bytes to sym(__glx_indirect_dispatch) +0x8ec.
  The `sw` at 0xd856d30 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8f0.
  The `sw` at 0xd856d34 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8f4.
  The `sw` at 0xd856d38 stores 4 bytes to sym(__glx_indirect_dispatch) +0x8f8.
  The `sw` at 0xd856d3c stores 4 bytes to sym(__glx_indirect_dispatch) +0x8fc.
  The `sw` at 0xd856d40 stores 4 bytes to sym(__glx_indirect_dispatch) +0x900.
  The `sw` at 0xd856d44 stores 4 bytes to sym(__glx_indirect_dispatch) +0x92c.
  The `lw` at 0xd856d48 loads 4 bytes from abs 0xd882318.
  The `sw` at 0xd856d4c stores 4 bytes to sym(__glx_indirect_dispatch) +0x928.
  The `lw` at 0xd856d50 loads 4 bytes from abs 0xd882314.
  The `sw` at 0xd856d54 stores 4 bytes to sym(__glx_indirect_dispatch) +0x924.
  The `lw` at 0xd856d58 loads 4 bytes from abs 0xd882310.
  The `sw` at 0xd856d5c stores 4 bytes to sym(__glx_indirect_dispatch) +0x920.
  The `lw` at 0xd856d60 loads 4 bytes from abs 0xd88230c.
  The `sw` at 0xd856d64 stores 4 bytes to sym(__glx_indirect_dispatch) +0x91c.
  The `lw` at 0xd856d68 loads 4 bytes from abs 0xd882308.
  The `sw` at 0xd856d6c stores 4 bytes to sym(__glx_indirect_dispatch) +0x94c.
  The `lw` at 0xd856d70 loads 4 bytes from abs 0xd8821b0.
  The `sw` at 0xd856d74 stores 4 bytes to sym(__glx_indirect_dispatch) +0x950.
  The `lw` at 0xd856d78 loads 4 bytes from abs 0xd8821b4.
  The `sw` at 0xd856d7c stores 4 bytes to sym(__glx_indirect_dispatch) +0x954.
  The `lw` at 0xd856d80 loads 4 bytes from abs 0xd8821b8.
  The `sw` at 0xd856d84 stores 4 bytes to sym(__glx_indirect_dispatch) +0x958.
  The `lw` at 0xd856d88 loads 4 bytes from abs 0xd8821bc.
  The `sw` at 0xd856d8c stores 4 bytes to sym(__glx_indirect_dispatch) +0x95c.
  The `lw` at 0xd856d90 loads 4 bytes from abs 0xd8820ec.
  The `sw` at 0xd856d94 stores 4 bytes to sym(__glx_indirect_dispatch) +0x98c.
  The `lw` at 0xd856d98 loads 4 bytes from abs 0xd882218.
  The `sw` at 0xd856d9c stores 4 bytes to sym(__glx_indirect_dispatch) +0x988.
  The `sw` at 0xd856da0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x984.
  The `sw` at 0xd856da4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x980.
  The `sw` at 0xd856da8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x97c.
  The `sw` at 0xd856dac stores 4 bytes to sym(__glx_indirect_dispatch) +0x914.
  The `lw` at 0xd856db0 loads 4 bytes from abs 0xd882300.
  The `lw` at 0xd856db4 loads 4 bytes from abs 0xd8822d4.
  The `sw` at 0xd856db8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x910.
  The `lw` at 0xd856dbc loads 4 bytes from abs 0xd8822fc.
  The `sw` at 0xd856dc0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x90c.
  The `lw` at 0xd856dc4 loads 4 bytes from abs 0xd8822f8.
  The `sw` at 0xd856dc8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x908.
  The `lw` at 0xd856dcc loads 4 bytes from abs 0xd8822f4.
  The `sw` at 0xd856dd0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x904.
  The `lw` at 0xd856dd4 loads 4 bytes from abs 0xd8822f0.
  The `sw` at 0xd856dd8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x934.
  The `lw` at 0xd856ddc loads 4 bytes from abs 0xd882198.
  The `sw` at 0xd856de0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x938.
  The `lw` at 0xd856de4 loads 4 bytes from abs 0xd88219c.
  The `sw` at 0xd856de8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x93c.
  The `lw` at 0xd856dec loads 4 bytes from abs 0xd8821a0.
  The `sw` at 0xd856df0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x940.
  The `lw` at 0xd856df4 loads 4 bytes from abs 0xd8821a4.
  The `sw` at 0xd856df8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x918.
  The `lw` at 0xd856dfc loads 4 bytes from abs 0xd882304.
  The `sw` at 0xd856e00 stores 4 bytes to sym(__glx_indirect_dispatch) +0x944.
  The `lw` at 0xd856e04 loads 4 bytes from abs 0xd8821a8.
  The `sw` at 0xd856e08 stores 4 bytes to sym(__glx_indirect_dispatch) +0x974.
  The `lw` at 0xd856e0c loads 4 bytes from abs 0xd882104.
  The `sw` at 0xd856e10 stores 4 bytes to sym(__glx_indirect_dispatch) +0x948.
  The `lw` at 0xd856e14 loads 4 bytes from abs 0xd8821ac.
  The `sw` at 0xd856e18 stores 4 bytes to sym(__glx_indirect_dispatch) +0x970.
  The `lw` at 0xd856e1c loads 4 bytes from abs 0xd882100.
  The `sw` at 0xd856e20 stores 4 bytes to sym(__glx_indirect_dispatch) +0x96c.
  The `lw` at 0xd856e24 loads 4 bytes from abs 0xd8820fc.
  The `sw` at 0xd856e28 stores 4 bytes to sym(__glx_indirect_dispatch) +0x968.
  The `lw` at 0xd856e2c loads 4 bytes from abs 0xd8820f8.
  The `sw` at 0xd856e30 stores 4 bytes to sym(__glx_indirect_dispatch) +0x964.
  The `lw` at 0xd856e34 loads 4 bytes from abs 0xd8820f4.
  The `sw` at 0xd856e38 stores 4 bytes to sym(__glx_indirect_dispatch) +0x994.
  The `lw` at 0xd856e3c loads 4 bytes from abs 0xd882210.
  The `sw` at 0xd856e40 stores 4 bytes to sym(__glx_indirect_dispatch) +0x998.
  The `lw` at 0xd856e44 loads 4 bytes from abs 0xd88220c.
  The `sw` at 0xd856e48 stores 4 bytes to sym(__glx_indirect_dispatch) +0x99c.
  The `lw` at 0xd856e4c loads 4 bytes from abs 0xd882208.
  The `sw` at 0xd856e50 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9a0.
  The `lw` at 0xd856e54 loads 4 bytes from abs 0xd882204.
  The `sw` at 0xd856e58 stores 4 bytes to sym(__glx_indirect_dispatch) +0x978.
  The `sw` at 0xd856e5c stores 4 bytes to sym(__glx_indirect_dispatch) +0x9a4.
  The `lw` at 0xd856e60 loads 4 bytes from abs 0xd882108.
  The `sw` at 0xd856e64 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9a8.
  The `lw` at 0xd856e68 loads 4 bytes from abs 0xd8822ec.
  The `sw` at 0xd856e6c stores 4 bytes to sym(__glx_indirect_dispatch) +0x930.
  The `lw` at 0xd856e70 loads 4 bytes from abs 0xd88231c.
  The `sw` at 0xd856e74 stores 4 bytes to sym(__glx_indirect_dispatch) +0x960.
  The `lw` at 0xd856e78 loads 4 bytes from abs 0xd8820f0.
  The `sw` at 0xd856e7c stores 4 bytes to sym(__glx_indirect_dispatch) +0x990.
  The `sw` at 0xd856e80 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbb8.
  The `lw` at 0xd856e84 loads 4 bytes from abs 0xd8821c8.
  The `sw` at 0xd856e88 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbbc.
  The `lw` at 0xd856e8c loads 4 bytes from abs 0xd8821cc.
  The `sw` at 0xd856e90 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbc0.
  The `lw` at 0xd856e94 loads 4 bytes from abs 0xd8821d0.
  The `sw` at 0xd856e98 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbc4.
  The `lw` at 0xd856e9c loads 4 bytes from abs 0xd8821d4.
  The `sw` at 0xd856ea0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb88.
  The `lw` at 0xd856ea4 loads 4 bytes from abs 0xd882588.
  The `sw` at 0xd856ea8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb84.
  The `lw` at 0xd856eac loads 4 bytes from abs 0xd882584.
  The `sw` at 0xd856eb0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb80.
  The `lw` at 0xd856eb4 loads 4 bytes from abs 0xd882580.
  The `sw` at 0xd856eb8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb7c.
  The `lw` at 0xd856ebc loads 4 bytes from abs 0xd88257c.
  The `sw` at 0xd856ec0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb40.
  The `lw` at 0xd856ec4 loads 4 bytes from abs 0xd882540.
  The `sw` at 0xd856ec8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb44.
  The `lw` at 0xd856ecc loads 4 bytes from abs 0xd882544.
  The `sw` at 0xd856ed0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb48.
  The `lw` at 0xd856ed4 loads 4 bytes from abs 0xd882548.
  The `sw` at 0xd856ed8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb4c.
  The `lw` at 0xd856edc loads 4 bytes from abs 0xd88254c.
  The `sw` at 0xd856ee0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb10.
  The `lw` at 0xd856ee4 loads 4 bytes from abs 0xd8822a0.
  The `sw` at 0xd856ee8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb0c.
  The `lw` at 0xd856eec loads 4 bytes from abs 0xd88229c.
  The `sw` at 0xd856ef0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb08.
  The `lw` at 0xd856ef4 loads 4 bytes from abs 0xd882298.
  The `sw` at 0xd856ef8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb04.
  The `lw` at 0xd856efc loads 4 bytes from abs 0xd882294.
  The `sw` at 0xd856f00 stores 4 bytes to sym(__glx_indirect_dispatch) +0xac8.
  The `lw` at 0xd856f04 loads 4 bytes from abs 0xd882258.
  The `sw` at 0xd856f08 stores 4 bytes to sym(__glx_indirect_dispatch) +0xacc.
  The `lw` at 0xd856f0c loads 4 bytes from abs 0xd88225c.
  The `sw` at 0xd856f10 stores 4 bytes to sym(__glx_indirect_dispatch) +0xad0.
  The `lw` at 0xd856f14 loads 4 bytes from abs 0xd882260.
  The `sw` at 0xd856f18 stores 4 bytes to sym(__glx_indirect_dispatch) +0xad4.
  The `lw` at 0xd856f1c loads 4 bytes from abs 0xd882264.
  The `sw` at 0xd856f20 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa98.
  The `lw` at 0xd856f24 loads 4 bytes from abs 0xd882188.
  The `sw` at 0xd856f28 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa94.
  The `lw` at 0xd856f2c loads 4 bytes from abs 0xd882184.
  The `sw` at 0xd856f30 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa90.
  The `lw` at 0xd856f34 loads 4 bytes from abs 0xd882180.
  The `sw` at 0xd856f38 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa8c.
  The `lw` at 0xd856f3c loads 4 bytes from abs 0xd88217c.
  The `sw` at 0xd856f40 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa10.
  The `lw` at 0xd856f44 loads 4 bytes from abs 0xd882134.
  The `sw` at 0xd856f48 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa14.
  The `lw` at 0xd856f4c loads 4 bytes from abs 0xd882138.
  The `sw` at 0xd856f50 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa18.
  The `lw` at 0xd856f54 loads 4 bytes from abs 0xd88213c.
  The `sw` at 0xd856f58 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa1c.
  The `lw` at 0xd856f5c loads 4 bytes from abs 0xd882140.
  The `sw` at 0xd856f60 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9e0.
  The `sw` at 0xd856f64 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9dc.
  The `sw` at 0xd856f68 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9d8.
  The `sw` at 0xd856f6c stores 4 bytes to sym(__glx_indirect_dispatch) +0x9d4.
  The `sw` at 0xd856f70 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbf0.
  The `lw` at 0xd856f74 loads 4 bytes from abs 0xd882200.
  The `sw` at 0xd856f78 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9ac.
  The `lw` at 0xd856f7c loads 4 bytes from abs 0xd8821fc.
  The `sw` at 0xd856f80 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbcc.
  The `lw` at 0xd856f84 loads 4 bytes from abs 0xd8821dc.
  The `lw` at 0xd856f88 loads 4 bytes from abs 0xd882214.
  The `sw` at 0xd856f8c stores 4 bytes to sym(__glx_indirect_dispatch) +0xbc8.
  The `lw` at 0xd856f90 loads 4 bytes from abs 0xd8821d8.
  The `sw` at 0xd856f94 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb90.
  The `lw` at 0xd856f98 loads 4 bytes from abs 0xd882590.
  The `sw` at 0xd856f9c stores 4 bytes to sym(__glx_indirect_dispatch) +0xbb0.
  The `lw` at 0xd856fa0 loads 4 bytes from abs 0xd8821c0.
  The `sw` at 0xd856fa4 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbb4.
  The `lw` at 0xd856fa8 loads 4 bytes from abs 0xd8821c4.
  The `sw` at 0xd856fac stores 4 bytes to sym(__glx_indirect_dispatch) +0xb78.
  The `lw` at 0xd856fb0 loads 4 bytes from abs 0xd882578.
  The `sw` at 0xd856fb4 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb74.
  The `lw` at 0xd856fb8 loads 4 bytes from abs 0xd882574.
  The `sw` at 0xd856fbc stores 4 bytes to sym(__glx_indirect_dispatch) +0xb54.
  The `lw` at 0xd856fc0 loads 4 bytes from abs 0xd882554.
  The `sw` at 0xd856fc4 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb8c.
  The `lw` at 0xd856fc8 loads 4 bytes from abs 0xd88258c.
  The `sw` at 0xd856fcc stores 4 bytes to sym(__glx_indirect_dispatch) +0xb50.
  The `lw` at 0xd856fd0 loads 4 bytes from abs 0xd882550.
  The `sw` at 0xd856fd4 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb18.
  The `lw` at 0xd856fd8 loads 4 bytes from abs 0xd8822a8.
  The `sw` at 0xd856fdc stores 4 bytes to sym(__glx_indirect_dispatch) +0xb38.
  The `lw` at 0xd856fe0 loads 4 bytes from abs 0xd882538.
  The `sw` at 0xd856fe4 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb3c.
  The `lw` at 0xd856fe8 loads 4 bytes from abs 0xd88253c.
  The `sw` at 0xd856fec stores 4 bytes to sym(__glx_indirect_dispatch) +0xb00.
  The `lw` at 0xd856ff0 loads 4 bytes from abs 0xd882290.
  The `sw` at 0xd856ff4 stores 4 bytes to sym(__glx_indirect_dispatch) +0xafc.
  The `lw` at 0xd856ff8 loads 4 bytes from abs 0xd88228c.
  The `sw` at 0xd856ffc stores 4 bytes to sym(__glx_indirect_dispatch) +0xadc.
  The `lw` at 0xd857000 loads 4 bytes from abs 0xd88226c.
  The `sw` at 0xd857004 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb14.
  The `lw` at 0xd857008 loads 4 bytes from abs 0xd8822a4.
  The `sw` at 0xd85700c stores 4 bytes to sym(__glx_indirect_dispatch) +0xad8.
  The `lw` at 0xd857010 loads 4 bytes from abs 0xd882268.
  The `sw` at 0xd857014 stores 4 bytes to sym(__glx_indirect_dispatch) +0xaa0.
  The `lw` at 0xd857018 loads 4 bytes from abs 0xd882190.
  The `sw` at 0xd85701c stores 4 bytes to sym(__glx_indirect_dispatch) +0xac0.
  The `lw` at 0xd857020 loads 4 bytes from abs 0xd882250.
  The `sw` at 0xd857024 stores 4 bytes to sym(__glx_indirect_dispatch) +0xac4.
  The `lw` at 0xd857028 loads 4 bytes from abs 0xd882254.
  The `sw` at 0xd85702c stores 4 bytes to sym(__glx_indirect_dispatch) +0xa88.
  The `lw` at 0xd857030 loads 4 bytes from abs 0xd882178.
  The `sw` at 0xd857034 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa84.
  The `lw` at 0xd857038 loads 4 bytes from abs 0xd882168.
  The `sw` at 0xd85703c stores 4 bytes to sym(__glx_indirect_dispatch) +0xa24.
  The `lw` at 0xd857040 loads 4 bytes from abs 0xd882148.
  The `sw` at 0xd857044 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa9c.
  The `lw` at 0xd857048 loads 4 bytes from abs 0xd88218c.
  The `sw` at 0xd85704c stores 4 bytes to sym(__glx_indirect_dispatch) +0xa20.
  The `lw` at 0xd857050 loads 4 bytes from abs 0xd882144.
  The `sw` at 0xd857054 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9e8.
  The `lw` at 0xd857058 loads 4 bytes from abs 0xd882238.
  The `sw` at 0xd85705c stores 4 bytes to sym(__glx_indirect_dispatch) +0xa08.
  The `lw` at 0xd857060 loads 4 bytes from abs 0xd88212c.
  The `sw` at 0xd857064 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa0c.
  The `lw` at 0xd857068 loads 4 bytes from abs 0xd882130.
  The `sw` at 0xd85706c stores 4 bytes to sym(__glx_indirect_dispatch) +0x9d0.
  The `sw` at 0xd857070 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9cc.
  The `sw` at 0xd857074 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbec.
  The `sw` at 0xd857078 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9e4.
  The `sw` at 0xd85707c stores 4 bytes to sym(__glx_indirect_dispatch) +0xa70.
  The `sw` at 0xd857080 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa6c.
  The `sw` at 0xd857084 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa68.
  The `sw` at 0xd857088 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa64.
  The `sw` at 0xd85708c stores 4 bytes to sym(__glx_indirect_dispatch) +0xa60.
  The `sw` at 0xd857090 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa5c.
  The `sw` at 0xd857094 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa58.
  The `sw` at 0xd857098 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa54.
  The `sw` at 0xd85709c stores 4 bytes to sym(__glx_indirect_dispatch) +0xa50.
  The `sw` at 0xd8570a0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa4c.
  The `sw` at 0xd8570a4 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa48.
  The `sw` at 0xd8570a8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa44.
  The `sw` at 0xd8570ac stores 4 bytes to sym(__glx_indirect_dispatch) +0xa40.
  The `sw` at 0xd8570b0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa3c.
  The `sw` at 0xd8570b4 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa38.
  The `sw` at 0xd8570b8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa34.
  The `lw` at 0xd8570bc loads 4 bytes from abs 0xd882230.
  The `lw` at 0xd8570c0 loads 4 bytes from abs 0xd88221c.
  The `lw` at 0xd8570c4 loads 4 bytes from abs 0xd882220.
  The `lw` at 0xd8570c8 loads 4 bytes from abs 0xd882224.
  The `lw` at 0xd8570cc loads 4 bytes from abs 0xd882228.
  The `lw` at 0xd8570d0 loads 4 bytes from abs 0xd88222c.
  The `lw` at 0xd8570d4 loads 4 bytes from abs 0xd882234.
  The `sw` at 0xd8570d8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbe8.
  The `lw` at 0xd8570dc loads 4 bytes from abs 0xd8821f8.
  The `sw` at 0xd8570e0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbe0.
  The `lw` at 0xd8570e4 loads 4 bytes from abs 0xd8821f0.
  The `sw` at 0xd8570e8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbdc.
  The `lw` at 0xd8570ec loads 4 bytes from abs 0xd8821ec.
  The `sw` at 0xd8570f0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbd8.
  The `lw` at 0xd8570f4 loads 4 bytes from abs 0xd8821e8.
  The `sw` at 0xd8570f8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbd4.
  The `lw` at 0xd8570fc loads 4 bytes from abs 0xd8821e4.
  The `sw` at 0xd857100 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbd0.
  The `lw` at 0xd857104 loads 4 bytes from abs 0xd8821e0.
  The `sw` at 0xd857108 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbe4.
  The `lw` at 0xd85710c loads 4 bytes from abs 0xd8821f4.
  The `sw` at 0xd857110 stores 4 bytes to sym(__glx_indirect_dispatch) +0xba8.
  The `lw` at 0xd857114 loads 4 bytes from abs 0xd8825a8.
  The `sw` at 0xd857118 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb94.
  The `lw` at 0xd85711c loads 4 bytes from abs 0xd882594.
  The `sw` at 0xd857120 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb98.
  The `lw` at 0xd857124 loads 4 bytes from abs 0xd882598.
  The `sw` at 0xd857128 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb9c.
  The `lw` at 0xd85712c loads 4 bytes from abs 0xd88259c.
  The `sw` at 0xd857130 stores 4 bytes to sym(__glx_indirect_dispatch) +0xba0.
  The `lw` at 0xd857134 loads 4 bytes from abs 0xd8825a0.
  The `sw` at 0xd857138 stores 4 bytes to sym(__glx_indirect_dispatch) +0xba4.
  The `lw` at 0xd85713c loads 4 bytes from abs 0xd8825a4.
  The `sw` at 0xd857140 stores 4 bytes to sym(__glx_indirect_dispatch) +0xbac.
  The `lw` at 0xd857144 loads 4 bytes from abs 0xd8825ac.
  The `sw` at 0xd857148 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb70.
  The `lw` at 0xd85714c loads 4 bytes from abs 0xd882570.
  The `sw` at 0xd857150 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb68.
  The `lw` at 0xd857154 loads 4 bytes from abs 0xd882568.
  The `sw` at 0xd857158 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb64.
  The `lw` at 0xd85715c loads 4 bytes from abs 0xd882564.
  The `sw` at 0xd857160 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb60.
  The `lw` at 0xd857164 loads 4 bytes from abs 0xd882560.
  The `sw` at 0xd857168 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb5c.
  The `lw` at 0xd85716c loads 4 bytes from abs 0xd88255c.
  The `sw` at 0xd857170 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb58.
  The `lw` at 0xd857174 loads 4 bytes from abs 0xd882558.
  The `sw` at 0xd857178 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb6c.
  The `lw` at 0xd85717c loads 4 bytes from abs 0xd88256c.
  The `sw` at 0xd857180 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb30.
  The `lw` at 0xd857184 loads 4 bytes from abs 0xd882530.
  The `sw` at 0xd857188 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb1c.
  The `lw` at 0xd85718c loads 4 bytes from abs 0xd8822ac.
  The `sw` at 0xd857190 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb20.
  The `lw` at 0xd857194 loads 4 bytes from abs 0xd8822b0.
  The `sw` at 0xd857198 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb24.
  The `lw` at 0xd85719c loads 4 bytes from abs 0xd8822b4.
  The `sw` at 0xd8571a0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb28.
  The `lw` at 0xd8571a4 loads 4 bytes from abs 0xd8822b8.
  The `sw` at 0xd8571a8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb2c.
  The `lw` at 0xd8571ac loads 4 bytes from abs 0xd8822bc.
  The `sw` at 0xd8571b0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xb34.
  The `lw` at 0xd8571b4 loads 4 bytes from abs 0xd882534.
  The `sw` at 0xd8571b8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xaf8.
  The `lw` at 0xd8571bc loads 4 bytes from abs 0xd882288.
  The `sw` at 0xd8571c0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xaf0.
  The `lw` at 0xd8571c4 loads 4 bytes from abs 0xd882280.
  The `sw` at 0xd8571c8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xaec.
  The `lw` at 0xd8571cc loads 4 bytes from abs 0xd88227c.
  The `sw` at 0xd8571d0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xae8.
  The `lw` at 0xd8571d4 loads 4 bytes from abs 0xd882278.
  The `sw` at 0xd8571d8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xae4.
  The `lw` at 0xd8571dc loads 4 bytes from abs 0xd882274.
  The `sw` at 0xd8571e0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xae0.
  The `lw` at 0xd8571e4 loads 4 bytes from abs 0xd882270.
  The `sw` at 0xd8571e8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xaf4.
  The `lw` at 0xd8571ec loads 4 bytes from abs 0xd882284.
  The `sw` at 0xd8571f0 stores 4 bytes to sym(__glx_indirect_dispatch) +0xab8.
  The `lw` at 0xd8571f4 loads 4 bytes from abs 0xd882248.
  The `sw` at 0xd8571f8 stores 4 bytes to sym(__glx_indirect_dispatch) +0xaa4.
  The `lw` at 0xd8571fc loads 4 bytes from abs 0xd882194.
  The `sw` at 0xd857200 stores 4 bytes to sym(__glx_indirect_dispatch) +0xaa8.
  The `lw` at 0xd857204 loads 4 bytes from abs 0xd8824e0.
  The `sw` at 0xd857208 stores 4 bytes to sym(__glx_indirect_dispatch) +0xaac.
  The `lw` at 0xd85720c loads 4 bytes from abs 0xd8824e4.
  The `sw` at 0xd857210 stores 4 bytes to sym(__glx_indirect_dispatch) +0xab0.
  The `lw` at 0xd857214 loads 4 bytes from abs 0xd882240.
  The `sw` at 0xd857218 stores 4 bytes to sym(__glx_indirect_dispatch) +0xab4.
  The `lw` at 0xd85721c loads 4 bytes from abs 0xd882244.
  The `sw` at 0xd857220 stores 4 bytes to sym(__glx_indirect_dispatch) +0xabc.
  The `lw` at 0xd857224 loads 4 bytes from abs 0xd88224c.
  The `sw` at 0xd857228 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa80.
  The `lw` at 0xd85722c loads 4 bytes from abs 0xd882164.
  The `sw` at 0xd857230 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa78.
  The `lw` at 0xd857234 loads 4 bytes from abs 0xd88215c.
  The `sw` at 0xd857238 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa74.
  The `lw` at 0xd85723c loads 4 bytes from abs 0xd882158.
  The `sw` at 0xd857240 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa30.
  The `lw` at 0xd857244 loads 4 bytes from abs 0xd882154.
  The `sw` at 0xd857248 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa2c.
  The `lw` at 0xd85724c loads 4 bytes from abs 0xd882150.
  The `sw` at 0xd857250 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa28.
  The `lw` at 0xd857254 loads 4 bytes from abs 0xd88214c.
  The `sw` at 0xd857258 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa7c.
  The `lw` at 0xd85725c loads 4 bytes from abs 0xd882160.
  The `sw` at 0xd857260 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa00.
  The `lw` at 0xd857264 loads 4 bytes from abs 0xd882124.
  The `sw` at 0xd857268 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9ec.
  The `lw` at 0xd85726c loads 4 bytes from abs 0xd882110.
  The `sw` at 0xd857270 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9f0.
  The `lw` at 0xd857274 loads 4 bytes from abs 0xd882114.
  The `sw` at 0xd857278 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9f4.
  The `lw` at 0xd85727c loads 4 bytes from abs 0xd882118.
  The `sw` at 0xd857280 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9f8.
  The `lw` at 0xd857284 loads 4 bytes from abs 0xd88211c.
  The `sw` at 0xd857288 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9fc.
  The `lw` at 0xd85728c loads 4 bytes from abs 0xd882120.
  The `sw` at 0xd857290 stores 4 bytes to sym(__glx_indirect_dispatch) +0xa04.
  The `lw` at 0xd857294 loads 4 bytes from abs 0xd882128.
  The `sw` at 0xd857298 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9c8.
  The `sw` at 0xd85729c stores 4 bytes to sym(__glx_indirect_dispatch) +0x9c0.
  The `sw` at 0xd8572a0 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9bc.
  The `sw` at 0xd8572a4 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9b8.
  The `sw` at 0xd8572a8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9b4.
  The `sw` at 0xd8572ac stores 4 bytes to sym(__glx_indirect_dispatch) +0x9b0.
  The `sw` at 0xd8572b8 stores 4 bytes to sym(__glx_indirect_dispatch) +0x9c4.
  The `bne` branch at 0xd856008 targets 0xd856000, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0xd856038 targets 0xd856018, is taken when a0(?) != v1(=sym(__glx_indirect_dispatch)+3024), and falls through when a0(?) == v1(=sym(__glx_indirect_dispatch)+3024).
  The return at 0xd8572b4 has v0 = sym(__glx_indirect_dispatch)+4.

- `__glImageSize` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8576c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8576c0-0xd857818 (344 bytes).
  It occupies 344 bytes.
  The `bgezall` at 0xd857730 calls (unnamed) [0xd8572c0] with a0=a4 at entry (arg4), a1=a5 at entry (arg5), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0xd85776c calls (unnamed) [0xd857500] with a0=a5 at entry (arg5), a1=0x1900, a2=0x1901, a3=?.
  The `blez` branch at 0xd857700 targets 0xd8577e8, is taken when a0 <= 0 (signed), and falls through when a0 > 0 (signed).
  The `blez` branch at 0xd857708 targets 0xd8577e8, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `blez` branch at 0xd857710 targets 0xd8577e8, is taken when a2 <= 0 (signed), and falls through when a2 > 0 (signed).
  The `blez` branch at 0xd857718 targets 0xd8577e8, is taken when a3 <= 0 (signed), and falls through when a3 > 0 (signed).
  The `bne` branch at 0xd857744 targets 0xd857764, is taken when s0(=a5) != ra(=0x1a00), and falls through when s0(=a5) == ra(=0x1a00).
  The `beq` branch at 0xd85774c targets 0xd85780c, is taken when s4(=a4) == a1(=0x1900), and falls through when s4(=a4) != a1(=0x1900).
  The `beq` branch at 0xd857754 targets 0xd85780c, is taken when s4(=a4) == a2(=0x1901), and falls through when s4(=a4) != a2(=0x1901).
  The `beq` branch at 0xd85775c targets 0xd857788 and is always taken.
  The `beq` branch at 0xd857810 targets 0xd857788 and is always taken.
  The return at 0xd8577e0 has v0 = ?.
  The return at 0xd857800 has v0 = 0x0.
  The instructions from 0xd857808 to 0xd857808 are not reached by any path from the entry, and their branches are not listed.

- `__glFillImage` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd858340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd858340-0xd858af8 (1976 bytes).
  It occupies 1976 bytes.
  The `lw` at 0xd858344 loads 4 bytes from a0 (arg0 at entry) +0xa4.
  The `lbu` at 0xd858348 loads 1 byte from a0 (arg0 at entry) +0x80.
  The `lw` at 0xd85834c loads 4 bytes from a0 (arg0 at entry) +0x90.
  The `lw` at 0xd858350 loads 4 bytes from a0 (arg0 at entry) +0x98.
  The `lw` at 0xd858354 loads 4 bytes from a0 (arg0 at entry) +0x9c.
  The `lw` at 0xd85836c loads 4 bytes from a0 (arg0 at entry) +0xa0.
  The `lw` at 0xd858378 loads 4 bytes from a0 (arg0 at entry) +0x8c.
  The `lw` at 0xd858384 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0xd85838c loads 4 bytes from a0 (arg0 at entry) +0x84.
  The `lw` at 0xd8583c4 loads 4 bytes from a0 (arg0 at entry) +0x94.
  26 such `sb` accesses store 1 byte to ?, including `sb` at 0xd85867c, `sb` at 0xd858680, `sb` at 0xd858684.
  12 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd85868c, `sw` at 0xd858690, `sw` at 0xd858694.
  17 such `lbu` accesses load 1 byte from ?, including `lbu` at 0xd858858, `lbu` at 0xd85887c, `lbu` at 0xd858884.
  The `bgezall` at 0xd858408 calls (unnamed) [0xd8572c0] with a0=a6 at entry (arg6), a1=a7 at entry (arg7), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=[a0+148].
  The `bgezall` at 0xd85845c calls (unnamed) [0xd857500] with a0=a7 at entry (arg7), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8584e8 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0xd85864c calls (unnamed) [0xd857b40] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=a4 at entry (arg4), a4=a6 at entry (arg6), a5=a7 at entry (arg7).
  The `jalr` at 0xd858658 calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd858a24 calls memcpy with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd858a8c calls memcpy with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0xd858abc calls (unnamed) [0xd857840] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=a6 at entry (arg6).
  The `beq` branch at 0xd8583d0 targets 0xd858aa4, is taken when a7 == at(=0x1a00), and falls through when a7 != at(=0x1a00).
  The `beq` branch at 0xd8583e8 targets 0xd858434, is taken when v0(=[a0+164]) == t2(=0x85a3), and falls through when v0(=[a0+164]) != t2(=0x85a3).
  The `beq` branch at 0xd8583f8 targets 0xd858434, is taken when v0(=[a0+164]) == t3(=0x85a4), and falls through when v0(=[a0+164]) != t3(=0x85a4).
  The `bgtz` branch at 0xd858414 targets 0xd858440, is taken when s1(=[a0+132]) > 0 (signed), and falls through when s1(=[a0+132]) <= 0 (signed).
  The `bgtz` branch at 0xd85841c targets 0xd858448, is taken when s2(=[a0+136]) > 0 (signed), and falls through when s2(=[a0+136]) <= 0 (signed).
  The `bgtz` branch at 0xd858424 targets 0xd858450, is taken when s0(=[a0+140]) > 0 (signed), and falls through when s0(=[a0+140]) <= 0 (signed).
  The `beq` branch at 0xd85842c targets 0xd858454 and is always taken.
  The `blez` branch at 0xd858438 targets 0xd85841c, is taken when s1(=[a0+132]) <= 0 (signed), and falls through when s1(=[a0+132]) > 0 (signed).
  The `blez` branch at 0xd858440 targets 0xd858424, is taken when s2(=[a0+136]) <= 0 (signed), and falls through when s2(=[a0+136]) > 0 (signed).
  The `blez` branch at 0xd858448 targets 0xd85842c, is taken when s0(=[a0+140]) <= 0 (signed), and falls through when s0(=[a0+140]) > 0 (signed).
  The `beq` branch at 0xd858468 targets 0xd858900, is taken when v0(=ret(0xd857500)) == ra(=0x1), and falls through when v0(=ret(0xd857500)) != ra(=0x1).
  The `beq` branch at 0xd85849c targets 0xd8584ac, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `beq` branch at 0xd8584b0 targets 0xd858500, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0xd8584f8 targets 0xd858504, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0xd858504 targets 0xd858908, is taken when s6(?) == 0, and falls through when s6(?) != 0.
  The `blez` branch at 0xd85850c targets 0xd858618, is taken when t9(=a5) <= 0 (signed), and falls through when t9(=a5) > 0 (signed).
  The `blez` branch at 0xd858514 targets 0xd858618, is taken when ra(=a4) <= 0 (signed), and falls through when ra(=a4) > 0 (signed).
  The `blez` branch at 0xd85851c targets 0xd858618, is taken when s8(=a3) <= 0 (signed), and falls through when s8(=a3) > 0 (signed).
  The `blez` branch at 0xd858534 targets 0xd858618, is taken when s2(?) <= 0 (signed), and falls through when s2(?) > 0 (signed).
  The `blez` branch at 0xd85853c targets 0xd858618, is taken when s1(=ret(0xd857500)) <= 0 (signed), and falls through when s1(=ret(0xd857500)) > 0 (signed).
  The `beq` branch at 0xd858610 targets 0xd8587a4 and is always taken.
  The `beq` branch at 0xd85861c targets 0xd858660, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0xd858624 targets 0xd858660, is taken when s4(?) == 0, and falls through when s4(?) != 0.
  The `beq` branch at 0xd858664 targets 0xd8586dc, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0xd858670 targets 0xd858710, is taken when ra(=a1) < 0x3 (signed), and falls through when ra(=a1) >= 0x3 (signed).
  The `beq` branch at 0xd85879c targets 0xd858618, is taken when at(?) == v0(=a5), and falls through when at(?) != v0(=a5).
  The `beq` branch at 0xd8587b0 targets 0xd8587e0 and is always taken.
  The `beq` branch at 0xd8587d8 targets 0xd858764, is taken when a6(?) == t1(=a4), and falls through when a6(?) != t1(=a4).
  The `beq` branch at 0xd8587ec targets 0xd858800 and is always taken.
  The `beq` branch at 0xd8587f8 targets 0xd8587c0, is taken when s6(?) == s8(=a3), and falls through when s6(?) != s8(=a3).
  The `beq` branch at 0xd858818 targets 0xd858af0 and is always taken.
  The `beq` branch at 0xd858838 targets 0xd8587f4, is taken when s0(?) == s2(?), and falls through when s0(?) != s2(?).
  The `beq` branch at 0xd858848 targets 0xd858868, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `bne` branch at 0xd858860 targets 0xd858850, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `beq` branch at 0xd85886c targets 0xd858828, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `bne` branch at 0xd858874 targets 0xd858acc, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0xd8588c4 targets 0xd858820, is taken when at(?) == a1(?), and falls through when at(?) != a1(?).
  The `bne` branch at 0xd8588f0 targets 0xd8588a0, is taken when at(?) != a1(?), and falls through when at(?) == a1(?).
  The `beq` branch at 0xd8588f8 targets 0xd858828 and is always taken.
  The `beq` branch at 0xd858900 targets 0xd858470 and is always taken.
  The `blez` branch at 0xd85890c targets 0xd858618, is taken when a3(=a5) <= 0 (signed), and falls through when a3(=a5) > 0 (signed).
  The `blez` branch at 0xd858914 targets 0xd858618, is taken when a4 <= 0 (signed), and falls through when a4 > 0 (signed).
  The `beq` branch at 0xd8589d8 targets 0xd8589fc and is always taken.
  The `beq` branch at 0xd8589f4 targets 0xd858618, is taken when t2(?) == t3(=a5), and falls through when t2(?) != t3(=a5).
  The `beq` branch at 0xd858a00 targets 0xd858a68 and is always taken.
  The `bne` branch at 0xd858a38 targets 0xd858a14, is taken when s2(?) != s8(=a3), and falls through when s2(?) == s8(=a3).
  The `beq` branch at 0xd858a60 targets 0xd8589e0, is taken when s5(?) == ra(=a4), and falls through when s5(?) != ra(=a4).
  The `beq` branch at 0xd858a68 targets 0xd858a80, is taken when s7(?) == a7(?), and falls through when s7(?) != a7(?).
  The `bgtz` branch at 0xd858a70 targets 0xd858a08, is taken when s8(=a3) > 0 (signed), and falls through when s8(=a3) <= 0 (signed).
  The `beq` branch at 0xd858a78 targets 0xd858a44 and is always taken.
  The `beq` branch at 0xd858a9c targets 0xd858a54 and is always taken.
  The `beq` branch at 0xd858ac4 targets 0xd858664 and is always taken.
  The `beq` branch at 0xd858ae8 targets 0xd858828 and is always taken.
  The `beq` branch at 0xd858af0 targets 0xd858844 and is always taken.
  The return at 0xd8586d4 has v0 = ?.
  The return at 0xd858708 has v0 = ?.
  The return at 0xd85875c has v0 = ?.
  The instructions from 0xd8587b8 to 0xd8587bc are not reached by any path from the entry, and their branches are not listed.

- `__glEmptyImage` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8592c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8592c0-0xd8596f0 (1072 bytes).
  It occupies 1072 bytes.
  The `lw` at 0xd8592c4 loads 4 bytes from a0 (arg0 at entry) +0x78.
  The `lw` at 0xd8592c8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `lw` at 0xd8592cc loads 4 bytes from a0 (arg0 at entry) +0x6c.
  The `lw` at 0xd8592d0 loads 4 bytes from a0 (arg0 at entry) +0x64.
  The `lw` at 0xd8592d4 loads 4 bytes from a0 (arg0 at entry) +0x68.
  The `lw` at 0xd8592e8 loads 4 bytes from a0 (arg0 at entry) +0x74.
  The `lw` at 0xd8592f0 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `lw` at 0xd8592fc loads 4 bytes from a0 (arg0 at entry) +0x5c.
  The `lw` at 0xd859304 loads 4 bytes from a0 (arg0 at entry) +0x58.
  The `bgezall` at 0xd85936c calls (unnamed) [0xd8572c0] with a0=a6 at entry (arg6), a1=a7 at entry (arg7), a2=a2 at entry (arg2), a3=0x85a3, a4=0x85a4.
  The `bgezall` at 0xd8593c8 calls (unnamed) [0xd857500] with a0=a7 at entry (arg7), a1=?, a2=?, a3=?.
  The `jalr` at 0xd859460 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0xd859498 calls (unnamed) [0xd858ec0] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=a4 at entry (arg4), a4=a6 at entry (arg6), a5=a7 at entry (arg7), a7=ret(malloc).
  The `jalr` at 0xd8595d8 calls memcpy with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd85963c calls memcpy with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd859678 calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0xd8596d8 calls (unnamed) [0xd858b00] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=a6 at entry (arg6).
  The `beq` branch at 0xd859338 targets 0xd8596c0, is taken when a7 == at(=0x1a00), and falls through when a7 != at(=0x1a00).
  The `beq` branch at 0xd859350 targets 0xd85939c, is taken when v0(=[a0+120]) == a3(=0x85a3), and falls through when v0(=[a0+120]) != a3(=0x85a3).
  The `beq` branch at 0xd85935c targets 0xd85939c, is taken when v0(=[a0+120]) == a4(=0x85a4), and falls through when v0(=[a0+120]) != a4(=0x85a4).
  The `bgtz` branch at 0xd859378 targets 0xd8593a8, is taken when s5(=[a0+88]) > 0 (signed), and falls through when s5(=[a0+88]) <= 0 (signed).
  The `bgtz` branch at 0xd859380 targets 0xd8593b0, is taken when s3(=[a0+92]) > 0 (signed), and falls through when s3(=[a0+92]) <= 0 (signed).
  The `bgtz` branch at 0xd859388 targets 0xd8593b8, is taken when s2(=[a0+96]) > 0 (signed), and falls through when s2(=[a0+96]) <= 0 (signed).
  The `beq` branch at 0xd859394 targets 0xd8593bc and is always taken.
  The `blez` branch at 0xd8593a0 targets 0xd859380, is taken when s5(=[a0+88]) <= 0 (signed), and falls through when s5(=[a0+88]) > 0 (signed).
  The `blez` branch at 0xd8593a8 targets 0xd859388, is taken when s3(=[a0+92]) <= 0 (signed), and falls through when s3(=[a0+92]) > 0 (signed).
  The `blez` branch at 0xd8593b0 targets 0xd859390, is taken when s2(=[a0+96]) <= 0 (signed), and falls through when s2(=[a0+96]) > 0 (signed).
  The `beq` branch at 0xd859404 targets 0xd859414, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0xd859438 targets 0xd859448, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0xd85944c targets 0xd8594a8, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0xd85946c targets 0xd8594a4, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `blez` branch at 0xd8594a8 targets 0xd859658, is taken when ra(=a5) <= 0 (signed), and falls through when ra(=a5) > 0 (signed).
  The `blez` branch at 0xd8594b0 targets 0xd859658, is taken when at(=a4) <= 0 (signed), and falls through when at(=a4) > 0 (signed).
  The `beq` branch at 0xd859580 targets 0xd8595ac and is always taken.
  The `beq` branch at 0xd8595a4 targets 0xd859658, is taken when t9(?) == ra(=a5), and falls through when t9(?) != ra(=a5).
  The `beq` branch at 0xd8595b4 targets 0xd8596e8 and is always taken.
  The `blez` branch at 0xd8595c0 targets 0xd859650, is taken when s4(=a3) <= 0 (signed), and falls through when s4(=a3) > 0 (signed).
  The `bne` branch at 0xd8595e8 targets 0xd8595cc, is taken when s2(?) != s4(=a3), and falls through when s2(?) == s4(=a3).
  The `beq` branch at 0xd85961c targets 0xd859588, is taken when a1(?) == a2(=a4), and falls through when a1(?) != a2(=a4).
  The `bne` branch at 0xd859624 targets 0xd8595c0, is taken when s5(?) != s3(?), and falls through when s5(?) == s3(?).
  The `bne` branch at 0xd85962c targets 0xd8595c0, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0xd859648 targets 0xd859604 and is always taken.
  The `beq` branch at 0xd859650 targets 0xd8595f4 and is always taken.
  The `beq` branch at 0xd85965c targets 0xd859680, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0xd859664 targets 0xd859680, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0xd8596e0 targets 0xd859680 and is always taken.
  The `beq` branch at 0xd8596e8 targets 0xd859624 and is always taken.
  The return at 0xd8596ac has v0 = one of ?, ret(XFree), ret(0xd858b00).
  The instructions from 0xd8595bc to 0xd8595bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd8596b4 to 0xd8596bc are not reached by any path from the entry, and their branches are not listed.

- `__glx_TexSubImage1D2D` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd85c440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd85c440-0xd85c79c (860 bytes).
  It occupies 860 bytes.
  2 such `lw` accesses load 4 bytes from abs 0x1014, including `lw` at 0xd85c48c, `lw` at 0xd85c514.
  2 such `lw` accesses load 4 bytes from [0x1014] +0x11c, including `lw` at 0xd85c490, `lw` at 0xd85c518.
  2 such `lw` accesses load 4 bytes from [[0x1014]+284] +0x518, including `lw` at 0xd85c494, `lw` at 0xd85c51c.
  2 such `lw` accesses load 4 bytes from [[0x1014]+284] +0x4, including `lw` at 0xd85c49c, `lw` at 0xd85c534.
  2 such `lw` accesses load 4 bytes from [[0x1014]+284] +0xc, including `lw` at 0xd85c4a0, `lw` at 0xd85c538.
  2 such `lw` accesses load 4 bytes from [[0x1014]+284] +0x54c, including `lw` at 0xd85c4ac, `lw` at 0xd85c528.
  2 such `sh` accesses store 2 bytes to ?, including `sh` at 0xd85c55c, `sh` at 0xd85c580.
  14 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd85c560, `sw` at 0xd85c564, `sw` at 0xd85c568.
  The `lw` at 0xd85c5d8 loads 4 bytes from [[0x1014]+284] +0x4c.
  4 such `sb` accesses store 1 byte to ?, including `sb` at 0xd85c618, `sb` at 0xd85c61c, `sb` at 0xd85c620.
  The `lw` at 0xd85c628 loads 4 bytes from [[0x1014]+284] +0x8.
  The `sw` at 0xd85c658 stores 4 bytes to [[0x1014]+284] +0x4.
  The `sw` at 0xd85c6a8 stores 4 bytes to ret(__glXFlushRenderBuffer) +0x34.
  The `sw` at 0xd85c6ac stores 4 bytes to ret(__glXFlushRenderBuffer) +0x30.
  The `sw` at 0xd85c6b0 stores 4 bytes to ret(__glXFlushRenderBuffer) +0x2c.
  The `sw` at 0xd85c6c8 stores 4 bytes to ret(__glXFlushRenderBuffer) +0x38.
  The `sw` at 0xd85c6cc stores 4 bytes to ret(__glXFlushRenderBuffer) +0x28.
  The `sw` at 0xd85c6d0 stores 4 bytes to ret(__glXFlushRenderBuffer) +0x24.
  The `sw` at 0xd85c6d4 stores 4 bytes to ret(__glXFlushRenderBuffer) +0x20.
  The `sw` at 0xd85c6d8 stores 4 bytes to ret(__glXFlushRenderBuffer) +0x1c.
  The `sw` at 0xd85c6e0 stores 4 bytes to ret(__glXFlushRenderBuffer) +0x4.
  The `sw` at 0xd85c6e8 stores 4 bytes to ret(__glXFlushRenderBuffer) +0x0.
  2 such `sw` accesses store 4 bytes to ret(__glXFlushRenderBuffer) +0x3c, including `sw` at 0xd85c6fc, `sw` at 0xd85c798.
  The `jalr` at 0xd85c4d8 calls __glXFlushRenderBuffer with a0=[[0x1014]+284], a1=[[[0x1014]+284]+4], a2=?, a3=?.
  The `jalr` at 0xd85c50c calls __glImageSize with a0=a5 at entry (arg5), a1=a6 at entry (arg6), a2=0x1, a3=0x1, a4=a7 at entry (arg7).
  The `jalr` at 0xd85c5ec calls (unknown callee) with a0=[[0x1014]+284], a1=?, a2=a5 at entry (arg5), a3=a6 at entry (arg6), a4=0x1, a5=0x1, a6=a7 at entry (arg7).
  The `jalr` at 0xd85c69c calls __glXFlushRenderBuffer with a0=[[0x1014]+284], a1=[[[0x1014]+284]+4], a2=?, a3=?.
  The `bgezall` at 0xd85c748 calls SendLargeImage [0xd85b3c0] with a0=[[0x1014]+284], a1=?, a2=?, a3=a5 at entry (arg5), a4=a6 at entry (arg6), a5=0x1, a6=0x1.
  Calls __glXFlushRenderBuffer via got with a0=[[0x1014]+284], a1=?, a2=?, a3=? (`jr` at 0xd85c780).
  The `bne` branch at 0xd85c484 targets 0xd85c4f0, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0xd85c4a8 targets 0xd85c66c, is taken when v1(=[[[0x1014]+284]+1304]) == 0, and falls through when v1(=[[[0x1014]+284]+1304]) != 0.
  The `bne` branch at 0xd85c4b8 targets 0xd85c690, is taken when a6(=[[[0x1014]+284]+1356]) < 0x3c (unsigned), and falls through when a6(=[[[0x1014]+284]+1356]) >= 0x3c (unsigned).
  The `beq` branch at 0xd85c4c0 targets 0xd85c788, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0xd85c4e8 targets 0xd85c55c and is always taken.
  The `beq` branch at 0xd85c53c targets 0xd85c66c, is taken when t8(=[[[0x1014]+284]+1304]) == 0, and falls through when t8(=[[[0x1014]+284]+1304]) != 0.
  The `bne` branch at 0xd85c54c targets 0xd85c694, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `bne` branch at 0xd85c554 targets 0xd85c4d0, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0xd85c5a4 targets 0xd85c600, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0xd85c5ac targets 0xd85c608, is taken when s5(?) == 0, and falls through when s5(?) != 0.
  The `beq` branch at 0xd85c5f4 targets 0xd85c628 and is always taken.
  The `bne` branch at 0xd85c600 targets 0xd85c5b4, is taken when s5(?) != 0, and falls through when s5(?) == 0.
  The `bne` branch at 0xd85c650 targets 0xd85c758, is taken when t8(=[[[0x1014]+284]+8]) < s0(?) (unsigned), and falls through when t8(=[[[0x1014]+284]+8]) >= s0(?) (unsigned).
  The `beq` branch at 0xd85c6f4 targets 0xd85c794, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0xd85c750 targets 0xd85c670 and is always taken.
  The `beq` branch at 0xd85c78c targets 0xd85c55c and is always taken.
  The `beq` branch at 0xd85c794 targets 0xd85c700 and is always taken.
  The return at 0xd85c664 has v0 = ?.
  The return at 0xd85c688 has v0 = one of ?, ret(SendLargeImage).
  The instructions from 0xd85c5fc to 0xd85c5fc are not reached by any path from the entry, and their branches are not listed.

- `__glXInitVertexArrayState` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd862680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd862680-0xd862784 (260 bytes).
  It occupies 260 bytes.
  The `sb` at 0xd862680 stores 1 byte to a0 (arg0 at entry) +0xac.
  The `sw` at 0xd862684 stores 4 bytes to a0 (arg0 at entry) +0xb0.
  The `sw` at 0xd862688 stores 4 bytes to a0 (arg0 at entry) +0xb8.
  The `sw` at 0xd86268c stores 4 bytes to a0 (arg0 at entry) +0xb4.
  The `sw` at 0xd862694 stores 4 bytes to a0 (arg0 at entry) +0xbc.
  The `sw` at 0xd86269c stores 4 bytes to a0 (arg0 at entry) +0xc0.
  The `sw` at 0xd8626a0 stores 4 bytes to a0 (arg0 at entry) +0xc4.
  The `sb` at 0xd8626a4 stores 1 byte to a0 (arg0 at entry) +0xc8.
  The `sw` at 0xd8626a8 stores 4 bytes to a0 (arg0 at entry) +0xcc.
  The `sw` at 0xd8626ac stores 4 bytes to a0 (arg0 at entry) +0xd4.
  The `sw` at 0xd8626b0 stores 4 bytes to a0 (arg0 at entry) +0xd0.
  The `sw` at 0xd8626b8 stores 4 bytes to a0 (arg0 at entry) +0xd8.
  The `sw` at 0xd8626bc stores 4 bytes to a0 (arg0 at entry) +0xdc.
  The `sw` at 0xd8626c0 stores 4 bytes to a0 (arg0 at entry) +0xe0.
  The `sb` at 0xd8626c4 stores 1 byte to a0 (arg0 at entry) +0xe4.
  The `sw` at 0xd8626c8 stores 4 bytes to a0 (arg0 at entry) +0xe8.
  The `sw` at 0xd8626cc stores 4 bytes to a0 (arg0 at entry) +0xf0.
  The `sw` at 0xd8626d0 stores 4 bytes to a0 (arg0 at entry) +0xec.
  The `sw` at 0xd8626d4 stores 4 bytes to a0 (arg0 at entry) +0xf4.
  The `sw` at 0xd8626d8 stores 4 bytes to a0 (arg0 at entry) +0xf8.
  The `sw` at 0xd8626dc stores 4 bytes to a0 (arg0 at entry) +0xfc.
  The `sb` at 0xd8626e0 stores 1 byte to a0 (arg0 at entry) +0x100.
  The `sw` at 0xd8626e4 stores 4 bytes to a0 (arg0 at entry) +0x104.
  The `sw` at 0xd8626e8 stores 4 bytes to a0 (arg0 at entry) +0x10c.
  The `sw` at 0xd8626ec stores 4 bytes to a0 (arg0 at entry) +0x108.
  The `sw` at 0xd8626f4 stores 4 bytes to a0 (arg0 at entry) +0x110.
  The `sw` at 0xd8626f8 stores 4 bytes to a0 (arg0 at entry) +0x114.
  The `sw` at 0xd862700 stores 4 bytes to a0 (arg0 at entry) +0x118.
  The `sb` at 0xd862708 stores 1 byte to a0 (arg0 at entry) +0x11c.
  12 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd862714, `sw` at 0xd862718, `sw` at 0xd86271c.
  The `sb` at 0xd862734 stores 1 byte to ?.
  The `sw` at 0xd862750 stores 4 bytes to a0 (arg0 at entry) +0x4b4.
  The `sw` at 0xd862758 stores 4 bytes to a0 (arg0 at entry) +0x4b0.
  The `sw` at 0xd86275c stores 4 bytes to a0 (arg0 at entry) +0x4ac.
  The `sw` at 0xd862760 stores 4 bytes to a0 (arg0 at entry) +0x4a4.
  The `sw` at 0xd862764 stores 4 bytes to a0 (arg0 at entry) +0x4a8.
  The `sw` at 0xd862768 stores 4 bytes to a0 (arg0 at entry) +0x4a0.
  The `sb` at 0xd86276c stores 1 byte to a0 (arg0 at entry) +0x49c.
  The `sw` at 0xd862778 stores 4 bytes to a0 (arg0 at entry) +0x4bc.
  The `sw` at 0xd862780 stores 4 bytes to a0 (arg0 at entry) +0x4b8.
  The `bne` branch at 0xd862730 targets 0xd862714, is taken when a0(?) != v1(=a0+868), and falls through when a0(?) == v1(=a0+868).
  The return at 0xd86277c has v0 = 0x1406.

- `fill_bitmap` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd864580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd864580-0xd864780 (512 bytes).
  It occupies 512 bytes.
  2 such `lw` accesses load 4 bytes from ret(XGetImage) +0x48, including `lw` at 0xd8646d4, `lw` at 0xd864718.
  The `lbu` at 0xd864700 loads 1 byte from ?.
  The `sb` at 0xd86470c stores 1 byte to ?.
  The `lw` at 0xd86472c loads 4 bytes from ret(XGetImage) +0x44.
  The `jalr` at 0xd8645d0 calls XCreatePixmap with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=(a3 << 0x3), a3=a4 at entry (arg4), a4=0x1.
  The `jalr` at 0xd8645e8 calls XSetForeground with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=0x0, a3=?.
  The `jalr` at 0xd86460c calls XFillRectangle with a0=a0 at entry (arg0), a1=ret(XCreatePixmap), a2=a2 at entry (arg2), a3=0x0, a4=0x0, a5=(a3 << 0x3), a6=a4 at entry (arg4).
  The `jalr` at 0xd864620 calls XSetForeground with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=0x1, a3=?.
  The `jalr` at 0xd864650 calls XDrawString16 with a0=a0 at entry (arg0), a1=ret(XCreatePixmap), a2=a2 at entry (arg2), a3=a5 at entry (arg5), a4=a6 at entry (arg6), a5=sp-192, a6=0x1.
  The `jalr` at 0xd864678 calls XGetImage with a0=a0 at entry (arg0), a1=ret(XCreatePixmap), a2=0x0, a3=0x0, a4=(a3 << 0x3), a5=a4 at entry (arg4), a6=0x1, a7=0x1.
  The `jalr` at 0xd8646e0 calls (unknown callee) with a0=ret(XGetImage), a1=?, a2=?, a3=?.
  The `jalr` at 0xd864738 calls (unknown callee) with a0=ret(XGetImage), a1=?, a2=?, a3=?.
  The `jalr` at 0xd864764 calls XFreePixmap with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd864684 targets 0xd864748, is taken when v0(=ret(XGetImage)) == 0, and falls through when v0(=ret(XGetImage)) != 0.
  The `beq` branch at 0xd86469c targets 0xd86472c, is taken when s8(=a4) == 0, and falls through when s8(=a4) != 0.
  The `beq` branch at 0xd8646a4 targets 0xd86472c, is taken when s2(=(a3 << 0x3)) == 0, and falls through when s2(=(a3 << 0x3)) != 0.
  The `beq` branch at 0xd8646e8 targets 0xd864710, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `bnel` branch at 0xd864714 targets 0xd8646d8, is taken when s0(?) != s2(=(a3 << 0x3)), and falls through when s0(?) == s2(=(a3 << 0x3)); its branch-likely delay slot `lw t9,72(s3)` at 0xd864718 runs only when taken and is annulled on fall-through.
  The `bne` branch at 0xd864724 targets 0xd8646d0, is taken when s1(?) != s8(=a4), and falls through when s1(?) == s8(=a4).
  The return at 0xd864778 has v0 = ret(XFreePixmap).

- `isvalid` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd864780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd864780-0xd864864 (228 bytes).
  It occupies 228 bytes.
  The `lw` at 0xd864780 loads 4 bytes from a0 (arg0 at entry) +0x14.
  The `lw` at 0xd864784 loads 4 bytes from a0 (arg0 at entry) +0x18.
  The `lw` at 0xd864798 loads 4 bytes from a0 (arg0 at entry) +0xc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x10, including `lw` at 0xd8647bc, `lw` at 0xd864830.
  The `lw` at 0xd8647dc loads 4 bytes from a0 (arg0 at entry) +0x44.
  The `beq` branch at 0xd8647a4 targets 0xd864828, is taken when t0(?) == t9(=0x1), and falls through when t0(?) != t9(=0x1).
  The `bne` branch at 0xd8647b4 targets 0xd864820, is taken when a3(?) < a4(=[a0+12]) (unsigned), and falls through when a3(?) >= a4(=[a0+12]) (unsigned).
  The `bne` branch at 0xd8647c4 targets 0xd864820, is taken when t3(=[a0+16]) < a3(?) (unsigned), and falls through when t3(=[a0+16]) >= a3(?) (unsigned).
  The `bne` branch at 0xd8647cc targets 0xd864820, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0xd8647d4 targets 0xd864820, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `beq` branch at 0xd8647e8 targets 0xd86485c, is taken when a6(=[a0+68]) == 0, and falls through when a6(=[a0+68]) != 0.
  The `beq` branch at 0xd8647f0 targets 0xd864848, is taken when t0(?) == t9(=0x1), and falls through when t0(?) != t9(=0x1).
  The `bne` branch at 0xd864828 targets 0xd864820, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0xd864838 targets 0xd864820, is taken when t3(=[a0+16]) < a1 (unsigned), and falls through when t3(=[a0+16]) >= a1 (unsigned).
  The `beq` branch at 0xd864840 targets 0xd8647dc and is always taken.
  The return at 0xd864818 has v0 = ?.
  The return at 0xd864820 has v0 = 0x0.
  The return at 0xd864854 has v0 = ?.
  The return at 0xd86485c has v0 = a0+44.

- `DRI_glXUseXFont` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd864880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd864880-0xd864d74 (1268 bytes).
  It occupies 1268 bytes.
  The `lw` at 0xd8648a8 loads 4 bytes from abs 0x1014.
  The `lw` at 0xd8648b0 loads 4 bytes from [0x1014] +0x11c.
  The `lw` at 0xd8648b8 loads 4 bytes from [[0x1014]+284] +0x518.
  The `lw` at 0xd8648c4 loads 4 bytes from [[0x1014]+284] +0x520.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd8648dc, `lw` at 0xd86495c, `lw` at 0xd864ab4.
  The `lh` at 0xd864904 loads 2 bytes from ret(XQueryFont) +0x3a.
  The `lh` at 0xd864908 loads 2 bytes from ret(XQueryFont) +0x2c.
  The `lh` at 0xd86490c loads 2 bytes from ret(XQueryFont) +0x3e.
  The `lh` at 0xd864910 loads 2 bytes from ret(XQueryFont) +0x40.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd864974, `sw` at 0xd864d68.
  2 such `lw` accesses load 4 bytes from [[[0x1014]+284]+1304] +0x84, including `lw` at 0xd864a5c, `lw` at 0xd864a7c.
  2 such `lw` accesses load 4 bytes from [[[0x1014]+284]+1304] +0x8c, including `lw` at 0xd864a64, `lw` at 0xd864a88.
  The `lw` at 0xd864a74 loads 4 bytes from ([[[[0x1014]+284]+1304]+140] + ((([[[[0x1014]+284]+1304]+132] << 0x2) + [[[[0x1014]+284]+1304]+132]) << 0x4)) +0x38.
  The `lw` at 0xd864aa0 loads 4 bytes from ([[[[0x1014]+284]+1304]+140] + ((([[[[0x1014]+284]+1304]+132] << 0x2) + [[[[0x1014]+284]+1304]+132]) << 0x4)) +0x34.
  5 such `lh` accesses load 2 bytes from ?, including `lh` at 0xd864b4c, `lh` at 0xd864b50, `lh` at 0xd864b58.
  The `jalr` at 0xd8648c8 calls XQueryFont with a0=[[[0x1014]+284]+1304], a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd864930 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd864950 calls XFreeFontInfo with a0=0x0, a1=?, a2=0x1, a3=?.
  The `jalr` at 0xd864988 calls glGetIntegerv with a0=0xcf0, a1=sp-336, a2=?, a3=?.
  The `jalr` at 0xd864998 calls glGetIntegerv with a0=0xcf1, a1=sp-332, a2=?, a3=?.
  The `jalr` at 0xd8649a8 calls glGetIntegerv with a0=0xcf2, a1=sp-328, a2=?, a3=?.
  The `jalr` at 0xd8649b8 calls glGetIntegerv with a0=0xcf3, a1=sp-324, a2=?, a3=?.
  The `jalr` at 0xd8649c8 calls glGetIntegerv with a0=0xcf4, a1=sp-320, a2=?, a3=?.
  The `jalr` at 0xd8649d8 calls glGetIntegerv with a0=0xcf5, a1=sp-316, a2=?, a3=?.
  The `jalr` at 0xd8649e8 calls glPixelStorei with a0=0xcf0, a1=0x0, a2=?, a3=?.
  The `jalr` at 0xd8649f8 calls glPixelStorei with a0=0xcf1, a1=0x0, a2=?, a3=?.
  The `jalr` at 0xd864a08 calls glPixelStorei with a0=0xcf2, a1=0x0, a2=?, a3=?.
  The `jalr` at 0xd864a18 calls glPixelStorei with a0=0xcf3, a1=0x0, a2=?, a3=?.
  The `jalr` at 0xd864a28 calls glPixelStorei with a0=0xcf4, a1=0x0, a2=?, a3=?.
  The `jalr` at 0xd864a38 calls glPixelStorei with a0=0xcf5, a1=0x1, a2=?, a3=?.
  The `jalr` at 0xd864a54 calls XCreatePixmap with a0=[[[0x1014]+284]+1304], a1=[[[0x1014]+284]+1312], a2=0xa, a3=0xa, a4=0x1.
  The `jalr` at 0xd864abc calls XCreateGC with a0=[[[0x1014]+284]+1304], a1=ret(XCreatePixmap), a2=0x400c, a3=sp-312, a5=[([[[[0x1014]+284]+1304]+140] + ((([[[[0x1014]+284]+1304]+132] << 0x2) + [[[[0x1014]+284]+1304]+132]) << 0x4))+52], a6=((([[[[0x1014]+284]+1304]+132] << 0x2) + [[[[0x1014]+284]+1304]+132]) << 0x4), a7=[[[[0x1014]+284]+1304]+132].
  The `jalr` at 0xd864ad0 calls XFreePixmap with a0=[[[0x1014]+284]+1304], a1=?, a2=?, a3=?.
  The `jalr` at 0xd864b8c calls glNewList with a0=?, a1=0x1300, a2=?, a3=?.
  The `jalr` at 0xd864bc0 calls memset with a0=ret(malloc), a1=0x0, a2=?, a3=?; fp f14=f26.
  The `bgezall` at 0xd864bf0 calls fill_bitmap [0xd864580] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd864c14 calls glBitmap with a0=?, a1=?, a2=?, a3=?, a6=ret(malloc); fp f17=f26.
  The `jalr` at 0xd864c20 calls glEndList with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0xd864c40 calls isvalid [0xd864780] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd864c74 calls glBitmap with a0=0x0, a1=0x0, a2=?, a3=?, a6=0x0; fp f14=f26, f15=f26, f17=f26.
  The `jalr` at 0xd864cb4 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0xd864ccc calls XFreeFontInfo with a0=0x0, a1=?, a2=0x1, a3=?.
  The `jalr` at 0xd864cdc calls XFreeGC with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd864cf0 calls glPixelStorei with a0=0xcf0, a1=?, a2=?, a3=?.
  The `jalr` at 0xd864d00 calls glPixelStorei with a0=0xcf1, a1=?, a2=?, a3=?.
  The `jalr` at 0xd864d10 calls glPixelStorei with a0=0xcf2, a1=?, a2=?, a3=?.
  The `jalr` at 0xd864d20 calls glPixelStorei with a0=0xcf3, a1=?, a2=?, a3=?.
  The `jalr` at 0xd864d30 calls glPixelStorei with a0=0xcf4, a1=?, a2=?, a3=?.
  The `jalr` at 0xd864d40 calls glPixelStorei with a0=0xcf5, a1=?, a2=?, a3=?.
  The `bne` branch at 0xd8648d0 targets 0xd864900, is taken when v0(=ret(XQueryFont)) != 0, and falls through when v0(=ret(XQueryFont)) == 0.
  The `beq` branch at 0xd8648e0 targets 0xd864d50, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `bne` branch at 0xd864938 targets 0xd864980, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `bne` branch at 0xd864960 targets 0xd8648e8, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0xd864970 targets 0xd8648e4 and is always taken.
  The `blez` branch at 0xd864adc targets 0xd864cb4, is taken when a3(=a2) <= 0 (signed), and falls through when a3(=a2) > 0 (signed).
  The `beq` branch at 0xd864b3c targets 0xd864c38 and is always taken.
  The `beq` branch at 0xd864b94 targets 0xd864c58, is taken when s4(=one of 0x0, 0x1) == 0, and falls through when s4(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0xd864ba0 targets 0xd864c5c, is taken when s4(?) == 0, and falls through when s4(?) != 0.
  The `beq` branch at 0xd864ba8 targets 0xd864c5c, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0xd864c30 targets 0xd864c84, is taken when s1(?) == ra(?), and falls through when s1(?) != ra(?).
  The `bne` branch at 0xd864c48 targets 0xd864b4c, is taken when v0(=ret(isvalid)) != 0, and falls through when v0(=ret(isvalid)) == 0.
  The `beq` branch at 0xd864c50 targets 0xd864b44 and is always taken.
  The `beq` branch at 0xd864c7c targets 0xd864c20 and is always taken.
  The `beq` branch at 0xd864d48 targets 0xd8648e8 and is always taken.
  The return at 0xd8648f4 has v0 = one of ret(XQueryFont), ?, ret(XFreeFontInfo), ret(glPixelStorei).
  The return at 0xd864d6c has v0 = ?.
  The instructions from 0xd8648fc to 0xd8648fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd864978 to 0xd86497c are not reached by any path from the entry, and their branches are not listed.

- `find_display` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd864dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd864dc0-0xd864e58 (152 bytes).
  It occupies 152 bytes.
  The `jalr` at 0xd864de0 calls XextFindDisplay with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0xd864e0c calls XextAddDisplay with a0=[0xd882af0], a1=a0 at entry (arg0), a2=[0xd882af4], a3=0xd880fe0, a4=0x0, a5=0x0.
  The `jalr` at 0xd864e30 calls XextCreateExtension with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[0xd882af0].
  The `beq` branch at 0xd864dd0 targets 0xd864e2c, is taken when a4(=[0xd882af0]) == 0, and falls through when a4(=[0xd882af0]) != 0.
  The `bne` branch at 0xd864de8 targets 0xd864e18, is taken when v0(=ret(XextFindDisplay)) != 0, and falls through when v0(=ret(XextFindDisplay)) == 0.
  The `bne` branch at 0xd864e3c targets 0xd864dd8, is taken when v0(=ret(XextCreateExtension)) != 0, and falls through when v0(=ret(XextCreateExtension)) == 0.
  The return at 0xd864e24 has v0 = one of ret(XextFindDisplay), ret(XextAddDisplay).
  The return at 0xd864e50 has v0 = 0x0.

- `close_display` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd864e80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd864e80-0xd864eb8 (56 bytes).
  It occupies 56 bytes.
  The `jalr` at 0xd864ea0 calls XextRemoveDisplay with a0=[0xd882af0], a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd864eb0 has v0 = ret(XextRemoveDisplay).

- `XF86DRIQueryExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd864ec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd864ec0-0xd864f44 (132 bytes).
  It occupies 132 bytes.
  2 such `lw` accesses load 4 bytes from ret(find_display) +0x8, including `lw` at 0xd864ef8, `lw` at 0xd864f18.
  The `lw` at 0xd864f10 loads 4 bytes from [ret(find_display)+8] +0x8.
  The `sw` at 0xd864f14 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0xd864f24 loads 4 bytes from [ret(find_display)+8] +0xc.
  The `sw` at 0xd864f28 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0xd864ee4 calls find_display [0xd864dc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0xd864ef0 targets 0xd864f34, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0xd864efc targets 0xd864f38, is taken when a5(=[ret(find_display)+8]) == 0, and falls through when a5(=[ret(find_display)+8]) != 0.
  The return at 0xd864f2c has v0 = 0x1.
  The return at 0xd864f3c has v0 = 0x0.

- `XF86DRIQueryVersion` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd864f80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd864f80-0xd865134 (436 bytes).
  It occupies 436 bytes.
  2 such `lw` accesses load 4 bytes from ret(find_display) +0x8, including `lw` at 0xd864fc4, `lw` at 0xd865028.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd864fd0, `lw` at 0xd865078, `lw` at 0xd8650e8.
  The `lw` at 0xd864fdc loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd864fe8, `lw` at 0xd865010, `lw` at 0xd8650e4.
  The `lw` at 0xd864fec loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd865000 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd865004, `sb` at 0xd86504c.
  The `sh` at 0xd86500c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd865014 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86501c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd865024 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd865034 loads 4 bytes from [ret(find_display)+8] +0x4.
  The `sb` at 0xd865040 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd865064 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0xd86506c stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0xd865074 stores 4 bytes to a3 (arg3 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd865084, `lw` at 0xd8650f4.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd865090, `lw` at 0xd865100.
  The `bgezall` at 0xd864fb4 calls find_display [0xd864dc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd864fe0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865048 calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x0, a3=0x0, a4=[[ret(find_display)+8]+4], a5=[a0+96]+1, a6=[a0+108]+4, a7=0x1.
  The `jalr` at 0xd865088 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86509c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8650d8 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8650f8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86510c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865124 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882af4], a2=?, a3=?.
  The `beq` branch at 0xd864fbc targets 0xd86511c, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0xd864fc8 targets 0xd865120, is taken when at(=[ret(find_display)+8]) == 0, and falls through when at(=[ret(find_display)+8]) != 0.
  The `beq` branch at 0xd864fd4 targets 0xd864fe8, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd864ff8 targets 0xd8650d8, is taken when v1(=[a0+112]) < a0(=[a0+108]+4) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd865050 targets 0xd8650e8, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd86507c targets 0xd865090, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd865094 targets 0xd8650a8, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8650e0 targets 0xd865000 and is always taken.
  The `beq` branch at 0xd8650ec targets 0xd865100, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd865104 targets 0xd865114, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd865114 targets 0xd8650c0 and is always taken.
  The `beq` branch at 0xd86512c targets 0xd8650c0 and is always taken.
  The return at 0xd8650b8 has v0 = 0x1.
  The return at 0xd8650d0 has v0 = 0x0.

- `XF86DRIQueryDirectRenderingCapable` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd865140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd865140-0xd8652f4 (436 bytes).
  It occupies 436 bytes.
  2 such `lw` accesses load 4 bytes from ret(find_display) +0x8, including `lw` at 0xd865180, `lw` at 0xd8651e8.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86518c, `lw` at 0xd865224, `lw` at 0xd865280.
  The `lw` at 0xd865198 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8651a4, `lw` at 0xd8651d0, `lw` at 0xd86527c.
  The `lw` at 0xd8651a8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd8651bc stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd8651c4, `sb` at 0xd865210.
  The `sh` at 0xd8651cc stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd8651d4 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8651dc stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd8651e4 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd8651f0 loads 4 bytes from [ret(find_display)+8] +0x4.
  The `sb` at 0xd8651f8 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd865204 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd865220 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd865230, `lw` at 0xd86528c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd86523c, `lw` at 0xd865298.
  The `bgezall` at 0xd865170 calls find_display [0xd864dc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86519c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86520c calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(find_display)+8]+4], a5=a1 at entry (arg1), a6=0x1, a7=[a0+108]+8.
  The `jalr` at 0xd865234 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865248 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865270 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865290 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8652a4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8652d4 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882af4], a2=?, a3=?.
  The `beq` branch at 0xd865178 targets 0xd8652c8, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0xd865184 targets 0xd8652cc, is taken when at(=[ret(find_display)+8]) == 0, and falls through when at(=[ret(find_display)+8]) != 0.
  The `beq` branch at 0xd865190 targets 0xd8651a4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd8651b4 targets 0xd86526c, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd865214 targets 0xd865280, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd865228 targets 0xd86523c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd865240 targets 0xd865254, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd865278 targets 0xd8651b8 and is always taken.
  The `beq` branch at 0xd865284 targets 0xd865298, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86529c targets 0xd8652b0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd865264 has v0 = 0x1.
  The return at 0xd8652c0 has v0 = 0x0.
  The return at 0xd8652ec has v0 = 0x0.

- `XF86DRIOpenConnection` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd865300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd865300-0xd865564 (612 bytes).
  It occupies 612 bytes.
  2 such `lw` accesses load 4 bytes from ret(find_display) +0x8, including `lw` at 0xd865344, `lw` at 0xd8653a8.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd865350, `lw` at 0xd86544c, `lw` at 0xd8654a0.
  The `lw` at 0xd86535c loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd865368, `lw` at 0xd865394, `lw` at 0xd8654f4.
  The `lw` at 0xd86536c loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd865380 stores 4 bytes to a0 (arg0 at entry) +0x64.
  The `sh` at 0xd865388 stores 2 bytes to [a0+108] +0x2.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86538c, `sb` at 0xd8653d0.
  The `lw` at 0xd865390 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86539c stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8653a4 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `lw` at 0xd8653b0 loads 4 bytes from [ret(find_display)+8] +0x4.
  The `sb` at 0xd8653b8 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd8653c4 stores 4 bytes to [a0+108] +0x4.
  2 such `sd` accesses store 8 bytes to a2 (arg2 at entry) +0x0, including `sd` at 0xd8653e4, `sd` at 0xd8653f4.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0xd865428, `sw` at 0xd865560.
  3 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd865458, `lw` at 0xd8654ac, `lw` at 0xd86550c.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd865464, `lw` at 0xd8654b8, `lw` at 0xd865518.
  The `bgezall` at 0xd865334 calls find_display [0xd864dc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd865360 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8653cc calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x0, a3=0x0, a4=[[ret(find_display)+8]+4], a5=a1 at entry (arg1), a6=0x2, a7=[a0+108]+8.
  The `jalr` at 0xd86541c calls calloc with a0=?, a1=0x1, a2=?, a3=a3 at entry (arg3).
  The `jalr` at 0xd865444 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=-0x4, a3=?.
  The `jalr` at 0xd86545c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865470 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865498 calls _XReadPad with a0=a0 at entry (arg0), a1=ret(calloc), a2=?, a3=?.
  The `jalr` at 0xd8654b0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8654c4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8654e8 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865510 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865524 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86554c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882af4], a2=?, a3=?.
  The `beq` branch at 0xd86533c targets 0xd865540, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0xd865348 targets 0xd865544, is taken when at(=[ret(find_display)+8]) == 0, and falls through when at(=[ret(find_display)+8]) != 0.
  The `beq` branch at 0xd865354 targets 0xd865368, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd865378 targets 0xd8654e4, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd8653d4 targets 0xd865500, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd8653fc targets 0xd86555c, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0xd86540c targets 0xd865418, is taken when a2(?) == t8(=-0x1), and falls through when a2(?) != t8(=-0x1).
  The `bne` branch at 0xd86542c targets 0xd865490, is taken when v0(=ret(calloc)) != 0, and falls through when v0(=ret(calloc)) == 0.
  The `beq` branch at 0xd865450 targets 0xd865464, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd865468 targets 0xd86547c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8654a4 targets 0xd8654b8, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd8654bc targets 0xd8654d0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8654f0 targets 0xd86537c and is always taken.
  The `beq` branch at 0xd865504 targets 0xd865518, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86551c targets 0xd86552c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86552c targets 0xd8654d0 and is always taken.
  The `beq` branch at 0xd865554 targets 0xd8654d0 and is always taken.
  The `beq` branch at 0xd86555c targets 0xd8654a0 and is always taken.
  The return at 0xd865488 has v0 = 0x0.
  The return at 0xd8654dc has v0 = one of 0x0, 0x1.
  The instructions from 0xd8654f8 to 0xd8654fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd865534 to 0xd86553c are not reached by any path from the entry, and their branches are not listed.

- `XF86DRIAuthConnection` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd865580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd865580-0xd865748 (456 bytes).
  It occupies 456 bytes.
  2 such `lw` accesses load 4 bytes from ret(find_display) +0x8, including `lw` at 0xd8655c0, `lw` at 0xd86562c.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd8655cc, `lw` at 0xd865670, `lw` at 0xd8656c0.
  The `lw` at 0xd8655d8 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8655e4, `lw` at 0xd865614, `lw` at 0xd865718.
  The `lw` at 0xd8655e8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd865600 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd865608, `sb` at 0xd865650.
  The `sh` at 0xd865610 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd865618 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd865620 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd865628 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd865634 loads 4 bytes from [ret(find_display)+8] +0x4.
  The `sb` at 0xd865638 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86563c stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd865644 stores 4 bytes to [a0+108] +0x8.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86567c, `lw` at 0xd8656cc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd865688, `lw` at 0xd8656d8.
  The `bgezall` at 0xd8655b0 calls find_display [0xd864dc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8655dc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865658 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=a1 at entry (arg1), a5=0xb, a6=[[ret(find_display)+8]+4], a7=[a0+96]+1.
  The `jalr` at 0xd865680 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865694 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8656d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8656e4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86570c calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865728 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882af4], a2=?, a3=?.
  The `beq` branch at 0xd8655b8 targets 0xd86571c, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0xd8655c4 targets 0xd865720, is taken when at(=[ret(find_display)+8]) == 0, and falls through when at(=[ret(find_display)+8]) != 0.
  The `beq` branch at 0xd8655d0 targets 0xd8655e4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd8655f4 targets 0xd865708, is taken when v1(=[a0+112]) < a0(=[a0+108]+12) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd865660 targets 0xd8656c0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd865668 targets 0xd8656c0, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0xd865674 targets 0xd865688, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86568c targets 0xd8656a0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8656c4 targets 0xd8656d8, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd8656dc targets 0xd8656f0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd865714 targets 0xd8655f8 and is always taken.
  The return at 0xd8656b0 has v0 = 0x1.
  The return at 0xd865700 has v0 = 0x0.
  The return at 0xd865740 has v0 = 0x0.
  The instructions from 0xd8656b8 to 0xd8656bc are not reached by any path from the entry, and their branches are not listed.

- `XF86DRICloseConnection` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd865780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd865780-0xd8658c0 (320 bytes).
  It occupies 320 bytes.
  2 such `lw` accesses load 4 bytes from ret(find_display) +0x8, including `lw` at 0xd8657bc, `lw` at 0xd865824.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd8657c8, `lw` at 0xd86583c.
  The `lw` at 0xd8657d4 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8657e0, `lw` at 0xd86580c, `lw` at 0xd865890.
  The `lw` at 0xd8657e4 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd8657f8 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd865800, `sb` at 0xd865838.
  The `sh` at 0xd865808 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd865810 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd865818 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd865820 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86582c loads 4 bytes from [ret(find_display)+8] +0x4.
  The `sb` at 0xd865830 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd865834 stores 4 bytes to [a0+108] +0x4.
  The `lw` at 0xd865848 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd865854 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd8657ac calls find_display [0xd864dc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8657d8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86584c calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x3, a3=[[ret(find_display)+8]+4], a4=[a0+96]+1, a5=[a0+108]+8, a6=0x2.
  The `jalr` at 0xd865860 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865884 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8658a0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882af4], a2=?, a3=?.
  The `beq` branch at 0xd8657b4 targets 0xd865894, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0xd8657c0 targets 0xd865898, is taken when at(=[ret(find_display)+8]) == 0, and falls through when at(=[ret(find_display)+8]) != 0.
  The `beq` branch at 0xd8657cc targets 0xd8657e0, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd8657f0 targets 0xd865884, is taken when v0(=[a0+112]) < v1(=[a0+108]+8) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd865840 targets 0xd865854, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd865858 targets 0xd86586c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86588c targets 0xd8657f8 and is always taken.
  The return at 0xd86587c has v0 = 0x1.
  The return at 0xd8658b8 has v0 = 0x0.

- `XF86DRIGetClientDriverName` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8658c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8658c0-0xd865b2c (620 bytes).
  It occupies 620 bytes.
  2 such `lw` accesses load 4 bytes from ret(find_display) +0x8, including `lw` at 0xd86590c, `lw` at 0xd865974.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd865918, `lw` at 0xd865a20, `lw` at 0xd865a74.
  The `lw` at 0xd865924 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd865930, `lw` at 0xd865960, `lw` at 0xd865ad0.
  The `lw` at 0xd865934 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd865948 stores 4 bytes to a0 (arg0 at entry) +0x64.
  The `sh` at 0xd865950 stores 2 bytes to [a0+108] +0x2.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd865958, `sb` at 0xd86599c.
  The `lw` at 0xd86595c loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd865968 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sw` at 0xd865970 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `lw` at 0xd86597c loads 4 bytes from [ret(find_display)+8] +0x4.
  The `sb` at 0xd865984 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd865990 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd8659b8 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0xd8659c0 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0xd8659c8 stores 4 bytes to a4 (arg4 at entry) +0x0.
  2 such `sw` accesses store 4 bytes to a5 (arg5 at entry) +0x0, including `sw` at 0xd8659fc, `sw` at 0xd865b28.
  3 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd865a2c, `lw` at 0xd865a80, `lw` at 0xd865ae0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd865a38, `lw` at 0xd865a8c, `lw` at 0xd865aec.
  The `bgezall` at 0xd8658fc calls find_display [0xd864dc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd865928 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865998 calls _XReply with a0=a0 at entry (arg0), a1=sp-112, a2=0x0, a3=0x0, a4=[[ret(find_display)+8]+4], a5=a1 at entry (arg1), a6=0x4, a7=[a0+108]+8.
  The `jalr` at 0xd8659f0 calls calloc with a0=?, a1=0x1, a2=?, a3=a5 at entry (arg5).
  The `jalr` at 0xd865a18 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=-0x4, a3=?.
  The `jalr` at 0xd865a30 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865a44 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865a6c calls _XReadPad with a0=a0 at entry (arg0), a1=ret(calloc), a2=?, a3=?.
  The `jalr` at 0xd865a84 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865a98 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865ac4 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865ae4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865af8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865b14 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882af4], a2=?, a3=?.
  The `beq` branch at 0xd865904 targets 0xd865b08, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0xd865910 targets 0xd865b0c, is taken when at(=[ret(find_display)+8]) == 0, and falls through when at(=[ret(find_display)+8]) != 0.
  The `beq` branch at 0xd86591c targets 0xd865930, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd865940 targets 0xd865ac0, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd8659a0 targets 0xd865ad4, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd8659d0 targets 0xd865b24, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0xd8659e0 targets 0xd8659ec, is taken when a2(?) == v1(=-0x1), and falls through when a2(?) != v1(=-0x1).
  The `bne` branch at 0xd865a00 targets 0xd865a64, is taken when v0(=ret(calloc)) != 0, and falls through when v0(=ret(calloc)) == 0.
  The `beq` branch at 0xd865a24 targets 0xd865a38, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd865a3c targets 0xd865a50, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd865a78 targets 0xd865a8c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd865a90 targets 0xd865aa4, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd865acc targets 0xd865944 and is always taken.
  The `beq` branch at 0xd865ad8 targets 0xd865aec, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd865af0 targets 0xd865b00, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd865b00 targets 0xd865aa4 and is always taken.
  The `beq` branch at 0xd865b1c targets 0xd865aa4 and is always taken.
  The `beq` branch at 0xd865b24 targets 0xd865a74 and is always taken.
  The return at 0xd865a5c has v0 = 0x0.
  The return at 0xd865ab0 has v0 = one of 0x0, 0x1.
  The instructions from 0xd865ab8 to 0xd865abc are not reached by any path from the entry, and their branches are not listed.

- `XF86DRICreateContext` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd865b40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd865b40-0xd865d1c (476 bytes).
  It occupies 476 bytes.
  2 such `lw` accesses load 4 bytes from ret(find_display) +0x8, including `lw` at 0xd865b88, `lw` at 0xd865bf0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd865b94, `lw` at 0xd865c5c, `lw` at 0xd865cb4.
  The `lw` at 0xd865ba0 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd865bac, `lw` at 0xd865bd8, `lw` at 0xd865cb0.
  The `lw` at 0xd865bb0 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd865bc4 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd865bcc, `sb` at 0xd865c00.
  The `sh` at 0xd865bd4 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd865bdc loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd865be4 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd865bec stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd865bf8 loads 4 bytes from [ret(find_display)+8] +0x4.
  The `sb` at 0xd865bfc stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd865c04 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `sw` at 0xd865c08 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd865c0c stores 4 bytes to [a0+108] +0x8.
  The `lw` at 0xd865c10 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `sw` at 0xd865c3c stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0xd865c48 stores 4 bytes to ?.
  The `sw` at 0xd865c58 stores 4 bytes to a4 (arg4 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd865c68, `lw` at 0xd865cc0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd865c74, `lw` at 0xd865ccc.
  The `bgezall` at 0xd865b78 calls find_display [0xd864dc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd865ba4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865c18 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[a2+4], a3=0x5, a4=[[ret(find_display)+8]+4], a5=[a0+96]+1, a6=[a0+108]+16, a7=0x4.
  The `jalr` at 0xd865c44 calls _XReply with a0=a0 at entry (arg0), a1=sp-112, a2=0x0, a3=0x0.
  The `jalr` at 0xd865c6c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865c80 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865ca4 calls _XFlush with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0xd865cc4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865cd8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865d0c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882af4], a2=?, a3=?.
  The `beq` branch at 0xd865b80 targets 0xd865d00, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0xd865b8c targets 0xd865d04, is taken when at(=[ret(find_display)+8]) == 0, and falls through when at(=[ret(find_display)+8]) != 0.
  The `beq` branch at 0xd865b98 targets 0xd865bac, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd865bbc targets 0xd865ca0, is taken when v1(=[a0+112]) < a0(=[a0+108]+16) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+16) (unsigned).
  The `beq` branch at 0xd865c4c targets 0xd865cb4, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd865c60 targets 0xd865c74, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd865c78 targets 0xd865c8c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd865cac targets 0xd865bc0 and is always taken.
  The `beq` branch at 0xd865cb8 targets 0xd865ccc, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd865cd0 targets 0xd865ce4, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd865d14 targets 0xd865c8c and is always taken.
  The return at 0xd865c98 has v0 = one of 0x0, 0x1.
  The return at 0xd865cf0 has v0 = 0x0.
  The instructions from 0xd865cf8 to 0xd865cfc are not reached by any path from the entry, and their branches are not listed.

- `XF86DRIDestroyContext` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd865d40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd865d40-0xd865e8c (332 bytes).
  It occupies 332 bytes.
  2 such `lw` accesses load 4 bytes from ret(find_display) +0x8, including `lw` at 0xd865d80, `lw` at 0xd865de8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd865d8c, `lw` at 0xd865e04.
  The `lw` at 0xd865d98 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd865da4, `lw` at 0xd865dd0, `lw` at 0xd865e5c.
  The `lw` at 0xd865da8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd865dbc stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd865dc4, `sb` at 0xd865e00.
  The `sh` at 0xd865dcc stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd865dd4 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd865ddc stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd865de4 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd865df0 loads 4 bytes from [ret(find_display)+8] +0x4.
  The `sb` at 0xd865df4 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd865df8 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd865dfc stores 4 bytes to [a0+108] +0x8.
  The `lw` at 0xd865e10 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd865e1c loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd865d70 calls find_display [0xd864dc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd865d9c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865e14 calls (unknown callee) with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=a1 at entry (arg1), a3=0x6, a4=[[ret(find_display)+8]+4], a5=[a0+96]+1, a6=[a0+108]+12, a7=0x3.
  The `jalr` at 0xd865e28 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865e50 calls _XFlush with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0xd865e6c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882af4], a2=?, a3=?.
  The `beq` branch at 0xd865d78 targets 0xd865e60, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0xd865d84 targets 0xd865e64, is taken when at(=[ret(find_display)+8]) == 0, and falls through when at(=[ret(find_display)+8]) != 0.
  The `beq` branch at 0xd865d90 targets 0xd865da4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd865db4 targets 0xd865e4c, is taken when v0(=[a0+112]) < v1(=[a0+108]+12) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd865e08 targets 0xd865e1c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd865e20 targets 0xd865e34, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd865e58 targets 0xd865db8 and is always taken.
  The return at 0xd865e44 has v0 = 0x1.
  The return at 0xd865e84 has v0 = 0x0.

- `XF86DRICreateDrawable` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd865ec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd865ec0-0xd866078 (440 bytes).
  It occupies 440 bytes.
  2 such `lw` accesses load 4 bytes from ret(find_display) +0x8, including `lw` at 0xd865f04, `lw` at 0xd865f70.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd865f10, `lw` at 0xd865fb0, `lw` at 0xd86602c.
  The `lw` at 0xd865f1c loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd865f28, `lw` at 0xd865f58, `lw` at 0xd866028.
  The `lw` at 0xd865f2c loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd865f40 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd865f48, `sb` at 0xd865f9c.
  The `sh` at 0xd865f50 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd865f54 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd865f60 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sw` at 0xd865f6c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `lw` at 0xd865f78 loads 4 bytes from [ret(find_display)+8] +0x4.
  The `sb` at 0xd865f7c stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd865f84 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd865f90 stores 4 bytes to [a0+108] +0x8.
  The `sw` at 0xd865fac stores 4 bytes to a3 (arg3 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd865fbc, `lw` at 0xd866038.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd865fc8, `lw` at 0xd866044.
  The `bgezall` at 0xd865ef4 calls find_display [0xd864dc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd865f20 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865f98 calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x0, a3=0x0, a4=[[ret(find_display)+8]+4], a5=a2 at entry (arg2), a6=a1 at entry (arg1), a7=0x7.
  The `jalr` at 0xd865fc0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd865fd4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86601c calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86603c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd866050 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd866068 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882af4], a2=?, a3=?.
  The `beq` branch at 0xd865efc targets 0xd866060, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0xd865f08 targets 0xd866064, is taken when at(=[ret(find_display)+8]) == 0, and falls through when at(=[ret(find_display)+8]) != 0.
  The `beq` branch at 0xd865f14 targets 0xd865f28, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd865f38 targets 0xd866018, is taken when v1(=[a0+112]) < a0(=[a0+108]+12) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd865fa0 targets 0xd86602c, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd865fb4 targets 0xd865fc8, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd865fcc targets 0xd865fe0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd866024 targets 0xd865f3c and is always taken.
  The `beq` branch at 0xd866030 targets 0xd866044, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd866048 targets 0xd866058, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd866058 targets 0xd866000 and is always taken.
  The `beq` branch at 0xd866070 targets 0xd866000 and is always taken.
  The return at 0xd865ff0 has v0 = 0x1.
  The return at 0xd866010 has v0 = 0x0.
  The instructions from 0xd865ff8 to 0xd865ffc are not reached by any path from the entry, and their branches are not listed.

- `XF86DRIDestroyDrawable` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd866080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd866080-0xd8661cc (332 bytes).
  It occupies 332 bytes.
  2 such `lw` accesses load 4 bytes from ret(find_display) +0x8, including `lw` at 0xd8660c0, `lw` at 0xd866128.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd8660cc, `lw` at 0xd866144.
  The `lw` at 0xd8660d8 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8660e4, `lw` at 0xd866110, `lw` at 0xd86619c.
  The `lw` at 0xd8660e8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd8660fc stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd866104, `sb` at 0xd866140.
  The `sh` at 0xd86610c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd866114 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86611c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd866124 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd866130 loads 4 bytes from [ret(find_display)+8] +0x4.
  The `sb` at 0xd866134 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd866138 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd86613c stores 4 bytes to [a0+108] +0x8.
  The `lw` at 0xd866150 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86615c loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd8660b0 calls find_display [0xd864dc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8660dc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd866154 calls (unknown callee) with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=a1 at entry (arg1), a3=0x8, a4=[[ret(find_display)+8]+4], a5=[a0+96]+1, a6=[a0+108]+12, a7=0x3.
  The `jalr` at 0xd866168 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd866190 calls _XFlush with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0xd8661ac calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882af4], a2=?, a3=?.
  The `beq` branch at 0xd8660b8 targets 0xd8661a0, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0xd8660c4 targets 0xd8661a4, is taken when at(=[ret(find_display)+8]) == 0, and falls through when at(=[ret(find_display)+8]) != 0.
  The `beq` branch at 0xd8660d0 targets 0xd8660e4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd8660f4 targets 0xd86618c, is taken when v0(=[a0+112]) < v1(=[a0+108]+12) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd866148 targets 0xd86615c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd866160 targets 0xd866174, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd866198 targets 0xd8660f8 and is always taken.
  The return at 0xd866184 has v0 = 0x1.
  The return at 0xd8661c4 has v0 = 0x0.

- `XF86DRIGetDrawableInfo` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd866200 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd866200-0xd8664ec (748 bytes).
  It occupies 748 bytes.
  2 such `lw` accesses load 4 bytes from ret(find_display) +0x8, including `lw` at 0xd866254, `lw` at 0xd8662c0.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd866260, `lw` at 0xd8663d8, `lw` at 0xd86648c.
  The `lw` at 0xd86626c loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd866278, `lw` at 0xd8662a8, `lw` at 0xd866450.
  The `lw` at 0xd86627c loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd866290 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd866298, `sb` at 0xd8662ec.
  The `sh` at 0xd8662a0 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd8662a4 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8662b0 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8662bc stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `lw` at 0xd8662c8 loads 4 bytes from [ret(find_display)+8] +0x4.
  The `sb` at 0xd8662cc stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd8662d4 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd8662e0 stores 4 bytes to [a0+108] +0x8.
  The `sw` at 0xd86631c stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0xd866324 stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `sw` at 0xd86632c stores 4 bytes to a5 (arg5 at entry) +0x0.
  The `sw` at 0xd866334 stores 4 bytes to a6 (arg6 at entry) +0x0.
  The `sw` at 0xd86633c stores 4 bytes to a7 (arg7 at entry) +0x0.
  9 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd866344, `sw` at 0xd86634c, `sw` at 0xd866354.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd86636c, `lw` at 0xd8663a4.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd8663e4, `lw` at 0xd86649c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd8663f0, `lw` at 0xd8664a8.
  The `bgezall` at 0xd866244 calls find_display [0xd864dc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd866270 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8662e8 calls _XReply with a0=a0 at entry (arg0), a1=sp-192, a2=0x1, a3=0x0, a4=[[ret(find_display)+8]+4], a5=a2 at entry (arg2), a6=a1 at entry (arg1), a7=0x9.
  The `jalr` at 0xd86638c calls calloc with a0=?, a1=0x1, a2=?, a3=?.
  The `jalr` at 0xd8663c4 calls calloc with a0=?, a1=0x1, a2=?, a3=?.
  The `jalr` at 0xd8663e8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8663fc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd866444 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd866460 calls _XRead with a0=a0 at entry (arg0), a1=ret(calloc), a2=?, a3=?.
  The `jalr` at 0xd866480 calls _XRead with a0=a0 at entry (arg0), a1=ret(calloc), a2=?, a3=?.
  The `jalr` at 0xd8664a0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8664b4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8664cc calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882af4], a2=?, a3=?.
  The `beq` branch at 0xd86624c targets 0xd8664c4, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0xd866258 targets 0xd8664c8, is taken when at(=[ret(find_display)+8]) == 0, and falls through when at(=[ret(find_display)+8]) != 0.
  The `beq` branch at 0xd866264 targets 0xd866278, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd866288 targets 0xd866440, is taken when v1(=[a0+112]) < a0(=[a0+108]+12) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd8662f0 targets 0xd866490, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd866370 targets 0xd8664dc, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0xd86637c targets 0xd866388, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `bne` branch at 0xd866398 targets 0xd866454, is taken when v0(=ret(calloc)) != 0, and falls through when v0(=ret(calloc)) == 0.
  The `beq` branch at 0xd8663a8 targets 0xd8664e4, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0xd8663b4 targets 0xd8663c0, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `bne` branch at 0xd8663d0 targets 0xd866470, is taken when v0(=ret(calloc)) != 0, and falls through when v0(=ret(calloc)) == 0.
  The `beq` branch at 0xd8663dc targets 0xd8663f0, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd8663f4 targets 0xd866408, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86644c targets 0xd86628c and is always taken.
  The `beq` branch at 0xd866468 targets 0xd8663a0 and is always taken.
  The `beq` branch at 0xd866488 targets 0xd8663dc and is always taken.
  The `beq` branch at 0xd866494 targets 0xd8664a8, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd8664ac targets 0xd8664bc, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8664bc targets 0xd866420 and is always taken.
  The `beq` branch at 0xd8664d4 targets 0xd866420 and is always taken.
  The `beq` branch at 0xd8664dc targets 0xd8663a0 and is always taken.
  The `beq` branch at 0xd8664e4 targets 0xd8663d8 and is always taken.
  The return at 0xd866418 has v0 = 0x1.
  The return at 0xd866430 has v0 = 0x0.
  The instructions from 0xd866438 to 0xd86643c are not reached by any path from the entry, and their branches are not listed.

- `XF86DRIGetDeviceInfo` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd866500 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd866500-0xd8667b4 (692 bytes).
  It occupies 692 bytes.
  2 such `lw` accesses load 4 bytes from ret(find_display) +0x8, including `lw` at 0xd866554, `lw` at 0xd8665bc.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd866560, `lw` at 0xd866690, `lw` at 0xd866700.
  The `lw` at 0xd86656c loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd866578, `lw` at 0xd8665a8, `lw` at 0xd8666f8.
  The `lw` at 0xd86657c loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd866590 stores 4 bytes to a0 (arg0 at entry) +0x64.
  The `sh` at 0xd866598 stores 2 bytes to [a0+108] +0x2.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd8665a0, `sb` at 0xd8665e4.
  The `lw` at 0xd8665a4 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8665b0 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8665b8 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `lw` at 0xd8665c4 loads 4 bytes from [ret(find_display)+8] +0x4.
  The `sb` at 0xd8665cc stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd8665d8 stores 4 bytes to [a0+108] +0x4.
  2 such `sd` accesses store 8 bytes to a2 (arg2 at entry) +0x0, including `sd` at 0xd866600, `sd` at 0xd866618.
  The `sw` at 0xd866620 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0xd866628 stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `sw` at 0xd866630 stores 4 bytes to a5 (arg5 at entry) +0x0.
  The `sw` at 0xd866638 stores 4 bytes to a6 (arg6 at entry) +0x0.
  The `lw` at 0xd866648 loads 4 bytes from a7 (arg7 at entry) +0x0.
  The `sw` at 0xd86667c stores 4 bytes to a7 (arg7 at entry) +0x0.
  3 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86669c, `lw` at 0xd86670c, `lw` at 0xd86678c.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd8666a8, `lw` at 0xd866718, `lw` at 0xd866798.
  The `bgezall` at 0xd866544 calls find_display [0xd864dc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd866570 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8665e0 calls _XReply with a0=a0 at entry (arg0), a1=sp-128, a2=0x0, a3=0x0, a4=[[ret(find_display)+8]+4], a5=a1 at entry (arg1), a6=0xa, a7=[a0+108]+8.
  The `jalr` at 0xd866660 calls calloc with a0=?, a1=0x1, a2=a2 at entry (arg2), a3=?.
  The `jalr` at 0xd866688 calls _XRead with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8666a0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8666b4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8666ec calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd866710 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd866724 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86674c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882af4], a2=?, a3=?.
  The `jalr` at 0xd866778 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=-0x4, a3=?.
  The `jalr` at 0xd866790 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8667a4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd86654c targets 0xd866740, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0xd866558 targets 0xd866744, is taken when at(=[ret(find_display)+8]) == 0, and falls through when at(=[ret(find_display)+8]) != 0.
  The `beq` branch at 0xd866564 targets 0xd866578, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd866588 targets 0xd8666e8, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd8665e8 targets 0xd866700, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd866640 targets 0xd866690, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0xd86664c targets 0xd866680, is taken when a1(=[a7]) != 0, and falls through when a1(=[a7]) == 0.
  The `beq` branch at 0xd866654 targets 0xd86675c, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0xd866678 targets 0xd866764, is taken when v0(=ret(calloc)) == 0, and falls through when v0(=ret(calloc)) != 0.
  The `beq` branch at 0xd866694 targets 0xd8666a8, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd8666ac targets 0xd8666c0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8666f4 targets 0xd86658c and is always taken.
  The `beq` branch at 0xd866704 targets 0xd866718, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86671c targets 0xd86672c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86672c targets 0xd8666d4 and is always taken.
  The `beq` branch at 0xd866754 targets 0xd8666d4 and is always taken.
  The `beq` branch at 0xd86675c targets 0xd86665c and is always taken.
  The `beq` branch at 0xd866784 targets 0xd866798, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86679c targets 0xd8667ac, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8667ac targets 0xd8666d4 and is always taken.
  The return at 0xd8666cc has v0 = 0x1.
  The return at 0xd8666e0 has v0 = 0x0.
  The instructions from 0xd8666fc to 0xd8666fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd866734 to 0xd86673c are not reached by any path from the entry, and their branches are not listed.

- `XF86DRIOpenFullScreen` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8667c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8667c0-0xd866970 (432 bytes).
  It occupies 432 bytes.
  2 such `lw` accesses load 4 bytes from ret(find_display) +0x8, including `lw` at 0xd866800, `lw` at 0xd86686c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86680c, `lw` at 0xd8668a0.
  The `lw` at 0xd866818 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd866824, `lw` at 0xd866854, `lw` at 0xd8668fc.
  The `lw` at 0xd866828 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86683c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd866844, `sb` at 0xd866898.
  The `sh` at 0xd86684c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd866850 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86685c stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sw` at 0xd866868 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `lw` at 0xd866874 loads 4 bytes from [ret(find_display)+8] +0x4.
  The `sb` at 0xd866878 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd866880 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd86688c stores 4 bytes to [a0+108] +0x8.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd8668ac, `lw` at 0xd866908.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd8668b8, `lw` at 0xd866914.
  The `bgezall` at 0xd8667f0 calls find_display [0xd864dc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86681c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+1232].
  The `jalr` at 0xd866894 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(find_display)+8]+4], a5=a2 at entry (arg2), a6=a1 at entry (arg1), a7=0xc.
  The `jalr` at 0xd8668b0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+1232].
  The `jalr` at 0xd8668c4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8668f0 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86690c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+1232].
  The `jalr` at 0xd866920 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd866950 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882af4], a2=?, a3=?.
  The `beq` branch at 0xd8667f8 targets 0xd866944, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0xd866804 targets 0xd866948, is taken when at(=[ret(find_display)+8]) == 0, and falls through when at(=[ret(find_display)+8]) != 0.
  The `beq` branch at 0xd866810 targets 0xd866824, is taken when a5(=[a0+1232]) == 0, and falls through when a5(=[a0+1232]) != 0.
  The `bne` branch at 0xd866834 targets 0xd8668ec, is taken when v1(=[a0+112]) < a0(=[a0+108]+12) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd86689c targets 0xd866900, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd8668a4 targets 0xd8668b8, is taken when a5(=[a0+1232]) == 0, and falls through when a5(=[a0+1232]) != 0.
  The `beq` branch at 0xd8668bc targets 0xd8668d0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8668f8 targets 0xd866838 and is always taken.
  The `beq` branch at 0xd866900 targets 0xd866914, is taken when a5(=[a0+1232]) == 0, and falls through when a5(=[a0+1232]) != 0.
  The `beq` branch at 0xd866918 targets 0xd86692c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd8668e4 has v0 = ?.
  The return at 0xd86693c has v0 = 0x0.
  The return at 0xd866968 has v0 = 0x0.

- `XF86DRICloseFullScreen` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd866980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd866980-0xd866b30 (432 bytes).
  It occupies 432 bytes.
  2 such `lw` accesses load 4 bytes from ret(find_display) +0x8, including `lw` at 0xd8669c0, `lw` at 0xd866a2c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd8669cc, `lw` at 0xd866a60.
  The `lw` at 0xd8669d8 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8669e4, `lw` at 0xd866a14, `lw` at 0xd866ab8.
  The `lw` at 0xd8669e8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd8669fc stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd866a04, `sb` at 0xd866a58.
  The `sh` at 0xd866a0c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd866a10 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd866a1c stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sw` at 0xd866a28 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `lw` at 0xd866a34 loads 4 bytes from [ret(find_display)+8] +0x4.
  The `sb` at 0xd866a38 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd866a40 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd866a4c stores 4 bytes to [a0+108] +0x8.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd866a6c, `lw` at 0xd866ac8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd866a78, `lw` at 0xd866ad4.
  The `bgezall` at 0xd8669b0 calls find_display [0xd864dc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8669dc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+1232].
  The `jalr` at 0xd866a54 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(find_display)+8]+4], a5=a2 at entry (arg2), a6=a1 at entry (arg1), a7=0xd.
  The `jalr` at 0xd866a70 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+1232].
  The `jalr` at 0xd866a84 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd866aac calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd866acc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+1232].
  The `jalr` at 0xd866ae0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd866b10 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882af4], a2=?, a3=?.
  The `beq` branch at 0xd8669b8 targets 0xd866b04, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0xd8669c4 targets 0xd866b08, is taken when at(=[ret(find_display)+8]) == 0, and falls through when at(=[ret(find_display)+8]) != 0.
  The `beq` branch at 0xd8669d0 targets 0xd8669e4, is taken when a5(=[a0+1232]) == 0, and falls through when a5(=[a0+1232]) != 0.
  The `bne` branch at 0xd8669f4 targets 0xd866aa8, is taken when v1(=[a0+112]) < a0(=[a0+108]+12) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd866a5c targets 0xd866ac0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd866a64 targets 0xd866a78, is taken when a5(=[a0+1232]) == 0, and falls through when a5(=[a0+1232]) != 0.
  The `beq` branch at 0xd866a7c targets 0xd866a90, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd866ab4 targets 0xd8669f8 and is always taken.
  The `beq` branch at 0xd866ac0 targets 0xd866ad4, is taken when a5(=[a0+1232]) == 0, and falls through when a5(=[a0+1232]) != 0.
  The `beq` branch at 0xd866ad8 targets 0xd866aec, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd866aa0 has v0 = 0x1.
  The return at 0xd866afc has v0 = 0x0.
  The return at 0xd866b28 has v0 = 0x0.
  The instructions from 0xd866abc to 0xd866abc are not reached by any path from the entry, and their branches are not listed.

- `__glXstrdup` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd866b40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd866b40-0xd866bb4 (116 bytes).
  It occupies 116 bytes.
  The `jalr` at 0xd866b4c calls strlen with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd866b64 calls strlen with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd866b74 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd866b9c calls strcpy with a0=ret(malloc), a1=a0 at entry (arg0), a2=?, a3=?.
  The `beq` branch at 0xd866b58 targets 0xd866b70, is taken when v0(=ret(strlen)) == at(=-0x1), and falls through when v0(=ret(strlen)) != at(=-0x1).
  The `bne` branch at 0xd866b7c targets 0xd866b94, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The return at 0xd866b8c has v0 = 0x0.
  The return at 0xd866bac has v0 = ret(malloc).

- `_glapi_initialize` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd866bc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd866bc0-0xd866c38 (120 bytes).
  It occupies 120 bytes.
  The `jalr` at 0xd866bd0 calls dlsym with a0=a0 at entry (arg0), a1=0xd87d258, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd866c28 calls (unknown callee) with a0=sp-48, a1=?, a2=sym(_glapi_add_entrypoint), a3=sym(_glapi_get_dispatch_table_size), a4=sym(_glapi_set_dispatch), a5=sym(_glapi_get_context), a6=sym(_glapi_set_context), a7=sym(_glapi_check_multithread).
  The `bne` branch at 0xd866bd8 targets 0xd866be8, is taken when v0(=ret(dlsym)) != 0, and falls through when v0(=ret(dlsym)) == 0.
  The `beq` branch at 0xd866c30 targets 0xd866be0 and is always taken.
  The return at 0xd866be0 has v0 = one of ret(dlsym), ret(?).

- `InfoMessageF` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd866c40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd866c40-0xd866cd4 (148 bytes).
  It occupies 148 bytes.
  The `jalr` at 0xd866c70 calls getenv with a0=0xd87d270, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd866c90 calls strstr with a0=ret(getenv), a1=0xd882a58, a2=?, a3=?.
  The `jalr` at 0xd866cb0 calls fprintf with a0=sym(__iob)+32, a1=0xd882a60, a2=?, a3=?.
  The `jalr` at 0xd866cc4 calls vfprintf with a0=sym(__iob)+32, a1=a0 at entry (arg0), a2=sp-56, a3=?.
  The `bne` branch at 0xd866c78 targets 0xd866c88, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `beq` branch at 0xd866c98 targets 0xd866c80, is taken when v0(=ret(strstr)) == 0, and falls through when v0(=ret(strstr)) != 0.
  The `beq` branch at 0xd866ccc targets 0xd866c80 and is always taken.
  The return at 0xd866c80 has v0 = one of ret(getenv), ret(strstr), ret(vfprintf).

- `ErrorMessageF` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd866d00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd866d00-0xd866d80 (128 bytes).
  It occupies 128 bytes.
  The `jalr` at 0xd866d30 calls getenv with a0=0xd87d270, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd866d5c calls fprintf with a0=sym(__iob)+32, a1=0xd87d280, a2=?, a3=?.
  The `jalr` at 0xd866d70 calls vfprintf with a0=sym(__iob)+32, a1=a0 at entry (arg0), a2=sp-56, a3=?.
  The `bne` branch at 0xd866d38 targets 0xd866d48, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `beq` branch at 0xd866d78 targets 0xd866d40 and is always taken.
  The return at 0xd866d40 has v0 = one of ret(getenv), ret(vfprintf).

- `DummyCreateScreen` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd866d80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd866d80-0xd866d88 (8 bytes).
  It occupies 8 bytes.
  The return at 0xd866d80 has v0 = 0x0.

- `ExtractDir` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd866dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd866dc0-0xd866f48 (392 bytes).
  It occupies 392 bytes.
  10 such `lbu` accesses load 1 byte from ?, including `lbu` at 0xd866dfc, `lbu` at 0xd866e14, `lbu` at 0xd866e18.
  The `sb` at 0xd866ed8 stores 1 byte to ?.
  The `sb` at 0xd866ee4 stores 1 byte to a3 (arg3 at entry) +0x0.
  The `lbu` at 0xd866f0c loads 1 byte from a1 (arg1 at entry) +0x0.
  The `lbu` at 0xd866f1c loads 1 byte from a1 (arg1 at entry) +0x1.
  The `jalr` at 0xd866ec0 calls strncpy with a0=a3 at entry (arg3), a1=?, a2=?, a3=?.
  The `blez` branch at 0xd866dd8 targets 0xd866f0c, is taken when a0 <= 0 (signed), and falls through when a0 > 0 (signed).
  The `beq` branch at 0xd866de4 targets 0xd866dfc and is always taken.
  The `beq` branch at 0xd866dec targets 0xd866ee4, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0xd866df4 targets 0xd866e14, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0xd866e04 targets 0xd866dec, is taken when a6(?) != t0(=0x3a), and falls through when a6(?) == t0(=0x3a).
  The `beq` branch at 0xd866e0c targets 0xd866df0 and is always taken.
  The `bne` branch at 0xd866e1c targets 0xd866ef4, is taken when v0(?) != t0(=0x3a), and falls through when v0(?) == t0(=0x3a).
  The `bne` branch at 0xd866e2c targets 0xd866e64, is taken when v1(?) != t0(=0x3a), and falls through when v1(?) == t0(=0x3a).
  The `bne` branch at 0xd866e38 targets 0xd866e64, is taken when a0(?) != t0(=0x3a), and falls through when a0(?) == t0(=0x3a).
  The `bne` branch at 0xd866e44 targets 0xd866e64, is taken when a1(?) != t0(=0x3a), and falls through when a1(?) == t0(=0x3a).
  The `bne` branch at 0xd866e50 targets 0xd866e64, is taken when a3(?) != t0(=0x3a), and falls through when a3(?) == t0(=0x3a).
  The `beq` branch at 0xd866e5c targets 0xd866e28, is taken when a4(?) == t0(=0x3a), and falls through when a4(?) != t0(=0x3a).
  The `beq` branch at 0xd866e68 targets 0xd866f30, is taken when a0(?) == t0(=0x3a), and falls through when a0(?) != t0(=0x3a).
  The `beq` branch at 0xd866e70 targets 0xd866f38, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0xd866e84 targets 0xd866e90, is taken when a5(?) == t0(=0x3a), and falls through when a5(?) != t0(=0x3a).
  The `bne` branch at 0xd866e8c targets 0xd866e80, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0xd866e9c targets 0xd866eb0, is taken when s1(?) < a2 (signed), and falls through when s1(?) >= a2 (signed).
  The `beq` branch at 0xd866ef4 targets 0xd866f20, is taken when a0(?) == t0(=0x3a), and falls through when a0(?) != t0(=0x3a).
  The `beq` branch at 0xd866efc targets 0xd866f28, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0xd866f04 targets 0xd866e80 and is always taken.
  The `beq` branch at 0xd866f10 targets 0xd866f40, is taken when t9(=[a1]:1) == t0(=0x3a), and falls through when t9(=[a1]:1) != t0(=0x3a).
  The `beq` branch at 0xd866f18 targets 0xd866e68 and is always taken.
  The `beq` branch at 0xd866f20 targets 0xd866e90 and is always taken.
  The `beq` branch at 0xd866f28 targets 0xd866e90 and is always taken.
  The `beq` branch at 0xd866f30 targets 0xd866e94 and is always taken.
  The `beq` branch at 0xd866f38 targets 0xd866e90 and is always taken.
  The `beq` branch at 0xd866f40 targets 0xd866e28 and is always taken.
  The return at 0xd866edc has v0 = ret(strncpy).
  The return at 0xd866eec has v0 = ?.

- `OpenDriver` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd866f80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd866f80-0xd86725c (732 bytes).
  It occupies 732 bytes.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd866fc0, `lw` at 0xd866fd4.
  The `sw` at 0xd8670e4 stores 4 bytes to ret(malloc) +0x0.
  The `sw` at 0xd867100 stores 4 bytes to ret(malloc) +0x8.
  The `sw` at 0xd8671e4 stores 4 bytes to ret(malloc) +0xc.
  The `sw` at 0xd8671e8 stores 4 bytes to ret(malloc) +0x4.
  The `sw` at 0xd867200 stores 4 bytes to ret(malloc) +0x10.
  The `jalr` at 0xd866fc4 calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0xd866fe4 calls geteuid with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd866ff0 calls getuid with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd86702c calls dlerror with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0xd867044 calls ErrorMessageF [0xd866d00] with a0=0xd87d368, a1=sp-280, a2=ret(dlerror), a3=?.
  The `bgezall` at 0xd867060 calls ExtractDir [0xd866dc0] with a0=?, a1=?, a2=0x3e8, a3=sp-1280.
  The `jalr` at 0xd867088 calls snprintf with a0=sp-280, a1=0xc8, a2=0xd87d2e0, a3=sp-1280, a4=a0 at entry (arg0).
  The `bgezall` at 0xd86709c calls InfoMessageF [0xd866c40] with a0=0xd87d2f0, a1=sp-280, a2=?, a3=?.
  The `jalr` at 0xd8670ac calls dlopen with a0=sp-280, a1=0x5, a2=?, a3=?.
  The `jalr` at 0xd8670c0 calls malloc with a0=0x14, a1=?, a2=?, a3=?.
  The `bgezall` at 0xd8670d8 calls __glXstrdup [0xd866b40] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8670f4 calls dlsym with a0=ret(dlopen), a1=0xd87d308, a2=?, a3=?.
  The `bgezall` at 0xd867110 calls ErrorMessageF [0xd866d00] with a0=0xd87d320, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0xd86711c calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0xd867128 calls dlclose with a0=ret(dlopen), a1=?, a2=?, a3=?.
  The `jalr` at 0xd867180 calls getenv with a0=0xd87d290, a1=?, a2=?, a3=?.
  The `jalr` at 0xd867198 calls getenv with a0=0xd87d2a8, a1=?, a2=?, a3=?.
  The `jalr` at 0xd8671c0 calls dlsym with a0=ret(dlopen), a1=0xd87d350, a2=?, a3=?.
  The `bgezall` at 0xd8671fc calls _glapi_initialize [0xd866bc0] with a0=ret(dlopen), a1=?, a2=[0xd882b9c], a3=?.
  The `jalr` at 0xd867224 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `bgezall` at 0xd86724c calls ErrorMessageF [0xd866d00] with a0=0xd87d380, a1=a0 at entry (arg0), a2=?, a3=?.
  The `beq` branch at 0xd866fb4 targets 0xd866fe0, is taken when at(=[0xd882b9c]) == 0, and falls through when at(=[0xd882b9c]) != 0.
  The `beq` branch at 0xd866fcc targets 0xd867234, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0xd866fd8 targets 0xd866fc0, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0xd866ff8 targets 0xd867170, is taken when s0(=ret(geteuid)) == v0(=ret(getuid)), and falls through when s0(=ret(geteuid)) != v0(=ret(getuid)).
  The `beq` branch at 0xd867020 targets 0xd867050 and is always taken.
  The `beq` branch at 0xd86706c targets 0xd867240, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0xd8670b4 targets 0xd867028, is taken when v0(=ret(dlopen)) == 0, and falls through when v0(=ret(dlopen)) != 0.
  The `beq` branch at 0xd8670c8 targets 0xd867138, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0xd8670e0 targets 0xd867220, is taken when v0(=ret(__glXstrdup)) == 0, and falls through when v0(=ret(__glXstrdup)) != 0.
  The `bne` branch at 0xd8670fc targets 0xd8671b0, is taken when v0(=ret(dlsym)) != 0, and falls through when v0(=ret(dlsym)) == 0.
  The `beq` branch at 0xd867130 targets 0xd867050 and is always taken.
  The `bne` branch at 0xd867188 targets 0xd867004, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `bne` branch at 0xd8671a0 targets 0xd867004, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `beq` branch at 0xd8671a8 targets 0xd867000 and is always taken.
  The `beq` branch at 0xd86722c targets 0xd86713c and is always taken.
  The `beq` branch at 0xd867234 targets 0xd867140 and is always taken.
  The `beq` branch at 0xd867254 targets 0xd86713c and is always taken.
  The return at 0xd867168 has v0 = one of 0x0, ?.
  The return at 0xd867218 has v0 = ret(malloc).
  The instructions from 0xd86723c to 0xd86723c are not reached by any path from the entry, and their branches are not listed.

- `GetDriverName` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd867280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd867280-0xd8673ac (300 bytes).
  It occupies 300 bytes.
  The `sw` at 0xd867288 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `lw` at 0xd8672f8 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `jalr` at 0xd8672a4 calls XF86DRIQueryDirectRenderingCapable with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0xd8672d0 calls XF86DRIGetClientDriverName with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sp-44, a3=sp-40, a4=sp-36, a5=a2 at entry (arg2).
  The `bgezall` at 0xd867300 calls InfoMessageF [0xd866c40] with a0=0xd87d440, a1=?, a2=?, a3=?, a4=[a2], a5=a1 at entry (arg1).
  The `bgezall` at 0xd867330 calls ErrorMessageF [0xd866d00] with a0=0xd87d410, a1=a1 at entry (arg1), a2=?, a3=?.
  The `bgezall` at 0xd86735c calls ErrorMessageF [0xd866d00] with a0=0xd87d3d8, a1=?, a2=?, a3=?.
  The `bgezall` at 0xd86738c calls ErrorMessageF [0xd866d00] with a0=0xd87d3a8, a1=?, a2=?, a3=?.
  The `beq` branch at 0xd8672ac targets 0xd867380, is taken when v0(=ret(XF86DRIQueryDirectRenderingCapable)) == 0, and falls through when v0(=ret(XF86DRIQueryDirectRenderingCapable)) != 0.
  The `beq` branch at 0xd8672b4 targets 0xd867350, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0xd8672d8 targets 0xd867320, is taken when v0(=ret(XF86DRIGetClientDriverName)) == 0, and falls through when v0(=ret(XF86DRIGetClientDriverName)) != 0.
  The return at 0xd867318 has v0 = 0x1.
  The return at 0xd867348 has v0 = 0x0.
  The return at 0xd867374 has v0 = 0x0.
  The return at 0xd8673a4 has v0 = 0x0.
  The instructions from 0xd86737c to 0xd86737c are not reached by any path from the entry, and their branches are not listed.

- `GetDriver` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8673c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8673c0-0xd867408 (72 bytes).
  It occupies 72 bytes.
  The `bgezall` at 0xd8673d0 calls GetDriverName [0xd867280] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sp-16, a3=a3 at entry (arg3).
  The `bgezall` at 0xd8673e4 calls OpenDriver [0xd866f80] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0xd8673d8 targets 0xd8673f8, is taken when v0(=ret(GetDriverName)) == 0, and falls through when v0(=ret(GetDriverName)) != 0.
  The return at 0xd8673f0 has v0 = ret(OpenDriver).
  The return at 0xd867400 has v0 = 0x0.

- `driDestroyDisplay` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd867440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd867440-0xd8674f4 (180 bytes).
  It occupies 180 bytes.
  The `lw` at 0xd867460 loads 4 bytes from a0 (arg0 at entry) +0x88.
  3 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0xc, including `lw` at 0xd867478, `lw` at 0xd8674a0, `lw` at 0xd8674e8.
  The `lw` at 0xd86748c loads 4 bytes from ?.
  The `jalr` at 0xd867498 calls dlclose with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd8674c0 calls free with a0=[a1+12], a1=?, a2=?, a3=?.
  The `jalr` at 0xd8674cc calls free with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd867458 targets 0xd8674d8, is taken when a1 == 0, and falls through when a1 != 0.
  The `blez` branch at 0xd867470 targets 0xd8674e8, is taken when a1(=[a0+136]) <= 0 (signed), and falls through when a1(=[a0+136]) > 0 (signed).
  The `beq` branch at 0xd867490 targets 0xd8674a4, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0xd8674a8 targets 0xd86748c, is taken when s0(?) != s1(=([a0+136] << 0x2)), and falls through when s0(?) == s1(=([a0+136] << 0x2)).
  The `beq` branch at 0xd8674ec targets 0xd8674b0 and is always taken.
  The return at 0xd8674e0 has v0 = one of ?, ret(free).

- `__driCreateDisplayErrorHandler` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd867500 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd867500-0xd867518 (24 bytes).
  It occupies 24 bytes.
  The `sw` at 0xd867514 stores 4 bytes to abs 0xd882ba0.
  The return at 0xd867510 has v0 = 0x1.

- `driCreateDisplay` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd867540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd867540-0xd8677b0 (624 bytes).
  It occupies 624 bytes.
  The `lw` at 0xd867564 loads 4 bytes from a0 (arg0 at entry) +0x88.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x4, including `sw` at 0xd867588, `sw` at 0xd867674.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0xd86758c, `sw` at 0xd86765c.
  The `sw` at 0xd867598 stores 4 bytes to a1 (arg1 at entry) +0x8.
  The `sw` at 0xd867640 stores 4 bytes to ret(malloc) +0x0.
  The `sw` at 0xd867648 stores 4 bytes to ret(malloc) +0x4.
  The `sw` at 0xd867650 stores 4 bytes to ret(malloc) +0x8.
  The `sw` at 0xd867690 stores 4 bytes to ret(malloc) +0xc.
  The `lw` at 0xd8676dc loads 4 bytes from ret(GetDriver) +0x8.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd8676e0, `sw` at 0xd8676f0, `sw` at 0xd86771c.
  2 such `lw` accesses load 4 bytes from ret(malloc) +0xc, including `lw` at 0xd8676e4, `lw` at 0xd867720.
  The `lw` at 0xd8676e8 loads 4 bytes from ret(GetDriver) +0x4.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x4, including `lw` at 0xd86770c, `lw` at 0xd86776c.
  The `jalr` at 0xd86757c calls XSetErrorHandler with a0=sym(__driCreateDisplayErrorHandler), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8675a0 calls XF86DRIQueryExtension with a0=a0 at entry (arg0), a1=sp-112, a2=sp-108, a3=?.
  The `jalr` at 0xd8675c0 calls XF86DRIQueryVersion with a0=a0 at entry (arg0), a1=sp-104, a2=sp-100, a3=sp-96.
  The `jalr` at 0xd867628 calls malloc with a0=0x10, a1=[0xd882ba0], a2=0x1, a3=?.
  The `jalr` at 0xd867668 calls malloc with a0=?, a1=0xd860000, a2=?, a3=0xd867440.
  The `jalr` at 0xd867684 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd867698 calls __glXRegisterExtensions with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0xd867704 calls GetDriver [0xd8673c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd867744 calls XSetErrorHandler with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd867768 calls free with a0=[a1+4], a1=?, a2=?, a3=?.
  The `jalr` at 0xd867774 calls XFree with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86779c calls XFree with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd8675a8 targets 0xd867600, is taken when v0(=ret(XF86DRIQueryExtension)) == 0, and falls through when v0(=ret(XF86DRIQueryExtension)) != 0.
  The `beq` branch at 0xd8675c8 targets 0xd8676d4, is taken when v0(=ret(XF86DRIQueryVersion)) == 0, and falls through when v0(=ret(XF86DRIQueryVersion)) != 0.
  The `beq` branch at 0xd8675d4 targets 0xd867620, is taken when a1(=[0xd882ba0]) == a2(=0x1), and falls through when a1(=[0xd882ba0]) != a2(=0x1).
  The `beq` branch at 0xd867634 targets 0xd867758, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0xd867658 targets 0xd867788, is taken when s5(=[a0+136]) == 0, and falls through when s5(=[a0+136]) != 0.
  The `beq` branch at 0xd867670 targets 0xd867798, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0xd867678 targets 0xd867790, is taken when s5(=[a0+136]) == 0, and falls through when s5(=[a0+136]) != 0.
  The `beq` branch at 0xd86768c targets 0xd867764, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `blez` branch at 0xd8676a0 targets 0xd867744, is taken when s5(=[a0+136]) <= 0 (signed), and falls through when s5(=[a0+136]) > 0 (signed).
  The `beq` branch at 0xd8676cc targets 0xd8676fc and is always taken.
  The `beq` branch at 0xd8676d4 targets 0xd8675dc and is always taken.
  The `beq` branch at 0xd8676f4 targets 0xd867730, is taken when s1(?) == s5(=[a0+136]), and falls through when s1(?) != s5(=[a0+136]).
  The `bne` branch at 0xd867714 targets 0xd8676dc, is taken when v0(=ret(GetDriver)) != 0, and falls through when v0(=ret(GetDriver)) == 0.
  The `beq` branch at 0xd867728 targets 0xd8676f4 and is always taken.
  The `beq` branch at 0xd867750 targets 0xd8675dc and is always taken.
  The `beq` branch at 0xd86775c targets 0xd8675dc and is always taken.
  The `beq` branch at 0xd867780 targets 0xd8675dc and is always taken.
  The `beq` branch at 0xd867788 targets 0xd867664 and is always taken.
  The `beq` branch at 0xd867790 targets 0xd867680 and is always taken.
  The `beq` branch at 0xd8677a8 targets 0xd8675dc and is always taken.
  The return at 0xd8675f0 has v0 = one of 0x0, ret(malloc).
  The return at 0xd867618 has v0 = 0x0.
  The instructions from 0xd8675f8 to 0xd8675fc are not reached by any path from the entry, and their branches are not listed.

- `__glXRegisterExtensions` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8677c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8677c0-0xd8677c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0xd8677c0 has v0 = ?.

- `XextCreateExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd867800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd867800-0xd867854 (84 bytes).
  It occupies 84 bytes.
  The `sw` at 0xd86782c stores 4 bytes to ret(malloc) +0x0.
  The `sw` at 0xd867830 stores 4 bytes to ret(malloc) +0x4.
  The `sw` at 0xd867834 stores 4 bytes to ret(malloc) +0x8.
  The `jalr` at 0xd86781c calls malloc with a0=0xc, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0xd867824 targets 0xd867844, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The return at 0xd86783c has v0 = ret(malloc).
  The return at 0xd86784c has v0 = ret(malloc).

- `XextDestroyExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd867880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd867880-0xd8678bc (60 bytes).
  It occupies 60 bytes.
  The `sw` at 0xd867898 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `sw` at 0xd86789c stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `sw` at 0xd8678a8 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `jalr` at 0xd8678a4 calls XFree with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd8678b4 has v0 = ret(XFree).

- `XextAddDisplay` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8678c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8678c0-0xd867bb4 (756 bytes).
  It occupies 756 bytes.
  The `sw` at 0xd867940 stores 4 bytes to ret(malloc) +0x4.
  The `sw` at 0xd867950 stores 4 bytes to ret(malloc) +0xc.
  The `sw` at 0xd867964 stores 4 bytes to ret(malloc) +0x8.
  The `lw` at 0xd86796c loads 4 bytes from ret(XInitExtension) +0x8.
  The `lw` at 0xd867988 loads 4 bytes from a3 (arg3 at entry) +0x1c.
  The `lw` at 0xd86799c loads 4 bytes from a3 (arg3 at entry) +0x20.
  The `lw` at 0xd8679bc loads 4 bytes from a3 (arg3 at entry) +0x0.
  9 such `lw` accesses load 4 bytes from ret(malloc) +0x8, including `lw` at 0xd8679c8, `lw` at 0xd8679e4, `lw` at 0xd867a00.
  9 such `lw` accesses load 4 bytes from [ret(malloc)+8] +0x0, including `lw` at 0xd8679d4, `lw` at 0xd8679f0, `lw` at 0xd867a0c.
  The `lw` at 0xd8679d8 loads 4 bytes from a3 (arg3 at entry) +0x4.
  The `lw` at 0xd8679f4 loads 4 bytes from a3 (arg3 at entry) +0x8.
  The `lw` at 0xd867a10 loads 4 bytes from a3 (arg3 at entry) +0xc.
  The `lw` at 0xd867a2c loads 4 bytes from a3 (arg3 at entry) +0x10.
  The `lw` at 0xd867a48 loads 4 bytes from a3 (arg3 at entry) +0x14.
  3 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x18, including `lw` at 0xd867a64, `lw` at 0xd867b40, `lw` at 0xd867b60.
  The `lw` at 0xd867a80 loads 4 bytes from a3 (arg3 at entry) +0x24.
  The `lw` at 0xd867a9c loads 4 bytes from a3 (arg3 at entry) +0x28.
  The `lw` at 0xd867ac4 loads 4 bytes from sym(_XLockMutex_fn) +0x0.
  2 such `lw` accesses load 4 bytes from sym(_Xglobal_lock) +0x0, including `lw` at 0xd867ad4, `lw` at 0xd867b0c.
  The `lw` at 0xd867ae0 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `sw` at 0xd867ae4 stores 4 bytes to ret(malloc) +0x0.
  The `sw` at 0xd867ae8 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lw` at 0xd867aec loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `sw` at 0xd867af0 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `sw` at 0xd867af8 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `lw` at 0xd867afc loads 4 bytes from sym(_XUnlockMutex_fn) +0x0.
  The `lw` at 0xd867b64 loads 4 bytes from ret(XAddExtension) +0x0.
  The `jalr` at 0xd867900 calls malloc with a0=0x10, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86794c calls XInitExtension with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0xd86798c calls XESetWireToEvent with a0=a1 at entry (arg1), a1=?, a2=[a3+28], a3=?.
  The `jalr` at 0xd8679a0 calls XESetEventToWire with a0=a1 at entry (arg1), a1=?, a2=[a3+32], a3=?.
  The `jalr` at 0xd8679d0 calls XESetCreateGC with a0=a1 at entry (arg1), a1=[[ret(malloc)+8]], a2=[a3], a3=?.
  The `jalr` at 0xd8679ec calls XESetCopyGC with a0=a1 at entry (arg1), a1=[[ret(malloc)+8]], a2=[a3+4], a3=?.
  The `jalr` at 0xd867a08 calls XESetFlushGC with a0=a1 at entry (arg1), a1=[[ret(malloc)+8]], a2=[a3+8], a3=?.
  The `jalr` at 0xd867a24 calls XESetFreeGC with a0=a1 at entry (arg1), a1=[[ret(malloc)+8]], a2=[a3+12], a3=?.
  The `jalr` at 0xd867a40 calls XESetCreateFont with a0=a1 at entry (arg1), a1=[[ret(malloc)+8]], a2=[a3+16], a3=?.
  The `jalr` at 0xd867a5c calls XESetFreeFont with a0=a1 at entry (arg1), a1=[[ret(malloc)+8]], a2=[a3+20], a3=?.
  The `jalr` at 0xd867a78 calls XESetCloseDisplay with a0=a1 at entry (arg1), a1=[[ret(malloc)+8]], a2=[a3+24], a3=?.
  The `jalr` at 0xd867a94 calls XESetError with a0=a1 at entry (arg1), a1=[[ret(malloc)+8]], a2=[a3+36], a3=?.
  The `jalr` at 0xd867ab8 calls XESetErrorString with a0=a1 at entry (arg1), a1=[[ret(malloc)+8]], a2=[a3+40], a3=?.
  The `jalr` at 0xd867ad0 calls (unknown callee) with a0=[sym(_Xglobal_lock)], a1=?, a2=?, a3=?.
  The `jalr` at 0xd867b08 calls (unknown callee) with a0=[sym(_Xglobal_lock)], a1=?, a2=?, a3=?.
  The `jalr` at 0xd867b50 calls XAddExtension with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `jalr` at 0xd867b68 calls XESetCloseDisplay with a0=a1 at entry (arg1), a1=[ret(XAddExtension)], a2=[a3+24], a3=?.
  The `jalr` at 0xd867b8c calls XFree with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `bne` branch at 0xd867908 targets 0xd867930, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0xd867960 targets 0xd867b40, is taken when v0(=ret(XInitExtension)) == 0, and falls through when v0(=ret(XInitExtension)) != 0.
  The `blez` branch at 0xd867968 targets 0xd8679bc, is taken when a0(=a4) <= 0 (signed), and falls through when a0(=a4) > 0 (signed).
  The `bne` branch at 0xd8679ac targets 0xd867984, is taken when s0(?) != s3(=([ret(XInitExtension)+8] + a4)), and falls through when s0(?) == s3(=([ret(XInitExtension)+8] + a4)).
  The `beq` branch at 0xd8679c0 targets 0xd8679d8, is taken when a2(=[a3]) == 0, and falls through when a2(=[a3]) != 0.
  The `beq` branch at 0xd8679dc targets 0xd8679f4, is taken when a2(=[a3+4]) == 0, and falls through when a2(=[a3+4]) != 0.
  The `beq` branch at 0xd8679f8 targets 0xd867a10, is taken when a2(=[a3+8]) == 0, and falls through when a2(=[a3+8]) != 0.
  The `beq` branch at 0xd867a14 targets 0xd867a2c, is taken when a2(=[a3+12]) == 0, and falls through when a2(=[a3+12]) != 0.
  The `beq` branch at 0xd867a30 targets 0xd867a48, is taken when a2(=[a3+16]) == 0, and falls through when a2(=[a3+16]) != 0.
  The `beq` branch at 0xd867a4c targets 0xd867a64, is taken when a2(=[a3+20]) == 0, and falls through when a2(=[a3+20]) != 0.
  The `beq` branch at 0xd867a68 targets 0xd867a80, is taken when a2(=[a3+24]) == 0, and falls through when a2(=[a3+24]) != 0.
  The `beq` branch at 0xd867a84 targets 0xd867a9c, is taken when a2(=[a3+36]) == 0, and falls through when a2(=[a3+36]) != 0.
  The `beq` branch at 0xd867aa0 targets 0xd867ac0, is taken when a2(=[a3+40]) == 0, and falls through when a2(=[a3+40]) != 0.
  The `beq` branch at 0xd867ac8 targets 0xd867ad8, is taken when t9(=[sym(_XLockMutex_fn)]) == 0, and falls through when t9(=[sym(_XLockMutex_fn)]) != 0.
  The `beq` branch at 0xd867b00 targets 0xd867b10, is taken when t9(=[sym(_XUnlockMutex_fn)]) == 0, and falls through when t9(=[sym(_XUnlockMutex_fn)]) != 0.
  The `beq` branch at 0xd867b44 targets 0xd867ac4, is taken when v1(=[a3+24]) == 0, and falls through when v1(=[a3+24]) != 0.
  The `beq` branch at 0xd867b58 targets 0xd867b80, is taken when v0(=ret(XAddExtension)) == 0, and falls through when v0(=ret(XAddExtension)) != 0.
  The `beq` branch at 0xd867b70 targets 0xd867ac4 and is always taken.
  The return at 0xd867928 has v0 = 0x0.
  The return at 0xd867b30 has v0 = ret(malloc).
  The return at 0xd867bac has v0 = 0x0.
  The instructions from 0xd867b38 to 0xd867b3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd867b78 to 0xd867b7c are not reached by any path from the entry, and their branches are not listed.

- `XextRemoveDisplay` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd867bc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd867bc0-0xd867ce0 (288 bytes).
  It occupies 288 bytes.
  The `lw` at 0xd867bd8 loads 4 bytes from sym(_XLockMutex_fn) +0x0.
  3 such `lw` accesses load 4 bytes from sym(_Xglobal_lock) +0x0, including `lw` at 0xd867c04, `lw` at 0xd867c44, `lw` at 0xd867ca8.
  The `lw` at 0xd867c08 loads 4 bytes from a0 (arg0 at entry) +0x0.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd867c1c, `lw` at 0xd867c2c, `lw` at 0xd867c70.
  3 such `lw` accesses load 4 bytes from sym(_XUnlockMutex_fn) +0x0, including `lw` at 0xd867c34, `lw` at 0xd867c6c, `lw` at 0xd867c98.
  The `sw` at 0xd867c7c stores 4 bytes to ?.
  The `lw` at 0xd867c80 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0xd867c84 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `sw` at 0xd867c90 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `sw` at 0xd867c94 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `sw` at 0xd867cdc stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `jalr` at 0xd867c00 calls (unknown callee) with a0=[sym(_Xglobal_lock)], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[sym(_XLockMutex_fn)], a4=0x2164c.
  The `jalr` at 0xd867c40 calls (unknown callee) with a0=[sym(_Xglobal_lock)], a1=?, a2=?, a3=sym(_Xglobal_lock).
  The `jalr` at 0xd867ca4 calls (unknown callee) with a0=[sym(_Xglobal_lock)], a1=?, a2=?, a3=sym(_Xglobal_lock), a4=[a0+8]-1, a5=[a0+4].
  The `jalr` at 0xd867cb0 calls free with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0xd867bf0 targets 0xd867c08, is taken when a3(=[sym(_XLockMutex_fn)]) == 0, and falls through when a3(=[sym(_XLockMutex_fn)]) != 0.
  The `beq` branch at 0xd867c14 targets 0xd867c34, is taken when s0(=[a0]) == 0, and falls through when s0(=[a0]) != 0.
  The `beq` branch at 0xd867c20 targets 0xd867c68, is taken when a2(?) == s1(=a1), and falls through when a2(?) != s1(=a1).
  The `bne` branch at 0xd867c30 targets 0xd867c1c, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0xd867c38 targets 0xd867c4c, is taken when t9(=[sym(_XUnlockMutex_fn)]) == 0, and falls through when t9(=[sym(_XUnlockMutex_fn)]) != 0.
  The `beq` branch at 0xd867c68 targets 0xd867c38, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0xd867c74 targets 0xd867cd8, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0xd867c8c targets 0xd867c98, is taken when a5(=[a0+4]) != s0(?), and falls through when a5(=[a0+4]) == s0(?).
  The `beq` branch at 0xd867c9c targets 0xd867cac, is taken when t9(=[sym(_XUnlockMutex_fn)]) == 0, and falls through when t9(=[sym(_XUnlockMutex_fn)]) != 0.
  The `beq` branch at 0xd867cd8 targets 0xd867c80 and is always taken.
  The return at 0xd867c60 has v0 = 0x0.
  The return at 0xd867cd0 has v0 = 0x1.

- `XextFindDisplay` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd867d00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd867d00-0xd867e08 (264 bytes).
  It occupies 264 bytes.
  The `lw` at 0xd867d04 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0xd867d34 loads 4 bytes from [a0+4] +0x4.
  The `lw` at 0xd867d40 loads 4 bytes from sym(_XLockMutex_fn) +0x0.
  3 such `lw` accesses load 4 bytes from sym(_Xglobal_lock) +0x0, including `lw` at 0xd867d50, `lw` at 0xd867d8c, `lw` at 0xd867dc4.
  The `lw` at 0xd867d54 loads 4 bytes from a0 (arg0 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd867d68, `lw` at 0xd867d74.
  2 such `lw` accesses load 4 bytes from sym(_XUnlockMutex_fn) +0x0, including `lw` at 0xd867d7c, `lw` at 0xd867db4.
  The `sw` at 0xd867db0 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `jalr` at 0xd867d4c calls (unknown callee) with a0=[sym(_Xglobal_lock)], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a0+4].
  The `jalr` at 0xd867d88 calls (unknown callee) with a0=[sym(_Xglobal_lock)], a1=sym(_XUnlockMutex_fn), a2=?, a3=sym(_Xglobal_lock).
  The `jalr` at 0xd867dc0 calls (unknown callee) with a0=[sym(_Xglobal_lock)], a1=sym(_XUnlockMutex_fn), a2=?, a3=sym(_Xglobal_lock).
  The `beq` branch at 0xd867d2c targets 0xd867d3c, is taken when a4(=[a0+4]) == 0, and falls through when a4(=[a0+4]) != 0.
  The `beq` branch at 0xd867d38 targets 0xd867de8, is taken when v0(=[[a0+4]+4]) == a1, and falls through when v0(=[[a0+4]+4]) != a1.
  The `beq` branch at 0xd867d44 targets 0xd867d54, is taken when t9(=[sym(_XLockMutex_fn)]) == 0, and falls through when t9(=[sym(_XLockMutex_fn)]) != 0.
  The `beq` branch at 0xd867d60 targets 0xd867d7c, is taken when s0(=[a0]) == 0, and falls through when s0(=[a0]) != 0.
  The `beq` branch at 0xd867d6c targets 0xd867db0, is taken when a2(?) == s1(=a1), and falls through when a2(?) != s1(=a1).
  The `bne` branch at 0xd867d78 targets 0xd867d68, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0xd867d80 targets 0xd867d94, is taken when t9(=[sym(_XUnlockMutex_fn)]) == 0, and falls through when t9(=[sym(_XUnlockMutex_fn)]) != 0.
  The `beq` branch at 0xd867db8 targets 0xd867dcc, is taken when t9(=[sym(_XUnlockMutex_fn)]) == 0, and falls through when t9(=[sym(_XUnlockMutex_fn)]) != 0.
  The return at 0xd867da8 has v0 = 0x0.
  The return at 0xd867de0 has v0 = ?.
  The return at 0xd867e00 has v0 = [a0+4].

- `_default_exterror` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd867e40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd867e40-0xd867e94 (84 bytes).
  It occupies 84 bytes.
  The `lw` at 0xd867e6c loads 4 bytes from a0 (arg0 at entry) +0x80.
  The `jalr` at 0xd867e78 calls fprintf with a0=sym(__iob)+32, a1=0xd87d478, a2=a1 at entry (arg1), a3=a2 at entry (arg2), a4=[a0+128], a5=sym(__iob), a6=0x213cc.
  The return at 0xd867e8c has v0 = 0x0.

- `XSetExtensionErrorHandler` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd867ec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd867ec0-0xd867ef0 (48 bytes).
  It occupies 48 bytes.
  The `lw` at 0xd867ecc loads 4 bytes from abs 0xd88295c.
  The `lw` at 0xd867ed0 loads 4 bytes from abs 0xd881230.
  The `lw` at 0xd867ed8 loads 4 bytes from sym(_XExtensionErrorFunction) +0x0.
  2 such `sw` accesses store 4 bytes to sym(_XExtensionErrorFunction) +0x0, including `sw` at 0xd867ee0, `sw` at 0xd867eec.
  The `beq` branch at 0xd867ed4 targets 0xd867ee4, is taken when a0 == 0, and falls through when a0 != 0.
  The return at 0xd867edc has v0 = [sym(_XExtensionErrorFunction)].
  The return at 0xd867ee8 has v0 = [sym(_XExtensionErrorFunction)].

- `XMissingExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd867f00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd867f00-0xd867f58 (88 bytes).
  It occupies 88 bytes.
  The `lw` at 0xd867f18 loads 4 bytes from sym(_XExtensionErrorFunction) +0x0.
  The `jalr` at 0xd867f30 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=0xd882a70, a3=[sym(_XExtensionErrorFunction)], a4=0xd860000.
  The `beq` branch at 0xd867f1c targets 0xd867f48, is taken when a3(=[sym(_XExtensionErrorFunction)]) == 0, and falls through when a3(=[sym(_XExtensionErrorFunction)]) != 0.
  The `beq` branch at 0xd867f28 targets 0xd867f50, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0xd867f48 targets 0xd867f28 and is always taken.
  The `beq` branch at 0xd867f50 targets 0xd867f30 and is always taken.
  The return at 0xd867f40 has v0 = ret(?).

- `error_string` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8680c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8680c0-0xd86816c (172 bytes).
  It occupies 172 bytes.
  The `lw` at 0xd8680c8 loads 4 bytes from a2 (arg2 at entry) +0xc.
  The `lw` at 0xd868150 loads 4 bytes from table(0xd882b00) +0x0.
  The `jalr` at 0xd86811c calls sprintf with a0=sp-304, a1=0xd882a78, a2=[0xd882afc], a3=?.
  The `jalr` at 0xd86814c calls XGetErrorDatabaseText with a0=a0 at entry (arg0), a1=0xd87d4c8, a2=sp-304, a3=entry(0xd882b00), a4=a3 at entry (arg3), a5=a4 at entry (arg4).
  The `bltz` branch at 0xd8680dc targets 0xd8680f4, is taken when s0(?) < 0 (signed), and falls through when s0(?) >= 0 (signed).
  The `blez` branch at 0xd8680ec targets 0xd868108, is taken when s0(?) <= 0 (signed), and falls through when s0(?) > 0 (signed).
  The return at 0xd868100 has v0 = 0x0.
  The return at 0xd868164 has v0 = a3.

- `wire_to_event` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd868180 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd868180-0xd8682d4 (340 bytes).
  It occupies 340 bytes.
  The `lw` at 0xd8681c0 loads 4 bytes from ret(0xd867fc0) +0x8.
  3 such `lbu` accesses load 1 byte from a2 (arg2 at entry) +0x0, including `lbu` at 0xd8681cc, `lbu` at 0xd868260, `lbu` at 0xd8682a4.
  The `lw` at 0xd8681d0 loads 4 bytes from [ret(0xd867fc0)+8] +0x8.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0xd868254, `sw` at 0xd868298.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x4, including `sw` at 0xd86825c, `sw` at 0xd8682a0.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0xc, including `sw` at 0xd868268, `sw` at 0xd8682ac.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x8, including `sw` at 0xd868274, `sw` at 0xd8682b8.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x4, including `lw` at 0xd868278, `lw` at 0xd8682bc.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x10, including `sw` at 0xd868284, `sw` at 0xd8682c0.
  The `lbu` at 0xd8682c4 loads 1 byte from a2 (arg2 at entry) +0x8.
  The `sw` at 0xd8682d0 stores 4 bytes to a1 (arg1 at entry) +0x14.
  The `bgezall` at 0xd8681ac calls (unnamed) [0xd867fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd868220 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882afc], a2=0x1, a3=?.
  The `jalr` at 0xd868250 calls _XSetLastRequestRead with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=0x1, a3=?, a5=[ret(0xd867fc0)+8], a7=a1 at entry (arg1).
  The `jalr` at 0xd868294 calls _XSetLastRequestRead with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=0x1, a3=?, a5=[ret(0xd867fc0)+8].
  The `beq` branch at 0xd8681b8 targets 0xd868218, is taken when v0(=ret(0xd867fc0)) == 0, and falls through when v0(=ret(0xd867fc0)) != 0.
  The `beq` branch at 0xd8681c4 targets 0xd86821c, is taken when a5(=[ret(0xd867fc0)+8]) == 0, and falls through when a5(=[ret(0xd867fc0)+8]) != 0.
  The `beq` branch at 0xd8681dc targets 0xd868288, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0xd8681e4 targets 0xd868240, is taken when v0(?) == a2(=0x1), and falls through when v0(?) != a2(=0x1).
  The `beq` branch at 0xd868280 targets 0xd868200 and is always taken.
  The `beq` branch at 0xd8682cc targets 0xd868200 and is always taken.
  The return at 0xd8681f4 has v0 = 0x0.
  The return at 0xd868210 has v0 = 0x1.
  The return at 0xd868238 has v0 = 0x0.
  The instructions from 0xd8681fc to 0xd8681fc are not reached by any path from the entry, and their branches are not listed.

- `event_to_wire` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd868300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd868300-0xd868404 (260 bytes).
  It occupies 260 bytes.
  The `lw` at 0xd868340 loads 4 bytes from ret(0xd867fc0) +0x8.
  The `lw` at 0xd86834c loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0xd868350 loads 4 bytes from [ret(0xd867fc0)+8] +0x8.
  2 such `sb` accesses store 1 byte to a2 (arg2 at entry) +0x0, including `sb` at 0xd8683a0, `sb` at 0xd8683e0.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x4, including `lw` at 0xd8683a4, `lw` at 0xd8683e4.
  2 such `sh` accesses store 2 bytes to a2 (arg2 at entry) +0x2, including `sh` at 0xd8683a8, `sh` at 0xd8683e8.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x10, including `lw` at 0xd8683ac, `lw` at 0xd8683ec.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x4, including `sw` at 0xd8683b8, `sw` at 0xd8683f0.
  The `lw` at 0xd8683f4 loads 4 bytes from a1 (arg1 at entry) +0x14.
  The `sb` at 0xd868400 stores 1 byte to a2 (arg2 at entry) +0x8.
  The `bgezall` at 0xd86832c calls (unnamed) [0xd867fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8683cc calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882afc], a2=?, a3=?.
  The `beq` branch at 0xd868338 targets 0xd8683c4, is taken when v0(=ret(0xd867fc0)) == 0, and falls through when v0(=ret(0xd867fc0)) != 0.
  The `beq` branch at 0xd868344 targets 0xd8683c8, is taken when a5(=[ret(0xd867fc0)+8]) == 0, and falls through when a5(=[ret(0xd867fc0)+8]) != 0.
  The `beq` branch at 0xd86835c targets 0xd8683dc, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0xd868364 targets 0xd868394, is taken when v0(?) == a1(=0x1), and falls through when v0(?) != a1(=0x1).
  The `beq` branch at 0xd8683d4 targets 0xd868380 and is always taken.
  The `beq` branch at 0xd8683fc targets 0xd868380 and is always taken.
  The return at 0xd868370 has v0 = 0x0.
  The return at 0xd86838c has v0 = one of 0x0, 0x1.
  The return at 0xd8683bc has v0 = 0x1.
  The instructions from 0xd868378 to 0xd86837c are not reached by any path from the entry, and their branches are not listed.

- `read_buffer_info` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd868440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd868440-0xd868650 (528 bytes).
  It occupies 528 bytes.
  The `lw` at 0xd868548 loads 4 bytes from ret(malloc) +0x8.
  The `lw` at 0xd86854c loads 4 bytes from ret(malloc) +0x0.
  The `lhu` at 0xd868550 loads 2 bytes from ret(malloc) +0x4.
  The `lbu` at 0xd868558 loads 1 byte from ret(malloc) +0x6.
  15 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd868560, `sw` at 0xd868564, `sw` at 0xd868568.
  4 such `lbu` accesses load 1 byte from ?, including `lbu` at 0xd86856c, `lbu` at 0xd868594, `lbu` at 0xd8685bc.
  4 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0xd868574, `lhu` at 0xd86859c, `lhu` at 0xd8685c0.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd868584, `lw` at 0xd8685a8, `lw` at 0xd86861c.
  The `jalr` at 0xd86846c calls malloc with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86849c calls _XRead with a0=a0 at entry (arg0), a1=sp-304, a2=?, a3=?.
  The `jalr` at 0xd8684fc calls _XRead with a0=a0 at entry (arg0), a1=ret(malloc), a2=(a1 << 0x3), a3=?.
  The `jalr` at 0xd868518 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd8685d0 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd868454 targets 0xd8685ec, is taken when a1 == 0, and falls through when a1 != 0.
  The `bne` branch at 0xd86847c targets 0xd8684ec, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `blez` branch at 0xd868484 targets 0xd8684c4, is taken when s1(=a1) <= 0 (signed), and falls through when s1(=a1) > 0 (signed).
  The `beq` branch at 0xd86848c targets 0xd868648 and is always taken.
  The `blez` branch at 0xd8684a8 targets 0xd8684c4, is taken when s0(?) <= 0 (signed), and falls through when s0(?) > 0 (signed).
  The `bne` branch at 0xd8684b4 targets 0xd868494, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0xd8684bc targets 0xd868494 and is always taken.
  The `beq` branch at 0xd868504 targets 0xd868614, is taken when s1(=a1) == 0, and falls through when s1(=a1) != 0.
  The `beq` branch at 0xd86852c targets 0xd8685cc, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `blez` branch at 0xd868534 targets 0xd8685cc, is taken when s1(=a1) <= 0 (signed), and falls through when s1(=a1) > 0 (signed).
  The `bne` branch at 0xd868540 targets 0xd86861c, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0xd868580 targets 0xd868600, is taken when a2(?) == at(?), and falls through when a2(?) != at(?).
  The `bne` branch at 0xd8685a4 targets 0xd868560, is taken when a3(?) != at(?), and falls through when a3(?) == at(?).
  The `beq` branch at 0xd8685e4 targets 0xd8684e0 and is always taken.
  The `beq` branch at 0xd8685ec targets 0xd868464 and is always taken.
  The `beq` branch at 0xd86860c targets 0xd8685ac and is always taken.
  The `beq` branch at 0xd868614 targets 0xd868514 and is always taken.
  The `beq` branch at 0xd868638 targets 0xd8685cc, is taken when a0(?) == v1(?), and falls through when a0(?) != v1(?).
  The `beq` branch at 0xd868640 targets 0xd86861c and is always taken.
  The `beq` branch at 0xd868648 targets 0xd8684b4 and is always taken.
  The return at 0xd8684d8 has v0 = 0x0.
  The return at 0xd8684e4 has v0 = ret(malloc).
  The instructions from 0xd8685f4 to 0xd8685fc are not reached by any path from the entry, and their branches are not listed.

- `XmbufQueryExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd868680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd868680-0xd868704 (132 bytes).
  It occupies 132 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd867fc0) +0x8, including `lw` at 0xd8686b8, `lw` at 0xd8686d8.
  The `lw` at 0xd8686d0 loads 4 bytes from [ret(0xd867fc0)+8] +0x8.
  The `sw` at 0xd8686d4 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0xd8686e4 loads 4 bytes from [ret(0xd867fc0)+8] +0xc.
  The `sw` at 0xd8686e8 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0xd8686a4 calls (unnamed) [0xd867fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0xd8686b0 targets 0xd8686f4, is taken when v0(=ret(0xd867fc0)) == 0, and falls through when v0(=ret(0xd867fc0)) != 0.
  The `beq` branch at 0xd8686bc targets 0xd8686f8, is taken when a5(=[ret(0xd867fc0)+8]) == 0, and falls through when a5(=[ret(0xd867fc0)+8]) != 0.
  The return at 0xd8686ec has v0 = 0x1.
  The return at 0xd8686fc has v0 = 0x0.

- `XmbufGetVersion` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd868740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd868740-0xd8688f4 (436 bytes).
  It occupies 436 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd867fc0) +0x8, including `lw` at 0xd868780, `lw` at 0xd8687e4.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86878c, `lw` at 0xd868824, `lw` at 0xd868880.
  The `lw` at 0xd868798 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8687a4, `lw` at 0xd8687cc, `lw` at 0xd868878.
  The `lw` at 0xd8687a8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd8687bc stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd8687c0, `sb` at 0xd868804.
  The `sh` at 0xd8687c8 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd8687d0 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8687d8 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd8687e0 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd8687ec loads 4 bytes from [ret(0xd867fc0)+8] +0x4.
  The `sb` at 0xd8687f8 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd868818 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0xd868820 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd868830, `lw` at 0xd86888c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd86883c, `lw` at 0xd868898.
  The `bgezall` at 0xd868770 calls (unnamed) [0xd867fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86879c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868800 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0xd867fc0)+8]+4], a5=[a0+96]+1, a6=[a0+108]+4.
  The `jalr` at 0xd868834 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868848 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86886c calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868890 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8688a4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8688d4 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882afc], a2=?, a3=?.
  The `beq` branch at 0xd868778 targets 0xd8688c8, is taken when v0(=ret(0xd867fc0)) == 0, and falls through when v0(=ret(0xd867fc0)) != 0.
  The `beq` branch at 0xd868784 targets 0xd8688cc, is taken when at(=[ret(0xd867fc0)+8]) == 0, and falls through when at(=[ret(0xd867fc0)+8]) != 0.
  The `beq` branch at 0xd868790 targets 0xd8687a4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd8687b4 targets 0xd86886c, is taken when v1(=[a0+112]) < a0(=[a0+108]+4) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd868808 targets 0xd868880, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd868828 targets 0xd86883c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd868840 targets 0xd868854, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd868874 targets 0xd8687bc and is always taken.
  The `beq` branch at 0xd868884 targets 0xd868898, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86889c targets 0xd8688b0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd868864 has v0 = 0x1.
  The return at 0xd8688c0 has v0 = 0x0.
  The return at 0xd8688ec has v0 = 0x0.
  The instructions from 0xd86887c to 0xd86887c are not reached by any path from the entry, and their branches are not listed.

- `XmbufCreateBuffers` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd868900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd868900-0xd868b58 (600 bytes).
  It occupies 600 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd867fc0) +0x8, including `lw` at 0xd868954, `lw` at 0xd8689dc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd868960, `lw` at 0xd868a78.
  The `lw` at 0xd86896c loads 4 bytes from [a0+1232] +0x0.
  The `lw` at 0xd868978 loads 4 bytes from a0 (arg0 at entry) +0x4d4.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86898c, `lw` at 0xd8689c4, `lw` at 0xd868a04.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0xd868990, `lw` at 0xd868a0c.
  The `sw` at 0xd8689ac stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd8689b4, `sb` at 0xd868a00.
  2 such `sh` accesses store 2 bytes to [a0+108] +0x2, including `sh` at 0xd8689c0, `sh` at 0xd8689fc.
  The `lw` at 0xd8689c8 loads 4 bytes from a0 (arg0 at entry) +0x60.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x6c, including `sw` at 0xd8689d0, `sw` at 0xd868a48.
  The `sw` at 0xd8689d8 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lhu` at 0xd8689e0 loads 2 bytes from [a0+108] +0x2.
  The `lw` at 0xd8689e4 loads 4 bytes from [ret(0xd867fc0)+8] +0x4.
  The `sb` at 0xd8689e8 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd8689ec stores 4 bytes to [a0+108] +0x4.
  The `sb` at 0xd8689f0 stores 1 byte to [a0+108] +0x8.
  The `sb` at 0xd8689f4 stores 1 byte to [a0+108] +0x9.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd868a84, `lw` at 0xd868aec.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd868a90, `lw` at 0xd868af8.
  The `bgezall` at 0xd868944 calls (unnamed) [0xd867fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd868970 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868984 calls (unknown callee) with a0=a0 at entry (arg0), a1=a5 at entry (arg5), a2=a2 at entry (arg2), a3=?.
  The `jalr` at 0xd868a28 calls memcpy with a0=[a0+108], a1=a5 at entry (arg5), a2=(a2 << 0x2), a3=((a2 << 0x2) + [a0+108]), a4=(a2 + [[a0+108]+2]:2), a5=a4 at entry (arg4), a6=a3 at entry (arg3), a7=a1 at entry (arg1).
  The `jalr` at 0xd868a54 calls _XSend with a0=a0 at entry (arg0), a1=a5 at entry (arg5), a2=(a2 << 0x2), a3=((a2 << 0x2) + [a0+108]), a4=(a2 + [[a0+108]+2]:2), a5=a4 at entry (arg4), a6=a3 at entry (arg3), a7=a1 at entry (arg1).
  The `jalr` at 0xd868a6c calls _XReply with a0=a0 at entry (arg0), a1=sp-112, a2=0x0, a3=0x1.
  The `jalr` at 0xd868a88 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868a9c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868ad0 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+108]+12, a2=?, a3=?, a5=a4 at entry (arg4).
  The `jalr` at 0xd868af0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868b04 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868b48 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882afc], a2=?, a3=?.
  The `beq` branch at 0xd86894c targets 0xd868b40, is taken when v0(=ret(0xd867fc0)) == 0, and falls through when v0(=ret(0xd867fc0)) != 0.
  The `beq` branch at 0xd868958 targets 0xd868b44, is taken when at(=[ret(0xd867fc0)+8]) == 0, and falls through when at(=[ret(0xd867fc0)+8]) != 0.
  The `beq` branch at 0xd868964 targets 0xd868978, is taken when t0(=[a0+1232]) == 0, and falls through when t0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86899c targets 0xd868acc, is taken when v1(=[a0+112]) < a1(=[a0+108]+12) (unsigned), and falls through when v1(=[a0+112]) >= a1(=[a0+108]+12) (unsigned).
  The `bne` branch at 0xd868a18 targets 0xd868a4c, is taken when a2(=[a0+112]) < a3(=((a2 << 0x2) + [a0+108])) (unsigned), and falls through when a2(=[a0+112]) >= a3(=((a2 << 0x2) + [a0+108])) (unsigned).
  The `beq` branch at 0xd868a44 targets 0xd868a5c and is always taken.
  The `beq` branch at 0xd868a74 targets 0xd868ae4, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd868a7c targets 0xd868a90, is taken when t0(=[a0+1232]) == 0, and falls through when t0(=[a0+1232]) != 0.
  The `beq` branch at 0xd868a94 targets 0xd868aa8, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd868adc targets 0xd8689a0 and is always taken.
  The `beq` branch at 0xd868ae4 targets 0xd868af8, is taken when t0(=[a0+1232]) == 0, and falls through when t0(=[a0+1232]) != 0.
  The `beq` branch at 0xd868afc targets 0xd868b10, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd868b50 targets 0xd868aac and is always taken.
  The return at 0xd868ac4 has v0 = one of ?, 0x0.
  The return at 0xd868b2c has v0 = 0x0.
  The instructions from 0xd868b34 to 0xd868b3c are not reached by any path from the entry, and their branches are not listed.

- `XmbufDestroyBuffers` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd868b80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd868b80-0xd868ca8 (296 bytes).
  It occupies 296 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd867fc0) +0x8, including `lw` at 0xd868bbc, `lw` at 0xd868c20.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd868bc8, `lw` at 0xd868c38.
  The `lw` at 0xd868bd4 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd868be0, `lw` at 0xd868c08, `lw` at 0xd868c8c.
  The `lw` at 0xd868be4 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd868bf8 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd868c00, `sb` at 0xd868c34.
  The `sh` at 0xd868c04 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd868c0c loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd868c14 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd868c1c stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd868c28 loads 4 bytes from [ret(0xd867fc0)+8] +0x4.
  The `sb` at 0xd868c2c stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd868c30 stores 4 bytes to [a0+108] +0x4.
  The `lw` at 0xd868c44 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd868c50 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd868bac calls (unnamed) [0xd867fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd868bd8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868c48 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x2, a3=[[ret(0xd867fc0)+8]+4], a4=[a0+96]+1, a5=[a0+108]+8.
  The `jalr` at 0xd868c5c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868c80 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868c98 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882afc], a2=?, a3=?.
  The `beq` branch at 0xd868bb4 targets 0xd868c90, is taken when v0(=ret(0xd867fc0)) == 0, and falls through when v0(=ret(0xd867fc0)) != 0.
  The `beq` branch at 0xd868bc0 targets 0xd868c94, is taken when at(=[ret(0xd867fc0)+8]) == 0, and falls through when at(=[ret(0xd867fc0)+8]) != 0.
  The `beq` branch at 0xd868bcc targets 0xd868be0, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd868bf0 targets 0xd868c80, is taken when v0(=[a0+112]) < v1(=[a0+108]+8) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd868c3c targets 0xd868c50, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd868c54 targets 0xd868c68, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd868c88 targets 0xd868bf8 and is always taken.
  The `beq` branch at 0xd868ca0 targets 0xd868c68 and is always taken.
  The return at 0xd868c74 has v0 = one of ?, ret(?), ret(XMissingExtension).
  The instructions from 0xd868c7c to 0xd868c7c are not reached by any path from the entry, and their branches are not listed.

- `XmbufDisplayBuffers` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd868cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd868cc0-0xd868e78 (440 bytes).
  It occupies 440 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd867fc0) +0x8, including `lw` at 0xd868d0c, `lw` at 0xd868d7c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd868d18, `lw` at 0xd868e00.
  The `lw` at 0xd868d24 loads 4 bytes from [a0+1232] +0x0.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd868d30, `lw` at 0xd868d64, `lw` at 0xd868da0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0xd868d34, `lw` at 0xd868da8.
  The `sw` at 0xd868d50 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd868d58, `sb` at 0xd868d9c.
  2 such `sh` accesses store 2 bytes to [a0+108] +0x2, including `sh` at 0xd868d60, `sh` at 0xd868d98.
  The `lw` at 0xd868d68 loads 4 bytes from a0 (arg0 at entry) +0x60.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x6c, including `sw` at 0xd868d70, `sw` at 0xd868de8.
  The `sw` at 0xd868d78 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lhu` at 0xd868d80 loads 2 bytes from [a0+108] +0x2.
  The `lw` at 0xd868d84 loads 4 bytes from [ret(0xd867fc0)+8] +0x4.
  The `sb` at 0xd868d88 stores 1 byte to [a0+108] +0x1.
  The `sh` at 0xd868d8c stores 2 bytes to [a0+108] +0x4.
  The `sh` at 0xd868d90 stores 2 bytes to [a0+108] +0x6.
  The `lw` at 0xd868e0c loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd868e18 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd868cf8 calls (unnamed) [0xd867fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd868d28 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868dc8 calls memcpy with a0=[a0+108], a1=a2 at entry (arg2), a2=(a1 << 0x2), a3=?.
  The `jalr` at 0xd868df8 calls _XSend with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=(a1 << 0x2), a3=?.
  The `jalr` at 0xd868e10 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868e24 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868e4c calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868e68 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882afc], a2=?, a3=?.
  The `beq` branch at 0xd868d04 targets 0xd868e5c, is taken when v0(=ret(0xd867fc0)) == 0, and falls through when v0(=ret(0xd867fc0)) != 0.
  The `beq` branch at 0xd868d10 targets 0xd868e60, is taken when at(=[ret(0xd867fc0)+8]) == 0, and falls through when at(=[ret(0xd867fc0)+8]) != 0.
  The `beq` branch at 0xd868d1c targets 0xd868d30, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd868d40 targets 0xd868e48, is taken when v0(=[a0+112]) < v1(=[a0+108]+8) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+8) (unsigned).
  The `bne` branch at 0xd868db4 targets 0xd868dec, is taken when a1(=[a0+112]) < a2(=((a1 << 0x2) + [a0+108])) (unsigned), and falls through when a1(=[a0+112]) >= a2(=((a1 << 0x2) + [a0+108])) (unsigned).
  The `beq` branch at 0xd868de4 targets 0xd868e00 and is always taken.
  The `beq` branch at 0xd868e04 targets 0xd868e18, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd868e1c targets 0xd868e30, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd868e54 targets 0xd868d44 and is always taken.
  The `beq` branch at 0xd868e70 targets 0xd868e30 and is always taken.
  The return at 0xd868e40 has v0 = one of ?, ret(?), ret(XMissingExtension).

- `XmbufGetWindowAttributes` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd868e80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd868e80-0xd8690f8 (632 bytes).
  It occupies 632 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd867fc0) +0x8, including `lw` at 0xd868ec4, `lw` at 0xd868f2c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd868ed0, `lw` at 0xd868fac, `lw` at 0xd869030.
  The `lw` at 0xd868edc loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd868ee8, `lw` at 0xd868f14, `lw` at 0xd869090.
  The `lw` at 0xd868eec loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd868f00 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd868f08, `sb` at 0xd868f54.
  The `sh` at 0xd868f10 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd868f18 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd868f20 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd868f28 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd868f34 loads 4 bytes from [ret(0xd867fc0)+8] +0x4.
  The `sb` at 0xd868f3c stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd868f48 stores 4 bytes to [a0+108] +0x4.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x14, including `sw` at 0xd868f60, `sw` at 0xd868f8c.
  The `sw` at 0xd868f6c stores 4 bytes to a2 (arg2 at entry) +0x10.
  3 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd868fb8, `lw` at 0xd86903c, `lw` at 0xd8690a0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd868fc4, `lw` at 0xd869048, `lw` at 0xd8690ac.
  The `sw` at 0xd869014 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0xd86901c stores 4 bytes to a2 (arg2 at entry) +0x4.
  The `sw` at 0xd869024 stores 4 bytes to a2 (arg2 at entry) +0x8.
  The `sw` at 0xd86902c stores 4 bytes to a2 (arg2 at entry) +0xc.
  The `bgezall` at 0xd868eb4 calls (unnamed) [0xd867fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd868ee0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868f50 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(0xd867fc0)+8]+4], a5=a1 at entry (arg1), a6=0x5, a7=[a0+108]+8.
  The `jalr` at 0xd868f84 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd868fa4 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868fbc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd868fd0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869008 calls _XRead with a0=a0 at entry (arg0), a1=ret(malloc), a2=?, a3=?.
  The `jalr` at 0xd869040 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869054 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869084 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8690a4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8690b8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8690e8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882afc], a2=?, a3=?.
  The `beq` branch at 0xd868ebc targets 0xd8690dc, is taken when v0(=ret(0xd867fc0)) == 0, and falls through when v0(=ret(0xd867fc0)) != 0.
  The `beq` branch at 0xd868ec8 targets 0xd8690e0, is taken when at(=[ret(0xd867fc0)+8]) == 0, and falls through when at(=[ret(0xd867fc0)+8]) != 0.
  The `beq` branch at 0xd868ed4 targets 0xd868ee8, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd868ef8 targets 0xd869080, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd868f58 targets 0xd869094, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd868f68 targets 0xd869010, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0xd868f74 targets 0xd868f80, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0xd868f94 targets 0xd869000, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0xd868fb0 targets 0xd868fc4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd868fc8 targets 0xd868fdc, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd869034 targets 0xd869048, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86904c targets 0xd869060, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86908c targets 0xd868efc and is always taken.
  The `beq` branch at 0xd869098 targets 0xd8690ac, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd8690b0 targets 0xd8690c4, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8690f0 targets 0xd869060 and is always taken.
  The return at 0xd868fec has v0 = 0x0.
  The return at 0xd869070 has v0 = one of 0x0, 0x1.
  The return at 0xd8690d4 has v0 = 0x0.
  The instructions from 0xd868ff4 to 0xd868ffc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd869078 to 0xd86907c are not reached by any path from the entry, and their branches are not listed.

- `XmbufChangeWindowAttributes` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd869100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd869100-0xd8692d8 (472 bytes).
  It occupies 472 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd867fc0) +0x8, including `lw` at 0xd869144, `lw` at 0xd8691b0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd869150, `lw` at 0xd869260.
  The `lw` at 0xd86915c loads 4 bytes from [a0+1232] +0x0.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd869168, `lw` at 0xd869198, `lw` at 0xd869208.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0xd86916c, `lw` at 0xd869210.
  The `sw` at 0xd869180 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd869188, `sb` at 0xd8691d4.
  2 such `sh` accesses store 2 bytes to [a0+108] +0x2, including `sh` at 0xd869190, `sh` at 0xd869200.
  The `lw` at 0xd869194 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8691a0 stores 4 bytes to a0 (arg0 at entry) +0x60.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x6c, including `sw` at 0xd8691ac, `sw` at 0xd86924c.
  The `lw` at 0xd8691b8 loads 4 bytes from [ret(0xd867fc0)+8] +0x4.
  The `sw` at 0xd8691bc stores 4 bytes to [a0+108] +0x8.
  The `sw` at 0xd8691c0 stores 4 bytes to [a0+108] +0x4.
  The `sb` at 0xd8691c8 stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd8691e4 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `lhu` at 0xd8691f4 loads 2 bytes from [a0+108] +0x2.
  The `lw` at 0xd86926c loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd869278 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd869134 calls (unnamed) [0xd867fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd869160 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86922c calls memcpy with a0=[a0+108], a1=sp-64, a2=?, a3=0x4, a4=a1 at entry (arg1), a5=0x3, a6=[a0+108].
  The `jalr` at 0xd869258 calls _XSend with a0=a0 at entry (arg0), a1=sp-64, a2=?, a3=0x4, a4=a1 at entry (arg1), a5=0x3, a6=[a0+108].
  The `jalr` at 0xd869270 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869284 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8692a4 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8692c8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882afc], a2=?, a3=?.
  The `beq` branch at 0xd86913c targets 0xd8692c0, is taken when v0(=ret(0xd867fc0)) == 0, and falls through when v0(=ret(0xd867fc0)) != 0.
  The `beq` branch at 0xd869148 targets 0xd8692c4, is taken when at(=[ret(0xd867fc0)+8]) == 0, and falls through when at(=[ret(0xd867fc0)+8]) != 0.
  The `beq` branch at 0xd869154 targets 0xd869168, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd869178 targets 0xd8692a4, is taken when v0(=[a0+112]) < v1(=[a0+108]+12) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd8691d0 targets 0xd869260, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0xd8691d8 targets 0xd8692b4, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0xd86921c targets 0xd869250, is taken when t0(=[a0+112]) < t1(?) (unsigned), and falls through when t0(=[a0+112]) >= t1(?) (unsigned).
  The `beq` branch at 0xd869248 targets 0xd869260 and is always taken.
  The `beq` branch at 0xd869264 targets 0xd869278, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86927c targets 0xd869290, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8692ac targets 0xd869180 and is always taken.
  The `beq` branch at 0xd8692b8 targets 0xd8691f0 and is always taken.
  The `beq` branch at 0xd8692d0 targets 0xd869290 and is always taken.
  The return at 0xd86929c has v0 = one of ?, ret(?), ret(XMissingExtension).

- `XmbufGetBufferAttributes` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd869300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd869300-0xd8694cc (460 bytes).
  It occupies 460 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd867fc0) +0x8, including `lw` at 0xd869340, `lw` at 0xd8693a8.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86934c, `lw` at 0xd8693fc, `lw` at 0xd869458.
  The `lw` at 0xd869358 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd869364, `lw` at 0xd869390, `lw` at 0xd869454.
  The `lw` at 0xd869368 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86937c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd869384, `sb` at 0xd8693d0.
  The `sh` at 0xd86938c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd869394 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86939c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd8693a4 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd8693b0 loads 4 bytes from [ret(0xd867fc0)+8] +0x4.
  The `sb` at 0xd8693b8 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd8693c4 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd8693e0 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0xd8693e8 stores 4 bytes to a2 (arg2 at entry) +0x4.
  The `sw` at 0xd8693f0 stores 4 bytes to a2 (arg2 at entry) +0x8.
  The `sw` at 0xd8693f8 stores 4 bytes to a2 (arg2 at entry) +0xc.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd869408, `lw` at 0xd869464.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd869414, `lw` at 0xd869470.
  The `bgezall` at 0xd869330 calls (unnamed) [0xd867fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86935c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8693cc calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0xd867fc0)+8]+4], a5=a1 at entry (arg1), a6=0x7, a7=[a0+108]+8.
  The `jalr` at 0xd86940c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869420 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869448 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869468 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86947c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8694ac calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882afc], a2=?, a3=?.
  The `beq` branch at 0xd869338 targets 0xd8694a0, is taken when v0(=ret(0xd867fc0)) == 0, and falls through when v0(=ret(0xd867fc0)) != 0.
  The `beq` branch at 0xd869344 targets 0xd8694a4, is taken when at(=[ret(0xd867fc0)+8]) == 0, and falls through when at(=[ret(0xd867fc0)+8]) != 0.
  The `beq` branch at 0xd869350 targets 0xd869364, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd869374 targets 0xd869444, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd8693d4 targets 0xd869458, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd869400 targets 0xd869414, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd869418 targets 0xd86942c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd869450 targets 0xd869378 and is always taken.
  The `beq` branch at 0xd86945c targets 0xd869470, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd869474 targets 0xd869488, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd86943c has v0 = 0x1.
  The return at 0xd869498 has v0 = 0x0.
  The return at 0xd8694c4 has v0 = 0x0.

- `XmbufChangeBufferAttributes` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd869500 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd869500-0xd8696d8 (472 bytes).
  It occupies 472 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd867fc0) +0x8, including `lw` at 0xd869544, `lw` at 0xd8695b0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd869550, `lw` at 0xd869660.
  The `lw` at 0xd86955c loads 4 bytes from [a0+1232] +0x0.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd869568, `lw` at 0xd869598, `lw` at 0xd869608.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0xd86956c, `lw` at 0xd869610.
  The `sw` at 0xd869580 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd869588, `sb` at 0xd8695d4.
  2 such `sh` accesses store 2 bytes to [a0+108] +0x2, including `sh` at 0xd869590, `sh` at 0xd869600.
  The `lw` at 0xd869594 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8695a0 stores 4 bytes to a0 (arg0 at entry) +0x60.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x6c, including `sw` at 0xd8695ac, `sw` at 0xd86964c.
  The `lw` at 0xd8695b8 loads 4 bytes from [ret(0xd867fc0)+8] +0x4.
  The `sw` at 0xd8695bc stores 4 bytes to [a0+108] +0x8.
  The `sw` at 0xd8695c0 stores 4 bytes to [a0+108] +0x4.
  The `sb` at 0xd8695c8 stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd8695e4 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `lhu` at 0xd8695f4 loads 2 bytes from [a0+108] +0x2.
  The `lw` at 0xd86966c loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd869678 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd869534 calls (unnamed) [0xd867fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd869560 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86962c calls memcpy with a0=[a0+108], a1=sp-64, a2=?, a3=0x6, a4=a1 at entry (arg1), a5=0x3, a6=[a0+108].
  The `jalr` at 0xd869658 calls _XSend with a0=a0 at entry (arg0), a1=sp-64, a2=?, a3=0x6, a4=a1 at entry (arg1), a5=0x3, a6=[a0+108].
  The `jalr` at 0xd869670 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869684 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8696a4 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8696c8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882afc], a2=?, a3=?.
  The `beq` branch at 0xd86953c targets 0xd8696c0, is taken when v0(=ret(0xd867fc0)) == 0, and falls through when v0(=ret(0xd867fc0)) != 0.
  The `beq` branch at 0xd869548 targets 0xd8696c4, is taken when at(=[ret(0xd867fc0)+8]) == 0, and falls through when at(=[ret(0xd867fc0)+8]) != 0.
  The `beq` branch at 0xd869554 targets 0xd869568, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd869578 targets 0xd8696a4, is taken when v0(=[a0+112]) < v1(=[a0+108]+12) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd8695d0 targets 0xd869660, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0xd8695d8 targets 0xd8696b4, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0xd86961c targets 0xd869650, is taken when t0(=[a0+112]) < t1(?) (unsigned), and falls through when t0(=[a0+112]) >= t1(?) (unsigned).
  The `beq` branch at 0xd869648 targets 0xd869660 and is always taken.
  The `beq` branch at 0xd869664 targets 0xd869678, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86967c targets 0xd869690, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8696ac targets 0xd869580 and is always taken.
  The `beq` branch at 0xd8696b8 targets 0xd8695f0 and is always taken.
  The `beq` branch at 0xd8696d0 targets 0xd869690 and is always taken.
  The return at 0xd86969c has v0 = one of ?, ret(?), ret(XMissingExtension).

- `XmbufGetScreenInfo` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd869700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd869700-0xd8699b4 (692 bytes).
  It occupies 692 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd867fc0) +0x8, including `lw` at 0xd869754, `lw` at 0xd8697bc.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd869760, `lw` at 0xd869844, `lw` at 0xd8698d8.
  The `lw` at 0xd86976c loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd869778, `lw` at 0xd8697a8, `lw` at 0xd869938.
  The `lw` at 0xd86977c loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd869790 stores 4 bytes to a0 (arg0 at entry) +0x64.
  The `sh` at 0xd869798 stores 2 bytes to [a0+108] +0x2.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd8697a0, `sb` at 0xd8697e4.
  The `lw` at 0xd8697a4 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8697b0 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8697b8 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `lw` at 0xd8697c4 loads 4 bytes from [ret(0xd867fc0)+8] +0x4.
  The `sb` at 0xd8697cc stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd8697d8 stores 4 bytes to [a0+108] +0x4.
  3 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd869850, `lw` at 0xd8698e4, `lw` at 0xd86994c.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd86985c, `lw` at 0xd8698f0, `lw` at 0xd869958.
  The `sw` at 0xd8698c8 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0xd8698cc stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0xd8698d0 stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `sw` at 0xd8698d4 stores 4 bytes to a5 (arg5 at entry) +0x0.
  The `bgezall` at 0xd86973c calls (unnamed) [0xd867fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd869770 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8697e0 calls _XReply with a0=a0 at entry (arg0), a1=sp-128, a2=0x0, a3=0x0, a4=[[ret(0xd867fc0)+8]+4], a5=a1 at entry (arg1), a6=0x8, a7=[a0+108]+8.
  The `bgezall` at 0xd869804 calls (unnamed) [0xd868440] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86983c calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd869854 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869868 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0xd86989c calls (unnamed) [0xd868440] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8698e8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8698fc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86992c calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869950 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869964 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869988 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882afc], a2=?, a3=?.
  The `jalr` at 0xd8699a4 calls free with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0xd86974c targets 0xd869980, is taken when v0(=ret(0xd867fc0)) == 0, and falls through when v0(=ret(0xd867fc0)) != 0.
  The `beq` branch at 0xd869758 targets 0xd869984, is taken when at(=[ret(0xd867fc0)+8]) == 0, and falls through when at(=[ret(0xd867fc0)+8]) != 0.
  The `beq` branch at 0xd869764 targets 0xd869778, is taken when t0(=[a0+1232]) == 0, and falls through when t0(=[a0+1232]) != 0.
  The `bne` branch at 0xd869788 targets 0xd869928, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd8697e8 targets 0xd869940, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `blez` branch at 0xd8697f4 targets 0xd869888, is taken when s1(?) <= 0 (signed), and falls through when s1(?) > 0 (signed).
  The `bgtz` branch at 0xd86980c targets 0xd869890, is taken when s2(?) > 0 (signed), and falls through when s2(?) <= 0 (signed).
  The `blez` branch at 0xd869814 targets 0xd8698b8, is taken when s1(?) <= 0 (signed), and falls through when s1(?) > 0 (signed).
  The `bne` branch at 0xd86981c targets 0xd8698bc, is taken when s3(?) != 0, and falls through when s3(?) == 0.
  The `beq` branch at 0xd869830 targets 0xd869844, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0xd869848 targets 0xd86985c, is taken when t0(=[a0+1232]) == 0, and falls through when t0(=[a0+1232]) != 0.
  The `beq` branch at 0xd869860 targets 0xd869874, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `blez` branch at 0xd869888 targets 0xd869814, is taken when s2(?) <= 0 (signed), and falls through when s2(?) > 0 (signed).
  The `blez` branch at 0xd8698a4 targets 0xd8698b4, is taken when s1(?) <= 0 (signed), and falls through when s1(?) > 0 (signed).
  The `beq` branch at 0xd8698ac targets 0xd869824, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0xd8698b4 targets 0xd869998, is taken when v0(=ret(0xd868440)) == 0, and falls through when v0(=ret(0xd868440)) != 0.
  The `beq` branch at 0xd8698dc targets 0xd8698f0, is taken when t0(=[a0+1232]) == 0, and falls through when t0(=[a0+1232]) != 0.
  The `beq` branch at 0xd8698f4 targets 0xd869908, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd869934 targets 0xd86978c and is always taken.
  The `beq` branch at 0xd869944 targets 0xd869958, is taken when t0(=[a0+1232]) == 0, and falls through when t0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86995c targets 0xd86996c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86996c targets 0xd869908 and is always taken.
  The `beq` branch at 0xd869990 targets 0xd869908 and is always taken.
  The `beq` branch at 0xd869998 targets 0xd869824, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0xd8699ac targets 0xd869824 and is always taken.
  The return at 0xd869880 has v0 = 0x0.
  The return at 0xd869920 has v0 = one of 0x0, 0x1.
  The instructions from 0xd86993c to 0xd86993c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd869974 to 0xd86997c are not reached by any path from the entry, and their branches are not listed.

- `XmbufCreateStereoWindow` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8699c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8699c0-0xd869dc0 (1024 bytes).
  It occupies 1024 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd867fc0) +0x8, including `lw` at 0xd869a14, `lw` at 0xd869a7c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd869a20, `lw` at 0xd869d2c.
  The `lw` at 0xd869a2c loads 4 bytes from [a0+1232] +0x0.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd869a38, `lw` at 0xd869a64, `lw` at 0xd869cc8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0xd869a3c, `lw` at 0xd869cd0.
  The `sw` at 0xd869a50 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd869a58, `sb` at 0xd869a88.
  2 such `sh` accesses store 2 bytes to [a0+108] +0x2, including `sh` at 0xd869a60, `sh` at 0xd869cc0.
  The `lw` at 0xd869a68 loads 4 bytes from a0 (arg0 at entry) +0x60.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x6c, including `sw` at 0xd869a70, `sw` at 0xd869d18.
  The `sw` at 0xd869a78 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd869a80 loads 4 bytes from [ret(0xd867fc0)+8] +0x4.
  The `sb` at 0xd869a84 stores 1 byte to [a0+108] +0x1.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x2c, including `lw` at 0xd869a8c, `lw` at 0xd869aac, `lw` at 0xd869acc.
  The `sw` at 0xd869aa0 stores 4 bytes to [a0+108] +0x8.
  The `sw` at 0xd869aa8 stores 4 bytes to [a0+108] +0xc.
  13 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd869ac4, `sw` at 0xd869afc, `sw` at 0xd869bbc.
  The `sw` at 0xd869ac8 stores 4 bytes to [a0+108] +0x10.
  The `sw` at 0xd869b00 stores 4 bytes to [a0+108] +0x14.
  The `sh` at 0xd869b04 stores 2 bytes to [a0+108] +0x18.
  The `sh` at 0xd869b08 stores 2 bytes to [a0+108] +0x1a.
  The `sh` at 0xd869b0c stores 2 bytes to [a0+108] +0x1c.
  The `sh` at 0xd869b10 stores 2 bytes to [a0+108] +0x1e.
  The `sh` at 0xd869b14 stores 2 bytes to [a0+108] +0x20.
  The `sb` at 0xd869b18 stores 1 byte to [a0+108] +0x7.
  The `sh` at 0xd869b20 stores 2 bytes to [a0+108] +0x22.
  16 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd869b24, `lw` at 0xd869b50, `lw` at 0xd869b70.
  2 such `sw` accesses store 4 bytes to [a0+108] +0x24, including `sw` at 0xd869b28, `sw` at 0xd869d88.
  The `sw` at 0xd869b40 stores 4 bytes to [a0+108] +0x28.
  The `sw` at 0xd869b74 stores 4 bytes to (sp + one of -0x130, -0x12c) +0x0.
  The `sw` at 0xd869b8c stores 4 bytes to (sp + one of -0x130, -0x12c, -0x128) +0x0.
  The `sw` at 0xd869ba4 stores 4 bytes to (sp + one of -0x130, -0x12c, -0x128, -0x124) +0x0.
  The `lhu` at 0xd869cb4 loads 2 bytes from [a0+108] +0x2.
  The `lw` at 0xd869d38 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd869d44 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd869a04 calls (unnamed) [0xd867fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd869a30 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869a98 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x9, a2=[[ret(0xd867fc0)+8]+4], a3=[a0+96]+1, a4=[a0+108]+44, a5=0xb.
  The `jalr` at 0xd869ab8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=a1 at entry (arg1).
  The `jalr` at 0xd869ad0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869cf8 calls memcpy with a0=[a0+108], a1=sp-304, a2=?, a3=?, a4=sp-304.
  The `jalr` at 0xd869d24 calls _XSend with a0=a0 at entry (arg0), a1=sp-304, a2=?, a3=?, a4=sp-304.
  The `jalr` at 0xd869d3c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869d50 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869d70 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869da0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882afc], a2=?, a3=?.
  The `beq` branch at 0xd869a0c targets 0xd869d94, is taken when v0(=ret(0xd867fc0)) == 0, and falls through when v0(=ret(0xd867fc0)) != 0.
  The `beq` branch at 0xd869a18 targets 0xd869d98, is taken when at(=[ret(0xd867fc0)+8]) == 0, and falls through when at(=[ret(0xd867fc0)+8]) != 0.
  The `beq` branch at 0xd869a24 targets 0xd869a38, is taken when t2(=[a0+1232]) == 0, and falls through when t2(=[a0+1232]) != 0.
  The `bne` branch at 0xd869a48 targets 0xd869d70, is taken when v1(=[a0+112]) < a0(=[a0+108]+44) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+44) (unsigned).
  The `beq` branch at 0xd869b1c targets 0xd869d84, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0xd869b3c targets 0xd869d2c, is taken when (a0(?) & 0x7fff) == 0, and falls through when (a0(?) & 0x7fff) != 0.
  The `beq` branch at 0xd869b48 targets 0xd869d8c, is taken when (a0(?) & 0x1) == 0, and falls through when (a0(?) & 0x1) != 0.
  The `beq` branch at 0xd869b64 targets 0xd869b78, is taken when (a0(?) & 0x2) == 0, and falls through when (a0(?) & 0x2) != 0.
  The `beq` branch at 0xd869b7c targets 0xd869b90, is taken when (a0(?) & 0x4) == 0, and falls through when (a0(?) & 0x4) != 0.
  The `beq` branch at 0xd869b94 targets 0xd869ba8, is taken when (a0(?) & 0x8) == 0, and falls through when (a0(?) & 0x8) != 0.
  The `beq` branch at 0xd869bac targets 0xd869bc0, is taken when (a0(?) & 0x10) == 0, and falls through when (a0(?) & 0x10) != 0.
  The `beq` branch at 0xd869bc4 targets 0xd869bd8, is taken when (a0(?) & 0x20) == 0, and falls through when (a0(?) & 0x20) != 0.
  The `beq` branch at 0xd869bdc targets 0xd869bf0, is taken when (a0(?) & 0x40) == 0, and falls through when (a0(?) & 0x40) != 0.
  The `beq` branch at 0xd869bf4 targets 0xd869c0c, is taken when (a0(?) & 0x80) == 0, and falls through when (a0(?) & 0x80) != 0.
  The `beq` branch at 0xd869c0c targets 0xd869c20, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0xd869c24 targets 0xd869c38, is taken when (a0(?) & 0x200) == 0, and falls through when (a0(?) & 0x200) != 0.
  The `beq` branch at 0xd869c3c targets 0xd869c50, is taken when (a0(?) & 0x400) == 0, and falls through when (a0(?) & 0x400) != 0.
  The `beq` branch at 0xd869c54 targets 0xd869c68, is taken when (a0(?) & 0x800) == 0, and falls through when (a0(?) & 0x800) != 0.
  The `beq` branch at 0xd869c6c targets 0xd869c80, is taken when (a0(?) & 0x1000) == 0, and falls through when (a0(?) & 0x1000) != 0.
  The `beq` branch at 0xd869c84 targets 0xd869c98, is taken when (a0(?) & 0x2000) == 0, and falls through when (a0(?) & 0x2000) != 0.
  The `beq` branch at 0xd869c9c targets 0xd869cb0, is taken when (a0(?) & 0x4000) == 0, and falls through when (a0(?) & 0x4000) != 0.
  The `bne` branch at 0xd869cdc targets 0xd869d1c, is taken when a5(=[a0+112]) < a6(?) (unsigned), and falls through when a5(=[a0+112]) >= a6(?) (unsigned).
  The `beq` branch at 0xd869d14 targets 0xd869d2c and is always taken.
  The `beq` branch at 0xd869d30 targets 0xd869d44, is taken when t2(=[a0+1232]) == 0, and falls through when t2(=[a0+1232]) != 0.
  The `beq` branch at 0xd869d48 targets 0xd869d5c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd869d7c targets 0xd869a50 and is always taken.
  The `beq` branch at 0xd869d84 targets 0xd869b2c and is always taken.
  The `beq` branch at 0xd869d8c targets 0xd869b60 and is always taken.
  The return at 0xd869d68 has v0 = ?.
  The return at 0xd869db8 has v0 = 0x0.

- `XmbufClearBufferArea` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd869dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd869dc0-0xd869f2c (364 bytes).
  It occupies 364 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd867fc0) +0x8, including `lw` at 0xd869e10, `lw` at 0xd869e88.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd869e1c, `lw` at 0xd869eb4.
  The `lw` at 0xd869e28 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd869e34, `lw` at 0xd869e70, `lw` at 0xd869f10.
  The `lw` at 0xd869e38 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd869e5c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd869e64, `sb` at 0xd869eb0.
  The `sh` at 0xd869e6c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd869e74 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd869e7c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd869e84 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd869e90 loads 4 bytes from [ret(0xd867fc0)+8] +0x4.
  The `sb` at 0xd869e94 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd869e98 stores 4 bytes to [a0+108] +0x4.
  The `sh` at 0xd869e9c stores 2 bytes to [a0+108] +0x8.
  The `sh` at 0xd869ea0 stores 2 bytes to [a0+108] +0xa.
  The `sh` at 0xd869ea4 stores 2 bytes to [a0+108] +0xc.
  The `sh` at 0xd869ea8 stores 2 bytes to [a0+108] +0xe.
  The `sb` at 0xd869eac stores 1 byte to [a0+108] +0x13.
  The `lw` at 0xd869ec0 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd869ecc loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd869e00 calls (unnamed) [0xd867fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd869e2c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869ec4 calls (unknown callee) with a0=a0 at entry (arg0), a1=a6 at entry (arg6), a2=a5 at entry (arg5), a3=a4 at entry (arg4), a4=a3 at entry (arg3), a5=a2 at entry (arg2), a6=a1 at entry (arg1), a7=0xa.
  The `jalr` at 0xd869ed8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd869f04 calls _XFlush with a0=a0 at entry (arg0), a1=a6 at entry (arg6), a2=?, a3=?.
  The `jalr` at 0xd869f1c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882afc], a2=?, a3=?.
  The `beq` branch at 0xd869e08 targets 0xd869f14, is taken when v0(=ret(0xd867fc0)) == 0, and falls through when v0(=ret(0xd867fc0)) != 0.
  The `beq` branch at 0xd869e14 targets 0xd869f18, is taken when at(=[ret(0xd867fc0)+8]) == 0, and falls through when at(=[ret(0xd867fc0)+8]) != 0.
  The `beq` branch at 0xd869e20 targets 0xd869e34, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd869e44 targets 0xd869f00, is taken when v0(=[a0+112]) < v1(=[a0+108]+20) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+20) (unsigned).
  The `beq` branch at 0xd869eb8 targets 0xd869ecc, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd869ed0 targets 0xd869ee4, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd869f0c targets 0xd869e48 and is always taken.
  The `beq` branch at 0xd869f24 targets 0xd869ee4 and is always taken.
  The return at 0xd869ef0 has v0 = one of ?, ret(?), ret(XMissingExtension).
  The instructions from 0xd869ef8 to 0xd869efc are not reached by any path from the entry, and their branches are not listed.

- `XShapeQueryExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86a300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86a300-0xd86a384 (132 bytes).
  It occupies 132 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd869f40) +0x8, including `lw` at 0xd86a338, `lw` at 0xd86a358.
  The `lw` at 0xd86a350 loads 4 bytes from [ret(0xd869f40)+8] +0x8.
  The `sw` at 0xd86a354 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0xd86a364 loads 4 bytes from [ret(0xd869f40)+8] +0xc.
  The `sw` at 0xd86a368 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0xd86a324 calls (unnamed) [0xd869f40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0xd86a330 targets 0xd86a374, is taken when v0(=ret(0xd869f40)) == 0, and falls through when v0(=ret(0xd869f40)) != 0.
  The `beq` branch at 0xd86a33c targets 0xd86a378, is taken when a5(=[ret(0xd869f40)+8]) == 0, and falls through when a5(=[ret(0xd869f40)+8]) != 0.
  The return at 0xd86a36c has v0 = 0x1.
  The return at 0xd86a37c has v0 = 0x0.

- `XShapeQueryVersion` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86a3c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86a3c0-0xd86a574 (436 bytes).
  It occupies 436 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd869f40) +0x8, including `lw` at 0xd86a400, `lw` at 0xd86a464.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86a40c, `lw` at 0xd86a4a4, `lw` at 0xd86a500.
  The `lw` at 0xd86a418 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86a424, `lw` at 0xd86a44c, `lw` at 0xd86a4f8.
  The `lw` at 0xd86a428 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86a43c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86a440, `sb` at 0xd86a484.
  The `sh` at 0xd86a448 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86a450 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86a458 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86a460 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86a46c loads 4 bytes from [ret(0xd869f40)+8] +0x4.
  The `sb` at 0xd86a478 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86a498 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0xd86a4a0 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86a4b0, `lw` at 0xd86a50c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd86a4bc, `lw` at 0xd86a518.
  The `bgezall` at 0xd86a3f0 calls (unnamed) [0xd869f40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86a41c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86a480 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0xd869f40)+8]+4], a5=[a0+96]+1, a6=[a0+108]+4.
  The `jalr` at 0xd86a4b4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86a4c8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86a4ec calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86a510 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86a524 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86a554 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b08], a2=?, a3=?.
  The `beq` branch at 0xd86a3f8 targets 0xd86a548, is taken when v0(=ret(0xd869f40)) == 0, and falls through when v0(=ret(0xd869f40)) != 0.
  The `beq` branch at 0xd86a404 targets 0xd86a54c, is taken when at(=[ret(0xd869f40)+8]) == 0, and falls through when at(=[ret(0xd869f40)+8]) != 0.
  The `beq` branch at 0xd86a410 targets 0xd86a424, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86a434 targets 0xd86a4ec, is taken when v1(=[a0+112]) < a0(=[a0+108]+4) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd86a488 targets 0xd86a500, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd86a4a8 targets 0xd86a4bc, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86a4c0 targets 0xd86a4d4, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86a4f4 targets 0xd86a43c and is always taken.
  The `beq` branch at 0xd86a504 targets 0xd86a518, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86a51c targets 0xd86a530, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd86a4e4 has v0 = 0x1.
  The return at 0xd86a540 has v0 = 0x0.
  The return at 0xd86a56c has v0 = 0x0.
  The instructions from 0xd86a4fc to 0xd86a4fc are not reached by any path from the entry, and their branches are not listed.

- `XShapeCombineRegion` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86a580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86a580-0xd86a954 (980 bytes).
  It occupies 980 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd869f40) +0x8, including `lw` at 0xd86a5d8, `lw` at 0xd86a7bc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86a5e4, `lw` at 0xd86a874.
  The `lw` at 0xd86a5f0 loads 4 bytes from [a0+1232] +0x0.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86a5fc, `lw` at 0xd86a628, `lw` at 0xd86a808.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0xd86a600, `lw` at 0xd86a80c.
  The `sw` at 0xd86a614 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86a61c, `sb` at 0xd86a7ec.
  2 such `sh` accesses store 2 bytes to [a0+108] +0x2, including `sh` at 0xd86a624, `sh` at 0xd86a800.
  The `lw` at 0xd86a62c loads 4 bytes from a0 (arg0 at entry) +0x60.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x6c, including `sw` at 0xd86a634, `sw` at 0xd86a858.
  The `sw` at 0xd86a63c stores 4 bytes to a0 (arg0 at entry) +0x60.
  4 such `lw` accesses load 4 bytes from a5 (arg5 at entry) +0x4, including `lw` at 0xd86a640, `lw` at 0xd86a654, `lw` at 0xd86a7f0.
  The `lw` at 0xd86a65c loads 4 bytes from a5 (arg5 at entry) +0x8.
  2 such `lh` accesses load 2 bytes from [a5+8] +0x0, including `lh` at 0xd86a67c, `lh` at 0xd86a684.
  The `sh` at 0xd86a680 stores 2 bytes to ret(_XAllocScratch) +0x0.
  2 such `lh` accesses load 2 bytes from [a5+8] +0x4, including `lh` at 0xd86a688, `lh` at 0xd86a69c.
  The `sh` at 0xd86a68c stores 2 bytes to ret(_XAllocScratch) +0x2.
  The `lh` at 0xd86a690 loads 2 bytes from [a5+8] +0x2.
  The `sh` at 0xd86a698 stores 2 bytes to ret(_XAllocScratch) +0x4.
  2 such `lh` accesses load 2 bytes from [a5+8] +0x8, including `lh` at 0xd86a6a0, `lh` at 0xd86a6a8.
  The `sh` at 0xd86a6a4 stores 2 bytes to ret(_XAllocScratch) +0x8.
  2 such `lh` accesses load 2 bytes from [a5+8] +0xc, including `lh` at 0xd86a6ac, `lh` at 0xd86a6d8.
  The `sh` at 0xd86a6b0 stores 2 bytes to ret(_XAllocScratch) +0xa.
  The `lh` at 0xd86a6b4 loads 2 bytes from [a5+8] +0xa.
  The `lh` at 0xd86a6c0 loads 2 bytes from [a5+8] +0x6.
  The `sh` at 0xd86a6cc stores 2 bytes to ret(_XAllocScratch) +0xc.
  18 such `sh` accesses store 2 bytes to ?, including `sh` at 0xd86a6dc, `sh` at 0xd86a6e8, `sh` at 0xd86a6f4.
  25 such `lh` accesses load 2 bytes from ?, including `lh` at 0xd86a6e4, `lh` at 0xd86a6ec, `lh` at 0xd86a6f0.
  The `lw` at 0xd86a7c4 loads 4 bytes from [ret(0xd869f40)+8] +0x4.
  The `sb` at 0xd86a7cc stores 1 byte to [a0+108] +0x1.
  The `sb` at 0xd86a7d0 stores 1 byte to [a0+108] +0x4.
  The `sb` at 0xd86a7d8 stores 1 byte to [a0+108] +0x6.
  The `sb` at 0xd86a7dc stores 1 byte to [a0+108] +0x5.
  The `sw` at 0xd86a7e0 stores 4 bytes to [a0+108] +0x8.
  The `sh` at 0xd86a7e4 stores 2 bytes to [a0+108] +0xc.
  The `sh` at 0xd86a7e8 stores 2 bytes to [a0+108] +0xe.
  The `lhu` at 0xd86a7f4 loads 2 bytes from [a0+108] +0x2.
  The `lw` at 0xd86a880 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86a88c loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86a5c4 calls (unnamed) [0xd869f40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86a5f4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86a64c calls _XAllocScratch with a0=a0 at entry (arg0), a1=([a5+4] << 0x3), a2=[a0+96]+1, a3=[a0+108]+16, a4=0x4, a5=[a0+108], a6=0x1.
  The `jalr` at 0xd86a838 calls memcpy with a0=[a0+108], a1=ret(_XAllocScratch), a2=([a5+4] << 0x3), a3=0x1, a4=[[ret(0xd869f40)+8]+4], a5=[a0+108].
  The `jalr` at 0xd86a86c calls _XSend with a0=a0 at entry (arg0), a1=ret(_XAllocScratch), a2=([a5+4] << 0x3), a3=0x1, a4=[[ret(0xd869f40)+8]+4], a5=[a0+108].
  The `jalr` at 0xd86a884 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86a898 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86a8e0 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+108].
  The `jalr` at 0xd86a900 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b08], a2=?, a3=?.
  The `beq` branch at 0xd86a5d0 targets 0xd86a8f0, is taken when v0(=ret(0xd869f40)) == 0, and falls through when v0(=ret(0xd869f40)) != 0.
  The `beq` branch at 0xd86a5dc targets 0xd86a8f4, is taken when at(=[ret(0xd869f40)+8]) == 0, and falls through when at(=[ret(0xd869f40)+8]) != 0.
  The `beq` branch at 0xd86a5e8 targets 0xd86a5fc, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86a60c targets 0xd86a8dc, is taken when v1(=[a0+112]) < a0(=[a0+108]+16) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+16) (unsigned).
  The `blez` branch at 0xd86a668 targets 0xd86a7a8, is taken when a7(=[a5+4]) <= 0 (signed), and falls through when a7(=[a5+4]) > 0 (signed).
  The `bne` branch at 0xd86a674 targets 0xd86a910, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `beq` branch at 0xd86a710 targets 0xd86a8d4, is taken when a6(?) == at(=(([a5+4] << 0x3) + [a5+8])-16), and falls through when a6(?) != at(=(([a5+4] << 0x3) + [a5+8])-16).
  The `beq` branch at 0xd86a74c targets 0xd86a8c0, is taken when a5(?) == at(=(([a5+4] << 0x3) + [a5+8])-16), and falls through when a5(?) != at(=(([a5+4] << 0x3) + [a5+8])-16).
  The `bne` branch at 0xd86a788 targets 0xd86a6dc, is taken when a7(?) != at(=(([a5+4] << 0x3) + [a5+8])-16), and falls through when a7(?) == at(=(([a5+4] << 0x3) + [a5+8])-16).
  The `bne` branch at 0xd86a81c targets 0xd86a85c, is taken when a7(=[a0+112]) < t0(=(([a5+4] << 0x3) + [a0+108])) (unsigned), and falls through when a7(=[a0+112]) >= t0(=(([a5+4] << 0x3) + [a0+108])) (unsigned).
  The `beq` branch at 0xd86a854 targets 0xd86a874 and is always taken.
  The `beq` branch at 0xd86a878 targets 0xd86a88c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86a890 targets 0xd86a8a4, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86a8cc targets 0xd86a798 and is always taken.
  The `beq` branch at 0xd86a8d4 targets 0xd86a798 and is always taken.
  The `beq` branch at 0xd86a8e8 targets 0xd86a610 and is always taken.
  The `beq` branch at 0xd86a908 targets 0xd86a8a4 and is always taken.
  The `beq` branch at 0xd86a944 targets 0xd86a7a8, is taken when a0(?) == v0(=(([a5+4] << 0x3) + [a5+8])), and falls through when a0(?) != v0(=(([a5+4] << 0x3) + [a5+8])).
  The `beq` branch at 0xd86a94c targets 0xd86a910 and is always taken.
  The return at 0xd86a8b0 has v0 = one of ?, ret(?), ret(XMissingExtension).
  The instructions from 0xd86a8b8 to 0xd86a8bc are not reached by any path from the entry, and their branches are not listed.

- `XShapeCombineRectangles` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86a980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86a980-0xd86ab64 (484 bytes).
  It occupies 484 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd869f40) +0x8, including `lw` at 0xd86a9d8, `lw` at 0xd86aa58.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86a9e4, `lw` at 0xd86aaf0.
  The `lw` at 0xd86a9f0 loads 4 bytes from [a0+1232] +0x0.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86a9fc, `lw` at 0xd86aa40, `lw` at 0xd86aa90.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0xd86aa00, `lw` at 0xd86aa98.
  The `sw` at 0xd86aa2c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86aa34, `sb` at 0xd86aa8c.
  2 such `sh` accesses store 2 bytes to [a0+108] +0x2, including `sh` at 0xd86aa3c, `sh` at 0xd86aa88.
  The `lw` at 0xd86aa44 loads 4 bytes from a0 (arg0 at entry) +0x60.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x6c, including `sw` at 0xd86aa4c, `sw` at 0xd86aad8.
  The `sw` at 0xd86aa54 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lhu` at 0xd86aa5c loads 2 bytes from [a0+108] +0x2.
  The `lw` at 0xd86aa60 loads 4 bytes from [ret(0xd869f40)+8] +0x4.
  The `sb` at 0xd86aa64 stores 1 byte to [a0+108] +0x1.
  The `sb` at 0xd86aa68 stores 1 byte to [a0+108] +0x4.
  The `sb` at 0xd86aa6c stores 1 byte to [a0+108] +0x6.
  The `sb` at 0xd86aa70 stores 1 byte to [a0+108] +0x5.
  The `sw` at 0xd86aa74 stores 4 bytes to [a0+108] +0x8.
  The `sh` at 0xd86aa78 stores 2 bytes to [a0+108] +0xc.
  The `sh` at 0xd86aa80 stores 2 bytes to [a0+108] +0xe.
  The `lw` at 0xd86aafc loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86ab08 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86a9c4 calls (unnamed) [0xd869f40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86a9f4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86aab8 calls memcpy with a0=[a0+108], a1=a5 at entry (arg5), a2=(a6 << 0x3), a3=0x1, a4=[[ret(0xd869f40)+8]+4], a5=[a0+96]+1, a6=[a0+108]+16, a7=0x4.
  The `jalr` at 0xd86aae8 calls _XSend with a0=a0 at entry (arg0), a1=a5 at entry (arg5), a2=(a6 << 0x3), a3=0x1, a4=[[ret(0xd869f40)+8]+4], a5=[a0+96]+1, a6=[a0+108]+16, a7=0x4.
  The `jalr` at 0xd86ab00 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86ab14 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86ab38 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86ab54 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b08], a2=?, a3=?.
  The `beq` branch at 0xd86a9d0 targets 0xd86ab48, is taken when v0(=ret(0xd869f40)) == 0, and falls through when v0(=ret(0xd869f40)) != 0.
  The `beq` branch at 0xd86a9dc targets 0xd86ab4c, is taken when at(=[ret(0xd869f40)+8]) == 0, and falls through when at(=[ret(0xd869f40)+8]) != 0.
  The `beq` branch at 0xd86a9e8 targets 0xd86a9fc, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86aa0c targets 0xd86ab34, is taken when v0(=[a0+112]) < v1(=[a0+108]+16) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+16) (unsigned).
  The `bne` branch at 0xd86aaa4 targets 0xd86aadc, is taken when a1(=[a0+112]) < a2(=([a0+108] + (a6 << 0x3))) (unsigned), and falls through when a1(=[a0+112]) >= a2(=([a0+108] + (a6 << 0x3))) (unsigned).
  The `beq` branch at 0xd86aad4 targets 0xd86aaf0 and is always taken.
  The `beq` branch at 0xd86aaf4 targets 0xd86ab08, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86ab0c targets 0xd86ab20, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86ab40 targets 0xd86aa10 and is always taken.
  The `beq` branch at 0xd86ab5c targets 0xd86ab20 and is always taken.
  The return at 0xd86ab2c has v0 = one of ?, ret(?), ret(XMissingExtension).

- `XShapeCombineMask` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86ab80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86ab80-0xd86acec (364 bytes).
  It occupies 364 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd869f40) +0x8, including `lw` at 0xd86abd0, `lw` at 0xd86ac48.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86abdc, `lw` at 0xd86ac74.
  The `lw` at 0xd86abe8 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86abf4, `lw` at 0xd86ac30, `lw` at 0xd86acd0.
  The `lw` at 0xd86abf8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86ac1c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86ac24, `sb` at 0xd86ac70.
  The `sh` at 0xd86ac2c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86ac34 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86ac3c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86ac44 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86ac50 loads 4 bytes from [ret(0xd869f40)+8] +0x4.
  The `sb` at 0xd86ac54 stores 1 byte to [a0+108] +0x1.
  The `sb` at 0xd86ac58 stores 1 byte to [a0+108] +0x4.
  The `sb` at 0xd86ac5c stores 1 byte to [a0+108] +0x5.
  The `sw` at 0xd86ac60 stores 4 bytes to [a0+108] +0x8.
  The `sh` at 0xd86ac64 stores 2 bytes to [a0+108] +0xc.
  The `sh` at 0xd86ac68 stores 2 bytes to [a0+108] +0xe.
  The `sw` at 0xd86ac6c stores 4 bytes to [a0+108] +0x10.
  The `lw` at 0xd86ac80 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86ac8c loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86abc0 calls (unnamed) [0xd869f40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86abec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86ac84 calls (unknown callee) with a0=a0 at entry (arg0), a1=a5 at entry (arg5), a2=a4 at entry (arg4), a3=a3 at entry (arg3), a4=a1 at entry (arg1), a5=a2 at entry (arg2), a7=0x2.
  The `jalr` at 0xd86ac98 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86acc4 calls _XFlush with a0=a0 at entry (arg0), a1=a5 at entry (arg5), a2=?, a3=?.
  The `jalr` at 0xd86acdc calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b08], a2=?, a3=?.
  The `beq` branch at 0xd86abc8 targets 0xd86acd4, is taken when v0(=ret(0xd869f40)) == 0, and falls through when v0(=ret(0xd869f40)) != 0.
  The `beq` branch at 0xd86abd4 targets 0xd86acd8, is taken when at(=[ret(0xd869f40)+8]) == 0, and falls through when at(=[ret(0xd869f40)+8]) != 0.
  The `beq` branch at 0xd86abe0 targets 0xd86abf4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86ac04 targets 0xd86acc0, is taken when v0(=[a0+112]) < v1(=[a0+108]+20) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+20) (unsigned).
  The `beq` branch at 0xd86ac78 targets 0xd86ac8c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86ac90 targets 0xd86aca4, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86accc targets 0xd86ac08 and is always taken.
  The `beq` branch at 0xd86ace4 targets 0xd86aca4 and is always taken.
  The return at 0xd86acb0 has v0 = one of ?, ret(?), ret(XMissingExtension).
  The instructions from 0xd86acb8 to 0xd86acbc are not reached by any path from the entry, and their branches are not listed.

- `XShapeCombineShape` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86ad00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86ad00-0xd86ae74 (372 bytes).
  It occupies 372 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd869f40) +0x8, including `lw` at 0xd86ad54, `lw` at 0xd86add0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86ad60, `lw` at 0xd86ae00.
  The `lw` at 0xd86ad6c loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86ad78, `lw` at 0xd86adb8, `lw` at 0xd86ae58.
  The `lw` at 0xd86ad7c loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86ada4 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86adac, `sb` at 0xd86adfc.
  The `sh` at 0xd86adb4 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86adbc loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86adc4 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86adcc stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86add8 loads 4 bytes from [ret(0xd869f40)+8] +0x4.
  The `sb` at 0xd86addc stores 1 byte to [a0+108] +0x1.
  The `sb` at 0xd86ade0 stores 1 byte to [a0+108] +0x4.
  The `sb` at 0xd86ade4 stores 1 byte to [a0+108] +0x5.
  The `sb` at 0xd86ade8 stores 1 byte to [a0+108] +0x6.
  The `sw` at 0xd86adec stores 4 bytes to [a0+108] +0x8.
  The `sh` at 0xd86adf0 stores 2 bytes to [a0+108] +0xc.
  The `sh` at 0xd86adf4 stores 2 bytes to [a0+108] +0xe.
  The `sw` at 0xd86adf8 stores 4 bytes to [a0+108] +0x10.
  The `lw` at 0xd86ae0c loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86ae18 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86ad44 calls (unnamed) [0xd869f40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86ad70 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86ae10 calls (unknown callee) with a0=a0 at entry (arg0), a1=a5 at entry (arg5), a2=a4 at entry (arg4), a3=a3 at entry (arg3), a4=a1 at entry (arg1), a5=a6 at entry (arg6), a6=a2 at entry (arg2).
  The `jalr` at 0xd86ae24 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86ae4c calls _XFlush with a0=a0 at entry (arg0), a1=a5 at entry (arg5), a2=?, a3=?.
  The `jalr` at 0xd86ae64 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b08], a2=?, a3=?.
  The `beq` branch at 0xd86ad4c targets 0xd86ae5c, is taken when v0(=ret(0xd869f40)) == 0, and falls through when v0(=ret(0xd869f40)) != 0.
  The `beq` branch at 0xd86ad58 targets 0xd86ae60, is taken when at(=[ret(0xd869f40)+8]) == 0, and falls through when at(=[ret(0xd869f40)+8]) != 0.
  The `beq` branch at 0xd86ad64 targets 0xd86ad78, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86ad88 targets 0xd86ae48, is taken when v0(=[a0+112]) < v1(=[a0+108]+20) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+20) (unsigned).
  The `beq` branch at 0xd86ae04 targets 0xd86ae18, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86ae1c targets 0xd86ae30, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86ae54 targets 0xd86ad8c and is always taken.
  The `beq` branch at 0xd86ae6c targets 0xd86ae30 and is always taken.
  The return at 0xd86ae40 has v0 = one of ?, ret(?), ret(XMissingExtension).

- `XShapeOffsetShape` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86ae80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86ae80-0xd86afc8 (328 bytes).
  It occupies 328 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd869f40) +0x8, including `lw` at 0xd86aec8, `lw` at 0xd86af34.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86aed4, `lw` at 0xd86af58.
  The `lw` at 0xd86aee0 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86aeec, `lw` at 0xd86af1c, `lw` at 0xd86afac.
  The `lw` at 0xd86aef0 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86af0c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86af14, `sb` at 0xd86af54.
  The `sh` at 0xd86af18 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86af20 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86af28 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86af30 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86af3c loads 4 bytes from [ret(0xd869f40)+8] +0x4.
  The `sb` at 0xd86af40 stores 1 byte to [a0+108] +0x1.
  The `sb` at 0xd86af44 stores 1 byte to [a0+108] +0x4.
  The `sw` at 0xd86af48 stores 4 bytes to [a0+108] +0x8.
  The `sh` at 0xd86af4c stores 2 bytes to [a0+108] +0xc.
  The `sh` at 0xd86af50 stores 2 bytes to [a0+108] +0xe.
  The `lw` at 0xd86af64 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86af70 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86aeb8 calls (unnamed) [0xd869f40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86aee4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86af68 calls (unknown callee) with a0=a0 at entry (arg0), a1=a4 at entry (arg4), a2=a3 at entry (arg3), a3=a1 at entry (arg1), a4=a2 at entry (arg2), a5=0x4, a6=[[ret(0xd869f40)+8]+4], a7=[a0+96]+1.
  The `jalr` at 0xd86af7c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86afa0 calls _XFlush with a0=a0 at entry (arg0), a1=a4 at entry (arg4), a2=?, a3=?.
  The `jalr` at 0xd86afb8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b08], a2=?, a3=?.
  The `beq` branch at 0xd86aec0 targets 0xd86afb0, is taken when v0(=ret(0xd869f40)) == 0, and falls through when v0(=ret(0xd869f40)) != 0.
  The `beq` branch at 0xd86aecc targets 0xd86afb4, is taken when at(=[ret(0xd869f40)+8]) == 0, and falls through when at(=[ret(0xd869f40)+8]) != 0.
  The `beq` branch at 0xd86aed8 targets 0xd86aeec, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86aefc targets 0xd86af9c, is taken when v0(=[a0+112]) < v1(=[a0+108]+16) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+16) (unsigned).
  The `beq` branch at 0xd86af5c targets 0xd86af70, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86af74 targets 0xd86af88, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86afa8 targets 0xd86af00 and is always taken.
  The `beq` branch at 0xd86afc0 targets 0xd86af88 and is always taken.
  The return at 0xd86af94 has v0 = one of ?, ret(?), ret(XMissingExtension).

- `XShapeQueryExtents` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86b000 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86b000-0xd86b224 (548 bytes).
  It occupies 548 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd869f40) +0x8, including `lw` at 0xd86b054, `lw` at 0xd86b0bc.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86b060, `lw` at 0xd86b164, `lw` at 0xd86b1d8.
  The `lw` at 0xd86b06c loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86b078, `lw` at 0xd86b0a4, `lw` at 0xd86b1d4.
  The `lw` at 0xd86b07c loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86b090 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86b098, `sb` at 0xd86b0e4.
  The `sh` at 0xd86b0a0 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86b0a8 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86b0b0 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86b0b8 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86b0c4 loads 4 bytes from [ret(0xd869f40)+8] +0x4.
  The `sb` at 0xd86b0cc stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86b0d8 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd86b118 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0xd86b120 stores 4 bytes to a7 (arg7 at entry) +0x0.
  The `sw` at 0xd86b128 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0xd86b130 stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `sw` at 0xd86b138 stores 4 bytes to a5 (arg5 at entry) +0x0.
  The `sw` at 0xd86b140 stores 4 bytes to a6 (arg6 at entry) +0x0.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd86b148, `sw` at 0xd86b150, `sw` at 0xd86b158.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86b170, `lw` at 0xd86b1e4.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd86b17c, `lw` at 0xd86b1f0.
  The `bgezall` at 0xd86b044 calls (unnamed) [0xd869f40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86b070 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b0e0 calls _XReply with a0=a0 at entry (arg0), a1=sp-192, a2=0x0, a3=0x1, a4=[[ret(0xd869f40)+8]+4], a5=a1 at entry (arg1), a6=0x5, a7=[a0+108]+8.
  The `jalr` at 0xd86b174 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a5 at entry (arg5), a3=?, a6=a3 at entry (arg3).
  The `jalr` at 0xd86b188 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b1c8 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b1e8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b1fc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b214 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b08], a2=?, a3=?.
  The `beq` branch at 0xd86b04c targets 0xd86b20c, is taken when v0(=ret(0xd869f40)) == 0, and falls through when v0(=ret(0xd869f40)) != 0.
  The `beq` branch at 0xd86b058 targets 0xd86b210, is taken when at(=[ret(0xd869f40)+8]) == 0, and falls through when at(=[ret(0xd869f40)+8]) != 0.
  The `beq` branch at 0xd86b064 targets 0xd86b078, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86b088 targets 0xd86b1c4, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd86b0e8 targets 0xd86b1d8, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd86b168 targets 0xd86b17c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86b180 targets 0xd86b194, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86b1d0 targets 0xd86b08c and is always taken.
  The `beq` branch at 0xd86b1dc targets 0xd86b1f0, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86b1f4 targets 0xd86b204, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86b204 targets 0xd86b1ac and is always taken.
  The `beq` branch at 0xd86b21c targets 0xd86b1ac and is always taken.
  The return at 0xd86b1a4 has v0 = 0x1.
  The return at 0xd86b1bc has v0 = 0x0.

- `XShapeSelectInput` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86b240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86b240-0xd86b39c (348 bytes).
  It occupies 348 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd869f40) +0x8, including `lw` at 0xd86b280, `lw` at 0xd86b2ec.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86b28c, `lw` at 0xd86b318.
  The `lw` at 0xd86b298 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86b2a4, `lw` at 0xd86b2d4, `lw` at 0xd86b364.
  The `lw` at 0xd86b2a8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86b2bc stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86b2c4, `sb` at 0xd86b30c.
  The `sh` at 0xd86b2cc stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86b2d0 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86b2dc stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86b2e8 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `lw` at 0xd86b2f4 loads 4 bytes from [ret(0xd869f40)+8] +0x4.
  The `sw` at 0xd86b2f8 stores 4 bytes to [a0+108] +0x4.
  The `sb` at 0xd86b300 stores 1 byte to [a0+108] +0x1.
  2 such `sb` accesses store 1 byte to [a0+108] +0x8, including `sb` at 0xd86b314, `sb` at 0xd86b370.
  The `lw` at 0xd86b324 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86b330 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86b270 calls (unnamed) [0xd869f40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86b29c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b328 calls (unknown callee) with a0=a0 at entry (arg0), a1=[[ret(0xd869f40)+8]+4], a2=?, a3=0x6, a4=a1 at entry (arg1), a5=0x3.
  The `jalr` at 0xd86b33c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b358 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b38c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b08], a2=?, a3=?.
  The `beq` branch at 0xd86b278 targets 0xd86b380, is taken when v0(=ret(0xd869f40)) == 0, and falls through when v0(=ret(0xd869f40)) != 0.
  The `beq` branch at 0xd86b284 targets 0xd86b384, is taken when at(=[ret(0xd869f40)+8]) == 0, and falls through when at(=[ret(0xd869f40)+8]) != 0.
  The `beq` branch at 0xd86b290 targets 0xd86b2a4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86b2b4 targets 0xd86b358, is taken when v1(=[a0+112]) < a0(=[a0+108]+12) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd86b308 targets 0xd86b368, is taken when (a2 & 0x1) == 0, and falls through when (a2 & 0x1) != 0.
  The `beq` branch at 0xd86b31c targets 0xd86b330, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86b334 targets 0xd86b348, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86b360 targets 0xd86b2bc and is always taken.
  The `beq` branch at 0xd86b36c targets 0xd86b318 and is always taken.
  The `beq` branch at 0xd86b394 targets 0xd86b348 and is always taken.
  The return at 0xd86b350 has v0 = one of ?, ret(?), ret(XMissingExtension).
  The instructions from 0xd86b374 to 0xd86b37c are not reached by any path from the entry, and their branches are not listed.

- `XShapeInputSelected` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86b3c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86b3c0-0xd86b56c (428 bytes).
  It occupies 428 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd869f40) +0x8, including `lw` at 0xd86b3fc, `lw` at 0xd86b464.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86b408, `lw` at 0xd86b494.
  The `lw` at 0xd86b414 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86b420, `lw` at 0xd86b44c, `lw` at 0xd86b4f0.
  The `lw` at 0xd86b424 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86b438 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86b440, `sb` at 0xd86b48c.
  The `sh` at 0xd86b448 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86b450 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86b458 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86b460 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86b46c loads 4 bytes from [ret(0xd869f40)+8] +0x4.
  The `sb` at 0xd86b474 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86b480 stores 4 bytes to [a0+108] +0x4.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86b4a0, `lw` at 0xd86b4fc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd86b4ac, `lw` at 0xd86b508.
  The `bgezall` at 0xd86b3ec calls (unnamed) [0xd869f40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86b418 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+1232].
  The `jalr` at 0xd86b488 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(0xd869f40)+8]+4], a5=a1 at entry (arg1), a6=0x7, a7=[a0+108]+8.
  The `jalr` at 0xd86b4a4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+1232].
  The `jalr` at 0xd86b4b8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b4e4 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b500 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+1232].
  The `jalr` at 0xd86b514 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b54c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b08], a2=?, a3=?.
  The `beq` branch at 0xd86b3f4 targets 0xd86b540, is taken when v0(=ret(0xd869f40)) == 0, and falls through when v0(=ret(0xd869f40)) != 0.
  The `beq` branch at 0xd86b400 targets 0xd86b544, is taken when at(=[ret(0xd869f40)+8]) == 0, and falls through when at(=[ret(0xd869f40)+8]) != 0.
  The `beq` branch at 0xd86b40c targets 0xd86b420, is taken when a4(=[a0+1232]) == 0, and falls through when a4(=[a0+1232]) != 0.
  The `bne` branch at 0xd86b430 targets 0xd86b4e0, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd86b490 targets 0xd86b4f4, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd86b498 targets 0xd86b4ac, is taken when a4(=[a0+1232]) == 0, and falls through when a4(=[a0+1232]) != 0.
  The `beq` branch at 0xd86b4b0 targets 0xd86b4c4, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86b4ec targets 0xd86b434 and is always taken.
  The `beq` branch at 0xd86b4f4 targets 0xd86b508, is taken when a4(=[a0+1232]) == 0, and falls through when a4(=[a0+1232]) != 0.
  The `beq` branch at 0xd86b50c targets 0xd86b520, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd86b4d8 has v0 = ?.
  The return at 0xd86b530 has v0 = 0x0.
  The return at 0xd86b564 has v0 = 0x0.
  The instructions from 0xd86b538 to 0xd86b53c are not reached by any path from the entry, and their branches are not listed.

- `XShapeGetRectangles` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86b580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86b580-0xd86b934 (948 bytes).
  It occupies 948 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd869f40) +0x8, including `lw` at 0xd86b5cc, `lw` at 0xd86b638.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86b5d8, `lw` at 0xd86b7c4, `lw` at 0xd86b858.
  The `lw` at 0xd86b5e4 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86b5f0, `lw` at 0xd86b620, `lw` at 0xd86b81c.
  The `lw` at 0xd86b5f4 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86b608 stores 4 bytes to a0 (arg0 at entry) +0x64.
  The `sh` at 0xd86b610 stores 2 bytes to [a0+108] +0x2.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86b618, `sb` at 0xd86b664.
  The `lw` at 0xd86b61c loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86b628 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86b634 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `lw` at 0xd86b640 loads 4 bytes from [ret(0xd869f40)+8] +0x4.
  The `sb` at 0xd86b644 stores 1 byte to [a0+108] +0x8.
  The `sw` at 0xd86b64c stores 4 bytes to [a0+108] +0x4.
  The `sb` at 0xd86b658 stores 1 byte to [a0+108] +0x1.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0xd86b678, `sw` at 0xd86b848.
  The `sw` at 0xd86b680 stores 4 bytes to a4 (arg4 at entry) +0x0.
  5 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x0, including `lw` at 0xd86b684, `lw` at 0xd86b698, `lw` at 0xd86b6d0.
  10 such `lh` accesses load 2 bytes from ?, including `lh` at 0xd86b704, `lh` at 0xd86b70c, `lh` at 0xd86b71c.
  10 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0xd86b708, `lhu` at 0xd86b714, `lhu` at 0xd86b734.
  20 such `sh` accesses store 2 bytes to ?, including `sh` at 0xd86b724, `sh` at 0xd86b728, `sh` at 0xd86b72c.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86b7d0, `lw` at 0xd86b864.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd86b7dc, `lw` at 0xd86b870.
  The `bgezall` at 0xd86b5bc calls (unnamed) [0xd869f40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86b5e8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b660 calls _XReply with a0=a0 at entry (arg0), a1=sp-112, a2=0x0, a3=0x0, a4=[[ret(0xd869f40)+8]+4], a5=0x8, a6=a1 at entry (arg1), a7=a2 at entry (arg2).
  The `jalr` at 0xd86b690 calls malloc with a0=([a3] << 0x3), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b6b0 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b6dc calls _XRead with a0=a0 at entry (arg0), a1=?, a2=([a3] << 0x3), a3=?.
  The `jalr` at 0xd86b7b0 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b7d4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b7e8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b810 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b828 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b840 calls _XEatData with a0=a0 at entry (arg0), a1=([a3] << 0x3), a2=?, a3=?.
  The `jalr` at 0xd86b868 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b87c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86b8ac calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b08], a2=?, a3=?.
  The `jalr` at 0xd86b8e8 calls free with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0xd86b5c4 targets 0xd86b8a0, is taken when v0(=ret(0xd869f40)) == 0, and falls through when v0(=ret(0xd869f40)) != 0.
  The `beq` branch at 0xd86b5d0 targets 0xd86b8a4, is taken when at(=[ret(0xd869f40)+8]) == 0, and falls through when at(=[ret(0xd869f40)+8]) != 0.
  The `beq` branch at 0xd86b5dc targets 0xd86b5f0, is taken when v1(=[a0+1232]) == 0, and falls through when v1(=[a0+1232]) != 0.
  The `bne` branch at 0xd86b600 targets 0xd86b80c, is taken when v1(=[a0+112]) < a0(=[a0+108]+12) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd86b668 targets 0xd86b858, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd86b688 targets 0xd86b7c0, is taken when v1(=[a3]) == 0, and falls through when v1(=[a3]) != 0.
  The `beq` branch at 0xd86b6a0 targets 0xd86b6ac, is taken when v1(=[a3]) == 0, and falls through when v1(=[a3]) != 0.
  The `beq` branch at 0xd86b6bc targets 0xd86b820, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0xd86b6c4 targets 0xd86b8e4, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `blez` branch at 0xd86b6f0 targets 0xd86b7ac, is taken when v1(=[a3]) <= 0 (signed), and falls through when v1(=[a3]) > 0 (signed).
  The `bne` branch at 0xd86b6fc targets 0xd86b900, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0xd86b748 targets 0xd86b8d0, is taken when a3(?) == at(?), and falls through when a3(?) != at(?).
  The `bne` branch at 0xd86b778 targets 0xd86b724, is taken when a4(?) != at(?), and falls through when a4(?) == at(?).
  The `beq` branch at 0xd86b7b8 targets 0xd86b7c4 and is always taken.
  The `beq` branch at 0xd86b7c8 targets 0xd86b7dc, is taken when v1(=[a0+1232]) == 0, and falls through when v1(=[a0+1232]) != 0.
  The `beq` branch at 0xd86b7e0 targets 0xd86b7f4, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86b818 targets 0xd86b604 and is always taken.
  The `beq` branch at 0xd86b820 targets 0xd86b830, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0xd86b850 targets 0xd86b7c4 and is always taken.
  The `beq` branch at 0xd86b85c targets 0xd86b870, is taken when v1(=[a0+1232]) == 0, and falls through when v1(=[a0+1232]) != 0.
  The `beq` branch at 0xd86b874 targets 0xd86b888, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86b8dc targets 0xd86b780 and is always taken.
  The `beq` branch at 0xd86b8f0 targets 0xd86b834 and is always taken.
  The `beq` branch at 0xd86b924 targets 0xd86b7ac, is taken when a5(?) == a4(?), and falls through when a5(?) != a4(?).
  The `beq` branch at 0xd86b92c targets 0xd86b900 and is always taken.
  The return at 0xd86b804 has v0 = ?.
  The return at 0xd86b898 has v0 = 0x0.
  The return at 0xd86b8c8 has v0 = 0x0.
  The instructions from 0xd86b8f8 to 0xd86b8fc are not reached by any path from the entry, and their branches are not listed.

- `XShmQueryExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86be00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86be00-0xd86be60 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0xd86be34 loads 4 bytes from ret(0xd86b9c0) +0x8.
  The `bgezall` at 0xd86be20 calls (unnamed) [0xd86b9c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0xd86be2c targets 0xd86be4c, is taken when v0(=ret(0xd86b9c0)) == 0, and falls through when v0(=ret(0xd86b9c0)) != 0.
  The `beq` branch at 0xd86be38 targets 0xd86be4c, is taken when at(=[ret(0xd86b9c0)+8]) == 0, and falls through when at(=[ret(0xd86b9c0)+8]) != 0.
  The return at 0xd86be44 has v0 = 0x1.
  The return at 0xd86be58 has v0 = 0x0.

- `XShmGetEventBase` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86be80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86be80-0xd86bee0 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0xd86beb0 loads 4 bytes from ret(0xd86b9c0) +0x8.
  The `lw` at 0xd86bebc loads 4 bytes from [ret(0xd86b9c0)+8] +0x8.
  The `bgezall` at 0xd86bea0 calls (unnamed) [0xd86b9c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0xd86bea8 targets 0xd86bed0, is taken when v0(=ret(0xd86b9c0)) == 0, and falls through when v0(=ret(0xd86b9c0)) != 0.
  The `beq` branch at 0xd86beb4 targets 0xd86becc, is taken when a2(=[ret(0xd86b9c0)+8]) == 0, and falls through when a2(=[ret(0xd86b9c0)+8]) != 0.
  The return at 0xd86bec4 has v0 = [[ret(0xd86b9c0)+8]+8].
  The return at 0xd86bed8 has v0 = -0x1.

- `XShmQueryVersion` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86bf00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86bf00-0xd86c0b8 (440 bytes).
  It occupies 440 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86b9c0) +0x8, including `lw` at 0xd86bf44, `lw` at 0xd86bfa8.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86bf50, `lw` at 0xd86bffc, `lw` at 0xd86c06c.
  The `lw` at 0xd86bf5c loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86bf68, `lw` at 0xd86bf90, `lw` at 0xd86c068.
  The `lw` at 0xd86bf6c loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86bf80 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86bf84, `sb` at 0xd86bfcc.
  The `sh` at 0xd86bf8c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86bf94 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86bf9c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86bfa4 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86bfb4 loads 4 bytes from [ret(0xd86b9c0)+8] +0x4.
  The `sb` at 0xd86bfc0 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86bfe0 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0xd86bfe8 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0xd86bff8 stores 4 bytes to a3 (arg3 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86c008, `lw` at 0xd86c078.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd86c014, `lw` at 0xd86c084.
  The `bgezall` at 0xd86bf34 calls (unnamed) [0xd86b9c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86bf60 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86bfc8 calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x0, a3=0x0, a4=[[ret(0xd86b9c0)+8]+4], a5=[a0+96]+1, a6=[a0+108]+4, a7=0x1.
  The `jalr` at 0xd86c00c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c020 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c05c calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c07c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c090 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c0a8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b10], a2=?, a3=?.
  The `beq` branch at 0xd86bf3c targets 0xd86c0a0, is taken when v0(=ret(0xd86b9c0)) == 0, and falls through when v0(=ret(0xd86b9c0)) != 0.
  The `beq` branch at 0xd86bf48 targets 0xd86c0a4, is taken when at(=[ret(0xd86b9c0)+8]) == 0, and falls through when at(=[ret(0xd86b9c0)+8]) != 0.
  The `beq` branch at 0xd86bf54 targets 0xd86bf68, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86bf78 targets 0xd86c05c, is taken when v1(=[a0+112]) < a0(=[a0+108]+4) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd86bfd0 targets 0xd86c06c, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd86c000 targets 0xd86c014, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86c018 targets 0xd86c02c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86c064 targets 0xd86bf80 and is always taken.
  The `beq` branch at 0xd86c070 targets 0xd86c084, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86c088 targets 0xd86c098, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86c098 targets 0xd86c044 and is always taken.
  The `beq` branch at 0xd86c0b0 targets 0xd86c044 and is always taken.
  The return at 0xd86c03c has v0 = 0x1.
  The return at 0xd86c054 has v0 = 0x0.

- `XShmPixmapFormat` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86c0c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86c0c0-0xd86c27c (444 bytes).
  It occupies 444 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86b9c0) +0x8, including `lw` at 0xd86c0f8, `lw` at 0xd86c15c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86c104, `lw` at 0xd86c18c.
  The `lw` at 0xd86c110 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86c11c, `lw` at 0xd86c144, `lw` at 0xd86c214.
  The `lw` at 0xd86c120 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86c134 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86c138, `sb` at 0xd86c180.
  The `sh` at 0xd86c140 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86c148 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86c150 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86c158 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86c168 loads 4 bytes from [ret(0xd86b9c0)+8] +0x4.
  The `sb` at 0xd86c174 stores 1 byte to [a0+108] +0x1.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86c198, `lw` at 0xd86c220.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd86c1a4, `lw` at 0xd86c22c.
  The `bgezall` at 0xd86c0e8 calls (unnamed) [0xd86b9c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86c114 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+1232].
  The `jalr` at 0xd86c17c calls _XReply with a0=a0 at entry (arg0), a1=sp-64, a2=0x0, a3=0x0, a4=[[ret(0xd86b9c0)+8]+4], a5=[a0+96]+1, a6=[a0+108]+4, a7=0x1.
  The `jalr` at 0xd86c19c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+1232].
  The `jalr` at 0xd86c1b0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c208 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c224 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+1232].
  The `jalr` at 0xd86c238 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c264 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b10], a2=?, a3=?.
  The `beq` branch at 0xd86c0f0 targets 0xd86c258, is taken when v0(=ret(0xd86b9c0)) == 0, and falls through when v0(=ret(0xd86b9c0)) != 0.
  The `beq` branch at 0xd86c0fc targets 0xd86c25c, is taken when at(=[ret(0xd86b9c0)+8]) == 0, and falls through when at(=[ret(0xd86b9c0)+8]) != 0.
  The `beq` branch at 0xd86c108 targets 0xd86c11c, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The `bne` branch at 0xd86c12c targets 0xd86c208, is taken when v1(=[a0+112]) < a0(=[a0+108]+4) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd86c188 targets 0xd86c218, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd86c190 targets 0xd86c1a4, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The `beq` branch at 0xd86c1a8 targets 0xd86c1bc, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86c1c4 targets 0xd86c274, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0xd86c1d0 targets 0xd86c1e0, is taken when a0(?) >= 0x2 (signed), and falls through when a0(?) < 0x2 (signed).
  The `blez` branch at 0xd86c1d8 targets 0xd86c274, is taken when a3(?) <= 0 (signed), and falls through when a3(?) > 0 (signed).
  The `beq` branch at 0xd86c210 targets 0xd86c134 and is always taken.
  The `beq` branch at 0xd86c218 targets 0xd86c22c, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The `beq` branch at 0xd86c230 targets 0xd86c244, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86c26c targets 0xd86c1f0 and is always taken.
  The `beq` branch at 0xd86c274 targets 0xd86c1f0 and is always taken.
  The return at 0xd86c1e8 has v0 = ?.
  The return at 0xd86c200 has v0 = 0x0.
  The return at 0xd86c250 has v0 = 0x0.

- `XShmAttach` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86c280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86c280-0xd86c3f4 (372 bytes).
  It occupies 372 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86b9c0) +0x8, including `lw` at 0xd86c2c0, `lw` at 0xd86c338.
  The `lw` at 0xd86c2cc loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `sw` at 0xd86c2d8 stores 4 bytes to a1 (arg1 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86c2dc, `lw` at 0xd86c364.
  The `lw` at 0xd86c2e8 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86c2f4, `lw` at 0xd86c320, `lw` at 0xd86c3f0.
  The `lw` at 0xd86c2f8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86c30c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86c314, `sb` at 0xd86c344.
  The `sh` at 0xd86c31c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86c324 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86c32c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86c334 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86c33c loads 4 bytes from [ret(0xd86b9c0)+8] +0x4.
  The `sb` at 0xd86c340 stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd86c348 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `sw` at 0xd86c34c stores 4 bytes to [a0+108] +0x4.
  The `lw` at 0xd86c350 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `sw` at 0xd86c354 stores 4 bytes to [a0+108] +0x8.
  The `lw` at 0xd86c358 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `sb` at 0xd86c360 stores 1 byte to [a0+108] +0xc.
  The `lw` at 0xd86c370 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86c37c loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86c2b0 calls (unnamed) [0xd86b9c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86c2d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c2ec calls (unknown callee) with a0=a0 at entry (arg0), a1=[a0+1232], a2=?, a3=?.
  The `jalr` at 0xd86c374 calls (unknown callee) with a0=a0 at entry (arg0), a1=[a0+1232], a2=[a1+4], a3=[a1], a4=0x1, a5=[[ret(0xd86b9c0)+8]+4], a6=[a0+96]+1, a7=[a0+108]+16.
  The `jalr` at 0xd86c388 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c3c0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b10], a2=?, a3=?.
  The `jalr` at 0xd86c3e4 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd86c2b8 targets 0xd86c3b0, is taken when v0(=ret(0xd86b9c0)) == 0, and falls through when v0(=ret(0xd86b9c0)) != 0.
  The `beq` branch at 0xd86c2c4 targets 0xd86c3b4, is taken when at(=[ret(0xd86b9c0)+8]) == 0, and falls through when at(=[ret(0xd86b9c0)+8]) != 0.
  The `beq` branch at 0xd86c2e0 targets 0xd86c2f4, is taken when a1(=[a0+1232]) == 0, and falls through when a1(=[a0+1232]) != 0.
  The `bne` branch at 0xd86c304 targets 0xd86c3e4, is taken when v1(=[a0+112]) < a0(=[a0+108]+16) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+16) (unsigned).
  The `beq` branch at 0xd86c368 targets 0xd86c37c, is taken when a1(=[a0+1232]) == 0, and falls through when a1(=[a0+1232]) != 0.
  The `beq` branch at 0xd86c380 targets 0xd86c394, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86c3ec targets 0xd86c30c and is always taken.
  The return at 0xd86c3a8 has v0 = 0x1.
  The return at 0xd86c3dc has v0 = 0x0.

- `XShmDetach` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86c400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86c400-0xd86c540 (320 bytes).
  It occupies 320 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86b9c0) +0x8, including `lw` at 0xd86c43c, `lw` at 0xd86c4a0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86c448, `lw` at 0xd86c4bc.
  The `lw` at 0xd86c454 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86c460, `lw` at 0xd86c488, `lw` at 0xd86c510.
  The `lw` at 0xd86c464 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86c478 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86c480, `sb` at 0xd86c4b0.
  The `sh` at 0xd86c484 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86c48c loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86c494 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86c49c stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86c4a8 loads 4 bytes from [ret(0xd86b9c0)+8] +0x4.
  The `sb` at 0xd86c4ac stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd86c4b4 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `sw` at 0xd86c4b8 stores 4 bytes to [a0+108] +0x4.
  The `lw` at 0xd86c4c8 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86c4d4 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86c42c calls (unnamed) [0xd86b9c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86c458 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c4cc calls (unknown callee) with a0=a0 at entry (arg0), a1=[a1], a2=0x2, a3=[[ret(0xd86b9c0)+8]+4], a4=[a0+96]+1, a5=[a0+108]+8.
  The `jalr` at 0xd86c4e0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c504 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c520 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b10], a2=?, a3=?.
  The `beq` branch at 0xd86c434 targets 0xd86c514, is taken when v0(=ret(0xd86b9c0)) == 0, and falls through when v0(=ret(0xd86b9c0)) != 0.
  The `beq` branch at 0xd86c440 targets 0xd86c518, is taken when at(=[ret(0xd86b9c0)+8]) == 0, and falls through when at(=[ret(0xd86b9c0)+8]) != 0.
  The `beq` branch at 0xd86c44c targets 0xd86c460, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86c470 targets 0xd86c504, is taken when v0(=[a0+112]) < v1(=[a0+108]+8) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd86c4c0 targets 0xd86c4d4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86c4d8 targets 0xd86c4ec, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86c50c targets 0xd86c478 and is always taken.
  The return at 0xd86c4fc has v0 = 0x1.
  The return at 0xd86c538 has v0 = 0x0.

- `_XShmDestroyImage` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86c540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86c540-0xd86c578 (56 bytes).
  It occupies 56 bytes.
  The `jalr` at 0xd86c55c calls free with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd86c570 has v0 = 0x1.

- `XShmCreateImage` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86c580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86c580-0xd86c71c (412 bytes).
  It occupies 412 bytes.
  2 such `sw` accesses store 4 bytes to ret(calloc) +0x30, including `sw` at 0xd86c5e8, `sw` at 0xd86c6e4.
  2 such `sw` accesses store 4 bytes to ret(calloc) +0x34, including `sw` at 0xd86c5ec, `sw` at 0xd86c6ec.
  2 such `sw` accesses store 4 bytes to ret(calloc) +0x38, including `sw` at 0xd86c5f0, `sw` at 0xd86c6f8.
  2 such `sw` accesses store 4 bytes to ret(calloc) +0x2c, including `sw` at 0xd86c600, `sw` at 0xd86c718.
  The `sw` at 0xd86c644 stores 4 bytes to ret(calloc) +0x28.
  The `sw` at 0xd86c65c stores 4 bytes to ret(calloc) +0x44.
  The `sw` at 0xd86c688 stores 4 bytes to ret(calloc) +0x10.
  The `sw` at 0xd86c68c stores 4 bytes to ret(calloc) +0x3c.
  The `sw` at 0xd86c690 stores 4 bytes to ret(calloc) +0x0.
  The `sw` at 0xd86c694 stores 4 bytes to ret(calloc) +0x4.
  The `sw` at 0xd86c698 stores 4 bytes to ret(calloc) +0x24.
  The `sw` at 0xd86c6a0 stores 4 bytes to ret(calloc) +0xc.
  The `lw` at 0xd86c6a4 loads 4 bytes from a0 (arg0 at entry) +0x30.
  The `sw` at 0xd86c6a8 stores 4 bytes to ret(calloc) +0x14.
  The `lw` at 0xd86c6ac loads 4 bytes from a0 (arg0 at entry) +0x34.
  The `sw` at 0xd86c6b0 stores 4 bytes to ret(calloc) +0x18.
  The `lw` at 0xd86c6b4 loads 4 bytes from a0 (arg0 at entry) +0x3c.
  The `sw` at 0xd86c6bc stores 4 bytes to ret(calloc) +0x1c.
  The `sw` at 0xd86c6c8 stores 4 bytes to ret(calloc) +0x8.
  The `sw` at 0xd86c6d4 stores 4 bytes to ret(calloc) +0x20.
  The `lw` at 0xd86c6e0 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0xd86c6e8 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0xd86c6f0 loads 4 bytes from a1 (arg1 at entry) +0x14.
  The `lw` at 0xd86c70c loads 4 bytes from ret(calloc) +0x20.
  The `jalr` at 0xd86c5c4 calls calloc with a0=0x1, a1=0x58, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86c640 calls _XInitImageFuncPtrs with a0=ret(calloc), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c6b8 calls _XGetScanlinePad with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0xd86c704 calls _XGetBitsPerPixel with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=?, a4=ret(_XGetScanlinePad), a5=0x1, a7=0x2.
  The `bne` branch at 0xd86c5d0 targets 0xd86c66c, is taken when v0(=ret(calloc)) != 0, and falls through when v0(=ret(calloc)) == 0.
  The `beq` branch at 0xd86c5f8 targets 0xd86c700, is taken when v1(=a3) == a7(=0x2), and falls through when v1(=a3) != a7(=0x2).
  The `beq` branch at 0xd86c6d8 targets 0xd86c5e8, is taken when a0(=a1) == 0, and falls through when a0(=a1) != 0.
  The `beq` branch at 0xd86c6f4 targets 0xd86c5f4 and is always taken.
  The `beq` branch at 0xd86c714 targets 0xd86c604 and is always taken.
  The return at 0xd86c5e0 has v0 = ret(calloc).
  The return at 0xd86c664 has v0 = ret(calloc).
  The instructions from 0xd86c6fc to 0xd86c6fc are not reached by any path from the entry, and their branches are not listed.

- `XShmPutImage` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86c740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86c740-0xd86c95c (540 bytes).
  It occupies 540 bytes.
  The `lw` at 0xd86c798 loads 4 bytes from a3 (arg3 at entry) +0x3c.
  2 such `lw` accesses load 4 bytes from ret(0xd86b9c0) +0x8, including `lw` at 0xd86c7a4, `lw` at 0xd86c848.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86c7b8, `lw` at 0xd86c8bc.
  The `lw` at 0xd86c7c4 loads 4 bytes from [a0+1232] +0x0.
  The `lw` at 0xd86c7d0 loads 4 bytes from a2 (arg2 at entry) +0x10.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86c7e8, `lw` at 0xd86c830, `lw` at 0xd86c940.
  The `lw` at 0xd86c7ec loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86c800 stores 4 bytes to a0 (arg0 at entry) +0x64.
  The `sh` at 0xd86c808 stores 2 bytes to [a0+108] +0x2.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86c82c, `sb` at 0xd86c85c.
  The `lw` at 0xd86c834 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86c83c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86c844 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86c850 loads 4 bytes from [ret(0xd86b9c0)+8] +0x4.
  The `sb` at 0xd86c854 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86c858 stores 4 bytes to [a0+108] +0x4.
  The `lw` at 0xd86c860 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `sh` at 0xd86c864 stores 2 bytes to [a0+108] +0x10.
  The `sh` at 0xd86c868 stores 2 bytes to [a0+108] +0x12.
  The `sh` at 0xd86c86c stores 2 bytes to [a0+108] +0x14.
  The `sh` at 0xd86c870 stores 2 bytes to [a0+108] +0x16.
  The `sh` at 0xd86c874 stores 2 bytes to [a0+108] +0x18.
  The `sh` at 0xd86c878 stores 2 bytes to [a0+108] +0x1a.
  The `sw` at 0xd86c87c stores 4 bytes to [a0+108] +0x8.
  The `lw` at 0xd86c880 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `sh` at 0xd86c884 stores 2 bytes to [a0+108] +0xc.
  The `lw` at 0xd86c888 loads 4 bytes from a3 (arg3 at entry) +0x4.
  The `sh` at 0xd86c88c stores 2 bytes to [a0+108] +0xe.
  The `lw` at 0xd86c890 loads 4 bytes from a3 (arg3 at entry) +0x24.
  The `sb` at 0xd86c894 stores 1 byte to [a0+108] +0x1c.
  The `lw` at 0xd86c898 loads 4 bytes from a3 (arg3 at entry) +0xc.
  The `sb` at 0xd86c89c stores 1 byte to [a0+108] +0x1e.
  The `sb` at 0xd86c8a0 stores 1 byte to [a0+108] +0x1d.
  The `lw` at 0xd86c8a4 loads 4 bytes from [a3+60] +0x0.
  The `sw` at 0xd86c8a8 stores 4 bytes to [a0+108] +0x20.
  The `lw` at 0xd86c8ac loads 4 bytes from [a3+60] +0x8.
  The `lw` at 0xd86c8b0 loads 4 bytes from a3 (arg3 at entry) +0x10.
  The `sw` at 0xd86c8b8 stores 4 bytes to [a0+108] +0x24.
  The `lw` at 0xd86c8c8 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86c8d4 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86c790 calls (unnamed) [0xd86b9c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86c7c8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c7e0 calls _XFlushGCCache with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0xd86c8cc calls (unknown callee) with a0=a0 at entry (arg0), a1=0x3, a2=?, a3=[[a3+60]+8], a4=[[a3+60]], a6=[a3+12], a7=[a3+36].
  The `jalr` at 0xd86c8e0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86c934 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+108]+40, a2=?, a3=?.
  The `jalr` at 0xd86c94c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b10], a2=?, a3=?.
  The `beq` branch at 0xd86c79c targets 0xd86c944, is taken when v0(=ret(0xd86b9c0)) == 0, and falls through when v0(=ret(0xd86b9c0)) != 0.
  The `beq` branch at 0xd86c7a8 targets 0xd86c948, is taken when at(=[ret(0xd86b9c0)+8]) == 0, and falls through when at(=[ret(0xd86b9c0)+8]) != 0.
  The `beq` branch at 0xd86c7b0 targets 0xd86c910, is taken when s4(=[a3+60]) == 0, and falls through when s4(=[a3+60]) != 0.
  The `beq` branch at 0xd86c7bc targets 0xd86c7d0, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86c7d4 targets 0xd86c7e8, is taken when v0(=[a2+16]) == 0, and falls through when v0(=[a2+16]) != 0.
  The `bne` branch at 0xd86c7f8 targets 0xd86c934, is taken when v1(=[a0+112]) < a1(=[a0+108]+40) (unsigned), and falls through when v1(=[a0+112]) >= a1(=[a0+108]+40) (unsigned).
  The `beq` branch at 0xd86c8c0 targets 0xd86c8d4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86c8d8 targets 0xd86c8ec, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86c93c targets 0xd86c800 and is always taken.
  The `beq` branch at 0xd86c954 targets 0xd86c8ec and is always taken.
  The return at 0xd86c908 has v0 = one of 0x0, 0x1.
  The return at 0xd86c92c has v0 = 0x0.

- `XShmGetImage` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86c980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86c980-0xd86cbd8 (600 bytes).
  It occupies 600 bytes.
  The `lw` at 0xd86c9cc loads 4 bytes from a2 (arg2 at entry) +0x3c.
  2 such `lw` accesses load 4 bytes from ret(0xd86b9c0) +0x8, including `lw` at 0xd86c9d8, `lw` at 0xd86ca54.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86c9ec, `lw` at 0xd86cac4, `lw` at 0xd86cb50.
  The `lw` at 0xd86c9f8 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86ca04, `lw` at 0xd86ca3c, `lw` at 0xd86cbb8.
  The `lw` at 0xd86ca08 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86ca28 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86ca30, `sb` at 0xd86ca70.
  The `sh` at 0xd86ca38 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86ca40 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86ca48 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86ca50 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86ca5c loads 4 bytes from [ret(0xd86b9c0)+8] +0x4.
  The `sb` at 0xd86ca60 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86ca64 stores 4 bytes to [a0+108] +0x4.
  The `sh` at 0xd86ca68 stores 2 bytes to [a0+108] +0x8.
  The `sh` at 0xd86ca6c stores 2 bytes to [a0+108] +0xa.
  The `lw` at 0xd86ca74 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `sh` at 0xd86ca78 stores 2 bytes to [a0+108] +0xc.
  The `lw` at 0xd86ca7c loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `sw` at 0xd86ca80 stores 4 bytes to [a0+108] +0x10.
  The `sh` at 0xd86ca84 stores 2 bytes to [a0+108] +0xe.
  The `lw` at 0xd86ca88 loads 4 bytes from a2 (arg2 at entry) +0xc.
  The `sb` at 0xd86ca8c stores 1 byte to [a0+108] +0x14.
  The `lw` at 0xd86ca90 loads 4 bytes from [a2+60] +0x0.
  The `sw` at 0xd86ca94 stores 4 bytes to [a0+108] +0x18.
  The `lw` at 0xd86ca98 loads 4 bytes from [a2+60] +0x8.
  The `lw` at 0xd86caa4 loads 4 bytes from a2 (arg2 at entry) +0x10.
  The `sw` at 0xd86cab8 stores 4 bytes to [a0+108] +0x1c.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86cad0, `lw` at 0xd86cb5c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd86cadc, `lw` at 0xd86cb68.
  The `lw` at 0xd86cb28 loads 4 bytes from ret(_XVIDtoVisual) +0xc.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x30, including `sw` at 0xd86cb2c, `sw` at 0xd86cb4c.
  The `lw` at 0xd86cb30 loads 4 bytes from ret(_XVIDtoVisual) +0x10.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x34, including `sw` at 0xd86cb34, `sw` at 0xd86cb48.
  The `lw` at 0xd86cb38 loads 4 bytes from ret(_XVIDtoVisual) +0x14.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x38, including `sw` at 0xd86cb40, `sw` at 0xd86cb44.
  The `bgezall` at 0xd86c9c4 calls (unnamed) [0xd86b9c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86c9fc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86cab4 calls _XReply with a0=a0 at entry (arg0), a1=sp-112, a2=0x0, a3=0x0, a5=[[a2+60]+8], a6=[[a2+60]], a7=[a2+12].
  The `jalr` at 0xd86cad4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86cae8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86cb18 calls _XVIDtoVisual with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86cb60 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86cb74 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86cbac calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86cbc8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b10], a2=?, a3=?.
  The `beq` branch at 0xd86c9d0 targets 0xd86cbc0, is taken when v0(=ret(0xd86b9c0)) == 0, and falls through when v0(=ret(0xd86b9c0)) != 0.
  The `beq` branch at 0xd86c9dc targets 0xd86cbc4, is taken when at(=[ret(0xd86b9c0)+8]) == 0, and falls through when at(=[ret(0xd86b9c0)+8]) != 0.
  The `beq` branch at 0xd86c9e4 targets 0xd86cba0, is taken when s3(=[a2+60]) == 0, and falls through when s3(=[a2+60]) != 0.
  The `beq` branch at 0xd86c9f0 targets 0xd86ca04, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86ca14 targets 0xd86cba8, is taken when v1(=[a0+112]) < a0(=[a0+108]+32) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+32) (unsigned).
  The `bne` branch at 0xd86cabc targets 0xd86cb14, is taken when v0(=ret(_XReply)) != 0, and falls through when v0(=ret(_XReply)) == 0.
  The `beq` branch at 0xd86cac8 targets 0xd86cadc, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86cae0 targets 0xd86caf4, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86cb20 targets 0xd86cb44, is taken when v0(=ret(_XVIDtoVisual)) == 0, and falls through when v0(=ret(_XVIDtoVisual)) != 0.
  The `beq` branch at 0xd86cb3c targets 0xd86cb50 and is always taken.
  The `beq` branch at 0xd86cb54 targets 0xd86cb68, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86cb6c targets 0xd86cb80, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86cba0 targets 0xd86cb80 and is always taken.
  The `beq` branch at 0xd86cbb4 targets 0xd86ca18 and is always taken.
  The `beq` branch at 0xd86cbd0 targets 0xd86cb80 and is always taken.
  The return at 0xd86cb0c has v0 = 0x0.
  The return at 0xd86cb98 has v0 = one of 0x0, 0x1.
  The instructions from 0xd86cbbc to 0xd86cbbc are not reached by any path from the entry, and their branches are not listed.

- `XShmCreatePixmap` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86cc00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86cc00-0xd86cdac (428 bytes).
  It occupies 428 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86b9c0) +0x8, including `lw` at 0xd86cc50, `lw` at 0xd86ccc8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86cc5c, `lw` at 0xd86cd18.
  The `lw` at 0xd86cc68 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86cc74, `lw` at 0xd86ccb0, `lw` at 0xd86cd70.
  The `lw` at 0xd86cc78 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86cc9c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86cca4, `sb` at 0xd86cce8.
  The `sh` at 0xd86ccac stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86ccb4 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86ccbc stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86ccc4 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86ccd0 loads 4 bytes from [ret(0xd86b9c0)+8] +0x4.
  The `sb` at 0xd86ccd4 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86ccd8 stores 4 bytes to [a0+108] +0x8.
  The `sh` at 0xd86ccdc stores 2 bytes to [a0+108] +0xc.
  The `sh` at 0xd86cce0 stores 2 bytes to [a0+108] +0xe.
  The `sb` at 0xd86cce4 stores 1 byte to [a0+108] +0x10.
  The `lw` at 0xd86ccec loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `sw` at 0xd86ccf0 stores 4 bytes to [a0+108] +0x14.
  The `lw` at 0xd86ccf4 loads 4 bytes from a3 (arg3 at entry) +0x8.
  The `sw` at 0xd86ccfc stores 4 bytes to [a0+108] +0x18.
  The `lw` at 0xd86cd00 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `sw` at 0xd86cd14 stores 4 bytes to [a0+108] +0x4.
  The `lw` at 0xd86cd28 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86cd34 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86cc40 calls (unnamed) [0xd86b9c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86cc6c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86cd08 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a3+8], a3=[a3], a4=a6 at entry (arg6), a6=a4 at entry (arg4), a7=a1 at entry (arg1).
  The `jalr` at 0xd86cd2c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86cd40 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86cd64 calls _XFlush with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0xd86cd8c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b10], a2=?, a3=?.
  The `beq` branch at 0xd86cc48 targets 0xd86cd80, is taken when v0(=ret(0xd86b9c0)) == 0, and falls through when v0(=ret(0xd86b9c0)) != 0.
  The `beq` branch at 0xd86cc54 targets 0xd86cd84, is taken when at(=[ret(0xd86b9c0)+8]) == 0, and falls through when at(=[ret(0xd86b9c0)+8]) != 0.
  The `beq` branch at 0xd86cc60 targets 0xd86cc74, is taken when t1(=[a0+1232]) == 0, and falls through when t1(=[a0+1232]) != 0.
  The `bne` branch at 0xd86cc84 targets 0xd86cd60, is taken when v1(=[a0+112]) < a0(=[a0+108]+28) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+28) (unsigned).
  The `beq` branch at 0xd86cd20 targets 0xd86cd34, is taken when t1(=[a0+1232]) == 0, and falls through when t1(=[a0+1232]) != 0.
  The `beq` branch at 0xd86cd38 targets 0xd86cd4c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86cd6c targets 0xd86cc88 and is always taken.
  The return at 0xd86cd58 has v0 = ret(?).
  The return at 0xd86cda4 has v0 = 0x0.
  The instructions from 0xd86cd74 to 0xd86cd7c are not reached by any path from the entry, and their branches are not listed.

- `XMITMiscQueryExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86cec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86cec0-0xd86cf44 (132 bytes).
  It occupies 132 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86cdc0) +0x8, including `lw` at 0xd86cef8, `lw` at 0xd86cf18.
  The `lw` at 0xd86cf10 loads 4 bytes from [ret(0xd86cdc0)+8] +0x8.
  The `sw` at 0xd86cf14 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0xd86cf24 loads 4 bytes from [ret(0xd86cdc0)+8] +0xc.
  The `sw` at 0xd86cf28 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0xd86cee4 calls (unnamed) [0xd86cdc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0xd86cef0 targets 0xd86cf34, is taken when v0(=ret(0xd86cdc0)) == 0, and falls through when v0(=ret(0xd86cdc0)) != 0.
  The `beq` branch at 0xd86cefc targets 0xd86cf38, is taken when a5(=[ret(0xd86cdc0)+8]) == 0, and falls through when a5(=[ret(0xd86cdc0)+8]) != 0.
  The return at 0xd86cf2c has v0 = 0x1.
  The return at 0xd86cf3c has v0 = 0x0.

- `XMITMiscSetBugMode` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86cf80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86cf80-0xd86d0bc (316 bytes).
  It occupies 316 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86cdc0) +0x8, including `lw` at 0xd86cfbc, `lw` at 0xd86d020.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86cfc8, `lw` at 0xd86d038.
  The `lw` at 0xd86cfd4 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86cfe0, `lw` at 0xd86d008, `lw` at 0xd86d08c.
  The `lw` at 0xd86cfe4 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86cff8 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86cffc, `sb` at 0xd86d034.
  The `sh` at 0xd86d004 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86d00c loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86d014 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86d01c stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86d028 loads 4 bytes from [ret(0xd86cdc0)+8] +0x4.
  The `sb` at 0xd86d02c stores 1 byte to [a0+108] +0x1.
  The `sb` at 0xd86d030 stores 1 byte to [a0+108] +0x4.
  The `lw` at 0xd86d044 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86d050 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86cfac calls (unnamed) [0xd86cdc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86cfd8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d048 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[[ret(0xd86cdc0)+8]+4], a3=[a0+96]+1, a4=[a0+108]+8, a5=0x2.
  The `jalr` at 0xd86d05c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d080 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d09c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b1c], a2=?, a3=?.
  The `beq` branch at 0xd86cfb4 targets 0xd86d090, is taken when v0(=ret(0xd86cdc0)) == 0, and falls through when v0(=ret(0xd86cdc0)) != 0.
  The `beq` branch at 0xd86cfc0 targets 0xd86d094, is taken when at(=[ret(0xd86cdc0)+8]) == 0, and falls through when at(=[ret(0xd86cdc0)+8]) != 0.
  The `beq` branch at 0xd86cfcc targets 0xd86cfe0, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86cff0 targets 0xd86d080, is taken when v0(=[a0+112]) < v1(=[a0+108]+8) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd86d03c targets 0xd86d050, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86d054 targets 0xd86d068, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86d088 targets 0xd86cff8 and is always taken.
  The return at 0xd86d078 has v0 = 0x1.
  The return at 0xd86d0b4 has v0 = 0x0.

- `XMITMiscGetBugMode` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86d0c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86d0c0-0xd86d250 (400 bytes).
  It occupies 400 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86cdc0) +0x8, including `lw` at 0xd86d0f8, `lw` at 0xd86d15c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86d104, `lw` at 0xd86d188.
  The `lw` at 0xd86d110 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86d11c, `lw` at 0xd86d144, `lw` at 0xd86d1dc.
  The `lw` at 0xd86d120 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86d134 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86d13c, `sb` at 0xd86d180.
  The `sh` at 0xd86d140 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86d148 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86d150 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86d158 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86d168 loads 4 bytes from [ret(0xd86cdc0)+8] +0x4.
  The `sb` at 0xd86d174 stores 1 byte to [a0+108] +0x1.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86d194, `lw` at 0xd86d1e8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd86d1a0, `lw` at 0xd86d1f4.
  The `bgezall` at 0xd86d0e8 calls (unnamed) [0xd86cdc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86d114 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+1232].
  The `jalr` at 0xd86d17c calls _XReply with a0=a0 at entry (arg0), a1=sp-64, a2=0x0, a3=0x0, a4=[[ret(0xd86cdc0)+8]+4], a5=0x1, a6=[a0+96]+1, a7=[a0+108]+4.
  The `jalr` at 0xd86d198 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+1232].
  The `jalr` at 0xd86d1ac calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d1d0 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d1ec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+1232].
  The `jalr` at 0xd86d200 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d230 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b1c], a2=?, a3=?.
  The `beq` branch at 0xd86d0f0 targets 0xd86d224, is taken when v0(=ret(0xd86cdc0)) == 0, and falls through when v0(=ret(0xd86cdc0)) != 0.
  The `beq` branch at 0xd86d0fc targets 0xd86d228, is taken when at(=[ret(0xd86cdc0)+8]) == 0, and falls through when at(=[ret(0xd86cdc0)+8]) != 0.
  The `beq` branch at 0xd86d108 targets 0xd86d11c, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The `bne` branch at 0xd86d12c targets 0xd86d1d0, is taken when v1(=[a0+112]) < a0(=[a0+108]+4) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd86d184 targets 0xd86d1e0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd86d18c targets 0xd86d1a0, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The `beq` branch at 0xd86d1a4 targets 0xd86d1b8, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86d1d8 targets 0xd86d134 and is always taken.
  The `beq` branch at 0xd86d1e0 targets 0xd86d1f4, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The `beq` branch at 0xd86d1f8 targets 0xd86d20c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd86d1c8 has v0 = ?.
  The return at 0xd86d21c has v0 = 0x0.
  The return at 0xd86d248 has v0 = 0x0.

- `XTestFakeInput` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86d280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86d280-0xd86d518 (664 bytes).
  It occupies 664 bytes.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86d284, `lw` at 0xd86d45c, `lw` at 0xd86d4a4.
  The `lw` at 0xd86d2b8 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86d2e8, `lw` at 0xd86d31c, `lw` at 0xd86d4f0.
  The `lw` at 0xd86d2ec loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86d308 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86d310, `sb` at 0xd86d334.
  The `sh` at 0xd86d318 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86d320 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86d328 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86d330 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sb` at 0xd86d340 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86d348 stores 4 bytes to [a0+108] +0x4.
  33 such `sb` accesses store 1 byte to ?, including `sb` at 0xd86d350, `sb` at 0xd86d354, `sb` at 0xd86d358.
  17 such `lbu` accesses load 1 byte from ?, including `lbu` at 0xd86d3b8, `lbu` at 0xd86d3d8, `lbu` at 0xd86d3e0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86d468, `lw` at 0xd86d4b0.
  The `lw` at 0xd86d474 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `jalr` at 0xd86d2bc calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0xd86d2cc calls (unnamed) [0xd86da80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d46c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d480 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d4b4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d4e4 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd86d2b0 targets 0xd86d2c4, is taken when at(=[a0+1232]) == 0, and falls through when at(=[a0+1232]) != 0.
  The `beq` branch at 0xd86d2d8 targets 0xd86d4a4, is taken when v0(=ret(0xd86da80)) == ra(=-0x1), and falls through when v0(=ret(0xd86da80)) != ra(=-0x1).
  The `beq` branch at 0xd86d2e0 targets 0xd86d4a4, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0xd86d2f8 targets 0xd86d4e0, is taken when at(=[a0+112]) < v0(=[a0+108]+72) (unsigned), and falls through when at(=[a0+112]) >= v0(=[a0+108]+72) (unsigned).
  The `bne` branch at 0xd86d394 targets 0xd86d350, is taken when v1(?) != at(=[a0+108]+64), and falls through when v1(?) == at(=[a0+108]+64).
  The `blez` branch at 0xd86d39c targets 0xd86d45c, is taken when s1(=a2) <= 0 (signed), and falls through when s1(=a2) > 0 (signed).
  The `beq` branch at 0xd86d3a8 targets 0xd86d3c8, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0xd86d3c0 targets 0xd86d3b0, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `beq` branch at 0xd86d3c8 targets 0xd86d45c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0xd86d3d0 targets 0xd86d4f4, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0xd86d424 targets 0xd86d4d8, is taken when a1(?) == at(=(a2 + a1)-4), and falls through when a1(?) != at(=(a2 + a1)-4).
  The `bne` branch at 0xd86d450 targets 0xd86d400, is taken when a1(?) != at(=(a2 + a1)-4), and falls through when a1(?) == at(=(a2 + a1)-4).
  The `beq` branch at 0xd86d460 targets 0xd86d474, is taken when at(=[a0+1232]) == 0, and falls through when at(=[a0+1232]) != 0.
  The `beq` branch at 0xd86d478 targets 0xd86d48c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86d4a8 targets 0xd86d4c0, is taken when at(=[a0+1232]) == 0, and falls through when at(=[a0+1232]) != 0.
  The `beq` branch at 0xd86d4d8 targets 0xd86d458 and is always taken.
  The `beq` branch at 0xd86d4ec targets 0xd86d2fc and is always taken.
  The `beq` branch at 0xd86d510 targets 0xd86d45c and is always taken.
  The return at 0xd86d49c has v0 = 0x0.
  The return at 0xd86d4d0 has v0 = -0x1.

- `XTestGetInput` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86d540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86d540-0xd86d670 (304 bytes).
  It occupies 304 bytes.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86d544, `lw` at 0xd86d5e4, `lw` at 0xd86d640.
  The `lw` at 0xd86d56c loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86d594, `lw` at 0xd86d5c0, `lw` at 0xd86d638.
  The `lw` at 0xd86d598 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86d5b0 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86d5b8, `sb` at 0xd86d5d8.
  The `sh` at 0xd86d5bc stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86d5c4 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86d5cc stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86d5d4 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sb` at 0xd86d5dc stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86d5e0 stores 4 bytes to [a0+108] +0x4.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86d5f0, `lw` at 0xd86d64c.
  The `lw` at 0xd86d5fc loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `jalr` at 0xd86d570 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a0+1232].
  The `bgezall` at 0xd86d580 calls (unnamed) [0xd86da80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d5f4 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x2, a2=[0xd882ba4], a3=[a0+1232], a4=[a0+108]+8.
  The `jalr` at 0xd86d608 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d62c calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d650 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+1232].
  The `beq` branch at 0xd86d564 targets 0xd86d578, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The `beq` branch at 0xd86d58c targets 0xd86d640, is taken when v0(=ret(0xd86da80)) == ra(=-0x1), and falls through when v0(=ret(0xd86da80)) != ra(=-0x1).
  The `bne` branch at 0xd86d5a4 targets 0xd86d628, is taken when at(=[a0+112]) < v0(=[a0+108]+8) (unsigned), and falls through when at(=[a0+112]) >= v0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd86d5e8 targets 0xd86d5fc, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The `beq` branch at 0xd86d600 targets 0xd86d614, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86d634 targets 0xd86d5a8 and is always taken.
  The `beq` branch at 0xd86d644 targets 0xd86d65c, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The return at 0xd86d620 has v0 = 0x0.
  The return at 0xd86d668 has v0 = -0x1.
  The instructions from 0xd86d63c to 0xd86d63c are not reached by any path from the entry, and their branches are not listed.

- `XTestStopInput` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86d680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86d680-0xd86d7a4 (292 bytes).
  It occupies 292 bytes.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86d684, `lw` at 0xd86d71c, `lw` at 0xd86d774.
  The `lw` at 0xd86d6a8 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86d6d0, `lw` at 0xd86d6fc, `lw` at 0xd86d770.
  The `lw` at 0xd86d6d4 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86d6e8 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86d6f0, `sb` at 0xd86d714.
  The `sh` at 0xd86d6f8 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86d700 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86d708 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86d710 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sb` at 0xd86d718 stores 1 byte to [a0+108] +0x1.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86d728, `lw` at 0xd86d780.
  The `lw` at 0xd86d734 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `jalr` at 0xd86d6ac calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[a0+1232], a3=a3 at entry (arg3).
  The `bgezall` at 0xd86d6bc calls (unnamed) [0xd86da80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d72c calls (unknown callee) with a0=a0 at entry (arg0), a1=[0xd882ba4], a2=[a0+1232], a3=[a0+108]+4, a4=0x1.
  The `jalr` at 0xd86d740 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d764 calls _XFlush with a0=a0 at entry (arg0), a1=[0xd882ba4], a2=?, a3=?.
  The `jalr` at 0xd86d784 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+1232], a3=?.
  The `beq` branch at 0xd86d6a0 targets 0xd86d6b4, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The `beq` branch at 0xd86d6c8 targets 0xd86d774, is taken when v0(=ret(0xd86da80)) == ra(=-0x1), and falls through when v0(=ret(0xd86da80)) != ra(=-0x1).
  The `bne` branch at 0xd86d6e0 targets 0xd86d760, is taken when at(=[a0+112]) < v0(=[a0+108]+4) (unsigned), and falls through when at(=[a0+112]) >= v0(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd86d720 targets 0xd86d734, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The `beq` branch at 0xd86d738 targets 0xd86d74c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86d76c targets 0xd86d6e4 and is always taken.
  The `beq` branch at 0xd86d778 targets 0xd86d790, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The return at 0xd86d758 has v0 = 0x0.
  The return at 0xd86d79c has v0 = -0x1.

- `XTestReset` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86d7c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86d7c0-0xd86d8e4 (292 bytes).
  It occupies 292 bytes.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86d7c4, `lw` at 0xd86d85c, `lw` at 0xd86d8b4.
  The `lw` at 0xd86d7e8 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86d810, `lw` at 0xd86d83c, `lw` at 0xd86d8b0.
  The `lw` at 0xd86d814 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86d828 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86d830, `sb` at 0xd86d854.
  The `sh` at 0xd86d838 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86d840 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86d848 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86d850 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sb` at 0xd86d858 stores 1 byte to [a0+108] +0x1.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86d868, `lw` at 0xd86d8c0.
  The `lw` at 0xd86d874 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `jalr` at 0xd86d7ec calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[a0+1232], a3=a3 at entry (arg3).
  The `bgezall` at 0xd86d7fc calls (unnamed) [0xd86da80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d86c calls (unknown callee) with a0=a0 at entry (arg0), a1=[0xd882ba4], a2=[a0+1232], a3=[a0+108]+4, a4=0x1.
  The `jalr` at 0xd86d880 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d8a4 calls _XFlush with a0=a0 at entry (arg0), a1=[0xd882ba4], a2=?, a3=?.
  The `jalr` at 0xd86d8c4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+1232], a3=?.
  The `beq` branch at 0xd86d7e0 targets 0xd86d7f4, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The `beq` branch at 0xd86d808 targets 0xd86d8b4, is taken when v0(=ret(0xd86da80)) == ra(=-0x1), and falls through when v0(=ret(0xd86da80)) != ra(=-0x1).
  The `bne` branch at 0xd86d820 targets 0xd86d8a0, is taken when at(=[a0+112]) < v0(=[a0+108]+4) (unsigned), and falls through when at(=[a0+112]) >= v0(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd86d860 targets 0xd86d874, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The `beq` branch at 0xd86d878 targets 0xd86d88c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86d8ac targets 0xd86d824 and is always taken.
  The `beq` branch at 0xd86d8b8 targets 0xd86d8d0, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The return at 0xd86d898 has v0 = 0x0.
  The return at 0xd86d8dc has v0 = -0x1.

- `XTestQueryInputSize` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86d900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86d900-0xd86da4c (332 bytes).
  It occupies 332 bytes.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86d904, `lw` at 0xd86d9c0, `lw` at 0xd86da1c.
  The `lw` at 0xd86d92c loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86d954, `lw` at 0xd86d984, `lw` at 0xd86da18.
  The `lw` at 0xd86d958 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86d970 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86d978, `sb` at 0xd86d9a4.
  The `sh` at 0xd86d980 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86d988 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86d990 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86d998 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sb` at 0xd86d9b0 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86d9bc stores 4 bytes to a1 (arg1 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86d9cc, `lw` at 0xd86da28.
  The `lw` at 0xd86d9d8 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `jalr` at 0xd86d930 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a0+1232].
  The `bgezall` at 0xd86d940 calls (unnamed) [0xd86da80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86d9ac calls _XReply with a0=a0 at entry (arg0), a1=sp-64, a2=0x0, a3=0x1, a4=[0xd882ba4], a5=[a0+108], a6=[a0+96]+1, a7=[a0+108]+4.
  The `jalr` at 0xd86d9d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+1232].
  The `jalr` at 0xd86d9e4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86da0c calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+108].
  The `jalr` at 0xd86da2c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+1232].
  The `beq` branch at 0xd86d924 targets 0xd86d938, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The `beq` branch at 0xd86d94c targets 0xd86da1c, is taken when v0(=ret(0xd86da80)) == ra(=-0x1), and falls through when v0(=ret(0xd86da80)) != ra(=-0x1).
  The `bne` branch at 0xd86d964 targets 0xd86da08, is taken when at(=[a0+112]) < v0(=[a0+108]+4) (unsigned), and falls through when at(=[a0+112]) >= v0(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd86d9c4 targets 0xd86d9d8, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The `beq` branch at 0xd86d9dc targets 0xd86d9f0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86da14 targets 0xd86d968 and is always taken.
  The `beq` branch at 0xd86da20 targets 0xd86da38, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The return at 0xd86da00 has v0 = 0x0.
  The return at 0xd86da44 has v0 = -0x1.

- `XTestCheckExtInit` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86da80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86da80-0xd86daa4 (36 bytes).
  It occupies 36 bytes.
  The `beq` branch at 0xd86da84 targets 0xd86da94, is taken when at(=[0xd882ba4]) == 0, and falls through when at(=[0xd882ba4]) != 0.
  The `bgezl` branch at 0xd86da9c targets 0xd86dac0 and is always taken.
  The return at 0xd86da8c has v0 = 0x0.

- `XTestInitExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86dac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86dac0-0xd86db94 (212 bytes).
  It occupies 212 bytes.
  The `lw` at 0xd86daf8 loads 4 bytes from ret(XInitExtension) +0x4.
  4 such `lw` accesses load 4 bytes from ret(XInitExtension) +0x8, including `lw` at 0xd86db0c, `lw` at 0xd86db18, `lw` at 0xd86db44.
  The `lw` at 0xd86db50 loads 4 bytes from sym(XTestInputActionType) +0x0.
  The `lw` at 0xd86db54 loads 4 bytes from sym(XTestFakeAckType) +0x0.
  The `sw` at 0xd86db5c stores 4 bytes to sym(XTestInputActionType) +0x0.
  The `sw` at 0xd86db78 stores 4 bytes to sym(XTestFakeAckType) +0x0.
  The `jalr` at 0xd86dadc calls XInitExtension with a0=a0 at entry (arg0), a1=0xd87d510, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86db10 calls XESetWireToEvent with a0=a0 at entry (arg0), a1=[ret(XInitExtension)+8], a2=0xd86dbc0, a3=?.
  The `jalr` at 0xd86db30 calls XESetWireToEvent with a0=a0 at entry (arg0), a1=[ret(XInitExtension)+8]+1, a2=0xd86dbc0, a3=?.
  The `beq` branch at 0xd86dae4 targets 0xd86db7c, is taken when v0(=ret(XInitExtension)) == 0, and falls through when v0(=ret(XInitExtension)) != 0.
  The return at 0xd86db74 has v0 = 0x0.
  The return at 0xd86db8c has v0 = -0x1.

- `XTestWireToEvent` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86dbc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86dbc0-0xd86dcd8 (280 bytes).
  It occupies 280 bytes.
  2 such `lbu` accesses load 1 byte from a2 (arg2 at entry) +0x0, including `lbu` at 0xd86dbc8, `lbu` at 0xd86dca4.
  The `sw` at 0xd86dbdc stores 4 bytes to a1 (arg1 at entry) +0x4.
  The `sw` at 0xd86dbe0 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0xd86dbe4 loads 4 bytes from sym(XTestInputActionType) +0x0.
  The `lw` at 0xd86dbf0 loads 4 bytes from sym(XTestFakeAckType) +0x0.
  The `lbu` at 0xd86dbf8 loads 1 byte from a2 (arg2 at entry) +0x4.
  The `sb` at 0xd86dbfc stores 1 byte to a1 (arg1 at entry) +0xc.
  The `lbu` at 0xd86dc00 loads 1 byte from a2 (arg2 at entry) +0x5.
  The `sb` at 0xd86dc04 stores 1 byte to a1 (arg1 at entry) +0xd.
  The `lbu` at 0xd86dc08 loads 1 byte from a2 (arg2 at entry) +0x6.
  The `sb` at 0xd86dc14 stores 1 byte to a1 (arg1 at entry) +0xe.
  The `lbu` at 0xd86dc18 loads 1 byte from a2 (arg2 at entry) +0x7.
  9 such `sb` accesses store 1 byte to ?, including `sb` at 0xd86dc24, `sb` at 0xd86dc30, `sb` at 0xd86dc38.
  8 such `lbu` accesses load 1 byte from ?, including `lbu` at 0xd86dc2c, `lbu` at 0xd86dc34, `lbu` at 0xd86dc3c.
  The `jalr` at 0xd86dcac calls printf with a0=0xd87d520, a1=[a2]:1, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[sym(XTestFakeAckType)], a5=[a2]:1.
  The `jalr` at 0xd86dcc4 calls printf with a0=0xd87d550, a1=0xd87d510, a2=?, a3=?.
  The `jalr` at 0xd86dcd0 calls exit with a0=0x1, a1=?, a2=?, a3=?.
  The `bne` branch at 0xd86dbec targets 0xd86dc94, is taken when at(=[sym(XTestInputActionType)]) != a5(=[a2]:1), and falls through when at(=[sym(XTestInputActionType)]) == a5(=[a2]:1).
  The `bne` branch at 0xd86dc70 targets 0xd86dc24, is taken when a1(?) != at(=a2+24), and falls through when a1(?) == at(=a2+24).
  The `beq` branch at 0xd86dc94 targets 0xd86dc88, is taken when a4(=[sym(XTestFakeAckType)]) == a5(=[a2]:1), and falls through when a4(=[sym(XTestFakeAckType)]) != a5(=[a2]:1).
  The return at 0xd86dc80 has v0 = 0x1.
  The return at 0xd86dc8c has v0 = 0x1.

- `XTestPressKey` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86dd00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86dd00-0xd86dd64 (100 bytes).
  It occupies 100 bytes.
  The `bgezall` at 0xd86dd4c calls (unnamed) [0xd86de00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0xd86dd18 targets 0xd86dd24, is taken when a3 < 0x8 (unsigned), and falls through when a3 >= 0x8 (unsigned).
  The `bne` branch at 0xd86dd20 targets 0xd86dd40, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The return at 0xd86dd2c has v0 = -0x1.
  The return at 0xd86dd5c has v0 = ret(0xd86de00).
  The instructions from 0xd86dd34 to 0xd86dd3c are not reached by any path from the entry, and their branches are not listed.

- `XTestPressButton` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86dd80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86dd80-0xd86ddd0 (80 bytes).
  It occupies 80 bytes.
  The `bgezall` at 0xd86ddb8 calls (unnamed) [0xd86de00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0xd86dd98 targets 0xd86ddac, is taken when a3 < 0x8 (unsigned), and falls through when a3 >= 0x8 (unsigned).
  The return at 0xd86dda4 has v0 = -0x1.
  The return at 0xd86ddc8 has v0 = ret(0xd86de00).

- `XTestKeyOrButton` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86de00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86de00-0xd86e018 (536 bytes).
  It occupies 536 bytes.
  The `bgezall` at 0xd86de7c calls XTestCheckDelay [0xd86e2c0] with a0=a0 at entry (arg0), a1=sp-28, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0xd86dec0 calls XTestPackInputAction [0xd86e340] with a0=a0 at entry (arg0), a1=sp-96, a2=0x4, a3=?.
  The `bgezall` at 0xd86dee8 calls XTestCheckDelay [0xd86e2c0] with a0=a0 at entry (arg0), a1=sp-28, a2=?, a3=?.
  The `bgezall` at 0xd86df10 calls XTestCheckDelay [0xd86e2c0] with a0=a0 at entry (arg0), a1=sp-28, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0xd86df38 calls XTestCheckDelay [0xd86e2c0] with a0=a0 at entry (arg0), a1=sp-28, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0xd86df7c calls XTestPackInputAction [0xd86e340] with a0=a0 at entry (arg0), a1=sp-96, a2=0x4, a3=?.
  The `bgezall` at 0xd86dfb8 calls XTestPackInputAction [0xd86e340] with a0=a0 at entry (arg0), a1=sp-96, a2=0x4, a3=a2 at entry (arg2), a4=a3 at entry (arg3).
  The `bgezall` at 0xd86e000 calls XTestPackInputAction [0xd86e340] with a0=a0 at entry (arg0), a1=sp-96, a2=0x4, a3=?.
  The `bltz` branch at 0xd86de10 targets 0xd86de58, is taken when a1 < 0 (signed), and falls through when a1 >= 0 (signed).
  The `beq` branch at 0xd86de1c targets 0xd86de58, is taken when a1 >= 0x10 (signed), and falls through when a1 < 0x10 (signed).
  The `beq` branch at 0xd86de28 targets 0xd86df04, is taken when a4 == v1(=0x1), and falls through when a4 != v1(=0x1).
  The `beq` branch at 0xd86de34 targets 0xd86df2c, is taken when a4 == a0(=0x2), and falls through when a4 != a0(=0x2).
  The `beq` branch at 0xd86de3c targets 0xd86de6c, is taken when a4 == v0(=0x4), and falls through when a4 != v0(=0x4).
  The `beq` branch at 0xd86de88 targets 0xd86dfc8, is taken when v0(=ret(XTestCheckDelay)) == a1(=-0x1), and falls through when v0(=ret(XTestCheckDelay)) != a1(=-0x1).
  The `beq` branch at 0xd86decc targets 0xd86e010, is taken when v0(=ret(XTestPackInputAction)) == a0(=-0x1), and falls through when v0(=ret(XTestPackInputAction)) != a0(=-0x1).
  The `bne` branch at 0xd86def4 targets 0xd86df54, is taken when v0(=ret(XTestCheckDelay)) != v1(=-0x1), and falls through when v0(=ret(XTestCheckDelay)) == v1(=-0x1).
  The `beq` branch at 0xd86defc targets 0xd86de44 and is always taken.
  The `bne` branch at 0xd86df1c targets 0xd86df8c, is taken when v0(=ret(XTestCheckDelay)) != ra(=-0x1), and falls through when v0(=ret(XTestCheckDelay)) == ra(=-0x1).
  The `beq` branch at 0xd86df24 targets 0xd86de44 and is always taken.
  The `bne` branch at 0xd86df44 targets 0xd86dfd0, is taken when v0(=ret(XTestCheckDelay)) != ra(=-0x1), and falls through when v0(=ret(XTestCheckDelay)) == ra(=-0x1).
  The `beq` branch at 0xd86df4c targets 0xd86de44 and is always taken.
  The `beq` branch at 0xd86df84 targets 0xd86de44 and is always taken.
  The `beq` branch at 0xd86dfc0 targets 0xd86de44 and is always taken.
  The `beq` branch at 0xd86dfc8 targets 0xd86de44 and is always taken.
  The `beq` branch at 0xd86e008 targets 0xd86de44 and is always taken.
  The `beq` branch at 0xd86e010 targets 0xd86de44 and is always taken.
  The return at 0xd86de50 has v0 = one of -0x1, ret(XTestPackInputAction).
  The return at 0xd86de64 has v0 = -0x1.

- `XTestMovePointer` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86e040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86e040-0xd86e2b8 (632 bytes).
  It occupies 632 bytes.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd86e0d4, `lw` at 0xd86e0dc, `lw` at 0xd86e0f0.
  The `bgezall` at 0xd86e0f8 calls (unnamed) [0xd86e340] with a0=a0 at entry (arg0), a1=sp-112, a2=0x8, a3=?.
  The `bgezall` at 0xd86e11c calls (unnamed) [0xd86e2c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0xd86e1a4 calls (unnamed) [0xd86e340] with a0=a0 at entry (arg0), a1=sp-104, a2=0x4, a3=?.
  The `bltz` branch at 0xd86e078 targets 0xd86e200, is taken when a1 < 0 (signed), and falls through when a1 >= 0 (signed).
  The `beq` branch at 0xd86e080 targets 0xd86e200, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `beq` branch at 0xd86e098 targets 0xd86e29c, is taken when a5 == 0, and falls through when a5 != 0.
  The `beq` branch at 0xd86e0c8 targets 0xd86e114 and is always taken.
  The `beq` branch at 0xd86e100 targets 0xd86e280, is taken when v0(=ret(0xd86e340)) == s5(=-0x1), and falls through when v0(=ret(0xd86e340)) != s5(=-0x1).
  The `beq` branch at 0xd86e10c targets 0xd86e25c, is taken when s0(?) == s7(=((a5 << 0x2) + a2)), and falls through when s0(?) != s7(=((a5 << 0x2) + a2)).
  The `beq` branch at 0xd86e124 targets 0xd86e224, is taken when v0(=ret(0xd86e2c0)) == s5(=-0x1), and falls through when v0(=ret(0xd86e2c0)) != s5(=-0x1).
  The `beq` branch at 0xd86e14c targets 0xd86e0d0, is taken when a3(?) >= 0x10 (signed), and falls through when a3(?) < 0x10 (signed).
  The `bne` branch at 0xd86e158 targets 0xd86e0d0, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0xd86e160 targets 0xd86e0d0, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0xd86e168 targets 0xd86e0d0, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `bltz` branch at 0xd86e170 targets 0xd86e1d0, is taken when a3(?) < 0 (signed), and falls through when a3(?) >= 0 (signed).
  The `bltz` branch at 0xd86e178 targets 0xd86e1e8, is taken when v0(?) < 0 (signed), and falls through when v0(?) >= 0 (signed).
  The `bne` branch at 0xd86e1ac targets 0xd86e108, is taken when v0(=ret(0xd86e340)) != s5(=-0x1), and falls through when v0(=ret(0xd86e340)) == s5(=-0x1).
  The `beq` branch at 0xd86e1c8 targets 0xd86e204 and is always taken.
  The `beq` branch at 0xd86e1e0 targets 0xd86e178 and is always taken.
  The `beq` branch at 0xd86e1f8 targets 0xd86e17c and is always taken.
  The `beq` branch at 0xd86e270 targets 0xd86e204 and is always taken.
  The `beq` branch at 0xd86e294 targets 0xd86e204 and is always taken.
  The `beq` branch at 0xd86e2b0 targets 0xd86e204 and is always taken.
  The return at 0xd86e21c has v0 = one of -0x1, 0x0.
  The return at 0xd86e254 has v0 = -0x1.
  The instructions from 0xd86e278 to 0xd86e27c are not reached by any path from the entry, and their branches are not listed.

- `XTestCheckDelay` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86e2c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86e2c0-0xd86e31c (92 bytes).
  It occupies 92 bytes.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x0, including `lw` at 0xd86e2c0, `lw` at 0xd86e2f4.
  The `sw` at 0xd86e30c stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `bgezall` at 0xd86e308 calls XTestPackInputAction [0xd86e340] with a0=a0 at entry (arg0), a1=sp-16, a2=0x8, a3=a3 at entry (arg3), a4=a1 at entry (arg1).
  The `bne` branch at 0xd86e2d0 targets 0xd86e2e4, is taken when at(=0xffff) < v1(=[a1]) (unsigned), and falls through when at(=0xffff) >= v1(=[a1]) (unsigned).
  The return at 0xd86e2dc has v0 = 0x0.
  The return at 0xd86e314 has v0 = ret(XTestPackInputAction).

- `XTestPackInputAction` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86e340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86e340-0xd86e688 (840 bytes).
  It occupies 840 bytes.
  34 such `lbu` accesses load 1 byte from ?, including `lbu` at 0xd86e3b0, `lbu` at 0xd86e3d4, `lbu` at 0xd86e3dc.
  34 such `sb` accesses store 1 byte to ?, including `sb` at 0xd86e3bc, `sb` at 0xd86e3d8, `sb` at 0xd86e3e0.
  The `bgezall` at 0xd86e4b8 calls XTestWriteInputActions [0xd86e6c0] with a0=a0 at entry (arg0), a1=0xd886958, a2=[0xd882bb0], a3=one of 0x0, 0x1.
  The `jalr` at 0xd86e608 calls XTestQueryInputSize with a0=a0 at entry (arg0), a1=0xd882bb4, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0xd86e35c targets 0xd86e600, is taken when at(=[0xd882bb4]) == 0, and falls through when at(=[0xd882bb4]) != 0.
  The `beq` branch at 0xd86e370 targets 0xd86e490, is taken when a0(=(a2 + [0xd882bb0])) >= 0x41 (signed), and falls through when a0(=(a2 + [0xd882bb0])) < 0x41 (signed).
  The `beq` branch at 0xd86e388 targets 0xd86e490, is taken when t1(=[0xd882bb8]+1) >= at(=[0xd882bb4]) (unsigned), and falls through when t1(=[0xd882bb8]+1) < at(=[0xd882bb4]) (unsigned).
  The `blez` branch at 0xd86e390 targets 0xd86e45c, is taken when s0(=a2) <= 0 (signed), and falls through when s0(=a2) > 0 (signed).
  The `beq` branch at 0xd86e3a0 targets 0xd86e3c0, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0xd86e3b8 targets 0xd86e3a8, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0xd86e3c4 targets 0xd86e45c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0xd86e3cc targets 0xd86e640, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0xd86e424 targets 0xd86e5e0, is taken when a1(?) == at(=(a2 + a1)-4), and falls through when a1(?) != at(=(a2 + a1)-4).
  The `bne` branch at 0xd86e450 targets 0xd86e400, is taken when a1(?) != at(=(a2 + a1)-4), and falls through when a1(?) == at(=(a2 + a1)-4).
  The `beq` branch at 0xd86e46c targets 0xd86e478, is taken when s0(=a2) >= 0 (signed), and falls through when s0(=a2) < 0 (signed).
  The `bne` branch at 0xd86e494 targets 0xd86e4a0, is taken when a0(=[0xd882bb8]) < at(=[0xd882bb4]) (unsigned), and falls through when a0(=[0xd882bb8]) >= at(=[0xd882bb4]) (unsigned).
  The `beq` branch at 0xd86e4c4 targets 0xd86e5e8, is taken when v0(=ret(XTestWriteInputActions)) == at(=-0x1), and falls through when v0(=ret(XTestWriteInputActions)) != at(=-0x1).
  The `blez` branch at 0xd86e4cc targets 0xd86e5a0, is taken when s0(=a2) <= 0 (signed), and falls through when s0(=a2) > 0 (signed).
  The `beq` branch at 0xd86e4ec targets 0xd86e50c, is taken when (s0(=a2) & 0x3) == 0, and falls through when (s0(=a2) & 0x3) != 0.
  The `bne` branch at 0xd86e504 targets 0xd86e4f4, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0xd86e510 targets 0xd86e5a0, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0xd86e518 targets 0xd86e664, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0xd86e568 targets 0xd86e5d8, is taken when a1(?) == at(=(a2 + a1)-4), and falls through when a1(?) != at(=(a2 + a1)-4).
  The `bne` branch at 0xd86e594 targets 0xd86e544, is taken when a1(?) != at(=(a2 + a1)-4), and falls through when a1(?) == at(=(a2 + a1)-4).
  The `beq` branch at 0xd86e5b4 targets 0xd86e5c0, is taken when s0(=a2) >= 0 (signed), and falls through when s0(=a2) < 0 (signed).
  The `beq` branch at 0xd86e5d8 targets 0xd86e59c and is always taken.
  The `beq` branch at 0xd86e5e0 targets 0xd86e458 and is always taken.
  The `beq` branch at 0xd86e618 targets 0xd86e628, is taken when v0(=ret(XTestQueryInputSize)) == t3(=-0x1), and falls through when v0(=ret(XTestQueryInputSize)) != t3(=-0x1).
  The `beq` branch at 0xd86e620 targets 0xd86e368 and is always taken.
  The `beq` branch at 0xd86e65c targets 0xd86e45c and is always taken.
  The `beq` branch at 0xd86e680 targets 0xd86e5a0 and is always taken.
  The return at 0xd86e488 has v0 = 0x0.
  The return at 0xd86e5d0 has v0 = 0x0.
  The return at 0xd86e5f4 has v0 = -0x1.
  The return at 0xd86e638 has v0 = -0x1.
  The instructions from 0xd86e5fc to 0xd86e5fc are not reached by any path from the entry, and their branches are not listed.

- `XTestWriteInputActions` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86e6c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86e6c0-0xd86e740 (128 bytes).
  It occupies 128 bytes.
  The `jalr` at 0xd86e6d0 calls XTestFakeInput with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86e6e4 calls XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86e730 calls XIfEvent with a0=a0 at entry (arg0), a1=sp-128, a2=0xd86e740, a3=0x0.
  The `beq` branch at 0xd86e6dc targets 0xd86e70c, is taken when v0(=ret(XTestFakeInput)) == at(=-0x1), and falls through when v0(=ret(XTestFakeInput)) != at(=-0x1).
  The `beq` branch at 0xd86e6f4 targets 0xd86e71c, is taken when v0(=a3) == v1(=0x1), and falls through when v0(=a3) != v1(=0x1).
  The `beq` branch at 0xd86e738 targets 0xd86e6fc and is always taken.
  The return at 0xd86e704 has v0 = 0x0.
  The return at 0xd86e714 has v0 = -0x1.

- `XTestIdentifyMyEvent` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86e740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86e740-0xd86e770 (48 bytes).
  It occupies 48 bytes.
  The `lw` at 0xd86e74c loads 4 bytes from abs 0xd882940.
  The `lw` at 0xd86e750 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0xd86e754 loads 4 bytes from sym(XTestFakeAckType) +0x0.
  The `bne` branch at 0xd86e758 targets 0xd86e768, is taken when v0(=[a1]) != v1(=[sym(XTestFakeAckType)]), and falls through when v0(=[a1]) == v1(=[sym(XTestFakeAckType)]).
  The return at 0xd86e760 has v0 = 0x1.
  The return at 0xd86e768 has v0 = 0x0.

- `XTestFlush` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86e780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86e780-0xd86e7d8 (88 bytes).
  It occupies 88 bytes.
  The `bgezall` at 0xd86e7c0 calls (unnamed) [0xd86e6c0] with a0=a0 at entry (arg0), a1=0xd886958, a2=[0xd882bb0], a3=0x1.
  The `bne` branch at 0xd86e798 targets 0xd86e7ac, is taken when a2(=[0xd882bb0]) != 0, and falls through when a2(=[0xd882bb0]) == 0.
  The return at 0xd86e7a4 has v0 = 0x0.
  The return at 0xd86e7d0 has v0 = ret(0xd86e6c0).

- `XSyncQueryExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86ed40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86ed40-0xd86edc4 (132 bytes).
  It occupies 132 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86e800) +0x8, including `lw` at 0xd86ed78, `lw` at 0xd86ed98.
  The `lw` at 0xd86ed90 loads 4 bytes from [ret(0xd86e800)+8] +0x8.
  The `sw` at 0xd86ed94 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0xd86eda4 loads 4 bytes from [ret(0xd86e800)+8] +0xc.
  The `sw` at 0xd86eda8 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0xd86ed64 calls (unnamed) [0xd86e800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0xd86ed70 targets 0xd86edb4, is taken when v0(=ret(0xd86e800)) == 0, and falls through when v0(=ret(0xd86e800)) != 0.
  The `beq` branch at 0xd86ed7c targets 0xd86edb8, is taken when a5(=[ret(0xd86e800)+8]) == 0, and falls through when a5(=[ret(0xd86e800)+8]) != 0.
  The return at 0xd86edac has v0 = 0x1.
  The return at 0xd86edbc has v0 = 0x0.

- `XSyncInitialize` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86ee00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86ee00-0xd86efb8 (440 bytes).
  It occupies 440 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86e800) +0x8, including `lw` at 0xd86ee40, `lw` at 0xd86eea4.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86ee4c, `lw` at 0xd86eedc.
  The `lw` at 0xd86ee58 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86ee64, `lw` at 0xd86ee8c, `lw` at 0xd86ef6c.
  The `lw` at 0xd86ee68 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86ee7c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86ee80, `sb` at 0xd86eed4.
  The `sh` at 0xd86ee88 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86ee90 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86ee98 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86eea0 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86eeac loads 4 bytes from [ret(0xd86e800)+8] +0x4.
  The `sb` at 0xd86eeb0 stores 1 byte to [a0+108] +0x1.
  The `sb` at 0xd86eebc stores 1 byte to [a0+108] +0x4.
  The `sb` at 0xd86eec8 stores 1 byte to [a0+108] +0x5.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86eee8, `lw` at 0xd86ef78.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd86eef4, `lw` at 0xd86ef84.
  The `sw` at 0xd86ef1c stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0xd86ef24 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0xd86ee30 calls (unnamed) [0xd86e800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86ee5c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+1232].
  The `jalr` at 0xd86eed0 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0xd86e800)+8]+4], a5=0x3, a6=[a0+108]+8, a7=0x2.
  The `jalr` at 0xd86eeec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+1232].
  The `jalr` at 0xd86ef00 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86ef60 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86ef7c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+1232].
  The `jalr` at 0xd86ef90 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86efa8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b24], a2=?, a3=?.
  The `beq` branch at 0xd86ee38 targets 0xd86efa0, is taken when v0(=ret(0xd86e800)) == 0, and falls through when v0(=ret(0xd86e800)) != 0.
  The `beq` branch at 0xd86ee44 targets 0xd86efa4, is taken when at(=[ret(0xd86e800)+8]) == 0, and falls through when at(=[ret(0xd86e800)+8]) != 0.
  The `beq` branch at 0xd86ee50 targets 0xd86ee64, is taken when a5(=[a0+1232]) == 0, and falls through when a5(=[a0+1232]) != 0.
  The `bne` branch at 0xd86ee74 targets 0xd86ef60, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd86eed8 targets 0xd86ef70, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd86eee0 targets 0xd86eef4, is taken when a5(=[a0+1232]) == 0, and falls through when a5(=[a0+1232]) != 0.
  The `beq` branch at 0xd86eef8 targets 0xd86ef0c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86ef68 targets 0xd86ee7c and is always taken.
  The `beq` branch at 0xd86ef70 targets 0xd86ef84, is taken when a5(=[a0+1232]) == 0, and falls through when a5(=[a0+1232]) != 0.
  The `beq` branch at 0xd86ef88 targets 0xd86ef98, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86ef98 targets 0xd86ef48 and is always taken.
  The `beq` branch at 0xd86efb0 targets 0xd86ef48 and is always taken.
  The return at 0xd86ef40 has v0 = ?.
  The return at 0xd86ef58 has v0 = 0x0.

- `XSyncListSystemCounters` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86efc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86efc0-0xd86f250 (656 bytes).
  It occupies 656 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86e800) +0x8, including `lw` at 0xd86effc, `lw` at 0xd86f060.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86f008, `lw` at 0xd86f10c, `lw` at 0xd86f1dc.
  The `lw` at 0xd86f014 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86f020, `lw` at 0xd86f048, `lw` at 0xd86f1ec.
  The `lw` at 0xd86f024 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86f038 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86f040, `sb` at 0xd86f084.
  The `sh` at 0xd86f044 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86f04c loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86f054 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86f05c stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86f06c loads 4 bytes from [ret(0xd86e800)+8] +0x4.
  The `sb` at 0xd86f078 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86f094 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0xd86f118 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86f124 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd86f17c, `lw` at 0xd86f190, `lw` at 0xd86f198.
  The `lhu` at 0xd86f188 loads 2 bytes from ?.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd86f1a4, `sw` at 0xd86f1c4, `sw` at 0xd86f1cc.
  The `sb` at 0xd86f1b0 stores 1 byte to ?.
  The `bgezall` at 0xd86efec calls (unnamed) [0xd86e800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86f018 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+1232], a3=?.
  The `jalr` at 0xd86f080 calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x0, a3=0x0, a4=[[ret(0xd86e800)+8]+4], a5=0x1, a6=[a0+96]+1, a7=[a0+108]+4.
  The `jalr` at 0xd86f0a8 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f0d4 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f0f0 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f100 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f11c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+1232], a3=?.
  The `jalr` at 0xd86f130 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f160 calls _XReadPad with a0=a0 at entry (arg0), a1=ret(malloc), a2=?, a3=?.
  The `jalr` at 0xd86f1e0 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f208 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b24], a2=?, a3=?.
  The `jalr` at 0xd86f240 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd86eff4 targets 0xd86f200, is taken when v0(=ret(0xd86e800)) == 0, and falls through when v0(=ret(0xd86e800)) != 0.
  The `beq` branch at 0xd86f000 targets 0xd86f204, is taken when at(=[ret(0xd86e800)+8]) == 0, and falls through when at(=[ret(0xd86e800)+8]) != 0.
  The `beq` branch at 0xd86f00c targets 0xd86f020, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The `bne` branch at 0xd86f030 targets 0xd86f1e0, is taken when v1(=[a0+112]) < a0(=[a0+108]+4) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd86f088 targets 0xd86f1f0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `blez` branch at 0xd86f09c targets 0xd86f10c, is taken when v0(?) <= 0 (signed), and falls through when v0(?) > 0 (signed).
  The `beq` branch at 0xd86f0c0 targets 0xd86f22c, is taken when a1(?) == t2(=-0x1), and falls through when a1(?) != t2(=-0x1).
  The `beq` branch at 0xd86f0dc targets 0xd86f234, is taken when s1(=ret(malloc)) == 0, and falls through when s1(=ret(malloc)) != 0.
  The `bne` branch at 0xd86f0e4 targets 0xd86f154, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0xd86f110 targets 0xd86f124, is taken when a2(=[a0+1232]) == 0, and falls through when a2(=[a0+1232]) != 0.
  The `beq` branch at 0xd86f128 targets 0xd86f13c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `blez` branch at 0xd86f180 targets 0xd86f10c, is taken when a2(?) <= 0 (signed), and falls through when a2(?) > 0 (signed).
  The `bne` branch at 0xd86f1d0 targets 0xd86f188, is taken when a2(?) < a4(?) (signed), and falls through when a2(?) >= a4(?) (signed).
  The `beq` branch at 0xd86f1d8 targets 0xd86f110 and is always taken.
  The `beq` branch at 0xd86f1e8 targets 0xd86f038 and is always taken.
  The `beq` branch at 0xd86f1f0 targets 0xd86f10c and is always taken.
  The `beq` branch at 0xd86f22c targets 0xd86f0d0 and is always taken.
  The `beq` branch at 0xd86f234 targets 0xd86f0fc, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0xd86f248 targets 0xd86f0fc and is always taken.
  The return at 0xd86f14c has v0 = ?.
  The return at 0xd86f224 has v0 = 0x0.
  The instructions from 0xd86f1f8 to 0xd86f1fc are not reached by any path from the entry, and their branches are not listed.

- `XSyncFreeSystemCounterList` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86f280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86f280-0xd86f2d0 (80 bytes).
  It occupies 80 bytes.
  The `lw` at 0xd86f2ac loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0xd86f2b4 calls free with a0=[a0]-14, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86f2c0 calls free with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bne` branch at 0xd86f294 targets 0xd86f2a8, is taken when a0 != 0, and falls through when a0 == 0.
  The `beq` branch at 0xd86f2c8 targets 0xd86f29c and is always taken.
  The return at 0xd86f2a0 has v0 = one of 0x19f8c, ret(free).

- `XSyncCreateCounter` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86f300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86f300-0xd86f46c (364 bytes).
  It occupies 364 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86e800) +0x8, including `lw` at 0xd86f33c, `lw` at 0xd86f3a4.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86f348, `lw` at 0xd86f3dc.
  The `lw` at 0xd86f354 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86f360, `lw` at 0xd86f38c, `lw` at 0xd86f42c.
  The `lw` at 0xd86f364 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86f378 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86f380, `sb` at 0xd86f3b0.
  The `sh` at 0xd86f388 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86f390 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86f398 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86f3a0 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86f3a8 loads 4 bytes from [ret(0xd86e800)+8] +0x4.
  The `sb` at 0xd86f3ac stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd86f3b4 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `sw` at 0xd86f3c8 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd86f3d4 stores 4 bytes to [a0+108] +0xc.
  The `sw` at 0xd86f3d8 stores 4 bytes to [a0+108] +0x8.
  The `lw` at 0xd86f3e8 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86f3f4 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `lw` at 0xd86f414 loads 4 bytes from [a0+108] +0x4.
  The `bgezall` at 0xd86f32c calls (unnamed) [0xd86e800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86f358 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+1232].
  The `jalr` at 0xd86f3c0 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x2, a2=[[ret(0xd86e800)+8]+4], a3=[a0+96]+1, a4=[a0+108]+16, a5=0x4.
  The `jalr` at 0xd86f3ec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+1232], a6=a1 at entry (arg1).
  The `jalr` at 0xd86f400 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f424 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f44c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b24], a2=?, a3=?.
  The `beq` branch at 0xd86f334 targets 0xd86f440, is taken when v0(=ret(0xd86e800)) == 0, and falls through when v0(=ret(0xd86e800)) != 0.
  The `beq` branch at 0xd86f340 targets 0xd86f444, is taken when at(=[ret(0xd86e800)+8]) == 0, and falls through when at(=[ret(0xd86e800)+8]) != 0.
  The `beq` branch at 0xd86f34c targets 0xd86f360, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The `bne` branch at 0xd86f370 targets 0xd86f424, is taken when v1(=[a0+112]) < a0(=[a0+108]+16) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+16) (unsigned).
  The `beq` branch at 0xd86f3e0 targets 0xd86f3f4, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The `beq` branch at 0xd86f3f8 targets 0xd86f40c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86f430 targets 0xd86f378 and is always taken.
  The return at 0xd86f41c has v0 = [[a0+108]+4].
  The return at 0xd86f464 has v0 = 0x0.
  The instructions from 0xd86f438 to 0xd86f43c are not reached by any path from the entry, and their branches are not listed.

- `XSyncSetCounter` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86f480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86f480-0xd86f5d4 (340 bytes).
  It occupies 340 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86e800) +0x8, including `lw` at 0xd86f4c0, `lw` at 0xd86f52c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86f4cc, `lw` at 0xd86f54c.
  The `lw` at 0xd86f4d8 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86f4e4, `lw` at 0xd86f514, `lw` at 0xd86f5a4.
  The `lw` at 0xd86f4e8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86f500 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86f508, `sb` at 0xd86f548.
  The `sh` at 0xd86f510 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86f518 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86f520 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86f528 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86f534 loads 4 bytes from [ret(0xd86e800)+8] +0x4.
  The `sb` at 0xd86f538 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86f53c stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd86f540 stores 4 bytes to [a0+108] +0xc.
  The `sw` at 0xd86f544 stores 4 bytes to [a0+108] +0x8.
  The `lw` at 0xd86f558 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86f564 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86f4b0 calls (unnamed) [0xd86e800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86f4dc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f55c calls (unknown callee) with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=a1 at entry (arg1), a4=0x3, a5=[[ret(0xd86e800)+8]+4], a6=[a0+96]+1, a7=[a0+108]+16.
  The `jalr` at 0xd86f570 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f598 calls _XFlush with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0xd86f5b4 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b24], a2=?, a3=?.
  The `beq` branch at 0xd86f4b8 targets 0xd86f5a8, is taken when v0(=ret(0xd86e800)) == 0, and falls through when v0(=ret(0xd86e800)) != 0.
  The `beq` branch at 0xd86f4c4 targets 0xd86f5ac, is taken when at(=[ret(0xd86e800)+8]) == 0, and falls through when at(=[ret(0xd86e800)+8]) != 0.
  The `beq` branch at 0xd86f4d0 targets 0xd86f4e4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86f4f4 targets 0xd86f594, is taken when v0(=[a0+112]) < v1(=[a0+108]+16) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+16) (unsigned).
  The `beq` branch at 0xd86f550 targets 0xd86f564, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86f568 targets 0xd86f57c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86f5a0 targets 0xd86f4f8 and is always taken.
  The return at 0xd86f58c has v0 = 0x1.
  The return at 0xd86f5cc has v0 = 0x0.

- `XSyncChangeCounter` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86f600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86f600-0xd86f750 (336 bytes).
  It occupies 336 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86e800) +0x8, including `lw` at 0xd86f640, `lw` at 0xd86f6a8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86f64c, `lw` at 0xd86f6c8.
  The `lw` at 0xd86f658 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86f664, `lw` at 0xd86f690, `lw` at 0xd86f720.
  The `lw` at 0xd86f668 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86f680 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86f688, `sb` at 0xd86f6c4.
  The `sh` at 0xd86f68c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86f694 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86f69c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86f6a4 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86f6b0 loads 4 bytes from [ret(0xd86e800)+8] +0x4.
  The `sb` at 0xd86f6b4 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86f6b8 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd86f6bc stores 4 bytes to [a0+108] +0xc.
  The `sw` at 0xd86f6c0 stores 4 bytes to [a0+108] +0x8.
  The `lw` at 0xd86f6d4 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86f6e0 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86f630 calls (unnamed) [0xd86e800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86f65c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f6d8 calls (unknown callee) with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=a1 at entry (arg1), a4=0x4, a5=[[ret(0xd86e800)+8]+4], a6=[a0+96]+1, a7=[a0+108]+16.
  The `jalr` at 0xd86f6ec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f714 calls _XFlush with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0xd86f730 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b24], a2=?, a3=?.
  The `beq` branch at 0xd86f638 targets 0xd86f724, is taken when v0(=ret(0xd86e800)) == 0, and falls through when v0(=ret(0xd86e800)) != 0.
  The `beq` branch at 0xd86f644 targets 0xd86f728, is taken when at(=[ret(0xd86e800)+8]) == 0, and falls through when at(=[ret(0xd86e800)+8]) != 0.
  The `beq` branch at 0xd86f650 targets 0xd86f664, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86f674 targets 0xd86f710, is taken when v0(=[a0+112]) < v1(=[a0+108]+16) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+16) (unsigned).
  The `beq` branch at 0xd86f6cc targets 0xd86f6e0, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86f6e4 targets 0xd86f6f8, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86f71c targets 0xd86f678 and is always taken.
  The return at 0xd86f708 has v0 = 0x1.
  The return at 0xd86f748 has v0 = 0x0.

- `XSyncDestroyCounter` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86f780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86f780-0xd86f8c0 (320 bytes).
  It occupies 320 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86e800) +0x8, including `lw` at 0xd86f7bc, `lw` at 0xd86f824.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86f7c8, `lw` at 0xd86f83c.
  The `lw` at 0xd86f7d4 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86f7e0, `lw` at 0xd86f80c, `lw` at 0xd86f890.
  The `lw` at 0xd86f7e4 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86f7f8 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86f800, `sb` at 0xd86f838.
  The `sh` at 0xd86f808 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86f810 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86f818 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86f820 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86f82c loads 4 bytes from [ret(0xd86e800)+8] +0x4.
  The `sb` at 0xd86f830 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86f834 stores 4 bytes to [a0+108] +0x4.
  The `lw` at 0xd86f848 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86f854 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86f7ac calls (unnamed) [0xd86e800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86f7d8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f84c calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x6, a3=[[ret(0xd86e800)+8]+4], a4=[a0+96]+1, a5=[a0+108]+8, a6=0x2.
  The `jalr` at 0xd86f860 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f884 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f8a0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b24], a2=?, a3=?.
  The `beq` branch at 0xd86f7b4 targets 0xd86f894, is taken when v0(=ret(0xd86e800)) == 0, and falls through when v0(=ret(0xd86e800)) != 0.
  The `beq` branch at 0xd86f7c0 targets 0xd86f898, is taken when at(=[ret(0xd86e800)+8]) == 0, and falls through when at(=[ret(0xd86e800)+8]) != 0.
  The `beq` branch at 0xd86f7cc targets 0xd86f7e0, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86f7f0 targets 0xd86f884, is taken when v0(=[a0+112]) < v1(=[a0+108]+8) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd86f840 targets 0xd86f854, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86f858 targets 0xd86f86c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86f88c targets 0xd86f7f8 and is always taken.
  The return at 0xd86f87c has v0 = 0x1.
  The return at 0xd86f8b8 has v0 = 0x0.

- `XSyncQueryCounter` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86f8c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86f8c0-0xd86fa7c (444 bytes).
  It occupies 444 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86e800) +0x8, including `lw` at 0xd86f900, `lw` at 0xd86f968.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86f90c, `lw` at 0xd86f9ac, `lw` at 0xd86fa08.
  The `lw` at 0xd86f918 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86f924, `lw` at 0xd86f950, `lw` at 0xd86fa04.
  The `lw` at 0xd86f928 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86f93c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86f944, `sb` at 0xd86f990.
  The `sh` at 0xd86f94c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86f954 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86f95c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86f964 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86f970 loads 4 bytes from [ret(0xd86e800)+8] +0x4.
  The `sb` at 0xd86f978 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd86f984 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd86f9a0 stores 4 bytes to a2 (arg2 at entry) +0x4.
  The `sw` at 0xd86f9a8 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd86f9b8, `lw` at 0xd86fa14.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd86f9c4, `lw` at 0xd86fa20.
  The `bgezall` at 0xd86f8f0 calls (unnamed) [0xd86e800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86f91c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f98c calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0xd86e800)+8]+4], a5=a1 at entry (arg1), a6=0x5, a7=[a0+108]+8.
  The `jalr` at 0xd86f9bc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f9d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86f9f8 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86fa18 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86fa2c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86fa5c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b24], a2=?, a3=?.
  The `beq` branch at 0xd86f8f8 targets 0xd86fa50, is taken when v0(=ret(0xd86e800)) == 0, and falls through when v0(=ret(0xd86e800)) != 0.
  The `beq` branch at 0xd86f904 targets 0xd86fa54, is taken when at(=[ret(0xd86e800)+8]) == 0, and falls through when at(=[ret(0xd86e800)+8]) != 0.
  The `beq` branch at 0xd86f910 targets 0xd86f924, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86f934 targets 0xd86f9f4, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd86f994 targets 0xd86fa08, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd86f9b0 targets 0xd86f9c4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86f9c8 targets 0xd86f9dc, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86fa00 targets 0xd86f938 and is always taken.
  The `beq` branch at 0xd86fa0c targets 0xd86fa20, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86fa24 targets 0xd86fa38, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd86f9ec has v0 = 0x1.
  The return at 0xd86fa48 has v0 = 0x0.
  The return at 0xd86fa74 has v0 = 0x0.

- `XSyncAwait` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86fa80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86fa80-0xd86fd70 (752 bytes).
  It occupies 752 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86e800) +0x8, including `lw` at 0xd86fac4, `lw` at 0xd86fb3c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86fad0, `lw` at 0xd86fcbc.
  The `lw` at 0xd86fadc loads 4 bytes from [a0+1232] +0x0.
  7 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86fae8, `lw` at 0xd86fb14, `lw` at 0xd86fbc4.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0xd86faec, `lw` at 0xd86fbc8, `lw` at 0xd86fc80.
  The `sw` at 0xd86fb00 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86fb08, `sb` at 0xd86fb64.
  4 such `sh` accesses store 2 bytes to [a0+108] +0x2, including `sh` at 0xd86fb10, `sh` at 0xd86fb94, `sh` at 0xd86fc0c.
  The `lw` at 0xd86fb18 loads 4 bytes from a0 (arg0 at entry) +0x60.
  3 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x6c, including `sw` at 0xd86fb20, `sw` at 0xd86fc04, `sw` at 0xd86fcb4.
  The `sw` at 0xd86fb2c stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lhu` at 0xd86fb34 loads 2 bytes from [a0+108] +0x2.
  The `lw` at 0xd86fb50 loads 4 bytes from [ret(0xd86e800)+8] +0x4.
  The `sb` at 0xd86fb58 stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd86fb68 loads 4 bytes from a0 (arg0 at entry) +0x4cc.
  The `lw` at 0xd86fba4 loads 4 bytes from ([a0+108] + ([[a0+108]+2]:2-1 << 0x2)) +0x0.
  The `sw` at 0xd86fbc0 stores 4 bytes to [a0+108] +0x4.
  7 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd86fc44, `lw` at 0xd86fc4c, `lw` at 0xd86fc54.
  The `lw` at 0xd86fcc8 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd86fcd4 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86fab4 calls (unnamed) [0xd86e800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86fae0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86fbac calls memmove with a0=[a0+108]+8, a1=[a0+108]+4, a2=([[a0+108]+2]:2-1 << 0x2), a3=[a0+1228], a4=[([a0+108] + ([[a0+108]+2]:2-1 << 0x2))], a5=[a0+108], a6=[a0+108], a7=[[a0+108]+2]:2.
  The `jalr` at 0xd86fbe8 calls memcpy with a0=[a0+108], a1=sp-144, a2=0x4, a3=?, a4=[a0+108]+4, a5=[a0+108].
  The `jalr` at 0xd86fc30 calls _XSend with a0=a0 at entry (arg0), a1=sp-136, a2=0x1c, a3=?, a5=[a0+108].
  The `jalr` at 0xd86fca0 calls memcpy with a0=[a0+108], a1=sp-136, a2=0x1c, a3=?, a5=[a0+108].
  The `jalr` at 0xd86fccc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86fce0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd86fd10 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+108].
  The `jalr` at 0xd86fd2c calls _XSend with a0=a0 at entry (arg0), a1=sp-144, a2=0x4, a3=?, a4=[a0+108]+4, a5=[a0+108].
  The `jalr` at 0xd86fd4c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b24], a2=?, a3=?.
  The `beq` branch at 0xd86fabc targets 0xd86fd40, is taken when v0(=ret(0xd86e800)) == 0, and falls through when v0(=ret(0xd86e800)) != 0.
  The `beq` branch at 0xd86fac8 targets 0xd86fd44, is taken when at(=[ret(0xd86e800)+8]) == 0, and falls through when at(=[ret(0xd86e800)+8]) != 0.
  The `beq` branch at 0xd86fad4 targets 0xd86fae8, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd86faf8 targets 0xd86fd10, is taken when v0(=[a0+112]) < v1(=[a0+108]+4) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd86fb60 targets 0xd86fc08, is taken when a1(=0xffff) >= a0(?) (unsigned), and falls through when a1(=0xffff) < a0(?) (unsigned).
  The `beq` branch at 0xd86fb74 targets 0xd86fd08, is taken when a3(=[a0+1228]) == 0, and falls through when a3(=[a0+1228]) != 0.
  The `bne` branch at 0xd86fbd4 targets 0xd86fd20, is taken when a3(=[a0+112]) < a4(=[a0+108]+4) (unsigned), and falls through when a3(=[a0+112]) >= a4(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd86fc00 targets 0xd86fc10 and is always taken.
  The `blez` branch at 0xd86fc10 targets 0xd86fcbc, is taken when s4(=a2) <= 0 (signed), and falls through when s4(=a2) > 0 (signed).
  The `beq` branch at 0xd86fc20 targets 0xd86fc44 and is always taken.
  The `beq` branch at 0xd86fc3c targets 0xd86fcb8, is taken when s0(?) == s2(?), and falls through when s0(?) != s2(?).
  The `bne` branch at 0xd86fc8c targets 0xd86fc28, is taken when a7(=[a0+112]) < t0(=[a0+108]+28) (unsigned), and falls through when a7(=[a0+112]) >= t0(=[a0+108]+28) (unsigned).
  The `beq` branch at 0xd86fcb0 targets 0xd86fc38 and is always taken.
  The `beq` branch at 0xd86fcc0 targets 0xd86fcd4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd86fcd8 targets 0xd86fcec, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd86fd08 targets 0xd86fc10 and is always taken.
  The `beq` branch at 0xd86fd18 targets 0xd86fb00 and is always taken.
  The `beq` branch at 0xd86fd34 targets 0xd86fc10 and is always taken.
  The return at 0xd86fd00 has v0 = 0x1.
  The return at 0xd86fd68 has v0 = 0x0.
  The instructions from 0xd86fd3c to 0xd86fd3c are not reached by any path from the entry, and their branches are not listed.

- `_XProcessAlarmAttributes` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86fd80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86fd80-0xd86fec8 (328 bytes).
  It occupies 328 bytes.
  The `lw` at 0xd86fda0 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `lw` at 0xd86fdc4 loads 4 bytes from a3 (arg3 at entry) +0x4.
  The `sw` at 0xd86fdc8 stores 4 bytes to (sp + one of -0xa0, -0x9c) +0x0.
  The `lw` at 0xd86fdd4 loads 4 bytes from a3 (arg3 at entry) +0x8.
  The `sw` at 0xd86fdd8 stores 4 bytes to (sp + one of -0xa0, -0x9c, -0x98) +0x0.
  The `lw` at 0xd86fde0 loads 4 bytes from a3 (arg3 at entry) +0xc.
  The `sw` at 0xd86fde4 stores 4 bytes to (sp + one of -0x9c, -0x98, -0x94) +0x0.
  The `lw` at 0xd86fdf4 loads 4 bytes from a3 (arg3 at entry) +0x10.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd86fdf8, `sw` at 0xd86fe08, `sw` at 0xd86fe14.
  The `lw` at 0xd86fe04 loads 4 bytes from a3 (arg3 at entry) +0x14.
  The `lw` at 0xd86fe10 loads 4 bytes from a3 (arg3 at entry) +0x18.
  The `lw` at 0xd86fe28 loads 4 bytes from a3 (arg3 at entry) +0x1c.
  The `lhu` at 0xd86fe34 loads 2 bytes from a1 (arg1 at entry) +0x2.
  The `sh` at 0xd86fe40 stores 2 bytes to a1 (arg1 at entry) +0x2.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86fe44, `lw` at 0xd86fe74.
  The `lw` at 0xd86fe4c loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86fe8c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `jalr` at 0xd86fe68 calls memcpy with a0=[a0+108], a1=sp-160, a2=?, a3=a3 at entry (arg3), a7=sp-160.
  The `jalr` at 0xd86fea8 calls _XSend with a0=a0 at entry (arg0), a1=sp-160, a2=?, a3=a3 at entry (arg3), a7=sp-160.
  The `beq` branch at 0xd86fd98 targets 0xd86fdb0, is taken when (a2 & 0x1) == 0, and falls through when (a2 & 0x1) != 0.
  The `beq` branch at 0xd86fdb8 targets 0xd86fdcc, is taken when (a2 & 0x2) == 0, and falls through when (a2 & 0x2) != 0.
  The `beq` branch at 0xd86fdcc targets 0xd86fde8, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0xd86fde8 targets 0xd86fdfc, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0xd86fdfc targets 0xd86fe1c, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0xd86fe1c targets 0xd86fe30, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bne` branch at 0xd86fe58 targets 0xd86fe9c, is taken when v0(=[a0+112]) < v1(?) (unsigned), and falls through when v0(=[a0+112]) >= v1(?) (unsigned).
  The return at 0xd86fe94 has v0 = ?.
  The return at 0xd86fec0 has v0 = ret(_XSend).

- `XSyncCreateAlarm` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd86ff00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd86ff00-0xd870088 (392 bytes).
  It occupies 392 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86e800) +0x8, including `lw` at 0xd86ff40, `lw` at 0xd86ffa8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd86ff4c, `lw` at 0xd86fffc.
  The `lw` at 0xd86ff58 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd86ff64, `lw` at 0xd86ff90, `lw` at 0xd870050.
  The `lw` at 0xd86ff68 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd86ff7c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd86ff84, `sb` at 0xd86ffb4.
  The `sh` at 0xd86ff8c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd86ff94 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd86ff9c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd86ffa4 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd86ffac loads 4 bytes from [ret(0xd86e800)+8] +0x4.
  The `sb` at 0xd86ffb0 stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd86ffb8 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `sw` at 0xd86ffd4 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd86ffe0 stores 4 bytes to [a0+108] +0x8.
  The `lw` at 0xd870008 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd870014 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd86ff30 calls (unnamed) [0xd86e800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd86ff5c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=[a0+1232].
  The `jalr` at 0xd86ffc4 calls (unknown callee) with a0=a0 at entry (arg0), a1=[a0+108], a2=0x8, a3=[[ret(0xd86e800)+8]+4], a4=[a0+96]+1, a5=[a0+108]+12, a6=0x3.
  The `bgezall` at 0xd86fff4 calls (unnamed) [0xd86fd80] with a0=a0 at entry (arg0), a1=[a0+108], a2=?, a3=a2 at entry (arg2).
  The `jalr` at 0xd87000c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=[a0+1232].
  The `jalr` at 0xd870020 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd870048 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+108], a2=?, a3=?.
  The `jalr` at 0xd870064 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b24], a2=?, a3=?.
  The `beq` branch at 0xd86ff38 targets 0xd87005c, is taken when v0(=ret(0xd86e800)) == 0, and falls through when v0(=ret(0xd86e800)) != 0.
  The `beq` branch at 0xd86ff44 targets 0xd870060, is taken when at(=[ret(0xd86e800)+8]) == 0, and falls through when at(=[ret(0xd86e800)+8]) != 0.
  The `beq` branch at 0xd86ff50 targets 0xd86ff64, is taken when a6(=[a0+1232]) == 0, and falls through when a6(=[a0+1232]) != 0.
  The `bne` branch at 0xd86ff74 targets 0xd870048, is taken when v1(=[a0+112]) < a0(=[a0+108]+12) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd86ffdc targets 0xd86fffc, is taken when (a2(=a1) & 0x3f) == 0, and falls through when (a2(=a1) & 0x3f) != 0.
  The `beq` branch at 0xd870000 targets 0xd870014, is taken when a6(=[a0+1232]) == 0, and falls through when a6(=[a0+1232]) != 0.
  The `beq` branch at 0xd870018 targets 0xd87002c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd870054 targets 0xd86ff7c and is always taken.
  The return at 0xd870040 has v0 = ret(?).
  The return at 0xd870080 has v0 = 0x0.

- `XSyncDestroyAlarm` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8700c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8700c0-0xd870200 (320 bytes).
  It occupies 320 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86e800) +0x8, including `lw` at 0xd8700fc, `lw` at 0xd870164.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd870108, `lw` at 0xd87017c.
  The `lw` at 0xd870114 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd870120, `lw` at 0xd87014c, `lw` at 0xd8701d0.
  The `lw` at 0xd870124 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd870138 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd870140, `sb` at 0xd870178.
  The `sh` at 0xd870148 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd870150 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd870158 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd870160 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd87016c loads 4 bytes from [ret(0xd86e800)+8] +0x4.
  The `sb` at 0xd870170 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd870174 stores 4 bytes to [a0+108] +0x4.
  The `lw` at 0xd870188 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd870194 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd8700ec calls (unnamed) [0xd86e800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd870118 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87018c calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0xb, a3=[[ret(0xd86e800)+8]+4], a4=[a0+96]+1, a5=[a0+108]+8, a6=0x2.
  The `jalr` at 0xd8701a0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8701c4 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8701e0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b24], a2=?, a3=?.
  The `beq` branch at 0xd8700f4 targets 0xd8701d4, is taken when v0(=ret(0xd86e800)) == 0, and falls through when v0(=ret(0xd86e800)) != 0.
  The `beq` branch at 0xd870100 targets 0xd8701d8, is taken when at(=[ret(0xd86e800)+8]) == 0, and falls through when at(=[ret(0xd86e800)+8]) != 0.
  The `beq` branch at 0xd87010c targets 0xd870120, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd870130 targets 0xd8701c4, is taken when v0(=[a0+112]) < v1(=[a0+108]+8) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd870180 targets 0xd870194, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd870198 targets 0xd8701ac, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8701cc targets 0xd870138 and is always taken.
  The return at 0xd8701bc has v0 = 0x1.
  The return at 0xd8701f8 has v0 = 0x0.

- `XSyncQueryAlarm` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870200 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870200-0xd8703f4 (500 bytes).
  It occupies 500 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86e800) +0x8, including `lw` at 0xd870240, `lw` at 0xd8702a8.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd87024c, `lw` at 0xd870320, `lw` at 0xd870380.
  The `lw` at 0xd870258 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd870264, `lw` at 0xd870290, `lw` at 0xd870378.
  The `lw` at 0xd870268 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd87027c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd870284, `sb` at 0xd8702cc.
  The `sh` at 0xd87028c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd870294 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd87029c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd8702a4 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd8702b0 loads 4 bytes from [ret(0xd86e800)+8] +0x4.
  The `sb` at 0xd8702b4 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd8702c0 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd8702dc stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0xd8702e4 stores 4 bytes to a2 (arg2 at entry) +0x4.
  The `sw` at 0xd8702ec stores 4 bytes to a2 (arg2 at entry) +0xc.
  The `sw` at 0xd8702f4 stores 4 bytes to a2 (arg2 at entry) +0x8.
  The `sw` at 0xd8702fc stores 4 bytes to a2 (arg2 at entry) +0x10.
  The `sw` at 0xd870304 stores 4 bytes to a2 (arg2 at entry) +0x18.
  The `sw` at 0xd87030c stores 4 bytes to a2 (arg2 at entry) +0x14.
  The `sw` at 0xd870314 stores 4 bytes to a2 (arg2 at entry) +0x1c.
  The `sw` at 0xd87031c stores 4 bytes to a2 (arg2 at entry) +0x20.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd87032c, `lw` at 0xd87038c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd870338, `lw` at 0xd870398.
  The `bgezall` at 0xd870230 calls (unnamed) [0xd86e800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd87025c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8702c8 calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x2, a3=0x0, a4=[[ret(0xd86e800)+8]+4], a5=a1 at entry (arg1), a6=0xa, a7=[a0+108]+8.
  The `jalr` at 0xd870330 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd870344 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87036c calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd870390 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8703a4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8703d4 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b24], a2=?, a3=?.
  The `beq` branch at 0xd870238 targets 0xd8703c8, is taken when v0(=ret(0xd86e800)) == 0, and falls through when v0(=ret(0xd86e800)) != 0.
  The `beq` branch at 0xd870244 targets 0xd8703cc, is taken when at(=[ret(0xd86e800)+8]) == 0, and falls through when at(=[ret(0xd86e800)+8]) != 0.
  The `beq` branch at 0xd870250 targets 0xd870264, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd870274 targets 0xd870368, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd8702d0 targets 0xd870380, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd870324 targets 0xd870338, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd87033c targets 0xd870350, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd870374 targets 0xd870278 and is always taken.
  The `beq` branch at 0xd870384 targets 0xd870398, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd87039c targets 0xd8703b0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd870360 has v0 = 0x1.
  The return at 0xd8703c0 has v0 = 0x0.
  The return at 0xd8703ec has v0 = 0x0.
  The instructions from 0xd87037c to 0xd87037c are not reached by any path from the entry, and their branches are not listed.

- `XSyncChangeAlarm` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870400-0xd87056c (364 bytes).
  It occupies 364 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86e800) +0x8, including `lw` at 0xd870444, `lw` at 0xd8704ac.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd870450, `lw` at 0xd8704e8.
  The `lw` at 0xd87045c loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd870468, `lw` at 0xd870494, `lw` at 0xd87053c.
  The `lw` at 0xd87046c loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd870480 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd870488, `sb` at 0xd8704d0.
  The `sh` at 0xd870490 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd870498 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8704a0 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd8704a8 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd8704b4 loads 4 bytes from [ret(0xd86e800)+8] +0x4.
  The `sw` at 0xd8704bc stores 4 bytes to [a0+108] +0x8.
  The `sb` at 0xd8704c0 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd8704c8 stores 4 bytes to [a0+108] +0x4.
  The `lw` at 0xd8704f4 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd870500 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd870434 calls (unnamed) [0xd86e800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd870460 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0xd8704e0 calls (unnamed) [0xd86fd80] with a0=a0 at entry (arg0), a1=[a0+108], a2=?, a3=a3 at entry (arg3), a4=[a0+108]+12, a5=0x3.
  The `jalr` at 0xd8704f8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87050c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd870530 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+108], a2=?, a3=?.
  The `jalr` at 0xd87054c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b24], a2=?, a3=?.
  The `beq` branch at 0xd87043c targets 0xd870540, is taken when v0(=ret(0xd86e800)) == 0, and falls through when v0(=ret(0xd86e800)) != 0.
  The `beq` branch at 0xd870448 targets 0xd870544, is taken when at(=[ret(0xd86e800)+8]) == 0, and falls through when at(=[ret(0xd86e800)+8]) != 0.
  The `beq` branch at 0xd870454 targets 0xd870468, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd870478 targets 0xd870530, is taken when v0(=[a0+112]) < v1(=[a0+108]+12) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd8704cc targets 0xd8704e8, is taken when (a2 & 0x3f) == 0, and falls through when (a2 & 0x3f) != 0.
  The `beq` branch at 0xd8704ec targets 0xd870500, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd870504 targets 0xd870518, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd870538 targets 0xd870480 and is always taken.
  The return at 0xd870528 has v0 = 0x1.
  The return at 0xd870564 has v0 = 0x0.

- `XSyncSetPriority` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870580-0xd8706cc (332 bytes).
  It occupies 332 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86e800) +0x8, including `lw` at 0xd8705c0, `lw` at 0xd870628.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd8705cc, `lw` at 0xd870644.
  The `lw` at 0xd8705d8 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8705e4, `lw` at 0xd870610, `lw` at 0xd87069c.
  The `lw` at 0xd8705e8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd8705fc stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd870604, `sb` at 0xd870640.
  The `sh` at 0xd87060c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd870614 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd87061c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd870624 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd870630 loads 4 bytes from [ret(0xd86e800)+8] +0x4.
  The `sb` at 0xd870634 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd870638 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd87063c stores 4 bytes to [a0+108] +0x8.
  The `lw` at 0xd870650 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd87065c loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd8705b0 calls (unnamed) [0xd86e800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8705dc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd870654 calls (unknown callee) with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=a1 at entry (arg1), a3=0xc, a4=[[ret(0xd86e800)+8]+4], a5=[a0+96]+1, a6=[a0+108]+12, a7=0x3.
  The `jalr` at 0xd870668 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd870690 calls _XFlush with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0xd8706ac calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b24], a2=?, a3=?.
  The `beq` branch at 0xd8705b8 targets 0xd8706a0, is taken when v0(=ret(0xd86e800)) == 0, and falls through when v0(=ret(0xd86e800)) != 0.
  The `beq` branch at 0xd8705c4 targets 0xd8706a4, is taken when at(=[ret(0xd86e800)+8]) == 0, and falls through when at(=[ret(0xd86e800)+8]) != 0.
  The `beq` branch at 0xd8705d0 targets 0xd8705e4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd8705f4 targets 0xd87068c, is taken when v0(=[a0+112]) < v1(=[a0+108]+12) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd870648 targets 0xd87065c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd870660 targets 0xd870674, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd870698 targets 0xd8705f8 and is always taken.
  The return at 0xd870684 has v0 = 0x1.
  The return at 0xd8706c4 has v0 = 0x0.

- `XSyncGetPriority` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870700-0xd8708c0 (448 bytes).
  It occupies 448 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd86e800) +0x8, including `lw` at 0xd870744, `lw` at 0xd8707ac.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd870750, `lw` at 0xd8707ec, `lw` at 0xd870848.
  The `lw` at 0xd87075c loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd870768, `lw` at 0xd870794, `lw` at 0xd870844.
  The `lw` at 0xd87076c loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd870780 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd870788, `sb` at 0xd8707d4.
  The `sh` at 0xd870790 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd870798 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8707a0 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd8707a8 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd8707b4 loads 4 bytes from [ret(0xd86e800)+8] +0x4.
  The `sb` at 0xd8707bc stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd8707c8 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd8707e8 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd8707f8, `lw` at 0xd870854.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd870804, `lw` at 0xd870860.
  The `bgezall` at 0xd870734 calls (unnamed) [0xd86e800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd870760 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8707d0 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(0xd86e800)+8]+4], a5=a1 at entry (arg1), a6=0xd, a7=[a0+108]+8.
  The `jalr` at 0xd8707fc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd870810 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd870838 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd870858 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87086c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87089c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b24], a2=?, a3=?.
  The `beq` branch at 0xd87073c targets 0xd870890, is taken when v0(=ret(0xd86e800)) == 0, and falls through when v0(=ret(0xd86e800)) != 0.
  The `beq` branch at 0xd870748 targets 0xd870894, is taken when at(=[ret(0xd86e800)+8]) == 0, and falls through when at(=[ret(0xd86e800)+8]) != 0.
  The `beq` branch at 0xd870754 targets 0xd870768, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd870778 targets 0xd870834, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd8707d8 targets 0xd870848, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd8707e0 targets 0xd8707ec, is taken when s2(=a2) == 0, and falls through when s2(=a2) != 0.
  The `beq` branch at 0xd8707f0 targets 0xd870804, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd870808 targets 0xd87081c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd870840 targets 0xd87077c and is always taken.
  The `beq` branch at 0xd87084c targets 0xd870860, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd870864 targets 0xd870878, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd87082c has v0 = 0x1.
  The return at 0xd870888 has v0 = 0x0.
  The return at 0xd8708b8 has v0 = 0x0.

- `XSyncIntToValue` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8708c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8708c0-0xd8708e0 (32 bytes).
  It occupies 32 bytes.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x0, including `sw` at 0xd8708c8, `sw` at 0xd8708d4.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x4, including `sw` at 0xd8708d0, `sw` at 0xd8708dc.
  The `bltz` branch at 0xd8708c0 targets 0xd8708d4, is taken when a1 < 0 (signed), and falls through when a1 >= 0 (signed).
  The return at 0xd8708cc has v0 = ?.
  The return at 0xd8708d8 has v0 = ?.

- `XSyncIntsToValue` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870900-0xd87090c (12 bytes).
  It occupies 12 bytes.
  The `sw` at 0xd870900 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `sw` at 0xd870908 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The return at 0xd870904 has v0 = ?.

- `XSyncValueGreaterThan` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870940 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870940-0xd870994 (84 bytes).
  It occupies 84 bytes.
  The `bne` branch at 0xd870960 targets 0xd870980, is taken when a4(?) < a5(?) (signed), and falls through when a4(?) >= a5(?) (signed).
  The `bne` branch at 0xd870968 targets 0xd870988, is taken when a4(?) != a5(?), and falls through when a4(?) == a5(?).
  The `beq` branch at 0xd870978 targets 0xd870988, is taken when a6(?) >= v1(?) (unsigned), and falls through when a6(?) < v1(?) (unsigned).
  The return at 0xd870980 has v0 = 0x1.
  The return at 0xd87098c has v0 = 0x0.

- `XSyncValueLessThan` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8709c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8709c0-0xd870a14 (84 bytes).
  It occupies 84 bytes.
  The `bne` branch at 0xd8709dc targets 0xd870a00, is taken when a4(?) < a5(?) (signed), and falls through when a4(?) >= a5(?) (signed).
  The `bne` branch at 0xd8709e4 targets 0xd870a08, is taken when a5(?) != a4(?), and falls through when a5(?) == a4(?).
  The `beq` branch at 0xd8709f8 targets 0xd870a08, is taken when v1(?) >= a0(?) (unsigned), and falls through when v1(?) < a0(?) (unsigned).
  The return at 0xd870a00 has v0 = 0x1.
  The return at 0xd870a0c has v0 = 0x0.

- `XSyncValueGreaterOrEqual` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870a40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870a40-0xd870a94 (84 bytes).
  It occupies 84 bytes.
  The `bne` branch at 0xd870a5c targets 0xd870a80, is taken when a5(?) < a4(?) (signed), and falls through when a5(?) >= a4(?) (signed).
  The `bne` branch at 0xd870a64 targets 0xd870a88, is taken when a5(?) != a4(?), and falls through when a5(?) == a4(?).
  The `bne` branch at 0xd870a78 targets 0xd870a88, is taken when v1(?) < a0(?) (unsigned), and falls through when v1(?) >= a0(?) (unsigned).
  The return at 0xd870a80 has v0 = 0x1.
  The return at 0xd870a8c has v0 = 0x0.

- `XSyncValueLessOrEqual` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870ac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870ac0-0xd870b14 (84 bytes).
  It occupies 84 bytes.
  The `bne` branch at 0xd870ae0 targets 0xd870b00, is taken when a5(?) < a4(?) (signed), and falls through when a5(?) >= a4(?) (signed).
  The `bne` branch at 0xd870ae8 targets 0xd870b08, is taken when a4(?) != a5(?), and falls through when a4(?) == a5(?).
  The `bne` branch at 0xd870af8 targets 0xd870b08, is taken when a6(?) < v1(?) (unsigned), and falls through when a6(?) >= v1(?) (unsigned).
  The return at 0xd870b00 has v0 = 0x1.
  The return at 0xd870b0c has v0 = 0x0.

- `XSyncValueEqual` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870b40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870b40-0xd870b88 (72 bytes).
  It occupies 72 bytes.
  The `bne` branch at 0xd870b60 targets 0xd870b7c, is taken when at(?) != v1(?), and falls through when at(?) == v1(?).
  The `bne` branch at 0xd870b6c targets 0xd870b7c, is taken when a4(=a0) != v1(?), and falls through when a4(=a0) == v1(?).
  The return at 0xd870b74 has v0 = 0x1.
  The return at 0xd870b80 has v0 = 0x0.

- `XSyncValueIsNegative` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870bc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870bc0-0xd870be0 (32 bytes).
  It occupies 32 bytes.
  The return at 0xd870bd8 has v0 = ?.

- `XSyncValueIsZero` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870c00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870c00-0xd870c34 (52 bytes).
  It occupies 52 bytes.
  The `bne` branch at 0xd870c0c targets 0xd870c1c, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0xd870c18 targets 0xd870c28, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The return at 0xd870c20 has v0 = 0x0.
  The return at 0xd870c2c has v0 = 0x1.

- `XSyncValueIsPositive` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870c40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870c40-0xd870c60 (32 bytes).
  It occupies 32 bytes.
  The return at 0xd870c58 has v0 = ?.

- `XSyncValueLow32` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870c80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870c80-0xd870c98 (24 bytes).
  It occupies 24 bytes.
  The return at 0xd870c90 has v0 = ?.

- `XSyncValueHigh32` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870cc0-0xd870cd4 (20 bytes).
  It occupies 20 bytes.
  The return at 0xd870ccc has v0 = ?.

- `XSyncValueAdd` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870d00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870d00-0xd870de8 (232 bytes).
  It occupies 232 bytes.
  The `sw` at 0xd870d64 stores 4 bytes to a0 (arg0 at entry) +0x4.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x0, including `sw` at 0xd870d6c, `sw` at 0xd870d78.
  The `ldl` at 0xd870d8c loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `ldr` at 0xd870d94 loads 8 bytes from a0 (arg0 at entry) +0x7.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0xd870db8, `sw` at 0xd870ddc.
  The `jalr` at 0xd870d34 calls XSyncValueIsNegative with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd870d44 calls XSyncValueIsNegative with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `jalr` at 0xd870d90 calls XSyncValueIsNegative with a0=?, a1=?, a2=(a1 + a2)+1, a3=?, a5=a2 at entry (arg2).
  The `beq` branch at 0xd870d70 targets 0xd870d80, is taken when a4(?) >= a3(?) (unsigned), and falls through when a4(?) < a3(?) (unsigned).
  The `bne` branch at 0xd870d80 targets 0xd870dcc, is taken when s1(=ret(XSyncValueIsNegative)) != v0(=ret(XSyncValueIsNegative)), and falls through when s1(=ret(XSyncValueIsNegative)) == v0(=ret(XSyncValueIsNegative)).
  The `beq` branch at 0xd870d98 targets 0xd870dcc, is taken when v0(=ret(XSyncValueIsNegative)) == s1(=ret(XSyncValueIsNegative)), and falls through when v0(=ret(XSyncValueIsNegative)) != s1(=ret(XSyncValueIsNegative)).
  The return at 0xd870dc0 has v0 = ret(XSyncValueIsNegative).
  The return at 0xd870de0 has v0 = ret(XSyncValueIsNegative).
  The instructions from 0xd870dc8 to 0xd870dc8 are not reached by any path from the entry, and their branches are not listed.

- `XSyncValueSubtract` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870e00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870e00-0xd870ee8 (232 bytes).
  It occupies 232 bytes.
  The `sw` at 0xd870e64 stores 4 bytes to a0 (arg0 at entry) +0x4.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x0, including `sw` at 0xd870e6c, `sw` at 0xd870e78.
  The `ldl` at 0xd870e8c loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `ldr` at 0xd870e94 loads 8 bytes from a0 (arg0 at entry) +0x7.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0xd870eb8, `sw` at 0xd870edc.
  The `jalr` at 0xd870e34 calls XSyncValueIsNegative with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd870e44 calls XSyncValueIsNegative with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `jalr` at 0xd870e90 calls XSyncValueIsNegative with a0=?, a1=?, a2=?, a3=?, a5=a2 at entry (arg2).
  The `beq` branch at 0xd870e70 targets 0xd870e80, is taken when a4(?) >= a3(?) (unsigned), and falls through when a4(?) < a3(?) (unsigned).
  The `bne` branch at 0xd870e80 targets 0xd870ecc, is taken when s1(=ret(XSyncValueIsNegative)) != v0(=ret(XSyncValueIsNegative)), and falls through when s1(=ret(XSyncValueIsNegative)) == v0(=ret(XSyncValueIsNegative)).
  The `beq` branch at 0xd870e98 targets 0xd870ecc, is taken when v0(=ret(XSyncValueIsNegative)) == s1(=ret(XSyncValueIsNegative)), and falls through when v0(=ret(XSyncValueIsNegative)) != s1(=ret(XSyncValueIsNegative)).
  The return at 0xd870ec0 has v0 = ret(XSyncValueIsNegative).
  The return at 0xd870ee0 has v0 = ret(XSyncValueIsNegative).
  The instructions from 0xd870ec8 to 0xd870ec8 are not reached by any path from the entry, and their branches are not listed.

- `XSyncMaxValue` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870f00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870f00-0xd870f18 (24 bytes).
  It occupies 24 bytes.
  The `sw` at 0xd870f04 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `sw` at 0xd870f14 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The return at 0xd870f10 has v0 = -0x1.

- `XSyncMinValue` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd870f40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd870f40-0xd870f50 (16 bytes).
  It occupies 16 bytes.
  The `sw` at 0xd870f40 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `sw` at 0xd870f4c stores 4 bytes to a0 (arg0 at entry) +0x0.
  The return at 0xd870f48 has v0 = ?.

- `XdbeQueryExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd871180 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd871180-0xd87133c (444 bytes).
  It occupies 444 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd870fc0) +0x8, including `lw` at 0xd8711c8, `lw` at 0xd87122c.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd8711d4, `lw` at 0xd871274, `lw` at 0xd871300.
  The `lw` at 0xd8711e0 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8711ec, `lw` at 0xd871214, `lw` at 0xd8712f8.
  The `lw` at 0xd8711f0 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd871204 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd871208, `sb` at 0xd871258.
  The `sh` at 0xd871210 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd871218 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd871220 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd871228 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd871234 loads 4 bytes from [ret(0xd870fc0)+8] +0x4.
  The `sb` at 0xd871238 stores 1 byte to [a0+108] +0x1.
  The `sb` at 0xd871240 stores 1 byte to [a0+108] +0x4.
  The `sb` at 0xd87124c stores 1 byte to [a0+108] +0x5.
  The `sw` at 0xd871268 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0xd871270 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd871280, `lw` at 0xd87130c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd87128c, `lw` at 0xd871318.
  The `lw` at 0xd8712a0 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `bgezall` at 0xd8711b4 calls (unnamed) [0xd870fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8711e4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871254 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0xd870fc0)+8]+4], a5=[a0+96]+1, a6=[a0+108]+8, a7=0x2.
  The `jalr` at 0xd871284 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871298 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8712ec calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871310 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871324 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd8711c0 targets 0xd8712d0, is taken when v0(=ret(0xd870fc0)) == 0, and falls through when v0(=ret(0xd870fc0)) != 0.
  The `beq` branch at 0xd8711cc targets 0xd8712d0, is taken when at(=[ret(0xd870fc0)+8]) == 0, and falls through when at(=[ret(0xd870fc0)+8]) != 0.
  The `beq` branch at 0xd8711d8 targets 0xd8711ec, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd8711fc targets 0xd8712ec, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd87125c targets 0xd871300, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd871278 targets 0xd87128c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd871290 targets 0xd8712a0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8712a8 targets 0xd871334, is taken when t3(=[a1]) == t8(=0x1), and falls through when t3(=[a1]) != t8(=0x1).
  The `beq` branch at 0xd8712f4 targets 0xd871204 and is always taken.
  The `beq` branch at 0xd871304 targets 0xd871318, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd87131c targets 0xd87132c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd87132c targets 0xd8712b4 and is always taken.
  The `beq` branch at 0xd871334 targets 0xd8712b8 and is always taken.
  The return at 0xd8712c8 has v0 = one of 0x0, 0x1.
  The return at 0xd8712e4 has v0 = 0x0.
  The instructions from 0xd8712fc to 0xd8712fc are not reached by any path from the entry, and their branches are not listed.

- `XdbeAllocateBackBufferName` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd871340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd871340-0xd8714a4 (356 bytes).
  It occupies 356 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd870fc0) +0x8, including `lw` at 0xd871380, `lw` at 0xd8713f8.
  The `lw` at 0xd87138c loads 4 bytes from a0 (arg0 at entry) +0x2c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd87139c, `lw` at 0xd871418.
  The `lw` at 0xd8713a8 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8713b4, `lw` at 0xd8713e0, `lw` at 0xd8714a0.
  The `lw` at 0xd8713b8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd8713cc stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd8713d4, `sb` at 0xd871414.
  The `sh` at 0xd8713dc stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd8713e4 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8713ec stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd8713f4 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd871400 loads 4 bytes from [ret(0xd870fc0)+8] +0x4.
  The `sb` at 0xd871404 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd871408 stores 4 bytes to [a0+108] +0x4.
  The `sb` at 0xd87140c stores 1 byte to [a0+108] +0xc.
  The `sw` at 0xd871410 stores 4 bytes to [a0+108] +0x8.
  The `lw` at 0xd871424 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd871430 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd871370 calls (unnamed) [0xd870fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd871394 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8713ac calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+1232].
  The `jalr` at 0xd871428 calls (unknown callee) with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=a1 at entry (arg1), a3=0x1, a4=[[ret(0xd870fc0)+8]+4], a5=[a0+1232], a6=[a0+108]+16, a7=0x4.
  The `jalr` at 0xd87143c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871470 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b34], a2=?, a3=?.
  The `jalr` at 0xd871494 calls _XFlush with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=?.
  The `beq` branch at 0xd871378 targets 0xd871464, is taken when v0(=ret(0xd870fc0)) == 0, and falls through when v0(=ret(0xd870fc0)) != 0.
  The `beq` branch at 0xd871384 targets 0xd871468, is taken when at(=[ret(0xd870fc0)+8]) == 0, and falls through when at(=[ret(0xd870fc0)+8]) != 0.
  The `beq` branch at 0xd8713a0 targets 0xd8713b4, is taken when a5(=[a0+1232]) == 0, and falls through when a5(=[a0+1232]) != 0.
  The `bne` branch at 0xd8713c4 targets 0xd871490, is taken when v1(=[a0+112]) < a0(=[a0+108]+16) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+16) (unsigned).
  The `beq` branch at 0xd87141c targets 0xd871430, is taken when a5(=[a0+1232]) == 0, and falls through when a5(=[a0+1232]) != 0.
  The `beq` branch at 0xd871434 targets 0xd871448, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd87149c targets 0xd8713c8 and is always taken.
  The return at 0xd87145c has v0 = ret(?).
  The return at 0xd871488 has v0 = 0x0.

- `XdbeDeallocateBackBufferName` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8714c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8714c0-0xd8715fc (316 bytes).
  It occupies 316 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd870fc0) +0x8, including `lw` at 0xd8714fc, `lw` at 0xd871560.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd871508, `lw` at 0xd871578.
  The `lw` at 0xd871514 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd871520, `lw` at 0xd871548, `lw` at 0xd8715cc.
  The `lw` at 0xd871524 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd871538 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd871540, `sb` at 0xd871574.
  The `sh` at 0xd871544 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd87154c loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd871554 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd87155c stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd871568 loads 4 bytes from [ret(0xd870fc0)+8] +0x4.
  The `sb` at 0xd87156c stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd871570 stores 4 bytes to [a0+108] +0x4.
  The `lw` at 0xd871584 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd871590 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd8714ec calls (unnamed) [0xd870fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd871518 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871588 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x2, a3=[[ret(0xd870fc0)+8]+4], a4=[a0+96]+1, a5=[a0+108]+8.
  The `jalr` at 0xd87159c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8715c0 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8715dc calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b34], a2=?, a3=?.
  The `beq` branch at 0xd8714f4 targets 0xd8715d0, is taken when v0(=ret(0xd870fc0)) == 0, and falls through when v0(=ret(0xd870fc0)) != 0.
  The `beq` branch at 0xd871500 targets 0xd8715d4, is taken when at(=[ret(0xd870fc0)+8]) == 0, and falls through when at(=[ret(0xd870fc0)+8]) != 0.
  The `beq` branch at 0xd87150c targets 0xd871520, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd871530 targets 0xd8715c0, is taken when v0(=[a0+112]) < v1(=[a0+108]+8) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd87157c targets 0xd871590, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd871594 targets 0xd8715a8, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8715c8 targets 0xd871538 and is always taken.
  The return at 0xd8715b8 has v0 = 0x1.
  The return at 0xd8715f4 has v0 = 0x0.

- `XdbeSwapBuffers` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd871600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd871600-0xd871830 (560 bytes).
  It occupies 560 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd870fc0) +0x8, including `lw` at 0xd871644, `lw` at 0xd8716b4.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd871650, `lw` at 0xd871798.
  The `lw` at 0xd87165c loads 4 bytes from [a0+1232] +0x0.
  7 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd871668, `lw` at 0xd8716a4, `lw` at 0xd871708.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0xd87166c, `lw` at 0xd87170c, `lw` at 0xd871748.
  The `sw` at 0xd871680 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd871688, `sb` at 0xd8716e0.
  2 such `sh` accesses store 2 bytes to [a0+108] +0x2, including `sh` at 0xd871690, `sh` at 0xd8716d4.
  The `lw` at 0xd871694 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd87169c stores 4 bytes to a0 (arg0 at entry) +0x60.
  3 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x6c, including `sw` at 0xd8716b0, `sw` at 0xd871738, `sw` at 0xd871778.
  The `lhu` at 0xd8716b8 loads 2 bytes from [a0+108] +0x2.
  The `lw` at 0xd8716bc loads 4 bytes from [ret(0xd870fc0)+8] +0x4.
  The `sb` at 0xd8716c0 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd8716c4 stores 4 bytes to [a0+108] +0x4.
  The `lwl` at 0xd871720 loads 4 bytes from ?.
  The `lwr` at 0xd871724 loads 4 bytes from ?.
  The `swl` at 0xd871728 stores 4 bytes to [a0+108] +0x0.
  The `swr` at 0xd87172c stores 4 bytes to [a0+108] +0x3.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0xd87173c, `lbu` at 0xd871794.
  The `lw` at 0xd8717a8 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd8717b4 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd871634 calls (unnamed) [0xd870fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd871660 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8716f4 calls _XSend with a0=a0 at entry (arg0), a1=sp-64, a2=0x4, a3=?.
  The `jalr` at 0xd871764 calls memcpy with a0=[a0+108], a1=sp-64, a2=0x4, a3=?.
  The `jalr` at 0xd871788 calls _XSend with a0=a0 at entry (arg0), a1=?, a2=0x4, a3=?, a6=[a0+108]+4.
  The `jalr` at 0xd8717ac calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8717c0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8717e4 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87180c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b34], a2=?, a3=?.
  The `beq` branch at 0xd87163c targets 0xd871800, is taken when v0(=ret(0xd870fc0)) == 0, and falls through when v0(=ret(0xd870fc0)) != 0.
  The `beq` branch at 0xd871648 targets 0xd871804, is taken when at(=[ret(0xd870fc0)+8]) == 0, and falls through when at(=[ret(0xd870fc0)+8]) != 0.
  The `beq` branch at 0xd871654 targets 0xd871668, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd871678 targets 0xd8717e4, is taken when v0(=[a0+112]) < v1(=[a0+108]+8) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+8) (unsigned).
  The `blez` branch at 0xd8716dc targets 0xd871798, is taken when a2 <= 0 (signed), and falls through when a2 > 0 (signed).
  The `beq` branch at 0xd8716e4 targets 0xd871708 and is always taken.
  The `beq` branch at 0xd871700 targets 0xd871798, is taken when s1(?) == s2(=((a2 << 0x3) + a1)), and falls through when s1(?) != s2(=((a2 << 0x3) + a1)).
  The `bne` branch at 0xd871718 targets 0xd871780, is taken when a5(=[a0+112]) < a6(=[a0+108]+4) (unsigned), and falls through when a5(=[a0+112]) >= a6(=[a0+108]+4) (unsigned).
  The `bne` branch at 0xd871754 targets 0xd8716ec, is taken when t1(=[a0+112]) < t2(=[a0+108]+4) (unsigned), and falls through when t1(=[a0+112]) >= t2(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd871774 targets 0xd8716fc and is always taken.
  The `beq` branch at 0xd871790 targets 0xd871740 and is always taken.
  The `beq` branch at 0xd8717a0 targets 0xd8717b4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd8717b8 targets 0xd8717cc, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8717f0 targets 0xd871680 and is always taken.
  The return at 0xd8717dc has v0 = 0x1.
  The return at 0xd871828 has v0 = 0x0.
  The instructions from 0xd87177c to 0xd87177c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd8717f8 to 0xd8717fc are not reached by any path from the entry, and their branches are not listed.

- `XdbeBeginIdiom` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd871840 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd871840-0xd871974 (308 bytes).
  It occupies 308 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd870fc0) +0x8, including `lw` at 0xd871878, `lw` at 0xd8718e0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd871884, `lw` at 0xd8718f0.
  The `lw` at 0xd871890 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd87189c, `lw` at 0xd8718c8, `lw` at 0xd871944.
  The `lw` at 0xd8718a0 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd8718b4 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd8718bc, `sb` at 0xd8718ec.
  The `sh` at 0xd8718c4 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd8718cc loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8718d4 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd8718dc stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd8718e4 loads 4 bytes from [ret(0xd870fc0)+8] +0x4.
  The `sb` at 0xd8718e8 stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd8718fc loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd871908 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd871868 calls (unnamed) [0xd870fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd871894 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871900 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x4, a2=[[ret(0xd870fc0)+8]+4], a3=[a0+96]+1, a4=[a0+108]+4, a5=0x1.
  The `jalr` at 0xd871914 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871938 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871954 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b34], a2=?, a3=?.
  The `beq` branch at 0xd871870 targets 0xd871948, is taken when v0(=ret(0xd870fc0)) == 0, and falls through when v0(=ret(0xd870fc0)) != 0.
  The `beq` branch at 0xd87187c targets 0xd87194c, is taken when at(=[ret(0xd870fc0)+8]) == 0, and falls through when at(=[ret(0xd870fc0)+8]) != 0.
  The `beq` branch at 0xd871888 targets 0xd87189c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd8718ac targets 0xd871938, is taken when v0(=[a0+112]) < v1(=[a0+108]+4) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd8718f4 targets 0xd871908, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd87190c targets 0xd871920, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd871940 targets 0xd8718b4 and is always taken.
  The return at 0xd871930 has v0 = 0x1.
  The return at 0xd87196c has v0 = 0x0.

- `XdbeEndIdiom` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd871980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd871980-0xd871ab4 (308 bytes).
  It occupies 308 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd870fc0) +0x8, including `lw` at 0xd8719b8, `lw` at 0xd871a20.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd8719c4, `lw` at 0xd871a30.
  The `lw` at 0xd8719d0 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8719dc, `lw` at 0xd871a08, `lw` at 0xd871a84.
  The `lw` at 0xd8719e0 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd8719f4 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd8719fc, `sb` at 0xd871a2c.
  The `sh` at 0xd871a04 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd871a0c loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd871a14 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd871a1c stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd871a24 loads 4 bytes from [ret(0xd870fc0)+8] +0x4.
  The `sb` at 0xd871a28 stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd871a3c loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd871a48 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd8719a8 calls (unnamed) [0xd870fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8719d4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871a40 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x5, a2=[[ret(0xd870fc0)+8]+4], a3=[a0+96]+1, a4=[a0+108]+4, a5=0x1.
  The `jalr` at 0xd871a54 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871a78 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871a94 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b34], a2=?, a3=?.
  The `beq` branch at 0xd8719b0 targets 0xd871a88, is taken when v0(=ret(0xd870fc0)) == 0, and falls through when v0(=ret(0xd870fc0)) != 0.
  The `beq` branch at 0xd8719bc targets 0xd871a8c, is taken when at(=[ret(0xd870fc0)+8]) == 0, and falls through when at(=[ret(0xd870fc0)+8]) != 0.
  The `beq` branch at 0xd8719c8 targets 0xd8719dc, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd8719ec targets 0xd871a78, is taken when v0(=[a0+112]) < v1(=[a0+108]+4) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd871a34 targets 0xd871a48, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd871a4c targets 0xd871a60, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd871a80 targets 0xd8719f4 and is always taken.
  The return at 0xd871a70 has v0 = 0x1.
  The return at 0xd871aac has v0 = 0x0.

- `XdbeGetVisualInfo` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd871ac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd871ac0-0xd871ec4 (1028 bytes).
  It occupies 1028 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd870fc0) +0x8, including `lw` at 0xd871b08, `lw` at 0xd871b70.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd871b14, `lw` at 0xd871c30, `lw` at 0xd871d68.
  The `lw` at 0xd871b20 loads 4 bytes from [a0+1232] +0x0.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd871b2c, `lw` at 0xd871b5c, `lw` at 0xd871b98.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0xd871b30, `lw` at 0xd871b9c.
  The `sw` at 0xd871b44 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sh` accesses store 2 bytes to [a0+108] +0x2, including `sh` at 0xd871b4c, `sh` at 0xd871b88.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd871b54, `sb` at 0xd871b7c.
  The `lw` at 0xd871b58 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd871b64 stores 4 bytes to a0 (arg0 at entry) +0x60.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x6c, including `sw` at 0xd871b6c, `sw` at 0xd871be0.
  The `lw` at 0xd871b74 loads 4 bytes from [ret(0xd870fc0)+8] +0x4.
  The `sb` at 0xd871b78 stores 1 byte to [a0+108] +0x1.
  7 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x0, including `lw` at 0xd871b80, `lw` at 0xd871b8c, `lw` at 0xd871b94.
  The `sw` at 0xd871b90 stores 4 bytes to [a0+108] +0x4.
  4 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd871c3c, `lw` at 0xd871d74, `lw` at 0xd871e1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd871c48, `lw` at 0xd871d80, `lw` at 0xd871e28.
  5 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd871cd0, `sw` at 0xd871d04, `sw` at 0xd871d14.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd871cd4, `lw` at 0xd871cf4, `lw` at 0xd871cf8.
  The `sw` at 0xd871eb8 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0xd871af4 calls (unnamed) [0xd870fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd871b24 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871bb8 calls memcpy with a0=[a0+108], a1=a1 at entry (arg1), a2=([a2] << 0x2), a3=?, a4=([a0+108] + ([a2] << 0x2)), a5=0x6, a6=[[ret(0xd870fc0)+8]+4], a7=[a0+96]+1.
  The `jalr` at 0xd871be8 calls _XSend with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=([a2] << 0x2), a3=?, a4=([a0+108] + ([a2] << 0x2)), a5=0x6, a6=[[ret(0xd870fc0)+8]+4], a7=[a0+96]+1.
  The `jalr` at 0xd871c00 calls _XReply with a0=a0 at entry (arg0), a1=sp-144, a2=0x0, a3=0x0.
  The `jalr` at 0xd871c20 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd871c40 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871c54 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871cc0 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd871cec calls _XRead with a0=a0 at entry (arg0), a1=sp-104, a2=0x8, a3=?.
  The `jalr` at 0xd871d48 calls _XRead with a0=a0 at entry (arg0), a1=sp-112, a2=0x4, a3=?.
  The `jalr` at 0xd871d78 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871d8c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871dc4 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+108]+8, a2=?, a3=?.
  The `jalr` at 0xd871dec calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd871e0c calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd871e20 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871e34 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871e74 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871e88 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd871ea0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b34], a2=?, a3=?.
  The `beq` branch at 0xd871b00 targets 0xd871e98, is taken when v0(=ret(0xd870fc0)) == 0, and falls through when v0(=ret(0xd870fc0)) != 0.
  The `beq` branch at 0xd871b0c targets 0xd871e9c, is taken when at(=[ret(0xd870fc0)+8]) == 0, and falls through when at(=[ret(0xd870fc0)+8]) != 0.
  The `beq` branch at 0xd871b18 targets 0xd871b2c, is taken when s2(=[a0+1232]) == 0, and falls through when s2(=[a0+1232]) != 0.
  The `bne` branch at 0xd871b3c targets 0xd871dc4, is taken when v1(=[a0+112]) < a1(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a1(=[a0+108]+8) (unsigned).
  The `bne` branch at 0xd871bac targets 0xd871be4, is taken when a3(=[a0+112]) < a4(=([a0+108] + ([a2] << 0x2))) (unsigned), and falls through when a3(=[a0+112]) >= a4(=([a0+108] + ([a2] << 0x2))) (unsigned).
  The `beq` branch at 0xd871bdc targets 0xd871bf0 and is always taken.
  The `beq` branch at 0xd871c08 targets 0xd871e64, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd871c14 targets 0xd871eb0, is taken when v0(=[a2]) == 0, and falls through when v0(=[a2]) != 0.
  The `bne` branch at 0xd871c28 targets 0xd871c80, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0xd871c34 targets 0xd871c48, is taken when s2(=[a0+1232]) == 0, and falls through when s2(=[a0+1232]) != 0.
  The `beq` branch at 0xd871c4c targets 0xd871c60, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `blez` branch at 0xd871c94 targets 0xd871d68, is taken when t8(=[a2]) <= 0 (signed), and falls through when t8(=[a2]) > 0 (signed).
  The `beq` branch at 0xd871ca8 targets 0xd871d3c and is always taken.
  The `beq` branch at 0xd871ccc targets 0xd871dd4, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `blez` branch at 0xd871cd8 targets 0xd871d28, is taken when a1(?) <= 0 (signed), and falls through when a1(?) > 0 (signed).
  The `bne` branch at 0xd871d20 targets 0xd871ce0, is taken when s0(?) < a4(?) (signed), and falls through when s0(?) >= a4(?) (signed).
  The `beq` branch at 0xd871d34 targets 0xd871d68, is taken when s5(?) >= a4(=[a2]) (signed), and falls through when s5(?) < a4(=[a2]) (signed).
  The `bne` branch at 0xd871d58 targets 0xd871cb0, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0xd871d60 targets 0xd871cbc and is always taken.
  The `beq` branch at 0xd871d6c targets 0xd871d80, is taken when s2(=[a0+1232]) == 0, and falls through when s2(=[a0+1232]) != 0.
  The `beq` branch at 0xd871d84 targets 0xd871d98, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd871dcc targets 0xd871b44 and is always taken.
  The `blez` branch at 0xd871dd4 targets 0xd871e00, is taken when s5(?) <= 0 (signed), and falls through when s5(?) > 0 (signed).
  The `bne` branch at 0xd871df8 targets 0xd871dec, is taken when s0(?) != s1(?), and falls through when s0(?) == s1(?).
  The `beq` branch at 0xd871e14 targets 0xd871e28, is taken when s2(=[a0+1232]) == 0, and falls through when s2(=[a0+1232]) != 0.
  The `beq` branch at 0xd871e2c targets 0xd871e40, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd871e68 targets 0xd871e7c, is taken when s2(=[a0+1232]) == 0, and falls through when s2(=[a0+1232]) != 0.
  The `beq` branch at 0xd871e80 targets 0xd871e90, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd871e90 targets 0xd871c60 and is always taken.
  The `beq` branch at 0xd871ea8 targets 0xd871c60 and is always taken.
  The `bne` branch at 0xd871eb4 targets 0xd871c18, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0xd871ebc targets 0xd871c1c and is always taken.
  The return at 0xd871c78 has v0 = 0x0.
  The return at 0xd871dbc has v0 = ?.
  The return at 0xd871e5c has v0 = 0x0.

- `XdbeFreeVisualInfo` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd871f00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd871f00-0xd871f58 (88 bytes).
  It occupies 88 bytes.
  The `lw` at 0xd871f20 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `jalr` at 0xd871f30 calls XFree with a0=[a0+4], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd871f3c calls XFree with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd871f18 targets 0xd871f48, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0xd871f24 targets 0xd871f38, is taken when a0(=[a0+4]) == 0, and falls through when a0(=[a0+4]) != 0.
  The return at 0xd871f50 has v0 = one of ?, ret(XFree).

- `XdbeGetBackBufferAttributes` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd871f80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd871f80-0xd872148 (456 bytes).
  It occupies 456 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd870fc0) +0x8, including `lw` at 0xd871fbc, `lw` at 0xd872034.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd871fd8, `lw` at 0xd872068.
  The `lw` at 0xd871fe4 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd871ff0, `lw` at 0xd87201c, `lw` at 0xd872114.
  The `lw` at 0xd871ff4 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd872008 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd872010, `sb` at 0xd87205c.
  The `sh` at 0xd872018 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd872020 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd872028 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd872030 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd87203c loads 4 bytes from [ret(0xd870fc0)+8] +0x4.
  The `sb` at 0xd872044 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd872050 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd872074 stores 4 bytes to ?.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd872078, `lw` at 0xd872120.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd872084, `lw` at 0xd87212c.
  The `bgezall` at 0xd871fac calls (unnamed) [0xd870fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd871fc8 calls malloc with a0=0x4, a1=?, a2=?, a3=?.
  The `jalr` at 0xd871fe8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+1232].
  The `jalr` at 0xd872058 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0xd870fc0)+8]+4], a5=a1 at entry (arg1), a6=[a0+108], a7=0x7.
  The `jalr` at 0xd87207c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+1232].
  The `jalr` at 0xd872090 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8720cc calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b34], a2=?, a3=?.
  The `jalr` at 0xd872108 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=[a0+108].
  The `jalr` at 0xd872124 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+1232].
  The `jalr` at 0xd872138 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd871fb4 targets 0xd8720c0, is taken when v0(=ret(0xd870fc0)) == 0, and falls through when v0(=ret(0xd870fc0)) != 0.
  The `beq` branch at 0xd871fc0 targets 0xd8720c0, is taken when at(=[ret(0xd870fc0)+8]) == 0, and falls through when at(=[ret(0xd870fc0)+8]) != 0.
  The `beq` branch at 0xd871fd0 targets 0xd8720ec, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0xd871fdc targets 0xd871ff0, is taken when a4(=[a0+1232]) == 0, and falls through when a4(=[a0+1232]) != 0.
  The `bne` branch at 0xd872000 targets 0xd872104, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd872064 targets 0xd872118, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd872070 targets 0xd872084, is taken when a4(=[a0+1232]) == 0, and falls through when a4(=[a0+1232]) != 0.
  The `beq` branch at 0xd872088 targets 0xd87209c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd872110 targets 0xd872004 and is always taken.
  The `beq` branch at 0xd872118 targets 0xd87212c, is taken when a4(=[a0+1232]) == 0, and falls through when a4(=[a0+1232]) != 0.
  The `beq` branch at 0xd872130 targets 0xd872140, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd872140 targets 0xd87209c and is always taken.
  The return at 0xd8720ac has v0 = one of ?, 0x0.
  The return at 0xd8720e4 has v0 = 0x0.
  The return at 0xd8720fc has v0 = 0x0.
  The instructions from 0xd8720b4 to 0xd8720bc are not reached by any path from the entry, and their branches are not listed.

- `XLbxQueryExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd872340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd872340-0xd8723d8 (152 bytes).
  It occupies 152 bytes.
  3 such `lw` accesses load 4 bytes from ret(0xd872180) +0x8, including `lw` at 0xd87237c, `lw` at 0xd87239c, `lw` at 0xd8723ac.
  The `lw` at 0xd872394 loads 4 bytes from [ret(0xd872180)+8] +0x4.
  The `sw` at 0xd872398 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0xd8723a4 loads 4 bytes from [ret(0xd872180)+8] +0x8.
  The `sw` at 0xd8723a8 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `lw` at 0xd8723b8 loads 4 bytes from [ret(0xd872180)+8] +0xc.
  The `sw` at 0xd8723bc stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `bgezall` at 0xd872368 calls (unnamed) [0xd872180] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0xd872374 targets 0xd8723c8, is taken when v0(=ret(0xd872180)) == 0, and falls through when v0(=ret(0xd872180)) != 0.
  The `beq` branch at 0xd872380 targets 0xd8723c8, is taken when a6(=[ret(0xd872180)+8]) == 0, and falls through when a6(=[ret(0xd872180)+8]) != 0.
  The return at 0xd8723c0 has v0 = 0x1.
  The return at 0xd8723d0 has v0 = 0x0.

- `XLbxGetEventBase` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd872400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd872400-0xd872460 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0xd872430 loads 4 bytes from ret(0xd872180) +0x8.
  The `lw` at 0xd87243c loads 4 bytes from [ret(0xd872180)+8] +0x8.
  The `bgezall` at 0xd872420 calls (unnamed) [0xd872180] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0xd872428 targets 0xd872450, is taken when v0(=ret(0xd872180)) == 0, and falls through when v0(=ret(0xd872180)) != 0.
  The `beq` branch at 0xd872434 targets 0xd87244c, is taken when a2(=[ret(0xd872180)+8]) == 0, and falls through when a2(=[ret(0xd872180)+8]) != 0.
  The return at 0xd872444 has v0 = [[ret(0xd872180)+8]+8].
  The return at 0xd872458 has v0 = -0x1.

- `XLbxQueryVersion` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd872480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd872480-0xd872634 (436 bytes).
  It occupies 436 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd872180) +0x8, including `lw` at 0xd8724c0, `lw` at 0xd872524.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd8724cc, `lw` at 0xd872568, `lw` at 0xd8725c0.
  The `lw` at 0xd8724d8 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8724e4, `lw` at 0xd87250c, `lw` at 0xd8725bc.
  The `lw` at 0xd8724e8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd8724fc stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd872500, `sb` at 0xd872548.
  The `sh` at 0xd872508 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd872510 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd872518 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd872520 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd872530 loads 4 bytes from [ret(0xd872180)+8] +0x4.
  The `sb` at 0xd87253c stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd87255c stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0xd872564 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd872574, `lw` at 0xd8725cc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd872580, `lw` at 0xd8725d8.
  The `bgezall` at 0xd8724b0 calls (unnamed) [0xd872180] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8724dc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd872544 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(0xd872180)+8]+4], a5=[a0+96]+1, a6=[a0+108]+4, a7=0x1.
  The `jalr` at 0xd872578 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87258c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8725b0 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8725d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8725e4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd872614 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b40], a2=?, a3=?.
  The `beq` branch at 0xd8724b8 targets 0xd872608, is taken when v0(=ret(0xd872180)) == 0, and falls through when v0(=ret(0xd872180)) != 0.
  The `beq` branch at 0xd8724c4 targets 0xd87260c, is taken when at(=[ret(0xd872180)+8]) == 0, and falls through when at(=[ret(0xd872180)+8]) != 0.
  The `beq` branch at 0xd8724d0 targets 0xd8724e4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd8724f4 targets 0xd8725b0, is taken when v1(=[a0+112]) < a0(=[a0+108]+4) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd87254c targets 0xd8725c0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd87256c targets 0xd872580, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd872584 targets 0xd872598, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8725b8 targets 0xd8724fc and is always taken.
  The `beq` branch at 0xd8725c4 targets 0xd8725d8, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd8725dc targets 0xd8725f0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd8725a8 has v0 = 0x1.
  The return at 0xd872600 has v0 = 0x0.
  The return at 0xd87262c has v0 = 0x0.

- `XSecurityQueryExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd872a00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd872a00-0xd872bbc (444 bytes).
  It occupies 444 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd872640) +0x8, including `lw` at 0xd872a48, `lw` at 0xd872aac.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd872a54, `lw` at 0xd872af4, `lw` at 0xd872b80.
  The `lw` at 0xd872a60 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd872a6c, `lw` at 0xd872a94, `lw` at 0xd872b78.
  The `lw` at 0xd872a70 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd872a84 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd872a88, `sb` at 0xd872ad8.
  The `sh` at 0xd872a90 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd872a98 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd872aa0 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd872aa8 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd872ab4 loads 4 bytes from [ret(0xd872640)+8] +0x4.
  The `sb` at 0xd872ab8 stores 1 byte to [a0+108] +0x1.
  The `sh` at 0xd872ac0 stores 2 bytes to [a0+108] +0x4.
  The `sh` at 0xd872acc stores 2 bytes to [a0+108] +0x6.
  The `sw` at 0xd872ae8 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0xd872af0 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd872b00, `lw` at 0xd872b8c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd872b0c, `lw` at 0xd872b98.
  The `lw` at 0xd872b20 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `bgezall` at 0xd872a34 calls (unnamed) [0xd872640] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd872a64 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd872ad4 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0xd872640)+8]+4], a5=[a0+96]+1, a6=[a0+108]+8, a7=0x2.
  The `jalr` at 0xd872b04 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd872b18 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd872b6c calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd872b90 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd872ba4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd872a40 targets 0xd872b50, is taken when v0(=ret(0xd872640)) == 0, and falls through when v0(=ret(0xd872640)) != 0.
  The `beq` branch at 0xd872a4c targets 0xd872b50, is taken when at(=[ret(0xd872640)+8]) == 0, and falls through when at(=[ret(0xd872640)+8]) != 0.
  The `beq` branch at 0xd872a58 targets 0xd872a6c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd872a7c targets 0xd872b6c, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd872adc targets 0xd872b80, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd872af8 targets 0xd872b0c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd872b10 targets 0xd872b20, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd872b28 targets 0xd872bb4, is taken when t3(=[a1]) == t8(=0x1), and falls through when t3(=[a1]) != t8(=0x1).
  The `beq` branch at 0xd872b74 targets 0xd872a84 and is always taken.
  The `beq` branch at 0xd872b84 targets 0xd872b98, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd872b9c targets 0xd872bac, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd872bac targets 0xd872b34 and is always taken.
  The `beq` branch at 0xd872bb4 targets 0xd872b38 and is always taken.
  The return at 0xd872b48 has v0 = one of 0x0, 0x1.
  The return at 0xd872b64 has v0 = 0x0.
  The instructions from 0xd872b7c to 0xd872b7c are not reached by any path from the entry, and their branches are not listed.

- `XSecurityAllocXauth` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd872bc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd872bc0-0xd872bf8 (56 bytes).
  It occupies 56 bytes.
  The `jalr` at 0xd872be0 calls calloc with a0=0x1, a1=0x20, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd872bf0 has v0 = ret(calloc).

- `XSecurityFreeXauth` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd872c00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd872c00-0xd872c34 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0xd872c1c calls XFree with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xd872c2c has v0 = ret(XFree).

- `Ones` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd872c40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd872c40-0xd872ca8 (104 bytes).
  It occupies 104 bytes.
  The return at 0xd872ca0 has v0 = ?.

- `XSecurityGenerateAuthorization` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd872cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd872cc0-0xd87310c (1100 bytes).
  It occupies 1100 bytes.
  2 such `sw` accesses store 4 bytes to a4 (arg4 at entry) +0x0, including `sw` at 0xd872d10, `sw` at 0xd872fdc.
  2 such `lw` accesses load 4 bytes from ret(0xd872640) +0x8, including `lw` at 0xd872d1c, `lw` at 0xd872d84.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd872d28, `lw` at 0xd872f80, `lw` at 0xd87304c.
  The `lw` at 0xd872d34 loads 4 bytes from [a0+1232] +0x0.
  9 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd872d40, `lw` at 0xd872d6c, `lw` at 0xd872e00.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0xd872d44, `lw` at 0xd872e04, `lw` at 0xd872e5c.
  The `sw` at 0xd872d58 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd872d60, `sb` at 0xd872d90.
  3 such `sh` accesses store 2 bytes to [a0+108] +0x2, including `sh` at 0xd872d68, `sh` at 0xd872dbc, `sh` at 0xd872de8.
  The `lw` at 0xd872d70 loads 4 bytes from a0 (arg0 at entry) +0x60.
  4 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x6c, including `sw` at 0xd872d78, `sw` at 0xd872e44, `sw` at 0xd872e98.
  The `sw` at 0xd872d80 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd872d88 loads 4 bytes from [ret(0xd872640)+8] +0x4.
  The `sb` at 0xd872d8c stores 1 byte to [a0+108] +0x1.
  6 such `lhu` accesses load 2 bytes from a1 (arg1 at entry) +0x10, including `lhu` at 0xd872d94, `lhu` at 0xd872da4, `lhu` at 0xd872dfc.
  The `sh` at 0xd872d98 stores 2 bytes to [a0+108] +0x4.
  4 such `lhu` accesses load 2 bytes from a1 (arg1 at entry) +0x18, including `lhu` at 0xd872d9c, `lhu` at 0xd872dc0, `lhu` at 0xd872e58.
  The `sh` at 0xd872da0 stores 2 bytes to [a0+108] +0x6.
  The `lhu` at 0xd872da8 loads 2 bytes from [a0+108] +0x2.
  The `sw` at 0xd872dd8 stores 4 bytes to [a0+108] +0x8.
  The `lhu` at 0xd872df0 loads 2 bytes from ?.
  The `sh` at 0xd872df8 stores 2 bytes to ?.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x14, including `lw` at 0xd872e10, `lw` at 0xd873044.
  The `lw` at 0xd872e6c loads 4 bytes from a1 (arg1 at entry) +0x1c.
  The `lw` at 0xd872eb4 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `lw` at 0xd872ed0 loads 4 bytes from a3 (arg3 at entry) +0x4.
  The `sw` at 0xd872ed4 stores 4 bytes to (sp + one of -0x80, -0x7c) +0x0.
  The `lw` at 0xd872ee8 loads 4 bytes from a3 (arg3 at entry) +0x8.
  The `sw` at 0xd872eec stores 4 bytes to (sp + one of -0x80, -0x7c, -0x78) +0x0.
  The `lw` at 0xd872efc loads 4 bytes from a3 (arg3 at entry) +0xc.
  The `sw` at 0xd872f00 stores 4 bytes to (sp + one of -0x80, -0x7c, -0x78, -0x74) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd872f8c, `lw` at 0xd873074.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd872f98, `lw` at 0xd873080.
  The `sh` at 0xd873008 stores 2 bytes to ret(calloc) +0x18.
  The `sw` at 0xd873010 stores 4 bytes to ret(calloc) +0x1c.
  The `lw` at 0xd873028 loads 4 bytes from ret(calloc) +0x1c.
  The `lhu` at 0xd87302c loads 2 bytes from ret(calloc) +0x18.
  The `sh` at 0xd873030 stores 2 bytes to ret(calloc) +0x10.
  The `sw` at 0xd873038 stores 4 bytes to ret(calloc) +0x14.
  The `bgezall` at 0xd872d08 calls (unnamed) [0xd872640] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd872d38 calls (unknown callee) with a0=a0 at entry (arg0), a1=[a0+1232], a2=?, a3=?.
  The `bgezall` at 0xd872de4 calls Ones [0xd872c40] with a0=?, a1=?, a2=?, a3=?, a4=[a1+16]:2, a5=0x1, a6=[[ret(0xd872640)+8]+4], a7=[a0+108].
  The `jalr` at 0xd872e20 calls memcpy with a0=[a0+108], a1=[a1+20], a2=[a1+16]:2, a3=?, a7=[a0+108].
  The `jalr` at 0xd872e4c calls _XSend with a0=a0 at entry (arg0), a1=[a1+20], a2=[a1+16]:2, a3=?, a7=[a0+108].
  The `jalr` at 0xd872e74 calls memcpy with a0=?, a1=[a1+28], a2=[a1+24]:2, a3=?.
  The `jalr` at 0xd872ea0 calls _XSend with a0=a0 at entry (arg0), a1=[a1+28], a2=[a1+24]:2, a3=?.
  The `jalr` at 0xd872f2c calls memcpy with a0=[a0+108], a1=sp-128, a2=(ret(Ones) << 0x2), a3=?, a6=([a0+108] + (ret(Ones) << 0x2)), a7=[a0+108].
  The `jalr` at 0xd872f58 calls _XSend with a0=a0 at entry (arg0), a1=sp-128, a2=(ret(Ones) << 0x2), a3=?, a6=([a0+108] + (ret(Ones) << 0x2)), a7=[a0+108].
  The `jalr` at 0xd872f70 calls _XReply with a0=a0 at entry (arg0), a1=sp-112, a2=0x0, a3=0x0.
  The `jalr` at 0xd872f90 calls (unknown callee) with a0=a0 at entry (arg0), a1=[a0+1232], a2=?, a3=?.
  The `jalr` at 0xd872fa4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd872ff0 calls calloc with a0=0x1, a1=?, a2=?, a3=?.
  The `jalr` at 0xd873018 calls _XReadPad with a0=a0 at entry (arg0), a1=ret(calloc)+32, a2=?, a3=?.
  The `jalr` at 0xd873040 calls memcpy with a0=([ret(calloc)+24]:2 + [ret(calloc)+28]), a1=[a1+20], a2=[a1+16]:2, a3=?.
  The `jalr` at 0xd873060 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=-0x4, a3=?.
  The `jalr` at 0xd873078 calls (unknown callee) with a0=a0 at entry (arg0), a1=[a0+1232], a2=?, a3=?.
  The `jalr` at 0xd87308c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8730c0 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a7=[a0+108].
  The `jalr` at 0xd8730dc calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b4c], a2=?, a3=?.
  The `beq` branch at 0xd872d14 targets 0xd8730d0, is taken when v0(=ret(0xd872640)) == 0, and falls through when v0(=ret(0xd872640)) != 0.
  The `beq` branch at 0xd872d20 targets 0xd8730d4, is taken when at(=[ret(0xd872640)+8]) == 0, and falls through when at(=[ret(0xd872640)+8]) != 0.
  The `beq` branch at 0xd872d2c targets 0xd872d40, is taken when a1(=[a0+1232]) == 0, and falls through when a1(=[a0+1232]) != 0.
  The `bne` branch at 0xd872d50 targets 0xd8730c0, is taken when v1(=[a0+112]) < a0(=[a0+108]+12) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+12) (unsigned).
  The `bne` branch at 0xd872e14 targets 0xd872e48, is taken when t3(=[a0+112]) < s4(=([a0+108] + [a1+16]:2)) (unsigned), and falls through when t3(=[a0+112]) >= s4(=([a0+108] + [a1+16]:2)) (unsigned).
  The `beq` branch at 0xd872e40 targets 0xd872e58 and is always taken.
  The `bne` branch at 0xd872e68 targets 0xd872e9c, is taken when t1(=[a0+112]) < t2(?) (unsigned), and falls through when t1(=[a0+112]) >= t2(?) (unsigned).
  The `beq` branch at 0xd872e94 targets 0xd872ea8 and is always taken.
  The `beq` branch at 0xd872eac targets 0xd872ec0, is taken when (s1(=a2) & 0x1) == 0, and falls through when (s1(=a2) & 0x1) != 0.
  The `beq` branch at 0xd872ec4 targets 0xd872edc, is taken when (s1(=a2) & 0x2) == 0, and falls through when (s1(=a2) & 0x2) != 0.
  The `beq` branch at 0xd872edc targets 0xd872ef4, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0xd872ef4 targets 0xd872f04, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0xd872f18 targets 0xd872f50, is taken when a5(=[a0+112]) < a6(=([a0+108] + (ret(Ones) << 0x2))) (unsigned), and falls through when a5(=[a0+112]) >= a6(=([a0+108] + (ret(Ones) << 0x2))) (unsigned).
  The `beq` branch at 0xd872f48 targets 0xd872f60 and is always taken.
  The `bne` branch at 0xd872f78 targets 0xd872fd8, is taken when v0(=ret(_XReply)) != 0, and falls through when v0(=ret(_XReply)) == 0.
  The `beq` branch at 0xd872f84 targets 0xd872f98, is taken when a1(=[a0+1232]) == 0, and falls through when a1(=[a0+1232]) != 0.
  The `beq` branch at 0xd872f9c targets 0xd872fb0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd872ffc targets 0xd873050, is taken when v0(=ret(calloc)) == 0, and falls through when v0(=ret(calloc)) != 0.
  The `beq` branch at 0xd873048 targets 0xd87306c and is always taken.
  The `beq` branch at 0xd87306c targets 0xd873080, is taken when a1(=[a0+1232]) == 0, and falls through when a1(=[a0+1232]) != 0.
  The `beq` branch at 0xd873084 targets 0xd873098, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8730c8 targets 0xd872d58 and is always taken.
  The return at 0xd872fd0 has v0 = 0x0.
  The return at 0xd8730b8 has v0 = ret(calloc).
  The return at 0xd873104 has v0 = 0x0.

- `XSecurityRevokeAuthorization` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd873140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd873140-0xd87327c (316 bytes).
  It occupies 316 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd872640) +0x8, including `lw` at 0xd87317c, `lw` at 0xd8731e0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd873188, `lw` at 0xd8731f8.
  The `lw` at 0xd873194 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8731a0, `lw` at 0xd8731c8, `lw` at 0xd87324c.
  The `lw` at 0xd8731a4 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd8731b8 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd8731c0, `sb` at 0xd8731f4.
  The `sh` at 0xd8731c4 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd8731cc loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8731d4 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd8731dc stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd8731e8 loads 4 bytes from [ret(0xd872640)+8] +0x4.
  The `sb` at 0xd8731ec stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd8731f0 stores 4 bytes to [a0+108] +0x4.
  The `lw` at 0xd873204 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd873210 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd87316c calls (unnamed) [0xd872640] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd873198 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873208 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x2, a3=[[ret(0xd872640)+8]+4], a4=[a0+96]+1, a5=[a0+108]+8.
  The `jalr` at 0xd87321c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873240 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87325c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b4c], a2=?, a3=?.
  The `beq` branch at 0xd873174 targets 0xd873250, is taken when v0(=ret(0xd872640)) == 0, and falls through when v0(=ret(0xd872640)) != 0.
  The `beq` branch at 0xd873180 targets 0xd873254, is taken when at(=[ret(0xd872640)+8]) == 0, and falls through when at(=[ret(0xd872640)+8]) != 0.
  The `beq` branch at 0xd87318c targets 0xd8731a0, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd8731b0 targets 0xd873240, is taken when v0(=[a0+112]) < v1(=[a0+108]+8) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd8731fc targets 0xd873210, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd873214 targets 0xd873228, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd873248 targets 0xd8731b8 and is always taken.
  The return at 0xd873238 has v0 = 0x1.
  The return at 0xd873274 has v0 = 0x0.

- `XagQueryVersion` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd873380 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd873380-0xd87353c (444 bytes).
  It occupies 444 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd873280) +0x8, including `lw` at 0xd8733c0, `lw` at 0xd873424.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd8733cc, `lw` at 0xd873470, `lw` at 0xd8734c8.
  The `lw` at 0xd8733d8 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8733e4, `lw` at 0xd87340c, `lw` at 0xd8734c4.
  The `lw` at 0xd8733e8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd8733fc stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd873400, `sb` at 0xd873450.
  The `sh` at 0xd873408 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd873410 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd873418 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd873420 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd87342c loads 4 bytes from [ret(0xd873280)+8] +0x4.
  The `sb` at 0xd873430 stores 1 byte to [a0+108] +0x1.
  The `sh` at 0xd873438 stores 2 bytes to [a0+108] +0x4.
  The `sh` at 0xd873444 stores 2 bytes to [a0+108] +0x6.
  The `sw` at 0xd873464 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0xd87346c stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd87347c, `lw` at 0xd8734d4.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd873488, `lw` at 0xd8734e0.
  The `bgezall` at 0xd8733b0 calls (unnamed) [0xd873280] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8733dc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87344c calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0xd873280)+8]+4], a5=[a0+96]+1, a6=[a0+108]+8, a7=0x2.
  The `jalr` at 0xd873480 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873494 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8734b8 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8734d8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8734ec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87351c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b58], a2=?, a3=?.
  The `beq` branch at 0xd8733b8 targets 0xd873510, is taken when v0(=ret(0xd873280)) == 0, and falls through when v0(=ret(0xd873280)) != 0.
  The `beq` branch at 0xd8733c4 targets 0xd873514, is taken when at(=[ret(0xd873280)+8]) == 0, and falls through when at(=[ret(0xd873280)+8]) != 0.
  The `beq` branch at 0xd8733d0 targets 0xd8733e4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd8733f4 targets 0xd8734b8, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd873454 targets 0xd8734c8, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd873474 targets 0xd873488, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd87348c targets 0xd8734a0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8734c0 targets 0xd8733fc and is always taken.
  The `beq` branch at 0xd8734cc targets 0xd8734e0, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd8734e4 targets 0xd8734f8, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd8734b0 has v0 = 0x1.
  The return at 0xd873508 has v0 = 0x0.
  The return at 0xd873534 has v0 = 0x0.

- `StuffToWire` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd873540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd873540-0xd8736b4 (372 bytes).
  It occupies 372 bytes.
  7 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x0, including `lw` at 0xd873544, `lw` at 0xd873570, `lw` at 0xd87358c.
  The `lw` at 0xd873560 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0xd873580 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `sw` at 0xd873584 stores 4 bytes to (sp + one of -0x40, -0x3c) +0x0.
  The `lw` at 0xd87359c loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `sw` at 0xd8735a0 stores 4 bytes to (sp + one of -0x40, -0x3c, -0x38) +0x0.
  The `lw` at 0xd8735b8 loads 4 bytes from a1 (arg1 at entry) +0x14.
  The `sw` at 0xd8735bc stores 4 bytes to (sp + one of -0x40, -0x3c, -0x38, -0x34) +0x0.
  The `lw` at 0xd8735d4 loads 4 bytes from a1 (arg1 at entry) +0x18.
  3 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd8735d8, `sw` at 0xd8735f4, `sw` at 0xd873614.
  The `lw` at 0xd8735f0 loads 4 bytes from a1 (arg1 at entry) +0x1c.
  The `lw` at 0xd873610 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lhu` at 0xd87361c loads 2 bytes from a2 (arg2 at entry) +0x2.
  The `sh` at 0xd873628 stores 2 bytes to a2 (arg2 at entry) +0x2.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd87362c, `lw` at 0xd87365c.
  The `lw` at 0xd873634 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd873674 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `jalr` at 0xd873650 calls memcpy with a0=[a0+108], a1=sp-64, a2=?, a3=?, a4=[a1], a6=sp-64.
  The `jalr` at 0xd873690 calls _XSend with a0=a0 at entry (arg0), a1=sp-64, a2=?, a3=?, a4=[a1], a6=sp-64.
  The `beq` branch at 0xd873558 targets 0xd8736ac, is taken when (a4(=[a1]) & 0x1) == 0, and falls through when (a4(=[a1]) & 0x1) != 0.
  The `beq` branch at 0xd873578 targets 0xd873594, is taken when (a4(=[a1]) & 0x2) == 0, and falls through when (a4(=[a1]) & 0x2) != 0.
  The `beq` branch at 0xd873594 targets 0xd8735b0, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0xd8735b0 targets 0xd8735cc, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0xd8735cc targets 0xd8735e8, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0xd8735e8 targets 0xd873604, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0xd873604 targets 0xd873618, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bne` branch at 0xd873640 targets 0xd873684, is taken when v0(=[a0+112]) < v1(?) (unsigned), and falls through when v0(=[a0+112]) >= v1(?) (unsigned).
  The `beq` branch at 0xd8736ac targets 0xd873574 and is always taken.
  The return at 0xd87367c has v0 = ?.
  The return at 0xd8736a4 has v0 = ret(_XSend).

- `XagCreateEmbeddedApplicationGroup` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8736c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8736c0-0xd8738ac (492 bytes).
  It occupies 492 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd873280) +0x8, including `lw` at 0xd87370c, `lw` at 0xd8737d0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd873718, `lw` at 0xd873824.
  The `lw` at 0xd873724 loads 4 bytes from [a0+1232] +0x0.
  The `lw` at 0xd87373c loads 4 bytes from a0 (arg0 at entry) +0x84.
  The `lw` at 0xd873744 loads 4 bytes from a0 (arg0 at entry) +0x8c.
  The `lw` at 0xd87375c loads 4 bytes from ([a0+140] + ((([a0+132] << 0x2) + [a0+132]) << 0x4)) +0x8.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd873790, `lw` at 0xd8737b8, `lw` at 0xd873878.
  The `lw` at 0xd873794 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd8737a8 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd8737ac, `sb` at 0xd8737dc.
  The `sh` at 0xd8737b4 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd8737bc loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8737c4 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd8737cc stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd8737d4 loads 4 bytes from [ret(0xd873280)+8] +0x4.
  The `sb` at 0xd8737d8 stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd8737e0 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd873800, `sw` at 0xd873820.
  The `sw` at 0xd873808 stores 4 bytes to a5 (arg5 at entry) +0x0.
  The `lw` at 0xd873830 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd87383c loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd8736fc calls (unnamed) [0xd873280] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd873728 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8737e8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+108], a3=?, a6=[[ret(0xd873280)+8]+4], a7=[a0+96]+1.
  The `bgezall` at 0xd87381c calls (unnamed) [0xd873540] with a0=a0 at entry (arg0), a1=sp-112, a2=?, a3=?.
  The `jalr` at 0xd873834 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873848 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873868 calls _XFlush with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=[a0+108], a3=?, a5=[a0+108]+12.
  The `jalr` at 0xd87388c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b58], a2=?, a3=?.
  The `beq` branch at 0xd873704 targets 0xd873880, is taken when v0(=ret(0xd873280)) == 0, and falls through when v0(=ret(0xd873280)) != 0.
  The `beq` branch at 0xd873710 targets 0xd873884, is taken when at(=[ret(0xd873280)+8]) == 0, and falls through when at(=[ret(0xd873280)+8]) != 0.
  The `beq` branch at 0xd87371c targets 0xd873730, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd873774 targets 0xd873790, is taken when a1(=a2) == 0, and falls through when a1(=a2) != 0.
  The `bne` branch at 0xd8737a0 targets 0xd873868, is taken when a4(=[a0+112]) < a5(=[a0+108]+12) (unsigned), and falls through when a4(=[a0+112]) >= a5(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd873828 targets 0xd87383c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd873840 targets 0xd873854, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd873874 targets 0xd8737a8 and is always taken.
  The return at 0xd873860 has v0 = 0x1.
  The return at 0xd8738a4 has v0 = 0x0.
  The instructions from 0xd87387c to 0xd87387c are not reached by any path from the entry, and their branches are not listed.

- `XagCreateNonembeddedApplicationGroup` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8738c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8738c0-0xd873a48 (392 bytes).
  It occupies 392 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd873280) +0x8, including `lw` at 0xd8738fc, `lw` at 0xd873974.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd873908, `lw` at 0xd8739c8.
  The `lw` at 0xd873914 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd873930, `lw` at 0xd87395c, `lw` at 0xd873a18.
  The `lw` at 0xd873934 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd873948 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd873950, `sb` at 0xd873980.
  The `sh` at 0xd873958 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd873960 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd873968 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd873970 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd873978 loads 4 bytes from [ret(0xd873280)+8] +0x4.
  The `sb` at 0xd87397c stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd873984 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd8739a4, `sw` at 0xd8739c4.
  The `sw` at 0xd8739ac stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0xd8739d4 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd8739e0 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd8738ec calls (unnamed) [0xd873280] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd873918 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87398c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+108], a3=0x1, a4=[[ret(0xd873280)+8]+4], a5=[a0+96]+1, a6=[a0+108]+12, a7=0x3.
  The `bgezall` at 0xd8739c0 calls StuffToWire [0xd873540] with a0=a0 at entry (arg0), a1=sp-80, a2=?, a3=?.
  The `jalr` at 0xd8739d8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8739ec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873a0c calls _XFlush with a0=a0 at entry (arg0), a1=0x41, a2=[a0+108], a3=?.
  The `jalr` at 0xd873a28 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b58], a2=?, a3=?.
  The `beq` branch at 0xd8738f4 targets 0xd873a1c, is taken when v0(=ret(0xd873280)) == 0, and falls through when v0(=ret(0xd873280)) != 0.
  The `beq` branch at 0xd873900 targets 0xd873a20, is taken when at(=[ret(0xd873280)+8]) == 0, and falls through when at(=[ret(0xd873280)+8]) != 0.
  The `beq` branch at 0xd87390c targets 0xd873920, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd873940 targets 0xd873a0c, is taken when v1(=[a0+112]) < a0(=[a0+108]+12) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd8739cc targets 0xd8739e0, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd8739e4 targets 0xd8739f8, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd873a14 targets 0xd873948 and is always taken.
  The return at 0xd873a04 has v0 = 0x1.
  The return at 0xd873a40 has v0 = 0x0.

- `XagDestroyApplicationGroup` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd873a80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd873a80-0xd873bbc (316 bytes).
  It occupies 316 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd873280) +0x8, including `lw` at 0xd873abc, `lw` at 0xd873b20.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd873ac8, `lw` at 0xd873b38.
  The `lw` at 0xd873ad4 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd873ae0, `lw` at 0xd873b08, `lw` at 0xd873b8c.
  The `lw` at 0xd873ae4 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd873af8 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd873b00, `sb` at 0xd873b34.
  The `sh` at 0xd873b04 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd873b0c loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd873b14 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd873b1c stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd873b28 loads 4 bytes from [ret(0xd873280)+8] +0x4.
  The `sb` at 0xd873b2c stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd873b30 stores 4 bytes to [a0+108] +0x4.
  The `lw` at 0xd873b44 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd873b50 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd873aac calls (unnamed) [0xd873280] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd873ad8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873b48 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x2, a3=[[ret(0xd873280)+8]+4], a4=[a0+96]+1, a5=[a0+108]+8.
  The `jalr` at 0xd873b5c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873b80 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873b9c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b58], a2=?, a3=?.
  The `beq` branch at 0xd873ab4 targets 0xd873b90, is taken when v0(=ret(0xd873280)) == 0, and falls through when v0(=ret(0xd873280)) != 0.
  The `beq` branch at 0xd873ac0 targets 0xd873b94, is taken when at(=[ret(0xd873280)+8]) == 0, and falls through when at(=[ret(0xd873280)+8]) != 0.
  The `beq` branch at 0xd873acc targets 0xd873ae0, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd873af0 targets 0xd873b80, is taken when v0(=[a0+112]) < v1(=[a0+108]+8) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd873b3c targets 0xd873b50, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd873b54 targets 0xd873b68, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd873b88 targets 0xd873af8 and is always taken.
  The return at 0xd873b78 has v0 = 0x1.
  The return at 0xd873bb4 has v0 = 0x0.

- `XagGetApplicationGroupAttributes` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd873bc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd873bc0-0xd873eac (748 bytes).
  It occupies 748 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd873280) +0x8, including `lw` at 0xd873c14, `lw` at 0xd873c7c.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd873c20, `lw` at 0xd873d20, `lw` at 0xd873e30.
  The `lw` at 0xd873c2c loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd873c38, `lw` at 0xd873c64, `lw` at 0xd873e2c.
  The `lw` at 0xd873c3c loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd873c50 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd873c58, `sb` at 0xd873ca4.
  The `sh` at 0xd873c60 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd873c68 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd873c70 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd873c78 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd873c84 loads 4 bytes from [ret(0xd873280)+8] +0x4.
  The `sb` at 0xd873c8c stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd873c98 stores 4 bytes to [a0+108] +0x4.
  9 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd873cbc, `lw` at 0xd873cd8, `lw` at 0xd873cf0.
  7 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd873ce4, `sw` at 0xd873d7c, `sw` at 0xd873d98.
  The `lw` at 0xd873d14 loads 4 bytes from table(0xd87d648) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd873d2c, `lw` at 0xd873e3c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd873d38, `lw` at 0xd873e48.
  The `bgezall` at 0xd873c04 calls (unnamed) [0xd873280] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd873c30 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873ca0 calls _XReply with a0=a0 at entry (arg0), a1=sp-128, a2=0x0, a3=0x0, a4=[[ret(0xd873280)+8]+4], a5=a1 at entry (arg1), a6=0x3, a7=[a0+96]+1.
  The `jalr` at 0xd873d30 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=-0x8.
  The `jalr` at 0xd873d44 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873e20 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=a1 at entry (arg1).
  The `jalr` at 0xd873e40 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873e54 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873e8c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b58], a2=?, a3=?.
  The `beq` branch at 0xd873c0c targets 0xd873e80, is taken when v0(=ret(0xd873280)) == 0, and falls through when v0(=ret(0xd873280)) != 0.
  The `beq` branch at 0xd873c18 targets 0xd873e84, is taken when at(=[ret(0xd873280)+8]) == 0, and falls through when at(=[ret(0xd873280)+8]) != 0.
  The `beq` branch at 0xd873c24 targets 0xd873c38, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd873c48 targets 0xd873e1c, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd873ca8 targets 0xd873e30, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd873cc0 targets 0xd873d20, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0xd873cc8 targets 0xd873d00 and is always taken.
  The `beq` branch at 0xd873cf4 targets 0xd873d20, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0xd873d0c targets 0xd873ce8, is taken when a1(?) >= 0x8 (unsigned), and falls through when a1(?) < 0x8 (unsigned).
  The `beq` branch at 0xd873d24 targets 0xd873d38, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd873d3c targets 0xd873d50, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd873d78 targets 0xd873ce8 and is always taken.
  The `beq` branch at 0xd873d94 targets 0xd873ce8 and is always taken.
  The `beq` branch at 0xd873db0 targets 0xd873ce8 and is always taken.
  The `beq` branch at 0xd873dd4 targets 0xd873ce8 and is always taken.
  The `beq` branch at 0xd873df0 targets 0xd873ce8 and is always taken.
  The `beq` branch at 0xd873e14 targets 0xd873ce8 and is always taken.
  The `beq` branch at 0xd873e28 targets 0xd873c4c and is always taken.
  The `beq` branch at 0xd873e34 targets 0xd873e48, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd873e4c targets 0xd873e60, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd873d5c has v0 = 0x1.
  The return at 0xd873e6c has v0 = 0x0.
  The return at 0xd873ea4 has v0 = 0x0.
  The instructions from 0xd873db8 to 0xd873dbc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd873df8 to 0xd873dfc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd873e74 to 0xd873e7c are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0xd873d18 uses the jump table at 0xd87d648 with targets 0xd873ce8, 0xd873e00, 0xd873cd0, 0xd873ddc, 0xd873dc0, 0xd873d9c, 0xd873d64, 0xd873d80.

- `XagQueryApplicationGroup` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd873ec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd873ec0-0xd874074 (436 bytes).
  It occupies 436 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd873280) +0x8, including `lw` at 0xd873f00, `lw` at 0xd873f68.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd873f0c, `lw` at 0xd873fa4, `lw` at 0xd874000.
  The `lw` at 0xd873f18 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd873f24, `lw` at 0xd873f50, `lw` at 0xd873ffc.
  The `lw` at 0xd873f28 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd873f3c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd873f44, `sb` at 0xd873f90.
  The `sh` at 0xd873f4c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd873f54 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd873f5c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd873f64 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd873f70 loads 4 bytes from [ret(0xd873280)+8] +0x4.
  The `sb` at 0xd873f78 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd873f84 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd873fa0 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd873fb0, `lw` at 0xd87400c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd873fbc, `lw` at 0xd874018.
  The `bgezall` at 0xd873ef0 calls (unnamed) [0xd873280] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd873f1c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873f8c calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(0xd873280)+8]+4], a5=a1 at entry (arg1), a6=0x4, a7=[a0+108]+8.
  The `jalr` at 0xd873fb4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873fc8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd873ff0 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874010 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874024 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874054 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b58], a2=?, a3=?.
  The `beq` branch at 0xd873ef8 targets 0xd874048, is taken when v0(=ret(0xd873280)) == 0, and falls through when v0(=ret(0xd873280)) != 0.
  The `beq` branch at 0xd873f04 targets 0xd87404c, is taken when at(=[ret(0xd873280)+8]) == 0, and falls through when at(=[ret(0xd873280)+8]) != 0.
  The `beq` branch at 0xd873f10 targets 0xd873f24, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd873f34 targets 0xd873fec, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd873f94 targets 0xd874000, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd873fa8 targets 0xd873fbc, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd873fc0 targets 0xd873fd4, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd873ff8 targets 0xd873f38 and is always taken.
  The `beq` branch at 0xd874004 targets 0xd874018, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd87401c targets 0xd874030, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd873fe4 has v0 = 0x1.
  The return at 0xd874040 has v0 = 0x0.
  The return at 0xd87406c has v0 = 0x0.

- `XagCreateAssociation` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd874080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd874080-0xd874090 (16 bytes).
  It occupies 16 bytes.
  The `lw` at 0xd874080 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `sw` at 0xd87408c stores 4 bytes to a1 (arg1 at entry) +0x0.
  The return at 0xd874088 has v0 = 0x1.

- `XagDestroyAssociation` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8740c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8740c0-0xd8740c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0xd8740c0 has v0 = 0x1.

- `XcupQueryVersion` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd874200 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd874200-0xd8743bc (444 bytes).
  It occupies 444 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd874100) +0x8, including `lw` at 0xd874240, `lw` at 0xd8742a4.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd87424c, `lw` at 0xd8742f0, `lw` at 0xd874348.
  The `lw` at 0xd874258 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd874264, `lw` at 0xd87428c, `lw` at 0xd874344.
  The `lw` at 0xd874268 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd87427c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd874280, `sb` at 0xd8742d0.
  The `sh` at 0xd874288 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd874290 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd874298 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd8742a0 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd8742ac loads 4 bytes from [ret(0xd874100)+8] +0x4.
  The `sb` at 0xd8742b0 stores 1 byte to [a0+108] +0x1.
  The `sh` at 0xd8742b8 stores 2 bytes to [a0+108] +0x4.
  The `sh` at 0xd8742c4 stores 2 bytes to [a0+108] +0x6.
  The `sw` at 0xd8742e4 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0xd8742ec stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd8742fc, `lw` at 0xd874354.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd874308, `lw` at 0xd874360.
  The `bgezall` at 0xd874230 calls (unnamed) [0xd874100] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd87425c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8742cc calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0xd874100)+8]+4], a5=[a0+96]+1, a6=[a0+108]+8, a7=0x2.
  The `jalr` at 0xd874300 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874314 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874338 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874358 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87436c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87439c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b60], a2=?, a3=?.
  The `beq` branch at 0xd874238 targets 0xd874390, is taken when v0(=ret(0xd874100)) == 0, and falls through when v0(=ret(0xd874100)) != 0.
  The `beq` branch at 0xd874244 targets 0xd874394, is taken when at(=[ret(0xd874100)+8]) == 0, and falls through when at(=[ret(0xd874100)+8]) != 0.
  The `beq` branch at 0xd874250 targets 0xd874264, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd874274 targets 0xd874338, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd8742d4 targets 0xd874348, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd8742f4 targets 0xd874308, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd87430c targets 0xd874320, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd874340 targets 0xd87427c and is always taken.
  The `beq` branch at 0xd87434c targets 0xd874360, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd874364 targets 0xd874378, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd874330 has v0 = 0x1.
  The return at 0xd874388 has v0 = 0x0.
  The return at 0xd8743b4 has v0 = 0x0.

- `XcupGetReservedColormapEntries` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8743c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8743c0-0xd8746fc (828 bytes).
  It occupies 828 bytes.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0xd874400, `sw` at 0xd874548.
  2 such `lw` accesses load 4 bytes from ret(0xd874100) +0x8, including `lw` at 0xd874410, `lw` at 0xd874478.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd87441c, `lw` at 0xd87459c, `lw` at 0xd8745f0.
  The `lw` at 0xd874428 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd874434, `lw` at 0xd874464, `lw` at 0xd874650.
  The `lw` at 0xd874438 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd87444c stores 4 bytes to a0 (arg0 at entry) +0x64.
  The `sh` at 0xd874454 stores 2 bytes to [a0+108] +0x2.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd87445c, `sb` at 0xd8744a0.
  The `lw` at 0xd874460 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd87446c stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `sw` at 0xd874474 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `lw` at 0xd874480 loads 4 bytes from [ret(0xd874100)+8] +0x4.
  The `sb` at 0xd874488 stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd874494 stores 4 bytes to [a0+108] +0x4.
  The `sw` at 0xd874544 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `lw` at 0xd874558 loads 4 bytes from ?.
  The `sw` at 0xd87455c stores 4 bytes to ?.
  3 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0xd874560, `lhu` at 0xd874568, `lhu` at 0xd874570.
  3 such `sh` accesses store 2 bytes to ?, including `sh` at 0xd874564, `sh` at 0xd87456c, `sh` at 0xd874574.
  The `lw` at 0xd874578 loads 4 bytes from a3 (arg3 at entry) +0x0.
  3 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd8745a8, `lw` at 0xd8745fc, `lw` at 0xd8746a4.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd8745b4, `lw` at 0xd874608, `lw` at 0xd8746b0.
  The `bgezall` at 0xd8743f8 calls (unnamed) [0xd874100] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd87442c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87449c calls _XReply with a0=a0 at entry (arg0), a1=sp-352, a2=0x0, a3=0x0, a4=[[ret(0xd874100)+8]+4], a5=a1 at entry (arg1), a6=0x1, a7=[a0+108]+8.
  The `jalr` at 0xd8744e8 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd87451c calls _XRead with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874530 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd8745ac calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8745c0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874600 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874614 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874644 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874664 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b60], a2=?, a3=?.
  The `jalr` at 0xd874690 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8746a8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8746bc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8746cc calls XFree with a0=?, a1=?, a2=?, a3=?, a6=sp-320.
  The `jalr` at 0xd8746e4 calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0xd874408 targets 0xd874654, is taken when v0(=ret(0xd874100)) == 0, and falls through when v0(=ret(0xd874100)) != 0.
  The `beq` branch at 0xd874414 targets 0xd874658, is taken when at(=[ret(0xd874100)+8]) == 0, and falls through when at(=[ret(0xd874100)+8]) != 0.
  The `beq` branch at 0xd874420 targets 0xd874434, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd874444 targets 0xd874640, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd8744a4 targets 0xd8745f0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `bne` branch at 0xd8744d4 targets 0xd8744f8, is taken when s2(?) < 0x15 (signed), and falls through when s2(?) >= 0x15 (signed).
  The `beq` branch at 0xd8744dc targets 0xd8746f4, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0xd8744f0 targets 0xd8744fc and is always taken.
  The `beq` branch at 0xd874504 targets 0xd874688, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0xd874524 targets 0xd8746dc, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0xd874540 targets 0xd8745e8, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `blez` branch at 0xd87454c targets 0xd874590, is taken when s2(?) <= 0 (signed), and falls through when s2(?) > 0 (signed).
  The `bne` branch at 0xd874588 targets 0xd874558, is taken when a2(?) < a0(=[a3]) (signed), and falls through when a2(?) >= a0(=[a3]) (signed).
  The `bne` branch at 0xd874594 targets 0xd8746cc, is taken when s3(?) != a6(=sp-320), and falls through when s3(?) == a6(=sp-320).
  The `beq` branch at 0xd8745a0 targets 0xd8745b4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd8745b8 targets 0xd8745cc, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `bne` branch at 0xd8745e8 targets 0xd8746e4, is taken when s3(?) != a0(=sp-320), and falls through when s3(?) == a0(=sp-320).
  The `beq` branch at 0xd8745f4 targets 0xd874608, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd87460c targets 0xd874620, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd87464c targets 0xd874448 and is always taken.
  The `beq` branch at 0xd87469c targets 0xd8746b0, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd8746b4 targets 0xd8746c4, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8746c4 targets 0xd874620 and is always taken.
  The `beq` branch at 0xd8746d4 targets 0xd8745a0 and is always taken.
  The `beq` branch at 0xd8746dc targets 0xd87452c and is always taken.
  The `beq` branch at 0xd8746ec targets 0xd8745f4 and is always taken.
  The `beq` branch at 0xd8746f4 targets 0xd8744e4 and is always taken.
  The return at 0xd8745e0 has v0 = 0x1.
  The return at 0xd874638 has v0 = 0x0.
  The return at 0xd874680 has v0 = 0x0.

- `XcupStoreColors` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd874700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd874700-0xd874bd4 (1236 bytes).
  It occupies 1236 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd874100) +0x8, including `lw` at 0xd87474c, `lw` at 0xd8747bc.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd874758, `lw` at 0xd8749dc, `lw` at 0xd874a74.
  The `lw` at 0xd874764 loads 4 bytes from [a0+1232] +0x0.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd874770, `lw` at 0xd8747a0, `lw` at 0xd87483c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0xd874774, `lw` at 0xd874840.
  The `sw` at 0xd87478c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sh` accesses store 2 bytes to [a0+108] +0x2, including `sh` at 0xd874794, `sh` at 0xd8747d4.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd874798, `sb` at 0xd8747e4.
  The `lw` at 0xd87479c loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8747a8 stores 4 bytes to a0 (arg0 at entry) +0x60.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x6c, including `sw` at 0xd8747b4, `sw` at 0xd874870.
  The `lhu` at 0xd8747c0 loads 2 bytes from [a0+108] +0x2.
  The `lw` at 0xd8747cc loads 4 bytes from [ret(0xd874100)+8] +0x4.
  The `sw` at 0xd8747d8 stores 4 bytes to [a0+108] +0x4.
  The `sb` at 0xd8747dc stores 1 byte to [a0+108] +0x1.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd87481c, `lw` at 0xd874924, `lw` at 0xd874970.
  15 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0xd874824, `lhu` at 0xd87482c, `lhu` at 0xd874834.
  3 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd874940, `sw` at 0xd874974, `sw` at 0xd8749ac.
  4 such `lbu` accesses load 1 byte from ?, including `lbu` at 0xd874948, `lbu` at 0xd87497c, `lbu` at 0xd8749b0.
  3 such `sb` accesses store 1 byte to ?, including `sb` at 0xd87494c, `sb` at 0xd874980, `sb` at 0xd8749b4.
  9 such `sh` accesses store 2 bytes to ?, including `sh` at 0xd874954, `sh` at 0xd87495c, `sh` at 0xd874964.
  4 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd8749e8, `lw` at 0xd874a80, `lw` at 0xd874ae0.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd8749f4, `lw` at 0xd874a8c, `lw` at 0xd874aec.
  The `sb` at 0xd874bbc stores 1 byte to a2 (arg2 at entry) +0xa.
  The `sh` at 0xd874bc0 stores 2 bytes to a2 (arg2 at entry) +0x8.
  The `sh` at 0xd874bc4 stores 2 bytes to a2 (arg2 at entry) +0x6.
  The `sh` at 0xd874bc8 stores 2 bytes to a2 (arg2 at entry) +0x4.
  The `sw` at 0xd874bd0 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0xd87473c calls (unnamed) [0xd874100] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd874768 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874808 calls _XSend with a0=a0 at entry (arg0), a1=sp-3216, a2=0xc, a3=?.
  The `jalr` at 0xd87485c calls memcpy with a0=[a0+108], a1=sp-3216, a2=0xc, a3=?.
  The `jalr` at 0xd87488c calls _XReply with a0=a0 at entry (arg0), a1=sp-3200, a2=0x0, a3=0x0.
  The `jalr` at 0xd8748e4 calls malloc with a0=?, a1=?, a2=?, a3=?, a5=0x55555556.
  The `jalr` at 0xd87490c calls _XRead with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8749ec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874a00 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874a44 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+108]+8, a2=?, a3=?, a4=a1 at entry (arg1).
  The `jalr` at 0xd874a6c calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=0x55555556.
  The `jalr` at 0xd874a84 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874a98 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874ac4 calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd874ae4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874af8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874b30 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b60], a2=?, a3=?.
  The `jalr` at 0xd874b60 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874b78 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874b8c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xd874744 targets 0xd874b24, is taken when v0(=ret(0xd874100)) == 0, and falls through when v0(=ret(0xd874100)) != 0.
  The `beq` branch at 0xd874750 targets 0xd874b28, is taken when at(=[ret(0xd874100)+8]) == 0, and falls through when at(=[ret(0xd874100)+8]) != 0.
  The `beq` branch at 0xd87475c targets 0xd874770, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd874780 targets 0xd874a40, is taken when v1(=[a0+112]) < a1(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a1(=[a0+108]+8) (unsigned).
  The `blez` branch at 0xd8747e0 targets 0xd87487c, is taken when s4(=a3) <= 0 (signed), and falls through when s4(=a3) > 0 (signed).
  The `beq` branch at 0xd8747f8 targets 0xd87481c and is always taken.
  The `beq` branch at 0xd874814 targets 0xd874874, is taken when s0(?) == s2(?), and falls through when s0(?) != s2(?).
  The `bne` branch at 0xd87484c targets 0xd874800, is taken when ra(=[a0+112]) < at(=[a0+108]+12) (unsigned), and falls through when ra(=[a0+112]) >= at(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd87486c targets 0xd874810 and is always taken.
  The `beq` branch at 0xd874894 targets 0xd874ad4, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `bne` branch at 0xd8748bc targets 0xd874a58, is taken when s4(=a3) != a3(?), and falls through when s4(=a3) == a3(?).
  The `bne` branch at 0xd8748c4 targets 0xd8748f4, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0xd8748cc targets 0xd874b9c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0xd8748fc targets 0xd874b58, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `blez` branch at 0xd874914 targets 0xd8749d0, is taken when s4(=a3) <= 0 (signed), and falls through when s4(=a3) > 0 (signed).
  The `bne` branch at 0xd87491c targets 0xd874ba8, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0xd87496c targets 0xd874a30, is taken when a2(?) == at(?), and falls through when a2(?) != at(?).
  The `bne` branch at 0xd8749a0 targets 0xd874940, is taken when a2(?) != at(?), and falls through when a2(?) == at(?).
  The `bne` branch at 0xd8749d4 targets 0xd874ac4, is taken when s0(?) != t1(=sp-3168), and falls through when s0(?) == t1(=sp-3168).
  The `beq` branch at 0xd8749e0 targets 0xd8749f4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd8749f8 targets 0xd874a0c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd874a30 targets 0xd8749ac and is always taken.
  The `beq` branch at 0xd874a50 targets 0xd874784 and is always taken.
  The `beq` branch at 0xd874a78 targets 0xd874a8c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd874a90 targets 0xd874aa4, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd874acc targets 0xd8749e0 and is always taken.
  The `beq` branch at 0xd874ad8 targets 0xd874aec, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd874af0 targets 0xd874b04, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd874b6c targets 0xd874b80, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd874b84 targets 0xd874b94, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd874b94 targets 0xd874a0c and is always taken.
  The `beq` branch at 0xd874ba0 targets 0xd8748e0 and is always taken.
  The `beq` branch at 0xd874bcc targets 0xd8749d0 and is always taken.
  The return at 0xd874a28 has v0 = one of 0x0, 0x1.
  The return at 0xd874abc has v0 = 0x0.
  The return at 0xd874b1c has v0 = 0x0.
  The return at 0xd874b50 has v0 = 0x0.
  The instructions from 0xd874a38 to 0xd874a3c are not reached by any path from the entry, and their branches are not listed.

- `DPMSQueryExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd874d00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd874d00-0xd874d84 (132 bytes).
  It occupies 132 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd874c00) +0x8, including `lw` at 0xd874d38, `lw` at 0xd874d58.
  The `lw` at 0xd874d50 loads 4 bytes from [ret(0xd874c00)+8] +0x8.
  The `sw` at 0xd874d54 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0xd874d64 loads 4 bytes from [ret(0xd874c00)+8] +0xc.
  The `sw` at 0xd874d68 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0xd874d24 calls (unnamed) [0xd874c00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0xd874d30 targets 0xd874d74, is taken when v0(=ret(0xd874c00)) == 0, and falls through when v0(=ret(0xd874c00)) != 0.
  The `beq` branch at 0xd874d3c targets 0xd874d78, is taken when a5(=[ret(0xd874c00)+8]) == 0, and falls through when a5(=[ret(0xd874c00)+8]) != 0.
  The return at 0xd874d6c has v0 = 0x1.
  The return at 0xd874d7c has v0 = 0x0.

- `DPMSGetVersion` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd874dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd874dc0-0xd874f74 (436 bytes).
  It occupies 436 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd874c00) +0x8, including `lw` at 0xd874e00, `lw` at 0xd874e64.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd874e0c, `lw` at 0xd874ea8, `lw` at 0xd874f00.
  The `lw` at 0xd874e18 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd874e24, `lw` at 0xd874e4c, `lw` at 0xd874efc.
  The `lw` at 0xd874e28 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd874e3c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd874e40, `sb` at 0xd874e88.
  The `sh` at 0xd874e48 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd874e50 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd874e58 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd874e60 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd874e70 loads 4 bytes from [ret(0xd874c00)+8] +0x4.
  The `sb` at 0xd874e7c stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd874e9c stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0xd874ea4 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd874eb4, `lw` at 0xd874f0c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd874ec0, `lw` at 0xd874f18.
  The `bgezall` at 0xd874df0 calls (unnamed) [0xd874c00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd874e1c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874e84 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0xd874c00)+8]+4], a5=[a0+96]+1, a6=[a0+108]+8, a7=0x2.
  The `jalr` at 0xd874eb8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874ecc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874ef0 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874f10 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874f24 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd874f54 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b68], a2=?, a3=?.
  The `beq` branch at 0xd874df8 targets 0xd874f48, is taken when v0(=ret(0xd874c00)) == 0, and falls through when v0(=ret(0xd874c00)) != 0.
  The `beq` branch at 0xd874e04 targets 0xd874f4c, is taken when at(=[ret(0xd874c00)+8]) == 0, and falls through when at(=[ret(0xd874c00)+8]) != 0.
  The `beq` branch at 0xd874e10 targets 0xd874e24, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd874e34 targets 0xd874ef0, is taken when v1(=[a0+112]) < a0(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd874e8c targets 0xd874f00, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd874eac targets 0xd874ec0, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd874ec4 targets 0xd874ed8, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd874ef8 targets 0xd874e3c and is always taken.
  The `beq` branch at 0xd874f04 targets 0xd874f18, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd874f1c targets 0xd874f30, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd874ee8 has v0 = 0x1.
  The return at 0xd874f40 has v0 = 0x0.
  The return at 0xd874f6c has v0 = 0x0.

- `DPMSCapable` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd874f80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd874f80-0xd875110 (400 bytes).
  It occupies 400 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd874c00) +0x8, including `lw` at 0xd874fb8, `lw` at 0xd87501c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd874fc4, `lw` at 0xd875048.
  The `lw` at 0xd874fd0 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd874fdc, `lw` at 0xd875004, `lw` at 0xd87509c.
  The `lw` at 0xd874fe0 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd874ff4 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd874ffc, `sb` at 0xd875040.
  The `sh` at 0xd875000 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd875008 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd875010 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd875018 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd875028 loads 4 bytes from [ret(0xd874c00)+8] +0x4.
  The `sb` at 0xd875034 stores 1 byte to [a0+108] +0x1.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd875054, `lw` at 0xd8750a8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd875060, `lw` at 0xd8750b4.
  The `bgezall` at 0xd874fa8 calls (unnamed) [0xd874c00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd874fd4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+1232].
  The `jalr` at 0xd87503c calls _XReply with a0=a0 at entry (arg0), a1=sp-64, a2=0x0, a3=0x0, a4=[[ret(0xd874c00)+8]+4], a5=0x1, a6=[a0+96]+1, a7=[a0+108]+4.
  The `jalr` at 0xd875058 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+1232].
  The `jalr` at 0xd87506c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875090 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8750ac calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+1232].
  The `jalr` at 0xd8750c0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8750f0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b68], a2=?, a3=?.
  The `beq` branch at 0xd874fb0 targets 0xd8750e4, is taken when v0(=ret(0xd874c00)) == 0, and falls through when v0(=ret(0xd874c00)) != 0.
  The `beq` branch at 0xd874fbc targets 0xd8750e8, is taken when at(=[ret(0xd874c00)+8]) == 0, and falls through when at(=[ret(0xd874c00)+8]) != 0.
  The `beq` branch at 0xd874fc8 targets 0xd874fdc, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The `bne` branch at 0xd874fec targets 0xd875090, is taken when v1(=[a0+112]) < a0(=[a0+108]+4) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd875044 targets 0xd8750a0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd87504c targets 0xd875060, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The `beq` branch at 0xd875064 targets 0xd875078, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd875098 targets 0xd874ff4 and is always taken.
  The `beq` branch at 0xd8750a0 targets 0xd8750b4, is taken when a3(=[a0+1232]) == 0, and falls through when a3(=[a0+1232]) != 0.
  The `beq` branch at 0xd8750b8 targets 0xd8750cc, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd875088 has v0 = ?.
  The return at 0xd8750dc has v0 = 0x0.
  The return at 0xd875108 has v0 = 0x0.

- `DPMSSetTimeouts` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd875140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd875140-0xd8752e0 (416 bytes).
  It occupies 416 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd874c00) +0x8, including `lw` at 0xd8751b8, `lw` at 0xd87521c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd8751c4, `lw` at 0xd875238.
  The `lw` at 0xd8751d0 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8751dc, `lw` at 0xd875204, `lw` at 0xd8752c4.
  The `lw` at 0xd8751e0 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd8751f4 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd8751fc, `sb` at 0xd875234.
  The `sh` at 0xd875200 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd875208 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd875210 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd875218 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd875220 loads 4 bytes from [ret(0xd874c00)+8] +0x4.
  The `sb` at 0xd875224 stores 1 byte to [a0+108] +0x1.
  The `sh` at 0xd875228 stores 2 bytes to [a0+108] +0x4.
  The `sh` at 0xd87522c stores 2 bytes to [a0+108] +0x6.
  The `sh` at 0xd875230 stores 2 bytes to [a0+108] +0x8.
  The `lw` at 0xd875244 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd875250 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd875180 calls (unnamed) [0xd874c00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8751d4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875248 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x3, a2=[[ret(0xd874c00)+8]+4], a3=[a0+96]+1, a4=[a0+108]+12.
  The `jalr` at 0xd87525c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8752b8 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8752d0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b68], a2=?, a3=?.
  The `beq` branch at 0xd875190 targets 0xd8751a0, is taken when s4(=a3) == 0, and falls through when s4(=a3) != 0.
  The `bne` branch at 0xd875198 targets 0xd87528c, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0xd8751a0 targets 0xd8751b0, is taken when s1(=a2) == 0, and falls through when s1(=a2) != 0.
  The `bne` branch at 0xd8751a8 targets 0xd8752b0, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0xd8751b0 targets 0xd8752cc, is taken when s2(=ret(0xd874c00)) == 0, and falls through when s2(=ret(0xd874c00)) != 0.
  The `beq` branch at 0xd8751bc targets 0xd8752cc, is taken when at(=[ret(0xd874c00)+8]) == 0, and falls through when at(=[ret(0xd874c00)+8]) != 0.
  The `beq` branch at 0xd8751c8 targets 0xd8751dc, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd8751ec targets 0xd8752b8, is taken when v0(=[a0+112]) < v1(=[a0+108]+12) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+12) (unsigned).
  The `beq` branch at 0xd87523c targets 0xd875250, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd875254 targets 0xd875268, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8752b0 targets 0xd87526c and is always taken.
  The `beq` branch at 0xd8752c0 targets 0xd8751f4 and is always taken.
  The `beq` branch at 0xd8752d8 targets 0xd875268 and is always taken.
  The return at 0xd875284 has v0 = one of 0x0, 0x1, 0x2.
  The return at 0xd8752a8 has v0 = 0x2.
  The instructions from 0xd8752c8 to 0xd8752c8 are not reached by any path from the entry, and their branches are not listed.

- `DPMSGetTimeouts` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd875300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd875300-0xd8754b0 (432 bytes).
  It occupies 432 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd874c00) +0x8, including `lw` at 0xd875344, `lw` at 0xd8753ac.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd875350, `lw` at 0xd8753d4.
  The `lw` at 0xd87535c loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd875368, `lw` at 0xd875394, `lw` at 0xd875464.
  The `lw` at 0xd87536c loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd875380 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd875388, `sb` at 0xd8753cc.
  The `sh` at 0xd875390 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd875398 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd8753a0 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd8753a8 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd8753b4 loads 4 bytes from [ret(0xd874c00)+8] +0x4.
  The `sb` at 0xd8753c0 stores 1 byte to [a0+108] +0x1.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd8753e0, `lw` at 0xd875470.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd8753ec, `lw` at 0xd87547c.
  The `sh` at 0xd875418 stores 2 bytes to a1 (arg1 at entry) +0x0.
  The `sh` at 0xd875428 stores 2 bytes to a2 (arg2 at entry) +0x0.
  The `sh` at 0xd875434 stores 2 bytes to a3 (arg3 at entry) +0x0.
  The `bgezall` at 0xd875334 calls (unnamed) [0xd874c00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd875360 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=[a0+1232].
  The `jalr` at 0xd8753c8 calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x0, a3=0x1, a4=[[ret(0xd874c00)+8]+4], a5=0x2, a6=[a0+96]+1, a7=[a0+108]+4.
  The `jalr` at 0xd8753e4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=[a0+1232].
  The `jalr` at 0xd8753f8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875458 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875474 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=[a0+1232].
  The `jalr` at 0xd875488 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8754a0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b68], a2=?, a3=?.
  The `beq` branch at 0xd87533c targets 0xd875498, is taken when v0(=ret(0xd874c00)) == 0, and falls through when v0(=ret(0xd874c00)) != 0.
  The `beq` branch at 0xd875348 targets 0xd87549c, is taken when at(=[ret(0xd874c00)+8]) == 0, and falls through when at(=[ret(0xd874c00)+8]) != 0.
  The `beq` branch at 0xd875354 targets 0xd875368, is taken when a6(=[a0+1232]) == 0, and falls through when a6(=[a0+1232]) != 0.
  The `bne` branch at 0xd875378 targets 0xd875458, is taken when v1(=[a0+112]) < a0(=[a0+108]+4) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd8753d0 targets 0xd875468, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd8753d8 targets 0xd8753ec, is taken when a6(=[a0+1232]) == 0, and falls through when a6(=[a0+1232]) != 0.
  The `beq` branch at 0xd8753f0 targets 0xd875404, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd875460 targets 0xd875380 and is always taken.
  The `beq` branch at 0xd875468 targets 0xd87547c, is taken when a6(=[a0+1232]) == 0, and falls through when a6(=[a0+1232]) != 0.
  The `beq` branch at 0xd875480 targets 0xd875490, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd875490 targets 0xd875440 and is always taken.
  The `beq` branch at 0xd8754a8 targets 0xd875440 and is always taken.
  The return at 0xd875438 has v0 = 0x1.
  The return at 0xd875450 has v0 = 0x0.

- `DPMSEnable` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd8754c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd8754c0-0xd8755f4 (308 bytes).
  It occupies 308 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd874c00) +0x8, including `lw` at 0xd8754f8, `lw` at 0xd875560.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd875504, `lw` at 0xd875570.
  The `lw` at 0xd875510 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd87551c, `lw` at 0xd875548, `lw` at 0xd8755c4.
  The `lw` at 0xd875520 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd875534 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd87553c, `sb` at 0xd87556c.
  The `sh` at 0xd875544 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd87554c loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd875554 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd87555c stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd875564 loads 4 bytes from [ret(0xd874c00)+8] +0x4.
  The `sb` at 0xd875568 stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd87557c loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd875588 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd8754e8 calls (unnamed) [0xd874c00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd875514 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875580 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x4, a2=[[ret(0xd874c00)+8]+4], a3=[a0+96]+1, a4=[a0+108]+4, a5=0x1.
  The `jalr` at 0xd875594 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8755b8 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8755d4 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b68], a2=?, a3=?.
  The `beq` branch at 0xd8754f0 targets 0xd8755c8, is taken when v0(=ret(0xd874c00)) == 0, and falls through when v0(=ret(0xd874c00)) != 0.
  The `beq` branch at 0xd8754fc targets 0xd8755cc, is taken when at(=[ret(0xd874c00)+8]) == 0, and falls through when at(=[ret(0xd874c00)+8]) != 0.
  The `beq` branch at 0xd875508 targets 0xd87551c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd87552c targets 0xd8755b8, is taken when v0(=[a0+112]) < v1(=[a0+108]+4) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd875574 targets 0xd875588, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd87558c targets 0xd8755a0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8755c0 targets 0xd875534 and is always taken.
  The return at 0xd8755b0 has v0 = 0x1.
  The return at 0xd8755ec has v0 = 0x0.

- `DPMSDisable` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd875600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd875600-0xd875734 (308 bytes).
  It occupies 308 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd874c00) +0x8, including `lw` at 0xd875638, `lw` at 0xd8756a0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd875644, `lw` at 0xd8756b0.
  The `lw` at 0xd875650 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd87565c, `lw` at 0xd875688, `lw` at 0xd875704.
  The `lw` at 0xd875660 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd875674 stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd87567c, `sb` at 0xd8756ac.
  The `sh` at 0xd875684 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd87568c loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd875694 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd87569c stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd8756a4 loads 4 bytes from [ret(0xd874c00)+8] +0x4.
  The `sb` at 0xd8756a8 stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd8756bc loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd8756c8 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd875628 calls (unnamed) [0xd874c00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd875654 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8756c0 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x5, a2=[[ret(0xd874c00)+8]+4], a3=[a0+96]+1, a4=[a0+108]+4, a5=0x1.
  The `jalr` at 0xd8756d4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8756f8 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875714 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b68], a2=?, a3=?.
  The `beq` branch at 0xd875630 targets 0xd875708, is taken when v0(=ret(0xd874c00)) == 0, and falls through when v0(=ret(0xd874c00)) != 0.
  The `beq` branch at 0xd87563c targets 0xd87570c, is taken when at(=[ret(0xd874c00)+8]) == 0, and falls through when at(=[ret(0xd874c00)+8]) != 0.
  The `beq` branch at 0xd875648 targets 0xd87565c, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd87566c targets 0xd8756f8, is taken when v0(=[a0+112]) < v1(=[a0+108]+4) (unsigned), and falls through when v0(=[a0+112]) >= v1(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd8756b4 targets 0xd8756c8, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd8756cc targets 0xd8756e0, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd875700 targets 0xd875674 and is always taken.
  The return at 0xd8756f0 has v0 = 0x1.
  The return at 0xd87572c has v0 = 0x0.

- `DPMSForceLevel` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd875740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd875740-0xd8758d8 (408 bytes).
  It occupies 408 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd874c00) +0x8, including `lw` at 0xd87578c, `lw` at 0xd875834.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd8757d8, `lw` at 0xd875848.
  The `lw` at 0xd8757e4 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd8757f4, `lw` at 0xd87581c, `lw` at 0xd8758d4.
  The `lw` at 0xd8757f8 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd87580c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd875814, `sb` at 0xd875844.
  The `sh` at 0xd875818 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd875820 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd875828 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd875830 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd875838 loads 4 bytes from [ret(0xd874c00)+8] +0x4.
  The `sb` at 0xd87583c stores 1 byte to [a0+108] +0x1.
  The `sh` at 0xd875840 stores 2 bytes to [a0+108] +0x4.
  The `lw` at 0xd875854 loads 4 bytes from [a0+1232] +0x4.
  The `lw` at 0xd875860 loads 4 bytes from a0 (arg0 at entry) +0x7c.
  The `bgezall` at 0xd875770 calls (unnamed) [0xd874c00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd8757e8 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x2, a2=?, a3=?.
  The `jalr` at 0xd875858 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x2, a2=?, a3=0x6, a4=[[ret(0xd874c00)+8]+4], a5=[a0+96]+1, a6=[a0+108]+8.
  The `jalr` at 0xd87586c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8758a0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b68], a2=?, a3=?.
  The `jalr` at 0xd8758c4 calls _XFlush with a0=a0 at entry (arg0), a1=0x2, a2=[a0+108]+8, a3=?.
  The `beq` branch at 0xd875784 targets 0xd875894, is taken when v0(=ret(0xd874c00)) == 0, and falls through when v0(=ret(0xd874c00)) != 0.
  The `beq` branch at 0xd875790 targets 0xd875898, is taken when at(=[ret(0xd874c00)+8]) == 0, and falls through when at(=[ret(0xd874c00)+8]) != 0.
  The `beq` branch at 0xd875798 targets 0xd8757d4, is taken when s1(=a1) == 0, and falls through when s1(=a1) != 0.
  The `beq` branch at 0xd8757a0 targets 0xd8757d8, is taken when s1(=a1) == v0(=0x1), and falls through when s1(=a1) != v0(=0x1).
  The `beq` branch at 0xd8757a8 targets 0xd8757d8, is taken when s1(=a1) == a1(=0x2), and falls through when s1(=a1) != a1(=0x2).
  The `beq` branch at 0xd8757b0 targets 0xd8757d8, is taken when s1(=a1) == a0(=0x3), and falls through when s1(=a1) != a0(=0x3).
  The `beq` branch at 0xd8757dc targets 0xd8757f4, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd875804 targets 0xd8758c4, is taken when v1(=[a0+112]) < a2(=[a0+108]+8) (unsigned), and falls through when v1(=[a0+112]) >= a2(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd87584c targets 0xd875860, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd875864 targets 0xd875878, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd8758d0 targets 0xd87580c and is always taken.
  The return at 0xd8757cc has v0 = 0x2.
  The return at 0xd87588c has v0 = 0x1.
  The return at 0xd8758bc has v0 = 0x0.

- `DPMSInfo` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd875900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd875900-0xd875ab0 (432 bytes).
  It occupies 432 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd874c00) +0x8, including `lw` at 0xd875940, `lw` at 0xd8759a8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd87594c, `lw` at 0xd8759d0.
  The `lw` at 0xd875958 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd875964, `lw` at 0xd875990, `lw` at 0xd875a3c.
  The `lw` at 0xd875968 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd87597c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd875984, `sb` at 0xd8759c8.
  The `sh` at 0xd87598c stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd875994 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd87599c stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd8759a4 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd8759b0 loads 4 bytes from [ret(0xd874c00)+8] +0x4.
  The `sb` at 0xd8759bc stores 1 byte to [a0+108] +0x1.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd8759dc, `lw` at 0xd875a48.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd8759e8, `lw` at 0xd875a54.
  The `sh` at 0xd875a18 stores 2 bytes to a1 (arg1 at entry) +0x0.
  The `sb` at 0xd875a24 stores 1 byte to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0xd875930 calls (unnamed) [0xd874c00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd87595c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+1232].
  The `jalr` at 0xd8759c4 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0xd874c00)+8]+4], a5=0x7, a6=[a0+96]+1, a7=[a0+108]+4.
  The `jalr` at 0xd8759e0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+1232].
  The `jalr` at 0xd8759f4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875a30 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875a4c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+1232].
  The `jalr` at 0xd875a60 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875a90 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b68], a2=?, a3=?.
  The `beq` branch at 0xd875938 targets 0xd875a84, is taken when v0(=ret(0xd874c00)) == 0, and falls through when v0(=ret(0xd874c00)) != 0.
  The `beq` branch at 0xd875944 targets 0xd875a88, is taken when at(=[ret(0xd874c00)+8]) == 0, and falls through when at(=[ret(0xd874c00)+8]) != 0.
  The `beq` branch at 0xd875950 targets 0xd875964, is taken when a5(=[a0+1232]) == 0, and falls through when a5(=[a0+1232]) != 0.
  The `bne` branch at 0xd875974 targets 0xd875a30, is taken when v1(=[a0+112]) < a0(=[a0+108]+4) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd8759cc targets 0xd875a40, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd8759d4 targets 0xd8759e8, is taken when a5(=[a0+1232]) == 0, and falls through when a5(=[a0+1232]) != 0.
  The `beq` branch at 0xd8759ec targets 0xd875a00, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd875a38 targets 0xd87597c and is always taken.
  The `beq` branch at 0xd875a40 targets 0xd875a54, is taken when a5(=[a0+1232]) == 0, and falls through when a5(=[a0+1232]) != 0.
  The `beq` branch at 0xd875a58 targets 0xd875a6c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd875a28 has v0 = 0x1.
  The return at 0xd875a7c has v0 = 0x0.
  The return at 0xd875aa8 has v0 = 0x0.

- `XeviQueryExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd875b80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd875b80-0xd875be0 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0xd875bb4 loads 4 bytes from ret(0xd875ac0) +0x8.
  The `bgezall` at 0xd875ba0 calls (unnamed) [0xd875ac0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0xd875bac targets 0xd875bcc, is taken when v0(=ret(0xd875ac0)) == 0, and falls through when v0(=ret(0xd875ac0)) != 0.
  The `beq` branch at 0xd875bb8 targets 0xd875bcc, is taken when at(=[ret(0xd875ac0)+8]) == 0, and falls through when at(=[ret(0xd875ac0)+8]) != 0.
  The return at 0xd875bc4 has v0 = 0x1.
  The return at 0xd875bd8 has v0 = 0x0.

- `XeviQueryVersion` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd875c00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd875c00-0xd875db4 (436 bytes).
  It occupies 436 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd875ac0) +0x8, including `lw` at 0xd875c40, `lw` at 0xd875ca4.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd875c4c, `lw` at 0xd875ce8, `lw` at 0xd875d40.
  The `lw` at 0xd875c58 loads 4 bytes from [a0+1232] +0x0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd875c64, `lw` at 0xd875c8c, `lw` at 0xd875d3c.
  The `lw` at 0xd875c68 loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sw` at 0xd875c7c stores 4 bytes to a0 (arg0 at entry) +0x64.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd875c80, `sb` at 0xd875cc8.
  The `sh` at 0xd875c88 stores 2 bytes to [a0+108] +0x2.
  The `lw` at 0xd875c90 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd875c98 stores 4 bytes to a0 (arg0 at entry) +0x6c.
  The `sw` at 0xd875ca0 stores 4 bytes to a0 (arg0 at entry) +0x60.
  The `lw` at 0xd875cb0 loads 4 bytes from [ret(0xd875ac0)+8] +0x4.
  The `sb` at 0xd875cbc stores 1 byte to [a0+108] +0x1.
  The `sw` at 0xd875cdc stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0xd875ce4 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd875cf4, `lw` at 0xd875d4c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd875d00, `lw` at 0xd875d58.
  The `bgezall` at 0xd875c30 calls (unnamed) [0xd875ac0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd875c5c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875cc4 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(0xd875ac0)+8]+4], a5=[a0+96]+1, a6=[a0+108]+4, a7=0x1.
  The `jalr` at 0xd875cf8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875d0c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875d30 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875d50 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875d64 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875d94 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b6c], a2=?, a3=?.
  The `beq` branch at 0xd875c38 targets 0xd875d88, is taken when v0(=ret(0xd875ac0)) == 0, and falls through when v0(=ret(0xd875ac0)) != 0.
  The `beq` branch at 0xd875c44 targets 0xd875d8c, is taken when at(=[ret(0xd875ac0)+8]) == 0, and falls through when at(=[ret(0xd875ac0)+8]) != 0.
  The `beq` branch at 0xd875c50 targets 0xd875c64, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `bne` branch at 0xd875c74 targets 0xd875d30, is taken when v1(=[a0+112]) < a0(=[a0+108]+4) (unsigned), and falls through when v1(=[a0+112]) >= a0(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd875ccc targets 0xd875d40, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0xd875cec targets 0xd875d00, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd875d04 targets 0xd875d18, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd875d38 targets 0xd875c7c and is always taken.
  The `beq` branch at 0xd875d44 targets 0xd875d58, is taken when v0(=[a0+1232]) == 0, and falls through when v0(=[a0+1232]) != 0.
  The `beq` branch at 0xd875d5c targets 0xd875d70, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The return at 0xd875d28 has v0 = 0x1.
  The return at 0xd875d80 has v0 = 0x0.
  The return at 0xd875dac has v0 = 0x0.

- `notInList` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd875dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd875dc0-0xd875df4 (52 bytes).
  It occupies 52 bytes.
  The `lw` at 0xd875dd0 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0xd875de0 loads 4 bytes from ?.
  The `blez` branch at 0xd875dc0 targets 0xd875de4, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `beq` branch at 0xd875dd4 targets 0xd875dec, is taken when a6(?) == a2, and falls through when a6(?) != a2.
  The `bnel` branch at 0xd875ddc targets 0xd875dd4, is taken when a0(?) != a5(=((a1 << 0x2) + a0)), and falls through when a0(?) == a5(=((a1 << 0x2) + a0)); its branch-likely delay slot `lw a6,0(a0)` at 0xd875de0 runs only when taken and is annulled on fall-through.
  The return at 0xd875de4 has v0 = 0x1.
  The return at 0xd875dec has v0 = 0x0.

- `XeviGetVisualInfo` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd875e00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER32/libGL.so`.
  Range: 0xd875e00-0xd87686c (2668 bytes).
  It occupies 2668 bytes.
  2 such `lw` accesses load 4 bytes from ret(0xd875ac0) +0x8, including `lw` at 0xd875e50, `lw` at 0xd876040.
  2 such `sw` accesses store 4 bytes to a4 (arg4 at entry) +0x0, including `sw` at 0xd875e70, `sw` at 0xd8766f4.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0xd875e7c, `sw` at 0xd876330.
  42 such `lw` accesses load 4 bytes from ?, including `lw` at 0xd875ec0, `lw` at 0xd875ed4, `lw` at 0xd875f94.
  The `lw` at 0xd875ec4 loads 4 bytes from ret(XGetVisualInfo) +0x4.
  71 such `sw` accesses store 4 bytes to ?, including `sw` at 0xd875fb4, `sw` at 0xd876154, `sw` at 0xd876170.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4d0, including `lw` at 0xd875fe4, `lw` at 0xd876290, `lw` at 0xd8763a0.
  The `lw` at 0xd875ff0 loads 4 bytes from [a0+1232] +0x0.
  9 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x6c, including `lw` at 0xd875ffc, `lw` at 0xd87602c, `lw` at 0xd8760b4.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0xd876000, `lw` at 0xd8760b8, `lw` at 0xd876210.
  The `sw` at 0xd876014 stores 4 bytes to a0 (arg0 at entry) +0x64.
  4 such `sh` accesses store 2 bytes to [a0+108] +0x2, including `sh` at 0xd87601c, `sh` at 0xd876088, `sh` at 0xd876208.
  2 such `sb` accesses store 1 byte to [a0+108] +0x0, including `sb` at 0xd876024, `sb` at 0xd876068.
  The `lw` at 0xd876028 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0xd876034 stores 4 bytes to a0 (arg0 at entry) +0x60.
  3 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x6c, including `sw` at 0xd87603c, `sw` at 0xd8760f0, `sw` at 0xd876254.
  The `lhu` at 0xd876044 loads 2 bytes from [a0+108] +0x2.
  The `lw` at 0xd876048 loads 4 bytes from [ret(0xd875ac0)+8] +0x4.
  2 such `sw` accesses store 4 bytes to [a0+108] +0x4, including `sw` at 0xd876054, `sw` at 0xd8760b0.
  The `sb` at 0xd87605c stores 1 byte to [a0+108] +0x1.
  The `lw` at 0xd87606c loads 4 bytes from a0 (arg0 at entry) +0x4cc.
  The `lw` at 0xd876094 loads 4 bytes from ([a0+108] + ([[a0+108]+2]:2-1 << 0x2)) +0x0.
  3 such `lw` accesses load 4 bytes from [a0+1232] +0x4, including `lw` at 0xd87629c, `lw` at 0xd8763ac, `lw` at 0xd876468.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c, including `lw` at 0xd8762a8, `lw` at 0xd8763b8, `lw` at 0xd876474.
  The `lw` at 0xd876368 loads 4 bytes from a3 (arg3 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from ret(malloc) +0x0, including `lw` at 0xd8764b8, `lw` at 0xd876800.
  2 such `lb` accesses load 1 byte from ret(malloc) +0x4, including `lb` at 0xd8764c0, `lb` at 0xd876808.
  2 such `lb` accesses load 1 byte from ret(malloc) +0x5, including `lb` at 0xd8764c8, `lb` at 0xd876810.
  2 such `lbu` accesses load 1 byte from ret(malloc) +0x6, including `lbu` at 0xd8764d0, `lbu` at 0xd876818.
  2 such `lw` accesses load 4 bytes from ret(malloc) +0x8, including `lw` at 0xd8764d8, `lw` at 0xd876820.
  2 such `lbu` accesses load 1 byte from ret(malloc) +0xc, including `lbu` at 0xd8764e0, `lbu` at 0xd876828.
  2 such `lbu` accesses load 1 byte from ret(malloc) +0xd, including `lbu` at 0xd8764e8, `lbu` at 0xd876830.
  2 such `lhu` accesses load 2 bytes from ret(malloc) +0xe, including `lhu` at 0xd8764f4, `lhu` at 0xd876838.
  4 such `lb` accesses load 1 byte from ?, including `lb` at 0xd87651c, `lb` at 0xd876524, `lb` at 0xd876574.
  6 such `lbu` accesses load 1 byte from ?, including `lbu` at 0xd87652c, `lbu` at 0xd87653c, `lbu` at 0xd876544.
  2 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0xd876554, `lhu` at 0xd8765ac.
  The `bgezall` at 0xd875e40 calls (unnamed) [0xd875ac0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd875e78 calls XGetVisualInfo with a0=a0 at entry (arg0), a1=0x0, a2=0x0, a3=sp-192.
  The `jalr` at 0xd875edc calls XFree with a0=ret(XGetVisualInfo), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875f18 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0xd882b6c], a2=?, a3=?.
  The `jalr` at 0xd875f54 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0xd875f98 calls notInList [0xd875dc0] with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875fdc calls XFree with a0=ret(XGetVisualInfo), a1=?, a2=?, a3=?.
  The `jalr` at 0xd875ff4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87609c calls memmove with a0=[a0+108]+8, a1=[a0+108]+4, a2=([[a0+108]+2]:2-1 << 0x2), a3=0x1, a4=[a0+108]+8, a5=0x2, a6=[a0+1228], a7=[([a0+108] + ([[a0+108]+2]:2-1 << 0x2))].
  The `jalr` at 0xd8760d8 calls memcpy with a0=[a0+108], a1=sp-188, a2=0x4, a3=?, a4=[a0+108]+4.
  The `jalr` at 0xd87610c calls malloc with a0=(a2 << 0x2), a1=?, a2=?, a3=?.
  The `jalr` at 0xd876234 calls memcpy with a0=?, a1=ret(malloc), a2=?, a3=?.
  The `jalr` at 0xd876268 calls _XSend with a0=a0 at entry (arg0), a1=ret(malloc), a2=?, a3=?.
  The `jalr` at 0xd876280 calls _XReply with a0=a0 at entry (arg0), a1=sp-184, a2=0x0, a3=0x0.
  The `jalr` at 0xd8762a0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8762b4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8762c4 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8762f0 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0xd876328 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd876348 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd876360 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd876398 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=-0x4, a3=?, a6=[a3].
  The `jalr` at 0xd8763b0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8763c4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd876440 calls _XRead with a0=a0 at entry (arg0), a1=ret(malloc), a2=?, a3=?, a6=[a3].
  The `jalr` at 0xd876454 calls _XRead with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd87646c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd876480 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8766c0 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8766cc calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0xd876728 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0xd876748 calls _XSend with a0=a0 at entry (arg0), a1=sp-188, a2=0x4, a3=?, a4=[a0+108]+4.
  The `jalr` at 0xd876780 calls free with a0=a3 at entry (arg3), a1=?, a2=?, a3=?.
  The `jalr` at 0xd876794 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0xd8767a8 calls free with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0xd875e48 targets 0xd875f0c, is taken when v0(=ret(0xd875ac0)) == 0, and falls through when v0(=ret(0xd875ac0)) != 0.
  The `beq` branch at 0xd875e54 targets 0xd875f0c, is taken when at(=[ret(0xd875ac0)+8]) == 0, and falls through when at(=[ret(0xd875ac0)+8]) != 0.
  The `beq` branch at 0xd875e80 targets 0xd876408, is taken when v0(=ret(XGetVisualInfo)) == 0, and falls through when v0(=ret(XGetVisualInfo)) != 0.
  The `beq` branch at 0xd875e88 targets 0xd875f40, is taken when s1(=a2) == 0, and falls through when s1(=a2) != 0.
  The `beq` branch at 0xd875e90 targets 0xd875f44, is taken when v1(=a1) == 0, and falls through when v1(=a1) != 0.
  The `blez` branch at 0xd875e98 targets 0xd876100, is taken when s1(=a2) <= 0 (signed), and falls through when s1(=a2) > 0 (signed).
  The `blez` branch at 0xd875eb8 targets 0xd875ed8, is taken when a2(?) <= 0 (signed), and falls through when a2(?) > 0 (signed).
  The `beq` branch at 0xd875ec8 targets 0xd8760f4, is taken when t2(?) == t0(?), and falls through when t2(?) != t0(?).
  The `bnel` branch at 0xd875ed0 targets 0xd875ec8, is taken when v1(?) != t1(?), and falls through when v1(?) == t1(?); its branch-likely delay slot `lw t2,4(v1)` at 0xd875ed4 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0xd875f44 targets 0xd876764, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `blez` branch at 0xd875f64 targets 0xd87675c, is taken when t3(?) <= 0 (signed), and falls through when t3(?) > 0 (signed).
  The `beq` branch at 0xd875fa0 targets 0xd875fbc, is taken when v0(=ret(notInList)) == 0, and falls through when v0(=ret(notInList)) != 0.
  The `bne` branch at 0xd875fc4 targets 0xd875f8c, is taken when s3(?) < t9(?) (signed), and falls through when s3(?) >= t9(?) (signed).
  The `beq` branch at 0xd875fe8 targets 0xd875ffc, is taken when v1(=[a0+1232]) == 0, and falls through when v1(=[a0+1232]) != 0.
  The `bne` branch at 0xd87600c targets 0xd876728, is taken when ra(=[a0+112]) < at(=[a0+108]+8) (unsigned), and falls through when ra(=[a0+112]) >= at(=[a0+108]+8) (unsigned).
  The `beq` branch at 0xd876064 targets 0xd876200, is taken when a2(=0xffff) >= a0(?) (unsigned), and falls through when a2(=0xffff) < a0(?) (unsigned).
  The `beq` branch at 0xd876070 targets 0xd876700, is taken when a6(=[a0+1228]) == 0, and falls through when a6(=[a0+1228]) != 0.
  The `bne` branch at 0xd8760c4 targets 0xd876740, is taken when a3(=[a0+112]) < a4(=[a0+108]+4) (unsigned), and falls through when a3(=[a0+112]) >= a4(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd8760ec targets 0xd876210 and is always taken.
  The `bne` branch at 0xd8760f8 targets 0xd875eb8, is taken when a0(?) != s1(=a2), and falls through when a0(?) == s1(=a2).
  The `blez` branch at 0xd876118 targets 0xd875fd8, is taken when s1(=a2) <= 0 (signed), and falls through when s1(=a2) > 0 (signed).
  The `beq` branch at 0xd876138 targets 0xd876158, is taken when (s1(=a2) & 0x3) == 0, and falls through when (s1(=a2) & 0x3) != 0.
  The `bne` branch at 0xd876150 targets 0xd876140, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0xd87615c targets 0xd8761ec, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0xd876164 targets 0xd8767d0, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `beq` branch at 0xd8761b4 targets 0xd8767c8, is taken when a1(?) == at(?), and falls through when a1(?) != at(?).
  The `bne` branch at 0xd8761e0 targets 0xd876190, is taken when a1(?) != at(?), and falls through when a1(?) == at(?).
  The `beq` branch at 0xd8761ec targets 0xd875fd8 and is always taken.
  The `bne` branch at 0xd876220 targets 0xd876260, is taken when at(=[a0+112]) < a0(?) (unsigned), and falls through when at(=[a0+112]) >= a0(?) (unsigned).
  The `beq` branch at 0xd876250 targets 0xd876270 and is always taken.
  The `bne` branch at 0xd876288 targets 0xd8762f0, is taken when v0(=ret(_XReply)) != 0, and falls through when v0(=ret(_XReply)) == 0.
  The `beq` branch at 0xd876294 targets 0xd8762a8, is taken when v1(=[a0+1232]) == 0, and falls through when v1(=[a0+1232]) != 0.
  The `beq` branch at 0xd8762ac targets 0xd8762bc, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `beq` branch at 0xd87631c targets 0xd8767b8, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0xd876338 targets 0xd876344, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0xd876350 targets 0xd8767c0, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0xd876370 targets 0xd876384, is taken when a6(=[a3]) == 0, and falls through when a6(=[a3]) != 0.
  The `beq` branch at 0xd876378 targets 0xd876388, is taken when s1(=ret(malloc)) == 0, and falls through when s1(=ret(malloc)) != 0.
  The `bne` branch at 0xd876380 targets 0xd876430, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0xd8763a4 targets 0xd8763b8, is taken when v1(=[a0+1232]) == 0, and falls through when v1(=[a0+1232]) != 0.
  The `beq` branch at 0xd8763bc targets 0xd8763cc, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `bne` branch at 0xd8763cc targets 0xd876780, is taken when s0(=a3) != 0, and falls through when s0(=a3) == 0.
  The `bne` branch at 0xd8763d4 targets 0xd876790, is taken when s1(=ret(malloc)) != 0, and falls through when s1(=ret(malloc)) == 0.
  The `bne` branch at 0xd8763dc targets 0xd8767a4, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0xd876460 targets 0xd876474, is taken when v1(=[a0+1232]) == 0, and falls through when v1(=[a0+1232]) != 0.
  The `beq` branch at 0xd876478 targets 0xd87648c, is taken when t9(=[a0+124]) == 0, and falls through when t9(=[a0+124]) != 0.
  The `blez` branch at 0xd87649c targets 0xd8765c4, is taken when t1(?) <= 0 (signed), and falls through when t1(?) > 0 (signed).
  The `bne` branch at 0xd8764b0 targets 0xd876800, is taken when t1(?) < 0x2 (signed), and falls through when t1(?) >= 0x2 (signed).
  The `beq` branch at 0xd87655c targets 0xd876774, is taken when a4(?) == at(?), and falls through when a4(?) != at(?).
  The `bne` branch at 0xd8765b4 targets 0xd87650c, is taken when a4(?) != at(?), and falls through when a4(?) == at(?).
  The `blez` branch at 0xd8765c8 targets 0xd8766b8, is taken when t0(?) <= 0 (signed), and falls through when t0(?) > 0 (signed).
  The `beq` branch at 0xd8765e0 targets 0xd8765ec, is taken when t1(?) >= 0 (signed), and falls through when t1(?) < 0 (signed).
  The `beq` branch at 0xd876604 targets 0xd876624, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `bne` branch at 0xd87661c targets 0xd87660c, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `beq` branch at 0xd876628 targets 0xd8766b8, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0xd876630 targets 0xd876848, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0xd876680 targets 0xd87676c, is taken when a1(?) == at(?), and falls through when a1(?) != at(?).
  The `bne` branch at 0xd8766ac targets 0xd87665c, is taken when a1(?) != at(?), and falls through when a1(?) == at(?).
  The `bne` branch at 0xd876718 targets 0xd876258, is taken when t8(=[a0+112]) < t9(=[a0+108]+4) (unsigned), and falls through when t8(=[a0+112]) >= t9(=[a0+108]+4) (unsigned).
  The `beq` branch at 0xd876720 targets 0xd876228 and is always taken.
  The `beq` branch at 0xd876730 targets 0xd876014 and is always taken.
  The `beq` branch at 0xd876754 targets 0xd876210 and is always taken.
  The `beq` branch at 0xd87675c targets 0xd875fd8 and is always taken.
  The `beq` branch at 0xd876764 targets 0xd875f4c and is always taken.
  The `beq` branch at 0xd87676c targets 0xd8766b4 and is always taken.
  The `beq` branch at 0xd876774 targets 0xd8765c0 and is always taken.
  The `beq` branch at 0xd876788 targets 0xd8763d4 and is always taken.
  The `beq` branch at 0xd87679c targets 0xd8763dc and is always taken.
  The `beq` branch at 0xd8767b0 targets 0xd8763e4 and is always taken.
  The `beq` branch at 0xd8767b8 targets 0xd876324 and is always taken.
  The `beq` branch at 0xd8767c0 targets 0xd87635c and is always taken.
  The `beq` branch at 0xd8767c8 targets 0xd8761e8 and is always taken.
  The `beq` branch at 0xd8767ec targets 0xd8761ec and is always taken.
  The `beq` branch at 0xd876840 targets 0xd8765c4 and is always taken.
  The `beq` branch at 0xd876864 targets 0xd8766b8 and is always taken.
  The return at 0xd875f04 has v0 = 0x2.
  The return at 0xd875f38 has v0 = 0x0.
  The return at 0xd8762e8 has v0 = 0xa.
  The return at 0xd876400 has v0 = 0xb.
  The return at 0xd876428 has v0 = 0x2.
  The return at 0xd8766f8 has v0 = 0x0.
  The instructions from 0xd8761f4 to 0xd8761fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd876738 to 0xd87673c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd87677c to 0xd87677c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd8767f4 to 0xd8767fc are not reached by any path from the entry, and their branches are not listed.
