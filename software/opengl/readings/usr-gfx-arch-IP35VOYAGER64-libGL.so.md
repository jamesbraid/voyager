# Readings: `usr/gfx/arch/IP35VOYAGER64/libGL.so`

One entry per routine, filed here from the reading batches by binary.

- `__glFreeAttributeState` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21662b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21662b0-0x216633c (140 bytes).
  It occupies 140 bytes.
  The `ld` at 0x21662f0 loads 8 bytes from ?.
  The `jalr` at 0x21662fc calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x21662f4 targets 0x2166320, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x2166314 targets 0x21662f0, is taken when s1(?) < s2(=a0+1856) (unsigned), and falls through when s1(?) >= s2(=a0+1856) (unsigned).
  The return at 0x2166334 has v0 = one of ?, ret(XFree).

- `__glFogiv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2166340 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2166340-0x21663c0 (128 bytes).
  It occupies 128 bytes.
  The `beq` branch at 0x2166358 targets 0x2166398, is taken when a0 == at(=0xb66), and falls through when a0 != at(=0xb66).
  The `beq` branch at 0x2166360 targets 0x21663a0, is taken when a0 == a2(=0xb62), and falls through when a0 != a2(=0xb62).
  The `beq` branch at 0x2166368 targets 0x21663a8, is taken when a0 == a3(=0xb64), and falls through when a0 != a3(=0xb64).
  The `beq` branch at 0x2166370 targets 0x21663b0, is taken when a0 == a4(=0xb65), and falls through when a0 != a4(=0xb65).
  The `beq` branch at 0x2166378 targets 0x21663b8, is taken when a0 == a5(=0xb61), and falls through when a0 != a5(=0xb61).
  The `beq` branch at 0x2166380 targets 0x2166390, is taken when a0 == a6(=0xb63), and falls through when a0 != a6(=0xb63).
  The return at 0x2166388 has v0 = 0x0.
  The return at 0x2166390 has v0 = 0x1.
  The return at 0x2166398 has v0 = 0x4.
  The return at 0x21663a0 has v0 = 0x1.
  The return at 0x21663a8 has v0 = 0x1.
  The return at 0x21663b0 has v0 = 0x1.
  The return at 0x21663b8 has v0 = 0x1.

- `__glFogfv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21663c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21663c0-0x21663f4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x21663dc calls __glFogiv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x21663ec has v0 = ret(__glFogiv_size).

- `__glCallLists_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2166400 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2166400-0x21664b0 (176 bytes).
  It occupies 176 bytes.
  The `ld` at 0x216641c loads 8 bytes from abs 0x21bcd58.
  The `ld` at 0x2166438 loads 8 bytes from table(0x21b0010) +0x0.
  The `bltz` branch at 0x2166408 targets 0x2166460, is taken when a0 < 0 (signed), and falls through when a0 >= 0 (signed).
  The `beq` branch at 0x2166430 targets 0x2166444, is taken when a6(?) >= 0xa (unsigned), and falls through when a6(?) < 0xa (unsigned).
  The `beq` branch at 0x2166468 targets 0x2166450 and is always taken.
  The `beq` branch at 0x2166470 targets 0x2166450 and is always taken.
  The `beq` branch at 0x2166478 targets 0x2166450 and is always taken.
  The `beq` branch at 0x2166480 targets 0x2166450 and is always taken.
  The `beq` branch at 0x2166488 targets 0x2166450 and is always taken.
  The `beq` branch at 0x2166490 targets 0x2166450 and is always taken.
  The `beq` branch at 0x2166498 targets 0x2166450 and is always taken.
  The `beq` branch at 0x21664a0 targets 0x2166450 and is always taken.
  The `beq` branch at 0x21664a8 targets 0x2166450 and is always taken.
  The return at 0x2166444 has v0 = 0x0.
  The return at 0x2166458 has v0 = ?.
  The return at 0x2166460 has v0 = 0x0.
  The indirect jump at 0x216643c uses the jump table at 0x21b0010 with targets 0x2166468, 0x216644c, 0x21664a8, 0x21664a0, 0x2166498, 0x2166490, 0x2166488, 0x2166480, 0x2166478, 0x2166470.

- `__glDrawPixels_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21664b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21664b0-0x21667d8 (808 bytes).
  It occupies 808 bytes.
  The `bne` branch at 0x21664b4 targets 0x2166500, is taken when a0 < 0x1906 (unsigned), and falls through when a0 >= 0x1906 (unsigned).
  The `bne` branch at 0x21664bc targets 0x2166528, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x21664c8 targets 0x2166664, is taken when a0 < 0x1909 (unsigned), and falls through when a0 >= 0x1909 (unsigned).
  The `bne` branch at 0x21664d4 targets 0x2166528, is taken when a0 < 0x190a (unsigned), and falls through when a0 >= 0x190a (unsigned).
  The `bne` branch at 0x21664e4 targets 0x2166764, is taken when a0 < a5(=0x8000) (unsigned), and falls through when a0 >= a5(=0x8000) (unsigned).
  The `beq` branch at 0x21664ec targets 0x2166674, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x21664f4 targets 0x216661c and is always taken.
  The `bne` branch at 0x2166504 targets 0x2166600, is taken when a0 < 0x1903 (unsigned), and falls through when a0 >= 0x1903 (unsigned).
  The `bne` branch at 0x2166510 targets 0x2166524, is taken when a0 < 0x1904 (unsigned), and falls through when a0 >= 0x1904 (unsigned).
  The `bne` branch at 0x2166518 targets 0x2166700, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `beq` branch at 0x2166520 targets 0x216661c, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0x2166530 targets 0x2166588, is taken when a1 < a5(=0x8034) (unsigned), and falls through when a1 >= a5(=0x8034) (unsigned).
  The `beq` branch at 0x2166538 targets 0x21665c8, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x2166548 targets 0x2166680, is taken when a1 < a0(=0x8364) (unsigned), and falls through when a1 >= a0(=0x8364) (unsigned).
  The `beq` branch at 0x2166550 targets 0x21665c8, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0x2166564 targets 0x2166778, is taken when a1 < a5(=0x8367) (unsigned), and falls through when a1 >= a5(=0x8367) (unsigned).
  The `beq` branch at 0x2166570 targets 0x2166728, is taken when a5(=0x8367) >= a1 (unsigned), and falls through when a5(=0x8367) < a1 (unsigned).
  The `bne` branch at 0x2166578 targets 0x21666d8, is taken when a1 != a0(=0x8368), and falls through when a1 == a0(=0x8368).
  The `beq` branch at 0x2166580 targets 0x216672c and is always taken.
  The `bne` branch at 0x216658c targets 0x2166624, is taken when a1 < 0x1405 (unsigned), and falls through when a1 >= 0x1405 (unsigned).
  The `bne` branch at 0x2166594 targets 0x216664c, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x21665a0 targets 0x2166734, is taken when a1 < a5(=0x8032) (unsigned), and falls through when a1 >= a5(=0x8032) (unsigned).
  The `bne` branch at 0x21665ac targets 0x21665c0, is taken when a5(=0x8032) < a1 (unsigned), and falls through when a5(=0x8032) >= a1 (unsigned).
  The `beq` branch at 0x21665b8 targets 0x21665cc and is always taken.
  The `bne` branch at 0x21665c0 targets 0x21666d8, is taken when a1 != a0(=0x8033), and falls through when a1 == a0(=0x8033).
  The `bne` branch at 0x2166600 targets 0x2166654, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `bne` branch at 0x216660c targets 0x216665c, is taken when a0 < 0x1902 (unsigned), and falls through when a0 >= 0x1902 (unsigned).
  The `beq` branch at 0x2166614 targets 0x216665c, is taken when a0 == t9(=0x1902), and falls through when a0 != t9(=0x1902).
  The `bne` branch at 0x2166628 targets 0x21666a8, is taken when a1 < 0x1402 (unsigned), and falls through when a1 >= 0x1402 (unsigned).
  The `bne` branch at 0x2166634 targets 0x21666e8, is taken when a1 < 0x1403 (unsigned), and falls through when a1 >= 0x1403 (unsigned).
  The `bne` branch at 0x216663c targets 0x21666e0, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x2166644 targets 0x21666d8, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x216664c targets 0x21665cc and is always taken.
  The `bne` branch at 0x2166654 targets 0x216661c, is taken when a0 != v1(=0x1900), and falls through when a0 == v1(=0x1900).
  The `beq` branch at 0x216665c targets 0x2166528 and is always taken.
  The `bne` branch at 0x2166664 targets 0x21666f0, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x216666c targets 0x216661c, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x2166674 targets 0x2166528 and is always taken.
  The `bne` branch at 0x2166688 targets 0x2166710, is taken when a1 < a0(=0x8362) (unsigned), and falls through when a1 >= a0(=0x8362) (unsigned).
  The `beq` branch at 0x2166690 targets 0x21665b4, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bne` branch at 0x2166698 targets 0x21666d8, is taken when a1 != a5(=0x8363), and falls through when a1 == a5(=0x8363).
  The `beq` branch at 0x21666a0 targets 0x21665c8 and is always taken.
  The `bne` branch at 0x21666a8 targets 0x21666c0, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0x21666b0 targets 0x21666c8, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x21666b8 targets 0x21666d8 and is always taken.
  The `bne` branch at 0x21666c0 targets 0x21666d8, is taken when a1 != t0(=0x1400), and falls through when a1 == t0(=0x1400).
  The `beq` branch at 0x21666c8 targets 0x21665cc and is always taken.
  The `beq` branch at 0x21666d0 targets 0x216664c, is taken when a1 == a7(=0x1406), and falls through when a1 != a7(=0x1406).
  The `bne` branch at 0x21666e0 targets 0x21666d8, is taken when a1 != a0(=0x1403), and falls through when a1 == a0(=0x1403).
  The `beq` branch at 0x21666e8 targets 0x21665cc and is always taken.
  The `bne` branch at 0x21666f0 targets 0x216661c, is taken when a0 != t1(=0x1907), and falls through when a0 == t1(=0x1907).
  The `beq` branch at 0x21666f8 targets 0x216652c and is always taken.
  The `bne` branch at 0x2166700 targets 0x216661c, is taken when a0 != t2(=0x1904), and falls through when a0 == t2(=0x1904).
  The `beq` branch at 0x2166708 targets 0x2166528 and is always taken.
  The `bne` branch at 0x2166718 targets 0x2166794, is taken when a1 < a0(=0x8036) (unsigned), and falls through when a1 >= a0(=0x8036) (unsigned).
  The `bne` branch at 0x2166724 targets 0x21666d8, is taken when a0(=0x8036) < a1 (unsigned), and falls through when a0(=0x8036) >= a1 (unsigned).
  The `beq` branch at 0x216672c targets 0x21665cc and is always taken.
  The `bne` branch at 0x2166738 targets 0x21666d0, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `beq` branch at 0x2166740 targets 0x21666d8, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x2166748 targets 0x21667b8, is taken when a0 == at(=0x1900), and falls through when a0 != at(=0x1900).
  The `beq` branch at 0x2166754 targets 0x21667b8, is taken when a0 == v0(=0x1901), and falls through when a0 != v0(=0x1901).
  The `bne` branch at 0x2166768 targets 0x216661c, is taken when a0 != v1(=0x190a), and falls through when a0 == v1(=0x190a).
  The `beq` branch at 0x2166770 targets 0x2166528 and is always taken.
  The `bne` branch at 0x2166778 targets 0x21667a4, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x2166784 targets 0x21665c8, is taken when a6(=0x8366) >= a1 (unsigned), and falls through when a6(=0x8366) < a1 (unsigned).
  The `beq` branch at 0x216678c targets 0x21666d8 and is always taken.
  The `bne` branch at 0x2166794 targets 0x21666d8, is taken when a1 != a4(=0x8035), and falls through when a1 == a4(=0x8035).
  The `beq` branch at 0x216679c targets 0x216672c and is always taken.
  The `bne` branch at 0x21667a4 targets 0x21666d8, is taken when a1 != a5(=0x8365), and falls through when a1 == a5(=0x8365).
  The `beq` branch at 0x21667ac targets 0x21665c8 and is always taken.
  The return at 0x21665f4 has v0 = ?.
  The return at 0x216661c has v0 = 0x0.
  The return at 0x21666d8 has v0 = 0x0.
  The return at 0x216675c has v0 = 0x0.
  The return at 0x21667d0 has v0 = ?.
  The instructions from 0x21664fc to 0x21664fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x21665fc to 0x21665fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x216667c to 0x216667c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x21667b4 to 0x21667b4 are not reached by any path from the entry, and their branches are not listed.

- `__glBitmap_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21667e0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21667e0-0x2166820 (64 bytes).
  It occupies 64 bytes.
  The `jalr` at 0x2166808 calls __glDrawPixels_size with a0=0x1900, a1=0x1a00, a2=a0 at entry (arg0), a3=a1 at entry (arg1).
  The return at 0x2166818 has v0 = ret(__glDrawPixels_size).

- `__glTexGendv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2166820 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2166820-0x2166858 (56 bytes).
  It occupies 56 bytes.
  The `beq` branch at 0x2166828 targets 0x2166850, is taken when a0 == at(=0x2500), and falls through when a0 != at(=0x2500).
  The `beq` branch at 0x2166830 targets 0x2166848, is taken when a0 == a2(=0x2501), and falls through when a0 != a2(=0x2501).
  The `beq` branch at 0x2166838 targets 0x2166848, is taken when a0 == a3(=0x2502), and falls through when a0 != a3(=0x2502).
  The return at 0x2166840 has v0 = 0x0.
  The return at 0x2166848 has v0 = 0x4.
  The return at 0x2166850 has v0 = 0x1.

- `__glTexGenfv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2166860 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2166860-0x2166894 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x216687c calls __glTexGendv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x216688c has v0 = ret(__glTexGendv_size).

- `__glTexGeniv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21668a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21668a0-0x21668d4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x21668bc calls __glTexGendv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x21668cc has v0 = ret(__glTexGendv_size).

- `__glTexParameterfv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21668e0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21668e0-0x2166a04 (292 bytes).
  It occupies 292 bytes.
  The `bne` branch at 0x21668e8 targets 0x2166940, is taken when a0 < v0(=0x8066) (unsigned), and falls through when a0 >= v0(=0x8066) (unsigned).
  The `beq` branch at 0x21668f8 targets 0x21669c4, is taken when v0(=0x8066) >= a0 (unsigned), and falls through when v0(=0x8066) < a0 (unsigned).
  The `bne` branch at 0x2166910 targets 0x21669a8, is taken when a0 < a3(=0x813b) (unsigned), and falls through when a0 >= a3(=0x813b) (unsigned).
  The `beq` branch at 0x216691c targets 0x2166934, is taken when a3(=0x813b) >= a0 (unsigned), and falls through when a3(=0x813b) < a0 (unsigned).
  The `bne` branch at 0x2166924 targets 0x21669ec, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0x216692c targets 0x2166988, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0x2166950 targets 0x2166990, is taken when a0 < 0x2801 (unsigned), and falls through when a0 >= 0x2801 (unsigned).
  The `bne` branch at 0x216695c targets 0x2166974, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x2166964 targets 0x21669dc, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x216696c targets 0x2166988, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x2166980 targets 0x21669fc, is taken when a0 == a6(=0x1004), and falls through when a0 != a6(=0x1004).
  The `bne` branch at 0x2166990 targets 0x2166980, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x2166998 targets 0x2166988, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x21669a0 targets 0x2166974 and is always taken.
  The `bne` branch at 0x21669ac targets 0x21669cc, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x21669b4 targets 0x2166988, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x21669bc targets 0x2166934 and is always taken.
  The `bne` branch at 0x21669cc targets 0x2166988, is taken when a0 != a5(=0x8072), and falls through when a0 == a5(=0x8072).
  The `beq` branch at 0x21669d4 targets 0x2166974 and is always taken.
  The `bne` branch at 0x21669dc targets 0x2166988, is taken when a0 != a3(=0x2802), and falls through when a0 == a3(=0x2802).
  The `beq` branch at 0x21669e4 targets 0x2166974 and is always taken.
  The `bne` branch at 0x21669ec targets 0x2166988, is taken when a0 != a4(=0x813c), and falls through when a0 == a4(=0x813c).
  The `beq` branch at 0x21669f4 targets 0x2166934 and is always taken.
  The return at 0x2166934 has v0 = 0x1.
  The return at 0x2166974 has v0 = 0x1.
  The return at 0x2166988 has v0 = 0x0.
  The return at 0x21669c4 has v0 = 0x1.
  The return at 0x21669fc has v0 = 0x4.
  The instructions from 0x216693c to 0x216693c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x216697c to 0x216697c are not reached by any path from the entry, and their branches are not listed.

- `__glTexParameteriv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2166a10 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2166a10-0x2166a44 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x2166a2c calls __glTexParameterfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x2166a3c has v0 = ret(__glTexParameterfv_size).

- `__glTexEnvfv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2166a50 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2166a50-0x2166a80 (48 bytes).
  It occupies 48 bytes.
  The `beq` branch at 0x2166a58 targets 0x2166a78, is taken when a0 == at(=0x2200), and falls through when a0 != at(=0x2200).
  The `beq` branch at 0x2166a60 targets 0x2166a70, is taken when a0 == a2(=0x2201), and falls through when a0 != a2(=0x2201).
  The return at 0x2166a68 has v0 = 0x0.
  The return at 0x2166a70 has v0 = 0x4.
  The return at 0x2166a78 has v0 = 0x1.

- `__glTexEnviv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2166a80 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2166a80-0x2166ab4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x2166a9c calls __glTexEnvfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x2166aac has v0 = ret(__glTexEnvfv_size).

- `__glTexImage1D_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2166ac0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2166ac0-0x2166dac (748 bytes).
  It occupies 748 bytes.
  The `bltz` branch at 0x2166ac0 targets 0x2166cc0, is taken when a2 < 0 (signed), and falls through when a2 >= 0 (signed).
  The `bne` branch at 0x2166ac8 targets 0x2166ae4, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x2166ad4 targets 0x2166c14, is taken when a0 >= 0x1908 (unsigned), and falls through when a0 < 0x1908 (unsigned).
  The `beq` branch at 0x2166adc targets 0x2166b24 and is always taken.
  The `bne` branch at 0x2166ae4 targets 0x2166b14, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0x2166af0 targets 0x2166b24, is taken when a0 < 0x1905 (unsigned), and falls through when a0 >= 0x1905 (unsigned).
  The `bne` branch at 0x2166afc targets 0x2166c48, is taken when a0 < 0x1906 (unsigned), and falls through when a0 >= 0x1906 (unsigned).
  The `bne` branch at 0x2166b04 targets 0x2166b24, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x2166b0c targets 0x2166c50 and is always taken.
  The `bne` branch at 0x2166b14 targets 0x2166c58, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x2166b1c targets 0x2166c50, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x2166b2c targets 0x2166b84, is taken when a1 < a4(=0x8034) (unsigned), and falls through when a1 >= a4(=0x8034) (unsigned).
  The `beq` branch at 0x2166b34 targets 0x2166bc0, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0x2166b40 targets 0x2166c68, is taken when a1 < a0(=0x8364) (unsigned), and falls through when a1 >= a0(=0x8364) (unsigned).
  The `beq` branch at 0x2166b48 targets 0x2166bc4, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0x2166b60 targets 0x2166d4c, is taken when a1 < a4(=0x8367) (unsigned), and falls through when a1 >= a4(=0x8367) (unsigned).
  The `beq` branch at 0x2166b68 targets 0x2166d1c, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x2166b74 targets 0x2166c88, is taken when a1 != a5(=0x8368), and falls through when a1 == a5(=0x8368).
  The `beq` branch at 0x2166b7c targets 0x2166d1c and is always taken.
  The `bne` branch at 0x2166b88 targets 0x2166be8, is taken when a1 < 0x1405 (unsigned), and falls through when a1 >= 0x1405 (unsigned).
  The `bne` branch at 0x2166b90 targets 0x2166c0c, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0x2166b9c targets 0x2166d24, is taken when a1 < a4(=0x8032) (unsigned), and falls through when a1 >= a4(=0x8032) (unsigned).
  The `bne` branch at 0x2166ba4 targets 0x2166bb8, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `beq` branch at 0x2166bb0 targets 0x2166bc8 and is always taken.
  The `bne` branch at 0x2166bbc targets 0x2166c88, is taken when a1 != a0(=0x8033), and falls through when a1 == a0(=0x8033).
  The `bne` branch at 0x2166bec targets 0x2166c90, is taken when a1 < 0x1402 (unsigned), and falls through when a1 >= 0x1402 (unsigned).
  The `bne` branch at 0x2166bf4 targets 0x2166cd0, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x2166bfc targets 0x2166cc8, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `beq` branch at 0x2166c04 targets 0x2166c88, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x2166c0c targets 0x2166bc8 and is always taken.
  The `bne` branch at 0x2166c14 targets 0x2166c30, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x2166c20 targets 0x2166cd8, is taken when a0 >= 0x190b (unsigned), and falls through when a0 < 0x190b (unsigned).
  The `beq` branch at 0x2166c28 targets 0x2166b24 and is always taken.
  The `bne` branch at 0x2166c30 targets 0x2166ce8, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x2166c38 targets 0x2166b24, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x2166c40 targets 0x2166c50 and is always taken.
  The `beq` branch at 0x2166c48 targets 0x2166b24, is taken when a0 == at(=0x1905), and falls through when a0 != at(=0x1905).
  The `bne` branch at 0x2166c58 targets 0x2166c50, is taken when a0 != v0(=0x1900), and falls through when a0 == v0(=0x1900).
  The `beq` branch at 0x2166c60 targets 0x2166b24 and is always taken.
  The `bne` branch at 0x2166c70 targets 0x2166d00, is taken when a1 < a0(=0x8362) (unsigned), and falls through when a1 >= a0(=0x8362) (unsigned).
  The `beq` branch at 0x2166c78 targets 0x2166bac, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x2166c80 targets 0x2166bc4, is taken when a1 == a4(=0x8363), and falls through when a1 != a4(=0x8363).
  The `bne` branch at 0x2166c94 targets 0x2166cac, is taken when a1 < 0x1401 (unsigned), and falls through when a1 >= 0x1401 (unsigned).
  The `bne` branch at 0x2166c9c targets 0x2166cb4, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x2166ca4 targets 0x2166c88 and is always taken.
  The `bne` branch at 0x2166cac targets 0x2166c88, is taken when a1 != a6(=0x1400), and falls through when a1 == a6(=0x1400).
  The `beq` branch at 0x2166cb4 targets 0x2166bc8 and is always taken.
  The `bne` branch at 0x2166cc8 targets 0x2166c88, is taken when a1 != a0(=0x1403), and falls through when a1 == a0(=0x1403).
  The `beq` branch at 0x2166cd0 targets 0x2166bc8 and is always taken.
  The `bne` branch at 0x2166cd8 targets 0x2166c50, is taken when a0 != a7(=0x8000), and falls through when a0 == a7(=0x8000).
  The `beq` branch at 0x2166ce0 targets 0x2166cf0 and is always taken.
  The `bne` branch at 0x2166ce8 targets 0x2166c50, is taken when a0 != t0(=0x1908), and falls through when a0 == t0(=0x1908).
  The `beq` branch at 0x2166cf0 targets 0x2166b24 and is always taken.
  The `bne` branch at 0x2166d0c targets 0x2166d64, is taken when a1 < a4(=0x8036) (unsigned), and falls through when a1 >= a4(=0x8036) (unsigned).
  The `bne` branch at 0x2166d14 targets 0x2166c88, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x2166d1c targets 0x2166bc8 and is always taken.
  The `bne` branch at 0x2166d2c targets 0x2166d74, is taken when a1 < 0x1a00 (unsigned), and falls through when a1 >= 0x1a00 (unsigned).
  The `beq` branch at 0x2166d34 targets 0x2166c88, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x2166d3c targets 0x2166d98, is taken when a0 == t0(=0x1900), and falls through when a0 != t0(=0x1900).
  The `bne` branch at 0x2166d4c targets 0x2166d84, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x2166d54 targets 0x2166bc4, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x2166d5c targets 0x2166c88 and is always taken.
  The `bne` branch at 0x2166d64 targets 0x2166c88, is taken when a1 != a0(=0x8035), and falls through when a1 == a0(=0x8035).
  The `beq` branch at 0x2166d6c targets 0x2166d1c and is always taken.
  The `bne` branch at 0x2166d74 targets 0x2166c88, is taken when a1 != a6(=0x1406), and falls through when a1 == a6(=0x1406).
  The `beq` branch at 0x2166d7c targets 0x2166c0c and is always taken.
  The `bne` branch at 0x2166d88 targets 0x2166c88, is taken when a1 != t2(=0x8365), and falls through when a1 == t2(=0x8365).
  The `beq` branch at 0x2166d90 targets 0x2166bc4 and is always taken.
  The return at 0x2166be0 has v0 = ?.
  The return at 0x2166c50 has v0 = 0x0.
  The return at 0x2166c88 has v0 = 0x0.
  The return at 0x2166cc0 has v0 = 0x0.
  The return at 0x2166d44 has v0 = 0x0.
  The return at 0x2166da4 has v0 = ?.
  The instructions from 0x2166cbc to 0x2166cbc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x2166cf8 to 0x2166cfc are not reached by any path from the entry, and their branches are not listed.

- `__glTexImage2D_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2166db0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2166db0-0x21670bc (780 bytes).
  It occupies 780 bytes.
  The `bltz` branch at 0x2166db0 targets 0x2166fa8, is taken when a2 < 0 (signed), and falls through when a2 >= 0 (signed).
  The `bltz` branch at 0x2166db8 targets 0x2166fd4, is taken when a3 < 0 (signed), and falls through when a3 >= 0 (signed).
  The `bne` branch at 0x2166dc0 targets 0x2166ddc, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x2166dcc targets 0x2166f0c, is taken when a0 >= 0x1908 (unsigned), and falls through when a0 < 0x1908 (unsigned).
  The `beq` branch at 0x2166dd4 targets 0x2166e1c and is always taken.
  The `bne` branch at 0x2166ddc targets 0x2166e08, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0x2166de4 targets 0x2166e1c, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x2166df0 targets 0x2166f40, is taken when a0 < 0x1906 (unsigned), and falls through when a0 >= 0x1906 (unsigned).
  The `bne` branch at 0x2166df8 targets 0x2166e1c, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x2166e00 targets 0x2166f48 and is always taken.
  The `bne` branch at 0x2166e0c targets 0x2166f50, is taken when a0 < 0x1903 (unsigned), and falls through when a0 >= 0x1903 (unsigned).
  The `beq` branch at 0x2166e14 targets 0x2166f48, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bne` branch at 0x2166e24 targets 0x2166e70, is taken when a1 < a5(=0x8034) (unsigned), and falls through when a1 >= a5(=0x8034) (unsigned).
  The `beq` branch at 0x2166e2c targets 0x2166eac, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0x2166e3c targets 0x2166f60, is taken when a1 < a0(=0x8364) (unsigned), and falls through when a1 >= a0(=0x8364) (unsigned).
  The `beq` branch at 0x2166e44 targets 0x2166ea8, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `bne` branch at 0x2166e50 targets 0x2167058, is taken when a1 < a0(=0x8367) (unsigned), and falls through when a1 >= a0(=0x8367) (unsigned).
  The `beq` branch at 0x2166e58 targets 0x2167028, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x2166e60 targets 0x2166fcc, is taken when a1 != t9(=0x8368), and falls through when a1 == t9(=0x8368).
  The `beq` branch at 0x2166e68 targets 0x216702c and is always taken.
  The `bne` branch at 0x2166e74 targets 0x2166ee0, is taken when a1 < 0x1405 (unsigned), and falls through when a1 >= 0x1405 (unsigned).
  The `bne` branch at 0x2166e7c targets 0x2166f04, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `bne` branch at 0x2166e88 targets 0x2167034, is taken when a1 < a5(=0x8032) (unsigned), and falls through when a1 >= a5(=0x8032) (unsigned).
  The `bne` branch at 0x2166e90 targets 0x2166ea0, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `beq` branch at 0x2166e98 targets 0x2166eb0 and is always taken.
  The `bne` branch at 0x2166ea4 targets 0x2166fcc, is taken when a1 != a0(=0x8033), and falls through when a1 == a0(=0x8033).
  The `bne` branch at 0x2166ee4 targets 0x2166f8c, is taken when a1 < 0x1402 (unsigned), and falls through when a1 >= 0x1402 (unsigned).
  The `bne` branch at 0x2166eec targets 0x2166fe4, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x2166ef4 targets 0x2166fdc, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x2166efc targets 0x2166fcc, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x2166f04 targets 0x2166eb0 and is always taken.
  The `bne` branch at 0x2166f0c targets 0x2166f28, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x2166f18 targets 0x2166fec, is taken when a0 >= 0x190b (unsigned), and falls through when a0 < 0x190b (unsigned).
  The `beq` branch at 0x2166f20 targets 0x2166e1c and is always taken.
  The `bne` branch at 0x2166f28 targets 0x2167000, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x2166f30 targets 0x2166e1c, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x2166f38 targets 0x2166f48 and is always taken.
  The `beq` branch at 0x2166f40 targets 0x2166e1c, is taken when a0 == t2(=0x1905), and falls through when a0 != t2(=0x1905).
  The `bne` branch at 0x2166f50 targets 0x2166f48, is taken when a0 != t3(=0x1900), and falls through when a0 == t3(=0x1900).
  The `beq` branch at 0x2166f58 targets 0x2166e1c and is always taken.
  The `bne` branch at 0x2166f68 targets 0x2167010, is taken when a1 < a0(=0x8362) (unsigned), and falls through when a1 >= a0(=0x8362) (unsigned).
  The `beq` branch at 0x2166f70 targets 0x2166e98, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bne` branch at 0x2166f7c targets 0x2166fcc, is taken when a1 != at(=0x8363), and falls through when a1 == at(=0x8363).
  The `beq` branch at 0x2166f84 targets 0x2166eac and is always taken.
  The `bne` branch at 0x2166f90 targets 0x2166fb0, is taken when a1 < 0x1401 (unsigned), and falls through when a1 >= 0x1401 (unsigned).
  The `bne` branch at 0x2166f98 targets 0x2166fb8, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x2166fa0 targets 0x2166fcc and is always taken.
  The `bne` branch at 0x2166fb0 targets 0x2166fcc, is taken when a1 != v1(=0x1400), and falls through when a1 == v1(=0x1400).
  The `beq` branch at 0x2166fb8 targets 0x2166eb0 and is always taken.
  The `beq` branch at 0x2166fc4 targets 0x2166f04, is taken when a1 == a0(=0x1406), and falls through when a1 != a0(=0x1406).
  The `bne` branch at 0x2166fdc targets 0x2166fcc, is taken when a1 != a4(=0x1403), and falls through when a1 == a4(=0x1403).
  The `beq` branch at 0x2166fe4 targets 0x2166eb0 and is always taken.
  The `bne` branch at 0x2166fec targets 0x2166f48, is taken when a0 != a5(=0x8000), and falls through when a0 == a5(=0x8000).
  The `beq` branch at 0x2166ff4 targets 0x2167008 and is always taken.
  The `bne` branch at 0x2167000 targets 0x2166f48, is taken when a0 != a6(=0x1908), and falls through when a0 == a6(=0x1908).
  The `beq` branch at 0x2167008 targets 0x2166e1c and is always taken.
  The `bne` branch at 0x2167018 targets 0x2167078, is taken when a1 < a0(=0x8036) (unsigned), and falls through when a1 >= a0(=0x8036) (unsigned).
  The `bne` branch at 0x2167024 targets 0x2166fcc, is taken when a0(=0x8036) < a1 (unsigned), and falls through when a0(=0x8036) >= a1 (unsigned).
  The `beq` branch at 0x216702c targets 0x2166eb0 and is always taken.
  The `bne` branch at 0x2167038 targets 0x2166fc0, is taken when a1 < 0x1a00 (unsigned), and falls through when a1 >= 0x1a00 (unsigned).
  The `beq` branch at 0x2167040 targets 0x2166fcc, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x2167048 targets 0x216709c, is taken when a0 == t3(=0x1900), and falls through when a0 != t3(=0x1900).
  The `bne` branch at 0x2167060 targets 0x2167088, is taken when a1 < a0(=0x8366) (unsigned), and falls through when a1 >= a0(=0x8366) (unsigned).
  The `beq` branch at 0x2167068 targets 0x2166eac, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x2167070 targets 0x2166fcc and is always taken.
  The `bne` branch at 0x2167078 targets 0x2166fcc, is taken when a1 != at(=0x8035), and falls through when a1 == at(=0x8035).
  The `beq` branch at 0x2167080 targets 0x216702c and is always taken.
  The `bne` branch at 0x216708c targets 0x2166fcc, is taken when a1 != v0(=0x8365), and falls through when a1 == v0(=0x8365).
  The `beq` branch at 0x2167094 targets 0x2166eac and is always taken.
  The return at 0x2166ed8 has v0 = ?.
  The return at 0x2166f48 has v0 = 0x0.
  The return at 0x2166fa8 has v0 = 0x0.
  The return at 0x2166fcc has v0 = 0x0.
  The return at 0x2166fd4 has v0 = 0x0.
  The return at 0x2167050 has v0 = 0x0.
  The return at 0x21670b4 has v0 = ?.
  The instructions from 0x2166ffc to 0x2166ffc are not reached by any path from the entry, and their branches are not listed.

- `__glTexImage3D_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21670c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21670c0-0x2167410 (848 bytes).
  It occupies 848 bytes.
  The `bltz` branch at 0x21670c0 targets 0x21672e8, is taken when a2 < 0 (signed), and falls through when a2 >= 0 (signed).
  The `bltz` branch at 0x21670c8 targets 0x21672f0, is taken when a3 < 0 (signed), and falls through when a3 >= 0 (signed).
  The `bltz` branch at 0x21670d0 targets 0x2167318, is taken when a4 < 0 (signed), and falls through when a4 >= 0 (signed).
  The `bne` branch at 0x21670d8 targets 0x21670f0, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x21670e0 targets 0x2167248, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x21670e8 targets 0x2167140 and is always taken.
  The `bne` branch at 0x21670f4 targets 0x2167120, is taken when a0 < 0x1904 (unsigned), and falls through when a0 >= 0x1904 (unsigned).
  The `bne` branch at 0x21670fc targets 0x2167134, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x2167108 targets 0x2167280, is taken when a0 < 0x1906 (unsigned), and falls through when a0 >= 0x1906 (unsigned).
  The `bne` branch at 0x2167110 targets 0x2167134, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x2167118 targets 0x2167288 and is always taken.
  The `bne` branch at 0x2167124 targets 0x2167290, is taken when a0 < 0x1903 (unsigned), and falls through when a0 >= 0x1903 (unsigned).
  The `beq` branch at 0x216712c targets 0x2167288, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0x2167148 targets 0x2167194, is taken when a1 < a6(=0x8034) (unsigned), and falls through when a1 >= a6(=0x8034) (unsigned).
  The `beq` branch at 0x2167150 targets 0x21671d4, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0x2167160 targets 0x21672a0, is taken when a1 < a0(=0x8364) (unsigned), and falls through when a1 >= a0(=0x8364) (unsigned).
  The `beq` branch at 0x2167168 targets 0x21671d0, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `bne` branch at 0x2167174 targets 0x2167398, is taken when a1 < a0(=0x8367) (unsigned), and falls through when a1 >= a0(=0x8367) (unsigned).
  The `beq` branch at 0x216717c targets 0x2167368, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bne` branch at 0x2167184 targets 0x2167310, is taken when a1 != at(=0x8368), and falls through when a1 == at(=0x8368).
  The `beq` branch at 0x216718c targets 0x216736c and is always taken.
  The `bne` branch at 0x2167198 targets 0x2167218, is taken when a1 < 0x1405 (unsigned), and falls through when a1 >= 0x1405 (unsigned).
  The `bne` branch at 0x21671a0 targets 0x2167240, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x21671ac targets 0x2167374, is taken when a1 < a6(=0x8032) (unsigned), and falls through when a1 >= a6(=0x8032) (unsigned).
  The `bne` branch at 0x21671b8 targets 0x21671cc, is taken when a6(=0x8032) < a1 (unsigned), and falls through when a6(=0x8032) >= a1 (unsigned).
  The `beq` branch at 0x21671c4 targets 0x21671d8 and is always taken.
  The `bne` branch at 0x21671cc targets 0x2167310, is taken when a1 != a5(=0x8033), and falls through when a1 == a5(=0x8033).
  The `bne` branch at 0x216721c targets 0x21672cc, is taken when a1 < 0x1402 (unsigned), and falls through when a1 >= 0x1402 (unsigned).
  The `bne` branch at 0x2167224 targets 0x2167328, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x216722c targets 0x2167320, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `beq` branch at 0x2167238 targets 0x2167310, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x2167240 targets 0x21671d8 and is always taken.
  The `bne` branch at 0x2167248 targets 0x2167260, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x2167250 targets 0x2167330, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0x2167258 targets 0x2167140 and is always taken.
  The `bne` branch at 0x2167264 targets 0x2167340, is taken when a0 < 0x1909 (unsigned), and falls through when a0 >= 0x1909 (unsigned).
  The `bne` branch at 0x216726c targets 0x2167134, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x2167274 targets 0x2167288 and is always taken.
  The `beq` branch at 0x2167280 targets 0x2167134, is taken when a0 == t9(=0x1905), and falls through when a0 != t9(=0x1905).
  The `bne` branch at 0x2167290 targets 0x2167288, is taken when a0 != at(=0x1900), and falls through when a0 == at(=0x1900).
  The `beq` branch at 0x2167298 targets 0x2167140 and is always taken.
  The `bne` branch at 0x21672a8 targets 0x2167350, is taken when a1 < a0(=0x8362) (unsigned), and falls through when a1 >= a0(=0x8362) (unsigned).
  The `beq` branch at 0x21672b0 targets 0x21671c4, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `bne` branch at 0x21672bc targets 0x2167310, is taken when a1 != a0(=0x8363), and falls through when a1 == a0(=0x8363).
  The `beq` branch at 0x21672c4 targets 0x21671d4 and is always taken.
  The `bne` branch at 0x21672d0 targets 0x21672f8, is taken when a1 < 0x1401 (unsigned), and falls through when a1 >= 0x1401 (unsigned).
  The `bne` branch at 0x21672d8 targets 0x2167300, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x21672e0 targets 0x2167310 and is always taken.
  The `bne` branch at 0x21672f8 targets 0x2167310, is taken when a1 != a6(=0x1400), and falls through when a1 == a6(=0x1400).
  The `beq` branch at 0x2167300 targets 0x21671d8 and is always taken.
  The `beq` branch at 0x2167308 targets 0x2167240, is taken when a1 == t0(=0x1406), and falls through when a1 != t0(=0x1406).
  The `bne` branch at 0x2167320 targets 0x2167310, is taken when a1 != t1(=0x1403), and falls through when a1 == t1(=0x1403).
  The `beq` branch at 0x2167328 targets 0x21671d8 and is always taken.
  The `bne` branch at 0x2167330 targets 0x2167288, is taken when a0 != t2(=0x8000), and falls through when a0 == t2(=0x8000).
  The `beq` branch at 0x2167338 targets 0x2167348 and is always taken.
  The `bne` branch at 0x2167340 targets 0x2167288, is taken when a0 != t3(=0x1908), and falls through when a0 == t3(=0x1908).
  The `beq` branch at 0x2167348 targets 0x2167140 and is always taken.
  The `bne` branch at 0x2167358 targets 0x21673c0, is taken when a1 < a0(=0x8036) (unsigned), and falls through when a1 >= a0(=0x8036) (unsigned).
  The `bne` branch at 0x2167364 targets 0x2167310, is taken when a0(=0x8036) < a1 (unsigned), and falls through when a0(=0x8036) >= a1 (unsigned).
  The `beq` branch at 0x216736c targets 0x21671d8 and is always taken.
  The `bne` branch at 0x2167374 targets 0x2167308, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0x2167380 targets 0x2167310, is taken when a1 >= 0x1a01 (unsigned), and falls through when a1 < 0x1a01 (unsigned).
  The `beq` branch at 0x2167388 targets 0x21673e0, is taken when a0 == v1(=0x1900), and falls through when a0 != v1(=0x1900).
  The `bne` branch at 0x21673a0 targets 0x21673d0, is taken when a1 < a0(=0x8366) (unsigned), and falls through when a1 >= a0(=0x8366) (unsigned).
  The `beq` branch at 0x21673ac targets 0x21671d4, is taken when a0(=0x8366) >= a1 (unsigned), and falls through when a0(=0x8366) < a1 (unsigned).
  The `beq` branch at 0x21673b4 targets 0x2167310 and is always taken.
  The `bne` branch at 0x21673c0 targets 0x2167310, is taken when a1 != a7(=0x8035), and falls through when a1 == a7(=0x8035).
  The `beq` branch at 0x21673c8 targets 0x216736c and is always taken.
  The `bne` branch at 0x21673d0 targets 0x2167310, is taken when a1 != t0(=0x8365), and falls through when a1 == t0(=0x8365).
  The `beq` branch at 0x21673d8 targets 0x21671d4 and is always taken.
  The return at 0x2167210 has v0 = ?.
  The return at 0x2167288 has v0 = 0x0.
  The return at 0x21672e8 has v0 = 0x0.
  The return at 0x21672f0 has v0 = 0x0.
  The return at 0x2167310 has v0 = 0x0.
  The return at 0x2167318 has v0 = 0x0.
  The return at 0x2167390 has v0 = 0x0.
  The return at 0x2167408 has v0 = ?.
  The instructions from 0x216727c to 0x216727c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x21673bc to 0x21673bc are not reached by any path from the entry, and their branches are not listed.

- `__glLightfv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2167410 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2167410-0x21674a8 (152 bytes).
  It occupies 152 bytes.
  The `ld` at 0x216742c loads 8 bytes from abs 0x21bcd58.
  The `ld` at 0x2167444 loads 8 bytes from table(0x21b0060) +0x0.
  The `beq` branch at 0x216743c targets 0x2167450, is taken when a0(?) >= 0xa (unsigned), and falls through when a0(?) < 0xa (unsigned).
  The return at 0x2167454 has v0 = one of 0x0, 0x1.
  The return at 0x216745c has v0 = 0x1.
  The return at 0x2167464 has v0 = 0x1.
  The return at 0x216746c has v0 = 0x1.
  The return at 0x2167474 has v0 = 0x1.
  The return at 0x2167480 has v0 = 0x3.
  The return at 0x2167488 has v0 = 0x4.
  The return at 0x2167490 has v0 = 0x4.
  The return at 0x2167498 has v0 = 0x4.
  The return at 0x21674a0 has v0 = 0x4.
  The instructions from 0x216747c to 0x216747c are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x2167448 uses the jump table at 0x21b0060 with targets 0x21674a0, 0x2167498, 0x2167490, 0x2167488, 0x2167480, 0x216745c, 0x2167454, 0x2167474, 0x216746c, 0x2167464.

- `__glLightiv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21674b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21674b0-0x21674e4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x21674cc calls __glLightfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x21674dc has v0 = ret(__glLightfv_size).

- `__glLightModelfv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21674f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21674f0-0x2167548 (88 bytes).
  It occupies 88 bytes.
  The `beq` branch at 0x2167500 targets 0x2167530, is taken when a0 == at(=0xb53), and falls through when a0 != at(=0xb53).
  The `beq` branch at 0x2167508 targets 0x2167538, is taken when a0 == a2(=0xb51), and falls through when a0 != a2(=0xb51).
  The `beq` branch at 0x2167510 targets 0x2167540, is taken when a0 == a3(=0xb52), and falls through when a0 != a3(=0xb52).
  The `beq` branch at 0x2167518 targets 0x2167528, is taken when a0 == a4(=0x81f8), and falls through when a0 != a4(=0x81f8).
  The return at 0x2167520 has v0 = 0x0.
  The return at 0x2167528 has v0 = 0x1.
  The return at 0x2167530 has v0 = 0x4.
  The return at 0x2167538 has v0 = 0x1.
  The return at 0x2167540 has v0 = 0x1.

- `__glLightModeliv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2167550 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2167550-0x2167584 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x216756c calls __glLightModelfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x216757c has v0 = ret(__glLightModelfv_size).

- `__glMaterialfv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2167590 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2167590-0x2167640 (176 bytes).
  It occupies 176 bytes.
  The `bne` branch at 0x2167598 targets 0x21675d0, is taken when a0 < 0x1600 (unsigned), and falls through when a0 >= 0x1600 (unsigned).
  The `bne` branch at 0x21675a8 targets 0x2167620, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x21675b0 targets 0x2167610, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `bne` branch at 0x21675b8 targets 0x2167630, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x21675c0 targets 0x2167608, is taken when a0 != a5(=0x1603), and falls through when a0 == a5(=0x1603).
  The `bne` branch at 0x21675dc targets 0x2167600, is taken when a0 < 0x1201 (unsigned), and falls through when a0 >= 0x1201 (unsigned).
  The `bne` branch at 0x21675e4 targets 0x2167628, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x21675ec targets 0x2167608, is taken when a0 != a4(=0x1202), and falls through when a0 == a4(=0x1202).
  The `beq` branch at 0x2167600 targets 0x2167638, is taken when a0 == a2(=0x1200), and falls through when a0 != a2(=0x1200).
  The `bne` branch at 0x2167610 targets 0x2167608, is taken when a0 != a4(=0x1601), and falls through when a0 == a4(=0x1601).
  The return at 0x21675c8 has v0 = 0x3.
  The return at 0x21675f4 has v0 = 0x4.
  The return at 0x2167608 has v0 = 0x0.
  The return at 0x2167618 has v0 = 0x1.
  The return at 0x2167620 has v0 = 0x4.
  The return at 0x2167628 has v0 = 0x4.
  The return at 0x2167630 has v0 = 0x4.
  The return at 0x2167638 has v0 = 0x4.
  The instructions from 0x21675fc to 0x21675fc are not reached by any path from the entry, and their branches are not listed.

- `__glMaterialiv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2167640 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2167640-0x2167674 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x216765c calls __glMaterialfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x216766c has v0 = ret(__glMaterialfv_size).

- `__glColorTableParameterfv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2167680 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2167680-0x21676e0 (96 bytes).
  It occupies 96 bytes.
  The `ld` at 0x21676a0 loads 8 bytes from abs 0x21bcd58.
  The `ld` at 0x21676bc loads 8 bytes from table(0x21b00b0) +0x0.
  The `beq` branch at 0x21676b4 targets 0x21676d0, is taken when a5(?) >= 0xa (unsigned), and falls through when a5(?) < 0xa (unsigned).
  The return at 0x21676c8 has v0 = 0x1.
  The return at 0x21676d0 has v0 = -0x1.
  The return at 0x21676d8 has v0 = 0x4.
  The indirect jump at 0x21676c0 uses the jump table at 0x21b00b0 with targets 0x21676d8, 0x21676d8, 0x21676c8, 0x21676c8, 0x21676c8, 0x21676c8, 0x21676c8, 0x21676c8, 0x21676c8, 0x21676c8.

- `__glColorTableParameteriv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21676e0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21676e0-0x2167714 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x21676fc calls __glColorTableParameterfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x216770c has v0 = ret(__glColorTableParameterfv_size).

- `__glFillMap1f` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21677c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21677c0-0x2167888 (200 bytes).
  It occupies 200 bytes.
  The `jalr` at 0x2167824 calls memcpy with a0=?, a1=?, a2=(a0 << 0x2), a3=?.
  The `jalr` at 0x2167878 calls memcpy with a0=a4 at entry (arg4), a1=a3 at entry (arg3), a2=?, a3=a3 at entry (arg3), a6=a0 at entry (arg0).
  The `beq` branch at 0x21677f8 targets 0x2167864, is taken when a0 == a2, and falls through when a0 != a2.
  The `blez` branch at 0x2167800 targets 0x2167840, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `bne` branch at 0x2167834 targets 0x2167818, is taken when s2(?) != s4(=a1), and falls through when s2(?) == s4(=a1).
  The `beq` branch at 0x2167880 targets 0x2167840 and is always taken.
  The return at 0x216785c has v0 = one of ?, ret(memcpy).

- `__glFillMap1d` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2167890 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2167890-0x2167954 (196 bytes).
  It occupies 196 bytes.
  The `jalr` at 0x21678f0 calls memcpy with a0=?, a1=?, a2=(a0 << 0x3), a3=?.
  The `jalr` at 0x2167944 calls memcpy with a0=a4 at entry (arg4), a1=a3 at entry (arg3), a2=?, a3=a3 at entry (arg3), a6=a0 at entry (arg0).
  The `beq` branch at 0x21678c8 targets 0x2167930, is taken when a0 == a2, and falls through when a0 != a2.
  The `blez` branch at 0x21678d0 targets 0x2167908, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `bne` branch at 0x2167900 targets 0x21678e4, is taken when s2(?) != s4(=a1), and falls through when s2(?) == s4(=a1).
  The `beq` branch at 0x216794c targets 0x216790c and is always taken.
  The return at 0x2167928 has v0 = one of ?, ret(memcpy).

- `__glFillMap2f` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2167960 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2167960-0x2167bac (588 bytes).
  It occupies 588 bytes.
  2 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x2167a48, `lwc1` at 0x2167a68.
  2 such `swc1` accesses store 4 bytes to ?, including `swc1` at 0x2167a54, `swc1` at 0x2167a74.
  The `lwc1` at 0x2167a7c loads 4 bytes from table(0x4) +0x0.
  The `swc1` at 0x2167a8c stores 4 bytes to table(0x4) +0x0.
  The `lwc1` at 0x2167a94 loads 4 bytes from table(0x8) +0x0.
  The `swc1` at 0x2167aa4 stores 4 bytes to table(0x8) +0x0.
  The `lwc1` at 0x2167aac loads 4 bytes from table(0xc) +0x0.
  The `swc1` at 0x2167abc stores 4 bytes to table(0xc) +0x0.
  The `lwc1` at 0x2167ac4 loads 4 bytes from table(0x10) +0x0.
  The `swc1` at 0x2167ad4 stores 4 bytes to table(0x10) +0x0.
  The `lwc1` at 0x2167adc loads 4 bytes from table(0x14) +0x0.
  The `swc1` at 0x2167aec stores 4 bytes to table(0x14) +0x0.
  The `lwc1` at 0x2167af4 loads 4 bytes from table(0x18) +0x0.
  The `swc1` at 0x2167b08 stores 4 bytes to table(0x18) +0x0.
  The `lwc1` at 0x2167b14 loads 4 bytes from table(0x1c) +0x0.
  The `swc1` at 0x2167b28 stores 4 bytes to table(0x1c) +0x0.
  The `jalr` at 0x2167b78 calls memcpy with a0=a6 at entry (arg6), a1=a5 at entry (arg5), a2=?, a3=a3 at entry (arg3).
  The `bne` branch at 0x2167994 targets 0x21679ac, is taken when a0 != a4, and falls through when a0 == a4.
  The `beq` branch at 0x21679a4 targets 0x2167b64, is taken when a3 == v0(?), and falls through when a3 != v0(?).
  The `blez` branch at 0x21679ac targets 0x2167b84, is taken when s2(=a1) <= 0 (signed), and falls through when s2(=a1) > 0 (signed).
  The `beq` branch at 0x21679d0 targets 0x21679dc, is taken when a2 >= 0 (signed), and falls through when a2 < 0 (signed).
  The `beq` branch at 0x2167a18 targets 0x2167b44 and is always taken.
  The `beq` branch at 0x2167a38 targets 0x2167a60, is taken when (a0 & 0x7) == 0, and falls through when (a0 & 0x7) != 0.
  The `bne` branch at 0x2167a58 targets 0x2167a40, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `beq` branch at 0x2167a60 targets 0x2167b2c, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `bne` branch at 0x2167b24 targets 0x2167a68, is taken when a3(=table(0x20)) != t0(?), and falls through when a3(=table(0x20)) == t0(?).
  The `bne` branch at 0x2167b30 targets 0x2167a28, is taken when t2(?) != a2, and falls through when t2(?) == a2.
  The `beq` branch at 0x2167b3c targets 0x2167b80, is taken when s0(?) == s2(=a1), and falls through when s0(?) != s2(=a1).
  The `beq` branch at 0x2167b4c targets 0x2167b38, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `bne` branch at 0x2167b54 targets 0x2167a20, is taken when s6(?) != 0, and falls through when s6(?) == 0.
  The `beq` branch at 0x2167b5c targets 0x2167b3c and is always taken.
  The return at 0x2167ba4 has v0 = ?.

- `__glFillMap2d` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2167bb0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2167bb0-0x2167d40 (400 bytes).
  It occupies 400 bytes.
  The `jalr` at 0x2167c74 calls memcpy with a0=?, a1=?, a2=(a0 << 0x3), a3=?.
  The `jalr` at 0x2167d24 calls memcpy with a0=a6 at entry (arg6), a1=a5 at entry (arg5), a2=?, a3=a3 at entry (arg3).
  The `bne` branch at 0x2167be8 targets 0x2167c00, is taken when a0 != a4, and falls through when a0 == a4.
  The `beq` branch at 0x2167bf8 targets 0x2167d10, is taken when a3 == v1(?), and falls through when a3 != v1(?).
  The `blez` branch at 0x2167c04 targets 0x2167cf0, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `beq` branch at 0x2167c5c targets 0x2167d34 and is always taken.
  The `bne` branch at 0x2167c84 targets 0x2167c68, is taken when s2(?) != s3(=a2), and falls through when s2(?) == s3(=a2).
  The `beq` branch at 0x2167cc4 targets 0x2167cdc, is taken when t9(?) == ra(=a1), and falls through when t9(?) != ra(=a1).
  The `bgtz` branch at 0x2167ccc targets 0x2167c64, is taken when s3(=a2) > 0 (signed), and falls through when s3(=a2) <= 0 (signed).
  The `beq` branch at 0x2167cd4 targets 0x2167c90 and is always taken.
  The `beq` branch at 0x2167d2c targets 0x2167cf0 and is always taken.
  The `beq` branch at 0x2167d38 targets 0x2167ccc and is always taken.
  The return at 0x2167d08 has v0 = one of 0x5d108, ?, ret(memcpy).

- `__glEvalComputeK` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2167d40 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2167d40-0x2167da8 (104 bytes).
  It occupies 104 bytes.
  The `ld` at 0x2167d5c loads 8 bytes from abs 0x21bcd58.
  The `ld` at 0x2167d74 loads 8 bytes from table(0x21b0100) +0x0.
  The `beq` branch at 0x2167d6c targets 0x2167d80, is taken when a5(?) >= 0x29 (unsigned), and falls through when a5(?) < 0x29 (unsigned).
  The return at 0x2167d80 has v0 = 0x0.
  The return at 0x2167d88 has v0 = 0x4.
  The return at 0x2167d90 has v0 = 0x2.
  The return at 0x2167d98 has v0 = 0x3.
  The return at 0x2167da0 has v0 = 0x1.
  The indirect jump at 0x2167d78 uses the jump table at 0x21b0100 with targets 0x2167d88, 0x2167da0, 0x2167d98, 0x2167da0, 0x2167d90, 0x2167d98, 0x2167d88, 0x2167d98, 0x2167d88, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d80, 0x2167d88, 0x2167da0, 0x2167d98, 0x2167da0, 0x2167d90, 0x2167d98, 0x2167d88, 0x2167d98, 0x2167d88.

- `str_dup` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217a4c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217a4c0-0x217a520 (96 bytes).
  It occupies 96 bytes.
  The `jalr` at 0x217a4cc calls strlen with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x217a4dc calls malloc with a0=ret(strlen)+1, a1=?, a2=?, a3=?.
  The `jalr` at 0x217a508 calls strcpy with a0=ret(malloc), a1=a0 at entry (arg0), a2=?, a3=?.
  The `bne` branch at 0x217a4e4 targets 0x217a500, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The return at 0x217a4f4 has v0 = 0x0.
  The return at 0x217a518 has v0 = ret(malloc).
  The instructions from 0x217a4fc to 0x217a4fc are not reached by any path from the entry, and their branches are not listed.

- `_glapi_check_multithread` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217a520 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217a520-0x217a5bc (156 bytes).
  It occupies 156 bytes.
  The `jalr` at 0x217a54c calls _glthread_GetID with a0=a0 at entry (arg0), a1=[0x21bfcf0]:1, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x217a56c calls _glapi_get_dispatch with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x217a58c calls _glthread_GetID with a0=a0 at entry (arg0), a1=[0x21bfcf0]:1, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x217a5ac calls _glapi_set_dispatch with a0=0x0, a1=?, a2=?, a3=?.
  The `bne` branch at 0x217a53c targets 0x217a568, is taken when at(=[0x21bfce8]:1) != 0, and falls through when at(=[0x21bfce8]:1) == 0.
  The `beq` branch at 0x217a544 targets 0x217a588, is taken when a1(=[0x21bfcf0]:1) == 0, and falls through when a1(=[0x21bfcf0]:1) != 0.
  The `beq` branch at 0x217a560 targets 0x217a57c, is taken when a0(=[0x21bfce8]:1) == 0, and falls through when a0(=[0x21bfce8]:1) != 0.
  The `beq` branch at 0x217a574 targets 0x217a5a8, is taken when v0(=ret(_glapi_get_dispatch)) == 0, and falls through when v0(=ret(_glapi_get_dispatch)) != 0.
  The `beq` branch at 0x217a598 targets 0x217a55c, is taken when a1(=[0x21bfe08]:8) == v0(=ret(_glthread_GetID)), and falls through when a1(=[0x21bfe08]:8) != v0(=ret(_glthread_GetID)).
  The `beq` branch at 0x217a5a0 targets 0x217a55c and is always taken.
  The `beq` branch at 0x217a5b4 targets 0x217a57c and is always taken.
  The return at 0x217a580 has v0 = one of ret(_glthread_GetID), ret(_glapi_get_dispatch), ret(_glapi_set_dispatch).

- `_glapi_set_context` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217a5c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217a5c0-0x217a5c8 (8 bytes).
  It occupies 8 bytes.
  The `sd` at 0x217a5c4 stores 8 bytes to abs 0x1020.
  The return at 0x217a5c0 has v0 = ?.

- `_glapi_get_context` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217a5d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217a5d0-0x217a5d8 (8 bytes).
  It occupies 8 bytes.
  The `ld` at 0x217a5d4 loads 8 bytes from abs 0x1020.
  The return at 0x217a5d0 has v0 = [0x1020]:8.

- `_glapi_set_dispatch` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217a5e0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217a5e0-0x217a7bc (476 bytes).
  It occupies 476 bytes.
  The `ld` at 0x217a610 loads 8 bytes from abs 0x21bfb18.
  The `sw` at 0x217a61c stores 4 bytes to abs 0x1090.
  17 such `ld` accesses load 8 bytes from ?, including `ld` at 0x217a630, `ld` at 0x217a66c, `ld` at 0x217a67c.
  17 such `sd` accesses store 8 bytes to ?, including `sd` at 0x217a63c, `sd` at 0x217a670, `sd` at 0x217a680.
  The `bne` branch at 0x217a608 targets 0x217a618, is taken when a0 != 0, and falls through when a0 == 0.
  The `bne` branch at 0x217a638 targets 0x217a620, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x217a660 targets 0x217a70c and is always taken.
  The `bgtz` branch at 0x217a7ac targets 0x217a668, is taken when a6(?) > 0 (signed), and falls through when a6(?) <= 0 (signed).
  The return at 0x217a7b4 has v0 = ?.

- `_glapi_get_dispatch` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217a7c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217a7c0-0x217a7c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x217a7c0 has v0 = 0x1098.

- `_glapi_get_dispatch_table_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217a7d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217a7d0-0x217a7f0 (32 bytes).
  It occupies 32 bytes.
  The `lw` at 0x217a7dc loads 4 bytes from abs 0x21bfcec.
  The `sb` at 0x217a7e4 stores 1 byte to abs 0x21bfe00.
  The return at 0x217a7e8 has v0 = [0x21bfcec]+1.

- `_glapi_get_version` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217a7f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217a7f0-0x217a80c (28 bytes).
  It occupies 28 bytes.
  The `ld` at 0x217a7fc loads 8 bytes from abs 0x21bcd58.
  The return at 0x217a804 has v0 = 0x21b40b8.

- `get_static_proc_offset` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217a810 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217a810-0x217a8a0 (144 bytes).
  It occupies 144 bytes.
  The `ld` at 0x217a81c loads 8 bytes from abs 0x21b5900.
  The `ld` at 0x217a864 loads 8 bytes from ?.
  The `lw` at 0x217a888 loads 4 bytes from ?.
  The `jalr` at 0x217a84c calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `beq` branch at 0x217a838 targets 0x217a86c, is taken when a1(=[0x21b5900]:8) == 0, and falls through when a1(=[0x21b5900]:8) != 0.
  The `beq` branch at 0x217a854 targets 0x217a888, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0x217a868 targets 0x217a848, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The return at 0x217a880 has v0 = -0x1.
  The return at 0x217a898 has v0 = ?.

- `get_static_proc_address` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217a8a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217a8a0-0x217a930 (144 bytes).
  It occupies 144 bytes.
  The `ld` at 0x217a8ac loads 8 bytes from abs 0x21b5900.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x217a8f4, `ld` at 0x217a918.
  The `jalr` at 0x217a8dc calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `beq` branch at 0x217a8c8 targets 0x217a8fc, is taken when a1(=[0x21b5900]:8) == 0, and falls through when a1(=[0x21b5900]:8) != 0.
  The `beq` branch at 0x217a8e4 targets 0x217a918, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0x217a8f8 targets 0x217a8d8, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The return at 0x217a910 has v0 = 0x0.
  The return at 0x217a928 has v0 = ?.

- `generate_entrypoint` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217a930 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217a930-0x217a938 (8 bytes).
  It occupies 8 bytes.
  The return at 0x217a930 has v0 = 0x0.

- `_glapi_add_entrypoint` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217a940 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217a940-0x217ab18 (472 bytes).
  It occupies 472 bytes.
  The `ld` at 0x217a9d4 loads 8 bytes from ?.
  The `lw` at 0x217aa6c loads 4 bytes from ?.
  The `sd` at 0x217aafc stores 8 bytes to table(0x21bfe98) +0x0.
  The `sw` at 0x217ab00 stores 4 bytes to table(0x21bfea0) +0x0.
  The `sd` at 0x217ab08 stores 8 bytes to table(0x21bfe90) +0x0.
  The `bgezall` at 0x217a96c calls (unnamed) [0x217a810] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x217a99c calls _glapi_get_proc_name with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `jalr` at 0x217a9d8 calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0x217aa38 calls strcmp with a0=ret(_glapi_get_proc_name), a1=a0 at entry (arg0), a2=?, a3=sym(strcmp).
  The `bgezall` at 0x217aa90 calls (unnamed) [0x217a930] with a0=a1 at entry (arg1), a1=?, a2=[0x21bfe00]:1, a3=?.
  The `bgezall` at 0x217aab4 calls (unnamed) [0x217a4c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bltz` branch at 0x217a974 targets 0x217a998, is taken when v0(=ret(0x217a810)) < 0 (signed), and falls through when v0(=ret(0x217a810)) >= 0 (signed).
  The `bne` branch at 0x217a9a4 targets 0x217aa30, is taken when v0(=ret(_glapi_get_proc_name)) != 0, and falls through when v0(=ret(_glapi_get_proc_name)) == 0.
  The `beq` branch at 0x217a9b4 targets 0x217aa0c, is taken when v0(=[0x21bfe04]) == 0, and falls through when v0(=[0x21bfe04]) != 0.
  The `beq` branch at 0x217a9e0 targets 0x217aa6c, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0x217aa04 targets 0x217a9c8, is taken when a1(?) < v0(=[0x21bfe04]) (unsigned), and falls through when a1(?) >= v0(=[0x21bfe04]) (unsigned).
  The `beq` branch at 0x217aa14 targets 0x217aa5c, is taken when a2(=[0x21bfe00]:1) == 0, and falls through when a2(=[0x21bfe00]:1) != 0.
  The `beq` branch at 0x217aa40 targets 0x217a9ac, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0x217aa5c targets 0x217aa88, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x217aa64 targets 0x217a980 and is always taken.
  The `bne` branch at 0x217aa70 targets 0x217aa80, is taken when a6(?) != s0(=a1), and falls through when a6(?) == s0(=a1).
  The `beq` branch at 0x217aa78 targets 0x217a980 and is always taken.
  The `beq` branch at 0x217aa80 targets 0x217a980 and is always taken.
  The `bne` branch at 0x217aa98 targets 0x217aaa8, is taken when v0(=ret(0x217a930)) != 0, and falls through when v0(=ret(0x217a930)) == 0.
  The `beq` branch at 0x217aaa0 targets 0x217a980 and is always taken.
  The `beq` branch at 0x217ab04 targets 0x217ab10, is taken when v1(=[0x21bfcec]) >= s0(=a1) (unsigned), and falls through when v1(=[0x21bfcec]) < s0(=a1) (unsigned).
  The `beq` branch at 0x217ab10 targets 0x217a980 and is always taken.
  The return at 0x217a990 has v0 = one of ?, 0x0, 0x1.
  The return at 0x217aa28 has v0 = 0x0.
  The return at 0x217aa54 has v0 = 0x0.

- `_glapi_get_proc_offset` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217ab20 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217ab20-0x217abec (204 bytes).
  It occupies 204 bytes.
  The `ld` at 0x217ab6c loads 8 bytes from ?.
  The `lw` at 0x217abd0 loads 4 bytes from ?.
  The `jalr` at 0x217ab70 calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `bgezall` at 0x217aba4 calls (unnamed) [0x217a810] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x217ab5c targets 0x217ab98, is taken when at(=[0x21bfe04]) == 0, and falls through when at(=[0x21bfe04]) != 0.
  The `beq` branch at 0x217ab78 targets 0x217abcc, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0x217ab90 targets 0x217ab68, is taken when s1(?) < a1(=[0x21bfe04]) (unsigned), and falls through when s1(?) >= a1(=[0x21bfe04]) (unsigned).
  The return at 0x217abc4 has v0 = ret(0x217a810).
  The return at 0x217abe4 has v0 = ?.

- `_glapi_get_proc_address` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217abf0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217abf0-0x217acc8 (216 bytes).
  It occupies 216 bytes.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x217ac44, `ld` at 0x217aca8.
  The `jalr` at 0x217ac48 calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `bgezall` at 0x217ac78 calls (unnamed) [0x217a8a0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x217ac2c targets 0x217ac6c, is taken when at(=[0x21bfe04]) == 0, and falls through when at(=[0x21bfe04]) != 0.
  The `beq` branch at 0x217ac50 targets 0x217aca0, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0x217ac64 targets 0x217ac40, is taken when s1(?) < a1(=[0x21bfe04]) (unsigned), and falls through when s1(?) >= a1(=[0x21bfe04]) (unsigned).
  The return at 0x217ac98 has v0 = ret(0x217a8a0).
  The return at 0x217acc0 has v0 = ?.

- `_glapi_get_proc_name` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217acd0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217acd0-0x217ad5c (140 bytes).
  It occupies 140 bytes.
  The `ld` at 0x217ace4 loads 8 bytes from abs 0x21bcd58.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x217ad00, `lw` at 0x217ad2c.
  The `lw` at 0x217ad18 loads 4 bytes from abs 0x21bfe04.
  The `ld` at 0x217ad24 loads 8 bytes from abs 0x21bcd60.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x217ad50, `ld` at 0x217ad58.
  The `beq` branch at 0x217ad08 targets 0x217ad4c, is taken when t0(?) == a0, and falls through when t0(?) != a0.
  The `bne` branch at 0x217ad10 targets 0x217ad00, is taken when a3(?) != a6(=0x2fd), and falls through when a3(?) == a6(=0x2fd).
  The `beq` branch at 0x217ad1c targets 0x217ad44, is taken when a6(=[0x21bfe04]) == 0, and falls through when a6(=[0x21bfe04]) != 0.
  The `beq` branch at 0x217ad34 targets 0x217ad54, is taken when a5(?) == a0, and falls through when a5(?) != a0.
  The `bne` branch at 0x217ad3c targets 0x217ad2c, is taken when a3(?) != a6(=[0x21bfe04]), and falls through when a3(?) == a6(=[0x21bfe04]).
  The return at 0x217ad44 has v0 = 0x0.
  The return at 0x217ad4c has v0 = ?.
  The return at 0x217ad54 has v0 = ?.

- `_glapi_check_table` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217ad60 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217ad60-0x217ad68 (8 bytes).
  It occupies 8 bytes.
  The return at 0x217ad60 has v0 = ?.

- `_glapi_noop_enable_warnings` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217ad80 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217ad80-0x217ad94 (20 bytes).
  It occupies 20 bytes.
  The `sb` at 0x217ad90 stores 1 byte to abs 0x21bfe10.
  The return at 0x217ad8c has v0 = 0x49f38.

- `warn` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217ada0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217ada0-0x217ae0c (108 bytes).
  It occupies 108 bytes.
  The `jalr` at 0x217add4 calls getenv with a0=0x21b40c8, a1=0x40c8, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x217adf0 calls getenv with a0=0x21b40d8, a1=0x40d8, a2=?, a3=?.
  The `beq` branch at 0x217ada4 targets 0x217adc0, is taken when at(=[0x21bfe10]:1) == 0, and falls through when at(=[0x21bfe10]:1) != 0.
  The `bne` branch at 0x217addc targets 0x217adac, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `bne` branch at 0x217adf8 targets 0x217adac, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The return at 0x217adb0 has v0 = 0x1.
  The return at 0x217ae04 has v0 = 0x0.
  The instructions from 0x217adb8 to 0x217adbc are not reached by any path from the entry, and their branches are not listed.

- `NoOpGeneric` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217ae10 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217ae10-0x217ae74 (100 bytes).
  It occupies 100 bytes.
  The `bgezall` at 0x217ae34 calls warn [0x217ada0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x217ae58 calls fprintf with a0=sym(__iob)+64, a1=0x21b40e8, a2=0x40, a3=?.
  The `beq` branch at 0x217ae3c targets 0x217ae60, is taken when v0(=ret(warn)) == 0, and falls through when v0(=ret(warn)) != 0.
  The return at 0x217ae6c has v0 = 0x0.

- `_glthread_GetID` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217ae80 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217ae80-0x217aebc (60 bytes).
  It occupies 60 bytes.
  The `jalr` at 0x217ae9c calls pthread_self with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x217aeb4 has v0 = ?.

- `_glthread_InitTSD` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217aec0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217aec0-0x217af34 (116 bytes).
  It occupies 116 bytes.
  The `sw` at 0x217af24 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `jalr` at 0x217aee8 calls pthread_key_create with a0=a0 at entry (arg0), a1=0x0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x217af00 calls perror with a0=0x21b4130, a1=0x4130, a2=?, a3=?.
  The `jalr` at 0x217af0c calls exit with a0=-0x1, a1=?, a2=?, a3=?.
  The `beq` branch at 0x217aef0 targets 0x217af14, is taken when v0(=ret(pthread_key_create)) == 0, and falls through when v0(=ret(pthread_key_create)) != 0.
  The return at 0x217af2c has v0 = one of ret(pthread_key_create), ret(exit).

- `_glthread_GetTSD` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217af40 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217af40-0x217afa4 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x217af48 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0x217af78 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0x217af74 calls pthread_getspecific with a0=[a0], a1=?, a2=?, a3=?.
  The `jalr` at 0x217af94 calls _glthread_InitTSD with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x217af68 targets 0x217af90, is taken when at(=[a0+4]) != v1(=0xffffffffff8adc98), and falls through when at(=[a0+4]) == v1(=0xffffffffff8adc98).
  The `beq` branch at 0x217af9c targets 0x217af74 and is always taken.
  The return at 0x217af88 has v0 = ret(pthread_getspecific).

- `_glthread_SetTSD` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217afb0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217afb0-0x217b024 (116 bytes).
  It occupies 116 bytes.
  The `lw` at 0x217afb4 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0x217afec loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0x217aff0 calls pthread_setspecific with a0=[a0], a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x217b014 calls _glthread_InitTSD with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x217afe0 targets 0x217b010, is taken when at(=[a0+4]) != v0(=0xffffffffff8adc98), and falls through when at(=[a0+4]) == v0(=0xffffffffff8adc98).
  The `beq` branch at 0x217b01c targets 0x217afec and is always taken.
  The return at 0x217b008 has v0 = ret(pthread_setspecific).

- `__glXInitPageOne` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217b030 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217b030-0x217b14c (284 bytes).
  It occupies 284 bytes.
  The `sd` at 0x217b0d4 stores 8 bytes to abs 0x1028.
  The `jalr` at 0x217b05c calls open with a0=0x21b4170, a1=0x2, a2=0x4170, a3=0x49c88.
  The `jalr` at 0x217b074 calls getpagesize with a0=?, a1=?, a2=?, a3=?, a4=-0x1.
  The `jalr` at 0x217b0a0 calls mmap with a0=?, a1=0x1000, a2=0x3, a3=0x92, a4=ret(open), a5=0x0.
  The `jalr` at 0x217b0b4 calls close with a0=ret(open), a1=?, a2=?, a3=?.
  The `jalr` at 0x217b0d0 calls __glXInitDummyContext with a0=?, a1=?, a2=0x21c5c50, a3=0x5c50.
  The `jalr` at 0x217b0dc calls _glapi_set_dispatch with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x217b11c calls fprintf with a0=sym(__iob)+64, a1=0x21b4180, a2=ret(mmap), a3=0x40.
  The `jalr` at 0x217b138 calls perror with a0=0x21b4170, a1=0x4170, a2=?, a3=?, a4=-0x1.
  The `jalr` at 0x217b144 calls exit with a0=0x1, a1=?, a2=?, a3=?.
  The `beq` branch at 0x217b068 targets 0x217b12c, is taken when v0(=ret(open)) == a4(=-0x1), and falls through when v0(=ret(open)) != a4(=-0x1).
  The `bne` branch at 0x217b0ac targets 0x217b100, is taken when a1(?) != v0(=ret(mmap)), and falls through when a1(?) == v0(=ret(mmap)).
  The `beq` branch at 0x217b124 targets 0x217b0b4 and is always taken.
  The return at 0x217b0ec has v0 = ret(_glapi_set_dispatch).
  The instructions from 0x217b0f4 to 0x217b0fc are not reached by any path from the entry, and their branches are not listed.

- `__glXInitThread` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217b230 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217b230-0x217b3c8 (408 bytes).
  It occupies 408 bytes.
  The `lw` at 0x217b25c loads 4 bytes from abs 0x200e00.
  14 such `ld` accesses load 8 bytes from abs 0x1028, including `ld` at 0x217b260, `ld` at 0x217b2b0, `ld` at 0x217b2c0.
  The `lw` at 0x217b26c loads 4 bytes from [0x1028]:8 +0x0.
  The `lw` at 0x217b274 loads 4 bytes from [0x1028]:8 +0x4.
  The `sd` at 0x217b298 stores 8 bytes to abs 0x1028.
  The `sw` at 0x217b2a0 stores 4 bytes to ret(malloc) +0x18.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0x217b2b8, `sw` at 0x217b2cc, `sw` at 0x217b2e0.
  The `sw` at 0x217b30c stores 4 bytes to [0x1028]:8 +0x11c.
  The `sw` at 0x217b314 stores 4 bytes to [0x1028]:8 +0x120.
  The `sw` at 0x217b31c stores 4 bytes to [0x1028]:8 +0x0.
  The `sw` at 0x217b324 stores 4 bytes to [0x1028]:8 +0x4.
  The `sd` at 0x217b330 stores 8 bytes to [0x1028]:8 +0x8.
  The `sd` at 0x217b33c stores 8 bytes to [0x1028]:8 +0x10.
  The `sd` at 0x217b344 stores 8 bytes to [0x1028]:8 +0x130.
  The `sw` at 0x217b34c stores 4 bytes to [0x1028]:8 +0x138.
  The `sw` at 0x217b358 stores 4 bytes to [0x1028]:8 +0x13c.
  The `sw` at 0x217b35c stores 4 bytes to abs 0x1080.
  The `sd` at 0x217b360 stores 8 bytes to abs 0x1078.
  The `sw` at 0x217b364 stores 4 bytes to abs 0x1070.
  The `sd` at 0x217b368 stores 8 bytes to abs 0x1068.
  The `sd` at 0x217b374 stores 8 bytes to abs 0x1088.
  The `jalr` at 0x217b258 calls _mplib_get_thread_id with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x217b280 calls __libc_threadbind with a0=?, a1=?, a2=[0x1028]:8, a3=?.
  The `jalr` at 0x217b28c calls malloc with a0=0x140, a1=?, a2=?, a3=?.
  The `jalr` at 0x217b29c calls __libc_threadbind with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x217b338 calls __glXInitDummyContext with a0=0x4, a1=[0x1028]:8, a2=[0x1028]:8, a3=[0x1028]:8, a4=[0x1028]:8, a5=[0x1028]:8, a6=[0x1028]:8.
  The `jalr` at 0x217b370 calls _glapi_set_context with a0=0x0, a1=?, a2=?, a3=?, a7=[0x1028]:8.
  The `jalr` at 0x217b37c calls _glapi_set_dispatch with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x217b3b8 calls __ateachexit with a0=0x217b150, a1=-0x4eb0, a2=0x1, a3=?.
  The `beq` branch at 0x217b264 targets 0x217b27c, is taken when a2(=[0x1028]:8) == 0, and falls through when a2(=[0x1028]:8) != 0.
  The `bne` branch at 0x217b270 targets 0x217b27c, is taken when t9(=[[0x1028]:8]) != s0(=[0x200e00]), and falls through when t9(=[[0x1028]:8]) == s0(=[0x200e00]).
  The `beq` branch at 0x217b278 targets 0x217b38c, is taken when v0(=[[0x1028]:8+4]) == s1(=ret(_mplib_get_thread_id)), and falls through when v0(=[[0x1028]:8+4]) != s1(=ret(_mplib_get_thread_id)).
  The `bne` branch at 0x217b300 targets 0x217b2b0, is taken when a2(?) != a4(=0x100), and falls through when a2(?) == a4(=0x100).
  The `beq` branch at 0x217b388 targets 0x217b3a4, is taken when t2(=[0x21bfe14]) == 0, and falls through when t2(=[0x21bfe14]) != 0.
  The `beq` branch at 0x217b3c0 targets 0x217b390 and is always taken.
  The return at 0x217b39c has v0 = one of ret(_glapi_set_dispatch), ?, ret(__ateachexit).

- `__glXFreeContext` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217c110 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217c110-0x217c200 (240 bytes).
  It occupies 240 bytes.
  The `ld` at 0x217c13c loads 8 bytes from sym(__glx_contextList) +0x0.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x217c150, `ld` at 0x217c16c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x798, including `ld` at 0x217c168, `ld` at 0x217c174.
  The `sd` at 0x217c170 stores 8 bytes to ?.
  The `ld` at 0x217c188 loads 8 bytes from a0 (arg0 at entry) +0x7a0.
  The `ld` at 0x217c19c loads 8 bytes from a0 (arg0 at entry) +0x7a8.
  The `ld` at 0x217c1b0 loads 8 bytes from a0 (arg0 at entry) +0x7b0.
  The `ld` at 0x217c1d0 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0x217c180 calls XFree with a0=[a0+1944]:8, a1=a1 at entry (arg1), a2=?, a3=?, a4=sym(XFree).
  The `jalr` at 0x217c194 calls XFree with a0=[a0+1952]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x217c1a8 calls XFree with a0=[a0+1960]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x217c1bc calls XFree with a0=[a0+1968]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x217c1c8 calls __glFreeAttributeState with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x217c1d4 calls XFree with a0=[a0]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x217c1e0 calls XFree with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x217c130 targets 0x217c174, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x217c140 targets 0x217c174, is taken when v0(=[sym(__glx_contextList)]:8) == 0, and falls through when v0(=[sym(__glx_contextList)]:8) != 0.
  The `beq` branch at 0x217c148 targets 0x217c16c, is taken when s0(=a0) == a0(?), and falls through when s0(=a0) != a0(?).
  The `bne` branch at 0x217c15c targets 0x217c148, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `beq` branch at 0x217c164 targets 0x217c178 and is always taken.
  The `beq` branch at 0x217c178 targets 0x217c188, is taken when a0(=[a0+1944]:8) == 0, and falls through when a0(=[a0+1944]:8) != 0.
  The `beq` branch at 0x217c18c targets 0x217c19c, is taken when a0(=[a0+1952]:8) == 0, and falls through when a0(=[a0+1952]:8) != 0.
  The `beq` branch at 0x217c1a0 targets 0x217c1b0, is taken when a0(=[a0+1960]:8) == 0, and falls through when a0(=[a0+1960]:8) != 0.
  The `beq` branch at 0x217c1b4 targets 0x217c1c8, is taken when a0(=[a0+1968]:8) == 0, and falls through when a0(=[a0+1968]:8) != 0.
  The return at 0x217c1f8 has v0 = ret(XFree).

- `__glXGetModes` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217d0f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217d0f0-0x217d1bc (204 bytes).
  It occupies 204 bytes.
  The `bgezall` at 0x217d11c calls (unnamed) [0x217d3e0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x217d15c calls (unnamed) [0x217d2d0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?, a5=0x48.
  The `jalr` at 0x217d190 calls __glXFindVisualConfig with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?, a5=0x48, a6=ret(0x217d2d0).
  The `beq` branch at 0x217d124 targets 0x217d148, is taken when v0(=ret(0x217d3e0)) == 0, and falls through when v0(=ret(0x217d3e0)) != 0.
  The `beq` branch at 0x217d16c targets 0x217d184, is taken when v0(=ret(0x217d2d0)) == 0, and falls through when v0(=ret(0x217d2d0)) != 0.
  The `beq` branch at 0x217d19c targets 0x217d1ac, is taken when v0(=ret(__glXFindVisualConfig)) == 0, and falls through when v0(=ret(__glXFindVisualConfig)) != 0.
  The `beq` branch at 0x217d1a4 targets 0x217d130 and is always taken.
  The return at 0x217d140 has v0 = one of ret(0x217d3e0)+72, ret(__glXFindVisualConfig)+40.
  The return at 0x217d17c has v0 = ret(0x217d2d0)+72.
  The return at 0x217d1b4 has v0 = 0x0.

- `__glXFindVisualConfig` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217d1c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217d1c0-0x217d2d0 (272 bytes).
  It occupies 272 bytes.
  The `lw` at 0x217d204 loads 4 bytes from a0 (arg0 at entry) +0xe4.
  The `ld` at 0x217d218 loads 8 bytes from ret(__glXInitialize) +0x30.
  The `ld` at 0x217d228 loads 8 bytes from ?.
  The `lw` at 0x217d238 loads 4 bytes from ?.
  The `lwu` at 0x217d260 loads 4 bytes from ?.
  The `jalr` at 0x217d1ec calls __glXInitialize with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x217d1f4 targets 0x217d2c0, is taken when v0(=ret(__glXInitialize)) == 0, and falls through when v0(=ret(__glXInitialize)) != 0.
  The `bltz` branch at 0x217d1fc targets 0x217d294, is taken when s1(=a1) < 0 (signed), and falls through when s1(=a1) >= 0 (signed).
  The `beq` branch at 0x217d20c targets 0x217d294, is taken when s1(=a1) >= v1(=[a0+228]) (signed), and falls through when s1(=a1) < v1(=[a0+228]) (signed).
  The `beq` branch at 0x217d234 targets 0x217d2c8, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `blez` branch at 0x217d23c targets 0x217d278, is taken when a4(?) <= 0 (signed), and falls through when a4(?) > 0 (signed).
  The `beq` branch at 0x217d264 targets 0x217d2b0, is taken when a3(?) == s0(=a2), and falls through when a3(?) != s0(=a2).
  The `bne` branch at 0x217d270 targets 0x217d260, is taken when v0(=table(0x94)) != a2(?), and falls through when v0(=table(0x94)) == a2(?).
  The `beq` branch at 0x217d2c0 targets 0x217d298 and is always taken.
  The `beq` branch at 0x217d2c8 targets 0x217d29c and is always taken.
  The return at 0x217d28c has v0 = 0x0.
  The return at 0x217d2a8 has v0 = 0x0.
  The return at 0x217d2b8 has v0 = ?.

- `__glXClientInfo` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217f4c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x217f4c0-0x217f654 (404 bytes).
  It occupies 404 bytes.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x217f4c4, `ld` at 0x217f5f8.
  The `ld` at 0x217f4f0 loads 8 bytes from [a0+2408]:8 +0x0.
  5 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x217f4fc, `ld` at 0x217f534, `ld` at 0x217f59c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb8, including `ld` at 0x217f500, `ld` at 0x217f5a0.
  The `sd` at 0x217f520 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x217f528, `sb` at 0x217f574.
  2 such `sh` accesses store 2 bytes to [a0+176]:8 +0x2, including `sh` at 0x217f530, `sh` at 0x217f598.
  The `ld` at 0x217f53c loads 8 bytes from a0 (arg0 at entry) +0x98.
  2 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0xb0, including `sd` at 0x217f548, `sd` at 0x217f5dc.
  The `sd` at 0x217f550 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sw` at 0x217f554 stores 4 bytes to [a0+176]:8 +0x8.
  The `sw` at 0x217f55c stores 4 bytes to [a0+176]:8 +0x4.
  The `sb` at 0x217f568 stores 1 byte to [a0+176]:8 +0x1.
  The `lhu` at 0x217f584 loads 2 bytes from [a0+176]:8 +0x2.
  The `sw` at 0x217f58c stores 4 bytes to [a0+176]:8 +0xc.
  The `ld` at 0x217f604 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x217f610 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `jalr` at 0x217f4f4 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[a0+2408]:8, a3=a3 at entry (arg3).
  The `jalr` at 0x217f570 calls strlen with a0=0x21b41a8, a1=0x41a8, a2=0x14, a3=0x1, a4=0x4, a5=[a0+176]:8, a6=[a0+152]:8+1, a7=0x1.
  The `jalr` at 0x217f5c0 calls memcpy with a0=[a0+176]:8, a1=0x21b41a8, a2=(ret(strlen)+1 << 0x0), a3=0x41a8, a5=[a0+176]:8.
  The `jalr` at 0x217f5f0 calls _XSend with a0=a0 at entry (arg0), a1=0x21b41a8, a2=(ret(strlen)+1 << 0x0), a3=0x41a8, a5=[a0+176]:8.
  The `jalr` at 0x217f608 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+2408]:8, a3=?.
  The `jalr` at 0x217f61c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x217f644 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+176]:8.
  The `beq` branch at 0x217f4e8 targets 0x217f4fc, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The `bne` branch at 0x217f510 targets 0x217f640, is taken when v1(=[a0+184]:8) < a0(=[a0+176]:8+16) (unsigned), and falls through when v1(=[a0+184]:8) >= a0(=[a0+176]:8+16) (unsigned).
  The `bne` branch at 0x217f5ac targets 0x217f5e0, is taken when t2(=[a0+184]:8) < t3(=((ret(strlen)+1 << 0x0) + [a0+176]:8)) (unsigned), and falls through when t2(=[a0+184]:8) >= t3(=((ret(strlen)+1 << 0x0) + [a0+176]:8)) (unsigned).
  The `beq` branch at 0x217f5d8 targets 0x217f5f8 and is always taken.
  The `beq` branch at 0x217f5fc targets 0x217f610, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x217f614 targets 0x217f628, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x217f64c targets 0x217f518 and is always taken.
  The return at 0x217f638 has v0 = one of ?, ret(?).

- `__glXRegisterGLXExtensionString` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2184930 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2184930-0x2184a24 (244 bytes).
  It occupies 244 bytes.
  The `jalr` at 0x2184958 calls strlen with a0=[0x21bfcf8]:8, a1=sym(strlen), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x2184968 calls strlen with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x2184980 calls malloc with a0=(ret(strlen) + ret(strlen))+2, a1=0x2, a2=?, a3=?.
  The `jalr` at 0x2184998 calls strcpy with a0=ret(malloc), a1=[0x21bfcf8]:8, a2=?, a3=?.
  The `jalr` at 0x21849b0 calls strcat with a0=ret(malloc), a1=0x21bfc34, a2=sym(strcat), a3=?.
  The `jalr` at 0x21849c0 calls strcat with a0=ret(malloc), a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0x2184a14 calls free with a0=[0x21bfcf8]:8, a1=?, a2=0x21b4690, a3=0x4690.
  The `beq` branch at 0x2184948 targets 0x2184a00, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x2184988 targets 0x2184a00, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `bne` branch at 0x21849d8 targets 0x2184a10, is taken when a0(=[0x21bfcf8]:8) != a2(=0x21b4690), and falls through when a0(=[0x21bfcf8]:8) == a2(=0x21b4690).
  The `beq` branch at 0x2184a1c targets 0x21849e0 and is always taken.
  The return at 0x21849ec has v0 = one of ret(strcat), ret(free).
  The return at 0x2184a08 has v0 = one of ?, ret(malloc).
  The instructions from 0x21849f4 to 0x21849fc are not reached by any path from the entry, and their branches are not listed.

- `__glXRegisterGLXFunction` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2184a30 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2184a30-0x2184b40 (272 bytes).
  It occupies 272 bytes.
  3 such `ld` accesses load 8 bytes from ?, including `ld` at 0x2184a6c, `ld` at 0x2184a80, `ld` at 0x2184b1c.
  The `sd` at 0x2184ae4 stores 8 bytes to ret(malloc) +0x0.
  The `sd` at 0x2184b00 stores 8 bytes to ret(malloc) +0x10.
  The `sd` at 0x2184b0c stores 8 bytes to ret(malloc) +0x8.
  The `sd` at 0x2184b28 stores 8 bytes to ?.
  The `jalr` at 0x2184a70 calls strcmp with a0=?, a1=a0 at entry (arg0), a2=sym(strcmp), a3=?.
  The `jalr` at 0x2184a8c calls malloc with a0=0x18, a1=?, a2=?, a3=?.
  The `jalr` at 0x2184adc calls strdup with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x2184b30 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0x2184a5c targets 0x2184a88, is taken when at(=[0x21bfe18]:8) == 0, and falls through when at(=[0x21bfe18]:8) != 0.
  The `beq` branch at 0x2184a78 targets 0x2184b1c, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0x2184a84 targets 0x2184a64, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `bne` branch at 0x2184a98 targets 0x2184ad8, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x2184ae8 targets 0x2184b2c, is taken when v0(=ret(strdup)) == 0, and falls through when v0(=ret(strdup)) != 0.
  The `beq` branch at 0x2184b24 targets 0x2184ac0 and is always taken.
  The `beq` branch at 0x2184b38 targets 0x2184ac0 and is always taken.
  The return at 0x2184ab0 has v0 = 0x0.
  The return at 0x2184ad0 has v0 = one of ?, 0x0.
  The return at 0x2184b14 has v0 = 0x0.
  The instructions from 0x2184ab8 to 0x2184abc are not reached by any path from the entry, and their branches are not listed.

- `get_glx_proc_address` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2184b40 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2184b40-0x2184c18 (216 bytes).
  It occupies 216 bytes.
  5 such `ld` accesses load 8 bytes from ?, including `ld` at 0x2184b6c, `ld` at 0x2184b80, `ld` at 0x2184bbc.
  The `ld` at 0x2184b98 loads 8 bytes from abs 0x21bb8a0.
  The `jalr` at 0x2184b70 calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0x2184ba8 calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `beq` branch at 0x2184b60 targets 0x2184b8c, is taken when at(=[0x21bfe18]:8) == 0, and falls through when at(=[0x21bfe18]:8) != 0.
  The `beq` branch at 0x2184b78 targets 0x2184c00, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0x2184b84 targets 0x2184b6c, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0x2184b9c targets 0x2184bcc, is taken when a0(=[0x21bb8a0]:8) == 0, and falls through when a0(=[0x21bb8a0]:8) != 0.
  The `beq` branch at 0x2184bb0 targets 0x2184be4, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0x2184bc0 targets 0x2184ba8, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The return at 0x2184bdc has v0 = 0x0.
  The return at 0x2184bf8 has v0 = ?.
  The return at 0x2184c10 has v0 = ?.

- `__glXPostError` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2184d00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2184d00-0x2184db0 (176 bytes).
  It occupies 176 bytes.
  The `ld` at 0x2184d40 loads 8 bytes from sym(_XErrorFunction) +0x0.
  The `jalr` at 0x2184d34 calls __glXSetupForCommand with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x2184d74 calls (unknown callee) with a0=a0 at entry (arg0), a1=sp-96, a2=?, a3=?.
  The `jalr` at 0x2184d9c calls _XDefaultError with a0=a0 at entry (arg0), a1=sp-96, a2=?, a3=?.
  The `beq` branch at 0x2184d64 targets 0x2184d90, is taken when t9(=[sym(_XErrorFunction)]:8) == 0, and falls through when t9(=[sym(_XErrorFunction)]:8) != 0.
  The `beq` branch at 0x2184da8 targets 0x2184d84 and is always taken.
  The return at 0x2184d88 has v0 = one of ret(?), ret(_XDefaultError).

- `__glXPostHiddenError` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2184db0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2184db0-0x2184e08 (88 bytes).
  It occupies 88 bytes.
  The `lbu` at 0x2184db4 loads 1 byte from a1 (arg1 at entry) +0x0.
  The `lbu` at 0x2184dcc loads 1 byte from a1 (arg1 at entry) +0x1.
  The `jalr` at 0x2184df8 calls __glXPostError with a0=a0 at entry (arg0), a1=[a1+1]:1, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=[a1+1]:1, a6=0xb.
  The `bne` branch at 0x2184dc4 targets 0x2184de4, is taken when v0(=[a1]:1) != 0, and falls through when v0(=[a1]:1) == 0.
  The `beq` branch at 0x2184dd4 targets 0x2184df0, is taken when a5(=[a1+1]:1) == v0(=0xa), and falls through when a5(=[a1+1]:1) != v0(=0xa).
  The `beq` branch at 0x2184ddc targets 0x2184df4, is taken when a5(=[a1+1]:1) == a6(=0xb), and falls through when a5(=[a1+1]:1) != a6(=0xb).
  The `beq` branch at 0x2184e00 targets 0x2184de4 and is always taken.
  The return at 0x2184de8 has v0 = one of [a1]:1, 0xa, ret(__glXPostError).

- `__glXRemoveDrawableInterest` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2184e10 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2184e10-0x2184e4c (60 bytes).
  It occupies 60 bytes.
  The `lw` at 0x2184e28 loads 4 bytes from a0 (arg0 at entry) +0x20.
  The `sw` at 0x2184e38 stores 4 bytes to a0 (arg0 at entry) +0x20.
  The `jalr` at 0x2184e34 calls __glXFreeDrawablePrivate with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x2184e44 has v0 = ret(__glXFreeDrawablePrivate).

- `__glXInitDummyContext` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2184f00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2184f00-0x2184f2c (44 bytes).
  It occupies 44 bytes.
  The `ld` at 0x2184f0c loads 8 bytes from abs 0x21bcd60.
  The `sd` at 0x2184f18 stores 8 bytes to abs 0x21bc6e0.
  The `sw` at 0x2184f1c stores 4 bytes to abs 0x21bc6c4.
  The `ld` at 0x2184f20 loads 8 bytes from abs 0x1028.
  The `sd` at 0x2184f28 stores 8 bytes to [0x1028]:8 +0x128.
  The return at 0x2184f24 has v0 = 0x21bbf78.

- `__glXCloseDisplay` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21850e0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21850e0-0x2185168 (136 bytes).
  It occupies 136 bytes.
  The `ld` at 0x21850e0 loads 8 bytes from abs 0x1028.
  The `ld` at 0x21850e4 loads 8 bytes from [0x1028]:8 +0x128.
  The `ld` at 0x21850f0 loads 8 bytes from [[0x1028]:8+296]:8 +0x758.
  The `ld` at 0x218511c loads 8 bytes from sym(__glXExtensionInfo) +0x0.
  The `sd` at 0x218514c stores 8 bytes to [0x1028]:8 +0x128.
  The `jalr` at 0x2185118 calls XextRemoveDisplay with a0=[sym(__glXExtensionInfo)]:8, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0x2185148 calls _glapi_set_dispatch with a0=0x0, a1=0x21bbf78, a2=-0x4088, a3=[0x1028]:8.
  The `jalr` at 0x2185158 calls __glXFreeContext with a0=[[0x1028]:8+296]:8, a1=0x0, a2=?, a3=?.
  The `beq` branch at 0x2185108 targets 0x2185130, is taken when at(=[[[0x1028]:8+296]:8+1880]:8) == a0, and falls through when at(=[[[0x1028]:8+296]:8+1880]:8) != a0.
  The `beq` branch at 0x2185160 targets 0x2185110 and is always taken.
  The return at 0x2185128 has v0 = ret(XextRemoveDisplay).

- `__glXFindDisplay` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2185350 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2185350-0x2185410 (192 bytes).
  It occupies 192 bytes.
  2 such `ld` accesses load 8 bytes from sym(__glXExtensionInfo) +0x0, including `ld` at 0x2185368, `ld` at 0x21853b4.
  The `sd` at 0x21853f8 stores 8 bytes to sym(__glXExtensionInfo) +0x0.
  The `jalr` at 0x2185384 calls XextFindDisplay with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0x21853b8 calls XextAddDisplay with a0=[sym(__glXExtensionInfo)]:8, a1=a0 at entry (arg0), a2=[0x21bfd00]:8, a3=0x21bc838, a4=0x11, a5=0x0, a6=-0x37c8.
  The `jalr` at 0x21853e0 calls XextCreateExtension with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[sym(__glXExtensionInfo)]:8, a5=0x3f968.
  The `beq` branch at 0x2185374 targets 0x21853dc, is taken when a4(=[sym(__glXExtensionInfo)]:8) == 0, and falls through when a4(=[sym(__glXExtensionInfo)]:8) != 0.
  The `bne` branch at 0x218538c targets 0x21853c4, is taken when v0(=ret(XextFindDisplay)) != 0, and falls through when v0(=ret(XextFindDisplay)) == 0.
  The `bne` branch at 0x21853f4 targets 0x218537c, is taken when v0(=ret(XextCreateExtension)) != 0, and falls through when v0(=ret(XextCreateExtension)) == 0.
  The return at 0x21853d4 has v0 = one of ret(XextFindDisplay), ret(XextAddDisplay).
  The return at 0x2185408 has v0 = 0x0.

- `__glXQueryServerString` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2185700 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2185700-0x2185894 (404 bytes).
  It occupies 404 bytes.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x2185704, `ld` at 0x21857fc, `ld` at 0x218582c.
  The `ld` at 0x218573c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x2185748, `ld` at 0x218577c, `ld` at 0x2185890.
  The `ld` at 0x218574c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x2185768 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x2185770, `sb` at 0x21857bc.
  The `sh` at 0x2185778 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x2185784 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x2185790 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x2185798 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sw` at 0x218579c stores 4 bytes to [a0+176]:8 +0x8.
  The `sw` at 0x21857a4 stores 4 bytes to [a0+176]:8 +0x4.
  The `sb` at 0x21857b0 stores 1 byte to [a0+176]:8 +0x1.
  The `ld` at 0x2185838 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x2185844 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `jalr` at 0x2185740 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a6=[a0+2408]:8.
  The `jalr` at 0x21857b8 calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x0, a3=0x0, a4=0x13, a5=a3 at entry (arg3), a6=[a0+152]:8+1, a7=0x1.
  The `jalr` at 0x21857d8 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21857f0 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x218580c calls _XRead with a0=a0 at entry (arg0), a1=ret(malloc), a2=?, a3=?.
  The `jalr` at 0x2185824 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x218583c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=[a0+2408]:8.
  The `jalr` at 0x2185850 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x2185884 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x2185734 targets 0x2185748, is taken when a6(=[a0+2408]:8) == 0, and falls through when a6(=[a0+2408]:8) != 0.
  The `bne` branch at 0x218575c targets 0x2185880, is taken when v1(=[a0+184]:8) < a0(=[a0+176]:8+12) (unsigned), and falls through when v1(=[a0+184]:8) >= a0(=[a0+176]:8+12) (unsigned).
  The `bne` branch at 0x21857e0 targets 0x2185800, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x21857f8 targets 0x2185830 and is always taken.
  The `beq` branch at 0x2185814 targets 0x218582c, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x2185830 targets 0x2185844, is taken when a6(=[a0+2408]:8) == 0, and falls through when a6(=[a0+2408]:8) != 0.
  The `beq` branch at 0x2185848 targets 0x218585c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x218588c targets 0x2185760 and is always taken.
  The return at 0x2185870 has v0 = ret(malloc).
  The instructions from 0x2185878 to 0x218587c are not reached by any path from the entry, and their branches are not listed.

- `getBoardNumErrHandler` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21858a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21858a0-0x21858a8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x21858a0 has v0 = 0x0.

- `__glXInitialize` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2188650 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2188650-0x2188ad0 (1152 bytes).
  It occupies 1152 bytes.
  7 such `ld` accesses load 8 bytes from ret(__glXFindDisplay) +0x10, including `ld` at 0x21886d0, `ld` at 0x218870c, `ld` at 0x2188798.
  4 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21886dc, `ld` at 0x2188720, `ld` at 0x2188944.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x0, including `ld` at 0x21886e8, `ld` at 0x2188950.
  2 such `lw` accesses load 4 bytes from [ret(__glXFindDisplay)+16]:8 +0x0, including `lw` at 0x2188718, `lw` at 0x2188928.
  3 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x2188730, `ld` at 0x2188780, `ld` at 0x2188988.
  The `ld` at 0x2188758 loads 8 bytes from ?.
  2 such `lw` accesses load 4 bytes from [ret(__glXFindDisplay)+16]:8 +0x4, including `lw` at 0x21887ac, `lw` at 0x21887e4.
  The `sw` at 0x21887e8 stores 4 bytes to ret(malloc) +0x8.
  The `lw` at 0x21887f0 loads 4 bytes from [ret(__glXFindDisplay)+16]:8 +0x8.
  The `sw` at 0x21887f4 stores 4 bytes to ret(malloc) +0xc.
  The `lw` at 0x21887fc loads 4 bytes from [ret(__glXFindDisplay)+16]:8 +0xc.
  The `sw` at 0x2188800 stores 4 bytes to ret(malloc) +0x10.
  The `sw` at 0x2188808 stores 4 bytes to ret(malloc) +0x14.
  The `sd` at 0x2188810 stores 8 bytes to ret(malloc) +0x0.
  The `sd` at 0x2188814 stores 8 bytes to ret(malloc) +0x20.
  The `sd` at 0x2188818 stores 8 bytes to ret(malloc) +0x28.
  The `sw` at 0x218881c stores 4 bytes to ret(malloc) +0x18.
  The `sb` at 0x2188824 stores 1 byte to ret(malloc) +0x5d.
  The `sb` at 0x2188830 stores 1 byte to ret(malloc) +0x85.
  The `sb` at 0x218883c stores 1 byte to ret(malloc) +0xad.
  The `sb` at 0x2188848 stores 1 byte to ret(malloc) +0xd5.
  The `sb` at 0x2188854 stores 1 byte to ret(malloc) +0xfd.
  The `sb` at 0x2188860 stores 1 byte to ret(malloc) +0x125.
  The `sb` at 0x218886c stores 1 byte to ret(malloc) +0x14d.
  The `sb` at 0x218887c stores 1 byte to ret(malloc) +0x175.
  The `sb` at 0x2188888 stores 1 byte to ret(malloc) +0x19d.
  The `sb` at 0x2188894 stores 1 byte to ret(malloc) +0x1c5.
  The `sb` at 0x21888a0 stores 1 byte to ret(malloc) +0x1ed.
  The `sb` at 0x21888ac stores 1 byte to ret(malloc) +0x215.
  The `sb` at 0x21888b8 stores 1 byte to ret(malloc) +0x23d.
  The `sb` at 0x21888c4 stores 1 byte to ret(malloc) +0x265.
  The `sb` at 0x21888cc stores 1 byte to ret(malloc) +0x28d.
  The `sb` at 0x21888d4 stores 1 byte to ret(malloc) +0x2b5.
  2 such `sd` accesses store 8 bytes to ret(malloc) +0x2c8, including `sd` at 0x21888f4, `sd` at 0x2188a54.
  The `sd` at 0x21888f8 stores 8 bytes to ret(malloc) +0x2b8.
  The `sd` at 0x21888fc stores 8 bytes to ret(malloc) +0x2c0.
  3 such `sd` accesses store 8 bytes to ?, including `sd` at 0x2188930, `sd` at 0x2188938, `sd` at 0x218893c.
  The `sw` at 0x2188940 stores 4 bytes to ?.
  The `lw` at 0x2188994 loads 4 bytes from ret(malloc) +0x14.
  The `lw` at 0x21889a0 loads 4 bytes from ret(malloc) +0x18.
  The `lw` at 0x21889ac loads 4 bytes from ret(malloc) +0x8.
  The `jalr` at 0x2188674 calls __glXFindDisplay with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x2188694 calls pthread_mutex_init with a0=sym(__glXmutex), a1=0x0, a2=sym(pthread_mutex_init), a3=?.
  The `jalr` at 0x21886a4 calls pthread_mutex_init with a0=sym(__glXSwapBuffersMutex), a1=0x0, a2=?, a3=?.
  The `jalr` at 0x21886b4 calls __glXInitThread with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21886c0 calls pthread_mutex_lock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0x21886ec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[ret(__glXFindDisplay)+16]:8, a4=[a0+2408]:8.
  The `jalr` at 0x2188700 calls XEHeadOfExtensionList with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=sym(XEHeadOfExtensionList).
  The `jalr` at 0x2188714 calls XFindOnExtensionList with a0=ret(XEHeadOfExtensionList), a1=[[ret(__glXFindDisplay)+16]:8], a2=?, a3=?.
  The `jalr` at 0x2188734 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+2408]:8.
  The `jalr` at 0x2188740 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0x2188784 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+2408]:8.
  The `bgezall` at 0x21887a8 calls (unnamed) [0x21855b0] with a0=a0 at entry (arg0), a1=[[ret(__glXFindDisplay)+16]:8+4], a2=sp-72, a3=sp-68.
  The `jalr` at 0x21887b8 calls malloc with a0=0x20, a1=?, a2=?, a3=?.
  The `jalr` at 0x21887d0 calls malloc with a0=0x2d0, a1=?, a2=?, a3=?.
  The `jalr` at 0x21888e4 calls getenv with a0=0x21b5090, a1=0x5090, a2=[[ret(__glXFindDisplay)+16]:8+8], a3=[[ret(__glXFindDisplay)+16]:8+4], a4=ret(malloc)+600, a5=ret(malloc)+560, a6=ret(malloc)+520, a7=ret(malloc)+480.
  The `bgezall` at 0x2188910 calls (unnamed) [0x2188320] with a0=a0 at entry (arg0), a1=ret(malloc), a2=?, a3=?.
  The `jalr` at 0x2188954 calls (unknown callee) with a0=a0 at entry (arg0), a1=[[ret(__glXFindDisplay)+16]:8], a2=sym(XEHeadOfExtensionList), a3=?, a4=[a0+2408]:8.
  The `jalr` at 0x2188964 calls XEHeadOfExtensionList with a0=a0 at entry (arg0), a1=?, a2=sym(XEHeadOfExtensionList), a3=?.
  The `jalr` at 0x2188974 calls XAddToExtensionList with a0=ret(XEHeadOfExtensionList), a1=?, a2=?, a3=?.
  The `jalr` at 0x218898c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+2408]:8.
  The `jalr` at 0x21889b8 calls __glXClientInfo with a0=a0 at entry (arg0), a1=[ret(malloc)+8], a2=?, a3=[ret(malloc)+20], a4=0x1.
  The `jalr` at 0x21889c8 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0x21889f4 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0x2188a04 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd00]:8, a2=?, a3=?.
  The `jalr` at 0x2188a2c calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0x2188a48 calls driCreateDisplay with a0=a0 at entry (arg0), a1=ret(malloc)+696, a2=?, a3=?.
  The `jalr` at 0x2188a60 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0x2188a80 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0x2188a8c calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x2188aa4 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0x2188ab0 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x2188ac0 calls free with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x2188680 targets 0x21886b0, is taken when v1(=[0x21bfd08]) == 0, and falls through when v1(=[0x21bfd08]) != 0.
  The `beq` branch at 0x21886c8 targets 0x21889f0, is taken when s1(=ret(__glXFindDisplay)) == 0, and falls through when s1(=ret(__glXFindDisplay)) != 0.
  The `beq` branch at 0x21886d4 targets 0x21889f0, is taken when a3(=[ret(__glXFindDisplay)+16]:8) == 0, and falls through when a3(=[ret(__glXFindDisplay)+16]:8) != 0.
  The `beq` branch at 0x21886e0 targets 0x21886f4, is taken when a4(=[a0+2408]:8) == 0, and falls through when a4(=[a0+2408]:8) != 0.
  The `beq` branch at 0x218871c targets 0x2188778, is taken when v0(=ret(XFindOnExtensionList)) == 0, and falls through when v0(=ret(XFindOnExtensionList)) != 0.
  The `beq` branch at 0x2188728 targets 0x218873c, is taken when a4(=[a0+2408]:8) == 0, and falls through when a4(=[a0+2408]:8) != 0.
  The `beq` branch at 0x2188778 targets 0x2188790, is taken when a4(=[a0+2408]:8) == 0, and falls through when a4(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21887b0 targets 0x2188a58, is taken when v0(=ret(0x21855b0)) == 0, and falls through when v0(=ret(0x21855b0)) != 0.
  The `beq` branch at 0x21887c0 targets 0x2188a24, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0x21887d8 targets 0x2188a70, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0x21888ec targets 0x2188a40, is taken when v0(=ret(getenv)) == 0, and falls through when v0(=ret(getenv)) != 0.
  The `beq` branch at 0x2188918 targets 0x2188a9c, is taken when v0(=ret(0x2188320)) == 0, and falls through when v0(=ret(0x2188320)) != 0.
  The `beq` branch at 0x2188948 targets 0x2188960, is taken when a4(=[a0+2408]:8) == 0, and falls through when a4(=[a0+2408]:8) != 0.
  The `beq` branch at 0x2188980 targets 0x2188994, is taken when a4(=[a0+2408]:8) == 0, and falls through when a4(=[a0+2408]:8) != 0.
  The `bne` branch at 0x218899c targets 0x21889c0, is taken when a3(=[ret(malloc)+20]) != a4(=0x1), and falls through when a3(=[ret(malloc)+20]) == a4(=0x1).
  The `blez` branch at 0x21889a4 targets 0x21889c0, is taken when v0(=[ret(malloc)+24]) <= 0 (signed), and falls through when v0(=[ret(malloc)+24]) > 0 (signed).
  The `beq` branch at 0x2188a34 targets 0x2188764 and is always taken.
  The `beq` branch at 0x2188a50 targets 0x2188900 and is always taken.
  The `beq` branch at 0x2188a68 targets 0x2188764 and is always taken.
  The `beq` branch at 0x2188a94 targets 0x2188764 and is always taken.
  The `beq` branch at 0x2188ac8 targets 0x2188764 and is always taken.
  The return at 0x218875c has v0 = ?.
  The return at 0x2188770 has v0 = 0x0.
  The return at 0x21889e4 has v0 = ret(malloc).
  The return at 0x2188a1c has v0 = 0x0.
  The instructions from 0x21889ec to 0x21889ec are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x2188a3c to 0x2188a3c are not reached by any path from the entry, and their branches are not listed.

- `__glXSetupForCommand` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2188ad0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2188ad0-0x2188b8c (188 bytes).
  It occupies 188 bytes.
  The `ld` at 0x2188ad8 loads 8 bytes from abs 0x1028.
  The `ld` at 0x2188adc loads 8 bytes from [0x1028]:8 +0x128.
  2 such `ld` accesses load 8 bytes from [[0x1028]:8+296]:8 +0x758, including `ld` at 0x2188ae0, `ld` at 0x2188b14.
  The `ld` at 0x2188b08 loads 8 bytes from [[0x1028]:8+296]:8 +0x8.
  The `lbu` at 0x2188b24 loads 1 byte from [[0x1028]:8+296]:8 +0x7c7.
  The `lbu` at 0x2188b74 loads 1 byte from ret(__glXInitialize) +0xb.
  The `jalr` at 0x2188b0c calls __glXFlushRenderBuffer with a0=[[0x1028]:8+296]:8, a1=[[[0x1028]:8+296]:8+8]:8, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x2188b44 calls __glXInitialize with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x2188afc targets 0x2188b40, is taken when at(=[[[0x1028]:8+296]:8+1880]:8) == 0, and falls through when at(=[[[0x1028]:8+296]:8+1880]:8) != 0.
  The `bne` branch at 0x2188b18 targets 0x2188b40, is taken when t8(=[[[0x1028]:8+296]:8+1880]:8) != s1(=a0), and falls through when t8(=[[[0x1028]:8+296]:8+1880]:8) == s1(=a0).
  The `bne` branch at 0x2188b50 targets 0x2188b70, is taken when v0(=ret(__glXInitialize)) != 0, and falls through when v0(=ret(__glXInitialize)) == 0.
  The return at 0x2188b30 has v0 = [[[0x1028]:8+296]:8+1991]:1.
  The return at 0x2188b68 has v0 = 0x0.
  The return at 0x2188b84 has v0 = [ret(__glXInitialize)+11]:1.
  The instructions from 0x2188b38 to 0x2188b3c are not reached by any path from the entry, and their branches are not listed.

- `__glXFlushRenderBuffer` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2188b90 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2188b90-0x2188cf0 (352 bytes).
  It occupies 352 bytes.
  The `ld` at 0x2188b98 loads 8 bytes from a0 (arg0 at entry) +0x758.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x0, including `ld` at 0x2188b9c, `ld` at 0x2188c6c, `ld` at 0x2188c9c.
  2 such `ld` accesses load 8 bytes from [a0+1880]:8 +0x968, including `ld` at 0x2188bd0, `ld` at 0x2188c70.
  The `ld` at 0x2188bdc loads 8 bytes from [[a0+1880]:8+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from [a0+1880]:8 +0xb0, including `ld` at 0x2188be8, `ld` at 0x2188c18, `ld` at 0x2188cec.
  The `ld` at 0x2188bec loads 8 bytes from [a0+1880]:8 +0xb8.
  The `sd` at 0x2188c04 stores 8 bytes to [a0+1880]:8 +0xa0.
  2 such `sb` accesses store 1 byte to [[a0+1880]:8+176]:8 +0x0, including `sb` at 0x2188c0c, `sb` at 0x2188c48.
  2 such `sh` accesses store 2 bytes to [[a0+1880]:8+176]:8 +0x2, including `sh` at 0x2188c14, `sh` at 0x2188c60.
  The `ld` at 0x2188c20 loads 8 bytes from [a0+1880]:8 +0x98.
  The `sd` at 0x2188c2c stores 8 bytes to [a0+1880]:8 +0xb0.
  The `sd` at 0x2188c34 stores 8 bytes to [a0+1880]:8 +0x98.
  The `lw` at 0x2188c38 loads 4 bytes from a0 (arg0 at entry) +0x7c4.
  The `sb` at 0x2188c3c stores 1 byte to [[a0+1880]:8+176]:8 +0x1.
  The `lhu` at 0x2188c44 loads 2 bytes from [[a0+1880]:8+176]:8 +0x2.
  The `lw` at 0x2188c50 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `sw` at 0x2188c58 stores 4 bytes to [[a0+1880]:8+176]:8 +0x4.
  The `ld` at 0x2188c7c loads 8 bytes from [[a0+1880]:8+2408]:8 +0x8.
  The `ld` at 0x2188c88 loads 8 bytes from [a0+1880]:8 +0xd0.
  2 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0x8, including `sd` at 0x2188cac, `sd` at 0x2188cc0.
  The `jalr` at 0x2188be0 calls (unknown callee) with a0=[a0+1880]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x2188c68 calls _XSend with a0=[a0+1880]:8, a1=[a0]:8, a2=?, a3=?, a5=[a0+96], a6=0x1, a7=[a0+1988].
  The `jalr` at 0x2188c80 calls (unknown callee) with a0=[a0+1880]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x2188c94 calls (unknown callee) with a0=[a0+1880]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x2188ce0 calls _XFlush with a0=[a0+1880]:8, a1=?, a2=[[a0+1880]:8+176]:8+8, a3=?.
  The `beq` branch at 0x2188bb8 targets 0x2188cc0, is taken when s0(=[a0+1880]:8) == 0, and falls through when s0(=[a0+1880]:8) != 0.
  The `beq` branch at 0x2188bc8 targets 0x2188ca4, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x2188bd4 targets 0x2188be8, is taken when v0(=[[a0+1880]:8+2408]:8) == 0, and falls through when v0(=[[a0+1880]:8+2408]:8) != 0.
  The `bne` branch at 0x2188bfc targets 0x2188cdc, is taken when a1(=[[a0+1880]:8+184]:8) < a2(=[[a0+1880]:8+176]:8+8) (unsigned), and falls through when a1(=[[a0+1880]:8+184]:8) >= a2(=[[a0+1880]:8+176]:8+8) (unsigned).
  The `beq` branch at 0x2188c74 targets 0x2188c88, is taken when v0(=[[a0+1880]:8+2408]:8) == 0, and falls through when v0(=[[a0+1880]:8+2408]:8) != 0.
  The `beq` branch at 0x2188c8c targets 0x2188c9c, is taken when t9(=[[a0+1880]:8+208]:8) == 0, and falls through when t9(=[[a0+1880]:8+208]:8) != 0.
  The `beq` branch at 0x2188ce8 targets 0x2188c00 and is always taken.
  The return at 0x2188cb4 has v0 = [a0]:8.
  The return at 0x2188cd4 has v0 = [a0]:8.
  The instructions from 0x2188cbc to 0x2188cbc are not reached by any path from the entry, and their branches are not listed.

- `__glXSendLargeCommand` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2188cf0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2188cf0-0x218907c (908 bytes).
  It occupies 908 bytes.
  The `lw` at 0x2188cf8 loads 4 bytes from a0 (arg0 at entry) +0x20.
  The `ld` at 0x2188d50 loads 8 bytes from a0 (arg0 at entry) +0x758.
  2 such `ld` accesses load 8 bytes from [a0+1880]:8 +0x968, including `ld` at 0x2188d60, `ld` at 0x218900c.
  The `ld` at 0x2188d78 loads 8 bytes from [[a0+1880]:8+2408]:8 +0x0.
  12 such `ld` accesses load 8 bytes from [a0+1880]:8 +0xb0, including `ld` at 0x2188d84, `ld` at 0x2188db8, `ld` at 0x2188e10.
  5 such `ld` accesses load 8 bytes from [a0+1880]:8 +0xb8, including `ld` at 0x2188d88, `ld` at 0x2188e14, `ld` at 0x2188efc.
  3 such `sd` accesses store 8 bytes to [a0+1880]:8 +0xa0, including `sd` at 0x2188da4, `sd` at 0x2188e98, `sd` at 0x2188f68.
  6 such `sb` accesses store 1 byte to [[a0+1880]:8+176]:8 +0x0, including `sb` at 0x2188dac, `sb` at 0x2188de0, `sb` at 0x2188ea0.
  6 such `sh` accesses store 2 bytes to [[a0+1880]:8+176]:8 +0x2, including `sh` at 0x2188db4, `sh` at 0x2188e0c, `sh` at 0x2188ea8.
  3 such `ld` accesses load 8 bytes from [a0+1880]:8 +0x98, including `ld` at 0x2188dc0, `ld` at 0x2188eb4, `ld` at 0x2188f7c.
  5 such `sd` accesses store 8 bytes to [a0+1880]:8 +0xb0, including `sd` at 0x2188dcc, `sd` at 0x2188e48, `sd` at 0x2188ec0.
  3 such `sd` accesses store 8 bytes to [a0+1880]:8 +0x98, including `sd` at 0x2188dd4, `sd` at 0x2188ec8, `sd` at 0x2188f90.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7c4, including `lw` at 0x2188dd8, `lw` at 0x2188ecc, `lw` at 0x2188f9c.
  3 such `sb` accesses store 1 byte to [[a0+1880]:8+176]:8 +0x1, including `sb` at 0x2188ddc, `sb` at 0x2188ed0, `sb` at 0x2188fa0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x60, including `lw` at 0x2188de4, `lw` at 0x2188ed8, `lw` at 0x2188fa8.
  3 such `sh` accesses store 2 bytes to [[a0+1880]:8+176]:8 +0x8, including `sh` at 0x2188dec, `sh` at 0x2188edc, `sh` at 0x2188fb8.
  3 such `sh` accesses store 2 bytes to [[a0+1880]:8+176]:8 +0xa, including `sh` at 0x2188df0, `sh` at 0x2188ee0, `sh` at 0x2188fb0.
  3 such `sw` accesses store 4 bytes to [[a0+1880]:8+176]:8 +0xc, including `sw` at 0x2188df4, `sw` at 0x2188ee4, `sw` at 0x2188fac.
  3 such `lhu` accesses load 2 bytes from [[a0+1880]:8+176]:8 +0x2, including `lhu` at 0x2188dfc, `lhu` at 0x2188ee8, `lhu` at 0x2188fb4.
  3 such `sw` accesses store 4 bytes to [[a0+1880]:8+176]:8 +0x4, including `sw` at 0x2188e04, `sw` at 0x2188eec, `sw` at 0x2188fc4.
  The `ld` at 0x2189018 loads 8 bytes from [[a0+1880]:8+2408]:8 +0x8.
  The `ld` at 0x2189024 loads 8 bytes from [a0+1880]:8 +0xd0.
  The `jalr` at 0x2188d7c calls (unknown callee) with a0=[a0+1880]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a6=[[a0+1880]:8+2408]:8.
  The `jalr` at 0x2188e2c calls memcpy with a0=[[a0+1880]:8+176]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a0+96], a4=0x2, a5=[a0+1988], a6=[[a0+1880]:8+152]:8+1, a7=0x1.
  The `jalr` at 0x2188e5c calls _XSend with a0=[a0+1880]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a0+96], a4=0x2, a5=[a0+1988], a6=[[a0+1880]:8+152]:8+1, a7=0x1.
  The `jalr` at 0x2188e88 calls _XFlush with a0=[a0+1880]:8, a1=[[a0+1880]:8+176]:8+16, a2=[[a0+1880]:8+184]:8, a3=[[a0+1880]:8+176]:8, a4=0x10.
  The `jalr` at 0x2188f1c calls _XSend with a0=[a0+1880]:8, a1=?, a2=?, a3=?, a5=one of 0x1, 0x2.
  The `jalr` at 0x2188fe8 calls memcpy with a0=[[a0+1880]:8+176]:8, a1=?, a2=?, a3=?, a5=one of 0x1, 0x2.
  The `jalr` at 0x218901c calls (unknown callee) with a0=[a0+1880]:8, a1=?, a2=?, a3=?, a6=[[a0+1880]:8+2408]:8.
  The `jalr` at 0x2189030 calls (unknown callee) with a0=[a0+1880]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x218906c calls _XFlush with a0=[a0+1880]:8, a1=?, a2=?, a3=?.
  The `beq` branch at 0x2188d64 targets 0x2188d70, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x2188d70 targets 0x2188d84, is taken when a6(=[[a0+1880]:8+2408]:8) == 0, and falls through when a6(=[[a0+1880]:8+2408]:8) != 0.
  The `bne` branch at 0x2188d98 targets 0x2189068, is taken when t9(=[[a0+1880]:8+184]:8) < ra(=[[a0+1880]:8+176]:8+16) (unsigned), and falls through when t9(=[[a0+1880]:8+184]:8) >= ra(=[[a0+1880]:8+176]:8+16) (unsigned).
  The `bne` branch at 0x2188e20 targets 0x2188e4c, is taken when at(=[[a0+1880]:8+184]:8) < v0(=(a2 + [[a0+1880]:8+176]:8)) (unsigned), and falls through when at(=[[a0+1880]:8+184]:8) >= v0(=(a2 + [[a0+1880]:8+176]:8)) (unsigned).
  The `beq` branch at 0x2188e44 targets 0x2188e64 and is always taken.
  The `blez` branch at 0x2188e64 targets 0x218900c, is taken when s2(=a4) <= 0 (signed), and falls through when s2(=a4) > 0 (signed).
  The `beq` branch at 0x2188e70 targets 0x2188f34 and is always taken.
  The `beq` branch at 0x2188f08 targets 0x2188fe0, is taken when v1(=[[a0+1880]:8+184]:8) >= a1(?) (unsigned), and falls through when v1(=[[a0+1880]:8+184]:8) < a1(?) (unsigned).
  The `blez` branch at 0x2188f2c targets 0x2189008, is taken when s2(?) <= 0 (signed), and falls through when s2(?) > 0 (signed).
  The `beq` branch at 0x2188f4c targets 0x2188f58, is taken when s6(=([a0+32]-16 << 0x0)) >= s2(?) (signed), and falls through when s6(=([a0+32]-16 << 0x0)) < s2(?) (signed).
  The `bne` branch at 0x2188f60 targets 0x2188e80, is taken when a2(=[[a0+1880]:8+184]:8) < a1(=[[a0+1880]:8+176]:8+16) (unsigned), and falls through when a2(=[[a0+1880]:8+184]:8) >= a1(=[[a0+1880]:8+176]:8+16) (unsigned).
  The `bne` branch at 0x2188fd8 targets 0x2188f10, is taken when at(=[[a0+1880]:8+184]:8) < v0(?) (unsigned), and falls through when at(=[[a0+1880]:8+184]:8) >= v0(?) (unsigned).
  The `beq` branch at 0x2189000 targets 0x2188f24 and is always taken.
  The `beq` branch at 0x2189010 targets 0x2189024, is taken when a6(=[[a0+1880]:8+2408]:8) == 0, and falls through when a6(=[[a0+1880]:8+2408]:8) != 0.
  The `beq` branch at 0x2189028 targets 0x218903c, is taken when t9(=[[a0+1880]:8+208]:8) == 0, and falls through when t9(=[[a0+1880]:8+208]:8) != 0.
  The `beq` branch at 0x2189074 targets 0x2188da0 and is always taken.
  The return at 0x2189060 has v0 = one of ?, ret(?).
  The instructions from 0x2188e78 to 0x2188e7c are not reached by any path from the entry, and their branches are not listed.

- `__glXMakeContextCurrent` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2189770 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2189770-0x218a224 (2740 bytes).
  It occupies 2740 bytes.
  4 such `ld` accesses load 8 bytes from abs 0x1028, including `ld` at 0x21897d4, `ld` at 0x2189acc, `ld` at 0x2189be4.
  The `ld` at 0x21897d8 loads 8 bytes from [0x1028]:8 +0x128.
  7 such `lw` accesses load 4 bytes from [[0x1028]:8+296]:8 +0x74c, including `lw` at 0x21897dc, `lw` at 0x21898f4, `lw` at 0x2189d4c.
  4 such `ld` accesses load 8 bytes from [[0x1028]:8+296]:8 +0x768, including `ld` at 0x21897f0, `ld` at 0x2189824, `ld` at 0x2189838.
  2 such `ld` accesses load 8 bytes from [[0x1028]:8+296]:8 +0x760, including `ld` at 0x21897fc, `ld` at 0x2189ad0.
  The `ld` at 0x2189808 loads 8 bytes from [[0x1028]:8+296]:8 +0x808.
  5 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x74c, including `lw` at 0x218981c, `lw` at 0x2189874, `lw` at 0x21899cc.
  The `ld` at 0x2189840 loads 8 bytes from [[0x1028]:8+296]:8 +0x7f8.
  The `lw` at 0x2189844 loads 4 bytes from [[0x1028]:8+296]:8 +0x3c.
  3 such `ld` accesses load 8 bytes from [[0x1028]:8+296]:8 +0x758, including `ld` at 0x2189850, `ld` at 0x2189ad8, `ld` at 0x2189db8.
  The `ld` at 0x218985c loads 8 bytes from [[0x1028]:8+296]:8 +0x778.
  The `ld` at 0x2189864 loads 8 bytes from [[0x1028]:8+296]:8 +0x770.
  3 such `sw` accesses store 4 bytes to [[0x1028]:8+296]:8 +0x60, including `sw` at 0x2189868, `sw` at 0x21899f0, `sw` at 0x2189df0.
  8 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x3c, including `lw` at 0x21898a8, `lw` at 0x2189a0c, `lw` at 0x2189a48.
  2 such `lw` accesses load 4 bytes from ret(__glXAddDrawableInterest) +0xc, including `lw` at 0x21898ac, `lw` at 0x2189d34.
  2 such `ld` accesses load 8 bytes from a3 (arg3 at entry) +0x50, including `ld` at 0x21898b8, `ld` at 0x2189a34.
  The `ld` at 0x21898bc loads 8 bytes from ret(__glXAddDrawableInterest) +0x10.
  The `lw` at 0x21898c8 loads 4 bytes from ret(__glXAddDrawableInterest) +0x40.
  3 such `lw` accesses load 4 bytes from [[0x1028]:8+296]:8 +0x60, including `lw` at 0x2189918, `lw` at 0x2189dc0, `lw` at 0x2189f98.
  2 such `lbu` accesses load 1 byte from a3 (arg3 at entry) +0x39, including `lbu` at 0x218992c, `lbu` at 0x2189a18.
  5 such `ld` accesses load 8 bytes from ?, including `ld` at 0x21899fc, `ld` at 0x2189a90, `ld` at 0x2189e90.
  7 such `sd` accesses store 8 bytes to ?, including `sd` at 0x2189a08, `sd` at 0x2189a30, `sd` at 0x2189a38.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0x2189a14, `sw` at 0x2189a24, `sw` at 0x2189e2c.
  2 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x7d0, including `lw` at 0x2189a58, `lw` at 0x2189e50.
  2 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x7d4, including `lw` at 0x2189a68, `lw` at 0x2189e60.
  8 such `lw` accesses load 4 bytes from ?, including `lw` at 0x2189a80, `lw` at 0x2189aac, `lw` at 0x2189abc.
  2 such `sd` accesses store 8 bytes to [0x1028]:8 +0x128, including `sd` at 0x2189adc, `sd` at 0x2189d9c.
  The `sd` at 0x2189ae4 stores 8 bytes to a3 (arg3 at entry) +0x778.
  The `sd` at 0x2189ae8 stores 8 bytes to a3 (arg3 at entry) +0x760.
  The `sd` at 0x2189aec stores 8 bytes to a3 (arg3 at entry) +0x770.
  The `sd` at 0x2189af0 stores 8 bytes to a3 (arg3 at entry) +0x768.
  The `sd` at 0x2189af8 stores 8 bytes to a3 (arg3 at entry) +0x758.
  The `ld` at 0x2189afc loads 8 bytes from a3 (arg3 at entry) +0x808.
  2 such `ld` accesses load 8 bytes from [[0x1028]:8+296]:8 +0x28, including `ld` at 0x2189b28, `ld` at 0x218a030.
  The `sw` at 0x2189b34 stores 4 bytes to [[0x1028]:8+296]:8 +0x750.
  The `sw` at 0x2189b38 stores 4 bytes to [[0x1028]:8+296]:8 +0x754.
  2 such `sd` accesses store 8 bytes to [[0x1028]:8+296]:8 +0x770, including `sd` at 0x2189b3c, `sd` at 0x2189c78.
  2 such `sd` accesses store 8 bytes to [[0x1028]:8+296]:8 +0x778, including `sd` at 0x2189b40, `sd` at 0x2189c88.
  2 such `sd` accesses store 8 bytes to [[0x1028]:8+296]:8 +0x768, including `sd` at 0x2189b44, `sd` at 0x2189c90.
  2 such `sd` accesses store 8 bytes to [[0x1028]:8+296]:8 +0x760, including `sd` at 0x2189b48, `sd` at 0x2189c8c.
  2 such `sd` accesses store 8 bytes to [[0x1028]:8+296]:8 +0x758, including `sd` at 0x2189b4c, `sd` at 0x2189c9c.
  5 such `ld` accesses load 8 bytes from a3 (arg3 at entry) +0x28, including `ld` at 0x2189bd4, `ld` at 0x2189ca8, `ld` at 0x2189ed4.
  The `lw` at 0x2189be0 loads 4 bytes from a3 (arg3 at entry) +0x750.
  The `lw` at 0x2189bec loads 4 bytes from [0x1028]:8 +0x0.
  The `lw` at 0x2189bf8 loads 4 bytes from a3 (arg3 at entry) +0x754.
  2 such `lw` accesses load 4 bytes from [0x1028]:8 +0x4, including `lw` at 0x2189bfc, `lw` at 0x2189cec.
  The `ld` at 0x2189c50 loads 8 bytes from a3 (arg3 at entry) +0x7f0.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x750, including `sw` at 0x2189ce4, `sw` at 0x218a04c.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x754, including `sw` at 0x2189cf8, `sw` at 0x218a050.
  The `ld` at 0x2189d40 loads 8 bytes from ret(__glXAddDrawableInterest) +0x18.
  The `sw` at 0x2189f68 stores 4 bytes to a3 (arg3 at entry) +0x60.
  The `sb` at 0x218a004 stores 1 byte to a3 (arg3 at entry) +0x7d8.
  The `lw` at 0x218a024 loads 4 bytes from [[0x1028]:8+296]:8 +0x7cc.
  The `jalr` at 0x21897ac calls __glXInitThread with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21897b8 calls __glXSetupForCommand with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x218984c calls (unknown callee) with a0=[[[0x1028]:8+296]:8+1880]:8, a1=[[[0x1028]:8+296]:8+60], a2=[[[0x1028]:8+296]:8+1896]:8, a3=[[0x1028]:8+296]:8, a4=one of 0x0, 0x1.
  The `jalr` at 0x2189898 calls __glXAddDrawableInterest with a0=a1 at entry (arg1), a1=sym(__glXAddDrawableInterest), a2=?, a3=?.
  The `bgezall` at 0x2189948 calls __glXSendMakeCurrent [0x21893e0] with a0=a0 at entry (arg0), a1=a3 at entry (arg3), a2=?, a3=sp-176, a4=a1 at entry (arg1).
  The `bgezall` at 0x218996c calls __glXRestoreCurrent [0x21895a0] with a0=a3 at entry (arg3), a1=[[0x1028]:8+296]:8, a2=?, a3=?.
  The `bgezall` at 0x21899b4 calls __glXSendMakeCurrentRead [0x2189080] with a0=a0 at entry (arg0), a1=a3 at entry (arg3), a2=?, a3=sp-176, a4=a1 at entry (arg1), a5=a2 at entry (arg2).
  The `jalr` at 0x2189a4c calls __glXGetModes with a0=a0 at entry (arg0), a1=[a3+60], a2=?, a3=?, a5=sym(__glXGetModes).
  The `jalr` at 0x2189b60 calls __glXRemoveDrawableInterest with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x2189bcc calls pthread_mutex_lock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0x2189c18 calls __glXPostError with a0=a0 at entry (arg0), a1=0xa, a2=0x5, a3=[a3+40]:8.
  The `jalr` at 0x2189c24 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0x2189c64 calls (unknown callee) with a0=a0 at entry (arg0), a1=[a3+60], a2=a1 at entry (arg1), a3=a2 at entry (arg2), a4=a3 at entry (arg3).
  The `jalr` at 0x2189ca4 calls __glXPostError with a0=a0 at entry (arg0), a1=0xb, a2=0x5, a3=[a3+40]:8.
  The `bgezall` at 0x2189cc4 calls __glXRestoreCurrent [0x21895a0] with a0=a3 at entry (arg3), a1=[[0x1028]:8+296]:8, a2=?, a3=?.
  The `jalr` at 0x2189cf4 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=[[0x1028]:8], a2=?, a3=[a3+40]:8.
  The `jalr` at 0x2189d20 calls __glXAddDrawableInterest with a0=a2 at entry (arg2), a1=sym(__glXAddDrawableInterest), a2=[ret(__glXAddDrawableInterest)+12], a3=[a3+60].
  The `jalr` at 0x2189d74 calls __glXRemoveDrawableInterest with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x2189d98 calls _glapi_set_dispatch with a0=0x0, a1=?, a2=?, a3=?, a7=0x21bbf78.
  The `bgezall` at 0x2189ddc calls __glXSendMakeCurrent [0x21893e0] with a0=[[[0x1028]:8+296]:8+1880]:8, a1=0x0, a2=[[[0x1028]:8+296]:8+96], a3=sp-176, a4=0x0.
  The `jalr` at 0x2189e44 calls __glXGetModes with a0=a0 at entry (arg0), a1=[a3+60], a2=?, a3=?.
  The `jalr` at 0x2189e94 calls glXQueryDrawable with a0=a0 at entry (arg0), a1=?, a2=0x8025, a3=?, a4=sym(glXQueryDrawable).
  The `jalr` at 0x2189ed8 calls __glXPostError with a0=a0 at entry (arg0), a1=0xb, a2=0x5, a3=[a3+40]:8.
  The `bgezall` at 0x2189ef8 calls __glXRestoreCurrent [0x21895a0] with a0=a3 at entry (arg3), a1=[[0x1028]:8+296]:8, a2=?, a3=?.
  The `jalr` at 0x2189fdc calls glXQueryServerString with a0=a0 at entry (arg0), a1=[a3+60], a2=0x2, a3=[[[0x1028]:8+296]:8+1888]:8.
  The `jalr` at 0x2189ff0 calls strstr with a0=ret(glXQueryServerString), a1=0x21bfc50, a2=?, a3=?.
  The `jalr` at 0x218a014 calls _glapi_set_dispatch with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x218a034 calls __glXPostError with a0=a0 at entry (arg0), a1=[[[0x1028]:8+296]:8+1996]+1, a2=0x5, a3=[[[0x1028]:8+296]:8+40]:8.
  The `jalr` at 0x218a088 calls __glXFreeContext with a0=[[0x1028]:8+296]:8, a1=0x1, a2=?, a3=?.
  The `jalr` at 0x218a0ac calls glXQueryDrawable with a0=a0 at entry (arg0), a1=?, a2=0x8025, a3=?, a4=sym(glXQueryDrawable).
  The `jalr` at 0x218a0d8 calls __glXPostError with a0=a0 at entry (arg0), a1=0xb, a2=0x5, a3=[a3+40]:8.
  The `bgezall` at 0x218a0f8 calls __glXRestoreCurrent [0x21895a0] with a0=a3 at entry (arg3), a1=[[0x1028]:8+296]:8, a2=?, a3=0x0.
  The `jalr` at 0x218a10c calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=[a3+40]:8.
  The `jalr` at 0x218a154 calls __glXPostError with a0=a0 at entry (arg0), a1=0xb, a2=0x5, a3=[a3+40]:8.
  The `bgezall` at 0x218a174 calls __glXRestoreCurrent [0x21895a0] with a0=a3 at entry (arg3), a1=[[0x1028]:8+296]:8, a2=0x0, a3=0x0.
  The `bgezall` at 0x218a1e4 calls __glXRestoreCurrent [0x21895a0] with a0=a3 at entry (arg3), a1=[[0x1028]:8+296]:8, a2=?, a3=0x0.
  The `jalr` at 0x218a210 calls __glXNewIndirectAPI with a0=[0x21bfe20]:8, a1=?, a2=?, a3=[a3+1868].
  The `beq` branch at 0x21897c0 targets 0x2189f2c, is taken when v0(=ret(__glXSetupForCommand)) == 0, and falls through when v0(=ret(__glXSetupForCommand)) != 0.
  The `bne` branch at 0x21897c8 targets 0x2189bc8, is taken when s0(=a3) != 0, and falls through when s0(=a3) == 0.
  The `beq` branch at 0x21897e0 targets 0x2189d6c, is taken when v1(=[[[0x1028]:8+296]:8+1868]) == 0, and falls through when v1(=[[[0x1028]:8+296]:8+1868]) != 0.
  The `bne` branch at 0x21897e8 targets 0x2189808, is taken when s0(=a3) != s1(=[[0x1028]:8+296]:8), and falls through when s0(=a3) == s1(=[[0x1028]:8+296]:8).
  The `bne` branch at 0x21897f4 targets 0x2189808, is taken when t8(=[[[0x1028]:8+296]:8+1896]:8) != s2(=a1), and falls through when t8(=[[[0x1028]:8+296]:8+1896]:8) == s2(=a1).
  The `beq` branch at 0x2189800 targets 0x2189f9c, is taken when t9(=[[[0x1028]:8+296]:8+1888]:8) == s5(=a2), and falls through when t9(=[[[0x1028]:8+296]:8+1888]:8) != s5(=a2).
  The `beq` branch at 0x218980c targets 0x218985c, is taken when ra(=[[[0x1028]:8+296]:8+2056]:8) == 0, and falls through when ra(=[[[0x1028]:8+296]:8+2056]:8) != 0.
  The `beq` branch at 0x2189814 targets 0x2189838, is taken when s0(=a3) == 0, and falls through when s0(=a3) != 0.
  The `beq` branch at 0x2189820 targets 0x218983c, is taken when at(=[a3+1868]) == 0, and falls through when at(=[a3+1868]) != 0.
  The `bne` branch at 0x2189828 targets 0x2189840, is taken when a2(=[[[0x1028]:8+296]:8+1896]:8) != s2(=a1), and falls through when a2(=[[[0x1028]:8+296]:8+1896]:8) == s2(=a1).
  The `beq` branch at 0x2189830 targets 0x2189840 and is always taken.
  The `beq` branch at 0x2189854 targets 0x218a024, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `beq` branch at 0x218986c targets 0x21898ec, is taken when s0(=a3) == 0, and falls through when s0(=a3) != 0.
  The `beq` branch at 0x2189878 targets 0x21898f4, is taken when a0(=[a3+1868]) == 0, and falls through when a0(=[a3+1868]) != 0.
  The `beq` branch at 0x2189880 targets 0x21898f4, is taken when s2(=a1) == 0, and falls through when s2(=a1) != 0.
  The `beq` branch at 0x2189888 targets 0x21898f4, is taken when s5(=a2) == 0, and falls through when s5(=a2) != 0.
  The `beq` branch at 0x21898a0 targets 0x218a140, is taken when v0(=ret(__glXAddDrawableInterest)) == 0, and falls through when v0(=ret(__glXAddDrawableInterest)) != 0.
  The `bne` branch at 0x21898b0 targets 0x2189d04, is taken when a2(=[ret(__glXAddDrawableInterest)+12]) != a3(=[a3+60]), and falls through when a2(=[ret(__glXAddDrawableInterest)+12]) == a3(=[a3+60]).
  The `bne` branch at 0x21898c0 targets 0x2189d04, is taken when a4(=[ret(__glXAddDrawableInterest)+16]:8) != a5(=[a3+80]:8), and falls through when a4(=[ret(__glXAddDrawableInterest)+16]:8) == a5(=[a3+80]:8).
  The `beq` branch at 0x21898d0 targets 0x2189d04, is taken when a6(=[ret(__glXAddDrawableInterest)+64]) == a7(=0x3), and falls through when a6(=[ret(__glXAddDrawableInterest)+64]) != a7(=0x3).
  The `beq` branch at 0x21898d8 targets 0x218a060, is taken when s2(=a1) == s5(=a2), and falls through when s2(=a1) != s5(=a2).
  The `beq` branch at 0x21898e4 targets 0x2189d14 and is always taken.
  The `beq` branch at 0x21898ec targets 0x2189f6c, is taken when s2(=a1) == 0, and falls through when s2(=a1) != 0.
  The `beq` branch at 0x21898f8 targets 0x2189e00, is taken when t0(=[[[0x1028]:8+296]:8+1868]) == 0, and falls through when t0(=[[[0x1028]:8+296]:8+1868]) != 0.
  The `beq` branch at 0x2189910 targets 0x2189da8, is taken when a1(=[[[0x1028]:8+296]:8+1868]) == 0, and falls through when a1(=[[[0x1028]:8+296]:8+1868]) != 0.
  The `beq` branch at 0x2189924 targets 0x2189938, is taken when s0(=a3) == 0, and falls through when s0(=a3) != 0.
  The `bne` branch at 0x2189930 targets 0x2189988, is taken when at(=[a3+57]:1) != 0, and falls through when at(=[a3+57]:1) == 0.
  The `bne` branch at 0x2189938 targets 0x2189988, is taken when s2(=a1) != s5(=a2), and falls through when s2(=a1) == s5(=a2).
  The `bne` branch at 0x2189950 targets 0x21899c4, is taken when v0(=ret(__glXSendMakeCurrent)) != 0, and falls through when v0(=ret(__glXSendMakeCurrent)) == 0.
  The `beq` branch at 0x2189980 targets 0x2189ba0 and is always taken.
  The `beq` branch at 0x21899bc targets 0x2189958, is taken when v0(=ret(__glXSendMakeCurrentRead)) == 0, and falls through when v0(=ret(__glXSendMakeCurrentRead)) != 0.
  The `beq` branch at 0x21899c4 targets 0x21899d8, is taken when s0(=a3) == 0, and falls through when s0(=a3) != 0.
  The `beq` branch at 0x21899d0 targets 0x2189f64, is taken when at(=[a3+1868]) == 0, and falls through when at(=[a3+1868]) != 0.
  The `beq` branch at 0x21899d8 targets 0x21899f4, is taken when s0(=a3) == s1(=[[0x1028]:8+296]:8), and falls through when s0(=a3) != s1(=[[0x1028]:8+296]:8).
  The `beq` branch at 0x21899e8 targets 0x21899f4, is taken when s1(=[[0x1028]:8+296]:8) == v1(=0x21bbf78), and falls through when s1(=[[0x1028]:8+296]:8) != v1(=0x21bbf78).
  The `beq` branch at 0x21899f4 targets 0x2189ac8, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `bne` branch at 0x2189a00 targets 0x2189a90, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x2189a10 targets 0x2189a34, is taken when s0(=a3) == 0, and falls through when s0(=a3) != 0.
  The `beq` branch at 0x2189a1c targets 0x2189a34, is taken when a3(=[a3+57]:1) == 0, and falls through when a3(=[a3+57]:1) != 0.
  The `beq` branch at 0x2189a2c targets 0x2189a40 and is always taken.
  The `beq` branch at 0x2189a60 targets 0x2189a80, is taken when a6(=[a3+2000]) >= 0x2 (signed), and falls through when a6(=[a3+2000]) < 0x2 (signed).
  The `bne` branch at 0x2189a78 targets 0x2189a90, is taken when a7(=[a3+2004]) < 0x3 (signed), and falls through when a7(=[a3+2004]) >= 0x3 (signed).
  The `beq` branch at 0x2189a88 targets 0x218a098, is taken when t0(?) == t1(=0x6), and falls through when t0(?) != t1(=0x6).
  The `beq` branch at 0x2189a94 targets 0x2189e24, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x2189a9c targets 0x2189ac8, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x2189aa4 targets 0x2189ac8, is taken when s6(?) == s3(?), and falls through when s6(?) != s3(?).
  The `beq` branch at 0x2189ab4 targets 0x2189ea4, is taken when t3(?) == v0(=0x4), and falls through when t3(?) != v0(=0x4).
  The `beq` branch at 0x2189ac0 targets 0x2189ea4, is taken when t8(?) == v0(=0x4), and falls through when t8(?) != v0(=0x4).
  The `beq` branch at 0x2189ac8 targets 0x2189d84, is taken when s0(=a3) == 0, and falls through when s0(=a3) != 0.
  The `beq` branch at 0x2189af4 targets 0x2189fd0, is taken when t9(=[a3+1868]) == 0, and falls through when t9(=[a3+1868]) != 0.
  The `bne` branch at 0x2189b08 targets 0x2189c50, is taken when ra(=[a3+2056]:8) != 0, and falls through when ra(=[a3+2056]:8) == 0.
  The `beq` branch at 0x2189b10 targets 0x2189b50, is taken when s0(=a3) == s1(=[[0x1028]:8+296]:8), and falls through when s0(=a3) != s1(=[[0x1028]:8+296]:8).
  The `beq` branch at 0x2189b20 targets 0x2189b50, is taken when s1(=[[0x1028]:8+296]:8) == at(=0x21bbf78), and falls through when s1(=[[0x1028]:8+296]:8) != at(=0x21bbf78).
  The `beq` branch at 0x2189b2c targets 0x218a084, is taken when v1(=[[[0x1028]:8+296]:8+40]:8) == 0, and falls through when v1(=[[[0x1028]:8+296]:8+40]:8) != 0.
  The `beq` branch at 0x2189b50 targets 0x2189b70, is taken when s7(?) == 0, and falls through when s7(?) != 0.
  The `bne` branch at 0x2189b6c targets 0x2189d74, is taken when s7(?) != a0(?), and falls through when s7(?) == a0(?).
  The `beq` branch at 0x2189bd8 targets 0x218a10c, is taken when a3(=[a3+40]:8) == 0, and falls through when a3(=[a3+40]:8) != 0.
  The `beq` branch at 0x2189be8 targets 0x2189ce0, is taken when a2(=[a3+1872]) == 0, and falls through when a2(=[a3+1872]) != 0.
  The `bne` branch at 0x2189bf0 targets 0x2189c08, is taken when a2(=[a3+1872]) != a1(=[[0x1028]:8]), and falls through when a2(=[a3+1872]) == a1(=[[0x1028]:8]).
  The `beq` branch at 0x2189c00 targets 0x2189ce0, is taken when a2(=[[0x1028]:8+4]) == a4(=[a3+1876]), and falls through when a2(=[[0x1028]:8+4]) != a4(=[a3+1876]).
  The `bne` branch at 0x2189c6c targets 0x2189b10, is taken when v0(=ret(?)) != 0, and falls through when v0(=ret(?)) == 0.
  The `beq` branch at 0x2189cd8 targets 0x2189ba0 and is always taken.
  The `beq` branch at 0x2189cfc targets 0x21897d0 and is always taken.
  The `beq` branch at 0x2189d04 targets 0x2189f14, is taken when s2(=a1) == s5(=a2), and falls through when s2(=a1) != s5(=a2).
  The `beq` branch at 0x2189d28 targets 0x218a0c0, is taken when v0(=ret(__glXAddDrawableInterest)) == 0, and falls through when v0(=ret(__glXAddDrawableInterest)) != 0.
  The `bne` branch at 0x2189d38 targets 0x2189f54, is taken when a2(=[ret(__glXAddDrawableInterest)+12]) != a3(=[a3+60]), and falls through when a2(=[ret(__glXAddDrawableInterest)+12]) == a3(=[a3+60]).
  The `beq` branch at 0x2189d44 targets 0x2189f54, is taken when a4(=[ret(__glXAddDrawableInterest)+24]:8) == 0, and falls through when a4(=[ret(__glXAddDrawableInterest)+24]:8) != 0.
  The `beq` branch at 0x2189d50 targets 0x218a11c, is taken when a5(=[[[0x1028]:8+296]:8+1868]) == 0, and falls through when a5(=[[[0x1028]:8+296]:8+1868]) != 0.
  The `bne` branch at 0x2189d5c targets 0x2189910, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x2189d64 targets 0x2189a9c and is always taken.
  The `beq` branch at 0x2189d6c targets 0x218986c and is always taken.
  The `beq` branch at 0x2189d7c targets 0x2189b74 and is always taken.
  The `beq` branch at 0x2189da0 targets 0x2189b10 and is always taken.
  The `beq` branch at 0x2189db0 targets 0x2189f94, is taken when s1(=[[0x1028]:8+296]:8) == t1(=0x21bbf78), and falls through when s1(=[[0x1028]:8+296]:8) != t1(=0x21bbf78).
  The `beq` branch at 0x2189dbc targets 0x218991c, is taken when a0(=[[[0x1028]:8+296]:8+1880]:8) == s4(=a0), and falls through when a0(=[[[0x1028]:8+296]:8+1880]:8) != s4(=a0).
  The `beq` branch at 0x2189de4 targets 0x218a1c8, is taken when v0(=ret(__glXSendMakeCurrent)) == 0, and falls through when v0(=ret(__glXSendMakeCurrent)) != 0.
  The `beq` branch at 0x2189dec targets 0x218991c and is always taken.
  The `beq` branch at 0x2189e10 targets 0x2189fc4, is taken when s1(=[[0x1028]:8+296]:8) == t9(=0x21bbf78), and falls through when s1(=[[0x1028]:8+296]:8) != t9(=0x21bbf78).
  The `beq` branch at 0x2189e1c targets 0x2189910 and is always taken.
  The `beq` branch at 0x2189e58 targets 0x2189e70, is taken when v1(=[a3+2000]) >= 0x2 (signed), and falls through when v1(=[a3+2000]) < 0x2 (signed).
  The `bne` branch at 0x2189e68 targets 0x2189a9c, is taken when a0(=[a3+2004]) < 0x3 (signed), and falls through when a0(=[a3+2004]) >= 0x3 (signed).
  The `bne` branch at 0x2189e78 targets 0x2189a9c, is taken when a1(?) != a2(=0x6), and falls through when a1(?) == a2(=0x6).
  The `beq` branch at 0x2189e9c targets 0x2189a9c and is always taken.
  The `bne` branch at 0x2189eb0 targets 0x2189ac8, is taken when a4(?) < a5(?) (signed), and falls through when a4(?) >= a5(?) (signed).
  The `bne` branch at 0x2189ec4 targets 0x2189ac8, is taken when a6(?) < a7(?) (signed), and falls through when a6(?) >= a7(?) (signed).
  The `beq` branch at 0x2189f0c targets 0x2189ba0 and is always taken.
  The `beq` branch at 0x2189f24 targets 0x2189910 and is always taken.
  The `beq` branch at 0x2189f5c targets 0x2189910 and is always taken.
  The `beq` branch at 0x2189f64 targets 0x21899d8 and is always taken.
  The `bne` branch at 0x2189f6c targets 0x21898f4, is taken when s5(=a2) != 0, and falls through when s5(=a2) == 0.
  The `beq` branch at 0x2189f78 targets 0x218a1a4, is taken when a2(=[[[0x1028]:8+296]:8+1868]) == 0, and falls through when a2(=[[[0x1028]:8+296]:8+1868]) != 0.
  The `beq` branch at 0x2189f8c targets 0x2189ac8 and is always taken.
  The `beq` branch at 0x2189f94 targets 0x218991c and is always taken.
  The `beq` branch at 0x2189fc8 targets 0x2189910 and is always taken.
  The `bne` branch at 0x218a000 targets 0x2189b10, is taken when a3(=[a3+1868]) != 0, and falls through when a3(=[a3+1868]) == 0.
  The `beq` branch at 0x218a00c targets 0x218a20c, is taken when a0(=[0x21bfe20]:8) == 0, and falls through when a0(=[0x21bfe20]:8) != 0.
  The `beq` branch at 0x218a01c targets 0x2189b10 and is always taken.
  The `beq` branch at 0x218a03c targets 0x218a058, is taken when s0(=a3) == 0, and falls through when s0(=a3) != 0.
  The `beq` branch at 0x218a044 targets 0x218a058, is taken when s0(=a3) == s1(=[[0x1028]:8+296]:8), and falls through when s0(=a3) != s1(=[[0x1028]:8+296]:8).
  The `beq` branch at 0x218a058 targets 0x2189ba0 and is always taken.
  The `beq` branch at 0x218a06c targets 0x218a188, is taken when a2(=[[[0x1028]:8+296]:8+1868]) == 0, and falls through when a2(=[[[0x1028]:8+296]:8+1868]) != 0.
  The `bne` branch at 0x218a074 targets 0x2189aa4, is taken when v0(=ret(__glXAddDrawableInterest)) != 0, and falls through when v0(=ret(__glXAddDrawableInterest)) == 0.
  The `beq` branch at 0x218a07c targets 0x2189ac8 and is always taken.
  The `beq` branch at 0x218a090 targets 0x2189b50 and is always taken.
  The `beq` branch at 0x218a0b4 targets 0x2189a94 and is always taken.
  The `beq` branch at 0x218a104 targets 0x2189ba0 and is always taken.
  The `beq` branch at 0x218a114 targets 0x2189ba0 and is always taken.
  The `bne` branch at 0x218a128 targets 0x2189910, is taken when s1(=[[0x1028]:8+296]:8) != at(=0x21bbf78), and falls through when s1(=[[0x1028]:8+296]:8) == at(=0x21bbf78).
  The `beq` branch at 0x218a130 targets 0x2189d5c and is always taken.
  The `beq` branch at 0x218a180 targets 0x2189ba0 and is always taken.
  The `bne` branch at 0x218a194 targets 0x2189910, is taken when s1(=[[0x1028]:8+296]:8) != at(=0x21bbf78), and falls through when s1(=[[0x1028]:8+296]:8) == at(=0x21bbf78).
  The `beq` branch at 0x218a19c targets 0x2189a9c and is always taken.
  The `beq` branch at 0x218a1b4 targets 0x218a200, is taken when s1(=[[0x1028]:8+296]:8) == a0(=0x21bbf78), and falls through when s1(=[[0x1028]:8+296]:8) != a0(=0x21bbf78).
  The `beq` branch at 0x218a1c0 targets 0x2189910 and is always taken.
  The `beq` branch at 0x218a1f4 targets 0x2189ba0 and is always taken.
  The `beq` branch at 0x218a204 targets 0x2189ac8 and is always taken.
  The `beq` branch at 0x218a21c targets 0x218a010 and is always taken.
  The return at 0x2189b98 has v0 = 0x1.
  The return at 0x2189bc0 has v0 = 0x0.
  The return at 0x2189c48 has v0 = 0x0.
  The return at 0x2189f4c has v0 = 0x0.
  The return at 0x2189fbc has v0 = 0x1.
  The instructions from 0x2189df4 to 0x2189dfc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x218a0bc to 0x218a0bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x218a138 to 0x218a13c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x218a1fc to 0x218a1fc are not reached by any path from the entry, and their branches are not listed.

- `__glXFindDRIScreen` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x218a230 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x218a230-0x218a310 (224 bytes).
  It occupies 224 bytes.
  The `ld` at 0x218a284 loads 8 bytes from ret(__glXFindDisplay) +0x10.
  The `lw` at 0x218a294 loads 4 bytes from [ret(__glXFindDisplay)+16]:8 +0x0.
  The `ld` at 0x218a2c0 loads 8 bytes from ret(XFindOnExtensionList) +0x18.
  The `ld` at 0x218a2d0 loads 8 bytes from [ret(XFindOnExtensionList)+24]:8 +0x30.
  The `jalr` at 0x218a258 calls __glXFindDisplay with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x218a268 calls pthread_mutex_lock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `jalr` at 0x218a278 calls XEHeadOfExtensionList with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x218a290 calls XFindOnExtensionList with a0=ret(XEHeadOfExtensionList), a1=[[ret(__glXFindDisplay)+16]:8], a2=?, a3=?.
  The `jalr` at 0x218a2a4 calls pthread_mutex_unlock with a0=sym(__glXmutex), a1=?, a2=?, a3=?.
  The `beq` branch at 0x218a2ac targets 0x218a2f4, is taken when s0(=ret(XFindOnExtensionList)) == 0, and falls through when s0(=ret(XFindOnExtensionList)) != 0.
  The return at 0x218a2ec has v0 = table(0x40).
  The return at 0x218a308 has v0 = 0x0.

- `__glXDispatchExec` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x218b090 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x218b090-0x218b120 (144 bytes).
  It occupies 144 bytes.
  The `ld` at 0x218b090 loads 8 bytes from abs 0x1028.
  The `ld` at 0x218b0ac loads 8 bytes from [0x1028]:8 +0x128.
  The `lw` at 0x218b0b0 loads 4 bytes from [[0x1028]:8+296]:8 +0x74c.
  The `ld` at 0x218b0c0 loads 8 bytes from [[0x1028]:8+296]:8 +0x758.
  The `ld` at 0x218b0c4 loads 8 bytes from [[0x1028]:8+296]:8 +0x808.
  The `ld` at 0x218b0f0 loads 8 bytes from [[0x1028]:8+296]:8 +0x820.
  The `jalr` at 0x218b0f8 calls (unknown callee) with a0=[[0x1028]:8+296]:8, a1=[[[0x1028]:8+296]:8+2056]:8, a2=a2 at entry (arg2), a3=[0x1028]:8, a4=[[[0x1028]:8+296]:8+1880]:8, a5=sym(__glx_noop_dispatch).
  The `beq` branch at 0x218b0a4 targets 0x218b110, is taken when a3(=[0x1028]:8) == 0, and falls through when a3(=[0x1028]:8) != 0.
  The `beq` branch at 0x218b0bc targets 0x218b0d0, is taken when v1(=[[[0x1028]:8+296]:8+1868]) == 0, and falls through when v1(=[[[0x1028]:8+296]:8+1868]) != 0.
  The `bne` branch at 0x218b0c8 targets 0x218b0f0, is taken when a1(=[[[0x1028]:8+296]:8+2056]:8) != 0, and falls through when a1(=[[[0x1028]:8+296]:8+2056]:8) == 0.
  The `beq` branch at 0x218b0d0 targets 0x218b0e0, is taken when a4(=[[[0x1028]:8+296]:8+1880]:8) == 0, and falls through when a4(=[[[0x1028]:8+296]:8+1880]:8) != 0.
  The return at 0x218b0d8 has v0 = sym(__glx_indirect_dispatch).
  The return at 0x218b0e8 has v0 = sym(__glx_noop_dispatch).
  The return at 0x218b108 has v0 = ret(?).
  The return at 0x218b118 has v0 = sym(__glx_noop_dispatch).

- `__glXBeginDispatchOverride` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x218b120 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x218b120-0x218b33c (540 bytes).
  It occupies 540 bytes.
  The `ld` at 0x218b120 loads 8 bytes from abs 0x1088.
  The `ld` at 0x218b144 loads 8 bytes from abs 0x1028.
  The `sd` at 0x218b14c stores 8 bytes to abs 0x1088.
  The `ld` at 0x218b150 loads 8 bytes from [0x1028]:8 +0x128.
  The `lw` at 0x218b154 loads 4 bytes from [[0x1028]:8+296]:8 +0x74c.
  The `ld` at 0x218b160 loads 8 bytes from [[0x1028]:8+296]:8 +0x808.
  17 such `ld` accesses load 8 bytes from ?, including `ld` at 0x218b190, `ld` at 0x218b1cc, `ld` at 0x218b1dc.
  17 such `sd` accesses store 8 bytes to ?, including `sd` at 0x218b19c, `sd` at 0x218b1d0, `sd` at 0x218b1e0.
  The `ld` at 0x218b324 loads 8 bytes from [[0x1028]:8+296]:8 +0x828.
  The `jalr` at 0x218b32c calls (unknown callee) with a0=[[0x1028]:8+296]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x218b13c targets 0x218b314, is taken when v0(=[0x1088]:8) != 0, and falls through when v0(=[0x1088]:8) == 0.
  The `beq` branch at 0x218b148 targets 0x218b168, is taken when at(=[0x1028]:8) == 0, and falls through when at(=[0x1028]:8) != 0.
  The `beq` branch at 0x218b158 targets 0x218b16c, is taken when v0(=[[[0x1028]:8+296]:8+1868]) == 0, and falls through when v0(=[[[0x1028]:8+296]:8+1868]) != 0.
  The `bne` branch at 0x218b164 targets 0x218b324, is taken when v1(=[[[0x1028]:8+296]:8+2056]:8) != 0, and falls through when v1(=[[[0x1028]:8+296]:8+2056]:8) == 0.
  The `bne` branch at 0x218b198 targets 0x218b180, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x218b1c0 targets 0x218b26c and is always taken.
  The `bgtz` branch at 0x218b30c targets 0x218b1c8, is taken when a5(?) > 0 (signed), and falls through when a5(?) <= 0 (signed).
  The `beq` branch at 0x218b334 targets 0x218b168 and is always taken.
  The return at 0x218b31c has v0 = one of [0x1088]:8, 0x1090.

- `__glXEndDispatchOverride` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x218b340 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x218b340-0x218b56c (556 bytes).
  It occupies 556 bytes.
  The `ld` at 0x218b340 loads 8 bytes from abs 0x1088.
  The `ld` at 0x218b35c loads 8 bytes from abs 0x1028.
  The `sd` at 0x218b360 stores 8 bytes to abs 0x1088.
  The `ld` at 0x218b36c loads 8 bytes from [0x1028]:8 +0x128.
  The `lw` at 0x218b370 loads 4 bytes from [[0x1028]:8+296]:8 +0x74c.
  The `ld` at 0x218b37c loads 8 bytes from [[0x1028]:8+296]:8 +0x808.
  17 such `ld` accesses load 8 bytes from ?, including `ld` at 0x218b3bc, `ld` at 0x218b404, `ld` at 0x218b414.
  17 such `sd` accesses store 8 bytes to ?, including `sd` at 0x218b3c8, `sd` at 0x218b408, `sd` at 0x218b418.
  The `ld` at 0x218b558 loads 8 bytes from [[0x1028]:8+296]:8 +0x830.
  The `jalr` at 0x218b388 calls __glXDispatchExec with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x218b55c calls (unknown callee) with a0=[[0x1028]:8+296]:8, a1=[[[0x1028]:8+296]:8+2056]:8, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x218b354 targets 0x218b54c, is taken when v1(=[0x1088]:8) == 0, and falls through when v1(=[0x1088]:8) != 0.
  The `beq` branch at 0x218b364 targets 0x218b384, is taken when at(=[0x1028]:8) == 0, and falls through when at(=[0x1028]:8) != 0.
  The `beq` branch at 0x218b374 targets 0x218b388, is taken when v1(=[[[0x1028]:8+296]:8+1868]) == 0, and falls through when v1(=[[[0x1028]:8+296]:8+1868]) != 0.
  The `bne` branch at 0x218b380 targets 0x218b558, is taken when a1(=[[[0x1028]:8+296]:8+2056]:8) != 0, and falls through when a1(=[[[0x1028]:8+296]:8+2056]:8) == 0.
  The `bne` branch at 0x218b3c4 targets 0x218b3ac, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x218b3f0 targets 0x218b4a4 and is always taken.
  The `bgtz` branch at 0x218b544 targets 0x218b400, is taken when a5(?) > 0 (signed), and falls through when a5(?) <= 0 (signed).
  The `beq` branch at 0x218b564 targets 0x218b388 and is always taken.
  The return at 0x218b550 has v0 = one of ?, 0x1090.
  The instructions from 0x218b3f8 to 0x218b3fc are not reached by any path from the entry, and their branches are not listed.

- `__glXInitializeVideoLibrary` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x218bca0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x218bca0-0x218bd5c (188 bytes).
  It occupies 188 bytes.
  The `ld` at 0x218bcc0 loads 8 bytes from abs 0x21c5ee8.
  The `sd` at 0x218bd04 stores 8 bytes to abs 0x21c5ee8.
  The `sd` at 0x218bd34 stores 8 bytes to abs 0x21c5ef0.
  The `jalr` at 0x218bcec calls dlopen with a0=0x21b50a8, a1=0x2, a2=0x50a8, a3=a3 at entry (arg3).
  The `jalr` at 0x218bd18 calls dlsym with a0=ret(dlopen), a1=0x21b50b8, a2=0x50b8, a3=0x21c5ee8, a4=0x5ee8.
  The `beq` branch at 0x218bcc4 targets 0x218bcd8, is taken when at(=[0x21c5ee8]:8) == 0, and falls through when at(=[0x21c5ee8]:8) != 0.
  The `beq` branch at 0x218bd00 targets 0x218bd48, is taken when v0(=ret(dlopen)) == 0, and falls through when v0(=ret(dlopen)) != 0.
  The `bne` branch at 0x218bd30 targets 0x218bcc8, is taken when v0(=ret(dlsym)) != 0, and falls through when v0(=ret(dlsym)) == 0.
  The return at 0x218bcd0 has v0 = 0x1.
  The return at 0x218bd40 has v0 = 0x0.
  The return at 0x218bd54 has v0 = 0x0.

- `__glXAddDrawableInterest` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x218d200 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x218d200-0x218d2c4 (196 bytes).
  It occupies 196 bytes.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x218d22c, `ld` at 0x218d238.
  The `sd` at 0x218d25c stores 8 bytes to ret(malloc) +0x38.
  The `sw` at 0x218d260 stores 4 bytes to ret(malloc) +0x40.
  The `sd` at 0x218d264 stores 8 bytes to ret(malloc) +0x48.
  The `sd` at 0x218d268 stores 8 bytes to ret(malloc) +0x0.
  The `sw` at 0x218d26c stores 4 bytes to ret(malloc) +0x8.
  The `sw` at 0x218d274 stores 4 bytes to ret(malloc) +0xc.
  The `sd` at 0x218d278 stores 8 bytes to ret(malloc) +0x18.
  The `sd` at 0x218d27c stores 8 bytes to ret(malloc) +0x10.
  The `sw` at 0x218d280 stores 4 bytes to ret(malloc) +0x20.
  The `sw` at 0x218d284 stores 4 bytes to ret(malloc) +0x24.
  The `sw` at 0x218d288 stores 4 bytes to ret(malloc) +0x28.
  The `sb` at 0x218d28c stores 1 byte to ret(malloc) +0x2c.
  The `sd` at 0x218d290 stores 8 bytes to ret(malloc) +0x30.
  The `lw` at 0x218d2ac loads 4 bytes from ?.
  The `sw` at 0x218d2c0 stores 4 bytes to ?.
  The `jalr` at 0x218d244 calls malloc with a0=0x50, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x218d224 targets 0x218d240, is taken when at(=[0x21bfe28]:8) == 0, and falls through when at(=[0x21bfe28]:8) != 0.
  The `beq` branch at 0x218d230 targets 0x218d2a8, is taken when v1(?) == s0(=a0), and falls through when v1(?) != s0(=a0).
  The `bne` branch at 0x218d23c targets 0x218d22c, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x218d254 targets 0x218d298, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The return at 0x218d2a0 has v0 = ret(malloc).
  The return at 0x218d2bc has v0 = ?.

- `__glXFreeDrawablePrivate` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x218d2d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x218d2d0-0x218d374 (164 bytes).
  It occupies 164 bytes.
  The `ld` at 0x218d2d4 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0x218d2ec loads 4 bytes from a0 (arg0 at entry) +0x20.
  4 such `ld` accesses load 8 bytes from ?, including `ld` at 0x218d30c, `ld` at 0x218d324, `ld` at 0x218d340.
  The `sd` at 0x218d344 stores 8 bytes to ?.
  The `jalr` at 0x218d34c calls free with a0=?, a1=?, a2=?, a3=?.
  The `bne` branch at 0x218d2e4 targets 0x218d358, is taken when v0(=[a0]:8) != 0, and falls through when v0(=[a0]:8) == 0.
  The `bne` branch at 0x218d2f0 targets 0x218d358, is taken when v0(=[a0+32]) != 0, and falls through when v0(=[a0+32]) == 0.
  The `beq` branch at 0x218d2fc targets 0x218d364, is taken when v1(=[0x21bfe28]:8) == 0, and falls through when v1(=[0x21bfe28]:8) != 0.
  The `beq` branch at 0x218d304 targets 0x218d334, is taken when a0 == a2(?), and falls through when a0 != a2(?).
  The `beq` branch at 0x218d314 targets 0x218d334, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x218d31c targets 0x218d334, is taken when a0 == a4(?), and falls through when a0 != a4(?).
  The `bne` branch at 0x218d32c targets 0x218d304, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x218d334 targets 0x218d364, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x218d36c targets 0x218d348 and is always taken.
  The return at 0x218d35c has v0 = one of [a0]:8, [a0+32], ret(free).

- `__glXGetDrawableAttributes` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x218dab0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x218dab0-0x218dec4 (1044 bytes).
  It occupies 1044 bytes.
  6 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x218daf4, `ld` at 0x218dbc8, `ld` at 0x218dcb0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x0, including `ld` at 0x218db08, `ld` at 0x218dc18.
  6 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x218db14, `ld` at 0x218db58, `ld` at 0x218dc24.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb8, including `ld` at 0x218db18, `ld` at 0x218dc28.
  2 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0xa0, including `sd` at 0x218db3c, `sd` at 0x218dc4c.
  2 such `sh` accesses store 2 bytes to [a0+176]:8 +0x2, including `sh` at 0x218db44, `sh` at 0x218dc54.
  4 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x218db4c, `sb` at 0x218db98, `sb` at 0x218dc5c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x98, including `ld` at 0x218db50, `ld` at 0x218dc60.
  2 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0x98, including `sd` at 0x218db60, `sd` at 0x218dc74.
  2 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0xb0, including `sd` at 0x218db68, `sd` at 0x218dc7c.
  The `sw` at 0x218db74 stores 4 bytes to [a0+176]:8 +0xc.
  2 such `sw` accesses store 4 bytes to [a0+176]:8 +0x4, including `sw` at 0x218db80, `sw` at 0x218dc9c.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x1, including `sb` at 0x218db8c, `sb` at 0x218dc90.
  5 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x218dbd4, `ld` at 0x218dcbc, `ld` at 0x218dd14.
  5 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x218dbe0, `ld` at 0x218dcc8, `ld` at 0x218dd20.
  2 such `sd` accesses store 8 bytes to a2 (arg2 at entry) +0x28, including `sd` at 0x218dd68, `sd` at 0x218ddf0.
  The `sd` at 0x218dd6c stores 8 bytes to a2 (arg2 at entry) +0x20.
  2 such `sd` accesses store 8 bytes to a2 (arg2 at entry) +0x18, including `sd` at 0x218dd70, `sd` at 0x218dd9c.
  The `sd` at 0x218dd74 stores 8 bytes to a2 (arg2 at entry) +0x10.
  2 such `sd` accesses store 8 bytes to a2 (arg2 at entry) +0x8, including `sd` at 0x218dd78, `sd` at 0x218dde8.
  The `sd` at 0x218dd80 stores 8 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x218dda8, `lw` at 0x218ddbc.
  The `ld` at 0x218ddd8 loads 8 bytes from table(0x21b50f0) +0x0.
  The `sw` at 0x218ddf8 stores 4 bytes to a2 (arg2 at entry) +0x14.
  The `sw` at 0x218de04 stores 4 bytes to a2 (arg2 at entry) +0x10.
  The `sb` at 0x218de0c stores 1 byte to a2 (arg2 at entry) +0x21.
  The `sb` at 0x218de14 stores 1 byte to a2 (arg2 at entry) +0x20.
  The `sw` at 0x218de1c stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `jalr` at 0x218dae4 calls __glXSetupForCommand with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x218db0c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+2408]:8, a3=?.
  The `jalr` at 0x218db94 calls _XReply with a0=a0 at entry (arg0), a1=sp-144, a2=0x0, a3=0x0, a5=0x11, a6=[a0+176]:8, a7=0x1000a.
  The `jalr` at 0x218dbb8 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x218dbd8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+2408]:8, a3=?.
  The `jalr` at 0x218dbec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x218dc1c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+2408]:8, a3=?.
  The `jalr` at 0x218dc98 calls _XReply with a0=a0 at entry (arg0), a1=sp-112, a2=0x0, a3=0x0, a4=a1 at entry (arg1), a5=0x1d, a6=[a0+176]:8.
  The `jalr` at 0x218dcc0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+2408]:8, a3=?.
  The `jalr` at 0x218dcd4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x218dcf8 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+16, a2=?, a3=?, a6=[a0+176]:8.
  The `jalr` at 0x218dd18 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+2408]:8, a3=?.
  The `jalr` at 0x218dd2c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x218dd5c calls _XRead with a0=a0 at entry (arg0), a1=ret(malloc), a2=?, a3=?.
  The `jalr` at 0x218de30 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+2408]:8, a3=?, a6=-0x800c.
  The `jalr` at 0x218de44 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x218de50 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x218de80 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+176]:8+8, a6=[a0+176]:8.
  The `jalr` at 0x218dea0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+2408]:8, a3=?.
  The `jalr` at 0x218deb4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x218daec targets 0x218de74, is taken when v0(=ret(__glXSetupForCommand)) == 0, and falls through when v0(=ret(__glXSetupForCommand)) != 0.
  The `beq` branch at 0x218daf8 targets 0x218dc10, is taken when v1(=a3) == 0, and falls through when v1(=a3) != 0.
  The `beq` branch at 0x218db00 targets 0x218db14, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The `bne` branch at 0x218db28 targets 0x218dcf8, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+16) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+16) (unsigned).
  The `beq` branch at 0x218db9c targets 0x218dd08, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x218dba4 targets 0x218dcb0, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0x218dbc0 targets 0x218dd50, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x218dbcc targets 0x218dbe0, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x218dbe4 targets 0x218dbf8, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x218dc10 targets 0x218dc24, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The `bne` branch at 0x218dc38 targets 0x218de80, is taken when a2(=[a0+184]:8) < a3(=[a0+176]:8+8) (unsigned), and falls through when a2(=[a0+184]:8) >= a3(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x218dca0 targets 0x218de90, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `bne` branch at 0x218dca8 targets 0x218dbac, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `beq` branch at 0x218dcb4 targets 0x218dcc8, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x218dccc targets 0x218dce0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x218dd00 targets 0x218db30 and is always taken.
  The `beq` branch at 0x218dd0c targets 0x218dd20, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x218dd24 targets 0x218dd38, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `blez` branch at 0x218dd88 targets 0x218de20, is taken when a7(?) <= 0 (signed), and falls through when a7(?) > 0 (signed).
  The `beq` branch at 0x218dd94 targets 0x218dda8 and is always taken.
  The `beq` branch at 0x218dda0 targets 0x218de20, is taken when a3(=table(0x8)) == t1(?), and falls through when a3(=table(0x8)) != t1(?).
  The `beq` branch at 0x218ddd0 targets 0x218dda0, is taken when t3(=table(-0x800c)) >= 0x1a (unsigned), and falls through when t3(=table(-0x800c)) < 0x1a (unsigned).
  The `beq` branch at 0x218dde4 targets 0x218dda0 and is always taken.
  The `beq` branch at 0x218ddec targets 0x218dda0 and is always taken.
  The `beq` branch at 0x218ddf4 targets 0x218dda0 and is always taken.
  The `beq` branch at 0x218de00 targets 0x218dda0 and is always taken.
  The `beq` branch at 0x218de08 targets 0x218dda0 and is always taken.
  The `beq` branch at 0x218de10 targets 0x218dda0 and is always taken.
  The `beq` branch at 0x218de18 targets 0x218dda0 and is always taken.
  The `beq` branch at 0x218de24 targets 0x218de38, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x218de3c targets 0x218de4c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x218de74 targets 0x218dbf8 and is always taken.
  The `beq` branch at 0x218de88 targets 0x218dc40 and is always taken.
  The `beq` branch at 0x218de94 targets 0x218dea8, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x218deac targets 0x218debc, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x218debc targets 0x218dbf8 and is always taken.
  The return at 0x218dc08 has v0 = 0x0.
  The return at 0x218dcf0 has v0 = 0x0.
  The return at 0x218dd48 has v0 = 0x0.
  The return at 0x218de6c has v0 = 0x1.
  The instructions from 0x218ddfc to 0x218ddfc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x218de7c to 0x218de7c are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x218dddc uses the jump table at 0x21b50f0 with targets 0x218de18, 0x218dda0, 0x218dda0, 0x218dda0, 0x218dda0, 0x218dda0, 0x218dda0, 0x218dde4, 0x218dda0, 0x218dda0, 0x218dda0, 0x218dda0, 0x218dda0, 0x218dda0, 0x218dda0, 0x218de10, 0x218de08, 0x218de00, 0x218ddf4, 0x218dd9c, 0x218dda0, 0x218dda0, 0x218dda0, 0x218dda0, 0x218dda0, 0x218ddec.

- `NoOp` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x218eac0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x218eac0-0x218eac8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x218eac0 has v0 = 0x0.

- `__glXNewIndirectAPI` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x218ead0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x218ead0-0x218fde8 (4888 bytes).
  It occupies 4888 bytes.
  The `ld` at 0x218eadc loads 8 bytes from abs 0x21bed18.
  The `ld` at 0x218eae0 loads 8 bytes from abs 0x21beab8.
  The `ld` at 0x218eae8 loads 8 bytes from abs 0x21bfb50.
  The `ld` at 0x218eaf4 loads 8 bytes from abs 0x21bcce8.
  The `sw` at 0x218eb00 stores 4 bytes to sym(__glx_indirect_dispatch) +0x0.
  The `ld` at 0x218eb0c loads 8 bytes from abs 0x21bf410.
  9 such `sd` accesses store 8 bytes to ?, including `sd` at 0x218eb18, `sd` at 0x218eb38, `sd` at 0x218eb44.
  The `ld` at 0x218eb88 loads 8 bytes from abs 0x21bf418.
  The `sd` at 0x218eb8c stores 8 bytes to sym(__glx_indirect_dispatch) +0x28.
  The `ld` at 0x218eb90 loads 8 bytes from abs 0x21bef00.
  The `ld` at 0x218eb94 loads 8 bytes from abs 0x21bea68.
  The `ld` at 0x218eb98 loads 8 bytes from abs 0x21bea70.
  The `ld` at 0x218eb9c loads 8 bytes from abs 0x21bf918.
  The `ld` at 0x218eba0 loads 8 bytes from abs 0x21beb78.
  The `ld` at 0x218eba4 loads 8 bytes from abs 0x21beb80.
  The `sd` at 0x218eba8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x58.
  The `ld` at 0x218ebac loads 8 bytes from abs 0x21bef30.
  The `sd` at 0x218ebb0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x50.
  The `ld` at 0x218ebb4 loads 8 bytes from abs 0x21bef28.
  The `sd` at 0x218ebb8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x48.
  The `ld` at 0x218ebbc loads 8 bytes from abs 0x21bef20.
  The `sd` at 0x218ebc0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x40.
  The `ld` at 0x218ebc4 loads 8 bytes from abs 0x21bef18.
  The `sd` at 0x218ebc8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x38.
  The `ld` at 0x218ebcc loads 8 bytes from abs 0x21bef10.
  The `sd` at 0x218ebd0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x88.
  The `ld` at 0x218ebd4 loads 8 bytes from abs 0x21bef60.
  The `sd` at 0x218ebd8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x30.
  The `ld` at 0x218ebdc loads 8 bytes from abs 0x21bef08.
  The `sd` at 0x218ebe0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x90.
  The `ld` at 0x218ebe4 loads 8 bytes from abs 0x21bef68.
  The `sd` at 0x218ebe8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe8.
  The `ld` at 0x218ebec loads 8 bytes from abs 0x21befb8.
  The `sd` at 0x218ebf0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x98.
  The `ld` at 0x218ebf4 loads 8 bytes from abs 0x21bef70.
  The `sd` at 0x218ebf8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xa0.
  The `ld` at 0x218ebfc loads 8 bytes from abs 0x21bef78.
  The `sd` at 0x218ec00 stores 8 bytes to sym(__glx_indirect_dispatch) +0xa8.
  The `ld` at 0x218ec04 loads 8 bytes from abs 0x21bef80.
  The `sd` at 0x218ec08 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb0.
  The `ld` at 0x218ec0c loads 8 bytes from abs 0x21bef88.
  The `sd` at 0x218ec10 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb8.
  The `ld` at 0x218ec14 loads 8 bytes from abs 0x21bef90.
  The `sd` at 0x218ec18 stores 8 bytes to sym(__glx_indirect_dispatch) +0x118.
  The `ld` at 0x218ec1c loads 8 bytes from abs 0x21befd8.
  The `sd` at 0x218ec20 stores 8 bytes to sym(__glx_indirect_dispatch) +0x110.
  The `ld` at 0x218ec24 loads 8 bytes from abs 0x21bf928.
  The `sd` at 0x218ec28 stores 8 bytes to sym(__glx_indirect_dispatch) +0x108.
  The `ld` at 0x218ec2c loads 8 bytes from abs 0x21bf920.
  The `sd` at 0x218ec30 stores 8 bytes to sym(__glx_indirect_dispatch) +0x100.
  The `ld` at 0x218ec34 loads 8 bytes from abs 0x21befd0.
  The `sd` at 0x218ec38 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf8.
  The `ld` at 0x218ec3c loads 8 bytes from abs 0x21befc8.
  The `sd` at 0x218ec40 stores 8 bytes to sym(__glx_indirect_dispatch) +0x148.
  The `ld` at 0x218ec44 loads 8 bytes from abs 0x21bf008.
  The `sd` at 0x218ec48 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf0.
  The `ld` at 0x218ec4c loads 8 bytes from abs 0x21befc0.
  The `sd` at 0x218ec50 stores 8 bytes to sym(__glx_indirect_dispatch) +0x150.
  The `ld` at 0x218ec54 loads 8 bytes from abs 0x21bf010.
  The `sd` at 0x218ec58 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1a8.
  The `ld` at 0x218ec5c loads 8 bytes from abs 0x21bf050.
  The `sd` at 0x218ec60 stores 8 bytes to sym(__glx_indirect_dispatch) +0x158.
  The `ld` at 0x218ec64 loads 8 bytes from abs 0x21bf018.
  The `sd` at 0x218ec68 stores 8 bytes to sym(__glx_indirect_dispatch) +0x160.
  The `ld` at 0x218ec6c loads 8 bytes from abs 0x21bf020.
  The `sd` at 0x218ec70 stores 8 bytes to sym(__glx_indirect_dispatch) +0x168.
  The `ld` at 0x218ec74 loads 8 bytes from abs 0x21bf9b8.
  The `sd` at 0x218ec78 stores 8 bytes to sym(__glx_indirect_dispatch) +0x170.
  The `ld` at 0x218ec7c loads 8 bytes from abs 0x21bf9c0.
  The `sd` at 0x218ec80 stores 8 bytes to sym(__glx_indirect_dispatch) +0x178.
  The `ld` at 0x218ec84 loads 8 bytes from abs 0x21bf9c8.
  The `sd` at 0x218ec88 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1d8.
  The `ld` at 0x218ec8c loads 8 bytes from abs 0x21bf080.
  The `sd` at 0x218ec90 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1d0.
  The `ld` at 0x218ec94 loads 8 bytes from abs 0x21bf078.
  The `sd` at 0x218ec98 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1c8.
  The `ld` at 0x218ec9c loads 8 bytes from abs 0x21bf070.
  The `sd` at 0x218eca0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1c0.
  The `ld` at 0x218eca4 loads 8 bytes from abs 0x21bf068.
  The `sd` at 0x218eca8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1b8.
  The `ld` at 0x218ecac loads 8 bytes from abs 0x21bf060.
  The `sd` at 0x218ecb0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x208.
  The `ld` at 0x218ecb4 loads 8 bytes from abs 0x21bf908.
  The `sd` at 0x218ecb8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1b0.
  The `ld` at 0x218ecbc loads 8 bytes from abs 0x21bf058.
  The `sd` at 0x218ecc0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x210.
  The `ld` at 0x218ecc4 loads 8 bytes from abs 0x21bf900.
  The `sd` at 0x218ecc8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x268.
  The `ld` at 0x218eccc loads 8 bytes from abs 0x21bf0d0.
  The `sd` at 0x218ecd0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x218.
  The `ld` at 0x218ecd4 loads 8 bytes from abs 0x21bf9d0.
  The `sd` at 0x218ecd8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x220.
  The `ld` at 0x218ecdc loads 8 bytes from abs 0x21bf9b0.
  The `sd` at 0x218ece0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x228.
  The `ld` at 0x218ece4 loads 8 bytes from abs 0x21bf0b0.
  The `sd` at 0x218ece8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x230.
  The `ld` at 0x218ecec loads 8 bytes from abs 0x21bf0b8.
  The `sd` at 0x218ecf0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x238.
  The `ld` at 0x218ecf4 loads 8 bytes from abs 0x21bf8c8.
  The `sd` at 0x218ecf8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x298.
  The `ld` at 0x218ecfc loads 8 bytes from abs 0x21bf100.
  The `sd` at 0x218ed00 stores 8 bytes to sym(__glx_indirect_dispatch) +0x290.
  The `ld` at 0x218ed04 loads 8 bytes from abs 0x21bf0f8.
  The `sd` at 0x218ed08 stores 8 bytes to sym(__glx_indirect_dispatch) +0x288.
  The `ld` at 0x218ed0c loads 8 bytes from abs 0x21bf0f0.
  The `sd` at 0x218ed10 stores 8 bytes to sym(__glx_indirect_dispatch) +0x280.
  The `ld` at 0x218ed14 loads 8 bytes from abs 0x21bf0e8.
  The `sd` at 0x218ed18 stores 8 bytes to sym(__glx_indirect_dispatch) +0x278.
  The `ld` at 0x218ed1c loads 8 bytes from abs 0x21bf0e0.
  The `sd` at 0x218ed20 stores 8 bytes to sym(__glx_indirect_dispatch) +0x2c8.
  The `ld` at 0x218ed24 loads 8 bytes from abs 0x21bf130.
  The `sd` at 0x218ed28 stores 8 bytes to sym(__glx_indirect_dispatch) +0x270.
  The `ld` at 0x218ed2c loads 8 bytes from abs 0x21bf0d8.
  The `sd` at 0x218ed30 stores 8 bytes to sym(__glx_indirect_dispatch) +0x2d0.
  The `ld` at 0x218ed34 loads 8 bytes from abs 0x21bf138.
  The `sd` at 0x218ed38 stores 8 bytes to sym(__glx_indirect_dispatch) +0x328.
  The `ld` at 0x218ed3c loads 8 bytes from abs 0x21bf8b8.
  The `sd` at 0x218ed40 stores 8 bytes to sym(__glx_indirect_dispatch) +0x2d8.
  The `ld` at 0x218ed44 loads 8 bytes from abs 0x21bf140.
  The `sd` at 0x218ed48 stores 8 bytes to sym(__glx_indirect_dispatch) +0x2e0.
  The `ld` at 0x218ed4c loads 8 bytes from abs 0x21bf148.
  The `sd` at 0x218ed50 stores 8 bytes to sym(__glx_indirect_dispatch) +0x2e8.
  The `ld` at 0x218ed54 loads 8 bytes from abs 0x21bf150.
  The `sd` at 0x218ed58 stores 8 bytes to sym(__glx_indirect_dispatch) +0x2f0.
  The `ld` at 0x218ed5c loads 8 bytes from abs 0x21bf158.
  The `sd` at 0x218ed60 stores 8 bytes to sym(__glx_indirect_dispatch) +0x2f8.
  The `ld` at 0x218ed64 loads 8 bytes from abs 0x21bf160.
  The `sd` at 0x218ed68 stores 8 bytes to sym(__glx_indirect_dispatch) +0x358.
  The `ld` at 0x218ed6c loads 8 bytes from abs 0x21bf9f0.
  The `sd` at 0x218ed70 stores 8 bytes to sym(__glx_indirect_dispatch) +0x350.
  The `ld` at 0x218ed74 loads 8 bytes from abs 0x21bf190.
  The `sd` at 0x218ed78 stores 8 bytes to sym(__glx_indirect_dispatch) +0x348.
  The `ld` at 0x218ed7c loads 8 bytes from abs 0x21bf188.
  The `sd` at 0x218ed80 stores 8 bytes to sym(__glx_indirect_dispatch) +0x340.
  The `ld` at 0x218ed84 loads 8 bytes from abs 0x21bf8f8.
  The `sd` at 0x218ed88 stores 8 bytes to sym(__glx_indirect_dispatch) +0x338.
  The `ld` at 0x218ed8c loads 8 bytes from abs 0x21bf8f0.
  The `sd` at 0x218ed90 stores 8 bytes to sym(__glx_indirect_dispatch) +0x388.
  The `ld` at 0x218ed94 loads 8 bytes from abs 0x21bf9a0.
  The `sd` at 0x218ed98 stores 8 bytes to sym(__glx_indirect_dispatch) +0x330.
  The `ld` at 0x218ed9c loads 8 bytes from abs 0x21bf8e8.
  The `sd` at 0x218eda0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x390.
  The `ld` at 0x218eda4 loads 8 bytes from abs 0x21bf9a8.
  The `sd` at 0x218eda8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x3e8.
  The `ld` at 0x218edac loads 8 bytes from abs 0x21bfa00.
  The `sd` at 0x218edb0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x398.
  The `ld` at 0x218edb4 loads 8 bytes from abs 0x21bf420.
  The `sd` at 0x218edb8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x3a0.
  The `ld` at 0x218edbc loads 8 bytes from abs 0x21bf428.
  The `sd` at 0x218edc0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x3a8.
  The `ld` at 0x218edc4 loads 8 bytes from abs 0x21bf430.
  The `sd` at 0x218edc8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x3b0.
  The `ld` at 0x218edcc loads 8 bytes from abs 0x21bf438.
  The `sd` at 0x218edd0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x3b8.
  The `ld` at 0x218edd4 loads 8 bytes from abs 0x21bf440.
  The `sd` at 0x218edd8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x418.
  The `ld` at 0x218eddc loads 8 bytes from abs 0x21bf490.
  The `sd` at 0x218ede0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x410.
  The `ld` at 0x218ede4 loads 8 bytes from abs 0x21bf488.
  The `sd` at 0x218ede8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x408.
  The `ld` at 0x218edec loads 8 bytes from abs 0x21bf480.
  The `sd` at 0x218edf0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x400.
  The `ld` at 0x218edf4 loads 8 bytes from abs 0x21bf478.
  The `sd` at 0x218edf8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x3f8.
  The `ld` at 0x218edfc loads 8 bytes from abs 0x21bf470.
  The `sd` at 0x218ee00 stores 8 bytes to sym(__glx_indirect_dispatch) +0x448.
  The `ld` at 0x218ee04 loads 8 bytes from abs 0x21bf9e0.
  The `sd` at 0x218ee08 stores 8 bytes to sym(__glx_indirect_dispatch) +0x3f0.
  The `ld` at 0x218ee0c loads 8 bytes from abs 0x21bf9d8.
  The `sd` at 0x218ee10 stores 8 bytes to sym(__glx_indirect_dispatch) +0x450.
  The `sd` at 0x218ee14 stores 8 bytes to sym(__glx_indirect_dispatch) +0x4a8.
  The `ld` at 0x218ee18 loads 8 bytes from abs 0x21bf1e8.
  The `sd` at 0x218ee1c stores 8 bytes to sym(__glx_indirect_dispatch) +0x458.
  The `ld` at 0x218ee20 loads 8 bytes from abs 0x21bf198.
  The `sd` at 0x218ee24 stores 8 bytes to sym(__glx_indirect_dispatch) +0x460.
  The `ld` at 0x218ee28 loads 8 bytes from abs 0x21bf1a0.
  The `sd` at 0x218ee2c stores 8 bytes to sym(__glx_indirect_dispatch) +0x468.
  The `ld` at 0x218ee30 loads 8 bytes from abs 0x21bf1a8.
  The `sd` at 0x218ee34 stores 8 bytes to sym(__glx_indirect_dispatch) +0x470.
  The `ld` at 0x218ee38 loads 8 bytes from abs 0x21bf1b0.
  The `sd` at 0x218ee3c stores 8 bytes to sym(__glx_indirect_dispatch) +0x478.
  The `ld` at 0x218ee40 loads 8 bytes from abs 0x21bf1b8.
  The `ld` at 0x218ee44 loads 8 bytes from abs 0x21bf4b8.
  The `ld` at 0x218ee48 loads 8 bytes from abs 0x21bf400.
  The `ld` at 0x218ee4c loads 8 bytes from abs 0x21bf408.
  The `ld` at 0x218ee50 loads 8 bytes from abs 0x21bea60.
  The `ld` at 0x218ee54 loads 8 bytes from abs 0x21bf8c0.
  The `sd` at 0x218ee58 stores 8 bytes to sym(__glx_indirect_dispatch) +0x20.
  The `ld` at 0x218ee5c loads 8 bytes from abs 0x21beef8.
  The `sd` at 0x218ee60 stores 8 bytes to sym(__glx_indirect_dispatch) +0x18.
  The `ld` at 0x218ee64 loads 8 bytes from abs 0x21beef0.
  The `sd` at 0x218ee68 stores 8 bytes to sym(__glx_indirect_dispatch) +0x10.
  The `ld` at 0x218ee6c loads 8 bytes from abs 0x21beee8.
  The `sd` at 0x218ee70 stores 8 bytes to sym(__glx_indirect_dispatch) +0x8.
  The `ld` at 0x218ee74 loads 8 bytes from abs 0x21beee0.
  The `sd` at 0x218ee78 stores 8 bytes to sym(__glx_indirect_dispatch) +0x4b0.
  The `ld` at 0x218ee7c loads 8 bytes from abs 0x21beb88.
  The `sd` at 0x218ee80 stores 8 bytes to sym(__glx_indirect_dispatch) +0x60.
  The `ld` at 0x218ee84 loads 8 bytes from abs 0x21bef38.
  The `sd` at 0x218ee88 stores 8 bytes to sym(__glx_indirect_dispatch) +0x68.
  The `ld` at 0x218ee8c loads 8 bytes from abs 0x21bef40.
  The `sd` at 0x218ee90 stores 8 bytes to sym(__glx_indirect_dispatch) +0x70.
  The `ld` at 0x218ee94 loads 8 bytes from abs 0x21bef48.
  The `sd` at 0x218ee98 stores 8 bytes to sym(__glx_indirect_dispatch) +0x78.
  The `ld` at 0x218ee9c loads 8 bytes from abs 0x21bef50.
  The `sd` at 0x218eea0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x80.
  The `ld` at 0x218eea4 loads 8 bytes from abs 0x21bef58.
  The `sd` at 0x218eea8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe0.
  The `ld` at 0x218eeac loads 8 bytes from abs 0x21befb0.
  The `sd` at 0x218eeb0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd8.
  The `ld` at 0x218eeb4 loads 8 bytes from abs 0x21befa8.
  The `sd` at 0x218eeb8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd0.
  The `ld` at 0x218eebc loads 8 bytes from abs 0x21bf910.
  The `sd` at 0x218eec0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc8.
  The `ld` at 0x218eec4 loads 8 bytes from abs 0x21befa0.
  The `sd` at 0x218eec8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc0.
  The `ld` at 0x218eecc loads 8 bytes from abs 0x21bef98.
  The `sd` at 0x218eed0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x120.
  The `ld` at 0x218eed4 loads 8 bytes from abs 0x21befe0.
  The `sd` at 0x218eed8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x128.
  The `ld` at 0x218eedc loads 8 bytes from abs 0x21befe8.
  The `sd` at 0x218eee0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x130.
  The `ld` at 0x218eee4 loads 8 bytes from abs 0x21beff0.
  The `sd` at 0x218eee8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x138.
  The `ld` at 0x218eeec loads 8 bytes from abs 0x21beff8.
  The `sd` at 0x218eef0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x140.
  The `ld` at 0x218eef4 loads 8 bytes from abs 0x21bf000.
  The `sd` at 0x218eef8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1a0.
  The `ld` at 0x218eefc loads 8 bytes from abs 0x21bf048.
  The `sd` at 0x218ef00 stores 8 bytes to sym(__glx_indirect_dispatch) +0x198.
  The `ld` at 0x218ef04 loads 8 bytes from abs 0x21bf040.
  The `sd` at 0x218ef08 stores 8 bytes to sym(__glx_indirect_dispatch) +0x190.
  The `ld` at 0x218ef0c loads 8 bytes from abs 0x21bf038.
  The `sd` at 0x218ef10 stores 8 bytes to sym(__glx_indirect_dispatch) +0x188.
  The `ld` at 0x218ef14 loads 8 bytes from abs 0x21bf030.
  The `sd` at 0x218ef18 stores 8 bytes to sym(__glx_indirect_dispatch) +0x180.
  The `ld` at 0x218ef1c loads 8 bytes from abs 0x21bf028.
  The `sd` at 0x218ef20 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1e0.
  The `ld` at 0x218ef24 loads 8 bytes from abs 0x21bf088.
  The `sd` at 0x218ef28 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1e8.
  The `ld` at 0x218ef2c loads 8 bytes from abs 0x21bf090.
  The `sd` at 0x218ef30 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1f0.
  The `ld` at 0x218ef34 loads 8 bytes from abs 0x21bf098.
  The `sd` at 0x218ef38 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1f8.
  The `ld` at 0x218ef3c loads 8 bytes from abs 0x21bf0a0.
  The `sd` at 0x218ef40 stores 8 bytes to sym(__glx_indirect_dispatch) +0x200.
  The `ld` at 0x218ef44 loads 8 bytes from abs 0x21bf0a8.
  The `sd` at 0x218ef48 stores 8 bytes to sym(__glx_indirect_dispatch) +0x260.
  The `ld` at 0x218ef4c loads 8 bytes from abs 0x21bf0c8.
  The `sd` at 0x218ef50 stores 8 bytes to sym(__glx_indirect_dispatch) +0x258.
  The `ld` at 0x218ef54 loads 8 bytes from abs 0x21bf0c0.
  The `sd` at 0x218ef58 stores 8 bytes to sym(__glx_indirect_dispatch) +0x250.
  The `ld` at 0x218ef5c loads 8 bytes from abs 0x21bf8e0.
  The `sd` at 0x218ef60 stores 8 bytes to sym(__glx_indirect_dispatch) +0x248.
  The `ld` at 0x218ef64 loads 8 bytes from abs 0x21bf8d8.
  The `sd` at 0x218ef68 stores 8 bytes to sym(__glx_indirect_dispatch) +0x240.
  The `ld` at 0x218ef6c loads 8 bytes from abs 0x21bf8d0.
  The `sd` at 0x218ef70 stores 8 bytes to sym(__glx_indirect_dispatch) +0x2a0.
  The `ld` at 0x218ef74 loads 8 bytes from abs 0x21bf108.
  The `sd` at 0x218ef78 stores 8 bytes to sym(__glx_indirect_dispatch) +0x2a8.
  The `ld` at 0x218ef7c loads 8 bytes from abs 0x21bf110.
  The `sd` at 0x218ef80 stores 8 bytes to sym(__glx_indirect_dispatch) +0x2b0.
  The `ld` at 0x218ef84 loads 8 bytes from abs 0x21bf118.
  The `sd` at 0x218ef88 stores 8 bytes to sym(__glx_indirect_dispatch) +0x2b8.
  The `ld` at 0x218ef8c loads 8 bytes from abs 0x21bf120.
  The `sd` at 0x218ef90 stores 8 bytes to sym(__glx_indirect_dispatch) +0x2c0.
  The `ld` at 0x218ef94 loads 8 bytes from abs 0x21bf128.
  The `sd` at 0x218ef98 stores 8 bytes to sym(__glx_indirect_dispatch) +0x320.
  The `ld` at 0x218ef9c loads 8 bytes from abs 0x21bf8b0.
  The `sd` at 0x218efa0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x318.
  The `ld` at 0x218efa4 loads 8 bytes from abs 0x21bf180.
  The `sd` at 0x218efa8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x310.
  The `ld` at 0x218efac loads 8 bytes from abs 0x21bf178.
  The `sd` at 0x218efb0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x308.
  The `ld` at 0x218efb4 loads 8 bytes from abs 0x21bf170.
  The `sd` at 0x218efb8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x300.
  The `ld` at 0x218efbc loads 8 bytes from abs 0x21bf168.
  The `sd` at 0x218efc0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x360.
  The `ld` at 0x218efc4 loads 8 bytes from abs 0x21bf930.
  The `sd` at 0x218efc8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x368.
  The `ld` at 0x218efcc loads 8 bytes from abs 0x21bf990.
  The `sd` at 0x218efd0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x370.
  The `ld` at 0x218efd4 loads 8 bytes from abs 0x21bf988.
  The `sd` at 0x218efd8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x378.
  The `ld` at 0x218efdc loads 8 bytes from abs 0x21bf998.
  The `sd` at 0x218efe0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x380.
  The `ld` at 0x218efe4 loads 8 bytes from abs 0x21bf980.
  The `sd` at 0x218efe8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x3e0.
  The `ld` at 0x218efec loads 8 bytes from abs 0x21bf468.
  The `sd` at 0x218eff0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x3d8.
  The `ld` at 0x218eff4 loads 8 bytes from abs 0x21bf460.
  The `sd` at 0x218eff8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x3d0.
  The `ld` at 0x218effc loads 8 bytes from abs 0x21bf458.
  The `sd` at 0x218f000 stores 8 bytes to sym(__glx_indirect_dispatch) +0x3c8.
  The `ld` at 0x218f004 loads 8 bytes from abs 0x21bf450.
  The `sd` at 0x218f008 stores 8 bytes to sym(__glx_indirect_dispatch) +0x3c0.
  The `ld` at 0x218f00c loads 8 bytes from abs 0x21bf448.
  The `sd` at 0x218f010 stores 8 bytes to sym(__glx_indirect_dispatch) +0x420.
  The `ld` at 0x218f014 loads 8 bytes from abs 0x21bf9f8.
  The `sd` at 0x218f018 stores 8 bytes to sym(__glx_indirect_dispatch) +0x428.
  The `ld` at 0x218f01c loads 8 bytes from abs 0x21bf498.
  The `sd` at 0x218f020 stores 8 bytes to sym(__glx_indirect_dispatch) +0x430.
  The `ld` at 0x218f024 loads 8 bytes from abs 0x21bf4a0.
  The `sd` at 0x218f028 stores 8 bytes to sym(__glx_indirect_dispatch) +0x438.
  The `ld` at 0x218f02c loads 8 bytes from abs 0x21bf4a8.
  The `sd` at 0x218f030 stores 8 bytes to sym(__glx_indirect_dispatch) +0x440.
  The `ld` at 0x218f034 loads 8 bytes from abs 0x21bf4b0.
  The `sd` at 0x218f038 stores 8 bytes to sym(__glx_indirect_dispatch) +0x4a0.
  The `sd` at 0x218f03c stores 8 bytes to sym(__glx_indirect_dispatch) +0x498.
  The `sd` at 0x218f040 stores 8 bytes to sym(__glx_indirect_dispatch) +0x490.
  The `sd` at 0x218f044 stores 8 bytes to sym(__glx_indirect_dispatch) +0x488.
  The `sd` at 0x218f048 stores 8 bytes to sym(__glx_indirect_dispatch) +0x480.
  The `sd` at 0x218f04c stores 8 bytes to sym(__glx_indirect_dispatch) +0x558.
  The `sd` at 0x218f050 stores 8 bytes to sym(__glx_indirect_dispatch) +0x5b0.
  The `sd` at 0x218f054 stores 8 bytes to sym(__glx_indirect_dispatch) +0x5b8.
  The `sd` at 0x218f058 stores 8 bytes to sym(__glx_indirect_dispatch) +0x5c0.
  The `sd` at 0x218f05c stores 8 bytes to sym(__glx_indirect_dispatch) +0x5c8.
  The `sd` at 0x218f060 stores 8 bytes to sym(__glx_indirect_dispatch) +0x5d8.
  The `sd` at 0x218f064 stores 8 bytes to sym(__glx_indirect_dispatch) +0x5e0.
  The `sd` at 0x218f068 stores 8 bytes to sym(__glx_indirect_dispatch) +0x5e8.
  The `sd` at 0x218f06c stores 8 bytes to sym(__glx_indirect_dispatch) +0x5f0.
  The `sd` at 0x218f070 stores 8 bytes to sym(__glx_indirect_dispatch) +0x5f8.
  The `sd` at 0x218f074 stores 8 bytes to sym(__glx_indirect_dispatch) +0x600.
  The `sd` at 0x218f078 stores 8 bytes to sym(__glx_indirect_dispatch) +0x640.
  The `sd` at 0x218f07c stores 8 bytes to sym(__glx_indirect_dispatch) +0x648.
  The `sd` at 0x218f080 stores 8 bytes to sym(__glx_indirect_dispatch) +0x650.
  The `sd` at 0x218f084 stores 8 bytes to sym(__glx_indirect_dispatch) +0x660.
  The `sd` at 0x218f088 stores 8 bytes to sym(__glx_indirect_dispatch) +0x668.
  The `sd` at 0x218f08c stores 8 bytes to sym(__glx_indirect_dispatch) +0x670.
  The `sd` at 0x218f090 stores 8 bytes to sym(__glx_indirect_dispatch) +0x678.
  The `sd` at 0x218f094 stores 8 bytes to sym(__glx_indirect_dispatch) +0x740.
  The `sd` at 0x218f098 stores 8 bytes to sym(__glx_indirect_dispatch) +0x748.
  The `sd` at 0x218f09c stores 8 bytes to sym(__glx_indirect_dispatch) +0x750.
  The `sd` at 0x218f0a0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x758.
  The `sd` at 0x218f0a4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x760.
  The `sd` at 0x218f0a8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x768.
  The `sd` at 0x218f0ac stores 8 bytes to sym(__glx_indirect_dispatch) +0x770.
  The `sd` at 0x218f0b0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x798.
  The `sd` at 0x218f0b4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x7a0.
  The `sd` at 0x218f0b8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x7a8.
  The `sd` at 0x218f0bc stores 8 bytes to sym(__glx_indirect_dispatch) +0x7b0.
  The `sd` at 0x218f0c0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x7b8.
  The `sd` at 0x218f0c4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x7c0.
  The `sd` at 0x218f0c8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x7c8.
  The `sd` at 0x218f0cc stores 8 bytes to sym(__glx_indirect_dispatch) +0x7d0.
  The `sd` at 0x218f0d0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x7d8.
  The `sd` at 0x218f0d4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x7e0.
  The `sd` at 0x218f0d8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x7e8.
  The `sd` at 0x218f0dc stores 8 bytes to sym(__glx_indirect_dispatch) +0x7f0.
  The `sd` at 0x218f0e0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x7f8.
  The `sd` at 0x218f0e4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x800.
  The `sd` at 0x218f0e8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x808.
  The `sd` at 0x218f0ec stores 8 bytes to sym(__glx_indirect_dispatch) +0x810.
  The `sd` at 0x218f0f0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x818.
  The `sd` at 0x218f0f4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x820.
  The `sd` at 0x218f0f8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x828.
  The `sd` at 0x218f0fc stores 8 bytes to sym(__glx_indirect_dispatch) +0x830.
  The `sd` at 0x218f100 stores 8 bytes to sym(__glx_indirect_dispatch) +0x838.
  The `sd` at 0x218f104 stores 8 bytes to sym(__glx_indirect_dispatch) +0x840.
  The `sd` at 0x218f108 stores 8 bytes to sym(__glx_indirect_dispatch) +0x848.
  The `sd` at 0x218f10c stores 8 bytes to sym(__glx_indirect_dispatch) +0x850.
  The `sd` at 0x218f110 stores 8 bytes to sym(__glx_indirect_dispatch) +0x858.
  The `sd` at 0x218f114 stores 8 bytes to sym(__glx_indirect_dispatch) +0x860.
  The `sd` at 0x218f118 stores 8 bytes to sym(__glx_indirect_dispatch) +0x868.
  The `sd` at 0x218f11c stores 8 bytes to sym(__glx_indirect_dispatch) +0x870.
  The `sd` at 0x218f120 stores 8 bytes to sym(__glx_indirect_dispatch) +0x878.
  The `sd` at 0x218f124 stores 8 bytes to sym(__glx_indirect_dispatch) +0x880.
  The `sd` at 0x218f128 stores 8 bytes to sym(__glx_indirect_dispatch) +0x888.
  The `sd` at 0x218f12c stores 8 bytes to sym(__glx_indirect_dispatch) +0x890.
  The `sd` at 0x218f130 stores 8 bytes to sym(__glx_indirect_dispatch) +0x898.
  The `sd` at 0x218f134 stores 8 bytes to sym(__glx_indirect_dispatch) +0x8a0.
  The `sd` at 0x218f138 stores 8 bytes to sym(__glx_indirect_dispatch) +0x8a8.
  The `sd` at 0x218f13c stores 8 bytes to sym(__glx_indirect_dispatch) +0x8c8.
  The `sd` at 0x218f140 stores 8 bytes to sym(__glx_indirect_dispatch) +0x8d0.
  The `sd` at 0x218f144 stores 8 bytes to sym(__glx_indirect_dispatch) +0x8d8.
  The `sd` at 0x218f148 stores 8 bytes to sym(__glx_indirect_dispatch) +0x8e0.
  The `sd` at 0x218f14c stores 8 bytes to sym(__glx_indirect_dispatch) +0x8e8.
  The `sd` at 0x218f150 stores 8 bytes to sym(__glx_indirect_dispatch) +0x8f0.
  The `sd` at 0x218f154 stores 8 bytes to sym(__glx_indirect_dispatch) +0x8f8.
  The `sd` at 0x218f158 stores 8 bytes to sym(__glx_indirect_dispatch) +0x900.
  The `sd` at 0x218f15c stores 8 bytes to sym(__glx_indirect_dispatch) +0x908.
  The `sd` at 0x218f160 stores 8 bytes to sym(__glx_indirect_dispatch) +0x910.
  The `sd` at 0x218f164 stores 8 bytes to sym(__glx_indirect_dispatch) +0x918.
  The `sd` at 0x218f168 stores 8 bytes to sym(__glx_indirect_dispatch) +0x920.
  The `sd` at 0x218f16c stores 8 bytes to sym(__glx_indirect_dispatch) +0x928.
  The `sd` at 0x218f170 stores 8 bytes to sym(__glx_indirect_dispatch) +0x930.
  The `sd` at 0x218f174 stores 8 bytes to sym(__glx_indirect_dispatch) +0x938.
  The `sd` at 0x218f178 stores 8 bytes to sym(__glx_indirect_dispatch) +0x940.
  The `sd` at 0x218f17c stores 8 bytes to sym(__glx_indirect_dispatch) +0x948.
  The `sd` at 0x218f180 stores 8 bytes to sym(__glx_indirect_dispatch) +0x950.
  The `sd` at 0x218f184 stores 8 bytes to sym(__glx_indirect_dispatch) +0x958.
  The `sd` at 0x218f188 stores 8 bytes to sym(__glx_indirect_dispatch) +0x960.
  The `sd` at 0x218f18c stores 8 bytes to sym(__glx_indirect_dispatch) +0x968.
  The `sd` at 0x218f190 stores 8 bytes to sym(__glx_indirect_dispatch) +0x970.
  The `sd` at 0x218f194 stores 8 bytes to sym(__glx_indirect_dispatch) +0x978.
  The `sd` at 0x218f198 stores 8 bytes to sym(__glx_indirect_dispatch) +0x980.
  The `sd` at 0x218f19c stores 8 bytes to sym(__glx_indirect_dispatch) +0x988.
  The `sd` at 0x218f1a0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x990.
  The `sd` at 0x218f1a4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x998.
  The `sd` at 0x218f1a8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x9a0.
  The `sd` at 0x218f1ac stores 8 bytes to sym(__glx_indirect_dispatch) +0x9a8.
  The `sd` at 0x218f1b0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x9b0.
  The `sd` at 0x218f1b4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x9b8.
  The `sd` at 0x218f1b8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x9c0.
  The `sd` at 0x218f1bc stores 8 bytes to sym(__glx_indirect_dispatch) +0xa58.
  The `sd` at 0x218f1c0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xa60.
  The `sd` at 0x218f1c4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xa78.
  The `sd` at 0x218f1c8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xa80.
  The `sd` at 0x218f1cc stores 8 bytes to sym(__glx_indirect_dispatch) +0xa88.
  The `sd` at 0x218f1d0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xa90.
  The `sd` at 0x218f1d4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xa98.
  The `sd` at 0x218f1d8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xaa0.
  The `sd` at 0x218f1dc stores 8 bytes to sym(__glx_indirect_dispatch) +0xaa8.
  The `sd` at 0x218f1e0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xab0.
  The `sd` at 0x218f1e4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xab8.
  The `sd` at 0x218f1e8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xac0.
  The `sd` at 0x218f1ec stores 8 bytes to sym(__glx_indirect_dispatch) +0xac8.
  The `sd` at 0x218f1f0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xad0.
  The `sd` at 0x218f1f4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xad8.
  The `sd` at 0x218f1f8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xae0.
  The `sd` at 0x218f1fc stores 8 bytes to sym(__glx_indirect_dispatch) +0xae8.
  The `sd` at 0x218f200 stores 8 bytes to sym(__glx_indirect_dispatch) +0xaf0.
  The `sd` at 0x218f204 stores 8 bytes to sym(__glx_indirect_dispatch) +0xaf8.
  The `sd` at 0x218f208 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb00.
  The `sd` at 0x218f20c stores 8 bytes to sym(__glx_indirect_dispatch) +0xb08.
  The `sd` at 0x218f210 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb10.
  The `sd` at 0x218f214 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb18.
  The `sd` at 0x218f218 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb20.
  The `sd` at 0x218f21c stores 8 bytes to sym(__glx_indirect_dispatch) +0xb28.
  The `sd` at 0x218f220 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb30.
  The `sd` at 0x218f224 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb38.
  The `sd` at 0x218f228 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb40.
  The `sd` at 0x218f22c stores 8 bytes to sym(__glx_indirect_dispatch) +0x508.
  The `ld` at 0x218f230 loads 8 bytes from abs 0x21bf958.
  The `sd` at 0x218f234 stores 8 bytes to sym(__glx_indirect_dispatch) +0x570.
  The `ld` at 0x218f238 loads 8 bytes from abs 0x21bf2e8.
  The `sd` at 0x218f23c stores 8 bytes to sym(__glx_indirect_dispatch) +0x620.
  The `ld` at 0x218f240 loads 8 bytes from abs 0x21bf238.
  The `sd` at 0x218f244 stores 8 bytes to sym(__glx_indirect_dispatch) +0x6b8.
  The `ld` at 0x218f248 loads 8 bytes from abs 0x21bfa58.
  The `sd` at 0x218f24c stores 8 bytes to sym(__glx_indirect_dispatch) +0x718.
  The `ld` at 0x218f250 loads 8 bytes from abs 0x21bfa78.
  The `sd` at 0x218f254 stores 8 bytes to sym(__glx_indirect_dispatch) +0x9c8.
  The `ld` at 0x218f258 loads 8 bytes from abs 0x21bfa20.
  The `sd` at 0x218f25c stores 8 bytes to sym(__glx_indirect_dispatch) +0xa28.
  The `ld` at 0x218f260 loads 8 bytes from abs 0x21bee40.
  The `ld` at 0x218f264 loads 8 bytes from abs 0x21bf1e0.
  The `ld` at 0x218f268 loads 8 bytes from abs 0x21bf1d8.
  The `ld` at 0x218f26c loads 8 bytes from abs 0x21bf1d0.
  The `ld` at 0x218f270 loads 8 bytes from abs 0x21bf1c8.
  The `sd` at 0x218f274 stores 8 bytes to sym(__glx_indirect_dispatch) +0x4b8.
  The `ld` at 0x218f278 loads 8 bytes from abs 0x21bf1f8.
  The `sd` at 0x218f27c stores 8 bytes to sym(__glx_indirect_dispatch) +0x4c0.
  The `ld` at 0x218f280 loads 8 bytes from abs 0x21bf200.
  The `sd` at 0x218f284 stores 8 bytes to sym(__glx_indirect_dispatch) +0x4c8.
  The `ld` at 0x218f288 loads 8 bytes from abs 0x21bf208.
  The `sd` at 0x218f28c stores 8 bytes to sym(__glx_indirect_dispatch) +0x4d0.
  The `ld` at 0x218f290 loads 8 bytes from abs 0x21bf210.
  The `sd` at 0x218f294 stores 8 bytes to sym(__glx_indirect_dispatch) +0x4d8.
  The `ld` at 0x218f298 loads 8 bytes from abs 0x21bf218.
  The `ld` at 0x218f29c loads 8 bytes from abs 0x21bf1c0.
  The `sd` at 0x218f2a0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x4e0.
  The `ld` at 0x218f2a4 loads 8 bytes from abs 0x21bf220.
  The `sd` at 0x218f2a8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x538.
  The `ld` at 0x218f2ac loads 8 bytes from abs 0x21bf2c0.
  The `sd` at 0x218f2b0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x530.
  The `ld` at 0x218f2b4 loads 8 bytes from abs 0x21bf2b8.
  The `sd` at 0x218f2b8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x528.
  The `ld` at 0x218f2bc loads 8 bytes from abs 0x21bf2b0.
  The `sd` at 0x218f2c0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x520.
  The `ld` at 0x218f2c4 loads 8 bytes from abs 0x21bf2a8.
  The `sd` at 0x218f2c8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x518.
  The `ld` at 0x218f2cc loads 8 bytes from abs 0x21bf2a0.
  The `sd` at 0x218f2d0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x4e8.
  The `ld` at 0x218f2d4 loads 8 bytes from abs 0x21bf270.
  The `sd` at 0x218f2d8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x4f0.
  The `ld` at 0x218f2dc loads 8 bytes from abs 0x21bf278.
  The `sd` at 0x218f2e0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x4f8.
  The `ld` at 0x218f2e4 loads 8 bytes from abs 0x21bf938.
  The `sd` at 0x218f2e8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x500.
  The `ld` at 0x218f2ec loads 8 bytes from abs 0x21bf940.
  The `sd` at 0x218f2f0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x568.
  The `ld` at 0x218f2f4 loads 8 bytes from abs 0x21bf2e0.
  The `sd` at 0x218f2f8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x560.
  The `ld` at 0x218f2fc loads 8 bytes from abs 0x21bf2d8.
  The `sd` at 0x218f300 stores 8 bytes to sym(__glx_indirect_dispatch) +0x550.
  The `ld` at 0x218f304 loads 8 bytes from abs 0x21bf2d0.
  The `sd` at 0x218f308 stores 8 bytes to sym(__glx_indirect_dispatch) +0x548.
  The `ld` at 0x218f30c loads 8 bytes from abs 0x21bf968.
  The `sd` at 0x218f310 stores 8 bytes to sym(__glx_indirect_dispatch) +0x580.
  The `ld` at 0x218f314 loads 8 bytes from abs 0x21bf978.
  The `sd` at 0x218f318 stores 8 bytes to sym(__glx_indirect_dispatch) +0x588.
  The `ld` at 0x218f31c loads 8 bytes from abs 0x21bfa70.
  The `sd` at 0x218f320 stores 8 bytes to sym(__glx_indirect_dispatch) +0x590.
  The `ld` at 0x218f324 loads 8 bytes from abs 0x21bf9e8.
  The `sd` at 0x218f328 stores 8 bytes to sym(__glx_indirect_dispatch) +0x598.
  The `ld` at 0x218f32c loads 8 bytes from abs 0x21bf520.
  The `sd` at 0x218f330 stores 8 bytes to sym(__glx_indirect_dispatch) +0x5a0.
  The `ld` at 0x218f334 loads 8 bytes from abs 0x21bf250.
  The `sd` at 0x218f338 stores 8 bytes to sym(__glx_indirect_dispatch) +0x540.
  The `ld` at 0x218f33c loads 8 bytes from abs 0x21bf2c8.
  The `sd` at 0x218f340 stores 8 bytes to sym(__glx_indirect_dispatch) +0x5a8.
  The `ld` at 0x218f344 loads 8 bytes from abs 0x21bf528.
  The `sd` at 0x218f348 stores 8 bytes to sym(__glx_indirect_dispatch) +0x688.
  The `ld` at 0x218f34c loads 8 bytes from abs 0x21bfa80.
  The `sd` at 0x218f350 stores 8 bytes to sym(__glx_indirect_dispatch) +0x680.
  The `ld` at 0x218f354 loads 8 bytes from abs 0x21bd160.
  The `sd` at 0x218f358 stores 8 bytes to sym(__glx_indirect_dispatch) +0x658.
  The `ld` at 0x218f35c loads 8 bytes from abs 0x21bfa48.
  The `sd` at 0x218f360 stores 8 bytes to sym(__glx_indirect_dispatch) +0x638.
  The `ld` at 0x218f364 loads 8 bytes from abs 0x21bf2f0.
  The `sd` at 0x218f368 stores 8 bytes to sym(__glx_indirect_dispatch) +0x630.
  The `ld` at 0x218f36c loads 8 bytes from abs 0x21bf248.
  The `sd` at 0x218f370 stores 8 bytes to sym(__glx_indirect_dispatch) +0x5d0.
  The `ld` at 0x218f374 loads 8 bytes from abs 0x21bf530.
  The `sd` at 0x218f378 stores 8 bytes to sym(__glx_indirect_dispatch) +0x608.
  The `ld` at 0x218f37c loads 8 bytes from abs 0x21bf538.
  The `sd` at 0x218f380 stores 8 bytes to sym(__glx_indirect_dispatch) +0x610.
  The `ld` at 0x218f384 loads 8 bytes from abs 0x21bf258.
  The `sd` at 0x218f388 stores 8 bytes to sym(__glx_indirect_dispatch) +0x618.
  The `ld` at 0x218f38c loads 8 bytes from abs 0x21bf230.
  The `sd` at 0x218f390 stores 8 bytes to sym(__glx_indirect_dispatch) +0x6b0.
  The `ld` at 0x218f394 loads 8 bytes from abs 0x21bfa40.
  The `sd` at 0x218f398 stores 8 bytes to sym(__glx_indirect_dispatch) +0x6a8.
  The `ld` at 0x218f39c loads 8 bytes from abs 0x21bfa68.
  The `sd` at 0x218f3a0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x6a0.
  The `ld` at 0x218f3a4 loads 8 bytes from abs 0x21bfa50.
  The `sd` at 0x218f3a8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x698.
  The `ld` at 0x218f3ac loads 8 bytes from abs 0x21bd158.
  The `sd` at 0x218f3b0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x6c8.
  The `ld` at 0x218f3b4 loads 8 bytes from abs 0x21bf228.
  The `sd` at 0x218f3b8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x6d0.
  The `ld` at 0x218f3bc loads 8 bytes from abs 0x21bd170.
  The `sd` at 0x218f3c0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x6d8.
  The `ld` at 0x218f3c4 loads 8 bytes from abs 0x21bd168.
  The `sd` at 0x218f3c8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x6e0.
  The `ld` at 0x218f3cc loads 8 bytes from abs 0x21bf948.
  The `sd` at 0x218f3d0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x6e8.
  The `ld` at 0x218f3d4 loads 8 bytes from abs 0x21bf280.
  The `sd` at 0x218f3d8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x690.
  The `ld` at 0x218f3dc loads 8 bytes from abs 0x21bfa60.
  The `sd` at 0x218f3e0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x6f0.
  The `ld` at 0x218f3e4 loads 8 bytes from abs 0x21bf288.
  The `sd` at 0x218f3e8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x780.
  The `ld` at 0x218f3ec loads 8 bytes from abs 0x21bf4e0.
  The `sd` at 0x218f3f0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x778.
  The `ld` at 0x218f3f4 loads 8 bytes from abs 0x21bfa08.
  The `sd` at 0x218f3f8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x738.
  The `ld` at 0x218f3fc loads 8 bytes from abs 0x21bf4d8.
  The `sd` at 0x218f400 stores 8 bytes to sym(__glx_indirect_dispatch) +0x730.
  The `ld` at 0x218f404 loads 8 bytes from abs 0x21bf4d0.
  The `sd` at 0x218f408 stores 8 bytes to sym(__glx_indirect_dispatch) +0x728.
  The `ld` at 0x218f40c loads 8 bytes from abs 0x21bf4c8.
  The `sd` at 0x218f410 stores 8 bytes to sym(__glx_indirect_dispatch) +0x6f8.
  The `ld` at 0x218f414 loads 8 bytes from abs 0x21bf290.
  The `sd` at 0x218f418 stores 8 bytes to sym(__glx_indirect_dispatch) +0x700.
  The `ld` at 0x218f41c loads 8 bytes from abs 0x21bf950.
  The `sd` at 0x218f420 stores 8 bytes to sym(__glx_indirect_dispatch) +0x708.
  The `ld` at 0x218f424 loads 8 bytes from abs 0x21bf298.
  The `sd` at 0x218f428 stores 8 bytes to sym(__glx_indirect_dispatch) +0x710.
  The `ld` at 0x218f42c loads 8 bytes from abs 0x21bfa88.
  The `sd` at 0x218f430 stores 8 bytes to sym(__glx_indirect_dispatch) +0x8c0.
  The `ld` at 0x218f434 loads 8 bytes from abs 0x21bfa18.
  The `sd` at 0x218f438 stores 8 bytes to sym(__glx_indirect_dispatch) +0x8b8.
  The `ld` at 0x218f43c loads 8 bytes from abs 0x21bf4f8.
  The `sd` at 0x218f440 stores 8 bytes to sym(__glx_indirect_dispatch) +0x8b0.
  The `ld` at 0x218f444 loads 8 bytes from abs 0x21bf4f0.
  The `sd` at 0x218f448 stores 8 bytes to sym(__glx_indirect_dispatch) +0x790.
  The `ld` at 0x218f44c loads 8 bytes from abs 0x21bfa10.
  The `sd` at 0x218f450 stores 8 bytes to sym(__glx_indirect_dispatch) +0x9d8.
  The `ld` at 0x218f454 loads 8 bytes from abs 0x21bf508.
  The `sd` at 0x218f458 stores 8 bytes to sym(__glx_indirect_dispatch) +0x9e0.
  The `ld` at 0x218f45c loads 8 bytes from abs 0x21bfa28.
  The `sd` at 0x218f460 stores 8 bytes to sym(__glx_indirect_dispatch) +0x9e8.
  The `ld` at 0x218f464 loads 8 bytes from abs 0x21bf510.
  The `sd` at 0x218f468 stores 8 bytes to sym(__glx_indirect_dispatch) +0x9f0.
  The `ld` at 0x218f46c loads 8 bytes from abs 0x21bf518.
  The `sd` at 0x218f470 stores 8 bytes to sym(__glx_indirect_dispatch) +0x9f8.
  The `ld` at 0x218f474 loads 8 bytes from abs 0x21bf2f8.
  The `sd` at 0x218f478 stores 8 bytes to sym(__glx_indirect_dispatch) +0x788.
  The `ld` at 0x218f47c loads 8 bytes from abs 0x21bf4e8.
  The `sd` at 0x218f480 stores 8 bytes to sym(__glx_indirect_dispatch) +0xa00.
  The `sd` at 0x218f484 stores 8 bytes to sym(__glx_indirect_dispatch) +0xa68.
  The `ld` at 0x218f488 loads 8 bytes from abs 0x21bee70.
  The `sd` at 0x218f48c stores 8 bytes to sym(__glx_indirect_dispatch) +0xa50.
  The `ld` at 0x218f490 loads 8 bytes from abs 0x21bee68.
  The `sd` at 0x218f494 stores 8 bytes to sym(__glx_indirect_dispatch) +0xa48.
  The `ld` at 0x218f498 loads 8 bytes from abs 0x21bee60.
  The `sd` at 0x218f49c stores 8 bytes to sym(__glx_indirect_dispatch) +0xa40.
  The `ld` at 0x218f4a0 loads 8 bytes from abs 0x21bee58.
  The `sd` at 0x218f4a4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xa38.
  The `ld` at 0x218f4a8 loads 8 bytes from abs 0x21bee50.
  The `sd` at 0x218f4ac stores 8 bytes to sym(__glx_indirect_dispatch) +0xa08.
  The `ld` at 0x218f4b0 loads 8 bytes from abs 0x21bee20.
  The `sd` at 0x218f4b4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xa10.
  The `ld` at 0x218f4b8 loads 8 bytes from abs 0x21bee28.
  The `sd` at 0x218f4bc stores 8 bytes to sym(__glx_indirect_dispatch) +0xa18.
  The `ld` at 0x218f4c0 loads 8 bytes from abs 0x21bee30.
  The `sd` at 0x218f4c4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xa20.
  The `ld` at 0x218f4c8 loads 8 bytes from abs 0x21bee38.
  The `ld` at 0x218f4cc loads 8 bytes from abs 0x21bfa90.
  The `sd` at 0x218f4d0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xa70.
  The `ld` at 0x218f4d4 loads 8 bytes from abs 0x21bf1f0.
  The `sd` at 0x218f4d8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x510.
  The `ld` at 0x218f4dc loads 8 bytes from abs 0x21bf960.
  The `sd` at 0x218f4e0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x578.
  The `ld` at 0x218f4e4 loads 8 bytes from abs 0x21bf970.
  The `sd` at 0x218f4e8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x628.
  The `ld` at 0x218f4ec loads 8 bytes from abs 0x21bf240.
  The `sd` at 0x218f4f0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x6c0.
  The `ld` at 0x218f4f4 loads 8 bytes from abs 0x21bfa38.
  The `sd` at 0x218f4f8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x720.
  The `ld` at 0x218f4fc loads 8 bytes from abs 0x21bf4c0.
  The `sd` at 0x218f500 stores 8 bytes to sym(__glx_indirect_dispatch) +0x9d0.
  The `ld` at 0x218f504 loads 8 bytes from abs 0x21bf500.
  The `sd` at 0x218f508 stores 8 bytes to sym(__glx_indirect_dispatch) +0xa30.
  The `sd` at 0x218f50c stores 8 bytes to sym(__glx_indirect_dispatch) +0xb48.
  The `sd` at 0x218f510 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb50.
  The `sd` at 0x218f514 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb58.
  The `sd` at 0x218f518 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb60.
  The `sd` at 0x218f51c stores 8 bytes to sym(__glx_indirect_dispatch) +0xb68.
  The `sd` at 0x218f520 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb70.
  The `sd` at 0x218f524 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb78.
  The `sd` at 0x218f528 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb80.
  The `sd` at 0x218f52c stores 8 bytes to sym(__glx_indirect_dispatch) +0xb88.
  The `sd` at 0x218f530 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb90.
  The `sd` at 0x218f534 stores 8 bytes to sym(__glx_indirect_dispatch) +0xb98.
  The `sd` at 0x218f538 stores 8 bytes to sym(__glx_indirect_dispatch) +0xba0.
  The `sd` at 0x218f53c stores 8 bytes to sym(__glx_indirect_dispatch) +0xba8.
  The `sd` at 0x218f540 stores 8 bytes to sym(__glx_indirect_dispatch) +0xbb0.
  The `sd` at 0x218f544 stores 8 bytes to sym(__glx_indirect_dispatch) +0xbb8.
  The `sd` at 0x218f548 stores 8 bytes to sym(__glx_indirect_dispatch) +0xbc0.
  The `sd` at 0x218f54c stores 8 bytes to sym(__glx_indirect_dispatch) +0xbc8.
  The `sd` at 0x218f550 stores 8 bytes to sym(__glx_indirect_dispatch) +0xbd0.
  The `sd` at 0x218f554 stores 8 bytes to sym(__glx_indirect_dispatch) +0xbd8.
  The `sd` at 0x218f558 stores 8 bytes to sym(__glx_indirect_dispatch) +0xbe0.
  The `sd` at 0x218f55c stores 8 bytes to sym(__glx_indirect_dispatch) +0xbe8.
  The `sd` at 0x218f560 stores 8 bytes to sym(__glx_indirect_dispatch) +0xbf0.
  The `sd` at 0x218f564 stores 8 bytes to sym(__glx_indirect_dispatch) +0xbf8.
  The `sd` at 0x218f568 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc00.
  The `sd` at 0x218f56c stores 8 bytes to sym(__glx_indirect_dispatch) +0xc08.
  The `sd` at 0x218f570 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc10.
  The `sd` at 0x218f574 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc18.
  The `sd` at 0x218f578 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc20.
  The `sd` at 0x218f57c stores 8 bytes to sym(__glx_indirect_dispatch) +0xc28.
  The `sd` at 0x218f580 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc30.
  The `sd` at 0x218f584 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc38.
  The `sd` at 0x218f588 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc40.
  The `sd` at 0x218f58c stores 8 bytes to sym(__glx_indirect_dispatch) +0xc48.
  The `sd` at 0x218f590 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc50.
  The `sd` at 0x218f594 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc58.
  The `sd` at 0x218f598 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc60.
  The `sd` at 0x218f59c stores 8 bytes to sym(__glx_indirect_dispatch) +0xc68.
  The `sd` at 0x218f5a0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc70.
  The `sd` at 0x218f5a4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc78.
  The `sd` at 0x218f5a8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc80.
  The `sd` at 0x218f5ac stores 8 bytes to sym(__glx_indirect_dispatch) +0xc88.
  The `sd` at 0x218f5b0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc90.
  The `sd` at 0x218f5b4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xc98.
  The `sd` at 0x218f5b8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xca0.
  The `sd` at 0x218f5bc stores 8 bytes to sym(__glx_indirect_dispatch) +0xca8.
  The `sd` at 0x218f5c0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xcb0.
  The `sd` at 0x218f5c4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xcb8.
  The `sd` at 0x218f5c8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xcc0.
  The `sd` at 0x218f5cc stores 8 bytes to sym(__glx_indirect_dispatch) +0xcc8.
  The `sd` at 0x218f5d0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xcd0.
  The `sd` at 0x218f5d4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xcd8.
  The `sd` at 0x218f5d8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xce0.
  The `sd` at 0x218f5dc stores 8 bytes to sym(__glx_indirect_dispatch) +0xce8.
  The `sd` at 0x218f5e0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xcf0.
  The `sd` at 0x218f5e4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xcf8.
  The `sd` at 0x218f5e8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd00.
  The `sd` at 0x218f5ec stores 8 bytes to sym(__glx_indirect_dispatch) +0xd08.
  The `sd` at 0x218f5f0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd10.
  The `sd` at 0x218f5f4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd18.
  The `sd` at 0x218f5f8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd20.
  The `sd` at 0x218f5fc stores 8 bytes to sym(__glx_indirect_dispatch) +0xd28.
  The `sd` at 0x218f600 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd30.
  The `sd` at 0x218f604 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd38.
  The `sd` at 0x218f608 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd40.
  The `sd` at 0x218f60c stores 8 bytes to sym(__glx_indirect_dispatch) +0xd48.
  The `sd` at 0x218f610 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd50.
  The `sd` at 0x218f614 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd58.
  The `sd` at 0x218f618 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd60.
  The `sd` at 0x218f61c stores 8 bytes to sym(__glx_indirect_dispatch) +0xd68.
  The `sd` at 0x218f620 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd70.
  The `sd` at 0x218f624 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd78.
  The `sd` at 0x218f628 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd80.
  The `sd` at 0x218f62c stores 8 bytes to sym(__glx_indirect_dispatch) +0xd88.
  The `sd` at 0x218f630 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd90.
  The `sd` at 0x218f634 stores 8 bytes to sym(__glx_indirect_dispatch) +0xd98.
  The `sd` at 0x218f638 stores 8 bytes to sym(__glx_indirect_dispatch) +0xda0.
  The `sd` at 0x218f63c stores 8 bytes to sym(__glx_indirect_dispatch) +0xda8.
  The `sd` at 0x218f640 stores 8 bytes to sym(__glx_indirect_dispatch) +0xdb0.
  The `sd` at 0x218f644 stores 8 bytes to sym(__glx_indirect_dispatch) +0xdb8.
  The `sd` at 0x218f648 stores 8 bytes to sym(__glx_indirect_dispatch) +0xdc0.
  The `sd` at 0x218f64c stores 8 bytes to sym(__glx_indirect_dispatch) +0xdc8.
  The `sd` at 0x218f650 stores 8 bytes to sym(__glx_indirect_dispatch) +0xdd0.
  The `sd` at 0x218f654 stores 8 bytes to sym(__glx_indirect_dispatch) +0xdd8.
  The `sd` at 0x218f658 stores 8 bytes to sym(__glx_indirect_dispatch) +0xde0.
  The `sd` at 0x218f65c stores 8 bytes to sym(__glx_indirect_dispatch) +0xde8.
  The `sd` at 0x218f660 stores 8 bytes to sym(__glx_indirect_dispatch) +0xdf0.
  The `sd` at 0x218f664 stores 8 bytes to sym(__glx_indirect_dispatch) +0xdf8.
  The `sd` at 0x218f668 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe00.
  The `sd` at 0x218f66c stores 8 bytes to sym(__glx_indirect_dispatch) +0xe08.
  The `sd` at 0x218f670 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe10.
  The `sd` at 0x218f674 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe18.
  The `sd` at 0x218f678 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe20.
  The `sd` at 0x218f67c stores 8 bytes to sym(__glx_indirect_dispatch) +0xe28.
  The `sd` at 0x218f680 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe30.
  The `sd` at 0x218f684 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe38.
  The `sd` at 0x218f688 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe40.
  The `sd` at 0x218f68c stores 8 bytes to sym(__glx_indirect_dispatch) +0xe48.
  The `sd` at 0x218f690 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe50.
  The `sd` at 0x218f694 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe58.
  The `sd` at 0x218f698 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe60.
  The `sd` at 0x218f69c stores 8 bytes to sym(__glx_indirect_dispatch) +0xe68.
  The `sd` at 0x218f6a0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe70.
  The `sd` at 0x218f6a4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe78.
  The `sd` at 0x218f6a8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe80.
  The `sd` at 0x218f6ac stores 8 bytes to sym(__glx_indirect_dispatch) +0xe88.
  The `sd` at 0x218f6b0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe90.
  The `sd` at 0x218f6b4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xe98.
  The `sd` at 0x218f6b8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xea0.
  The `sd` at 0x218f6bc stores 8 bytes to sym(__glx_indirect_dispatch) +0xea8.
  The `sd` at 0x218f6c0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xeb0.
  The `sd` at 0x218f6c4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xeb8.
  The `sd` at 0x218f6c8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xec0.
  The `sd` at 0x218f6cc stores 8 bytes to sym(__glx_indirect_dispatch) +0xec8.
  The `sd` at 0x218f6d0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xed0.
  The `sd` at 0x218f6d4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xed8.
  The `sd` at 0x218f6d8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xee0.
  The `sd` at 0x218f6dc stores 8 bytes to sym(__glx_indirect_dispatch) +0xee8.
  The `sd` at 0x218f6e0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xef0.
  The `sd` at 0x218f6e4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xef8.
  The `sd` at 0x218f6e8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf00.
  The `sd` at 0x218f6ec stores 8 bytes to sym(__glx_indirect_dispatch) +0xf08.
  The `sd` at 0x218f6f0 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf10.
  The `sd` at 0x218f6f4 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf18.
  The `sd` at 0x218f6f8 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf20.
  The `sd` at 0x218f6fc stores 8 bytes to sym(__glx_indirect_dispatch) +0xf28.
  The `sd` at 0x218f700 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf30.
  The `sd` at 0x218f704 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf38.
  The `sd` at 0x218f708 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf40.
  The `sd` at 0x218f70c stores 8 bytes to sym(__glx_indirect_dispatch) +0xf48.
  The `sd` at 0x218f710 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf50.
  The `sd` at 0x218f714 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf58.
  The `sd` at 0x218f718 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf60.
  The `sd` at 0x218f71c stores 8 bytes to sym(__glx_indirect_dispatch) +0xf68.
  The `sd` at 0x218f720 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf70.
  The `sd` at 0x218f724 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf78.
  The `sd` at 0x218f728 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf80.
  The `sd` at 0x218f72c stores 8 bytes to sym(__glx_indirect_dispatch) +0xf88.
  The `sd` at 0x218f730 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf90.
  The `sd` at 0x218f734 stores 8 bytes to sym(__glx_indirect_dispatch) +0xf98.
  The `sd` at 0x218f738 stores 8 bytes to sym(__glx_indirect_dispatch) +0xfa0.
  The `sd` at 0x218f73c stores 8 bytes to sym(__glx_indirect_dispatch) +0xfa8.
  The `sd` at 0x218f740 stores 8 bytes to sym(__glx_indirect_dispatch) +0xfb0.
  The `sd` at 0x218f744 stores 8 bytes to sym(__glx_indirect_dispatch) +0xfb8.
  The `sd` at 0x218f748 stores 8 bytes to sym(__glx_indirect_dispatch) +0xfc0.
  The `sd` at 0x218f74c stores 8 bytes to sym(__glx_indirect_dispatch) +0xfc8.
  The `sd` at 0x218f750 stores 8 bytes to sym(__glx_indirect_dispatch) +0xfd0.
  The `sd` at 0x218f754 stores 8 bytes to sym(__glx_indirect_dispatch) +0xfd8.
  The `sd` at 0x218f758 stores 8 bytes to sym(__glx_indirect_dispatch) +0xfe0.
  The `sd` at 0x218f75c stores 8 bytes to sym(__glx_indirect_dispatch) +0xfe8.
  The `sd` at 0x218f760 stores 8 bytes to sym(__glx_indirect_dispatch) +0xff0.
  The `sd` at 0x218f764 stores 8 bytes to sym(__glx_indirect_dispatch) +0xff8.
  The `sd` at 0x218f768 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1000.
  The `sd` at 0x218f76c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1008.
  The `sd` at 0x218f770 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1010.
  The `sd` at 0x218f774 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1018.
  The `sd` at 0x218f778 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1020.
  The `sd` at 0x218f77c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1028.
  The `sd` at 0x218f780 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1030.
  The `sd` at 0x218f784 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1038.
  The `sd` at 0x218f788 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1040.
  The `sd` at 0x218f78c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1048.
  The `sd` at 0x218f790 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1050.
  The `sd` at 0x218f794 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1058.
  The `sd` at 0x218f798 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1060.
  The `sd` at 0x218f79c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1068.
  The `sd` at 0x218f7a0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1070.
  The `sd` at 0x218f7a4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1078.
  The `sd` at 0x218f7a8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1080.
  The `sd` at 0x218f7ac stores 8 bytes to sym(__glx_indirect_dispatch) +0x1088.
  The `sd` at 0x218f7b0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1090.
  The `sd` at 0x218f7b4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1098.
  The `sd` at 0x218f7b8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x10a0.
  The `sd` at 0x218f7bc stores 8 bytes to sym(__glx_indirect_dispatch) +0x10a8.
  The `sd` at 0x218f7c0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x10b0.
  The `sd` at 0x218f7c4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x10b8.
  The `sd` at 0x218f7c8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x10c0.
  The `sd` at 0x218f7cc stores 8 bytes to sym(__glx_indirect_dispatch) +0x10c8.
  The `sd` at 0x218f7d0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x10d0.
  The `sd` at 0x218f7d4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x10d8.
  The `sd` at 0x218f7d8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x10e0.
  The `sd` at 0x218f7dc stores 8 bytes to sym(__glx_indirect_dispatch) +0x10e8.
  The `sd` at 0x218f7e0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x10f0.
  The `sd` at 0x218f7e4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x10f8.
  The `sd` at 0x218f7e8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1100.
  The `sd` at 0x218f7ec stores 8 bytes to sym(__glx_indirect_dispatch) +0x1108.
  The `sd` at 0x218f7f0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1110.
  The `sd` at 0x218f7f4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1118.
  The `sd` at 0x218f7f8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1120.
  The `sd` at 0x218f7fc stores 8 bytes to sym(__glx_indirect_dispatch) +0x1128.
  The `sd` at 0x218f800 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1130.
  The `sd` at 0x218f804 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1138.
  The `sd` at 0x218f808 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1140.
  The `sd` at 0x218f80c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1148.
  The `sd` at 0x218f810 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1150.
  The `sd` at 0x218f814 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1158.
  The `sd` at 0x218f818 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1160.
  The `sd` at 0x218f81c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1168.
  The `sd` at 0x218f820 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1170.
  The `sd` at 0x218f824 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1178.
  The `sd` at 0x218f828 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1180.
  The `sd` at 0x218f82c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1188.
  The `sd` at 0x218f830 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1190.
  The `sd` at 0x218f834 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1198.
  The `sd` at 0x218f838 stores 8 bytes to sym(__glx_indirect_dispatch) +0x11a0.
  The `sd` at 0x218f83c stores 8 bytes to sym(__glx_indirect_dispatch) +0x11a8.
  The `sd` at 0x218f840 stores 8 bytes to sym(__glx_indirect_dispatch) +0x11b0.
  The `sd` at 0x218f844 stores 8 bytes to sym(__glx_indirect_dispatch) +0x11b8.
  The `sd` at 0x218f848 stores 8 bytes to sym(__glx_indirect_dispatch) +0x11c0.
  The `sd` at 0x218f84c stores 8 bytes to sym(__glx_indirect_dispatch) +0x11c8.
  The `sd` at 0x218f850 stores 8 bytes to sym(__glx_indirect_dispatch) +0x11d0.
  The `sd` at 0x218f854 stores 8 bytes to sym(__glx_indirect_dispatch) +0x11d8.
  The `sd` at 0x218f858 stores 8 bytes to sym(__glx_indirect_dispatch) +0x11e0.
  The `sd` at 0x218f85c stores 8 bytes to sym(__glx_indirect_dispatch) +0x11e8.
  The `sd` at 0x218f860 stores 8 bytes to sym(__glx_indirect_dispatch) +0x11f0.
  The `sd` at 0x218f864 stores 8 bytes to sym(__glx_indirect_dispatch) +0x11f8.
  The `sd` at 0x218f868 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1200.
  The `sd` at 0x218f86c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1250.
  The `ld` at 0x218f870 loads 8 bytes from abs 0x21beec8.
  The `sd` at 0x218f874 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1248.
  The `ld` at 0x218f878 loads 8 bytes from abs 0x21beec0.
  The `sd` at 0x218f87c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1240.
  The `ld` at 0x218f880 loads 8 bytes from abs 0x21beeb8.
  The `sd` at 0x218f884 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1238.
  The `ld` at 0x218f888 loads 8 bytes from abs 0x21beeb0.
  The `sd` at 0x218f88c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1258.
  The `ld` at 0x218f890 loads 8 bytes from abs 0x21beed0.
  The `sd` at 0x218f894 stores 8 bytes to sym(__glx_indirect_dispatch) +0x12b8.
  The `ld` at 0x218f898 loads 8 bytes from abs 0x21bea78.
  The `sd` at 0x218f89c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1298.
  The `ld` at 0x218f8a0 loads 8 bytes from abs 0x21bec00.
  The `sd` at 0x218f8a4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x12a0.
  The `ld` at 0x218f8a8 loads 8 bytes from abs 0x21bec08.
  The `sd` at 0x218f8ac stores 8 bytes to sym(__glx_indirect_dispatch) +0x12a8.
  The `ld` at 0x218f8b0 loads 8 bytes from abs 0x21bec10.
  The `sd` at 0x218f8b4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x12b0.
  The `ld` at 0x218f8b8 loads 8 bytes from abs 0x21bec18.
  The `sd` at 0x218f8bc stores 8 bytes to sym(__glx_indirect_dispatch) +0x1310.
  The `ld` at 0x218f8c0 loads 8 bytes from abs 0x21bece8.
  The `sd` at 0x218f8c4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1308.
  The `ld` at 0x218f8c8 loads 8 bytes from abs 0x21becf0.
  The `sd` at 0x218f8cc stores 8 bytes to sym(__glx_indirect_dispatch) +0x1300.
  The `ld` at 0x218f8d0 loads 8 bytes from abs 0x21bed00.
  The `sd` at 0x218f8d4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x12f8.
  The `ld` at 0x218f8d8 loads 8 bytes from abs 0x21bed08.
  The `sd` at 0x218f8dc stores 8 bytes to sym(__glx_indirect_dispatch) +0x1318.
  The `ld` at 0x218f8e0 loads 8 bytes from abs 0x21bece0.
  The `sd` at 0x218f8e4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1208.
  The `ld` at 0x218f8e8 loads 8 bytes from abs 0x21bee80.
  The `ld` at 0x218f8ec loads 8 bytes from abs 0x21bee48.
  The `sd` at 0x218f8f0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1228.
  The `ld` at 0x218f8f4 loads 8 bytes from abs 0x21beea0.
  The `sd` at 0x218f8f8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1220.
  The `ld` at 0x218f8fc loads 8 bytes from abs 0x21bee98.
  The `sd` at 0x218f900 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1218.
  The `ld` at 0x218f904 loads 8 bytes from abs 0x21bee90.
  The `sd` at 0x218f908 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1210.
  The `ld` at 0x218f90c loads 8 bytes from abs 0x21bee88.
  The `sd` at 0x218f910 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1270.
  The `ld` at 0x218f914 loads 8 bytes from abs 0x21bebd8.
  The `sd` at 0x218f918 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1278.
  The `ld` at 0x218f91c loads 8 bytes from abs 0x21bebe0.
  The `sd` at 0x218f920 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1280.
  The `ld` at 0x218f924 loads 8 bytes from abs 0x21bebe8.
  The `sd` at 0x218f928 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1288.
  The `ld` at 0x218f92c loads 8 bytes from abs 0x21bebf0.
  The `sd` at 0x218f930 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1230.
  The `ld` at 0x218f934 loads 8 bytes from abs 0x21beea8.
  The `sd` at 0x218f938 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1268.
  The `ld` at 0x218f93c loads 8 bytes from abs 0x21bebd0.
  The `sd` at 0x218f940 stores 8 bytes to sym(__glx_indirect_dispatch) +0x12c8.
  The `ld` at 0x218f944 loads 8 bytes from abs 0x21bea88.
  The `sd` at 0x218f948 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1290.
  The `ld` at 0x218f94c loads 8 bytes from abs 0x21bebf8.
  The `sd` at 0x218f950 stores 8 bytes to sym(__glx_indirect_dispatch) +0x12e8.
  The `ld` at 0x218f954 loads 8 bytes from abs 0x21beaa8.
  The `sd` at 0x218f958 stores 8 bytes to sym(__glx_indirect_dispatch) +0x12e0.
  The `ld` at 0x218f95c loads 8 bytes from abs 0x21beaa0.
  The `sd` at 0x218f960 stores 8 bytes to sym(__glx_indirect_dispatch) +0x12d8.
  The `ld` at 0x218f964 loads 8 bytes from abs 0x21bea98.
  The `sd` at 0x218f968 stores 8 bytes to sym(__glx_indirect_dispatch) +0x12d0.
  The `ld` at 0x218f96c loads 8 bytes from abs 0x21bea90.
  The `sd` at 0x218f970 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1330.
  The `ld` at 0x218f974 loads 8 bytes from abs 0x21becc8.
  The `sd` at 0x218f978 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1338.
  The `ld` at 0x218f97c loads 8 bytes from abs 0x21becc0.
  The `sd` at 0x218f980 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1340.
  The `ld` at 0x218f984 loads 8 bytes from abs 0x21becb8.
  The `sd` at 0x218f988 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1348.
  The `ld` at 0x218f98c loads 8 bytes from abs 0x21becb0.
  The `sd` at 0x218f990 stores 8 bytes to sym(__glx_indirect_dispatch) +0x12f0.
  The `ld` at 0x218f994 loads 8 bytes from abs 0x21beca8.
  The `sd` at 0x218f998 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1328.
  The `ld` at 0x218f99c loads 8 bytes from abs 0x21becd0.
  The `ld` at 0x218f9a0 loads 8 bytes from abs 0x21beab0.
  The `sd` at 0x218f9a4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1350.
  The `ld` at 0x218f9a8 loads 8 bytes from abs 0x21bee78.
  The `sd` at 0x218f9ac stores 8 bytes to sym(__glx_indirect_dispatch) +0x1260.
  The `ld` at 0x218f9b0 loads 8 bytes from abs 0x21beed8.
  The `sd` at 0x218f9b4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x12c0.
  The `ld` at 0x218f9b8 loads 8 bytes from abs 0x21bea80.
  The `sd` at 0x218f9bc stores 8 bytes to sym(__glx_indirect_dispatch) +0x1320.
  The `sd` at 0x218f9c0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1770.
  The `ld` at 0x218f9c4 loads 8 bytes from abs 0x21bec30.
  The `sd` at 0x218f9c8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1778.
  The `ld` at 0x218f9cc loads 8 bytes from abs 0x21bec38.
  The `sd` at 0x218f9d0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1780.
  The `ld` at 0x218f9d4 loads 8 bytes from abs 0x21bec40.
  The `sd` at 0x218f9d8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1788.
  The `ld` at 0x218f9dc loads 8 bytes from abs 0x21bec48.
  The `sd` at 0x218f9e0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1790.
  The `ld` at 0x218f9e4 loads 8 bytes from abs 0x21bec50.
  The `sd` at 0x218f9e8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1718.
  The `ld` at 0x218f9ec loads 8 bytes from abs 0x21bf3b8.
  The `sd` at 0x218f9f0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1710.
  The `ld` at 0x218f9f4 loads 8 bytes from abs 0x21bf3b0.
  The `sd` at 0x218f9f8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1708.
  The `ld` at 0x218f9fc loads 8 bytes from abs 0x21bf3a8.
  The `sd` at 0x218fa00 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1700.
  The `ld` at 0x218fa04 loads 8 bytes from abs 0x21bf3a0.
  The `sd` at 0x218fa08 stores 8 bytes to sym(__glx_indirect_dispatch) +0x16f8.
  The `ld` at 0x218fa0c loads 8 bytes from abs 0x21bf398.
  The `sd` at 0x218fa10 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1680.
  The `ld` at 0x218fa14 loads 8 bytes from abs 0x21bf320.
  The `sd` at 0x218fa18 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1688.
  The `ld` at 0x218fa1c loads 8 bytes from abs 0x21bf328.
  The `sd` at 0x218fa20 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1690.
  The `ld` at 0x218fa24 loads 8 bytes from abs 0x21bf330.
  The `sd` at 0x218fa28 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1698.
  The `ld` at 0x218fa2c loads 8 bytes from abs 0x21bf338.
  The `sd` at 0x218fa30 stores 8 bytes to sym(__glx_indirect_dispatch) +0x16a0.
  The `ld` at 0x218fa34 loads 8 bytes from abs 0x21bf340.
  The `sd` at 0x218fa38 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1628.
  The `ld` at 0x218fa3c loads 8 bytes from abs 0x21bede8.
  The `sd` at 0x218fa40 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1620.
  The `ld` at 0x218fa44 loads 8 bytes from abs 0x21bede0.
  The `sd` at 0x218fa48 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1618.
  The `ld` at 0x218fa4c loads 8 bytes from abs 0x21bedd8.
  The `sd` at 0x218fa50 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1610.
  The `ld` at 0x218fa54 loads 8 bytes from abs 0x21bedd0.
  The `sd` at 0x218fa58 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1608.
  The `ld` at 0x218fa5c loads 8 bytes from abs 0x21bedc8.
  The `sd` at 0x218fa60 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1590.
  The `ld` at 0x218fa64 loads 8 bytes from abs 0x21bed50.
  The `sd` at 0x218fa68 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1598.
  The `ld` at 0x218fa6c loads 8 bytes from abs 0x21bed58.
  The `sd` at 0x218fa70 stores 8 bytes to sym(__glx_indirect_dispatch) +0x15a0.
  The `ld` at 0x218fa74 loads 8 bytes from abs 0x21bed60.
  The `sd` at 0x218fa78 stores 8 bytes to sym(__glx_indirect_dispatch) +0x15a8.
  The `ld` at 0x218fa7c loads 8 bytes from abs 0x21bed68.
  The `sd` at 0x218fa80 stores 8 bytes to sym(__glx_indirect_dispatch) +0x15b0.
  The `ld` at 0x218fa84 loads 8 bytes from abs 0x21bed70.
  The `sd` at 0x218fa88 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1538.
  The `ld` at 0x218fa8c loads 8 bytes from abs 0x21bebb8.
  The `sd` at 0x218fa90 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1530.
  The `ld` at 0x218fa94 loads 8 bytes from abs 0x21bebb0.
  The `sd` at 0x218fa98 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1528.
  The `ld` at 0x218fa9c loads 8 bytes from abs 0x21beba8.
  The `sd` at 0x218faa0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1520.
  The `ld` at 0x218faa4 loads 8 bytes from abs 0x21beba0.
  The `sd` at 0x218faa8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1518.
  The `ld` at 0x218faac loads 8 bytes from abs 0x21beb98.
  The `sd` at 0x218fab0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1420.
  The `ld` at 0x218fab4 loads 8 bytes from abs 0x21beb08.
  The `sd` at 0x218fab8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1428.
  The `ld` at 0x218fabc loads 8 bytes from abs 0x21beb10.
  The `sd` at 0x218fac0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1430.
  The `ld` at 0x218fac4 loads 8 bytes from abs 0x21beb18.
  The `sd` at 0x218fac8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1438.
  The `ld` at 0x218facc loads 8 bytes from abs 0x21beb20.
  The `sd` at 0x218fad0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1440.
  The `ld` at 0x218fad4 loads 8 bytes from abs 0x21beb28.
  The `sd` at 0x218fad8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x13c8.
  The `sd` at 0x218fadc stores 8 bytes to sym(__glx_indirect_dispatch) +0x13c0.
  The `sd` at 0x218fae0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x13b8.
  The `sd` at 0x218fae4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x13b0.
  The `sd` at 0x218fae8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x13a8.
  The `sd` at 0x218faec stores 8 bytes to sym(__glx_indirect_dispatch) +0x17e0.
  The `ld` at 0x218faf0 loads 8 bytes from abs 0x21beca0.
  The `sd` at 0x218faf4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1358.
  The `ld` at 0x218faf8 loads 8 bytes from abs 0x21bec98.
  The `sd` at 0x218fafc stores 8 bytes to sym(__glx_indirect_dispatch) +0x17b0.
  The `ld` at 0x218fb00 loads 8 bytes from abs 0x21bec70.
  The `sd` at 0x218fb04 stores 8 bytes to sym(__glx_indirect_dispatch) +0x17b8.
  The `ld` at 0x218fb08 loads 8 bytes from abs 0x21bec78.
  The `sd` at 0x218fb0c stores 8 bytes to sym(__glx_indirect_dispatch) +0x17c8.
  The `ld` at 0x218fb10 loads 8 bytes from abs 0x21bec88.
  The `sd` at 0x218fb14 stores 8 bytes to sym(__glx_indirect_dispatch) +0x17d0.
  The `ld` at 0x218fb18 loads 8 bytes from abs 0x21bec90.
  The `sd` at 0x218fb1c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1798.
  The `ld` at 0x218fb20 loads 8 bytes from abs 0x21bec58.
  The `sd` at 0x218fb24 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1720.
  The `ld` at 0x218fb28 loads 8 bytes from abs 0x21bf3c0.
  The `sd` at 0x218fb2c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1758.
  The `ld` at 0x218fb30 loads 8 bytes from abs 0x21bf3f8.
  The `sd` at 0x218fb34 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1750.
  The `ld` at 0x218fb38 loads 8 bytes from abs 0x21bf3f0.
  The `sd` at 0x218fb3c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1740.
  The `ld` at 0x218fb40 loads 8 bytes from abs 0x21bf3e0.
  The `sd` at 0x218fb44 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1738.
  The `ld` at 0x218fb48 loads 8 bytes from abs 0x21bf3d8.
  The `sd` at 0x218fb4c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1760.
  The `ld` at 0x218fb50 loads 8 bytes from abs 0x21bec20.
  The `sd` at 0x218fb54 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1768.
  The `ld` at 0x218fb58 loads 8 bytes from abs 0x21bec28.
  The `sd` at 0x218fb5c stores 8 bytes to sym(__glx_indirect_dispatch) +0x16f0.
  The `ld` at 0x218fb60 loads 8 bytes from abs 0x21bf390.
  The `sd` at 0x218fb64 stores 8 bytes to sym(__glx_indirect_dispatch) +0x16e8.
  The `ld` at 0x218fb68 loads 8 bytes from abs 0x21bf388.
  The `sd` at 0x218fb6c stores 8 bytes to sym(__glx_indirect_dispatch) +0x16c0.
  The `ld` at 0x218fb70 loads 8 bytes from abs 0x21bf360.
  The `sd` at 0x218fb74 stores 8 bytes to sym(__glx_indirect_dispatch) +0x16c8.
  The `ld` at 0x218fb78 loads 8 bytes from abs 0x21bf368.
  The `sd` at 0x218fb7c stores 8 bytes to sym(__glx_indirect_dispatch) +0x16d8.
  The `ld` at 0x218fb80 loads 8 bytes from abs 0x21bf378.
  The `sd` at 0x218fb84 stores 8 bytes to sym(__glx_indirect_dispatch) +0x16e0.
  The `ld` at 0x218fb88 loads 8 bytes from abs 0x21bf380.
  The `sd` at 0x218fb8c stores 8 bytes to sym(__glx_indirect_dispatch) +0x16a8.
  The `ld` at 0x218fb90 loads 8 bytes from abs 0x21bf348.
  The `sd` at 0x218fb94 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1630.
  The `ld` at 0x218fb98 loads 8 bytes from abs 0x21bedf0.
  The `sd` at 0x218fb9c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1668.
  The `ld` at 0x218fba0 loads 8 bytes from abs 0x21bf308.
  The `sd` at 0x218fba4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1660.
  The `ld` at 0x218fba8 loads 8 bytes from abs 0x21bf300.
  The `sd` at 0x218fbac stores 8 bytes to sym(__glx_indirect_dispatch) +0x1650.
  The `ld` at 0x218fbb0 loads 8 bytes from abs 0x21bee10.
  The `sd` at 0x218fbb4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1648.
  The `ld` at 0x218fbb8 loads 8 bytes from abs 0x21bee08.
  The `sd` at 0x218fbbc stores 8 bytes to sym(__glx_indirect_dispatch) +0x1670.
  The `ld` at 0x218fbc0 loads 8 bytes from abs 0x21bf310.
  The `sd` at 0x218fbc4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1678.
  The `ld` at 0x218fbc8 loads 8 bytes from abs 0x21bf318.
  The `sd` at 0x218fbcc stores 8 bytes to sym(__glx_indirect_dispatch) +0x1600.
  The `ld` at 0x218fbd0 loads 8 bytes from abs 0x21bedc0.
  The `sd` at 0x218fbd4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x15f8.
  The `ld` at 0x218fbd8 loads 8 bytes from abs 0x21bedb8.
  The `sd` at 0x218fbdc stores 8 bytes to sym(__glx_indirect_dispatch) +0x15d0.
  The `ld` at 0x218fbe0 loads 8 bytes from abs 0x21bed90.
  The `sd` at 0x218fbe4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x15d8.
  The `ld` at 0x218fbe8 loads 8 bytes from abs 0x21bed98.
  The `sd` at 0x218fbec stores 8 bytes to sym(__glx_indirect_dispatch) +0x15e8.
  The `ld` at 0x218fbf0 loads 8 bytes from abs 0x21beda8.
  The `sd` at 0x218fbf4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x15f0.
  The `ld` at 0x218fbf8 loads 8 bytes from abs 0x21bedb0.
  The `sd` at 0x218fbfc stores 8 bytes to sym(__glx_indirect_dispatch) +0x15b8.
  The `ld` at 0x218fc00 loads 8 bytes from abs 0x21bed78.
  The `sd` at 0x218fc04 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1540.
  The `ld` at 0x218fc08 loads 8 bytes from abs 0x21bebc0.
  The `sd` at 0x218fc0c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1578.
  The `ld` at 0x218fc10 loads 8 bytes from abs 0x21bed38.
  The `sd` at 0x218fc14 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1570.
  The `ld` at 0x218fc18 loads 8 bytes from abs 0x21bed30.
  The `sd` at 0x218fc1c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1560.
  The `ld` at 0x218fc20 loads 8 bytes from abs 0x21bed20.
  The `sd` at 0x218fc24 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1558.
  The `ld` at 0x218fc28 loads 8 bytes from abs 0x21bf268.
  The `sd` at 0x218fc2c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1580.
  The `ld` at 0x218fc30 loads 8 bytes from abs 0x21bed40.
  The `sd` at 0x218fc34 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1588.
  The `ld` at 0x218fc38 loads 8 bytes from abs 0x21bed48.
  The `sd` at 0x218fc3c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1510.
  The `ld` at 0x218fc40 loads 8 bytes from abs 0x21beb90.
  The `sd` at 0x218fc44 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1508.
  The `ld` at 0x218fc48 loads 8 bytes from abs 0x21beb70.
  The `sd` at 0x218fc4c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1460.
  The `ld` at 0x218fc50 loads 8 bytes from abs 0x21beb48.
  The `sd` at 0x218fc54 stores 8 bytes to sym(__glx_indirect_dispatch) +0x14e8.
  The `ld` at 0x218fc58 loads 8 bytes from abs 0x21beb50.
  The `sd` at 0x218fc5c stores 8 bytes to sym(__glx_indirect_dispatch) +0x14f8.
  The `ld` at 0x218fc60 loads 8 bytes from abs 0x21beb60.
  The `sd` at 0x218fc64 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1500.
  The `ld` at 0x218fc68 loads 8 bytes from abs 0x21beb68.
  The `sd` at 0x218fc6c stores 8 bytes to sym(__glx_indirect_dispatch) +0x1448.
  The `ld` at 0x218fc70 loads 8 bytes from abs 0x21beb30.
  The `sd` at 0x218fc74 stores 8 bytes to sym(__glx_indirect_dispatch) +0x13d0.
  The `sd` at 0x218fc78 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1408.
  The `ld` at 0x218fc7c loads 8 bytes from abs 0x21beaf0.
  The `sd` at 0x218fc80 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1400.
  The `ld` at 0x218fc84 loads 8 bytes from abs 0x21beae8.
  The `sd` at 0x218fc88 stores 8 bytes to sym(__glx_indirect_dispatch) +0x13f0.
  The `ld` at 0x218fc8c loads 8 bytes from abs 0x21bead8.
  The `sd` at 0x218fc90 stores 8 bytes to sym(__glx_indirect_dispatch) +0x13e8.
  The `ld` at 0x218fc94 loads 8 bytes from abs 0x21bead0.
  The `sd` at 0x218fc98 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1410.
  The `ld` at 0x218fc9c loads 8 bytes from abs 0x21beaf8.
  The `sd` at 0x218fca0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1418.
  The `ld` at 0x218fca4 loads 8 bytes from abs 0x21beb00.
  The `sd` at 0x218fca8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x13a0.
  The `sd` at 0x218fcac stores 8 bytes to sym(__glx_indirect_dispatch) +0x1398.
  The `sd` at 0x218fcb0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1370.
  The `sd` at 0x218fcb4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1378.
  The `sd` at 0x218fcb8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1388.
  The `sd` at 0x218fcbc stores 8 bytes to sym(__glx_indirect_dispatch) +0x1390.
  The `sd` at 0x218fcc0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x17a8.
  The `ld` at 0x218fcc4 loads 8 bytes from abs 0x21bec68.
  The `sd` at 0x218fcc8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x14e0.
  The `sd` at 0x218fccc stores 8 bytes to sym(__glx_indirect_dispatch) +0x14d8.
  The `sd` at 0x218fcd0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x14d0.
  The `sd` at 0x218fcd4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x14c8.
  The `sd` at 0x218fcd8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x14c0.
  The `sd` at 0x218fcdc stores 8 bytes to sym(__glx_indirect_dispatch) +0x14b8.
  The `sd` at 0x218fce0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x14b0.
  The `sd` at 0x218fce4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x14a8.
  The `sd` at 0x218fce8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x14a0.
  The `sd` at 0x218fcec stores 8 bytes to sym(__glx_indirect_dispatch) +0x1498.
  The `sd` at 0x218fcf0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1490.
  The `sd` at 0x218fcf4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1488.
  The `sd` at 0x218fcf8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1480.
  The `sd` at 0x218fcfc stores 8 bytes to sym(__glx_indirect_dispatch) +0x1478.
  The `sd` at 0x218fd00 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1470.
  The `sd` at 0x218fd04 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1468.
  The `ld` at 0x218fd08 loads 8 bytes from abs 0x21becf8.
  The `ld` at 0x218fd0c loads 8 bytes from abs 0x21becd8.
  The `sd` at 0x218fd10 stores 8 bytes to sym(__glx_indirect_dispatch) +0x17a0.
  The `ld` at 0x218fd14 loads 8 bytes from abs 0x21bec60.
  The `sd` at 0x218fd18 stores 8 bytes to sym(__glx_indirect_dispatch) +0x17c0.
  The `ld` at 0x218fd1c loads 8 bytes from abs 0x21bec80.
  The `sd` at 0x218fd20 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1730.
  The `ld` at 0x218fd24 loads 8 bytes from abs 0x21bf3d0.
  The `sd` at 0x218fd28 stores 8 bytes to sym(__glx_indirect_dispatch) +0x16b8.
  The `ld` at 0x218fd2c loads 8 bytes from abs 0x21bf358.
  The `sd` at 0x218fd30 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1748.
  The `ld` at 0x218fd34 loads 8 bytes from abs 0x21bf3e8.
  The `sd` at 0x218fd38 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1728.
  The `ld` at 0x218fd3c loads 8 bytes from abs 0x21bf3c8.
  The `sd` at 0x218fd40 stores 8 bytes to sym(__glx_indirect_dispatch) +0x16b0.
  The `ld` at 0x218fd44 loads 8 bytes from abs 0x21bf350.
  The `sd` at 0x218fd48 stores 8 bytes to sym(__glx_indirect_dispatch) +0x16d0.
  The `ld` at 0x218fd4c loads 8 bytes from abs 0x21bf370.
  The `sd` at 0x218fd50 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1640.
  The `ld` at 0x218fd54 loads 8 bytes from abs 0x21bee00.
  The `sd` at 0x218fd58 stores 8 bytes to sym(__glx_indirect_dispatch) +0x15c8.
  The `ld` at 0x218fd5c loads 8 bytes from abs 0x21bed88.
  The `sd` at 0x218fd60 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1658.
  The `ld` at 0x218fd64 loads 8 bytes from abs 0x21bee18.
  The `sd` at 0x218fd68 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1638.
  The `ld` at 0x218fd6c loads 8 bytes from abs 0x21bedf8.
  The `sd` at 0x218fd70 stores 8 bytes to sym(__glx_indirect_dispatch) +0x15c0.
  The `ld` at 0x218fd74 loads 8 bytes from abs 0x21bed80.
  The `sd` at 0x218fd78 stores 8 bytes to sym(__glx_indirect_dispatch) +0x15e0.
  The `ld` at 0x218fd7c loads 8 bytes from abs 0x21beda0.
  The `sd` at 0x218fd80 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1550.
  The `ld` at 0x218fd84 loads 8 bytes from abs 0x21bf260.
  The `sd` at 0x218fd88 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1458.
  The `ld` at 0x218fd8c loads 8 bytes from abs 0x21beb40.
  The `sd` at 0x218fd90 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1568.
  The `ld` at 0x218fd94 loads 8 bytes from abs 0x21bed28.
  The `sd` at 0x218fd98 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1548.
  The `ld` at 0x218fd9c loads 8 bytes from abs 0x21bebc8.
  The `sd` at 0x218fda0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1450.
  The `ld` at 0x218fda4 loads 8 bytes from abs 0x21beb38.
  The `sd` at 0x218fda8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x14f0.
  The `ld` at 0x218fdac loads 8 bytes from abs 0x21beb58.
  The `sd` at 0x218fdb0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x13e0.
  The `ld` at 0x218fdb4 loads 8 bytes from abs 0x21beac8.
  The `sd` at 0x218fdb8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1368.
  The `ld` at 0x218fdbc loads 8 bytes from abs 0x21bed10.
  The `sd` at 0x218fdc0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x13f8.
  The `ld` at 0x218fdc4 loads 8 bytes from abs 0x21beae0.
  The `sd` at 0x218fdc8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x13d8.
  The `ld` at 0x218fdcc loads 8 bytes from abs 0x21beac0.
  The `sd` at 0x218fdd0 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1360.
  The `sd` at 0x218fdd8 stores 8 bytes to sym(__glx_indirect_dispatch) +0x1380.
  The `sd` at 0x218fde4 stores 8 bytes to sym(__glx_indirect_dispatch) +0x17d8.
  The `bne` branch at 0x218eb1c targets 0x218eb10, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0x218eb80 targets 0x218eb24, is taken when a2(?) != a4(=sym(__glx_indirect_dispatch)+6112), and falls through when a2(?) == a4(=sym(__glx_indirect_dispatch)+6112).
  The return at 0x218fde0 has v0 = sym(__glx_indirect_dispatch)+8.

- `__glImageSize` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21901f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21901f0-0x2190350 (352 bytes).
  It occupies 352 bytes.
  The `bgezall` at 0x2190264 calls (unnamed) [0x218fe00] with a0=a4 at entry (arg4), a1=a5 at entry (arg5), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x21902a4 calls (unnamed) [0x2190040] with a0=a5 at entry (arg5), a1=0x1900, a2=0x1901, a3=?.
  The `blez` branch at 0x2190230 targets 0x2190320, is taken when a0 <= 0 (signed), and falls through when a0 > 0 (signed).
  The `blez` branch at 0x2190238 targets 0x2190320, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `blez` branch at 0x2190240 targets 0x2190320, is taken when a2 <= 0 (signed), and falls through when a2 > 0 (signed).
  The `blez` branch at 0x2190248 targets 0x2190320, is taken when a3 <= 0 (signed), and falls through when a3 > 0 (signed).
  The `bne` branch at 0x2190278 targets 0x2190298, is taken when s0(=a5) != at(=0x1a00), and falls through when s0(=a5) == at(=0x1a00).
  The `beq` branch at 0x2190280 targets 0x2190344, is taken when s4(=a4) == a1(=0x1900), and falls through when s4(=a4) != a1(=0x1900).
  The `beq` branch at 0x2190288 targets 0x2190344, is taken when s4(=a4) == a2(=0x1901), and falls through when s4(=a4) != a2(=0x1901).
  The `beq` branch at 0x2190290 targets 0x21902c0 and is always taken.
  The `beq` branch at 0x2190348 targets 0x21902c0 and is always taken.
  The return at 0x2190318 has v0 = ?.
  The return at 0x2190338 has v0 = 0x0.
  The instructions from 0x2190340 to 0x2190340 are not reached by any path from the entry, and their branches are not listed.

- `__glFillImage` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2190e90 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2190e90-0x2191678 (2024 bytes).
  It occupies 2024 bytes.
  The `lw` at 0x2190e94 loads 4 bytes from a0 (arg0 at entry) +0xdc.
  The `lbu` at 0x2190e98 loads 1 byte from a0 (arg0 at entry) +0xb8.
  The `lw` at 0x2190e9c loads 4 bytes from a0 (arg0 at entry) +0xd4.
  The `lw` at 0x2190ea0 loads 4 bytes from a0 (arg0 at entry) +0xc8.
  The `lw` at 0x2190ea4 loads 4 bytes from a0 (arg0 at entry) +0xd0.
  The `lw` at 0x2190eb4 loads 4 bytes from a0 (arg0 at entry) +0xd8.
  The `lw` at 0x2190ec4 loads 4 bytes from a0 (arg0 at entry) +0xc4.
  The `lw` at 0x2190ed0 loads 4 bytes from a0 (arg0 at entry) +0xc0.
  The `lw` at 0x2190ed8 loads 4 bytes from a0 (arg0 at entry) +0xbc.
  The `lw` at 0x2190f10 loads 4 bytes from a0 (arg0 at entry) +0xcc.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x21912b0, `lbu` at 0x21912e0.
  10 such `sb` accesses store 1 byte to ?, including `sb` at 0x21912bc, `sb` at 0x21912ec, `sb` at 0x219148c.
  The `lbu` at 0x21912f8 loads 1 byte from table(-0x2) +0x0.
  The `sb` at 0x2191304 stores 1 byte to table(0x1) +0x0.
  The `lbu` at 0x2191310 loads 1 byte from table(-0x3) +0x0.
  The `sb` at 0x219131c stores 1 byte to table(0x2) +0x0.
  The `lbu` at 0x2191328 loads 1 byte from table(-0x4) +0x0.
  The `sb` at 0x2191334 stores 1 byte to table(0x3) +0x0.
  The `lbu` at 0x2191340 loads 1 byte from table(-0x5) +0x0.
  The `sb` at 0x219134c stores 1 byte to table(0x4) +0x0.
  The `lbu` at 0x2191358 loads 1 byte from table(-0x6) +0x0.
  The `sb` at 0x2191364 stores 1 byte to table(0x5) +0x0.
  The `lbu` at 0x2191370 loads 1 byte from table(-0x7) +0x0.
  The `sb` at 0x219137c stores 1 byte to table(0x6) +0x0.
  The `lbu` at 0x2191388 loads 1 byte from table(-0x8) +0x0.
  The `sb` at 0x2191394 stores 1 byte to table(0x7) +0x0.
  12 such `sw` accesses store 4 bytes to ?, including `sw` at 0x219149c, `sw` at 0x21914a0, `sw` at 0x21914a4.
  The `bgezall` at 0x2190f5c calls (unnamed) [0x218fe00] with a0=a6 at entry (arg6), a1=a7 at entry (arg7), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=[a0+204].
  The `bgezall` at 0x2190fb0 calls (unnamed) [0x2190040] with a0=a7 at entry (arg7), a1=?, a2=?, a3=?.
  The `jalr` at 0x2191038 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x2191458 calls (unnamed) [0x2190670] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=a4 at entry (arg4), a4=a6 at entry (arg6), a5=a7 at entry (arg7).
  The `jalr` at 0x2191464 calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21915cc calls memcpy with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x2191630 calls memcpy with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x2191668 calls (unnamed) [0x2190350] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=a6 at entry (arg6).
  The `beq` branch at 0x2190f18 targets 0x219164c, is taken when a7 == at(=0x1a00), and falls through when a7 != at(=0x1a00).
  The `beq` branch at 0x2190f34 targets 0x2190f88, is taken when v0(=[a0+220]) == t1(=0x85a3), and falls through when v0(=[a0+220]) != t1(=0x85a3).
  The `beq` branch at 0x2190f44 targets 0x2190f8c, is taken when v0(=[a0+220]) == t2(=0x85a4), and falls through when v0(=[a0+220]) != t2(=0x85a4).
  The `bgtz` branch at 0x2190f68 targets 0x2190f94, is taken when s2(=[a0+188]) > 0 (signed), and falls through when s2(=[a0+188]) <= 0 (signed).
  The `bgtz` branch at 0x2190f70 targets 0x2190f9c, is taken when s1(=[a0+192]) > 0 (signed), and falls through when s1(=[a0+192]) <= 0 (signed).
  The `bgtz` branch at 0x2190f78 targets 0x2190fa4, is taken when s0(=[a0+196]) > 0 (signed), and falls through when s0(=[a0+196]) <= 0 (signed).
  The `beq` branch at 0x2190f80 targets 0x2190fa4 and is always taken.
  The `blez` branch at 0x2190f8c targets 0x2190f70, is taken when s2(=[a0+188]) <= 0 (signed), and falls through when s2(=[a0+188]) > 0 (signed).
  The `blez` branch at 0x2190f94 targets 0x2190f78, is taken when s1(=[a0+192]) <= 0 (signed), and falls through when s1(=[a0+192]) > 0 (signed).
  The `blez` branch at 0x2190f9c targets 0x2190f80, is taken when s0(=[a0+196]) <= 0 (signed), and falls through when s0(=[a0+196]) > 0 (signed).
  The `beq` branch at 0x2190fbc targets 0x2191570, is taken when v0(=ret(0x2190040)) == at(=0x1), and falls through when v0(=ret(0x2190040)) != at(=0x1).
  The `beq` branch at 0x2190ff0 targets 0x2191000, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x2191004 targets 0x2191140, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x2191048 targets 0x2191140, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `bne` branch at 0x2191050 targets 0x219114c, is taken when s6(?) != 0, and falls through when s6(?) == 0.
  The `blez` branch at 0x219105c targets 0x2191418, is taken when t9(=a5) <= 0 (signed), and falls through when t9(=a5) > 0 (signed).
  The `blez` branch at 0x2191064 targets 0x2191418, is taken when s5(=a4) <= 0 (signed), and falls through when s5(=a4) > 0 (signed).
  The `beq` branch at 0x2191134 targets 0x21915a8 and is always taken.
  The `beq` branch at 0x2191144 targets 0x2191058, is taken when s6(?) == 0, and falls through when s6(?) != 0.
  The `blez` branch at 0x2191150 targets 0x2191418, is taken when t8(=a5) <= 0 (signed), and falls through when t8(=a5) > 0 (signed).
  The `blez` branch at 0x2191158 targets 0x2191418, is taken when s5(=a4) <= 0 (signed), and falls through when s5(=a4) > 0 (signed).
  The `blez` branch at 0x2191160 targets 0x2191418, is taken when s8(=a3) <= 0 (signed), and falls through when s8(=a3) > 0 (signed).
  The `blez` branch at 0x2191174 targets 0x2191418, is taken when s3(?) <= 0 (signed), and falls through when s3(?) > 0 (signed).
  The `blez` branch at 0x219117c targets 0x2191418, is taken when s2(=ret(0x2190040)) <= 0 (signed), and falls through when s2(=ret(0x2190040)) > 0 (signed).
  The `beq` branch at 0x21912a0 targets 0x21912c8, is taken when (s2(=ret(0x2190040)) & 0x7) == 0, and falls through when (s2(=ret(0x2190040)) & 0x7) != 0.
  The `bne` branch at 0x21912c0 targets 0x21912a8, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `beq` branch at 0x21912cc targets 0x2191398, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0x2191390 targets 0x21912d4, is taken when t8(?) != t3(=table(-0x8)), and falls through when t8(?) == t3(=table(-0x8)).
  The `bne` branch at 0x21913a4 targets 0x2191298, is taken when s1(?) != s3(?), and falls through when s1(?) == s3(?).
  The `bne` branch at 0x21913bc targets 0x219128c, is taken when s7(?) != s8(=a3), and falls through when s7(?) == s8(=a3).
  The `bne` branch at 0x21913d0 targets 0x2191270, is taken when a6(?) != v0(=a4), and falls through when a6(?) == v0(=a4).
  The `bne` branch at 0x2191410 targets 0x2191260, is taken when t1(?) != t2(=a5), and falls through when t1(?) == t2(=a5).
  The `beq` branch at 0x219141c targets 0x219146c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x2191428 targets 0x2191470, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x2191470 targets 0x2191540, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x2191480 targets 0x21914ec, is taken when at(=a1) < 0x3 (signed), and falls through when at(=a1) >= 0x3 (signed).
  The `beq` branch at 0x2191570 targets 0x2190fc4 and is always taken.
  The `beq` branch at 0x21915a0 targets 0x2191418, is taken when v0(?) == v1(=a5), and falls through when v0(?) != v1(=a5).
  The `beq` branch at 0x21915ac targets 0x2191610 and is always taken.
  The `bne` branch at 0x21915dc targets 0x21915c0, is taken when s2(?) != s8(=a3), and falls through when s2(?) == s8(=a3).
  The `beq` branch at 0x2191608 targets 0x2191580, is taken when a4(?) == s5(=a4), and falls through when a4(?) != s5(=a4).
  The `beq` branch at 0x2191610 targets 0x2191628, is taken when s3(?) == s4(?), and falls through when s3(?) != s4(?).
  The `bgtz` branch at 0x2191618 targets 0x21915b4, is taken when s8(=a3) > 0 (signed), and falls through when s8(=a3) <= 0 (signed).
  The `beq` branch at 0x2191620 targets 0x21915e8 and is always taken.
  The `beq` branch at 0x2191644 targets 0x21915fc and is always taken.
  The `beq` branch at 0x2191670 targets 0x2191470 and is always taken.
  The return at 0x21914e4 has v0 = ?.
  The return at 0x2191538 has v0 = ?.
  The return at 0x2191568 has v0 = ?.
  The instructions from 0x219113c to 0x219113c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x2191578 to 0x219157c are not reached by any path from the entry, and their branches are not listed.

- `__glEmptyImage` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2191ed0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2191ed0-0x219230c (1084 bytes).
  It occupies 1084 bytes.
  The `lw` at 0x2191ed4 loads 4 bytes from a0 (arg0 at entry) +0xb0.
  The `lw` at 0x2191ed8 loads 4 bytes from a0 (arg0 at entry) +0xa8.
  The `lw` at 0x2191edc loads 4 bytes from a0 (arg0 at entry) +0xa4.
  The `lw` at 0x2191ee0 loads 4 bytes from a0 (arg0 at entry) +0x9c.
  The `lw` at 0x2191ee4 loads 4 bytes from a0 (arg0 at entry) +0xa0.
  The `lw` at 0x2191ef8 loads 4 bytes from a0 (arg0 at entry) +0xac.
  The `lw` at 0x2191f00 loads 4 bytes from a0 (arg0 at entry) +0x98.
  The `lw` at 0x2191f0c loads 4 bytes from a0 (arg0 at entry) +0x94.
  The `lw` at 0x2191f14 loads 4 bytes from a0 (arg0 at entry) +0x90.
  The `bgezall` at 0x2191f80 calls (unnamed) [0x218fe00] with a0=a6 at entry (arg6), a1=a7 at entry (arg7), a2=a2 at entry (arg2), a3=0x85a3, a4=0x85a4.
  The `bgezall` at 0x2191fe4 calls (unnamed) [0x2190040] with a0=a7 at entry (arg7), a1=?, a2=?, a3=?.
  The `jalr` at 0x2192080 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x21920bc calls (unnamed) [0x2191a60] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=a4 at entry (arg4), a4=a6 at entry (arg6), a5=a7 at entry (arg7), a7=ret(malloc).
  The `jalr` at 0x2192200 calls memcpy with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x2192264 calls memcpy with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x219229c calls XFree with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x21922f4 calls (unnamed) [0x2191680] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=a6 at entry (arg6).
  The `beq` branch at 0x2191f48 targets 0x21922d8, is taken when a7 == at(=0x1a00), and falls through when a7 != at(=0x1a00).
  The `beq` branch at 0x2191f60 targets 0x2191fb0, is taken when v0(=[a0+176]) == a3(=0x85a3), and falls through when v0(=[a0+176]) != a3(=0x85a3).
  The `beq` branch at 0x2191f6c targets 0x2191fb0, is taken when v0(=[a0+176]) == a4(=0x85a4), and falls through when v0(=[a0+176]) != a4(=0x85a4).
  The `bgtz` branch at 0x2191f8c targets 0x2191fc0, is taken when s5(=[a0+144]) > 0 (signed), and falls through when s5(=[a0+144]) <= 0 (signed).
  The `bgtz` branch at 0x2191f94 targets 0x2191fc8, is taken when s3(=[a0+148]) > 0 (signed), and falls through when s3(=[a0+148]) <= 0 (signed).
  The `bgtz` branch at 0x2191f9c targets 0x2191fd0, is taken when s2(=[a0+152]) > 0 (signed), and falls through when s2(=[a0+152]) <= 0 (signed).
  The `beq` branch at 0x2191fa8 targets 0x2191fd4 and is always taken.
  The `blez` branch at 0x2191fb8 targets 0x2191f94, is taken when s5(=[a0+144]) <= 0 (signed), and falls through when s5(=[a0+144]) > 0 (signed).
  The `blez` branch at 0x2191fc0 targets 0x2191f9c, is taken when s3(=[a0+148]) <= 0 (signed), and falls through when s3(=[a0+148]) > 0 (signed).
  The `blez` branch at 0x2191fc8 targets 0x2191fa4, is taken when s2(=[a0+152]) <= 0 (signed), and falls through when s2(=[a0+152]) > 0 (signed).
  The `beq` branch at 0x2192020 targets 0x2192030, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x2192054 targets 0x2192064, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x2192068 targets 0x21920cc, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x219208c targets 0x21920c8, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `blez` branch at 0x21920cc targets 0x2192284, is taken when at(=a5) <= 0 (signed), and falls through when at(=a5) > 0 (signed).
  The `blez` branch at 0x21920d8 targets 0x2192280, is taken when v0(=a4) <= 0 (signed), and falls through when v0(=a4) > 0 (signed).
  The `beq` branch at 0x21921a8 targets 0x21921d4 and is always taken.
  The `beq` branch at 0x21921cc targets 0x2192280, is taken when t9(?) == ra(=a5), and falls through when t9(?) != ra(=a5).
  The `beq` branch at 0x21921dc targets 0x2192304 and is always taken.
  The `blez` branch at 0x21921e4 targets 0x2192278, is taken when s4(=a3) <= 0 (signed), and falls through when s4(=a3) > 0 (signed).
  The `bne` branch at 0x2192210 targets 0x21921f0, is taken when s2(?) != s4(=a3), and falls through when s2(?) == s4(=a3).
  The `beq` branch at 0x2192244 targets 0x21921b0, is taken when a1(?) == a2(=a4), and falls through when a1(?) != a2(=a4).
  The `bne` branch at 0x219224c targets 0x21921e4, is taken when s5(?) != s3(?), and falls through when s5(?) == s3(?).
  The `bne` branch at 0x2192254 targets 0x21921e4, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x2192270 targets 0x219222c and is always taken.
  The `beq` branch at 0x2192278 targets 0x219221c and is always taken.
  The `beq` branch at 0x2192284 targets 0x21922a8, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x2192290 targets 0x21922a8, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0x21922fc targets 0x21922a4 and is always taken.
  The `beq` branch at 0x2192304 targets 0x219224c and is always taken.
  The return at 0x21922d0 has v0 = ?.

- `__glx_TexSubImage1D2D` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2195080 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x2195080-0x2195410 (912 bytes).
  It occupies 912 bytes.
  2 such `ld` accesses load 8 bytes from abs 0x1028, including `ld` at 0x21950cc, `ld` at 0x2195164.
  2 such `ld` accesses load 8 bytes from [0x1028]:8 +0x128, including `ld` at 0x21950d0, `ld` at 0x2195168.
  2 such `ld` accesses load 8 bytes from [[0x1028]:8+296]:8 +0x758, including `ld` at 0x21950d4, `ld` at 0x2195174.
  2 such `ld` accesses load 8 bytes from [[0x1028]:8+296]:8 +0x18, including `ld` at 0x21950e0, `ld` at 0x219518c.
  2 such `ld` accesses load 8 bytes from [[0x1028]:8+296]:8 +0x8, including `ld` at 0x21950ec, `ld` at 0x2195184.
  2 such `lw` accesses load 4 bytes from [[0x1028]:8+296]:8 +0x7c0, including `lw` at 0x21950f0, `lw` at 0x2195190.
  2 such `sh` accesses store 2 bytes to ?, including `sh` at 0x21951b4, `sh` at 0x21951d8.
  14 such `sw` accesses store 4 bytes to ?, including `sw` at 0x21951b8, `sw` at 0x21951bc, `sw` at 0x21951c0.
  The `ld` at 0x2195238 loads 8 bytes from [[0x1028]:8+296]:8 +0x80.
  4 such `sb` accesses store 1 byte to ?, including `sb` at 0x2195274, `sb` at 0x2195278, `sb` at 0x219527c.
  The `ld` at 0x219528c loads 8 bytes from [[0x1028]:8+296]:8 +0x10.
  The `sd` at 0x21952c0 stores 8 bytes to [[0x1028]:8+296]:8 +0x8.
  The `sw` at 0x2195314 stores 4 bytes to ret(__glXFlushRenderBuffer) +0x34.
  The `sw` at 0x2195318 stores 4 bytes to ret(__glXFlushRenderBuffer) +0x30.
  The `sw` at 0x219531c stores 4 bytes to ret(__glXFlushRenderBuffer) +0x2c.
  The `sw` at 0x2195334 stores 4 bytes to ret(__glXFlushRenderBuffer) +0x38.
  The `sw` at 0x2195338 stores 4 bytes to ret(__glXFlushRenderBuffer) +0x28.
  The `sw` at 0x219533c stores 4 bytes to ret(__glXFlushRenderBuffer) +0x24.
  The `sw` at 0x2195340 stores 4 bytes to ret(__glXFlushRenderBuffer) +0x20.
  The `sw` at 0x2195344 stores 4 bytes to ret(__glXFlushRenderBuffer) +0x1c.
  The `sw` at 0x219534c stores 4 bytes to ret(__glXFlushRenderBuffer) +0x4.
  The `sw` at 0x2195354 stores 4 bytes to ret(__glXFlushRenderBuffer) +0x0.
  2 such `sw` accesses store 4 bytes to ret(__glXFlushRenderBuffer) +0x3c, including `sw` at 0x2195368, `sw` at 0x219540c.
  The `jalr` at 0x2195120 calls __glXFlushRenderBuffer with a0=[[0x1028]:8+296]:8, a1=[[[0x1028]:8+296]:8+8]:8, a2=?, a3=?, a6=[[[0x1028]:8+296]:8+24]:8.
  The `jalr` at 0x219515c calls __glImageSize with a0=a5 at entry (arg5), a1=a6 at entry (arg6), a2=0x1, a3=0x1, a4=a7 at entry (arg7).
  The `jalr` at 0x219524c calls (unknown callee) with a0=[[0x1028]:8+296]:8, a1=?, a2=a5 at entry (arg5), a3=a6 at entry (arg6), a4=0x1, a5=0x1, a6=a7 at entry (arg7).
  The `jalr` at 0x2195308 calls __glXFlushRenderBuffer with a0=[[0x1028]:8+296]:8, a1=[[[0x1028]:8+296]:8+8]:8, a2=?, a3=?, a6=[[[0x1028]:8+296]:8+24]:8.
  The `bgezall` at 0x21953c0 calls SendLargeImage [0x2194040] with a0=[[0x1028]:8+296]:8, a1=?, a2=?, a3=a5 at entry (arg5), a4=a6 at entry (arg6), a5=0x1, a6=0x1.
  Calls __glXFlushRenderBuffer via got with a0=[[0x1028]:8+296]:8, a1=?, a2=?, a3=? (`jr` at 0x21953f8).
  The `bne` branch at 0x21950c4 targets 0x2195140, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0x21950e8 targets 0x21952d4, is taken when v1(=[[[0x1028]:8+296]:8+1880]:8) == 0, and falls through when v1(=[[[0x1028]:8+296]:8+1880]:8) != 0.
  The `bne` branch at 0x21950f8 targets 0x21952f8, is taken when t8(=[[[0x1028]:8+296]:8+1984]) < 0x3c (unsigned), and falls through when t8(=[[[0x1028]:8+296]:8+1984]) >= 0x3c (unsigned).
  The `beq` branch at 0x2195104 targets 0x2195400, is taken when a6(=[[[0x1028]:8+296]:8+24]:8) >= t9(=[[[0x1028]:8+296]:8+8]:8+60) (unsigned), and falls through when a6(=[[[0x1028]:8+296]:8+24]:8) < t9(=[[[0x1028]:8+296]:8+8]:8+60) (unsigned).
  The `beq` branch at 0x2195130 targets 0x21951b4 and is always taken.
  The `beq` branch at 0x2195188 targets 0x21952d4, is taken when v1(=[[[0x1028]:8+296]:8+1880]:8) == 0, and falls through when v1(=[[[0x1028]:8+296]:8+1880]:8) != 0.
  The `bne` branch at 0x2195198 targets 0x2195300, is taken when t8(=[[[0x1028]:8+296]:8+1984]) < a0(?) (unsigned), and falls through when t8(=[[[0x1028]:8+296]:8+1984]) >= a0(?) (unsigned).
  The `bne` branch at 0x21951ac targets 0x2195114, is taken when a6(=[[[0x1028]:8+296]:8+24]:8) < a1(?) (unsigned), and falls through when a6(=[[[0x1028]:8+296]:8+24]:8) >= a1(?) (unsigned).
  The `beq` branch at 0x21951fc targets 0x219525c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x2195204 targets 0x2195264, is taken when s5(?) == 0, and falls through when s5(?) != 0.
  The `beq` branch at 0x2195254 targets 0x2195284 and is always taken.
  The `bne` branch at 0x219525c targets 0x219520c, is taken when s5(?) != 0, and falls through when s5(?) == 0.
  The `bne` branch at 0x21952b8 targets 0x21953d0, is taken when t8(=[[[0x1028]:8+296]:8+16]:8) < s0(?) (unsigned), and falls through when t8(=[[[0x1028]:8+296]:8+16]:8) >= s0(?) (unsigned).
  The `beq` branch at 0x2195360 targets 0x2195408, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x21953c8 targets 0x21952d8 and is always taken.
  The `beq` branch at 0x2195400 targets 0x21951b4 and is always taken.
  The `beq` branch at 0x2195408 targets 0x219536c and is always taken.
  The return at 0x21952cc has v0 = ?.
  The return at 0x21952f0 has v0 = one of ?, ret(SendLargeImage).
  The instructions from 0x2195138 to 0x219513c are not reached by any path from the entry, and their branches are not listed.

- `__glXInitVertexArrayState` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219b2d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219b2d0-0x219b3e0 (272 bytes).
  It occupies 272 bytes.
  The `sb` at 0x219b2d0 stores 1 byte to a0 (arg0 at entry) +0xe8.
  The `sd` at 0x219b2d4 stores 8 bytes to a0 (arg0 at entry) +0xf0.
  The `sw` at 0x219b2d8 stores 4 bytes to a0 (arg0 at entry) +0x100.
  The `sd` at 0x219b2dc stores 8 bytes to a0 (arg0 at entry) +0xf8.
  The `sw` at 0x219b2e4 stores 4 bytes to a0 (arg0 at entry) +0x104.
  The `sw` at 0x219b2ec stores 4 bytes to a0 (arg0 at entry) +0x108.
  The `sw` at 0x219b2f0 stores 4 bytes to a0 (arg0 at entry) +0x10c.
  The `sb` at 0x219b2f4 stores 1 byte to a0 (arg0 at entry) +0x110.
  The `sd` at 0x219b2f8 stores 8 bytes to a0 (arg0 at entry) +0x118.
  The `sw` at 0x219b2fc stores 4 bytes to a0 (arg0 at entry) +0x128.
  The `sd` at 0x219b300 stores 8 bytes to a0 (arg0 at entry) +0x120.
  The `sw` at 0x219b304 stores 4 bytes to a0 (arg0 at entry) +0x130.
  The `sw` at 0x219b308 stores 4 bytes to a0 (arg0 at entry) +0x134.
  The `sb` at 0x219b30c stores 1 byte to a0 (arg0 at entry) +0x138.
  The `sd` at 0x219b310 stores 8 bytes to a0 (arg0 at entry) +0x140.
  The `sw` at 0x219b314 stores 4 bytes to a0 (arg0 at entry) +0x150.
  The `sd` at 0x219b318 stores 8 bytes to a0 (arg0 at entry) +0x148.
  The `sw` at 0x219b31c stores 4 bytes to a0 (arg0 at entry) +0x154.
  The `sw` at 0x219b320 stores 4 bytes to a0 (arg0 at entry) +0x158.
  The `sw` at 0x219b324 stores 4 bytes to a0 (arg0 at entry) +0x15c.
  The `sb` at 0x219b328 stores 1 byte to a0 (arg0 at entry) +0x160.
  The `sd` at 0x219b32c stores 8 bytes to a0 (arg0 at entry) +0x168.
  The `sw` at 0x219b330 stores 4 bytes to a0 (arg0 at entry) +0x178.
  The `sd` at 0x219b334 stores 8 bytes to a0 (arg0 at entry) +0x170.
  The `sw` at 0x219b340 stores 4 bytes to a0 (arg0 at entry) +0x17c.
  The `sw` at 0x219b348 stores 4 bytes to a0 (arg0 at entry) +0x180.
  The `sw` at 0x219b350 stores 4 bytes to a0 (arg0 at entry) +0x184.
  The `sw` at 0x219b35c stores 4 bytes to a0 (arg0 at entry) +0x12c.
  8 such `sw` accesses store 4 bytes to ?, including `sw` at 0x219b368, `sw` at 0x219b36c, `sw` at 0x219b370.
  4 such `sd` accesses store 8 bytes to ?, including `sd` at 0x219b374, `sd` at 0x219b380, `sd` at 0x219b398.
  2 such `sb` accesses store 1 byte to ?, including `sb` at 0x219b388, `sb` at 0x219b3b0.
  The `sw` at 0x219b3b8 stores 4 bytes to a0 (arg0 at entry) +0x6b4.
  The `sw` at 0x219b3bc stores 4 bytes to a0 (arg0 at entry) +0x6b0.
  The `sw` at 0x219b3c0 stores 4 bytes to a0 (arg0 at entry) +0x6ac.
  The `sw` at 0x219b3c4 stores 4 bytes to a0 (arg0 at entry) +0x6a8.
  The `sw` at 0x219b3c8 stores 4 bytes to a0 (arg0 at entry) +0x6a4.
  The `sd` at 0x219b3cc stores 8 bytes to a0 (arg0 at entry) +0x698.
  The `sw` at 0x219b3d0 stores 4 bytes to a0 (arg0 at entry) +0x6a0.
  The `sd` at 0x219b3d4 stores 8 bytes to a0 (arg0 at entry) +0x690.
  The `sb` at 0x219b3dc stores 1 byte to a0 (arg0 at entry) +0x688.
  The `bne` branch at 0x219b3ac targets 0x219b368, is taken when a1(?) != v1(=a0+1280), and falls through when a1(?) == v1(=a0+1280).
  The return at 0x219b3d8 has v0 = 0x4.

- `fill_bitmap` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219d200 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219d200-0x219d40c (524 bytes).
  It occupies 524 bytes.
  2 such `ld` accesses load 8 bytes from ret(XGetImage) +0x68, including `ld` at 0x219d358, `ld` at 0x219d3a4.
  The `lbu` at 0x219d38c loads 1 byte from ?.
  The `sb` at 0x219d398 stores 1 byte to ?.
  The `ld` at 0x219d3b8 loads 8 bytes from ret(XGetImage) +0x60.
  The `jalr` at 0x219d250 calls XCreatePixmap with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=(a3 << 0x3), a3=a4 at entry (arg4), a4=0x1.
  The `jalr` at 0x219d26c calls XSetForeground with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=0x0, a3=?.
  The `jalr` at 0x219d290 calls XFillRectangle with a0=a0 at entry (arg0), a1=ret(XCreatePixmap), a2=a2 at entry (arg2), a3=0x0, a4=0x0, a5=(a3 << 0x3), a6=a4 at entry (arg4).
  The `jalr` at 0x219d2a4 calls XSetForeground with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=0x1, a3=?.
  The `jalr` at 0x219d2d4 calls XDrawString16 with a0=a0 at entry (arg0), a1=ret(XCreatePixmap), a2=a2 at entry (arg2), a3=a5 at entry (arg5), a4=a6 at entry (arg6), a5=sp-192, a6=0x1.
  The `jalr` at 0x219d2fc calls XGetImage with a0=a0 at entry (arg0), a1=ret(XCreatePixmap), a2=0x0, a3=0x0, a4=(a3 << 0x3), a5=a4 at entry (arg4), a6=0x1, a7=0x1.
  The `jalr` at 0x219d364 calls (unknown callee) with a0=ret(XGetImage), a1=?, a2=?, a3=?.
  The `jalr` at 0x219d3c4 calls (unknown callee) with a0=ret(XGetImage), a1=?, a2=?, a3=?.
  The `jalr` at 0x219d3f0 calls XFreePixmap with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x219d308 targets 0x219d3d4, is taken when v0(=ret(XGetImage)) == 0, and falls through when v0(=ret(XGetImage)) != 0.
  The `beq` branch at 0x219d320 targets 0x219d3b8, is taken when s8(=a4) == 0, and falls through when s8(=a4) != 0.
  The `beq` branch at 0x219d328 targets 0x219d3b8, is taken when s2(=(a3 << 0x3)) == 0, and falls through when s2(=(a3 << 0x3)) != 0.
  The `beq` branch at 0x219d36c targets 0x219d39c, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `bnel` branch at 0x219d3a0 targets 0x219d35c, is taken when s0(?) != s2(=(a3 << 0x3)), and falls through when s0(?) == s2(=(a3 << 0x3)); its branch-likely delay slot `ld t9,104(s3)` at 0x219d3a4 runs only when taken and is annulled on fall-through.
  The `bne` branch at 0x219d3b0 targets 0x219d354, is taken when s1(?) != s8(=a4), and falls through when s1(?) == s8(=a4).
  The return at 0x219d404 has v0 = ret(XFreePixmap).

- `isvalid` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219d410 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219d410-0x219d504 (244 bytes).
  It occupies 244 bytes.
  The `lw` at 0x219d410 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `lw` at 0x219d414 loads 4 bytes from a0 (arg0 at entry) +0x20.
  The `lw` at 0x219d428 loads 4 bytes from a0 (arg0 at entry) +0x14.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x18, including `lw` at 0x219d44c, `lw` at 0x219d4c8.
  The `ld` at 0x219d46c loads 8 bytes from a0 (arg0 at entry) +0x50.
  The `beq` branch at 0x219d434 targets 0x219d4c0, is taken when t0(?) == t9(=0x1), and falls through when t0(?) != t9(=0x1).
  The `bne` branch at 0x219d444 targets 0x219d4b4, is taken when a3(?) < a4(=[a0+20]) (unsigned), and falls through when a3(?) >= a4(=[a0+20]) (unsigned).
  The `bne` branch at 0x219d454 targets 0x219d4b4, is taken when t3(=[a0+24]) < a3(?) (unsigned), and falls through when t3(=[a0+24]) >= a3(?) (unsigned).
  The `bne` branch at 0x219d45c targets 0x219d4b4, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x219d464 targets 0x219d4b4, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `beq` branch at 0x219d47c targets 0x219d4fc, is taken when a6(=[a0+80]:8) == 0, and falls through when a6(=[a0+80]:8) != 0.
  The `beq` branch at 0x219d484 targets 0x219d4e0, is taken when t0(?) == t9(=0x1), and falls through when t0(?) != t9(=0x1).
  The `bne` branch at 0x219d4c0 targets 0x219d4b4, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x219d4d0 targets 0x219d4b4, is taken when t3(=[a0+24]) < a1 (unsigned), and falls through when t3(=[a0+24]) >= a1 (unsigned).
  The `beq` branch at 0x219d4d8 targets 0x219d46c and is always taken.
  The return at 0x219d4ac has v0 = ?.
  The return at 0x219d4b4 has v0 = 0x0.
  The return at 0x219d4f4 has v0 = ?.
  The return at 0x219d4fc has v0 = a0+56.
  The instructions from 0x219d4bc to 0x219d4bc are not reached by any path from the entry, and their branches are not listed.

- `DRI_glXUseXFont` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219d510 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219d510-0x219da30 (1312 bytes).
  It occupies 1312 bytes.
  The `ld` at 0x219d538 loads 8 bytes from abs 0x1028.
  The `ld` at 0x219d540 loads 8 bytes from [0x1028]:8 +0x128.
  The `ld` at 0x219d548 loads 8 bytes from [[0x1028]:8+296]:8 +0x758.
  The `ld` at 0x219d554 loads 8 bytes from [[0x1028]:8+296]:8 +0x768.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x219d56c, `lw` at 0x219d5ec.
  The `lh` at 0x219d58c loads 2 bytes from ret(XQueryFont) +0x38.
  The `lh` at 0x219d590 loads 2 bytes from ret(XQueryFont) +0x46.
  The `lh` at 0x219d594 loads 2 bytes from ret(XQueryFont) +0x4c.
  The `lh` at 0x219d598 loads 2 bytes from ret(XQueryFont) +0x4a.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x219d610, `sw` at 0x219da24.
  2 such `lw` accesses load 4 bytes from [[[0x1028]:8+296]:8+1880]:8 +0xe0, including `lw` at 0x219d700, `lw` at 0x219d71c.
  2 such `ld` accesses load 8 bytes from [[[0x1028]:8+296]:8+1880]:8 +0xe8, including `ld` at 0x219d704, `ld` at 0x219d720.
  The `ld` at 0x219d714 loads 8 bytes from ([[[[0x1028]:8+296]:8+1880]:8+232]:8 + ([[[[0x1028]:8+296]:8+1880]:8+224] << 0x7)) +0x60.
  The `ld` at 0x219d734 loads 8 bytes from ([[[[0x1028]:8+296]:8+1880]:8+232]:8 + ([[[[0x1028]:8+296]:8+1880]:8+224] << 0x7)) +0x58.
  The `ld` at 0x219d748 loads 8 bytes from ?.
  5 such `lh` accesses load 2 bytes from ?, including `lh` at 0x219d7e8, `lh` at 0x219d7ec, `lh` at 0x219d7f4.
  The `jalr` at 0x219d558 calls XQueryFont with a0=[[[0x1028]:8+296]:8+1880]:8, a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219d5c0 calls malloc with a0=?, a1=([ret(XQueryFont)+74]:2 + [ret(XQueryFont)+76]:2), a2=?, a3=[ret(XQueryFont)+76]:2, a4=[ret(XQueryFont)+56]:2.
  The `jalr` at 0x219d5e0 calls XFreeFontInfo with a0=0x0, a1=?, a2=0x1, a3=?.
  The `jalr` at 0x219d628 calls glGetIntegerv with a0=0xcf0, a1=sp-368, a2=?, a3=?, a7=sym(glGetIntegerv).
  The `jalr` at 0x219d638 calls glGetIntegerv with a0=0xcf1, a1=sp-364, a2=?, a3=?.
  The `jalr` at 0x219d648 calls glGetIntegerv with a0=0xcf2, a1=sp-360, a2=?, a3=?.
  The `jalr` at 0x219d658 calls glGetIntegerv with a0=0xcf3, a1=sp-356, a2=?, a3=?.
  The `jalr` at 0x219d668 calls glGetIntegerv with a0=0xcf4, a1=sp-352, a2=?, a3=?.
  The `jalr` at 0x219d678 calls glGetIntegerv with a0=0xcf5, a1=sp-348, a2=?, a3=?.
  The `jalr` at 0x219d68c calls glPixelStorei with a0=0xcf0, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x219d69c calls glPixelStorei with a0=0xcf1, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x219d6ac calls glPixelStorei with a0=0xcf2, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x219d6bc calls glPixelStorei with a0=0xcf3, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x219d6cc calls glPixelStorei with a0=0xcf4, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x219d6dc calls glPixelStorei with a0=0xcf5, a1=0x1, a2=?, a3=?.
  The `jalr` at 0x219d6f8 calls XCreatePixmap with a0=[[[0x1028]:8+296]:8+1880]:8, a1=[[[0x1028]:8+296]:8+1896]:8, a2=0xa, a3=0xa, a4=0x1.
  The `jalr` at 0x219d750 calls XCreateGC with a0=[[[0x1028]:8+296]:8+1880]:8, a1=ret(XCreatePixmap), a2=0x400c, a3=sp-344.
  The `jalr` at 0x219d764 calls XFreePixmap with a0=[[[0x1028]:8+296]:8+1880]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x219d82c calls glNewList with a0=?, a1=0x1300, a2=sym(glNewList), a3=?.
  The `jalr` at 0x219d86c calls memset with a0=ret(malloc), a1=0x0, a2=?, a3=?; fp f14=f27.
  The `bgezall` at 0x219d8a4 calls fill_bitmap [0x219d200] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x219d8cc calls glBitmap with a0=?, a1=?, a2=?, a3=?, a6=ret(malloc); fp f17=f27.
  The `jalr` at 0x219d8d8 calls glEndList with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x219d8f8 calls isvalid [0x219d410] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x219d930 calls glBitmap with a0=0x0, a1=0x0, a2=?, a3=?, a6=0x0; fp f14=f27, f15=f27, f17=f27.
  The `jalr` at 0x219d970 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x219d988 calls XFreeFontInfo with a0=0x0, a1=?, a2=0x1, a3=?.
  The `jalr` at 0x219d998 calls XFreeGC with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x219d9ac calls glPixelStorei with a0=0xcf0, a1=?, a2=?, a3=?.
  The `jalr` at 0x219d9bc calls glPixelStorei with a0=0xcf1, a1=?, a2=?, a3=?.
  The `jalr` at 0x219d9cc calls glPixelStorei with a0=0xcf2, a1=?, a2=?, a3=?.
  The `jalr` at 0x219d9dc calls glPixelStorei with a0=0xcf3, a1=?, a2=?, a3=?.
  The `jalr` at 0x219d9ec calls glPixelStorei with a0=0xcf4, a1=?, a2=?, a3=?.
  The `jalr` at 0x219d9fc calls glPixelStorei with a0=0xcf5, a1=?, a2=?, a3=?.
  The `bne` branch at 0x219d560 targets 0x219d58c, is taken when v0(=ret(XQueryFont)) != 0, and falls through when v0(=ret(XQueryFont)) == 0.
  The `beq` branch at 0x219d570 targets 0x219da0c, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `bne` branch at 0x219d5c8 targets 0x219d61c, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `bne` branch at 0x219d5f0 targets 0x219d578, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `blez` branch at 0x219d770 targets 0x219d970, is taken when a3(=a2) <= 0 (signed), and falls through when a3(=a2) > 0 (signed).
  The `beq` branch at 0x219d7d8 targets 0x219d8f0 and is always taken.
  The `beq` branch at 0x219d834 targets 0x219d914, is taken when s4(=one of 0x0, 0x1) == 0, and falls through when s4(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x219d844 targets 0x219d914, is taken when s4(?) == 0, and falls through when s4(?) != 0.
  The `beq` branch at 0x219d84c targets 0x219d914, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0x219d8e8 targets 0x219d940, is taken when s1(?) == t8(?), and falls through when s1(?) != t8(?).
  The `bne` branch at 0x219d900 targets 0x219d7e8, is taken when v0(=ret(isvalid)) != 0, and falls through when v0(=ret(isvalid)) == 0.
  The `beq` branch at 0x219d908 targets 0x219d7e0 and is always taken.
  The `beq` branch at 0x219d938 targets 0x219d8d8 and is always taken.
  The `beq` branch at 0x219da04 targets 0x219d578 and is always taken.
  The return at 0x219d584 has v0 = one of ret(XQueryFont), ret(XFreeFontInfo), ret(glPixelStorei).
  The return at 0x219d614 has v0 = ret(XFreeFontInfo).
  The return at 0x219da28 has v0 = 0x501.
  The instructions from 0x219d910 to 0x219d910 are not reached by any path from the entry, and their branches are not listed.

- `find_display` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219da40 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219da40-0x219dadc (156 bytes).
  It occupies 156 bytes.
  The `jalr` at 0x219da60 calls XextFindDisplay with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0x219da90 calls XextAddDisplay with a0=[0x21bfd10]:8, a1=a0 at entry (arg0), a2=[0x21bfd18]:8, a3=0x21bc890, a4=0x0, a5=0x0, a6=-0x3770.
  The `jalr` at 0x219dab4 calls XextCreateExtension with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[0x21bfd10]:8.
  The `beq` branch at 0x219da50 targets 0x219dab0, is taken when a4(=[0x21bfd10]:8) == 0, and falls through when a4(=[0x21bfd10]:8) != 0.
  The `bne` branch at 0x219da68 targets 0x219da9c, is taken when v0(=ret(XextFindDisplay)) != 0, and falls through when v0(=ret(XextFindDisplay)) == 0.
  The `bne` branch at 0x219dac0 targets 0x219da58, is taken when v0(=ret(XextCreateExtension)) != 0, and falls through when v0(=ret(XextCreateExtension)) == 0.
  The return at 0x219daa8 has v0 = one of ret(XextFindDisplay), ret(XextAddDisplay).
  The return at 0x219dad4 has v0 = 0x0.

- `close_display` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219dae0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219dae0-0x219db18 (56 bytes).
  It occupies 56 bytes.
  The `jalr` at 0x219db00 calls XextRemoveDisplay with a0=[0x21bfd10]:8, a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x219db10 has v0 = ret(XextRemoveDisplay).

- `XF86DRIQueryExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219db20 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219db20-0x219dba8 (136 bytes).
  It occupies 136 bytes.
  2 such `ld` accesses load 8 bytes from ret(find_display) +0x10, including `ld` at 0x219db5c, `ld` at 0x219db7c.
  The `lw` at 0x219db74 loads 4 bytes from [ret(find_display)+16]:8 +0x8.
  The `sw` at 0x219db78 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0x219db88 loads 4 bytes from [ret(find_display)+16]:8 +0xc.
  The `sw` at 0x219db8c stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0x219db48 calls find_display [0x219da40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x219db54 targets 0x219db98, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0x219db60 targets 0x219db98, is taken when a5(=[ret(find_display)+16]:8) == 0, and falls through when a5(=[ret(find_display)+16]:8) != 0.
  The return at 0x219db90 has v0 = 0x1.
  The return at 0x219dba0 has v0 = 0x0.

- `XF86DRIQueryVersion` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219dbb0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219dbb0-0x219dd74 (452 bytes).
  It occupies 452 bytes.
  2 such `ld` accesses load 8 bytes from ret(find_display) +0x10, including `ld` at 0x219dbf8, `ld` at 0x219dc64.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x219dc04, `ld` at 0x219dcb4, `ld` at 0x219dd28.
  The `ld` at 0x219dc10 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x219dc1c, `ld` at 0x219dc48, `ld` at 0x219dd24.
  The `ld` at 0x219dc20 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x219dc38 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x219dc3c, `sb` at 0x219dc88.
  The `sh` at 0x219dc44 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x219dc50 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x219dc58 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x219dc60 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x219dc70 loads 4 bytes from [ret(find_display)+16]:8 +0x4.
  The `sb` at 0x219dc7c stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x219dca0 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x219dca8 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0x219dcb0 stores 4 bytes to a3 (arg3 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x219dcc0, `ld` at 0x219dd34.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x219dccc, `ld` at 0x219dd40.
  The `bgezall` at 0x219dbe8 calls find_display [0x219da40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219dc14 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219dc84 calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x0, a3=0x0, a4=[[ret(find_display)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+4.
  The `jalr` at 0x219dcc4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219dcd8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219dd18 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x219dd38 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219dd4c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219dd64 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd18]:8, a2=?, a3=?.
  The `beq` branch at 0x219dbf0 targets 0x219dd5c, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0x219dbfc targets 0x219dd60, is taken when v1(=[ret(find_display)+16]:8) == 0, and falls through when v1(=[ret(find_display)+16]:8) != 0.
  The `beq` branch at 0x219dc08 targets 0x219dc1c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x219dc30 targets 0x219dd18, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x219dc8c targets 0x219dd28, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x219dcb8 targets 0x219dccc, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219dcd0 targets 0x219dce4, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219dd20 targets 0x219dc38 and is always taken.
  The `beq` branch at 0x219dd2c targets 0x219dd40, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219dd44 targets 0x219dd54, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219dd54 targets 0x219dd00 and is always taken.
  The `beq` branch at 0x219dd6c targets 0x219dd00 and is always taken.
  The return at 0x219dcf4 has v0 = 0x1.
  The return at 0x219dd10 has v0 = 0x0.
  The instructions from 0x219dcfc to 0x219dcfc are not reached by any path from the entry, and their branches are not listed.

- `XF86DRIQueryDirectRenderingCapable` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219dd80 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219dd80-0x219df48 (456 bytes).
  It occupies 456 bytes.
  2 such `ld` accesses load 8 bytes from ret(find_display) +0x10, including `ld` at 0x219ddc4, `ld` at 0x219de3c.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x219ddd0, `ld` at 0x219de78, `ld` at 0x219ded4.
  The `ld` at 0x219dddc loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x219dde8, `ld` at 0x219de1c, `ld` at 0x219ded0.
  The `ld` at 0x219ddec loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x219de08 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x219de10, `sb` at 0x219de64.
  The `sh` at 0x219de18 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x219de24 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x219de30 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x219de38 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x219de44 loads 4 bytes from [ret(find_display)+16]:8 +0x4.
  The `sb` at 0x219de4c stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x219de58 stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x219de74 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x219de88, `ld` at 0x219dee0.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x219de94, `ld` at 0x219deec.
  The `bgezall` at 0x219ddb4 calls find_display [0x219da40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219dde0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219de60 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(find_display)+16]:8+4], a5=a1 at entry (arg1), a6=0x1, a7=0x1.
  The `jalr` at 0x219de8c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219dea0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219dec4 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x219dee4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219def8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219df28 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd18]:8, a2=?, a3=?.
  The `beq` branch at 0x219ddbc targets 0x219df1c, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0x219ddc8 targets 0x219df20, is taken when v1(=[ret(find_display)+16]:8) == 0, and falls through when v1(=[ret(find_display)+16]:8) != 0.
  The `beq` branch at 0x219ddd4 targets 0x219dde8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x219ddfc targets 0x219dec4, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x219de68 targets 0x219ded4, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x219de80 targets 0x219de94, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219de98 targets 0x219deac, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219decc targets 0x219de04 and is always taken.
  The `beq` branch at 0x219ded8 targets 0x219deec, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219def0 targets 0x219df04, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x219debc has v0 = 0x1.
  The return at 0x219df14 has v0 = 0x0.
  The return at 0x219df40 has v0 = 0x0.

- `XF86DRIOpenConnection` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219df50 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219df50-0x219e1cc (636 bytes).
  It occupies 636 bytes.
  2 such `ld` accesses load 8 bytes from ret(find_display) +0x10, including `ld` at 0x219df98, `ld` at 0x219e00c.
  4 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x219dfa4, `ld` at 0x219e0c0, `ld` at 0x219e120.
  The `ld` at 0x219dfb0 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x219dfbc, `ld` at 0x219dff4, `ld` at 0x219e170.
  The `ld` at 0x219dfc0 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x219dfdc stores 8 bytes to a0 (arg0 at entry) +0xa0.
  The `sh` at 0x219dfe4 stores 2 bytes to [a0+176]:8 +0x2.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x219dfe8, `sb` at 0x219e034.
  The `ld` at 0x219dfec loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x219e000 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sd` at 0x219e008 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `lw` at 0x219e014 loads 4 bytes from [ret(find_display)+16]:8 +0x4.
  The `sb` at 0x219e01c stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x219e028 stores 4 bytes to [a0+176]:8 +0x4.
  2 such `sd` accesses store 8 bytes to a2 (arg2 at entry) +0x0, including `sd` at 0x219e048, `sd` at 0x219e058.
  2 such `sd` accesses store 8 bytes to a3 (arg3 at entry) +0x0, including `sd` at 0x219e094, `sd` at 0x219e1c8.
  3 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x219e0cc, `ld` at 0x219e12c, `ld` at 0x219e180.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x219e0d8, `ld` at 0x219e138, `ld` at 0x219e18c.
  The `bgezall` at 0x219df88 calls find_display [0x219da40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219dfb4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e030 calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x0, a3=0x0, a4=[[ret(find_display)+16]:8+4], a5=a1 at entry (arg1), a6=0x2, a7=0x1.
  The `jalr` at 0x219e088 calls calloc with a0=?, a1=0x1, a2=?, a3=a3 at entry (arg3).
  The `jalr` at 0x219e0b8 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=-0x4, a3=?.
  The `jalr` at 0x219e0d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e0e4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e118 calls _XReadPad with a0=a0 at entry (arg0), a1=ret(calloc), a2=?, a3=?.
  The `jalr` at 0x219e130 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e144 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e164 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x219e184 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e198 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e1b4 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd18]:8, a2=?, a3=?.
  The `beq` branch at 0x219df90 targets 0x219e1a8, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0x219df9c targets 0x219e1ac, is taken when v1(=[ret(find_display)+16]:8) == 0, and falls through when v1(=[ret(find_display)+16]:8) != 0.
  The `beq` branch at 0x219dfa8 targets 0x219dfbc, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x219dfd0 targets 0x219e164, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x219e038 targets 0x219e174, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x219e060 targets 0x219e1c4, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x219e070 targets 0x219e07c, is taken when a6(?) == ra(=-0x1), and falls through when a6(?) != ra(=-0x1).
  The `bne` branch at 0x219e098 targets 0x219e108, is taken when v0(=ret(calloc)) != 0, and falls through when v0(=ret(calloc)) == 0.
  The `beq` branch at 0x219e0c4 targets 0x219e0d8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219e0dc targets 0x219e0f0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219e124 targets 0x219e138, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219e13c targets 0x219e150, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219e16c targets 0x219dfd8 and is always taken.
  The `beq` branch at 0x219e178 targets 0x219e18c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219e190 targets 0x219e1a0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219e1a0 targets 0x219e150 and is always taken.
  The `beq` branch at 0x219e1bc targets 0x219e150 and is always taken.
  The `beq` branch at 0x219e1c4 targets 0x219e120 and is always taken.
  The return at 0x219e100 has v0 = 0x0.
  The return at 0x219e15c has v0 = one of 0x0, 0x1.

- `XF86DRIAuthConnection` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219e1d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219e1d0-0x219e3ac (476 bytes).
  It occupies 476 bytes.
  2 such `ld` accesses load 8 bytes from ret(find_display) +0x10, including `ld` at 0x219e214, `ld` at 0x219e290.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x219e220, `ld` at 0x219e2d4, `ld` at 0x219e31c.
  The `ld` at 0x219e22c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x219e238, `ld` at 0x219e270, `ld` at 0x219e370.
  The `ld` at 0x219e23c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x219e25c stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x219e264, `sb` at 0x219e2b4.
  The `sh` at 0x219e26c stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x219e278 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x219e284 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x219e28c stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x219e298 loads 4 bytes from [ret(find_display)+16]:8 +0x4.
  The `sb` at 0x219e29c stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x219e2a0 stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x219e2a8 stores 4 bytes to [a0+176]:8 +0x8.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x219e2e0, `ld` at 0x219e328.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x219e2ec, `ld` at 0x219e334.
  The `bgezall` at 0x219e204 calls find_display [0x219da40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219e230 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e2bc calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=a1 at entry (arg1), a5=0xb, a6=[[ret(find_display)+16]:8+4], a7=[a0+152]:8+1.
  The `jalr` at 0x219e2e4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e2f8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e32c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e340 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e364 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+12, a2=?, a3=?.
  The `jalr` at 0x219e38c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd18]:8, a2=?, a3=?.
  The `beq` branch at 0x219e20c targets 0x219e380, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0x219e218 targets 0x219e384, is taken when v1(=[ret(find_display)+16]:8) == 0, and falls through when v1(=[ret(find_display)+16]:8) != 0.
  The `beq` branch at 0x219e224 targets 0x219e238, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x219e24c targets 0x219e364, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+12) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x219e2c4 targets 0x219e31c, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x219e2cc targets 0x219e31c, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x219e2d8 targets 0x219e2ec, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219e2f0 targets 0x219e304, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219e320 targets 0x219e334, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219e338 targets 0x219e34c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219e36c targets 0x219e254 and is always taken.
  The return at 0x219e314 has v0 = 0x1.
  The return at 0x219e35c has v0 = 0x0.
  The return at 0x219e3a4 has v0 = 0x0.
  The instructions from 0x219e374 to 0x219e37c are not reached by any path from the entry, and their branches are not listed.

- `XF86DRICloseConnection` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219e3b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219e3b0-0x219e500 (336 bytes).
  It occupies 336 bytes.
  2 such `ld` accesses load 8 bytes from ret(find_display) +0x10, including `ld` at 0x219e3f0, `ld` at 0x219e464.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x219e3fc, `ld` at 0x219e47c.
  The `ld` at 0x219e408 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x219e414, `ld` at 0x219e444, `ld` at 0x219e4d0.
  The `ld` at 0x219e418 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x219e430 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x219e438, `sb` at 0x219e478.
  The `sh` at 0x219e440 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x219e44c loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x219e458 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x219e460 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x219e46c loads 4 bytes from [ret(find_display)+16]:8 +0x4.
  The `sb` at 0x219e470 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x219e474 stores 4 bytes to [a0+176]:8 +0x4.
  The `ld` at 0x219e488 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x219e494 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x219e3e0 calls find_display [0x219da40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219e40c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e48c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a1 at entry (arg1), a3=0x3, a4=[[ret(find_display)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+8.
  The `jalr` at 0x219e4a0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e4c4 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x219e4e0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd18]:8, a2=?, a3=?.
  The `beq` branch at 0x219e3e8 targets 0x219e4d4, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0x219e3f4 targets 0x219e4d8, is taken when v0(=[ret(find_display)+16]:8) == 0, and falls through when v0(=[ret(find_display)+16]:8) != 0.
  The `beq` branch at 0x219e400 targets 0x219e414, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x219e428 targets 0x219e4c4, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x219e480 targets 0x219e494, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219e498 targets 0x219e4ac, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219e4cc targets 0x219e430 and is always taken.
  The return at 0x219e4bc has v0 = 0x1.
  The return at 0x219e4f8 has v0 = 0x0.

- `XF86DRIGetClientDriverName` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219e500 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219e500-0x219e78c (652 bytes).
  It occupies 652 bytes.
  2 such `ld` accesses load 8 bytes from ret(find_display) +0x10, including `ld` at 0x219e550, `ld` at 0x219e5c8.
  4 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x219e55c, `ld` at 0x219e684, `ld` at 0x219e6e0.
  The `ld` at 0x219e568 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x219e574, `ld` at 0x219e5b0, `ld` at 0x219e730.
  The `ld` at 0x219e578 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x219e594 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  The `sh` at 0x219e59c stores 2 bytes to [a0+176]:8 +0x2.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x219e5a4, `sb` at 0x219e5f0.
  The `ld` at 0x219e5a8 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x219e5bc stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sd` at 0x219e5c4 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `lw` at 0x219e5d0 loads 4 bytes from [ret(find_display)+16]:8 +0x4.
  The `sb` at 0x219e5d8 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x219e5e4 stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x219e60c stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0x219e614 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0x219e61c stores 4 bytes to a4 (arg4 at entry) +0x0.
  2 such `sd` accesses store 8 bytes to a5 (arg5 at entry) +0x0, including `sd` at 0x219e658, `sd` at 0x219e788.
  3 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x219e690, `ld` at 0x219e6ec, `ld` at 0x219e740.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x219e69c, `ld` at 0x219e6f8, `ld` at 0x219e74c.
  The `bgezall` at 0x219e540 calls find_display [0x219da40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219e56c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e5ec calls _XReply with a0=a0 at entry (arg0), a1=sp-112, a2=0x0, a3=0x0, a4=[[ret(find_display)+16]:8+4], a5=a1 at entry (arg1), a6=0x4, a7=0x1.
  The `jalr` at 0x219e64c calls calloc with a0=?, a1=0x1, a2=?, a3=?.
  The `jalr` at 0x219e67c calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=-0x4, a3=?.
  The `jalr` at 0x219e694 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e6a8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e6d8 calls _XReadPad with a0=a0 at entry (arg0), a1=ret(calloc), a2=?, a3=?.
  The `jalr` at 0x219e6f0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e704 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e724 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x219e744 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e758 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e774 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd18]:8, a2=?, a3=?.
  The `beq` branch at 0x219e548 targets 0x219e768, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0x219e554 targets 0x219e76c, is taken when v1(=[ret(find_display)+16]:8) == 0, and falls through when v1(=[ret(find_display)+16]:8) != 0.
  The `beq` branch at 0x219e560 targets 0x219e574, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x219e588 targets 0x219e724, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x219e5f4 targets 0x219e734, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x219e624 targets 0x219e784, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0x219e634 targets 0x219e640, is taken when a3(?) == a1(=-0x1), and falls through when a3(?) != a1(=-0x1).
  The `bne` branch at 0x219e65c targets 0x219e6c8, is taken when v0(=ret(calloc)) != 0, and falls through when v0(=ret(calloc)) == 0.
  The `beq` branch at 0x219e688 targets 0x219e69c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219e6a0 targets 0x219e6b4, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219e6e4 targets 0x219e6f8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219e6fc targets 0x219e710, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219e72c targets 0x219e590 and is always taken.
  The `beq` branch at 0x219e738 targets 0x219e74c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219e750 targets 0x219e760, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219e760 targets 0x219e710 and is always taken.
  The `beq` branch at 0x219e77c targets 0x219e710 and is always taken.
  The `beq` branch at 0x219e784 targets 0x219e6e0 and is always taken.
  The return at 0x219e6c0 has v0 = 0x0.
  The return at 0x219e71c has v0 = one of 0x0, 0x1.

- `XF86DRICreateContext` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219e790 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219e790-0x219e974 (484 bytes).
  It occupies 484 bytes.
  2 such `ld` accesses load 8 bytes from ret(find_display) +0x10, including `ld` at 0x219e7dc, `ld` at 0x219e850.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x219e7e8, `ld` at 0x219e8bc, `ld` at 0x219e914.
  The `ld` at 0x219e7f4 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x219e800, `ld` at 0x219e830, `ld` at 0x219e910.
  The `ld` at 0x219e804 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x219e81c stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x219e824, `sb` at 0x219e860.
  The `sh` at 0x219e82c stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x219e838 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x219e844 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x219e84c stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x219e858 loads 4 bytes from [ret(find_display)+16]:8 +0x4.
  The `sb` at 0x219e85c stores 1 byte to [a0+176]:8 +0x1.
  The `ld` at 0x219e864 loads 8 bytes from a2 (arg2 at entry) +0x8.
  The `sw` at 0x219e868 stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x219e86c stores 4 bytes to [a0+176]:8 +0x8.
  The `ld` at 0x219e870 loads 8 bytes from a0 (arg0 at entry) +0x48.
  The `sd` at 0x219e89c stores 8 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0x219e8a8 stores 4 bytes to ?.
  The `sw` at 0x219e8b8 stores 4 bytes to a4 (arg4 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x219e8c8, `ld` at 0x219e920.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x219e8d4, `ld` at 0x219e92c.
  The `bgezall` at 0x219e7cc calls find_display [0x219da40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219e7f8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e878 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a1 at entry (arg1), a3=[a2+8]:8, a4=0x5, a5=[[ret(find_display)+16]:8+4], a6=[a0+152]:8+1, a7=0x1.
  The `jalr` at 0x219e8a4 calls _XReply with a0=a0 at entry (arg0), a1=sp-112, a2=0x0, a3=0x0.
  The `jalr` at 0x219e8cc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e8e0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e904 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+16, a2=a1 at entry (arg1), a3=?.
  The `jalr` at 0x219e924 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e938 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219e964 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd18]:8, a2=?, a3=?.
  The `beq` branch at 0x219e7d4 targets 0x219e958, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0x219e7e0 targets 0x219e95c, is taken when v1(=[ret(find_display)+16]:8) == 0, and falls through when v1(=[ret(find_display)+16]:8) != 0.
  The `beq` branch at 0x219e7ec targets 0x219e800, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x219e814 targets 0x219e900, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+16) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+16) (unsigned).
  The `beq` branch at 0x219e8ac targets 0x219e914, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x219e8c0 targets 0x219e8d4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219e8d8 targets 0x219e8ec, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219e90c targets 0x219e818 and is always taken.
  The `beq` branch at 0x219e918 targets 0x219e92c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219e930 targets 0x219e944, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219e96c targets 0x219e8ec and is always taken.
  The return at 0x219e8f8 has v0 = one of 0x0, 0x1.
  The return at 0x219e950 has v0 = 0x0.

- `XF86DRIDestroyContext` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219e980 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219e980-0x219eae0 (352 bytes).
  It occupies 352 bytes.
  2 such `ld` accesses load 8 bytes from ret(find_display) +0x10, including `ld` at 0x219e9c4, `ld` at 0x219ea38.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x219e9d0, `ld` at 0x219ea54.
  The `ld` at 0x219e9dc loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x219e9e8, `ld` at 0x219ea18, `ld` at 0x219eaac.
  The `ld` at 0x219e9ec loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x219ea04 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x219ea0c, `sb` at 0x219ea50.
  The `sh` at 0x219ea14 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x219ea20 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x219ea2c stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x219ea34 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x219ea40 loads 4 bytes from [ret(find_display)+16]:8 +0x4.
  The `sb` at 0x219ea44 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x219ea48 stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x219ea4c stores 4 bytes to [a0+176]:8 +0x8.
  The `ld` at 0x219ea60 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x219ea6c loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x219e9b4 calls find_display [0x219da40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219e9e0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219ea64 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a2 at entry (arg2), a3=a1 at entry (arg1), a4=0x6, a5=[[ret(find_display)+16]:8+4], a6=[a0+152]:8+1, a7=0x1.
  The `jalr` at 0x219ea78 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219eaa0 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+12, a2=a2 at entry (arg2), a3=?.
  The `jalr` at 0x219eac0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd18]:8, a2=?, a3=?.
  The `beq` branch at 0x219e9bc targets 0x219eab0, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0x219e9c8 targets 0x219eab4, is taken when v0(=[ret(find_display)+16]:8) == 0, and falls through when v0(=[ret(find_display)+16]:8) != 0.
  The `beq` branch at 0x219e9d4 targets 0x219e9e8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x219e9fc targets 0x219ea9c, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+12) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x219ea58 targets 0x219ea6c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219ea70 targets 0x219ea84, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219eaa8 targets 0x219ea00 and is always taken.
  The return at 0x219ea94 has v0 = 0x1.
  The return at 0x219ead8 has v0 = 0x0.

- `XF86DRICreateDrawable` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219eae0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219eae0-0x219eca0 (448 bytes).
  It occupies 448 bytes.
  2 such `ld` accesses load 8 bytes from ret(find_display) +0x10, including `ld` at 0x219eb28, `ld` at 0x219eba4.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x219eb34, `ld` at 0x219ebe4, `ld` at 0x219ec54.
  The `ld` at 0x219eb40 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x219eb4c, `ld` at 0x219eb88, `ld` at 0x219ec50.
  The `ld` at 0x219eb50 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x219eb6c stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x219eb74, `sb` at 0x219ebd0.
  The `sh` at 0x219eb7c stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x219eb80 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x219eb90 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sd` at 0x219eba0 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `lw` at 0x219ebac loads 4 bytes from [ret(find_display)+16]:8 +0x4.
  The `sb` at 0x219ebb0 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x219ebb8 stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x219ebc4 stores 4 bytes to [a0+176]:8 +0x8.
  The `sw` at 0x219ebe0 stores 4 bytes to a3 (arg3 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x219ebf0, `ld` at 0x219ec60.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x219ebfc, `ld` at 0x219ec6c.
  The `bgezall` at 0x219eb18 calls find_display [0x219da40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219eb44 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219ebcc calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x0, a3=0x0, a4=[[ret(find_display)+16]:8+4], a5=a2 at entry (arg2), a6=a1 at entry (arg1), a7=0x7.
  The `jalr` at 0x219ebf4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219ec08 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219ec44 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+12, a2=?, a3=?.
  The `jalr` at 0x219ec64 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219ec78 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219ec90 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd18]:8, a2=?, a3=?.
  The `beq` branch at 0x219eb20 targets 0x219ec88, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0x219eb2c targets 0x219ec8c, is taken when v1(=[ret(find_display)+16]:8) == 0, and falls through when v1(=[ret(find_display)+16]:8) != 0.
  The `beq` branch at 0x219eb38 targets 0x219eb4c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x219eb60 targets 0x219ec44, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+12) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x219ebd4 targets 0x219ec54, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x219ebe8 targets 0x219ebfc, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219ec00 targets 0x219ec14, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219ec4c targets 0x219eb68 and is always taken.
  The `beq` branch at 0x219ec58 targets 0x219ec6c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219ec70 targets 0x219ec80, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219ec80 targets 0x219ec2c and is always taken.
  The `beq` branch at 0x219ec98 targets 0x219ec2c and is always taken.
  The return at 0x219ec24 has v0 = 0x1.
  The return at 0x219ec3c has v0 = 0x0.

- `XF86DRIDestroyDrawable` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219eca0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219eca0-0x219edfc (348 bytes).
  It occupies 348 bytes.
  2 such `ld` accesses load 8 bytes from ret(find_display) +0x10, including `ld` at 0x219ece4, `ld` at 0x219ed5c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x219ecf0, `ld` at 0x219ed78.
  The `ld` at 0x219ecfc loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x219ed08, `ld` at 0x219ed3c, `ld` at 0x219edcc.
  The `ld` at 0x219ed0c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x219ed28 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x219ed30, `sb` at 0x219ed74.
  The `sh` at 0x219ed38 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x219ed44 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x219ed50 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x219ed58 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x219ed64 loads 4 bytes from [ret(find_display)+16]:8 +0x4.
  The `sb` at 0x219ed68 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x219ed6c stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x219ed70 stores 4 bytes to [a0+176]:8 +0x8.
  The `ld` at 0x219ed84 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x219ed90 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x219ecd4 calls find_display [0x219da40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219ed00 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219ed88 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a2 at entry (arg2), a3=a1 at entry (arg1), a4=0x8, a5=[[ret(find_display)+16]:8+4], a6=[a0+152]:8+1, a7=0x1.
  The `jalr` at 0x219ed9c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219edc0 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+12, a2=?, a3=?.
  The `jalr` at 0x219eddc calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd18]:8, a2=?, a3=?.
  The `beq` branch at 0x219ecdc targets 0x219edd0, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0x219ece8 targets 0x219edd4, is taken when v0(=[ret(find_display)+16]:8) == 0, and falls through when v0(=[ret(find_display)+16]:8) != 0.
  The `beq` branch at 0x219ecf4 targets 0x219ed08, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x219ed1c targets 0x219edc0, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+12) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x219ed7c targets 0x219ed90, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219ed94 targets 0x219eda8, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219edc8 targets 0x219ed24 and is always taken.
  The return at 0x219edb8 has v0 = 0x1.
  The return at 0x219edf4 has v0 = 0x0.

- `XF86DRIGetDrawableInfo` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219ee00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219ee00-0x219f108 (776 bytes).
  It occupies 776 bytes.
  2 such `ld` accesses load 8 bytes from ret(find_display) +0x10, including `ld` at 0x219ee58, `ld` at 0x219eed4.
  4 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x219ee64, `ld` at 0x219effc, `ld` at 0x219f0a8.
  The `ld` at 0x219ee70 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x219ee7c, `ld` at 0x219eeb8, `ld` at 0x219f068.
  The `ld` at 0x219ee80 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x219ee9c stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x219eea4, `sb` at 0x219ef00.
  The `sh` at 0x219eeac stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x219eeb0 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x219eec0 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sd` at 0x219eed0 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `lw` at 0x219eedc loads 4 bytes from [ret(find_display)+16]:8 +0x4.
  The `sb` at 0x219eee0 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x219eee8 stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x219eef4 stores 4 bytes to [a0+176]:8 +0x8.
  The `sw` at 0x219ef30 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0x219ef38 stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `sw` at 0x219ef40 stores 4 bytes to a5 (arg5 at entry) +0x0.
  The `sw` at 0x219ef48 stores 4 bytes to a6 (arg6 at entry) +0x0.
  The `sw` at 0x219ef50 stores 4 bytes to a7 (arg7 at entry) +0x0.
  5 such `sw` accesses store 4 bytes to ?, including `sw` at 0x219ef58, `sw` at 0x219ef60, `sw` at 0x219ef68.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x219ef80, `lw` at 0x219efc0.
  4 such `sd` accesses store 8 bytes to ?, including `sd` at 0x219efb8, `sd` at 0x219eff8, `sd` at 0x219f0fc.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x219f008, `ld` at 0x219f0b8.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x219f014, `ld` at 0x219f0c4.
  The `bgezall` at 0x219ee48 calls find_display [0x219da40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219ee74 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219eefc calls _XReply with a0=a0 at entry (arg0), a1=sp-192, a2=0x1, a3=0x0, a4=[[ret(find_display)+16]:8+4], a5=a2 at entry (arg2), a6=a1 at entry (arg1), a7=0x9.
  The `jalr` at 0x219efa8 calls calloc with a0=?, a1=0x1, a2=?, a3=?.
  The `jalr` at 0x219efe8 calls calloc with a0=?, a1=0x1, a2=?, a3=?.
  The `jalr` at 0x219f00c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f020 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f05c calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+12, a2=?, a3=?.
  The `jalr` at 0x219f07c calls _XRead with a0=a0 at entry (arg0), a1=ret(calloc), a2=?, a3=?.
  The `jalr` at 0x219f09c calls _XRead with a0=a0 at entry (arg0), a1=ret(calloc), a2=?, a3=?.
  The `jalr` at 0x219f0bc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f0d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f0e8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd18]:8, a2=?, a3=?.
  The `beq` branch at 0x219ee50 targets 0x219f0e0, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0x219ee5c targets 0x219f0e4, is taken when v1(=[ret(find_display)+16]:8) == 0, and falls through when v1(=[ret(find_display)+16]:8) != 0.
  The `beq` branch at 0x219ee68 targets 0x219ee7c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x219ee90 targets 0x219f05c, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+12) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x219ef04 targets 0x219f0ac, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x219ef84 targets 0x219f0f8, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x219ef94 targets 0x219efa0, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `bne` branch at 0x219efb4 targets 0x219f06c, is taken when v0(=ret(calloc)) != 0, and falls through when v0(=ret(calloc)) == 0.
  The `beq` branch at 0x219efc4 targets 0x219f100, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x219efd4 targets 0x219efe0, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `bne` branch at 0x219eff4 targets 0x219f08c, is taken when v0(=ret(calloc)) != 0, and falls through when v0(=ret(calloc)) == 0.
  The `beq` branch at 0x219f000 targets 0x219f014, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219f018 targets 0x219f02c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219f064 targets 0x219ee98 and is always taken.
  The `beq` branch at 0x219f084 targets 0x219efbc and is always taken.
  The `beq` branch at 0x219f0a4 targets 0x219f000 and is always taken.
  The `beq` branch at 0x219f0b0 targets 0x219f0c4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219f0c8 targets 0x219f0d8, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219f0d8 targets 0x219f044 and is always taken.
  The `beq` branch at 0x219f0f0 targets 0x219f044 and is always taken.
  The `beq` branch at 0x219f0f8 targets 0x219efbc and is always taken.
  The `beq` branch at 0x219f100 targets 0x219effc and is always taken.
  The return at 0x219f03c has v0 = 0x1.
  The return at 0x219f054 has v0 = 0x0.

- `XF86DRIGetDeviceInfo` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219f110 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219f110-0x219f3d8 (712 bytes).
  It occupies 712 bytes.
  2 such `ld` accesses load 8 bytes from ret(find_display) +0x10, including `ld` at 0x219f168, `ld` at 0x219f1e0.
  4 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x219f174, `ld` at 0x219f2b4, `ld` at 0x219f324.
  The `ld` at 0x219f180 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x219f18c, `ld` at 0x219f1c8, `ld` at 0x219f320.
  The `ld` at 0x219f190 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x219f1ac stores 8 bytes to a0 (arg0 at entry) +0xa0.
  The `sh` at 0x219f1b4 stores 2 bytes to [a0+176]:8 +0x2.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x219f1bc, `sb` at 0x219f208.
  The `ld` at 0x219f1c0 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x219f1d4 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sd` at 0x219f1dc stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `lw` at 0x219f1e8 loads 4 bytes from [ret(find_display)+16]:8 +0x4.
  The `sb` at 0x219f1f0 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x219f1fc stores 4 bytes to [a0+176]:8 +0x4.
  2 such `sd` accesses store 8 bytes to a2 (arg2 at entry) +0x0, including `sd` at 0x219f224, `sd` at 0x219f23c.
  The `sw` at 0x219f244 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0x219f24c stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `sw` at 0x219f254 stores 4 bytes to a5 (arg5 at entry) +0x0.
  The `sw` at 0x219f25c stores 4 bytes to a6 (arg6 at entry) +0x0.
  The `ld` at 0x219f26c loads 8 bytes from a7 (arg7 at entry) +0x0.
  The `sd` at 0x219f298 stores 8 bytes to a7 (arg7 at entry) +0x0.
  3 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x219f2c0, `ld` at 0x219f330, `ld` at 0x219f3b0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x219f2cc, `ld` at 0x219f33c, `ld` at 0x219f3bc.
  The `bgezall` at 0x219f158 calls find_display [0x219da40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219f184 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f204 calls _XReply with a0=a0 at entry (arg0), a1=sp-128, a2=0x0, a3=0x0, a4=[[ret(find_display)+16]:8+4], a5=a1 at entry (arg1), a6=0xa, a7=0x1.
  The `jalr` at 0x219f28c calls calloc with a0=?, a1=0x1, a2=a3 at entry (arg3), a3=?, a4=a2 at entry (arg2).
  The `jalr` at 0x219f2ac calls _XRead with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f2c4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f2d8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f314 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x219f334 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f348 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f364 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd18]:8, a2=?, a3=?.
  The `jalr` at 0x219f39c calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=-0x4, a3=?.
  The `jalr` at 0x219f3b4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f3c8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x219f160 targets 0x219f358, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0x219f16c targets 0x219f35c, is taken when v1(=[ret(find_display)+16]:8) == 0, and falls through when v1(=[ret(find_display)+16]:8) != 0.
  The `beq` branch at 0x219f178 targets 0x219f18c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x219f1a0 targets 0x219f314, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x219f20c targets 0x219f324, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x219f264 targets 0x219f2b4, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `bne` branch at 0x219f270 targets 0x219f2a4, is taken when a1(=[a7]:8) != 0, and falls through when a1(=[a7]:8) == 0.
  The `beq` branch at 0x219f278 targets 0x219f374, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x219f29c targets 0x219f380, is taken when v0(=ret(calloc)) == 0, and falls through when v0(=ret(calloc)) != 0.
  The `beq` branch at 0x219f2b8 targets 0x219f2cc, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219f2d0 targets 0x219f2e4, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219f31c targets 0x219f1a8 and is always taken.
  The `beq` branch at 0x219f328 targets 0x219f33c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219f340 targets 0x219f350, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219f350 targets 0x219f300 and is always taken.
  The `beq` branch at 0x219f36c targets 0x219f300 and is always taken.
  The `beq` branch at 0x219f374 targets 0x219f280 and is always taken.
  The `beq` branch at 0x219f3a8 targets 0x219f3bc, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219f3c0 targets 0x219f3d0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219f3d0 targets 0x219f300 and is always taken.
  The return at 0x219f2f0 has v0 = 0x1.
  The return at 0x219f30c has v0 = 0x0.
  The instructions from 0x219f2f8 to 0x219f2fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x219f37c to 0x219f37c are not reached by any path from the entry, and their branches are not listed.

- `XF86DRIOpenFullScreen` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219f3e0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219f3e0-0x219f5ac (460 bytes).
  It occupies 460 bytes.
  2 such `ld` accesses load 8 bytes from ret(find_display) +0x10, including `ld` at 0x219f424, `ld` at 0x219f49c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x219f430, `ld` at 0x219f4d0.
  The `ld` at 0x219f43c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x219f448, `ld` at 0x219f480, `ld` at 0x219f52c.
  The `ld` at 0x219f44c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x219f464 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x219f46c, `sb` at 0x219f4c8.
  The `sh` at 0x219f474 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x219f478 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x219f488 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sd` at 0x219f498 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `lw` at 0x219f4a4 loads 4 bytes from [ret(find_display)+16]:8 +0x4.
  The `sb` at 0x219f4a8 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x219f4b0 stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x219f4bc stores 4 bytes to [a0+176]:8 +0x8.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x219f4dc, `ld` at 0x219f538.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x219f4e8, `ld` at 0x219f544.
  The `bgezall` at 0x219f414 calls find_display [0x219da40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219f440 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+2408]:8.
  The `jalr` at 0x219f4c4 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(find_display)+16]:8+4], a5=a2 at entry (arg2), a6=a1 at entry (arg1), a7=0xc.
  The `jalr` at 0x219f4e0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+2408]:8.
  The `jalr` at 0x219f4f4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f520 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+12, a2=?, a3=?.
  The `jalr` at 0x219f53c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+2408]:8.
  The `jalr` at 0x219f550 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f58c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd18]:8, a2=?, a3=?.
  The `beq` branch at 0x219f41c targets 0x219f580, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0x219f428 targets 0x219f584, is taken when v1(=[ret(find_display)+16]:8) == 0, and falls through when v1(=[ret(find_display)+16]:8) != 0.
  The `beq` branch at 0x219f434 targets 0x219f448, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `bne` branch at 0x219f45c targets 0x219f51c, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+12) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x219f4cc targets 0x219f530, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x219f4d4 targets 0x219f4e8, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219f4ec targets 0x219f500, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219f528 targets 0x219f460 and is always taken.
  The `beq` branch at 0x219f530 targets 0x219f544, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219f548 targets 0x219f55c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x219f514 has v0 = ?.
  The return at 0x219f56c has v0 = 0x0.
  The return at 0x219f5a4 has v0 = 0x0.
  The instructions from 0x219f574 to 0x219f57c are not reached by any path from the entry, and their branches are not listed.

- `XF86DRICloseFullScreen` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219f5b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219f5b0-0x219f770 (448 bytes).
  It occupies 448 bytes.
  2 such `ld` accesses load 8 bytes from ret(find_display) +0x10, including `ld` at 0x219f5f4, `ld` at 0x219f66c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x219f600, `ld` at 0x219f6a0.
  The `ld` at 0x219f60c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x219f618, `ld` at 0x219f650, `ld` at 0x219f6f8.
  The `ld` at 0x219f61c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x219f634 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x219f63c, `sb` at 0x219f698.
  The `sh` at 0x219f644 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x219f648 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x219f658 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sd` at 0x219f668 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `lw` at 0x219f674 loads 4 bytes from [ret(find_display)+16]:8 +0x4.
  The `sb` at 0x219f678 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x219f680 stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x219f68c stores 4 bytes to [a0+176]:8 +0x8.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x219f6ac, `ld` at 0x219f708.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x219f6b8, `ld` at 0x219f714.
  The `bgezall` at 0x219f5e4 calls find_display [0x219da40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219f610 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+2408]:8.
  The `jalr` at 0x219f694 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(find_display)+16]:8+4], a5=a2 at entry (arg2), a6=a1 at entry (arg1), a7=0xd.
  The `jalr` at 0x219f6b0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+2408]:8.
  The `jalr` at 0x219f6c4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f6ec calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+12, a2=?, a3=?.
  The `jalr` at 0x219f70c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+2408]:8.
  The `jalr` at 0x219f720 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f750 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd18]:8, a2=?, a3=?.
  The `beq` branch at 0x219f5ec targets 0x219f744, is taken when v0(=ret(find_display)) == 0, and falls through when v0(=ret(find_display)) != 0.
  The `beq` branch at 0x219f5f8 targets 0x219f748, is taken when v1(=[ret(find_display)+16]:8) == 0, and falls through when v1(=[ret(find_display)+16]:8) != 0.
  The `beq` branch at 0x219f604 targets 0x219f618, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `bne` branch at 0x219f62c targets 0x219f6e8, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+12) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x219f69c targets 0x219f700, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x219f6a4 targets 0x219f6b8, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219f6bc targets 0x219f6d0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x219f6f4 targets 0x219f630 and is always taken.
  The `beq` branch at 0x219f700 targets 0x219f714, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `beq` branch at 0x219f718 targets 0x219f72c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x219f6e0 has v0 = 0x1.
  The return at 0x219f73c has v0 = 0x0.
  The return at 0x219f768 has v0 = 0x0.
  The instructions from 0x219f6fc to 0x219f6fc are not reached by any path from the entry, and their branches are not listed.

- `__glXstrdup` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219f7c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219f7c0-0x219f83c (124 bytes).
  It occupies 124 bytes.
  The `jalr` at 0x219f7d0 calls strlen with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219f7e8 calls strlen with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x219f7fc calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x219f824 calls strcpy with a0=ret(malloc), a1=a0 at entry (arg0), a2=?, a3=?.
  The `beq` branch at 0x219f7dc targets 0x219f7f8, is taken when v0(=ret(strlen)) == v1(=-0x1), and falls through when v0(=ret(strlen)) != v1(=-0x1).
  The `bne` branch at 0x219f804 targets 0x219f81c, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The return at 0x219f814 has v0 = 0x0.
  The return at 0x219f834 has v0 = ret(malloc).

- `_glapi_initialize` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219f840 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219f840-0x219f8bc (124 bytes).
  It occupies 124 bytes.
  The `jalr` at 0x219f854 calls dlsym with a0=a0 at entry (arg0), a1=0x21b54b0, a2=0x54b0, a3=a3 at entry (arg3).
  The `jalr` at 0x219f8ac calls (unknown callee) with a0=sp-64, a1=?, a2=?, a3=sym(_glapi_add_entrypoint), a4=sym(_glapi_get_dispatch_table_size), a5=sym(_glapi_set_dispatch), a6=sym(_glapi_get_context), a7=sym(_glapi_set_context).
  The `bne` branch at 0x219f85c targets 0x219f870, is taken when v0(=ret(dlsym)) != 0, and falls through when v0(=ret(dlsym)) == 0.
  The `beq` branch at 0x219f8b4 targets 0x219f868 and is always taken.
  The return at 0x219f868 has v0 = one of ret(dlsym), ret(?).

- `InfoMessageF` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219f8c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219f8c0-0x219f960 (160 bytes).
  It occupies 160 bytes.
  The `jalr` at 0x219f8f4 calls getenv with a0=0x21b54c8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219f918 calls strstr with a0=ret(getenv), a1=0x21bfc68, a2=?, a3=?.
  The `jalr` at 0x219f93c calls fprintf with a0=sym(__iob)+64, a1=0x21bfc70, a2=0x40, a3=?.
  The `jalr` at 0x219f950 calls vfprintf with a0=sym(__iob)+64, a1=a0 at entry (arg0), a2=sp-56, a3=?.
  The `bne` branch at 0x219f8fc targets 0x219f910, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `beq` branch at 0x219f920 targets 0x219f904, is taken when v0(=ret(strstr)) == 0, and falls through when v0(=ret(strstr)) != 0.
  The `beq` branch at 0x219f958 targets 0x219f908 and is always taken.
  The return at 0x219f908 has v0 = one of ?, ret(vfprintf).

- `ErrorMessageF` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219f960 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219f960-0x219f9ec (140 bytes).
  It occupies 140 bytes.
  The `jalr` at 0x219f994 calls getenv with a0=0x21b54c8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x219f9c8 calls fprintf with a0=sym(__iob)+64, a1=0x21b54d8, a2=0x40, a3=0x54d8.
  The `jalr` at 0x219f9dc calls vfprintf with a0=sym(__iob)+64, a1=a0 at entry (arg0), a2=sp-56, a3=?.
  The `bne` branch at 0x219f99c targets 0x219f9ac, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `beq` branch at 0x219f9e4 targets 0x219f9a4 and is always taken.
  The return at 0x219f9a4 has v0 = one of ret(getenv), ret(vfprintf).

- `DummyCreateScreen` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219f9f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219f9f0-0x219f9f8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x219f9f0 has v0 = 0x0.

- `ExtractDir` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219fa00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219fa00-0x219fbf4 (500 bytes).
  It occupies 500 bytes.
  11 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x219fa3c, `lbu` at 0x219fa5c, `lbu` at 0x219fa9c.
  2 such `lbu` accesses load 1 byte from table(0x1) +0x0, including `lbu` at 0x219fa70, `lbu` at 0x219faac.
  The `lbu` at 0x219fa80 loads 1 byte from table(0x2) +0x0.
  The `lbu` at 0x219fa90 loads 1 byte from table(0x3) +0x0.
  The `sb` at 0x219fbd8 stores 1 byte to ?.
  The `sb` at 0x219fbe4 stores 1 byte to a3 (arg3 at entry) +0x0.
  The `jalr` at 0x219fbc0 calls strncpy with a0=a3 at entry (arg3), a1=?, a2=?, a3=?.
  The `blez` branch at 0x219fa18 targets 0x219fa58, is taken when a0 <= 0 (signed), and falls through when a0 > 0 (signed).
  The `beq` branch at 0x219fa20 targets 0x219fa3c and is always taken.
  The `beq` branch at 0x219fa28 targets 0x219fbe4, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x219fa34 targets 0x219fa5c, is taken when a7(?) >= a0 (signed), and falls through when a7(?) < a0 (signed).
  The `bne` branch at 0x219fa40 targets 0x219fa28, is taken when a1(?) != t0(=0x3a), and falls through when a1(?) == t0(=0x3a).
  The `beq` branch at 0x219fa50 targets 0x219fa30 and is always taken.
  The `bne` branch at 0x219fa60 targets 0x219fa9c, is taken when v1(?) != t0(=0x3a), and falls through when v1(?) == t0(=0x3a).
  The `bne` branch at 0x219fa74 targets 0x219fa9c, is taken when a0(=entry(0x1)) != t0(=0x3a), and falls through when a0(=entry(0x1)) == t0(=0x3a).
  The `bne` branch at 0x219fa84 targets 0x219fa9c, is taken when a3(=entry(0x2)) != t0(=0x3a), and falls through when a3(=entry(0x2)) == t0(=0x3a).
  The `beq` branch at 0x219fa94 targets 0x219fa6c, is taken when a6(=entry(0x3)) == t0(=0x3a), and falls through when a6(=entry(0x3)) != t0(=0x3a).
  The `beq` branch at 0x219faa4 targets 0x219fb90, is taken when a3(?) == t0(=0x3a), and falls through when a3(?) != t0(=0x3a).
  The `beq` branch at 0x219fab0 targets 0x219fb94, is taken when a4(=entry(0x1)) == 0, and falls through when a4(=entry(0x1)) != 0.
  The `beq` branch at 0x219fad8 targets 0x219fb90, is taken when a6(?) == t0(=0x3a), and falls through when a6(?) != t0(=0x3a).
  The `beq` branch at 0x219fae0 targets 0x219fb90, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x219faf0 targets 0x219fb90, is taken when a6(?) == t0(=0x3a), and falls through when a6(?) != t0(=0x3a).
  The `beq` branch at 0x219faf8 targets 0x219fb90, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x219fb08 targets 0x219fb90, is taken when a6(?) == t0(=0x3a), and falls through when a6(?) != t0(=0x3a).
  The `beq` branch at 0x219fb10 targets 0x219fb90, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x219fb20 targets 0x219fb90, is taken when a6(?) == t0(=0x3a), and falls through when a6(?) != t0(=0x3a).
  The `beq` branch at 0x219fb28 targets 0x219fb90, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x219fb38 targets 0x219fb90, is taken when a6(?) == t0(=0x3a), and falls through when a6(?) != t0(=0x3a).
  The `beq` branch at 0x219fb40 targets 0x219fb90, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x219fb50 targets 0x219fb90, is taken when a6(?) == t0(=0x3a), and falls through when a6(?) != t0(=0x3a).
  The `beq` branch at 0x219fb58 targets 0x219fb90, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x219fb68 targets 0x219fb90, is taken when a6(?) == t0(=0x3a), and falls through when a6(?) != t0(=0x3a).
  The `beq` branch at 0x219fb70 targets 0x219fb90, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x219fb80 targets 0x219fb90, is taken when a6(?) == t0(=0x3a), and falls through when a6(?) != t0(=0x3a).
  The `bne` branch at 0x219fb88 targets 0x219fabc, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0x219fb9c targets 0x219fbb0, is taken when s1(?) < a2 (signed), and falls through when s1(?) >= a2 (signed).
  The return at 0x219fbdc has v0 = ret(strncpy).
  The return at 0x219fbec has v0 = ?.

- `OpenDriver` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219fc00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219fc00-0x219ff30 (816 bytes).
  It occupies 816 bytes.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x219fc44, `ld` at 0x219fc58.
  The `sd` at 0x219fd94 stores 8 bytes to ret(malloc) +0x0.
  The `sd` at 0x219fdb8 stores 8 bytes to ret(malloc) +0x10.
  The `sd` at 0x219feb4 stores 8 bytes to ret(malloc) +0x18.
  The `sd` at 0x219feb8 stores 8 bytes to ret(malloc) +0x8.
  The `sd` at 0x219fed4 stores 8 bytes to ret(malloc) +0x20.
  The `jalr` at 0x219fc48 calls strcmp with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0x219fc68 calls geteuid with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x219fc74 calls getuid with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x219fcc4 calls dlerror with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x219fce0 calls ErrorMessageF [0x219f960] with a0=0x21b55c0, a1=sp-280, a2=ret(dlerror), a3=0x55c0.
  The `bgezall` at 0x219fcfc calls ExtractDir [0x219fa00] with a0=?, a1=?, a2=0x3e8, a3=sp-1280.
  The `jalr` at 0x219fd2c calls snprintf with a0=sp-280, a1=0xc8, a2=0x21b5538, a3=sp-1280, a4=a0 at entry (arg0), a5=sym(snprintf).
  The `bgezall` at 0x219fd44 calls InfoMessageF [0x219f8c0] with a0=0x21b5548, a1=sp-280, a2=0x5548, a3=?.
  The `jalr` at 0x219fd54 calls dlopen with a0=sp-280, a1=0x5, a2=?, a3=?.
  The `jalr` at 0x219fd68 calls malloc with a0=0x28, a1=?, a2=?, a3=?.
  The `bgezall` at 0x219fd88 calls __glXstrdup [0x219f7c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=0x219f7c0, a4=-0x840.
  The `jalr` at 0x219fdac calls dlsym with a0=ret(dlopen), a1=0x21b5560, a2=0x5560, a3=?, a6=sym(dlsym).
  The `bgezall` at 0x219fdcc calls ErrorMessageF [0x219f960] with a0=0x21b5578, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0x219fdd8 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x219fde8 calls dlclose with a0=ret(dlopen), a1=?, a2=sym(dlclose), a3=?.
  The `jalr` at 0x219fe40 calls getenv with a0=0x21b54e8, a1=0x54e8, a2=?, a3=?.
  The `jalr` at 0x219fe5c calls getenv with a0=0x21b5500, a1=0x5500, a2=?, a3=?.
  The `jalr` at 0x219fe90 calls dlsym with a0=ret(dlopen), a1=0x21b55a8, a2=0x55a8, a3=?.
  The `bgezall` at 0x219fed0 calls _glapi_initialize [0x219f840] with a0=ret(dlopen), a1=?, a2=?, a3=[0x21bfe30]:8.
  The `jalr` at 0x219fef8 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `bgezall` at 0x219ff20 calls ErrorMessageF [0x219f960] with a0=0x21b55d8, a1=a0 at entry (arg0), a2=?, a3=?.
  The `beq` branch at 0x219fc34 targets 0x219fc64, is taken when at(=[0x21bfe30]:8) == 0, and falls through when at(=[0x21bfe30]:8) != 0.
  The `beq` branch at 0x219fc50 targets 0x219ff08, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `bne` branch at 0x219fc5c targets 0x219fc40, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0x219fc7c targets 0x219fe30, is taken when s0(=ret(geteuid)) == v0(=ret(getuid)), and falls through when s0(=ret(geteuid)) != v0(=ret(getuid)).
  The `beq` branch at 0x219fcb8 targets 0x219fcec and is always taken.
  The `beq` branch at 0x219fd08 targets 0x219ff10, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x219fd5c targets 0x219fcc0, is taken when v0(=ret(dlopen)) == 0, and falls through when v0(=ret(dlopen)) != 0.
  The `beq` branch at 0x219fd70 targets 0x219fdf8, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0x219fd90 targets 0x219fef4, is taken when v0(=ret(__glXstrdup)) == 0, and falls through when v0(=ret(__glXstrdup)) != 0.
  The `bne` branch at 0x219fdb4 targets 0x219fe80, is taken when v0(=ret(dlsym)) != 0, and falls through when v0(=ret(dlsym)) == 0.
  The `beq` branch at 0x219fdf0 targets 0x219fcec and is always taken.
  The `bne` branch at 0x219fe48 targets 0x219fc90, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `bne` branch at 0x219fe64 targets 0x219fc90, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `beq` branch at 0x219fe6c targets 0x219fc88 and is always taken.
  The `beq` branch at 0x219ff00 targets 0x219fdfc and is always taken.
  The `beq` branch at 0x219ff08 targets 0x219fe00 and is always taken.
  The `beq` branch at 0x219ff28 targets 0x219fdfc and is always taken.
  The return at 0x219fe28 has v0 = one of 0x0, ?.
  The return at 0x219feec has v0 = ret(malloc).
  The instructions from 0x219fe74 to 0x219fe7c are not reached by any path from the entry, and their branches are not listed.

- `GetDriverName` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x219ff30 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x219ff30-0x21a0074 (324 bytes).
  It occupies 324 bytes.
  The `sd` at 0x219ff38 stores 8 bytes to a2 (arg2 at entry) +0x0.
  The `ld` at 0x219ffb8 loads 8 bytes from a2 (arg2 at entry) +0x0.
  The `jalr` at 0x219ff54 calls XF86DRIQueryDirectRenderingCapable with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x219ff88 calls XF86DRIGetClientDriverName with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sp-44, a3=sp-40, a4=sp-36, a5=a2 at entry (arg2).
  The `bgezall` at 0x219ffbc calls InfoMessageF [0x219f8c0] with a0=0x21b5698, a1=?, a2=?, a3=?, a4=[a2]:8, a5=a1 at entry (arg1), a6=0x5698.
  The `bgezall` at 0x219fff4 calls ErrorMessageF [0x219f960] with a0=0x21b5668, a1=a1 at entry (arg1), a2=0x5668, a3=?.
  The `bgezall` at 0x21a0024 calls ErrorMessageF [0x219f960] with a0=0x21b5630, a1=0x5630, a2=?, a3=?.
  The `bgezall` at 0x21a0054 calls ErrorMessageF [0x219f960] with a0=0x21b5600, a1=0x5600, a2=?, a3=?.
  The `beq` branch at 0x219ff5c targets 0x21a0044, is taken when v0(=ret(XF86DRIQueryDirectRenderingCapable)) == 0, and falls through when v0(=ret(XF86DRIQueryDirectRenderingCapable)) != 0.
  The `beq` branch at 0x219ff68 targets 0x21a0014, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x219ff90 targets 0x219ffdc, is taken when v0(=ret(XF86DRIGetClientDriverName)) == 0, and falls through when v0(=ret(XF86DRIGetClientDriverName)) != 0.
  The return at 0x219ffd4 has v0 = 0x1.
  The return at 0x21a000c has v0 = 0x0.
  The return at 0x21a003c has v0 = 0x0.
  The return at 0x21a006c has v0 = 0x0.

- `GetDriver` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a0080 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a0080-0x21a00d0 (80 bytes).
  It occupies 80 bytes.
  The `bgezall` at 0x21a0094 calls GetDriverName [0x219ff30] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sp-16, a3=a3 at entry (arg3).
  The `bgezall` at 0x21a00b0 calls OpenDriver [0x219fc00] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x21a009c targets 0x21a00c4, is taken when v0(=ret(GetDriverName)) == 0, and falls through when v0(=ret(GetDriverName)) != 0.
  The return at 0x21a00bc has v0 = ret(OpenDriver).
  The return at 0x21a00c8 has v0 = 0x0.

- `driDestroyDisplay` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a00d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a00d0-0x21a0188 (184 bytes).
  It occupies 184 bytes.
  The `lw` at 0x21a00f0 loads 4 bytes from a0 (arg0 at entry) +0xe4.
  3 such `ld` accesses load 8 bytes from a1 (arg1 at entry) +0x10, including `ld` at 0x21a0108, `ld` at 0x21a0134, `ld` at 0x21a017c.
  The `ld` at 0x21a011c loads 8 bytes from ?.
  The `jalr` at 0x21a012c calls dlclose with a0=?, a1=?, a2=?, a3=?, a4=0x8.
  The `jalr` at 0x21a0154 calls free with a0=[a1+16]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x21a0160 calls free with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `beq` branch at 0x21a00e8 targets 0x21a016c, is taken when a1 == 0, and falls through when a1 != 0.
  The `blez` branch at 0x21a0100 targets 0x21a017c, is taken when a1(=[a0+228]) <= 0 (signed), and falls through when a1(=[a0+228]) > 0 (signed).
  The `beq` branch at 0x21a0120 targets 0x21a013c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0x21a0140 targets 0x21a011c, is taken when s0(?) != s1(=([a0+228] << 0x3)), and falls through when s0(?) == s1(=([a0+228] << 0x3)).
  The `beq` branch at 0x21a0180 targets 0x21a0148 and is always taken.
  The return at 0x21a0174 has v0 = one of ?, ret(free).

- `__driCreateDisplayErrorHandler` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a0190 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a0190-0x21a01a8 (24 bytes).
  It occupies 24 bytes.
  The `sw` at 0x21a01a4 stores 4 bytes to abs 0x21bfe38.
  The return at 0x21a01a0 has v0 = 0x1.

- `driCreateDisplay` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a01b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a01b0-0x21a042c (636 bytes).
  It occupies 636 bytes.
  The `lw` at 0x21a01d0 loads 4 bytes from a0 (arg0 at entry) +0xe4.
  2 such `sd` accesses store 8 bytes to a1 (arg1 at entry) +0x8, including `sd` at 0x21a01fc, `sd` at 0x21a02e0.
  2 such `sd` accesses store 8 bytes to a1 (arg1 at entry) +0x0, including `sd` at 0x21a0200, `sd` at 0x21a02c8.
  The `sd` at 0x21a020c stores 8 bytes to a1 (arg1 at entry) +0x10.
  The `sw` at 0x21a02a8 stores 4 bytes to ret(malloc) +0x0.
  The `sw` at 0x21a02b0 stores 4 bytes to ret(malloc) +0x4.
  The `sw` at 0x21a02bc stores 4 bytes to ret(malloc) +0x8.
  The `sd` at 0x21a02fc stores 8 bytes to ret(malloc) +0x10.
  The `ld` at 0x21a0350 loads 8 bytes from ret(GetDriver) +0x10.
  4 such `sd` accesses store 8 bytes to ?, including `sd` at 0x21a0354, `sd` at 0x21a0364, `sd` at 0x21a0394.
  2 such `ld` accesses load 8 bytes from ret(malloc) +0x10, including `ld` at 0x21a0358, `ld` at 0x21a0398.
  The `ld` at 0x21a035c loads 8 bytes from ret(GetDriver) +0x8.
  2 such `ld` accesses load 8 bytes from a1 (arg1 at entry) +0x8, including `ld` at 0x21a0380, `ld` at 0x21a03e8.
  The `jalr` at 0x21a01f0 calls XSetErrorHandler with a0=sym(__driCreateDisplayErrorHandler), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a0214 calls XF86DRIQueryExtension with a0=a0 at entry (arg0), a1=sp-112, a2=sp-108, a3=?.
  The `jalr` at 0x21a0234 calls XF86DRIQueryVersion with a0=a0 at entry (arg0), a1=sp-104, a2=sp-100, a3=sp-96.
  The `jalr` at 0x21a0290 calls malloc with a0=0x18, a1=?, a2=[0x21bfe38], a3=0x1.
  The `jalr` at 0x21a02d4 calls malloc with a0=?, a1=0x21a0000, a2=?, a3=?, a4=0x21a00d0.
  The `jalr` at 0x21a02f0 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21a0304 calls __glXRegisterExtensions with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x21a0378 calls GetDriver [0x21a0080] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a03c0 calls XSetErrorHandler with a0=?, a1=?, a2=?, a3=?, a7=sym(XSetErrorHandler).
  The `jalr` at 0x21a03e4 calls free with a0=[a1+8]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x21a03f0 calls XFree with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a0418 calls XFree with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0x21a021c targets 0x21a026c, is taken when v0(=ret(XF86DRIQueryExtension)) == 0, and falls through when v0(=ret(XF86DRIQueryExtension)) != 0.
  The `beq` branch at 0x21a023c targets 0x21a0348, is taken when v0(=ret(XF86DRIQueryVersion)) == 0, and falls through when v0(=ret(XF86DRIQueryVersion)) != 0.
  The `beq` branch at 0x21a0248 targets 0x21a0288, is taken when a2(=[0x21bfe38]) == a3(=0x1), and falls through when a2(=[0x21bfe38]) != a3(=0x1).
  The `beq` branch at 0x21a029c targets 0x21a03d4, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0x21a02c4 targets 0x21a0404, is taken when s5(=[a0+228]) == 0, and falls through when s5(=[a0+228]) != 0.
  The `beq` branch at 0x21a02dc targets 0x21a0414, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0x21a02e4 targets 0x21a040c, is taken when s5(=[a0+228]) == 0, and falls through when s5(=[a0+228]) != 0.
  The `beq` branch at 0x21a02f8 targets 0x21a03e0, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `blez` branch at 0x21a030c targets 0x21a03bc, is taken when s5(=[a0+228]) <= 0 (signed), and falls through when s5(=[a0+228]) > 0 (signed).
  The `beq` branch at 0x21a0340 targets 0x21a0370 and is always taken.
  The `beq` branch at 0x21a0348 targets 0x21a0250 and is always taken.
  The `beq` branch at 0x21a0368 targets 0x21a03a8, is taken when s1(?) == s5(=[a0+228]), and falls through when s1(?) != s5(=[a0+228]).
  The `bne` branch at 0x21a038c targets 0x21a0350, is taken when v0(=ret(GetDriver)) != 0, and falls through when v0(=ret(GetDriver)) == 0.
  The `beq` branch at 0x21a03a0 targets 0x21a0368 and is always taken.
  The `beq` branch at 0x21a03cc targets 0x21a0250 and is always taken.
  The `beq` branch at 0x21a03d8 targets 0x21a0250 and is always taken.
  The `beq` branch at 0x21a03fc targets 0x21a0250 and is always taken.
  The `beq` branch at 0x21a0404 targets 0x21a02d0 and is always taken.
  The `beq` branch at 0x21a040c targets 0x21a02ec and is always taken.
  The `beq` branch at 0x21a0424 targets 0x21a0250 and is always taken.
  The return at 0x21a0264 has v0 = one of 0x0, ret(malloc).
  The return at 0x21a0280 has v0 = 0x0.

- `__glXRegisterExtensions` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a0430 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a0430-0x21a0438 (8 bytes).
  It occupies 8 bytes.
  The return at 0x21a0430 has v0 = ?.

- `XextCreateExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a0440 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a0440-0x21a0494 (84 bytes).
  It occupies 84 bytes.
  The `sd` at 0x21a046c stores 8 bytes to ret(malloc) +0x0.
  The `sd` at 0x21a0470 stores 8 bytes to ret(malloc) +0x8.
  The `sw` at 0x21a0474 stores 4 bytes to ret(malloc) +0x10.
  The `jalr` at 0x21a045c calls malloc with a0=0x18, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x21a0464 targets 0x21a0484, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The return at 0x21a047c has v0 = ret(malloc).
  The return at 0x21a048c has v0 = ret(malloc).

- `XextDestroyExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a04a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a04a0-0x21a04dc (60 bytes).
  It occupies 60 bytes.
  The `sd` at 0x21a04b8 stores 8 bytes to a0 (arg0 at entry) +0x0.
  The `sd` at 0x21a04bc stores 8 bytes to a0 (arg0 at entry) +0x8.
  The `sw` at 0x21a04c8 stores 4 bytes to a0 (arg0 at entry) +0x10.
  The `jalr` at 0x21a04c4 calls XFree with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x21a04d4 has v0 = ret(XFree).

- `XextAddDisplay` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a04e0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a04e0-0x21a07c4 (740 bytes).
  It occupies 740 bytes.
  The `sd` at 0x21a0560 stores 8 bytes to ret(malloc) +0x8.
  The `sd` at 0x21a0570 stores 8 bytes to ret(malloc) +0x18.
  The `sd` at 0x21a0584 stores 8 bytes to ret(malloc) +0x10.
  The `lw` at 0x21a058c loads 4 bytes from ret(XInitExtension) +0x8.
  The `ld` at 0x21a05a8 loads 8 bytes from a3 (arg3 at entry) +0x38.
  The `ld` at 0x21a05bc loads 8 bytes from a3 (arg3 at entry) +0x40.
  The `ld` at 0x21a05dc loads 8 bytes from a3 (arg3 at entry) +0x0.
  9 such `ld` accesses load 8 bytes from ret(malloc) +0x10, including `ld` at 0x21a05e8, `ld` at 0x21a0604, `ld` at 0x21a0620.
  9 such `lw` accesses load 4 bytes from [ret(malloc)+16]:8 +0x0, including `lw` at 0x21a05f4, `lw` at 0x21a0610, `lw` at 0x21a062c.
  The `ld` at 0x21a05f8 loads 8 bytes from a3 (arg3 at entry) +0x8.
  The `ld` at 0x21a0614 loads 8 bytes from a3 (arg3 at entry) +0x10.
  The `ld` at 0x21a0630 loads 8 bytes from a3 (arg3 at entry) +0x18.
  The `ld` at 0x21a064c loads 8 bytes from a3 (arg3 at entry) +0x20.
  The `ld` at 0x21a0668 loads 8 bytes from a3 (arg3 at entry) +0x28.
  3 such `ld` accesses load 8 bytes from a3 (arg3 at entry) +0x30, including `ld` at 0x21a0684, `ld` at 0x21a0758, `ld` at 0x21a0778.
  The `ld` at 0x21a06a0 loads 8 bytes from a3 (arg3 at entry) +0x48.
  The `ld` at 0x21a06bc loads 8 bytes from a3 (arg3 at entry) +0x50.
  The `ld` at 0x21a06e0 loads 8 bytes from sym(_XLockMutex_fn) +0x0.
  2 such `ld` accesses load 8 bytes from sym(_Xglobal_lock) +0x0, including `ld` at 0x21a06f4, `ld` at 0x21a072c.
  The `ld` at 0x21a0700 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `sd` at 0x21a0704 stores 8 bytes to ret(malloc) +0x0.
  The `sd` at 0x21a0708 stores 8 bytes to a0 (arg0 at entry) +0x8.
  The `lw` at 0x21a070c loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `sd` at 0x21a0710 stores 8 bytes to a0 (arg0 at entry) +0x0.
  The `sw` at 0x21a0718 stores 4 bytes to a0 (arg0 at entry) +0x10.
  The `ld` at 0x21a071c loads 8 bytes from sym(_XUnlockMutex_fn) +0x0.
  The `lw` at 0x21a077c loads 4 bytes from ret(XAddExtension) +0x0.
  The `jalr` at 0x21a0520 calls malloc with a0=0x20, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a056c calls XInitExtension with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0x21a05ac calls XESetWireToEvent with a0=a1 at entry (arg1), a1=?, a2=[a3+56]:8, a3=?.
  The `jalr` at 0x21a05c0 calls XESetEventToWire with a0=a1 at entry (arg1), a1=?, a2=[a3+64]:8, a3=?.
  The `jalr` at 0x21a05f0 calls XESetCreateGC with a0=a1 at entry (arg1), a1=[[ret(malloc)+16]:8], a2=[a3]:8, a3=?.
  The `jalr` at 0x21a060c calls XESetCopyGC with a0=a1 at entry (arg1), a1=[[ret(malloc)+16]:8], a2=[a3+8]:8, a3=?.
  The `jalr` at 0x21a0628 calls XESetFlushGC with a0=a1 at entry (arg1), a1=[[ret(malloc)+16]:8], a2=[a3+16]:8, a3=?.
  The `jalr` at 0x21a0644 calls XESetFreeGC with a0=a1 at entry (arg1), a1=[[ret(malloc)+16]:8], a2=[a3+24]:8, a3=?.
  The `jalr` at 0x21a0660 calls XESetCreateFont with a0=a1 at entry (arg1), a1=[[ret(malloc)+16]:8], a2=[a3+32]:8, a3=?.
  The `jalr` at 0x21a067c calls XESetFreeFont with a0=a1 at entry (arg1), a1=[[ret(malloc)+16]:8], a2=[a3+40]:8, a3=?.
  The `jalr` at 0x21a0698 calls XESetCloseDisplay with a0=a1 at entry (arg1), a1=[[ret(malloc)+16]:8], a2=[a3+48]:8, a3=?.
  The `jalr` at 0x21a06b4 calls XESetError with a0=a1 at entry (arg1), a1=[[ret(malloc)+16]:8], a2=[a3+72]:8, a3=?.
  The `jalr` at 0x21a06d4 calls XESetErrorString with a0=a1 at entry (arg1), a1=[[ret(malloc)+16]:8], a2=[a3+80]:8, a3=?.
  The `jalr` at 0x21a06f0 calls (unknown callee) with a0=[sym(_Xglobal_lock)]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x21a0728 calls (unknown callee) with a0=[sym(_Xglobal_lock)]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x21a0768 calls XAddExtension with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a0780 calls XESetCloseDisplay with a0=a1 at entry (arg1), a1=[ret(XAddExtension)], a2=[a3+48]:8, a3=?.
  The `jalr` at 0x21a079c calls XFree with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `bne` branch at 0x21a0528 targets 0x21a0550, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x21a0580 targets 0x21a0758, is taken when v0(=ret(XInitExtension)) == 0, and falls through when v0(=ret(XInitExtension)) != 0.
  The `blez` branch at 0x21a0588 targets 0x21a05dc, is taken when a0(=a4) <= 0 (signed), and falls through when a0(=a4) > 0 (signed).
  The `bne` branch at 0x21a05cc targets 0x21a05a4, is taken when s0(?) != s3(=([ret(XInitExtension)+8] + a4)), and falls through when s0(?) == s3(=([ret(XInitExtension)+8] + a4)).
  The `beq` branch at 0x21a05e0 targets 0x21a05f8, is taken when a2(=[a3]:8) == 0, and falls through when a2(=[a3]:8) != 0.
  The `beq` branch at 0x21a05fc targets 0x21a0614, is taken when a2(=[a3+8]:8) == 0, and falls through when a2(=[a3+8]:8) != 0.
  The `beq` branch at 0x21a0618 targets 0x21a0630, is taken when a2(=[a3+16]:8) == 0, and falls through when a2(=[a3+16]:8) != 0.
  The `beq` branch at 0x21a0634 targets 0x21a064c, is taken when a2(=[a3+24]:8) == 0, and falls through when a2(=[a3+24]:8) != 0.
  The `beq` branch at 0x21a0650 targets 0x21a0668, is taken when a2(=[a3+32]:8) == 0, and falls through when a2(=[a3+32]:8) != 0.
  The `beq` branch at 0x21a066c targets 0x21a0684, is taken when a2(=[a3+40]:8) == 0, and falls through when a2(=[a3+40]:8) != 0.
  The `beq` branch at 0x21a0688 targets 0x21a06a0, is taken when a2(=[a3+48]:8) == 0, and falls through when a2(=[a3+48]:8) != 0.
  The `beq` branch at 0x21a06a4 targets 0x21a06bc, is taken when a2(=[a3+72]:8) == 0, and falls through when a2(=[a3+72]:8) != 0.
  The `beq` branch at 0x21a06c0 targets 0x21a06e0, is taken when a2(=[a3+80]:8) == 0, and falls through when a2(=[a3+80]:8) != 0.
  The `beq` branch at 0x21a06e4 targets 0x21a06fc, is taken when t9(=[sym(_XLockMutex_fn)]:8) == 0, and falls through when t9(=[sym(_XLockMutex_fn)]:8) != 0.
  The `beq` branch at 0x21a0720 targets 0x21a0730, is taken when t9(=[sym(_XUnlockMutex_fn)]:8) == 0, and falls through when t9(=[sym(_XUnlockMutex_fn)]:8) != 0.
  The `beq` branch at 0x21a075c targets 0x21a06e0, is taken when v1(=[a3+48]:8) == 0, and falls through when v1(=[a3+48]:8) != 0.
  The `beq` branch at 0x21a0770 targets 0x21a0790, is taken when v0(=ret(XAddExtension)) == 0, and falls through when v0(=ret(XAddExtension)) != 0.
  The `beq` branch at 0x21a0788 targets 0x21a06e0 and is always taken.
  The return at 0x21a0548 has v0 = 0x0.
  The return at 0x21a0750 has v0 = ret(malloc).
  The return at 0x21a07bc has v0 = 0x0.

- `XextRemoveDisplay` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a07d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a07d0-0x21a08f0 (288 bytes).
  It occupies 288 bytes.
  The `ld` at 0x21a07e8 loads 8 bytes from sym(_XLockMutex_fn) +0x0.
  3 such `ld` accesses load 8 bytes from sym(_Xglobal_lock) +0x0, including `ld` at 0x21a0814, `ld` at 0x21a0854, `ld` at 0x21a08b8.
  The `ld` at 0x21a0818 loads 8 bytes from a0 (arg0 at entry) +0x0.
  3 such `ld` accesses load 8 bytes from ?, including `ld` at 0x21a082c, `ld` at 0x21a083c, `ld` at 0x21a0880.
  3 such `ld` accesses load 8 bytes from sym(_XUnlockMutex_fn) +0x0, including `ld` at 0x21a0844, `ld` at 0x21a087c, `ld` at 0x21a08a8.
  The `sd` at 0x21a088c stores 8 bytes to ?.
  The `ld` at 0x21a0890 loads 8 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x21a0894 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `sw` at 0x21a08a0 stores 4 bytes to a0 (arg0 at entry) +0x10.
  The `sd` at 0x21a08a4 stores 8 bytes to a0 (arg0 at entry) +0x8.
  The `sd` at 0x21a08ec stores 8 bytes to a0 (arg0 at entry) +0x0.
  The `jalr` at 0x21a0810 calls (unknown callee) with a0=[sym(_Xglobal_lock)]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[sym(_XLockMutex_fn)]:8, a4=0x244e8.
  The `jalr` at 0x21a0850 calls (unknown callee) with a0=[sym(_Xglobal_lock)]:8, a1=?, a2=?, a3=sym(_Xglobal_lock).
  The `jalr` at 0x21a08b4 calls (unknown callee) with a0=[sym(_Xglobal_lock)]:8, a1=?, a2=?, a3=sym(_Xglobal_lock), a4=[a0+16]-1, a5=[a0+8]:8.
  The `jalr` at 0x21a08c0 calls free with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x21a0800 targets 0x21a0818, is taken when a3(=[sym(_XLockMutex_fn)]:8) == 0, and falls through when a3(=[sym(_XLockMutex_fn)]:8) != 0.
  The `beq` branch at 0x21a0824 targets 0x21a0844, is taken when s0(=[a0]:8) == 0, and falls through when s0(=[a0]:8) != 0.
  The `beq` branch at 0x21a0830 targets 0x21a0878, is taken when a2(?) == s1(=a1), and falls through when a2(?) != s1(=a1).
  The `bne` branch at 0x21a0840 targets 0x21a082c, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0x21a0848 targets 0x21a085c, is taken when t9(=[sym(_XUnlockMutex_fn)]:8) == 0, and falls through when t9(=[sym(_XUnlockMutex_fn)]:8) != 0.
  The `beq` branch at 0x21a0878 targets 0x21a0848, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0x21a0884 targets 0x21a08e8, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x21a089c targets 0x21a08a8, is taken when a5(=[a0+8]:8) != s0(?), and falls through when a5(=[a0+8]:8) == s0(?).
  The `beq` branch at 0x21a08ac targets 0x21a08bc, is taken when t9(=[sym(_XUnlockMutex_fn)]:8) == 0, and falls through when t9(=[sym(_XUnlockMutex_fn)]:8) != 0.
  The `beq` branch at 0x21a08e8 targets 0x21a0890 and is always taken.
  The return at 0x21a0870 has v0 = 0x0.
  The return at 0x21a08e0 has v0 = 0x1.

- `XextFindDisplay` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a08f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a08f0-0x21a09f4 (260 bytes).
  It occupies 260 bytes.
  The `ld` at 0x21a08f4 loads 8 bytes from a0 (arg0 at entry) +0x8.
  The `ld` at 0x21a0924 loads 8 bytes from [a0+8]:8 +0x8.
  The `ld` at 0x21a0930 loads 8 bytes from sym(_XLockMutex_fn) +0x0.
  3 such `ld` accesses load 8 bytes from sym(_Xglobal_lock) +0x0, including `ld` at 0x21a0940, `ld` at 0x21a097c, `ld` at 0x21a09b4.
  The `ld` at 0x21a0944 loads 8 bytes from a0 (arg0 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x21a0958, `ld` at 0x21a0964.
  2 such `ld` accesses load 8 bytes from sym(_XUnlockMutex_fn) +0x0, including `ld` at 0x21a096c, `ld` at 0x21a09a4.
  The `sd` at 0x21a09a0 stores 8 bytes to a0 (arg0 at entry) +0x8.
  The `jalr` at 0x21a093c calls (unknown callee) with a0=[sym(_Xglobal_lock)]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a0978 calls (unknown callee) with a0=[sym(_Xglobal_lock)]:8, a1=sym(_Xglobal_lock), a2=?, a3=?.
  The `jalr` at 0x21a09b0 calls (unknown callee) with a0=[sym(_Xglobal_lock)]:8, a1=sym(_Xglobal_lock), a2=?, a3=?.
  The `beq` branch at 0x21a091c targets 0x21a092c, is taken when v0(=[a0+8]:8) == 0, and falls through when v0(=[a0+8]:8) != 0.
  The `beq` branch at 0x21a0928 targets 0x21a09d8, is taken when v1(=[[a0+8]:8+8]:8) == a1, and falls through when v1(=[[a0+8]:8+8]:8) != a1.
  The `beq` branch at 0x21a0934 targets 0x21a0944, is taken when t9(=[sym(_XLockMutex_fn)]:8) == 0, and falls through when t9(=[sym(_XLockMutex_fn)]:8) != 0.
  The `beq` branch at 0x21a0950 targets 0x21a096c, is taken when s0(=[a0]:8) == 0, and falls through when s0(=[a0]:8) != 0.
  The `beq` branch at 0x21a095c targets 0x21a09a0, is taken when a2(?) == s1(=a1), and falls through when a2(?) != s1(=a1).
  The `bne` branch at 0x21a0968 targets 0x21a0958, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0x21a0970 targets 0x21a0984, is taken when t9(=[sym(_XUnlockMutex_fn)]:8) == 0, and falls through when t9(=[sym(_XUnlockMutex_fn)]:8) != 0.
  The `beq` branch at 0x21a09a8 targets 0x21a09bc, is taken when t9(=[sym(_XUnlockMutex_fn)]:8) == 0, and falls through when t9(=[sym(_XUnlockMutex_fn)]:8) != 0.
  The return at 0x21a0998 has v0 = 0x0.
  The return at 0x21a09d0 has v0 = ?.
  The return at 0x21a09ec has v0 = [a0+8]:8.

- `_default_exterror` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a0a00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a0a00-0x21a0a5c (92 bytes).
  It occupies 92 bytes.
  The `ld` at 0x21a0a3c loads 8 bytes from a0 (arg0 at entry) +0xd8.
  The `jalr` at 0x21a0a40 calls fprintf with a0=sym(__iob)+64, a1=0x21b56d0, a2=a1 at entry (arg1), a3=a2 at entry (arg2), a4=[a0+216]:8, a5=0x56d0, a6=0x40, a7=0x242b8.
  The return at 0x21a0a54 has v0 = 0x0.

- `XSetExtensionErrorHandler` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a0a60 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a0a60-0x21a0a94 (52 bytes).
  It occupies 52 bytes.
  The `ld` at 0x21a0a6c loads 8 bytes from abs 0x21bfb58.
  The `ld` at 0x21a0a70 loads 8 bytes from abs 0x21bccf0.
  The `ld` at 0x21a0a7c loads 8 bytes from sym(_XExtensionErrorFunction) +0x0.
  2 such `sd` accesses store 8 bytes to sym(_XExtensionErrorFunction) +0x0, including `sd` at 0x21a0a84, `sd` at 0x21a0a90.
  The `beq` branch at 0x21a0a78 targets 0x21a0a88, is taken when a0 == 0, and falls through when a0 != 0.
  The return at 0x21a0a80 has v0 = [sym(_XExtensionErrorFunction)]:8.
  The return at 0x21a0a8c has v0 = [sym(_XExtensionErrorFunction)]:8.

- `XMissingExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a0aa0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a0aa0-0x21a0b04 (100 bytes).
  It occupies 100 bytes.
  The `ld` at 0x21a0ab8 loads 8 bytes from sym(_XExtensionErrorFunction) +0x0.
  The `jalr` at 0x21a0ad0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=0x21bfc80, a3=[sym(_XExtensionErrorFunction)]:8, a4=0x24218.
  The `beq` branch at 0x21a0abc targets 0x21a0ae8, is taken when a3(=[sym(_XExtensionErrorFunction)]:8) == 0, and falls through when a3(=[sym(_XExtensionErrorFunction)]:8) != 0.
  The `beq` branch at 0x21a0ac4 targets 0x21a0af8, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x21a0af0 targets 0x21a0ac4 and is always taken.
  The `beq` branch at 0x21a0afc targets 0x21a0acc and is always taken.
  The return at 0x21a0ae0 has v0 = ret(?).

- `error_string` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a0c20 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a0c20-0x21a0cd8 (184 bytes).
  It occupies 184 bytes.
  The `lw` at 0x21a0c28 loads 4 bytes from a2 (arg2 at entry) +0xc.
  The `ld` at 0x21a0cbc loads 8 bytes from table(0x21bfd30) +0x0.
  The `jalr` at 0x21a0c80 calls sprintf with a0=sp-304, a1=0x21bfc88, a2=[0x21bfd28]:8, a3=?.
  The `jalr` at 0x21a0cb8 calls XGetErrorDatabaseText with a0=a0 at entry (arg0), a1=0x21b5720, a2=sp-304, a3=entry(0x21bfd30), a4=a3 at entry (arg3), a5=a4 at entry (arg4), a6=0x5720.
  The `bltz` branch at 0x21a0c3c targets 0x21a0c54, is taken when s0(?) < 0 (signed), and falls through when s0(?) >= 0 (signed).
  The `blez` branch at 0x21a0c4c targets 0x21a0c68, is taken when s0(?) <= 0 (signed), and falls through when s0(?) > 0 (signed).
  The return at 0x21a0c60 has v0 = 0x0.
  The return at 0x21a0cd0 has v0 = a3.

- `wire_to_event` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a0ce0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a0ce0-0x21a0e40 (352 bytes).
  It occupies 352 bytes.
  The `ld` at 0x21a0d24 loads 8 bytes from ret(0x21a0b40) +0x10.
  3 such `lbu` accesses load 1 byte from a2 (arg2 at entry) +0x0, including `lbu` at 0x21a0d30, `lbu` at 0x21a0dc8, `lbu` at 0x21a0e10.
  The `lw` at 0x21a0d34 loads 4 bytes from [ret(0x21a0b40)+16]:8 +0x8.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0x21a0dbc, `sw` at 0x21a0e04.
  2 such `sd` accesses store 8 bytes to a1 (arg1 at entry) +0x8, including `sd` at 0x21a0dc4, `sd` at 0x21a0e0c.
  2 such `sd` accesses store 8 bytes to a1 (arg1 at entry) +0x18, including `sd` at 0x21a0dd0, `sd` at 0x21a0e18.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x10, including `sw` at 0x21a0ddc, `sw` at 0x21a0e24.
  2 such `lwu` accesses load 4 bytes from a2 (arg2 at entry) +0x4, including `lwu` at 0x21a0de0, `lwu` at 0x21a0e28.
  2 such `sd` accesses store 8 bytes to a1 (arg1 at entry) +0x20, including `sd` at 0x21a0dec, `sd` at 0x21a0e2c.
  The `lbu` at 0x21a0e30 loads 1 byte from a2 (arg2 at entry) +0x8.
  The `sw` at 0x21a0e3c stores 4 bytes to a1 (arg1 at entry) +0x28.
  The `bgezall` at 0x21a0d10 calls (unnamed) [0x21a0b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a0d88 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd28]:8, a2=0x1, a3=?.
  The `jalr` at 0x21a0db8 calls _XSetLastRequestRead with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=0x1, a3=?, a5=[ret(0x21a0b40)+16]:8, a7=a1 at entry (arg1).
  The `jalr` at 0x21a0e00 calls _XSetLastRequestRead with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=0x1, a3=?, a5=[ret(0x21a0b40)+16]:8.
  The `beq` branch at 0x21a0d1c targets 0x21a0d80, is taken when v0(=ret(0x21a0b40)) == 0, and falls through when v0(=ret(0x21a0b40)) != 0.
  The `beq` branch at 0x21a0d28 targets 0x21a0d84, is taken when a5(=[ret(0x21a0b40)+16]:8) == 0, and falls through when a5(=[ret(0x21a0b40)+16]:8) != 0.
  The `beq` branch at 0x21a0d40 targets 0x21a0df0, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x21a0d48 targets 0x21a0da8, is taken when v0(?) == a2(=0x1), and falls through when v0(?) != a2(=0x1).
  The `beq` branch at 0x21a0de8 targets 0x21a0d60 and is always taken.
  The `beq` branch at 0x21a0e38 targets 0x21a0d60 and is always taken.
  The return at 0x21a0d58 has v0 = 0x0.
  The return at 0x21a0d70 has v0 = 0x1.
  The return at 0x21a0da0 has v0 = 0x0.
  The instructions from 0x21a0d78 to 0x21a0d7c are not reached by any path from the entry, and their branches are not listed.

- `event_to_wire` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a0e40 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a0e40-0x21a0f44 (260 bytes).
  It occupies 260 bytes.
  The `ld` at 0x21a0e84 loads 8 bytes from ret(0x21a0b40) +0x10.
  The `lw` at 0x21a0e90 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x21a0e94 loads 4 bytes from [ret(0x21a0b40)+16]:8 +0x8.
  2 such `sb` accesses store 1 byte to a2 (arg2 at entry) +0x0, including `sb` at 0x21a0ee0, `sb` at 0x21a0f20.
  2 such `ld` accesses load 8 bytes from a1 (arg1 at entry) +0x8, including `ld` at 0x21a0ee4, `ld` at 0x21a0f24.
  2 such `sh` accesses store 2 bytes to a2 (arg2 at entry) +0x2, including `sh` at 0x21a0ee8, `sh` at 0x21a0f28.
  2 such `ld` accesses load 8 bytes from a1 (arg1 at entry) +0x20, including `ld` at 0x21a0eec, `ld` at 0x21a0f2c.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x4, including `sw` at 0x21a0ef8, `sw` at 0x21a0f30.
  The `lw` at 0x21a0f34 loads 4 bytes from a1 (arg1 at entry) +0x28.
  The `sb` at 0x21a0f40 stores 1 byte to a2 (arg2 at entry) +0x8.
  The `bgezall` at 0x21a0e70 calls (unnamed) [0x21a0b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a0f0c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd28]:8, a2=?, a3=?.
  The `beq` branch at 0x21a0e7c targets 0x21a0f04, is taken when v0(=ret(0x21a0b40)) == 0, and falls through when v0(=ret(0x21a0b40)) != 0.
  The `beq` branch at 0x21a0e88 targets 0x21a0f08, is taken when a5(=[ret(0x21a0b40)+16]:8) == 0, and falls through when a5(=[ret(0x21a0b40)+16]:8) != 0.
  The `beq` branch at 0x21a0ea0 targets 0x21a0f1c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x21a0ea8 targets 0x21a0ed4, is taken when v0(?) == a1(=0x1), and falls through when v0(?) != a1(=0x1).
  The `beq` branch at 0x21a0f14 targets 0x21a0ec0 and is always taken.
  The `beq` branch at 0x21a0f3c targets 0x21a0ec0 and is always taken.
  The return at 0x21a0eb4 has v0 = 0x0.
  The return at 0x21a0ecc has v0 = one of 0x0, 0x1.
  The return at 0x21a0efc has v0 = 0x1.
  The instructions from 0x21a0ebc to 0x21a0ebc are not reached by any path from the entry, and their branches are not listed.

- `read_buffer_info` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a0f50 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a0f50-0x21a10e0 (400 bytes).
  It occupies 400 bytes.
  The `lbu` at 0x21a105c loads 1 byte from ?.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0x21a1060, `sw` at 0x21a1068, `sw` at 0x21a108c.
  The `lhu` at 0x21a1064 loads 2 bytes from ?.
  The `lwu` at 0x21a1074 loads 4 bytes from ?.
  2 such `sd` accesses store 8 bytes to ?, including `sd` at 0x21a1078, `sd` at 0x21a10a4.
  The `lbu` at 0x21a1088 loads 1 byte from table(0xe) +0x0.
  The `lhu` at 0x21a1090 loads 2 bytes from table(0xc) +0x0.
  The `lwu` at 0x21a10a0 loads 4 bytes from table(0x8) +0x0.
  The `jalr` at 0x21a0f80 calls malloc with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a0fac calls _XRead with a0=a0 at entry (arg0), a1=sp-304, a2=?, a3=?.
  The `jalr` at 0x21a100c calls _XRead with a0=a0 at entry (arg0), a1=ret(malloc), a2=(a1 << 0x3), a3=?.
  The `jalr` at 0x21a102c calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21a10b4 calls free with a0=?, a1=?, a2=?, a3=?, a7=(a1 << 0x3).
  The `beq` branch at 0x21a0f6c targets 0x21a10cc, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0x21a0f8c targets 0x21a1000, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `blez` branch at 0x21a0f94 targets 0x21a0fd8, is taken when s1(=a1) <= 0 (signed), and falls through when s1(=a1) > 0 (signed).
  The `beq` branch at 0x21a0f9c targets 0x21a10d8 and is always taken.
  The `blez` branch at 0x21a0fb8 targets 0x21a0fd4, is taken when s0(?) <= 0 (signed), and falls through when s0(?) > 0 (signed).
  The `bne` branch at 0x21a0fc4 targets 0x21a0fa4, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x21a0fcc targets 0x21a0fa4 and is always taken.
  The `beq` branch at 0x21a101c targets 0x21a1028, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x21a103c targets 0x21a10b0, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `blez` branch at 0x21a1044 targets 0x21a10b4, is taken when s1(=a1) <= 0 (signed), and falls through when s1(=a1) > 0 (signed).
  The `beq` branch at 0x21a107c targets 0x21a10b0, is taken when a3(=table(0x8)) == at(?), and falls through when a3(=table(0x8)) != at(?).
  The `bne` branch at 0x21a10a8 targets 0x21a1058, is taken when a2(=table(0x10)) != at(?), and falls through when a2(=table(0x10)) == at(?).
  The `beq` branch at 0x21a10c4 targets 0x21a0ff0 and is always taken.
  The `beq` branch at 0x21a10d0 targets 0x21a0f7c and is always taken.
  The `beq` branch at 0x21a10d8 targets 0x21a0fc4 and is always taken.
  The return at 0x21a0fe8 has v0 = 0x0.
  The return at 0x21a0ff4 has v0 = ret(malloc).
  The instructions from 0x21a0ffc to 0x21a0ffc are not reached by any path from the entry, and their branches are not listed.

- `XmbufQueryExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a10e0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a10e0-0x21a1168 (136 bytes).
  It occupies 136 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a0b40) +0x10, including `ld` at 0x21a111c, `ld` at 0x21a113c.
  The `lw` at 0x21a1134 loads 4 bytes from [ret(0x21a0b40)+16]:8 +0x8.
  The `sw` at 0x21a1138 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0x21a1148 loads 4 bytes from [ret(0x21a0b40)+16]:8 +0xc.
  The `sw` at 0x21a114c stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0x21a1108 calls (unnamed) [0x21a0b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x21a1114 targets 0x21a1158, is taken when v0(=ret(0x21a0b40)) == 0, and falls through when v0(=ret(0x21a0b40)) != 0.
  The `beq` branch at 0x21a1120 targets 0x21a1158, is taken when a5(=[ret(0x21a0b40)+16]:8) == 0, and falls through when a5(=[ret(0x21a0b40)+16]:8) != 0.
  The return at 0x21a1150 has v0 = 0x1.
  The return at 0x21a1160 has v0 = 0x0.

- `XmbufGetVersion` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a1170 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a1170-0x21a1334 (452 bytes).
  It occupies 452 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a0b40) +0x10, including `ld` at 0x21a11b4, `ld` at 0x21a1220.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a11c0, `ld` at 0x21a1264, `ld` at 0x21a12c0.
  The `ld` at 0x21a11cc loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a11d8, `ld` at 0x21a1204, `ld` at 0x21a12b8.
  The `ld` at 0x21a11dc loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a11f4 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a11f8, `sb` at 0x21a1244.
  The `sh` at 0x21a1200 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a120c loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a1214 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a121c stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a122c loads 4 bytes from [ret(0x21a0b40)+16]:8 +0x4.
  The `sb` at 0x21a1238 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a1258 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x21a1260 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a1270, `ld` at 0x21a12cc.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a127c, `ld` at 0x21a12d8.
  The `bgezall` at 0x21a11a4 calls (unnamed) [0x21a0b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a11d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1240 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0x21a0b40)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+4.
  The `jalr` at 0x21a1274 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1288 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a12ac calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x21a12d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a12e4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1314 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd28]:8, a2=?, a3=?.
  The `beq` branch at 0x21a11ac targets 0x21a1308, is taken when v0(=ret(0x21a0b40)) == 0, and falls through when v0(=ret(0x21a0b40)) != 0.
  The `beq` branch at 0x21a11b8 targets 0x21a130c, is taken when v1(=[ret(0x21a0b40)+16]:8) == 0, and falls through when v1(=[ret(0x21a0b40)+16]:8) != 0.
  The `beq` branch at 0x21a11c4 targets 0x21a11d8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a11ec targets 0x21a12ac, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21a1248 targets 0x21a12c0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a1268 targets 0x21a127c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a1280 targets 0x21a1294, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a12b4 targets 0x21a11f4 and is always taken.
  The `beq` branch at 0x21a12c4 targets 0x21a12d8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a12dc targets 0x21a12f0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21a12a4 has v0 = 0x1.
  The return at 0x21a1300 has v0 = 0x0.
  The return at 0x21a132c has v0 = 0x0.
  The instructions from 0x21a12bc to 0x21a12bc are not reached by any path from the entry, and their branches are not listed.

- `XmbufCreateBuffers` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a1340 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a1340-0x21a1548 (520 bytes).
  It occupies 520 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a0b40) +0x10, including `ld` at 0x21a1398, `ld` at 0x21a142c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a13a4, `ld` at 0x21a1484.
  The `ld` at 0x21a13b0 loads 8 bytes from [a0+2408]:8 +0x0.
  The `ld` at 0x21a13bc loads 8 bytes from a0 (arg0 at entry) +0x970.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a13d0, `ld` at 0x21a1404, `ld` at 0x21a14e0.
  The `ld` at 0x21a13d4 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a13ec stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a13f4, `sb` at 0x21a1460.
  2 such `sh` accesses store 2 bytes to [a0+176]:8 +0x2, including `sh` at 0x21a13fc, `sh` at 0x21a1454.
  The `ld` at 0x21a1400 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a141c stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a1428 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lhu` at 0x21a1430 loads 2 bytes from [a0+176]:8 +0x2.
  The `lw` at 0x21a1434 loads 4 bytes from [ret(0x21a0b40)+16]:8 +0x4.
  The `sb` at 0x21a1438 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a143c stores 4 bytes to [a0+176]:8 +0x4.
  The `sb` at 0x21a1440 stores 1 byte to [a0+176]:8 +0x8.
  The `sb` at 0x21a1448 stores 1 byte to [a0+176]:8 +0x9.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a1490, `ld` at 0x21a14ec.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a149c, `ld` at 0x21a14f8.
  The `bgezall` at 0x21a1388 calls (unnamed) [0x21a0b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a13b4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a13c8 calls (unknown callee) with a0=a0 at entry (arg0), a1=a5 at entry (arg5), a2=a2 at entry (arg2), a3=?.
  The `jalr` at 0x21a145c calls _XData32 with a0=a0 at entry (arg0), a1=a5 at entry (arg5), a2=(a2 << 0x2), a3=[[ret(0x21a0b40)+16]:8+4], a4=(a2 + [[a0+176]:8+2]:2), a5=a4 at entry (arg4), a6=a3 at entry (arg3), a7=a1 at entry (arg1).
  The `jalr` at 0x21a1478 calls _XReply with a0=a0 at entry (arg0), a1=sp-112, a2=0x0, a3=0x1.
  The `jalr` at 0x21a1494 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a14a8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a14d4 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+12, a2=?, a3=?.
  The `jalr` at 0x21a14f0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1504 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1538 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd28]:8, a2=?, a3=?.
  The `beq` branch at 0x21a1390 targets 0x21a152c, is taken when v0(=ret(0x21a0b40)) == 0, and falls through when v0(=ret(0x21a0b40)) != 0.
  The `beq` branch at 0x21a139c targets 0x21a1530, is taken when v1(=[ret(0x21a0b40)+16]:8) == 0, and falls through when v1(=[ret(0x21a0b40)+16]:8) != 0.
  The `beq` branch at 0x21a13a8 targets 0x21a13bc, is taken when t0(=[a0+2408]:8) == 0, and falls through when t0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a13e4 targets 0x21a14d0, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+12) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x21a1480 targets 0x21a14e4, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a1488 targets 0x21a149c, is taken when t0(=[a0+2408]:8) == 0, and falls through when t0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a14a0 targets 0x21a14b4, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a14dc targets 0x21a13e8 and is always taken.
  The `beq` branch at 0x21a14e4 targets 0x21a14f8, is taken when t0(=[a0+2408]:8) == 0, and falls through when t0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a14fc targets 0x21a1510, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a1540 targets 0x21a14b4 and is always taken.
  The return at 0x21a14c8 has v0 = one of ?, 0x0.
  The return at 0x21a1524 has v0 = 0x0.

- `XmbufDestroyBuffers` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a1550 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a1550-0x21a1684 (308 bytes).
  It occupies 308 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a0b40) +0x10, including `ld` at 0x21a1590, `ld` at 0x21a1600.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a159c, `ld` at 0x21a1618.
  The `ld` at 0x21a15a8 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a15b4, `ld` at 0x21a15e0, `ld` at 0x21a1668.
  The `ld` at 0x21a15b8 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a15d0 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a15d8, `sb` at 0x21a1614.
  The `sh` at 0x21a15dc stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a15e8 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a15f4 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a15fc stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a1608 loads 4 bytes from [ret(0x21a0b40)+16]:8 +0x4.
  The `sb` at 0x21a160c stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a1610 stores 4 bytes to [a0+176]:8 +0x4.
  The `ld` at 0x21a1624 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a1630 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a1580 calls (unnamed) [0x21a0b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a15ac calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1628 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a1 at entry (arg1), a3=0x2, a4=[[ret(0x21a0b40)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+8.
  The `jalr` at 0x21a163c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a165c calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a1674 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd28]:8, a2=?, a3=?.
  The `beq` branch at 0x21a1588 targets 0x21a166c, is taken when v0(=ret(0x21a0b40)) == 0, and falls through when v0(=ret(0x21a0b40)) != 0.
  The `beq` branch at 0x21a1594 targets 0x21a1670, is taken when v0(=[ret(0x21a0b40)+16]:8) == 0, and falls through when v0(=[ret(0x21a0b40)+16]:8) != 0.
  The `beq` branch at 0x21a15a0 targets 0x21a15b4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a15c8 targets 0x21a165c, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a161c targets 0x21a1630, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a1634 targets 0x21a1648, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a1664 targets 0x21a15d0 and is always taken.
  The `beq` branch at 0x21a167c targets 0x21a1648 and is always taken.
  The return at 0x21a1654 has v0 = one of ?, ret(?), ret(XMissingExtension).

- `XmbufDisplayBuffers` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a1690 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a1690-0x21a1800 (368 bytes).
  It occupies 368 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a0b40) +0x10, including `ld` at 0x21a16dc, `ld` at 0x21a1760.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a16e8, `ld` at 0x21a1790.
  The `ld` at 0x21a16f4 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a1700, `ld` at 0x21a1730, `ld` at 0x21a17e0.
  The `ld` at 0x21a1704 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a171c stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a1724, `sb` at 0x21a178c.
  2 such `sh` accesses store 2 bytes to [a0+176]:8 +0x2, including `sh` at 0x21a172c, `sh` at 0x21a1780.
  The `sd` at 0x21a1740 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `ld` at 0x21a1748 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a1758 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lhu` at 0x21a175c loads 2 bytes from [a0+176]:8 +0x2.
  The `lw` at 0x21a1768 loads 4 bytes from [ret(0x21a0b40)+16]:8 +0x4.
  The `sb` at 0x21a176c stores 1 byte to [a0+176]:8 +0x1.
  The `sh` at 0x21a1770 stores 2 bytes to [a0+176]:8 +0x4.
  The `sh` at 0x21a1774 stores 2 bytes to [a0+176]:8 +0x6.
  The `ld` at 0x21a179c loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a17a8 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a16cc calls (unnamed) [0x21a0b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a16f8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1788 calls _XData32 with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=(a1 << 0x2), a3=[[ret(0x21a0b40)+16]:8+4], a4=(a1 + [[a0+176]:8+2]:2), a5=[[a0+176]:8+2]:2, a6=a4 at entry (arg4), a7=a3 at entry (arg3).
  The `jalr` at 0x21a17a0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a17b4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a17d4 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a17f0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd28]:8, a2=?, a3=?.
  The `beq` branch at 0x21a16d4 targets 0x21a17e4, is taken when v0(=ret(0x21a0b40)) == 0, and falls through when v0(=ret(0x21a0b40)) != 0.
  The `beq` branch at 0x21a16e0 targets 0x21a17e8, is taken when v0(=[ret(0x21a0b40)+16]:8) == 0, and falls through when v0(=[ret(0x21a0b40)+16]:8) != 0.
  The `beq` branch at 0x21a16ec targets 0x21a1700, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a1714 targets 0x21a17d0, is taken when v1(=[a0+184]:8) < a0(=[a0+176]:8+8) (unsigned), and falls through when v1(=[a0+184]:8) >= a0(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a1794 targets 0x21a17a8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a17ac targets 0x21a17c0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a17dc targets 0x21a1718 and is always taken.
  The `beq` branch at 0x21a17f8 targets 0x21a17c0 and is always taken.
  The return at 0x21a17c8 has v0 = one of ?, ret(?), ret(XMissingExtension).

- `XmbufGetWindowAttributes` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a1800 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a1800-0x21a1a84 (644 bytes).
  It occupies 644 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a0b40) +0x10, including `ld` at 0x21a1848, `ld` at 0x21a18bc.
  4 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a1854, `ld` at 0x21a1944, `ld` at 0x21a19bc.
  The `ld` at 0x21a1860 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a186c, `ld` at 0x21a189c, `ld` at 0x21a1a14.
  The `ld` at 0x21a1870 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a1888 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a1890, `sb` at 0x21a18e4.
  The `sh` at 0x21a1898 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a18a4 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a18b0 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a18b8 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a18c4 loads 4 bytes from [ret(0x21a0b40)+16]:8 +0x4.
  The `sb` at 0x21a18cc stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a18d8 stores 4 bytes to [a0+176]:8 +0x4.
  2 such `sd` accesses store 8 bytes to a2 (arg2 at entry) +0x18, including `sd` at 0x21a18f0, `sd` at 0x21a1924.
  The `sw` at 0x21a18fc stores 4 bytes to a2 (arg2 at entry) +0x10.
  3 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a1950, `ld` at 0x21a19c8, `ld` at 0x21a1a24.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a195c, `ld` at 0x21a19d4, `ld` at 0x21a1a30.
  The `sw` at 0x21a19a0 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0x21a19a8 stores 4 bytes to a2 (arg2 at entry) +0x4.
  The `sw` at 0x21a19b0 stores 4 bytes to a2 (arg2 at entry) +0x8.
  The `sw` at 0x21a19b8 stores 4 bytes to a2 (arg2 at entry) +0xc.
  The `bgezall` at 0x21a1838 calls (unnamed) [0x21a0b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a1864 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a18e0 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(0x21a0b40)+16]:8+4], a5=a1 at entry (arg1), a6=0x5, a7=0x1.
  The `jalr` at 0x21a191c calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21a193c calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1954 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1968 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1994 calls _XRead32 with a0=a0 at entry (arg0), a1=ret(malloc), a2=?, a3=?.
  The `jalr` at 0x21a19cc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a19e0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1a08 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a1a28 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1a3c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1a6c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd28]:8, a2=?, a3=?.
  The `beq` branch at 0x21a1840 targets 0x21a1a60, is taken when v0(=ret(0x21a0b40)) == 0, and falls through when v0(=ret(0x21a0b40)) != 0.
  The `beq` branch at 0x21a184c targets 0x21a1a64, is taken when v1(=[ret(0x21a0b40)+16]:8) == 0, and falls through when v1(=[ret(0x21a0b40)+16]:8) != 0.
  The `beq` branch at 0x21a1858 targets 0x21a186c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a1880 targets 0x21a1a04, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a18e8 targets 0x21a1a18, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a18f8 targets 0x21a199c, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0x21a190c targets 0x21a1a7c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x21a192c targets 0x21a198c, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x21a1948 targets 0x21a195c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a1960 targets 0x21a1974, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a19c0 targets 0x21a19d4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a19d8 targets 0x21a19ec, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a1a10 targets 0x21a1884 and is always taken.
  The `beq` branch at 0x21a1a1c targets 0x21a1a30, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a1a34 targets 0x21a1a48, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a1a74 targets 0x21a19ec and is always taken.
  The `beq` branch at 0x21a1a7c targets 0x21a1914 and is always taken.
  The return at 0x21a1984 has v0 = 0x0.
  The return at 0x21a19fc has v0 = one of 0x0, 0x1.
  The return at 0x21a1a58 has v0 = 0x0.

- `XmbufChangeWindowAttributes` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a1a90 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a1a90-0x21a1c3c (428 bytes).
  It occupies 428 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a0b40) +0x10, including `ld` at 0x21a1ad8, `ld` at 0x21a1b50.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a1ae4, `ld` at 0x21a1bc0.
  The `ld` at 0x21a1af0 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a1afc, `ld` at 0x21a1b30, `ld` at 0x21a1c14.
  The `ld` at 0x21a1b00 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a1b1c stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a1b24, `sb` at 0x21a1b80.
  2 such `sh` accesses store 2 bytes to [a0+176]:8 +0x2, including `sh` at 0x21a1b2c, `sh` at 0x21a1bbc.
  The `ld` at 0x21a1b38 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a1b44 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a1b4c stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a1b58 loads 4 bytes from [ret(0x21a0b40)+16]:8 +0x4.
  The `sw` at 0x21a1b5c stores 4 bytes to [a0+176]:8 +0x4.
  The `sb` at 0x21a1b68 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a1b74 stores 4 bytes to [a0+176]:8 +0x8.
  The `lw` at 0x21a1b8c loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `lhu` at 0x21a1ba4 loads 2 bytes from [a0+176]:8 +0x2.
  The `ld` at 0x21a1bcc loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a1bd8 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a1ac8 calls (unnamed) [0x21a0b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a1af4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1bb8 calls _XData32 with a0=a0 at entry (arg0), a1=sp-64, a2=?, a3=0x4, a4=a1 at entry (arg1), a5=[a0+176]:8+12, a6=(sp + one of -0x40, -0x38), a7=sp-64.
  The `jalr` at 0x21a1bd0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1be4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1c08 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1c2c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd28]:8, a2=?, a3=?.
  The `beq` branch at 0x21a1ad0 targets 0x21a1c24, is taken when v0(=ret(0x21a0b40)) == 0, and falls through when v0(=ret(0x21a0b40)) != 0.
  The `beq` branch at 0x21a1adc targets 0x21a1c28, is taken when v0(=[ret(0x21a0b40)+16]:8) == 0, and falls through when v0(=[ret(0x21a0b40)+16]:8) != 0.
  The `beq` branch at 0x21a1ae8 targets 0x21a1afc, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a1b10 targets 0x21a1c08, is taken when v1(=[a0+184]:8) < a0(=[a0+176]:8+12) (unsigned), and falls through when v1(=[a0+184]:8) >= a0(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x21a1b7c targets 0x21a1bc0, is taken when a2(=(a2 << 0x0)) == 0, and falls through when a2(=(a2 << 0x0)) != 0.
  The `beq` branch at 0x21a1b84 targets 0x21a1c18, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x21a1bc4 targets 0x21a1bd8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a1bdc targets 0x21a1bf0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a1c10 targets 0x21a1b18 and is always taken.
  The `beq` branch at 0x21a1c1c targets 0x21a1b94 and is always taken.
  The `beq` branch at 0x21a1c34 targets 0x21a1bf0 and is always taken.
  The return at 0x21a1c00 has v0 = one of ?, ret(?), ret(XMissingExtension).

- `XmbufGetBufferAttributes` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a1c40 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a1c40-0x21a1e20 (480 bytes).
  It occupies 480 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a0b40) +0x10, including `ld` at 0x21a1c84, `ld` at 0x21a1cf8.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a1c90, `ld` at 0x21a1d4c, `ld` at 0x21a1da8.
  The `ld` at 0x21a1c9c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a1ca8, `ld` at 0x21a1cd8, `ld` at 0x21a1da4.
  The `ld` at 0x21a1cac loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a1cc4 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a1ccc, `sb` at 0x21a1d20.
  The `sh` at 0x21a1cd4 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a1ce0 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a1cec stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a1cf4 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a1d00 loads 4 bytes from [ret(0x21a0b40)+16]:8 +0x4.
  The `sb` at 0x21a1d08 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a1d14 stores 4 bytes to [a0+176]:8 +0x4.
  The `sd` at 0x21a1d30 stores 8 bytes to a2 (arg2 at entry) +0x0.
  The `sd` at 0x21a1d38 stores 8 bytes to a2 (arg2 at entry) +0x8.
  The `sw` at 0x21a1d40 stores 4 bytes to a2 (arg2 at entry) +0x10.
  The `sw` at 0x21a1d48 stores 4 bytes to a2 (arg2 at entry) +0x14.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a1d58, `ld` at 0x21a1db4.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a1d64, `ld` at 0x21a1dc0.
  The `bgezall` at 0x21a1c74 calls (unnamed) [0x21a0b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a1ca0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1d1c calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0x21a0b40)+16]:8+4], a5=a1 at entry (arg1), a6=0x7, a7=0x1.
  The `jalr` at 0x21a1d5c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1d70 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1d98 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a1db8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1dcc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1e00 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd28]:8, a2=?, a3=?.
  The `beq` branch at 0x21a1c7c targets 0x21a1df0, is taken when v0(=ret(0x21a0b40)) == 0, and falls through when v0(=ret(0x21a0b40)) != 0.
  The `beq` branch at 0x21a1c88 targets 0x21a1df4, is taken when v1(=[ret(0x21a0b40)+16]:8) == 0, and falls through when v1(=[ret(0x21a0b40)+16]:8) != 0.
  The `beq` branch at 0x21a1c94 targets 0x21a1ca8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a1cbc targets 0x21a1d94, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a1d24 targets 0x21a1da8, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a1d50 targets 0x21a1d64, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a1d68 targets 0x21a1d7c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a1da0 targets 0x21a1cc0 and is always taken.
  The `beq` branch at 0x21a1dac targets 0x21a1dc0, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a1dc4 targets 0x21a1dd8, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21a1d8c has v0 = 0x1.
  The return at 0x21a1de8 has v0 = 0x0.
  The return at 0x21a1e18 has v0 = 0x0.

- `XmbufChangeBufferAttributes` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a1e20 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a1e20-0x21a1fc8 (424 bytes).
  It occupies 424 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a0b40) +0x10, including `ld` at 0x21a1e68, `ld` at 0x21a1ee0.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a1e74, `ld` at 0x21a1f50.
  The `ld` at 0x21a1e80 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a1e8c, `ld` at 0x21a1ec0, `ld` at 0x21a1fa0.
  The `ld` at 0x21a1e90 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a1eac stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a1eb4, `sb` at 0x21a1f10.
  2 such `sh` accesses store 2 bytes to [a0+176]:8 +0x2, including `sh` at 0x21a1ebc, `sh` at 0x21a1f4c.
  The `ld` at 0x21a1ec8 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a1ed4 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a1edc stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a1ee8 loads 4 bytes from [ret(0x21a0b40)+16]:8 +0x4.
  The `sw` at 0x21a1eec stores 4 bytes to [a0+176]:8 +0x4.
  The `sb` at 0x21a1ef8 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a1f04 stores 4 bytes to [a0+176]:8 +0x8.
  The `ld` at 0x21a1f1c loads 8 bytes from a3 (arg3 at entry) +0x0.
  The `lhu` at 0x21a1f34 loads 2 bytes from [a0+176]:8 +0x2.
  The `ld` at 0x21a1f5c loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a1f68 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a1e58 calls (unnamed) [0x21a0b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a1e84 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1f48 calls _XData32 with a0=a0 at entry (arg0), a1=sp-64, a2=?, a3=0x6, a4=a1 at entry (arg1), a5=[a0+176]:8+12, a6=(sp + one of -0x40, -0x38), a7=sp-64.
  The `jalr` at 0x21a1f60 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1f74 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1f94 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a1fb8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd28]:8, a2=?, a3=?.
  The `beq` branch at 0x21a1e60 targets 0x21a1fb0, is taken when v0(=ret(0x21a0b40)) == 0, and falls through when v0(=ret(0x21a0b40)) != 0.
  The `beq` branch at 0x21a1e6c targets 0x21a1fb4, is taken when v0(=[ret(0x21a0b40)+16]:8) == 0, and falls through when v0(=[ret(0x21a0b40)+16]:8) != 0.
  The `beq` branch at 0x21a1e78 targets 0x21a1e8c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a1ea0 targets 0x21a1f94, is taken when v1(=[a0+184]:8) < a0(=[a0+176]:8+12) (unsigned), and falls through when v1(=[a0+184]:8) >= a0(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x21a1f0c targets 0x21a1f50, is taken when a2(=(a2 << 0x0)) == 0, and falls through when a2(=(a2 << 0x0)) != 0.
  The `beq` branch at 0x21a1f14 targets 0x21a1fa4, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x21a1f54 targets 0x21a1f68, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a1f6c targets 0x21a1f80, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a1f9c targets 0x21a1ea8 and is always taken.
  The `beq` branch at 0x21a1fa8 targets 0x21a1f24 and is always taken.
  The `beq` branch at 0x21a1fc0 targets 0x21a1f80 and is always taken.
  The return at 0x21a1f8c has v0 = one of ?, ret(?), ret(XMissingExtension).

- `XmbufGetScreenInfo` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a1fd0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a1fd0-0x21a229c (716 bytes).
  It occupies 716 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a0b40) +0x10, including `ld` at 0x21a2028, `ld` at 0x21a20a0.
  4 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a2034, `ld` at 0x21a2130, `ld` at 0x21a21d0.
  The `ld` at 0x21a2040 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a204c, `ld` at 0x21a2088, `ld` at 0x21a222c.
  The `ld` at 0x21a2050 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a206c stores 8 bytes to a0 (arg0 at entry) +0xa0.
  The `sh` at 0x21a2074 stores 2 bytes to [a0+176]:8 +0x2.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a207c, `sb` at 0x21a20c8.
  The `ld` at 0x21a2080 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a2094 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a209c stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `lw` at 0x21a20a8 loads 4 bytes from [ret(0x21a0b40)+16]:8 +0x4.
  The `sb` at 0x21a20b0 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a20bc stores 4 bytes to [a0+176]:8 +0x4.
  3 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a213c, `ld` at 0x21a21dc, `ld` at 0x21a223c.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a2148, `ld` at 0x21a21e8, `ld` at 0x21a2248.
  The `sw` at 0x21a21c0 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sd` at 0x21a21c4 stores 8 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0x21a21c8 stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `sd` at 0x21a21cc stores 8 bytes to a5 (arg5 at entry) +0x0.
  The `bgezall` at 0x21a2010 calls (unnamed) [0x21a0b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a2044 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a20c4 calls _XReply with a0=a0 at entry (arg0), a1=sp-128, a2=0x0, a3=0x0, a4=[[ret(0x21a0b40)+16]:8+4], a5=a1 at entry (arg1), a6=0x8, a7=0x1.
  The `bgezall` at 0x21a20f0 calls (unnamed) [0x21a0f50] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a2128 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21a2140 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a2154 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x21a2194 calls (unnamed) [0x21a0f50] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a21e0 calls (unknown callee) with a0=a0 at entry (arg0), a1=a4 at entry (arg4), a2=a3 at entry (arg3), a3=a2 at entry (arg2).
  The `jalr` at 0x21a21f4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a2220 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a2240 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a2254 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a226c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd28]:8, a2=?, a3=?.
  The `jalr` at 0x21a228c calls free with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x21a2020 targets 0x21a2264, is taken when v0(=ret(0x21a0b40)) == 0, and falls through when v0(=ret(0x21a0b40)) != 0.
  The `beq` branch at 0x21a202c targets 0x21a2268, is taken when v1(=[ret(0x21a0b40)+16]:8) == 0, and falls through when v1(=[ret(0x21a0b40)+16]:8) != 0.
  The `beq` branch at 0x21a2038 targets 0x21a204c, is taken when t0(=[a0+2408]:8) == 0, and falls through when t0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a2060 targets 0x21a2220, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a20cc targets 0x21a2230, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `blez` branch at 0x21a20d8 targets 0x21a2174, is taken when s1(?) <= 0 (signed), and falls through when s1(?) > 0 (signed).
  The `bgtz` branch at 0x21a20f8 targets 0x21a2180, is taken when s2(?) > 0 (signed), and falls through when s2(?) <= 0 (signed).
  The `blez` branch at 0x21a2100 targets 0x21a21b0, is taken when s1(?) <= 0 (signed), and falls through when s1(?) > 0 (signed).
  The `bne` branch at 0x21a2108 targets 0x21a21b4, is taken when s3(?) != 0, and falls through when s3(?) == 0.
  The `beq` branch at 0x21a211c targets 0x21a2130, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x21a2134 targets 0x21a2148, is taken when t0(=[a0+2408]:8) == 0, and falls through when t0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a214c targets 0x21a2160, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `blez` branch at 0x21a2178 targets 0x21a2100, is taken when s2(?) <= 0 (signed), and falls through when s2(?) > 0 (signed).
  The `blez` branch at 0x21a219c targets 0x21a21ac, is taken when s1(?) <= 0 (signed), and falls through when s1(?) > 0 (signed).
  The `beq` branch at 0x21a21a4 targets 0x21a2110, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x21a21ac targets 0x21a2280, is taken when v0(=ret(0x21a0f50)) == 0, and falls through when v0(=ret(0x21a0f50)) != 0.
  The `beq` branch at 0x21a21d4 targets 0x21a21e8, is taken when t0(=[a0+2408]:8) == 0, and falls through when t0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a21ec targets 0x21a2200, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a2228 targets 0x21a2068 and is always taken.
  The `beq` branch at 0x21a2234 targets 0x21a2248, is taken when t0(=[a0+2408]:8) == 0, and falls through when t0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a224c targets 0x21a225c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a225c targets 0x21a2200 and is always taken.
  The `beq` branch at 0x21a2274 targets 0x21a2200 and is always taken.
  The `beq` branch at 0x21a2280 targets 0x21a2110, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x21a2294 targets 0x21a2110 and is always taken.
  The return at 0x21a216c has v0 = 0x0.
  The return at 0x21a2218 has v0 = one of 0x0, 0x1.
  The instructions from 0x21a227c to 0x21a227c are not reached by any path from the entry, and their branches are not listed.

- `XmbufCreateStereoWindow` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a22a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a22a0-0x21a26c0 (1056 bytes).
  It occupies 1056 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a0b40) +0x10, including `ld` at 0x21a22f8, `ld` at 0x21a236c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a2304, `ld` at 0x21a261c.
  The `ld` at 0x21a2310 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a231c, `ld` at 0x21a234c, `ld` at 0x21a2678.
  The `ld` at 0x21a2320 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a2338 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a2340, `sb` at 0x21a2378.
  2 such `sh` accesses store 2 bytes to [a0+176]:8 +0x2, including `sh` at 0x21a2348, `sh` at 0x21a2618.
  The `ld` at 0x21a2354 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a2360 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a2368 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a2370 loads 4 bytes from [ret(0x21a0b40)+16]:8 +0x4.
  The `sb` at 0x21a2374 stores 1 byte to [a0+176]:8 +0x1.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x48, including `ld` at 0x21a237c, `ld` at 0x21a239c, `ld` at 0x21a23bc.
  The `sw` at 0x21a2390 stores 4 bytes to [a0+176]:8 +0x8.
  The `sw` at 0x21a2398 stores 4 bytes to [a0+176]:8 +0xc.
  3 such `sd` accesses store 8 bytes to ?, including `sd` at 0x21a23b4, `sd` at 0x21a23e8, `sd` at 0x21a24c8.
  The `sw` at 0x21a23b8 stores 4 bytes to [a0+176]:8 +0x10.
  The `sh` at 0x21a23ec stores 2 bytes to [a0+176]:8 +0x18.
  The `sh` at 0x21a23f0 stores 2 bytes to [a0+176]:8 +0x1c.
  The `sh` at 0x21a23f4 stores 2 bytes to [a0+176]:8 +0x1e.
  The `sh` at 0x21a23f8 stores 2 bytes to [a0+176]:8 +0x20.
  The `sb` at 0x21a23fc stores 1 byte to [a0+176]:8 +0x7.
  The `sh` at 0x21a2400 stores 2 bytes to [a0+176]:8 +0x22.
  The `sw` at 0x21a2404 stores 4 bytes to [a0+176]:8 +0x14.
  The `sh` at 0x21a2410 stores 2 bytes to [a0+176]:8 +0x1a.
  11 such `ld` accesses load 8 bytes from ?, including `ld` at 0x21a2414, `ld` at 0x21a2448, `ld` at 0x21a2470.
  2 such `sw` accesses store 4 bytes to [a0+176]:8 +0x24, including `sw` at 0x21a2418, `sw` at 0x21a2688.
  The `sw` at 0x21a2438 stores 4 bytes to [a0+176]:8 +0x28.
  The `sd` at 0x21a2474 stores 8 bytes to (sp + one of -0x1b0, -0x1a8) +0x0.
  The `sd` at 0x21a248c stores 8 bytes to (sp + one of -0x1b0, -0x1a8, -0x1a0) +0x0.
  The `sd` at 0x21a24a8 stores 8 bytes to (sp + one of -0x1b0, -0x1a8, -0x1a0, -0x198) +0x0.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x21a24c4, `lw` at 0x21a24e0, `lw` at 0x21a24fc.
  10 such `sd` accesses store 8 bytes to table(0x0) +0x0, including `sd` at 0x21a24e4, `sd` at 0x21a2500, `sd` at 0x21a251c.
  The `lhu` at 0x21a2600 loads 2 bytes from [a0+176]:8 +0x2.
  The `ld` at 0x21a2628 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a2634 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a22e8 calls (unnamed) [0x21a0b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a2314 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a2388 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=0x9, a3=[[ret(0x21a0b40)+16]:8+4], a4=[a0+152]:8+1, a5=0x1, a6=[a0+176]:8+44, a7=0x2c.
  The `jalr` at 0x21a23a8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a23c0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a2614 calls _XData32 with a0=a0 at entry (arg0), a1=sp-432, a2=?, a3=?.
  The `jalr` at 0x21a262c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a2640 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a2670 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+44, a2=?, a3=?.
  The `jalr` at 0x21a26a0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd28]:8, a2=?, a3=?.
  The `beq` branch at 0x21a22f0 targets 0x21a2694, is taken when v0(=ret(0x21a0b40)) == 0, and falls through when v0(=ret(0x21a0b40)) != 0.
  The `beq` branch at 0x21a22fc targets 0x21a2698, is taken when v1(=[ret(0x21a0b40)+16]:8) == 0, and falls through when v1(=[ret(0x21a0b40)+16]:8) != 0.
  The `beq` branch at 0x21a2308 targets 0x21a231c, is taken when t2(=[a0+2408]:8) == 0, and falls through when t2(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a2330 targets 0x21a2670, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+44) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+44) (unsigned).
  The `beq` branch at 0x21a240c targets 0x21a2684, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x21a2434 targets 0x21a261c, is taken when (a0(?) & 0x7fff) == 0, and falls through when (a0(?) & 0x7fff) != 0.
  The `beq` branch at 0x21a2440 targets 0x21a268c, is taken when (a0(?) & 0x1) == 0, and falls through when (a0(?) & 0x1) != 0.
  The `beq` branch at 0x21a2460 targets 0x21a2478, is taken when (a0(?) & 0x2) == 0, and falls through when (a0(?) & 0x2) != 0.
  The `beq` branch at 0x21a247c targets 0x21a2494, is taken when (a0(?) & 0x4) == 0, and falls through when (a0(?) & 0x4) != 0.
  The `beq` branch at 0x21a2494 targets 0x21a24ac, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x21a24b0 targets 0x21a24d0, is taken when (a0(?) & 0x10) == 0, and falls through when (a0(?) & 0x10) != 0.
  The `beq` branch at 0x21a24d0 targets 0x21a24e8, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x21a24ec targets 0x21a2504, is taken when (a0(?) & 0x40) == 0, and falls through when (a0(?) & 0x40) != 0.
  The `beq` branch at 0x21a2508 targets 0x21a2520, is taken when (a0(?) & 0x80) == 0, and falls through when (a0(?) & 0x80) != 0.
  The `beq` branch at 0x21a2524 targets 0x21a2544, is taken when (a0(?) & 0x100) == 0, and falls through when (a0(?) & 0x100) != 0.
  The `beq` branch at 0x21a2544 targets 0x21a2564, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x21a2564 targets 0x21a257c, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x21a2580 targets 0x21a2598, is taken when (a0(?) & 0x800) == 0, and falls through when (a0(?) & 0x800) != 0.
  The `beq` branch at 0x21a259c targets 0x21a25b4, is taken when (a0(?) & 0x1000) == 0, and falls through when (a0(?) & 0x1000) != 0.
  The `beq` branch at 0x21a25b4 targets 0x21a25d4, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x21a25d4 targets 0x21a25f4, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x21a2620 targets 0x21a2634, is taken when t2(=[a0+2408]:8) == 0, and falls through when t2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a2638 targets 0x21a264c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a267c targets 0x21a2338 and is always taken.
  The `beq` branch at 0x21a2684 targets 0x21a241c and is always taken.
  The `beq` branch at 0x21a268c targets 0x21a245c and is always taken.
  The return at 0x21a2668 has v0 = ?.
  The return at 0x21a26b8 has v0 = 0x0.

- `XmbufClearBufferArea` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a26c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a26c0-0x21a2834 (372 bytes).
  It occupies 372 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a0b40) +0x10, including `ld` at 0x21a2714, `ld` at 0x21a2798.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a2720, `ld` at 0x21a27c4.
  The `ld` at 0x21a272c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a2738, `ld` at 0x21a2778, `ld` at 0x21a2818.
  The `ld` at 0x21a273c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a2764 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a276c, `sb` at 0x21a27c0.
  The `sh` at 0x21a2774 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a2780 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a278c stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a2794 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a27a0 loads 4 bytes from [ret(0x21a0b40)+16]:8 +0x4.
  The `sb` at 0x21a27a4 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a27a8 stores 4 bytes to [a0+176]:8 +0x4.
  The `sh` at 0x21a27ac stores 2 bytes to [a0+176]:8 +0x8.
  The `sh` at 0x21a27b0 stores 2 bytes to [a0+176]:8 +0xa.
  The `sh` at 0x21a27b4 stores 2 bytes to [a0+176]:8 +0xc.
  The `sh` at 0x21a27b8 stores 2 bytes to [a0+176]:8 +0xe.
  The `sb` at 0x21a27bc stores 1 byte to [a0+176]:8 +0x13.
  The `ld` at 0x21a27d0 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a27dc loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a2704 calls (unnamed) [0x21a0b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a2730 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a27d4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a6 at entry (arg6), a3=a5 at entry (arg5), a5=a3 at entry (arg3), a6=a2 at entry (arg2), a7=a1 at entry (arg1).
  The `jalr` at 0x21a27e8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a280c calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+20, a2=a6 at entry (arg6), a3=?.
  The `jalr` at 0x21a2824 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd28]:8, a2=?, a3=?.
  The `beq` branch at 0x21a270c targets 0x21a281c, is taken when v0(=ret(0x21a0b40)) == 0, and falls through when v0(=ret(0x21a0b40)) != 0.
  The `beq` branch at 0x21a2718 targets 0x21a2820, is taken when v0(=[ret(0x21a0b40)+16]:8) == 0, and falls through when v0(=[ret(0x21a0b40)+16]:8) != 0.
  The `beq` branch at 0x21a2724 targets 0x21a2738, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a274c targets 0x21a2808, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+20) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+20) (unsigned).
  The `beq` branch at 0x21a27c8 targets 0x21a27dc, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a27e0 targets 0x21a27f4, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a2814 targets 0x21a2750 and is always taken.
  The `beq` branch at 0x21a282c targets 0x21a27f4 and is always taken.
  The return at 0x21a2800 has v0 = one of ?, ret(?), ret(XMissingExtension).

- `XShapeQueryExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a2bd0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a2bd0-0x21a2c58 (136 bytes).
  It occupies 136 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a2880) +0x10, including `ld` at 0x21a2c0c, `ld` at 0x21a2c2c.
  The `lw` at 0x21a2c24 loads 4 bytes from [ret(0x21a2880)+16]:8 +0x8.
  The `sw` at 0x21a2c28 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0x21a2c38 loads 4 bytes from [ret(0x21a2880)+16]:8 +0xc.
  The `sw` at 0x21a2c3c stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0x21a2bf8 calls (unnamed) [0x21a2880] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x21a2c04 targets 0x21a2c48, is taken when v0(=ret(0x21a2880)) == 0, and falls through when v0(=ret(0x21a2880)) != 0.
  The `beq` branch at 0x21a2c10 targets 0x21a2c48, is taken when a5(=[ret(0x21a2880)+16]:8) == 0, and falls through when a5(=[ret(0x21a2880)+16]:8) != 0.
  The return at 0x21a2c40 has v0 = 0x1.
  The return at 0x21a2c50 has v0 = 0x0.

- `XShapeQueryVersion` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a2c60 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a2c60-0x21a2e2c (460 bytes).
  It occupies 460 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a2880) +0x10, including `ld` at 0x21a2ca4, `ld` at 0x21a2d10.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a2cb0, `ld` at 0x21a2d54, `ld` at 0x21a2dac.
  The `ld` at 0x21a2cbc loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a2cc8, `ld` at 0x21a2cf4, `ld` at 0x21a2da8.
  The `ld` at 0x21a2ccc loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a2ce4 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a2ce8, `sb` at 0x21a2d34.
  The `sh` at 0x21a2cf0 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a2cfc loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a2d04 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a2d0c stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a2d1c loads 4 bytes from [ret(0x21a2880)+16]:8 +0x4.
  The `sb` at 0x21a2d28 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a2d48 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x21a2d50 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a2d60, `ld` at 0x21a2db8.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a2d6c, `ld` at 0x21a2dc4.
  The `bgezall` at 0x21a2c94 calls (unnamed) [0x21a2880] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a2cc0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a2d30 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0x21a2880)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+4.
  The `jalr` at 0x21a2d64 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a2d78 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a2d9c calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x21a2dbc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a2dd0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a2e0c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd40]:8, a2=?, a3=?.
  The `beq` branch at 0x21a2c9c targets 0x21a2e00, is taken when v0(=ret(0x21a2880)) == 0, and falls through when v0(=ret(0x21a2880)) != 0.
  The `beq` branch at 0x21a2ca8 targets 0x21a2e04, is taken when v1(=[ret(0x21a2880)+16]:8) == 0, and falls through when v1(=[ret(0x21a2880)+16]:8) != 0.
  The `beq` branch at 0x21a2cb4 targets 0x21a2cc8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a2cdc targets 0x21a2d9c, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21a2d38 targets 0x21a2dac, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a2d58 targets 0x21a2d6c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a2d70 targets 0x21a2d84, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a2da4 targets 0x21a2ce4 and is always taken.
  The `beq` branch at 0x21a2db0 targets 0x21a2dc4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a2dc8 targets 0x21a2ddc, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21a2d94 has v0 = 0x1.
  The return at 0x21a2dec has v0 = 0x0.
  The return at 0x21a2e24 has v0 = 0x0.
  The instructions from 0x21a2df4 to 0x21a2dfc are not reached by any path from the entry, and their branches are not listed.

- `XShapeCombineRegion` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a2e30 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a2e30-0x21a3258 (1064 bytes).
  It occupies 1064 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a2880) +0x10, including `ld` at 0x21a2e8c, `ld` at 0x21a30b0.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a2e98, `ld` at 0x21a316c.
  The `ld` at 0x21a2ea4 loads 8 bytes from [a0+2408]:8 +0x0.
  5 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a2eb0, `ld` at 0x21a2ee4, `ld` at 0x21a30fc.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb8, including `ld` at 0x21a2eb4, `ld` at 0x21a3100.
  The `sd` at 0x21a2ed0 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a2ed8, `sb` at 0x21a30e0.
  2 such `sh` accesses store 2 bytes to [a0+176]:8 +0x2, including `sh` at 0x21a2ee0, `sh` at 0x21a30f4.
  The `ld` at 0x21a2eec loads 8 bytes from a0 (arg0 at entry) +0x98.
  2 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0xb0, including `sd` at 0x21a2ef4, `sd` at 0x21a314c.
  The `sd` at 0x21a2efc stores 8 bytes to a0 (arg0 at entry) +0x98.
  4 such `ld` accesses load 8 bytes from a5 (arg5 at entry) +0x8, including `ld` at 0x21a2f00, `ld` at 0x21a2f14, `ld` at 0x21a30e4.
  The `ld` at 0x21a2f24 loads 8 bytes from a5 (arg5 at entry) +0x10.
  2 such `lh` accesses load 2 bytes from [a5+16]:8 +0x0, including `lh` at 0x21a2f40, `lh` at 0x21a2f48.
  The `sh` at 0x21a2f44 stores 2 bytes to ret(_XAllocScratch) +0x0.
  2 such `lh` accesses load 2 bytes from [a5+16]:8 +0x4, including `lh` at 0x21a2f4c, `lh` at 0x21a2f6c.
  The `sh` at 0x21a2f50 stores 2 bytes to ret(_XAllocScratch) +0x2.
  The `lh` at 0x21a2f54 loads 2 bytes from [a5+16]:8 +0x2.
  The `sh` at 0x21a2f60 stores 2 bytes to ret(_XAllocScratch) +0x4.
  2 such `lh` accesses load 2 bytes from [a5+16]:8 +0x8, including `lh` at 0x21a2f74, `lh` at 0x21a2f7c.
  The `sh` at 0x21a2f78 stores 2 bytes to ret(_XAllocScratch) +0x8.
  2 such `lh` accesses load 2 bytes from [a5+16]:8 +0xc, including `lh` at 0x21a2f80, `lh` at 0x21a2fac.
  The `sh` at 0x21a2f84 stores 2 bytes to ret(_XAllocScratch) +0xa.
  The `lh` at 0x21a2f88 loads 2 bytes from [a5+16]:8 +0xa.
  The `lh` at 0x21a2f94 loads 2 bytes from [a5+16]:8 +0x6.
  The `sh` at 0x21a2fa0 stores 2 bytes to ret(_XAllocScratch) +0xc.
  18 such `sh` accesses store 2 bytes to ?, including `sh` at 0x21a2fb0, `sh` at 0x21a2fc0, `sh` at 0x21a2fcc.
  25 such `lh` accesses load 2 bytes from ?, including `lh` at 0x21a2fbc, `lh` at 0x21a2fc4, `lh` at 0x21a2fc8.
  The `lw` at 0x21a30b8 loads 4 bytes from [ret(0x21a2880)+16]:8 +0x4.
  The `sb` at 0x21a30c0 stores 1 byte to [a0+176]:8 +0x1.
  The `sb` at 0x21a30c4 stores 1 byte to [a0+176]:8 +0x4.
  The `sb` at 0x21a30cc stores 1 byte to [a0+176]:8 +0x6.
  The `sb` at 0x21a30d0 stores 1 byte to [a0+176]:8 +0x5.
  The `sw` at 0x21a30d4 stores 4 bytes to [a0+176]:8 +0x8.
  The `sh` at 0x21a30d8 stores 2 bytes to [a0+176]:8 +0xc.
  The `sh` at 0x21a30dc stores 2 bytes to [a0+176]:8 +0xe.
  The `lhu` at 0x21a30e8 loads 2 bytes from [a0+176]:8 +0x2.
  The `ld` at 0x21a3178 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a3184 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a2e78 calls (unnamed) [0x21a2880] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a2ea8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a2f0c calls _XAllocScratch with a0=a0 at entry (arg0), a1=([a5+8]:8 << 0x3), a2=[a0+152]:8+1, a3=0x1, a4=[a0+176]:8+16, a5=[a0+176]:8, a6=0x10, a7=0x4.
  The `jalr` at 0x21a3128 calls memcpy with a0=[a0+176]:8, a1=ret(_XAllocScratch), a2=(([a5+8]:8 << 0x3) << 0x0), a3=0x1, a4=[[ret(0x21a2880)+16]:8+4], a5=[a0+176]:8.
  The `jalr` at 0x21a3164 calls _XSend with a0=a0 at entry (arg0), a1=ret(_XAllocScratch), a2=([a5+8]:8 << 0x3), a3=0x1, a4=[[ret(0x21a2880)+16]:8+4], a5=[a0+176]:8.
  The `jalr` at 0x21a317c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a3190 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a31dc calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+16, a2=?, a3=?, a5=[a0+176]:8.
  The `jalr` at 0x21a31fc calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd40]:8, a2=?, a3=?.
  The `beq` branch at 0x21a2e84 targets 0x21a31ec, is taken when v0(=ret(0x21a2880)) == 0, and falls through when v0(=ret(0x21a2880)) != 0.
  The `beq` branch at 0x21a2e90 targets 0x21a31f0, is taken when v1(=[ret(0x21a2880)+16]:8) == 0, and falls through when v1(=[ret(0x21a2880)+16]:8) != 0.
  The `beq` branch at 0x21a2e9c targets 0x21a2eb0, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a2ec4 targets 0x21a31dc, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+16) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+16) (unsigned).
  The `blez` branch at 0x21a2f2c targets 0x21a309c, is taken when t0(=([a5+8]:8 << 0x0)) <= 0 (signed), and falls through when t0(=([a5+8]:8 << 0x0)) > 0 (signed).
  The `bne` branch at 0x21a2f38 targets 0x21a320c, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x21a2fec targets 0x21a31c8, is taken when a4(?) == at(=((([a5+8]:8 << 0x0) << 0x3) + [a5+16]:8)-16), and falls through when a4(?) != at(=((([a5+8]:8 << 0x0) << 0x3) + [a5+16]:8)-16).
  The `beq` branch at 0x21a3030 targets 0x21a31b0, is taken when a5(?) == at(=((([a5+8]:8 << 0x0) << 0x3) + [a5+16]:8)-16), and falls through when a5(?) != at(=((([a5+8]:8 << 0x0) << 0x3) + [a5+16]:8)-16).
  The `bne` branch at 0x21a3074 targets 0x21a2fb0, is taken when a6(?) != at(=((([a5+8]:8 << 0x0) << 0x3) + [a5+16]:8)-16), and falls through when a6(?) == at(=((([a5+8]:8 << 0x0) << 0x3) + [a5+16]:8)-16).
  The `bne` branch at 0x21a3110 targets 0x21a3150, is taken when t2(=[a0+184]:8) < t8(=(([a5+8]:8 << 0x3) + [a0+176]:8)) (unsigned), and falls through when t2(=[a0+184]:8) >= t8(=(([a5+8]:8 << 0x3) + [a0+176]:8)) (unsigned).
  The `beq` branch at 0x21a3148 targets 0x21a316c and is always taken.
  The `beq` branch at 0x21a3170 targets 0x21a3184, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a3188 targets 0x21a319c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a31c0 targets 0x21a308c and is always taken.
  The `beq` branch at 0x21a31d4 targets 0x21a308c and is always taken.
  The `beq` branch at 0x21a31e4 targets 0x21a2ecc and is always taken.
  The `beq` branch at 0x21a3204 targets 0x21a319c and is always taken.
  The `beq` branch at 0x21a3248 targets 0x21a309c, is taken when a0(?) == v0(=((([a5+8]:8 << 0x0) << 0x3) + [a5+16]:8)), and falls through when a0(?) != v0(=((([a5+8]:8 << 0x0) << 0x3) + [a5+16]:8)).
  The `beq` branch at 0x21a3250 targets 0x21a320c and is always taken.
  The return at 0x21a31a8 has v0 = one of ?, ret(?), ret(XMissingExtension).

- `XShapeCombineRectangles` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a3260 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a3260-0x21a345c (508 bytes).
  It occupies 508 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a2880) +0x10, including `ld` at 0x21a32bc, `ld` at 0x21a334c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a32c8, `ld` at 0x21a33e8.
  The `ld` at 0x21a32d4 loads 8 bytes from [a0+2408]:8 +0x0.
  5 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a32e0, `ld` at 0x21a332c, `ld` at 0x21a3384.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb8, including `ld` at 0x21a32e4, `ld` at 0x21a338c.
  The `sd` at 0x21a3318 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a3320, `sb` at 0x21a3380.
  2 such `sh` accesses store 2 bytes to [a0+176]:8 +0x2, including `sh` at 0x21a3328, `sh` at 0x21a337c.
  The `ld` at 0x21a3334 loads 8 bytes from a0 (arg0 at entry) +0x98.
  2 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0xb0, including `sd` at 0x21a3340, `sd` at 0x21a33d0.
  The `sd` at 0x21a3348 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lhu` at 0x21a3350 loads 2 bytes from [a0+176]:8 +0x2.
  The `lw` at 0x21a3354 loads 4 bytes from [ret(0x21a2880)+16]:8 +0x4.
  The `sb` at 0x21a3358 stores 1 byte to [a0+176]:8 +0x1.
  The `sb` at 0x21a335c stores 1 byte to [a0+176]:8 +0x4.
  The `sb` at 0x21a3360 stores 1 byte to [a0+176]:8 +0x6.
  The `sb` at 0x21a3364 stores 1 byte to [a0+176]:8 +0x5.
  The `sw` at 0x21a3368 stores 4 bytes to [a0+176]:8 +0x8.
  The `sh` at 0x21a336c stores 2 bytes to [a0+176]:8 +0xc.
  The `sh` at 0x21a3374 stores 2 bytes to [a0+176]:8 +0xe.
  The `ld` at 0x21a33f4 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a3400 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a32a8 calls (unnamed) [0x21a2880] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a32d8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a33ac calls memcpy with a0=[a0+176]:8, a1=a5 at entry (arg5), a2=((a6 << 0x3) << 0x0), a3=([a0+176]:8 + (a6 << 0x3)), a4=[[ret(0x21a2880)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+16.
  The `jalr` at 0x21a33e0 calls _XSend with a0=a0 at entry (arg0), a1=a5 at entry (arg5), a2=(a6 << 0x3), a3=([a0+176]:8 + (a6 << 0x3)), a4=[[ret(0x21a2880)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+16.
  The `jalr` at 0x21a33f8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a340c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a342c calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+16, a2=?, a3=?.
  The `jalr` at 0x21a344c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd40]:8, a2=?, a3=?.
  The `beq` branch at 0x21a32b4 targets 0x21a3440, is taken when v0(=ret(0x21a2880)) == 0, and falls through when v0(=ret(0x21a2880)) != 0.
  The `beq` branch at 0x21a32c0 targets 0x21a3444, is taken when v0(=[ret(0x21a2880)+16]:8) == 0, and falls through when v0(=[ret(0x21a2880)+16]:8) != 0.
  The `beq` branch at 0x21a32cc targets 0x21a32e0, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a32f4 targets 0x21a342c, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+16) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+16) (unsigned).
  The `bne` branch at 0x21a3398 targets 0x21a33d4, is taken when a2(=[a0+184]:8) < a3(=([a0+176]:8 + (a6 << 0x3))) (unsigned), and falls through when a2(=[a0+184]:8) >= a3(=([a0+176]:8 + (a6 << 0x3))) (unsigned).
  The `beq` branch at 0x21a33cc targets 0x21a33e8 and is always taken.
  The `beq` branch at 0x21a33ec targets 0x21a3400, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a3404 targets 0x21a3418, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a3434 targets 0x21a32fc and is always taken.
  The `beq` branch at 0x21a3454 targets 0x21a3418 and is always taken.
  The return at 0x21a3424 has v0 = one of ?, ret(?), ret(XMissingExtension).
  The instructions from 0x21a343c to 0x21a343c are not reached by any path from the entry, and their branches are not listed.

- `XShapeCombineMask` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a3460 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a3460-0x21a35d8 (376 bytes).
  It occupies 376 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a2880) +0x10, including `ld` at 0x21a34b4, `ld` at 0x21a3538.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a34c0, `ld` at 0x21a3564.
  The `ld` at 0x21a34cc loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a34d8, `ld` at 0x21a3518, `ld` at 0x21a35b8.
  The `ld` at 0x21a34dc loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a3504 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a350c, `sb` at 0x21a3560.
  The `sh` at 0x21a3514 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a3520 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a352c stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a3534 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a3540 loads 4 bytes from [ret(0x21a2880)+16]:8 +0x4.
  The `sb` at 0x21a3544 stores 1 byte to [a0+176]:8 +0x1.
  The `sb` at 0x21a3548 stores 1 byte to [a0+176]:8 +0x4.
  The `sb` at 0x21a354c stores 1 byte to [a0+176]:8 +0x5.
  The `sw` at 0x21a3550 stores 4 bytes to [a0+176]:8 +0x8.
  The `sh` at 0x21a3554 stores 2 bytes to [a0+176]:8 +0xc.
  The `sh` at 0x21a3558 stores 2 bytes to [a0+176]:8 +0xe.
  The `sw` at 0x21a355c stores 4 bytes to [a0+176]:8 +0x10.
  The `ld` at 0x21a3570 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a357c loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a34a4 calls (unnamed) [0x21a2880] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a34d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a3574 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a5 at entry (arg5), a3=a4 at entry (arg4), a4=a3 at entry (arg3), a5=a1 at entry (arg1), a6=a2 at entry (arg2), a7=a6 at entry (arg6).
  The `jalr` at 0x21a3588 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a35ac calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+20, a2=a5 at entry (arg5), a3=?.
  The `jalr` at 0x21a35c8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd40]:8, a2=?, a3=?.
  The `beq` branch at 0x21a34ac targets 0x21a35c0, is taken when v0(=ret(0x21a2880)) == 0, and falls through when v0(=ret(0x21a2880)) != 0.
  The `beq` branch at 0x21a34b8 targets 0x21a35c4, is taken when v0(=[ret(0x21a2880)+16]:8) == 0, and falls through when v0(=[ret(0x21a2880)+16]:8) != 0.
  The `beq` branch at 0x21a34c4 targets 0x21a34d8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a34ec targets 0x21a35a8, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+20) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+20) (unsigned).
  The `beq` branch at 0x21a3568 targets 0x21a357c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a3580 targets 0x21a3594, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a35b4 targets 0x21a34f0 and is always taken.
  The `beq` branch at 0x21a35d0 targets 0x21a3594 and is always taken.
  The return at 0x21a35a0 has v0 = one of ?, ret(?), ret(XMissingExtension).
  The instructions from 0x21a35bc to 0x21a35bc are not reached by any path from the entry, and their branches are not listed.

- `XShapeCombineShape` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a35e0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a35e0-0x21a3760 (384 bytes).
  It occupies 384 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a2880) +0x10, including `ld` at 0x21a3638, `ld` at 0x21a36c4.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a3644, `ld` at 0x21a36f4.
  The `ld` at 0x21a3650 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a365c, `ld` at 0x21a36a4, `ld` at 0x21a3744.
  The `ld` at 0x21a3660 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a3690 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a3698, `sb` at 0x21a36f0.
  The `sh` at 0x21a36a0 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a36ac loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a36b8 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a36c0 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a36cc loads 4 bytes from [ret(0x21a2880)+16]:8 +0x4.
  The `sb` at 0x21a36d0 stores 1 byte to [a0+176]:8 +0x1.
  The `sb` at 0x21a36d4 stores 1 byte to [a0+176]:8 +0x4.
  The `sb` at 0x21a36d8 stores 1 byte to [a0+176]:8 +0x5.
  The `sb` at 0x21a36dc stores 1 byte to [a0+176]:8 +0x6.
  The `sw` at 0x21a36e0 stores 4 bytes to [a0+176]:8 +0x8.
  The `sh` at 0x21a36e4 stores 2 bytes to [a0+176]:8 +0xc.
  The `sh` at 0x21a36e8 stores 2 bytes to [a0+176]:8 +0xe.
  The `sw` at 0x21a36ec stores 4 bytes to [a0+176]:8 +0x10.
  The `ld` at 0x21a3700 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a370c loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a3628 calls (unnamed) [0x21a2880] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a3654 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a3704 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a5 at entry (arg5), a3=a4 at entry (arg4), a4=a3 at entry (arg3), a5=a1 at entry (arg1), a7=a2 at entry (arg2).
  The `jalr` at 0x21a3718 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a3738 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+20, a2=?, a3=?.
  The `jalr` at 0x21a3750 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd40]:8, a2=?, a3=?.
  The `beq` branch at 0x21a3630 targets 0x21a3748, is taken when v0(=ret(0x21a2880)) == 0, and falls through when v0(=ret(0x21a2880)) != 0.
  The `beq` branch at 0x21a363c targets 0x21a374c, is taken when v0(=[ret(0x21a2880)+16]:8) == 0, and falls through when v0(=[ret(0x21a2880)+16]:8) != 0.
  The `beq` branch at 0x21a3648 targets 0x21a365c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a3670 targets 0x21a3738, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+20) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+20) (unsigned).
  The `beq` branch at 0x21a36f8 targets 0x21a370c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a3710 targets 0x21a3724, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a3740 targets 0x21a3678 and is always taken.
  The `beq` branch at 0x21a3758 targets 0x21a3724 and is always taken.
  The return at 0x21a3730 has v0 = one of ?, ret(?), ret(XMissingExtension).

- `XShapeOffsetShape` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a3760 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a3760-0x21a38b8 (344 bytes).
  It occupies 344 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a2880) +0x10, including `ld` at 0x21a37ac, `ld` at 0x21a3828.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a37b8, `ld` at 0x21a384c.
  The `ld` at 0x21a37c4 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a37d0, `ld` at 0x21a3808, `ld` at 0x21a389c.
  The `ld` at 0x21a37d4 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a37f8 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a3800, `sb` at 0x21a3848.
  The `sh` at 0x21a3804 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a3810 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a381c stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a3824 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a3830 loads 4 bytes from [ret(0x21a2880)+16]:8 +0x4.
  The `sb` at 0x21a3834 stores 1 byte to [a0+176]:8 +0x1.
  The `sb` at 0x21a3838 stores 1 byte to [a0+176]:8 +0x4.
  The `sw` at 0x21a383c stores 4 bytes to [a0+176]:8 +0x8.
  The `sh` at 0x21a3840 stores 2 bytes to [a0+176]:8 +0xc.
  The `sh` at 0x21a3844 stores 2 bytes to [a0+176]:8 +0xe.
  The `ld` at 0x21a3858 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a3864 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a379c calls (unnamed) [0x21a2880] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a37c8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a385c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a4 at entry (arg4), a3=a3 at entry (arg3), a4=a1 at entry (arg1), a5=a2 at entry (arg2), a6=0x4, a7=[[ret(0x21a2880)+16]:8+4].
  The `jalr` at 0x21a3870 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a3890 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+16, a2=?, a3=?.
  The `jalr` at 0x21a38a8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd40]:8, a2=?, a3=?.
  The `beq` branch at 0x21a37a4 targets 0x21a38a0, is taken when v0(=ret(0x21a2880)) == 0, and falls through when v0(=ret(0x21a2880)) != 0.
  The `beq` branch at 0x21a37b0 targets 0x21a38a4, is taken when v0(=[ret(0x21a2880)+16]:8) == 0, and falls through when v0(=[ret(0x21a2880)+16]:8) != 0.
  The `beq` branch at 0x21a37bc targets 0x21a37d0, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a37e4 targets 0x21a3890, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+16) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+16) (unsigned).
  The `beq` branch at 0x21a3850 targets 0x21a3864, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a3868 targets 0x21a387c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a3898 targets 0x21a37ec and is always taken.
  The `beq` branch at 0x21a38b0 targets 0x21a387c and is always taken.
  The return at 0x21a3888 has v0 = one of ?, ret(?), ret(XMissingExtension).

- `XShapeQueryExtents` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a38c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a38c0-0x21a3af8 (568 bytes).
  It occupies 568 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a2880) +0x10, including `ld` at 0x21a3918, `ld` at 0x21a398c.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a3924, `ld` at 0x21a3a34, `ld` at 0x21a3aac.
  The `ld` at 0x21a3930 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a393c, `ld` at 0x21a396c, `ld` at 0x21a3aa8.
  The `ld` at 0x21a3940 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a3958 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a3960, `sb` at 0x21a39b4.
  The `sh` at 0x21a3968 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a3974 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a3980 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a3988 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a3994 loads 4 bytes from [ret(0x21a2880)+16]:8 +0x4.
  The `sb` at 0x21a399c stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a39a8 stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x21a39e8 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0x21a39f0 stores 4 bytes to a7 (arg7 at entry) +0x0.
  The `sw` at 0x21a39f8 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0x21a3a00 stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `sw` at 0x21a3a08 stores 4 bytes to a5 (arg5 at entry) +0x0.
  The `sw` at 0x21a3a10 stores 4 bytes to a6 (arg6 at entry) +0x0.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0x21a3a18, `sw` at 0x21a3a20, `sw` at 0x21a3a28.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a3a40, `ld` at 0x21a3ab8.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a3a4c, `ld` at 0x21a3ac4.
  The `bgezall` at 0x21a3908 calls (unnamed) [0x21a2880] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a3934 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a39b0 calls _XReply with a0=a0 at entry (arg0), a1=sp-192, a2=0x0, a3=0x1, a4=[[ret(0x21a2880)+16]:8+4], a5=a1 at entry (arg1), a6=0x5, a7=0x1.
  The `jalr` at 0x21a3a44 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a6 at entry (arg6), a3=?, a4=a5 at entry (arg5), a6=a4 at entry (arg4).
  The `jalr` at 0x21a3a58 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a3a9c calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a3abc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a3ad0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a3ae8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd40]:8, a2=?, a3=?.
  The `beq` branch at 0x21a3910 targets 0x21a3ae0, is taken when v0(=ret(0x21a2880)) == 0, and falls through when v0(=ret(0x21a2880)) != 0.
  The `beq` branch at 0x21a391c targets 0x21a3ae4, is taken when v1(=[ret(0x21a2880)+16]:8) == 0, and falls through when v1(=[ret(0x21a2880)+16]:8) != 0.
  The `beq` branch at 0x21a3928 targets 0x21a393c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a3950 targets 0x21a3a98, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a39b8 targets 0x21a3aac, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a3a38 targets 0x21a3a4c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a3a50 targets 0x21a3a64, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a3aa4 targets 0x21a3954 and is always taken.
  The `beq` branch at 0x21a3ab0 targets 0x21a3ac4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a3ac8 targets 0x21a3ad8, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a3ad8 targets 0x21a3a80 and is always taken.
  The `beq` branch at 0x21a3af0 targets 0x21a3a80 and is always taken.
  The return at 0x21a3a74 has v0 = 0x1.
  The return at 0x21a3a90 has v0 = 0x0.
  The instructions from 0x21a3a7c to 0x21a3a7c are not reached by any path from the entry, and their branches are not listed.

- `XShapeSelectInput` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a3b00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a3b00-0x21a3c68 (360 bytes).
  It occupies 360 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a2880) +0x10, including `ld` at 0x21a3b44, `ld` at 0x21a3bbc.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a3b50, `ld` at 0x21a3be8.
  The `ld` at 0x21a3b5c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a3b68, `ld` at 0x21a3ba0, `ld` at 0x21a3c34.
  The `ld` at 0x21a3b6c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a3b84 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a3b8c, `sb` at 0x21a3bdc.
  The `sh` at 0x21a3b94 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a3b98 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a3ba8 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a3bb8 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `lw` at 0x21a3bc4 loads 4 bytes from [ret(0x21a2880)+16]:8 +0x4.
  The `sw` at 0x21a3bc8 stores 4 bytes to [a0+176]:8 +0x4.
  The `sb` at 0x21a3bd0 stores 1 byte to [a0+176]:8 +0x1.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x8, including `sb` at 0x21a3be4, `sb` at 0x21a3c48.
  The `ld` at 0x21a3bf4 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a3c00 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a3b34 calls (unnamed) [0x21a2880] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a3b60 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a3bf8 calls (unknown callee) with a0=a0 at entry (arg0), a1=[[ret(0x21a2880)+16]:8+4], a2=?, a3=0x6, a4=a1 at entry (arg1), a5=[a0+176]:8+12, a6=0xc, a7=0x3.
  The `jalr` at 0x21a3c0c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a3c28 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a3c58 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd40]:8, a2=?, a3=?.
  The `beq` branch at 0x21a3b3c targets 0x21a3c4c, is taken when v0(=ret(0x21a2880)) == 0, and falls through when v0(=ret(0x21a2880)) != 0.
  The `beq` branch at 0x21a3b48 targets 0x21a3c50, is taken when v0(=[ret(0x21a2880)+16]:8) == 0, and falls through when v0(=[ret(0x21a2880)+16]:8) != 0.
  The `beq` branch at 0x21a3b54 targets 0x21a3b68, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a3b7c targets 0x21a3c28, is taken when v1(=[a0+184]:8) < a0(=[a0+176]:8+12) (unsigned), and falls through when v1(=[a0+184]:8) >= a0(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x21a3bd8 targets 0x21a3c40, is taken when (a2 & 0x1) == 0, and falls through when (a2 & 0x1) != 0.
  The `beq` branch at 0x21a3bec targets 0x21a3c00, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a3c04 targets 0x21a3c18, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a3c30 targets 0x21a3b84 and is always taken.
  The `beq` branch at 0x21a3c44 targets 0x21a3be8 and is always taken.
  The `beq` branch at 0x21a3c60 targets 0x21a3c18 and is always taken.
  The return at 0x21a3c20 has v0 = one of ?, ret(?), ret(XMissingExtension).
  The instructions from 0x21a3c38 to 0x21a3c3c are not reached by any path from the entry, and their branches are not listed.

- `XShapeInputSelected` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a3c70 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a3c70-0x21a3e2c (444 bytes).
  It occupies 444 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a2880) +0x10, including `ld` at 0x21a3cb0, `ld` at 0x21a3d24.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a3cbc, `ld` at 0x21a3d54.
  The `ld` at 0x21a3cc8 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a3cd4, `ld` at 0x21a3d04, `ld` at 0x21a3db0.
  The `ld` at 0x21a3cd8 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a3cf0 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a3cf8, `sb` at 0x21a3d4c.
  The `sh` at 0x21a3d00 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a3d0c loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a3d18 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a3d20 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a3d2c loads 4 bytes from [ret(0x21a2880)+16]:8 +0x4.
  The `sb` at 0x21a3d34 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a3d40 stores 4 bytes to [a0+176]:8 +0x4.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a3d60, `ld` at 0x21a3dbc.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a3d6c, `ld` at 0x21a3dc8.
  The `bgezall` at 0x21a3ca0 calls (unnamed) [0x21a2880] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a3ccc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+2408]:8.
  The `jalr` at 0x21a3d48 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(0x21a2880)+16]:8+4], a5=a1 at entry (arg1), a6=0x7, a7=0x1.
  The `jalr` at 0x21a3d64 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+2408]:8.
  The `jalr` at 0x21a3d78 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a3da4 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a3dc0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+2408]:8.
  The `jalr` at 0x21a3dd4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a3e0c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd40]:8, a2=?, a3=?.
  The `beq` branch at 0x21a3ca8 targets 0x21a3e00, is taken when v0(=ret(0x21a2880)) == 0, and falls through when v0(=ret(0x21a2880)) != 0.
  The `beq` branch at 0x21a3cb4 targets 0x21a3e04, is taken when v1(=[ret(0x21a2880)+16]:8) == 0, and falls through when v1(=[ret(0x21a2880)+16]:8) != 0.
  The `beq` branch at 0x21a3cc0 targets 0x21a3cd4, is taken when a4(=[a0+2408]:8) == 0, and falls through when a4(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a3ce8 targets 0x21a3da0, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a3d50 targets 0x21a3db4, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a3d58 targets 0x21a3d6c, is taken when a4(=[a0+2408]:8) == 0, and falls through when a4(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a3d70 targets 0x21a3d84, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a3dac targets 0x21a3cec and is always taken.
  The `beq` branch at 0x21a3db4 targets 0x21a3dc8, is taken when a4(=[a0+2408]:8) == 0, and falls through when a4(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a3dcc targets 0x21a3de0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21a3d98 has v0 = ?.
  The return at 0x21a3df0 has v0 = 0x0.
  The return at 0x21a3e24 has v0 = 0x0.
  The instructions from 0x21a3df8 to 0x21a3dfc are not reached by any path from the entry, and their branches are not listed.

- `XShapeGetRectangles` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a3e30 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a3e30-0x21a416c (828 bytes).
  It occupies 828 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a2880) +0x10, including `ld` at 0x21a3e80, `ld` at 0x21a3efc.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a3e8c, `ld` at 0x21a4048, `ld` at 0x21a40e0.
  The `ld` at 0x21a3e98 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a3ea4, `ld` at 0x21a3ee0, `ld` at 0x21a409c.
  The `ld` at 0x21a3ea8 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a3ec4 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  The `sh` at 0x21a3ecc stores 2 bytes to [a0+176]:8 +0x2.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a3ed4, `sb` at 0x21a3f28.
  The `ld` at 0x21a3ed8 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a3ee8 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a3ef8 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `lw` at 0x21a3f04 loads 4 bytes from [ret(0x21a2880)+16]:8 +0x4.
  The `sb` at 0x21a3f08 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a3f10 stores 4 bytes to [a0+176]:8 +0x4.
  The `sb` at 0x21a3f1c stores 1 byte to [a0+176]:8 +0x8.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0x21a3f3c, `sw` at 0x21a40d0.
  The `sw` at 0x21a3f44 stores 4 bytes to a4 (arg4 at entry) +0x0.
  5 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x0, including `lw` at 0x21a3f48, `lw` at 0x21a3f5c, `lw` at 0x21a3f94.
  2 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x21a3fcc, `lhu` at 0x21a3fd4.
  4 such `sh` accesses store 2 bytes to ?, including `sh` at 0x21a3fd0, `sh` at 0x21a3fd8, `sh` at 0x21a3fe0.
  2 such `lh` accesses load 2 bytes from ?, including `lh` at 0x21a3fdc, `lh` at 0x21a3fec.
  The `lhu` at 0x21a4000 loads 2 bytes from table(0xe) +0x0.
  The `sh` at 0x21a4004 stores 2 bytes to table(0xe) +0x0.
  The `lhu` at 0x21a4008 loads 2 bytes from table(0xc) +0x0.
  The `sh` at 0x21a400c stores 2 bytes to table(0xc) +0x0.
  The `lh` at 0x21a4010 loads 2 bytes from table(0xa) +0x0.
  The `sh` at 0x21a4014 stores 2 bytes to table(0xa) +0x0.
  The `lh` at 0x21a4020 loads 2 bytes from table(0x8) +0x0.
  The `sh` at 0x21a4024 stores 2 bytes to table(0x8) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a4054, `ld` at 0x21a40ec.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a4060, `ld` at 0x21a40f8.
  The `bgezall` at 0x21a3e70 calls (unnamed) [0x21a2880] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a3e9c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `jalr` at 0x21a3f24 calls _XReply with a0=a0 at entry (arg0), a1=sp-112, a2=0x0, a3=0x0, a4=[[ret(0x21a2880)+16]:8+4], a5=a2 at entry (arg2), a6=a1 at entry (arg1), a7=0x8.
  The `jalr` at 0x21a3f54 calls malloc with a0=([a3] << 0x3), a1=?, a2=[a3], a3=?.
  The `jalr` at 0x21a3f74 calls malloc with a0=?, a1=?, a2=[a3], a3=?.
  The `jalr` at 0x21a3fa0 calls _XRead with a0=a0 at entry (arg0), a1=?, a2=([a3] << 0x3), a3=?.
  The `jalr` at 0x21a4034 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21a4058 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `jalr` at 0x21a406c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a4090 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+12, a2=?, a3=?.
  The `jalr` at 0x21a40b4 calls free with a0=ret(malloc), a1=?, a2=ret(malloc), a3=?.
  The `jalr` at 0x21a40c8 calls _XEatData with a0=a0 at entry (arg0), a1=([a3] << 0x3), a2=?, a3=?.
  The `jalr` at 0x21a40f0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `jalr` at 0x21a4104 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a4134 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd40]:8, a2=?, a3=?.
  The `jalr` at 0x21a415c calls free with a0=?, a1=?, a2=ret(malloc), a3=?.
  The `beq` branch at 0x21a3e78 targets 0x21a4128, is taken when v0(=ret(0x21a2880)) == 0, and falls through when v0(=ret(0x21a2880)) != 0.
  The `beq` branch at 0x21a3e84 targets 0x21a412c, is taken when v1(=[ret(0x21a2880)+16]:8) == 0, and falls through when v1(=[ret(0x21a2880)+16]:8) != 0.
  The `beq` branch at 0x21a3e90 targets 0x21a3ea4, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a3eb8 targets 0x21a4090, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+12) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x21a3f2c targets 0x21a40e0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a3f4c targets 0x21a4044, is taken when a2(=[a3]) == 0, and falls through when a2(=[a3]) != 0.
  The `beq` branch at 0x21a3f64 targets 0x21a3f70, is taken when a2(=[a3]) == 0, and falls through when a2(=[a3]) != 0.
  The `beq` branch at 0x21a3f80 targets 0x21a40a0, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x21a3f88 targets 0x21a4158, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `blez` branch at 0x21a3fb0 targets 0x21a4030, is taken when a2(=[a3]) <= 0 (signed), and falls through when a2(=[a3]) > 0 (signed).
  The `beq` branch at 0x21a3ff4 targets 0x21a4030, is taken when a3(=table(0x8)) == at(?), and falls through when a3(=table(0x8)) != at(?).
  The `bne` branch at 0x21a4028 targets 0x21a3fc8, is taken when a2(=table(0x10)) != at(?), and falls through when a2(=table(0x10)) == at(?).
  The `beq` branch at 0x21a403c targets 0x21a4048 and is always taken.
  The `beq` branch at 0x21a404c targets 0x21a4060, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a4064 targets 0x21a4078, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a4098 targets 0x21a3ec0 and is always taken.
  The `beq` branch at 0x21a40a0 targets 0x21a40c0, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0x21a40d8 targets 0x21a4048 and is always taken.
  The `beq` branch at 0x21a40e4 targets 0x21a40f8, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a40fc targets 0x21a4110, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a4164 targets 0x21a40c0 and is always taken.
  The return at 0x21a4088 has v0 = ?.
  The return at 0x21a4120 has v0 = 0x0.
  The return at 0x21a4150 has v0 = 0x0.

- `XShmQueryExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a4550 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a4550-0x21a45b4 (100 bytes).
  It occupies 100 bytes.
  The `ld` at 0x21a4588 loads 8 bytes from ret(0x21a4180) +0x10.
  The `bgezall` at 0x21a4574 calls (unnamed) [0x21a4180] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x21a4580 targets 0x21a45a0, is taken when v0(=ret(0x21a4180)) == 0, and falls through when v0(=ret(0x21a4180)) != 0.
  The `beq` branch at 0x21a458c targets 0x21a45a0, is taken when v1(=[ret(0x21a4180)+16]:8) == 0, and falls through when v1(=[ret(0x21a4180)+16]:8) != 0.
  The return at 0x21a4598 has v0 = 0x1.
  The return at 0x21a45ac has v0 = 0x0.

- `XShmGetEventBase` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a45c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a45c0-0x21a4628 (104 bytes).
  It occupies 104 bytes.
  The `ld` at 0x21a45f4 loads 8 bytes from ret(0x21a4180) +0x10.
  The `lw` at 0x21a4604 loads 4 bytes from [ret(0x21a4180)+16]:8 +0x8.
  The `bgezall` at 0x21a45e4 calls (unnamed) [0x21a4180] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x21a45ec targets 0x21a4618, is taken when v0(=ret(0x21a4180)) == 0, and falls through when v0(=ret(0x21a4180)) != 0.
  The `beq` branch at 0x21a45f8 targets 0x21a4618, is taken when a2(=[ret(0x21a4180)+16]:8) == 0, and falls through when a2(=[ret(0x21a4180)+16]:8) != 0.
  The return at 0x21a460c has v0 = [[ret(0x21a4180)+16]:8+8].
  The return at 0x21a4620 has v0 = -0x1.
  The instructions from 0x21a4614 to 0x21a4614 are not reached by any path from the entry, and their branches are not listed.

- `XShmQueryVersion` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a4630 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a4630-0x21a47f4 (452 bytes).
  It occupies 452 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a4180) +0x10, including `ld` at 0x21a4678, `ld` at 0x21a46e4.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a4684, `ld` at 0x21a4738, `ld` at 0x21a47a8.
  The `ld` at 0x21a4690 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a469c, `ld` at 0x21a46c8, `ld` at 0x21a47a4.
  The `ld` at 0x21a46a0 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a46b8 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a46bc, `sb` at 0x21a4708.
  The `sh` at 0x21a46c4 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a46d0 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a46d8 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a46e0 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a46f0 loads 4 bytes from [ret(0x21a4180)+16]:8 +0x4.
  The `sb` at 0x21a46fc stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a471c stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x21a4724 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0x21a4734 stores 4 bytes to a3 (arg3 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a4744, `ld` at 0x21a47b4.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a4750, `ld` at 0x21a47c0.
  The `bgezall` at 0x21a4668 calls (unnamed) [0x21a4180] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a4694 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a4704 calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x0, a3=0x0, a4=[[ret(0x21a4180)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+4.
  The `jalr` at 0x21a4748 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a475c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a4798 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x21a47b8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a47cc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a47e4 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd50]:8, a2=?, a3=?.
  The `beq` branch at 0x21a4670 targets 0x21a47dc, is taken when v0(=ret(0x21a4180)) == 0, and falls through when v0(=ret(0x21a4180)) != 0.
  The `beq` branch at 0x21a467c targets 0x21a47e0, is taken when v1(=[ret(0x21a4180)+16]:8) == 0, and falls through when v1(=[ret(0x21a4180)+16]:8) != 0.
  The `beq` branch at 0x21a4688 targets 0x21a469c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a46b0 targets 0x21a4798, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21a470c targets 0x21a47a8, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a473c targets 0x21a4750, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a4754 targets 0x21a4768, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a47a0 targets 0x21a46b8 and is always taken.
  The `beq` branch at 0x21a47ac targets 0x21a47c0, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a47c4 targets 0x21a47d4, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a47d4 targets 0x21a4780 and is always taken.
  The `beq` branch at 0x21a47ec targets 0x21a4780 and is always taken.
  The return at 0x21a4778 has v0 = 0x1.
  The return at 0x21a4790 has v0 = 0x0.

- `XShmPixmapFormat` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a4800 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a4800-0x21a49c8 (456 bytes).
  It occupies 456 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a4180) +0x10, including `ld` at 0x21a483c, `ld` at 0x21a48a8.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a4848, `ld` at 0x21a48d8.
  The `ld` at 0x21a4854 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a4860, `ld` at 0x21a488c, `ld` at 0x21a4960.
  The `ld` at 0x21a4864 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a487c stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a4880, `sb` at 0x21a48cc.
  The `sh` at 0x21a4888 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a4894 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a489c stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a48a4 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a48b4 loads 4 bytes from [ret(0x21a4180)+16]:8 +0x4.
  The `sb` at 0x21a48c0 stores 1 byte to [a0+176]:8 +0x1.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a48e4, `ld` at 0x21a496c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a48f0, `ld` at 0x21a4978.
  The `bgezall` at 0x21a482c calls (unnamed) [0x21a4180] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a4858 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `jalr` at 0x21a48c8 calls _XReply with a0=a0 at entry (arg0), a1=sp-64, a2=0x0, a3=0x0, a4=[[ret(0x21a4180)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+4.
  The `jalr` at 0x21a48e8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `jalr` at 0x21a48fc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a4954 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x21a4970 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `jalr` at 0x21a4984 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a49b0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd50]:8, a2=?, a3=?.
  The `beq` branch at 0x21a4834 targets 0x21a49a4, is taken when v0(=ret(0x21a4180)) == 0, and falls through when v0(=ret(0x21a4180)) != 0.
  The `beq` branch at 0x21a4840 targets 0x21a49a8, is taken when v1(=[ret(0x21a4180)+16]:8) == 0, and falls through when v1(=[ret(0x21a4180)+16]:8) != 0.
  The `beq` branch at 0x21a484c targets 0x21a4860, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a4874 targets 0x21a4954, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21a48d4 targets 0x21a4964, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a48dc targets 0x21a48f0, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a48f4 targets 0x21a4908, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a4910 targets 0x21a49c0, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x21a491c targets 0x21a492c, is taken when a0(?) >= 0x2 (signed), and falls through when a0(?) < 0x2 (signed).
  The `blez` branch at 0x21a4924 targets 0x21a49c0, is taken when a3(?) <= 0 (signed), and falls through when a3(?) > 0 (signed).
  The `beq` branch at 0x21a495c targets 0x21a487c and is always taken.
  The `beq` branch at 0x21a4964 targets 0x21a4978, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a497c targets 0x21a4990, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a49b8 targets 0x21a4940 and is always taken.
  The `beq` branch at 0x21a49c0 targets 0x21a4940 and is always taken.
  The return at 0x21a4934 has v0 = ?.
  The return at 0x21a494c has v0 = 0x0.
  The return at 0x21a499c has v0 = 0x0.
  The instructions from 0x21a493c to 0x21a493c are not reached by any path from the entry, and their branches are not listed.

- `XShmAttach` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a49d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a49d0-0x21a4b50 (384 bytes).
  It occupies 384 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a4180) +0x10, including `ld` at 0x21a4a14, `ld` at 0x21a4a98.
  The `ld` at 0x21a4a20 loads 8 bytes from a0 (arg0 at entry) +0x48.
  The `sd` at 0x21a4a2c stores 8 bytes to a1 (arg1 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a4a30, `ld` at 0x21a4ac4.
  The `ld` at 0x21a4a3c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a4a48, `ld` at 0x21a4a78, `ld` at 0x21a4b4c.
  The `ld` at 0x21a4a4c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a4a64 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a4a6c, `sb` at 0x21a4aa4.
  The `sh` at 0x21a4a74 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a4a80 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a4a8c stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a4a94 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a4a9c loads 4 bytes from [ret(0x21a4180)+16]:8 +0x4.
  The `sb` at 0x21a4aa0 stores 1 byte to [a0+176]:8 +0x1.
  The `ld` at 0x21a4aa8 loads 8 bytes from a1 (arg1 at entry) +0x0.
  The `sw` at 0x21a4aac stores 4 bytes to [a0+176]:8 +0x4.
  The `lw` at 0x21a4ab0 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `sw` at 0x21a4ab4 stores 4 bytes to [a0+176]:8 +0x8.
  The `lw` at 0x21a4ab8 loads 4 bytes from a1 (arg1 at entry) +0x18.
  The `sb` at 0x21a4ac0 stores 1 byte to [a0+176]:8 +0xc.
  The `ld` at 0x21a4ad0 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a4adc loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a4a04 calls (unnamed) [0x21a4180] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a4a24 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a4a40 calls (unknown callee) with a0=a0 at entry (arg0), a1=[a0+2408]:8, a2=?, a3=?.
  The `jalr` at 0x21a4ad4 calls (unknown callee) with a0=a0 at entry (arg0), a1=[a0+2408]:8, a2=?, a3=[a1+8], a4=[a1]:8, a5=0x1, a6=[[ret(0x21a4180)+16]:8+4], a7=[a0+152]:8+1.
  The `jalr` at 0x21a4ae8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a4b1c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd50]:8, a2=?, a3=?.
  The `jalr` at 0x21a4b40 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+16, a2=?, a3=?.
  The `beq` branch at 0x21a4a0c targets 0x21a4b10, is taken when v0(=ret(0x21a4180)) == 0, and falls through when v0(=ret(0x21a4180)) != 0.
  The `beq` branch at 0x21a4a18 targets 0x21a4b14, is taken when v1(=[ret(0x21a4180)+16]:8) == 0, and falls through when v1(=[ret(0x21a4180)+16]:8) != 0.
  The `beq` branch at 0x21a4a34 targets 0x21a4a48, is taken when a1(=[a0+2408]:8) == 0, and falls through when a1(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a4a5c targets 0x21a4b40, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+16) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+16) (unsigned).
  The `beq` branch at 0x21a4ac8 targets 0x21a4adc, is taken when a1(=[a0+2408]:8) == 0, and falls through when a1(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a4ae0 targets 0x21a4af4, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a4b48 targets 0x21a4a64 and is always taken.
  The return at 0x21a4b08 has v0 = 0x1.
  The return at 0x21a4b38 has v0 = 0x0.

- `XShmDetach` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a4b50 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a4b50-0x21a4cac (348 bytes).
  It occupies 348 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a4180) +0x10, including `ld` at 0x21a4b90, `ld` at 0x21a4c00.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a4b9c, `ld` at 0x21a4c1c.
  The `ld` at 0x21a4ba8 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a4bb4, `ld` at 0x21a4be0, `ld` at 0x21a4c70.
  The `ld` at 0x21a4bb8 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a4bd0 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a4bd8, `sb` at 0x21a4c10.
  The `sh` at 0x21a4bdc stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a4be8 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a4bf4 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a4bfc stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a4c08 loads 4 bytes from [ret(0x21a4180)+16]:8 +0x4.
  The `sb` at 0x21a4c0c stores 1 byte to [a0+176]:8 +0x1.
  The `ld` at 0x21a4c14 loads 8 bytes from a1 (arg1 at entry) +0x0.
  The `sw` at 0x21a4c18 stores 4 bytes to [a0+176]:8 +0x4.
  The `ld` at 0x21a4c28 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a4c34 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a4b80 calls (unnamed) [0x21a4180] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a4bac calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a4c2c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a1]:8, a3=0x2, a4=[[ret(0x21a4180)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+8.
  The `jalr` at 0x21a4c40 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a4c64 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a4c8c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd50]:8, a2=?, a3=?.
  The `beq` branch at 0x21a4b88 targets 0x21a4c80, is taken when v0(=ret(0x21a4180)) == 0, and falls through when v0(=ret(0x21a4180)) != 0.
  The `beq` branch at 0x21a4b94 targets 0x21a4c84, is taken when v0(=[ret(0x21a4180)+16]:8) == 0, and falls through when v0(=[ret(0x21a4180)+16]:8) != 0.
  The `beq` branch at 0x21a4ba0 targets 0x21a4bb4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a4bc8 targets 0x21a4c64, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a4c20 targets 0x21a4c34, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a4c38 targets 0x21a4c4c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a4c6c targets 0x21a4bd0 and is always taken.
  The return at 0x21a4c5c has v0 = 0x1.
  The return at 0x21a4ca4 has v0 = 0x0.
  The instructions from 0x21a4c74 to 0x21a4c7c are not reached by any path from the entry, and their branches are not listed.

- `_XShmDestroyImage` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a4cb0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a4cb0-0x21a4ce8 (56 bytes).
  It occupies 56 bytes.
  The `jalr` at 0x21a4ccc calls free with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x21a4ce0 has v0 = 0x1.

- `XShmCreateImage` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a4cf0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a4cf0-0x21a4e8c (412 bytes).
  It occupies 412 bytes.
  2 such `sd` accesses store 8 bytes to ret(calloc) +0x38, including `sd` at 0x21a4d58, `sd` at 0x21a4e58.
  2 such `sd` accesses store 8 bytes to ret(calloc) +0x40, including `sd` at 0x21a4d5c, `sd` at 0x21a4e60.
  2 such `sd` accesses store 8 bytes to ret(calloc) +0x48, including `sd` at 0x21a4d60, `sd` at 0x21a4e6c.
  2 such `sw` accesses store 4 bytes to ret(calloc) +0x30, including `sw` at 0x21a4d70, `sw` at 0x21a4e88.
  The `sw` at 0x21a4db4 stores 4 bytes to ret(calloc) +0x2c.
  The `sd` at 0x21a4dd0 stores 8 bytes to ret(calloc) +0x60.
  The `sd` at 0x21a4df8 stores 8 bytes to ret(calloc) +0x10.
  The `sw` at 0x21a4dfc stores 4 bytes to ret(calloc) +0x0.
  The `sw` at 0x21a4e00 stores 4 bytes to ret(calloc) +0x4.
  The `sw` at 0x21a4e04 stores 4 bytes to ret(calloc) +0x28.
  The `sw` at 0x21a4e08 stores 4 bytes to ret(calloc) +0xc.
  The `sd` at 0x21a4e14 stores 8 bytes to ret(calloc) +0x50.
  The `lw` at 0x21a4e18 loads 4 bytes from a0 (arg0 at entry) +0x50.
  The `sw` at 0x21a4e1c stores 4 bytes to ret(calloc) +0x18.
  The `lw` at 0x21a4e20 loads 4 bytes from a0 (arg0 at entry) +0x54.
  The `sw` at 0x21a4e24 stores 4 bytes to ret(calloc) +0x1c.
  The `lw` at 0x21a4e28 loads 4 bytes from a0 (arg0 at entry) +0x5c.
  The `sw` at 0x21a4e30 stores 4 bytes to ret(calloc) +0x20.
  The `sw` at 0x21a4e3c stores 4 bytes to ret(calloc) +0x8.
  The `sw` at 0x21a4e48 stores 4 bytes to ret(calloc) +0x24.
  The `ld` at 0x21a4e54 loads 8 bytes from a1 (arg1 at entry) +0x18.
  The `ld` at 0x21a4e5c loads 8 bytes from a1 (arg1 at entry) +0x20.
  The `ld` at 0x21a4e64 loads 8 bytes from a1 (arg1 at entry) +0x28.
  The `lw` at 0x21a4e7c loads 4 bytes from ret(calloc) +0x24.
  The `jalr` at 0x21a4d34 calls calloc with a0=0x1, a1=0x88, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a4db0 calls _XInitImageFuncPtrs with a0=ret(calloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a4e2c calls _XGetScanlinePad with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0x21a4e74 calls _XGetBitsPerPixel with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=?, a4=ret(_XGetScanlinePad), a5=0x1, a7=0x2.
  The `bne` branch at 0x21a4d40 targets 0x21a4de0, is taken when v0(=ret(calloc)) != 0, and falls through when v0(=ret(calloc)) == 0.
  The `beq` branch at 0x21a4d68 targets 0x21a4e70, is taken when v1(=a3) == a7(=0x2), and falls through when v1(=a3) != a7(=0x2).
  The `beq` branch at 0x21a4e4c targets 0x21a4d58, is taken when a0(=a1) == 0, and falls through when a0(=a1) != 0.
  The `beq` branch at 0x21a4e68 targets 0x21a4d64 and is always taken.
  The `beq` branch at 0x21a4e84 targets 0x21a4d74 and is always taken.
  The return at 0x21a4d50 has v0 = ret(calloc).
  The return at 0x21a4dd8 has v0 = ret(calloc).

- `XShmPutImage` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a4e90 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a4e90-0x21a50bc (556 bytes).
  It occupies 556 bytes.
  The `ld` at 0x21a4eec loads 8 bytes from a3 (arg3 at entry) +0x50.
  2 such `ld` accesses load 8 bytes from ret(0x21a4180) +0x10, including `ld` at 0x21a4ef8, `ld` at 0x21a4fa8.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a4f0c, `ld` at 0x21a501c.
  The `ld` at 0x21a4f18 loads 8 bytes from [a0+2408]:8 +0x0.
  The `ld` at 0x21a4f24 loads 8 bytes from a2 (arg2 at entry) +0x18.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a4f3c, `ld` at 0x21a4f6c, `ld` at 0x21a50a0.
  The `ld` at 0x21a4f40 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a4f58 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a4f60, `sb` at 0x21a4fbc.
  The `sh` at 0x21a4f68 stores 2 bytes to [a0+176]:8 +0x2.
  The `sd` at 0x21a4f78 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `ld` at 0x21a4f94 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a4fa4 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a4fb0 loads 4 bytes from [ret(0x21a4180)+16]:8 +0x4.
  The `sb` at 0x21a4fb4 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a4fb8 stores 4 bytes to [a0+176]:8 +0x4.
  The `ld` at 0x21a4fc0 loads 8 bytes from a2 (arg2 at entry) +0x8.
  The `sh` at 0x21a4fc4 stores 2 bytes to [a0+176]:8 +0x10.
  The `sh` at 0x21a4fc8 stores 2 bytes to [a0+176]:8 +0x12.
  The `sh` at 0x21a4fcc stores 2 bytes to [a0+176]:8 +0x14.
  The `sh` at 0x21a4fd0 stores 2 bytes to [a0+176]:8 +0x16.
  The `sh` at 0x21a4fd4 stores 2 bytes to [a0+176]:8 +0x18.
  The `sh` at 0x21a4fd8 stores 2 bytes to [a0+176]:8 +0x1a.
  The `sw` at 0x21a4fdc stores 4 bytes to [a0+176]:8 +0x8.
  The `lw` at 0x21a4fe0 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `sh` at 0x21a4fe4 stores 2 bytes to [a0+176]:8 +0xc.
  The `lw` at 0x21a4fe8 loads 4 bytes from a3 (arg3 at entry) +0x4.
  The `sh` at 0x21a4fec stores 2 bytes to [a0+176]:8 +0xe.
  The `lw` at 0x21a4ff0 loads 4 bytes from a3 (arg3 at entry) +0x28.
  The `sb` at 0x21a4ff4 stores 1 byte to [a0+176]:8 +0x1c.
  The `lw` at 0x21a4ff8 loads 4 bytes from a3 (arg3 at entry) +0xc.
  The `sb` at 0x21a4ffc stores 1 byte to [a0+176]:8 +0x1e.
  The `sb` at 0x21a5000 stores 1 byte to [a0+176]:8 +0x1d.
  The `ld` at 0x21a5004 loads 8 bytes from [a3+80]:8 +0x0.
  The `sw` at 0x21a5008 stores 4 bytes to [a0+176]:8 +0x20.
  The `ld` at 0x21a500c loads 8 bytes from [a3+80]:8 +0x10.
  The `ld` at 0x21a5010 loads 8 bytes from a3 (arg3 at entry) +0x10.
  The `sw` at 0x21a5018 stores 4 bytes to [a0+176]:8 +0x24.
  The `ld` at 0x21a5028 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a5034 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a4ee4 calls (unnamed) [0x21a4180] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a4f1c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a4f34 calls _XFlushGCCache with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0x21a502c calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x3, a3=?, a4=[[a3+80]:8+16]:8, a5=[[a3+80]:8]:8, a7=[a3+12].
  The `jalr` at 0x21a5040 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5094 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=[a0+176]:8+40, a3=?.
  The `jalr` at 0x21a50ac calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd50]:8, a2=?, a3=?.
  The `beq` branch at 0x21a4ef0 targets 0x21a50a4, is taken when v0(=ret(0x21a4180)) == 0, and falls through when v0(=ret(0x21a4180)) != 0.
  The `beq` branch at 0x21a4efc targets 0x21a50a8, is taken when v0(=[ret(0x21a4180)+16]:8) == 0, and falls through when v0(=[ret(0x21a4180)+16]:8) != 0.
  The `beq` branch at 0x21a4f04 targets 0x21a5070, is taken when s4(=[a3+80]:8) == 0, and falls through when s4(=[a3+80]:8) != 0.
  The `beq` branch at 0x21a4f10 targets 0x21a4f24, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a4f28 targets 0x21a4f3c, is taken when v1(=[a2+24]:8) == 0, and falls through when v1(=[a2+24]:8) != 0.
  The `bne` branch at 0x21a4f50 targets 0x21a5094, is taken when a1(=[a0+184]:8) < a2(=[a0+176]:8+40) (unsigned), and falls through when a1(=[a0+184]:8) >= a2(=[a0+176]:8+40) (unsigned).
  The `beq` branch at 0x21a5020 targets 0x21a5034, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a5038 targets 0x21a504c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a509c targets 0x21a4f58 and is always taken.
  The `beq` branch at 0x21a50b4 targets 0x21a504c and is always taken.
  The return at 0x21a5068 has v0 = one of 0x0, 0x1.
  The return at 0x21a508c has v0 = 0x0.

- `XShmGetImage` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a50c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a50c0-0x21a532c (620 bytes).
  It occupies 620 bytes.
  The `ld` at 0x21a5110 loads 8 bytes from a2 (arg2 at entry) +0x50.
  2 such `ld` accesses load 8 bytes from ret(0x21a4180) +0x10, including `ld` at 0x21a511c, `ld` at 0x21a51a4.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a5130, `ld` at 0x21a5214, `ld` at 0x21a52a0.
  The `ld` at 0x21a513c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a5148, `ld` at 0x21a5184, `ld` at 0x21a5310.
  The `ld` at 0x21a514c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a5170 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a5178, `sb` at 0x21a51c0.
  The `sh` at 0x21a5180 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a518c loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a5198 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a51a0 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a51ac loads 4 bytes from [ret(0x21a4180)+16]:8 +0x4.
  The `sb` at 0x21a51b0 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a51b4 stores 4 bytes to [a0+176]:8 +0x4.
  The `sh` at 0x21a51b8 stores 2 bytes to [a0+176]:8 +0x8.
  The `sh` at 0x21a51bc stores 2 bytes to [a0+176]:8 +0xa.
  The `lw` at 0x21a51c4 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `sh` at 0x21a51c8 stores 2 bytes to [a0+176]:8 +0xc.
  The `lw` at 0x21a51cc loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `sw` at 0x21a51d0 stores 4 bytes to [a0+176]:8 +0x10.
  The `sh` at 0x21a51d4 stores 2 bytes to [a0+176]:8 +0xe.
  The `lw` at 0x21a51d8 loads 4 bytes from a2 (arg2 at entry) +0xc.
  The `sb` at 0x21a51dc stores 1 byte to [a0+176]:8 +0x14.
  The `ld` at 0x21a51e0 loads 8 bytes from [a2+80]:8 +0x0.
  The `sw` at 0x21a51e4 stores 4 bytes to [a0+176]:8 +0x18.
  The `ld` at 0x21a51e8 loads 8 bytes from [a2+80]:8 +0x10.
  The `ld` at 0x21a51f4 loads 8 bytes from a2 (arg2 at entry) +0x10.
  The `sw` at 0x21a5208 stores 4 bytes to [a0+176]:8 +0x1c.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a5220, `ld` at 0x21a52ac.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a522c, `ld` at 0x21a52b8.
  The `ld` at 0x21a5278 loads 8 bytes from ret(_XVIDtoVisual) +0x18.
  2 such `sd` accesses store 8 bytes to a2 (arg2 at entry) +0x38, including `sd` at 0x21a527c, `sd` at 0x21a529c.
  The `ld` at 0x21a5280 loads 8 bytes from ret(_XVIDtoVisual) +0x20.
  2 such `sd` accesses store 8 bytes to a2 (arg2 at entry) +0x40, including `sd` at 0x21a5284, `sd` at 0x21a5298.
  The `ld` at 0x21a5288 loads 8 bytes from ret(_XVIDtoVisual) +0x28.
  2 such `sd` accesses store 8 bytes to a2 (arg2 at entry) +0x48, including `sd` at 0x21a5290, `sd` at 0x21a5294.
  The `bgezall` at 0x21a5108 calls (unnamed) [0x21a4180] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a5140 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5204 calls _XReply with a0=a0 at entry (arg0), a1=sp-112, a2=0x0, a3=0x0, a5=[[a2+80]:8+16]:8, a6=[[a2+80]:8]:8, a7=[a2+12].
  The `jalr` at 0x21a5224 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5238 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5268 calls _XVIDtoVisual with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a52b0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a52c4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5304 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+32, a2=?, a3=?.
  The `jalr` at 0x21a531c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd50]:8, a2=?, a3=?.
  The `beq` branch at 0x21a5114 targets 0x21a5314, is taken when v0(=ret(0x21a4180)) == 0, and falls through when v0(=ret(0x21a4180)) != 0.
  The `beq` branch at 0x21a5120 targets 0x21a5318, is taken when v1(=[ret(0x21a4180)+16]:8) == 0, and falls through when v1(=[ret(0x21a4180)+16]:8) != 0.
  The `beq` branch at 0x21a5128 targets 0x21a52f0, is taken when s3(=[a2+80]:8) == 0, and falls through when s3(=[a2+80]:8) != 0.
  The `beq` branch at 0x21a5134 targets 0x21a5148, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a515c targets 0x21a5300, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+32) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+32) (unsigned).
  The `bne` branch at 0x21a520c targets 0x21a5264, is taken when v0(=ret(_XReply)) != 0, and falls through when v0(=ret(_XReply)) == 0.
  The `beq` branch at 0x21a5218 targets 0x21a522c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a5230 targets 0x21a5244, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a5270 targets 0x21a5294, is taken when v0(=ret(_XVIDtoVisual)) == 0, and falls through when v0(=ret(_XVIDtoVisual)) != 0.
  The `beq` branch at 0x21a528c targets 0x21a52a0 and is always taken.
  The `beq` branch at 0x21a52a4 targets 0x21a52b8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a52bc targets 0x21a52d0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a52f0 targets 0x21a52d0 and is always taken.
  The `beq` branch at 0x21a530c targets 0x21a5160 and is always taken.
  The `beq` branch at 0x21a5324 targets 0x21a52d0 and is always taken.
  The return at 0x21a525c has v0 = 0x0.
  The return at 0x21a52e8 has v0 = one of 0x0, 0x1.
  The instructions from 0x21a52f8 to 0x21a52fc are not reached by any path from the entry, and their branches are not listed.

- `XShmCreatePixmap` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a5330 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a5330-0x21a54ec (444 bytes).
  It occupies 444 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a4180) +0x10, including `ld` at 0x21a5384, `ld` at 0x21a540c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a5390, `ld` at 0x21a545c.
  The `ld` at 0x21a539c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a53a8, `ld` at 0x21a53ec, `ld` at 0x21a54bc.
  The `ld` at 0x21a53ac loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a53d8 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a53e0, `sb` at 0x21a542c.
  The `sh` at 0x21a53e8 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a53f4 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a5400 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a5408 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a5414 loads 4 bytes from [ret(0x21a4180)+16]:8 +0x4.
  The `sb` at 0x21a5418 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a541c stores 4 bytes to [a0+176]:8 +0x8.
  The `sh` at 0x21a5420 stores 2 bytes to [a0+176]:8 +0xc.
  The `sh` at 0x21a5424 stores 2 bytes to [a0+176]:8 +0xe.
  The `sb` at 0x21a5428 stores 1 byte to [a0+176]:8 +0x10.
  The `ld` at 0x21a5430 loads 8 bytes from a3 (arg3 at entry) +0x0.
  The `sw` at 0x21a5434 stores 4 bytes to [a0+176]:8 +0x14.
  The `ld` at 0x21a5438 loads 8 bytes from a3 (arg3 at entry) +0x10.
  The `sw` at 0x21a5440 stores 4 bytes to [a0+176]:8 +0x18.
  The `ld` at 0x21a5444 loads 8 bytes from a0 (arg0 at entry) +0x48.
  The `sw` at 0x21a5458 stores 4 bytes to [a0+176]:8 +0x4.
  The `ld` at 0x21a546c loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a5478 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a5374 calls (unnamed) [0x21a4180] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a53a0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a544c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a3+16]:8, a4=[a3]:8, a5=a6 at entry (arg6), a6=a5 at entry (arg5), a7=a4 at entry (arg4).
  The `jalr` at 0x21a5470 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5484 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a54b0 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+28, a2=?, a3=?.
  The `jalr` at 0x21a54cc calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd50]:8, a2=?, a3=?.
  The `beq` branch at 0x21a537c targets 0x21a54c0, is taken when v0(=ret(0x21a4180)) == 0, and falls through when v0(=ret(0x21a4180)) != 0.
  The `beq` branch at 0x21a5388 targets 0x21a54c4, is taken when v1(=[ret(0x21a4180)+16]:8) == 0, and falls through when v1(=[ret(0x21a4180)+16]:8) != 0.
  The `beq` branch at 0x21a5394 targets 0x21a53a8, is taken when t1(=[a0+2408]:8) == 0, and falls through when t1(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a53bc targets 0x21a54b0, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+28) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+28) (unsigned).
  The `beq` branch at 0x21a5464 targets 0x21a5478, is taken when t1(=[a0+2408]:8) == 0, and falls through when t1(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a547c targets 0x21a5490, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a54b8 targets 0x21a53c4 and is always taken.
  The return at 0x21a54a8 has v0 = ?.
  The return at 0x21a54e4 has v0 = 0x0.

- `XMITMiscQueryExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a55e0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a55e0-0x21a5668 (136 bytes).
  It occupies 136 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a5500) +0x10, including `ld` at 0x21a561c, `ld` at 0x21a563c.
  The `lw` at 0x21a5634 loads 4 bytes from [ret(0x21a5500)+16]:8 +0x8.
  The `sw` at 0x21a5638 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0x21a5648 loads 4 bytes from [ret(0x21a5500)+16]:8 +0xc.
  The `sw` at 0x21a564c stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0x21a5608 calls (unnamed) [0x21a5500] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x21a5614 targets 0x21a5658, is taken when v0(=ret(0x21a5500)) == 0, and falls through when v0(=ret(0x21a5500)) != 0.
  The `beq` branch at 0x21a5620 targets 0x21a5658, is taken when a5(=[ret(0x21a5500)+16]:8) == 0, and falls through when a5(=[ret(0x21a5500)+16]:8) != 0.
  The return at 0x21a5650 has v0 = 0x1.
  The return at 0x21a5660 has v0 = 0x0.

- `XMITMiscSetBugMode` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a5670 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a5670-0x21a57c0 (336 bytes).
  It occupies 336 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a5500) +0x10, including `ld` at 0x21a56b0, `ld` at 0x21a5720.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a56bc, `ld` at 0x21a5738.
  The `ld` at 0x21a56c8 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a56d4, `ld` at 0x21a5700, `ld` at 0x21a5790.
  The `ld` at 0x21a56d8 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a56f0 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a56f4, `sb` at 0x21a5734.
  The `sh` at 0x21a56fc stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a5708 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a5714 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a571c stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a5728 loads 4 bytes from [ret(0x21a5500)+16]:8 +0x4.
  The `sb` at 0x21a572c stores 1 byte to [a0+176]:8 +0x1.
  The `sb` at 0x21a5730 stores 1 byte to [a0+176]:8 +0x4.
  The `ld` at 0x21a5748 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a5754 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a56a0 calls (unnamed) [0x21a5500] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a56cc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a574c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a1 at entry (arg1), a3=[[ret(0x21a5500)+16]:8+4], a4=[a0+152]:8+1, a5=0x1, a6=[a0+176]:8+8, a7=0x8.
  The `jalr` at 0x21a5760 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5784 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a57a0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd68]:8, a2=?, a3=?.
  The `beq` branch at 0x21a56a8 targets 0x21a5794, is taken when v0(=ret(0x21a5500)) == 0, and falls through when v0(=ret(0x21a5500)) != 0.
  The `beq` branch at 0x21a56b4 targets 0x21a5798, is taken when v0(=[ret(0x21a5500)+16]:8) == 0, and falls through when v0(=[ret(0x21a5500)+16]:8) != 0.
  The `beq` branch at 0x21a56c0 targets 0x21a56d4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a56e8 targets 0x21a5784, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a5740 targets 0x21a5754, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a5758 targets 0x21a576c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a578c targets 0x21a56f0 and is always taken.
  The return at 0x21a577c has v0 = 0x1.
  The return at 0x21a57b8 has v0 = 0x0.

- `XMITMiscGetBugMode` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a57c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a57c0-0x21a596c (428 bytes).
  It occupies 428 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a5500) +0x10, including `ld` at 0x21a57fc, `ld` at 0x21a586c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a5808, `ld` at 0x21a5898.
  The `ld` at 0x21a5814 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a5820, `ld` at 0x21a584c, `ld` at 0x21a58ec.
  The `ld` at 0x21a5824 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a583c stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a5844, `sb` at 0x21a5890.
  The `sh` at 0x21a5848 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a5854 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a5860 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a5868 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a5878 loads 4 bytes from [ret(0x21a5500)+16]:8 +0x4.
  The `sb` at 0x21a5884 stores 1 byte to [a0+176]:8 +0x1.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a58a4, `ld` at 0x21a58f8.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a58b0, `ld` at 0x21a5904.
  The `bgezall` at 0x21a57ec calls (unnamed) [0x21a5500] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a5818 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `jalr` at 0x21a588c calls _XReply with a0=a0 at entry (arg0), a1=sp-64, a2=0x0, a3=0x0, a4=[[ret(0x21a5500)+16]:8+4], a5=0x1, a6=[a0+152]:8+1, a7=0x1.
  The `jalr` at 0x21a58a8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `jalr` at 0x21a58bc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a58e0 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x21a58fc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `jalr` at 0x21a5910 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a594c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd68]:8, a2=?, a3=?.
  The `beq` branch at 0x21a57f4 targets 0x21a5940, is taken when v0(=ret(0x21a5500)) == 0, and falls through when v0(=ret(0x21a5500)) != 0.
  The `beq` branch at 0x21a5800 targets 0x21a5944, is taken when v1(=[ret(0x21a5500)+16]:8) == 0, and falls through when v1(=[ret(0x21a5500)+16]:8) != 0.
  The `beq` branch at 0x21a580c targets 0x21a5820, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a5834 targets 0x21a58e0, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21a5894 targets 0x21a58f0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a589c targets 0x21a58b0, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a58b4 targets 0x21a58c8, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a58e8 targets 0x21a583c and is always taken.
  The `beq` branch at 0x21a58f0 targets 0x21a5904, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a5908 targets 0x21a591c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21a58d8 has v0 = ?.
  The return at 0x21a592c has v0 = 0x0.
  The return at 0x21a5964 has v0 = 0x0.
  The instructions from 0x21a5934 to 0x21a593c are not reached by any path from the entry, and their branches are not listed.

- `XTestFakeInput` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a5980 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a5980-0x21a5c58 (728 bytes).
  It occupies 728 bytes.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a5984, `ld` at 0x21a5bc8, `ld` at 0x21a5c10.
  The `ld` at 0x21a59b8 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a59f0, `ld` at 0x21a5a24, `ld` at 0x21a5c54.
  The `ld` at 0x21a59f4 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a5a10 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a5a18, `sb` at 0x21a5a48.
  The `sh` at 0x21a5a20 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a5a2c loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a5a38 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a5a40 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sb` at 0x21a5a54 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a5a60 stores 4 bytes to [a0+176]:8 +0x4.
  10 such `sb` accesses store 1 byte to ?, including `sb` at 0x21a5a78, `sb` at 0x21a5a84, `sb` at 0x21a5a90.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x21a5ae0, `lbu` at 0x21a5b10.
  The `lbu` at 0x21a5b28 loads 1 byte from table(0x1) +0x0.
  The `sb` at 0x21a5b34 stores 1 byte to table(0x9) +0x0.
  The `lbu` at 0x21a5b40 loads 1 byte from table(0x2) +0x0.
  The `sb` at 0x21a5b4c stores 1 byte to table(0xa) +0x0.
  The `lbu` at 0x21a5b58 loads 1 byte from table(0x3) +0x0.
  The `sb` at 0x21a5b64 stores 1 byte to table(0xb) +0x0.
  The `lbu` at 0x21a5b70 loads 1 byte from table(0x4) +0x0.
  The `sb` at 0x21a5b7c stores 1 byte to table(0xc) +0x0.
  The `lbu` at 0x21a5b88 loads 1 byte from table(0x5) +0x0.
  The `sb` at 0x21a5b94 stores 1 byte to table(0xd) +0x0.
  The `lbu` at 0x21a5ba0 loads 1 byte from table(0x6) +0x0.
  The `sb` at 0x21a5bac stores 1 byte to table(0xe) +0x0.
  The `lbu` at 0x21a5bb8 loads 1 byte from table(0x7) +0x0.
  The `sb` at 0x21a5bc4 stores 1 byte to table(0xf) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a5bd4, `ld` at 0x21a5c1c.
  The `ld` at 0x21a5be0 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `jalr` at 0x21a59bc calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=[a0+2408]:8.
  The `bgezall` at 0x21a59d0 calls (unnamed) [0x21a6170] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5bd8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+2408]:8, a6=(a2 + a1).
  The `jalr` at 0x21a5bec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5c20 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+2408]:8.
  The `jalr` at 0x21a5c48 calls _XFlush with a0=a0 at entry (arg0), a1=a3 at entry (arg3), a2=?, a3=?, a5=[a0+176]:8.
  The `beq` branch at 0x21a59b0 targets 0x21a59c4, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a59e0 targets 0x21a5c10, is taken when v0(=ret(0x21a6170)) == at(=-0x1), and falls through when v0(=ret(0x21a6170)) != at(=-0x1).
  The `beq` branch at 0x21a59e8 targets 0x21a5c10, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x21a5a00 targets 0x21a5c44, is taken when v0(=[a0+184]:8) < v1(=[a0+176]:8+72) (unsigned), and falls through when v0(=[a0+184]:8) >= v1(=[a0+176]:8+72) (unsigned).
  The `bne` branch at 0x21a5ac0 targets 0x21a5a64, is taken when a5(?) != a0(=[a0+176]:8+64), and falls through when a5(?) == a0(=[a0+176]:8+64).
  The `blez` branch at 0x21a5ac8 targets 0x21a5bc8, is taken when s1(=a2) <= 0 (signed), and falls through when s1(=a2) > 0 (signed).
  The `beq` branch at 0x21a5ad0 targets 0x21a5af8, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0x21a5af0 targets 0x21a5ad8, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x21a5afc targets 0x21a5bc8, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `bne` branch at 0x21a5bc0 targets 0x21a5b04, is taken when a1(=table(0x8)) != a6(=(a2 + a1)), and falls through when a1(=table(0x8)) == a6(=(a2 + a1)).
  The `beq` branch at 0x21a5bcc targets 0x21a5be0, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a5be4 targets 0x21a5bf8, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a5c14 targets 0x21a5c2c, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a5c50 targets 0x21a5a04 and is always taken.
  The return at 0x21a5c08 has v0 = 0x0.
  The return at 0x21a5c3c has v0 = -0x1.

- `XTestGetInput` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a5c60 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a5c60-0x21a5d98 (312 bytes).
  It occupies 312 bytes.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a5c64, `ld` at 0x21a5d14, `ld` at 0x21a5d68.
  The `ld` at 0x21a5c8c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a5cb8, `ld` at 0x21a5ce8, `ld` at 0x21a5d64.
  The `ld` at 0x21a5cbc loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a5cd8 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a5ce0, `sb` at 0x21a5d10.
  The `sh` at 0x21a5ce4 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a5cf0 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a5cfc stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a5d04 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sb` at 0x21a5d08 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a5d0c stores 4 bytes to [a0+176]:8 +0x4.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a5d20, `ld` at 0x21a5d74.
  The `ld` at 0x21a5d2c loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `jalr` at 0x21a5c90 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a0+2408]:8.
  The `bgezall` at 0x21a5ca4 calls (unnamed) [0x21a6170] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5d24 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x2, a3=[a0+2408]:8, a4=[a0+152]:8+1, a5=0x1, a6=[a0+176]:8+8, a7=0x8.
  The `jalr` at 0x21a5d38 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5d58 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5d78 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `beq` branch at 0x21a5c84 targets 0x21a5c98, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a5cb0 targets 0x21a5d68, is taken when v0(=ret(0x21a6170)) == at(=-0x1), and falls through when v0(=ret(0x21a6170)) != at(=-0x1).
  The `bne` branch at 0x21a5cc8 targets 0x21a5d58, is taken when v0(=[a0+184]:8) < v1(=[a0+176]:8+8) (unsigned), and falls through when v0(=[a0+184]:8) >= v1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a5d18 targets 0x21a5d2c, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a5d30 targets 0x21a5d44, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a5d60 targets 0x21a5cd0 and is always taken.
  The `beq` branch at 0x21a5d6c targets 0x21a5d84, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The return at 0x21a5d50 has v0 = 0x0.
  The return at 0x21a5d90 has v0 = -0x1.

- `XTestStopInput` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a5da0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a5da0-0x21a5ecc (300 bytes).
  It occupies 300 bytes.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a5da4, `ld` at 0x21a5e44, `ld` at 0x21a5e9c.
  The `ld` at 0x21a5dc8 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a5df4, `ld` at 0x21a5e20, `ld` at 0x21a5e98.
  The `ld` at 0x21a5df8 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a5e0c stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a5e14, `sb` at 0x21a5e40.
  The `sh` at 0x21a5e1c stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a5e28 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a5e30 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a5e38 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sb` at 0x21a5e3c stores 1 byte to [a0+176]:8 +0x1.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a5e50, `ld` at 0x21a5ea8.
  The `ld` at 0x21a5e5c loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `jalr` at 0x21a5dcc calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[a0+2408]:8, a3=a3 at entry (arg3).
  The `bgezall` at 0x21a5de0 calls (unnamed) [0x21a6170] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5e54 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x3, a2=[a0+2408]:8, a3=[a0+152]:8+1, a4=0x1, a5=[a0+176]:8+4, a6=0x4.
  The `jalr` at 0x21a5e68 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5e8c calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=[0x21bfe40], a3=?.
  The `jalr` at 0x21a5eac calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+2408]:8, a3=?.
  The `beq` branch at 0x21a5dc0 targets 0x21a5dd4, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a5dec targets 0x21a5e9c, is taken when v0(=ret(0x21a6170)) == at(=-0x1), and falls through when v0(=ret(0x21a6170)) != at(=-0x1).
  The `bne` branch at 0x21a5e04 targets 0x21a5e88, is taken when v0(=[a0+184]:8) < v1(=[a0+176]:8+4) (unsigned), and falls through when v0(=[a0+184]:8) >= v1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21a5e48 targets 0x21a5e5c, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a5e60 targets 0x21a5e74, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a5e94 targets 0x21a5e08 and is always taken.
  The `beq` branch at 0x21a5ea0 targets 0x21a5eb8, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The return at 0x21a5e80 has v0 = 0x0.
  The return at 0x21a5ec4 has v0 = -0x1.

- `XTestReset` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a5ed0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a5ed0-0x21a6008 (312 bytes).
  It occupies 312 bytes.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a5ed4, `ld` at 0x21a5f74, `ld` at 0x21a5fd4.
  The `ld` at 0x21a5ef8 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a5f24, `ld` at 0x21a5f50, `ld` at 0x21a5fd0.
  The `ld` at 0x21a5f28 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a5f3c stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a5f44, `sb` at 0x21a5f70.
  The `sh` at 0x21a5f4c stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a5f54 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a5f60 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a5f68 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sb` at 0x21a5f6c stores 1 byte to [a0+176]:8 +0x1.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a5f80, `ld` at 0x21a5fe0.
  The `ld` at 0x21a5f8c loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `jalr` at 0x21a5efc calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[a0+2408]:8, a3=a3 at entry (arg3).
  The `bgezall` at 0x21a5f10 calls (unnamed) [0x21a6170] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5f84 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x4, a2=[a0+2408]:8, a3=[a0+152]:8+1, a4=0x1, a5=[a0+176]:8+4, a6=0x4.
  The `jalr` at 0x21a5f98 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a5fc4 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=[0x21bfe40], a3=?.
  The `jalr` at 0x21a5fe4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+2408]:8, a3=?.
  The `beq` branch at 0x21a5ef0 targets 0x21a5f04, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a5f1c targets 0x21a5fd4, is taken when v0(=ret(0x21a6170)) == at(=-0x1), and falls through when v0(=ret(0x21a6170)) != at(=-0x1).
  The `bne` branch at 0x21a5f34 targets 0x21a5fc0, is taken when v0(=[a0+184]:8) < v1(=[a0+176]:8+4) (unsigned), and falls through when v0(=[a0+184]:8) >= v1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21a5f78 targets 0x21a5f8c, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a5f90 targets 0x21a5fa4, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a5fcc targets 0x21a5f38 and is always taken.
  The `beq` branch at 0x21a5fd8 targets 0x21a5ff0, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The return at 0x21a5fb0 has v0 = 0x0.
  The return at 0x21a6000 has v0 = -0x1.
  The instructions from 0x21a5fb8 to 0x21a5fbc are not reached by any path from the entry, and their branches are not listed.

- `XTestQueryInputSize` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a6010 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a6010-0x21a6164 (340 bytes).
  It occupies 340 bytes.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a6014, `ld` at 0x21a60dc, `ld` at 0x21a6134.
  The `ld` at 0x21a603c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a6068, `ld` at 0x21a6098, `ld` at 0x21a6130.
  The `ld` at 0x21a606c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a6084 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a608c, `sb` at 0x21a60c0.
  The `sh` at 0x21a6094 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a60a0 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a60a8 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a60b4 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sb` at 0x21a60cc stores 1 byte to [a0+176]:8 +0x1.
  The `sd` at 0x21a60d8 stores 8 bytes to a1 (arg1 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a60e8, `ld` at 0x21a6140.
  The `ld` at 0x21a60f4 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `jalr` at 0x21a6040 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a0+2408]:8.
  The `bgezall` at 0x21a6054 calls (unnamed) [0x21a6170] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a60c8 calls _XReply with a0=a0 at entry (arg0), a1=sp-64, a2=0x0, a3=0x1, a4=0x5, a5=[a0+176]:8, a6=[0x21bfe40], a7=[a0+152]:8+1.
  The `jalr` at 0x21a60ec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `jalr` at 0x21a6100 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a6124 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+176]:8.
  The `jalr` at 0x21a6144 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `beq` branch at 0x21a6034 targets 0x21a6048, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a6060 targets 0x21a6134, is taken when v0(=ret(0x21a6170)) == at(=-0x1), and falls through when v0(=ret(0x21a6170)) != at(=-0x1).
  The `bne` branch at 0x21a6078 targets 0x21a6120, is taken when v0(=[a0+184]:8) < v1(=[a0+176]:8+4) (unsigned), and falls through when v0(=[a0+184]:8) >= v1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21a60e0 targets 0x21a60f4, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a60f8 targets 0x21a610c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a612c targets 0x21a607c and is always taken.
  The `beq` branch at 0x21a6138 targets 0x21a6150, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The return at 0x21a6118 has v0 = 0x0.
  The return at 0x21a615c has v0 = -0x1.

- `XTestCheckExtInit` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a6170 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a6170-0x21a6198 (40 bytes).
  It occupies 40 bytes.
  The `beq` branch at 0x21a6174 targets 0x21a6184, is taken when at(=[0x21bfe40]) == 0, and falls through when at(=[0x21bfe40]) != 0.
  The `bgezl` branch at 0x21a6190 targets 0x21a61a0 and is always taken.
  The return at 0x21a617c has v0 = 0x0.

- `XTestInitExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a61a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a61a0-0x21a6284 (228 bytes).
  It occupies 228 bytes.
  The `lw` at 0x21a61e0 loads 4 bytes from ret(XInitExtension) +0x4.
  4 such `lw` accesses load 4 bytes from ret(XInitExtension) +0x8, including `lw` at 0x21a61f8, `lw` at 0x21a6204, `lw` at 0x21a6234.
  The `lw` at 0x21a6240 loads 4 bytes from sym(XTestInputActionType) +0x0.
  The `lw` at 0x21a6244 loads 4 bytes from sym(XTestFakeAckType) +0x0.
  The `sw` at 0x21a624c stores 4 bytes to sym(XTestInputActionType) +0x0.
  The `sw` at 0x21a6268 stores 4 bytes to sym(XTestFakeAckType) +0x0.
  The `jalr` at 0x21a61c0 calls XInitExtension with a0=a0 at entry (arg0), a1=0x21b5768, a2=0x5768, a3=a3 at entry (arg3).
  The `jalr` at 0x21a61fc calls XESetWireToEvent with a0=a0 at entry (arg0), a1=[ret(XInitExtension)+8], a2=0x21a6290, a3=?.
  The `jalr` at 0x21a6220 calls XESetWireToEvent with a0=a0 at entry (arg0), a1=[ret(XInitExtension)+8]+1, a2=0x21a6290, a3=sym(XESetWireToEvent).
  The `beq` branch at 0x21a61c8 targets 0x21a626c, is taken when v0(=ret(XInitExtension)) == 0, and falls through when v0(=ret(XInitExtension)) != 0.
  The return at 0x21a6264 has v0 = 0x0.
  The return at 0x21a627c has v0 = -0x1.

- `XTestWireToEvent` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a6290 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a6290-0x21a6390 (256 bytes).
  It occupies 256 bytes.
  2 such `lbu` accesses load 1 byte from a2 (arg2 at entry) +0x0, including `lbu` at 0x21a6298, `lbu` at 0x21a6350.
  The `sd` at 0x21a62ac stores 8 bytes to a1 (arg1 at entry) +0x8.
  The `sw` at 0x21a62b0 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0x21a62b4 loads 4 bytes from sym(XTestInputActionType) +0x0.
  The `lw` at 0x21a62c0 loads 4 bytes from sym(XTestFakeAckType) +0x0.
  4 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x21a62d8, `lbu` at 0x21a62f0, `lbu` at 0x21a6308.
  4 such `sb` accesses store 1 byte to ?, including `sb` at 0x21a62e4, `sb` at 0x21a62fc, `sb` at 0x21a6314.
  The `jalr` at 0x21a635c calls printf with a0=0x21b5778, a1=[a2]:1, a2=a2 at entry (arg2), a3=0x5778, a4=[a2]:1, a5=[sym(XTestFakeAckType)].
  The `jalr` at 0x21a637c calls printf with a0=0x21b57a8, a1=0x21b5768, a2=0x5768, a3=0x57a8.
  The `jalr` at 0x21a6388 calls exit with a0=0x1, a1=?, a2=?, a3=?.
  The `bne` branch at 0x21a62bc targets 0x21a6340, is taken when at(=[sym(XTestInputActionType)]) != a4(=[a2]:1), and falls through when at(=[sym(XTestInputActionType)]) == a4(=[a2]:1).
  The `bne` branch at 0x21a6328 targets 0x21a62cc, is taken when a2(?) != a3(=a2+28), and falls through when a2(?) == a3(=a2+28).
  The `beq` branch at 0x21a6340 targets 0x21a6330, is taken when a5(=[sym(XTestFakeAckType)]) == a4(=[a2]:1), and falls through when a5(=[sym(XTestFakeAckType)]) != a4(=[a2]:1).
  The return at 0x21a6338 has v0 = 0x1.

- `XTestPressKey` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a6390 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a6390-0x21a63ec (92 bytes).
  It occupies 92 bytes.
  The `bgezall` at 0x21a63d4 calls (unnamed) [0x21a6450] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x21a63a8 targets 0x21a63b4, is taken when a3 < 0x8 (unsigned), and falls through when a3 >= 0x8 (unsigned).
  The `bne` branch at 0x21a63b0 targets 0x21a63c4, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The return at 0x21a63bc has v0 = -0x1.
  The return at 0x21a63e4 has v0 = ret(0x21a6450).

- `XTestPressButton` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a63f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a63f0-0x21a6444 (84 bytes).
  It occupies 84 bytes.
  The `bgezall` at 0x21a642c calls (unnamed) [0x21a6450] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x21a6408 targets 0x21a641c, is taken when a3 < 0x8 (unsigned), and falls through when a3 >= 0x8 (unsigned).
  The return at 0x21a6414 has v0 = -0x1.
  The return at 0x21a643c has v0 = ret(0x21a6450).

- `XTestKeyOrButton` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a6450 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a6450-0x21a6694 (580 bytes).
  It occupies 580 bytes.
  The `bgezall` at 0x21a64dc calls XTestCheckDelay [0x21a6910] with a0=a0 at entry (arg0), a1=sp-32, a2=0x21a6910, a3=0x21a0000, a4=0x6910.
  The `bgezall` at 0x21a6528 calls XTestPackInputAction [0x21a6980] with a0=a0 at entry (arg0), a1=sp-96, a2=0x4, a3=?, a5=0x21a6980, a7=0x6980.
  The `bgezall` at 0x21a6554 calls XTestCheckDelay [0x21a6910] with a0=a0 at entry (arg0), a1=sp-32, a2=?, a3=?.
  The `bgezall` at 0x21a6580 calls XTestCheckDelay [0x21a6910] with a0=a0 at entry (arg0), a1=sp-32, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x21a65ac calls XTestCheckDelay [0x21a6910] with a0=a0 at entry (arg0), a1=sp-32, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x21a65f4 calls XTestPackInputAction [0x21a6980] with a0=a0 at entry (arg0), a1=sp-96, a2=0x4, a3=?.
  The `bgezall` at 0x21a6634 calls XTestPackInputAction [0x21a6980] with a0=a0 at entry (arg0), a1=sp-96, a2=0x4, a3=?, a4=a2 at entry (arg2), a5=a3 at entry (arg3).
  The `bgezall` at 0x21a667c calls XTestPackInputAction [0x21a6980] with a0=a0 at entry (arg0), a1=sp-96, a2=0x4, a3=?.
  The `bltz` branch at 0x21a6460 targets 0x21a64b0, is taken when a1 < 0 (signed), and falls through when a1 >= 0 (signed).
  The `beq` branch at 0x21a646c targets 0x21a64b4, is taken when a1 >= 0x10 (signed), and falls through when a1 < 0x10 (signed).
  The `beq` branch at 0x21a647c targets 0x21a6570, is taken when a4 == v1(=0x1), and falls through when a4 != v1(=0x1).
  The `beq` branch at 0x21a6488 targets 0x21a659c, is taken when a4 == a0(=0x2), and falls through when a4 != a0(=0x2).
  The `beq` branch at 0x21a6490 targets 0x21a64c8, is taken when a4 == v0(=0x4), and falls through when a4 != v0(=0x4).
  The `beq` branch at 0x21a64e8 targets 0x21a6644, is taken when v0(=ret(XTestCheckDelay)) == a1(=-0x1), and falls through when v0(=ret(XTestCheckDelay)) != a1(=-0x1).
  The `beq` branch at 0x21a6534 targets 0x21a668c, is taken when v0(=ret(XTestPackInputAction)) == t2(=-0x1), and falls through when v0(=ret(XTestPackInputAction)) != t2(=-0x1).
  The `bne` branch at 0x21a6560 targets 0x21a65c8, is taken when v0(=ret(XTestCheckDelay)) != a0(=-0x1), and falls through when v0(=ret(XTestCheckDelay)) == a0(=-0x1).
  The `beq` branch at 0x21a6568 targets 0x21a649c and is always taken.
  The `bne` branch at 0x21a658c targets 0x21a6604, is taken when v0(=ret(XTestCheckDelay)) != at(=-0x1), and falls through when v0(=ret(XTestCheckDelay)) == at(=-0x1).
  The `beq` branch at 0x21a6594 targets 0x21a649c and is always taken.
  The `bne` branch at 0x21a65b8 targets 0x21a664c, is taken when v0(=ret(XTestCheckDelay)) != at(=-0x1), and falls through when v0(=ret(XTestCheckDelay)) == at(=-0x1).
  The `beq` branch at 0x21a65c0 targets 0x21a649c and is always taken.
  The `beq` branch at 0x21a65fc targets 0x21a649c and is always taken.
  The `beq` branch at 0x21a663c targets 0x21a649c and is always taken.
  The `beq` branch at 0x21a6644 targets 0x21a649c and is always taken.
  The `beq` branch at 0x21a6684 targets 0x21a649c and is always taken.
  The `beq` branch at 0x21a668c targets 0x21a649c and is always taken.
  The return at 0x21a64a8 has v0 = one of -0x1, ret(XTestPackInputAction).
  The return at 0x21a64c0 has v0 = -0x1.

- `XTestMovePointer` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a66a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a66a0-0x21a6908 (616 bytes).
  It occupies 616 bytes.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x21a674c, `lw` at 0x21a6754, `lw` at 0x21a67b4.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x21a6768, `ld` at 0x21a6828.
  The `bgezall` at 0x21a6770 calls (unnamed) [0x21a6980] with a0=a0 at entry (arg0), a1=sp-128, a2=0x8, a3=?.
  The `bgezall` at 0x21a67a4 calls (unnamed) [0x21a6910] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x21a6830 calls (unnamed) [0x21a6980] with a0=a0 at entry (arg0), a1=sp-120, a2=0x4, a3=?.
  The `bltz` branch at 0x21a66f8 targets 0x21a6878, is taken when a1 < 0 (signed), and falls through when a1 >= 0 (signed).
  The `beq` branch at 0x21a6704 targets 0x21a6878, is taken when a1 >= 0x10 (signed), and falls through when a1 < 0x10 (signed).
  The `beq` branch at 0x21a670c targets 0x21a6900, is taken when a5 == 0, and falls through when a5 != 0.
  The `beq` branch at 0x21a6714 targets 0x21a68b0, is taken when a5 == 0, and falls through when a5 != 0.
  The `beq` branch at 0x21a673c targets 0x21a679c and is always taken.
  The `beq` branch at 0x21a6778 targets 0x21a68f4, is taken when v0(=ret(0x21a6980)) == s6(=-0x1), and falls through when v0(=ret(0x21a6980)) != s6(=-0x1).
  The `beq` branch at 0x21a6794 targets 0x21a68b0, is taken when s4(?) == s8(=a5), and falls through when s4(?) != s8(=a5).
  The `beq` branch at 0x21a67ac targets 0x21a68e8, is taken when v0(=ret(0x21a6910)) == s6(=-0x1), and falls through when v0(=ret(0x21a6910)) != s6(=-0x1).
  The `beq` branch at 0x21a67d4 targets 0x21a6744, is taken when a3(?) >= 0x10 (signed), and falls through when a3(?) < 0x10 (signed).
  The `bne` branch at 0x21a67e0 targets 0x21a6744, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x21a67e8 targets 0x21a6748, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x21a67f0 targets 0x21a6748, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `bltz` branch at 0x21a67fc targets 0x21a6848, is taken when a3(?) < 0 (signed), and falls through when a3(?) >= 0 (signed).
  The `bltz` branch at 0x21a6804 targets 0x21a6860, is taken when v0(?) < 0 (signed), and falls through when v0(?) >= 0 (signed).
  The `bne` branch at 0x21a6838 targets 0x21a677c, is taken when v0(=ret(0x21a6980)) != s6(=-0x1), and falls through when v0(=ret(0x21a6980)) == s6(=-0x1).
  The `beq` branch at 0x21a6840 targets 0x21a6880 and is always taken.
  The `beq` branch at 0x21a6858 targets 0x21a6804 and is always taken.
  The `beq` branch at 0x21a6870 targets 0x21a6808 and is always taken.
  The `beq` branch at 0x21a68ec targets 0x21a6880 and is always taken.
  The `beq` branch at 0x21a68f8 targets 0x21a6880 and is always taken.
  The `beq` branch at 0x21a6900 targets 0x21a6880 and is always taken.
  The return at 0x21a68a8 has v0 = one of -0x1, 0x0.
  The return at 0x21a68e0 has v0 = 0x0.

- `XTestCheckDelay` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a6910 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a6910-0x21a697c (108 bytes).
  It occupies 108 bytes.
  2 such `ld` accesses load 8 bytes from a1 (arg1 at entry) +0x0, including `ld` at 0x21a6910, `ld` at 0x21a6954.
  The `sd` at 0x21a696c stores 8 bytes to a1 (arg1 at entry) +0x0.
  The `bgezall` at 0x21a6968 calls XTestPackInputAction [0x21a6980] with a0=a0 at entry (arg0), a1=sp-16, a2=0x8, a3=a3 at entry (arg3), a4=a1 at entry (arg1).
  The `bne` branch at 0x21a6920 targets 0x21a6940, is taken when at(=0xffff) < v1(=[a1]:8) (unsigned), and falls through when at(=0xffff) >= v1(=[a1]:8) (unsigned).
  The return at 0x21a692c has v0 = 0x0.
  The return at 0x21a6974 has v0 = ret(XTestPackInputAction).
  The instructions from 0x21a6934 to 0x21a693c are not reached by any path from the entry, and their branches are not listed.

- `XTestPackInputAction` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a6980 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a6980-0x21a6d04 (900 bytes).
  It occupies 900 bytes.
  4 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x21a69f0, `lbu` at 0x21a6a20, `lbu` at 0x21a6b88.
  4 such `sb` accesses store 1 byte to ?, including `sb` at 0x21a69fc, `sb` at 0x21a6a2c, `sb` at 0x21a6b94.
  2 such `lbu` accesses load 1 byte from table(0x1) +0x0, including `lbu` at 0x21a6a38, `lbu` at 0x21a6bcc.
  2 such `sb` accesses store 1 byte to table(0x1) +0x0, including `sb` at 0x21a6a44, `sb` at 0x21a6bd8.
  2 such `lbu` accesses load 1 byte from table(0x2) +0x0, including `lbu` at 0x21a6a50, `lbu` at 0x21a6be4.
  2 such `sb` accesses store 1 byte to table(0x2) +0x0, including `sb` at 0x21a6a5c, `sb` at 0x21a6bf0.
  2 such `lbu` accesses load 1 byte from table(0x3) +0x0, including `lbu` at 0x21a6a68, `lbu` at 0x21a6bfc.
  2 such `sb` accesses store 1 byte to table(0x3) +0x0, including `sb` at 0x21a6a74, `sb` at 0x21a6c08.
  2 such `lbu` accesses load 1 byte from table(0x4) +0x0, including `lbu` at 0x21a6a80, `lbu` at 0x21a6c14.
  2 such `sb` accesses store 1 byte to table(0x4) +0x0, including `sb` at 0x21a6a8c, `sb` at 0x21a6c20.
  2 such `lbu` accesses load 1 byte from table(0x5) +0x0, including `lbu` at 0x21a6a98, `lbu` at 0x21a6c2c.
  2 such `sb` accesses store 1 byte to table(0x5) +0x0, including `sb` at 0x21a6aa4, `sb` at 0x21a6c38.
  2 such `lbu` accesses load 1 byte from table(0x6) +0x0, including `lbu` at 0x21a6ab0, `lbu` at 0x21a6c44.
  2 such `sb` accesses store 1 byte to table(0x6) +0x0, including `sb` at 0x21a6abc, `sb` at 0x21a6c50.
  2 such `lbu` accesses load 1 byte from table(0x7) +0x0, including `lbu` at 0x21a6ac8, `lbu` at 0x21a6c5c.
  2 such `sb` accesses store 1 byte to table(0x7) +0x0, including `sb` at 0x21a6ad4, `sb` at 0x21a6c68.
  The `bgezall` at 0x21a6b38 calls XTestWriteInputActions [0x21a6d10] with a0=a0 at entry (arg0), a1=0x21c7768, a2=[0x21bfe4c], a3=one of 0x0, 0x1, a4=0x8, a6=[0x21bfe50]:8, a7=0x1.
  The `jalr` at 0x21a6ccc calls XTestQueryInputSize with a0=a0 at entry (arg0), a1=0x21bfe50, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a6=[0x21bfe50]:8.
  The `beq` branch at 0x21a6998 targets 0x21a6cc0, is taken when a6(=[0x21bfe50]:8) == 0, and falls through when a6(=[0x21bfe50]:8) != 0.
  The `beq` branch at 0x21a69b8 targets 0x21a6b0c, is taken when at(=(a2 + [0x21bfe4c])) >= 0x41 (signed), and falls through when at(=(a2 + [0x21bfe4c])) < 0x41 (signed).
  The `beq` branch at 0x21a69c8 targets 0x21a6b0c, is taken when t1(=[0x21bfe58]:8+1) >= a6(=[0x21bfe50]:8) (unsigned), and falls through when t1(=[0x21bfe58]:8+1) < a6(=[0x21bfe50]:8) (unsigned).
  The `blez` branch at 0x21a69d0 targets 0x21a6ad8, is taken when s0(=a2) <= 0 (signed), and falls through when s0(=a2) > 0 (signed).
  The `beq` branch at 0x21a69e0 targets 0x21a6a08, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x21a6a00 targets 0x21a69e8, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x21a6a0c targets 0x21a6ad8, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0x21a6ad0 targets 0x21a6a14, is taken when a1(=table(0x8)) != a3(=(a2 + a1)), and falls through when a1(=table(0x8)) == a3(=(a2 + a1)).
  The `beq` branch at 0x21a6ae8 targets 0x21a6af4, is taken when s0(=a2) >= 0 (signed), and falls through when s0(=a2) < 0 (signed).
  The `beq` branch at 0x21a6b10 targets 0x21a6b1c, is taken when a1(=[0x21bfe58]:8) >= a6(=[0x21bfe50]:8) (unsigned), and falls through when a1(=[0x21bfe58]:8) < a6(=[0x21bfe50]:8) (unsigned).
  The `beq` branch at 0x21a6b58 targets 0x21a6ca8, is taken when v0(=ret(XTestWriteInputActions)) == at(=-0x1), and falls through when v0(=ret(XTestWriteInputActions)) != at(=-0x1).
  The `blez` branch at 0x21a6b60 targets 0x21a6c6c, is taken when s0(=a2) <= 0 (signed), and falls through when s0(=a2) > 0 (signed).
  The `beq` branch at 0x21a6b78 targets 0x21a6ba0, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bne` branch at 0x21a6b98 targets 0x21a6b80, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x21a6ba0 targets 0x21a6c6c, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x21a6c64 targets 0x21a6ba8, is taken when a1(=table(0x8)) != a3(=(a2 + a1)), and falls through when a1(=table(0x8)) == a3(=(a2 + a1)).
  The `beq` branch at 0x21a6c74 targets 0x21a6c80, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x21a6cdc targets 0x21a6cec, is taken when v0(=ret(XTestQueryInputSize)) == a2(=-0x1), and falls through when v0(=ret(XTestQueryInputSize)) != a2(=-0x1).
  The `beq` branch at 0x21a6ce4 targets 0x21a69a4 and is always taken.
  The return at 0x21a6b04 has v0 = 0x0.
  The return at 0x21a6ca0 has v0 = 0x0.
  The return at 0x21a6cb8 has v0 = -0x1.
  The return at 0x21a6cfc has v0 = -0x1.

- `XTestWriteInputActions` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a6d10 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a6d10-0x21a6d94 (132 bytes).
  It occupies 132 bytes.
  The `jalr` at 0x21a6d20 calls XTestFakeInput with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a6d38 calls XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a6d84 calls XIfEvent with a0=a0 at entry (arg0), a1=sp-224, a2=0x21a6da0, a3=0x0, a4=0x6da0.
  The `beq` branch at 0x21a6d2c targets 0x21a6d60, is taken when v0(=ret(XTestFakeInput)) == at(=-0x1), and falls through when v0(=ret(XTestFakeInput)) != at(=-0x1).
  The `beq` branch at 0x21a6d48 targets 0x21a6d6c, is taken when v0(=a3) == v1(=0x1), and falls through when v0(=a3) != v1(=0x1).
  The `beq` branch at 0x21a6d8c targets 0x21a6d50 and is always taken.
  The return at 0x21a6d58 has v0 = 0x0.
  The return at 0x21a6d64 has v0 = -0x1.

- `XTestIdentifyMyEvent` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a6da0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a6da0-0x21a6dd0 (48 bytes).
  It occupies 48 bytes.
  The `ld` at 0x21a6dac loads 8 bytes from abs 0x21bfb20.
  The `lw` at 0x21a6db0 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x21a6db4 loads 4 bytes from sym(XTestFakeAckType) +0x0.
  The `bne` branch at 0x21a6db8 targets 0x21a6dc8, is taken when v0(=[a1]) != v1(=[sym(XTestFakeAckType)]), and falls through when v0(=[a1]) == v1(=[sym(XTestFakeAckType)]).
  The return at 0x21a6dc0 has v0 = 0x1.
  The return at 0x21a6dc8 has v0 = 0x0.

- `XTestFlush` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a6dd0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a6dd0-0x21a6e34 (100 bytes).
  It occupies 100 bytes.
  The `bgezall` at 0x21a6e1c calls (unnamed) [0x21a6d10] with a0=a0 at entry (arg0), a1=0x21c7768, a2=[0x21bfe4c], a3=0x1, a4=0x7768.
  The `bne` branch at 0x21a6de8 targets 0x21a6e00, is taken when a2(=[0x21bfe4c]) != 0, and falls through when a2(=[0x21bfe4c]) == 0.
  The return at 0x21a6df4 has v0 = 0x0.
  The return at 0x21a6e2c has v0 = ret(0x21a6d10).
  The instructions from 0x21a6dfc to 0x21a6dfc are not reached by any path from the entry, and their branches are not listed.

- `XSyncQueryExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a7330 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a7330-0x21a73b8 (136 bytes).
  It occupies 136 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a6e40) +0x10, including `ld` at 0x21a736c, `ld` at 0x21a738c.
  The `lw` at 0x21a7384 loads 4 bytes from [ret(0x21a6e40)+16]:8 +0x8.
  The `sw` at 0x21a7388 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0x21a7398 loads 4 bytes from [ret(0x21a6e40)+16]:8 +0xc.
  The `sw` at 0x21a739c stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0x21a7358 calls (unnamed) [0x21a6e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x21a7364 targets 0x21a73a8, is taken when v0(=ret(0x21a6e40)) == 0, and falls through when v0(=ret(0x21a6e40)) != 0.
  The `beq` branch at 0x21a7370 targets 0x21a73a8, is taken when a5(=[ret(0x21a6e40)+16]:8) == 0, and falls through when a5(=[ret(0x21a6e40)+16]:8) != 0.
  The return at 0x21a73a0 has v0 = 0x1.
  The return at 0x21a73b0 has v0 = 0x0.

- `XSyncInitialize` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a73c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a73c0-0x21a7588 (456 bytes).
  It occupies 456 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a6e40) +0x10, including `ld` at 0x21a7404, `ld` at 0x21a7474.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a7410, `ld` at 0x21a74ac.
  The `ld` at 0x21a741c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a7428, `ld` at 0x21a7454, `ld` at 0x21a753c.
  The `ld` at 0x21a742c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a7444 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a7448, `sb` at 0x21a74a4.
  The `sh` at 0x21a7450 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a745c loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a7468 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a7470 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a747c loads 4 bytes from [ret(0x21a6e40)+16]:8 +0x4.
  The `sb` at 0x21a7480 stores 1 byte to [a0+176]:8 +0x1.
  The `sb` at 0x21a748c stores 1 byte to [a0+176]:8 +0x4.
  The `sb` at 0x21a7498 stores 1 byte to [a0+176]:8 +0x5.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a74b8, `ld` at 0x21a7548.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a74c4, `ld` at 0x21a7554.
  The `sw` at 0x21a74ec stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x21a74f4 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0x21a73f4 calls (unnamed) [0x21a6e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a7420 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+2408]:8.
  The `jalr` at 0x21a74a0 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0x21a6e40)+16]:8+4], a5=0x3, a6=0x1, a7=[a0+176]:8+8.
  The `jalr` at 0x21a74bc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+2408]:8.
  The `jalr` at 0x21a74d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a7530 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a754c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+2408]:8.
  The `jalr` at 0x21a7560 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a7578 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd78]:8, a2=?, a3=?.
  The `beq` branch at 0x21a73fc targets 0x21a7570, is taken when v0(=ret(0x21a6e40)) == 0, and falls through when v0(=ret(0x21a6e40)) != 0.
  The `beq` branch at 0x21a7408 targets 0x21a7574, is taken when v1(=[ret(0x21a6e40)+16]:8) == 0, and falls through when v1(=[ret(0x21a6e40)+16]:8) != 0.
  The `beq` branch at 0x21a7414 targets 0x21a7428, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a743c targets 0x21a7530, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a74a8 targets 0x21a7540, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a74b0 targets 0x21a74c4, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a74c8 targets 0x21a74dc, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a7538 targets 0x21a7444 and is always taken.
  The `beq` branch at 0x21a7540 targets 0x21a7554, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a7558 targets 0x21a7568, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a7568 targets 0x21a7518 and is always taken.
  The `beq` branch at 0x21a7580 targets 0x21a7518 and is always taken.
  The return at 0x21a7510 has v0 = ?.
  The return at 0x21a7528 has v0 = 0x0.

- `XSyncListSystemCounters` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a7590 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a7590-0x21a7854 (708 bytes).
  It occupies 708 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a6e40) +0x10, including `ld` at 0x21a75d0, `ld` at 0x21a7640.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a75dc, `ld` at 0x21a7700, `ld` at 0x21a77dc.
  The `ld` at 0x21a75e8 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a75f4, `ld` at 0x21a7620, `ld` at 0x21a77ec.
  The `ld` at 0x21a75f8 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a7610 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a7618, `sb` at 0x21a7664.
  The `sh` at 0x21a761c stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a7628 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a7634 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a763c stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a764c loads 4 bytes from [ret(0x21a6e40)+16]:8 +0x4.
  The `sb` at 0x21a7658 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a7674 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `ld` at 0x21a770c loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a7718 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  2 such `lwu` accesses load 4 bytes from ?, including `lwu` at 0x21a777c, `lwu` at 0x21a77a4.
  The `lhu` at 0x21a7780 loads 2 bytes from ?.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x21a7788, `lw` at 0x21a7790.
  2 such `sd` accesses store 8 bytes to ?, including `sd` at 0x21a779c, `sd` at 0x21a77bc.
  The `sb` at 0x21a77a8 stores 1 byte to ?.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x21a77c8, `sw` at 0x21a77cc.
  The `bgezall` at 0x21a75c0 calls (unnamed) [0x21a6e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a75ec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+2408]:8, a3=?.
  The `jalr` at 0x21a7660 calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x0, a3=0x0, a4=[[ret(0x21a6e40)+16]:8+4], a5=0x1, a6=[a0+152]:8+1, a7=0x1.
  The `jalr` at 0x21a7694 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21a76c0 calls malloc with a0=?, a1=-0x1, a2=?, a3=?.
  The `jalr` at 0x21a76dc calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a76ec calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a7710 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+2408]:8, a3=?.
  The `jalr` at 0x21a7724 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a7754 calls _XReadPad with a0=a0 at entry (arg0), a1=ret(malloc), a2=?, a3=?.
  The `jalr` at 0x21a77e0 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x21a7808 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd78]:8, a2=?, a3=?.
  The `jalr` at 0x21a7844 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0x21a75c8 targets 0x21a7800, is taken when v0(=ret(0x21a6e40)) == 0, and falls through when v0(=ret(0x21a6e40)) != 0.
  The `beq` branch at 0x21a75d4 targets 0x21a7804, is taken when v1(=[ret(0x21a6e40)+16]:8) == 0, and falls through when v1(=[ret(0x21a6e40)+16]:8) != 0.
  The `beq` branch at 0x21a75e0 targets 0x21a75f4, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a7608 targets 0x21a77e0, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21a7668 targets 0x21a77f0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `blez` branch at 0x21a7680 targets 0x21a7700, is taken when v0(?) <= 0 (signed), and falls through when v0(?) > 0 (signed).
  The `beq` branch at 0x21a76a8 targets 0x21a782c, is taken when a0(?) == a1(=-0x1), and falls through when a0(?) != a1(=-0x1).
  The `beq` branch at 0x21a76c8 targets 0x21a7838, is taken when s1(=ret(malloc)) == 0, and falls through when s1(=ret(malloc)) != 0.
  The `bne` branch at 0x21a76d0 targets 0x21a7748, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x21a7704 targets 0x21a7718, is taken when a2(=[a0+2408]:8) == 0, and falls through when a2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a771c targets 0x21a7730, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `blez` branch at 0x21a7778 targets 0x21a7700, is taken when a1(?) <= 0 (signed), and falls through when a1(?) > 0 (signed).
  The `bne` branch at 0x21a77d0 targets 0x21a7780, is taken when a2(?) < a4(?) (signed), and falls through when a2(?) >= a4(?) (signed).
  The `beq` branch at 0x21a77d8 targets 0x21a7704 and is always taken.
  The `beq` branch at 0x21a77e8 targets 0x21a7610 and is always taken.
  The `beq` branch at 0x21a77f0 targets 0x21a7700 and is always taken.
  The `beq` branch at 0x21a7830 targets 0x21a76b8 and is always taken.
  The `beq` branch at 0x21a7838 targets 0x21a76e8, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0x21a784c targets 0x21a76e8 and is always taken.
  The return at 0x21a7740 has v0 = ?.
  The return at 0x21a7824 has v0 = 0x0.
  The instructions from 0x21a77f8 to 0x21a77fc are not reached by any path from the entry, and their branches are not listed.

- `XSyncFreeSystemCounterList` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a7860 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a7860-0x21a78b4 (84 bytes).
  It occupies 84 bytes.
  The `ld` at 0x21a788c loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0x21a7898 calls free with a0=[a0]:8-14, a1=-0xe, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a78a4 calls free with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bne` branch at 0x21a7874 targets 0x21a7888, is taken when a0 != 0, and falls through when a0 == 0.
  The `beq` branch at 0x21a78ac targets 0x21a787c and is always taken.
  The return at 0x21a7880 has v0 = one of 0x1d458, ret(free).

- `XSyncCreateCounter` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a78c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a78c0-0x21a7a34 (372 bytes).
  It occupies 372 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a6e40) +0x10, including `ld` at 0x21a7900, `ld` at 0x21a7974.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a790c, `ld` at 0x21a79ac.
  The `ld` at 0x21a7918 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a7924, `ld` at 0x21a7954, `ld` at 0x21a79fc.
  The `ld` at 0x21a7928 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a7940 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a7948, `sb` at 0x21a7980.
  The `sh` at 0x21a7950 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a795c loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a7968 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a7970 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a7978 loads 4 bytes from [ret(0x21a6e40)+16]:8 +0x4.
  The `sb` at 0x21a797c stores 1 byte to [a0+176]:8 +0x1.
  The `ld` at 0x21a7984 loads 8 bytes from a0 (arg0 at entry) +0x48.
  The `sw` at 0x21a7998 stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x21a79a4 stores 4 bytes to [a0+176]:8 +0xc.
  The `sw` at 0x21a79a8 stores 4 bytes to [a0+176]:8 +0x8.
  The `ld` at 0x21a79b8 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a79c4 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `lwu` at 0x21a79e4 loads 4 bytes from [a0+176]:8 +0x4.
  The `bgezall` at 0x21a78f0 calls (unnamed) [0x21a6e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a791c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `jalr` at 0x21a7990 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=0x2, a3=[[ret(0x21a6e40)+16]:8+4], a4=[a0+152]:8+1, a5=0x1, a6=[a0+176]:8+16, a7=0x10.
  The `jalr` at 0x21a79bc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `jalr` at 0x21a79d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a79f4 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+16, a2=?, a3=?.
  The `jalr` at 0x21a7a14 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd78]:8, a2=?, a3=?.
  The `beq` branch at 0x21a78f8 targets 0x21a7a08, is taken when v0(=ret(0x21a6e40)) == 0, and falls through when v0(=ret(0x21a6e40)) != 0.
  The `beq` branch at 0x21a7904 targets 0x21a7a0c, is taken when v1(=[ret(0x21a6e40)+16]:8) == 0, and falls through when v1(=[ret(0x21a6e40)+16]:8) != 0.
  The `beq` branch at 0x21a7910 targets 0x21a7924, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a7938 targets 0x21a79f4, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+16) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+16) (unsigned).
  The `beq` branch at 0x21a79b0 targets 0x21a79c4, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a79c8 targets 0x21a79dc, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a7a00 targets 0x21a7940 and is always taken.
  The return at 0x21a79ec has v0 = [[a0+176]:8+4].
  The return at 0x21a7a2c has v0 = 0x0.

- `XSyncSetCounter` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a7a40 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a7a40-0x21a7bac (364 bytes).
  It occupies 364 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a6e40) +0x10, including `ld` at 0x21a7a84, `ld` at 0x21a7b00.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a7a90, `ld` at 0x21a7b20.
  The `ld` at 0x21a7a9c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a7aa8, `ld` at 0x21a7ae0, `ld` at 0x21a7b74.
  The `ld` at 0x21a7aac loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a7acc stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a7ad4, `sb` at 0x21a7b1c.
  The `sh` at 0x21a7adc stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a7ae8 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a7af4 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a7afc stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a7b08 loads 4 bytes from [ret(0x21a6e40)+16]:8 +0x4.
  The `sb` at 0x21a7b0c stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a7b10 stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x21a7b14 stores 4 bytes to [a0+176]:8 +0xc.
  The `sw` at 0x21a7b18 stores 4 bytes to [a0+176]:8 +0x8.
  The `ld` at 0x21a7b2c loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a7b38 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a7a74 calls (unnamed) [0x21a6e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a7aa0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a7b30 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a2 at entry (arg2), a3=?, a4=a1 at entry (arg1), a5=0x3, a6=[[ret(0x21a6e40)+16]:8+4], a7=[a0+152]:8+1.
  The `jalr` at 0x21a7b44 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a7b68 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+16, a2=?, a3=?.
  The `jalr` at 0x21a7b8c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd78]:8, a2=?, a3=?.
  The `beq` branch at 0x21a7a7c targets 0x21a7b80, is taken when v0(=ret(0x21a6e40)) == 0, and falls through when v0(=ret(0x21a6e40)) != 0.
  The `beq` branch at 0x21a7a88 targets 0x21a7b84, is taken when v0(=[ret(0x21a6e40)+16]:8) == 0, and falls through when v0(=[ret(0x21a6e40)+16]:8) != 0.
  The `beq` branch at 0x21a7a94 targets 0x21a7aa8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a7abc targets 0x21a7b68, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+16) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+16) (unsigned).
  The `beq` branch at 0x21a7b24 targets 0x21a7b38, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a7b3c targets 0x21a7b50, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a7b70 targets 0x21a7ac4 and is always taken.
  The return at 0x21a7b60 has v0 = 0x1.
  The return at 0x21a7ba4 has v0 = 0x0.
  The instructions from 0x21a7b78 to 0x21a7b7c are not reached by any path from the entry, and their branches are not listed.

- `XSyncChangeCounter` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a7bb0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a7bb0-0x21a7d10 (352 bytes).
  It occupies 352 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a6e40) +0x10, including `ld` at 0x21a7bf4, `ld` at 0x21a7c68.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a7c00, `ld` at 0x21a7c88.
  The `ld` at 0x21a7c0c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a7c18, `ld` at 0x21a7c48, `ld` at 0x21a7ce0.
  The `ld` at 0x21a7c1c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a7c38 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a7c40, `sb` at 0x21a7c84.
  The `sh` at 0x21a7c44 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a7c50 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a7c5c stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a7c64 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a7c70 loads 4 bytes from [ret(0x21a6e40)+16]:8 +0x4.
  The `sb` at 0x21a7c74 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a7c78 stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x21a7c7c stores 4 bytes to [a0+176]:8 +0xc.
  The `sw` at 0x21a7c80 stores 4 bytes to [a0+176]:8 +0x8.
  The `ld` at 0x21a7c94 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a7ca0 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a7be4 calls (unnamed) [0x21a6e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a7c10 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a7c98 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a2 at entry (arg2), a3=?, a4=a1 at entry (arg1), a5=0x4, a6=[[ret(0x21a6e40)+16]:8+4], a7=[a0+152]:8+1.
  The `jalr` at 0x21a7cac calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a7cd4 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+16, a2=a2 at entry (arg2), a3=?.
  The `jalr` at 0x21a7cf0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd78]:8, a2=?, a3=?.
  The `beq` branch at 0x21a7bec targets 0x21a7ce4, is taken when v0(=ret(0x21a6e40)) == 0, and falls through when v0(=ret(0x21a6e40)) != 0.
  The `beq` branch at 0x21a7bf8 targets 0x21a7ce8, is taken when v0(=[ret(0x21a6e40)+16]:8) == 0, and falls through when v0(=[ret(0x21a6e40)+16]:8) != 0.
  The `beq` branch at 0x21a7c04 targets 0x21a7c18, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a7c2c targets 0x21a7cd0, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+16) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+16) (unsigned).
  The `beq` branch at 0x21a7c8c targets 0x21a7ca0, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a7ca4 targets 0x21a7cb8, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a7cdc targets 0x21a7c30 and is always taken.
  The return at 0x21a7cc8 has v0 = 0x1.
  The return at 0x21a7d08 has v0 = 0x0.

- `XSyncDestroyCounter` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a7d10 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a7d10-0x21a7e6c (348 bytes).
  It occupies 348 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a6e40) +0x10, including `ld` at 0x21a7d50, `ld` at 0x21a7dc4.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a7d5c, `ld` at 0x21a7ddc.
  The `ld` at 0x21a7d68 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a7d74, `ld` at 0x21a7da4, `ld` at 0x21a7e30.
  The `ld` at 0x21a7d78 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a7d90 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a7d98, `sb` at 0x21a7dd8.
  The `sh` at 0x21a7da0 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a7dac loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a7db8 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a7dc0 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a7dcc loads 4 bytes from [ret(0x21a6e40)+16]:8 +0x4.
  The `sb` at 0x21a7dd0 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a7dd4 stores 4 bytes to [a0+176]:8 +0x4.
  The `ld` at 0x21a7de8 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a7df4 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a7d40 calls (unnamed) [0x21a6e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a7d6c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a7dec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a1 at entry (arg1), a3=0x6, a4=[[ret(0x21a6e40)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+8.
  The `jalr` at 0x21a7e00 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a7e24 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a7e4c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd78]:8, a2=?, a3=?.
  The `beq` branch at 0x21a7d48 targets 0x21a7e40, is taken when v0(=ret(0x21a6e40)) == 0, and falls through when v0(=ret(0x21a6e40)) != 0.
  The `beq` branch at 0x21a7d54 targets 0x21a7e44, is taken when v0(=[ret(0x21a6e40)+16]:8) == 0, and falls through when v0(=[ret(0x21a6e40)+16]:8) != 0.
  The `beq` branch at 0x21a7d60 targets 0x21a7d74, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a7d88 targets 0x21a7e24, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a7de0 targets 0x21a7df4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a7df8 targets 0x21a7e0c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a7e2c targets 0x21a7d90 and is always taken.
  The return at 0x21a7e1c has v0 = 0x1.
  The return at 0x21a7e64 has v0 = 0x0.
  The instructions from 0x21a7e34 to 0x21a7e3c are not reached by any path from the entry, and their branches are not listed.

- `XSyncQueryCounter` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a7e70 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a7e70-0x21a803c (460 bytes).
  It occupies 460 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a6e40) +0x10, including `ld` at 0x21a7eb4, `ld` at 0x21a7f28.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a7ec0, `ld` at 0x21a7f6c, `ld` at 0x21a7fc8.
  The `ld` at 0x21a7ecc loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a7ed8, `ld` at 0x21a7f08, `ld` at 0x21a7fc4.
  The `ld` at 0x21a7edc loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a7ef4 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a7efc, `sb` at 0x21a7f50.
  The `sh` at 0x21a7f04 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a7f10 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a7f1c stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a7f24 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a7f30 loads 4 bytes from [ret(0x21a6e40)+16]:8 +0x4.
  The `sb` at 0x21a7f38 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a7f44 stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x21a7f60 stores 4 bytes to a2 (arg2 at entry) +0x4.
  The `sw` at 0x21a7f68 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a7f78, `ld` at 0x21a7fd4.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a7f84, `ld` at 0x21a7fe0.
  The `bgezall` at 0x21a7ea4 calls (unnamed) [0x21a6e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a7ed0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a7f4c calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0x21a6e40)+16]:8+4], a5=a1 at entry (arg1), a6=0x5, a7=0x1.
  The `jalr` at 0x21a7f7c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a7f90 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a7fb8 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a7fd8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a7fec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a801c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd78]:8, a2=?, a3=?.
  The `beq` branch at 0x21a7eac targets 0x21a8010, is taken when v0(=ret(0x21a6e40)) == 0, and falls through when v0(=ret(0x21a6e40)) != 0.
  The `beq` branch at 0x21a7eb8 targets 0x21a8014, is taken when v1(=[ret(0x21a6e40)+16]:8) == 0, and falls through when v1(=[ret(0x21a6e40)+16]:8) != 0.
  The `beq` branch at 0x21a7ec4 targets 0x21a7ed8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a7eec targets 0x21a7fb4, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a7f54 targets 0x21a7fc8, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a7f70 targets 0x21a7f84, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a7f88 targets 0x21a7f9c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a7fc0 targets 0x21a7ef0 and is always taken.
  The `beq` branch at 0x21a7fcc targets 0x21a7fe0, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a7fe4 targets 0x21a7ff8, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21a7fac has v0 = 0x1.
  The return at 0x21a8008 has v0 = 0x0.
  The return at 0x21a8034 has v0 = 0x0.

- `XSyncAwait` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a8040 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a8040-0x21a8328 (744 bytes).
  It occupies 744 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a6e40) +0x10, including `ld` at 0x21a8088, `ld` at 0x21a8108.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a8094, `ld` at 0x21a8288.
  The `ld` at 0x21a80a0 loads 8 bytes from [a0+2408]:8 +0x0.
  5 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a80ac, `ld` at 0x21a80dc, `ld` at 0x21a823c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb8, including `ld` at 0x21a80b0, `ld` at 0x21a8240.
  The `sd` at 0x21a80c8 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a80d0, `sb` at 0x21a812c.
  4 such `sh` accesses store 2 bytes to [a0+176]:8 +0x2, including `sh` at 0x21a80d8, `sh` at 0x21a8164, `sh` at 0x21a81b8.
  The `ld` at 0x21a80e4 loads 8 bytes from a0 (arg0 at entry) +0x98.
  2 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0xb0, including `sd` at 0x21a80ec, `sd` at 0x21a8278.
  The `sd` at 0x21a80f8 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lhu` at 0x21a8100 loads 2 bytes from [a0+176]:8 +0x2.
  The `lw` at 0x21a8118 loads 4 bytes from [ret(0x21a6e40)+16]:8 +0x4.
  The `sb` at 0x21a8120 stores 1 byte to [a0+176]:8 +0x1.
  The `ld` at 0x21a8130 loads 8 bytes from a0 (arg0 at entry) +0x960.
  The `lwu` at 0x21a8178 loads 4 bytes from ?.
  The `sw` at 0x21a81ac stores 4 bytes to [a0+176]:8 +0x4.
  The `ld` at 0x21a8204 loads 8 bytes from ?.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0x21a820c, `lw` at 0x21a8214, `lw` at 0x21a821c.
  The `ld` at 0x21a8294 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a82a0 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `ld` at 0x21a8324 loads 8 bytes from a1 (arg1 at entry) +0x0.
  The `bgezall` at 0x21a8078 calls (unnamed) [0x21a6e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a80a4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a8180 calls memmove with a0=[a0+176]:8+8, a1=[a0+176]:8+4, a2=?, a3=?, a4=0x7, a5=[a0+176]:8, a6=[[a0+176]:8+2]:2, a7=[a0+2400]:8.
  The `jalr` at 0x21a81a8 calls _XData32 with a0=a0 at entry (arg0), a1=sp-128, a2=0x4, a3=?.
  The `jalr` at 0x21a81ec calls _XSend with a0=a0 at entry (arg0), a1=sp-120, a2=0x1c, a3=?, a5=[a0+176]:8.
  The `jalr` at 0x21a8260 calls memcpy with a0=[a0+176]:8, a1=sp-120, a2=0x1c, a3=?, a5=[a0+176]:8.
  The `jalr` at 0x21a8298 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a82ac calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a82dc calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+176]:8.
  The `jalr` at 0x21a82f8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd78]:8, a2=?, a3=?.
  The `beq` branch at 0x21a8080 targets 0x21a82ec, is taken when v0(=ret(0x21a6e40)) == 0, and falls through when v0(=ret(0x21a6e40)) != 0.
  The `beq` branch at 0x21a808c targets 0x21a82f0, is taken when v0(=[ret(0x21a6e40)+16]:8) == 0, and falls through when v0(=[ret(0x21a6e40)+16]:8) != 0.
  The `beq` branch at 0x21a8098 targets 0x21a80ac, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a80c0 targets 0x21a82dc, is taken when v1(=[a0+184]:8) < a0(=[a0+176]:8+4) (unsigned), and falls through when v1(=[a0+184]:8) >= a0(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21a8128 targets 0x21a81b8, is taken when a3(=0xffff) >= v0(?) (unsigned), and falls through when a3(=0xffff) < v0(?) (unsigned).
  The `beq` branch at 0x21a8138 targets 0x21a82d4, is taken when a7(=[a0+2400]:8) == 0, and falls through when a7(=[a0+2400]:8) != 0.
  The `beq` branch at 0x21a81b0 targets 0x21a81c0 and is always taken.
  The `blez` branch at 0x21a81c0 targets 0x21a8288, is taken when s4(=a2) <= 0 (signed), and falls through when s4(=a2) > 0 (signed).
  The `beq` branch at 0x21a81dc targets 0x21a831c and is always taken.
  The `beq` branch at 0x21a81fc targets 0x21a8280, is taken when s0(?) == s2(=((a2 << 0x5) + a1)), and falls through when s0(?) != s2(=((a2 << 0x5) + a1)).
  The `bne` branch at 0x21a824c targets 0x21a81e4, is taken when t9(=[a0+184]:8) < ra(=[a0+176]:8+28) (unsigned), and falls through when t9(=[a0+184]:8) >= ra(=[a0+176]:8+28) (unsigned).
  The `beq` branch at 0x21a8274 targets 0x21a81f4 and is always taken.
  The `beq` branch at 0x21a828c targets 0x21a82a0, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a82a4 targets 0x21a82b8, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a82d4 targets 0x21a81c0 and is always taken.
  The `beq` branch at 0x21a82e4 targets 0x21a80c8 and is always taken.
  The `beq` branch at 0x21a8320 targets 0x21a8208 and is always taken.
  The return at 0x21a82cc has v0 = 0x1.
  The return at 0x21a8314 has v0 = 0x0.
  The instructions from 0x21a827c to 0x21a827c are not reached by any path from the entry, and their branches are not listed.

- `_XProcessAlarmAttributes` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a8330 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a8330-0x21a8428 (248 bytes).
  It occupies 248 bytes.
  The `ld` at 0x21a8344 loads 8 bytes from a3 (arg3 at entry) +0x0.
  The `lw` at 0x21a8374 loads 4 bytes from a3 (arg3 at entry) +0x8.
  The `sd` at 0x21a8378 stores 8 bytes to (sp + one of -0x110, -0x108) +0x0.
  The `lw` at 0x21a8384 loads 4 bytes from a3 (arg3 at entry) +0xc.
  The `sd` at 0x21a838c stores 8 bytes to (sp + one of -0x110, -0x108, -0x100) +0x0.
  The `lwu` at 0x21a8394 loads 4 bytes from a3 (arg3 at entry) +0x10.
  The `sd` at 0x21a8398 stores 8 bytes to (sp + one of -0x108, -0x100, -0xf8) +0x0.
  The `lw` at 0x21a83a8 loads 4 bytes from a3 (arg3 at entry) +0x14.
  2 such `sd` accesses store 8 bytes to ?, including `sd` at 0x21a83ac, `sd` at 0x21a83c4.
  The `lw` at 0x21a83c0 loads 4 bytes from a3 (arg3 at entry) +0x18.
  The `lwu` at 0x21a83cc loads 4 bytes from a3 (arg3 at entry) +0x1c.
  The `sd` at 0x21a83d0 stores 8 bytes to table(0x8) +0x0.
  The `lw` at 0x21a83e0 loads 4 bytes from a3 (arg3 at entry) +0x20.
  The `sd` at 0x21a83e4 stores 8 bytes to table(0x0) +0x0.
  The `lhu` at 0x21a83f4 loads 2 bytes from a1 (arg1 at entry) +0x2.
  The `sh` at 0x21a840c stores 2 bytes to a1 (arg1 at entry) +0x2.
  The `jalr` at 0x21a8408 calls _XData32 with a0=a0 at entry (arg0), a1=sp-272, a2=?, a3=a3 at entry (arg3), a4=0x10.
  The `beq` branch at 0x21a833c targets 0x21a841c, is taken when (a2 & 0x1) == 0, and falls through when (a2 & 0x1) != 0.
  The `beq` branch at 0x21a8368 targets 0x21a837c, is taken when (a2 & 0x2) == 0, and falls through when (a2 & 0x2) != 0.
  The `beq` branch at 0x21a837c targets 0x21a839c, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x21a839c targets 0x21a83b4, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x21a83b8 targets 0x21a83d4, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x21a83d4 targets 0x21a83ec, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x21a8420 targets 0x21a8358 and is always taken.
  The return at 0x21a8414 has v0 = ret(_XData32).

- `XSyncCreateAlarm` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a8430 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a8430-0x21a85cc (412 bytes).
  It occupies 412 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a6e40) +0x10, including `ld` at 0x21a8474, `ld` at 0x21a84e8.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a8480, `ld` at 0x21a8540.
  The `ld` at 0x21a848c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a8498, `ld` at 0x21a84c8, `ld` at 0x21a8594.
  The `ld` at 0x21a849c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a84b4 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a84bc, `sb` at 0x21a84f4.
  The `sh` at 0x21a84c4 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a84d0 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a84dc stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a84e4 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a84ec loads 4 bytes from [ret(0x21a6e40)+16]:8 +0x4.
  The `sb` at 0x21a84f0 stores 1 byte to [a0+176]:8 +0x1.
  The `ld` at 0x21a84f8 loads 8 bytes from a0 (arg0 at entry) +0x48.
  The `sw` at 0x21a8514 stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x21a8520 stores 4 bytes to [a0+176]:8 +0x8.
  The `ld` at 0x21a854c loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a8558 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a8464 calls (unnamed) [0x21a6e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a8490 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=[a0+2408]:8.
  The `jalr` at 0x21a8504 calls (unknown callee) with a0=a0 at entry (arg0), a1=[a0+176]:8, a2=?, a3=0x8, a4=[[ret(0x21a6e40)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+12.
  The `bgezall` at 0x21a8538 calls (unnamed) [0x21a8330] with a0=a0 at entry (arg0), a1=[a0+176]:8, a2=?, a3=a2 at entry (arg2).
  The `jalr` at 0x21a8550 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=[a0+2408]:8.
  The `jalr` at 0x21a8564 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a858c calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8, a2=[a0+176]:8+12, a3=?.
  The `jalr` at 0x21a85a8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd78]:8, a2=?, a3=?.
  The `beq` branch at 0x21a846c targets 0x21a85a0, is taken when v0(=ret(0x21a6e40)) == 0, and falls through when v0(=ret(0x21a6e40)) != 0.
  The `beq` branch at 0x21a8478 targets 0x21a85a4, is taken when v1(=[ret(0x21a6e40)+16]:8) == 0, and falls through when v1(=[ret(0x21a6e40)+16]:8) != 0.
  The `beq` branch at 0x21a8484 targets 0x21a8498, is taken when a6(=[a0+2408]:8) == 0, and falls through when a6(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a84ac targets 0x21a858c, is taken when a0(=[a0+184]:8) < a2(=[a0+176]:8+12) (unsigned), and falls through when a0(=[a0+184]:8) >= a2(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x21a851c targets 0x21a8540, is taken when (a2(=a1) & 0x3f) == 0, and falls through when (a2(=a1) & 0x3f) != 0.
  The `beq` branch at 0x21a8544 targets 0x21a8558, is taken when a6(=[a0+2408]:8) == 0, and falls through when a6(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a855c targets 0x21a8570, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a8598 targets 0x21a84b4 and is always taken.
  The return at 0x21a8584 has v0 = ret(?).
  The return at 0x21a85c4 has v0 = 0x0.

- `XSyncDestroyAlarm` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a85d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a85d0-0x21a872c (348 bytes).
  It occupies 348 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a6e40) +0x10, including `ld` at 0x21a8610, `ld` at 0x21a8684.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a861c, `ld` at 0x21a869c.
  The `ld` at 0x21a8628 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a8634, `ld` at 0x21a8664, `ld` at 0x21a86f0.
  The `ld` at 0x21a8638 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a8650 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a8658, `sb` at 0x21a8698.
  The `sh` at 0x21a8660 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a866c loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a8678 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a8680 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a868c loads 4 bytes from [ret(0x21a6e40)+16]:8 +0x4.
  The `sb` at 0x21a8690 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a8694 stores 4 bytes to [a0+176]:8 +0x4.
  The `ld` at 0x21a86a8 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a86b4 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a8600 calls (unnamed) [0x21a6e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a862c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a86ac calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a1 at entry (arg1), a3=0xb, a4=[[ret(0x21a6e40)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+8.
  The `jalr` at 0x21a86c0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a86e4 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a870c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd78]:8, a2=?, a3=?.
  The `beq` branch at 0x21a8608 targets 0x21a8700, is taken when v0(=ret(0x21a6e40)) == 0, and falls through when v0(=ret(0x21a6e40)) != 0.
  The `beq` branch at 0x21a8614 targets 0x21a8704, is taken when v0(=[ret(0x21a6e40)+16]:8) == 0, and falls through when v0(=[ret(0x21a6e40)+16]:8) != 0.
  The `beq` branch at 0x21a8620 targets 0x21a8634, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a8648 targets 0x21a86e4, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a86a0 targets 0x21a86b4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a86b8 targets 0x21a86cc, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a86ec targets 0x21a8650 and is always taken.
  The return at 0x21a86dc has v0 = 0x1.
  The return at 0x21a8724 has v0 = 0x0.
  The instructions from 0x21a86f4 to 0x21a86fc are not reached by any path from the entry, and their branches are not listed.

- `XSyncQueryAlarm` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a8730 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a8730-0x21a8934 (516 bytes).
  It occupies 516 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a6e40) +0x10, including `ld` at 0x21a8774, `ld` at 0x21a87e8.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a8780, `ld` at 0x21a8860, `ld` at 0x21a88c0.
  The `ld` at 0x21a878c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a8798, `ld` at 0x21a87c8, `ld` at 0x21a88b8.
  The `ld` at 0x21a879c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a87b4 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a87bc, `sb` at 0x21a880c.
  The `sh` at 0x21a87c4 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a87d0 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a87dc stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a87e4 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a87f0 loads 4 bytes from [ret(0x21a6e40)+16]:8 +0x4.
  The `sb` at 0x21a87f4 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a8800 stores 4 bytes to [a0+176]:8 +0x4.
  The `sd` at 0x21a881c stores 8 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0x21a8824 stores 4 bytes to a2 (arg2 at entry) +0x8.
  The `sw` at 0x21a882c stores 4 bytes to a2 (arg2 at entry) +0x10.
  The `sw` at 0x21a8834 stores 4 bytes to a2 (arg2 at entry) +0xc.
  The `sw` at 0x21a883c stores 4 bytes to a2 (arg2 at entry) +0x14.
  The `sw` at 0x21a8844 stores 4 bytes to a2 (arg2 at entry) +0x1c.
  The `sw` at 0x21a884c stores 4 bytes to a2 (arg2 at entry) +0x18.
  The `sw` at 0x21a8854 stores 4 bytes to a2 (arg2 at entry) +0x20.
  The `sw` at 0x21a885c stores 4 bytes to a2 (arg2 at entry) +0x24.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a886c, `ld` at 0x21a88cc.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a8878, `ld` at 0x21a88d8.
  The `bgezall` at 0x21a8764 calls (unnamed) [0x21a6e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a8790 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a8808 calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x2, a3=0x0, a4=[[ret(0x21a6e40)+16]:8+4], a5=a1 at entry (arg1), a6=0xa, a7=0x1.
  The `jalr` at 0x21a8870 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a8884 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a88ac calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a88d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a88e4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a8914 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd78]:8, a2=?, a3=?.
  The `beq` branch at 0x21a876c targets 0x21a8908, is taken when v0(=ret(0x21a6e40)) == 0, and falls through when v0(=ret(0x21a6e40)) != 0.
  The `beq` branch at 0x21a8778 targets 0x21a890c, is taken when v1(=[ret(0x21a6e40)+16]:8) == 0, and falls through when v1(=[ret(0x21a6e40)+16]:8) != 0.
  The `beq` branch at 0x21a8784 targets 0x21a8798, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a87ac targets 0x21a88a8, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a8810 targets 0x21a88c0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a8864 targets 0x21a8878, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a887c targets 0x21a8890, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a88b4 targets 0x21a87b0 and is always taken.
  The `beq` branch at 0x21a88c4 targets 0x21a88d8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a88dc targets 0x21a88f0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21a88a0 has v0 = 0x1.
  The return at 0x21a8900 has v0 = 0x0.
  The return at 0x21a892c has v0 = 0x0.
  The instructions from 0x21a88bc to 0x21a88bc are not reached by any path from the entry, and their branches are not listed.

- `XSyncChangeAlarm` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a8940 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a8940-0x21a8ac0 (384 bytes).
  It occupies 384 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a6e40) +0x10, including `ld` at 0x21a8988, `ld` at 0x21a89fc.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a8994, `ld` at 0x21a8a3c.
  The `ld` at 0x21a89a0 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a89ac, `ld` at 0x21a89dc, `ld` at 0x21a8a90.
  The `ld` at 0x21a89b0 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a89c8 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a89d0, `sb` at 0x21a8a20.
  The `sh` at 0x21a89d8 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a89e4 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a89f0 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a89f8 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a8a04 loads 4 bytes from [ret(0x21a6e40)+16]:8 +0x4.
  The `sw` at 0x21a8a0c stores 4 bytes to [a0+176]:8 +0x8.
  The `sb` at 0x21a8a10 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a8a18 stores 4 bytes to [a0+176]:8 +0x4.
  The `ld` at 0x21a8a48 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a8a54 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a8978 calls (unnamed) [0x21a6e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a89a4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x21a8a34 calls (unnamed) [0x21a8330] with a0=a0 at entry (arg0), a1=[a0+176]:8, a2=?, a3=a3 at entry (arg3), a4=a1 at entry (arg1), a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+12.
  The `jalr` at 0x21a8a4c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a8a60 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a8a84 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8, a2=?, a3=?.
  The `jalr` at 0x21a8aa0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd78]:8, a2=?, a3=?.
  The `beq` branch at 0x21a8980 targets 0x21a8a94, is taken when v0(=ret(0x21a6e40)) == 0, and falls through when v0(=ret(0x21a6e40)) != 0.
  The `beq` branch at 0x21a898c targets 0x21a8a98, is taken when v0(=[ret(0x21a6e40)+16]:8) == 0, and falls through when v0(=[ret(0x21a6e40)+16]:8) != 0.
  The `beq` branch at 0x21a8998 targets 0x21a89ac, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a89c0 targets 0x21a8a84, is taken when v1(=[a0+184]:8) < a0(=[a0+176]:8+12) (unsigned), and falls through when v1(=[a0+184]:8) >= a0(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x21a8a1c targets 0x21a8a3c, is taken when (a2 & 0x3f) == 0, and falls through when (a2 & 0x3f) != 0.
  The `beq` branch at 0x21a8a40 targets 0x21a8a54, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a8a58 targets 0x21a8a6c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a8a8c targets 0x21a89c8 and is always taken.
  The return at 0x21a8a7c has v0 = 0x1.
  The return at 0x21a8ab8 has v0 = 0x0.

- `XSyncSetPriority` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a8ac0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a8ac0-0x21a8c20 (352 bytes).
  It occupies 352 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a6e40) +0x10, including `ld` at 0x21a8b04, `ld` at 0x21a8b7c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a8b10, `ld` at 0x21a8b98.
  The `ld` at 0x21a8b1c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a8b28, `ld` at 0x21a8b5c, `ld` at 0x21a8bec.
  The `ld` at 0x21a8b2c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a8b48 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a8b50, `sb` at 0x21a8b94.
  The `sh` at 0x21a8b58 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a8b60 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a8b70 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a8b78 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a8b84 loads 4 bytes from [ret(0x21a6e40)+16]:8 +0x4.
  The `sb` at 0x21a8b88 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a8b8c stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x21a8b90 stores 4 bytes to [a0+176]:8 +0x8.
  The `ld` at 0x21a8ba4 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a8bb0 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a8af4 calls (unnamed) [0x21a6e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a8b20 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a8ba8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a2 at entry (arg2), a3=a1 at entry (arg1), a4=0xc, a5=[[ret(0x21a6e40)+16]:8+4], a6=[a0+152]:8+1, a7=0x1.
  The `jalr` at 0x21a8bbc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a8be0 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+12, a2=?, a3=?.
  The `jalr` at 0x21a8c00 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd78]:8, a2=?, a3=?.
  The `beq` branch at 0x21a8afc targets 0x21a8bf0, is taken when v0(=ret(0x21a6e40)) == 0, and falls through when v0(=ret(0x21a6e40)) != 0.
  The `beq` branch at 0x21a8b08 targets 0x21a8bf4, is taken when v0(=[ret(0x21a6e40)+16]:8) == 0, and falls through when v0(=[ret(0x21a6e40)+16]:8) != 0.
  The `beq` branch at 0x21a8b14 targets 0x21a8b28, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a8b3c targets 0x21a8be0, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+12) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x21a8b9c targets 0x21a8bb0, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a8bb4 targets 0x21a8bc8, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a8be8 targets 0x21a8b44 and is always taken.
  The return at 0x21a8bd8 has v0 = 0x1.
  The return at 0x21a8c18 has v0 = 0x0.

- `XSyncGetPriority` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a8c20 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a8c20-0x21a8df8 (472 bytes).
  It occupies 472 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a6e40) +0x10, including `ld` at 0x21a8c68, `ld` at 0x21a8ce0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a8c74, `ld` at 0x21a8d20, `ld` at 0x21a8d80.
  The `ld` at 0x21a8c80 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a8c8c, `ld` at 0x21a8cc0, `ld` at 0x21a8d74.
  The `ld` at 0x21a8c90 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a8cac stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a8cb4, `sb` at 0x21a8d08.
  The `sh` at 0x21a8cbc stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a8cc8 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a8cd4 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a8cdc stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a8ce8 loads 4 bytes from [ret(0x21a6e40)+16]:8 +0x4.
  The `sb` at 0x21a8cf0 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a8cfc stores 4 bytes to [a0+176]:8 +0x4.
  The `sw` at 0x21a8d1c stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a8d2c, `ld` at 0x21a8d8c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a8d38, `ld` at 0x21a8d98.
  The `bgezall` at 0x21a8c58 calls (unnamed) [0x21a6e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a8c84 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a8d04 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(0x21a6e40)+16]:8+4], a5=a1 at entry (arg1), a6=0xd, a7=0x1.
  The `jalr` at 0x21a8d30 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a8d44 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a8d68 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a8d90 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a8da4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a8dd4 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd78]:8, a2=?, a3=?.
  The `beq` branch at 0x21a8c60 targets 0x21a8dc8, is taken when v0(=ret(0x21a6e40)) == 0, and falls through when v0(=ret(0x21a6e40)) != 0.
  The `beq` branch at 0x21a8c6c targets 0x21a8dcc, is taken when v1(=[ret(0x21a6e40)+16]:8) == 0, and falls through when v1(=[ret(0x21a6e40)+16]:8) != 0.
  The `beq` branch at 0x21a8c78 targets 0x21a8c8c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a8ca0 targets 0x21a8d68, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a8d0c targets 0x21a8d80, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a8d14 targets 0x21a8d20, is taken when s2(=a2) == 0, and falls through when s2(=a2) != 0.
  The `beq` branch at 0x21a8d24 targets 0x21a8d38, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a8d3c targets 0x21a8d50, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a8d70 targets 0x21a8ca8 and is always taken.
  The `beq` branch at 0x21a8d84 targets 0x21a8d98, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a8d9c targets 0x21a8db0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21a8d60 has v0 = 0x1.
  The return at 0x21a8dc0 has v0 = 0x0.
  The return at 0x21a8df0 has v0 = 0x0.
  The instructions from 0x21a8d78 to 0x21a8d7c are not reached by any path from the entry, and their branches are not listed.

- `XSyncIntToValue` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a8e00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a8e00-0x21a8e20 (32 bytes).
  It occupies 32 bytes.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x0, including `sw` at 0x21a8e08, `sw` at 0x21a8e14.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x4, including `sw` at 0x21a8e10, `sw` at 0x21a8e1c.
  The `bltz` branch at 0x21a8e00 targets 0x21a8e14, is taken when a1 < 0 (signed), and falls through when a1 >= 0 (signed).
  The return at 0x21a8e0c has v0 = ?.
  The return at 0x21a8e18 has v0 = ?.

- `XSyncIntsToValue` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a8e20 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a8e20-0x21a8e2c (12 bytes).
  It occupies 12 bytes.
  The `sw` at 0x21a8e20 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `sw` at 0x21a8e28 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The return at 0x21a8e24 has v0 = ?.

- `XSyncValueGreaterThan` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a8e30 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a8e30-0x21a8e84 (84 bytes).
  It occupies 84 bytes.
  The `bne` branch at 0x21a8e50 targets 0x21a8e70, is taken when a4(?) < a5(?) (signed), and falls through when a4(?) >= a5(?) (signed).
  The `bne` branch at 0x21a8e58 targets 0x21a8e78, is taken when a4(?) != a5(?), and falls through when a4(?) == a5(?).
  The `beq` branch at 0x21a8e68 targets 0x21a8e78, is taken when a6(?) >= v1(?) (unsigned), and falls through when a6(?) < v1(?) (unsigned).
  The return at 0x21a8e70 has v0 = 0x1.
  The return at 0x21a8e7c has v0 = 0x0.

- `XSyncValueLessThan` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a8e90 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a8e90-0x21a8ee4 (84 bytes).
  It occupies 84 bytes.
  The `bne` branch at 0x21a8eac targets 0x21a8ed0, is taken when a4(?) < a5(?) (signed), and falls through when a4(?) >= a5(?) (signed).
  The `bne` branch at 0x21a8eb4 targets 0x21a8ed8, is taken when a5(?) != a4(?), and falls through when a5(?) == a4(?).
  The `beq` branch at 0x21a8ec8 targets 0x21a8ed8, is taken when v1(?) >= a0(?) (unsigned), and falls through when v1(?) < a0(?) (unsigned).
  The return at 0x21a8ed0 has v0 = 0x1.
  The return at 0x21a8edc has v0 = 0x0.

- `XSyncValueGreaterOrEqual` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a8ef0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a8ef0-0x21a8f44 (84 bytes).
  It occupies 84 bytes.
  The `bne` branch at 0x21a8f0c targets 0x21a8f30, is taken when a5(?) < a4(?) (signed), and falls through when a5(?) >= a4(?) (signed).
  The `bne` branch at 0x21a8f14 targets 0x21a8f38, is taken when a5(?) != a4(?), and falls through when a5(?) == a4(?).
  The `bne` branch at 0x21a8f28 targets 0x21a8f38, is taken when v1(?) < a0(?) (unsigned), and falls through when v1(?) >= a0(?) (unsigned).
  The return at 0x21a8f30 has v0 = 0x1.
  The return at 0x21a8f3c has v0 = 0x0.

- `XSyncValueLessOrEqual` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a8f50 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a8f50-0x21a8fa4 (84 bytes).
  It occupies 84 bytes.
  The `bne` branch at 0x21a8f70 targets 0x21a8f90, is taken when a5(?) < a4(?) (signed), and falls through when a5(?) >= a4(?) (signed).
  The `bne` branch at 0x21a8f78 targets 0x21a8f98, is taken when a4(?) != a5(?), and falls through when a4(?) == a5(?).
  The `bne` branch at 0x21a8f88 targets 0x21a8f98, is taken when a6(?) < v1(?) (unsigned), and falls through when a6(?) >= v1(?) (unsigned).
  The return at 0x21a8f90 has v0 = 0x1.
  The return at 0x21a8f9c has v0 = 0x0.

- `XSyncValueEqual` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a8fb0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a8fb0-0x21a8ff8 (72 bytes).
  It occupies 72 bytes.
  The `bne` branch at 0x21a8fd0 targets 0x21a8fec, is taken when at(?) != v1(?), and falls through when at(?) == v1(?).
  The `bne` branch at 0x21a8fdc targets 0x21a8fec, is taken when a4(=a0) != v1(?), and falls through when a4(=a0) == v1(?).
  The return at 0x21a8fe4 has v0 = 0x1.
  The return at 0x21a8ff0 has v0 = 0x0.

- `XSyncValueIsNegative` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a9000 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a9000-0x21a9020 (32 bytes).
  It occupies 32 bytes.
  The return at 0x21a9018 has v0 = ?.

- `XSyncValueIsZero` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a9020 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a9020-0x21a9054 (52 bytes).
  It occupies 52 bytes.
  The `bne` branch at 0x21a902c targets 0x21a9040, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0x21a9038 targets 0x21a904c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The return at 0x21a9044 has v0 = 0x0.
  The return at 0x21a904c has v0 = 0x1.

- `XSyncValueIsPositive` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a9060 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a9060-0x21a9080 (32 bytes).
  It occupies 32 bytes.
  The return at 0x21a9078 has v0 = ?.

- `XSyncValueLow32` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a9080 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a9080-0x21a9098 (24 bytes).
  It occupies 24 bytes.
  The return at 0x21a9090 has v0 = ?.

- `XSyncValueHigh32` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a90a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a90a0-0x21a90b4 (20 bytes).
  It occupies 20 bytes.
  The return at 0x21a90ac has v0 = ?.

- `XSyncValueAdd` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a90c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a90c0-0x21a91a8 (232 bytes).
  It occupies 232 bytes.
  The `sw` at 0x21a9128 stores 4 bytes to a0 (arg0 at entry) +0x4.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x0, including `sw` at 0x21a9130, `sw` at 0x21a913c.
  The `ldl` at 0x21a914c loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `ldr` at 0x21a9150 loads 8 bytes from a0 (arg0 at entry) +0x7.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0x21a917c, `sw` at 0x21a919c.
  The `jalr` at 0x21a90f8 calls XSyncValueIsNegative with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a9108 calls XSyncValueIsNegative with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9154 calls XSyncValueIsNegative with a0=?, a1=?, a2=(a1 + a2)+1, a3=?, a5=sym(XSyncValueIsNegative).
  The `beq` branch at 0x21a9134 targets 0x21a9140, is taken when a4(?) >= a3(?) (unsigned), and falls through when a4(?) < a3(?) (unsigned).
  The `bne` branch at 0x21a9140 targets 0x21a918c, is taken when s1(=ret(XSyncValueIsNegative)) != v0(=ret(XSyncValueIsNegative)), and falls through when s1(=ret(XSyncValueIsNegative)) == v0(=ret(XSyncValueIsNegative)).
  The `beq` branch at 0x21a915c targets 0x21a918c, is taken when v0(=ret(XSyncValueIsNegative)) == s1(=ret(XSyncValueIsNegative)), and falls through when v0(=ret(XSyncValueIsNegative)) != s1(=ret(XSyncValueIsNegative)).
  The return at 0x21a9180 has v0 = ret(XSyncValueIsNegative).
  The return at 0x21a91a0 has v0 = ret(XSyncValueIsNegative).
  The instructions from 0x21a9188 to 0x21a9188 are not reached by any path from the entry, and their branches are not listed.

- `XSyncValueSubtract` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a91b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a91b0-0x21a9290 (224 bytes).
  It occupies 224 bytes.
  The `sw` at 0x21a9218 stores 4 bytes to a0 (arg0 at entry) +0x4.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x0, including `sw` at 0x21a9220, `sw` at 0x21a922c.
  The `ldl` at 0x21a9238 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `ldr` at 0x21a923c loads 8 bytes from a0 (arg0 at entry) +0x7.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0x21a9264, `sw` at 0x21a9284.
  The `jalr` at 0x21a91e8 calls XSyncValueIsNegative with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a91f8 calls XSyncValueIsNegative with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9240 calls XSyncValueIsNegative with a0=?, a1=?, a2=?, a3=?, a5=sym(XSyncValueIsNegative).
  The `beq` branch at 0x21a9224 targets 0x21a9230, is taken when a4(?) >= a3(?) (unsigned), and falls through when a4(?) < a3(?) (unsigned).
  The `bne` branch at 0x21a9230 targets 0x21a9270, is taken when s1(=ret(XSyncValueIsNegative)) != v0(=ret(XSyncValueIsNegative)), and falls through when s1(=ret(XSyncValueIsNegative)) == v0(=ret(XSyncValueIsNegative)).
  The `beq` branch at 0x21a9248 targets 0x21a9270, is taken when v0(=ret(XSyncValueIsNegative)) == s1(=ret(XSyncValueIsNegative)), and falls through when v0(=ret(XSyncValueIsNegative)) != s1(=ret(XSyncValueIsNegative)).
  The return at 0x21a9268 has v0 = ret(XSyncValueIsNegative).
  The return at 0x21a9288 has v0 = ret(XSyncValueIsNegative).

- `XSyncMaxValue` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a9290 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a9290-0x21a92a8 (24 bytes).
  It occupies 24 bytes.
  The `sw` at 0x21a9294 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `sw` at 0x21a92a4 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The return at 0x21a92a0 has v0 = -0x1.

- `XSyncMinValue` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a92b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a92b0-0x21a92c0 (16 bytes).
  It occupies 16 bytes.
  The `sw` at 0x21a92b0 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `sw` at 0x21a92bc stores 4 bytes to a0 (arg0 at entry) +0x0.
  The return at 0x21a92b8 has v0 = ?.

- `XdbeQueryExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a9460 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a9460-0x21a9628 (456 bytes).
  It occupies 456 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a92c0) +0x10, including `ld` at 0x21a94ac, `ld` at 0x21a951c.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a94b8, `ld` at 0x21a9564, `ld` at 0x21a95ec.
  The `ld` at 0x21a94c4 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a94d0, `ld` at 0x21a94fc, `ld` at 0x21a95e8.
  The `ld` at 0x21a94d4 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a94ec stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a94f0, `sb` at 0x21a9548.
  The `sh` at 0x21a94f8 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a9504 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a9510 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a9518 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a9524 loads 4 bytes from [ret(0x21a92c0)+16]:8 +0x4.
  The `sb` at 0x21a9528 stores 1 byte to [a0+176]:8 +0x1.
  The `sb` at 0x21a9530 stores 1 byte to [a0+176]:8 +0x4.
  The `sb` at 0x21a953c stores 1 byte to [a0+176]:8 +0x5.
  The `sw` at 0x21a9558 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x21a9560 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a9570, `ld` at 0x21a95f8.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a957c, `ld` at 0x21a9604.
  The `lw` at 0x21a9590 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `bgezall` at 0x21a9498 calls (unnamed) [0x21a92c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a94c8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9544 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0x21a92c0)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+8.
  The `jalr` at 0x21a9574 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9588 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a95dc calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a95fc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9610 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x21a94a4 targets 0x21a95c0, is taken when v0(=ret(0x21a92c0)) == 0, and falls through when v0(=ret(0x21a92c0)) != 0.
  The `beq` branch at 0x21a94b0 targets 0x21a95c0, is taken when v1(=[ret(0x21a92c0)+16]:8) == 0, and falls through when v1(=[ret(0x21a92c0)+16]:8) != 0.
  The `beq` branch at 0x21a94bc targets 0x21a94d0, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a94e4 targets 0x21a95dc, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a954c targets 0x21a95ec, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a9568 targets 0x21a957c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a9580 targets 0x21a9590, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a9598 targets 0x21a9620, is taken when t9(=[a1]) == ra(=0x1), and falls through when t9(=[a1]) != ra(=0x1).
  The `beq` branch at 0x21a95e4 targets 0x21a94ec and is always taken.
  The `beq` branch at 0x21a95f0 targets 0x21a9604, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a9608 targets 0x21a9618, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a9618 targets 0x21a95a4 and is always taken.
  The `beq` branch at 0x21a9620 targets 0x21a95a8 and is always taken.
  The return at 0x21a95b8 has v0 = one of 0x0, 0x1.
  The return at 0x21a95d4 has v0 = 0x0.

- `XdbeAllocateBackBufferName` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a9630 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a9630-0x21a97a4 (372 bytes).
  It occupies 372 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a92c0) +0x10, including `ld` at 0x21a9674, `ld` at 0x21a96fc.
  The `ld` at 0x21a9680 loads 8 bytes from a0 (arg0 at entry) +0x48.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a9690, `ld` at 0x21a971c.
  The `ld` at 0x21a969c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a96a8, `ld` at 0x21a96dc, `ld` at 0x21a97a0.
  The `ld` at 0x21a96ac loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a96c8 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a96d0, `sb` at 0x21a9718.
  The `sh` at 0x21a96d8 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a96e4 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a96f0 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a96f8 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a9704 loads 4 bytes from [ret(0x21a92c0)+16]:8 +0x4.
  The `sb` at 0x21a9708 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a970c stores 4 bytes to [a0+176]:8 +0x4.
  The `sb` at 0x21a9710 stores 1 byte to [a0+176]:8 +0xc.
  The `sw` at 0x21a9714 stores 4 bytes to [a0+176]:8 +0x8.
  The `ld` at 0x21a9728 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a9734 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a9664 calls (unnamed) [0x21a92c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a9688 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a96a0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+2408]:8.
  The `jalr` at 0x21a972c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a2 at entry (arg2), a3=a1 at entry (arg1), a4=0x1, a5=[a0+2408]:8, a6=[a0+152]:8+1, a7=0x1.
  The `jalr` at 0x21a9740 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9774 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd88]:8, a2=?, a3=?.
  The `jalr` at 0x21a9794 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+16, a2=?, a3=?.
  The `beq` branch at 0x21a966c targets 0x21a9768, is taken when v0(=ret(0x21a92c0)) == 0, and falls through when v0(=ret(0x21a92c0)) != 0.
  The `beq` branch at 0x21a9678 targets 0x21a976c, is taken when v1(=[ret(0x21a92c0)+16]:8) == 0, and falls through when v1(=[ret(0x21a92c0)+16]:8) != 0.
  The `beq` branch at 0x21a9694 targets 0x21a96a8, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a96bc targets 0x21a9794, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+16) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+16) (unsigned).
  The `beq` branch at 0x21a9720 targets 0x21a9734, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a9738 targets 0x21a974c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a979c targets 0x21a96c4 and is always taken.
  The return at 0x21a9760 has v0 = ret(?).
  The return at 0x21a978c has v0 = 0x0.

- `XdbeDeallocateBackBufferName` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a97b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a97b0-0x21a9900 (336 bytes).
  It occupies 336 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a92c0) +0x10, including `ld` at 0x21a97f0, `ld` at 0x21a9860.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a97fc, `ld` at 0x21a9878.
  The `ld` at 0x21a9808 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a9814, `ld` at 0x21a9840, `ld` at 0x21a98d0.
  The `ld` at 0x21a9818 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a9830 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a9838, `sb` at 0x21a9874.
  The `sh` at 0x21a983c stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a9848 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a9854 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a985c stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a9868 loads 4 bytes from [ret(0x21a92c0)+16]:8 +0x4.
  The `sb` at 0x21a986c stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21a9870 stores 4 bytes to [a0+176]:8 +0x4.
  The `ld` at 0x21a9888 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a9894 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a97e0 calls (unnamed) [0x21a92c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a980c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a988c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a1 at entry (arg1), a3=0x2, a4=[[ret(0x21a92c0)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+8.
  The `jalr` at 0x21a98a0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a98c4 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a98e0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd88]:8, a2=?, a3=?.
  The `beq` branch at 0x21a97e8 targets 0x21a98d4, is taken when v0(=ret(0x21a92c0)) == 0, and falls through when v0(=ret(0x21a92c0)) != 0.
  The `beq` branch at 0x21a97f4 targets 0x21a98d8, is taken when v0(=[ret(0x21a92c0)+16]:8) == 0, and falls through when v0(=[ret(0x21a92c0)+16]:8) != 0.
  The `beq` branch at 0x21a9800 targets 0x21a9814, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a9828 targets 0x21a98c4, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a9880 targets 0x21a9894, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a9898 targets 0x21a98ac, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a98cc targets 0x21a9830 and is always taken.
  The return at 0x21a98bc has v0 = 0x1.
  The return at 0x21a98f8 has v0 = 0x0.

- `XdbeSwapBuffers` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a9900 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a9900-0x21a9b10 (528 bytes).
  It occupies 528 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a92c0) +0x10, including `ld` at 0x21a9948, `ld` at 0x21a99c4.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a9954, `ld` at 0x21a9a80.
  The `ld` at 0x21a9960 loads 8 bytes from [a0+2408]:8 +0x0.
  5 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a996c, `ld` at 0x21a99b0, `ld` at 0x21a9a40.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb8, including `ld` at 0x21a9970, `ld` at 0x21a9a48.
  The `sd` at 0x21a9988 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a9990, `sb` at 0x21a99f0.
  2 such `sh` accesses store 2 bytes to [a0+176]:8 +0x2, including `sh` at 0x21a9998, `sh` at 0x21a99e4.
  The `ld` at 0x21a999c loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a99a8 stores 8 bytes to a0 (arg0 at entry) +0x98.
  2 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0xb0, including `sd` at 0x21a99c0, `sd` at 0x21a9a78.
  The `lhu` at 0x21a99c8 loads 2 bytes from [a0+176]:8 +0x2.
  The `lw` at 0x21a99cc loads 4 bytes from [ret(0x21a92c0)+16]:8 +0x4.
  The `sw` at 0x21a99d0 stores 4 bytes to [a0+176]:8 +0x4.
  The `sb` at 0x21a99d4 stores 1 byte to [a0+176]:8 +0x1.
  The `lbu` at 0x21a9a38 loads 1 byte from ?.
  The `ld` at 0x21a9a90 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a9a9c loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a9938 calls (unnamed) [0x21a92c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a9964 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9a10 calls _XSend with a0=a0 at entry (arg0), a1=sp-80, a2=0x4, a3=?.
  The `jalr` at 0x21a9a30 calls _XData32 with a0=a0 at entry (arg0), a1=?, a2=0x4, a3=?.
  The `jalr` at 0x21a9a60 calls memcpy with a0=[a0+176]:8, a1=sp-80, a2=0x4, a3=?.
  The `jalr` at 0x21a9a94 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9aa8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9acc calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21a9aec calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd88]:8, a2=?, a3=?.
  The `beq` branch at 0x21a9940 targets 0x21a9ae0, is taken when v0(=ret(0x21a92c0)) == 0, and falls through when v0(=ret(0x21a92c0)) != 0.
  The `beq` branch at 0x21a994c targets 0x21a9ae4, is taken when v0(=[ret(0x21a92c0)+16]:8) == 0, and falls through when v0(=[ret(0x21a92c0)+16]:8) != 0.
  The `beq` branch at 0x21a9958 targets 0x21a996c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a9980 targets 0x21a9acc, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `blez` branch at 0x21a99ec targets 0x21a9a80, is taken when a3(=a2) <= 0 (signed), and falls through when a3(=a2) > 0 (signed).
  The `beq` branch at 0x21a99fc targets 0x21a9a24 and is always taken.
  The `beq` branch at 0x21a9a20 targets 0x21a9a7c, is taken when s0(?) == s2(=((a2 << 0x4) + a1)), and falls through when s0(?) != s2(=((a2 << 0x4) + a1)).
  The `bne` branch at 0x21a9a54 targets 0x21a9a04, is taken when t1(=[a0+184]:8) < t2(=[a0+176]:8+4) (unsigned), and falls through when t1(=[a0+184]:8) >= t2(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21a9a74 targets 0x21a9a18 and is always taken.
  The `beq` branch at 0x21a9a88 targets 0x21a9a9c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a9aa0 targets 0x21a9ab4, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a9ad8 targets 0x21a9988 and is always taken.
  The return at 0x21a9ac4 has v0 = 0x1.
  The return at 0x21a9b08 has v0 = 0x0.

- `XdbeBeginIdiom` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a9b10 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a9b10-0x21a9c50 (320 bytes).
  It occupies 320 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a92c0) +0x10, including `ld` at 0x21a9b4c, `ld` at 0x21a9bbc.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a9b58, `ld` at 0x21a9bcc.
  The `ld` at 0x21a9b64 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a9b70, `ld` at 0x21a9ba0, `ld` at 0x21a9c20.
  The `ld` at 0x21a9b74 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a9b8c stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a9b94, `sb` at 0x21a9bc8.
  The `sh` at 0x21a9b9c stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a9ba4 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a9bb0 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a9bb8 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a9bc0 loads 4 bytes from [ret(0x21a92c0)+16]:8 +0x4.
  The `sb` at 0x21a9bc4 stores 1 byte to [a0+176]:8 +0x1.
  The `ld` at 0x21a9bd8 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a9be4 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a9b3c calls (unnamed) [0x21a92c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a9b68 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9bdc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=0x4, a3=[[ret(0x21a92c0)+16]:8+4], a4=[a0+152]:8+1, a5=0x1, a6=[a0+176]:8+4, a7=0x4.
  The `jalr` at 0x21a9bf0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9c14 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x21a9c30 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd88]:8, a2=?, a3=?.
  The `beq` branch at 0x21a9b44 targets 0x21a9c24, is taken when v0(=ret(0x21a92c0)) == 0, and falls through when v0(=ret(0x21a92c0)) != 0.
  The `beq` branch at 0x21a9b50 targets 0x21a9c28, is taken when v0(=[ret(0x21a92c0)+16]:8) == 0, and falls through when v0(=[ret(0x21a92c0)+16]:8) != 0.
  The `beq` branch at 0x21a9b5c targets 0x21a9b70, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a9b84 targets 0x21a9c14, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21a9bd0 targets 0x21a9be4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a9be8 targets 0x21a9bfc, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a9c1c targets 0x21a9b8c and is always taken.
  The return at 0x21a9c0c has v0 = 0x1.
  The return at 0x21a9c48 has v0 = 0x0.

- `XdbeEndIdiom` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a9c50 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a9c50-0x21a9d90 (320 bytes).
  It occupies 320 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a92c0) +0x10, including `ld` at 0x21a9c8c, `ld` at 0x21a9cfc.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a9c98, `ld` at 0x21a9d0c.
  The `ld` at 0x21a9ca4 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a9cb0, `ld` at 0x21a9ce0, `ld` at 0x21a9d60.
  The `ld` at 0x21a9cb4 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a9ccc stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a9cd4, `sb` at 0x21a9d08.
  The `sh` at 0x21a9cdc stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21a9ce8 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a9cf0 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21a9cf8 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21a9d00 loads 4 bytes from [ret(0x21a92c0)+16]:8 +0x4.
  The `sb` at 0x21a9d04 stores 1 byte to [a0+176]:8 +0x1.
  The `ld` at 0x21a9d18 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21a9d24 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21a9c7c calls (unnamed) [0x21a92c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a9ca8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9d1c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=0x5, a3=[[ret(0x21a92c0)+16]:8+4], a4=[a0+152]:8+1, a5=0x1, a6=[a0+176]:8+4, a7=0x4.
  The `jalr` at 0x21a9d30 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9d54 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x21a9d70 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd88]:8, a2=?, a3=?.
  The `beq` branch at 0x21a9c84 targets 0x21a9d64, is taken when v0(=ret(0x21a92c0)) == 0, and falls through when v0(=ret(0x21a92c0)) != 0.
  The `beq` branch at 0x21a9c90 targets 0x21a9d68, is taken when v0(=[ret(0x21a92c0)+16]:8) == 0, and falls through when v0(=[ret(0x21a92c0)+16]:8) != 0.
  The `beq` branch at 0x21a9c9c targets 0x21a9cb0, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a9cc4 targets 0x21a9d54, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21a9d10 targets 0x21a9d24, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a9d28 targets 0x21a9d3c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21a9d5c targets 0x21a9ccc and is always taken.
  The return at 0x21a9d4c has v0 = 0x1.
  The return at 0x21a9d88 has v0 = 0x0.

- `XdbeGetVisualInfo` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21a9d90 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21a9d90-0x21aa1a4 (1044 bytes).
  It occupies 1044 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a92c0) +0x10, including `ld` at 0x21a9ddc, `ld` at 0x21a9e50.
  5 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21a9de8, `ld` at 0x21a9ee4, `ld` at 0x21aa040.
  The `ld` at 0x21a9df4 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21a9e00, `ld` at 0x21a9e38, `ld` at 0x21aa0ac.
  The `ld` at 0x21a9e04 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21a9e1c stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sh` accesses store 2 bytes to [a0+176]:8 +0x2, including `sh` at 0x21a9e24, `sh` at 0x21a9e6c.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21a9e2c, `sb` at 0x21a9e5c.
  The `ld` at 0x21a9e30 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a9e44 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sd` at 0x21a9e4c stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `lw` at 0x21a9e54 loads 4 bytes from [ret(0x21a92c0)+16]:8 +0x4.
  The `sb` at 0x21a9e58 stores 1 byte to [a0+176]:8 +0x1.
  6 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x0, including `lw` at 0x21a9e60, `lw` at 0x21a9e70, `lw` at 0x21a9e78.
  The `sw` at 0x21a9e74 stores 4 bytes to [a0+176]:8 +0x4.
  4 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21a9ef0, `ld` at 0x21aa04c, `ld` at 0x21aa0fc.
  4 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21a9efc, `ld` at 0x21aa058, `ld` at 0x21aa108.
  2 such `sd` accesses store 8 bytes to ?, including `sd` at 0x21a9f98, `sd` at 0x21a9fcc.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x21a9f9c, `lw` at 0x21a9fc0.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x21a9fbc, `ld` at 0x21aa0cc.
  3 such `sw` accesses store 4 bytes to ?, including `sw` at 0x21a9fdc, `sw` at 0x21a9ff0, `sw` at 0x21aa034.
  The `sw` at 0x21aa1a0 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0x21a9dc8 calls (unnamed) [0x21a92c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21a9df8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9e88 calls _XData32 with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=(([a2] << 0x2) << 0x0), a3=[a2], a4=[a2]+2, a5=0x6, a6=[[ret(0x21a92c0)+16]:8+4], a7=[a0+152]:8+1.
  The `jalr` at 0x21a9ea0 calls _XReply with a0=a0 at entry (arg0), a1=sp-144, a2=0x0, a3=0x0.
  The `jalr` at 0x21a9ed4 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9ef4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9f08 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9f88 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21a9fb4 calls _XRead with a0=a0 at entry (arg0), a1=sp-104, a2=0x8, a3=?.
  The `jalr` at 0x21aa018 calls _XRead32 with a0=a0 at entry (arg0), a1=sp-112, a2=0x4, a3=?.
  The `jalr` at 0x21aa050 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aa064 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aa0a0 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21aa0c8 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21aa0ec calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21aa100 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aa114 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aa158 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aa16c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aa188 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd88]:8, a2=?, a3=?.
  The `beq` branch at 0x21a9dd4 targets 0x21aa180, is taken when v0(=ret(0x21a92c0)) == 0, and falls through when v0(=ret(0x21a92c0)) != 0.
  The `beq` branch at 0x21a9de0 targets 0x21aa184, is taken when v1(=[ret(0x21a92c0)+16]:8) == 0, and falls through when v1(=[ret(0x21a92c0)+16]:8) != 0.
  The `beq` branch at 0x21a9dec targets 0x21a9e00, is taken when s2(=[a0+2408]:8) == 0, and falls through when s2(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21a9e14 targets 0x21aa0a0, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21a9ea8 targets 0x21aa148, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21a9eb4 targets 0x21aa198, is taken when v0(=[a2]) == 0, and falls through when v0(=[a2]) != 0.
  The `beq` branch at 0x21a9ec0 targets 0x21a9ecc, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x21a9edc targets 0x21a9f40, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x21a9ee8 targets 0x21a9efc, is taken when s2(=[a0+2408]:8) == 0, and falls through when s2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21a9f00 targets 0x21a9f14, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `blez` branch at 0x21a9f58 targets 0x21aa040, is taken when a1(=[a2]) <= 0 (signed), and falls through when a1(=[a2]) > 0 (signed).
  The `beq` branch at 0x21a9f70 targets 0x21aa00c and is always taken.
  The `beq` branch at 0x21a9f94 targets 0x21aa0b0, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `blez` branch at 0x21a9fa0 targets 0x21a9ff4, is taken when a1(?) <= 0 (signed), and falls through when a1(?) > 0 (signed).
  The `bne` branch at 0x21a9fec targets 0x21a9fa8, is taken when s0(?) < a4(?) (signed), and falls through when s0(?) >= a4(?) (signed).
  The `beq` branch at 0x21aa004 targets 0x21aa040, is taken when s5(?) >= a5(=[a2]) (signed), and falls through when s5(?) < a5(=[a2]) (signed).
  The `bne` branch at 0x21aa030 targets 0x21a9f80, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x21aa038 targets 0x21a9f80 and is always taken.
  The `beq` branch at 0x21aa044 targets 0x21aa058, is taken when s2(=[a0+2408]:8) == 0, and falls through when s2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21aa05c targets 0x21aa070, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21aa0a8 targets 0x21a9e1c and is always taken.
  The `blez` branch at 0x21aa0b0 targets 0x21aa0e0, is taken when s5(?) <= 0 (signed), and falls through when s5(?) > 0 (signed).
  The `bne` branch at 0x21aa0d8 targets 0x21aa0c8, is taken when s0(=table(0x10)) != s1(?), and falls through when s0(=table(0x10)) == s1(?).
  The `beq` branch at 0x21aa0f4 targets 0x21aa108, is taken when s2(=[a0+2408]:8) == 0, and falls through when s2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21aa10c targets 0x21aa120, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21aa14c targets 0x21aa160, is taken when s2(=[a0+2408]:8) == 0, and falls through when s2(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21aa164 targets 0x21aa174, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21aa174 targets 0x21a9f14 and is always taken.
  The `beq` branch at 0x21aa190 targets 0x21a9f14 and is always taken.
  The `beq` branch at 0x21aa19c targets 0x21a9eb8 and is always taken.
  The return at 0x21a9f2c has v0 = 0x0.
  The return at 0x21aa098 has v0 = ?.
  The return at 0x21aa140 has v0 = 0x0.
  The instructions from 0x21a9f34 to 0x21a9f3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x21a9f78 to 0x21a9f7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x21aa17c to 0x21aa17c are not reached by any path from the entry, and their branches are not listed.

- `XdbeFreeVisualInfo` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21aa1b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21aa1b0-0x21aa20c (92 bytes).
  It occupies 92 bytes.
  The `ld` at 0x21aa1d0 loads 8 bytes from a0 (arg0 at entry) +0x8.
  The `jalr` at 0x21aa1e0 calls XFree with a0=[a0+8]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21aa1f0 calls XFree with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x21aa1c8 targets 0x21aa1fc, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x21aa1d4 targets 0x21aa1e8, is taken when a0(=[a0+8]:8) == 0, and falls through when a0(=[a0+8]:8) != 0.
  The return at 0x21aa204 has v0 = one of ?, ret(XFree).

- `XdbeGetBackBufferAttributes` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21aa210 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21aa210-0x21aa3e0 (464 bytes).
  It occupies 464 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21a92c0) +0x10, including `ld` at 0x21aa250, `ld` at 0x21aa2d8.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21aa26c, `ld` at 0x21aa310.
  The `ld` at 0x21aa278 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21aa284, `ld` at 0x21aa2b8, `ld` at 0x21aa3ac.
  The `ld` at 0x21aa288 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21aa2a4 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21aa2ac, `sb` at 0x21aa304.
  The `sh` at 0x21aa2b4 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21aa2c0 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21aa2cc stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21aa2d4 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21aa2e0 loads 4 bytes from [ret(0x21a92c0)+16]:8 +0x4.
  The `sb` at 0x21aa2e8 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21aa2f4 stores 4 bytes to [a0+176]:8 +0x4.
  The `sd` at 0x21aa31c stores 8 bytes to ?.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21aa320, `ld` at 0x21aa3b8.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21aa32c, `ld` at 0x21aa3c4.
  The `bgezall` at 0x21aa240 calls (unnamed) [0x21a92c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21aa25c calls malloc with a0=0x8, a1=?, a2=?, a3=?.
  The `jalr` at 0x21aa27c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+2408]:8.
  The `jalr` at 0x21aa300 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0x21a92c0)+16]:8+4], a5=a1 at entry (arg1), a6=[a0+176]:8, a7=0x7.
  The `jalr` at 0x21aa324 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+2408]:8.
  The `jalr` at 0x21aa338 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aa368 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfd88]:8, a2=?, a3=?.
  The `jalr` at 0x21aa3a0 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?, a6=[a0+176]:8.
  The `jalr` at 0x21aa3bc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+2408]:8.
  The `jalr` at 0x21aa3d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x21aa248 targets 0x21aa35c, is taken when v0(=ret(0x21a92c0)) == 0, and falls through when v0(=ret(0x21a92c0)) != 0.
  The `beq` branch at 0x21aa254 targets 0x21aa35c, is taken when v1(=[ret(0x21a92c0)+16]:8) == 0, and falls through when v1(=[ret(0x21a92c0)+16]:8) != 0.
  The `beq` branch at 0x21aa264 targets 0x21aa388, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0x21aa270 targets 0x21aa284, is taken when a4(=[a0+2408]:8) == 0, and falls through when a4(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21aa298 targets 0x21aa3a0, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21aa30c targets 0x21aa3b0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21aa318 targets 0x21aa32c, is taken when a4(=[a0+2408]:8) == 0, and falls through when a4(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21aa330 targets 0x21aa344, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21aa3a8 targets 0x21aa2a0 and is always taken.
  The `beq` branch at 0x21aa3b0 targets 0x21aa3c4, is taken when a4(=[a0+2408]:8) == 0, and falls through when a4(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21aa3c8 targets 0x21aa3d8, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21aa3d8 targets 0x21aa344 and is always taken.
  The return at 0x21aa354 has v0 = one of ?, 0x0.
  The return at 0x21aa380 has v0 = 0x0.
  The return at 0x21aa398 has v0 = 0x0.

- `XLbxQueryExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21aa5a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21aa5a0-0x21aa63c (156 bytes).
  It occupies 156 bytes.
  3 such `ld` accesses load 8 bytes from ret(0x21aa400) +0x10, including `ld` at 0x21aa5e0, `ld` at 0x21aa600, `ld` at 0x21aa610.
  The `lw` at 0x21aa5f8 loads 4 bytes from [ret(0x21aa400)+16]:8 +0x4.
  The `sw` at 0x21aa5fc stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0x21aa608 loads 4 bytes from [ret(0x21aa400)+16]:8 +0x8.
  The `sw` at 0x21aa60c stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `lw` at 0x21aa61c loads 4 bytes from [ret(0x21aa400)+16]:8 +0xc.
  The `sw` at 0x21aa620 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `bgezall` at 0x21aa5cc calls (unnamed) [0x21aa400] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x21aa5d8 targets 0x21aa62c, is taken when v0(=ret(0x21aa400)) == 0, and falls through when v0(=ret(0x21aa400)) != 0.
  The `beq` branch at 0x21aa5e4 targets 0x21aa62c, is taken when a6(=[ret(0x21aa400)+16]:8) == 0, and falls through when a6(=[ret(0x21aa400)+16]:8) != 0.
  The return at 0x21aa624 has v0 = 0x1.
  The return at 0x21aa634 has v0 = 0x0.

- `XLbxGetEventBase` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21aa640 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21aa640-0x21aa6a8 (104 bytes).
  It occupies 104 bytes.
  The `ld` at 0x21aa674 loads 8 bytes from ret(0x21aa400) +0x10.
  The `lw` at 0x21aa684 loads 4 bytes from [ret(0x21aa400)+16]:8 +0x8.
  The `bgezall` at 0x21aa664 calls (unnamed) [0x21aa400] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x21aa66c targets 0x21aa698, is taken when v0(=ret(0x21aa400)) == 0, and falls through when v0(=ret(0x21aa400)) != 0.
  The `beq` branch at 0x21aa678 targets 0x21aa698, is taken when a2(=[ret(0x21aa400)+16]:8) == 0, and falls through when a2(=[ret(0x21aa400)+16]:8) != 0.
  The return at 0x21aa68c has v0 = [[ret(0x21aa400)+16]:8+8].
  The return at 0x21aa6a0 has v0 = -0x1.
  The instructions from 0x21aa694 to 0x21aa694 are not reached by any path from the entry, and their branches are not listed.

- `XLbxQueryVersion` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21aa6b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21aa6b0-0x21aa874 (452 bytes).
  It occupies 452 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21aa400) +0x10, including `ld` at 0x21aa6f4, `ld` at 0x21aa760.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21aa700, `ld` at 0x21aa7a4, `ld` at 0x21aa800.
  The `ld` at 0x21aa70c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21aa718, `ld` at 0x21aa744, `ld` at 0x21aa7f8.
  The `ld` at 0x21aa71c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21aa734 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21aa738, `sb` at 0x21aa784.
  The `sh` at 0x21aa740 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21aa74c loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21aa754 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21aa75c stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21aa76c loads 4 bytes from [ret(0x21aa400)+16]:8 +0x4.
  The `sb` at 0x21aa778 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21aa798 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x21aa7a0 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21aa7b0, `ld` at 0x21aa80c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21aa7bc, `ld` at 0x21aa818.
  The `bgezall` at 0x21aa6e4 calls (unnamed) [0x21aa400] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21aa710 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aa780 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(0x21aa400)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+4.
  The `jalr` at 0x21aa7b4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aa7c8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aa7ec calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x21aa810 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aa824 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aa854 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfda0]:8, a2=?, a3=?.
  The `beq` branch at 0x21aa6ec targets 0x21aa848, is taken when v0(=ret(0x21aa400)) == 0, and falls through when v0(=ret(0x21aa400)) != 0.
  The `beq` branch at 0x21aa6f8 targets 0x21aa84c, is taken when v1(=[ret(0x21aa400)+16]:8) == 0, and falls through when v1(=[ret(0x21aa400)+16]:8) != 0.
  The `beq` branch at 0x21aa704 targets 0x21aa718, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21aa72c targets 0x21aa7ec, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21aa788 targets 0x21aa800, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21aa7a8 targets 0x21aa7bc, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21aa7c0 targets 0x21aa7d4, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21aa7f4 targets 0x21aa734 and is always taken.
  The `beq` branch at 0x21aa804 targets 0x21aa818, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21aa81c targets 0x21aa830, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21aa7e4 has v0 = 0x1.
  The return at 0x21aa840 has v0 = 0x0.
  The return at 0x21aa86c has v0 = 0x0.
  The instructions from 0x21aa7fc to 0x21aa7fc are not reached by any path from the entry, and their branches are not listed.

- `XSecurityQueryExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21aac00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21aac00-0x21aadcc (460 bytes).
  It occupies 460 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21aa880) +0x10, including `ld` at 0x21aac4c, `ld` at 0x21aacbc.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21aac58, `ld` at 0x21aad04, `ld` at 0x21aad90.
  The `ld` at 0x21aac64 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21aac70, `ld` at 0x21aac9c, `ld` at 0x21aad8c.
  The `ld` at 0x21aac74 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21aac8c stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21aac90, `sb` at 0x21aace8.
  The `sh` at 0x21aac98 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21aaca4 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21aacb0 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21aacb8 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21aacc4 loads 4 bytes from [ret(0x21aa880)+16]:8 +0x4.
  The `sb` at 0x21aacc8 stores 1 byte to [a0+176]:8 +0x1.
  The `sh` at 0x21aacd0 stores 2 bytes to [a0+176]:8 +0x4.
  The `sh` at 0x21aacdc stores 2 bytes to [a0+176]:8 +0x6.
  The `sw` at 0x21aacf8 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x21aad00 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21aad10, `ld` at 0x21aad9c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21aad1c, `ld` at 0x21aada8.
  The `lw` at 0x21aad30 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `bgezall` at 0x21aac38 calls (unnamed) [0x21aa880] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21aac68 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aace4 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0x21aa880)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+8.
  The `jalr` at 0x21aad14 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aad28 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aad80 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21aada0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aadb4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x21aac44 targets 0x21aad60, is taken when v0(=ret(0x21aa880)) == 0, and falls through when v0(=ret(0x21aa880)) != 0.
  The `beq` branch at 0x21aac50 targets 0x21aad60, is taken when v1(=[ret(0x21aa880)+16]:8) == 0, and falls through when v1(=[ret(0x21aa880)+16]:8) != 0.
  The `beq` branch at 0x21aac5c targets 0x21aac70, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21aac84 targets 0x21aad80, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21aacec targets 0x21aad90, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21aad08 targets 0x21aad1c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21aad20 targets 0x21aad30, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21aad38 targets 0x21aadc4, is taken when t9(=[a1]) == ra(=0x1), and falls through when t9(=[a1]) != ra(=0x1).
  The `beq` branch at 0x21aad88 targets 0x21aac8c and is always taken.
  The `beq` branch at 0x21aad94 targets 0x21aada8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21aadac targets 0x21aadbc, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21aadbc targets 0x21aad44 and is always taken.
  The `beq` branch at 0x21aadc4 targets 0x21aad48 and is always taken.
  The return at 0x21aad58 has v0 = one of 0x0, 0x1.
  The return at 0x21aad74 has v0 = 0x0.
  The instructions from 0x21aad7c to 0x21aad7c are not reached by any path from the entry, and their branches are not listed.

- `XSecurityAllocXauth` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21aadd0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21aadd0-0x21aae08 (56 bytes).
  It occupies 56 bytes.
  The `jalr` at 0x21aadf0 calls calloc with a0=0x1, a1=0x40, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x21aae00 has v0 = ret(calloc).

- `XSecurityFreeXauth` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21aae10 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21aae10-0x21aae44 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x21aae2c calls XFree with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x21aae3c has v0 = ret(XFree).

- `Ones` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21aae50 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21aae50-0x21aaec0 (112 bytes).
  It occupies 112 bytes.
  The return at 0x21aaeb8 has v0 = ?.

- `XSecurityGenerateAuthorization` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21aaec0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21aaec0-0x21ab2fc (1084 bytes).
  It occupies 1084 bytes.
  2 such `sd` accesses store 8 bytes to a4 (arg4 at entry) +0x0, including `sd` at 0x21aaf14, `sd` at 0x21ab1c4.
  2 such `ld` accesses load 8 bytes from ret(0x21aa880) +0x10, including `ld` at 0x21aaf20, `ld` at 0x21aaf94.
  4 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21aaf2c, `ld` at 0x21ab164, `ld` at 0x21ab238.
  The `ld` at 0x21aaf38 loads 8 bytes from [a0+2408]:8 +0x0.
  7 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21aaf44, `ld` at 0x21aaf74, `ld` at 0x21ab010.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb8, including `ld` at 0x21aaf48, `ld` at 0x21ab018, `ld` at 0x21ab078.
  The `sd` at 0x21aaf60 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21aaf68, `sb` at 0x21aafa0.
  3 such `sh` accesses store 2 bytes to [a0+176]:8 +0x2, including `sh` at 0x21aaf70, `sh` at 0x21aafcc, `sh` at 0x21aaffc.
  The `ld` at 0x21aaf7c loads 8 bytes from a0 (arg0 at entry) +0x98.
  3 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0xb0, including `sd` at 0x21aaf88, `sd` at 0x21ab05c, `sd` at 0x21ab0b8.
  The `sd` at 0x21aaf90 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21aaf98 loads 4 bytes from [ret(0x21aa880)+16]:8 +0x4.
  The `sb` at 0x21aaf9c stores 1 byte to [a0+176]:8 +0x1.
  6 such `lhu` accesses load 2 bytes from a1 (arg1 at entry) +0x20, including `lhu` at 0x21aafa4, `lhu` at 0x21aafb4, `lhu` at 0x21ab014.
  The `sh` at 0x21aafa8 stores 2 bytes to [a0+176]:8 +0x4.
  4 such `lhu` accesses load 2 bytes from a1 (arg1 at entry) +0x30, including `lhu` at 0x21aafac, `lhu` at 0x21aafd4, `lhu` at 0x21ab074.
  The `sh` at 0x21aafb0 stores 2 bytes to [a0+176]:8 +0x6.
  The `lhu` at 0x21aafb8 loads 2 bytes from [a0+176]:8 +0x2.
  The `sw` at 0x21aafec stores 4 bytes to [a0+176]:8 +0x8.
  The `lhu` at 0x21ab004 loads 2 bytes from ?.
  The `sh` at 0x21ab00c stores 2 bytes to ?.
  2 such `ld` accesses load 8 bytes from a1 (arg1 at entry) +0x28, including `ld` at 0x21ab030, `ld` at 0x21ab230.
  The `ld` at 0x21ab088 loads 8 bytes from a1 (arg1 at entry) +0x38.
  The `lwu` at 0x21ab0e0 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `lwu` at 0x21ab0f8 loads 4 bytes from a3 (arg3 at entry) +0x4.
  The `sd` at 0x21ab100 stores 8 bytes to (sp + one of -0x90, -0x88) +0x0.
  The `ld` at 0x21ab110 loads 8 bytes from a3 (arg3 at entry) +0x8.
  The `sd` at 0x21ab118 stores 8 bytes to (sp + one of -0x90, -0x88, -0x80) +0x0.
  The `ld` at 0x21ab128 loads 8 bytes from a3 (arg3 at entry) +0x10.
  The `sd` at 0x21ab12c stores 8 bytes to (sp + one of -0x90, -0x88, -0x80, -0x78) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21ab170, `ld` at 0x21ab264.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21ab17c, `ld` at 0x21ab270.
  The `sh` at 0x21ab1f4 stores 2 bytes to ret(calloc) +0x30.
  The `sd` at 0x21ab200 stores 8 bytes to ret(calloc) +0x38.
  The `ld` at 0x21ab218 loads 8 bytes from ret(calloc) +0x38.
  The `lhu` at 0x21ab21c loads 2 bytes from ret(calloc) +0x30.
  The `sh` at 0x21ab220 stores 2 bytes to ret(calloc) +0x20.
  The `sd` at 0x21ab228 stores 8 bytes to ret(calloc) +0x28.
  The `bgezall` at 0x21aaf0c calls (unnamed) [0x21aa880] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21aaf3c calls (unknown callee) with a0=a0 at entry (arg0), a1=[a0+2408]:8, a2=?, a3=?.
  The `bgezall` at 0x21aaff8 calls Ones [0x21aae50] with a0=?, a1=?, a2=?, a3=?, a5=[a1+32]:2, a6=0x1, a7=[a0+176]:8.
  The `jalr` at 0x21ab038 calls memcpy with a0=[a0+176]:8, a1=[a1+40]:8, a2=[a1+32]:2, a3=?, a7=[a0+176]:8.
  The `jalr` at 0x21ab068 calls _XSend with a0=a0 at entry (arg0), a1=[a1+40]:8, a2=[a1+32]:2, a3=?, a7=[a0+176]:8.
  The `jalr` at 0x21ab090 calls memcpy with a0=?, a1=[a1+56]:8, a2=[a1+48]:2, a3=?.
  The `jalr` at 0x21ab0c8 calls _XSend with a0=a0 at entry (arg0), a1=[a1+56]:8, a2=[a1+48]:2, a3=?.
  The `jalr` at 0x21ab13c calls _XData32 with a0=a0 at entry (arg0), a1=sp-144, a2=?, a3=?, a4=0x8, a7=0x8.
  The `jalr` at 0x21ab154 calls _XReply with a0=a0 at entry (arg0), a1=sp-120, a2=0x0, a3=0x0.
  The `jalr` at 0x21ab174 calls (unknown callee) with a0=a0 at entry (arg0), a1=[a0+2408]:8, a2=?, a3=?.
  The `jalr` at 0x21ab188 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ab1dc calls calloc with a0=0x1, a1=table(0x40), a2=0x40, a3=?.
  The `jalr` at 0x21ab208 calls _XReadPad with a0=a0 at entry (arg0), a1=ret(calloc)+64, a2=?, a3=?.
  The `jalr` at 0x21ab22c calls memcpy with a0=([ret(calloc)+48]:2 + [ret(calloc)+56]:8), a1=[a1+40]:8, a2=[a1+32]:2, a3=?.
  The `jalr` at 0x21ab250 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=-0x4, a3=?.
  The `jalr` at 0x21ab268 calls (unknown callee) with a0=a0 at entry (arg0), a1=[a0+2408]:8, a2=?, a3=?.
  The `jalr` at 0x21ab27c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ab2ac calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+12, a2=?, a3=?, a7=[a0+176]:8.
  The `jalr` at 0x21ab2cc calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdb8]:8, a2=?, a3=?.
  The `beq` branch at 0x21aaf18 targets 0x21ab2c0, is taken when v0(=ret(0x21aa880)) == 0, and falls through when v0(=ret(0x21aa880)) != 0.
  The `beq` branch at 0x21aaf24 targets 0x21ab2c4, is taken when v1(=[ret(0x21aa880)+16]:8) == 0, and falls through when v1(=[ret(0x21aa880)+16]:8) != 0.
  The `beq` branch at 0x21aaf30 targets 0x21aaf44, is taken when a1(=[a0+2408]:8) == 0, and falls through when a1(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21aaf58 targets 0x21ab2ac, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+12) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+12) (unsigned).
  The `bne` branch at 0x21ab02c targets 0x21ab060, is taken when ra(=[a0+184]:8) < at(=([a1+32]:2 + [a0+176]:8)) (unsigned), and falls through when ra(=[a0+184]:8) >= at(=([a1+32]:2 + [a0+176]:8)) (unsigned).
  The `beq` branch at 0x21ab058 targets 0x21ab074 and is always taken.
  The `bne` branch at 0x21ab084 targets 0x21ab0c0, is taken when t2(=[a0+184]:8) < t3(?) (unsigned), and falls through when t2(=[a0+184]:8) >= t3(?) (unsigned).
  The `beq` branch at 0x21ab0b4 targets 0x21ab0d4 and is always taken.
  The `beq` branch at 0x21ab0d8 targets 0x21ab0ec, is taken when (s1(=a2) & 0x1) == 0, and falls through when (s1(=a2) & 0x1) != 0.
  The `beq` branch at 0x21ab0f0 targets 0x21ab104, is taken when (s1(=a2) & 0x2) == 0, and falls through when (s1(=a2) & 0x2) != 0.
  The `beq` branch at 0x21ab108 targets 0x21ab11c, is taken when (s1(=a2) & 0x4) == 0, and falls through when (s1(=a2) & 0x4) != 0.
  The `beq` branch at 0x21ab120 targets 0x21ab134, is taken when (s1(=a2) & 0x8) == 0, and falls through when (s1(=a2) & 0x8) != 0.
  The `bne` branch at 0x21ab15c targets 0x21ab1c0, is taken when v0(=ret(_XReply)) != 0, and falls through when v0(=ret(_XReply)) == 0.
  The `beq` branch at 0x21ab168 targets 0x21ab17c, is taken when a1(=[a0+2408]:8) == 0, and falls through when a1(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ab180 targets 0x21ab194, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ab1e8 targets 0x21ab240, is taken when v0(=ret(calloc)) == 0, and falls through when v0(=ret(calloc)) != 0.
  The `beq` branch at 0x21ab234 targets 0x21ab25c and is always taken.
  The `beq` branch at 0x21ab25c targets 0x21ab270, is taken when a1(=[a0+2408]:8) == 0, and falls through when a1(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ab274 targets 0x21ab288, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ab2b4 targets 0x21aaf60 and is always taken.
  The return at 0x21ab1b0 has v0 = 0x0.
  The return at 0x21ab2a4 has v0 = ret(calloc).
  The return at 0x21ab2f4 has v0 = 0x0.
  The instructions from 0x21ab0bc to 0x21ab0bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x21ab1b8 to 0x21ab1bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x21ab23c to 0x21ab23c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x21ab2bc to 0x21ab2bc are not reached by any path from the entry, and their branches are not listed.

- `XSecurityRevokeAuthorization` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ab300 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ab300-0x21ab44c (332 bytes).
  It occupies 332 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21aa880) +0x10, including `ld` at 0x21ab340, `ld` at 0x21ab3b0.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21ab34c, `ld` at 0x21ab3c8.
  The `ld` at 0x21ab358 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21ab364, `ld` at 0x21ab390, `ld` at 0x21ab41c.
  The `ld` at 0x21ab368 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21ab380 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21ab388, `sb` at 0x21ab3c4.
  The `sh` at 0x21ab38c stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21ab398 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ab3a4 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21ab3ac stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21ab3b8 loads 4 bytes from [ret(0x21aa880)+16]:8 +0x4.
  The `sb` at 0x21ab3bc stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21ab3c0 stores 4 bytes to [a0+176]:8 +0x4.
  The `ld` at 0x21ab3d4 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21ab3e0 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21ab330 calls (unnamed) [0x21aa880] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21ab35c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ab3d8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a1 at entry (arg1), a3=0x2, a4=[[ret(0x21aa880)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+8.
  The `jalr` at 0x21ab3ec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ab410 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21ab42c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdb8]:8, a2=?, a3=?.
  The `beq` branch at 0x21ab338 targets 0x21ab420, is taken when v0(=ret(0x21aa880)) == 0, and falls through when v0(=ret(0x21aa880)) != 0.
  The `beq` branch at 0x21ab344 targets 0x21ab424, is taken when v0(=[ret(0x21aa880)+16]:8) == 0, and falls through when v0(=[ret(0x21aa880)+16]:8) != 0.
  The `beq` branch at 0x21ab350 targets 0x21ab364, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21ab378 targets 0x21ab410, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21ab3cc targets 0x21ab3e0, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ab3e4 targets 0x21ab3f8, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ab418 targets 0x21ab380 and is always taken.
  The return at 0x21ab408 has v0 = 0x1.
  The return at 0x21ab444 has v0 = 0x0.

- `XagQueryVersion` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ab560 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ab560-0x21ab734 (468 bytes).
  It occupies 468 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ab480) +0x10, including `ld` at 0x21ab5a4, `ld` at 0x21ab614.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21ab5b0, `ld` at 0x21ab660, `ld` at 0x21ab6c0.
  The `ld` at 0x21ab5bc loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21ab5c8, `ld` at 0x21ab5f4, `ld` at 0x21ab6b4.
  The `ld` at 0x21ab5cc loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21ab5e4 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21ab5e8, `sb` at 0x21ab640.
  The `sh` at 0x21ab5f0 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21ab5fc loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ab608 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21ab610 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21ab61c loads 4 bytes from [ret(0x21ab480)+16]:8 +0x4.
  The `sb` at 0x21ab620 stores 1 byte to [a0+176]:8 +0x1.
  The `sh` at 0x21ab628 stores 2 bytes to [a0+176]:8 +0x4.
  The `sh` at 0x21ab634 stores 2 bytes to [a0+176]:8 +0x6.
  The `sw` at 0x21ab654 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x21ab65c stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21ab66c, `ld` at 0x21ab6cc.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21ab678, `ld` at 0x21ab6d8.
  The `bgezall` at 0x21ab594 calls (unnamed) [0x21ab480] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21ab5c0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ab63c calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0x21ab480)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+8.
  The `jalr` at 0x21ab670 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ab684 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ab6a8 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21ab6d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ab6e4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ab714 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdd0]:8, a2=?, a3=?.
  The `beq` branch at 0x21ab59c targets 0x21ab708, is taken when v0(=ret(0x21ab480)) == 0, and falls through when v0(=ret(0x21ab480)) != 0.
  The `beq` branch at 0x21ab5a8 targets 0x21ab70c, is taken when v1(=[ret(0x21ab480)+16]:8) == 0, and falls through when v1(=[ret(0x21ab480)+16]:8) != 0.
  The `beq` branch at 0x21ab5b4 targets 0x21ab5c8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21ab5dc targets 0x21ab6a8, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21ab644 targets 0x21ab6c0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21ab664 targets 0x21ab678, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ab67c targets 0x21ab690, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ab6b0 targets 0x21ab5e4 and is always taken.
  The `beq` branch at 0x21ab6c4 targets 0x21ab6d8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ab6dc targets 0x21ab6f0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21ab6a0 has v0 = 0x1.
  The return at 0x21ab700 has v0 = 0x0.
  The return at 0x21ab72c has v0 = 0x0.
  The instructions from 0x21ab6b8 to 0x21ab6bc are not reached by any path from the entry, and their branches are not listed.

- `StuffToWire` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ab740 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ab740-0x21ab85c (284 bytes).
  It occupies 284 bytes.
  7 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x0, including `lw` at 0x21ab744, `lw` at 0x21ab76c, `lw` at 0x21ab78c.
  The `lw` at 0x21ab74c loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `ld` at 0x21ab784 loads 8 bytes from a1 (arg1 at entry) +0x10.
  The `sd` at 0x21ab788 stores 8 bytes to (sp + one of -0x50, -0x48) +0x0.
  The `ld` at 0x21ab7a0 loads 8 bytes from a1 (arg1 at entry) +0x18.
  The `sd` at 0x21ab7a4 stores 8 bytes to (sp + one of -0x50, -0x48, -0x40) +0x0.
  The `ld` at 0x21ab7bc loads 8 bytes from a1 (arg1 at entry) +0x20.
  The `sd` at 0x21ab7c0 stores 8 bytes to (sp + one of -0x50, -0x48, -0x40, -0x38) +0x0.
  The `ld` at 0x21ab7dc loads 8 bytes from a1 (arg1 at entry) +0x28.
  The `sd` at 0x21ab7e0 stores 8 bytes to ?.
  The `ld` at 0x21ab7f8 loads 8 bytes from a1 (arg1 at entry) +0x30.
  2 such `sd` accesses store 8 bytes to table(0x0) +0x0, including `sd` at 0x21ab7fc, `sd` at 0x21ab818.
  The `lw` at 0x21ab814 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lhu` at 0x21ab828 loads 2 bytes from a2 (arg2 at entry) +0x2.
  The `sh` at 0x21ab844 stores 2 bytes to a2 (arg2 at entry) +0x2.
  The `jalr` at 0x21ab840 calls _XData32 with a0=a0 at entry (arg0), a1=sp-80, a2=?, a3=?, a4=[a1], a6=a2 at entry (arg2), a7=0x8.
  The `beq` branch at 0x21ab758 targets 0x21ab854, is taken when (a4(=[a1]) & 0x1) == 0, and falls through when (a4(=[a1]) & 0x1) != 0.
  The `beq` branch at 0x21ab778 targets 0x21ab790, is taken when (a4(=[a1]) & 0x2) == 0, and falls through when (a4(=[a1]) & 0x2) != 0.
  The `beq` branch at 0x21ab794 targets 0x21ab7ac, is taken when (a4(=[a1]) & 0x4) == 0, and falls through when (a4(=[a1]) & 0x4) != 0.
  The `beq` branch at 0x21ab7b0 targets 0x21ab7c8, is taken when (a4(=[a1]) & 0x8) == 0, and falls through when (a4(=[a1]) & 0x8) != 0.
  The `beq` branch at 0x21ab7d0 targets 0x21ab7e8, is taken when (a4(=[a1]) & 0x10) == 0, and falls through when (a4(=[a1]) & 0x10) != 0.
  The `beq` branch at 0x21ab7ec targets 0x21ab804, is taken when (a4(=[a1]) & 0x20) == 0, and falls through when (a4(=[a1]) & 0x20) != 0.
  The `beq` branch at 0x21ab808 targets 0x21ab820, is taken when (a4(=[a1]) & 0x40) == 0, and falls through when (a4(=[a1]) & 0x40) != 0.
  The `beq` branch at 0x21ab854 targets 0x21ab774 and is always taken.
  The return at 0x21ab84c has v0 = ret(_XData32).

- `XagCreateEmbeddedApplicationGroup` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ab860 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ab860-0x21aba6c (524 bytes).
  It occupies 524 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ab480) +0x10, including `ld` at 0x21ab8b0, `ld` at 0x21ab978.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21ab8bc, `ld` at 0x21ab9dc.
  The `ld` at 0x21ab8c8 loads 8 bytes from [a0+2408]:8 +0x0.
  The `lw` at 0x21ab8e0 loads 4 bytes from a0 (arg0 at entry) +0xe0.
  The `ld` at 0x21ab8e4 loads 8 bytes from a0 (arg0 at entry) +0xe8.
  The `ld` at 0x21ab8f8 loads 8 bytes from ([a0+232]:8 + ([a0+224] << 0x7)) +0x10.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21ab930, `ld` at 0x21ab958, `ld` at 0x21aba30.
  The `ld` at 0x21ab934 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21ab948 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21ab94c, `sb` at 0x21ab984.
  The `sh` at 0x21ab954 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21ab960 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ab96c stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21ab974 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21ab97c loads 4 bytes from [ret(0x21ab480)+16]:8 +0x4.
  The `sb` at 0x21ab980 stores 1 byte to [a0+176]:8 +0x1.
  The `ld` at 0x21ab988 loads 8 bytes from a0 (arg0 at entry) +0x48.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x21ab9b4, `sw` at 0x21ab9d8.
  The `sd` at 0x21ab9c0 stores 8 bytes to a5 (arg5 at entry) +0x0.
  The `ld` at 0x21ab9e8 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21ab9f4 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21ab8a0 calls (unnamed) [0x21ab480] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21ab8cc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ab990 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+176]:8, a3=?, a7=[[ret(0x21ab480)+16]:8+4].
  The `bgezall` at 0x21ab9d4 calls StuffToWire [0x21ab740] with a0=a0 at entry (arg0), a1=sp-144, a2=?, a3=?.
  The `jalr` at 0x21ab9ec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aba00 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21aba20 calls _XFlush with a0=a0 at entry (arg0), a1=[([a0+232]:8 + ([a0+224] << 0x7))+16]:8, a2=[a0+176]:8, a3=?, a6=[a0+176]:8+12.
  The `jalr` at 0x21aba4c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdd0]:8, a2=?, a3=?.
  The `beq` branch at 0x21ab8a8 targets 0x21aba40, is taken when v0(=ret(0x21ab480)) == 0, and falls through when v0(=ret(0x21ab480)) != 0.
  The `beq` branch at 0x21ab8b4 targets 0x21aba44, is taken when v1(=[ret(0x21ab480)+16]:8) == 0, and falls through when v1(=[ret(0x21ab480)+16]:8) != 0.
  The `beq` branch at 0x21ab8c0 targets 0x21ab8d4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ab914 targets 0x21ab930, is taken when a2 == 0, and falls through when a2 != 0.
  The `bne` branch at 0x21ab940 targets 0x21aba20, is taken when a5(=[a0+184]:8) < a6(=[a0+176]:8+12) (unsigned), and falls through when a5(=[a0+184]:8) >= a6(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x21ab9e0 targets 0x21ab9f4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ab9f8 targets 0x21aba0c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21aba2c targets 0x21ab948 and is always taken.
  The return at 0x21aba18 has v0 = 0x1.
  The return at 0x21aba64 has v0 = 0x0.
  The instructions from 0x21aba34 to 0x21aba3c are not reached by any path from the entry, and their branches are not listed.

- `XagCreateNonembeddedApplicationGroup` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21aba70 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21aba70-0x21abc18 (424 bytes).
  It occupies 424 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ab480) +0x10, including `ld` at 0x21abab0, `ld` at 0x21abb34.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21ababc, `ld` at 0x21abb98.
  The `ld` at 0x21abac8 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21abae4, `ld` at 0x21abb14, `ld` at 0x21abbe8.
  The `ld` at 0x21abae8 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21abb00 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21abb08, `sb` at 0x21abb40.
  The `sh` at 0x21abb10 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21abb1c loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21abb28 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21abb30 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21abb38 loads 4 bytes from [ret(0x21ab480)+16]:8 +0x4.
  The `sb` at 0x21abb3c stores 1 byte to [a0+176]:8 +0x1.
  The `ld` at 0x21abb44 loads 8 bytes from a0 (arg0 at entry) +0x48.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x21abb74, `sw` at 0x21abb94.
  The `sd` at 0x21abb7c stores 8 bytes to a1 (arg1 at entry) +0x0.
  The `ld` at 0x21abba4 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21abbb0 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21abaa0 calls (unnamed) [0x21ab480] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21abacc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21abb4c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=[a0+176]:8, a3=0x1, a4=[[ret(0x21ab480)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+12.
  The `bgezall` at 0x21abb90 calls StuffToWire [0x21ab740] with a0=a0 at entry (arg0), a1=sp-112, a2=?, a3=?.
  The `jalr` at 0x21abba8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21abbbc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21abbdc calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+12, a2=[a0+176]:8, a3=?.
  The `jalr` at 0x21abbf8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdd0]:8, a2=?, a3=?.
  The `beq` branch at 0x21abaa8 targets 0x21abbec, is taken when v0(=ret(0x21ab480)) == 0, and falls through when v0(=ret(0x21ab480)) != 0.
  The `beq` branch at 0x21abab4 targets 0x21abbf0, is taken when v1(=[ret(0x21ab480)+16]:8) == 0, and falls through when v1(=[ret(0x21ab480)+16]:8) != 0.
  The `beq` branch at 0x21abac0 targets 0x21abad4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21abaf8 targets 0x21abbdc, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+12) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x21abb9c targets 0x21abbb0, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21abbb4 targets 0x21abbc8, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21abbe4 targets 0x21abb00 and is always taken.
  The return at 0x21abbd4 has v0 = 0x1.
  The return at 0x21abc10 has v0 = 0x0.

- `XagDestroyApplicationGroup` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21abc20 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21abc20-0x21abd6c (332 bytes).
  It occupies 332 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ab480) +0x10, including `ld` at 0x21abc60, `ld` at 0x21abcd0.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21abc6c, `ld` at 0x21abce8.
  The `ld` at 0x21abc78 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21abc84, `ld` at 0x21abcb0, `ld` at 0x21abd3c.
  The `ld` at 0x21abc88 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21abca0 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21abca8, `sb` at 0x21abce4.
  The `sh` at 0x21abcac stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21abcb8 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21abcc4 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21abccc stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21abcd8 loads 4 bytes from [ret(0x21ab480)+16]:8 +0x4.
  The `sb` at 0x21abcdc stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21abce0 stores 4 bytes to [a0+176]:8 +0x4.
  The `ld` at 0x21abcf4 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21abd00 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21abc50 calls (unnamed) [0x21ab480] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21abc7c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21abcf8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a1 at entry (arg1), a3=0x2, a4=[[ret(0x21ab480)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+8.
  The `jalr` at 0x21abd0c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21abd30 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21abd4c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdd0]:8, a2=?, a3=?.
  The `beq` branch at 0x21abc58 targets 0x21abd40, is taken when v0(=ret(0x21ab480)) == 0, and falls through when v0(=ret(0x21ab480)) != 0.
  The `beq` branch at 0x21abc64 targets 0x21abd44, is taken when v0(=[ret(0x21ab480)+16]:8) == 0, and falls through when v0(=[ret(0x21ab480)+16]:8) != 0.
  The `beq` branch at 0x21abc70 targets 0x21abc84, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21abc98 targets 0x21abd30, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21abcec targets 0x21abd00, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21abd04 targets 0x21abd18, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21abd38 targets 0x21abca0 and is always taken.
  The return at 0x21abd28 has v0 = 0x1.
  The return at 0x21abd64 has v0 = 0x0.

- `XagGetApplicationGroupAttributes` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21abd70 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21abd70-0x21ac0bc (844 bytes).
  It occupies 844 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ab480) +0x10, including `ld` at 0x21abdc8, `ld` at 0x21abe3c.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21abdd4, `ld` at 0x21abf00, `ld` at 0x21ac040.
  The `ld` at 0x21abde0 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21abdec, `ld` at 0x21abe1c, `ld` at 0x21ac03c.
  The `ld` at 0x21abdf0 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21abe08 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21abe10, `sb` at 0x21abe64.
  The `sh` at 0x21abe18 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21abe24 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21abe30 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21abe38 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21abe44 loads 4 bytes from [ret(0x21ab480)+16]:8 +0x4.
  The `sb` at 0x21abe4c stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21abe58 stores 4 bytes to [a0+176]:8 +0x4.
  The `lw` at 0x21abe80 loads 4 bytes from ?.
  7 such `ld` accesses load 8 bytes from table(0x0) +0x0, including `ld` at 0x21abea4, `ld` at 0x21abf5c, `ld` at 0x21abf80.
  5 such `sd` accesses store 8 bytes to entry(0x0) +0x0, including `sd` at 0x21abeac, `sd` at 0x21abfb0, `sd` at 0x21abfe0.
  The `lw` at 0x21abec0 loads 4 bytes from table(0x4) +0x0.
  The `ld` at 0x21abeec loads 8 bytes from table(0x21b58a0) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21abf0c, `ld` at 0x21ac04c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21abf18, `ld` at 0x21ac058.
  2 such `sw` accesses store 4 bytes to entry(0x0) +0x0, including `sw` at 0x21abf68, `sw` at 0x21abf8c.
  The `bgezall` at 0x21abdb8 calls (unnamed) [0x21ab480] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21abde4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21abe60 calls _XReply with a0=a0 at entry (arg0), a1=sp-128, a2=0x0, a3=0x0, a4=[[ret(0x21ab480)+16]:8+4], a5=a1 at entry (arg1), a6=0x3, a7=[a0+152]:8+1.
  The `jalr` at 0x21abf10 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=-0x8.
  The `jalr` at 0x21abf24 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac030 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?, a5=a1 at entry (arg1).
  The `jalr` at 0x21ac050 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac064 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac094 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdd0]:8, a2=?, a3=?.
  The `beq` branch at 0x21abdc0 targets 0x21ac088, is taken when v0(=ret(0x21ab480)) == 0, and falls through when v0(=ret(0x21ab480)) != 0.
  The `beq` branch at 0x21abdcc targets 0x21ac08c, is taken when v1(=[ret(0x21ab480)+16]:8) == 0, and falls through when v1(=[ret(0x21ab480)+16]:8) != 0.
  The `beq` branch at 0x21abdd8 targets 0x21abdec, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21abe00 targets 0x21ac02c, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21abe6c targets 0x21ac040, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21abe84 targets 0x21abf00, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x21abe8c targets 0x21ac0b4 and is always taken.
  The `beq` branch at 0x21abec4 targets 0x21abf00, is taken when a1(=entry(0x4)) == 0, and falls through when a1(=entry(0x4)) != 0.
  The `beq` branch at 0x21abee4 targets 0x21abeb0, is taken when a7(?) >= 0x8 (unsigned), and falls through when a7(?) < 0x8 (unsigned).
  The `beq` branch at 0x21abf04 targets 0x21abf18, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21abf1c targets 0x21abf30, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21abf64 targets 0x21abeb0 and is always taken.
  The `beq` branch at 0x21abf88 targets 0x21abeb0 and is always taken.
  The `beq` branch at 0x21abfac targets 0x21abeb0 and is always taken.
  The `beq` branch at 0x21abfdc targets 0x21abeb0 and is always taken.
  The `beq` branch at 0x21ac000 targets 0x21abeb0 and is always taken.
  The `beq` branch at 0x21ac024 targets 0x21abeb0 and is always taken.
  The `beq` branch at 0x21ac038 targets 0x21abe04 and is always taken.
  The `beq` branch at 0x21ac044 targets 0x21ac058, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ac05c targets 0x21ac070, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ac0b4 targets 0x21abed0 and is always taken.
  The return at 0x21abf40 has v0 = 0x1.
  The return at 0x21ac080 has v0 = 0x0.
  The return at 0x21ac0ac has v0 = 0x0.
  The instructions from 0x21abef8 to 0x21abefc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x21abfb4 to 0x21abfbc are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x21abef0 uses the jump table at 0x21b58a0 with targets 0x21abeb0, 0x21ac008, 0x21abe94, 0x21abfe4, 0x21abfc0, 0x21abf90, 0x21abf48, 0x21abf6c.

- `XagQueryApplicationGroup` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ac0c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ac0c0-0x21ac288 (456 bytes).
  It occupies 456 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ab480) +0x10, including `ld` at 0x21ac104, `ld` at 0x21ac17c.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21ac110, `ld` at 0x21ac1b8, `ld` at 0x21ac214.
  The `ld` at 0x21ac11c loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21ac128, `ld` at 0x21ac15c, `ld` at 0x21ac210.
  The `ld` at 0x21ac12c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21ac148 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21ac150, `sb` at 0x21ac1a4.
  The `sh` at 0x21ac158 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21ac164 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ac170 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21ac178 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21ac184 loads 4 bytes from [ret(0x21ab480)+16]:8 +0x4.
  The `sb` at 0x21ac18c stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21ac198 stores 4 bytes to [a0+176]:8 +0x4.
  The `sd` at 0x21ac1b4 stores 8 bytes to a2 (arg2 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21ac1c8, `ld` at 0x21ac220.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21ac1d4, `ld` at 0x21ac22c.
  The `bgezall` at 0x21ac0f4 calls (unnamed) [0x21ab480] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21ac120 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac1a0 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(0x21ab480)+16]:8+4], a5=a1 at entry (arg1), a6=0x4, a7=0x1.
  The `jalr` at 0x21ac1cc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac1e0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac204 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21ac224 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac238 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac268 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdd0]:8, a2=?, a3=?.
  The `beq` branch at 0x21ac0fc targets 0x21ac25c, is taken when v0(=ret(0x21ab480)) == 0, and falls through when v0(=ret(0x21ab480)) != 0.
  The `beq` branch at 0x21ac108 targets 0x21ac260, is taken when v1(=[ret(0x21ab480)+16]:8) == 0, and falls through when v1(=[ret(0x21ab480)+16]:8) != 0.
  The `beq` branch at 0x21ac114 targets 0x21ac128, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21ac13c targets 0x21ac204, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21ac1a8 targets 0x21ac214, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21ac1c0 targets 0x21ac1d4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ac1d8 targets 0x21ac1ec, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ac20c targets 0x21ac144 and is always taken.
  The `beq` branch at 0x21ac218 targets 0x21ac22c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ac230 targets 0x21ac244, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21ac1fc has v0 = 0x1.
  The return at 0x21ac254 has v0 = 0x0.
  The return at 0x21ac280 has v0 = 0x0.

- `XagCreateAssociation` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ac290 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ac290-0x21ac2a0 (16 bytes).
  It occupies 16 bytes.
  The `ld` at 0x21ac290 loads 8 bytes from a2 (arg2 at entry) +0x0.
  The `sd` at 0x21ac29c stores 8 bytes to a1 (arg1 at entry) +0x0.
  The return at 0x21ac298 has v0 = 0x1.

- `XagDestroyAssociation` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ac2a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ac2a0-0x21ac2a8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x21ac2a0 has v0 = 0x1.

- `XcupQueryVersion` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ac3a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ac3a0-0x21ac574 (468 bytes).
  It occupies 468 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ac2c0) +0x10, including `ld` at 0x21ac3e4, `ld` at 0x21ac454.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21ac3f0, `ld` at 0x21ac4a0, `ld` at 0x21ac500.
  The `ld` at 0x21ac3fc loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21ac408, `ld` at 0x21ac434, `ld` at 0x21ac4f4.
  The `ld` at 0x21ac40c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21ac424 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21ac428, `sb` at 0x21ac480.
  The `sh` at 0x21ac430 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21ac43c loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ac448 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21ac450 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21ac45c loads 4 bytes from [ret(0x21ac2c0)+16]:8 +0x4.
  The `sb` at 0x21ac460 stores 1 byte to [a0+176]:8 +0x1.
  The `sh` at 0x21ac468 stores 2 bytes to [a0+176]:8 +0x4.
  The `sh` at 0x21ac474 stores 2 bytes to [a0+176]:8 +0x6.
  The `sw` at 0x21ac494 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x21ac49c stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21ac4ac, `ld` at 0x21ac50c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21ac4b8, `ld` at 0x21ac518.
  The `bgezall` at 0x21ac3d4 calls (unnamed) [0x21ac2c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21ac400 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac47c calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0x21ac2c0)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+8.
  The `jalr` at 0x21ac4b0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac4c4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac4e8 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21ac510 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac524 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac554 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfde0]:8, a2=?, a3=?.
  The `beq` branch at 0x21ac3dc targets 0x21ac548, is taken when v0(=ret(0x21ac2c0)) == 0, and falls through when v0(=ret(0x21ac2c0)) != 0.
  The `beq` branch at 0x21ac3e8 targets 0x21ac54c, is taken when v1(=[ret(0x21ac2c0)+16]:8) == 0, and falls through when v1(=[ret(0x21ac2c0)+16]:8) != 0.
  The `beq` branch at 0x21ac3f4 targets 0x21ac408, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21ac41c targets 0x21ac4e8, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21ac484 targets 0x21ac500, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21ac4a4 targets 0x21ac4b8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ac4bc targets 0x21ac4d0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ac4f0 targets 0x21ac424 and is always taken.
  The `beq` branch at 0x21ac504 targets 0x21ac518, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ac51c targets 0x21ac530, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21ac4e0 has v0 = 0x1.
  The return at 0x21ac540 has v0 = 0x0.
  The return at 0x21ac56c has v0 = 0x0.
  The instructions from 0x21ac4f8 to 0x21ac4fc are not reached by any path from the entry, and their branches are not listed.

- `XcupGetReservedColormapEntries` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ac580 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ac580-0x21ac8c8 (840 bytes).
  It occupies 840 bytes.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0x21ac5c4, `sw` at 0x21ac718.
  2 such `ld` accesses load 8 bytes from ret(0x21ac2c0) +0x10, including `ld` at 0x21ac5d4, `ld` at 0x21ac64c.
  6 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21ac5e0, `ld` at 0x21ac76c, `ld` at 0x21ac7c0.
  The `ld` at 0x21ac5ec loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21ac5f8, `ld` at 0x21ac630, `ld` at 0x21ac81c.
  The `ld` at 0x21ac5fc loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21ac618 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  The `sh` at 0x21ac620 stores 2 bytes to [a0+176]:8 +0x2.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21ac628, `sb` at 0x21ac674.
  The `ld` at 0x21ac62c loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ac640 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ac648 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `lw` at 0x21ac654 loads 4 bytes from [ret(0x21ac2c0)+16]:8 +0x4.
  The `sb` at 0x21ac65c stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21ac668 stores 4 bytes to [a0+176]:8 +0x4.
  The `sd` at 0x21ac710 stores 8 bytes to a2 (arg2 at entry) +0x0.
  The `lwu` at 0x21ac724 loads 4 bytes from ?.
  The `sd` at 0x21ac728 stores 8 bytes to ?.
  3 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x21ac72c, `lhu` at 0x21ac734, `lhu` at 0x21ac73c.
  3 such `sh` accesses store 2 bytes to ?, including `sh` at 0x21ac730, `sh` at 0x21ac738, `sh` at 0x21ac740.
  The `lw` at 0x21ac744 loads 4 bytes from a3 (arg3 at entry) +0x0.
  3 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21ac778, `ld` at 0x21ac7cc, `ld` at 0x21ac870.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21ac784, `ld` at 0x21ac7d8, `ld` at 0x21ac87c.
  The `bgezall` at 0x21ac5bc calls (unnamed) [0x21ac2c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21ac5f0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac670 calls _XReply with a0=a0 at entry (arg0), a1=sp-336, a2=0x0, a3=0x0, a4=[[ret(0x21ac2c0)+16]:8+4], a5=a1 at entry (arg1), a6=0x1, a7=0x1.
  The `jalr` at 0x21ac6bc calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac6e8 calls _XRead with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac6fc calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac77c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac790 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac7d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac7e4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac810 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21ac830 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfde0]:8, a2=?, a3=?.
  The `jalr` at 0x21ac85c calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac874 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac888 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac898 calls XFree with a0=?, a1=?, a2=?, a3=a2 at entry (arg2).
  The `jalr` at 0x21ac8b0 calls XFree with a0=?, a1=?, a2=?, a3=a2 at entry (arg2).
  The `beq` branch at 0x21ac5cc targets 0x21ac820, is taken when v0(=ret(0x21ac2c0)) == 0, and falls through when v0(=ret(0x21ac2c0)) != 0.
  The `beq` branch at 0x21ac5d8 targets 0x21ac824, is taken when v1(=[ret(0x21ac2c0)+16]:8) == 0, and falls through when v1(=[ret(0x21ac2c0)+16]:8) != 0.
  The `beq` branch at 0x21ac5e4 targets 0x21ac5f8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21ac60c targets 0x21ac810, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21ac678 targets 0x21ac7c0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `bne` branch at 0x21ac6a8 targets 0x21ac6cc, is taken when s2(?) < 0x15 (signed), and falls through when s2(?) >= 0x15 (signed).
  The `beq` branch at 0x21ac6b0 targets 0x21ac8c0, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x21ac6c4 targets 0x21ac6d0 and is always taken.
  The `beq` branch at 0x21ac6d8 targets 0x21ac854, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x21ac6f0 targets 0x21ac8a8, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x21ac70c targets 0x21ac7b8, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `blez` branch at 0x21ac71c targets 0x21ac764, is taken when s2(?) <= 0 (signed), and falls through when s2(?) > 0 (signed).
  The `bne` branch at 0x21ac75c targets 0x21ac724, is taken when a2(?) < a5(=[a3]) (signed), and falls through when a2(?) >= a5(=[a3]) (signed).
  The `bne` branch at 0x21ac764 targets 0x21ac898, is taken when s3(?) != a0(=sp-304), and falls through when s3(?) == a0(=sp-304).
  The `beq` branch at 0x21ac770 targets 0x21ac784, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ac788 targets 0x21ac79c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `bne` branch at 0x21ac7b8 targets 0x21ac8b0, is taken when s3(?) != a0(=sp-304), and falls through when s3(?) == a0(=sp-304).
  The `beq` branch at 0x21ac7c4 targets 0x21ac7d8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ac7dc targets 0x21ac7f0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ac818 targets 0x21ac614 and is always taken.
  The `beq` branch at 0x21ac868 targets 0x21ac87c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ac880 targets 0x21ac890, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ac890 targets 0x21ac7f0 and is always taken.
  The `beq` branch at 0x21ac8a0 targets 0x21ac770 and is always taken.
  The `beq` branch at 0x21ac8a8 targets 0x21ac6f8 and is always taken.
  The `beq` branch at 0x21ac8b8 targets 0x21ac7c4 and is always taken.
  The `beq` branch at 0x21ac8c0 targets 0x21ac6b8 and is always taken.
  The return at 0x21ac7b0 has v0 = 0x1.
  The return at 0x21ac808 has v0 = 0x0.
  The return at 0x21ac84c has v0 = 0x0.

- `XcupStoreColors` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ac8d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ac8d0-0x21acde8 (1304 bytes).
  It occupies 1304 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ac2c0) +0x10, including `ld` at 0x21ac920, `ld` at 0x21ac998.
  6 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21ac92c, `ld` at 0x21acbf0, `ld` at 0x21acc94.
  The `ld` at 0x21ac938 loads 8 bytes from [a0+2408]:8 +0x0.
  5 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21ac944, `ld` at 0x21ac978, `ld` at 0x21aca24.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb8, including `ld` at 0x21ac948, `ld` at 0x21aca28.
  The `sd` at 0x21ac960 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sh` accesses store 2 bytes to [a0+176]:8 +0x2, including `sh` at 0x21ac968, `sh` at 0x21ac9b0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21ac96c, `sb` at 0x21ac9c0.
  The `ld` at 0x21ac970 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ac984 stores 8 bytes to a0 (arg0 at entry) +0x98.
  2 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0xb0, including `sd` at 0x21ac990, `sd` at 0x21aca58.
  The `lhu` at 0x21ac99c loads 2 bytes from [a0+176]:8 +0x2.
  The `lw` at 0x21ac9a8 loads 4 bytes from [ret(0x21ac2c0)+16]:8 +0x4.
  The `sw` at 0x21ac9b4 stores 4 bytes to [a0+176]:8 +0x4.
  The `sb` at 0x21ac9b8 stores 1 byte to [a0+176]:8 +0x1.
  The `ld` at 0x21aca04 loads 8 bytes from ?.
  9 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x21aca0c, `lhu` at 0x21aca14, `lhu` at 0x21aca1c.
  2 such `lwu` accesses load 4 bytes from ?, including `lwu` at 0x21acb24, `lwu` at 0x21acdb0.
  2 such `sd` accesses store 8 bytes to a2 (arg2 at entry) +0x0, including `sd` at 0x21acb28, `sd` at 0x21acdb4.
  2 such `sh` accesses store 2 bytes to a2 (arg2 at entry) +0x8, including `sh` at 0x21acb30, `sh` at 0x21acdbc.
  2 such `sh` accesses store 2 bytes to a2 (arg2 at entry) +0xa, including `sh` at 0x21acb3c, `sh` at 0x21acdc4.
  2 such `sh` accesses store 2 bytes to a2 (arg2 at entry) +0xc, including `sh` at 0x21acb54, `sh` at 0x21acdcc.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x21acb5c, `lbu` at 0x21acdd0.
  3 such `sb` accesses store 1 byte to ?, including `sb` at 0x21acb64, `sb` at 0x21acba0, `sb` at 0x21acbe0.
  The `lwu` at 0x21acb6c loads 4 bytes from table(0xc) +0x0.
  2 such `sd` accesses store 8 bytes to ?, including `sd` at 0x21acb70, `sd` at 0x21acbac.
  The `lhu` at 0x21acb74 loads 2 bytes from table(0x10) +0x0.
  6 such `sh` accesses store 2 bytes to ?, including `sh` at 0x21acb78, `sh` at 0x21acb80, `sh` at 0x21acb88.
  The `lhu` at 0x21acb7c loads 2 bytes from table(0x12) +0x0.
  The `lhu` at 0x21acb84 loads 2 bytes from table(0x14) +0x0.
  The `lbu` at 0x21acb9c loads 1 byte from table(0x16) +0x0.
  The `lwu` at 0x21acba8 loads 4 bytes from table(0x18) +0x0.
  The `lhu` at 0x21acbb0 loads 2 bytes from table(0x1c) +0x0.
  The `lhu` at 0x21acbb8 loads 2 bytes from table(0x1e) +0x0.
  The `lhu` at 0x21acbc0 loads 2 bytes from table(0x20) +0x0.
  The `lbu` at 0x21acbd8 loads 1 byte from table(0x22) +0x0.
  4 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21acbfc, `ld` at 0x21acca0, `ld` at 0x21acd00.
  4 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21acc08, `ld` at 0x21accac, `ld` at 0x21acd0c.
  The `sb` at 0x21acdd8 stores 1 byte to a2 (arg2 at entry) +0xe.
  The `ld` at 0x21acde4 loads 8 bytes from a2 (arg2 at entry) +0x0.
  The `bgezall` at 0x21ac910 calls (unnamed) [0x21ac2c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21ac93c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ac9ec calls _XSend with a0=a0 at entry (arg0), a1=sp-3200, a2=0xc, a3=?.
  The `jalr` at 0x21aca40 calls memcpy with a0=[a0+176]:8, a1=sp-3200, a2=0xc, a3=?.
  The `jalr` at 0x21aca74 calls _XReply with a0=a0 at entry (arg0), a1=sp-3184, a2=0x0, a3=0x0.
  The `jalr` at 0x21acad4 calls malloc with a0=?, a1=?, a2=?, a3=?, a5=0x55555556.
  The `jalr` at 0x21acafc calls _XRead with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21acc00 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21acc14 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21acc68 calls _XFlush with a0=a0 at entry (arg0), a1=?, a2=[a0+176]:8+8, a3=?, a5=a1 at entry (arg1).
  The `jalr` at 0x21acc8c calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=0x55555556.
  The `jalr` at 0x21acca4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21accb8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21acce4 calls XFree with a0=?, a1=?, a2=?, a3=?, a5=sp-3152.
  The `jalr` at 0x21acd04 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21acd18 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21acd50 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfde0]:8, a2=?, a3=?.
  The `jalr` at 0x21acd6c calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21acd84 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21acd98 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x21ac918 targets 0x21acd44, is taken when v0(=ret(0x21ac2c0)) == 0, and falls through when v0(=ret(0x21ac2c0)) != 0.
  The `beq` branch at 0x21ac924 targets 0x21acd48, is taken when v1(=[ret(0x21ac2c0)+16]:8) == 0, and falls through when v1(=[ret(0x21ac2c0)+16]:8) != 0.
  The `beq` branch at 0x21ac930 targets 0x21ac944, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21ac958 targets 0x21acc64, is taken when a1(=[a0+184]:8) < a2(=[a0+176]:8+8) (unsigned), and falls through when a1(=[a0+184]:8) >= a2(=[a0+176]:8+8) (unsigned).
  The `blez` branch at 0x21ac9bc targets 0x21aca64, is taken when s4(=a3) <= 0 (signed), and falls through when s4(=a3) > 0 (signed).
  The `beq` branch at 0x21ac9d8 targets 0x21acddc and is always taken.
  The `beq` branch at 0x21ac9fc targets 0x21aca5c, is taken when s0(?) == s2(=((a3 << 0x4) + a2)), and falls through when s0(?) != s2(=((a3 << 0x4) + a2)).
  The `bne` branch at 0x21aca34 targets 0x21ac9e0, is taken when t9(=[a0+184]:8) < ra(=[a0+176]:8+12) (unsigned), and falls through when t9(=[a0+184]:8) >= ra(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x21aca54 targets 0x21ac9f4 and is always taken.
  The `beq` branch at 0x21aca7c targets 0x21accf4, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `bne` branch at 0x21acaa4 targets 0x21acc80, is taken when s4(=a3) != a3(?), and falls through when s4(=a3) == a3(?).
  The `bne` branch at 0x21acab0 targets 0x21acae4, is taken when s4(=a3) < 0x101 (signed), and falls through when s4(=a3) >= 0x101 (signed).
  The `beq` branch at 0x21acab8 targets 0x21acda8, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x21acaec targets 0x21acd60, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `blez` branch at 0x21acb04 targets 0x21acbe8, is taken when s4(=a3) <= 0 (signed), and falls through when s4(=a3) > 0 (signed).
  The `bne` branch at 0x21acb1c targets 0x21acdb0, is taken when s4(=a3) < 0x2 (signed), and falls through when s4(=a3) >= 0x2 (signed).
  The `beq` branch at 0x21acb98 targets 0x21acc5c, is taken when a3(=table(0xc)) == at(=table(-0xc)), and falls through when a3(=table(0xc)) != at(=table(-0xc)).
  The `bne` branch at 0x21acbd4 targets 0x21acb64, is taken when a3(=table(0x18)) != at(=table(-0xc)), and falls through when a3(=table(0x18)) == at(=table(-0xc)).
  The `bne` branch at 0x21acbe8 targets 0x21acce4, is taken when s0(?) != a5(=sp-3152), and falls through when s0(?) == a5(=sp-3152).
  The `beq` branch at 0x21acbf4 targets 0x21acc08, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21acc0c targets 0x21acc20, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21acc5c targets 0x21acbe0 and is always taken.
  The `beq` branch at 0x21acc70 targets 0x21ac95c and is always taken.
  The `beq` branch at 0x21acc98 targets 0x21accac, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21accb0 targets 0x21accc4, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21accec targets 0x21acbf4 and is always taken.
  The `beq` branch at 0x21accf8 targets 0x21acd0c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21acd10 targets 0x21acd24, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21acd58 targets 0x21acc40 and is always taken.
  The `beq` branch at 0x21acd78 targets 0x21acd8c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21acd90 targets 0x21acda0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21acda0 targets 0x21acc40 and is always taken.
  The `beq` branch at 0x21acda8 targets 0x21acad0 and is always taken.
  The `beq` branch at 0x21acdd4 targets 0x21acbe4 and is always taken.
  The `beq` branch at 0x21acde0 targets 0x21aca08 and is always taken.
  The return at 0x21acc34 has v0 = 0x1.
  The return at 0x21acc54 has v0 = 0x0.
  The return at 0x21accdc has v0 = 0x0.
  The return at 0x21acd3c has v0 = 0x0.
  The instructions from 0x21acc3c to 0x21acc3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x21acc78 to 0x21acc7c are not reached by any path from the entry, and their branches are not listed.

- `DPMSQueryExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21acee0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21acee0-0x21acf68 (136 bytes).
  It occupies 136 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ace00) +0x10, including `ld` at 0x21acf1c, `ld` at 0x21acf3c.
  The `lw` at 0x21acf34 loads 4 bytes from [ret(0x21ace00)+16]:8 +0x8.
  The `sw` at 0x21acf38 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0x21acf48 loads 4 bytes from [ret(0x21ace00)+16]:8 +0xc.
  The `sw` at 0x21acf4c stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0x21acf08 calls (unnamed) [0x21ace00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x21acf14 targets 0x21acf58, is taken when v0(=ret(0x21ace00)) == 0, and falls through when v0(=ret(0x21ace00)) != 0.
  The `beq` branch at 0x21acf20 targets 0x21acf58, is taken when a5(=[ret(0x21ace00)+16]:8) == 0, and falls through when a5(=[ret(0x21ace00)+16]:8) != 0.
  The return at 0x21acf50 has v0 = 0x1.
  The return at 0x21acf60 has v0 = 0x0.

- `DPMSGetVersion` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21acf70 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21acf70-0x21ad134 (452 bytes).
  It occupies 452 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ace00) +0x10, including `ld` at 0x21acfb4, `ld` at 0x21ad024.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21acfc0, `ld` at 0x21ad068, `ld` at 0x21ad0c0.
  The `ld` at 0x21acfcc loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21acfd8, `ld` at 0x21ad004, `ld` at 0x21ad0bc.
  The `ld` at 0x21acfdc loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21acff4 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21acff8, `sb` at 0x21ad048.
  The `sh` at 0x21ad000 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21ad00c loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ad018 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21ad020 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21ad030 loads 4 bytes from [ret(0x21ace00)+16]:8 +0x4.
  The `sb` at 0x21ad03c stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21ad05c stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x21ad064 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21ad074, `ld` at 0x21ad0cc.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21ad080, `ld` at 0x21ad0d8.
  The `bgezall` at 0x21acfa4 calls (unnamed) [0x21ace00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21acfd0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ad044 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0x21ace00)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+8.
  The `jalr` at 0x21ad078 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ad08c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ad0b0 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21ad0d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ad0e4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ad114 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdf0]:8, a2=?, a3=?.
  The `beq` branch at 0x21acfac targets 0x21ad108, is taken when v0(=ret(0x21ace00)) == 0, and falls through when v0(=ret(0x21ace00)) != 0.
  The `beq` branch at 0x21acfb8 targets 0x21ad10c, is taken when v1(=[ret(0x21ace00)+16]:8) == 0, and falls through when v1(=[ret(0x21ace00)+16]:8) != 0.
  The `beq` branch at 0x21acfc4 targets 0x21acfd8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21acfec targets 0x21ad0b0, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21ad04c targets 0x21ad0c0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21ad06c targets 0x21ad080, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ad084 targets 0x21ad098, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ad0b8 targets 0x21acff4 and is always taken.
  The `beq` branch at 0x21ad0c4 targets 0x21ad0d8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ad0dc targets 0x21ad0f0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21ad0a8 has v0 = 0x1.
  The return at 0x21ad100 has v0 = 0x0.
  The return at 0x21ad12c has v0 = 0x0.

- `DPMSCapable` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ad140 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ad140-0x21ad2ec (428 bytes).
  It occupies 428 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ace00) +0x10, including `ld` at 0x21ad17c, `ld` at 0x21ad1ec.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21ad188, `ld` at 0x21ad218.
  The `ld` at 0x21ad194 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21ad1a0, `ld` at 0x21ad1cc, `ld` at 0x21ad26c.
  The `ld` at 0x21ad1a4 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21ad1bc stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21ad1c4, `sb` at 0x21ad210.
  The `sh` at 0x21ad1c8 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21ad1d4 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ad1e0 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21ad1e8 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21ad1f8 loads 4 bytes from [ret(0x21ace00)+16]:8 +0x4.
  The `sb` at 0x21ad204 stores 1 byte to [a0+176]:8 +0x1.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21ad224, `ld` at 0x21ad278.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21ad230, `ld` at 0x21ad284.
  The `bgezall` at 0x21ad16c calls (unnamed) [0x21ace00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21ad198 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `jalr` at 0x21ad20c calls _XReply with a0=a0 at entry (arg0), a1=sp-64, a2=0x0, a3=0x0, a4=[[ret(0x21ace00)+16]:8+4], a5=0x1, a6=[a0+152]:8+1, a7=0x1.
  The `jalr` at 0x21ad228 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `jalr` at 0x21ad23c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ad260 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x21ad27c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+2408]:8.
  The `jalr` at 0x21ad290 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ad2cc calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdf0]:8, a2=?, a3=?.
  The `beq` branch at 0x21ad174 targets 0x21ad2c0, is taken when v0(=ret(0x21ace00)) == 0, and falls through when v0(=ret(0x21ace00)) != 0.
  The `beq` branch at 0x21ad180 targets 0x21ad2c4, is taken when v1(=[ret(0x21ace00)+16]:8) == 0, and falls through when v1(=[ret(0x21ace00)+16]:8) != 0.
  The `beq` branch at 0x21ad18c targets 0x21ad1a0, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21ad1b4 targets 0x21ad260, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21ad214 targets 0x21ad270, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21ad21c targets 0x21ad230, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ad234 targets 0x21ad248, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ad268 targets 0x21ad1bc and is always taken.
  The `beq` branch at 0x21ad270 targets 0x21ad284, is taken when a3(=[a0+2408]:8) == 0, and falls through when a3(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ad288 targets 0x21ad29c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21ad258 has v0 = ?.
  The return at 0x21ad2ac has v0 = 0x0.
  The return at 0x21ad2e4 has v0 = 0x0.
  The instructions from 0x21ad2b4 to 0x21ad2bc are not reached by any path from the entry, and their branches are not listed.

- `DPMSSetTimeouts` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ad2f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ad2f0-0x21ad4a0 (432 bytes).
  It occupies 432 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ace00) +0x10, including `ld` at 0x21ad36c, `ld` at 0x21ad3dc.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21ad378, `ld` at 0x21ad3f8.
  The `ld` at 0x21ad384 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21ad390, `ld` at 0x21ad3bc, `ld` at 0x21ad484.
  The `ld` at 0x21ad394 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21ad3ac stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21ad3b4, `sb` at 0x21ad3f4.
  The `sh` at 0x21ad3b8 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21ad3c4 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ad3d0 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21ad3d8 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21ad3e0 loads 4 bytes from [ret(0x21ace00)+16]:8 +0x4.
  The `sb` at 0x21ad3e4 stores 1 byte to [a0+176]:8 +0x1.
  The `sh` at 0x21ad3e8 stores 2 bytes to [a0+176]:8 +0x4.
  The `sh` at 0x21ad3ec stores 2 bytes to [a0+176]:8 +0x6.
  The `sh` at 0x21ad3f0 stores 2 bytes to [a0+176]:8 +0x8.
  The `ld` at 0x21ad404 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21ad410 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21ad334 calls (unnamed) [0x21ace00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21ad388 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ad408 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=0x3, a3=[[ret(0x21ace00)+16]:8+4], a4=[a0+152]:8+1, a5=0x1, a6=[a0+176]:8+12, a7=0xc.
  The `jalr` at 0x21ad41c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ad478 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+12, a2=?, a3=?.
  The `jalr` at 0x21ad490 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdf0]:8, a2=?, a3=?.
  The `beq` branch at 0x21ad344 targets 0x21ad354, is taken when s4(=a3) == 0, and falls through when s4(=a3) != 0.
  The `bne` branch at 0x21ad34c targets 0x21ad44c, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x21ad354 targets 0x21ad364, is taken when s1(=a2) == 0, and falls through when s1(=a2) != 0.
  The `bne` branch at 0x21ad35c targets 0x21ad470, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x21ad364 targets 0x21ad48c, is taken when s2(=ret(0x21ace00)) == 0, and falls through when s2(=ret(0x21ace00)) != 0.
  The `beq` branch at 0x21ad370 targets 0x21ad48c, is taken when v0(=[ret(0x21ace00)+16]:8) == 0, and falls through when v0(=[ret(0x21ace00)+16]:8) != 0.
  The `beq` branch at 0x21ad37c targets 0x21ad390, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21ad3a4 targets 0x21ad478, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+12) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+12) (unsigned).
  The `beq` branch at 0x21ad3fc targets 0x21ad410, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ad414 targets 0x21ad428, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ad470 targets 0x21ad42c and is always taken.
  The `beq` branch at 0x21ad480 targets 0x21ad3ac and is always taken.
  The `beq` branch at 0x21ad498 targets 0x21ad428 and is always taken.
  The return at 0x21ad444 has v0 = one of 0x0, 0x1, 0x2.
  The return at 0x21ad468 has v0 = 0x2.
  The instructions from 0x21ad488 to 0x21ad488 are not reached by any path from the entry, and their branches are not listed.

- `DPMSGetTimeouts` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ad4a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ad4a0-0x21ad660 (448 bytes).
  It occupies 448 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ace00) +0x10, including `ld` at 0x21ad4e8, `ld` at 0x21ad558.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21ad4f4, `ld` at 0x21ad584.
  The `ld` at 0x21ad500 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21ad50c, `ld` at 0x21ad53c, `ld` at 0x21ad614.
  The `ld` at 0x21ad510 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21ad528 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21ad530, `sb` at 0x21ad57c.
  The `sh` at 0x21ad538 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21ad544 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ad54c stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21ad554 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21ad564 loads 4 bytes from [ret(0x21ace00)+16]:8 +0x4.
  The `sb` at 0x21ad570 stores 1 byte to [a0+176]:8 +0x1.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21ad590, `ld` at 0x21ad620.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21ad59c, `ld` at 0x21ad62c.
  The `sh` at 0x21ad5b8 stores 2 bytes to a1 (arg1 at entry) +0x0.
  The `sh` at 0x21ad5d4 stores 2 bytes to a2 (arg2 at entry) +0x0.
  The `sh` at 0x21ad5e4 stores 2 bytes to a3 (arg3 at entry) +0x0.
  The `bgezall` at 0x21ad4d8 calls (unnamed) [0x21ace00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21ad504 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=[a0+2408]:8.
  The `jalr` at 0x21ad578 calls _XReply with a0=a0 at entry (arg0), a1=sp-96, a2=0x0, a3=0x1, a4=[[ret(0x21ace00)+16]:8+4], a5=0x2, a6=[a0+152]:8+1, a7=0x1.
  The `jalr` at 0x21ad594 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=[a0+2408]:8.
  The `jalr` at 0x21ad5a8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ad608 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x21ad624 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=[a0+2408]:8.
  The `jalr` at 0x21ad638 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ad650 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdf0]:8, a2=?, a3=?.
  The `beq` branch at 0x21ad4e0 targets 0x21ad648, is taken when v0(=ret(0x21ace00)) == 0, and falls through when v0(=ret(0x21ace00)) != 0.
  The `beq` branch at 0x21ad4ec targets 0x21ad64c, is taken when v1(=[ret(0x21ace00)+16]:8) == 0, and falls through when v1(=[ret(0x21ace00)+16]:8) != 0.
  The `beq` branch at 0x21ad4f8 targets 0x21ad50c, is taken when a6(=[a0+2408]:8) == 0, and falls through when a6(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21ad520 targets 0x21ad608, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21ad580 targets 0x21ad618, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21ad588 targets 0x21ad59c, is taken when a6(=[a0+2408]:8) == 0, and falls through when a6(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ad5a0 targets 0x21ad5b4, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ad610 targets 0x21ad528 and is always taken.
  The `beq` branch at 0x21ad618 targets 0x21ad62c, is taken when a6(=[a0+2408]:8) == 0, and falls through when a6(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ad630 targets 0x21ad640, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ad640 targets 0x21ad5f0 and is always taken.
  The `beq` branch at 0x21ad658 targets 0x21ad5f0 and is always taken.
  The return at 0x21ad5e8 has v0 = 0x1.
  The return at 0x21ad600 has v0 = 0x0.

- `DPMSEnable` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ad660 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ad660-0x21ad7ac (332 bytes).
  It occupies 332 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ace00) +0x10, including `ld` at 0x21ad69c, `ld` at 0x21ad70c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21ad6a8, `ld` at 0x21ad71c.
  The `ld` at 0x21ad6b4 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21ad6c0, `ld` at 0x21ad6f0, `ld` at 0x21ad770.
  The `ld` at 0x21ad6c4 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21ad6dc stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21ad6e4, `sb` at 0x21ad718.
  The `sh` at 0x21ad6ec stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21ad6f4 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ad700 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21ad708 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21ad710 loads 4 bytes from [ret(0x21ace00)+16]:8 +0x4.
  The `sb` at 0x21ad714 stores 1 byte to [a0+176]:8 +0x1.
  The `ld` at 0x21ad728 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21ad734 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21ad68c calls (unnamed) [0x21ace00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21ad6b8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ad72c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=0x4, a3=[[ret(0x21ace00)+16]:8+4], a4=[a0+152]:8+1, a5=0x1, a6=[a0+176]:8+4, a7=0x4.
  The `jalr` at 0x21ad740 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ad764 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x21ad78c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdf0]:8, a2=?, a3=?.
  The `beq` branch at 0x21ad694 targets 0x21ad780, is taken when v0(=ret(0x21ace00)) == 0, and falls through when v0(=ret(0x21ace00)) != 0.
  The `beq` branch at 0x21ad6a0 targets 0x21ad784, is taken when v0(=[ret(0x21ace00)+16]:8) == 0, and falls through when v0(=[ret(0x21ace00)+16]:8) != 0.
  The `beq` branch at 0x21ad6ac targets 0x21ad6c0, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21ad6d4 targets 0x21ad764, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21ad720 targets 0x21ad734, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ad738 targets 0x21ad74c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ad76c targets 0x21ad6dc and is always taken.
  The return at 0x21ad75c has v0 = 0x1.
  The return at 0x21ad7a4 has v0 = 0x0.
  The instructions from 0x21ad774 to 0x21ad77c are not reached by any path from the entry, and their branches are not listed.

- `DPMSDisable` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ad7b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ad7b0-0x21ad8f0 (320 bytes).
  It occupies 320 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ace00) +0x10, including `ld` at 0x21ad7ec, `ld` at 0x21ad85c.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21ad7f8, `ld` at 0x21ad86c.
  The `ld` at 0x21ad804 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21ad810, `ld` at 0x21ad840, `ld` at 0x21ad8c0.
  The `ld` at 0x21ad814 loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21ad82c stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21ad834, `sb` at 0x21ad868.
  The `sh` at 0x21ad83c stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21ad848 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ad850 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21ad858 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21ad860 loads 4 bytes from [ret(0x21ace00)+16]:8 +0x4.
  The `sb` at 0x21ad864 stores 1 byte to [a0+176]:8 +0x1.
  The `ld` at 0x21ad878 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21ad884 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21ad7dc calls (unnamed) [0x21ace00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21ad808 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ad87c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=0x5, a3=[[ret(0x21ace00)+16]:8+4], a4=[a0+152]:8+1, a5=0x1, a6=[a0+176]:8+4, a7=0x4.
  The `jalr` at 0x21ad890 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ad8b4 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x21ad8d0 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdf0]:8, a2=?, a3=?.
  The `beq` branch at 0x21ad7e4 targets 0x21ad8c4, is taken when v0(=ret(0x21ace00)) == 0, and falls through when v0(=ret(0x21ace00)) != 0.
  The `beq` branch at 0x21ad7f0 targets 0x21ad8c8, is taken when v0(=[ret(0x21ace00)+16]:8) == 0, and falls through when v0(=[ret(0x21ace00)+16]:8) != 0.
  The `beq` branch at 0x21ad7fc targets 0x21ad810, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21ad824 targets 0x21ad8b4, is taken when v1(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when v1(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21ad870 targets 0x21ad884, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ad888 targets 0x21ad89c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ad8bc targets 0x21ad82c and is always taken.
  The return at 0x21ad8ac has v0 = 0x1.
  The return at 0x21ad8e8 has v0 = 0x0.

- `DPMSForceLevel` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21ad8f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21ad8f0-0x21ada98 (424 bytes).
  It occupies 424 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ace00) +0x10, including `ld` at 0x21ad940, `ld` at 0x21ad9f4.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21ad98c, `ld` at 0x21ada08.
  The `ld` at 0x21ad998 loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21ad9a8, `ld` at 0x21ad9d4, `ld` at 0x21ada94.
  The `ld` at 0x21ad9ac loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21ad9c4 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21ad9cc, `sb` at 0x21ada04.
  The `sh` at 0x21ad9d0 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21ad9dc loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ad9e8 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21ad9f0 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21ad9f8 loads 4 bytes from [ret(0x21ace00)+16]:8 +0x4.
  The `sb` at 0x21ad9fc stores 1 byte to [a0+176]:8 +0x1.
  The `sh` at 0x21ada00 stores 2 bytes to [a0+176]:8 +0x4.
  The `ld` at 0x21ada14 loads 8 bytes from [a0+2408]:8 +0x8.
  The `ld` at 0x21ada20 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `bgezall` at 0x21ad924 calls (unnamed) [0x21ace00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21ad99c calls (unknown callee) with a0=a0 at entry (arg0), a1=0x2, a2=?, a3=?.
  The `jalr` at 0x21ada18 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x2, a2=?, a3=?, a4=0x6, a5=[[ret(0x21ace00)+16]:8+4], a6=[a0+152]:8+1, a7=0x1.
  The `jalr` at 0x21ada2c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ada60 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdf0]:8, a2=?, a3=?.
  The `jalr` at 0x21ada84 calls _XFlush with a0=a0 at entry (arg0), a1=0x2, a2=?, a3=[a0+176]:8+8.
  The `beq` branch at 0x21ad938 targets 0x21ada54, is taken when v0(=ret(0x21ace00)) == 0, and falls through when v0(=ret(0x21ace00)) != 0.
  The `beq` branch at 0x21ad944 targets 0x21ada58, is taken when v0(=[ret(0x21ace00)+16]:8) == 0, and falls through when v0(=[ret(0x21ace00)+16]:8) != 0.
  The `beq` branch at 0x21ad94c targets 0x21ad988, is taken when s1(=a1) == 0, and falls through when s1(=a1) != 0.
  The `beq` branch at 0x21ad954 targets 0x21ad98c, is taken when s1(=a1) == v1(=0x1), and falls through when s1(=a1) != v1(=0x1).
  The `beq` branch at 0x21ad95c targets 0x21ad98c, is taken when s1(=a1) == a1(=0x2), and falls through when s1(=a1) != a1(=0x2).
  The `beq` branch at 0x21ad964 targets 0x21ad98c, is taken when s1(=a1) == a0(=0x3), and falls through when s1(=a1) != a0(=0x3).
  The `beq` branch at 0x21ad990 targets 0x21ad9a8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21ad9bc targets 0x21ada84, is taken when a2(=[a0+184]:8) < a3(=[a0+176]:8+8) (unsigned), and falls through when a2(=[a0+184]:8) >= a3(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21ada0c targets 0x21ada20, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ada24 targets 0x21ada38, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ada90 targets 0x21ad9c4 and is always taken.
  The return at 0x21ad980 has v0 = 0x2.
  The return at 0x21ada4c has v0 = 0x1.
  The return at 0x21ada7c has v0 = 0x0.

- `DPMSInfo` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21adaa0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21adaa0-0x21adc6c (460 bytes).
  It occupies 460 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21ace00) +0x10, including `ld` at 0x21adae4, `ld` at 0x21adb54.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21adaf0, `ld` at 0x21adb80.
  The `ld` at 0x21adafc loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21adb08, `ld` at 0x21adb38, `ld` at 0x21adbec.
  The `ld` at 0x21adb0c loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21adb24 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21adb2c, `sb` at 0x21adb78.
  The `sh` at 0x21adb34 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21adb40 loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21adb48 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21adb50 stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21adb60 loads 4 bytes from [ret(0x21ace00)+16]:8 +0x4.
  The `sb` at 0x21adb6c stores 1 byte to [a0+176]:8 +0x1.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21adb8c, `ld` at 0x21adbf8.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21adb98, `ld` at 0x21adc04.
  The `sh` at 0x21adbc4 stores 2 bytes to a1 (arg1 at entry) +0x0.
  The `sb` at 0x21adbd4 stores 1 byte to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0x21adad4 calls (unnamed) [0x21ace00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21adb00 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+2408]:8.
  The `jalr` at 0x21adb74 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x1, a4=[[ret(0x21ace00)+16]:8+4], a5=0x7, a6=[a0+152]:8+1, a7=0x1.
  The `jalr` at 0x21adb90 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+2408]:8.
  The `jalr` at 0x21adba4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21adbe0 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x21adbfc calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=[a0+2408]:8.
  The `jalr` at 0x21adc10 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21adc4c calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdf0]:8, a2=?, a3=?.
  The `beq` branch at 0x21adadc targets 0x21adc40, is taken when v0(=ret(0x21ace00)) == 0, and falls through when v0(=ret(0x21ace00)) != 0.
  The `beq` branch at 0x21adae8 targets 0x21adc44, is taken when v1(=[ret(0x21ace00)+16]:8) == 0, and falls through when v1(=[ret(0x21ace00)+16]:8) != 0.
  The `beq` branch at 0x21adaf4 targets 0x21adb08, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21adb1c targets 0x21adbe0, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21adb7c targets 0x21adbf0, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21adb84 targets 0x21adb98, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21adb9c targets 0x21adbb0, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21adbe8 targets 0x21adb24 and is always taken.
  The `beq` branch at 0x21adbf0 targets 0x21adc04, is taken when a5(=[a0+2408]:8) == 0, and falls through when a5(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21adc08 targets 0x21adc1c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21adbd8 has v0 = 0x1.
  The return at 0x21adc2c has v0 = 0x0.
  The return at 0x21adc64 has v0 = 0x0.
  The instructions from 0x21adc34 to 0x21adc3c are not reached by any path from the entry, and their branches are not listed.

- `XeviQueryExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21add20 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21add20-0x21add88 (104 bytes).
  It occupies 104 bytes.
  The `ld` at 0x21add58 loads 8 bytes from ret(0x21adc80) +0x10.
  The `bgezall` at 0x21add44 calls (unnamed) [0x21adc80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x21add50 targets 0x21add70, is taken when v0(=ret(0x21adc80)) == 0, and falls through when v0(=ret(0x21adc80)) != 0.
  The `beq` branch at 0x21add5c targets 0x21add70, is taken when v1(=[ret(0x21adc80)+16]:8) == 0, and falls through when v1(=[ret(0x21adc80)+16]:8) != 0.
  The return at 0x21add68 has v0 = 0x1.
  The return at 0x21add80 has v0 = 0x0.

- `XeviQueryVersion` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21add90 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21add90-0x21adf50 (448 bytes).
  It occupies 448 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21adc80) +0x10, including `ld` at 0x21addd4, `ld` at 0x21ade40.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21adde0, `ld` at 0x21ade84, `ld` at 0x21adedc.
  The `ld` at 0x21addec loads 8 bytes from [a0+2408]:8 +0x0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21addf8, `ld` at 0x21ade24, `ld` at 0x21aded8.
  The `ld` at 0x21addfc loads 8 bytes from a0 (arg0 at entry) +0xb8.
  The `sd` at 0x21ade14 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21ade18, `sb` at 0x21ade64.
  The `sh` at 0x21ade20 stores 2 bytes to [a0+176]:8 +0x2.
  The `ld` at 0x21ade2c loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ade34 stores 8 bytes to a0 (arg0 at entry) +0xb0.
  The `sd` at 0x21ade3c stores 8 bytes to a0 (arg0 at entry) +0x98.
  The `lw` at 0x21ade4c loads 4 bytes from [ret(0x21adc80)+16]:8 +0x4.
  The `sb` at 0x21ade58 stores 1 byte to [a0+176]:8 +0x1.
  The `sw` at 0x21ade78 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x21ade80 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21ade90, `ld` at 0x21adee8.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21ade9c, `ld` at 0x21adef4.
  The `bgezall` at 0x21addc4 calls (unnamed) [0x21adc80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21addf0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ade60 calls _XReply with a0=a0 at entry (arg0), a1=sp-80, a2=0x0, a3=0x0, a4=[[ret(0x21adc80)+16]:8+4], a5=[a0+152]:8+1, a6=0x1, a7=[a0+176]:8+4.
  The `jalr` at 0x21ade94 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21adea8 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21adecc calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+4, a2=?, a3=?.
  The `jalr` at 0x21adeec calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21adf00 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21adf30 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdf8]:8, a2=?, a3=?.
  The `beq` branch at 0x21addcc targets 0x21adf24, is taken when v0(=ret(0x21adc80)) == 0, and falls through when v0(=ret(0x21adc80)) != 0.
  The `beq` branch at 0x21addd8 targets 0x21adf28, is taken when v1(=[ret(0x21adc80)+16]:8) == 0, and falls through when v1(=[ret(0x21adc80)+16]:8) != 0.
  The `beq` branch at 0x21adde4 targets 0x21addf8, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21ade0c targets 0x21adecc, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+4) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21ade68 targets 0x21adedc, is taken when v0(=ret(_XReply)) == 0, and falls through when v0(=ret(_XReply)) != 0.
  The `beq` branch at 0x21ade88 targets 0x21ade9c, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21adea0 targets 0x21adeb4, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21aded4 targets 0x21ade14 and is always taken.
  The `beq` branch at 0x21adee0 targets 0x21adef4, is taken when v0(=[a0+2408]:8) == 0, and falls through when v0(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21adef8 targets 0x21adf0c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The return at 0x21adec4 has v0 = 0x1.
  The return at 0x21adf1c has v0 = 0x0.
  The return at 0x21adf48 has v0 = 0x0.

- `notInList` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21adf50 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21adf50-0x21adf88 (56 bytes).
  It occupies 56 bytes.
  The `lwu` at 0x21adf60 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lwu` at 0x21adf74 loads 4 bytes from ?.
  The `blez` branch at 0x21adf50 targets 0x21adf78, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `beq` branch at 0x21adf68 targets 0x21adf80, is taken when a7(?) == a2, and falls through when a7(?) != a2.
  The `bnel` branch at 0x21adf70 targets 0x21adf64, is taken when a0(?) != a5(=((a1 << 0x2) + a0)), and falls through when a0(?) == a5(=((a1 << 0x2) + a0)); its branch-likely delay slot `lwu a7,0(a0)` at 0x21adf74 runs only when taken and is annulled on fall-through.
  The return at 0x21adf78 has v0 = 0x1.
  The return at 0x21adf80 has v0 = 0x0.

- `XeviGetVisualInfo` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21adf90 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/gfx/arch/IP35VOYAGER64/libGL.so`.
  Range: 0x21adf90-0x21aea30 (2720 bytes).
  It occupies 2720 bytes.
  2 such `ld` accesses load 8 bytes from ret(0x21adc80) +0x10, including `ld` at 0x21adfe4, `ld` at 0x21ae1ec.
  2 such `sw` accesses store 4 bytes to a4 (arg4 at entry) +0x0, including `sw` at 0x21ae008, `sw` at 0x21ae92c.
  2 such `sd` accesses store 8 bytes to a3 (arg3 at entry) +0x0, including `sd` at 0x21ae014, `sd` at 0x21ae510.
  6 such `ld` accesses load 8 bytes from ?, including `ld` at 0x21ae050, `ld` at 0x21ae054, `ld` at 0x21ae12c.
  31 such `sw` accesses store 4 bytes to ?, including `sw` at 0x21ae150, `sw` at 0x21ae2f4, `sw` at 0x21ae324.
  4 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x968, including `ld` at 0x21ae184, `ld` at 0x21ae460, `ld` at 0x21ae580.
  The `ld` at 0x21ae190 loads 8 bytes from [a0+2408]:8 +0x0.
  7 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb0, including `ld` at 0x21ae19c, `ld` at 0x21ae1d0, `ld` at 0x21ae290.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xb8, including `ld` at 0x21ae1a0, `ld` at 0x21ae3e4, `ld` at 0x21ae95c.
  The `sd` at 0x21ae1b8 stores 8 bytes to a0 (arg0 at entry) +0xa0.
  4 such `sh` accesses store 2 bytes to [a0+176]:8 +0x2, including `sh` at 0x21ae1c0, `sh` at 0x21ae244, `sh` at 0x21ae3dc.
  2 such `sb` accesses store 1 byte to [a0+176]:8 +0x0, including `sb` at 0x21ae1c8, `sb` at 0x21ae214.
  The `ld` at 0x21ae1cc loads 8 bytes from a0 (arg0 at entry) +0x98.
  The `sd` at 0x21ae1e0 stores 8 bytes to a0 (arg0 at entry) +0x98.
  2 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0xb0, including `sd` at 0x21ae1e8, `sd` at 0x21ae428.
  The `lhu` at 0x21ae1f0 loads 2 bytes from [a0+176]:8 +0x2.
  The `lw` at 0x21ae1f4 loads 4 bytes from [ret(0x21adc80)+16]:8 +0x4.
  2 such `sw` accesses store 4 bytes to [a0+176]:8 +0x4, including `sw` at 0x21ae200, `sw` at 0x21ae288.
  The `sb` at 0x21ae208 stores 1 byte to [a0+176]:8 +0x1.
  The `ld` at 0x21ae218 loads 8 bytes from a0 (arg0 at entry) +0x960.
  5 such `lwu` accesses load 4 bytes from ?, including `lwu` at 0x21ae258, `lwu` at 0x21ae708, `lwu` at 0x21ae768.
  The `ld` at 0x21ae330 loads 8 bytes from table(0x8) +0x0.
  The `sw` at 0x21ae33c stores 4 bytes to table(0x4) +0x0.
  The `ld` at 0x21ae348 loads 8 bytes from table(0x10) +0x0.
  The `sw` at 0x21ae354 stores 4 bytes to table(0x8) +0x0.
  The `ld` at 0x21ae360 loads 8 bytes from table(0x18) +0x0.
  The `sw` at 0x21ae36c stores 4 bytes to table(0xc) +0x0.
  The `ld` at 0x21ae378 loads 8 bytes from table(0x20) +0x0.
  The `sw` at 0x21ae384 stores 4 bytes to table(0x10) +0x0.
  The `ld` at 0x21ae390 loads 8 bytes from table(0x28) +0x0.
  The `sw` at 0x21ae39c stores 4 bytes to table(0x14) +0x0.
  The `ld` at 0x21ae3a8 loads 8 bytes from table(0x30) +0x0.
  The `sw` at 0x21ae3b4 stores 4 bytes to table(0x18) +0x0.
  The `ld` at 0x21ae3c0 loads 8 bytes from table(0x38) +0x0.
  The `sw` at 0x21ae3cc stores 4 bytes to table(0x1c) +0x0.
  3 such `ld` accesses load 8 bytes from [a0+2408]:8 +0x8, including `ld` at 0x21ae46c, `ld` at 0x21ae58c, `ld` at 0x21ae644.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0xd0, including `ld` at 0x21ae478, `ld` at 0x21ae598, `ld` at 0x21ae650.
  The `ld` at 0x21ae548 loads 8 bytes from a3 (arg3 at entry) +0x0.
  2 such `lwu` accesses load 4 bytes from ret(malloc) +0x0, including `lwu` at 0x21ae694, `lwu` at 0x21ae9e8.
  10 such `sd` accesses store 8 bytes to ?, including `sd` at 0x21ae698, `sd` at 0x21ae6ec, `sd` at 0x21ae70c.
  2 such `lb` accesses load 1 byte from ret(malloc) +0x4, including `lb` at 0x21ae69c, `lb` at 0x21ae9f0.
  2 such `lb` accesses load 1 byte from ret(malloc) +0x5, including `lb` at 0x21ae6a4, `lb` at 0x21ae9f8.
  2 such `lbu` accesses load 1 byte from ret(malloc) +0x6, including `lbu` at 0x21ae6ac, `lbu` at 0x21aea00.
  2 such `lw` accesses load 4 bytes from ret(malloc) +0x8, including `lw` at 0x21ae6b4, `lw` at 0x21aea08.
  2 such `lbu` accesses load 1 byte from ret(malloc) +0xc, including `lbu` at 0x21ae6bc, `lbu` at 0x21aea10.
  2 such `lbu` accesses load 1 byte from ret(malloc) +0xd, including `lbu` at 0x21ae6c4, `lbu` at 0x21aea18.
  2 such `lhu` accesses load 2 bytes from ret(malloc) +0xe, including `lhu` at 0x21ae6dc, `lhu` at 0x21aea20.
  4 such `lb` accesses load 1 byte from ?, including `lb` at 0x21ae710, `lb` at 0x21ae718, `lb` at 0x21ae770.
  6 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x21ae720, `lbu` at 0x21ae730, `lbu` at 0x21ae738.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x21ae728, `lw` at 0x21ae788.
  2 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x21ae750, `lhu` at 0x21ae7b0.
  The `lwu` at 0x21ae864 loads 4 bytes from table(0x4) +0x0.
  The `sd` at 0x21ae870 stores 8 bytes to table(0x8) +0x0.
  The `lwu` at 0x21ae87c loads 4 bytes from table(0x8) +0x0.
  The `sd` at 0x21ae888 stores 8 bytes to table(0x10) +0x0.
  The `lwu` at 0x21ae894 loads 4 bytes from table(0xc) +0x0.
  The `sd` at 0x21ae8a0 stores 8 bytes to table(0x18) +0x0.
  The `lwu` at 0x21ae8ac loads 4 bytes from table(0x10) +0x0.
  The `sd` at 0x21ae8b8 stores 8 bytes to table(0x20) +0x0.
  The `lwu` at 0x21ae8c4 loads 4 bytes from table(0x14) +0x0.
  The `sd` at 0x21ae8d0 stores 8 bytes to table(0x28) +0x0.
  The `lwu` at 0x21ae8dc loads 4 bytes from table(0x18) +0x0.
  The `sd` at 0x21ae8e8 stores 8 bytes to table(0x30) +0x0.
  The `lwu` at 0x21ae8f4 loads 4 bytes from table(0x1c) +0x0.
  The `sd` at 0x21ae904 stores 8 bytes to table(0x38) +0x0.
  The `bgezall` at 0x21adfd4 calls (unnamed) [0x21adc80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x21ae010 calls XGetVisualInfo with a0=a0 at entry (arg0), a1=0x0, a2=0x0, a3=sp-192.
  The `jalr` at 0x21ae06c calls XFree with a0=ret(XGetVisualInfo), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x21ae0a8 calls XMissingExtension with a0=a0 at entry (arg0), a1=[0x21bfdf8]:8, a2=?, a3=?.
  The `jalr` at 0x21ae0e8 calls malloc with a0=?, a1=a1 at entry (arg1), a2=?, a3=?.
  The `bgezall` at 0x21ae130 calls notInList [0x21adf50] with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae17c calls XFree with a0=ret(XGetVisualInfo), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae194 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae260 calls memmove with a0=[a0+176]:8+8, a1=[a0+176]:8+4, a2=?, a3=?, a4=0x1, a5=0x1, a6=[a0+176]:8+8, a7=0x8.
  The `jalr` at 0x21ae284 calls _XData32 with a0=a0 at entry (arg0), a1=sp-184, a2=0x4, a3=?.
  The `jalr` at 0x21ae2ac calls malloc with a0=(a2 << 0x2), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x21ae408 calls memcpy with a0=[a0+176]:8, a1=ret(malloc), a2=?, a3=?.
  The `jalr` at 0x21ae438 calls _XSend with a0=a0 at entry (arg0), a1=ret(malloc), a2=?, a3=?.
  The `jalr` at 0x21ae450 calls _XReply with a0=a0 at entry (arg0), a1=sp-176, a2=0x0, a3=0x0.
  The `jalr` at 0x21ae470 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae484 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae494 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae4c0 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae508 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae528 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae540 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae578 calls _XEatData with a0=a0 at entry (arg0), a1=?, a2=-0x4, a3=[a3]:8.
  The `jalr` at 0x21ae590 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae5a4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae61c calls _XRead with a0=a0 at entry (arg0), a1=ret(malloc), a2=?, a3=[a3]:8.
  The `jalr` at 0x21ae630 calls _XRead with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae648 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae65c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae910 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae91c calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae980 calls _XFlush with a0=a0 at entry (arg0), a1=[a0+176]:8+8, a2=?, a3=?.
  The `jalr` at 0x21ae9a0 calls free with a0=a3 at entry (arg3), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae9b4 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x21ae9c8 calls free with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x21adfdc targets 0x21ae09c, is taken when v0(=ret(0x21adc80)) == 0, and falls through when v0(=ret(0x21adc80)) != 0.
  The `beq` branch at 0x21adfe8 targets 0x21ae0a0, is taken when v1(=[ret(0x21adc80)+16]:8) == 0, and falls through when v1(=[ret(0x21adc80)+16]:8) != 0.
  The `beq` branch at 0x21ae018 targets 0x21ae5e4, is taken when v0(=ret(XGetVisualInfo)) == 0, and falls through when v0(=ret(XGetVisualInfo)) != 0.
  The `beq` branch at 0x21ae020 targets 0x21ae0d0, is taken when s1(=a2) == 0, and falls through when s1(=a2) != 0.
  The `beq` branch at 0x21ae028 targets 0x21ae0d4, is taken when a1 == 0, and falls through when a1 != 0.
  The `blez` branch at 0x21ae030 targets 0x21ae2a4, is taken when s1(=a2) <= 0 (signed), and falls through when s1(=a2) > 0 (signed).
  The `blez` branch at 0x21ae048 targets 0x21ae068, is taken when a2(?) <= 0 (signed), and falls through when a2(?) > 0 (signed).
  The `beq` branch at 0x21ae058 targets 0x21ae294, is taken when t2(?) == a5(?), and falls through when t2(?) != a5(?).
  The `bne` branch at 0x21ae064 targets 0x21ae054, is taken when v1(?) != t1(?), and falls through when v1(?) == t1(?).
  The `beq` branch at 0x21ae0d4 targets 0x21ae0e0, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `blez` branch at 0x21ae0f8 targets 0x21ae990, is taken when s6(?) <= 0 (signed), and falls through when s6(?) > 0 (signed).
  The `beq` branch at 0x21ae138 targets 0x21ae158, is taken when v0(=ret(notInList)) == 0, and falls through when v0(=ret(notInList)) != 0.
  The `bne` branch at 0x21ae164 targets 0x21ae124, is taken when s3(?) < v1(?) (signed), and falls through when s3(?) >= v1(?) (signed).
  The `beq` branch at 0x21ae188 targets 0x21ae19c, is taken when v1(=[a0+2408]:8) == 0, and falls through when v1(=[a0+2408]:8) != 0.
  The `bne` branch at 0x21ae1b0 targets 0x21ae980, is taken when a0(=[a0+184]:8) < a1(=[a0+176]:8+8) (unsigned), and falls through when a0(=[a0+184]:8) >= a1(=[a0+176]:8+8) (unsigned).
  The `beq` branch at 0x21ae210 targets 0x21ae3d8, is taken when a3(=0xffff) >= a1(?) (unsigned), and falls through when a3(=0xffff) < a1(?) (unsigned).
  The `beq` branch at 0x21ae21c targets 0x21ae950, is taken when t1(=[a0+2400]:8) == 0, and falls through when t1(=[a0+2400]:8) != 0.
  The `beq` branch at 0x21ae28c targets 0x21ae3e4 and is always taken.
  The `bne` branch at 0x21ae29c targets 0x21ae048, is taken when a0(?) != s1(=a2), and falls through when a0(?) == s1(=a2).
  The `blez` branch at 0x21ae2b8 targets 0x21ae178, is taken when s1(=a2) <= 0 (signed), and falls through when s1(=a2) > 0 (signed).
  The `beq` branch at 0x21ae2d8 targets 0x21ae300, is taken when (s1(=a2) & 0x7) == 0, and falls through when (s1(=a2) & 0x7) != 0.
  The `bne` branch at 0x21ae2f8 targets 0x21ae2e0, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x21ae304 targets 0x21ae3d0, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0x21ae3c8 targets 0x21ae30c, is taken when a1(=table(0x40)) != v1(=((a2 << 0x3) + a1)), and falls through when a1(=table(0x40)) == v1(=((a2 << 0x3) + a1)).
  The `beq` branch at 0x21ae3d0 targets 0x21ae178 and is always taken.
  The `bne` branch at 0x21ae3f4 targets 0x21ae430, is taken when t8(=[a0+184]:8) < t9(?) (unsigned), and falls through when t8(=[a0+184]:8) >= t9(?) (unsigned).
  The `beq` branch at 0x21ae424 targets 0x21ae440 and is always taken.
  The `bne` branch at 0x21ae458 targets 0x21ae4c0, is taken when v0(=ret(_XReply)) != 0, and falls through when v0(=ret(_XReply)) == 0.
  The `beq` branch at 0x21ae464 targets 0x21ae478, is taken when v1(=[a0+2408]:8) == 0, and falls through when v1(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ae47c targets 0x21ae48c, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `beq` branch at 0x21ae4fc targets 0x21ae9d8, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x21ae518 targets 0x21ae524, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0x21ae530 targets 0x21ae9e0, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x21ae550 targets 0x21ae564, is taken when a3(=[a3]:8) == 0, and falls through when a3(=[a3]:8) != 0.
  The `beq` branch at 0x21ae558 targets 0x21ae568, is taken when s1(=ret(malloc)) == 0, and falls through when s1(=ret(malloc)) != 0.
  The `bne` branch at 0x21ae560 targets 0x21ae60c, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x21ae584 targets 0x21ae598, is taken when v1(=[a0+2408]:8) == 0, and falls through when v1(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ae59c targets 0x21ae5ac, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `bne` branch at 0x21ae5ac targets 0x21ae9a0, is taken when s0(=a3) != 0, and falls through when s0(=a3) == 0.
  The `bne` branch at 0x21ae5b4 targets 0x21ae9b0, is taken when s1(=ret(malloc)) != 0, and falls through when s1(=ret(malloc)) == 0.
  The `bne` branch at 0x21ae5bc targets 0x21ae9c4, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x21ae63c targets 0x21ae650, is taken when v1(=[a0+2408]:8) == 0, and falls through when v1(=[a0+2408]:8) != 0.
  The `beq` branch at 0x21ae654 targets 0x21ae668, is taken when t9(=[a0+208]:8) == 0, and falls through when t9(=[a0+208]:8) != 0.
  The `blez` branch at 0x21ae678 targets 0x21ae7c8, is taken when t2(?) <= 0 (signed), and falls through when t2(?) > 0 (signed).
  The `bne` branch at 0x21ae68c targets 0x21ae9e8, is taken when t2(?) < 0x2 (signed), and falls through when t2(?) >= 0x2 (signed).
  The `beq` branch at 0x21ae758 targets 0x21ae998, is taken when a5(?) == at(=table(-0x10)), and falls through when a5(?) != at(=table(-0x10)).
  The `bne` branch at 0x21ae7b8 targets 0x21ae700, is taken when a5(?) != at(=table(-0x10)), and falls through when a5(?) == at(=table(-0x10)).
  The `blez` branch at 0x21ae7cc targets 0x21ae90c, is taken when t3(?) <= 0 (signed), and falls through when t3(?) > 0 (signed).
  The `beq` branch at 0x21ae7e8 targets 0x21ae7f4, is taken when t2(?) >= 0 (signed), and falls through when t2(?) < 0 (signed).
  The `beq` branch at 0x21ae80c targets 0x21ae834, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x21ae82c targets 0x21ae814, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x21ae838 targets 0x21ae908, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0x21ae900 targets 0x21ae840, is taken when a2(=table(0x20)) != t1(?), and falls through when a2(=table(0x20)) == t1(?).
  The `bne` branch at 0x21ae96c targets 0x21ae42c, is taken when at(=[a0+184]:8) < a0(=[a0+176]:8+4) (unsigned), and falls through when at(=[a0+184]:8) >= a0(=[a0+176]:8+4) (unsigned).
  The `beq` branch at 0x21ae974 targets 0x21ae3fc and is always taken.
  The `beq` branch at 0x21ae988 targets 0x21ae1b8 and is always taken.
  The `beq` branch at 0x21ae990 targets 0x21ae178 and is always taken.
  The `beq` branch at 0x21ae998 targets 0x21ae7c4 and is always taken.
  The `beq` branch at 0x21ae9a8 targets 0x21ae5b4 and is always taken.
  The `beq` branch at 0x21ae9bc targets 0x21ae5bc and is always taken.
  The `beq` branch at 0x21ae9d0 targets 0x21ae5c4 and is always taken.
  The `beq` branch at 0x21ae9d8 targets 0x21ae504 and is always taken.
  The `beq` branch at 0x21ae9e0 targets 0x21ae53c and is always taken.
  The `beq` branch at 0x21aea28 targets 0x21ae7c8 and is always taken.
  The return at 0x21ae094 has v0 = 0x2.
  The return at 0x21ae0c8 has v0 = 0x0.
  The return at 0x21ae4b8 has v0 = 0xa.
  The return at 0x21ae5dc has v0 = 0xb.
  The return at 0x21ae604 has v0 = 0x2.
  The return at 0x21ae948 has v0 = 0x0.
  The instructions from 0x21ae97c to 0x21ae97c are not reached by any path from the entry, and their branches are not listed.
