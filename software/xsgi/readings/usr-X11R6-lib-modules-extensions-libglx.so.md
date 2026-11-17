# Readings: `usr/X11R6/lib/modules/extensions/libglx.so`

One entry per routine, filed here from the reading batches by binary.

- `__glXFBInitDrawable` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4401c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4401c0-0x4403c8 (520 bytes).
  It occupies 520 bytes.
  2 such `lbu` accesses load 1 byte from a1 (arg1 at entry) +0x5, including `lbu` at 0x4401c4, `lbu` at 0x440280.
  The `lw` at 0x4401d0 loads 4 bytes from a1 (arg1 at entry) +0x38.
  The `lw` at 0x4401d4 loads 4 bytes from a1 (arg1 at entry) +0x34.
  The `lw` at 0x4401d8 loads 4 bytes from a1 (arg1 at entry) +0x40.
  The `lw` at 0x4401e0 loads 4 bytes from a1 (arg1 at entry) +0x3c.
  The `lw` at 0x4401fc loads 4 bytes from a1 (arg1 at entry) +0x2c.
  The `lw` at 0x440220 loads 4 bytes from sym(screenInfo) +0x10.
  4 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x30, including `lw` at 0x440224, `lw` at 0x4402a4, `lw` at 0x4402bc.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x440250, `lbu` at 0x440258.
  The `sw` at 0x440270 stores 4 bytes to a0 (arg0 at entry) +0x38.
  The `sw` at 0x440274 stores 4 bytes to a0 (arg0 at entry) +0x54.
  The `lbu` at 0x440278 loads 1 byte from a1 (arg1 at entry) +0x6.
  2 such `lbu` accesses load 1 byte from a1 (arg1 at entry) +0x8, including `lbu` at 0x4402cc, `lbu` at 0x440374.
  The `lbu` at 0x4402ec loads 1 byte from a1 (arg1 at entry) +0x9.
  The `lw` at 0x4402f8 loads 4 bytes from a1 (arg1 at entry) +0x44.
  The `lbu` at 0x44030c loads 1 byte from a1 (arg1 at entry) +0xa.
  The `lw` at 0x440318 loads 4 bytes from a1 (arg1 at entry) +0x48.
  The `jalr` at 0x4402a8 calls __glXInitFB with a0=a0+92, a1=a0+60, a2=[a1+48], a3=(([a1+52] + [a1+56]) + ([a1+60] + [a1+64])).
  The `jalr` at 0x4402c0 calls __glXInitMem with a0=a0+172, a1=a0+60, a2=[a1+48], a3=?.
  The `jalr` at 0x4402e4 calls __glXInitMem with a0=a0+252, a1=a0+60, a2=(([a1+52] + [a1+56]) + ([a1+60] + [a1+64])), a3=(([a1+52] + [a1+56]) + ([a1+60] + [a1+64])).
  The `jalr` at 0x440304 calls __glXInitMem with a0=a0+332, a1=a0+60, a2=[a1+68], a3=[a1+68].
  The `jalr` at 0x440324 calls __glXInitMem with a0=a0+412, a1=a0+60, a2=[a1+72], a3=[a1+72].
  The `jalr` at 0x440368 calls __glXInitFB with a0=a0+92, a1=a0+60, a2=[a1+48], a3=(([a1+52] + [a1+56]) + ([a1+60] + [a1+64])).
  The `jalr` at 0x440388 calls __glXInitFB with a0=a0+92, a1=a0+60, a2=[a1+44], a3=(([a1+52] + [a1+56]) + ([a1+60] + [a1+64])).
  The `jalr` at 0x4403a0 calls __glXInitMem with a0=a0+172, a1=a0+60, a2=[a1+44], a3=?.
  The `jalr` at 0x4403b8 calls __glXInitFB with a0=a0+92, a1=a0+60, a2=[a1+44], a3=(([a1+52] + [a1+56]) + ([a1+60] + [a1+64])).
  The `beq` branch at 0x44021c targets 0x440348, is taken when at(=[a1+5]:1) == 0, and falls through when at(=[a1+5]:1) != 0.
  The `blez` branch at 0x440230 targets 0x440270, is taken when a6(=[sym(screenInfo)+16]) <= 0 (signed), and falls through when a6(=[sym(screenInfo)+16]) > 0 (signed).
  The `beq` branch at 0x440240 targets 0x440250 and is always taken.
  The `beq` branch at 0x44024c targets 0x440270, is taken when a5(?) == a1(?), and falls through when a5(?) != a1(?).
  The `bne` branch at 0x440254 targets 0x440248, is taken when a7(?) != a4(?), and falls through when a7(?) == a4(?).
  The `beq` branch at 0x440260 targets 0x440248, is taken when s1(?) >= a6(?) (signed), and falls through when s1(?) < a6(?) (signed).
  The `beq` branch at 0x440268 targets 0x440248 and is always taken.
  The `beq` branch at 0x440284 targets 0x440350, is taken when s2(=[a1+6]:1) == 0, and falls through when s2(=[a1+6]:1) != 0.
  The `beq` branch at 0x440298 targets 0x440380, is taken when a1(=[a1+5]:1) == 0, and falls through when a1(=[a1+5]:1) != 0.
  The `beq` branch at 0x4402d0 targets 0x4402ec, is taken when t8(=[a1+8]:1) == 0, and falls through when t8(=[a1+8]:1) != 0.
  The `beq` branch at 0x4402f0 targets 0x44030c, is taken when t9(=[a1+9]:1) == 0, and falls through when t9(=[a1+9]:1) != 0.
  The `beq` branch at 0x440310 targets 0x44032c, is taken when ra(=[a1+10]:1) == 0, and falls through when ra(=[a1+10]:1) != 0.
  The `beq` branch at 0x440348 targets 0x44022c and is always taken.
  The `beq` branch at 0x440358 targets 0x4403b0, is taken when a1(=[a1+5]:1) == 0, and falls through when a1(=[a1+5]:1) != 0.
  The `beq` branch at 0x440370 targets 0x4402d0 and is always taken.
  The `beq` branch at 0x4403a8 targets 0x4402cc and is always taken.
  The `beq` branch at 0x4403c0 targets 0x440370 and is always taken.
  The return at 0x440340 has v0 = one of ?, ret(__glXInitMem).
  The instructions from 0x440378 to 0x44037c are not reached by any path from the entry, and their branches are not listed.

- `__glXPixInitDrawable` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x440400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x440400-0x440624 (548 bytes).
  It occupies 548 bytes.
  2 such `lbu` accesses load 1 byte from a1 (arg1 at entry) +0x5, including `lbu` at 0x440404, `lbu` at 0x4404d0.
  The `lw` at 0x440410 loads 4 bytes from a1 (arg1 at entry) +0x34.
  The `lw` at 0x440414 loads 4 bytes from a1 (arg1 at entry) +0x40.
  The `lw` at 0x440418 loads 4 bytes from a1 (arg1 at entry) +0x3c.
  The `lw` at 0x44042c loads 4 bytes from a1 (arg1 at entry) +0x38.
  The `lw` at 0x440448 loads 4 bytes from a1 (arg1 at entry) +0x2c.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x30, including `lw` at 0x440454, `lw` at 0x440504.
  The `lw` at 0x440460 loads 4 bytes from sym(screenInfo) +0x10.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x44048c, `lbu` at 0x440494.
  The `sw` at 0x4404ac stores 4 bytes to a0 (arg0 at entry) +0x38.
  The `sw` at 0x4404b4 stores 4 bytes to a0 (arg0 at entry) +0x54.
  The `lbu` at 0x4404b8 loads 1 byte from a1 (arg1 at entry) +0x6.
  The `lw` at 0x4404bc loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x4404c4 loads 4 bytes from a0 (arg0 at entry) +0xc.
  2 such `lbu` accesses load 1 byte from a1 (arg1 at entry) +0x8, including `lbu` at 0x440514, `lbu` at 0x4405cc.
  The `lbu` at 0x440534 loads 1 byte from a1 (arg1 at entry) +0x9.
  The `lw` at 0x440538 loads 4 bytes from a1 (arg1 at entry) +0x44.
  The `lbu` at 0x44055c loads 1 byte from a1 (arg1 at entry) +0xa.
  The `lw` at 0x440568 loads 4 bytes from a1 (arg1 at entry) +0x48.
  The `jalr` at 0x4404ec calls __glXInitPix with a0=a0+92, a1=a0+60, a2=[a1+44], a3=[a0+12], a4=[a0+16].
  The `jalr` at 0x440508 calls __glXInitMem with a0=a0+172, a1=a0+60, a2=[a1+48], a3=?.
  The `jalr` at 0x44052c calls __glXInitMem with a0=a0+252, a1=a0+60, a2=(([a1+52] + [a1+56]) + ([a1+60] + [a1+64])), a3=(([a1+52] + [a1+56]) + ([a1+60] + [a1+64])).
  The `jalr` at 0x440554 calls __glXInitMem with a0=a0+332, a1=a0+60, a2=[a1+68], a3=?.
  The `jalr` at 0x440574 calls __glXInitMem with a0=a0+412, a1=a0+60, a2=[a1+72], a3=[a1+72].
  The `jalr` at 0x4405bc calls __glXInitPix with a0=a0+92, a1=a0+60, a2=[a1+44], a3=[a0+12], a4=[a0+16].
  The `jalr` at 0x4405e0 calls __glXInitPix with a0=a0+92, a1=a0+60, a2=[a1+44], a3=[a0+12], a4=[a0+16].
  The `jalr` at 0x4405f8 calls __glXInitMem with a0=a0+172, a1=a0+60, a2=[a1+44], a3=?.
  The `jalr` at 0x440614 calls __glXInitPix with a0=a0+92, a1=a0+60, a2=[a1+44], a3=[a0+12], a4=[a0+16].
  The `beq` branch at 0x44044c targets 0x440598, is taken when at(=[a1+5]:1) == 0, and falls through when at(=[a1+5]:1) != 0.
  The `blez` branch at 0x44046c targets 0x4404ac, is taken when a1(=[sym(screenInfo)+16]) <= 0 (signed), and falls through when a1(=[sym(screenInfo)+16]) > 0 (signed).
  The `beq` branch at 0x44047c targets 0x44048c and is always taken.
  The `beq` branch at 0x440488 targets 0x4404ac, is taken when a4(?) == t0(?), and falls through when a4(?) != t0(?).
  The `bne` branch at 0x440490 targets 0x440484, is taken when a7(?) != t3(?), and falls through when a7(?) == t3(?).
  The `beq` branch at 0x44049c targets 0x440484, is taken when s0(?) >= a6(?) (signed), and falls through when s0(?) < a6(?) (signed).
  The `beq` branch at 0x4404a4 targets 0x440484 and is always taken.
  The `beq` branch at 0x4404cc targets 0x4405a4, is taken when t9(=[a1+6]:1) == 0, and falls through when t9(=[a1+6]:1) != 0.
  The `beq` branch at 0x4404dc targets 0x4405d8, is taken when a1(=[a1+5]:1) == 0, and falls through when a1(=[a1+5]:1) != 0.
  The `beq` branch at 0x440518 targets 0x440534, is taken when v0(=[a1+8]:1) == 0, and falls through when v0(=[a1+8]:1) != 0.
  The `beq` branch at 0x44053c targets 0x44055c, is taken when v1(=[a1+9]:1) == 0, and falls through when v1(=[a1+9]:1) != 0.
  The `beq` branch at 0x440544 targets 0x4405d0, is taken when a2(=[a1+68]) == a0(=0x18), and falls through when a2(=[a1+68]) != a0(=0x18).
  The `beq` branch at 0x440560 targets 0x44057c, is taken when a0(=[a1+10]:1) == 0, and falls through when a0(=[a1+10]:1) != 0.
  The `beq` branch at 0x44059c targets 0x44045c and is always taken.
  The `beq` branch at 0x4405ac targets 0x44060c, is taken when a1(=[a1+5]:1) == 0, and falls through when a1(=[a1+5]:1) != 0.
  The `beq` branch at 0x4405c8 targets 0x440518 and is always taken.
  The `beq` branch at 0x4405d0 targets 0x44054c and is always taken.
  The `beq` branch at 0x440604 targets 0x440514 and is always taken.
  The `beq` branch at 0x44061c targets 0x4405c8 and is always taken.
  The return at 0x440590 has v0 = one of ?, ret(__glXInitMem).

- `__glXResizeBuffers` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x440640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x440640-0x4408b0 (624 bytes).
  It occupies 624 bytes.
  The `lw` at 0x44065c loads 4 bytes from a0 (arg0 at entry) +0x48.
  The `lw` at 0x44068c loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lbu` at 0x4406c0 loads 1 byte from [a0+4] +0x6.
  The `lw` at 0x4406d0 loads 4 bytes from a0 (arg0 at entry) +0x98.
  The `lbu` at 0x440700 loads 1 byte from [a0+4] +0x8.
  The `lw` at 0x440710 loads 4 bytes from a0 (arg0 at entry) +0xe8.
  The `lbu` at 0x440740 loads 1 byte from [a0+4] +0x9.
  The `lw` at 0x440750 loads 4 bytes from a0 (arg0 at entry) +0x138.
  The `lbu` at 0x440780 loads 1 byte from [a0+4] +0xa.
  The `lw` at 0x440790 loads 4 bytes from a0 (arg0 at entry) +0x188.
  The `sw` at 0x4407d8 stores 4 bytes to a0 (arg0 at entry) +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x1b4, including `lw` at 0x4407dc, `lw` at 0x4407e8, `lw` at 0x4407f4.
  The `sw` at 0x4407e0 stores 4 bytes to a0 (arg0 at entry) +0x1b0.
  The `sw` at 0x4407e4 stores 4 bytes to [a0+436] +0x0.
  The `sw` at 0x4407f0 stores 4 bytes to [a0+436] +0x4.
  The `sw` at 0x4407fc stores 4 bytes to [a0+436] +0x8.
  The `sw` at 0x440810 stores 4 bytes to [a0+436] +0xc.
  The `jalr` at 0x440698 calls (unknown callee) with a0=a0+32, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=a0 at entry (arg0), a6=0x1.
  The `jalr` at 0x4406e4 calls (unknown callee) with a0=a0+112, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=a0 at entry (arg0), a6=0x4.
  The `jalr` at 0x440724 calls (unknown callee) with a0=a0+192, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=a0 at entry (arg0), a6=0x10.
  The `jalr` at 0x440764 calls (unknown callee) with a0=a0+272, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=a0 at entry (arg0), a6=0x20.
  The `jalr` at 0x4407a4 calls (unknown callee) with a0=a0+352, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=a0 at entry (arg0), a6=0x40.
  The `beq` branch at 0x4406a4 targets 0x440868, is taken when (v0(=ret(?)) & 0xff) == 0, and falls through when (v0(=ret(?)) & 0xff) != 0.
  The `beq` branch at 0x4406b4 targets 0x440848, is taken when a1(?) == s6(=0x1), and falls through when a1(?) != s6(=0x1).
  The `beq` branch at 0x4406c4 targets 0x440700, is taken when v1(=[[a0+4]+6]:1) == 0, and falls through when v1(=[[a0+4]+6]:1) != 0.
  The `beq` branch at 0x4406f0 targets 0x440880, is taken when (v0(=ret(?)) & 0xff) == 0, and falls through when (v0(=ret(?)) & 0xff) != 0.
  The `beq` branch at 0x4406f8 targets 0x440850, is taken when a1(?) == s6(=0x1), and falls through when a1(?) != s6(=0x1).
  The `beq` branch at 0x440704 targets 0x440740, is taken when a0(=[[a0+4]+8]:1) == 0, and falls through when a0(=[[a0+4]+8]:1) != 0.
  The `beq` branch at 0x440730 targets 0x440890, is taken when (v0(=ret(?)) & 0xff) == 0, and falls through when (v0(=ret(?)) & 0xff) != 0.
  The `beq` branch at 0x440738 targets 0x440858, is taken when a1(?) == s6(=0x1), and falls through when a1(?) != s6(=0x1).
  The `beq` branch at 0x440744 targets 0x440780, is taken when a1(=[[a0+4]+9]:1) == 0, and falls through when a1(=[[a0+4]+9]:1) != 0.
  The `beq` branch at 0x440770 targets 0x4408a0, is taken when (v0(=ret(?)) & 0xff) == 0, and falls through when (v0(=ret(?)) & 0xff) != 0.
  The `beq` branch at 0x440778 targets 0x440860, is taken when a1(?) == s6(=0x1), and falls through when a1(?) != s6(=0x1).
  The `beq` branch at 0x440784 targets 0x4407c4, is taken when a2(=[[a0+4]+10]:1) == 0, and falls through when a2(=[[a0+4]+10]:1) != 0.
  The `beq` branch at 0x4407b0 targets 0x440870, is taken when (v0(=ret(?)) & 0xff) == 0, and falls through when (v0(=ret(?)) & 0xff) != 0.
  The `bne` branch at 0x4407b8 targets 0x4407c8, is taken when a1(?) != s6(=0x1), and falls through when a1(?) == s6(=0x1).
  The `beq` branch at 0x440848 targets 0x4406c0 and is always taken.
  The `beq` branch at 0x440850 targets 0x440700 and is always taken.
  The `beq` branch at 0x440858 targets 0x440740 and is always taken.
  The `beq` branch at 0x440860 targets 0x440780 and is always taken.
  The `beq` branch at 0x440868 targets 0x440824 and is always taken.
  The `beq` branch at 0x440878 targets 0x440820 and is always taken.
  The `beq` branch at 0x440888 targets 0x440820 and is always taken.
  The `beq` branch at 0x440898 targets 0x440820 and is always taken.
  The `beq` branch at 0x4408a8 targets 0x440820 and is always taken.
  The return at 0x440818 has v0 = 0x1.
  The return at 0x440840 has v0 = 0x0.

- `__glXFreeBuffers` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4408c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4408c0-0x44095c (156 bytes).
  It occupies 156 bytes.
  The `lw` at 0x4408c4 loads 4 bytes from a0 (arg0 at entry) +0x94.
  The `lw` at 0x4408f8 loads 4 bytes from a0 (arg0 at entry) +0xe4.
  The `lw` at 0x44090c loads 4 bytes from a0 (arg0 at entry) +0x134.
  The `lw` at 0x440920 loads 4 bytes from a0 (arg0 at entry) +0x184.
  The `lw` at 0x440934 loads 4 bytes from a0 (arg0 at entry) +0x1d4.
  The `jalr` at 0x4408f0 calls (unknown callee) with a0=a0+92, a1=a0+60, a2=a2 at entry (arg2), a3=[a0+148].
  The `jalr` at 0x440904 calls (unknown callee) with a0=a0+172, a1=a0+60, a2=?, a3=?.
  The `jalr` at 0x440918 calls (unknown callee) with a0=a0+252, a1=a0+60, a2=?, a3=?.
  The `jalr` at 0x44092c calls (unknown callee) with a0=a0+332, a1=a0+60, a2=?, a3=?.
  The `jalr` at 0x440940 calls (unknown callee) with a0=a0+412, a1=a0+60, a2=?, a3=?.
  The `beq` branch at 0x4408e0 targets 0x4408f8, is taken when a3(=[a0+148]) == 0, and falls through when a3(=[a0+148]) != 0.
  The `beq` branch at 0x4408fc targets 0x44090c, is taken when t9(=[a0+228]) == 0, and falls through when t9(=[a0+228]) != 0.
  The `beq` branch at 0x440910 targets 0x440920, is taken when t9(=[a0+308]) == 0, and falls through when t9(=[a0+308]) != 0.
  The `beq` branch at 0x440924 targets 0x440934, is taken when t9(=[a0+388]) == 0, and falls through when t9(=[a0+388]) != 0.
  The `beq` branch at 0x440938 targets 0x440948, is taken when t9(=[a0+468]) == 0, and falls through when t9(=[a0+468]) != 0.
  The return at 0x440954 has v0 = one of ?, ret(?).

- `__glXCreateContext2` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4409c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4409c0-0x440dd8 (1048 bytes).
  It occupies 1048 bytes.
  The `lw` at 0x4409c4 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x4409f0 loads 4 bytes from sym(screenInfo) +0x30.
  The `lw` at 0x440a14 loads 4 bytes from (sym(screenInfo) + (a2 << 0x2)) +0x34.
  The `lw` at 0x440a18 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  The `lw` at 0x440a64 loads 4 bytes from ret(__glxLookupFBConfig) +0x20.
  8 such `sw` accesses store 4 bytes to [a0+44] +0x18, including `sw` at 0x440a98, `sw` at 0x440aac, `sw` at 0x440b24.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x440b08, `lw` at 0x440d1c, `lw` at 0x440d6c.
  The `lh` at 0x440b44 loads 2 bytes from ?.
  2 such `lw` accesses load 4 bytes from sym(__glXContextRes) +0x0, including `lw` at 0x440b94, `lw` at 0x440c78.
  The `lbu` at 0x440ba0 loads 1 byte from ret(LookupIDByType) +0x3a.
  The `lw` at 0x440bac loads 4 bytes from ret(LookupIDByType) +0xc.
  The `sw` at 0x440c1c stores 4 bytes to ret(__glXMalloc) +0x14.
  The `sw` at 0x440c20 stores 4 bytes to ret(__glXMalloc) +0x18.
  The `sw` at 0x440c24 stores 4 bytes to ret(__glXMalloc) +0x20.
  The `sw` at 0x440c2c stores 4 bytes to ret(__glXMalloc) +0x24.
  The `sw` at 0x440c38 stores 4 bytes to ret(__glXMalloc) +0x1c.
  The `sw` at 0x440c48 stores 4 bytes to ret(__glXMalloc) +0x10.
  2 such `sw` accesses store 4 bytes to ret(__glXMalloc) +0xc, including `sw` at 0x440c60, `sw` at 0x440d80.
  2 such `lw` accesses load 4 bytes from ret(__glXMalloc) +0x10, including `lw` at 0x440c98, `lw` at 0x440d90.
  The `sb` at 0x440cd8 stores 1 byte to ret(__glXMalloc) +0x38.
  The `sb` at 0x440cdc stores 1 byte to ret(__glXMalloc) +0x39.
  The `sw` at 0x440ce4 stores 4 bytes to ret(__glXMalloc) +0x44.
  The `sw` at 0x440ce8 stores 4 bytes to ret(__glXMalloc) +0x58.
  The `sw` at 0x440cec stores 4 bytes to ret(__glXMalloc) +0x5c.
  The `sw` at 0x440cf8 stores 4 bytes to ret(__glXMalloc) +0x28.
  The `sw` at 0x440cfc stores 4 bytes to ret(__glXMalloc) +0x2c.
  The `sb` at 0x440d04 stores 1 byte to ret(__glXMalloc) +0x3a.
  The `lw` at 0x440d50 loads 4 bytes from sym(__glXBadContext) +0x0.
  The `sw` at 0x440d64 stores 4 bytes to abs 0x46bec0.
  The `sw` at 0x440d68 stores 4 bytes to abs 0x46bebc.
  The `lw` at 0x440dc0 loads 4 bytes from ret(__glXMalloc) +0xc.
  The `lw` at 0x440dc4 loads 4 bytes from [ret(__glXMalloc)+12] +0x3c.
  The `jalr` at 0x440a4c calls __glxLookupFBConfig with a0=a2 at entry (arg2), a1=a4 at entry (arg4), a2=sym(screenInfo), a3=[(sym(screenInfo) + (a2 << 0x2))+52].
  The `jalr` at 0x440a74 calls glxLookupVisual with a0=[(sym(screenInfo) + (a2 << 0x2))+52], a1=?, a2=?, a3=?.
  The `jalr` at 0x440ad4 calls __glxLookupFBConfigFromVid with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `jalr` at 0x440b90 calls LookupIDByType with a0=a6 at entry (arg6), a1=[sym(__glXContextRes)], a2=one of 0x1, 0x2, a3=?.
  The `jalr` at 0x440bb8 calls __glXMalloc with a0=0x70, a1=?, a2=?, a3=?.
  The `jalr` at 0x440c00 calls xf86memset with a0=ret(__glXMalloc), a1=0x0, a2=0x70, a3=?.
  The `jalr` at 0x440c34 calls __glXMalloc with a0=0x6c, a1=?, a2=?, a3=?.
  The `jalr` at 0x440c4c calls __glXFormatGLModes with a0=ret(__glXMalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x440c74 calls AddResource with a0=a1 at entry (arg1), a1=[sym(__glXContextRes)], a2=ret(__glXMalloc), a3=?.
  The `jalr` at 0x440c94 calls __glXFree with a0=[ret(__glXMalloc)+16], a1=?, a2=?, a3=?.
  The `jalr` at 0x440ca0 calls __glXFree with a0=ret(__glXMalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x440d74 calls (unknown callee) with a0=0x46be88, a1=ret(__glXMalloc), a2=?, a3=?.
  The `jalr` at 0x440d8c calls __glXFree with a0=[ret(__glXMalloc)+16], a1=?, a2=?, a3=?.
  The `jalr` at 0x440d98 calls __glXFree with a0=ret(__glXMalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x440dc8 calls (unknown callee) with a0=[ret(__glXMalloc)+12], a1=?, a2=?, a3=?.
  The `bltz` branch at 0x4409e4 targets 0x440aa8, is taken when a2 < 0 (signed), and falls through when a2 >= 0 (signed).
  The `beq` branch at 0x4409f8 targets 0x440aa8, is taken when s0(=a2) >= at(=[sym(screenInfo)+48]) (signed), and falls through when s0(=a2) < at(=[sym(screenInfo)+48]) (signed).
  The `beq` branch at 0x440a38 targets 0x440b28, is taken when a4 == 0, and falls through when a4 != 0.
  The `beq` branch at 0x440a5c targets 0x440cc0, is taken when v0(=ret(__glxLookupFBConfig)) == 0, and falls through when v0(=ret(__glxLookupFBConfig)) != 0.
  The `beq` branch at 0x440a68 targets 0x440aec, is taken when s2(=[ret(__glxLookupFBConfig)+32]) == 0, and falls through when s2(=[ret(__glxLookupFBConfig)+32]) != 0.
  The `bne` branch at 0x440a7c targets 0x440acc, is taken when v0(=ret(glxLookupVisual)) != 0, and falls through when v0(=ret(glxLookupVisual)) == 0.
  The `beq` branch at 0x440ae4 targets 0x440d14, is taken when v0(=ret(__glxLookupFBConfigFromVid)) == 0, and falls through when v0(=ret(__glxLookupFBConfigFromVid)) != 0.
  The `beq` branch at 0x440aec targets 0x440b40, is taken when s1(=a4) == 0, and falls through when s1(=a4) != 0.
  The `beq` branch at 0x440af8 targets 0x440d1c, is taken when a5 == a6(=0x8014), and falls through when a5 != a6(=0x8014).
  The `bne` branch at 0x440b00 targets 0x440b1c, is taken when a5 != t0(=0x8015), and falls through when a5 == t0(=0x8015).
  The `bne` branch at 0x440b10 targets 0x440bdc, is taken when (t1(?) & 0x2) != 0, and falls through when (t1(?) & 0x2) == 0.
  The `beq` branch at 0x440b20 targets 0x440ab0 and is always taken.
  The `bne` branch at 0x440b28 targets 0x440a6c, is taken when s2(=a3) != 0, and falls through when s2(=a3) == 0.
  The `beq` branch at 0x440b58 targets 0x440bd0, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x440b60 targets 0x440bd0, is taken when v0(?) == a2(=0x1), and falls through when v0(?) != a2(=0x1).
  The `beq` branch at 0x440b68 targets 0x440bd4, is taken when v0(?) == a4(=0x2), and falls through when v0(?) != a4(=0x2).
  The `beq` branch at 0x440b70 targets 0x440bd4, is taken when v0(?) == a5(=0x3), and falls through when v0(?) != a5(=0x3).
  The `beq` branch at 0x440b78 targets 0x440be4, is taken when v1(=a6) == 0, and falls through when v1(=a6) != 0.
  The `beq` branch at 0x440b98 targets 0x440d40, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x440ba4 targets 0x440d54, is taken when a2(=[ret(LookupIDByType)+58]:1) == 0, and falls through when a2(=[ret(LookupIDByType)+58]:1) != 0.
  The `bne` branch at 0x440bc0 targets 0x440bf0, is taken when v0(=ret(__glXMalloc)) != 0, and falls through when v0(=ret(__glXMalloc)) == 0.
  The `beq` branch at 0x440bc8 targets 0x440ab0 and is always taken.
  The `bne` branch at 0x440bdc targets 0x440b84, is taken when a5(=a6) != 0, and falls through when a5(=a6) == 0.
  The `beq` branch at 0x440be8 targets 0x440bb0 and is always taken.
  The `beq` branch at 0x440c58 targets 0x440d5c, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `bne` branch at 0x440c7c targets 0x440cc8, is taken when v0(=ret(AddResource)) != 0, and falls through when v0(=ret(AddResource)) == 0.
  The `beq` branch at 0x440c88 targets 0x440dc0, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x440cb4 targets 0x440ab0 and is always taken.
  The `beq` branch at 0x440cc0 targets 0x440ab0 and is always taken.
  The `beq` branch at 0x440d14 targets 0x440ab0 and is always taken.
  The `bne` branch at 0x440d24 targets 0x440bdc, is taken when (t8(?) & 0x1) != 0, and falls through when (t8(?) & 0x1) == 0.
  The `beq` branch at 0x440d2c targets 0x440b1c and is always taken.
  The `beq` branch at 0x440d4c targets 0x440ab0 and is always taken.
  The `beq` branch at 0x440d54 targets 0x440bac and is always taken.
  The `bne` branch at 0x440d7c targets 0x440c64, is taken when v0(=ret(?)) != 0, and falls through when v0(=ret(?)) == 0.
  The `beq` branch at 0x440dac targets 0x440ab0 and is always taken.
  The `beq` branch at 0x440dd0 targets 0x440c90 and is always taken.
  The return at 0x440aa0 has v0 = 0x2.
  The return at 0x440ac4 has v0 = one of 0x2, 0xb, [sym(__glXBadContext)].
  The return at 0x440d0c has v0 = 0x0.
  The instructions from 0x440cbc to 0x440cbc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x440d34 to 0x440d3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x440db4 to 0x440dbc are not reached by any path from the entry, and their branches are not listed.

- `__glXCreateContext` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x440e00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x440e00-0x440e54 (84 bytes).
  It occupies 84 bytes.
  The `lw` at 0x440e1c loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x440e20 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x440e24 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x440e28 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lbu` at 0x440e40 loads 1 byte from a1 (arg1 at entry) +0x14.
  The `bgezall` at 0x440e3c calls __glXCreateContext2 [0x4409c0] with a0=a0 at entry (arg0), a1=[a1+4], a2=[a1+12], a3=[a1+8], a4=0x0, a5=0x0, a6=[a1+16], a7=[a1+20]:1.
  The return at 0x440e4c has v0 = ret(__glXCreateContext2).

- `__glXDestroyContext` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x440e80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x440e80-0x440f14 (148 bytes).
  It occupies 148 bytes.
  The `lw` at 0x440e98 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x440ea4 loads 4 bytes from a1 (arg1 at entry) +0x4.
  2 such `lw` accesses load 4 bytes from sym(__glXContextRes) +0x0, including `lw` at 0x440eb8, `lw` at 0x440ed8.
  The `sw` at 0x440f00 stores 4 bytes to [a0+44] +0x18.
  The `lw` at 0x440f10 loads 4 bytes from sym(__glXBadContext) +0x0.
  The `jalr` at 0x440eb4 calls LookupIDByType with a0=[a1+4], a1=[sym(__glXContextRes)], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x440ed4 calls FreeResourceByType with a0=[a1+4], a1=[sym(__glXContextRes)], a2=0x0, a3=?.
  The `beq` branch at 0x440ebc targets 0x440ef4, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The return at 0x440eec has v0 = 0x0.
  The return at 0x440f0c has v0 = [sym(__glXBadContext)].

- `AddCurrentContext` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x440f40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x440f40-0x44102c (236 bytes).
  It occupies 236 bytes.
  The `lw` at 0x440f44 loads 4 bytes from a0 (arg0 at entry) +0x24.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x28, including `lw` at 0x440f50, `lw` at 0x440fc8.
  The `lw` at 0x440f68 loads 4 bytes from ?.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x440fbc, `sw` at 0x440fec.
  The `sw` at 0x440fd4 stores 4 bytes to a0 (arg0 at entry) +0x24.
  The `sw` at 0x440fdc stores 4 bytes to a0 (arg0 at entry) +0x28.
  The `jalr` at 0x440fa4 calls __glXRealloc with a0=[a0+36], a1=?, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a7=[a0+36].
  The `jalr` at 0x441014 calls __glXMalloc with a0=0x4, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a7=[a0+36].
  The `beq` branch at 0x440f4c targets 0x441000, is taken when a1 == 0, and falls through when a1 != 0.
  The `blez` branch at 0x440f54 targets 0x441024, is taken when s0(=[a0+40]) <= 0 (signed), and falls through when s0(=[a0+40]) > 0 (signed).
  The `beq` branch at 0x440f6c targets 0x440fe8, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0x440f78 targets 0x440f68, is taken when a4(?) != a6(=(([a0+40] << 0x2) + [a0+36])), and falls through when a4(?) == a6(=(([a0+40] << 0x2) + [a0+36])).
  The `beq` branch at 0x440f8c targets 0x441010, is taken when s0(=[a0+40]) == 0, and falls through when s0(=[a0+40]) != 0.
  The `beq` branch at 0x44101c targets 0x440fb0 and is always taken.
  The `beq` branch at 0x441024 targets 0x440f80 and is always taken.
  The return at 0x440fe0 has v0 = [a0+40]+1.
  The return at 0x440ff4 has v0 = ?.
  The return at 0x441008 has v0 = -0x1.
  The instructions from 0x440ffc to 0x440ffc are not reached by any path from the entry, and their branches are not listed.

- `ChangeCurrentContext` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x441040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x441040-0x441054 (20 bytes).
  It occupies 20 bytes.
  The `lw` at 0x441040 loads 4 bytes from a0 (arg0 at entry) +0x24.
  The `sw` at 0x441050 stores 4 bytes to ([a0+36] + (a2 << 0x2)) -0x4.
  The return at 0x44104c has v0 = (a2 << 0x2).

- `__glXLookupContextByTag` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x441080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x441080-0x4410b0 (48 bytes).
  It occupies 48 bytes.
  The `lw` at 0x441088 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `lw` at 0x441098 loads 4 bytes from a0 (arg0 at entry) +0x24.
  The `lw` at 0x4410a4 loads 4 bytes from ([a0+36] + (a1 << 0x2)) -0x4.
  The `beq` branch at 0x441080 targets 0x4410a8, is taken when a1 == 0, and falls through when a1 != 0.
  The `bne` branch at 0x441094 targets 0x4410a8, is taken when at(=[a0+40]) < a1 (unsigned), and falls through when at(=[a0+40]) >= a1 (unsigned).
  The return at 0x4410a0 has v0 = [([a0+36] + (a1 << 0x2))-4].
  The return at 0x4410a8 has v0 = 0x0.

- `StopUsingContext` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4410c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4410c0-0x4410f8 (56 bytes).
  It occupies 56 bytes.
  The `lw` at 0x4410c8 loads 4 bytes from sym(__glXLastContext) +0x0.
  The `sw` at 0x4410d4 stores 4 bytes to sym(__glXLastContext) +0x0.
  The `lbu` at 0x4410d8 loads 1 byte from a0 (arg0 at entry) +0x38.
  The `sb` at 0x4410e0 stores 1 byte to a0 (arg0 at entry) +0x39.
  Calls __glXFreeContext via got with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sym(__glXLastContext), a3=a3 at entry (arg3) (`jr` at 0x4410f0).
  The `beq` branch at 0x4410c0 targets 0x4410e4, is taken when a0 == 0, and falls through when a0 != 0.
  The `bne` branch at 0x4410cc targets 0x4410d8, is taken when at(=[sym(__glXLastContext)]) != a0, and falls through when at(=[sym(__glXLastContext)]) == a0.
  The `beq` branch at 0x4410dc targets 0x4410ec, is taken when v0(=[a0+56]:1) == 0, and falls through when v0(=[a0+56]:1) != 0.
  The return at 0x4410e4 has v0 = one of ?, [a0+56]:1.

- `StartUsingContext` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x441100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x441100-0x441114 (20 bytes).
  It occupies 20 bytes.
  The `sb` at 0x441108 stores 1 byte to a1 (arg1 at entry) +0x39.
  The `sw` at 0x441110 stores 4 bytes to sym(__glXLastContext) +0x0.
  The return at 0x44110c has v0 = 0x1.

- `__glXMakeCurrent` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x441140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x441140-0x441188 (72 bytes).
  It occupies 72 bytes.
  The `lw` at 0x441158 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x441160 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x441168 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `jalr` at 0x441170 calls __glXMakeCurrentHelper with a0=a0 at entry (arg0), a1=[a1+12], a2=[a1+4], a3=[a1+4], a4=[a1+8], a5=0x0.
  The return at 0x441180 has v0 = ret(__glXMakeCurrentHelper).

- `__SendReplyForMakeCurrent` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4411c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4411c0-0x441228 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x4411c4 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x4411d8 loads 4 bytes from [a0+44] +0x1c.
  The `lw` at 0x4411e0 loads 4 bytes from [a0+44] +0x10.
  The `jalr` at 0x4411f4 calls __glXSwapMakeCurrentReply with a0=[a0+44], a1=sp-48, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a0+44].
  The `jalr` at 0x441218 calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-48, a3=a3 at entry (arg3), a4=[a0+44].
  The `beq` branch at 0x4411e4 targets 0x44120c, is taken when at(=[[a0+44]+16]) == 0, and falls through when at(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x441220 targets 0x441200 and is always taken.
  The return at 0x441204 has v0 = 0x0.

- `__SendReplyForMakeCurrentRead` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x441240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x441240-0x4413cc (396 bytes).
  It occupies 396 bytes.
  The `lw` at 0x441250 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  3 such `lbu` accesses load 1 byte from a1 (arg1 at entry) +0x3a, including `lbu` at 0x44126c, `lbu` at 0x4412c0, `lbu` at 0x4412ec.
  2 such `lw` accesses load 4 bytes from [a0+44] +0x1c, including `lw` at 0x441284, `lw` at 0x441304.
  2 such `lw` accesses load 4 bytes from [a0+44] +0x10, including `lw` at 0x44129c, `lw` at 0x44131c.
  The `jalr` at 0x4412b0 calls __glXSwapMakeContextCurrentReply with a0=[a0+44], a1=sp-128, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x441330 calls __glXSwapMakeCurrentReadReply with a0=[a0+44], a1=sp-176, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x441354 calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-128, a3=a3 at entry (arg3).
  The `jalr` at 0x441398 calls WriteToClient with a0=[a0+44], a1=0x10, a2=sp-144, a3=?.
  The `jalr` at 0x4413b4 calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-176, a3=a3 at entry (arg3).
  The `beq` branch at 0x44125c targets 0x4412e4, is taken when at(?) == t0(=0x1), and falls through when at(?) != t0(=0x1).
  The `beq` branch at 0x441264 targets 0x441278, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x441270 targets 0x441364, is taken when v0(=[a1+58]:1) == t0(=0x1), and falls through when v0(=[a1+58]:1) != t0(=0x1).
  The `beq` branch at 0x4412a0 targets 0x441348, is taken when v1(=[[a0+44]+16]) == 0, and falls through when v1(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x4412b8 targets 0x4412d0, is taken when s0(=a1) == 0, and falls through when s0(=a1) != 0.
  The `beq` branch at 0x4412c8 targets 0x44136c, is taken when a1(=[a1+58]:1) == a2(=0x1), and falls through when a1(=[a1+58]:1) != a2(=0x1).
  The `beq` branch at 0x4412e4 targets 0x4412f8, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x4412f0 targets 0x4413c4, is taken when t1(=[a1+58]:1) == t0(=0x1), and falls through when t1(=[a1+58]:1) != t0(=0x1).
  The `beq` branch at 0x441320 targets 0x4413a8, is taken when t2(=[[a0+44]+16]) == 0, and falls through when t2(=[[a0+44]+16]) != 0.
  The `bne` branch at 0x441338 targets 0x4412c0, is taken when s0(=a1) != 0, and falls through when s0(=a1) == 0.
  The `beq` branch at 0x441340 targets 0x4412d0 and is always taken.
  The `beq` branch at 0x44135c targets 0x4412b8 and is always taken.
  The `beq` branch at 0x441364 targets 0x44127c and is always taken.
  The `beq` branch at 0x4413a0 targets 0x4412d0 and is always taken.
  The `beq` branch at 0x4413bc targets 0x441338 and is always taken.
  The `beq` branch at 0x4413c4 targets 0x4412fc and is always taken.
  The return at 0x4412dc has v0 = 0x0.

- `__glXMakeCurrentHelper` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x441400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x441400-0x44277c (4988 bytes).
  It occupies 4988 bytes.
  The `lw` at 0x441450 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x441490 loads 4 bytes from ret(__glXLookupContextByTag) +0x44.
  The `lw` at 0x4414b0 loads 4 bytes from ret(__glXLookupContextByTag) +0x28.
  23 such `sw` accesses store 4 bytes to [a0+44] +0x18, including `sw` at 0x4414bc, `sw` at 0x441844, `sw` at 0x441a18.
  The `lw` at 0x4414c0 loads 4 bytes from sym(__glXBadContextState) +0x0.
  The `lw` at 0x44152c loads 4 bytes from sym(__glXContextRes) +0x0.
  The `lbu` at 0x441544 loads 1 byte from ret(LookupIDByType) +0x39.
  2 such `lbu` accesses load 1 byte from ret(LookupDrawable) +0x0, including `lbu` at 0x441590, `lbu` at 0x441c30.
  2 such `lw` accesses load 4 bytes from ret(LookupDrawable) +0x78, including `lw` at 0x4415b4, `lw` at 0x441c58.
  67 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4415b8, `lw` at 0x4415c8, `lw` at 0x4415d0.
  2 such `lw` accesses load 4 bytes from [ret(LookupDrawable)+120] +0x0, including `lw` at 0x4415cc, `lw` at 0x441c64.
  2 such `lw` accesses load 4 bytes from ret(LookupDrawable) +0x10, including `lw` at 0x4415e4, `lw` at 0x441c70.
  2 such `lw` accesses load 4 bytes from ret(LookupIDByType) +0xc, including `lw` at 0x4416c0, `lw` at 0x441d88.
  The `lbu` at 0x4416cc loads 1 byte from ret(__glXLookupContextByTag) +0x40.
  The `lw` at 0x4416d8 loads 4 bytes from ret(__glXLookupContextByTag) +0x5c.
  The `lw` at 0x4416f4 loads 4 bytes from ret(__glXLookupContextByTag) +0x58.
  The `lw` at 0x441710 loads 4 bytes from ret(__glXLookupContextByTag) +0xc.
  10 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x441760, `lbu` at 0x441774, `lbu` at 0x4418ac.
  23 such `sw` accesses store 4 bytes to ?, including `sw` at 0x4417a4, `sw` at 0x4417d4, `sw` at 0x4417e8.
  4 such `lw` accesses load 4 bytes from sym(__glXBadDrawable) +0x0, including `lw` at 0x441848, `lw` at 0x441df8, `lw` at 0x441f3c.
  2 such `lw` accesses load 4 bytes from sym(__glXLastClient) +0x0, including `lw` at 0x44195c, `lw` at 0x441a5c.
  The `lw` at 0x441a48 loads 4 bytes from sym(__glXBadContextTag) +0x0.
  2 such `lw` accesses load 4 bytes from sym(__glXBadCurrentDrawable) +0x0, including `lw` at 0x441a94, `lw` at 0x441ab8.
  6 such `lw` accesses load 4 bytes from sym(__glXBadContext) +0x0, including `lw` at 0x441aac, `lw` at 0x442408, `lw` at 0x4424fc.
  2 such `lw` accesses load 4 bytes from sym(__glxWindowPrivateIndex) +0x0, including `lw` at 0x441ac8, `lw` at 0x441ec4.
  4 such `lh` accesses load 2 bytes from ?, including `lh` at 0x441ae4, `lh` at 0x441ee4, `lh` at 0x44202c.
  The `lw` at 0x441b30 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  The `lw` at 0x441bc8 loads 4 bytes from ret(LookupDrawable) +0x7c.
  The `sw` at 0x441bd8 stores 4 bytes to ret(LookupDrawable) +0x7c.
  2 such `lw` accesses load 4 bytes from sym(__glXPixmapRes) +0x0, including `lw` at 0x441bf0, `lw` at 0x44237c.
  The `lw` at 0x441c78 loads 4 bytes from [ret(LookupDrawable)+16] +0x0.
  The `lw` at 0x441c84 loads 4 bytes from ret(__glxLookupFBConfigFromVid) +0x48.
  5 such `lw` accesses load 4 bytes from ret(__glXGetDrawablePrivate) +0x40, including `lw` at 0x441cdc, `lw` at 0x441d14, `lw` at 0x441d40.
  2 such `lw` accesses load 4 bytes from ret(__glXGetDrawablePrivate) +0x14, including `lw` at 0x441d2c, `lw` at 0x441d38.
  2 such `lw` accesses load 4 bytes from sym(__glXWindowRes) +0x0, including `lw` at 0x441d78, `lw` at 0x4424a8.
  The `lw` at 0x441d94 loads 4 bytes from ret(LookupIDByType) +0x18.
  5 such `lw` accesses load 4 bytes from ret(LookupIDByType) +0x0, including `lw` at 0x441dc0, `lw` at 0x441f70, `lw` at 0x4422b8.
  The `lw` at 0x441dc8 loads 4 bytes from [ret(LookupIDByType)+24] +0x48.
  2 such `lw` accesses load 4 bytes from ret(FindWindowWithOptional) +0x78, including `lw` at 0x441e40, `lw` at 0x442458.
  2 such `lw` accesses load 4 bytes from [ret(FindWindowWithOptional)+120] +0x0, including `lw` at 0x441e4c, `lw` at 0x442460.
  2 such `sb` accesses store 1 byte to ?, including `sb` at 0x441e68, `sb` at 0x442258.
  3 such `lw` accesses load 4 bytes from ret(LookupIDByType) +0x8, including `lw` at 0x441f44, `lw` at 0x44200c, `lw` at 0x442554.
  4 such `lw` accesses load 4 bytes from ret(LookupIDByType) +0x14, including `lw` at 0x441f50, `lw` at 0x4422bc, `lw` at 0x442594.
  4 such `lw` accesses load 4 bytes from [ret(LookupIDByType)+20] +0x48, including `lw` at 0x441f78, `lw` at 0x4422c4, `lw` at 0x44259c.
  2 such `lw` accesses load 4 bytes from sym(__glXPbufferRes) +0x0, including `lw` at 0x441ffc, `lw` at 0x442544.
  2 such `sw` accesses store 4 bytes to ret(__glXGetDrawablePrivate) +0x40, including `sw` at 0x4423ec, `sw` at 0x442614.
  2 such `sw` accesses store 4 bytes to ret(__glXGetDrawablePrivate) +0x3c, including `sw` at 0x4423f8, `sw` at 0x442608.
  The `lw` at 0x4424b8 loads 4 bytes from ret(SecurityLookupIDByType) +0xc.
  The `lw` at 0x442510 loads 4 bytes from ret(SecurityLookupIDByType) +0x0.
  The `lw` at 0x442514 loads 4 bytes from ret(SecurityLookupIDByType) +0x18.
  The `lw` at 0x44251c loads 4 bytes from [ret(SecurityLookupIDByType)+24] +0x48.
  The `jalr` at 0x441480 calls __glXLookupContextByTag with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=a1 at entry (arg1).
  The `jalr` at 0x441528 calls LookupIDByType with a0=a4 at entry (arg4), a1=[sym(__glXContextRes)], a2=?, a3=?.
  The `jalr` at 0x441580 calls LookupDrawable with a0=a2 at entry (arg2), a1=[a0+44], a2=?, a3=?.
  The `jalr` at 0x4416e4 calls LookupDrawable with a0=[ret(__glXLookupContextByTag)+92], a1=[a0+44], a2=?, a3=?, a6=[ret(__glXLookupContextByTag)+68], a7=0x1c00.
  The `jalr` at 0x441700 calls LookupDrawable with a0=[ret(__glXLookupContextByTag)+88], a1=[a0+44], a2=?, a3=?.
  The `bgezall` at 0x4417a8 calls __glXFreeGLXDrawable2 [0x447440] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4417d8 calls __glXFreeGLXDrawable2 [0x447440] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x441804 calls StopUsingContext [0x4410c0] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4418dc calls ChangeCurrentContext [0x441040] with a0=a0 at entry (arg0), a1=0x0, a2=a1 at entry (arg1), a3=?.
  The `bgezall` at 0x441904 calls __SendReplyForMakeCurrent [0x4411c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x44191c calls __glXGetDrawablePrivate with a0=?, a1=a2 at entry (arg2), a2=?, a3=?.
  The `bgezall` at 0x4419d4 calls __SendReplyForMakeCurrentRead [0x441240] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x441bec calls LookupIDByType with a0=a2 at entry (arg2), a1=[sym(__glXPixmapRes)], a2=?, a3=?, a4=ret(LookupDrawable).
  The `jalr` at 0x441c1c calls LookupDrawable with a0=a3 at entry (arg3), a1=[a0+44], a2=?, a3=?, a4=0x2.
  The `jalr` at 0x441c74 calls __glxLookupFBConfigFromVid with a0=[[ret(LookupDrawable)+16]], a1=?, a2=?, a3=?.
  The `jalr` at 0x441cd4 calls __glXGetDrawablePrivate with a0=?, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0x441d3c calls (unknown callee) with a0=?, a1=?, a2=[ret(__glXGetDrawablePrivate)+20], a3=[ret(__glXGetDrawablePrivate)+64], a4=[ret(__glXGetDrawablePrivate)+20].
  The `jalr` at 0x441d74 calls LookupIDByType with a0=a2 at entry (arg2), a1=[sym(__glXWindowRes)], a2=?, a3=?, a4=0x2.
  The `jalr` at 0x441e34 calls FindWindowWithOptional with a0=ret(LookupDrawable), a1=?, a2=?, a3=[ret(LookupDrawable)]:1, a4=0x1.
  The `jalr` at 0x441e60 calls glFlush with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x441e74 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x441e94 calls __glXDeassociateContext with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x441f94 calls StartUsingContext [0x441100] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x441fc0 calls ChangeCurrentContext [0x441040] with a0=a0 at entry (arg0), a1=?, a2=a1 at entry (arg1), a3=?.
  The `jalr` at 0x441ff8 calls LookupIDByType with a0=a2 at entry (arg2), a1=[sym(__glXPbufferRes)], a2=?, a3=?, a4=0x2.
  The `jalr` at 0x4420d4 calls glxInitWinPriv with a0=?, a1=?, a2=0x0, a3=?, a4=0x1.
  The `jalr` at 0x44210c calls glxInitWinPriv with a0=?, a1=?, a2=0x0, a3=?, a4=0x1.
  The `jalr` at 0x442144 calls __glXCacheDrawableSize with a0=ret(__glXGetDrawablePrivate), a1=ret(__glXGetDrawablePrivate), a2=?, a3=?.
  The `jalr` at 0x442170 calls (unknown callee) with a0=?, a1=ret(__glXGetDrawablePrivate)+60, a2=ret(__glXGetDrawablePrivate), a3=?.
  The `jalr` at 0x442198 calls __glXGetDrawablePrivate with a0=?, a1=a3 at entry (arg3), a2=?, a3=?.
  The `jalr` at 0x4421d0 calls __glXGetDrawablePrivate with a0=?, a1=a3 at entry (arg3), a2=?, a3=?, a4=ret(__glXGetDrawablePrivate).
  The `jalr` at 0x442208 calls (unknown callee) with a0=?, a1=ret(__glXGetDrawablePrivate)+60, a2=ret(__glXGetDrawablePrivate)+60, a3=?.
  The `jalr` at 0x442220 calls __glXResizeDrawableBuffers with a0=ret(__glXGetDrawablePrivate), a1=?, a2=?, a3=one of 0x0, 0x1.
  The `jalr` at 0x44223c calls __glXResizeDrawableBuffers with a0=ret(__glXGetDrawablePrivate), a1=?, a2=?, a3=?.
  The `jalr` at 0x442260 calls __glXAssociateContext with a0=?, a1=ret(__glXGetDrawablePrivate), a2=?, a3=?.
  The `jalr` at 0x44227c calls __glXAssociateContext with a0=?, a1=ret(__glXGetDrawablePrivate), a2=?, a3=?.
  The `jalr` at 0x442308 calls __glXDeassociateContext with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x442378 calls LookupIDByType with a0=a3 at entry (arg3), a1=[sym(__glXPixmapRes)], a2=?, a3=?.
  The `jalr` at 0x4423c4 calls __glXCacheDrawableSize with a0=ret(__glXGetDrawablePrivate), a1=?, a2=ret(__glXGetDrawablePrivate), a3=?.
  The `jalr` at 0x4423e0 calls __glxLookupFBConfig with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x442450 calls FindWindowWithOptional with a0=ret(LookupDrawable), a1=?, a2=?, a3=?, a4=[ret(LookupDrawable)+120], a6=a5 at entry (arg5), a7=0x2.
  The `jalr` at 0x4424a4 calls SecurityLookupIDByType with a0=[a0+44], a1=a3 at entry (arg3), a2=[sym(__glXWindowRes)], a3=0x1.
  The `jalr` at 0x442540 calls LookupIDByType with a0=a3 at entry (arg3), a1=[sym(__glXPbufferRes)], a2=?, a3=?.
  The `jalr` at 0x4425f8 calls __glxLookupFBConfig with a0=?, a1=?, a2=?, a3=?, a4=[ret(__glXGetDrawablePrivate)+64].
  The `bgezall` at 0x442624 calls AddCurrentContext [0x440f40] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x4426a4 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x44272c calls (unknown callee) with a0=?, a1=?, a2=?, a3=?, a7=0x0.
  The `beq` branch at 0x441458 targets 0x4414cc, is taken when a3 == 0, and falls through when a3 != 0.
  The `beq` branch at 0x441460 targets 0x4414cc, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x441468 targets 0x4414f0, is taken when s0(=a4) == 0, and falls through when s0(=a4) != 0.
  The `beq` branch at 0x441470 targets 0x44150c, is taken when a5(=a1) == 0, and falls through when a5(=a1) != 0.
  The `beq` branch at 0x441488 targets 0x441a28, is taken when v0(=ret(__glXLookupContextByTag)) == 0, and falls through when v0(=ret(__glXLookupContextByTag)) != 0.
  The `beq` branch at 0x441498 targets 0x4416cc, is taken when a6(=[ret(__glXLookupContextByTag)+68]) == a7(=0x1c00), and falls through when a6(=[ret(__glXLookupContextByTag)+68]) != a7(=0x1c00).
  The `bne` branch at 0x4414cc targets 0x4414f4, is taken when s0(=a4) != 0, and falls through when s0(=a4) == 0.
  The `bne` branch at 0x4414d8 targets 0x4414f4, is taken when a1(=a3) != 0, and falls through when a1(=a3) == 0.
  The `bne` branch at 0x4414e0 targets 0x441468, is taken when s1(=a2) != 0, and falls through when s1(=a2) == 0.
  The `beq` branch at 0x4414e8 targets 0x441470 and is always taken.
  The `beq` branch at 0x441518 targets 0x44156c, is taken when s0(=a4) == 0, and falls through when s0(=a4) != 0.
  The `beq` branch at 0x441530 targets 0x441a98, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x44153c targets 0x4416c0, is taken when v0(=ret(LookupIDByType)) == s2(?), and falls through when v0(=ret(LookupIDByType)) != s2(?).
  The `beq` branch at 0x441548 targets 0x4416c0, is taken when a2(=[ret(LookupIDByType)+57]:1) == 0, and falls through when a2(=[ret(LookupIDByType)+57]:1) != 0.
  The `beq` branch at 0x441574 targets 0x44171c, is taken when s1(=a2) == 0, and falls through when s1(=a2) != 0.
  The `beq` branch at 0x441588 targets 0x441bdc, is taken when v0(=ret(LookupDrawable)) == 0, and falls through when v0(=ret(LookupDrawable)) != 0.
  The `bne` branch at 0x441594 targets 0x441830, is taken when a3(=[ret(LookupDrawable)]:1) != 0, and falls through when a3(=[ret(LookupDrawable)]:1) == 0.
  The `bltz` branch at 0x4415a4 targets 0x441b20, is taken when t1(=[0x472ea8]) < 0 (signed), and falls through when t1(=[0x472ea8]) >= 0 (signed).
  The `beq` branch at 0x4415ac targets 0x441bc0, is taken when t1(=[0x472ea8]) == t0(=0x1), and falls through when t1(=[0x472ea8]) != t0(=0x1).
  The `beq` branch at 0x4415c4 targets 0x441e28, is taken when t1(=[ret(LookupDrawable)+120]) == 0, and falls through when t1(=[ret(LookupDrawable)+120]) != 0.
  The `bne` branch at 0x4415d8 targets 0x441a00, is taken when t3(?) != t0(?), and falls through when t3(?) == t0(?).
  The `bne` branch at 0x4415e8 targets 0x441a00, is taken when t8(=[ret(LookupDrawable)+16]) != t9(?), and falls through when t8(=[ret(LookupDrawable)+16]) == t9(?).
  The `beq` branch at 0x4415f4 targets 0x441ca4, is taken when t9(=a5) == t1(=0x2), and falls through when t9(=a5) != t1(=0x2).
  The `beq` branch at 0x44160c targets 0x441fec, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0x441618 targets 0x441d5c, is taken when at(=a5) == a4(=0x2), and falls through when at(=a5) != a4(=0x2).
  The `beq` branch at 0x441620 targets 0x441f28, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `bne` branch at 0x441628 targets 0x441c18, is taken when s1(=a2) != a0(=a3), and falls through when s1(=a2) == a0(=a3).
  The `beq` branch at 0x441654 targets 0x441ac0, is taken when t0(?) == a4(=0x1), and falls through when t0(?) != a4(=0x1).
  The `beq` branch at 0x44165c targets 0x441ac0, is taken when t0(?) == t2(=0x4), and falls through when t0(?) != t2(=0x4).
  The `beq` branch at 0x441664 targets 0x441ac4, is taken when t0(?) == t3(=0x6), and falls through when t0(?) != t3(=0x6).
  The `beq` branch at 0x44166c targets 0x441ea4, is taken when t1(?) == a4(=0x1), and falls through when t1(?) != a4(=0x1).
  The `beq` branch at 0x441674 targets 0x441f10, is taken when t1(?) == t2(=0x4), and falls through when t1(?) != t2(=0x4).
  The `beq` branch at 0x44167c targets 0x441fd0, is taken when t1(?) == t3(=0x6), and falls through when t1(?) != t3(=0x6).
  The `beq` branch at 0x4416a0 targets 0x44176c, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x4416a8 targets 0x441914, is taken when s0(?) == s2(?), and falls through when s0(?) != s2(?).
  The `beq` branch at 0x4416b0 targets 0x44176c, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x4416b8 targets 0x441760 and is always taken.
  The `beq` branch at 0x4416c4 targets 0x441574 and is always taken.
  The `beq` branch at 0x4416d0 targets 0x441710, is taken when t1(=[ret(__glXLookupContextByTag)+64]:1) == 0, and falls through when t1(=[ret(__glXLookupContextByTag)+64]:1) != 0.
  The `beq` branch at 0x4416dc targets 0x4416f4, is taken when a0(=[ret(__glXLookupContextByTag)+92]) == 0, and falls through when a0(=[ret(__glXLookupContextByTag)+92]) != 0.
  The `beq` branch at 0x4416ec targets 0x441a8c, is taken when v0(=ret(LookupDrawable)) == 0, and falls through when v0(=ret(LookupDrawable)) != 0.
  The `beq` branch at 0x4416f8 targets 0x441710, is taken when a0(=[ret(__glXLookupContextByTag)+88]) == 0, and falls through when a0(=[ret(__glXLookupContextByTag)+88]) != 0.
  The `beq` branch at 0x441708 targets 0x441ab0, is taken when v0(=ret(LookupDrawable)) == 0, and falls through when v0(=ret(LookupDrawable)) != 0.
  The `beq` branch at 0x441714 targets 0x441518 and is always taken.
  The `beq` branch at 0x441758 targets 0x44176c, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x441764 targets 0x441a54, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `beq` branch at 0x44176c targets 0x441a4c, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0x441778 targets 0x441ccc, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x441784 targets 0x44180c, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x441790 targets 0x4417b4, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x4417bc targets 0x4417e0, is taken when a4(?) == t0(?), and falls through when a4(?) != t0(?).
  The `beq` branch at 0x4417c4 targets 0x4417e0, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x4417e0 targets 0x441800, is taken when s0(?) == s2(?), and falls through when s0(?) != s2(?).
  The `beq` branch at 0x44180c targets 0x441858, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0x441858 targets 0x4418c4, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0x441860 targets 0x441878, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x441880 targets 0x4418a8, is taken when a2(?) == a3(?), and falls through when a2(?) != a3(?).
  The `beq` branch at 0x44188c targets 0x4418ac, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x4418a0 targets 0x4418ac and is always taken.
  The `beq` branch at 0x4418bc targets 0x441f88, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x4418c8 targets 0x441980, is taken when t2(=a1) == 0, and falls through when t2(=a1) != 0.
  The `bne` branch at 0x4418e8 targets 0x441988, is taken when ra(=a5) != 0, and falls through when ra(=a5) == 0.
  The `beq` branch at 0x44190c targets 0x4419e0 and is always taken.
  The `bne` branch at 0x44192c targets 0x4421c0, is taken when ra(?) != at(?), and falls through when ra(?) == at(?).
  The `bne` branch at 0x44193c targets 0x441970, is taken when a0(?) != a4(=ret(__glXGetDrawablePrivate)), and falls through when a0(?) == a4(=ret(__glXGetDrawablePrivate)).
  The `bne` branch at 0x44194c targets 0x441970, is taken when a1(?) != a2(=ret(__glXGetDrawablePrivate)), and falls through when a1(?) == a2(=ret(__glXGetDrawablePrivate)).
  The `beq` branch at 0x441978 targets 0x441758, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x441984 targets 0x4418f0, is taken when a5 == 0, and falls through when a5 != 0.
  The `beq` branch at 0x441a4c targets 0x441784 and is always taken.
  The `bne` branch at 0x441a54 targets 0x441a6c, is taken when s0(?) != s2(?), and falls through when s0(?) == s2(?).
  The `bne` branch at 0x441a74 targets 0x441e50, is taken when a4(?) < 0x1 (unsigned), and falls through when a4(?) >= 0x1 (unsigned).
  The `bne` branch at 0x441a7c targets 0x44176c, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x441a84 targets 0x441984 and is always taken.
  The `beq` branch at 0x441a90 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x441aa8 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x441ab4 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x441adc targets 0x4420c8, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x441ae8 targets 0x44202c, is taken when t0(?) == t2(=0x4), and falls through when t0(?) != t2(=0x4).
  The `beq` branch at 0x441af4 targets 0x442124, is taken when t1(?) == a4(=0x1), and falls through when t1(?) != a4(=0x1).
  The `beq` branch at 0x441afc targets 0x4421b4, is taken when t1(?) == t2(=0x4), and falls through when t1(?) != t2(=0x4).
  The `beq` branch at 0x441b04 targets 0x4421f8, is taken when t1(?) == a0(=0x6), and falls through when t1(?) != a0(=0x6).
  The `beq` branch at 0x441b18 targets 0x4416a0 and is always taken.
  The `blez` branch at 0x441b58 targets 0x441dd8, is taken when t2(?) <= 0 (signed), and falls through when t2(?) > 0 (signed).
  The `beq` branch at 0x441b64 targets 0x441bbc, is taken when a7(?) == t0(=0x1), and falls through when a7(?) != t0(=0x1).
  The `beq` branch at 0x441b6c targets 0x441b80 and is always taken.
  The `beq` branch at 0x441b78 targets 0x441bb4, is taken when t8(?) == t0(=0x1), and falls through when t8(?) != t0(=0x1).
  The `beq` branch at 0x441b88 targets 0x441bb4, is taken when t3(?) >= t2(?) (signed), and falls through when t3(?) < t2(?) (signed).
  The `beq` branch at 0x441b94 targets 0x441bb4, is taken when ra(?) == t0(=0x1), and falls through when ra(?) != t0(=0x1).
  The `bne` branch at 0x441ba8 targets 0x441b74, is taken when t3(?) < t2(?) (signed), and falls through when t3(?) >= t2(?) (signed).
  The `beq` branch at 0x441bb4 targets 0x441dd8, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `beq` branch at 0x441bd4 targets 0x4415b0 and is always taken.
  The `beq` branch at 0x441bf4 targets 0x441e1c, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x441c00 targets 0x441f40, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x441c10 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x441c24 targets 0x44236c, is taken when v0(=ret(LookupDrawable)) == 0, and falls through when v0(=ret(LookupDrawable)) != 0.
  The `bne` branch at 0x441c34 targets 0x441de0, is taken when a5(=[ret(LookupDrawable)]:1) != 0, and falls through when a5(=[ret(LookupDrawable)]:1) == 0.
  The `beq` branch at 0x441c4c targets 0x44232c, is taken when a6(=a5) == a7(=0x2), and falls through when a6(=a5) != a7(=0x2).
  The `beq` branch at 0x441c5c targets 0x442450, is taken when a4(=[ret(LookupDrawable)+120]) == 0, and falls through when a4(=[ret(LookupDrawable)+120]) != 0.
  The `beq` branch at 0x441c7c targets 0x4422dc, is taken when v0(=ret(__glxLookupFBConfigFromVid)) == 0, and falls through when v0(=ret(__glxLookupFBConfigFromVid)) != 0.
  The `beq` branch at 0x441c94 targets 0x442490, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x441c9c targets 0x441650 and is always taken.
  The `beq` branch at 0x441ca8 targets 0x44228c, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x441cb4 targets 0x4423ac, is taken when a3(?) == t1(=0x2), and falls through when a3(?) != t1(=0x2).
  The `beq` branch at 0x441cc4 targets 0x441608 and is always taken.
  The `beq` branch at 0x441ce0 targets 0x4423d4, is taken when a1(=[ret(__glXGetDrawablePrivate)+64]) == 0, and falls through when a1(=[ret(__glXGetDrawablePrivate)+64]) != 0.
  The `bne` branch at 0x441cf0 targets 0x442190, is taken when a4(?) != a5(?), and falls through when a4(?) == a5(?).
  The `bne` branch at 0x441d08 targets 0x441d20, is taken when a7(?) != t0(?), and falls through when a7(?) == t0(?).
  The `beq` branch at 0x441d18 targets 0x44212c, is taken when t1(=[ret(__glXGetDrawablePrivate)+64]) == a1(?), and falls through when t1(=[ret(__glXGetDrawablePrivate)+64]) != a1(?).
  The `beq` branch at 0x441d24 targets 0x441e00, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x441d44 targets 0x44235c, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `beq` branch at 0x441d54 targets 0x441e08 and is always taken.
  The `bne` branch at 0x441d60 targets 0x441620, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x441d7c targets 0x44161c, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `bne` branch at 0x441d8c targets 0x4425b0, is taken when a2(=[ret(LookupIDByType)+12]) != a3(?), and falls through when a2(=[ret(LookupIDByType)+12]) == a3(?).
  The `bne` branch at 0x441d9c targets 0x4425b0, is taken when a5(?) != t1(=[ret(LookupIDByType)+24]), and falls through when a5(?) == t1(=[ret(LookupIDByType)+24]).
  The `beq` branch at 0x441da8 targets 0x441dbc, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x441db4 targets 0x4426c0, is taken when a6(?) == a4(=0x2), and falls through when a6(?) != a4(=0x2).
  The `beq` branch at 0x441dd0 targets 0x44161c and is always taken.
  The `beq` branch at 0x441dd8 targets 0x4415b0 and is always taken.
  The `beq` branch at 0x441df4 targets 0x4414f4 and is always taken.
  The `bne` branch at 0x441e0c targets 0x441784, is taken when a1(=one of 0x0, 0x1) != 0, and falls through when a1(=one of 0x0, 0x1) == 0.
  The `beq` branch at 0x441e14 targets 0x442138 and is always taken.
  The `beq` branch at 0x441e20 targets 0x441608 and is always taken.
  The `beq` branch at 0x441e48 targets 0x4415d0 and is always taken.
  The `beq` branch at 0x441e54 targets 0x441e6c, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x441e7c targets 0x442400, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `bne` branch at 0x441e8c targets 0x442300, is taken when a1(?) != a4(?), and falls through when a1(?) == a4(?).
  The `beq` branch at 0x441e9c targets 0x441a7c and is always taken.
  The `beq` branch at 0x441ed8 targets 0x442100, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x441ee0 targets 0x442080, is taken when t1(?) == t2(=0x4), and falls through when t1(?) != t2(=0x4).
  The `beq` branch at 0x441ef0 targets 0x441f08, is taken when s1(=a2) == v1(=a3), and falls through when s1(=a2) != v1(=a3).
  The `beq` branch at 0x441ef8 targets 0x442298, is taken when t0(?) == t2(=0x4), and falls through when t0(?) != t2(=0x4).
  The `beq` branch at 0x441f00 targets 0x4416a0 and is always taken.
  The `beq` branch at 0x441f08 targets 0x4416a0 and is always taken.
  The `beq` branch at 0x441f20 targets 0x441ec0 and is always taken.
  The `beq` branch at 0x441f38 targets 0x4414f4 and is always taken.
  The `bne` branch at 0x441f48 targets 0x4421e8, is taken when a0(=[ret(LookupIDByType)+8]) != a1(?), and falls through when a0(=[ret(LookupIDByType)+8]) == a1(?).
  The `bne` branch at 0x441f58 targets 0x4421e4, is taken when a2(?) != a4(=[ret(LookupIDByType)+20]), and falls through when a2(?) == a4(=[ret(LookupIDByType)+20]).
  The `beq` branch at 0x441f64 targets 0x442418, is taken when a3(=a5) == a5(=0x2), and falls through when a3(=a5) != a5(=0x2).
  The `beq` branch at 0x441f80 targets 0x441e20 and is always taken.
  The `bne` branch at 0x441fa0 targets 0x4418c8, is taken when ra(?) != 0, and falls through when ra(?) == 0.
  The `beq` branch at 0x441fac targets 0x442618, is taken when at(=a1) == 0, and falls through when at(=a1) != 0.
  The `beq` branch at 0x441fc8 targets 0x441984 and is always taken.
  The `beq` branch at 0x441fe4 targets 0x441ec0 and is always taken.
  The `beq` branch at 0x442000 targets 0x4422d4, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x442010 targets 0x4422a8, is taken when a2(=[ret(LookupIDByType)+8]) == a3(?), and falls through when a2(=[ret(LookupIDByType)+8]) != a3(?).
  The `beq` branch at 0x442024 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x44203c targets 0x441ec0, is taken when t1(?) == a4(=0x1), and falls through when t1(?) != a4(=0x1).
  The `beq` branch at 0x442044 targets 0x441ec0, is taken when t1(?) == t2(=0x4), and falls through when t1(?) != t2(=0x4).
  The `beq` branch at 0x44204c targets 0x441ec4, is taken when t1(?) == a7(=0x6), and falls through when t1(?) != a7(=0x6).
  The `beq` branch at 0x442058 targets 0x442318, is taken when s1(=a2) == t0(=a3), and falls through when s1(=a2) != t0(=a3).
  The `bne` branch at 0x442060 targets 0x4425c0, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bltz` branch at 0x442068 targets 0x4420bc, is taken when a2(?) < 0 (signed), and falls through when a2(?) >= 0 (signed).
  The `beq` branch at 0x442078 targets 0x4416a0 and is always taken.
  The `beq` branch at 0x442094 targets 0x4416a0, is taken when s1(=a2) == t8(=a3), and falls through when s1(=a2) != t8(=a3).
  The `bne` branch at 0x4420a4 targets 0x4416a0, is taken when at(?) < t0(?) (signed), and falls through when at(?) >= t0(?) (signed).
  The `bne` branch at 0x4420b4 targets 0x4416a0, is taken when v1(?) < a0(?) (signed), and falls through when v1(?) >= a0(?) (signed).
  The `beq` branch at 0x4420c0 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x4420ec targets 0x441ae4 and is always taken.
  The `beq` branch at 0x44211c targets 0x441ee0 and is always taken.
  The `beq` branch at 0x442124 targets 0x441ec0 and is always taken.
  The `bne` branch at 0x442154 targets 0x4423c0, is taken when a2(?) != a3(?), and falls through when a2(?) == a3(?).
  The `bne` branch at 0x442160 targets 0x442200, is taken when a1(=ret(__glXGetDrawablePrivate)) != a2(=ret(__glXGetDrawablePrivate)), and falls through when a1(=ret(__glXGetDrawablePrivate)) == a2(=ret(__glXGetDrawablePrivate)).
  The `beq` branch at 0x442178 targets 0x4425d0, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `bne` branch at 0x442180 targets 0x441784, is taken when a3(=one of 0x0, 0x1) != 0, and falls through when a3(=one of 0x0, 0x1) == 0.
  The `beq` branch at 0x442188 targets 0x442220 and is always taken.
  The `beq` branch at 0x4421a4 targets 0x4425ec, is taken when a4(=[ret(__glXGetDrawablePrivate)+64]) == 0, and falls through when a4(=[ret(__glXGetDrawablePrivate)+64]) != 0.
  The `beq` branch at 0x4421ac targets 0x441cfc and is always taken.
  The `beq` branch at 0x4421b4 targets 0x441ec0 and is always taken.
  The `beq` branch at 0x4421dc targets 0x441938 and is always taken.
  The `beq` branch at 0x4421f0 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x4421f8 targets 0x441ec0 and is always taken.
  The `beq` branch at 0x442210 targets 0x4424e4, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `bne` branch at 0x442218 targets 0x441784, is taken when a3(=one of 0x0, 0x1) != 0, and falls through when a3(=one of 0x0, 0x1) == 0.
  The `beq` branch at 0x442228 targets 0x44269c, is taken when v0(=ret(__glXResizeDrawableBuffers)) == 0, and falls through when v0(=ret(__glXResizeDrawableBuffers)) != 0.
  The `beq` branch at 0x442234 targets 0x442250, is taken when a4(?) == a5(?), and falls through when a4(?) != a5(?).
  The `beq` branch at 0x442244 targets 0x442724, is taken when v0(=ret(__glXResizeDrawableBuffers)) == 0, and falls through when v0(=ret(__glXResizeDrawableBuffers)) != 0.
  The `bne` branch at 0x44224c targets 0x441784, is taken when a7(=one of 0x0, 0x1) != 0, and falls through when a7(=one of 0x0, 0x1) == 0.
  The `beq` branch at 0x442270 targets 0x441784, is taken when t1(=ret(__glXGetDrawablePrivate)) == t2(=ret(__glXGetDrawablePrivate)), and falls through when t1(=ret(__glXGetDrawablePrivate)) != t2(=ret(__glXGetDrawablePrivate)).
  The `beq` branch at 0x442284 targets 0x441784 and is always taken.
  The `beq` branch at 0x442290 targets 0x441cc4 and is always taken.
  The `bltz` branch at 0x442298 targets 0x4424dc, is taken when t3(?) < 0 (signed), and falls through when t3(?) >= 0 (signed).
  The `beq` branch at 0x4422a0 targets 0x4420a8 and is always taken.
  The `beq` branch at 0x4422ac targets 0x442464, is taken when t8(=a5) == a4(=0x2), and falls through when t8(=a5) != a4(=0x2).
  The `beq` branch at 0x4422cc targets 0x441614 and is always taken.
  The `beq` branch at 0x4422d4 targets 0x441614 and is always taken.
  The `beq` branch at 0x4422ec targets 0x4414f4 and is always taken.
  The `beq` branch at 0x442310 targets 0x441e90 and is always taken.
  The `beq` branch at 0x442324 targets 0x4416a0 and is always taken.
  The `beq` branch at 0x442330 targets 0x441c54, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x442340 targets 0x441c58, is taken when a3(?) != a5(=0x2), and falls through when a3(?) == a5(=0x2).
  The `beq` branch at 0x442354 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x442364 targets 0x441d50 and is always taken.
  The `beq` branch at 0x442380 targets 0x44240c, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x44238c targets 0x442580, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x4423a4 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x4423b4 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x4423cc targets 0x44215c and is always taken.
  The `beq` branch at 0x4423f4 targets 0x441ce8 and is always taken.
  The `beq` branch at 0x442404 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x442410 targets 0x441c90 and is always taken.
  The `beq` branch at 0x44241c targets 0x441f6c, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x44242c targets 0x44243c, is taken when t1(?) == v1(=0x6), and falls through when t1(?) != v1(=0x6).
  The `bne` branch at 0x442434 targets 0x441f6c, is taken when t1(?) != a0(=0x4), and falls through when t1(?) == a0(=0x4).
  The `beq` branch at 0x442448 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x44245c targets 0x441c68 and is always taken.
  The `beq` branch at 0x442468 targets 0x4422b4, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0x442474 targets 0x4422b4, is taken when a2(?) != a4(=0x2), and falls through when a2(?) == a4(=0x2).
  The `beq` branch at 0x442488 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x4424ac targets 0x44252c, is taken when v0(=ret(SecurityLookupIDByType)) == 0, and falls through when v0(=ret(SecurityLookupIDByType)) != 0.
  The `beq` branch at 0x4424bc targets 0x442500, is taken when a3(=[ret(SecurityLookupIDByType)+12]) == a4(?), and falls through when a3(=[ret(SecurityLookupIDByType)+12]) != a4(?).
  The `beq` branch at 0x4424d4 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x4424dc targets 0x4416a0 and is always taken.
  The `beq` branch at 0x4424f8 targets 0x442214 and is always taken.
  The `beq` branch at 0x442504 targets 0x44266c, is taken when t9(=a5) == ra(=0x2), and falls through when t9(=a5) != ra(=0x2).
  The `bne` branch at 0x44252c targets 0x441c9c, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x442548 targets 0x442700, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x442558 targets 0x4426d4, is taken when a2(=[ret(LookupIDByType)+8]) == a3(?), and falls through when a2(=[ret(LookupIDByType)+8]) != a3(?).
  The `beq` branch at 0x442570 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x442584 targets 0x442634, is taken when a6(=a5) == a7(=0x2), and falls through when a6(=a5) != a7(=0x2).
  The `beq` branch at 0x4425a4 targets 0x442410 and is always taken.
  The `beq` branch at 0x4425b8 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x4425c8 targets 0x4416a0 and is always taken.
  The `beq` branch at 0x4425e4 targets 0x44217c and is always taken.
  The `beq` branch at 0x442610 targets 0x4421ac and is always taken.
  The `beq` branch at 0x44262c targets 0x441980 and is always taken.
  The `beq` branch at 0x442638 targets 0x44258c, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x442648 targets 0x442658, is taken when t0(?) == ra(=0x6), and falls through when t0(?) != ra(=0x6).
  The `bne` branch at 0x442650 targets 0x44258c, is taken when t0(?) != at(=0x4), and falls through when t0(?) == at(=0x4).
  The `beq` branch at 0x442664 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x442670 targets 0x44250c, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x442680 targets 0x44250c, is taken when a0(?) != a1(=0x2), and falls through when a0(?) == a1(=0x2).
  The `beq` branch at 0x442694 targets 0x4414f4 and is always taken.
  The `beq` branch at 0x4426b8 targets 0x441784 and is always taken.
  The `beq` branch at 0x4426cc targets 0x4414f4 and is always taken.
  The `beq` branch at 0x4426d8 targets 0x442750, is taken when t9(=a5) == ra(=0x2), and falls through when t9(=a5) != ra(=0x2).
  The `bne` branch at 0x442700 targets 0x441c9c, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x44271c targets 0x4414f4 and is always taken.
  The `beq` branch at 0x442748 targets 0x442248 and is always taken.
  The `beq` branch at 0x442754 targets 0x4426e0, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x442760 targets 0x4426e0, is taken when t9(?) != ra(=0x2), and falls through when t9(?) == ra(=0x2).
  The `beq` branch at 0x442774 targets 0x4414f4 and is always taken.
  The return at 0x4414c4 has v0 = [sym(__glXBadContextState)].
  The return at 0x441504 has v0 = one of 0x8, [sym(__glXBadCurrentDrawable)], [sym(__glXBadContext)], [sym(__glXBadDrawable)], 0xb, 0x2.
  The return at 0x441564 has v0 = 0xa.
  The return at 0x441828 has v0 = ?.
  The return at 0x441850 has v0 = [sym(__glXBadDrawable)].
  The return at 0x4419f4 has v0 = 0x0.
  The return at 0x441a20 has v0 = 0x8.
  The return at 0x441a44 has v0 = [sym(__glXBadContextTag)].
  The instructions from 0x4419fc to 0x4419fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x441abc to 0x441abc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x441dfc to 0x441dfc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4420f4 to 0x4420fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4421bc to 0x4421bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4422f4 to 0x4422fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4423bc to 0x4423bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4423fc to 0x4423fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x442578 to 0x44257c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4425ac to 0x4425ac are not reached by any path from the entry, and their branches are not listed.

- `__glXMakeCurrentRead` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x442780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x442780-0x4427c8 (72 bytes).
  It occupies 72 bytes.
  The `lw` at 0x44279c loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x4427a0 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x4427a4 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x4427b4 loads 4 bytes from a1 (arg1 at entry) +0x14.
  The `jalr` at 0x4427b0 calls __glXMakeCurrentHelper with a0=a0 at entry (arg0), a1=[a1+8], a2=[a1+12], a3=[a1+16], a4=[a1+20], a5=0x1.
  The return at 0x4427c0 has v0 = ret(__glXMakeCurrentHelper).

- `__glXIsDirect` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x442800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x442800-0x4428d0 (208 bytes).
  It occupies 208 bytes.
  The `lw` at 0x44281c loads 4 bytes from a0 (arg0 at entry) +0x2c.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x4, including `lw` at 0x442820, `lw` at 0x442898.
  The `lw` at 0x442834 loads 4 bytes from sym(__glXContextRes) +0x0.
  The `lbu` at 0x442840 loads 1 byte from ret(LookupIDByType) +0x3a.
  The `lw` at 0x442854 loads 4 bytes from [a0+44] +0x1c.
  The `lw` at 0x44285c loads 4 bytes from [a0+44] +0x10.
  The `sw` at 0x44289c stores 4 bytes to [a0+44] +0x18.
  The `lw` at 0x4428a0 loads 4 bytes from sym(__glXBadContext) +0x0.
  The `jalr` at 0x442830 calls LookupIDByType with a0=[a1+4], a1=[sym(__glXContextRes)], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44286c calls __glXSwapIsDirectReply with a0=[a0+44], a1=sp-64, a2=[ret(LookupIDByType)+58]:1, a3=?.
  The `jalr` at 0x4428c0 calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-64, a3=?.
  The `beq` branch at 0x442838 targets 0x44288c, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x442860 targets 0x4428b0, is taken when v1(=[[a0+44]+16]) == 0, and falls through when v1(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x4428c8 targets 0x442878 and is always taken.
  The return at 0x442884 has v0 = 0x0.
  The return at 0x4428a8 has v0 = [sym(__glXBadContext)].

- `__glXQueryVersion` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x442900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x442900-0x442984 (132 bytes).
  It occupies 132 bytes.
  The `lw` at 0x442904 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x442920 loads 4 bytes from [a0+44] +0x1c.
  The `lw` at 0x442928 loads 4 bytes from [a0+44] +0x10.
  The `jalr` at 0x44294c calls __glXSwapQueryVersionReply with a0=[a0+44], a1=sp-48, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a0+44].
  The `jalr` at 0x442974 calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-48, a3=a3 at entry (arg3), a4=[a0+44].
  The `beq` branch at 0x44293c targets 0x442968, is taken when at(=[[a0+44]+16]) == 0, and falls through when at(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x44297c targets 0x442958 and is always taken.
  The return at 0x442960 has v0 = 0x0.

- `__glXWaitGL` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4429c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4429c0-0x442a20 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0x4429d8 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `jalr` at 0x4429e0 calls __glXForceCurrent with a0=a0 at entry (arg0), a1=[a1+4], a2=sp-32, a3=a3 at entry (arg3).
  The `jalr` at 0x442a04 calls glFinish with a0=?, a1=?, a2=?, a3=?.
  The `bne` branch at 0x4429e8 targets 0x442a00, is taken when v0(=ret(__glXForceCurrent)) != 0, and falls through when v0(=ret(__glXForceCurrent)) == 0.
  The return at 0x4429f8 has v0 = ?.
  The return at 0x442a18 has v0 = 0x0.

- `__glXWaitX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x442a40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x442a40-0x442a98 (88 bytes).
  It occupies 88 bytes.
  The `lw` at 0x442a58 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `jalr` at 0x442a60 calls __glXForceCurrent with a0=a0 at entry (arg0), a1=[a1+4], a2=sp-32, a3=a3 at entry (arg3).
  The `bne` branch at 0x442a68 targets 0x442a88, is taken when v0(=ret(__glXForceCurrent)) != 0, and falls through when v0(=ret(__glXForceCurrent)) == 0.
  The return at 0x442a80 has v0 = ?.
  The return at 0x442a90 has v0 = 0x0.

- `__glXCopyContext` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x442ac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x442ac0-0x442ca8 (488 bytes).
  It occupies 488 bytes.
  The `lw` at 0x442ad8 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x442adc loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x442ae0 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x442ae4 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x442af0 loads 4 bytes from a1 (arg1 at entry) +0x4.
  2 such `lw` accesses load 4 bytes from sym(__glXContextRes) +0x0, including `lw` at 0x442b14, `lw` at 0x442b54.
  5 such `sw` accesses store 4 bytes to ?, including `sw` at 0x442b2c, `sw` at 0x442ba8, `sw` at 0x442bcc.
  2 such `lw` accesses load 4 bytes from sym(__glXBadContext) +0x0, including `lw` at 0x442b30, `lw` at 0x442bd4.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x442b6c, `lbu` at 0x442c3c.
  The `lbu` at 0x442b78 loads 1 byte from ret(LookupIDByType) +0x3a.
  The `lw` at 0x442b7c loads 4 bytes from ret(LookupIDByType) +0x18.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x442b88, `lw` at 0x442c5c, `lw` at 0x442c60.
  The `lbu` at 0x442b94 loads 1 byte from ret(LookupIDByType) +0x39.
  The `sb` at 0x442c54 stores 1 byte to ?.
  The `lw` at 0x442c8c loads 4 bytes from sym(__glXBadContextTag) +0x0.
  The `jalr` at 0x442b10 calls LookupIDByType with a0=[a1+4], a1=[sym(__glXContextRes)], a2=[a1+16], a3=[a1+8], a4=0x36edc, a5=[a0+44].
  The `jalr` at 0x442b50 calls LookupIDByType with a0=?, a1=[sym(__glXContextRes)], a2=?, a3=?, a5=sym(__glXBadContext).
  The `jalr` at 0x442bfc calls __glXLookupContextByTag with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=0x8, a6=ret(LookupIDByType), a7=[ret(LookupIDByType)+57]:1.
  The `jalr` at 0x442c2c calls __glXForceCurrent with a0=a0 at entry (arg0), a1=?, a2=sp-96, a3=?, a5=ret(__glXLookupContextByTag).
  The `jalr` at 0x442c48 calls glFlush with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x442c6c calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `bne` branch at 0x442b1c targets 0x442b44, is taken when v0(=ret(LookupIDByType)) != 0, and falls through when v0(=ret(LookupIDByType)) == 0.
  The `beq` branch at 0x442b64 targets 0x442bc0, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `bne` branch at 0x442b70 targets 0x442b98, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `bne` branch at 0x442b80 targets 0x442b98, is taken when a3(=[ret(LookupIDByType)+58]:1) != 0, and falls through when a3(=[ret(LookupIDByType)+58]:1) == 0.
  The `beq` branch at 0x442b90 targets 0x442bd8, is taken when a4(?) == a7(=[ret(LookupIDByType)+24]), and falls through when a4(?) != a7(=[ret(LookupIDByType)+24]).
  The `beq` branch at 0x442bd0 targets 0x442b34 and is always taken.
  The `beq` branch at 0x442bd8 targets 0x442be8, is taken when a7(=[ret(LookupIDByType)+57]:1) == 0, and falls through when a7(=[ret(LookupIDByType)+57]:1) != 0.
  The `beq` branch at 0x442be0 targets 0x442b34 and is always taken.
  The `beq` branch at 0x442bec targets 0x442c58, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x442c04 targets 0x442c84, is taken when v0(=ret(__glXLookupContextByTag)) == 0, and falls through when v0(=ret(__glXLookupContextByTag)) != 0.
  The `beq` branch at 0x442c10 targets 0x442c20, is taken when a4(?) == v0(=ret(__glXLookupContextByTag)), and falls through when a4(?) != v0(=ret(__glXLookupContextByTag)).
  The `beq` branch at 0x442c18 targets 0x442b34 and is always taken.
  The `beq` branch at 0x442c34 targets 0x442ca0, is taken when v0(=ret(__glXForceCurrent)) == 0, and falls through when v0(=ret(__glXForceCurrent)) != 0.
  The `beq` branch at 0x442c40 targets 0x442c58, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x442c74 targets 0x442c90, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `beq` branch at 0x442c7c targets 0x442b34 and is always taken.
  The `beq` branch at 0x442c88 targets 0x442b34 and is always taken.
  The `beq` branch at 0x442c98 targets 0x442b34 and is always taken.
  The `beq` branch at 0x442ca0 targets 0x442b34 and is always taken.
  The return at 0x442b3c has v0 = one of [sym(__glXBadContext)], 0xa, 0x8, 0x0, [sym(__glXBadContextTag)], 0x2, ?.
  The return at 0x442bac has v0 = 0x8.
  The instructions from 0x442bb4 to 0x442bbc are not reached by any path from the entry, and their branches are not listed.

- `__glXGetVisualConfigs` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x442cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x442cc0-0x4430a4 (996 bytes).
  It occupies 996 bytes.
  The `lw` at 0x442cd8 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x442cdc loads 4 bytes from sym(screenInfo) +0x30.
  The `lw` at 0x442ce4 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x442d04 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  30 such `lw` accesses load 4 bytes from ?, including `lw` at 0x442d14, `lw` at 0x442d2c, `lw` at 0x442e20.
  The `lw` at 0x442d64 loads 4 bytes from [a0+44] +0x1c.
  2 such `lw` accesses load 4 bytes from [a0+44] +0x10, including `lw` at 0x442d70, `lw` at 0x44303c.
  10 such `sb` accesses store 1 byte to ?, including `sb` at 0x442e88, `sb` at 0x442e8c, `sb` at 0x442ea4.
  8 such `lb` accesses load 1 byte from ?, including `lb` at 0x442e90, `lb` at 0x442e94, `lb` at 0x442e98.
  3 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x442f44, `lbu` at 0x442f8c, `lbu` at 0x442f94.
  The `sw` at 0x443094 stores 4 bytes to [a0+44] +0x18.
  The `jalr` at 0x442e08 calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-272, a3=?, a6=[[a0+44]+28].
  The `jalr` at 0x442eec calls WriteToClient with a0=[a0+44], a1=0x98, a2=sp-240, a3=?, a7=0x24.
  The `bne` branch at 0x442cf8 targets 0x443088, is taken when v0(=[sym(screenInfo)+48]) < at(=[a1+4]) (unsigned), and falls through when v0(=[sym(screenInfo)+48]) >= at(=[a1+4]) (unsigned).
  The `beq` branch at 0x442d80 targets 0x442df0, is taken when a1(=[[a0+44]+16]) == 0, and falls through when a1(=[[a0+44]+16]) != 0.
  The `blez` branch at 0x442e48 targets 0x443050, is taken when a4(?) <= 0 (signed), and falls through when a4(?) > 0 (signed).
  The `beq` branch at 0x442e58 targets 0x442f20 and is always taken.
  The `beq` branch at 0x442e80 targets 0x442eb0 and is always taken.
  The `bne` branch at 0x442ed0 targets 0x442e88, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x442f18 targets 0x443050, is taken when s1(?) >= a4(?) (signed), and falls through when s1(?) < a4(?) (signed).
  The `beq` branch at 0x442f30 targets 0x442f10, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bne` branch at 0x443040 targets 0x442e60, is taken when t9(=[[a0+44]+16]) != 0, and falls through when t9(=[[a0+44]+16]) == 0.
  The `beq` branch at 0x443048 targets 0x442ee0 and is always taken.
  The return at 0x443080 has v0 = 0x0.
  The return at 0x44309c has v0 = 0x2.

- `__glXCreateGLXPixmap2` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4430c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4430c0-0x4432b0 (496 bytes).
  It occupies 496 bytes.
  The `lw` at 0x4430d8 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lbu` at 0x443104 loads 1 byte from ret(LookupDrawable) +0x0.
  4 such `sw` accesses store 4 bytes to [a0+44] +0x18, including `sw` at 0x443124, `sw` at 0x443204, `sw` at 0x44328c.
  The `lw` at 0x443148 loads 4 bytes from ret(LookupDrawable) +0x10.
  The `lw` at 0x443150 loads 4 bytes from [ret(LookupDrawable)+16] +0x0.
  The `lw` at 0x443188 loads 4 bytes from ret(__glxLookupFBConfig) +0x28.
  The `lw` at 0x443194 loads 4 bytes from ret(__glxLookupFBConfig) +0x20.
  2 such `lw` accesses load 4 bytes from sym(__glXBadFBConfig) +0x0, including `lw` at 0x4431a0, `lw` at 0x4432a4.
  The `lbu` at 0x4431c4 loads 1 byte from ret(LookupDrawable) +0x2.
  The `lh` at 0x4431c8 loads 2 bytes from ret(glxLookupVisual) +0xa.
  The `sw` at 0x443230 stores 4 bytes to ret(__glXMalloc) +0x0.
  The `sw` at 0x443238 stores 4 bytes to ret(__glXMalloc) +0x4.
  The `sw` at 0x44323c stores 4 bytes to ret(__glXMalloc) +0x10.
  The `sw` at 0x443244 stores 4 bytes to ret(__glXMalloc) +0xc.
  The `sw` at 0x44324c stores 4 bytes to ret(__glXMalloc) +0x14.
  The `sw` at 0x443254 stores 4 bytes to ret(__glXMalloc) +0x8.
  The `lw` at 0x443260 loads 4 bytes from sym(__glXPixmapRes) +0x0.
  The `lw` at 0x44326c loads 4 bytes from ret(LookupDrawable) +0x18.
  The `sw` at 0x44327c stores 4 bytes to ret(LookupDrawable) +0x18.
  The `jalr` at 0x4430f4 calls LookupDrawable with a0=a4 at entry (arg4), a1=[a0+44], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x443178 calls __glxLookupFBConfig with a0=a1 at entry (arg1), a1=a3 at entry (arg3), a2=0x0, a3=[[ret(LookupDrawable)+16]], a4=0x8, a5=a3 at entry (arg3).
  The `jalr` at 0x4431b4 calls glxLookupVisual with a0=[ret(LookupDrawable)+16], a1=?, a2=?, a3=?.
  The `jalr` at 0x4431e4 calls __glxLookupFBConfigFromVid with a0=a1 at entry (arg1), a1=?, a2=?, a3=?, a4=0x8, a5=[ret(glxLookupVisual)+10]:2, a6=[ret(LookupDrawable)+2]:1.
  The `jalr` at 0x44320c calls __glXMalloc with a0=0x18, a1=?, a2=?, a3=?.
  The `jalr` at 0x44325c calls AddResource with a0=a5 at entry (arg5), a1=[sym(__glXPixmapRes)], a2=ret(__glXMalloc), a3=[ret(LookupDrawable)+16], a5=0x2.
  The `beq` branch at 0x4430fc targets 0x443110, is taken when v0(=ret(LookupDrawable)) == 0, and falls through when v0(=ret(LookupDrawable)) != 0.
  The `beq` branch at 0x44310c targets 0x443148, is taken when v1(=[ret(LookupDrawable)]:1) == a0(=0x1), and falls through when v1(=[ret(LookupDrawable)]:1) != a0(=0x1).
  The `bne` branch at 0x443160 targets 0x443130, is taken when a3(=[[ret(LookupDrawable)+16]]) != a4(=a1), and falls through when a3(=[[ret(LookupDrawable)+16]]) == a4(=a1).
  The `beq` branch at 0x443168 targets 0x4431a4, is taken when a5(=a3) == 0, and falls through when a5(=a3) != 0.
  The `beq` branch at 0x443180 targets 0x443290, is taken when v0(=ret(__glxLookupFBConfig)) == 0, and falls through when v0(=ret(__glxLookupFBConfig)) != 0.
  The `bne` branch at 0x443190 targets 0x4431a4, is taken when (a6(=[ret(__glxLookupFBConfig)+40]) & 0x2) != 0, and falls through when (a6(=[ret(__glxLookupFBConfig)+40]) & 0x2) == 0.
  The `beq` branch at 0x44319c targets 0x443130 and is always taken.
  The `beq` branch at 0x4431a8 targets 0x443208, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x4431bc targets 0x443280, is taken when v0(=ret(glxLookupVisual)) == 0, and falls through when v0(=ret(glxLookupVisual)) != 0.
  The `beq` branch at 0x4431cc targets 0x4431dc, is taken when a5(=[ret(glxLookupVisual)+10]:2) == a6(=[ret(LookupDrawable)+2]:1), and falls through when a5(=[ret(glxLookupVisual)+10]:2) != a6(=[ret(LookupDrawable)+2]:1).
  The `beq` branch at 0x4431d4 targets 0x443134 and is always taken.
  The `bne` branch at 0x4431f0 targets 0x443208, is taken when v0(=ret(__glxLookupFBConfigFromVid)) != 0, and falls through when v0(=ret(__glxLookupFBConfigFromVid)) == 0.
  The `beq` branch at 0x443200 targets 0x443130 and is always taken.
  The `bne` branch at 0x443214 targets 0x443224, is taken when v0(=ret(__glXMalloc)) != 0, and falls through when v0(=ret(__glXMalloc)) == 0.
  The `beq` branch at 0x44321c targets 0x443134 and is always taken.
  The `beq` branch at 0x443264 targets 0x4432a8, is taken when v0(=ret(AddResource)) == 0, and falls through when v0(=ret(AddResource)) != 0.
  The `beq` branch at 0x443278 targets 0x443130 and is always taken.
  The `beq` branch at 0x443288 targets 0x443130 and is always taken.
  The `beq` branch at 0x4432a0 targets 0x443130 and is always taken.
  The `beq` branch at 0x4432a8 targets 0x443130 and is always taken.
  The return at 0x443128 has v0 = 0x4.
  The return at 0x443140 has v0 = one of ?, 0x8, 0xb.

- `__glXCreateGLXPixmap` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4432c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4432c0-0x44330c (76 bytes).
  It occupies 76 bytes.
  The `lw` at 0x4432dc loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x4432e0 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x4432e4 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x4432f8 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `bgezall` at 0x4432f4 calls __glXCreateGLXPixmap2 [0x4430c0] with a0=a0 at entry (arg0), a1=[a1+4], a2=[a1+8], a3=0x0, a4=[a1+12], a5=[a1+16], a6=0x366dc.
  The return at 0x443304 has v0 = ret(__glXCreateGLXPixmap2).

- `__glXDestroyGLXPixmap` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x443340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x443340-0x4433c8 (136 bytes).
  It occupies 136 bytes.
  The `lw` at 0x443358 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x44335c loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x443378 loads 4 bytes from sym(__glXPixmapRes) +0x0.
  The `sw` at 0x443394 stores 4 bytes to [a0+44] +0x18.
  The `lw` at 0x4433a0 loads 4 bytes from sym(__glXBadPixmap) +0x0.
  The `jalr` at 0x443374 calls LookupIDByType with a0=[a1+4], a1=[sym(__glXPixmapRes)], a2=0x3665c, a3=a3 at entry (arg3).
  The `jalr` at 0x4433ac calls FreeResource with a0=[a1+4], a1=0x0, a2=?, a3=?.
  The `bne` branch at 0x44337c targets 0x4433a4, is taken when v0(=ret(LookupIDByType)) != 0, and falls through when v0(=ret(LookupIDByType)) == 0.
  The return at 0x44339c has v0 = [sym(__glXBadPixmap)].
  The return at 0x4433c0 has v0 = 0x0.

- `__glXFreeGLXPixmap2` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x443400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x443400-0x44345c (92 bytes).
  It occupies 92 bytes.
  The `lw` at 0x443404 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x443428 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x443434 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x443438 loads 4 bytes from [a0+8] +0xdc.
  The `lw` at 0x443444 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0x443440 calls (unknown callee) with a0=[a0], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44344c calls Xfree with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x443414 targets 0x443428, is taken when v0(=[a0+12]) == 0, and falls through when v0(=[a0+12]) != 0.
  The `bne` branch at 0x44342c targets 0x44341c, is taken when v0(=[a0+16]) != 0, and falls through when v0(=[a0+16]) == 0.
  The `beq` branch at 0x443454 targets 0x44341c and is always taken.
  The return at 0x443420 has v0 = one of [a0+12], [a0+16], ret(Xfree).

- `__glXGetFBConfigsSGIX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x443480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x443480-0x443940 (1216 bytes).
  It occupies 1216 bytes.
  The `lw` at 0x443498 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x44349c loads 4 bytes from sym(screenInfo) +0x30.
  The `lw` at 0x4434a8 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x4434d0 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  38 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4434dc, `lw` at 0x4434f4, `lw` at 0x4435c4.
  The `lw` at 0x44352c loads 4 bytes from [a0+44] +0x1c.
  2 such `lw` accesses load 4 bytes from [a0+44] +0x10, including `lw` at 0x443538, `lw` at 0x443838.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x443638, `lbu` at 0x443648.
  10 such `sb` accesses store 1 byte to ?, including `sb` at 0x44386c, `sb` at 0x443870, `sb` at 0x443888.
  8 such `lb` accesses load 1 byte from ?, including `lb` at 0x443874, `lb` at 0x443878, `lb` at 0x44387c.
  The `sw` at 0x443930 stores 4 bytes to [a0+44] +0x18.
  The `jalr` at 0x4435bc calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-416, a3=?, a4=[[a0+44]+28].
  The `jalr` at 0x4438d0 calls WriteToClient with a0=[a0+44], a1=0x118, a2=sp-384, a3=?.
  The `bne` branch at 0x4434c4 targets 0x443924, is taken when v0(=[sym(screenInfo)+48]) < at(=[a1+12]) (unsigned), and falls through when v0(=[sym(screenInfo)+48]) >= at(=[a1+12]) (unsigned).
  The `beq` branch at 0x443544 targets 0x4435ac, is taken when a1(=[[a0+44]+16]) == 0, and falls through when a1(=[[a0+44]+16]) != 0.
  The `blez` branch at 0x4435e4 targets 0x4438ec, is taken when t1(?) <= 0 (signed), and falls through when t1(?) > 0 (signed).
  The `beq` branch at 0x443840 targets 0x4438c4, is taken when v0(=[[a0+44]+16]) == 0, and falls through when v0(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x443864 targets 0x443894 and is always taken.
  The `bne` branch at 0x4438b4 targets 0x44386c, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x4438e4 targets 0x443608, is taken when s3(?) < a7(?) (signed), and falls through when s3(?) >= a7(?) (signed).
  The return at 0x44391c has v0 = 0x0.
  The return at 0x443938 has v0 = 0x2.

- `__glXCreateContextWithConfigSGIX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x443940 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x443940-0x443994 (84 bytes).
  It occupies 84 bytes.
  The `lw` at 0x44395c loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x443960 loads 4 bytes from a1 (arg1 at entry) +0x14.
  The `lw` at 0x443964 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x443968 loads 4 bytes from a1 (arg1 at entry) +0x18.
  The `lw` at 0x44396c loads 4 bytes from a1 (arg1 at entry) +0x1c.
  The `lbu` at 0x443980 loads 1 byte from a1 (arg1 at entry) +0x20.
  The `bgezall` at 0x44397c calls __glXCreateContext2 [0x4409c0] with a0=a0 at entry (arg0), a1=[a1+12], a2=[a1+20], a3=0x0, a4=[a1+16], a5=[a1+24], a6=[a1+28], a7=[a1+32]:1.
  The return at 0x44398c has v0 = ret(__glXCreateContext2).

- `__glXCreateGLXPixmapWithConfigSGIX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4439c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4439c0-0x443a0c (76 bytes).
  It occupies 76 bytes.
  The `lw` at 0x4439dc loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x4439e0 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x4439e4 loads 4 bytes from a1 (arg1 at entry) +0x14.
  The `lw` at 0x4439f8 loads 4 bytes from a1 (arg1 at entry) +0x18.
  The `bgezall` at 0x4439f4 calls __glXCreateGLXPixmap2 [0x4430c0] with a0=a0 at entry (arg0), a1=[a1+12], a2=0x0, a3=[a1+16], a4=[a1+20], a5=[a1+24], a6=0x35fdc.
  The return at 0x443a04 has v0 = ret(__glXCreateGLXPixmap2).

- `__glXCreatePbuffer2` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x443a40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x443a40-0x443da8 (872 bytes).
  It occupies 872 bytes.
  The `lw` at 0x443a44 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x443a48 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x443a4c loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x443a6c loads 4 bytes from a1 (arg1 at entry) +0x1c.
  The `lw` at 0x443a70 loads 4 bytes from a1 (arg1 at entry) +0x18.
  The `lhu` at 0x443a74 loads 2 bytes from a1 (arg1 at entry) +0x2.
  The `lw` at 0x443a88 loads 4 bytes from a1 (arg1 at entry) +0x14.
  The `lw` at 0x443aa0 loads 4 bytes from sym(screenInfo) +0x30.
  The `sw` at 0x443ab0 stores 4 bytes to [a0+44] +0x18.
  8 such `lw` accesses load 4 bytes from ?, including `lw` at 0x443ae8, `lw` at 0x443b5c, `lw` at 0x443b64.
  2 such `lw` accesses load 4 bytes from ret(__glxLookupFBConfig) +0x30, including `lw` at 0x443b48, `lw` at 0x443c78.
  2 such `lw` accesses load 4 bytes from ret(__glxLookupFBConfig) +0x34, including `lw` at 0x443b4c, `lw` at 0x443c80.
  The `lw` at 0x443b7c loads 4 bytes from ret(__glxLookupFBConfig) +0x20.
  The `lw` at 0x443b84 loads 4 bytes from ret(__glxLookupFBConfig) +0x48.
  The `lw` at 0x443bb0 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x443bc8 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `sw` at 0x443c24 stores 4 bytes to ?.
  The `lw` at 0x443c28 loads 4 bytes from sym(__glXBadFBConfig) +0x0.
  The `sw` at 0x443cd4 stores 4 bytes to ret(Xalloc) +0x0.
  The `sw` at 0x443cdc stores 4 bytes to ret(Xalloc) +0x4.
  The `sw` at 0x443ce4 stores 4 bytes to ret(Xalloc) +0xc.
  The `sw` at 0x443ce8 stores 4 bytes to ret(Xalloc) +0x10.
  The `sw` at 0x443cec stores 4 bytes to ret(Xalloc) +0x14.
  The `sw` at 0x443cf0 stores 4 bytes to ret(Xalloc) +0x18.
  The `sw` at 0x443cf8 stores 4 bytes to ret(Xalloc) +0x8.
  The `sw` at 0x443d00 stores 4 bytes to ret(Xalloc) +0x1c.
  The `lw` at 0x443d0c loads 4 bytes from sym(__glXPbufferRes) +0x0.
  The `jalr` at 0x443af4 calls __glxLookupFBConfig with a0=?, a1=?, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a1+12], a5=[a0+44].
  The `jalr` at 0x443b94 calls glxNewPbuffer with a0=?, a1=?, a2=[ret(__glxLookupFBConfig)+32], a3=[ret(__glxLookupFBConfig)+72].
  The `jalr` at 0x443be4 calls Xalloc with a0=0x20, a1=0xb, a2=?, a3=?.
  The `jalr` at 0x443d08 calls AddResource with a0=?, a1=[sym(__glXPbufferRes)], a2=ret(Xalloc), a3=?, a4=0x1, a5=0x4.
  The `jalr` at 0x443d4c calls __glXSwapCreateGLXPbufferSGIXReply with a0=?, a1=sp-144, a2=?, a3=?, a6=a2 at entry (arg2).
  The `jalr` at 0x443d8c calls WriteToClient with a0=?, a1=0x20, a2=sp-144, a3=?, a6=a2 at entry (arg2).
  The `beq` branch at 0x443a64 targets 0x443bb0, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x443aa8 targets 0x443ad4, is taken when t9(=[sym(screenInfo)+48]) >= s3(?) (signed), and falls through when t9(=[sym(screenInfo)+48]) < s3(?) (signed).
  The `beq` branch at 0x443b00 targets 0x443c00, is taken when v0(=ret(__glxLookupFBConfig)) == 0, and falls through when v0(=ret(__glxLookupFBConfig)) != 0.
  The `beq` branch at 0x443b0c targets 0x443c34, is taken when at(=a2) == 0, and falls through when at(=a2) != 0.
  The `blez` branch at 0x443b14 targets 0x443b70, is taken when s4(?) <= 0 (signed), and falls through when s4(?) > 0 (signed).
  The `beq` branch at 0x443b30 targets 0x443b5c and is always taken.
  The `bne` branch at 0x443b38 targets 0x443bd8, is taken when t3(?) != t8(=0x801c), and falls through when t3(?) == t8(=0x801c).
  The `beq` branch at 0x443b40 targets 0x443b50, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x443b54 targets 0x443b74, is taken when t0(?) == t9(?), and falls through when t0(?) != t9(?).
  The `bne` branch at 0x443b60 targets 0x443b38, is taken when t3(?) != t2(=0x801b), and falls through when t3(?) == t2(=0x801b).
  The `beq` branch at 0x443b68 targets 0x443b50 and is always taken.
  The `bne` branch at 0x443ba0 targets 0x443be0, is taken when v0(=ret(glxNewPbuffer)) != 0, and falls through when v0(=ret(glxNewPbuffer)) == 0.
  The `beq` branch at 0x443ba8 targets 0x443ab4 and is always taken.
  The `beq` branch at 0x443bd0 targets 0x443a9c and is always taken.
  The `beq` branch at 0x443bd8 targets 0x443ab4 and is always taken.
  The `bne` branch at 0x443bec targets 0x443cc8, is taken when v0(=ret(Xalloc)) != 0, and falls through when v0(=ret(Xalloc)) == 0.
  The `beq` branch at 0x443bf4 targets 0x443ab4 and is always taken.
  The `blez` branch at 0x443c38 targets 0x443d74, is taken when s4(?) <= 0 (signed), and falls through when s4(?) > 0 (signed).
  The `beq` branch at 0x443c60 targets 0x443d9c and is always taken.
  The `bne` branch at 0x443c68 targets 0x443d60, is taken when v0(?) != t8(=0x801c), and falls through when v0(?) == t8(=0x801c).
  The `beq` branch at 0x443c70 targets 0x443c84, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x443c88 targets 0x443b78, is taken when t0(?) == t9(?), and falls through when t0(?) != t9(?).
  The `beq` branch at 0x443c94 targets 0x443cb4, is taken when v0(?) == a5(=0x8041), and falls through when v0(?) != a5(=0x8041).
  The `beq` branch at 0x443c9c targets 0x443cc0, is taken when v0(?) == t1(=0x8040), and falls through when v0(?) != t1(=0x8040).
  The `bne` branch at 0x443ca4 targets 0x443c68, is taken when v0(?) != t2(=0x801b), and falls through when v0(?) == t2(=0x801b).
  The `beq` branch at 0x443cac targets 0x443c84 and is always taken.
  The `beq` branch at 0x443cb4 targets 0x443c84 and is always taken.
  The `beq` branch at 0x443cc0 targets 0x443c84 and is always taken.
  The `beq` branch at 0x443d10 targets 0x443d68, is taken when v0(=ret(AddResource)) == 0, and falls through when v0(=ret(AddResource)) != 0.
  The `beq` branch at 0x443d18 targets 0x443d54, is taken when a6(=a2) == 0, and falls through when a6(=a2) != 0.
  The `beq` branch at 0x443d40 targets 0x443d80, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x443d58 targets 0x443ab4 and is always taken.
  The `beq` branch at 0x443d60 targets 0x443ab4 and is always taken.
  The `beq` branch at 0x443d6c targets 0x443ab4 and is always taken.
  The `beq` branch at 0x443d78 targets 0x443b78 and is always taken.
  The `beq` branch at 0x443d94 targets 0x443d58 and is always taken.
  The `beq` branch at 0x443da0 targets 0x443c94 and is always taken.
  The return at 0x443acc has v0 = one of 0x0, 0x2, 0xb.
  The return at 0x443c2c has v0 = [sym(__glXBadFBConfig)].
  The instructions from 0x443bfc to 0x443bfc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x443cbc to 0x443cbc are not reached by any path from the entry, and their branches are not listed.

- `__glXCreateGLXPbufferSGIX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x443dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x443dc0-0x443df8 (56 bytes).
  It occupies 56 bytes.
  The `bgezall` at 0x443de0 calls __glXCreatePbuffer2 [0x443a40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x1, a3=a3 at entry (arg3).
  The return at 0x443df0 has v0 = ret(__glXCreatePbuffer2).

- `__glXDestroyPbuffer2` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x443e00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x443e00-0x443ec0 (192 bytes).
  It occupies 192 bytes.
  The `lw` at 0x443e08 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x443e18 loads 4 bytes from a1 (arg1 at entry) +0xc.
  2 such `lw` accesses load 4 bytes from sym(__glXPbufferRes) +0x0, including `lw` at 0x443e38, `lw` at 0x443e7c.
  The `sw` at 0x443e48 stores 4 bytes to [a0+44] +0x18.
  The `lw` at 0x443e64 loads 4 bytes from sym(__glXBadPbufferSGIX) +0x0.
  The `lw` at 0x443e98 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x443ebc loads 4 bytes from sym(__glXBadPbuffer) +0x0.
  The `jalr` at 0x443e34 calls SecurityLookupIDByType with a0=[a0+44], a1=?, a2=[sym(__glXPbufferRes)], a3=0x4.
  The `jalr` at 0x443e78 calls FreeResourceByType with a0=?, a1=[sym(__glXPbufferRes)], a2=0x0, a3=a2 at entry (arg2).
  The `beq` branch at 0x443e10 targets 0x443e98, is taken when a2 == 0, and falls through when a2 != 0.
  The `bne` branch at 0x443e3c targets 0x443e68, is taken when v0(=ret(SecurityLookupIDByType)) != 0, and falls through when v0(=ret(SecurityLookupIDByType)) == 0.
  The `beq` branch at 0x443e44 targets 0x443ea4, is taken when a3(=a2) == 0, and falls through when a3(=a2) != 0.
  The `beq` branch at 0x443e9c targets 0x443e20 and is always taken.
  The return at 0x443e60 has v0 = [sym(__glXBadPbufferSGIX)].
  The return at 0x443e90 has v0 = 0x0.
  The return at 0x443eb8 has v0 = [sym(__glXBadPbuffer)].

- `__glXDestroyGLXPbufferSGIX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x443ec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x443ec0-0x443ef8 (56 bytes).
  It occupies 56 bytes.
  The `bgezall` at 0x443ee0 calls __glXDestroyPbuffer2 [0x443e00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x1, a3=a3 at entry (arg3).
  The return at 0x443ef0 has v0 = ret(__glXDestroyPbuffer2).

- `__glXFreeGLXPbuffer2` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x443f00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x443f00-0x443f58 (88 bytes).
  It occupies 88 bytes.
  The `lw` at 0x443f04 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x443f28 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x443f40 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0x443f3c calls glxDeletePbuffer with a0=[a0], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x443f48 calls Xfree with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x443f14 targets 0x443f28, is taken when v0(=[a0+12]) == 0, and falls through when v0(=[a0+12]) != 0.
  The `bne` branch at 0x443f2c targets 0x443f1c, is taken when v0(=[a0+16]) != 0, and falls through when v0(=[a0+16]) == 0.
  The `beq` branch at 0x443f50 targets 0x443f1c and is always taken.
  The return at 0x443f20 has v0 = one of [a0+12], [a0+16], ret(Xfree).

- `__glXChangeDrawableAttributes2` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x443f80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x443f80-0x444170 (496 bytes).
  It occupies 496 bytes.
  The `lw` at 0x443f88 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lhu` at 0x443f94 loads 2 bytes from a1 (arg1 at entry) +0x2.
  The `lw` at 0x443f98 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x443fd0 loads 4 bytes from sym(__glXPbufferRes) +0x0.
  The `lw` at 0x443fdc loads 4 bytes from ret(SecurityLookupIDByType) +0x0.
  2 such `lw` accesses load 4 bytes from sym(__glxWindowPrivateIndex) +0x0, including `lw` at 0x443fe0, `lw` at 0x444070.
  The `lw` at 0x443fe4 loads 4 bytes from [ret(SecurityLookupIDByType)] +0x80.
  The `lw` at 0x443ff0 loads 4 bytes from ([[ret(SecurityLookupIDByType)]+128] + ([sym(__glxWindowPrivateIndex)] << 0x2)) +0x0.
  The `lw` at 0x444010 loads 4 bytes from (a1 + one of 0xc, 0x10) +0x0.
  The `lw` at 0x444028 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x444038 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x444074 loads 4 bytes from ret(SecurityLookupIDByType) +0x80.
  The `lw` at 0x444080 loads 4 bytes from ([ret(SecurityLookupIDByType)+128] + ([sym(__glxWindowPrivateIndex)] << 0x2)) +0x0.
  The `lw` at 0x444088 loads 4 bytes from ret(SecurityLookupIDByType) +0x78.
  The `lw` at 0x444094 loads 4 bytes from [ret(SecurityLookupIDByType)+120] +0x0.
  The `lw` at 0x4440a4 loads 4 bytes from ret(SecurityLookupIDByType) +0x10.
  The `lw` at 0x4440ac loads 4 bytes from [ret(SecurityLookupIDByType)+16] +0x0.
  The `lw` at 0x4440b4 loads 4 bytes from ret(__glxLookupFBConfigFromVid) +0x48.
  The `lw` at 0x4440d4 loads 4 bytes from ret(SecurityLookupIDByType) +0x14.
  The `lw` at 0x4440e8 loads 4 bytes from [ret(SecurityLookupIDByType)+20] +0x48.
  The `lw` at 0x44412c loads 4 bytes from (a1 + one of 0x10, 0x14) +0x0.
  The `lw` at 0x444154 loads 4 bytes from sym(__glXBadDrawable) +0x0.
  The `lw` at 0x444164 loads 4 bytes from ret(FindWindowWithOptional) +0x78.
  The `lw` at 0x44416c loads 4 bytes from [ret(FindWindowWithOptional)+120] +0x0.
  The `jalr` at 0x443fcc calls SecurityLookupIDByType with a0=[a0+44], a1=?, a2=[sym(__glXPbufferRes)], a3=0x3.
  The `jalr` at 0x444058 calls SecurityLookupIDByType with a0=[a0+44], a1=?, a2=0xffffffffc0000001, a3=0x3, a4=sym(__glxWindowPrivateIndex).
  The `jalr` at 0x4440a8 calls __glxLookupFBConfigFromVid with a0=[[ret(SecurityLookupIDByType)+16]], a1=?, a2=?, a3=?.
  The `jalr` at 0x4440c0 calls glxInitWinPriv with a0=ret(SecurityLookupIDByType), a1=[ret(__glxLookupFBConfigFromVid)+72], a2=0x0, a3=?.
  The `jalr` at 0x4440e4 calls glxInitWinPriv with a0=[ret(SecurityLookupIDByType)], a1=[[ret(SecurityLookupIDByType)+20]+72], a2=0x1, a3=[([[ret(SecurityLookupIDByType)]+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))], a4=sym(__glxWindowPrivateIndex), a5=[ret(SecurityLookupIDByType)], a6=([sym(__glxWindowPrivateIndex)] << 0x2).
  Calls __glXSetDrawableEventMask via got with a0=[a0+44], a1=?, a2=?, a3=? (`jr` at 0x444130).
  The `jalr` at 0x44415c calls FindWindowWithOptional with a0=ret(SecurityLookupIDByType), a1=?, a2=?, a3=[([ret(SecurityLookupIDByType)+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))], a4=([sym(__glxWindowPrivateIndex)] << 0x2), a5=ret(SecurityLookupIDByType).
  The `beq` branch at 0x443f8c targets 0x444028, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x443fd4 targets 0x444044, is taken when v0(=ret(SecurityLookupIDByType)) == 0, and falls through when v0(=ret(SecurityLookupIDByType)) != 0.
  The `beq` branch at 0x443ff4 targets 0x4440d0, is taken when a3(=[([[ret(SecurityLookupIDByType)]+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]) == 0, and falls through when a3(=[([[ret(SecurityLookupIDByType)]+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]) != 0.
  The `blez` branch at 0x444008 targets 0x444100, is taken when a7(?) <= 0 (signed), and falls through when a7(?) > 0 (signed).
  The `beq` branch at 0x444014 targets 0x444114, is taken when t0(?) == t1(=0x801f), and falls through when t0(?) != t1(=0x801f).
  The `beq` branch at 0x44403c targets 0x443fb8 and is always taken.
  The `beq` branch at 0x444068 targets 0x444140, is taken when v0(=ret(SecurityLookupIDByType)) == 0, and falls through when v0(=ret(SecurityLookupIDByType)) != 0.
  The `bne` branch at 0x444084 targets 0x443ffc, is taken when a3(=[([ret(SecurityLookupIDByType)+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]) != 0, and falls through when a3(=[([ret(SecurityLookupIDByType)+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]) == 0.
  The `beq` branch at 0x44408c targets 0x444158, is taken when v0(=[ret(SecurityLookupIDByType)+120]) == 0, and falls through when v0(=[ret(SecurityLookupIDByType)+120]) != 0.
  The `beq` branch at 0x4440c8 targets 0x443ffc and is always taken.
  The `beq` branch at 0x4440ec targets 0x443ffc and is always taken.
  The `beq` branch at 0x444168 targets 0x44409c and is always taken.
  The return at 0x444020 has v0 = 0x2.
  The return at 0x44410c has v0 = 0x0.
  The return at 0x444150 has v0 = [sym(__glXBadDrawable)].
  The instructions from 0x4440f4 to 0x4440fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x444138 to 0x44413c are not reached by any path from the entry, and their branches are not listed.

- `__glXChangeDrawableAttributesSGIX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x444180 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x444180-0x4441b8 (56 bytes).
  It occupies 56 bytes.
  The `bgezall` at 0x4441a0 calls __glXChangeDrawableAttributes2 [0x443f80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x1, a3=a3 at entry (arg3).
  The return at 0x4441b0 has v0 = ret(__glXChangeDrawableAttributes2).

- `__glXGetDrawableAttributes2` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4441c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4441c0-0x444710 (1360 bytes).
  It occupies 1360 bytes.
  The `lw` at 0x4441c8 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x4441dc loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x444200 loads 4 bytes from sym(__glXPbufferRes) +0x0.
  The `lw` at 0x444214 loads 4 bytes from ret(SecurityLookupIDByType) +0x0.
  2 such `lw` accesses load 4 bytes from sym(__glxWindowPrivateIndex) +0x0, including `lw` at 0x444218, `lw` at 0x4443c0.
  The `lw` at 0x44421c loads 4 bytes from [ret(SecurityLookupIDByType)] +0x80.
  The `lw` at 0x444228 loads 4 bytes from ([[ret(SecurityLookupIDByType)]+128] + ([sym(__glxWindowPrivateIndex)] << 0x2)) +0x0.
  4 such `sw` accesses store 4 bytes to ret(Xalloc) +0x0, including `sw` at 0x444248, `sw` at 0x44451c, `sw` at 0x4445cc.
  3 such `lw` accesses load 4 bytes from ret(SecurityLookupIDByType) +0x14, including `lw` at 0x44424c, `lw` at 0x444264, `lw` at 0x444428.
  2 such `lw` accesses load 4 bytes from [ret(SecurityLookupIDByType)+20] +0x48, including `lw` at 0x444250, `lw` at 0x444438.
  4 such `sw` accesses store 4 bytes to ret(Xalloc) +0x4, including `sw` at 0x444258, `sw` at 0x444528, `sw` at 0x4445dc.
  5 such `sw` accesses store 4 bytes to ret(Xalloc) +0x8, including `sw` at 0x444260, `sw` at 0x444448, `sw` at 0x444530.
  The `lw` at 0x444268 loads 4 bytes from [ret(SecurityLookupIDByType)+20] +0x24.
  5 such `sw` accesses store 4 bytes to ret(Xalloc) +0xc, including `sw` at 0x44426c, `sw` at 0x444458, `sw` at 0x444540.
  4 such `sw` accesses store 4 bytes to ret(Xalloc) +0x10, including `sw` at 0x444278, `sw` at 0x44453c, `sw` at 0x4445e8.
  The `lw` at 0x44427c loads 4 bytes from ret(SecurityLookupIDByType) +0x18.
  4 such `sw` accesses store 4 bytes to ret(Xalloc) +0x18, including `sw` at 0x444284, `sw` at 0x44454c, `sw` at 0x4445fc.
  4 such `sw` accesses store 4 bytes to ret(Xalloc) +0x14, including `sw` at 0x44428c, `sw` at 0x444554, `sw` at 0x444600.
  The `lhu` at 0x444290 loads 2 bytes from [ret(SecurityLookupIDByType)] +0xc.
  The `sw` at 0x444298 stores 4 bytes to ret(Xalloc) +0x20.
  4 such `sw` accesses store 4 bytes to ret(Xalloc) +0x1c, including `sw` at 0x44429c, `sw` at 0x444560, `sw` at 0x444608.
  The `lhu` at 0x4442a0 loads 2 bytes from [ret(SecurityLookupIDByType)] +0xe.
  The `sw` at 0x4442ac stores 4 bytes to ret(Xalloc) +0x28.
  The `sw` at 0x4442b8 stores 4 bytes to ret(Xalloc) +0x24.
  The `sw` at 0x4442c0 stores 4 bytes to ret(Xalloc) +0x2c.
  2 such `lw` accesses load 4 bytes from [a0+44] +0x1c, including `lw` at 0x4442dc, `lw` at 0x444474.
  2 such `lw` accesses load 4 bytes from [a0+44] +0x10, including `lw` at 0x4442e8, `lw` at 0x444480.
  The `lw` at 0x444388 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x4443b8 loads 4 bytes from ret(SecurityLookupIDByType) +0x78.
  The `lw` at 0x4443c4 loads 4 bytes from ret(SecurityLookupIDByType) +0x80.
  The `lw` at 0x4443d4 loads 4 bytes from ([ret(SecurityLookupIDByType)+128] + ([sym(__glxWindowPrivateIndex)] << 0x2)) +0x0.
  The `lw` at 0x4443d8 loads 4 bytes from [ret(SecurityLookupIDByType)+120] +0x0.
  The `lw` at 0x4443e0 loads 4 bytes from ret(SecurityLookupIDByType) +0x10.
  The `lw` at 0x4443e8 loads 4 bytes from [ret(SecurityLookupIDByType)+16] +0x0.
  The `lw` at 0x44444c loads 4 bytes from ret(SecurityLookupIDByType) +0x1c.
  2 such `lw` accesses load 4 bytes from sym(__glXBadDrawable) +0x0, including `lw` at 0x444504, `lw` at 0x4446f8.
  The `lhu` at 0x444534 loads 2 bytes from ret(SecurityLookupIDByType) +0xc.
  The `lhu` at 0x444544 loads 2 bytes from ret(SecurityLookupIDByType) +0xe.
  The `lw` at 0x444558 loads 4 bytes from ?.
  The `lw` at 0x444578 loads 4 bytes from ret(__glxLookupFBConfigFromVid) +0x48.
  The `lw` at 0x4445a4 loads 4 bytes from sym(__glXPixmapRes) +0x0.
  2 such `lw` accesses load 4 bytes from ret(LookupIDByType) +0x0, including `lw` at 0x4445bc, `lw` at 0x44469c.
  2 such `lhu` accesses load 2 bytes from [ret(LookupIDByType)] +0xc, including `lhu` at 0x4445d0, `lhu` at 0x4446b0.
  2 such `lhu` accesses load 2 bytes from [ret(LookupIDByType)] +0xe, including `lhu` at 0x4445e0, `lhu` at 0x4446c0.
  The `lw` at 0x4445f0 loads 4 bytes from ret(LookupIDByType) +0x14.
  The `lw` at 0x4445f4 loads 4 bytes from [ret(LookupIDByType)+20] +0x48.
  2 such `lw` accesses load 4 bytes from [ret(LookupIDByType)] +0x4, including `lw` at 0x444604, `lw` at 0x4446e4.
  The `lw` at 0x444664 loads 4 bytes from ret(FindWindowWithOptional) +0x78.
  The `lw` at 0x44466c loads 4 bytes from [ret(FindWindowWithOptional)+120] +0x0.
  The `lw` at 0x444684 loads 4 bytes from sym(__glXWindowRes) +0x0.
  The `lw` at 0x4446d0 loads 4 bytes from ret(LookupIDByType) +0x18.
  The `lw` at 0x4446d4 loads 4 bytes from [ret(LookupIDByType)+24] +0x48.
  The `jalr` at 0x4441fc calls SecurityLookupIDByType with a0=[a0+44], a1=?, a2=[sym(__glXPbufferRes)], a3=0x1.
  The `jalr` at 0x444234 calls Xalloc with a0=0x30, a1=?, a2=?, a3=?.
  The `jalr` at 0x4442b4 calls __glXGetDrawableEventMask with a0=[a0+44], a1=[ret(SecurityLookupIDByType)], a2=?, a3=?, a5=[[ret(SecurityLookupIDByType)+20]+72], a6=0x8013.
  The `jalr` at 0x444300 calls __glXSwapGetDrawableAttributesSGIXReply with a0=[a0+44], a1=sp-128, a2=ret(Xalloc), a3=?.
  The `jalr` at 0x444310 calls Xfree with a0=ret(Xalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x4443a8 calls SecurityLookupIDByType with a0=[a0+44], a1=?, a2=0xffffffffc0000001, a3=0x1.
  The `jalr` at 0x4443e4 calls __glxLookupFBConfigFromVid with a0=[[ret(SecurityLookupIDByType)+16]], a1=?, a2=?, a3=?.
  The `jalr` at 0x44440c calls Xalloc with a0=?, a1=one of 0x1, 0x4, a2=?, a3=?.
  The `jalr` at 0x444434 calls glxInitWinPriv with a0=[ret(SecurityLookupIDByType)], a1=[[ret(SecurityLookupIDByType)+20]+72], a2=0x1, a3=[([[ret(SecurityLookupIDByType)]+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))], a4=([sym(__glxWindowPrivateIndex)] << 0x2).
  The `jalr` at 0x444498 calls __glXSwapGetDrawableAttributesReply with a0=[a0+44], a1=sp-96, a2=ret(Xalloc), a3=?, a4=[[a0+44]+16], a5=[[a0+44]+28], a6=0x1.
  The `jalr` at 0x4444b8 calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-128, a3=?.
  The `jalr` at 0x4444cc calls WriteToClient with a0=[a0+44], a1=?, a2=ret(Xalloc), a3=?.
  The `jalr` at 0x444518 calls __glXGetDrawableEventMask with a0=[a0+44], a1=ret(SecurityLookupIDByType), a2=?, a3=?.
  The `jalr` at 0x444580 calls glxInitWinPriv with a0=ret(SecurityLookupIDByType), a1=[ret(__glxLookupFBConfigFromVid)+72], a2=0x0, a3=?.
  The `jalr` at 0x4445a0 calls LookupIDByType with a0=?, a1=[sym(__glXPixmapRes)], a2=?, a3=?.
  The `jalr` at 0x4445b8 calls Xalloc with a0=0x20, a1=?, a2=?, a3=?.
  The `jalr` at 0x444634 calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-96, a3=?, a4=[[a0+44]+16], a5=[[a0+44]+28], a6=0x1.
  The `jalr` at 0x444648 calls WriteToClient with a0=[a0+44], a1=?, a2=ret(Xalloc), a3=?.
  The `jalr` at 0x44465c calls FindWindowWithOptional with a0=ret(SecurityLookupIDByType), a1=?, a2=?, a3=?.
  The `jalr` at 0x444680 calls LookupIDByType with a0=?, a1=[sym(__glXWindowRes)], a2=?, a3=?.
  The `jalr` at 0x444698 calls Xalloc with a0=0x20, a1=?, a2=?, a3=?.
  The `beq` branch at 0x4441d4 targets 0x444388, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x444208 targets 0x444394, is taken when v0(=ret(SecurityLookupIDByType)) == 0, and falls through when v0(=ret(SecurityLookupIDByType)) != 0.
  The `beq` branch at 0x44422c targets 0x444424, is taken when a3(=[([[ret(SecurityLookupIDByType)]+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]) == 0, and falls through when a3(=[([[ret(SecurityLookupIDByType)]+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]) != 0.
  The `beq` branch at 0x44423c targets 0x444360, is taken when v0(=ret(Xalloc)) == 0, and falls through when v0(=ret(Xalloc)) != 0.
  The `beq` branch at 0x444254 targets 0x444444, is taken when s3(=a2) == 0, and falls through when s3(=a2) != 0.
  The `beq` branch at 0x4442bc targets 0x44445c, is taken when s3(=a2) == 0, and falls through when s3(=a2) != 0.
  The `beq` branch at 0x4442ec targets 0x4444a8, is taken when v1(=[[a0+44]+16]) == 0, and falls through when v1(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x44438c targets 0x4441e4 and is always taken.
  The `beq` branch at 0x4443b0 targets 0x4444dc, is taken when v0(=ret(SecurityLookupIDByType)) == 0, and falls through when v0(=ret(SecurityLookupIDByType)) != 0.
  The `beq` branch at 0x4443d0 targets 0x444658, is taken when v0(=[ret(SecurityLookupIDByType)+120]) == 0, and falls through when v0(=[ret(SecurityLookupIDByType)+120]) != 0.
  The `beq` branch at 0x4443ec targets 0x444570, is taken when s0(=[([ret(SecurityLookupIDByType)+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]) == 0, and falls through when s0(=[([ret(SecurityLookupIDByType)+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]) != 0.
  The `beq` branch at 0x4443f4 targets 0x444564, is taken when s3(=a2) == 0, and falls through when s3(=a2) != 0.
  The `bne` branch at 0x444414 targets 0x444508, is taken when v0(=ret(Xalloc)) != 0, and falls through when v0(=ret(Xalloc)) == 0.
  The `beq` branch at 0x44441c targets 0x444340 and is always taken.
  The `beq` branch at 0x44443c targets 0x444234 and is always taken.
  The `beq` branch at 0x444454 targets 0x444270 and is always taken.
  The `beq` branch at 0x444484 targets 0x444624, is taken when a4(=[[a0+44]+16]) == 0, and falls through when a4(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x4444a0 targets 0x44430c and is always taken.
  The `beq` branch at 0x4444d4 targets 0x444308 and is always taken.
  The `beq` branch at 0x4444dc targets 0x444590, is taken when s3(=a2) == 0, and falls through when s3(=a2) != 0.
  The `bne` branch at 0x444524 targets 0x4442cc, is taken when s3(=a2) != 0, and falls through when s3(=a2) == 0.
  The `beq` branch at 0x44455c targets 0x444614 and is always taken.
  The `beq` branch at 0x444568 targets 0x444400 and is always taken.
  The `beq` branch at 0x444588 targets 0x4443f4 and is always taken.
  The `beq` branch at 0x4445a8 targets 0x444670, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x4445c0 targets 0x444700, is taken when v0(=ret(Xalloc)) == 0, and falls through when v0(=ret(Xalloc)) != 0.
  The `bne` branch at 0x444614 targets 0x4442d0, is taken when s3(=a2) != 0, and falls through when s3(=a2) == 0.
  The `beq` branch at 0x44461c targets 0x444468 and is always taken.
  The `beq` branch at 0x444650 targets 0x444308 and is always taken.
  The `beq` branch at 0x444668 targets 0x4443dc and is always taken.
  The `beq` branch at 0x444688 targets 0x4446f0, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x4446a0 targets 0x444708, is taken when v0(=ret(Xalloc)) == 0, and falls through when v0(=ret(Xalloc)) != 0.
  The `beq` branch at 0x4446e8 targets 0x44460c and is always taken.
  The `beq` branch at 0x4446f4 targets 0x444340 and is always taken.
  The `beq` branch at 0x444700 targets 0x444340 and is always taken.
  The `beq` branch at 0x444708 targets 0x444340 and is always taken.
  The return at 0x44432c has v0 = 0x0.
  The return at 0x444358 has v0 = one of 0xb, [sym(__glXBadDrawable)].
  The return at 0x444380 has v0 = 0xb.
  The return at 0x444500 has v0 = [sym(__glXBadDrawable)].
  The instructions from 0x444334 to 0x44433c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4446fc to 0x4446fc are not reached by any path from the entry, and their branches are not listed.

- `__glXGetDrawableAttributesSGIX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x444740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x444740-0x444778 (56 bytes).
  It occupies 56 bytes.
  The `bgezall` at 0x444760 calls __glXGetDrawableAttributes2 [0x4441c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x1, a3=a3 at entry (arg3).
  The return at 0x444770 has v0 = ret(__glXGetDrawableAttributes2).

- `__glXQueryContextInfoEXT` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x444980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x444980-0x444af0 (368 bytes).
  It occupies 368 bytes.
  The `lw` at 0x44499c loads 4 bytes from a0 (arg0 at entry) +0x2c.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0xc, including `lw` at 0x4449a0, `lw` at 0x4449d0.
  The `lw` at 0x4449b4 loads 4 bytes from sym(__glXContextRes) +0x0.
  The `sw` at 0x4449d4 stores 4 bytes to [a0+44] +0x18.
  2 such `lw` accesses load 4 bytes from sym(__glXBadContext) +0x0, including `lw` at 0x4449d8, `lw` at 0x444ab4.
  The `lw` at 0x4449fc loads 4 bytes from [a0+44] +0x1c.
  The `sw` at 0x444a28 stores 4 bytes to ret(__glXMalloc) +0x0.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x444a2c, `lw` at 0x444a38, `lw` at 0x444a3c.
  The `sw` at 0x444a30 stores 4 bytes to ret(__glXMalloc) +0x8.
  The `sw` at 0x444a34 stores 4 bytes to ret(__glXMalloc) +0x4.
  The `sw` at 0x444a44 stores 4 bytes to ret(__glXMalloc) +0x10.
  The `sw` at 0x444a48 stores 4 bytes to ret(__glXMalloc) +0xc.
  The `sw` at 0x444a54 stores 4 bytes to ret(__glXMalloc) +0x14.
  The `lw` at 0x444a58 loads 4 bytes from [a0+44] +0x10.
  The `jalr` at 0x4449b0 calls LookupIDByType with a0=[a1+12], a1=[sym(__glXContextRes)], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x444a0c calls __glXMalloc with a0=0x18, a1=?, a2=[[a0+44]+28], a3=0x3, a4=0x1, a5=0x6.
  The `jalr` at 0x444a70 calls __glXSwapQueryContextInfoEXTReply with a0=[a0+44], a1=sp-80, a2=ret(__glXMalloc), a3=?, a6=[[a0+44]+16].
  The `jalr` at 0x444a7c calls __glXFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x444acc calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-80, a3=?, a6=[[a0+44]+16].
  The `jalr` at 0x444ae0 calls WriteToClient with a0=[a0+44], a1=0x18, a2=?, a3=?.
  The `bne` branch at 0x4449bc targets 0x4449e8, is taken when v0(=ret(LookupIDByType)) != 0, and falls through when v0(=ret(LookupIDByType)) == 0.
  The `beq` branch at 0x444a20 targets 0x444a9c, is taken when v0(=ret(__glXMalloc)) == 0, and falls through when v0(=ret(__glXMalloc)) != 0.
  The `beq` branch at 0x444a5c targets 0x444ac0, is taken when a6(=[[a0+44]+16]) == 0, and falls through when a6(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x444ae8 targets 0x444a7c and is always taken.
  The return at 0x4449e0 has v0 = [sym(__glXBadContext)].
  The return at 0x444a94 has v0 = 0x0.
  The return at 0x444ab0 has v0 = [sym(__glXBadContext)].
  The instructions from 0x444ab8 to 0x444abc are not reached by any path from the entry, and their branches are not listed.

- `__glXRenderProcess` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x444b00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x444b00-0x444bc8 (200 bytes).
  It occupies 200 bytes.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x444b4c, `lw` at 0x444b9c.
  2 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x444b68, `lhu` at 0x444b6c.
  The `jalr` at 0x444b54 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `blez` branch at 0x444b20 targets 0x444bb0, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `beq` branch at 0x444b3c targets 0x444b68 and is always taken.
  The `blez` branch at 0x444b60 targets 0x444ba0, is taken when s1(?) <= 0 (signed), and falls through when s1(?) > 0 (signed).
  The `blez` branch at 0x444b70 targets 0x444b80, is taken when a0(?) <= 0 (signed), and falls through when a0(?) > 0 (signed).
  The `bne` branch at 0x444b7c targets 0x444b44, is taken when a0(?) < 0xd6 (signed), and falls through when a0(?) >= 0xd6 (signed).
  The `bne` branch at 0x444b84 targets 0x444b50, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x444b90 targets 0x444b50, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x444b98 targets 0x444b50 and is always taken.
  The return at 0x444bc0 has v0 = one of ?, ret(?).

- `__glXRender` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x444c00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x444c00-0x444fbc (956 bytes).
  It occupies 956 bytes.
  The `lhu` at 0x444c08 loads 2 bytes from a1 (arg1 at entry) +0x2.
  The `lw` at 0x444c0c loads 4 bytes from a0 (arg0 at entry) +0x2c.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x444ca4, `lw` at 0x444cac, `lw` at 0x444cb0.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x3c, including `lw` at 0x444d00, `lw` at 0x444e20, `lw` at 0x444e2c.
  2 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x444d28, `lhu` at 0x444d2c.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x40, including `lw` at 0x444da4, `lw` at 0x444e44, `lw` at 0x444f80.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x3c, including `sw` at 0x444db4, `sw` at 0x444e64.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x4, including `lw` at 0x444e04, `lw` at 0x444f44.
  The `lw` at 0x444e30 loads 4 bytes from a0 (arg0 at entry) +0x44.
  The `sb` at 0x444e7c stores 1 byte to ?.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x444ef0, `sw` at 0x444f10.
  2 such `lw` accesses load 4 bytes from sym(__glXBadRenderRequest) +0x0, including `lw` at 0x444ef4, `lw` at 0x444f18.
  The `sw` at 0x444f8c stores 4 bytes to a0 (arg0 at entry) +0x44.
  The `sw` at 0x444f9c stores 4 bytes to a0 (arg0 at entry) +0x40.
  The `lhu` at 0x444fb8 loads 2 bytes from a1 (arg1 at entry) +0xa.
  The `jalr` at 0x444cc8 calls (unknown callee) with a0=?, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x444d88 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x444da8 calls __glXRenderProcess with a0=[a0+64], a1=[a0+60], a2=?, a3=?, a5=[a0+60].
  The `jalr` at 0x444dc0 calls __glXRenderProcess with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x444e00 calls __glXForceCurrent with a0=a0 at entry (arg0), a1=[a1+4], a2=sp-128, a3=?, a5=[a0+60].
  The `jalr` at 0x444e54 calls xf86memcpy with a0=?, a1=?, a2=?, a3=?, a5=[a0+60].
  The `jalr` at 0x444f40 calls __glXForceCurrent with a0=a0 at entry (arg0), a1=[a1+4], a2=sp-128, a3=?, a5=[a0+60].
  The `jalr` at 0x444f88 calls __glXRealloc with a0=[a0+64], a1=?, a2=?, a3=?, a5=[a0+60].
  The `blez` branch at 0x444c48 targets 0x444f5c, is taken when s3(=([a1+2]:2 << 0x2)-8) <= 0 (signed), and falls through when s3(=([a1+2]:2 << 0x2)-8) > 0 (signed).
  The `beq` branch at 0x444c78 targets 0x444fb0 and is always taken.
  The `bne` branch at 0x444c84 targets 0x444ec0, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `beq` branch at 0x444c8c targets 0x444ec0, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x444cb4 targets 0x444f08, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x444cbc targets 0x444d60, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bltz` branch at 0x444cd8 targets 0x444dd8, is taken when v0(=ret(?)) < 0 (signed), and falls through when v0(=ret(?)) >= 0 (signed).
  The `bne` branch at 0x444cec targets 0x444de8, is taken when s0(?) != at(?), and falls through when s0(?) == at(?).
  The `bne` branch at 0x444cf8 targets 0x444f1c, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `beq` branch at 0x444d04 targets 0x444d70, is taken when a5(=[a0+60]) == 0, and falls through when a5(=[a0+60]) != 0.
  The `beq` branch at 0x444d0c targets 0x444d9c, is taken when s1(?) == a1(=0x17), and falls through when s1(?) != a1(=0x17).
  The `blez` branch at 0x444d20 targets 0x444e24, is taken when s3(?) <= 0 (signed), and falls through when s3(?) > 0 (signed).
  The `blez` branch at 0x444d30 targets 0x444c80, is taken when s1(?) <= 0 (signed), and falls through when s1(?) > 0 (signed).
  The `beq` branch at 0x444d3c targets 0x444c84, is taken when s1(?) >= 0xd6 (signed), and falls through when s1(?) < 0xd6 (signed).
  The `beq` branch at 0x444d58 targets 0x444cac and is always taken.
  The `beq` branch at 0x444d60 targets 0x444cf4, is taken when s0(?) == at(?), and falls through when s0(?) != at(?).
  The `beq` branch at 0x444d68 targets 0x444e80 and is always taken.
  The `bne` branch at 0x444d70 targets 0x444d0c, is taken when s6(?) != 0, and falls through when s6(?) == 0.
  The `beq` branch at 0x444d78 targets 0x444f24, is taken when s1(?) == v1(=0x4), and falls through when s1(?) != v1(=0x4).
  The `beq` branch at 0x444d80 targets 0x444f30, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x444d94 targets 0x444d14 and is always taken.
  The `beq` branch at 0x444d9c targets 0x444df0, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x444dd0 targets 0x444d14 and is always taken.
  The `beq` branch at 0x444de0 targets 0x444cf4, is taken when s0(?) == a4(?), and falls through when s0(?) != a4(?).
  The `beq` branch at 0x444de8 targets 0x444e80 and is always taken.
  The `beq` branch at 0x444e08 targets 0x444fa0, is taken when v0(=ret(__glXForceCurrent)) == 0, and falls through when v0(=ret(__glXForceCurrent)) != 0.
  The `beq` branch at 0x444e1c targets 0x444da0 and is always taken.
  The `blez` branch at 0x444e24 targets 0x444e6c, is taken when s6(?) <= 0 (signed), and falls through when s6(?) > 0 (signed).
  The `bne` branch at 0x444e3c targets 0x444f80, is taken when a3(=[a0+68]) < v0(?) (signed), and falls through when a3(=[a0+68]) >= v0(?) (signed).
  The `beq` branch at 0x444e6c targets 0x444e80, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x444f14 targets 0x444e80 and is always taken.
  The `beq` branch at 0x444f1c targets 0x444e80 and is always taken.
  The `beq` branch at 0x444f28 targets 0x444d14 and is always taken.
  The `beq` branch at 0x444f48 targets 0x444fa8, is taken when v0(=ret(__glXForceCurrent)) == 0, and falls through when v0(=ret(__glXForceCurrent)) != 0.
  The `beq` branch at 0x444f54 targets 0x444d84 and is always taken.
  The `beq` branch at 0x444f70 targets 0x444e68 and is always taken.
  The `beq` branch at 0x444f98 targets 0x444e48 and is always taken.
  The `beq` branch at 0x444fa0 targets 0x444e80 and is always taken.
  The `beq` branch at 0x444fa8 targets 0x444e80 and is always taken.
  The `beq` branch at 0x444fb4 targets 0x444d2c and is always taken.
  The return at 0x444eac has v0 = one of 0x10, 0x0, [sym(__glXBadRenderRequest)], ?.
  The return at 0x444f00 has v0 = [sym(__glXBadRenderRequest)].
  The instructions from 0x444eb4 to 0x444ebc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x444f78 to 0x444f7c are not reached by any path from the entry, and their branches are not listed.

- `__glXRenderLarge` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x444fc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x444fc0-0x4453f0 (1072 bytes).
  It occupies 1072 bytes.
  The `lw` at 0x444fc8 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lhu` at 0x444fcc loads 2 bytes from a1 (arg1 at entry) +0x2.
  The `lw` at 0x444fdc loads 4 bytes from a0 (arg0 at entry) +0x2c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x14, including `lw` at 0x445010, `lw` at 0x445070.
  2 such `lhu` accesses load 2 bytes from a1 (arg1 at entry) +0x8, including `lhu` at 0x445018, `lhu` at 0x445088.
  2 such `lhu` accesses load 2 bytes from a1 (arg1 at entry) +0xa, including `lhu` at 0x445028, `lhu` at 0x445344.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x18, including `lw` at 0x44502c, `lw` at 0x44506c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc, including `lw` at 0x445038, `lw` at 0x445074.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x10, including `lw` at 0x44503c, `lw` at 0x445094.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x1c, including `lw` at 0x445054, `lw` at 0x4450b4, `lw` at 0x445128.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x14, including `sw` at 0x44507c, `sw` at 0x445338.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0xc, including `sw` at 0x445084, `sw` at 0x445330.
  The `lhu` at 0x4450b8 loads 2 bytes from [a0+28] +0x6.
  The `lw` at 0x4450dc loads 4 bytes from (sym(__glXRenderTable) + ([[a0+28]+6]:2 << 0x2)) +0x0.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x445104, `lw` at 0x445298, `lw` at 0x4452a4.
  The `lw` at 0x445110 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `sb` at 0x445144 stores 1 byte to ret(__glXForceCurrent) +0x40.
  7 such `sw` accesses store 4 bytes to [a0+44] +0x18, including `sw` at 0x445174, `sw` at 0x4451a8, `sw` at 0x4451d8.
  8 such `lw` accesses load 4 bytes from sym(__glXBadLargeRequest) +0x0, including `lw` at 0x445198, `lw` at 0x4451cc, `lw` at 0x4451f4.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x4451ec, `sw` at 0x445360.
  The `lhu` at 0x445244 loads 2 bytes from a1 (arg1 at entry) +0x16.
  The `lw` at 0x445248 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x44526c loads 4 bytes from (sym(__glXRenderSizeTable) + ([a1+22]:2 << 0x3)) +0x0.
  The `lw` at 0x4452e8 loads 4 bytes from a0 (arg0 at entry) +0x20.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x1c, including `sw` at 0x445310, `sw` at 0x4453d4.
  The `sw` at 0x445318 stores 4 bytes to a0 (arg0 at entry) +0x20.
  The `sw` at 0x445340 stores 4 bytes to a0 (arg0 at entry) +0x10.
  The `sw` at 0x445350 stores 4 bytes to a0 (arg0 at entry) +0x18.
  The `jalr` at 0x445064 calls xf86memcpy with a0=([a0+12] + [a0+28]), a1=a1+16, a2=?, a3=([a0+12] + [a1+12]), a4=[a0+44], a6=-0x4.
  The `jalr` at 0x445114 calls __glXForceCurrent with a0=a0 at entry (arg0), a1=[a1+4], a2=sp-80, a3=[a0+24], a4=[a1+8]:2, a5=[[a0+28]+6]:2.
  The `jalr` at 0x44512c calls (unknown callee) with a0=[a0+28]+8, a1=?, a2=?, a3=?.
  The `jalr` at 0x445140 calls __glXResetLargeCommandStatus with a0=a0 at entry (arg0), a1=0x1, a2=?, a3=?.
  The `jalr` at 0x445170 calls __glXResetLargeCommandStatus with a0=a0 at entry (arg0), a1=[a0+24], a2=?, a3=([a0+12] + [a1+12]), a4=[a0+44], a6=-0x4.
  The `jalr` at 0x4451d4 calls __glXResetLargeCommandStatus with a0=a0 at entry (arg0), a1=0x349dc, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a0+44], a6=-0x4.
  The `jalr` at 0x445204 calls __glXResetLargeCommandStatus with a0=a0 at entry (arg0), a1=[a1+8]:2, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a0+44], a6=-0x4.
  The `jalr` at 0x44521c calls __glXResetLargeCommandStatus with a0=a0 at entry (arg0), a1=[a0+24], a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a0+44], a6=-0x4.
  The `jalr` at 0x445234 calls __glXResetLargeCommandStatus with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x4452b8 calls (unknown callee) with a0=a1+24, a1=0x0, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a0+44], a6=-0x4.
  The `jalr` at 0x445300 calls __glXRealloc with a0=[a0+28], a1=?, a2=?, a3=?.
  The `jalr` at 0x445328 calls xf86memcpy with a0=?, a1=a1+16, a2=?, a3=?.
  The `jalr` at 0x44535c calls __glXResetLargeCommandStatus with a0=a0 at entry (arg0), a1=-0x4, a2=?, a3=[a0+24], a4=[a1+8]:2, a5=[a0+20]+1.
  The `jalr` at 0x4453c4 calls __glXMalloc with a0=?, a1=?, a2=?, a3=?.
  The `bne` branch at 0x445008 targets 0x4451d0, is taken when at(=([a1+2]:2 << 0x2)) != v1(?), and falls through when at(=([a1+2]:2 << 0x2)) == v1(?).
  The `beq` branch at 0x445014 targets 0x44519c, is taken when v0(=[a0+20]) == 0, and falls through when v0(=[a0+20]) != 0.
  The `bne` branch at 0x445020 targets 0x445200, is taken when a1(=[a1+8]:2) != a0(=[a0+20]+1), and falls through when a1(=[a1+8]:2) == a0(=[a0+20]+1).
  The `bne` branch at 0x445030 targets 0x445218, is taken when a1(=[a0+24]) != v0(=[a1+10]:2), and falls through when a1(=[a0+24]) == v0(=[a1+10]:2).
  The `bne` branch at 0x445048 targets 0x445168, is taken when a2(=[a0+16]) < a3(=([a0+12] + [a1+12])) (unsigned), and falls through when a2(=[a0+16]) >= a3(=([a0+12] + [a1+12])) (unsigned).
  The `bne` branch at 0x44508c targets 0x445148, is taken when a3(=[a0+24]) != a4(=[a1+8]:2), and falls through when a3(=[a0+24]) == a4(=[a1+8]:2).
  The `bne` branch at 0x4450ac targets 0x445354, is taken when v1(?) != a0(?), and falls through when v1(?) == a0(?).
  The `blez` branch at 0x4450bc targets 0x4450e0, is taken when a5(=[[a0+28]+6]:2) <= 0 (signed), and falls through when a5(=[[a0+28]+6]:2) > 0 (signed).
  The `beq` branch at 0x4450c4 targets 0x4450e4, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x4450d8 targets 0x445108 and is always taken.
  The `bne` branch at 0x4450e4 targets 0x4451e4, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `beq` branch at 0x4450ec targets 0x4451e4, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0x44511c targets 0x445230, is taken when v0(=ret(__glXForceCurrent)) == 0, and falls through when v0(=ret(__glXForceCurrent)) != 0.
  The `beq` branch at 0x4451a0 targets 0x445244, is taken when a1(=[a1+8]:2) == v1(=0x1), and falls through when a1(=[a1+8]:2) != v1(=0x1).
  The `beq` branch at 0x4451dc targets 0x44514c and is always taken.
  The `beq` branch at 0x4451f0 targets 0x44514c and is always taken.
  The `beq` branch at 0x445210 targets 0x44514c and is always taken.
  The `beq` branch at 0x445228 targets 0x44514c and is always taken.
  The `beq` branch at 0x44523c targets 0x44514c and is always taken.
  The `blez` branch at 0x445254 targets 0x445270, is taken when a5(=[a1+22]:2) <= 0 (signed), and falls through when a5(=[a1+22]:2) > 0 (signed).
  The `beq` branch at 0x445260 targets 0x445270, is taken when a5(=[a1+22]:2) >= 0xd6 (signed), and falls through when a5(=[a1+22]:2) < 0xd6 (signed).
  The `beq` branch at 0x445268 targets 0x44529c and is always taken.
  The `bne` branch at 0x445274 targets 0x445388, is taken when a5(=[a1+22]:2) < 0x805 (signed), and falls through when a5(=[a1+22]:2) >= 0x805 (signed).
  The `beq` branch at 0x44527c targets 0x445388, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x44529c targets 0x4453e0, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x4452a8 targets 0x445370, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bltz` branch at 0x4452c4 targets 0x445398, is taken when v0(=ret(?)) < 0 (signed), and falls through when v0(=ret(?)) >= 0 (signed).
  The `bne` branch at 0x4452e0 targets 0x4453b0, is taken when t0(?) != t1(?), and falls through when t0(?) == t1(?).
  The `beq` branch at 0x4452f0 targets 0x44531c, is taken when t2(=[a0+32]) >= t3(?) (signed), and falls through when t2(=[a0+32]) < t3(?) (signed).
  The `beq` branch at 0x4452f8 targets 0x4453c0, is taken when a0(=[a0+28]) == 0, and falls through when a0(=[a0+28]) != 0.
  The `beq` branch at 0x44530c targets 0x4453d8, is taken when v0(=ret(__glXRealloc)) == 0, and falls through when v0(=ret(__glXRealloc)) != 0.
  The `beq` branch at 0x44534c targets 0x44514c and is always taken.
  The `beq` branch at 0x445368 targets 0x44514c and is always taken.
  The `beq` branch at 0x445378 targets 0x4452e4, is taken when v0(=[a1+16]) == v1(?), and falls through when v0(=[a1+16]) != v1(?).
  The `beq` branch at 0x445380 targets 0x44514c and is always taken.
  The `beq` branch at 0x445390 targets 0x44514c and is always taken.
  The `beq` branch at 0x4453a8 targets 0x4452e8, is taken when v1(?) == a0(?), and falls through when v1(?) != a0(?).
  The `beq` branch at 0x4453b0 targets 0x44514c and is always taken.
  The `bne` branch at 0x4453d0 targets 0x445314, is taken when v0(=ret(__glXMalloc)) != 0, and falls through when v0(=ret(__glXMalloc)) == 0.
  The `beq` branch at 0x4453d8 targets 0x44514c and is always taken.
  The `beq` branch at 0x4453e8 targets 0x44514c and is always taken.
  The return at 0x445160 has v0 = one of 0x0, 0x10, [sym(__glXBadLargeRequest)], ?, 0xb.
  The return at 0x445194 has v0 = [sym(__glXBadLargeRequest)].
  The return at 0x4451c8 has v0 = [sym(__glXBadLargeRequest)].
  The instructions from 0x4451f8 to 0x4451fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4453b8 to 0x4453bc are not reached by any path from the entry, and their branches are not listed.

- `__glXBindSwapBarrierSGIX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x445400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x445400-0x4455a8 (424 bytes).
  It occupies 424 bytes.
  The `lw` at 0x445418 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x44541c loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x44542c loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x445444 loads 4 bytes from ret(LookupDrawable) +0x10.
  The `lw` at 0x445450 loads 4 bytes from [ret(LookupDrawable)+16] +0x0.
  The `lbu` at 0x445454 loads 1 byte from ret(LookupDrawable) +0x0.
  The `lw` at 0x445464 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  The `lw` at 0x445474 loads 4 bytes from ?.
  2 such `lw` accesses load 4 bytes from sym(__glXSwapGroupRes) +0x0, including `lw` at 0x4454ac, `lw` at 0x44555c.
  The `lw` at 0x4454b8 loads 4 bytes from ret(LookupIDByType) +0x0.
  The `sw` at 0x4454f0 stores 4 bytes to [a0+44] +0x18.
  The `lw` at 0x4454f4 loads 4 bytes from sym(__glXBadDrawable) +0x0.
  The `sw` at 0x44550c stores 4 bytes to ?.
  The `lw` at 0x445518 loads 4 bytes from sym(__glXSwapBarrierRes) +0x0.
  The `sw` at 0x445550 stores 4 bytes to ret(Xalloc) +0x0.
  The `lw` at 0x445564 loads 4 bytes from ret(Xalloc) +0x0.
  The `jalr` at 0x44543c calls LookupDrawable with a0=[a1+12], a1=[a0+44], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x445488 calls (unknown callee) with a0=[[ret(LookupDrawable)+16]], a1=[a1+12], a2=[a1+16], a3=?, a5=sym(__glXActiveScreens).
  The `jalr` at 0x4454a8 calls LookupIDByType with a0=[a1+12], a1=[sym(__glXSwapGroupRes)], a2=?, a3=?.
  The `jalr` at 0x445524 calls AddResource with a0=[a1+12], a1=[sym(__glXSwapBarrierRes)], a2=[[ret(LookupDrawable)+16]], a3=?.
  The `jalr` at 0x445538 calls Xalloc with a0=0x4, a1=?, a2=?, a3=?.
  The `jalr` at 0x445558 calls AddResource with a0=[a1+12], a1=[sym(__glXSwapGroupRes)], a2=ret(Xalloc), a3=?.
  The `jalr` at 0x44556c calls Xfree with a0=ret(Xalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x445598 calls FreeResourceByType with a0=[a1+12], a1=[sym(__glXSwapBarrierRes)], a2=0x0, a3=?.
  The `beq` branch at 0x44544c targets 0x4454e0, is taken when v0(=ret(LookupDrawable)) == 0, and falls through when v0(=ret(LookupDrawable)) != 0.
  The `bne` branch at 0x44545c targets 0x4454e0, is taken when t8(=[ret(LookupDrawable)]:1) != 0, and falls through when t8(=[ret(LookupDrawable)]:1) == 0.
  The `beq` branch at 0x445478 targets 0x4454e4, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x445494 targets 0x445510, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `beq` branch at 0x4454b0 targets 0x445534, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x4454cc targets 0x445508, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x445508 targets 0x4454d4 and is always taken.
  The `beq` branch at 0x445514 targets 0x445590, is taken when a1(=[a1+16]) == 0, and falls through when a1(=[a1+16]) != 0.
  The `beq` branch at 0x44552c targets 0x4454a0 and is always taken.
  The `bnel` branch at 0x445560 targets 0x4454bc, is taken when v0(=ret(AddResource)) != 0, and falls through when v0(=ret(AddResource)) == 0; its branch-likely delay slot `lw a2,0(s0)` at 0x445564 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x4455a0 targets 0x4454a0 and is always taken.
  The return at 0x4454d8 has v0 = ret(?).
  The return at 0x445500 has v0 = [sym(__glXBadDrawable)].
  The return at 0x445588 has v0 = 0xb.

- `__glXQueryMaxSwapBarriersSGIX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4455c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4455c0-0x44565c (156 bytes).
  It occupies 156 bytes.
  The `lw` at 0x4455d4 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x4455e0 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  The `lw` at 0x4455f0 loads 4 bytes from ?.
  The `lw` at 0x4455f8 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x445634 loads 4 bytes from [a0+44] +0x1c.
  The `jalr` at 0x445608 calls (unknown callee) with a0=[a1+12], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?, a4=[a1+12].
  The `jalr` at 0x44563c calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-64, a3=?, a5=[[a0+44]+28], a6=0x1.
  The `beq` branch at 0x4455fc targets 0x445618, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x445610 targets 0x44561c and is always taken.
  The return at 0x445654 has v0 = 0x0.

- `__glXJoinSwapGroupSGIX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x445680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x445680-0x44586c (492 bytes).
  It occupies 492 bytes.
  The `lw` at 0x4456a0 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x4456a8 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x4456ac loads 4 bytes from a0 (arg0 at entry) +0x2c.
  2 such `lbu` accesses load 1 byte from ret(LookupDrawable) +0x0, including `lbu` at 0x4456bc, `lbu` at 0x445764.
  2 such `sw` accesses store 4 bytes to [a0+44] +0x18, including `sw` at 0x4456e0, `sw` at 0x445780.
  3 such `lw` accesses load 4 bytes from sym(__glXBadDrawable) +0x0, including `lw` at 0x4456e4, `lw` at 0x44572c, `lw` at 0x445788.
  4 such `lw` accesses load 4 bytes from sym(__glXSwapGroupRes) +0x0, including `lw` at 0x445744, `lw` at 0x44579c, `lw` at 0x445800.
  The `lw` at 0x4457a8 loads 4 bytes from ?.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x4457d4, `sw` at 0x445820.
  2 such `sw` accesses store 4 bytes to ret(Xalloc) +0x0, including `sw` at 0x4457f4, `sw` at 0x445840.
  The `jalr` at 0x4456b4 calls LookupDrawable with a0=[a1+12], a1=[a0+44], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x445740 calls LookupIDByType with a0=[a1+12], a1=[sym(__glXSwapGroupRes)], a2=?, a3=?.
  The `jalr` at 0x44575c calls LookupDrawable with a0=[a1+16], a1=[a0+44], a2=?, a3=?.
  The `jalr` at 0x445798 calls LookupIDByType with a0=[a1+16], a1=[sym(__glXSwapGroupRes)], a2=?, a3=[a0+44], a5=0x2, a6=[ret(LookupDrawable)]:1, a7=sym(__glXBadDrawable).
  The `jalr` at 0x4457dc calls Xalloc with a0=0x4, a1=?, a2=?, a3=?.
  The `jalr` at 0x4457fc calls AddResource with a0=[a1+12], a1=[sym(__glXSwapGroupRes)], a2=ret(Xalloc), a3=?.
  The `jalr` at 0x44580c calls Xfree with a0=ret(Xalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x445828 calls Xalloc with a0=0x4, a1=ret(LookupIDByType), a2=?, a3=?.
  The `jalr` at 0x445848 calls AddResource with a0=[a1+16], a1=[sym(__glXSwapGroupRes)], a2=ret(Xalloc), a3=?.
  The `jalr` at 0x44585c calls Xfree with a0=ret(Xalloc), a1=ret(Xalloc), a2=?, a3=?.
  The `beq` branch at 0x4456c0 targets 0x445718, is taken when a0(=[ret(LookupDrawable)]:1) == 0, and falls through when a0(=[ret(LookupDrawable)]:1) != 0.
  The `beq` branch at 0x4456c8 targets 0x445718, is taken when a0(=[ret(LookupDrawable)]:1) == v1(=0x2), and falls through when a0(=[ret(LookupDrawable)]:1) != v1(=0x2).
  The `beq` branch at 0x445718 targets 0x445734, is taken when s0(=[a1+16]) == 0, and falls through when s0(=[a1+16]) != 0.
  The `beq` branch at 0x445720 targets 0x445730, is taken when s1(=[a1+12]) == s0(=[a1+16]), and falls through when s1(=[a1+12]) != s0(=[a1+16]).
  The `beq` branch at 0x445728 targets 0x445700 and is always taken.
  The `beq` branch at 0x445748 targets 0x4457d8, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x445750 targets 0x4457b4, is taken when s0(=[a1+16]) == 0, and falls through when s0(=[a1+16]) != 0.
  The `beq` branch at 0x445770 targets 0x44578c, is taken when a6(=[ret(LookupDrawable)]:1) == 0, and falls through when a6(=[ret(LookupDrawable)]:1) != 0.
  The `beq` branch at 0x445778 targets 0x445790, is taken when a6(=[ret(LookupDrawable)]:1) == a5(=0x2), and falls through when a6(=[ret(LookupDrawable)]:1) != a5(=0x2).
  The `beq` branch at 0x445784 targets 0x445700 and is always taken.
  The `beq` branch at 0x4457a0 targets 0x445824, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x4457ac targets 0x44581c, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x4457b4 targets 0x4457c4, is taken when s1(=[a1+12]) != s0(=[a1+16]), and falls through when s1(=[a1+12]) == s0(=[a1+16]).
  The `beq` branch at 0x4457bc targets 0x445704 and is always taken.
  The `beq` branch at 0x4457d0 targets 0x445700 and is always taken.
  The `bne` branch at 0x445804 targets 0x445750, is taken when v0(=ret(AddResource)) != 0, and falls through when v0(=ret(AddResource)) == 0.
  The `beq` branch at 0x445814 targets 0x445700 and is always taken.
  The `beq` branch at 0x44581c targets 0x4457b4 and is always taken.
  The `bne` branch at 0x445850 targets 0x4457a8, is taken when v0(=ret(AddResource)) != 0, and falls through when v0(=ret(AddResource)) == 0.
  The `beq` branch at 0x445864 targets 0x445700 and is always taken.
  The return at 0x4456ec has v0 = [sym(__glXBadDrawable)].
  The return at 0x445710 has v0 = one of ?, 0x0.
  The instructions from 0x4456f4 to 0x4456fc are not reached by any path from the entry, and their branches are not listed.

- `glxQueryHyperpipeNetworkSGIX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x445880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x445880-0x445984 (260 bytes).
  It occupies 260 bytes.
  The `lw` at 0x445888 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x4458a0 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  The `lw` at 0x4458b0 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x4458bc loads 4 bytes from ?.
  The `lw` at 0x445900 loads 4 bytes from [a0+44] +0x1c.
  The `lw` at 0x44592c loads 4 bytes from [a0+44] +0x10.
  The `jalr` at 0x4458d4 calls (unknown callee) with a0=[a1+12], a1=sp-80, a2=[a1+12], a3=a3 at entry (arg3), a4=0x0.
  The `jalr` at 0x44595c calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-72, a3=?.
  The `jalr` at 0x445974 calls WriteToClient with a0=[a0+44], a1=?, a2=?, a3=?.
  The `beq` branch at 0x4458c4 targets 0x4458e8, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x4458e0 targets 0x4458ec and is always taken.
  The `beq` branch at 0x445930 targets 0x445950, is taken when t0(=[[a0+44]+16]) == 0, and falls through when t0(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x44597c targets 0x44593c and is always taken.
  The return at 0x445948 has v0 = 0x0.

- `glxDestroyHyperpipeConfigSGIX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4459c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4459c0-0x445a78 (184 bytes).
  It occupies 184 bytes.
  The `lw` at 0x4459d4 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x4459e0 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  The `lw` at 0x4459f0 loads 4 bytes from ?.
  The `lw` at 0x4459f8 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x445a10 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x445a28 loads 4 bytes from [a0+44] +0x1c.
  The `lw` at 0x445a3c loads 4 bytes from [a0+44] +0x10.
  The `jalr` at 0x445a14 calls (unknown callee) with a0=[a1+12], a1=[a1+16], a2=a2 at entry (arg2), a3=?, a4=[a1+12], a5=a1 at entry (arg1).
  The `jalr` at 0x445a68 calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-64, a3=?, a5=[[a0+44]+16], a6=[[a0+44]+28], a7=0x1.
  The `beq` branch at 0x445a04 targets 0x445a20, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x445a40 targets 0x445a5c, is taken when a5(=[[a0+44]+16]) == 0, and falls through when a5(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x445a70 targets 0x445a48 and is always taken.
  The return at 0x445a54 has v0 = 0x0.

- `glxQueryHyperpipeConfigSGIX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x445a80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x445a80-0x445b98 (280 bytes).
  It occupies 280 bytes.
  The `lw` at 0x445a88 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x445aa0 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  The `lw` at 0x445ab0 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x445abc loads 4 bytes from ?.
  The `lw` at 0x445ad8 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x445b14 loads 4 bytes from [a0+44] +0x1c.
  The `lw` at 0x445b40 loads 4 bytes from [a0+44] +0x10.
  The `jalr` at 0x445adc calls (unknown callee) with a0=[a1+12], a1=[a1+16], a2=sp-80, a3=a3 at entry (arg3), a5=0x0, a6=[a1+12], a7=a1 at entry (arg1).
  The `jalr` at 0x445b70 calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-72, a3=?, a7=[[a0+44]+16].
  The `jalr` at 0x445b88 calls WriteToClient with a0=[a0+44], a1=?, a2=?, a3=?.
  The `beq` branch at 0x445ac8 targets 0x445af0, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x445ae8 targets 0x445b00 and is always taken.
  The `beq` branch at 0x445b44 targets 0x445b64, is taken when a7(=[[a0+44]+16]) == 0, and falls through when a7(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x445b90 targets 0x445b50 and is always taken.
  The return at 0x445b5c has v0 = 0x0.

- `glxHyperpipeConfigSGIX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x445bc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x445bc0-0x445cc4 (260 bytes).
  It occupies 260 bytes.
  The `lw` at 0x445bd8 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x445bdc loads 4 bytes from sym(__glXActiveScreens) +0x0.
  The `lw` at 0x445be4 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x445bfc loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x445c04 loads 4 bytes from a1 (arg1 at entry) +0x14.
  The `lw` at 0x445c10 loads 4 bytes from ?.
  The `lw` at 0x445c54 loads 4 bytes from [a0+44] +0x1c.
  The `lw` at 0x445c88 loads 4 bytes from [a0+44] +0x10.
  The `jalr` at 0x445c34 calls (unknown callee) with a0=[a1+12], a1=[a1+20], a2=sp-60, a3=sp-64, a4=a1+32, a6=a1 at entry (arg1), a7=[a1+12].
  The `jalr` at 0x445cb4 calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-56, a3=?.
  The `beq` branch at 0x445c18 targets 0x445c44, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x445c8c targets 0x445ca8, is taken when t2(=[[a0+44]+16]) == 0, and falls through when t2(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x445cbc targets 0x445c94 and is always taken.
  The return at 0x445ca0 has v0 = 0x0.

- `__glXQueryBoardNumSGIX` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x445d00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x445d00-0x445f3c (572 bytes).
  It occupies 572 bytes.
  The `lw` at 0x445d18 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x445dc0 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x445dcc loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x445e94 loads 4 bytes from ?.
  The `jalr` at 0x445d30 calls xf86open with a0=0x460000, a1=0x802, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x445d5c calls fcntl with a0=ret(xf86open), a1=0x2, a2=0x5, a3=?.
  The `jalr` at 0x445d80 calls xf86ioctl with a0=[0x472eb8], a1=0x65, a2=0x0, a3=?.
  The `jalr` at 0x445d94 calls xf86malloc with a0=0x28, a1=?, a2=?, a3=?.
  The `jalr` at 0x445dac calls xf86bzero with a0=?, a1=0x28, a2=?, a3=?.
  The `jalr` at 0x445dc8 calls xf86sprintf with a0=sp-384, a1=0x472ee0, a2=[a1+12], a3=[a1+16].
  The `jalr` at 0x445e00 calls xf86ioctl with a0=[0x472eb8], a1=0x66, a2=sp-128, a3=?, a4=[0x472ebc].
  The `jalr` at 0x445e18 calls xf86strcmp with a0=sp-384, a1=[0x472ebc]+16, a2=?, a3=?.
  The `jalr` at 0x445e48 calls xf86perror with a0=0x460088, a1=?, a2=?, a3=?.
  The `jalr` at 0x445e74 calls xf86close with a0=[0x472eb8], a1=?, a2=?, a3=?.
  The `jalr` at 0x445e9c calls WriteToClient with a0=?, a1=0x20, a2=sp-112, a3=?, a4=0x1.
  The `jalr` at 0x445ec8 calls xf86perror with a0=0x460010, a1=?, a2=?, a3=?.
  The `jalr` at 0x445ee4 calls xf86perror with a0=0x460010, a1=?, a2=?, a3=?.
  The `jalr` at 0x445f08 calls ErrorF with a0=0x460038, a1=?, a2=?, a3=?.
  The `jalr` at 0x445f20 calls xf86perror with a0=0x460070, a1=?, a2=?, a3=?.
  The `jalr` at 0x445f2c calls xf86exit with a0=0x1, a1=?, a2=?, a3=?.
  The `bltz` branch at 0x445d48 targets 0x445ec0, is taken when v0(=ret(xf86open)) < 0 (signed), and falls through when v0(=ret(xf86open)) >= 0 (signed).
  The `bltz` branch at 0x445d64 targets 0x445edc, is taken when v0(=ret(fcntl)) < 0 (signed), and falls through when v0(=ret(fcntl)) >= 0 (signed).
  The `beq` branch at 0x445d88 targets 0x445f00, is taken when v0(=ret(xf86ioctl)) == 0, and falls through when v0(=ret(xf86ioctl)) != 0.
  The `beq` branch at 0x445da0 targets 0x445f18, is taken when v0(=ret(xf86malloc)) == 0, and falls through when v0(=ret(xf86malloc)) != 0.
  The `beq` branch at 0x445dd0 targets 0x445e50, is taken when s1(=ret(xf86ioctl)) == 0, and falls through when s1(=ret(xf86ioctl)) != 0.
  The `beq` branch at 0x445e08 targets 0x445e40, is taken when v0(=ret(xf86ioctl)) == s4(=-0x1), and falls through when v0(=ret(xf86ioctl)) != s4(=-0x1).
  The `beq` branch at 0x445e20 targets 0x445eb8, is taken when v0(=ret(xf86strcmp)) == 0, and falls through when v0(=ret(xf86strcmp)) != 0.
  The `bnel` branch at 0x445e2c targets 0x445de8, is taken when s0(?) != s1(=ret(xf86ioctl)), and falls through when s0(?) == s1(=ret(xf86ioctl)); its branch-likely delay slot `sw s0,256(sp)` at 0x445e30 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x445e34 targets 0x445e54 and is always taken.
  The `bltz` branch at 0x445e68 targets 0x445e7c, is taken when a0(=[0x472eb8]) < 0 (signed), and falls through when a0(=[0x472eb8]) >= 0 (signed).
  The `beq` branch at 0x445eb8 targets 0x445e50 and is always taken.
  The `beq` branch at 0x445ed4 targets 0x445e50 and is always taken.
  The `beq` branch at 0x445eec targets 0x445e50 and is always taken.
  The `beq` branch at 0x445f10 targets 0x445e54 and is always taken.
  The `beq` branch at 0x445f34 targets 0x445da8 and is always taken.
  The return at 0x445eb0 has v0 = 0x0.
  The instructions from 0x445e3c to 0x445e3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x445ef4 to 0x445efc are not reached by any path from the entry, and their branches are not listed.

- `__glXVendorPrivate` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x445f40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x445f40-0x4460c0 (384 bytes).
  It occupies 384 bytes.
  The `lw` at 0x445f44 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x445f7c loads 4 bytes from table(0x4600b8) +0x0.
  The `lw` at 0x445f9c loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `sw` at 0x445fa4 stores 4 bytes to [a0+44] +0x18.
  The `lw` at 0x445fb0 loads 4 bytes from sym(__glXUnsupportedPrivateRequest) +0x0.
  The `lw` at 0x445fdc loads 4 bytes from (sym(__glXVendorPrivTable_EXT) + ([a1+4] << 0x2)) -0x2c.
  The `jalr` at 0x445fe0 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?, a4=[a1+4].
  The `jalr` at 0x446008 calls __glXCreateContextWithConfigSGIX with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=entry(0x4600b8), a3=a3 at entry (arg3), a4=[a1+4].
  The `jalr` at 0x446020 calls __glXBindSwapBarrierSGIX with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=entry(0x4600b8), a3=a3 at entry (arg3), a4=[a1+4].
  The `jalr` at 0x446048 calls __glXJoinSwapGroupSGIX with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=entry(0x4600b8), a3=a3 at entry (arg3), a4=[a1+4].
  The `jalr` at 0x446064 calls __glXChangeDrawableAttributesSGIX with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=entry(0x4600b8), a3=a3 at entry (arg3), a4=[a1+4].
  The `jalr` at 0x446088 calls __glXDestroyGLXPbufferSGIX with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=entry(0x4600b8), a3=a3 at entry (arg3), a4=[a1+4].
  The `jalr` at 0x4460a4 calls __glXCreateGLXPixmapWithConfigSGIX with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=entry(0x4600b8), a3=a3 at entry (arg3), a4=[a1+4].
  The `beq` branch at 0x445f74 targets 0x445f88, is taken when v1(=[a1+4]-65536) >= 0xd (unsigned), and falls through when v1(=[a1+4]-65536) < 0xd (unsigned).
  The `bne` branch at 0x445f8c targets 0x445f9c, is taken when a4(=[a1+4]) < 0xb (signed), and falls through when a4(=[a1+4]) >= 0xb (signed).
  The `bne` branch at 0x445f94 targets 0x445fd0, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x446014 targets 0x445fc0 and is always taken.
  The `beq` branch at 0x44602c targets 0x445fc0 and is always taken.
  The `beq` branch at 0x446054 targets 0x445fc0 and is always taken.
  The `beq` branch at 0x446070 targets 0x445fc0 and is always taken.
  The `beq` branch at 0x446094 targets 0x445fc0 and is always taken.
  The `beq` branch at 0x4460b0 targets 0x445fc0 and is always taken.
  The `beq` branch at 0x4460b8 targets 0x445fc0 and is always taken.
  The return at 0x445fac has v0 = [sym(__glXUnsupportedPrivateRequest)].
  The return at 0x445fc8 has v0 = one of ret(__glXCreateContextWithConfigSGIX), ret(__glXBindSwapBarrierSGIX), ret(__glXJoinSwapGroupSGIX), ret(__glXChangeDrawableAttributesSGIX), ret(__glXDestroyGLXPbufferSGIX), ret(__glXCreateGLXPixmapWithConfigSGIX), 0x0.
  The return at 0x445ff4 has v0 = 0x0.
  The instructions from 0x445fb4 to 0x445fbc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x445ffc to 0x445ffc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x446034 to 0x44603c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x446078 to 0x44607c are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x445f80 uses the jump table at 0x4600b8 with targets 0x4460b8, 0x445f88, 0x445f88, 0x445f88, 0x445f88, 0x446000, 0x44609c, 0x445f88, 0x446080, 0x44605c, 0x445f88, 0x446040, 0x44601c.

- `__glXVendorPrivateWithReply` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4460c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4460c0-0x446318 (600 bytes).
  It occupies 600 bytes.
  The `lw` at 0x4460c4 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x4461e4 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `sw` at 0x4461f0 stores 4 bytes to [a0+44] +0x18.
  The `lw` at 0x4461fc loads 4 bytes from sym(__glXUnsupportedPrivateRequest) +0x0.
  The `lw` at 0x446254 loads 4 bytes from (sym(__glXVendorPrivTable_EXT) + ([a1+4] << 0x2)) -0x2c.
  The `jalr` at 0x446134 calls __glXQueryBoardNumSGIX with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x10011, a3=a3 at entry (arg3), a4=[a1+4].
  The `jalr` at 0x446188 calls __glXGetDrawableAttributesSGIX with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a1+4], a5=0x1000a.
  The `jalr` at 0x4461bc calls __glXMakeCurrentRead with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a1+4], a5=0x10001, a7=0x400.
  The `jalr` at 0x446238 calls glxQueryHyperpipeConfigSGIX with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=a3 at entry (arg3), a4=[a1+4], a5=0x1000f.
  The `jalr` at 0x446258 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=a3 at entry (arg3), a4=[a1+4].
  The `jalr` at 0x446280 calls glxQueryHyperpipeNetworkSGIX with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=a3 at entry (arg3), a4=[a1+4], a5=0x1000f.
  The `jalr` at 0x44629c calls __glXCreateGLXPbufferSGIX with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a1+4], a5=0x1000a.
  The `jalr` at 0x4462b8 calls glxDestroyHyperpipeConfigSGIX with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x10011, a3=a3 at entry (arg3), a4=[a1+4].
  The `jalr` at 0x4462cc calls __glXQueryMaxSwapBarriersSGIX with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a1+4], a5=0x1000d.
  The `jalr` at 0x4462e0 calls __glXGetFBConfigsSGIX with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a1+4], a5=0x10004.
  The `jalr` at 0x4462f4 calls glxHyperpipeConfigSGIX with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x10011, a3=a3 at entry (arg3), a4=[a1+4], a5=0x10010.
  The `jalr` at 0x446308 calls __glXQueryContextInfoEXT with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a1+4], a5=0x10001, a7=0x400.
  The `bne` branch at 0x4460e0 targets 0x446144, is taken when a4(=[a1+4]) < a5(=0x1000d) (signed), and falls through when a4(=[a1+4]) >= a5(=0x1000d) (signed).
  The `beq` branch at 0x4460ec targets 0x4462c8, is taken when a5(=0x1000d) >= a4(=[a1+4]) (signed), and falls through when a5(=0x1000d) < a4(=[a1+4]) (signed).
  The `bne` branch at 0x446100 targets 0x446214, is taken when a4(=[a1+4]) < a5(=0x10010) (signed), and falls through when a4(=[a1+4]) >= a5(=0x10010) (signed).
  The `beq` branch at 0x44610c targets 0x4462f0, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bne` branch at 0x446120 targets 0x4462ac, is taken when a4(=[a1+4]) < a5(=0x10012) (signed), and falls through when a4(=[a1+4]) >= a5(=0x10012) (signed).
  The `bne` branch at 0x446128 targets 0x4461d4, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x44613c targets 0x446200 and is always taken.
  The `bne` branch at 0x446150 targets 0x446198, is taken when a4(=[a1+4]) < a5(=0x10004) (signed), and falls through when a4(=[a1+4]) >= a5(=0x10004) (signed).
  The `beq` branch at 0x446160 targets 0x4462dc, is taken when a5(=0x10004) >= a4(=[a1+4]) (signed), and falls through when a5(=0x10004) < a4(=[a1+4]) (signed).
  The `bne` branch at 0x446174 targets 0x446290, is taken when a4(=[a1+4]) < a5(=0x1000a) (signed), and falls through when a4(=[a1+4]) >= a5(=0x1000a) (signed).
  The `bne` branch at 0x44617c targets 0x4461d4, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x446190 targets 0x446200 and is always taken.
  The `bne` branch at 0x4461a4 targets 0x4461cc, is taken when a4(=[a1+4]) < a5(=0x10001) (signed), and falls through when a4(=[a1+4]) >= a5(=0x10001) (signed).
  The `bne` branch at 0x4461b0 targets 0x4461d4, is taken when a5(=0x10001) < a4(=[a1+4]) (signed), and falls through when a5(=0x10001) >= a4(=[a1+4]) (signed).
  The `beq` branch at 0x4461c4 targets 0x446200 and is always taken.
  The `beq` branch at 0x4461cc targets 0x446304, is taken when a4(=[a1+4]) == a7(=0x400), and falls through when a4(=[a1+4]) != a7(=0x400).
  The `bne` branch at 0x4461d4 targets 0x4461e0, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x4461dc targets 0x446248, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x446220 targets 0x446270, is taken when a4(=[a1+4]) < a5(=0x1000f) (signed), and falls through when a4(=[a1+4]) >= a5(=0x1000f) (signed).
  The `bne` branch at 0x44622c targets 0x4461d4, is taken when a5(=0x1000f) < a4(=[a1+4]) (signed), and falls through when a5(=0x1000f) >= a4(=[a1+4]) (signed).
  The `beq` branch at 0x446240 targets 0x446200 and is always taken.
  The `bne` branch at 0x446274 targets 0x4461d4, is taken when a4(=[a1+4]) != at(=0x1000e), and falls through when a4(=[a1+4]) == at(=0x1000e).
  The `beq` branch at 0x446288 targets 0x446200 and is always taken.
  The `bne` branch at 0x446290 targets 0x4461d4, is taken when a4(=[a1+4]) != v1(=0x10007), and falls through when a4(=[a1+4]) == v1(=0x10007).
  The `beq` branch at 0x4462a4 targets 0x446200 and is always taken.
  The `bne` branch at 0x4462ac targets 0x4461d4, is taken when a4(=[a1+4]) != a2(=0x10011), and falls through when a4(=[a1+4]) == a2(=0x10011).
  The `beq` branch at 0x4462c0 targets 0x446200 and is always taken.
  The `beq` branch at 0x4462d4 targets 0x446200 and is always taken.
  The `beq` branch at 0x4462e8 targets 0x446200 and is always taken.
  The `beq` branch at 0x4462fc targets 0x446200 and is always taken.
  The `beq` branch at 0x446310 targets 0x446200 and is always taken.
  The return at 0x4461f8 has v0 = [sym(__glXUnsupportedPrivateRequest)].
  The return at 0x44620c has v0 = one of ret(__glXQueryBoardNumSGIX), ret(__glXGetDrawableAttributesSGIX), ret(__glXMakeCurrentRead), ret(glxQueryHyperpipeConfigSGIX), ret(glxQueryHyperpipeNetworkSGIX), ret(__glXCreateGLXPbufferSGIX), ret(glxDestroyHyperpipeConfigSGIX), ret(__glXQueryMaxSwapBarriersSGIX), ret(__glXGetFBConfigsSGIX), ret(glxHyperpipeConfigSGIX), ret(__glXQueryContextInfoEXT).
  The return at 0x446268 has v0 = ret(?).

- `__glXQueryExtensionsString` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x446340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x446340-0x4464b4 (372 bytes).
  It occupies 372 bytes.
  The `lw` at 0x446344 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x446354 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x44636c loads 4 bytes from sym(screenInfo) +0x30.
  The `sw` at 0x446380 stores 4 bytes to [a0+44] +0x18.
  The `lw` at 0x446398 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  The `lw` at 0x4463ac loads 4 bytes from ?.
  The `lw` at 0x4463c4 loads 4 bytes from [a0+44] +0x1c.
  The `lw` at 0x446438 loads 4 bytes from [a0+44] +0x10.
  The `jalr` at 0x4463b0 calls xf86strlen with a0=?, a1=?, a2=[a1+4], a3=a3 at entry (arg3).
  The `jalr` at 0x4463f8 calls __glXMalloc with a0=?, a1=?, a2=ret(xf86strlen)+1, a3=[[a0+44]+28].
  The `jalr` at 0x446430 calls xf86strncpy with a0=ret(__glXMalloc), a1=?, a2=?, a3=?, a5=0xb.
  The `jalr` at 0x44644c calls __glXSwapQueryExtensionsStringReply with a0=[a0+44], a1=sp-96, a2=?, a3=?.
  The `jalr` at 0x446458 calls __glXFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x44648c calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-96, a3=?.
  The `jalr` at 0x4464a4 calls WriteToClient with a0=[a0+44], a1=?, a2=?, a3=?.
  The `bltz` branch at 0x446360 targets 0x44637c, is taken when a2(=[a1+4]) < 0 (signed), and falls through when a2(=[a1+4]) >= 0 (signed).
  The `bne` branch at 0x446374 targets 0x446390, is taken when a2(=[a1+4]) < v1(=[sym(screenInfo)+48]) (signed), and falls through when a2(=[a1+4]) >= v1(=[sym(screenInfo)+48]) (signed).
  The `bne` branch at 0x446404 targets 0x446424, is taken when v0(=ret(__glXMalloc)) != 0, and falls through when v0(=ret(__glXMalloc)) == 0.
  The `beq` branch at 0x44643c targets 0x446480, is taken when a2(=[[a0+44]+16]) == 0, and falls through when a2(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x4464ac targets 0x446458 and is always taken.
  The return at 0x446388 has v0 = 0x2.
  The return at 0x44641c has v0 = 0xb.
  The return at 0x446470 has v0 = 0x0.
  The instructions from 0x446478 to 0x44647c are not reached by any path from the entry, and their branches are not listed.

- `__glXQueryServerString` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4464c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4464c0-0x4466b4 (500 bytes).
  It occupies 500 bytes.
  The `lw` at 0x4464c4 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x4464c8 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x4464d8 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x4464f0 loads 4 bytes from sym(screenInfo) +0x30.
  The `lw` at 0x446540 loads 4 bytes from [a0+44] +0x10.
  The `sw` at 0x44658c stores 4 bytes to [a0+44] +0x18.
  3 such `lw` accesses load 4 bytes from sym(__glXActiveScreens) +0x0, including `lw` at 0x4465a4, `lw` at 0x4465cc, `lw` at 0x44665c.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4465b4, `lw` at 0x4465dc, `lw` at 0x44666c.
  The `lw` at 0x446600 loads 4 bytes from [a0+44] +0x1c.
  The `jalr` at 0x446538 calls xf86strncpy with a0=ret(Xalloc), a1=?, a2=?, a3=?, a5=0xb.
  The `jalr` at 0x446554 calls __glXSwapQueryServerStringReply with a0=[a0+44], a1=sp-96, a2=?, a3=?.
  The `jalr` at 0x446560 calls __glXFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4465e8 calls xf86strlen with a0=?, a1=a1 at entry (arg1), a2=?, a3=?, a5=[a1+4].
  The `jalr` at 0x446638 calls Xalloc with a0=?, a1=?, a2=ret(xf86strlen)+1, a3=[[a0+44]+28].
  The `jalr` at 0x44668c calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-96, a3=?.
  The `jalr` at 0x4466a4 calls WriteToClient with a0=[a0+44], a1=?, a2=?, a3=?.
  The `bltz` branch at 0x4464e4 targets 0x446584, is taken when a5(=[a1+4]) < 0 (signed), and falls through when a5(=[a1+4]) >= 0 (signed).
  The `beq` branch at 0x4464f8 targets 0x446584, is taken when a5(=[a1+4]) >= v0(=[sym(screenInfo)+48]) (signed), and falls through when a5(=[a1+4]) < v0(=[sym(screenInfo)+48]) (signed).
  The `beq` branch at 0x446504 targets 0x4465c0, is taken when a2(=[a1+8]) == v1(=0x1), and falls through when a2(=[a1+8]) != v1(=0x1).
  The `beq` branch at 0x44650c targets 0x446654, is taken when a2(=[a1+8]) == a0(=0x2), and falls through when a2(=[a1+8]) != a0(=0x2).
  The `beq` branch at 0x446514 targets 0x44659c, is taken when a2(=[a1+8]) == a6(=0x3), and falls through when a2(=[a1+8]) != a6(=0x3).
  The `beq` branch at 0x446544 targets 0x446680, is taken when a1(=[[a0+44]+16]) == 0, and falls through when a1(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x4465b8 targets 0x4465e4 and is always taken.
  The `bne` branch at 0x446644 targets 0x44652c, is taken when v0(=ret(Xalloc)) != 0, and falls through when v0(=ret(Xalloc)) == 0.
  The `beq` branch at 0x44664c targets 0x44656c and is always taken.
  The `beq` branch at 0x446670 targets 0x4465e4 and is always taken.
  The `beq` branch at 0x4466ac targets 0x446560 and is always taken.
  The return at 0x446524 has v0 = 0x2.
  The return at 0x44657c has v0 = one of 0x0, 0xb.
  The return at 0x446594 has v0 = 0x2.
  The instructions from 0x446678 to 0x44667c are not reached by any path from the entry, and their branches are not listed.

- `__glXClientInfo` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4466c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4466c0-0x446734 (116 bytes).
  It occupies 116 bytes.
  The `lw` at 0x4466c4 loads 4 bytes from a0 (arg0 at entry) +0x38.
  The `lw` at 0x4466d8 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `sw` at 0x4466e0 stores 4 bytes to a0 (arg0 at entry) +0x30.
  The `lw` at 0x4466e8 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `sw` at 0x4466f8 stores 4 bytes to a0 (arg0 at entry) +0x34.
  The `sw` at 0x446720 stores 4 bytes to a0 (arg0 at entry) +0x38.
  The `jalr` at 0x446700 calls __glXFree with a0=[a0+56], a1=a1 at entry (arg1), a2=[a1+4], a3=[a0+56].
  The `jalr` at 0x44670c calls xf86strdup with a0=a1+16, a1=?, a2=?, a3=?.
  The `beq` branch at 0x4466f4 targets 0x446708, is taken when a3(=[a0+56]) == 0, and falls through when a3(=[a0+56]) != 0.
  The return at 0x44672c has v0 = 0x0.

- `__glXGetFBConfigs` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x446740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x446740-0x446c00 (1216 bytes).
  It occupies 1216 bytes.
  The `lw` at 0x446758 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x44675c loads 4 bytes from sym(screenInfo) +0x30.
  The `lw` at 0x446768 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x446790 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  38 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44679c, `lw` at 0x4467b4, `lw` at 0x446884.
  The `lw` at 0x4467ec loads 4 bytes from [a0+44] +0x1c.
  2 such `lw` accesses load 4 bytes from [a0+44] +0x10, including `lw` at 0x4467f8, `lw` at 0x446af8.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x446910, `lbu` at 0x446920.
  10 such `sb` accesses store 1 byte to ?, including `sb` at 0x446b2c, `sb` at 0x446b30, `sb` at 0x446b48.
  8 such `lb` accesses load 1 byte from ?, including `lb` at 0x446b34, `lb` at 0x446b38, `lb` at 0x446b3c.
  The `sw` at 0x446bf0 stores 4 bytes to [a0+44] +0x18.
  The `jalr` at 0x44687c calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-416, a3=?, a4=[[a0+44]+28].
  The `jalr` at 0x446b90 calls WriteToClient with a0=[a0+44], a1=0x118, a2=sp-384, a3=?.
  The `bne` branch at 0x446784 targets 0x446be4, is taken when v0(=[sym(screenInfo)+48]) < at(=[a1+4]) (unsigned), and falls through when v0(=[sym(screenInfo)+48]) >= at(=[a1+4]) (unsigned).
  The `beq` branch at 0x446804 targets 0x44686c, is taken when a1(=[[a0+44]+16]) == 0, and falls through when a1(=[[a0+44]+16]) != 0.
  The `blez` branch at 0x4468a4 targets 0x446bac, is taken when t1(?) <= 0 (signed), and falls through when t1(?) > 0 (signed).
  The `beq` branch at 0x446b00 targets 0x446b84, is taken when v0(=[[a0+44]+16]) == 0, and falls through when v0(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x446b24 targets 0x446b54 and is always taken.
  The `bne` branch at 0x446b74 targets 0x446b2c, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x446ba4 targets 0x4468d0, is taken when s3(?) < a7(?) (signed), and falls through when s3(?) >= a7(?) (signed).
  The return at 0x446bdc has v0 = 0x0.
  The return at 0x446bf8 has v0 = 0x2.

- `__glXCreatePixmap` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x446c00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x446c00-0x446c4c (76 bytes).
  It occupies 76 bytes.
  The `lw` at 0x446c1c loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x446c20 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x446c24 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x446c38 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `bgezall` at 0x446c34 calls __glXCreateGLXPixmap2 [0x4430c0] with a0=a0 at entry (arg0), a1=[a1+4], a2=0x0, a3=[a1+8], a4=[a1+12], a5=[a1+16], a6=0x32d9c.
  The return at 0x446c44 has v0 = ret(__glXCreateGLXPixmap2).

- `__glXDestroyPixmap` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x446c80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x446c80-0x446d08 (136 bytes).
  It occupies 136 bytes.
  The `lw` at 0x446c98 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x446c9c loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x446cb8 loads 4 bytes from sym(__glXPixmapRes) +0x0.
  The `sw` at 0x446cd4 stores 4 bytes to [a0+44] +0x18.
  The `lw` at 0x446ce0 loads 4 bytes from sym(__glXBadPixmap) +0x0.
  The `jalr` at 0x446cb4 calls LookupIDByType with a0=[a1+4], a1=[sym(__glXPixmapRes)], a2=0x32d1c, a3=a3 at entry (arg3).
  The `jalr` at 0x446cec calls FreeResource with a0=[a1+4], a1=0x0, a2=?, a3=?.
  The `bne` branch at 0x446cbc targets 0x446ce4, is taken when v0(=ret(LookupIDByType)) != 0, and falls through when v0(=ret(LookupIDByType)) == 0.
  The return at 0x446cdc has v0 = [sym(__glXBadPixmap)].
  The return at 0x446d00 has v0 = 0x0.

- `__glXCreateNewContext` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x446d40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x446d40-0x446d94 (84 bytes).
  It occupies 84 bytes.
  The `lw` at 0x446d5c loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x446d60 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x446d64 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x446d68 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x446d6c loads 4 bytes from a1 (arg1 at entry) +0x14.
  The `lbu` at 0x446d80 loads 1 byte from a1 (arg1 at entry) +0x18.
  The `bgezall` at 0x446d7c calls __glXCreateContext2 [0x4409c0] with a0=a0 at entry (arg0), a1=[a1+4], a2=[a1+12], a3=0x0, a4=[a1+8], a5=[a1+16], a6=[a1+20], a7=[a1+24]:1.
  The return at 0x446d8c has v0 = ret(__glXCreateContext2).

- `__glXQueryContext` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x446dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x446dc0-0x446f08 (328 bytes).
  It occupies 328 bytes.
  The `lw` at 0x446ddc loads 4 bytes from a0 (arg0 at entry) +0x2c.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x4, including `lw` at 0x446de0, `lw` at 0x446e10.
  The `lw` at 0x446df4 loads 4 bytes from sym(__glXContextRes) +0x0.
  The `sw` at 0x446e14 stores 4 bytes to [a0+44] +0x18.
  The `lw` at 0x446e18 loads 4 bytes from sym(__glXBadContext) +0x0.
  The `lw` at 0x446e3c loads 4 bytes from [a0+44] +0x1c.
  The `sw` at 0x446e5c stores 4 bytes to ret(Xalloc) +0x0.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x446e60, `lw` at 0x446e64, `lw` at 0x446e74.
  The `sw` at 0x446e6c stores 4 bytes to ret(Xalloc) +0x8.
  The `sw` at 0x446e70 stores 4 bytes to ret(Xalloc) +0x4.
  The `sw` at 0x446e7c stores 4 bytes to ret(Xalloc) +0x10.
  The `sw` at 0x446e80 stores 4 bytes to ret(Xalloc) +0xc.
  The `sw` at 0x446e8c stores 4 bytes to ret(Xalloc) +0x14.
  The `lw` at 0x446e90 loads 4 bytes from [a0+44] +0x10.
  The `jalr` at 0x446df0 calls LookupIDByType with a0=[a1+4], a1=[sym(__glXContextRes)], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x446e4c calls Xalloc with a0=0x18, a1=?, a2=[[a0+44]+28], a3=0x3, a4=0x1, a5=0x6.
  The `jalr` at 0x446ea8 calls __glXSwapQueryContextReply with a0=[a0+44], a1=sp-80, a2=ret(Xalloc), a3=?, a6=[[a0+44]+16].
  The `jalr` at 0x446eb8 calls Xfree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x446ee4 calls WriteToClient with a0=[a0+44], a1=0x20, a2=sp-80, a3=?, a6=[[a0+44]+16].
  The `jalr` at 0x446ef8 calls WriteToClient with a0=[a0+44], a1=0x18, a2=?, a3=?.
  The `bne` branch at 0x446dfc targets 0x446e28, is taken when v0(=ret(LookupIDByType)) != 0, and falls through when v0(=ret(LookupIDByType)) == 0.
  The `beq` branch at 0x446e94 targets 0x446ed8, is taken when a6(=[[a0+44]+16]) == 0, and falls through when a6(=[[a0+44]+16]) != 0.
  The `beq` branch at 0x446f00 targets 0x446eb4 and is always taken.
  The return at 0x446e20 has v0 = [sym(__glXBadContext)].
  The return at 0x446ed0 has v0 = 0x0.

- `__glXMakeContextCurrent` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x446f40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x446f40-0x446f88 (72 bytes).
  It occupies 72 bytes.
  The `lw` at 0x446f5c loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x446f60 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x446f64 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x446f74 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `jalr` at 0x446f70 calls __glXMakeCurrentHelper with a0=a0 at entry (arg0), a1=[a1+4], a2=[a1+8], a3=[a1+12], a4=[a1+16], a5=0x2.
  The return at 0x446f80 has v0 = ret(__glXMakeCurrentHelper).

- `__glXCreatePbuffer` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x446fc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x446fc0-0x446ff8 (56 bytes).
  It occupies 56 bytes.
  The `bgezall` at 0x446fe0 calls __glXCreatePbuffer2 [0x443a40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x0, a3=a3 at entry (arg3).
  The return at 0x446ff0 has v0 = ret(__glXCreatePbuffer2).

- `__glXDestroyPbuffer` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x447000 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x447000-0x447038 (56 bytes).
  It occupies 56 bytes.
  The `bgezall` at 0x447020 calls __glXDestroyPbuffer2 [0x443e00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x0, a3=a3 at entry (arg3).
  The return at 0x447030 has v0 = ret(__glXDestroyPbuffer2).

- `__glXChangeDrawableAttributes` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x447040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x447040-0x447078 (56 bytes).
  It occupies 56 bytes.
  The `bgezall` at 0x447060 calls __glXChangeDrawableAttributes2 [0x443f80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x0, a3=a3 at entry (arg3).
  The return at 0x447070 has v0 = ret(__glXChangeDrawableAttributes2).

- `__glXGetDrawableAttributes` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x447080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x447080-0x4470b8 (56 bytes).
  It occupies 56 bytes.
  The `bgezall` at 0x4470a0 calls __glXGetDrawableAttributes2 [0x4441c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x0, a3=a3 at entry (arg3).
  The return at 0x4470b0 has v0 = ret(__glXGetDrawableAttributes2).

- `__glXCreateWindow` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4470c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4470c0-0x4472bc (508 bytes).
  It occupies 508 bytes.
  The `lw` at 0x4470d8 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x4470dc loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x4470e0 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x4470e4 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x4470e8 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lbu` at 0x447114 loads 1 byte from ret(LookupDrawable) +0x0.
  The `lw` at 0x447120 loads 4 bytes from ret(LookupDrawable) +0x10.
  4 such `sw` accesses store 4 bytes to [a0+44] +0x18, including `sw` at 0x447138, `sw` at 0x4471f4, `sw` at 0x44720c.
  The `lw` at 0x447154 loads 4 bytes from [ret(LookupDrawable)+16] +0x0.
  The `lw` at 0x447180 loads 4 bytes from ret(__glxLookupFBConfig) +0x28.
  The `lw` at 0x44718c loads 4 bytes from ret(__glxLookupFBConfig) +0x20.
  The `lbu` at 0x4471b4 loads 1 byte from ret(LookupDrawable) +0x2.
  The `lh` at 0x4471b8 loads 2 bytes from ret(glxLookupVisual) +0xa.
  2 such `lw` accesses load 4 bytes from sym(__glXWindowRes) +0x0, including `lw` at 0x4471dc, `lw` at 0x44726c.
  The `lw` at 0x447214 loads 4 bytes from sym(__glXBadFBConfig) +0x0.
  The `sw` at 0x447288 stores 4 bytes to ret(Xalloc) +0xc.
  The `sw` at 0x44728c stores 4 bytes to ret(Xalloc) +0x18.
  The `sw` at 0x447290 stores 4 bytes to ret(Xalloc) +0x14.
  The `sw` at 0x447298 stores 4 bytes to ret(Xalloc) +0x10.
  The `sw` at 0x4472a0 stores 4 bytes to ret(Xalloc) +0x8.
  The `sw` at 0x4472a4 stores 4 bytes to ret(Xalloc) +0x4.
  The `sw` at 0x4472b0 stores 4 bytes to ret(Xalloc) +0x0.
  The `jalr` at 0x447104 calls LookupDrawable with a0=[a1+12], a1=[a0+44], a2=[a1+16], a3=0x328dc.
  The `jalr` at 0x447170 calls __glxLookupFBConfig with a0=[a1+4], a1=[a1+8], a2=?, a3=?, a4=[ret(LookupDrawable)]:1, a7=[[ret(LookupDrawable)+16]].
  The `jalr` at 0x4471a0 calls glxLookupVisual with a0=[ret(LookupDrawable)+16], a1=[ret(__glxLookupFBConfig)+32], a2=ret(__glxLookupFBConfig), a3=?.
  The `jalr` at 0x4471d8 calls LookupIDByType with a0=[a1+16], a1=[sym(__glXWindowRes)], a2=ret(glxLookupVisual), a3=?.
  The `jalr` at 0x447238 calls Xalloc with a0=0x1c, a1=?, a2=?, a3=?, a4=[a0+44].
  The `jalr` at 0x447268 calls AddResource with a0=[a1+16], a1=[sym(__glXWindowRes)], a2=ret(Xalloc), a3=?.
  The `beq` branch at 0x44710c targets 0x447124, is taken when v0(=ret(LookupDrawable)) == 0, and falls through when v0(=ret(LookupDrawable)) != 0.
  The `beq` branch at 0x44711c targets 0x447154, is taken when a4(=[ret(LookupDrawable)]:1) == 0, and falls through when a4(=[ret(LookupDrawable)]:1) != 0.
  The `bne` branch at 0x447160 targets 0x447144, is taken when a7(=[[ret(LookupDrawable)+16]]) != t0(=[a1+4]), and falls through when a7(=[[ret(LookupDrawable)+16]]) == t0(=[a1+4]).
  The `beq` branch at 0x447178 targets 0x447200, is taken when v0(=ret(__glxLookupFBConfig)) == 0, and falls through when v0(=ret(__glxLookupFBConfig)) != 0.
  The `beq` branch at 0x447188 targets 0x447250, is taken when (t1(=[ret(__glxLookupFBConfig)+40]) & 0x1) == 0, and falls through when (t1(=[ret(__glxLookupFBConfig)+40]) & 0x1) != 0.
  The `beq` branch at 0x447194 targets 0x447218, is taken when a1(=[ret(__glxLookupFBConfig)+32]) == 0, and falls through when a1(=[ret(__glxLookupFBConfig)+32]) != 0.
  The `beq` branch at 0x4471ac targets 0x447220, is taken when v0(=ret(glxLookupVisual)) == 0, and falls through when v0(=ret(glxLookupVisual)) != 0.
  The `beq` branch at 0x4471bc targets 0x4471cc, is taken when t2(=[ret(glxLookupVisual)+10]:2) == t3(=[ret(LookupDrawable)+2]:1), and falls through when t2(=[ret(glxLookupVisual)+10]:2) != t3(=[ret(LookupDrawable)+2]:1).
  The `beq` branch at 0x4471c4 targets 0x447148 and is always taken.
  The `beq` branch at 0x4471e0 targets 0x447234, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x4471f0 targets 0x447144 and is always taken.
  The `beq` branch at 0x447210 targets 0x447144 and is always taken.
  The `beq` branch at 0x447218 targets 0x447144 and is always taken.
  The `beq` branch at 0x44722c targets 0x447144 and is always taken.
  The `bne` branch at 0x447240 targets 0x447258, is taken when v0(=ret(Xalloc)) != 0, and falls through when v0(=ret(Xalloc)) == 0.
  The `beq` branch at 0x447248 targets 0x447144 and is always taken.
  The `beq` branch at 0x447250 targets 0x447144 and is always taken.
  The `beq` branch at 0x447270 targets 0x4472b4, is taken when v0(=ret(AddResource)) == 0, and falls through when v0(=ret(AddResource)) != 0.
  The `beq` branch at 0x4472ac targets 0x447144 and is always taken.
  The `beq` branch at 0x4472b4 targets 0x447144 and is always taken.
  The return at 0x44713c has v0 = 0x3.
  The return at 0x44714c has v0 = one of ?, 0x8.
  The instructions from 0x4471f8 to 0x4471fc are not reached by any path from the entry, and their branches are not listed.

- `__glXDestroyWindow` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4472c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4472c0-0x447348 (136 bytes).
  It occupies 136 bytes.
  The `lw` at 0x4472d8 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x4472dc loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x4472f8 loads 4 bytes from sym(__glXWindowRes) +0x0.
  The `sw` at 0x447314 stores 4 bytes to [a0+44] +0x18.
  The `lw` at 0x447320 loads 4 bytes from sym(__glXBadWindow) +0x0.
  The `jalr` at 0x4472f4 calls LookupIDByType with a0=[a1+4], a1=[sym(__glXWindowRes)], a2=0x326dc, a3=a3 at entry (arg3).
  The `jalr` at 0x44732c calls FreeResource with a0=[a1+4], a1=0x0, a2=?, a3=?.
  The `bne` branch at 0x4472fc targets 0x447324, is taken when v0(=ret(LookupIDByType)) != 0, and falls through when v0(=ret(LookupIDByType)) == 0.
  The return at 0x44731c has v0 = [sym(__glXBadWindow)].
  The return at 0x447340 has v0 = 0x0.

- `__glXFreeGLXWindow2` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x447380 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x447380-0x44742c (172 bytes).
  It occupies 172 bytes.
  The `lw` at 0x447384 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x4473a0 loads 4 bytes from a0 (arg0 at entry) +0x14.
  The `lw` at 0x4473a8 loads 4 bytes from a0 (arg0 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4, including `lw` at 0x4473e0, `lw` at 0x447400.
  The `lw` at 0x447414 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x447418 loads 4 bytes from [a0+12] +0xa0.
  The `jalr` at 0x4473c0 calls Xfree with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x4473e4 calls xf86printf with a0=0x4600f0, a1=[a0+4], a2=a0 at entry (arg0), a3=a3 at entry (arg3).
  The `jalr` at 0x4473fc calls LookupIDByType with a0=[a0+4], a1=0xffffffffc0000001, a2=?, a3=?.
  The `jalr` at 0x44741c calls (unknown callee) with a0=[a0], a1=?, a2=?, a3=[a0].
  The `bne` branch at 0x447398 targets 0x4473cc, is taken when v1(=[a0+16]) != 0, and falls through when v1(=[a0+16]) == 0.
  The `bne` branch at 0x4473a4 targets 0x4473cc, is taken when v1(=[a0+20]) != 0, and falls through when v1(=[a0+20]) == 0.
  The `bne` branch at 0x4473b4 targets 0x4473d8, is taken when a0(=[a0]) != 0, and falls through when a0(=[a0]) == 0.
  The `bne` branch at 0x447408 targets 0x4473c0, is taken when v0(=ret(LookupIDByType)) != a3(=[a0]), and falls through when v0(=ret(LookupIDByType)) == a3(=[a0]).
  The `beq` branch at 0x447424 targets 0x4473c0 and is always taken.
  The return at 0x4473d0 has v0 = one of ?, ret(Xfree).

- `__glXFreeGLXDrawable2` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x447440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x447440-0x447488 (72 bytes).
  It occupies 72 bytes.
  The `lw` at 0x447440 loads 4 bytes from a0 (arg0 at entry) +0x4.
  Calls __glXFreeGLXWindow2 via got with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[a0+4], a3=0x4, a4=0x6 (`jr` at 0x44746c).
  Calls __glXFreeGLXPixmap2 via got with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[a0+4], a3=0x4, a4=0x6 (`jr` at 0x447478).
  Calls __glXFreeGLXPbuffer2 via got with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[a0+4], a3=0x4, a4=0x6 (`jr` at 0x447480).
  The `beq` branch at 0x44744c targets 0x447474, is taken when a2(=[a0+4]) == at(=0x2), and falls through when a2(=[a0+4]) != at(=0x2).
  The `beq` branch at 0x447454 targets 0x447480, is taken when a2(=[a0+4]) == a3(=0x4), and falls through when a2(=[a0+4]) != a3(=0x4).
  The `beq` branch at 0x44745c targets 0x44746c, is taken when a2(=[a0+4]) == a4(=0x6), and falls through when a2(=[a0+4]) != a4(=0x6).
  The return at 0x447464 has v0 = ?.

- `ResetExtension` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44ae40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44ae40-0x44ae94 (84 bytes).
  It occupies 84 bytes.
  The `lw` at 0x44ae68 loads 4 bytes from sym(__glXExt) +0x0.
  The `lw` at 0x44ae6c loads 4 bytes from [sym(__glXExt)] +0x4.
  The `jalr` at 0x44ae5c calls __glXFlushContextCache with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44ae70 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x44ae7c calls __glXScreenReset with a0=?, a1=?, a2=?, a3=?.
  The return at 0x44ae8c has v0 = ret(__glXScreenReset).

- `ResetClientState` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44aec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44aec0-0x44af74 (180 bytes).
  It occupies 180 bytes.
  The `lw` at 0x44aed4 loads 4 bytes from (sym(__glXClients) + (a0 << 0x2)) +0x0.
  The `lw` at 0x44aed8 loads 4 bytes from [(sym(__glXClients) + (a0 << 0x2))] +0x4.
  The `lw` at 0x44aef0 loads 4 bytes from [(sym(__glXClients) + (a0 << 0x2))] +0x40.
  The `lw` at 0x44af04 loads 4 bytes from [(sym(__glXClients) + (a0 << 0x2))] +0x1c.
  The `lw` at 0x44af18 loads 4 bytes from [(sym(__glXClients) + (a0 << 0x2))] +0x24.
  The `lw` at 0x44af40 loads 4 bytes from [(sym(__glXClients) + (a0 << 0x2))] +0x38.
  The `sw` at 0x44af4c stores 4 bytes to [(sym(__glXClients) + (a0 << 0x2))] +0x30.
  The `sw` at 0x44af54 stores 4 bytes to [(sym(__glXClients) + (a0 << 0x2))] +0x34.
  The `jalr` at 0x44aee8 calls __glXFree with a0=[[(sym(__glXClients) + (a0 << 0x2))]+4], a1=a1 at entry (arg1), a2=[[(sym(__glXClients) + (a0 << 0x2))]+4], a3=a3 at entry (arg3).
  The `jalr` at 0x44aefc calls __glXFree with a0=[[(sym(__glXClients) + (a0 << 0x2))]+64], a1=?, a2=?, a3=?.
  The `jalr` at 0x44af10 calls __glXFree with a0=[[(sym(__glXClients) + (a0 << 0x2))]+28], a1=?, a2=?, a3=?.
  The `jalr` at 0x44af24 calls __glXFree with a0=[[(sym(__glXClients) + (a0 << 0x2))]+36], a1=?, a2=?, a3=?.
  The `jalr` at 0x44af38 calls xf86memset with a0=[(sym(__glXClients) + (a0 << 0x2))], a1=0x0, a2=0x48, a3=?.
  Calls __glXFree via got with a0=[[(sym(__glXClients) + (a0 << 0x2))]+56], a1=?, a2=?, a3=? (`jr` at 0x44af60).
  The `beq` branch at 0x44aedc targets 0x44aef0, is taken when a2(=[[(sym(__glXClients) + (a0 << 0x2))]+4]) == 0, and falls through when a2(=[[(sym(__glXClients) + (a0 << 0x2))]+4]) != 0.
  The `beq` branch at 0x44aef4 targets 0x44af04, is taken when a0(=[[(sym(__glXClients) + (a0 << 0x2))]+64]) == 0, and falls through when a0(=[[(sym(__glXClients) + (a0 << 0x2))]+64]) != 0.
  The `beq` branch at 0x44af08 targets 0x44af18, is taken when a0(=[[(sym(__glXClients) + (a0 << 0x2))]+28]) == 0, and falls through when a0(=[[(sym(__glXClients) + (a0 << 0x2))]+28]) != 0.
  The `beq` branch at 0x44af1c targets 0x44af2c, is taken when a0(=[[(sym(__glXClients) + (a0 << 0x2))]+36]) == 0, and falls through when a0(=[[(sym(__glXClients) + (a0 << 0x2))]+36]) != 0.
  The `beq` branch at 0x44af50 targets 0x44af68, is taken when a0(=[[(sym(__glXClients) + (a0 << 0x2))]+56]) == 0, and falls through when a0(=[[(sym(__glXClients) + (a0 << 0x2))]+56]) != 0.
  The return at 0x44af6c has v0 = ret(xf86memset).

- `__glXResetLargeCommandStatus` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44af80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44af80-0x44af94 (20 bytes).
  It occupies 20 bytes.
  The `sw` at 0x44af80 stores 4 bytes to a0 (arg0 at entry) +0x18.
  The `sw` at 0x44af84 stores 4 bytes to a0 (arg0 at entry) +0x14.
  The `sw` at 0x44af88 stores 4 bytes to a0 (arg0 at entry) +0x10.
  The `sw` at 0x44af90 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The return at 0x44af8c has v0 = ?.

- `ContextGone` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44afc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44afc0-0x44b008 (72 bytes).
  It occupies 72 bytes.
  The `lbu` at 0x44afc4 loads 1 byte from a0 (arg0 at entry) +0x39.
  The `sb` at 0x44afcc stores 1 byte to a0 (arg0 at entry) +0x38.
  The `jalr` at 0x44aff8 calls __glXFreeContext with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x44afd8 targets 0x44aff0, is taken when v0(=[a0+57]:1) == 0, and falls through when v0(=[a0+57]:1) != 0.
  The `beq` branch at 0x44b000 targets 0x44afe0 and is always taken.
  The return at 0x44afe8 has v0 = 0x1.

- `ClientGone` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44b040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44b040-0x44b1a0 (352 bytes).
  It occupies 352 bytes.
  The `lw` at 0x44b064 loads 4 bytes from (sym(__glXClients) + (a0 << 0x2)) +0x0.
  2 such `lw` accesses load 4 bytes from [(sym(__glXClients) + (a0 << 0x2))] +0x28, including `lw` at 0x44b070, `lw` at 0x44b138.
  3 such `lw` accesses load 4 bytes from [(sym(__glXClients) + (a0 << 0x2))] +0x24, including `lw` at 0x44b098, `lw` at 0x44b0f0, `lw` at 0x44b12c.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44b0b4, `lw` at 0x44b0c8, `lw` at 0x44b0d4.
  3 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x44b0c4, `lbu` at 0x44b0cc, `lbu` at 0x44b104.
  2 such `sb` accesses store 1 byte to ?, including `sb` at 0x44b0dc, `sb` at 0x44b110.
  3 such `sw` accesses store 4 bytes to ?, including `sw` at 0x44b108, `sw` at 0x44b134, `sw` at 0x44b194.
  The `lw` at 0x44b128 loads 4 bytes from sym(__glXContextRes) +0x0.
  The `jalr` at 0x44b0e4 calls __glXFreeContext with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x44b0fc calls __glXDeassociateContext with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x44b124 calls FreeResourceByType with a0=?, a1=[sym(__glXContextRes)], a2=0x0, a3=?.
  The `bgezall` at 0x44b158 calls ResetClientState [0x44aec0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x44b18c calls __glXDeassociateContext with a0=?, a1=?, a2=?, a3=?, a5=([[(sym(__glXClients) + (a0 << 0x2))]+40] << 0x2).
  The `beq` branch at 0x44b068 targets 0x44b174, is taken when s3(=[(sym(__glXClients) + (a0 << 0x2))]) == 0, and falls through when s3(=[(sym(__glXClients) + (a0 << 0x2))]) != 0.
  The `blez` branch at 0x44b08c targets 0x44b150, is taken when a3(=[[(sym(__glXClients) + (a0 << 0x2))]+40]) <= 0 (signed), and falls through when a3(=[[(sym(__glXClients) + (a0 << 0x2))]+40]) > 0 (signed).
  The `beq` branch at 0x44b0a0 targets 0x44b0b4 and is always taken.
  The `beq` branch at 0x44b0ac targets 0x44b150, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x44b0bc targets 0x44b0a8, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x44b0d0 targets 0x44b0f4, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bne` branch at 0x44b0d8 targets 0x44b114, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x44b0ec targets 0x44b130 and is always taken.
  The `bne` branch at 0x44b0f4 targets 0x44b184, is taken when a1(?) != a4(?), and falls through when a1(?) == a4(?).
  The `beq` branch at 0x44b10c targets 0x44b0e0, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0x44b148 targets 0x44b098, is taken when s1(?) < a3(=[[(sym(__glXClients) + (a0 << 0x2))]+40]) (signed), and falls through when s1(?) >= a3(=[[(sym(__glXClients) + (a0 << 0x2))]+40]) (signed).
  The `beq` branch at 0x44b198 targets 0x44b0f8 and is always taken.
  The return at 0x44b17c has v0 = 0x1.

- `PixmapGone` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44b1c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44b1c0-0x44b24c (140 bytes).
  It occupies 140 bytes.
  The `lw` at 0x44b1c4 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `sw` at 0x44b1ec stores 4 bytes to a0 (arg0 at entry) +0xc.
  2 such `lw` accesses load 4 bytes from sym(__glXDrawPrivRes) +0x0, including `lw` at 0x44b220, `lw` at 0x44b240.
  The `jalr` at 0x44b1f0 calls __glXFreeGLXPixmap2 with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=a0 at entry (arg0).
  The `jalr` at 0x44b21c calls LookupIDByType with a0=a1 at entry (arg1), a1=[sym(__glXDrawPrivRes)], a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=a0 at entry (arg0).
  The `jalr` at 0x44b23c calls FreeResourceByType with a0=a1 at entry (arg1), a1=[sym(__glXDrawPrivRes)], a2=0x0, a3=?, a4=a0 at entry (arg0).
  The `beq` branch at 0x44b1e0 targets 0x44b20c, is taken when at(=[a0+16]) == 0, and falls through when at(=[a0+16]) != 0.
  The `beq` branch at 0x44b224 targets 0x44b1e8, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x44b244 targets 0x44b1e8 and is always taken.
  The return at 0x44b204 has v0 = 0x1.

- `SwapBarrierGone` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44b280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44b280-0x44b2fc (124 bytes).
  It occupies 124 bytes.
  The `lw` at 0x44b2a0 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  The `lw` at 0x44b2ac loads 4 bytes from ?.
  The `lw` at 0x44b2e0 loads 4 bytes from sym(__glXSwapBarrierRes) +0x0.
  The `jalr` at 0x44b2c4 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x0, a3=a3 at entry (arg3).
  The `jalr` at 0x44b2dc calls FreeResourceByType with a0=a1 at entry (arg1), a1=[sym(__glXSwapBarrierRes)], a2=0x0, a3=?.
  The `beq` branch at 0x44b2b8 targets 0x44b2cc, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The return at 0x44b2f4 has v0 = 0x1.

- `SwapGroupGone` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44b300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44b300-0x44b334 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x44b31c calls xf86free with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x44b32c has v0 = ret(xf86free).

- `DrawPrivGone` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44b340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44b340-0x44b3b0 (112 bytes).
  It occupies 112 bytes.
  The `lw` at 0x44b344 loads 4 bytes from a0 (arg0 at entry) +0x14.
  The `sw` at 0x44b348 stores 4 bytes to a0 (arg0 at entry) +0x244.
  The `lw` at 0x44b364 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44b374, `lw` at 0x44b378.
  The `sw` at 0x44b384 stores 4 bytes to ?.
  The `sw` at 0x44b38c stores 4 bytes to a0 (arg0 at entry) +0x1c.
  The `sw` at 0x44b390 stores 4 bytes to a0 (arg0 at entry) +0x20.
  The `sw` at 0x44b394 stores 4 bytes to a0 (arg0 at entry) +0x24.
  The `sw` at 0x44b39c stores 4 bytes to a0 (arg0 at entry) +0x28.
  The `jalr` at 0x44b398 calls __glXUnrefDrawablePrivate with a0=a0 at entry (arg0), a1=?, a2=?, a3=a3 at entry (arg3).
  The `bne` branch at 0x44b35c targets 0x44b388, is taken when at(=[a0+20]) != 0, and falls through when at(=[a0+20]) == 0.
  The `beq` branch at 0x44b368 targets 0x44b38c, is taken when a2(=[a0+44]) == 0, and falls through when a2(=[a0+44]) != 0.
  The `bne` branch at 0x44b380 targets 0x44b370, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The return at 0x44b3a8 has v0 = ret(__glXUnrefDrawablePrivate).

- `OtherPbClientGone` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44b3c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44b3c0-0x44b464 (164 bytes).
  It occupies 164 bytes.
  The `lw` at 0x44b3d8 loads 4 bytes from sym(__glxWindowPrivateIndex) +0x0.
  The `lw` at 0x44b3dc loads 4 bytes from a0 (arg0 at entry) +0x80.
  The `lw` at 0x44b3e8 loads 4 bytes from ([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2)) +0x0.
  The `lw` at 0x44b3ec loads 4 bytes from [([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))] +0x28.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44b400, `lw` at 0x44b410, `lw` at 0x44b41c.
  The `sw` at 0x44b42c stores 4 bytes to ?.
  The `sw` at 0x44b460 stores 4 bytes to [([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))] +0x28.
  The `jalr` at 0x44b434 calls Xfree with a0=?, a1=?, a2=a2 at entry (arg2), a3=?, a5=[([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))], a6=([sym(__glxWindowPrivateIndex)] << 0x2), a7=0x2e5dc.
  The `bgezall` at 0x44b444 calls RecalculateOtherEvents [0x44c580] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x44b3f0 targets 0x44b450, is taken when a3(=[[([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]+40]) == 0, and falls through when a3(=[[([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]+40]) != 0.
  The `beq` branch at 0x44b3f8 targets 0x44b410 and is always taken.
  The `beq` branch at 0x44b408 targets 0x44b450, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0x44b414 targets 0x44b400, is taken when t1(?) != a1, and falls through when t1(?) == a1.
  The `beq` branch at 0x44b424 targets 0x44b45c, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x44b45c targets 0x44b430 and is always taken.
  The return at 0x44b454 has v0 = one of ?, ret(RecalculateOtherEvents).

- `PbufferGone` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44b480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44b480-0x44b508 (136 bytes).
  It occupies 136 bytes.
  The `lw` at 0x44b484 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `sw` at 0x44b4ac stores 4 bytes to a0 (arg0 at entry) +0xc.
  2 such `lw` accesses load 4 bytes from sym(__glXDrawPrivRes) +0x0, including `lw` at 0x44b4dc, `lw` at 0x44b4fc.
  The `jalr` at 0x44b4b0 calls __glXFreeGLXPbuffer2 with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=a0 at entry (arg0).
  The `jalr` at 0x44b4d8 calls LookupIDByType with a0=a1 at entry (arg1), a1=[sym(__glXDrawPrivRes)], a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=a0 at entry (arg0).
  The `jalr` at 0x44b4f8 calls FreeResourceByType with a0=a1 at entry (arg1), a1=[sym(__glXDrawPrivRes)], a2=0x0, a3=?, a4=a0 at entry (arg0).
  The `beq` branch at 0x44b4a0 targets 0x44b4c8, is taken when at(=[a0+16]) == 0, and falls through when at(=[a0+16]) != 0.
  The `beq` branch at 0x44b4e0 targets 0x44b4a8, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x44b500 targets 0x44b4a8 and is always taken.
  The return at 0x44b4c0 has v0 = ret(__glXFreeGLXPbuffer2).

- `WindowGone` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44b540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44b540-0x44b5c8 (136 bytes).
  It occupies 136 bytes.
  The `lw` at 0x44b544 loads 4 bytes from a0 (arg0 at entry) +0x14.
  The `sw` at 0x44b56c stores 4 bytes to a0 (arg0 at entry) +0x10.
  2 such `lw` accesses load 4 bytes from sym(__glXDrawPrivRes) +0x0, including `lw` at 0x44b59c, `lw` at 0x44b5bc.
  The `jalr` at 0x44b570 calls __glXFreeGLXWindow2 with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=a0 at entry (arg0).
  The `jalr` at 0x44b598 calls LookupIDByType with a0=a1 at entry (arg1), a1=[sym(__glXDrawPrivRes)], a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=a0 at entry (arg0).
  The `jalr` at 0x44b5b8 calls FreeResourceByType with a0=a1 at entry (arg1), a1=[sym(__glXDrawPrivRes)], a2=0x0, a3=?, a4=a0 at entry (arg0).
  The `beq` branch at 0x44b560 targets 0x44b588, is taken when at(=[a0+20]) == 0, and falls through when at(=[a0+20]) != 0.
  The `beq` branch at 0x44b5a0 targets 0x44b568, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x44b5c0 targets 0x44b568 and is always taken.
  The return at 0x44b580 has v0 = ret(__glXFreeGLXWindow2).

- `__glXFreeContext` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44b600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44b600-0x44b708 (264 bytes).
  It occupies 264 bytes.
  The `lbu` at 0x44b604 loads 1 byte from a0 (arg0 at entry) +0x38.
  The `lbu` at 0x44b60c loads 1 byte from a0 (arg0 at entry) +0x3a.
  The `lbu` at 0x44b620 loads 1 byte from a0 (arg0 at entry) +0x39.
  The `lw` at 0x44b650 loads 4 bytes from a0 (arg0 at entry) +0x48.
  The `lw` at 0x44b668 loads 4 bytes from a0 (arg0 at entry) +0x50.
  The `lw` at 0x44b680 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x44b6a8 loads 4 bytes from sym(__glXLastContext) +0x0.
  The `lw` at 0x44b6dc loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x44b6e0 loads 4 bytes from [a0+12] +0x3c.
  The `jalr` at 0x44b65c calls __glXFree with a0=[a0+72], a1=?, a2=?, a3=?.
  The `jalr` at 0x44b674 calls __glXFree with a0=[a0+80], a1=?, a2=?, a3=?.
  The `jalr` at 0x44b68c calls __glXFree with a0=[a0+16], a1=?, a2=?, a3=?.
  The `jalr` at 0x44b698 calls __glXFree with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x44b6cc calls __glXFlushContextCache with a0=?, a1=[sym(__glXLastContext)], a2=a0 at entry (arg0), a3=?.
  The `jalr` at 0x44b6e4 calls (unknown callee) with a0=[a0+12], a1=a1 at entry (arg1), a2=[a0+58]:1, a3=a3 at entry (arg3).
  The `bne` branch at 0x44b618 targets 0x44b628, is taken when v1(=[a0+56]:1) != 0, and falls through when v1(=[a0+56]:1) == 0.
  The `beq` branch at 0x44b624 targets 0x44b640, is taken when v1(=[a0+57]:1) == 0, and falls through when v1(=[a0+57]:1) != 0.
  The `beq` branch at 0x44b644 targets 0x44b6dc, is taken when a2(=[a0+58]:1) == 0, and falls through when a2(=[a0+58]:1) != 0.
  The `beq` branch at 0x44b654 targets 0x44b664, is taken when a0(=[a0+72]) == 0, and falls through when a0(=[a0+72]) != 0.
  The `beq` branch at 0x44b66c targets 0x44b67c, is taken when a0(=[a0+80]) == 0, and falls through when a0(=[a0+80]) != 0.
  The `beq` branch at 0x44b684 targets 0x44b694, is taken when a0(=[a0+16]) == 0, and falls through when a0(=[a0+16]) != 0.
  The `beq` branch at 0x44b6ac targets 0x44b6c8, is taken when a1(=[sym(__glXLastContext)]) == a2(=a0), and falls through when a1(=[sym(__glXLastContext)]) != a2(=a0).
  The `beq` branch at 0x44b6d4 targets 0x44b6b4 and is always taken.
  The `bne` branch at 0x44b6ec targets 0x44b650, is taken when v0(=ret(?)) != 0, and falls through when v0(=ret(?)) == 0.
  The return at 0x44b630 has v0 = 0x0.
  The return at 0x44b6c0 has v0 = 0x1.
  The return at 0x44b700 has v0 = 0x0.
  The instructions from 0x44b638 to 0x44b63c are not reached by any path from the entry, and their branches are not listed.

- `__glXErrorCallBack` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44b740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44b740-0x44b758 (24 bytes).
  It occupies 24 bytes.
  The `sb` at 0x44b754 stores 1 byte to abs 0x472ec0.
  The return at 0x44b750 has v0 = 0x1.

- `__glXClearErrorOccured` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44b780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44b780-0x44b794 (20 bytes).
  It occupies 20 bytes.
  The `sb` at 0x44b790 stores 1 byte to abs 0x472ec0.
  The return at 0x44b78c has v0 = 0x2e21c.

- `__glXErrorOccured` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44b7c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44b7c0-0x44b7d4 (20 bytes).
  It occupies 20 bytes.
  The `lbu` at 0x44b7d0 loads 1 byte from abs 0x472ec0.
  The return at 0x44b7cc has v0 = [0x472ec0]:1.

- `GlxExtensionInit` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44b800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44b800-0x44bab0 (688 bytes).
  It occupies 688 bytes.
  The `sw` at 0x44b83c stores 4 bytes to sym(__glXContextRes) +0x0.
  The `sw` at 0x44b854 stores 4 bytes to sym(__glXClientRes) +0x0.
  The `sw` at 0x44b86c stores 4 bytes to sym(__glXPixmapRes) +0x0.
  The `sw` at 0x44b884 stores 4 bytes to sym(__glXDrawPrivRes) +0x0.
  The `sw` at 0x44b89c stores 4 bytes to sym(__glXOtherClientRes) +0x0.
  The `sw` at 0x44b8b4 stores 4 bytes to sym(__glXPbufferRes) +0x0.
  The `sw` at 0x44b8d0 stores 4 bytes to sym(__glXWindowRes) +0x0.
  The `sw` at 0x44b8e4 stores 4 bytes to sym(__glXSwapBarrierRes) +0x0.
  The `sw` at 0x44b914 stores 4 bytes to sym(__glXSwapGroupRes) +0x0.
  13 such `lw` accesses load 4 bytes from ret(AddExtension) +0x18, including `lw` at 0x44b948, `lw` at 0x44b950, `lw` at 0x44b960.
  The `sw` at 0x44b94c stores 4 bytes to sym(__glXBadContext) +0x0.
  The `sw` at 0x44b95c stores 4 bytes to sym(__glXBadContextState) +0x0.
  The `sw` at 0x44b96c stores 4 bytes to sym(__glXBadDrawable) +0x0.
  The `sw` at 0x44b97c stores 4 bytes to sym(__glXBadPixmap) +0x0.
  The `sw` at 0x44b98c stores 4 bytes to sym(__glXBadContextTag) +0x0.
  The `sw` at 0x44b99c stores 4 bytes to sym(__glXBadCurrentWindow) +0x0.
  The `sw` at 0x44b9ac stores 4 bytes to sym(__glXBadRenderRequest) +0x0.
  The `sw` at 0x44b9bc stores 4 bytes to sym(__glXBadLargeRequest) +0x0.
  The `sw` at 0x44b9cc stores 4 bytes to sym(__glXUnsupportedPrivateRequest) +0x0.
  The `sw` at 0x44b9dc stores 4 bytes to sym(__glXBadFBConfig) +0x0.
  The `sw` at 0x44b9ec stores 4 bytes to sym(__glXBadPbuffer) +0x0.
  The `sw` at 0x44b9fc stores 4 bytes to sym(__glXBadCurrentDrawable) +0x0.
  The `sw` at 0x44ba04 stores 4 bytes to sym(__glXClients) +0x4.
  The `sw` at 0x44ba10 stores 4 bytes to sym(__glXBadWindow) +0x0.
  15 such `sw` accesses store 4 bytes to ?, including `sw` at 0x44ba14, `sw` at 0x44ba18, `sw` at 0x44ba1c.
  The `lw` at 0x44ba64 loads 4 bytes from sym(screenInfo) +0x30.
  The `jalr` at 0x44b828 calls CreateNewResourceType with a0=0x44afc0, a1=0x2e19c, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44b840 calls CreateNewResourceType with a0=0x44b040, a1=sym(__glXContextRes), a2=?, a3=?.
  The `jalr` at 0x44b858 calls CreateNewResourceType with a0=0x44b1c0, a1=sym(__glXClientRes), a2=?, a3=?.
  The `jalr` at 0x44b870 calls CreateNewResourceType with a0=0x44b340, a1=sym(__glXPixmapRes), a2=?, a3=?.
  The `jalr` at 0x44b888 calls CreateNewResourceType with a0=0x44b3c0, a1=sym(__glXDrawPrivRes), a2=?, a3=?.
  The `jalr` at 0x44b8a0 calls CreateNewResourceType with a0=0x44b480, a1=sym(__glXOtherClientRes), a2=?, a3=?.
  The `jalr` at 0x44b8b8 calls CreateNewResourceType with a0=0x44b540, a1=sym(__glXPbufferRes), a2=?, a3=?.
  The `jalr` at 0x44b8cc calls CreateNewResourceType with a0=sym(SwapBarrierGone), a1=?, a2=sym(__glXWindowRes), a3=?.
  The `jalr` at 0x44b8e0 calls CreateNewResourceType with a0=sym(SwapGroupGone), a1=?, a2=?, a3=sym(__glXSwapBarrierRes).
  The `jalr` at 0x44b918 calls AddExtension with a0=0x472ee8, a1=0x11, a2=0xc, a3=0x44be80, a4=0x44c040, a5=0x44ae40, a6=sym(StandardMinorOpcode), a7=sym(__glXSwapGroupRes).
  The `jalr` at 0x44b930 calls AddExtensionAlias with a0=0x472ef0, a1=ret(AddExtension), a2=?, a3=?.
  The `jalr` at 0x44ba60 calls __glXScreenInit with a0=[sym(screenInfo)+48], a1=[ret(AddExtension)+24]+5, a2=sym(__glXBadCurrentWindow), a3=[ret(AddExtension)+24]+4, a4=[ret(AddExtension)+24]+12, a5=sym(__glXBadWindow), a6=[ret(AddExtension)+24]+11, a7=sym(__glXBadCurrentDrawable).
  The `jalr` at 0x44ba88 calls FatalError with a0=0x460108, a1=?, a2=?, a3=?.
  The `jalr` at 0x44baa0 calls ErrorF with a0=0x460138, a1=?, a2=?, a3=?.
  The `beq` branch at 0x44b920 targets 0x44ba80, is taken when v0(=ret(AddExtension)) == 0, and falls through when v0(=ret(AddExtension)) != 0.
  The `beq` branch at 0x44b938 targets 0x44ba98, is taken when v0(=ret(AddExtensionAlias)) == 0, and falls through when v0(=ret(AddExtensionAlias)) != 0.
  The `bne` branch at 0x44ba34 targets 0x44ba14, is taken when v0(?) != at(=sym(__glXClients)+992), and falls through when v0(?) == at(=sym(__glXClients)+992).
  The `beq` branch at 0x44ba90 targets 0x44ba6c and is always taken.
  The `beq` branch at 0x44baa8 targets 0x44ba6c and is always taken.
  The return at 0x44ba74 has v0 = one of ret(__glXScreenInit), ret(FatalError), ret(ErrorF).
  The instructions from 0x44ba7c to 0x44ba7c are not reached by any path from the entry, and their branches are not listed.

- `__glXCoreType` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44bac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44bac0-0x44badc (28 bytes).
  It occupies 28 bytes.
  The `lw` at 0x44bacc loads 4 bytes from abs 0x472e08.
  The `lw` at 0x44bad0 loads 4 bytes from sym(__glXExt) +0x0.
  The `lw` at 0x44bad8 loads 4 bytes from [sym(__glXExt)] +0x0.
  The return at 0x44bad4 has v0 = [[sym(__glXExt)]].

- `GlxSetFBConfigs` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44bb00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44bb00-0x44bb3c (60 bytes).
  It occupies 60 bytes.
  The `lw` at 0x44bb1c loads 4 bytes from sym(__glXExt) +0x0.
  The `lw` at 0x44bb20 loads 4 bytes from [sym(__glXExt)] +0x10.
  The `jalr` at 0x44bb24 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x44bb34 has v0 = ret(?).

- `GlxSetVisualConfigs` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44bb40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44bb40-0x44bb7c (60 bytes).
  It occupies 60 bytes.
  The `lw` at 0x44bb5c loads 4 bytes from sym(__glXExt) +0x0.
  The `lw` at 0x44bb60 loads 4 bytes from [sym(__glXExt)] +0xc.
  The `jalr` at 0x44bb64 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x44bb74 has v0 = ret(?).

- `GlxInitVisuals` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44bb80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44bb80-0x44bc90 (272 bytes).
  It occupies 272 bytes.
  The `lw` at 0x44bc30 loads 4 bytes from sym(__glXExt) +0x0.
  The `lw` at 0x44bc40 loads 4 bytes from [sym(__glXExt)] +0x8.
  The `jalr` at 0x44bbe8 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44bc54 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x44bbd8 targets 0x44bc2c, is taken when t1(=[0x472ec4]) == 0, and falls through when t1(=[0x472ec4]) != 0.
  The `bne` branch at 0x44bbf0 targets 0x44bc30, is taken when v0(=ret(?)) != 0, and falls through when v0(=ret(?)) == 0.
  The return at 0x44bc24 has v0 = 0x0.
  The return at 0x44bc88 has v0 = 0x1.

- `GlxWrapInitVisuals` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44bcc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44bcc0-0x44bce0 (32 bytes).
  It occupies 32 bytes.
  The `lw` at 0x44bcc8 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `sw` at 0x44bcd0 stores 4 bytes to abs 0x472ec4.
  The `lw` at 0x44bcd4 loads 4 bytes from abs 0x472aa4.
  The `sw` at 0x44bcdc stores 4 bytes to a0 (arg0 at entry) +0x0.
  The return at 0x44bcd8 has v0 = sym(GlxInitVisuals).

- `__glXFlushContextCache` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44bd00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44bd00-0x44bd18 (24 bytes).
  It occupies 24 bytes.
  The `lw` at 0x44bd0c loads 4 bytes from abs 0x472e28.
  The `sw` at 0x44bd14 stores 4 bytes to sym(__glXLastContext) +0x0.
  The return at 0x44bd10 has v0 = sym(__glXLastContext).

- `__glXForceCurrent` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44bd40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44bd40-0x44be80 (320 bytes).
  It occupies 320 bytes.
  The `lbu` at 0x44bd7c loads 1 byte from ret(__glXLookupContextByTag) +0x3a.
  The `lw` at 0x44bd84 loads 4 bytes from ret(__glXLookupContextByTag) +0x68.
  2 such `lw` accesses load 4 bytes from sym(__glXLastContext) +0x0, including `lw` at 0x44bd88, `lw` at 0x44be18.
  The `sw` at 0x44bda0 stores 4 bytes to sym(__glXLastContext) +0x0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x2c, including `lw` at 0x44bde8, `lw` at 0x44be60.
  2 such `sw` accesses store 4 bytes to [a0+44] +0x18, including `sw` at 0x44bdf0, `sw` at 0x44be68.
  The `lw` at 0x44bdfc loads 4 bytes from sym(__glXBadContextTag) +0x0.
  3 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x0, including `sw` at 0x44be00, `sw` at 0x44be30, `sw` at 0x44be7c.
  The `lw` at 0x44be24 loads 4 bytes from sym(__glXBadCurrentWindow) +0x0.
  The `lw` at 0x44be40 loads 4 bytes from ret(__glXLookupContextByTag) +0xc.
  The `lw` at 0x44be44 loads 4 bytes from [ret(__glXLookupContextByTag)+12] +0x58.
  The `lw` at 0x44be64 loads 4 bytes from ret(__glXLookupContextByTag) +0x28.
  The `lw` at 0x44be70 loads 4 bytes from sym(__glXBadContextState) +0x0.
  The `jalr` at 0x44bd68 calls __glXLookupContextByTag with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44be48 calls (unknown callee) with a0=[ret(__glXLookupContextByTag)+12], a1=?, a2=?, a3=sym(__glXLastContext), a4=[ret(__glXLookupContextByTag)+104].
  The `beq` branch at 0x44bd74 targets 0x44bdd4, is taken when v0(=ret(__glXLookupContextByTag)) == 0, and falls through when v0(=ret(__glXLookupContextByTag)) != 0.
  The `beq` branch at 0x44bd80 targets 0x44be14, is taken when v0(=[ret(__glXLookupContextByTag)+58]:1) == 0, and falls through when v0(=[ret(__glXLookupContextByTag)+58]:1) != 0.
  The `beq` branch at 0x44bd8c targets 0x44be0c, is taken when v1(=[sym(__glXLastContext)]) == s0(=ret(__glXLookupContextByTag)), and falls through when v1(=[sym(__glXLastContext)]) != s0(=ret(__glXLookupContextByTag)).
  The `beq` branch at 0x44bd94 targets 0x44be40, is taken when v0(=[ret(__glXLookupContextByTag)+58]:1) == 0, and falls through when v0(=[ret(__glXLookupContextByTag)+58]:1) != 0.
  The `beq` branch at 0x44be0c targets 0x44bdc0 and is always taken.
  The `bne` branch at 0x44be14 targets 0x44bd8c, is taken when a4(=[ret(__glXLookupContextByTag)+104]) != 0, and falls through when a4(=[ret(__glXLookupContextByTag)+104]) == 0.
  The `beq` branch at 0x44be2c targets 0x44bdc0 and is always taken.
  The `bne` branch at 0x44be50 targets 0x44bd98, is taken when v0(=ret(?)) != 0, and falls through when v0(=ret(?)) == 0.
  The `beq` branch at 0x44be78 targets 0x44bdc0 and is always taken.
  The return at 0x44bdac has v0 = ret(__glXLookupContextByTag).
  The return at 0x44bdcc has v0 = one of ret(__glXLookupContextByTag), 0x0.
  The return at 0x44be04 has v0 = 0x0.
  The instructions from 0x44bdb4 to 0x44bdbc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x44be34 to 0x44be3c are not reached by any path from the entry, and their branches are not listed.

- `__glXDispatch` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44be80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44be80-0x44c03c (444 bytes).
  It occupies 444 bytes.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x44be88, `lw` at 0x44bf6c, `lw` at 0x44bfbc.
  The `lw` at 0x44beac loads 4 bytes from (sym(__glXClients) + ([a0] << 0x2)) +0x0.
  The `lw` at 0x44beb8 loads 4 bytes from a0 (arg0 at entry) +0x8.
  2 such `lbu` accesses load 1 byte from [a0+8] +0x1, including `lbu` at 0x44bec4, `lbu` at 0x44bf08.
  The `lw` at 0x44bec8 loads 4 bytes from [(sym(__glXClients) + ([a0] << 0x2))] +0x0.
  The `lw` at 0x44bee4 loads 4 bytes from ?.
  The `sw` at 0x44bf0c stores 4 bytes to a0 (arg0 at entry) +0x18.
  The `lw` at 0x44bf10 loads 4 bytes from sym(__glXBadLargeRequest) +0x0.
  The `sw` at 0x44bf88 stores 4 bytes to (sym(__glXClients) + ([a0] << 0x2)) +0x0.
  The `lw` at 0x44bfac loads 4 bytes from ret(__glXMalloc) +0x0.
  The `lw` at 0x44bfd8 loads 4 bytes from sym(__glXClientRes) +0x0.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x44bff8, `sw` at 0x44c004.
  The `lw` at 0x44c014 loads 4 bytes from (sym(__glXSingleTable) + ([[a0+8]+1]:1 << 0x2)) +0x0.
  The `sw` at 0x44c030 stores 4 bytes to sym(__glXLastClient) +0x0.
  The `jalr` at 0x44bf60 calls __glXMalloc with a0=0x48, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44bfa0 calls xf86memset with a0=ret(__glXMalloc), a1=0x0, a2=0x48, a3=?, a4=0xb.
  The `jalr` at 0x44bfb8 calls FakeClientID with a0=[a0], a1=?, a2=?, a3=?.
  The `jalr` at 0x44bfd4 calls AddResource with a0=ret(FakeClientID), a1=[sym(__glXClientRes)], a2=[a0], a3=?.
  The `bgezall` at 0x44bfec calls ResetClientState [0x44aec0] with a0=[a0], a1=?, a2=?, a3=?.
  The `jalr` at 0x44c01c calls (unknown callee) with a0=?, a1=[a0+8], a2=?, a3=?, a4=sym(__glXBadLargeRequest).
  The `beq` branch at 0x44bec0 targets 0x44bf5c, is taken when s0(=[(sym(__glXClients) + ([a0] << 0x2))]) == 0, and falls through when s0(=[(sym(__glXClients) + ([a0] << 0x2))]) != 0.
  The `beq` branch at 0x44becc targets 0x44bfb0, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x44bedc targets 0x44bf40, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0x44bee8 targets 0x44c008, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x44bef0 targets 0x44c00c, is taken when s1(=[[a0+8]+1]:1) == v0(=0x2), and falls through when s1(=[[a0+8]+1]:1) != v0(=0x2).
  The `bne` branch at 0x44bf84 targets 0x44bf94, is taken when v0(=ret(__glXMalloc)) != 0, and falls through when v0(=ret(__glXMalloc)) == 0.
  The `beq` branch at 0x44bf8c targets 0x44bf20 and is always taken.
  The `beq` branch at 0x44bfa8 targets 0x44becc and is always taken.
  The `beq` branch at 0x44bfdc targets 0x44c034, is taken when v0(=ret(AddResource)) == 0, and falls through when v0(=ret(AddResource)) != 0.
  The `beq` branch at 0x44c000 targets 0x44bed0 and is always taken.
  The `beq` branch at 0x44c02c targets 0x44bf1c and is always taken.
  The `beq` branch at 0x44c034 targets 0x44bf1c and is always taken.
  The return at 0x44bf14 has v0 = [sym(__glXBadLargeRequest)].
  The return at 0x44bf30 has v0 = one of ?, 0xb.
  The return at 0x44bf54 has v0 = 0x1.
  The instructions from 0x44bf38 to 0x44bf3c are not reached by any path from the entry, and their branches are not listed.

- `__glXNoSuchSingleOpcode` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44c200 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44c200-0x44c208 (8 bytes).
  It occupies 8 bytes.
  The return at 0x44c200 has v0 = 0x1.

- `__glXNoSuchRenderOpcode` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44c240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44c240-0x44c248 (8 bytes).
  It occupies 8 bytes.
  The return at 0x44c240 has v0 = ?.

- `glxLookupVisual` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44c280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44c280-0x44c310 (144 bytes).
  It occupies 144 bytes.
  The `lh` at 0x44c280 loads 2 bytes from a0 (arg0 at entry) +0x60.
  The `lw` at 0x44c28c loads 4 bytes from a0 (arg0 at entry) +0x64.
  The `lw` at 0x44c2a8 loads 4 bytes from [a0+100] +0x0.
  The `lw` at 0x44c2c0 loads 4 bytes from ?.
  The `beq` branch at 0x44c2a0 targets 0x44c2e8, is taken when a5(=[a0+100]) >= a6(=(((([a0+96]:2 << 0x3) + [a0+96]:2) << 0x2) + [a0+100])) (unsigned), and falls through when a5(=[a0+100]) < a6(=(((([a0+96]:2 << 0x3) + [a0+96]:2) << 0x2) + [a0+100])) (unsigned).
  The `beq` branch at 0x44c2ac targets 0x44c2f0, is taken when a7(=[[a0+100]]) == a1, and falls through when a7(=[[a0+100]]) != a1.
  The `beq` branch at 0x44c2b4 targets 0x44c300 and is always taken.
  The `beq` branch at 0x44c2c8 targets 0x44c2dc, is taken when t0(?) == a1, and falls through when t0(?) != a1.
  The `bne` branch at 0x44c2d0 targets 0x44c2c0, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x44c2e0 targets 0x44c2f8, is taken when a3(?) < a6(=(((([a0+96]:2 << 0x3) + [a0+96]:2) << 0x2) + [a0+100])) (unsigned), and falls through when a3(?) >= a6(=(((([a0+96]:2 << 0x3) + [a0+96]:2) << 0x2) + [a0+100])) (unsigned).
  The `beq` branch at 0x44c2f0 targets 0x44c2e8, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x44c308 targets 0x44c2d0 and is always taken.
  The return at 0x44c2e8 has v0 = 0x0.
  The return at 0x44c2f8 has v0 = one of ?, [a0+100].
  The instructions from 0x44c2bc to 0x44c2bc are not reached by any path from the entry, and their branches are not listed.

- `__glxLookupVisualConfig` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44c340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44c340-0x44c3f0 (176 bytes).
  It occupies 176 bytes.
  The `lw` at 0x44c34c loads 4 bytes from abs 0x472e94.
  The `lw` at 0x44c358 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44c364, `lw` at 0x44c380, `lw` at 0x44c384.
  The `blez` branch at 0x44c37c targets 0x44c3dc, is taken when a5(?) <= 0 (signed), and falls through when a5(?) > 0 (signed).
  The `beq` branch at 0x44c388 targets 0x44c3e4, is taken when t1(?) == a1, and falls through when t1(?) != a1.
  The `beq` branch at 0x44c390 targets 0x44c3a4 and is always taken.
  The `beq` branch at 0x44c39c targets 0x44c3d4, is taken when t2(?) == a1, and falls through when t2(?) != a1.
  The `beq` branch at 0x44c3ac targets 0x44c3d0, is taken when a6(?) >= a5(?) (signed), and falls through when a6(?) < a5(?) (signed).
  The `beq` branch at 0x44c3b8 targets 0x44c3d0, is taken when t8(?) == a1, and falls through when t8(?) != a1.
  The `bne` branch at 0x44c3c8 targets 0x44c398, is taken when a6(?) < a5(?) (signed), and falls through when a6(?) >= a5(?) (signed).
  The `bne` branch at 0x44c3d4 targets 0x44c3e8, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The return at 0x44c3dc has v0 = 0x0.
  The return at 0x44c3e8 has v0 = one of ?, table(0x0).

- `__glxLookupFBConfig` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44c400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44c400-0x44c4bc (188 bytes).
  It occupies 188 bytes.
  The `lw` at 0x44c40c loads 4 bytes from abs 0x472e94.
  The `lw` at 0x44c418 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44c424, `lw` at 0x44c44c, `lw` at 0x44c450.
  The `blez` branch at 0x44c448 targets 0x44c4a8, is taken when a5(?) <= 0 (signed), and falls through when a5(?) > 0 (signed).
  The `beq` branch at 0x44c454 targets 0x44c4b0, is taken when t1(?) == a1, and falls through when t1(?) != a1.
  The `beq` branch at 0x44c45c targets 0x44c474 and is always taken.
  The `beq` branch at 0x44c468 targets 0x44c4a0, is taken when t2(?) == a1, and falls through when t2(?) != a1.
  The `beq` branch at 0x44c478 targets 0x44c49c, is taken when a6(?) >= a5(?) (signed), and falls through when a6(?) < a5(?) (signed).
  The `beq` branch at 0x44c484 targets 0x44c49c, is taken when t8(?) == a1, and falls through when t8(?) != a1.
  The `bne` branch at 0x44c494 targets 0x44c464, is taken when a6(?) < a5(?) (signed), and falls through when a6(?) >= a5(?) (signed).
  The `bne` branch at 0x44c4a0 targets 0x44c4b4, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The return at 0x44c4a8 has v0 = 0x0.
  The return at 0x44c4b4 has v0 = one of ?, table(0x0).

- `__glxLookupFBConfigFromVid` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44c4c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44c4c0-0x44c57c (188 bytes).
  It occupies 188 bytes.
  The `lw` at 0x44c4cc loads 4 bytes from abs 0x472e94.
  The `lw` at 0x44c4d8 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44c4e4, `lw` at 0x44c50c, `lw` at 0x44c510.
  The `blez` branch at 0x44c508 targets 0x44c568, is taken when a5(?) <= 0 (signed), and falls through when a5(?) > 0 (signed).
  The `beq` branch at 0x44c514 targets 0x44c570, is taken when t1(?) == a1, and falls through when t1(?) != a1.
  The `beq` branch at 0x44c51c targets 0x44c534 and is always taken.
  The `beq` branch at 0x44c528 targets 0x44c560, is taken when t2(?) == a1, and falls through when t2(?) != a1.
  The `beq` branch at 0x44c538 targets 0x44c55c, is taken when a6(?) >= a5(?) (signed), and falls through when a6(?) < a5(?) (signed).
  The `beq` branch at 0x44c544 targets 0x44c55c, is taken when t8(?) == a1, and falls through when t8(?) != a1.
  The `bne` branch at 0x44c554 targets 0x44c524, is taken when a6(?) < a5(?) (signed), and falls through when a6(?) >= a5(?) (signed).
  The `bne` branch at 0x44c560 targets 0x44c574, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The return at 0x44c568 has v0 = 0x0.
  The return at 0x44c574 has v0 = one of ?, table(0x0).

- `RecalculateOtherEvents` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44c580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44c580-0x44c5c4 (68 bytes).
  It occupies 68 bytes.
  The `lw` at 0x44c584 loads 4 bytes from sym(__glxWindowPrivateIndex) +0x0.
  The `lw` at 0x44c588 loads 4 bytes from a0 (arg0 at entry) +0x80.
  The `lw` at 0x44c594 loads 4 bytes from ([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2)) +0x0.
  The `lw` at 0x44c598 loads 4 bytes from [([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))] +0x28.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44c5a4, `lw` at 0x44c5a8.
  2 such `sw` accesses store 4 bytes to [([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))] +0x24, including `sw` at 0x44c5b8, `sw` at 0x44c5c0.
  The `beq` branch at 0x44c59c targets 0x44c5bc, is taken when a2(=[[([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]+40]) == 0, and falls through when a2(=[[([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]+40]) != 0.
  The `bne` branch at 0x44c5ac targets 0x44c5a4, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The return at 0x44c5b4 has v0 = ?.
  The return at 0x44c5bc has v0 = ?.

- `__glXSetDrawableEventMask` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44c600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44c600-0x44c7b8 (440 bytes).
  It occupies 440 bytes.
  The `lw` at 0x44c61c loads 4 bytes from sym(__glxWindowPrivateIndex) +0x0.
  The `lw` at 0x44c624 loads 4 bytes from a1 (arg1 at entry) +0x80.
  The `lw` at 0x44c63c loads 4 bytes from ([a1+128] + ([sym(__glxWindowPrivateIndex)] << 0x2)) +0x0.
  The `lw` at 0x44c654 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x44c664 loads 4 bytes from sym(clients) +0x0.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44c674, `lw` at 0x44c6b0, `lw` at 0x44c6bc.
  The `sw` at 0x44c688 stores 4 bytes to [([a1+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))] +0x20.
  2 such `lw` accesses load 4 bytes from [([a1+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))] +0x28, including `lw` at 0x44c690, `lw` at 0x44c754.
  The `lw` at 0x44c6ac loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `sw` at 0x44c6d4 stores 4 bytes to ?.
  The `sw` at 0x44c71c stores 4 bytes to ret(Xalloc) +0x8.
  The `lw` at 0x44c724 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `sw` at 0x44c738 stores 4 bytes to ret(Xalloc) +0x4.
  The `lw` at 0x44c744 loads 4 bytes from sym(__glXOtherClientRes) +0x0.
  The `sw` at 0x44c758 stores 4 bytes to ret(Xalloc) +0x0.
  The `sw` at 0x44c75c stores 4 bytes to [([a1+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))] +0x28.
  The `jalr` at 0x44c6e8 calls Xalloc with a0=0xc, a1=?, a2=?, a3=?.
  The `jalr` at 0x44c720 calls FakeClientID with a0=[a0], a1=a2 at entry (arg2), a2=?, a3=?, a5=0xb.
  The `jalr` at 0x44c740 calls AddResource with a0=ret(FakeClientID), a1=[sym(__glXOtherClientRes)], a2=a1 at entry (arg1), a3=ret(Xalloc).
  The `bgezall` at 0x44c76c calls RecalculateOtherEvents [0x44c580] with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `jalr` at 0x44c790 calls FreeResource with a0=?, a1=0x0, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=[a0+4], a6=0x1fe00000, a7=([sym(__glxWindowPrivateIndex)] << 0x2).
  The `jalr` at 0x44c7a4 calls Xfree with a0=ret(Xalloc), a1=?, a2=?, a3=?, a5=[([a1+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))].
  The `beq` branch at 0x44c638 targets 0x44c654, is taken when (a2 & a6(=0xfffffffff7ffffff)) == 0, and falls through when (a2 & a6(=0xfffffffff7ffffff)) != 0.
  The `bne` branch at 0x44c678 targets 0x44c68c, is taken when t0(?) != a0, and falls through when t0(?) == a0.
  The `beq` branch at 0x44c684 targets 0x44c778 and is always taken.
  The `beq` branch at 0x44c69c targets 0x44c6e0, is taken when s0(=[[([a1+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]+40]) == 0, and falls through when s0(=[[([a1+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]+40]) != 0.
  The `beq` branch at 0x44c6a8 targets 0x44c6bc and is always taken.
  The `beq` branch at 0x44c6b4 targets 0x44c6e4, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `bne` branch at 0x44c6c4 targets 0x44c6b0, is taken when a5(=[a0+4]) != t8(?), and falls through when a5(=[a0+4]) == t8(?).
  The `beq` branch at 0x44c6cc targets 0x44c788, is taken when t9(=a2) == 0, and falls through when t9(=a2) != 0.
  The `bne` branch at 0x44c6d8 targets 0x44c760, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `bne` branch at 0x44c700 targets 0x44c710, is taken when v0(=ret(Xalloc)) != 0, and falls through when v0(=ret(Xalloc)) == 0.
  The `beq` branch at 0x44c708 targets 0x44c648 and is always taken.
  The `beq` branch at 0x44c748 targets 0x44c7a0, is taken when v0(=ret(AddResource)) == 0, and falls through when v0(=ret(AddResource)) != 0.
  The `beq` branch at 0x44c798 targets 0x44c6d8 and is always taken.
  The `beq` branch at 0x44c7b0 targets 0x44c644 and is always taken.
  The return at 0x44c64c has v0 = one of 0x2, 0xb.
  The return at 0x44c780 has v0 = 0x0.

- `__glXGetDrawableEventMask` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44c7c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44c7c0-0x44c854 (148 bytes).
  It occupies 148 bytes.
  The `lw` at 0x44c7c8 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x44c7d4 loads 4 bytes from abs 0x471a44.
  The `lw` at 0x44c7dc loads 4 bytes from abs 0x472e18.
  The `lw` at 0x44c7e4 loads 4 bytes from sym(clients) +0x0.
  The `lw` at 0x44c7ec loads 4 bytes from sym(__glxWindowPrivateIndex) +0x0.
  The `lw` at 0x44c7f4 loads 4 bytes from a1 (arg1 at entry) +0x80.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44c7f8, `lw` at 0x44c820, `lw` at 0x44c830.
  The `lw` at 0x44c80c loads 4 bytes from ([a1+128] + ([sym(__glxWindowPrivateIndex)] << 0x2)) +0x0.
  The `lw` at 0x44c810 loads 4 bytes from [([a1+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))] +0x28.
  The `lw` at 0x44c81c loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0x44c850 loads 4 bytes from [([a1+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))] +0x20.
  The `beq` branch at 0x44c808 targets 0x44c84c, is taken when a7(?) == a0, and falls through when a7(?) != a0.
  The `beq` branch at 0x44c814 targets 0x44c83c, is taken when a4(=[[([a1+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]+40]) == 0, and falls through when a4(=[[([a1+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]+40]) != 0.
  The `beq` branch at 0x44c828 targets 0x44c844, is taken when a3(=[a0+4]) == t3(?), and falls through when a3(=[a0+4]) != t3(?).
  The `bne` branch at 0x44c834 targets 0x44c820, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The return at 0x44c83c has v0 = 0x0.
  The return at 0x44c844 has v0 = ?.
  The return at 0x44c84c has v0 = [[([a1+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]+32].

- `Resize` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44c880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44c880-0x44c8a4 (36 bytes).
  It occupies 36 bytes.
  The `lw` at 0x44c880 loads 4 bytes from a0 (arg0 at entry) +0x14.
  The `sw` at 0x44c888 stores 4 bytes to a0 (arg0 at entry) +0x1c.
  The `sw` at 0x44c88c stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `sw` at 0x44c890 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `sw` at 0x44c8a0 stores 4 bytes to a0 (arg0 at entry) +0x20.
  The return at 0x44c89c has v0 = 0x1.

- `Lock` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44c8c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44c8c0-0x44c8c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x44c8c0 has v0 = ?.

- `Unlock` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44c900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44c900-0x44c908 (8 bytes).
  It occupies 8 bytes.
  The return at 0x44c900 has v0 = ?.

- `__glXFBMemSwapBuffers` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44c940 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44c940-0x44c9fc (188 bytes).
  It occupies 188 bytes.
  The `lw` at 0x44c958 loads 4 bytes from a0 (arg0 at entry) +0xb4.
  The `lw` at 0x44c95c loads 4 bytes from a0 (arg0 at entry) +0xb0.
  The `lw` at 0x44c968 loads 4 bytes from a0 (arg0 at entry) +0xac.
  The `lw` at 0x44c974 loads 4 bytes from a0 (arg0 at entry) +0xb8.
  The `lw` at 0x44c978 loads 4 bytes from a0 (arg0 at entry) +0xa0.
  The `lw` at 0x44c97c loads 4 bytes from a0 (arg0 at entry) +0xc8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8, including `lw` at 0x44c984, `lw` at 0x44c9ac.
  The `lw` at 0x44c994 loads 4 bytes from [a0+160] +0x0.
  The `lw` at 0x44c9c0 loads 4 bytes from [[a0+160]] +0x48.
  The `lw` at 0x44c9c4 loads 4 bytes from [[[a0+160]]+72] +0x8.
  The `jalr` at 0x44c9a0 calls ValidateGC with a0=[a0+8], a1=[[a0+160]], a2=[a0+172], a3=[a0+180], a4=[a0+176].
  The `jalr` at 0x44c9dc calls (unknown callee) with a0=[a0+8], a1=[[a0+160]], a2=[a0+180], a3=0x0, a4=0x0, a5=[a0+172], a6=[a0+176].
  The return at 0x44c9f4 has v0 = 0x1.

- `Free` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44ca00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44ca00-0x44ca60 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0x44ca08 loads 4 bytes from a0 (arg0 at entry) +0x44.
  The `lw` at 0x44ca0c loads 4 bytes from [a0+68] +0x0.
  The `sw` at 0x44ca54 stores 4 bytes to a0 (arg0 at entry) +0x44.
  The `jalr` at 0x44ca30 calls FreeScratchGC with a0=[[a0+68]], a1=a1 at entry (arg1), a2=[[a0+68]], a3=a3 at entry (arg3).
  The `jalr` at 0x44ca3c calls __glXFree with a0=[a0+68], a1=?, a2=?, a3=?.
  The `beq` branch at 0x44ca24 targets 0x44ca38, is taken when a2(=[[a0+68]]) == 0, and falls through when a2(=[[a0+68]]) != 0.
  The return at 0x44ca58 has v0 = a0.

- `__glXFBGetGC` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44ca80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44ca80-0x44ca9c (28 bytes).
  It occupies 28 bytes.
  The `lw` at 0x44ca80 loads 4 bytes from a0 (arg0 at entry) +0x44.
  The `lw` at 0x44ca90 loads 4 bytes from [a0+68] +0x0.
  The `beq` branch at 0x44ca84 targets 0x44ca94, is taken when a2(=[a0+68]) == 0, and falls through when a2(=[a0+68]) != 0.
  The return at 0x44ca8c has v0 = [[a0+68]].
  The return at 0x44ca94 has v0 = 0x0.

- `__glXInitFB` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44cac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44cac0-0x44cbc8 (264 bytes).
  It occupies 264 bytes.
  The `lw` at 0x44cadc loads 4 bytes from a1 (arg1 at entry) +0x204.
  The `sw` at 0x44cae0 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `sw` at 0x44cae4 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `sw` at 0x44cae8 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `sw` at 0x44caec stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `sw` at 0x44caf4 stores 4 bytes to a0 (arg0 at entry) +0x24.
  The `sw` at 0x44cafc stores 4 bytes to a0 (arg0 at entry) +0x10.
  The `sw` at 0x44cb04 stores 4 bytes to a0 (arg0 at entry) +0x20.
  The `sw` at 0x44cb20 stores 4 bytes to a0 (arg0 at entry) +0x14.
  The `sw` at 0x44cb30 stores 4 bytes to a0 (arg0 at entry) +0x18.
  The `sw` at 0x44cb34 stores 4 bytes to a0 (arg0 at entry) +0x34.
  The `sw` at 0x44cb4c stores 4 bytes to a0 (arg0 at entry) +0x28.
  The `sw` at 0x44cb54 stores 4 bytes to a0 (arg0 at entry) +0x2c.
  The `sw` at 0x44cb60 stores 4 bytes to a0 (arg0 at entry) +0x30.
  The `sw` at 0x44cb6c stores 4 bytes to a0 (arg0 at entry) +0x38.
  The `sw` at 0x44cb74 stores 4 bytes to a0 (arg0 at entry) +0x44.
  The `lw` at 0x44cb78 loads 4 bytes from [a1+516] +0x8.
  The `lw` at 0x44cb80 loads 4 bytes from [[a1+516]+8] +0x10.
  The `lbu` at 0x44cb88 loads 1 byte from [[a1+516]+8] +0x2.
  The `sw` at 0x44cb90 stores 4 bytes to ret(__glXMalloc) +0x0.
  The `lw` at 0x44cb94 loads 4 bytes from ret(CreateScratchGC) +0x44.
  The `lw` at 0x44cb98 loads 4 bytes from [ret(CreateScratchGC)+68] +0x10.
  The `jalr` at 0x44cb24 calls __glFloorLog2 with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44cb68 calls __glXMalloc with a0=0x4, a1=0x44ca00, a2=0x44c900, a3=0x44c8c0, a4=0x44c880.
  The `jalr` at 0x44cb84 calls CreateScratchGC with a0=[[[a1+516]+8]+16], a1=[[[a1+516]+8]+2]:1, a2=?, a3=?.
  The `jalr` at 0x44cbb0 calls (unknown callee) with a0=ret(CreateScratchGC), a1=0x0, a2=0x0, a3=0x0.
  The return at 0x44cbc0 has v0 = ret(?).

- `__glXImpMalloc` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44cc00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44cc00-0x44cc64 (100 bytes).
  It occupies 100 bytes.
  The `jalr` at 0x44cc20 calls Xalloc with a0=(a1 << 0x0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x44cc10 targets 0x44cc54, is taken when a1 == 0, and falls through when a1 != 0.
  The `bne` branch at 0x44cc2c targets 0x44cc44, is taken when v0(=ret(Xalloc)) != 0, and falls through when v0(=ret(Xalloc)) == 0.
  The return at 0x44cc3c has v0 = 0x0.
  The return at 0x44cc4c has v0 = ret(Xalloc).
  The return at 0x44cc5c has v0 = 0x0.

- `__glXImpCalloc` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44cc80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44cc80-0x44cd10 (144 bytes).
  It occupies 144 bytes.
  The `jalr` at 0x44ccb4 calls Xalloc with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44ccf4 calls xf86memset with a0=ret(Xalloc), a1=0x0, a2=?, a3=?.
  The `beq` branch at 0x44cc90 targets 0x44ccd8, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x44cc98 targets 0x44ccdc, is taken when a2 == 0, and falls through when a2 != 0.
  The `bne` branch at 0x44ccbc targets 0x44cce8, is taken when v0(=ret(Xalloc)) != 0, and falls through when v0(=ret(Xalloc)) == 0.
  The return at 0x44ccd0 has v0 = 0x0.
  The return at 0x44cce0 has v0 = 0x0.
  The return at 0x44cd08 has v0 = ret(Xalloc).

- `__glXImpFree` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44cd40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44cd40-0x44cd7c (60 bytes).
  It occupies 60 bytes.
  The `jalr` at 0x44cd6c calls Xfree with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x44cd50 targets 0x44cd64, is taken when a1 != 0, and falls through when a1 == 0.
  The `beq` branch at 0x44cd74 targets 0x44cd58 and is always taken.
  The return at 0x44cd5c has v0 = one of ?, ret(Xfree).

- `__glXImpRealloc` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44cd80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44cd80-0x44ce30 (176 bytes).
  It occupies 176 bytes.
  The `jalr` at 0x44cda8 calls Xrealloc with a0=a1 at entry (arg1), a1=(a2 << 0x0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44cdd8 calls Xalloc with a0=(a2 << 0x0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44ce14 calls Xfree with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x44cd94 targets 0x44cdcc, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x44cd9c targets 0x44ce10, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x44cdb4 targets 0x44cdec, is taken when v0(=ret(Xrealloc)) == 0, and falls through when v0(=ret(Xrealloc)) != 0.
  The `beq` branch at 0x44cdcc targets 0x44ce00, is taken when a2 == 0, and falls through when a2 != 0.
  The `bne` branch at 0x44cde4 targets 0x44cdbc, is taken when v0(=ret(Xalloc)) != 0, and falls through when v0(=ret(Xalloc)) == 0.
  The return at 0x44cdc4 has v0 = one of ret(Xrealloc), ret(Xalloc).
  The return at 0x44cdf4 has v0 = 0x0.
  The return at 0x44ce08 has v0 = 0x0.
  The return at 0x44ce28 has v0 = 0x0.
  The instructions from 0x44cdfc to 0x44cdfc are not reached by any path from the entry, and their branches are not listed.

- `__glXImpWarning` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44ce40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44ce40-0x44ce74 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x44ce5c calls ErrorF with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x44ce6c has v0 = ret(ErrorF).

- `__glXImpFatal` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44ce80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44ce80-0x44cec0 (64 bytes).
  It occupies 64 bytes.
  The `jalr` at 0x44ce9c calls ErrorF with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44cea8 calls xf86abort with a0=?, a1=?, a2=?, a3=?.
  The return at 0x44ceb8 has v0 = ret(xf86abort).

- `__glXImpGetenv` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44cec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44cec0-0x44cef4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x44cedc calls xf86getenv with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x44ceec has v0 = ret(xf86getenv).

- `__glXImpAtoi` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44cf00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44cf00-0x44cf34 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x44cf1c calls xf86atoi with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x44cf2c has v0 = ret(xf86atoi).

- `__glXImpSprintf` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44cf40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44cf40-0x44cf9c (92 bytes).
  It occupies 92 bytes.
  The `jalr` at 0x44cf84 calls xf86vsprintf with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=sp-40, a3=a3 at entry (arg3).
  The return at 0x44cf94 has v0 = ret(xf86vsprintf).

- `__glXImpFopen` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44cfc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44cfc0-0x44cff8 (56 bytes).
  It occupies 56 bytes.
  The `jalr` at 0x44cfe0 calls xf86fopen with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x44cff0 has v0 = ret(xf86fopen).

- `__glXImpFclose` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44d000 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44d000-0x44d034 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x44d01c calls xf86fclose with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x44d02c has v0 = ret(xf86fclose).

- `__glXImpFprintf` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44d040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44d040-0x44d09c (92 bytes).
  It occupies 92 bytes.
  The `jalr` at 0x44d084 calls xf86vfprintf with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=sp-40, a3=a3 at entry (arg3).
  The return at 0x44d094 has v0 = ret(xf86vfprintf).

- `__glXImpGetDrawablePrivate` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44d0c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44d0c0-0x44d0d0 (16 bytes).
  It occupies 16 bytes.
  The `lw` at 0x44d0c0 loads 4 bytes from a0 (arg0 at entry) +0x38.
  The `lw` at 0x44d0c4 loads 4 bytes from [a0+56] +0x68.
  The return at 0x44d0c8 has v0 = [[a0+56]+104]+60.

- `__glXInitMem` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44d340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44d340-0x44d3f0 (176 bytes).
  It occupies 176 bytes.
  The `sw` at 0x44d358 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `sw` at 0x44d35c stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `sw` at 0x44d360 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `sw` at 0x44d364 stores 4 bytes to a0 (arg0 at entry) +0x10.
  The `sw` at 0x44d36c stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `sw` at 0x44d374 stores 4 bytes to a0 (arg0 at entry) +0x24.
  The `sw` at 0x44d37c stores 4 bytes to a0 (arg0 at entry) +0x20.
  The `sw` at 0x44d398 stores 4 bytes to a0 (arg0 at entry) +0x14.
  The `sw` at 0x44d3bc stores 4 bytes to a0 (arg0 at entry) +0x18.
  The `sw` at 0x44d3c0 stores 4 bytes to a0 (arg0 at entry) +0x34.
  The `sw` at 0x44d3c8 stores 4 bytes to a0 (arg0 at entry) +0x28.
  The `sw` at 0x44d3d0 stores 4 bytes to a0 (arg0 at entry) +0x2c.
  The `sw` at 0x44d3d8 stores 4 bytes to a0 (arg0 at entry) +0x30.
  The `sw` at 0x44d3e0 stores 4 bytes to a0 (arg0 at entry) +0x38.
  The `jalr` at 0x44d39c calls __glFloorLog2 with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x44d3e8 has v0 = ret(__glFloorLog2).

- `glxDeletePbuffer` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44d400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44d400-0x44d408 (8 bytes).
  It occupies 8 bytes.
  The return at 0x44d400 has v0 = ?.

- `glxNewPbuffer` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44d440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44d440-0x44d448 (8 bytes).
  It occupies 8 bytes.
  The return at 0x44d440 has v0 = 0x0.

- `__glXScreenInitPbuffers` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44d480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44d480-0x44d508 (136 bytes).
  It occupies 136 bytes.
  The `sw` at 0x44d4ac stores 4 bytes to sym(__glxScreenPrivateIndex) +0x0.
  The `sw` at 0x44d4c4 stores 4 bytes to sym(__glxWindowPrivateIndex) +0x0.
  The `jalr` at 0x44d49c calls AllocateScreenPrivateIndex with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44d4b4 calls AllocateWindowPrivateIndex with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x44d4e0 calls ErrorF with a0=0x460168, a1=?, a2=?, a3=?.
  The `jalr` at 0x44d4f8 calls ErrorF with a0=0x4601a8, a1=?, a2=?, a3=?.
  The `bltz` branch at 0x44d4a8 targets 0x44d4d8, is taken when v0(=ret(AllocateScreenPrivateIndex)) < 0 (signed), and falls through when v0(=ret(AllocateScreenPrivateIndex)) >= 0 (signed).
  The `bltz` branch at 0x44d4c0 targets 0x44d4f0, is taken when v0(=ret(AllocateWindowPrivateIndex)) < 0 (signed), and falls through when v0(=ret(AllocateWindowPrivateIndex)) >= 0 (signed).
  The `beq` branch at 0x44d4e8 targets 0x44d4cc and is always taken.
  The `beq` branch at 0x44d500 targets 0x44d4cc and is always taken.
  The return at 0x44d4d0 has v0 = one of ret(AllocateWindowPrivateIndex), ret(ErrorF).

- `glxInitWinPriv` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44d540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44d540-0x44d684 (324 bytes).
  It occupies 324 bytes.
  The `lw` at 0x44d544 loads 4 bytes from a0 (arg0 at entry) +0x78.
  The `lw` at 0x44d548 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x44d574 loads 4 bytes from [a0+120] +0x0.
  The `lw` at 0x44d5c4 loads 4 bytes from sym(__glxWindowPrivateIndex) +0x0.
  The `lw` at 0x44d5c8 loads 4 bytes from a0 (arg0 at entry) +0x80.
  The `sw` at 0x44d5dc stores 4 bytes to ([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2)) +0x0.
  The `sw` at 0x44d5e0 stores 4 bytes to ret(Xalloc) +0x40.
  The `sw` at 0x44d5e4 stores 4 bytes to ret(Xalloc) +0x30.
  The `sw` at 0x44d5e8 stores 4 bytes to ret(Xalloc) +0x2c.
  The `sw` at 0x44d5ec stores 4 bytes to ret(Xalloc) +0x28.
  The `sw` at 0x44d5f0 stores 4 bytes to ret(Xalloc) +0x24.
  The `sw` at 0x44d5f4 stores 4 bytes to ret(Xalloc) +0x20.
  The `sw` at 0x44d5f8 stores 4 bytes to ret(Xalloc) +0x14.
  The `sw` at 0x44d5fc stores 4 bytes to ret(Xalloc) +0x10.
  The `sw` at 0x44d604 stores 4 bytes to ret(Xalloc) +0xc.
  The `sw` at 0x44d608 stores 4 bytes to ret(Xalloc) +0x8.
  The `sh` at 0x44d60c stores 2 bytes to ret(Xalloc) +0x1a.
  The `sw` at 0x44d610 stores 4 bytes to ret(Xalloc) +0x4.
  The `sw` at 0x44d618 stores 4 bytes to ret(Xalloc) +0x0.
  2 such `lw` accesses load 4 bytes from [a0+16] +0x0, including `lw` at 0x44d628, `lw` at 0x44d65c.
  2 such `sw` accesses store 4 bytes to ret(Xalloc) +0x1c, including `sw` at 0x44d62c, `sw` at 0x44d664.
  The `lw` at 0x44d674 loads 4 bytes from ret(FindWindowWithOptional) +0x78.
  The `lw` at 0x44d678 loads 4 bytes from [ret(FindWindowWithOptional)+120] +0x0.
  The `jalr` at 0x44d584 calls Xalloc with a0=0x54, a1=?, a2=?, a3=?.
  The `jalr` at 0x44d5b4 calls xf86bzero with a0=ret(Xalloc), a1=0x54, a2=?, a3=?.
  The `jalr` at 0x44d624 calls __glxLookupFBConfigFromVid with a0=[[a0+16]], a1=?, a2=a2 at entry (arg2), a3=0x1, a4=([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2)), a5=([sym(__glxWindowPrivateIndex)] << 0x2).
  The `jalr` at 0x44d658 calls __glxLookupFBConfig with a0=[[a0+16]], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=0x1, a4=([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2)), a5=([sym(__glxWindowPrivateIndex)] << 0x2).
  The `jalr` at 0x44d66c calls FindWindowWithOptional with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x44d56c targets 0x44d668, is taken when v0(=[a0+120]) == 0, and falls through when v0(=[a0+120]) != 0.
  The `bne` branch at 0x44d590 targets 0x44d5ac, is taken when v0(=ret(Xalloc)) != 0, and falls through when v0(=ret(Xalloc)) == 0.
  The `beq` branch at 0x44d614 targets 0x44d648, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x44d64c targets 0x44d630, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x44d660 targets 0x44d630 and is always taken.
  The `beq` branch at 0x44d67c targets 0x44d57c and is always taken.
  The return at 0x44d5a4 has v0 = 0x0.
  The return at 0x44d640 has v0 = ret(Xalloc).

- `glxAddDeepWindow` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44d6c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44d6c0-0x44d7f8 (312 bytes).
  It occupies 312 bytes.
  The `lw` at 0x44d6d8 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x44d6dc loads 4 bytes from sym(__glxScreenPrivateIndex) +0x0.
  The `lw` at 0x44d6e0 loads 4 bytes from [a0+16] +0x168.
  The `lw` at 0x44d6ec loads 4 bytes from ([[a0+16]+360] + ([sym(__glxScreenPrivateIndex)] << 0x2)) +0x0.
  The `lw` at 0x44d6fc loads 4 bytes from sym(__glxWindowPrivateIndex) +0x0.
  The `lw` at 0x44d700 loads 4 bytes from a0 (arg0 at entry) +0x80.
  3 such `lw` accesses load 4 bytes from [([[a0+16]+360] + ([sym(__glxScreenPrivateIndex)] << 0x2))] +0x78, including `lw` at 0x44d704, `lw` at 0x44d788, `lw` at 0x44d790.
  The `lw` at 0x44d71c loads 4 bytes from ([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2)) +0x0.
  The `lh` at 0x44d720 loads 2 bytes from [([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))] +0x18.
  The `lh` at 0x44d724 loads 2 bytes from [[([[a0+16]+360] + ([sym(__glxScreenPrivateIndex)] << 0x2))]+120] +0x18.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44d73c, `lw` at 0x44d764, `lw` at 0x44d76c.
  The `lh` at 0x44d748 loads 2 bytes from ?.
  2 such `sw` accesses store 4 bytes to [([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))] +0x30, including `sw` at 0x44d760, `sw` at 0x44d784.
  2 such `sw` accesses store 4 bytes to [([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))] +0x2c, including `sw` at 0x44d768, `sw` at 0x44d78c.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x44d778, `sw` at 0x44d780.
  The `sw` at 0x44d79c stores 4 bytes to [[([[a0+16]+360] + ([sym(__glxScreenPrivateIndex)] << 0x2))]+120] +0x30.
  The `sw` at 0x44d7a0 stores 4 bytes to [([[a0+16]+360] + ([sym(__glxScreenPrivateIndex)] << 0x2))] +0x78.
  The `lw` at 0x44d7a4 loads 4 bytes from [([[a0+16]+360] + ([sym(__glxScreenPrivateIndex)] << 0x2))] +0x18.
  The `jalr` at 0x44d7a8 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?, a4=[([[a0+16]+360] + ([sym(__glxScreenPrivateIndex)] << 0x2))], a5=([sym(__glxScreenPrivateIndex)] << 0x2), a6=0x2c2dc.
  The `jalr` at 0x44d7b8 calls miRegionCopy with a0=[([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]+52, a1=a0+44, a2=?, a3=?.
  The `jalr` at 0x44d7e0 calls ErrorF with a0=0x4601e8, a1=a1 at entry (arg1), a2=?, a3=?, a4=[([[a0+16]+360] + ([sym(__glxScreenPrivateIndex)] << 0x2))], a5=([sym(__glxScreenPrivateIndex)] << 0x2), a6=0x2c2dc.
  The `beq` branch at 0x44d718 targets 0x44d784, is taken when a2(=[[([[a0+16]+360] + ([sym(__glxScreenPrivateIndex)] << 0x2))]+120]) == 0, and falls through when a2(=[[([[a0+16]+360] + ([sym(__glxScreenPrivateIndex)] << 0x2))]+120]) != 0.
  The `bne` branch at 0x44d72c targets 0x44d784, is taken when a7(=[[[([[a0+16]+360] + ([sym(__glxScreenPrivateIndex)] << 0x2))]+120]+24]:2) < a0(=[[([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]+24]:2) (signed), and falls through when a7(=[[[([[a0+16]+360] + ([sym(__glxScreenPrivateIndex)] << 0x2))]+120]+24]:2) >= a0(=[[([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]+24]:2) (signed).
  The `beq` branch at 0x44d734 targets 0x44d7d8, is taken when a2(?) == s0(=[([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]), and falls through when a2(?) != s0(=[([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]).
  The `beq` branch at 0x44d740 targets 0x44d758, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x44d750 targets 0x44d734, is taken when t0(?) >= a0(=[[([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]+24]:2) (signed), and falls through when t0(?) < a0(=[[([a0+128] + ([sym(__glxWindowPrivateIndex)] << 0x2))]+24]:2) (signed).
  The `beq` branch at 0x44d758 targets 0x44d784, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x44d770 targets 0x44d77c, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x44d77c targets 0x44d7a4 and is always taken.
  The `beq` branch at 0x44d794 targets 0x44d7a0, is taken when a0(=[[([[a0+16]+360] + ([sym(__glxScreenPrivateIndex)] << 0x2))]+120]) == 0, and falls through when a0(=[[([[a0+16]+360] + ([sym(__glxScreenPrivateIndex)] << 0x2))]+120]) != 0.
  The `beq` branch at 0x44d7f0 targets 0x44d7cc and is always taken.
  The return at 0x44d7d0 has v0 = one of ret(miRegionCopy), ret(ErrorF).

- `__glXInitPix` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44d980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44d980-0x44da88 (264 bytes).
  It occupies 264 bytes.
  The `sw` at 0x44d998 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `sw` at 0x44d99c stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `sw` at 0x44d9a0 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `sw` at 0x44d9a4 stores 4 bytes to a0 (arg0 at entry) +0x10.
  The `sw` at 0x44d9a8 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `sw` at 0x44d9ac stores 4 bytes to a0 (arg0 at entry) +0x20.
  The `sw` at 0x44d9e8 stores 4 bytes to a0 (arg0 at entry) +0x14.
  The `sw` at 0x44da04 stores 4 bytes to a0 (arg0 at entry) +0x18.
  The `sw` at 0x44da08 stores 4 bytes to a0 (arg0 at entry) +0x24.
  The `lw` at 0x44da0c loads 4 bytes from a4 (arg4 at entry) +0x10.
  The `sw` at 0x44da18 stores 4 bytes to a4 (arg4 at entry) +0x10.
  The `sw` at 0x44da20 stores 4 bytes to a0 (arg0 at entry) +0x28.
  The `sw` at 0x44da28 stores 4 bytes to a0 (arg0 at entry) +0x2c.
  The `sw` at 0x44da30 stores 4 bytes to a0 (arg0 at entry) +0x30.
  The `sw` at 0x44da38 stores 4 bytes to a0 (arg0 at entry) +0x34.
  The `sw` at 0x44da44 stores 4 bytes to a0 (arg0 at entry) +0x38.
  The `sw` at 0x44da4c stores 4 bytes to a0 (arg0 at entry) +0x44.
  The `lw` at 0x44da50 loads 4 bytes from a4 (arg4 at entry) +0x0.
  The `lw` at 0x44da58 loads 4 bytes from [a4] +0x10.
  The `lbu` at 0x44da64 loads 1 byte from [a4] +0x2.
  The `sw` at 0x44da78 stores 4 bytes to ret(__glXMalloc) +0x0.
  The `jalr` at 0x44d9ec calls __glFloorLog2 with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44da40 calls __glXMalloc with a0=0x4, a1=0x44d8c0, a2=0x44d880, a3=0x44d840, a4=0x44d800, a5=[a4+16]+1.
  The `jalr` at 0x44da60 calls CreateScratchGC with a0=[[a4]+16], a1=[[a4]+2]:1, a2=?, a3=?.
  The return at 0x44da80 has v0 = ret(CreateScratchGC).

- `PositionWindow` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44dac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44dac0-0x44dbbc (252 bytes).
  It occupies 252 bytes.
  The `lw` at 0x44dac8 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x44dad8 loads 4 bytes from [a0+16] +0x0.
  The `lw` at 0x44daec loads 4 bytes from sym(__glXActiveScreens) +0x0.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44dafc, `lw` at 0x44db84, `lw` at 0x44db90.
  2 such `sw` accesses store 4 bytes to [a0+16] +0xa4, including `sw` at 0x44db0c, `sw` at 0x44db28.
  The `lw` at 0x44db2c loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0x44db38 loads 4 bytes from sym(__glXDrawPrivRes) +0x0.
  The `lw` at 0x44db78 loads 4 bytes from ret(LookupIDByType) +0x2c.
  The `sw` at 0x44db8c stores 4 bytes to ?.
  The `jalr` at 0x44db08 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44db34 calls LookupIDByType with a0=[a0+4], a1=[sym(__glXDrawPrivRes)], a2=?, a3=0x44dac0.
  The `jalr` at 0x44db68 calls __glXResizeDrawableBuffers with a0=ret(LookupIDByType), a1=?, a2=?, a3=?.
  The `bne` branch at 0x44db40 targets 0x44db64, is taken when v0(=ret(LookupIDByType)) != 0, and falls through when v0(=ret(LookupIDByType)) == 0.
  The `beq` branch at 0x44db74 targets 0x44dbb4, is taken when v0(=ret(__glXResizeDrawableBuffers)) == 0, and falls through when v0(=ret(__glXResizeDrawableBuffers)) != 0.
  The `beq` branch at 0x44db7c targets 0x44db9c, is taken when a3(=[ret(LookupIDByType)+44]) == 0, and falls through when a3(=[ret(LookupIDByType)+44]) != 0.
  The `bne` branch at 0x44db94 targets 0x44db84, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x44dbb4 targets 0x44db7c and is always taken.
  The return at 0x44db5c has v0 = ret(?).
  The return at 0x44dbac has v0 = ?.

- `wrapPositionWindow` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44dbc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44dbc0-0x44dc00 (64 bytes).
  It occupies 64 bytes.
  The `lw` at 0x44dbd4 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  The `lw` at 0x44dbdc loads 4 bytes from (sym(screenInfo) + (a0 << 0x2)) +0x34.
  The `lw` at 0x44dbec loads 4 bytes from [(sym(screenInfo) + (a0 << 0x2))+52] +0xa4.
  The `sw` at 0x44dbf0 stores 4 bytes to ?.
  The `sw` at 0x44dbfc stores 4 bytes to [(sym(screenInfo) + (a0 << 0x2))+52] +0xa4.
  The return at 0x44dbf8 has v0 = [(sym(screenInfo) + (a0 << 0x2))+52].

- `__glXHyperpipeInit` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44dd00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44dd00-0x44ddb4 (180 bytes).
  It occupies 180 bytes.
  The `lw` at 0x44dd38 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `sw` at 0x44dd40 stores 4 bytes to ([0x472ed0] + (a0 << 0x4)) +0x8.
  The `lw` at 0x44dd44 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `sw` at 0x44dd48 stores 4 bytes to ([0x472ed0] + (a0 << 0x4)) +0x0.
  The `lw` at 0x44dd4c loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `sw` at 0x44dd50 stores 4 bytes to ([0x472ed0] + (a0 << 0x4)) +0x4.
  The `lw` at 0x44dd54 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `sw` at 0x44dd60 stores 4 bytes to ([0x472ed0] + (a0 << 0x4)) +0xc.
  The `jalr` at 0x44dd78 calls Xrealloc with a0=[0x472ed0], a1=([0x472ed4] << 0x4)+256, a2=a2 at entry (arg2), a3=[0x472ed4].
  The `jalr` at 0x44dd94 calls xf86bzero with a0=(ret(Xrealloc) + ([0x472ed4] << 0x4)), a1=0x100, a2=?, a3=?.
  The `beq` branch at 0x44dd20 targets 0x44dd64, is taken when a0 >= a3(=[0x472ed4]) (signed), and falls through when a0 < a3(=[0x472ed4]) (signed).
  The `beq` branch at 0x44ddac targets 0x44dd28 and is always taken.
  The return at 0x44dd5c has v0 = one of ?, ret(xf86bzero).

- `__glXScreenInit` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44ddc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44ddc0-0x44e2f0 (1328 bytes).
  It occupies 1328 bytes.
  The `sw` at 0x44de28 stores 4 bytes to sym(__glXActiveScreens) +0x0.
  2 such `lw` accesses load 4 bytes from sym(__glXNumStaticScreens) +0x0, including `lw` at 0x44de48, `lw` at 0x44ded0.
  The `lw` at 0x44de8c loads 4 bytes from sym(__glXScreens) +0x0.
  25 such `lw` accesses load 4 bytes from sym(__glXActiveScreens) +0x0, including `lw` at 0x44de90, `lw` at 0x44de9c, `lw` at 0x44dea8.
  28 such `sw` accesses store 4 bytes to ?, including `sw` at 0x44de98, `sw` at 0x44dea4, `sw` at 0x44deb0.
  26 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44dee4, `lw` at 0x44dee8, `lw` at 0x44df04.
  The `sw` at 0x44e2b8 stores 4 bytes to sym(__glXNumActiveScreens) +0x0.
  The `jalr` at 0x44ddf0 calls __glXMalloc with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x44dec4 calls wrapPositionWindow [0x44dbc0] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x44deec calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x44e068 calls xf86strdup with a0=0x46bec8, a1=?, a2=?, a3=?, a5=0x10.
  The `jalr` at 0x44e080 calls xf86strdup with a0=0x472eac, a1=?, a2=?, a3=?.
  The `jalr` at 0x44e098 calls xf86strdup with a0=0x46bf38, a1=?, a2=?, a3=?.
  The `jalr` at 0x44e0b0 calls xf86strdup with a0=0x46bf48, a1=?, a2=?, a3=?.
  The `jalr` at 0x44e0d0 calls xf86strlen with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x44e0e4 calls xf86strlen with a0=0x460228, a1=?, a2=?, a3=?.
  The `jalr` at 0x44e0f8 calls xf86strlen with a0=0x460240, a1=?, a2=?, a3=?.
  The `jalr` at 0x44e10c calls xf86strlen with a0=0x460258, a1=?, a2=?, a3=?.
  The `jalr` at 0x44e120 calls xf86strlen with a0=0x460270, a1=?, a2=?, a3=?.
  The `jalr` at 0x44e158 calls __glXRealloc with a0=?, a1=((ret(xf86strlen) + ((ret(xf86strlen) + ret(xf86strlen)) + (ret(xf86strlen) + ret(xf86strlen))))+2 << 0x0), a2=0x2, a3=?.
  The `jalr` at 0x44e188 calls xf86strcat with a0=?, a1=0x460258, a2=?, a3=?.
  The `jalr` at 0x44e1a4 calls xf86strcat with a0=?, a1=0x460270, a2=?, a3=?.
  The `jalr` at 0x44e204 calls xf86strcat with a0=?, a1=0x460240, a2=?, a3=?.
  The `jalr` at 0x44e298 calls xf86strcat with a0=?, a1=0x460228, a2=?, a3=?.
  The `jalr` at 0x44e2b4 calls __glXScreenInitPbuffers with a0=?, a1=?, a2=?, a3=?.
  The `blez` branch at 0x44de24 targets 0x44e2a8, is taken when v1(=a0) <= 0 (signed), and falls through when v1(=a0) > 0 (signed).
  The `beq` branch at 0x44de44 targets 0x44de7c and is always taken.
  The `beq` branch at 0x44de74 targets 0x44e2a8, is taken when t8(?) == t9(=a0), and falls through when t8(?) != t9(=a0).
  The `blez` branch at 0x44de80 targets 0x44de4c, is taken when at(=[sym(__glXNumStaticScreens)]) <= 0 (signed), and falls through when at(=[sym(__glXNumStaticScreens)]) > 0 (signed).
  The `beq` branch at 0x44de88 targets 0x44dee8 and is always taken.
  The `beq` branch at 0x44dedc targets 0x44de4c, is taken when s7(?) >= at(=[sym(__glXNumStaticScreens)]) (signed), and falls through when s7(?) < at(=[sym(__glXNumStaticScreens)]) (signed).
  The `beq` branch at 0x44def4 targets 0x44decc, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `bne` branch at 0x44df28 targets 0x44df10, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x44df84 targets 0x44dfd4 and is always taken.
  The `bgtz` branch at 0x44e018 targets 0x44df8c, is taken when t0(?) > 0 (signed), and falls through when t0(?) <= 0 (signed).
  The `bne` branch at 0x44e1c0 targets 0x44e214, is taken when a1(=[0x472ecc]) < s7(?) (signed), and falls through when a1(=[0x472ecc]) >= s7(?) (signed).
  The `beq` branch at 0x44e1c8 targets 0x44e214, is taken when a2(=[0x472ec8]) == 0, and falls through when a2(=[0x472ec8]) != 0.
  The `beq` branch at 0x44e1d4 targets 0x44e214, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x44e20c targets 0x44e228 and is always taken.
  The `bne` branch at 0x44e22c targets 0x44de90, is taken when a5(=[0x472ed4]) < s7(?) (signed), and falls through when a5(=[0x472ed4]) >= s7(?) (signed).
  The `beq` branch at 0x44e234 targets 0x44de90, is taken when at(=[0x472ed0]) == 0, and falls through when at(=[0x472ed0]) != 0.
  The `beq` branch at 0x44e244 targets 0x44de90, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x44e2a0 targets 0x44dec4 and is always taken.
  The return at 0x44e2e8 has v0 = ret(__glXScreenInitPbuffers).

- `__glXScreenReset` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44e300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44e300-0x44e3d8 (216 bytes).
  It occupies 216 bytes.
  2 such `lw` accesses load 4 bytes from sym(__glXNumActiveScreens) +0x0, including `lw` at 0x44e31c, `lw` at 0x44e388.
  4 such `lw` accesses load 4 bytes from sym(__glXActiveScreens) +0x0, including `lw` at 0x44e348, `lw` at 0x44e35c, `lw` at 0x44e370.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44e358, `lw` at 0x44e36c, `lw` at 0x44e384.
  The `sw` at 0x44e3c0 stores 4 bytes to sym(__glXActiveScreens) +0x0.
  The `sw` at 0x44e3c8 stores 4 bytes to sym(__glXNumActiveScreens) +0x0.
  The `jalr` at 0x44e354 calls __glXFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x44e368 calls __glXFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x44e380 calls __glXFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x44e3b0 calls Xfree with a0=[sym(__glXActiveScreens)], a1=?, a2=?, a3=?.
  The `blez` branch at 0x44e334 targets 0x44e3a0, is taken when at(=[sym(__glXNumActiveScreens)]) <= 0 (signed), and falls through when at(=[sym(__glXNumActiveScreens)]) > 0 (signed).
  The `bne` branch at 0x44e394 targets 0x44e348, is taken when s3(?) < a1(=[sym(__glXNumActiveScreens)]) (signed), and falls through when s3(?) >= a1(=[sym(__glXNumActiveScreens)]) (signed).
  The return at 0x44e3d0 has v0 = ret(Xfree).

- `__glXNop` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44e400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44e400-0x44e408 (8 bytes).
  It occupies 8 bytes.
  The return at 0x44e400 has v0 = ?.

- `__glXMalloc` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44e440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44e440-0x44e4a8 (104 bytes).
  It occupies 104 bytes.
  The `jalr` at 0x44e464 calls Xalloc with a0=(a0 << 0x0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x44e454 targets 0x44e498, is taken when a0 == 0, and falls through when a0 != 0.
  The `bne` branch at 0x44e470 targets 0x44e488, is taken when v0(=ret(Xalloc)) != 0, and falls through when v0(=ret(Xalloc)) == 0.
  The return at 0x44e480 has v0 = 0x0.
  The return at 0x44e490 has v0 = ret(Xalloc).
  The return at 0x44e4a0 has v0 = 0x0.

- `__glXCalloc` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44e4c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44e4c0-0x44e554 (148 bytes).
  It occupies 148 bytes.
  The `jalr` at 0x44e4f8 calls Xalloc with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44e538 calls xf86memset with a0=ret(Xalloc), a1=0x0, a2=?, a3=?.
  The `beq` branch at 0x44e4d4 targets 0x44e51c, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x44e4dc targets 0x44e520, is taken when a1 == 0, and falls through when a1 != 0.
  The `bne` branch at 0x44e500 targets 0x44e52c, is taken when v0(=ret(Xalloc)) != 0, and falls through when v0(=ret(Xalloc)) == 0.
  The return at 0x44e514 has v0 = 0x0.
  The return at 0x44e524 has v0 = 0x0.
  The return at 0x44e54c has v0 = ret(Xalloc).

- `__glXRealloc` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44e580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44e580-0x44e630 (176 bytes).
  It occupies 176 bytes.
  The `jalr` at 0x44e5a8 calls Xrealloc with a0=a0 at entry (arg0), a1=(a1 << 0x0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44e5d8 calls Xalloc with a0=(a1 << 0x0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44e614 calls Xfree with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x44e594 targets 0x44e5cc, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x44e59c targets 0x44e610, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x44e5b4 targets 0x44e5ec, is taken when v0(=ret(Xrealloc)) == 0, and falls through when v0(=ret(Xrealloc)) != 0.
  The `beq` branch at 0x44e5cc targets 0x44e600, is taken when a1 == 0, and falls through when a1 != 0.
  The `bne` branch at 0x44e5e4 targets 0x44e5bc, is taken when v0(=ret(Xalloc)) != 0, and falls through when v0(=ret(Xalloc)) == 0.
  The return at 0x44e5c4 has v0 = one of ret(Xrealloc), ret(Xalloc).
  The return at 0x44e5f4 has v0 = 0x0.
  The return at 0x44e608 has v0 = 0x0.
  The return at 0x44e628 has v0 = 0x0.
  The instructions from 0x44e5fc to 0x44e5fc are not reached by any path from the entry, and their branches are not listed.

- `__glXFree` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44e640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44e640-0x44e67c (60 bytes).
  It occupies 60 bytes.
  The `jalr` at 0x44e66c calls Xfree with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x44e650 targets 0x44e664, is taken when a0 != 0, and falls through when a0 == 0.
  The `beq` branch at 0x44e674 targets 0x44e658 and is always taken.
  The return at 0x44e65c has v0 = one of ?, ret(Xfree).

- `__glXAssociateContext` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44e680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44e680-0x44e6c0 (64 bytes).
  It occupies 64 bytes.
  The `lw` at 0x44e698 loads 4 bytes from a1 (arg1 at entry) +0x2c.
  The `sw` at 0x44e69c stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `sw` at 0x44e6a0 stores 4 bytes to a1 (arg1 at entry) +0x2c.
  The `jalr` at 0x44e6a8 calls __glXRefDrawablePrivate with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x44e6b8 has v0 = ret(__glXRefDrawablePrivate).

- `__glXDeassociateContext` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44e6c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44e6c0-0x44e744 (132 bytes).
  It occupies 132 bytes.
  The `lw` at 0x44e6dc loads 4 bytes from a1 (arg1 at entry) +0x2c.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44e6f0, `lw` at 0x44e70c.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x44e710, `sw` at 0x44e71c.
  The `sw` at 0x44e738 stores 4 bytes to a1 (arg1 at entry) +0x2c.
  The `jalr` at 0x44e720 calls __glXUnrefDrawablePrivate with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?.
  The `beq` branch at 0x44e6d4 targets 0x44e72c, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x44e6e0 targets 0x44e72c, is taken when a3(=[a1+44]) == 0, and falls through when a3(=[a1+44]) != 0.
  The `beq` branch at 0x44e6e8 targets 0x44e708, is taken when a0 == a3(?), and falls through when a0 != a3(?).
  The `bne` branch at 0x44e6f8 targets 0x44e6e8, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x44e700 targets 0x44e730 and is always taken.
  The `beq` branch at 0x44e708 targets 0x44e738, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x44e73c targets 0x44e718 and is always taken.
  The return at 0x44e730 has v0 = ?.

- `__glXGetDrawableSize` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44e780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44e780-0x44e7c8 (72 bytes).
  It occupies 72 bytes.
  The `lw` at 0x44e780 loads 4 bytes from a0 (arg0 at entry) +0x204.
  The `lw` at 0x44e78c loads 4 bytes from [a0+516] +0x1c.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0x44e790, `sw` at 0x44e7c4.
  The `lw` at 0x44e794 loads 4 bytes from [a0+516] +0x20.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x0, including `sw` at 0x44e798, `sw` at 0x44e7b8.
  The `lw` at 0x44e79c loads 4 bytes from [a0+516] +0x24.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0x44e7a0, `sw` at 0x44e7b4.
  The `lw` at 0x44e7a4 loads 4 bytes from [a0+516] +0x28.
  2 such `sw` accesses store 4 bytes to a4 (arg4 at entry) +0x0, including `sw` at 0x44e7ac, `sw` at 0x44e7b0.
  The `beq` branch at 0x44e784 targets 0x44e7b0, is taken when a6(=[a0+516]) == 0, and falls through when a6(=[a0+516]) != 0.
  The return at 0x44e7a8 has v0 = [[a0+516]+36].
  The return at 0x44e7c0 has v0 = ?.

- `__glXResizeDrawable` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44e800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44e800-0x44e808 (8 bytes).
  It occupies 8 bytes.
  The return at 0x44e800 has v0 = 0x1.

- `__glXFormatGLModes` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44e840 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44e840-0x44ea00 (448 bytes).
  It occupies 448 bytes.
  9 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44e8ac, `lw` at 0x44e918, `lw` at 0x44e928.
  9 such `sw` accesses store 4 bytes to ?, including `sw` at 0x44e8b8, `sw` at 0x44e920, `sw` at 0x44e930.
  The `lw` at 0x44e9cc loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x44e9d0 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x44e9d4 loads 4 bytes from a0 (arg0 at entry) +0x18.
  The `lw` at 0x44e9d8 loads 4 bytes from a0 (arg0 at entry) +0x14.
  The `sw` at 0x44e9f4 stores 4 bytes to a0 (arg0 at entry) +0x2c.
  The `jalr` at 0x44e86c calls xf86memset with a0=a0 at entry (arg0), a1=0x0, a2=0x6c, a3=a3 at entry (arg3).
  The `bne` branch at 0x44e8b4 targets 0x44e89c, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bgtz` branch at 0x44e9a4 targets 0x44e918, is taken when t0(?) > 0 (signed), and falls through when t0(?) <= 0 (signed).
  The return at 0x44e9f8 has v0 = [a0+24].

- `LockDP` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44ea00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44ea00-0x44ead0 (208 bytes).
  It occupies 208 bytes.
  The `lw` at 0x44ea08 loads 4 bytes from a1 (arg1 at entry) +0x38.
  3 such `lw` accesses load 4 bytes from [a1+56] +0x3c, including `lw` at 0x44ea0c, `lw` at 0x44ea54, `lw` at 0x44ea94.
  3 such `sw` accesses store 4 bytes to [a1+56] +0x3c, including `sw` at 0x44ea44, `sw` at 0x44ea68, `sw` at 0x44eaa8.
  The `lw` at 0x44ea48 loads 4 bytes from a1 (arg1 at entry) +0x5c.
  The `lw` at 0x44ea6c loads 4 bytes from a1 (arg1 at entry) +0x60.
  The `lw` at 0x44ea70 loads 4 bytes from [a1+56] +0x68.
  The `sw` at 0x44ea90 stores 4 bytes to [a1+56] +0x68.
  The `lw` at 0x44eaac loads 4 bytes from a1 (arg1 at entry) +0x64.
  The `jalr` at 0x44ea4c calls (unknown callee) with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[[a1+56]+60].
  The `jalr` at 0x44ea78 calls (unknown callee) with a0=a1 at entry (arg1), a1=[[a1+56]+104], a2=?, a3=[[a1+56]+60].
  The `jalr` at 0x44ea88 calls __glXDeassociateContext with a0=[a1+56], a1=[[a1+56]+104], a2=?, a3=?.
  The `jalr` at 0x44eab0 calls (unknown callee) with a0=a1 at entry (arg1), a1=?, a2=?, a3=[[a1+56]+60].
  The `beq` branch at 0x44ea30 targets 0x44eab8, is taken when (a3(=[[a1+56]+60]) & 0x7) == 0, and falls through when (a3(=[[a1+56]+60]) & 0x7) != 0.
  The `beq` branch at 0x44ea38 targets 0x44ea58, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x44ea5c targets 0x44ea98, is taken when (a3(=[[a1+56]+60]) & 0x2) == 0, and falls through when (a3(=[[a1+56]+60]) & 0x2) != 0.
  The `beq` branch at 0x44ea9c targets 0x44eab8, is taken when (a3(=[[a1+56]+60]) & 0x4) == 0, and falls through when (a3(=[[a1+56]+60]) & 0x4) != 0.
  The return at 0x44eac8 has v0 = one of 0x2af9c, ?, ret(?).

- `UnlockDP` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44eb00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44eb00-0x44eb08 (8 bytes).
  It occupies 8 bytes.
  The return at 0x44eb00 has v0 = ?.

- `__glXRefDrawablePrivate` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44eb40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44eb40-0x44eb50 (16 bytes).
  It occupies 16 bytes.
  The `lw` at 0x44eb40 loads 4 bytes from a0 (arg0 at entry) +0x248.
  The `sw` at 0x44eb4c stores 4 bytes to a0 (arg0 at entry) +0x248.
  The return at 0x44eb48 has v0 = ?.

- `__glXUnrefDrawablePrivate` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44eb80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44eb80-0x44ebc8 (72 bytes).
  It occupies 72 bytes.
  The `lw` at 0x44eb84 loads 4 bytes from a0 (arg0 at entry) +0x248.
  The `sw` at 0x44eba0 stores 4 bytes to a0 (arg0 at entry) +0x248.
  The `jalr` at 0x44ebb8 calls __glXDestroyDrawablePrivate with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x44eb9c targets 0x44ebb0, is taken when at(=[a0+584]-1) == 0, and falls through when at(=[a0+584]-1) != 0.
  The `beq` branch at 0x44ebc0 targets 0x44eba4 and is always taken.
  The return at 0x44eba8 has v0 = one of 0x2ae1c, ret(__glXDestroyDrawablePrivate).

- `__glXCreateDrawablePrivate` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44ec00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44ec00-0x44f030 (1072 bytes).
  It occupies 1072 bytes.
  The `lbu` at 0x44ec5c loads 1 byte from a0 (arg0 at entry) +0x0.
  The `sw` at 0x44ec60 stores 4 bytes to ret(__glXMalloc) +0x8.
  The `sw` at 0x44ec64 stores 4 bytes to ret(__glXMalloc) +0xc.
  The `sw` at 0x44ec6c stores 4 bytes to ret(__glXMalloc) +0x244.
  The `sw` at 0x44ec74 stores 4 bytes to ret(__glXMalloc) +0x14.
  The `lw` at 0x44ec80 loads 4 bytes from sym(__glXPixmapRes) +0x0.
  The `sw` at 0x44ec90 stores 4 bytes to ret(__glXMalloc) +0x10.
  The `lw` at 0x44ec9c loads 4 bytes from sym(__glXDrawPrivRes) +0x0.
  The `sw` at 0x44ecd0 stores 4 bytes to ret(__glXMalloc) +0x40.
  15 such `lw` accesses load 4 bytes from ?, including `lw` at 0x44ece8, `lw` at 0x44ed58, `lw` at 0x44ed68.
  9 such `sw` accesses store 4 bytes to ?, including `sw` at 0x44ecf4, `sw` at 0x44ed60, `sw` at 0x44ed70.
  The `sw` at 0x44ee34 stores 4 bytes to ret(__glXMalloc) +0x208.
  The `sw` at 0x44ee38 stores 4 bytes to ret(__glXMalloc) +0x20c.
  The `sw` at 0x44ee3c stores 4 bytes to ret(__glXMalloc) +0x218.
  The `sw` at 0x44ee40 stores 4 bytes to ret(__glXMalloc) +0x234.
  The `sw` at 0x44ee44 stores 4 bytes to ret(__glXMalloc) +0x240.
  The `sw` at 0x44ee48 stores 4 bytes to ret(__glXMalloc) +0x214.
  The `sw` at 0x44ee4c stores 4 bytes to ret(__glXMalloc) +0x228.
  The `sw` at 0x44ee50 stores 4 bytes to ret(__glXMalloc) +0x224.
  The `sw` at 0x44ee54 stores 4 bytes to ret(__glXMalloc) +0x210.
  The `sw` at 0x44ee5c stores 4 bytes to ret(__glXMalloc) +0x21c.
  The `sw` at 0x44ee68 stores 4 bytes to ret(__glXMalloc) +0x22c.
  The `sw` at 0x44ee74 stores 4 bytes to ret(__glXMalloc) +0x230.
  The `sw` at 0x44ee78 stores 4 bytes to ret(__glXMalloc) +0x1f0.
  The `sw` at 0x44ee80 stores 4 bytes to ret(__glXMalloc) +0x1ec.
  The `sw` at 0x44ee8c stores 4 bytes to ret(__glXMalloc) +0x30.
  The `sw` at 0x44ee90 stores 4 bytes to ret(__glXMalloc) +0x34.
  The `lw` at 0x44ee94 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x44ee98 loads 4 bytes from [a0+16] +0x0.
  The `lw` at 0x44eea0 loads 4 bytes from ret(__glXMalloc) +0x14.
  The `lw` at 0x44eea8 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  The `lw` at 0x44eeb4 loads 4 bytes from ret(__glXMalloc) +0x10.
  The `lw` at 0x44eecc loads 4 bytes from [ret(__glXMalloc)+16] +0x14.
  4 such `sw` accesses store 4 bytes to ret(__glXMalloc) +0x18, including `sw` at 0x44eed0, `sw` at 0x44ef78, `sw` at 0x44efec.
  The `lw` at 0x44ef10 loads 4 bytes from a0 (arg0 at entry) +0x78.
  The `lw` at 0x44ef24 loads 4 bytes from [a0+120] +0x0.
  The `lw` at 0x44efd8 loads 4 bytes from sym(__glXWindowRes) +0x0.
  The `lw` at 0x44efe4 loads 4 bytes from ret(LookupIDByType) +0x18.
  The `lw` at 0x44effc loads 4 bytes from sym(__glXPbufferRes) +0x0.
  The `lw` at 0x44f008 loads 4 bytes from ret(LookupIDByType) +0x14.
  The `lw` at 0x44f020 loads 4 bytes from ret(FindWindowWithOptional) +0x78.
  The `lw` at 0x44f02c loads 4 bytes from [ret(FindWindowWithOptional)+120] +0x0.
  The `jalr` at 0x44ec38 calls __glXMalloc with a0=0x24c, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44ec50 calls xf86memset with a0=ret(__glXMalloc), a1=0x0, a2=0x24c, a3=?.
  The `jalr` at 0x44ec7c calls LookupIDByType with a0=a1 at entry (arg1), a1=[sym(__glXPixmapRes)], a2=0x1, a3=[a0]:1.
  The `jalr` at 0x44ec98 calls AddResource with a0=a1 at entry (arg1), a1=[sym(__glXDrawPrivRes)], a2=ret(__glXMalloc), a3=?.
  The `jalr` at 0x44ecb0 calls __glXMalloc with a0=0x6c, a1=?, a2=?, a3=?.
  The `jalr` at 0x44ee70 calls __glXCalloc with a0=0x1, a1=0x10, a2=sym(__glXMalloc), a3=a2+12, a4=ret(__glXMalloc)+12, a5=0x10.
  The `jalr` at 0x44eedc calls __glXPixInitDrawable with a0=ret(__glXMalloc), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0x44eee8 calls (unknown callee) with a0=ret(__glXMalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x44ef88 calls __glXFBInitDrawable with a0=ret(__glXMalloc), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jalr` at 0x44ef9c calls __glXFree with a0=ret(__glXMalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x44efd4 calls LookupIDByType with a0=a1 at entry (arg1), a1=[sym(__glXWindowRes)], a2=?, a3=?, a4=[ret(__glXMalloc)+20], a5=[[a0+16]], a6=sym(__glXNop), a7=sym(__glXFreeBuffers).
  The `jalr` at 0x44eff8 calls LookupIDByType with a0=a1 at entry (arg1), a1=[sym(__glXPbufferRes)], a2=?, a3=?.
  The `jalr` at 0x44f018 calls FindWindowWithOptional with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[ret(__glXMalloc)+20], a5=[[a0+16]], a6=sym(__glXNop), a7=sym(__glXFreeBuffers).
  The `beq` branch at 0x44eca0 targets 0x44ef98, is taken when v0(=ret(AddResource)) == 0, and falls through when v0(=ret(AddResource)) != 0.
  The `bne` branch at 0x44ecf0 targets 0x44ecd8, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bgtz` branch at 0x44ede4 targets 0x44ed58, is taken when t0(?) > 0 (signed), and falls through when t0(?) <= 0 (signed).
  The `beq` branch at 0x44eeb8 targets 0x44ef10, is taken when a4(=[ret(__glXMalloc)+20]) == 0, and falls through when a4(=[ret(__glXMalloc)+20]) != 0.
  The `beq` branch at 0x44eec4 targets 0x44efc8, is taken when at(=[ret(__glXMalloc)+16]) == 0, and falls through when at(=[ret(__glXMalloc)+16]) != 0.
  The `beq` branch at 0x44ef14 targets 0x44f014, is taken when at(=[a0+120]) == 0, and falls through when at(=[a0+120]) != 0.
  The `blez` branch at 0x44ef2c targets 0x44ef80, is taken when a1(?) <= 0 (signed), and falls through when a1(?) > 0 (signed).
  The `beq` branch at 0x44ef58 targets 0x44ef78, is taken when v1(?) == a0(?), and falls through when v1(?) != a0(?).
  The `bnel` branch at 0x44ef68 targets 0x44ef58, is taken when at(?) < v0(?) (unsigned), and falls through when at(?) >= v0(?) (unsigned); its branch-likely delay slot `lw v1,32(at)` at 0x44ef6c runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x44ef70 targets 0x44ef84 and is always taken.
  The `beq` branch at 0x44ef90 targets 0x44eee8 and is always taken.
  The `beq` branch at 0x44efdc targets 0x44eff0, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x44efe8 targets 0x44eed4 and is always taken.
  The `beq` branch at 0x44f000 targets 0x44eed8, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x44f00c targets 0x44eed4 and is always taken.
  The `beq` branch at 0x44f028 targets 0x44ef28 and is always taken.
  The return at 0x44ef08 has v0 = ret(__glXMalloc).
  The return at 0x44efc0 has v0 = 0x0.

- `__glXDestroyDrawablePrivate` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44f040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44f040-0x44f0f0 (176 bytes).
  It occupies 176 bytes.
  The `lw` at 0x44f044 loads 4 bytes from a0 (arg0 at entry) +0x244.
  The `lw` at 0x44f05c loads 4 bytes from a0 (arg0 at entry) +0x248.
  The `lw` at 0x44f064 loads 4 bytes from a0 (arg0 at entry) +0x23c.
  The `lw` at 0x44f080 loads 4 bytes from a0 (arg0 at entry) +0x30.
  The `lw` at 0x44f0a0 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x44f0ac loads 4 bytes from sym(__glXDrawPrivRes) +0x0.
  The `lw` at 0x44f0bc loads 4 bytes from a0 (arg0 at entry) +0x40.
  The `lw` at 0x44f0cc loads 4 bytes from a0 (arg0 at entry) +0x1f0.
  The `jalr` at 0x44f074 calls (unknown callee) with a0=a0+60, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44f08c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x44f0a8 calls FreeResourceByType with a0=[a0+12], a1=[sym(__glXDrawPrivRes)], a2=0x0, a3=?.
  The `jalr` at 0x44f0b8 calls __glXFree with a0=[a0+64], a1=?, a2=?, a3=?.
  The `jalr` at 0x44f0c8 calls __glXFree with a0=[a0+496], a1=?, a2=?, a3=?.
  The `jalr` at 0x44f0d4 calls __glXFree with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bne` branch at 0x44f054 targets 0x44f0e0, is taken when v0(=[a0+580]) != 0, and falls through when v0(=[a0+580]) == 0.
  The `bne` branch at 0x44f060 targets 0x44f0e0, is taken when v0(=[a0+584]) != 0, and falls through when v0(=[a0+584]) == 0.
  The `beq` branch at 0x44f06c targets 0x44f07c, is taken when t9(=[a0+572]) == 0, and falls through when t9(=[a0+572]) != 0.
  The `beq` branch at 0x44f084 targets 0x44f094, is taken when t9(=[a0+48]) == 0, and falls through when t9(=[a0+48]) != 0.
  The return at 0x44f0e8 has v0 = 0x1.

- `__glXFindDrawablePrivate` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44f100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44f100-0x44f138 (56 bytes).
  It occupies 56 bytes.
  The `lw` at 0x44f124 loads 4 bytes from sym(__glXDrawPrivRes) +0x0.
  The `jalr` at 0x44f120 calls LookupIDByType with a0=a0 at entry (arg0), a1=[sym(__glXDrawPrivRes)], a2=0x2a89c, a3=a3 at entry (arg3).
  The return at 0x44f130 has v0 = ret(LookupIDByType).

- `__glXGetDrawablePrivate` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44f140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44f140-0x44f1c4 (132 bytes).
  It occupies 132 bytes.
  The `jalr` at 0x44f16c calls __glXFindDrawablePrivate with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44f1a0 calls __glXCreateDrawablePrivate with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?.
  The `jalr` at 0x44f1b4 calls __glXRefDrawablePrivate with a0=ret(__glXCreateDrawablePrivate), a1=?, a2=?, a3=?.
  The `beq` branch at 0x44f174 targets 0x44f194, is taken when v0(=ret(__glXFindDrawablePrivate)) == 0, and falls through when v0(=ret(__glXFindDrawablePrivate)) != 0.
  The `beq` branch at 0x44f1a8 targets 0x44f17c, is taken when v0(=ret(__glXCreateDrawablePrivate)) == 0, and falls through when v0(=ret(__glXCreateDrawablePrivate)) != 0.
  The `beq` branch at 0x44f1bc targets 0x44f180 and is always taken.
  The return at 0x44f18c has v0 = one of ?, ret(__glXCreateDrawablePrivate).

- `__glXCacheDrawableSize` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44f200 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44f200-0x44f240 (64 bytes).
  It occupies 64 bytes.
  The `lw` at 0x44f208 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lh` at 0x44f214 loads 2 bytes from [a0+8] +0x8.
  The `sw` at 0x44f218 stores 4 bytes to a0 (arg0 at entry) +0x1c.
  The `lh` at 0x44f21c loads 2 bytes from [a0+8] +0xa.
  The `sw` at 0x44f220 stores 4 bytes to a0 (arg0 at entry) +0x20.
  The `lhu` at 0x44f224 loads 2 bytes from [a0+8] +0xc.
  The `sw` at 0x44f228 stores 4 bytes to a0 (arg0 at entry) +0x24.
  The `lhu` at 0x44f22c loads 2 bytes from [a0+8] +0xe.
  The `sw` at 0x44f234 stores 4 bytes to a0 (arg0 at entry) +0x28.
  The `beq` branch at 0x44f200 targets 0x44f238, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x44f20c targets 0x44f238, is taken when a2(=[a0+8]) == 0, and falls through when a2(=[a0+8]) != 0.
  The return at 0x44f230 has v0 = [[a0+8]+12]:2.
  The return at 0x44f238 has v0 = ?.

- `__glXResizeDrawableBuffers` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x44f240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x44f240-0x44f310 (208 bytes).
  It occupies 208 bytes.
  The `lw` at 0x44f26c loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `lw` at 0x44f270 loads 4 bytes from a0 (arg0 at entry) +0x4c.
  The `lw` at 0x44f274 loads 4 bytes from a0 (arg0 at entry) +0x20.
  The `lw` at 0x44f278 loads 4 bytes from a0 (arg0 at entry) +0x44.
  The `lw` at 0x44f27c loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `lw` at 0x44f280 loads 4 bytes from a0 (arg0 at entry) +0x48.
  The `lw` at 0x44f284 loads 4 bytes from a0 (arg0 at entry) +0x50.
  The `lw` at 0x44f290 loads 4 bytes from a0 (arg0 at entry) +0x24.
  The `sw` at 0x44f2e4 stores 4 bytes to a0 (arg0 at entry) +0x44.
  The `sw` at 0x44f2e8 stores 4 bytes to a0 (arg0 at entry) +0x48.
  The `sw` at 0x44f2ec stores 4 bytes to a0 (arg0 at entry) +0x4c.
  The `sw` at 0x44f2f8 stores 4 bytes to a0 (arg0 at entry) +0x50.
  The `jalr` at 0x44f264 calls __glXCacheDrawableSize with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x44f2f4 calls __glXResizeBuffers with a0=a0+60, a1=[a0+28], a2=[a0+32], a3=[a0+36], a4=[a0+40], a5=[a0+80], a6=[a0+68], a7=[a0+72].
  The `bne` branch at 0x44f28c targets 0x44f2e0, is taken when v1(=[a0+76]) != a1(=[a0+28]), and falls through when v1(=[a0+76]) == a1(=[a0+28]).
  The `bne` branch at 0x44f294 targets 0x44f2e4, is taken when a5(=[a0+80]) != a2(=[a0+32]), and falls through when a5(=[a0+80]) == a2(=[a0+32]).
  The `bne` branch at 0x44f29c targets 0x44f2e4, is taken when a6(=[a0+68]) != a3(=[a0+36]), and falls through when a6(=[a0+68]) == a3(=[a0+36]).
  The `bne` branch at 0x44f2a4 targets 0x44f2e4, is taken when a7(=[a0+72]) != a4(=[a0+40]), and falls through when a7(=[a0+72]) == a4(=[a0+40]).
  The `bne` branch at 0x44f2ac targets 0x44f2d0, is taken when a3(=[a0+36]) != 0, and falls through when a3(=[a0+36]) == 0.
  The `beq` branch at 0x44f2b4 targets 0x44f2e0, is taken when a4(=[a0+40]) == 0, and falls through when a4(=[a0+40]) != 0.
  The return at 0x44f2c8 has v0 = 0x1.
  The return at 0x44f2d8 has v0 = 0x1.
  The return at 0x44f308 has v0 = ret(__glXResizeBuffers).

- `swapArray` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x450900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x450900-0x450d88 (1160 bytes).
  It occupies 1160 bytes.
  The `lw` at 0x450930 loads 4 bytes from table(0x4602ac) +0x0.
  82 such `lb` accesses load 1 byte from ?, including `lb` at 0x450964, `lb` at 0x450968, `lb` at 0x45099c.
  82 such `sb` accesses store 1 byte to ?, including `sb` at 0x45096c, `sb` at 0x450974, `sb` at 0x4509ac.
  The `beq` branch at 0x450928 targets 0x450a1c, is taken when v0(=a1-5120) >= 0xb (unsigned), and falls through when v0(=a1-5120) < 0xb (unsigned).
  The `blez` branch at 0x45093c targets 0x450a20, is taken when a3 <= 0 (signed), and falls through when a3 > 0 (signed).
  The `blez` branch at 0x450944 targets 0x450a1c, is taken when a0 <= 0 (signed), and falls through when a0 > 0 (signed).
  The `beq` branch at 0x45095c targets 0x450978, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x45098c targets 0x450a14, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x450994 targets 0x450d64, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x4509cc targets 0x450a28, is taken when a3(?) == at(?), and falls through when a3(?) != at(?).
  The `bne` branch at 0x4509f4 targets 0x4509ac, is taken when a4(?) != at(?), and falls through when a4(?) == at(?).
  The `bne` branch at 0x450a14 targets 0x45095c, is taken when t9(?) != t2(=a3), and falls through when t9(?) == t2(=a3).
  The `beq` branch at 0x450a28 targets 0x450a00 and is always taken.
  The `blez` branch at 0x450a30 targets 0x450a20, is taken when a3 <= 0 (signed), and falls through when a3 > 0 (signed).
  The `blez` branch at 0x450a38 targets 0x450a1c, is taken when a0 <= 0 (signed), and falls through when a0 > 0 (signed).
  The `bne` branch at 0x450a4c targets 0x450cd0, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0x450ad8 targets 0x450b48, is taken when a2(?) == at(?), and falls through when a2(?) != at(?).
  The `bne` branch at 0x450b20 targets 0x450a98, is taken when a3(?) != at(?), and falls through when a3(?) == at(?).
  The `bne` branch at 0x450b38 targets 0x450a4c, is taken when t9(?) != t2(=a3), and falls through when t9(?) == t2(=a3).
  The `beq` branch at 0x450b40 targets 0x450a20 and is always taken.
  The `beq` branch at 0x450b48 targets 0x450b28 and is always taken.
  The `blez` branch at 0x450b50 targets 0x450a20, is taken when a3 <= 0 (signed), and falls through when a3 > 0 (signed).
  The `blez` branch at 0x450b58 targets 0x450a1c, is taken when a0 <= 0 (signed), and falls through when a0 > 0 (signed).
  The `bne` branch at 0x450b6c targets 0x450d14, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0x450bb8 targets 0x450c08, is taken when a2(?) == at(?), and falls through when a2(?) != at(?).
  The `bne` branch at 0x450be0 targets 0x450b98, is taken when a3(?) != at(?), and falls through when a3(?) == at(?).
  The `bne` branch at 0x450bf8 targets 0x450b6c, is taken when ra(?) != t2(=a3), and falls through when ra(?) == t2(=a3).
  The `beq` branch at 0x450c00 targets 0x450a20 and is always taken.
  The `beq` branch at 0x450c08 targets 0x450be8 and is always taken.
  The `blez` branch at 0x450c10 targets 0x450a20, is taken when a3 <= 0 (signed), and falls through when a3 > 0 (signed).
  The `blez` branch at 0x450c18 targets 0x450a1c, is taken when a0 <= 0 (signed), and falls through when a0 > 0 (signed).
  The `bne` branch at 0x450c2c targets 0x450d40, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0x450c78 targets 0x450cc8, is taken when a2(?) == at(?), and falls through when a2(?) != at(?).
  The `bne` branch at 0x450ca0 targets 0x450c58, is taken when a3(?) != at(?), and falls through when a3(?) == at(?).
  The `bne` branch at 0x450cb8 targets 0x450c2c, is taken when ra(?) != t2(=a3), and falls through when ra(?) == t2(=a3).
  The `beq` branch at 0x450cc0 targets 0x450a20 and is always taken.
  The `beq` branch at 0x450cc8 targets 0x450ca8 and is always taken.
  The `beq` branch at 0x450d0c targets 0x450b30 and is always taken.
  The `beq` branch at 0x450d30 targets 0x450bf0 and is always taken.
  The `beq` branch at 0x450d5c targets 0x450cb0 and is always taken.
  The `beq` branch at 0x450d80 targets 0x450a14 and is always taken.
  The return at 0x450a20 has v0 = one of entry(0x4602ac), ?.
  The instructions from 0x450d38 to 0x450d3c are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x450934 uses the jump table at 0x4602ac with targets 0x450a1c, 0x450a1c, 0x45093c, 0x45093c, 0x450c10, 0x450c10, 0x450b50, 0x450a1c, 0x450a1c, 0x450a1c, 0x450a30.

- `__glXImage3DSize` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x454f80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x454f80-0x4553a0 (1056 bytes).
  It occupies 1056 bytes.
  The `bltz` branch at 0x454f80 targets 0x45501c, is taken when a2 < 0 (signed), and falls through when a2 >= 0 (signed).
  The `bltz` branch at 0x454f88 targets 0x455020, is taken when a3 < 0 (signed), and falls through when a3 >= 0 (signed).
  The `bltz` branch at 0x454f90 targets 0x45501c, is taken when a4 < 0 (signed), and falls through when a4 >= 0 (signed).
  The `beq` branch at 0x454f98 targets 0x455010, is taken when a1 == t1(=0x1a00), and falls through when a1 != t1(=0x1a00).
  The `beq` branch at 0x454fa0 targets 0x4550ec, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x454fa8 targets 0x4550ec, is taken when a3 == 0, and falls through when a3 != 0.
  The `beq` branch at 0x454fb0 targets 0x4550ec, is taken when a4 == 0, and falls through when a4 != 0.
  The `beq` branch at 0x454fb8 targets 0x4551e0, is taken when a1 == t1(=0x1a00), and falls through when a1 != t1(=0x1a00).
  The `bne` branch at 0x454fc0 targets 0x4550b0, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `bne` branch at 0x454fcc targets 0x455100, is taken when a0 < 0x1908 (unsigned), and falls through when a0 >= 0x1908 (unsigned).
  The `bne` branch at 0x454fdc targets 0x4552c8, is taken when a0 < t1(=0x8000) (unsigned), and falls through when a0 >= t1(=0x8000) (unsigned).
  The `beq` branch at 0x454fe8 targets 0x4552f4, is taken when t1(=0x8000) >= a0 (unsigned), and falls through when t1(=0x8000) < a0 (unsigned).
  The `bne` branch at 0x454ff4 targets 0x4550f4, is taken when a0 < t1(=0x80e1) (unsigned), and falls through when a0 >= t1(=0x80e1) (unsigned).
  The `beq` branch at 0x455000 targets 0x4552f4, is taken when t1(=0x80e1) >= a0 (unsigned), and falls through when t1(=0x80e1) < a0 (unsigned).
  The `beq` branch at 0x455008 targets 0x4551b4 and is always taken.
  The `beq` branch at 0x455010 targets 0x454fa0, is taken when a0 == t8(=0x1900), and falls through when a0 != t8(=0x1900).
  The `beq` branch at 0x455018 targets 0x454fa0, is taken when a0 == t9(=0x1901), and falls through when a0 != t9(=0x1901).
  The `bne` branch at 0x455028 targets 0x455270, is taken when a1 != at(=0x8033), and falls through when a1 == at(=0x8033).
  The `blez` branch at 0x455038 targets 0x4552a0, is taken when a6 <= 0 (signed), and falls through when a6 > 0 (signed).
  The `beq` branch at 0x455070 targets 0x455080, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `blez` branch at 0x455080 targets 0x455318, is taken when a5 <= 0 (signed), and falls through when a5 > 0 (signed).
  The `bne` branch at 0x4550b0 targets 0x455198, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x4550bc targets 0x4551c8, is taken when a0 < 0x1904 (unsigned), and falls through when a0 >= 0x1904 (unsigned).
  The `bne` branch at 0x4550c4 targets 0x4551c0, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x4550d0 targets 0x4551c8, is taken when a0 < 0x1906 (unsigned), and falls through when a0 >= 0x1906 (unsigned).
  The `bne` branch at 0x4550d8 targets 0x4551b4, is taken when a0 != t8(=0x1906), and falls through when a0 == t8(=0x1906).
  The `beq` branch at 0x4550e0 targets 0x4551c8 and is always taken.
  The `bne` branch at 0x4550f4 targets 0x4551b4, is taken when a0 != t9(=0x80e0), and falls through when a0 == t9(=0x80e0).
  The `bne` branch at 0x455108 targets 0x455160, is taken when a1 < a0(=0x8034) (unsigned), and falls through when a1 >= a0(=0x8034) (unsigned).
  The `beq` branch at 0x455114 targets 0x455034, is taken when a0(=0x8034) >= a1 (unsigned), and falls through when a0(=0x8034) < a1 (unsigned).
  The `bne` branch at 0x455124 targets 0x45524c, is taken when a1 < a0(=0x8364) (unsigned), and falls through when a1 >= a0(=0x8364) (unsigned).
  The `beq` branch at 0x45512c targets 0x455034, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0x45513c targets 0x455348, is taken when a1 < a0(=0x8367) (unsigned), and falls through when a1 >= a0(=0x8367) (unsigned).
  The `beq` branch at 0x455144 targets 0x455298, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `bne` branch at 0x455150 targets 0x455270, is taken when a1 != t3(=0x8368), and falls through when a1 == t3(=0x8368).
  The `beq` branch at 0x455158 targets 0x455298 and is always taken.
  The `bne` branch at 0x455160 targets 0x455228, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `bne` branch at 0x45516c targets 0x4552c0, is taken when a1 < 0x1405 (unsigned), and falls through when a1 >= 0x1405 (unsigned).
  The `bne` branch at 0x455178 targets 0x4552a8, is taken when a1 < a0(=0x8032) (unsigned), and falls through when a1 >= a0(=0x8032) (unsigned).
  The `bne` branch at 0x455184 targets 0x455028, is taken when a0(=0x8032) < a1 (unsigned), and falls through when a0(=0x8032) >= a1 (unsigned).
  The `beq` branch at 0x455190 targets 0x455038 and is always taken.
  The `bne` branch at 0x455198 targets 0x4551d0, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `bne` branch at 0x4551a4 targets 0x4551d8, is taken when a0 < 0x1902 (unsigned), and falls through when a0 >= 0x1902 (unsigned).
  The `beq` branch at 0x4551ac targets 0x4551d8, is taken when a0 == t1(=0x1902), and falls through when a0 != t1(=0x1902).
  The `bne` branch at 0x4551c0 targets 0x4551b4, is taken when a0 != t2(=0x1904), and falls through when a0 == t2(=0x1904).
  The `beq` branch at 0x4551c8 targets 0x455100 and is always taken.
  The `bne` branch at 0x4551d0 targets 0x4551b4, is taken when a0 != t3(=0x1900), and falls through when a0 == t3(=0x1900).
  The `beq` branch at 0x4551d8 targets 0x455100 and is always taken.
  The `blez` branch at 0x4551e0 targets 0x455340, is taken when a6 <= 0 (signed), and falls through when a6 > 0 (signed).
  The `beq` branch at 0x455200 targets 0x455210, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x455228 targets 0x455300, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `bne` branch at 0x455234 targets 0x455244, is taken when a1 < 0x1403 (unsigned), and falls through when a1 >= 0x1403 (unsigned).
  The `bne` branch at 0x45523c targets 0x455270, is taken when a1 != t2(=0x1403), and falls through when a1 == t2(=0x1403).
  The `beq` branch at 0x455244 targets 0x455038 and is always taken.
  The `bne` branch at 0x455254 targets 0x455280, is taken when a1 < a0(=0x8362) (unsigned), and falls through when a1 >= a0(=0x8362) (unsigned).
  The `beq` branch at 0x45525c targets 0x455190, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x455268 targets 0x455030, is taken when a1 == t9(=0x8363), and falls through when a1 != t9(=0x8363).
  The `bne` branch at 0x455288 targets 0x45536c, is taken when a1 < a0(=0x8036) (unsigned), and falls through when a1 >= a0(=0x8036) (unsigned).
  The `bne` branch at 0x455290 targets 0x45526c, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bgtz` branch at 0x455298 targets 0x455040, is taken when a6 > 0 (signed), and falls through when a6 <= 0 (signed).
  The `beq` branch at 0x4552a0 targets 0x455040 and is always taken.
  The `bne` branch at 0x4552a8 targets 0x455380, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `beq` branch at 0x4552b8 targets 0x455270, is taken when a1 >= 0x1407 (unsigned), and falls through when a1 < 0x1407 (unsigned).
  The `beq` branch at 0x4552c0 targets 0x455038 and is always taken.
  The `bne` branch at 0x4552c8 targets 0x4552ec, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x4552d4 targets 0x4551c8, is taken when a0 < 0x190a (unsigned), and falls through when a0 >= 0x190a (unsigned).
  The `bne` branch at 0x4552dc targets 0x4551b4, is taken when a0 != t2(=0x190a), and falls through when a0 == t2(=0x190a).
  The `beq` branch at 0x4552e4 targets 0x455100 and is always taken.
  The `bne` branch at 0x4552ec targets 0x4551b4, is taken when a0 != t3(=0x1908), and falls through when a0 == t3(=0x1908).
  The `beq` branch at 0x4552f4 targets 0x455100 and is always taken.
  The `bne` branch at 0x455300 targets 0x45532c, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `bne` branch at 0x455308 targets 0x455334, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x455310 targets 0x455270 and is always taken.
  The `beq` branch at 0x455324 targets 0x45509c and is always taken.
  The `bne` branch at 0x45532c targets 0x455270, is taken when a1 != at(=0x1400), and falls through when a1 == at(=0x1400).
  The `beq` branch at 0x455334 targets 0x455038 and is always taken.
  The `beq` branch at 0x455340 targets 0x4551e8 and is always taken.
  The `bne` branch at 0x455350 targets 0x455390, is taken when a1 < a0(=0x8366) (unsigned), and falls through when a1 >= a0(=0x8366) (unsigned).
  The `beq` branch at 0x45535c targets 0x455034, is taken when a0(=0x8366) >= a1 (unsigned), and falls through when a0(=0x8366) < a1 (unsigned).
  The `beq` branch at 0x455364 targets 0x455270 and is always taken.
  The `bne` branch at 0x455370 targets 0x455270, is taken when a1 != a0(=0x8035), and falls through when a1 == a0(=0x8035).
  The `beq` branch at 0x455378 targets 0x455298 and is always taken.
  The `bne` branch at 0x455380 targets 0x455270, is taken when a1 != t0(=0x1405), and falls through when a1 == t0(=0x1405).
  The `beq` branch at 0x455388 targets 0x4552c0 and is always taken.
  The `bne` branch at 0x455390 targets 0x455270, is taken when a1 != t1(=0x8365), and falls through when a1 == t1(=0x8365).
  The `beq` branch at 0x455398 targets 0x455034 and is always taken.
  The return at 0x455020 has v0 = -0x1.
  The return at 0x4550a8 has v0 = ?.
  The return at 0x4550ec has v0 = 0x0.
  The return at 0x4551b4 has v0 = -0x1.
  The return at 0x455220 has v0 = ?.
  The return at 0x455270 has v0 = -0x1.
  The instructions from 0x4550e8 to 0x4550e8 are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4551bc to 0x4551bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x455278 to 0x45527c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4552fc to 0x4552fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45533c to 0x45533c are not reached by any path from the entry, and their branches are not listed.

- `__glXDrawArraysSize` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x455b80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x455b80-0x455e50 (720 bytes).
  It occupies 720 bytes.
  The `lw` at 0x455b88 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0x455b8c loads 4 bytes from a0 (arg0 at entry) +0x0.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x455cb8, `lw` at 0x455cc4, `lw` at 0x455ccc.
  The `jalr` at 0x455c8c calls __glXTypeSize with a0=?, a1=?, a2=?, a3=?, a4=0x1, a6=0x8077.
  The `beq` branch at 0x455ba4 targets 0x455c04, is taken when a1 == 0, and falls through when a1 != 0.
  The `blez` branch at 0x455c2c targets 0x455d9c, is taken when v0(?) <= 0 (signed), and falls through when v0(?) > 0 (signed).
  The `beq` branch at 0x455c68 targets 0x455cb8 and is always taken.
  The `bne` branch at 0x455c74 targets 0x455e40, is taken when v0(?) != a3(=0x8079), and falls through when v0(?) == a3(=0x8079).
  The `beq` branch at 0x455c7c targets 0x455c88, is taken when s0(?) == a4(=0x1), and falls through when s0(?) != a4(=0x1).
  The `bne` branch at 0x455c84 targets 0x455e48, is taken when a0(?) != a5(=0x1401), and falls through when a0(?) == a5(=0x1401).
  The `beq` branch at 0x455cb0 targets 0x455dc0, is taken when s1(?) == a7(?), and falls through when s1(?) != a7(?).
  The `beq` branch at 0x455cd0 targets 0x455d54, is taken when a7(=a1) == 0, and falls through when a7(=a1) != 0.
  The `beq` branch at 0x455d54 targets 0x455c88, is taken when v0(?) == s4(=0x8074), and falls through when v0(?) != s4(=0x8074).
  The `beq` branch at 0x455d5c targets 0x455c8c, is taken when v0(?) == s5(=0x8076), and falls through when v0(?) != s5(=0x8076).
  The `beq` branch at 0x455d64 targets 0x455c8c, is taken when v0(?) == s6(=0x8078), and falls through when v0(?) != s6(=0x8078).
  The `beq` branch at 0x455d6c targets 0x455d8c, is taken when v0(?) == s7(=0x8075), and falls through when v0(?) != s7(=0x8075).
  The `bne` branch at 0x455d74 targets 0x455c70, is taken when v0(?) != a6(=0x8077), and falls through when v0(?) == a6(=0x8077).
  The `beq` branch at 0x455d7c targets 0x455c8c, is taken when s0(?) == a7(=0x1), and falls through when s0(?) != a7(=0x1).
  The `beq` branch at 0x455d84 targets 0x455e08 and is always taken.
  The `beq` branch at 0x455d8c targets 0x455c8c, is taken when s0(?) == t0(=0x3), and falls through when s0(?) != t0(=0x3).
  The `beq` branch at 0x455d94 targets 0x455e08 and is always taken.
  The `beq` branch at 0x455e40 targets 0x455e08 and is always taken.
  The `beq` branch at 0x455e48 targets 0x455e08 and is always taken.
  The return at 0x455e00 has v0 = ?.
  The return at 0x455e34 has v0 = -0x1.
  The instructions from 0x455e3c to 0x455e3c are not reached by any path from the entry, and their branches are not listed.

- `__glXConvolutionParameterivSize` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x456ac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x456ac0-0x456b08 (72 bytes).
  It occupies 72 bytes.
  The `beq` branch at 0x456ad0 targets 0x456af8, is taken when a0 == at(=0x8014), and falls through when a0 != at(=0x8014).
  The `beq` branch at 0x456ad8 targets 0x456af8, is taken when a0 == a3(=0x8015), and falls through when a0 != a3(=0x8015).
  The `beq` branch at 0x456ae0 targets 0x456af8, is taken when a0 == a4(=0x8154), and falls through when a0 != a4(=0x8154).
  The `beq` branch at 0x456ae8 targets 0x456b00, is taken when a0 == a5(=0x8013), and falls through when a0 != a5(=0x8013).
  The return at 0x456af0 has v0 = -0x1.
  The return at 0x456af8 has v0 = 0x4.
  The return at 0x456b00 has v0 = 0x1.

- `__glXConvolutionParameterfvSize` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x456b40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x456b40-0x456b74 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x456b5c calls __glXConvolutionParameterivSize with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x456b6c has v0 = ret(__glXConvolutionParameterivSize).

- `__glXColorTableParameterfvSize` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x456e40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x456e40-0x456e68 (40 bytes).
  It occupies 40 bytes.
  The `beq` branch at 0x456e48 targets 0x456e60, is taken when a0 == at(=0x80d6), and falls through when a0 != at(=0x80d6).
  The `beq` branch at 0x456e50 targets 0x456e60, is taken when a0 == a2(=0x80d7), and falls through when a0 != a2(=0x80d7).
  The return at 0x456e58 has v0 = 0x0.
  The return at 0x456e60 has v0 = 0x4.

- `__glXColorTableParameterivSize` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x456e80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x456e80-0x456eb4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x456e9c calls __glXColorTableParameterfvSize with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x456eac has v0 = ret(__glXColorTableParameterfvSize).

- `__glXcombine_strings` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x4577c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x4577c0-0x457a64 (676 bytes).
  It occupies 676 bytes.
  The `sb` at 0x457904 stores 1 byte to ret(__glXMalloc) +0x0.
  The `jalr` at 0x457800 calls xf86strlen with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x457810 calls xf86strlen with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x457834 calls __glXMalloc with a0=ret(xf86strlen)+2, a1=?, a2=?, a3=?.
  The `jalr` at 0x457848 calls __glXMalloc with a0=ret(xf86strlen)+2, a1=?, a2=?, a3=?.
  The `jalr` at 0x45785c calls xf86strcpy with a0=ret(__glXMalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x457878 calls __glXMalloc with a0=ret(xf86strlen)+2, a1=?, a2=?, a3=?.
  The `jalr` at 0x45788c calls __glXMalloc with a0=ret(xf86strlen)+2, a1=?, a2=?, a3=?.
  The `jalr` at 0x4578a0 calls xf86strcpy with a0=ret(__glXMalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x4578c0 calls __glXFree with a0=ret(__glXMalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x45790c calls xf86strtok with a0=ret(__glXMalloc), a1=0x472efa, a2=?, a3=?.
  The `jalr` at 0x457930 calls xf86strtok with a0=0x0, a1=0x472efa, a2=?, a3=?.
  The `jalr` at 0x45794c calls xf86strlen with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x457990 calls xf86strcspn with a0=?, a1=0x472efa, a2=?, a3=?.
  The `jalr` at 0x4579a0 calls xf86strlen with a0=ret(xf86strtok), a1=?, a2=?, a3=?.
  The `jalr` at 0x4579c0 calls xf86strncmp with a0=ret(xf86strtok), a1=?, a2=ret(xf86strcspn), a3=?.
  The `jalr` at 0x4579d8 calls xf86strcat with a0=?, a1=ret(xf86strtok), a2=?, a3=?.
  The `jalr` at 0x4579e8 calls xf86strcat with a0=ret(xf86strcat), a1=0x472efa, a2=?, a3=?.
  The `jalr` at 0x457a10 calls __glXFree with a0=ret(__glXMalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x457a54 calls __glXFree with a0=ret(__glXMalloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0x4577e0 targets 0x457a40, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x4577ec targets 0x457a48, is taken when s6(=a1) == 0, and falls through when s6(=a1) != 0.
  The `beq` branch at 0x45781c targets 0x45786c, is taken when v0(=ret(xf86strlen)) >= s1(=ret(xf86strlen)) (unsigned), and falls through when v0(=ret(xf86strlen)) < s1(=ret(xf86strlen)) (unsigned).
  The `beq` branch at 0x457864 targets 0x4578a8 and is always taken.
  The `beq` branch at 0x4578a8 targets 0x4578d0, is taken when s7(=ret(__glXMalloc)) == 0, and falls through when s7(=ret(__glXMalloc)) != 0.
  The `bne` branch at 0x4578b0 targets 0x457900, is taken when s8(=ret(__glXMalloc)) != 0, and falls through when s8(=ret(__glXMalloc)) == 0.
  The `beq` branch at 0x4578c8 targets 0x4578dc and is always taken.
  The `bne` branch at 0x4578d4 targets 0x457a50, is taken when s8(=ret(__glXMalloc)) != 0, and falls through when s8(=ret(__glXMalloc)) == 0.
  The `beq` branch at 0x457914 targets 0x457a00, is taken when v0(=ret(xf86strtok)) == 0, and falls through when v0(=ret(xf86strtok)) != 0.
  The `beq` branch at 0x457920 targets 0x457940 and is always taken.
  The `beq` branch at 0x457938 targets 0x4579f8, is taken when v0(=ret(xf86strtok)) == 0, and falls through when v0(=ret(xf86strtok)) != 0.
  The `beq` branch at 0x457960 targets 0x45792c, is taken when s6(?) >= s3(?) (unsigned), and falls through when s6(?) < s3(?) (unsigned).
  The `beq` branch at 0x457968 targets 0x45798c and is always taken.
  The `beq` branch at 0x457984 targets 0x457928, is taken when s0(?) >= s3(?) (unsigned), and falls through when s0(?) < s3(?) (unsigned).
  The `bne` branch at 0x4579a8 targets 0x457974, is taken when v0(=ret(xf86strlen)) != s1(=ret(xf86strcspn)), and falls through when v0(=ret(xf86strlen)) == s1(=ret(xf86strcspn)).
  The `bne` branch at 0x4579c8 targets 0x457974, is taken when v0(=ret(xf86strncmp)) != 0, and falls through when v0(=ret(xf86strncmp)) == 0.
  The `beq` branch at 0x4579f0 targets 0x457970 and is always taken.
  The `beq` branch at 0x457a40 targets 0x4577e8 and is always taken.
  The `beq` branch at 0x457a48 targets 0x4577f4 and is always taken.
  The `beq` branch at 0x457a5c targets 0x4578e0 and is always taken.
  The return at 0x4578f8 has v0 = 0x0.
  The return at 0x457a34 has v0 = ?.
  The instructions from 0x457a3c to 0x457a3c are not reached by any path from the entry, and their branches are not listed.

- `__glReadPixels_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45b700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45b700-0x45bab8 (952 bytes).
  It occupies 952 bytes.
  The `bltz` branch at 0x45b700 targets 0x45b910, is taken when a2 < 0 (signed), and falls through when a2 >= 0 (signed).
  The `bltz` branch at 0x45b708 targets 0x45b910, is taken when a3 < 0 (signed), and falls through when a3 >= 0 (signed).
  The `bne` branch at 0x45b710 targets 0x45b760, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `bne` branch at 0x45b71c targets 0x45b7a0, is taken when a0 < 0x1908 (unsigned), and falls through when a0 >= 0x1908 (unsigned).
  The `bne` branch at 0x45b72c targets 0x45b918, is taken when a0 < a5(=0x8000) (unsigned), and falls through when a0 >= a5(=0x8000) (unsigned).
  The `beq` branch at 0x45b738 targets 0x45b948, is taken when a5(=0x8000) >= a0 (unsigned), and falls through when a5(=0x8000) < a0 (unsigned).
  The `bne` branch at 0x45b744 targets 0x45b798, is taken when a0 < a5(=0x80e1) (unsigned), and falls through when a0 >= a5(=0x80e1) (unsigned).
  The `beq` branch at 0x45b750 targets 0x45b948, is taken when a5(=0x80e1) >= a0 (unsigned), and falls through when a5(=0x80e1) < a0 (unsigned).
  The `beq` branch at 0x45b758 targets 0x45b854 and is always taken.
  The `bne` branch at 0x45b760 targets 0x45b838, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x45b76c targets 0x45b8f8, is taken when a0 < 0x1904 (unsigned), and falls through when a0 >= 0x1904 (unsigned).
  The `bne` branch at 0x45b774 targets 0x45b8f0, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x45b780 targets 0x45b8f8, is taken when a0 < 0x1906 (unsigned), and falls through when a0 >= 0x1906 (unsigned).
  The `bne` branch at 0x45b788 targets 0x45b854, is taken when a0 != t8(=0x1906), and falls through when a0 == t8(=0x1906).
  The `beq` branch at 0x45b790 targets 0x45b8f8 and is always taken.
  The `bne` branch at 0x45b798 targets 0x45b854, is taken when a0 != t9(=0x80e0), and falls through when a0 == t9(=0x80e0).
  The `bne` branch at 0x45b7a8 targets 0x45b800, is taken when a1 < a6(=0x8034) (unsigned), and falls through when a1 >= a6(=0x8034) (unsigned).
  The `beq` branch at 0x45b7b0 targets 0x45b864, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x45b7c0 targets 0x45b950, is taken when a1 < a0(=0x8364) (unsigned), and falls through when a1 >= a0(=0x8364) (unsigned).
  The `beq` branch at 0x45b7c8 targets 0x45b864, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x45b7d8 targets 0x45ba14, is taken when a1 < a0(=0x8367) (unsigned), and falls through when a1 >= a0(=0x8367) (unsigned).
  The `beq` branch at 0x45b7e0 targets 0x45b9e0, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bne` branch at 0x45b7ec targets 0x45b9b0, is taken when a1 != a7(=0x8368), and falls through when a1 == a7(=0x8368).
  The `beq` branch at 0x45b7f4 targets 0x45b9e0 and is always taken.
  The `bne` branch at 0x45b804 targets 0x45b8c0, is taken when a1 < 0x1405 (unsigned), and falls through when a1 >= 0x1405 (unsigned).
  The `bne` branch at 0x45b80c targets 0x45b8e8, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x45b818 targets 0x45b9e8, is taken when a1 < a6(=0x8032) (unsigned), and falls through when a1 >= a6(=0x8032) (unsigned).
  The `bne` branch at 0x45b824 targets 0x45b85c, is taken when a6(=0x8032) < a1 (unsigned), and falls through when a6(=0x8032) >= a1 (unsigned).
  The `beq` branch at 0x45b830 targets 0x45b868 and is always taken.
  The `bne` branch at 0x45b838 targets 0x45b900, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `bne` branch at 0x45b844 targets 0x45b908, is taken when a0 < 0x1902 (unsigned), and falls through when a0 >= 0x1902 (unsigned).
  The `beq` branch at 0x45b84c targets 0x45b908, is taken when a0 == t9(=0x1902), and falls through when a0 != t9(=0x1902).
  The `bne` branch at 0x45b85c targets 0x45b9b0, is taken when a1 != at(=0x8033), and falls through when a1 == at(=0x8033).
  The `beq` branch at 0x45b898 targets 0x45b8a8, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bne` branch at 0x45b8c4 targets 0x45b980, is taken when a1 < 0x1402 (unsigned), and falls through when a1 >= 0x1402 (unsigned).
  The `bne` branch at 0x45b8d0 targets 0x45b9c0, is taken when a1 < 0x1403 (unsigned), and falls through when a1 >= 0x1403 (unsigned).
  The `bne` branch at 0x45b8d8 targets 0x45b9b8, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x45b8e0 targets 0x45b9b0, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x45b8e8 targets 0x45b868 and is always taken.
  The `bne` branch at 0x45b8f0 targets 0x45b854, is taken when a0 != t0(=0x1904), and falls through when a0 == t0(=0x1904).
  The `beq` branch at 0x45b8f8 targets 0x45b7a0 and is always taken.
  The `bne` branch at 0x45b900 targets 0x45b854, is taken when a0 != t1(=0x1900), and falls through when a0 == t1(=0x1900).
  The `beq` branch at 0x45b908 targets 0x45b7a0 and is always taken.
  The `bne` branch at 0x45b918 targets 0x45b940, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x45b924 targets 0x45b8f8, is taken when a0 < 0x190a (unsigned), and falls through when a0 >= 0x190a (unsigned).
  The `bne` branch at 0x45b92c targets 0x45b854, is taken when a0 != t8(=0x190a), and falls through when a0 == t8(=0x190a).
  The `beq` branch at 0x45b934 targets 0x45b7a0 and is always taken.
  The `bne` branch at 0x45b940 targets 0x45b854, is taken when a0 != t9(=0x1908), and falls through when a0 == t9(=0x1908).
  The `beq` branch at 0x45b948 targets 0x45b7a0 and is always taken.
  The `bne` branch at 0x45b958 targets 0x45b9c8, is taken when a1 < a0(=0x8362) (unsigned), and falls through when a1 >= a0(=0x8362) (unsigned).
  The `beq` branch at 0x45b960 targets 0x45b830, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x45b96c targets 0x45b9b0, is taken when a1 != v1(=0x8363), and falls through when a1 == v1(=0x8363).
  The `beq` branch at 0x45b974 targets 0x45b864 and is always taken.
  The `bne` branch at 0x45b980 targets 0x45b998, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x45b988 targets 0x45b9a0, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x45b990 targets 0x45b9b0 and is always taken.
  The `bne` branch at 0x45b998 targets 0x45b9b0, is taken when a1 != a6(=0x1400), and falls through when a1 == a6(=0x1400).
  The `beq` branch at 0x45b9a0 targets 0x45b868 and is always taken.
  The `beq` branch at 0x45b9a8 targets 0x45b8e8, is taken when a1 == a7(=0x1406), and falls through when a1 != a7(=0x1406).
  The `bne` branch at 0x45b9b8 targets 0x45b9b0, is taken when a1 != t0(=0x1403), and falls through when a1 == t0(=0x1403).
  The `beq` branch at 0x45b9c0 targets 0x45b868 and is always taken.
  The `bne` branch at 0x45b9d0 targets 0x45ba40, is taken when a1 < a0(=0x8036) (unsigned), and falls through when a1 >= a0(=0x8036) (unsigned).
  The `bne` branch at 0x45b9d8 targets 0x45b9b0, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `beq` branch at 0x45b9e0 targets 0x45b868 and is always taken.
  The `bne` branch at 0x45b9e8 targets 0x45b9a8, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `beq` branch at 0x45b9f4 targets 0x45b9b0, is taken when a1 >= 0x1a01 (unsigned), and falls through when a1 < 0x1a01 (unsigned).
  The `beq` branch at 0x45b9fc targets 0x45ba64, is taken when a0 == t9(=0x1900), and falls through when a0 != t9(=0x1900).
  The `beq` branch at 0x45ba04 targets 0x45ba64, is taken when a0 == at(=0x1901), and falls through when a0 != at(=0x1901).
  The `bne` branch at 0x45ba1c targets 0x45ba54, is taken when a1 < a0(=0x8366) (unsigned), and falls through when a1 >= a0(=0x8366) (unsigned).
  The `beq` branch at 0x45ba28 targets 0x45b864, is taken when a0(=0x8366) >= a1 (unsigned), and falls through when a0(=0x8366) < a1 (unsigned).
  The `beq` branch at 0x45ba30 targets 0x45b9b0 and is always taken.
  The `bne` branch at 0x45ba44 targets 0x45b9b0, is taken when a1 != a0(=0x8035), and falls through when a1 == a0(=0x8035).
  The `beq` branch at 0x45ba4c targets 0x45b9e0 and is always taken.
  The `bne` branch at 0x45ba54 targets 0x45b9b0, is taken when a1 != a4(=0x8365), and falls through when a1 == a4(=0x8365).
  The `beq` branch at 0x45ba5c targets 0x45b864 and is always taken.
  The `beq` branch at 0x45ba98 targets 0x45baa8, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The return at 0x45b854 has v0 = -0x1.
  The return at 0x45b8b0 has v0 = ?.
  The return at 0x45b910 has v0 = -0x1.
  The return at 0x45b9b0 has v0 = -0x1.
  The return at 0x45ba0c has v0 = -0x1.
  The return at 0x45bab0 has v0 = ?.
  The instructions from 0x45b7fc to 0x45b7fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45b8b8 to 0x45b8bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45b93c to 0x45b93c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45b97c to 0x45b97c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45ba38 to 0x45ba3c are not reached by any path from the entry, and their branches are not listed.

- `__glGetTexEnvfv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45bac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45bac0-0x45baf0 (48 bytes).
  It occupies 48 bytes.
  The `beq` branch at 0x45bac8 targets 0x45bae8, is taken when a0 == at(=0x2200), and falls through when a0 != at(=0x2200).
  The `beq` branch at 0x45bad0 targets 0x45bae0, is taken when a0 == a3(=0x2201), and falls through when a0 != a3(=0x2201).
  The return at 0x45bad8 has v0 = -0x1.
  The return at 0x45bae0 has v0 = 0x4.
  The return at 0x45bae8 has v0 = 0x1.

- `__glGetTexEnviv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45bb00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45bb00-0x45bb34 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45bb1c calls __glGetTexEnvfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45bb2c has v0 = ret(__glGetTexEnvfv_size).

- `__glGetTexGenfv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45bb40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45bb40-0x45bb84 (68 bytes).
  It occupies 68 bytes.
  The `beq` branch at 0x45bb4c targets 0x45bb74, is taken when a0 == at(=0x2500), and falls through when a0 != at(=0x2500).
  The `beq` branch at 0x45bb54 targets 0x45bb7c, is taken when a0 == a3(=0x2501), and falls through when a0 != a3(=0x2501).
  The `beq` branch at 0x45bb5c targets 0x45bb6c, is taken when a0 == a4(=0x2502), and falls through when a0 != a4(=0x2502).
  The return at 0x45bb64 has v0 = -0x1.
  The return at 0x45bb6c has v0 = 0x4.
  The return at 0x45bb74 has v0 = 0x1.
  The return at 0x45bb7c has v0 = 0x4.

- `__glGetTexGendv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45bbc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45bbc0-0x45bbf4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45bbdc calls __glGetTexGenfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45bbec has v0 = ret(__glGetTexGenfv_size).

- `__glGetTexGeniv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45bc00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45bc00-0x45bc34 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45bc1c calls __glGetTexGenfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45bc2c has v0 = ret(__glGetTexGenfv_size).

- `__glGetTexParameterfv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45bc40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45bc40-0x45bd70 (304 bytes).
  It occupies 304 bytes.
  The `bne` branch at 0x45bc48 targets 0x45bc9c, is taken when a0 < v0(=0x8067) (unsigned), and falls through when a0 >= v0(=0x8067) (unsigned).
  The `beq` branch at 0x45bc58 targets 0x45bd40, is taken when v0(=0x8067) >= a0 (unsigned), and falls through when v0(=0x8067) < a0 (unsigned).
  The `bne` branch at 0x45bc70 targets 0x45bd14, is taken when a0 < a3(=0x813b) (unsigned), and falls through when a0 >= a3(=0x813b) (unsigned).
  The `beq` branch at 0x45bc7c targets 0x45bc94, is taken when a3(=0x813b) >= a0 (unsigned), and falls through when a3(=0x813b) < a0 (unsigned).
  The `bne` branch at 0x45bc84 targets 0x45bd58, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0x45bc8c targets 0x45bcdc, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0x45bca4 targets 0x45bce4, is taken when a0 < 0x2802 (unsigned), and falls through when a0 >= 0x2802 (unsigned).
  The `bne` branch at 0x45bcb0 targets 0x45bd38, is taken when a0 < 0x2803 (unsigned), and falls through when a0 >= 0x2803 (unsigned).
  The `bne` branch at 0x45bcbc targets 0x45bd48, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x45bcc4 targets 0x45bcdc, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x45bcd4 targets 0x45bd68, is taken when a0 == a4(=0x1004), and falls through when a0 != a4(=0x1004).
  The `bne` branch at 0x45bcf4 targets 0x45bcd4, is taken when a0 < 0x2800 (unsigned), and falls through when a0 >= 0x2800 (unsigned).
  The `bne` branch at 0x45bcfc targets 0x45bd0c, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x45bd04 targets 0x45bcdc, is taken when a0 != a5(=0x2801), and falls through when a0 == a5(=0x2801).
  The `bne` branch at 0x45bd18 targets 0x45bd30, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x45bd20 targets 0x45bcdc, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x45bd28 targets 0x45bc94 and is always taken.
  The `bne` branch at 0x45bd30 targets 0x45bcdc, is taken when a0 != a3(=0x8072), and falls through when a0 == a3(=0x8072).
  The `bne` branch at 0x45bd48 targets 0x45bcdc, is taken when a0 != a4(=0x2803), and falls through when a0 == a4(=0x2803).
  The `beq` branch at 0x45bd50 targets 0x45bd38 and is always taken.
  The `bne` branch at 0x45bd58 targets 0x45bcdc, is taken when a0 != a4(=0x813c), and falls through when a0 == a4(=0x813c).
  The `beq` branch at 0x45bd60 targets 0x45bc94 and is always taken.
  The return at 0x45bc94 has v0 = 0x1.
  The return at 0x45bccc has v0 = 0x1.
  The return at 0x45bcdc has v0 = -0x1.
  The return at 0x45bd0c has v0 = 0x1.
  The return at 0x45bd38 has v0 = 0x1.
  The return at 0x45bd40 has v0 = 0x1.
  The return at 0x45bd68 has v0 = 0x4.

- `__glGetTexParameteriv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45bd80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45bd80-0x45bdb4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45bd9c calls __glGetTexParameterfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45bdac has v0 = ret(__glGetTexParameterfv_size).

- `__glGetLightfv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45bdc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45bdc0-0x45be48 (136 bytes).
  It occupies 136 bytes.
  The `lw` at 0x45bdd4 loads 4 bytes from abs 0x4719f0.
  The `lw` at 0x45bde8 loads 4 bytes from table(0x460304) +0x0.
  The `beq` branch at 0x45bde0 targets 0x45bdf4, is taken when v1(=a0-4608) >= 0xa (unsigned), and falls through when v1(=a0-4608) < 0xa (unsigned).
  The return at 0x45bdf8 has v0 = one of -0x1, 0x1.
  The return at 0x45be00 has v0 = 0x4.
  The return at 0x45be08 has v0 = 0x1.
  The return at 0x45be10 has v0 = 0x1.
  The return at 0x45be18 has v0 = 0x1.
  The return at 0x45be20 has v0 = 0x1.
  The return at 0x45be28 has v0 = 0x3.
  The return at 0x45be30 has v0 = 0x4.
  The return at 0x45be38 has v0 = 0x4.
  The return at 0x45be40 has v0 = 0x4.
  The indirect jump at 0x45bdec uses the jump table at 0x460304 with targets 0x45be00, 0x45be40, 0x45be38, 0x45be30, 0x45be28, 0x45be20, 0x45bdf8, 0x45be18, 0x45be10, 0x45be08.

- `__glGetLightiv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45be80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45be80-0x45beb4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45be9c calls __glGetLightfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45beac has v0 = ret(__glGetLightfv_size).

- `EvalComputeK` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45bec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45bec0-0x45bf18 (88 bytes).
  It occupies 88 bytes.
  The `lw` at 0x45bee0 loads 4 bytes from table(0x46032c) +0x0.
  The `beq` branch at 0x45bed8 targets 0x45beec, is taken when a3(=a0-3472) >= 0x29 (unsigned), and falls through when a3(=a0-3472) < 0x29 (unsigned).
  The return at 0x45beec has v0 = 0x0.
  The return at 0x45bef4 has v0 = 0x4.
  The return at 0x45bf00 has v0 = 0x2.
  The return at 0x45bf08 has v0 = 0x3.
  The return at 0x45bf10 has v0 = 0x1.
  The instructions from 0x45befc to 0x45befc are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x45bee4 uses the jump table at 0x46032c with targets 0x45bef4, 0x45bf10, 0x45bf08, 0x45bf10, 0x45bf00, 0x45bf08, 0x45bef4, 0x45bf08, 0x45bef4, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45beec, 0x45bef4, 0x45bf10, 0x45bf08, 0x45bf10, 0x45bf00, 0x45bf08, 0x45bef4, 0x45bf08, 0x45bef4.

- `__glGetMap_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45bf40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45bf40-0x45c0a4 (356 bytes).
  It occupies 356 bytes.
  The `lw` at 0x45bf70 loads 4 bytes from table(0x4603d0) +0x0.
  The `bgezall` at 0x45c00c calls EvalComputeK [0x45bec0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=entry(0x4603d0), a4=0xa01, a5=0xa00, a6=0xa00.
  The `jalr` at 0x45c024 calls glGetMapiv with a0=a0 at entry (arg0), a1=0xa01, a2=sp-48, a3=?.
  The `bgezall` at 0x45c050 calls EvalComputeK [0x45bec0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=entry(0x4603d0), a4=0xa01, a5=0xa00.
  The `jalr` at 0x45c070 calls glGetMapiv with a0=a0 at entry (arg0), a1=0xa01, a2=sp-40, a3=?.
  The `beq` branch at 0x45bf68 targets 0x45bf98, is taken when v1(=a0-3472) >= 0x29 (unsigned), and falls through when v1(=a0-3472) < 0x29 (unsigned).
  The `beq` branch at 0x45bf84 targets 0x45c044, is taken when a1 == a5(=0xa00), and falls through when a1 != a5(=0xa00).
  The `beq` branch at 0x45bf8c targets 0x45bff4, is taken when a1 == v0(=0xa02), and falls through when a1 != v0(=0xa02).
  The `beq` branch at 0x45bf94 targets 0x45bfdc, is taken when a1 == a4(=0xa01), and falls through when a1 != a4(=0xa01).
  The `beq` branch at 0x45bfb4 targets 0x45c000, is taken when a1 == a6(=0xa00), and falls through when a1 != a6(=0xa00).
  The `beq` branch at 0x45bfbc targets 0x45bfec, is taken when a1 == v0(=0xa02), and falls through when a1 != v0(=0xa02).
  The `bne` branch at 0x45bfc4 targets 0x45bf9c, is taken when a1 != a4(=0xa01), and falls through when a1 == a4(=0xa01).
  The `beq` branch at 0x45bfec targets 0x45bf9c and is always taken.
  The `beq` branch at 0x45c03c targets 0x45bf9c and is always taken.
  The `beq` branch at 0x45c09c targets 0x45bf9c and is always taken.
  The return at 0x45bfa0 has v0 = one of -0x1, 0x2, ?.
  The return at 0x45bfd4 has v0 = 0x1.
  The return at 0x45bfe4 has v0 = 0x2.
  The return at 0x45bff8 has v0 = 0x4.
  The indirect jump at 0x45bf74 uses the jump table at 0x4603d0 with targets 0x45bfa8, 0x45bfa8, 0x45bfa8, 0x45bfa8, 0x45bfa8, 0x45bfa8, 0x45bfa8, 0x45bfa8, 0x45bfa8, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf98, 0x45bf7c, 0x45bf7c, 0x45bf7c, 0x45bf7c, 0x45bf7c, 0x45bf7c, 0x45bf7c, 0x45bf7c, 0x45bf7c.

- `__glGetMapdv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45c0c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45c0c0-0x45c0f4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45c0dc calls __glGetMap_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45c0ec has v0 = ret(__glGetMap_size).

- `__glGetMapfv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45c100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45c100-0x45c134 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45c11c calls __glGetMap_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45c12c has v0 = ret(__glGetMap_size).

- `__glGetMapiv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45c140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45c140-0x45c174 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45c15c calls __glGetMap_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45c16c has v0 = ret(__glGetMap_size).

- `__glGetMaterialfv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45c180 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45c180-0x45c230 (176 bytes).
  It occupies 176 bytes.
  The `bne` branch at 0x45c188 targets 0x45c1c4, is taken when a0 < 0x1600 (unsigned), and falls through when a0 >= 0x1600 (unsigned).
  The `bne` branch at 0x45c19c targets 0x45c210, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `bne` branch at 0x45c1a4 targets 0x45c200, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x45c1ac targets 0x45c220, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x45c1b4 targets 0x45c1f8, is taken when a0 != a6(=0x1603), and falls through when a0 == a6(=0x1603).
  The `bne` branch at 0x45c1d0 targets 0x45c1f0, is taken when a0 < 0x1201 (unsigned), and falls through when a0 >= 0x1201 (unsigned).
  The `bne` branch at 0x45c1d8 targets 0x45c218, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x45c1e0 targets 0x45c1f8, is taken when a0 != a5(=0x1202), and falls through when a0 == a5(=0x1202).
  The `beq` branch at 0x45c1f0 targets 0x45c228, is taken when a0 == a3(=0x1200), and falls through when a0 != a3(=0x1200).
  The `bne` branch at 0x45c200 targets 0x45c1f8, is taken when a0 != a5(=0x1601), and falls through when a0 == a5(=0x1601).
  The return at 0x45c1bc has v0 = 0x3.
  The return at 0x45c1e8 has v0 = 0x4.
  The return at 0x45c1f8 has v0 = -0x1.
  The return at 0x45c208 has v0 = 0x1.
  The return at 0x45c210 has v0 = 0x4.
  The return at 0x45c218 has v0 = 0x4.
  The return at 0x45c220 has v0 = 0x4.
  The return at 0x45c228 has v0 = 0x4.

- `__glGetMaterialiv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45c240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45c240-0x45c274 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45c25c calls __glGetMaterialfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45c26c has v0 = ret(__glGetMaterialfv_size).

- `__glGetPixelMap_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45c280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45c280-0x45c370 (240 bytes).
  It occupies 240 bytes.
  The `lw` at 0x45c2b0 loads 4 bytes from table(0x460474) +0x0.
  The `jalr` at 0x45c2dc calls glGetIntegerv with a0=?, a1=sp-32, a2=table(0x460474), a3=(a0-3184 << 0x2), a4=entry(0x460474).
  The `beq` branch at 0x45c2a8 targets 0x45c2c0, is taken when a3(=a0-3184) >= 0xa (unsigned), and falls through when a3(=a0-3184) < 0xa (unsigned).
  The `beq` branch at 0x45c304 targets 0x45c2d8 and is always taken.
  The `beq` branch at 0x45c310 targets 0x45c2d8 and is always taken.
  The `beq` branch at 0x45c31c targets 0x45c2d8 and is always taken.
  The `beq` branch at 0x45c328 targets 0x45c2d8 and is always taken.
  The `beq` branch at 0x45c330 targets 0x45c2d8 and is always taken.
  The `beq` branch at 0x45c344 targets 0x45c2d8 and is always taken.
  The `beq` branch at 0x45c350 targets 0x45c2d8 and is always taken.
  The `beq` branch at 0x45c35c targets 0x45c2d8 and is always taken.
  The `beq` branch at 0x45c368 targets 0x45c2d8 and is always taken.
  The return at 0x45c2c8 has v0 = -0x1.
  The return at 0x45c2f0 has v0 = ?.
  The instructions from 0x45c2bc to 0x45c2bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45c2f8 to 0x45c2fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45c338 to 0x45c33c are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x45c2b4 uses the jump table at 0x460474 with targets 0x45c300, 0x45c2d0, 0x45c364, 0x45c358, 0x45c34c, 0x45c340, 0x45c330, 0x45c324, 0x45c318, 0x45c30c.

- `__glGetPixelMapfv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45c380 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45c380-0x45c3b4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45c39c calls __glGetPixelMap_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45c3ac has v0 = ret(__glGetPixelMap_size).

- `__glGetPixelMapuiv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45c3c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45c3c0-0x45c3f4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45c3dc calls __glGetPixelMap_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45c3ec has v0 = ret(__glGetPixelMap_size).

- `__glGetPixelMapusv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45c400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45c400-0x45c434 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45c41c calls __glGetPixelMap_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45c42c has v0 = ret(__glGetPixelMap_size).

- `__glGet_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45c440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45c440-0x45db18 (5848 bytes).
  It occupies 5848 bytes.
  The `bne` branch at 0x45c444 targets 0x45c4e4, is taken when a0 < 0xd1a (unsigned), and falls through when a0 >= 0xd1a (unsigned).
  The `bne` branch at 0x45c450 targets 0x45c664, is taken when a0 < 0xd1b (unsigned), and falls through when a0 >= 0xd1b (unsigned).
  The `bne` branch at 0x45c458 targets 0x45c5e0, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `bne` branch at 0x45c464 targets 0x45c864, is taken when a0 < 0x4008 (unsigned), and falls through when a0 >= 0x4008 (unsigned).
  The `bne` branch at 0x45c470 targets 0x45c7a8, is taken when a0 < v0(=0x807a) (unsigned), and falls through when a0 >= v0(=0x807a) (unsigned).
  The `beq` branch at 0x45c478 targets 0x45cb1c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0x45c484 targets 0x45caa0, is taken when a0 < v0(=0x80b4) (unsigned), and falls through when a0 >= v0(=0x80b4) (unsigned).
  The `beq` branch at 0x45c48c targets 0x45d004, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x45c498 targets 0x45cf90, is taken when a0 < v0(=0x80d1) (unsigned), and falls through when a0 >= v0(=0x80d1) (unsigned).
  The `beq` branch at 0x45c4a0 targets 0x45cd94, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0x45c4ac targets 0x45d620, is taken when a0 < v0(=0x846e) (unsigned), and falls through when a0 >= v0(=0x846e) (unsigned).
  The `beq` branch at 0x45c4b4 targets 0x45da80, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0x45c4c0 targets 0x45d950, is taken when a0 < v0(=0x84e1) (unsigned), and falls through when a0 >= v0(=0x84e1) (unsigned).
  The `beq` branch at 0x45c4cc targets 0x45d958, is taken when v0(=0x84e1) >= a0 (unsigned), and falls through when v0(=0x84e1) < a0 (unsigned).
  The `bne` branch at 0x45c4d4 targets 0x45c674, is taken when a0 != t8(=0x84e2), and falls through when a0 == t8(=0x84e2).
  The `beq` branch at 0x45c4dc targets 0x45d958 and is always taken.
  The `bne` branch at 0x45c4e4 targets 0x45c56c, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x45c4f0 targets 0x45c7a0, is taken when a0 < 0xba7 (unsigned), and falls through when a0 >= 0xba7 (unsigned).
  The `bne` branch at 0x45c4f8 targets 0x45c740, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45c504 targets 0x45ca98, is taken when a0 < 0xc63 (unsigned), and falls through when a0 >= 0xc63 (unsigned).
  The `bne` branch at 0x45c50c targets 0x45c9f8, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bne` branch at 0x45c518 targets 0x45cf80, is taken when a0 < 0xcf6 (unsigned), and falls through when a0 >= 0xcf6 (unsigned).
  The `bne` branch at 0x45c520 targets 0x45ce78, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x45c52c targets 0x45d5f8, is taken when a0 < 0xd13 (unsigned), and falls through when a0 >= 0xd13 (unsigned).
  The `bne` branch at 0x45c534 targets 0x45d4a4, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0x45c540 targets 0x45d7b0, is taken when a0 < 0xd17 (unsigned), and falls through when a0 >= 0xd17 (unsigned).
  The `bne` branch at 0x45c548 targets 0x45d7a8, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0x45c554 targets 0x45c664, is taken when a0 < 0xd19 (unsigned), and falls through when a0 >= 0xd19 (unsigned).
  The `bne` branch at 0x45c55c targets 0x45c674, is taken when a0 != t1(=0xd19), and falls through when a0 == t1(=0xd19).
  The `beq` branch at 0x45c564 targets 0x45d198 and is always taken.
  The `bne` branch at 0x45c56c targets 0x45c680, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x45c578 targets 0x45c950, is taken when a0 < 0xb53 (unsigned), and falls through when a0 >= 0xb53 (unsigned).
  The `bne` branch at 0x45c580 targets 0x45c904, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `bne` branch at 0x45c58c targets 0x45cdac, is taken when a0 < 0xb75 (unsigned), and falls through when a0 >= 0xb75 (unsigned).
  The `bne` branch at 0x45c594 targets 0x45cd30, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `bne` branch at 0x45c5a0 targets 0x45d3e4, is taken when a0 < 0xb98 (unsigned), and falls through when a0 >= 0xb98 (unsigned).
  The `bne` branch at 0x45c5a8 targets 0x45d354, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `bne` branch at 0x45c5b4 targets 0x45d978, is taken when a0 < 0xba3 (unsigned), and falls through when a0 >= 0xba3 (unsigned).
  The `bne` branch at 0x45c5bc targets 0x45d8c8, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `bne` branch at 0x45c5c8 targets 0x45db00, is taken when a0 < 0xba5 (unsigned), and falls through when a0 >= 0xba5 (unsigned).
  The `bne` branch at 0x45c5d0 targets 0x45c674, is taken when a0 != a4(=0xba5), and falls through when a0 == a4(=0xba5).
  The `bne` branch at 0x45c5e0 targets 0x45c6e0, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0x45c5ec targets 0x45ca90, is taken when a0 < 0xd95 (unsigned), and falls through when a0 >= 0xd95 (unsigned).
  The `bne` branch at 0x45c5f4 targets 0x45c9ac, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0x45c600 targets 0x45cf74, is taken when a0 < 0xdd4 (unsigned), and falls through when a0 >= 0xdd4 (unsigned).
  The `bne` branch at 0x45c608 targets 0x45ce40, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x45c614 targets 0x45d188, is taken when a0 < 0x3006 (unsigned), and falls through when a0 >= 0x3006 (unsigned).
  The `bne` branch at 0x45c61c targets 0x45d480, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `bne` branch at 0x45c628 targets 0x45c864, is taken when a0 < 0x4004 (unsigned), and falls through when a0 >= 0x4004 (unsigned).
  The `bne` branch at 0x45c630 targets 0x45c85c, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x45c63c targets 0x45c864, is taken when a0 < 0x4006 (unsigned), and falls through when a0 >= 0x4006 (unsigned).
  The `bne` branch at 0x45c644 targets 0x45c674, is taken when a0 != v0(=0x4006), and falls through when a0 == v0(=0x4006).
  The `beq` branch at 0x45c64c targets 0x45c864 and is always taken.
  The `bne` branch at 0x45c654 targets 0x45d190, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `beq` branch at 0x45c65c targets 0x45c674, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x45c66c targets 0x45da78, is taken when a0 == a1(=0xb05), and falls through when a0 != a1(=0xb05).
  The `bne` branch at 0x45c680 targets 0x45c810, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `bne` branch at 0x45c68c targets 0x45cc04, is taken when a0 < 0xb24 (unsigned), and falls through when a0 >= 0xb24 (unsigned).
  The `bne` branch at 0x45c694 targets 0x45cbcc, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x45c6a0 targets 0x45d210, is taken when a0 < 0xb42 (unsigned), and falls through when a0 >= 0xb42 (unsigned).
  The `bne` branch at 0x45c6a8 targets 0x45d158, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0x45c6b4 targets 0x45d7f8, is taken when a0 < 0xb46 (unsigned), and falls through when a0 >= 0xb46 (unsigned).
  The `bne` branch at 0x45c6bc targets 0x45d758, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x45c6c8 targets 0x45dad0, is taken when a0 < 0xb51 (unsigned), and falls through when a0 >= 0xb51 (unsigned).
  The `bne` branch at 0x45c6d0 targets 0x45c674, is taken when a0 != t2(=0xb51), and falls through when a0 == t2(=0xb51).
  The `bne` branch at 0x45c6e0 targets 0x45c86c, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `bne` branch at 0x45c6ec targets 0x45cd9c, is taken when a0 < 0xd52 (unsigned), and falls through when a0 >= 0xd52 (unsigned).
  The `bne` branch at 0x45c6f4 targets 0x45cc84, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x45c700 targets 0x45d2e0, is taken when a0 < 0xd5b (unsigned), and falls through when a0 >= 0xd5b (unsigned).
  The `bne` branch at 0x45c708 targets 0x45d2b4, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45c714 targets 0x45ca90, is taken when a0 < 0xd91 (unsigned), and falls through when a0 >= 0xd91 (unsigned).
  The `bne` branch at 0x45c71c targets 0x45d878, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bne` branch at 0x45c728 targets 0x45ca90, is taken when a0 < 0xd93 (unsigned), and falls through when a0 >= 0xd93 (unsigned).
  The `bne` branch at 0x45c730 targets 0x45c674, is taken when a0 != a3(=0xd93), and falls through when a0 == a3(=0xd93).
  The `beq` branch at 0x45c738 targets 0x45ca90 and is always taken.
  The `bne` branch at 0x45c740 targets 0x45c8b8, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x45c74c targets 0x45cda4, is taken when a0 < 0xc12 (unsigned), and falls through when a0 >= 0xc12 (unsigned).
  The `bne` branch at 0x45c754 targets 0x45ccf8, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0x45c760 targets 0x45d3dc, is taken when a0 < 0xc41 (unsigned), and falls through when a0 >= 0xc41 (unsigned).
  The `bne` branch at 0x45c768 targets 0x45d330, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x45c774 targets 0x45d970, is taken when a0 < 0xc54 (unsigned), and falls through when a0 >= 0xc54 (unsigned).
  The `bne` branch at 0x45c77c targets 0x45d8b8, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x45c788 targets 0x45daf8, is taken when a0 < 0xc61 (unsigned), and falls through when a0 >= 0xc61 (unsigned).
  The `bne` branch at 0x45c790 targets 0x45c674, is taken when a0 != t8(=0xc61), and falls through when a0 == t8(=0xc61).
  The `bne` branch at 0x45c7b0 targets 0x45c958, is taken when a0 < v0(=0x802e) (unsigned), and falls through when a0 >= v0(=0x802e) (unsigned).
  The `beq` branch at 0x45c7b8 targets 0x45cd94, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0x45c7c4 targets 0x45ce00, is taken when a0 < v0(=0x806e) (unsigned), and falls through when a0 >= v0(=0x806e) (unsigned).
  The `beq` branch at 0x45c7cc targets 0x45d5f0, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x45c7d8 targets 0x45d454, is taken when a0 < v0(=0x8076) (unsigned), and falls through when a0 >= v0(=0x8076) (unsigned).
  The `beq` branch at 0x45c7e0 targets 0x45cb1c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0x45c7ec targets 0x45d9c8, is taken when a0 < v0(=0x8078) (unsigned), and falls through when a0 >= v0(=0x8078) (unsigned).
  The `beq` branch at 0x45c7f8 targets 0x45cb1c, is taken when v0(=0x8078) >= a0 (unsigned), and falls through when v0(=0x8078) < a0 (unsigned).
  The `bne` branch at 0x45c800 targets 0x45c674, is taken when a0 != a6(=0x8079), and falls through when a0 == a6(=0x8079).
  The `beq` branch at 0x45c808 targets 0x45cb1c and is always taken.
  The `bne` branch at 0x45c810 targets 0x45ca44, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0x45c81c targets 0x45cf88, is taken when a0 < 0xb09 (unsigned), and falls through when a0 >= 0xb09 (unsigned).
  The `bne` branch at 0x45c824 targets 0x45cf40, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x45c830 targets 0x45d618, is taken when a0 < 0xb14 (unsigned), and falls through when a0 >= 0xb14 (unsigned).
  The `bne` branch at 0x45c838 targets 0x45d5d0, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `bne` branch at 0x45c844 targets 0x45da60, is taken when a0 < 0xb22 (unsigned), and falls through when a0 >= 0xb22 (unsigned).
  The `bne` branch at 0x45c84c targets 0x45c674, is taken when a0 != t9(=0xb22), and falls through when a0 == t9(=0xb22).
  The `bne` branch at 0x45c85c targets 0x45c674, is taken when a0 != at(=0x4004), and falls through when a0 == at(=0x4004).
  The `bne` branch at 0x45c86c targets 0x45cb24, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45c878 targets 0x45d1f8, is taken when a0 < 0xd34 (unsigned), and falls through when a0 >= 0xd34 (unsigned).
  The `bne` branch at 0x45c880 targets 0x45d080, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bne` branch at 0x45c88c targets 0x45d7d0, is taken when a0 < 0xd39 (unsigned), and falls through when a0 >= 0xd39 (unsigned).
  The `bne` branch at 0x45c894 targets 0x45d6ac, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x45c8a0 targets 0x45da90, is taken when a0 < 0xd3b (unsigned), and falls through when a0 >= 0xd3b (unsigned).
  The `bne` branch at 0x45c8a8 targets 0x45c674, is taken when a0 != a5(=0xd50), and falls through when a0 == a5(=0xd50).
  The `bne` branch at 0x45c8b8 targets 0x45cb5c, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0x45c8c4 targets 0x45d200, is taken when a0 < 0xbe2 (unsigned), and falls through when a0 >= 0xbe2 (unsigned).
  The `bne` branch at 0x45c8cc targets 0x45d0ec, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x45c8d8 targets 0x45d7e0, is taken when a0 < 0xc01 (unsigned), and falls through when a0 >= 0xc01 (unsigned).
  The `bne` branch at 0x45c8e0 targets 0x45d718, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x45c8ec targets 0x45dab0, is taken when a0 < 0xc03 (unsigned), and falls through when a0 >= 0xc03 (unsigned).
  The `bne` branch at 0x45c8f4 targets 0x45c674, is taken when a0 != t8(=0xc10), and falls through when a0 == t8(=0xc10).
  The `bne` branch at 0x45c904 targets 0x45cb94, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x45c910 targets 0x45d208, is taken when a0 < 0xb64 (unsigned), and falls through when a0 >= 0xb64 (unsigned).
  The `bne` branch at 0x45c918 targets 0x45d134, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45c924 targets 0x45d7f0, is taken when a0 < 0xb71 (unsigned), and falls through when a0 >= 0xb71 (unsigned).
  The `bne` branch at 0x45c92c targets 0x45d748, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bne` branch at 0x45c938 targets 0x45dac8, is taken when a0 < 0xb73 (unsigned), and falls through when a0 >= 0xb73 (unsigned).
  The `bne` branch at 0x45c940 targets 0x45c674, is taken when a0 != a3(=0xb73), and falls through when a0 == a3(=0xb73).
  The `bne` branch at 0x45c960 targets 0x45cc0c, is taken when a0 < v0(=0x801d) (unsigned), and falls through when a0 >= v0(=0x801d) (unsigned).
  The `beq` branch at 0x45c968 targets 0x45d1f0, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x45c974 targets 0x45d240, is taken when a0 < v0(=0x8021) (unsigned), and falls through when a0 >= v0(=0x8021) (unsigned).
  The `beq` branch at 0x45c97c targets 0x45d1f0, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0x45c988 targets 0x45d848, is taken when a0 < v0(=0x8023) (unsigned), and falls through when a0 >= v0(=0x8023) (unsigned).
  The `beq` branch at 0x45c994 targets 0x45d1f0, is taken when v0(=0x8023) >= a0 (unsigned), and falls through when v0(=0x8023) < a0 (unsigned).
  The `bne` branch at 0x45c99c targets 0x45c674, is taken when a0 != t2(=0x8024), and falls through when a0 == t2(=0x8024).
  The `beq` branch at 0x45c9a4 targets 0x45cd94 and is always taken.
  The `bne` branch at 0x45c9ac targets 0x45cc4c, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `bne` branch at 0x45c9b8 targets 0x45cf6c, is taken when a0 < 0xdb5 (unsigned), and falls through when a0 >= 0xdb5 (unsigned).
  The `bne` branch at 0x45c9c0 targets 0x45d290, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x45c9cc targets 0x45cf6c, is taken when a0 < 0xdb9 (unsigned), and falls through when a0 >= 0xdb9 (unsigned).
  The `bne` branch at 0x45c9d4 targets 0x45d868, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45c9e0 targets 0x45dae0, is taken when a0 < 0xdd2 (unsigned), and falls through when a0 >= 0xdd2 (unsigned).
  The `bne` branch at 0x45c9e8 targets 0x45c674, is taken when a0 != a1(=0xdd2), and falls through when a0 == a1(=0xdd2).
  The `bne` branch at 0x45c9f8 targets 0x45ccc0, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `bne` branch at 0x45ca04 targets 0x45cfe0, is taken when a0 < 0xcb8 (unsigned), and falls through when a0 >= 0xcb8 (unsigned).
  The `bne` branch at 0x45ca0c targets 0x45d30c, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x45ca18 targets 0x45d968, is taken when a0 < 0xcf2 (unsigned), and falls through when a0 >= 0xcf2 (unsigned).
  The `bne` branch at 0x45ca20 targets 0x45d8a8, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0x45ca2c targets 0x45daf0, is taken when a0 < 0xcf4 (unsigned), and falls through when a0 >= 0xcf4 (unsigned).
  The `bne` branch at 0x45ca34 targets 0x45c674, is taken when a0 != t0(=0xcf4), and falls through when a0 == t0(=0xcf4).
  The `bne` branch at 0x45ca44 targets 0x45cd68, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x45ca50 targets 0x45d3ec, is taken when a0 < 0xb05 (unsigned), and falls through when a0 >= 0xb05 (unsigned).
  The `bne` branch at 0x45ca58 targets 0x45c66c, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `bne` branch at 0x45ca64 targets 0x45d9a0, is taken when a0 < 0xb07 (unsigned), and falls through when a0 >= 0xb07 (unsigned).
  The `bne` branch at 0x45ca6c targets 0x45c674, is taken when a0 != t9(=0xb07), and falls through when a0 == t9(=0xb07).
  The `bne` branch at 0x45ca80 targets 0x45d8e8, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0x45ca88 targets 0x45c674, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x45caa8 targets 0x45cdc0, is taken when a0 < v0(=0x8086) (unsigned), and falls through when a0 >= v0(=0x8086) (unsigned).
  The `beq` branch at 0x45cab0 targets 0x45cb1c, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x45cabc targets 0x45d428, is taken when a0 < v0(=0x808c) (unsigned), and falls through when a0 >= v0(=0x808c) (unsigned).
  The `beq` branch at 0x45cac4 targets 0x45cb1c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0x45cad0 targets 0x45d9b8, is taken when a0 < v0(=0x80b2) (unsigned), and falls through when a0 >= v0(=0x80b2) (unsigned).
  The `beq` branch at 0x45cadc targets 0x45db10, is taken when v0(=0x80b2) >= a0 (unsigned), and falls through when v0(=0x80b2) < a0 (unsigned).
  The `bne` branch at 0x45cae4 targets 0x45c674, is taken when a0 != a6(=0x80b3), and falls through when a0 == a6(=0x80b3).
  The `beq` branch at 0x45caec targets 0x45d4d0 and is always taken.
  The `bne` branch at 0x45cb08 targets 0x45d9d8, is taken when a0 < v0(=0x807c) (unsigned), and falls through when a0 >= v0(=0x807c) (unsigned).
  The `bne` branch at 0x45cb14 targets 0x45c674, is taken when v0(=0x807c) < a0 (unsigned), and falls through when v0(=0x807c) >= a0 (unsigned).
  The `bne` branch at 0x45cb24 targets 0x45ceb0, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x45cb30 targets 0x45d198, is taken when a0 < 0xd20 (unsigned), and falls through when a0 >= 0xd20 (unsigned).
  The `bne` branch at 0x45cb38 targets 0x45d530, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `bne` branch at 0x45cb44 targets 0x45da18, is taken when a0 < 0xd32 (unsigned), and falls through when a0 >= 0xd32 (unsigned).
  The `bne` branch at 0x45cb4c targets 0x45c674, is taken when a0 != t9(=0xd32), and falls through when a0 == t9(=0xd32).
  The `bne` branch at 0x45cb5c targets 0x45ced4, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `bne` branch at 0x45cb68 targets 0x45d600, is taken when a0 < 0xbc2 (unsigned), and falls through when a0 >= 0xbc2 (unsigned).
  The `bne` branch at 0x45cb70 targets 0x45d568, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `bne` branch at 0x45cb7c targets 0x45da30, is taken when a0 < 0xbd1 (unsigned), and falls through when a0 >= 0xbd1 (unsigned).
  The `bne` branch at 0x45cb84 targets 0x45c674, is taken when a0 != a2(=0xbe0), and falls through when a0 == a2(=0xbe0).
  The `bne` branch at 0x45cb94 targets 0x45cef8, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x45cba0 targets 0x45d608, is taken when a0 < 0xb58 (unsigned), and falls through when a0 >= 0xb58 (unsigned).
  The `bne` branch at 0x45cba8 targets 0x45d5a0, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0x45cbb4 targets 0x45da48, is taken when a0 < 0xb62 (unsigned), and falls through when a0 >= 0xb62 (unsigned).
  The `bne` branch at 0x45cbbc targets 0x45c674, is taken when a0 != a7(=0xb62), and falls through when a0 == a7(=0xb62).
  The `bne` branch at 0x45cbcc targets 0x45cf1c, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x45cbd8 targets 0x45d610, is taken when a0 < 0xb32 (unsigned), and falls through when a0 >= 0xb32 (unsigned).
  The `bne` branch at 0x45cbe0 targets 0x45d5c0, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x45cbec targets 0x45da58, is taken when a0 < 0xb34 (unsigned), and falls through when a0 >= 0xb34 (unsigned).
  The `bne` branch at 0x45cbf4 targets 0x45c674, is taken when a0 != t8(=0xb40), and falls through when a0 == t8(=0xb40).
  The `bne` branch at 0x45cc14 targets 0x45d00c, is taken when a0 < v0(=0x8012) (unsigned), and falls through when a0 >= v0(=0x8012) (unsigned).
  The `beq` branch at 0x45cc1c targets 0x45cd94, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0x45cc28 targets 0x45d4c8, is taken when a0 < v0(=0x801b) (unsigned), and falls through when a0 >= v0(=0x801b) (unsigned).
  The `beq` branch at 0x45cc34 targets 0x45d4d0, is taken when v0(=0x801b) >= a0 (unsigned), and falls through when v0(=0x801b) < a0 (unsigned).
  The `bne` branch at 0x45cc3c targets 0x45c674, is taken when a0 != a2(=0x801c), and falls through when a0 == a2(=0x801c).
  The `beq` branch at 0x45cc44 targets 0x45d1f0 and is always taken.
  The `bne` branch at 0x45cc4c targets 0x45d034, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x45cc58 targets 0x45cf6c, is taken when a0 < 0xdb1 (unsigned), and falls through when a0 >= 0xdb1 (unsigned).
  The `bne` branch at 0x45cc60 targets 0x45d68c, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0x45cc6c targets 0x45cf6c, is taken when a0 < 0xdb3 (unsigned), and falls through when a0 >= 0xdb3 (unsigned).
  The `bne` branch at 0x45cc74 targets 0x45c674, is taken when a0 != a7(=0xdb3), and falls through when a0 == a7(=0xdb3).
  The `beq` branch at 0x45cc7c targets 0x45cf6c and is always taken.
  The `bne` branch at 0x45cc84 targets 0x45d058, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x45cc90 targets 0x45d7c8, is taken when a0 < 0xd57 (unsigned), and falls through when a0 >= 0xd57 (unsigned).
  The `bne` branch at 0x45cc98 targets 0x45d69c, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x45cca4 targets 0x45d2e0, is taken when a0 < 0xd59 (unsigned), and falls through when a0 >= 0xd59 (unsigned).
  The `bne` branch at 0x45ccac targets 0x45c674, is taken when a0 != t8(=0xd59), and falls through when a0 == t8(=0xd59).
  The `beq` branch at 0x45ccb4 targets 0x45d2e0 and is always taken.
  The `bne` branch at 0x45ccc0 targets 0x45d0a4, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x45cccc targets 0x45cfe0, is taken when a0 < 0xcb4 (unsigned), and falls through when a0 >= 0xcb4 (unsigned).
  The `bne` branch at 0x45ccd4 targets 0x45d6e8, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45cce0 targets 0x45cfe0, is taken when a0 < 0xcb6 (unsigned), and falls through when a0 >= 0xcb6 (unsigned).
  The `bne` branch at 0x45cce8 targets 0x45c674, is taken when a0 != a1(=0xcb6), and falls through when a0 == a1(=0xcb6).
  The `beq` branch at 0x45ccf0 targets 0x45cfe0 and is always taken.
  The `bne` branch at 0x45ccf8 targets 0x45d0c8, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `bne` branch at 0x45cd04 targets 0x45d7d8, is taken when a0 < 0xc31 (unsigned), and falls through when a0 >= 0xc31 (unsigned).
  The `bne` branch at 0x45cd0c targets 0x45d708, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x45cd18 targets 0x45daa8, is taken when a0 < 0xc33 (unsigned), and falls through when a0 >= 0xc33 (unsigned).
  The `bne` branch at 0x45cd20 targets 0x45c674, is taken when a0 != a6(=0xc33), and falls through when a0 == a6(=0xc33).
  The `bne` branch at 0x45cd30 targets 0x45d110, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0x45cd3c targets 0x45d7e8, is taken when a0 < 0xb94 (unsigned), and falls through when a0 >= 0xb94 (unsigned).
  The `bne` branch at 0x45cd44 targets 0x45d738, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x45cd50 targets 0x45dac0, is taken when a0 < 0xb96 (unsigned), and falls through when a0 >= 0xb96 (unsigned).
  The `bne` branch at 0x45cd58 targets 0x45c674, is taken when a0 != t3(=0xb96), and falls through when a0 == t3(=0xb96).
  The `bne` branch at 0x45cd68 targets 0x45d1a0, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45cd74 targets 0x45d800, is taken when a0 < 0xb03 (unsigned), and falls through when a0 >= 0xb03 (unsigned).
  The `bne` branch at 0x45cd7c targets 0x45c674, is taken when a0 != t9(=0xb03), and falls through when a0 == t9(=0xb03).
  The `bne` branch at 0x45cd8c targets 0x45c674, is taken when a0 != at(=0x80d2), and falls through when a0 == at(=0x80d2).
  The `bne` branch at 0x45cdc8 targets 0x45d218, is taken when a0 < v0(=0x8081) (unsigned), and falls through when a0 >= v0(=0x8081) (unsigned).
  The `beq` branch at 0x45cdd0 targets 0x45cb1c, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x45cddc targets 0x45d818, is taken when a0 < v0(=0x8083) (unsigned), and falls through when a0 >= v0(=0x8083) (unsigned).
  The `beq` branch at 0x45cde8 targets 0x45cb1c, is taken when v0(=0x8083) >= a0 (unsigned), and falls through when v0(=0x8083) < a0 (unsigned).
  The `bne` branch at 0x45cdf0 targets 0x45c674, is taken when a0 != a4(=0x8085), and falls through when a0 == a4(=0x8085).
  The `beq` branch at 0x45cdf8 targets 0x45cb1c and is always taken.
  The `bne` branch at 0x45ce08 targets 0x45d1c0, is taken when a0 < v0(=0x806a) (unsigned), and falls through when a0 >= v0(=0x806a) (unsigned).
  The `beq` branch at 0x45ce10 targets 0x45d1e0, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bne` branch at 0x45ce1c targets 0x45d838, is taken when a0 < v0(=0x806c) (unsigned), and falls through when a0 >= v0(=0x806c) (unsigned).
  The `beq` branch at 0x45ce28 targets 0x45dad8, is taken when v0(=0x806c) >= a0 (unsigned), and falls through when v0(=0x806c) < a0 (unsigned).
  The `bne` branch at 0x45ce30 targets 0x45c674, is taken when a0 != t1(=0x806d), and falls through when a0 == t1(=0x806d).
  The `bne` branch at 0x45ce40 targets 0x45d26c, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x45ce4c targets 0x45d188, is taken when a0 < 0x3002 (unsigned), and falls through when a0 >= 0x3002 (unsigned).
  The `bne` branch at 0x45ce54 targets 0x45d180, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `bne` branch at 0x45ce60 targets 0x45d188, is taken when a0 < 0x3004 (unsigned), and falls through when a0 >= 0x3004 (unsigned).
  The `bne` branch at 0x45ce68 targets 0x45c674, is taken when a0 != at(=0x3004), and falls through when a0 == at(=0x3004).
  The `beq` branch at 0x45ce70 targets 0x45d188 and is always taken.
  The `bne` branch at 0x45ce78 targets 0x45d2e8, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45ce84 targets 0x45d960, is taken when a0 < 0xd05 (unsigned), and falls through when a0 >= 0xd05 (unsigned).
  The `bne` branch at 0x45ce8c targets 0x45d898, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bne` branch at 0x45ce98 targets 0x45dae8, is taken when a0 < 0xd11 (unsigned), and falls through when a0 >= 0xd11 (unsigned).
  The `bne` branch at 0x45cea0 targets 0x45c674, is taken when a0 != a3(=0xd11), and falls through when a0 == a3(=0xd11).
  The `bne` branch at 0x45ceb0 targets 0x45c654, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45cebc targets 0x45d198, is taken when a0 < 0xd1e (unsigned), and falls through when a0 >= 0xd1e (unsigned).
  The `bne` branch at 0x45cec4 targets 0x45c674, is taken when a0 != a5(=0xd1e), and falls through when a0 == a5(=0xd1e).
  The `beq` branch at 0x45cecc targets 0x45c664 and is always taken.
  The `bne` branch at 0x45ced4 targets 0x45d378, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0x45cee0 targets 0x45d980, is taken when a0 < 0xbb1 (unsigned), and falls through when a0 >= 0xbb1 (unsigned).
  The `bne` branch at 0x45cee8 targets 0x45c674, is taken when a0 != t0(=0xbc0), and falls through when a0 == t0(=0xbc0).
  The `bne` branch at 0x45cef8 targets 0x45d394, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45cf04 targets 0x45d988, is taken when a0 < 0xb56 (unsigned), and falls through when a0 >= 0xb56 (unsigned).
  The `bne` branch at 0x45cf0c targets 0x45c674, is taken when a0 != t2(=0xb56), and falls through when a0 == t2(=0xb56).
  The `bne` branch at 0x45cf1c targets 0x45d3ac, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45cf28 targets 0x45d990, is taken when a0 < 0xb27 (unsigned), and falls through when a0 >= 0xb27 (unsigned).
  The `bne` branch at 0x45cf30 targets 0x45c674, is taken when a0 != t8(=0xb30), and falls through when a0 == t8(=0xb30).
  The `bne` branch at 0x45cf40 targets 0x45d3c4, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45cf4c targets 0x45d998, is taken when a0 < 0xb12 (unsigned), and falls through when a0 >= 0xb12 (unsigned).
  The `bne` branch at 0x45cf54 targets 0x45c674, is taken when a0 != at(=0xb12), and falls through when a0 == at(=0xb12).
  The `bne` branch at 0x45cf64 targets 0x45c674, is taken when a0 != v0(=0xdb5), and falls through when a0 == v0(=0xdb5).
  The `bne` branch at 0x45cf98 targets 0x45d400, is taken when a0 < v0(=0x80b9) (unsigned), and falls through when a0 >= v0(=0x80b9) (unsigned).
  The `beq` branch at 0x45cfa0 targets 0x45d004, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x45cfac targets 0x45d9a8, is taken when a0 < v0(=0x80bb) (unsigned), and falls through when a0 >= v0(=0x80bb) (unsigned).
  The `beq` branch at 0x45cfb8 targets 0x45d004, is taken when v0(=0x80bb) >= a0 (unsigned), and falls through when v0(=0x80bb) < a0 (unsigned).
  The `bne` branch at 0x45cfc0 targets 0x45c674, is taken when a0 != a4(=0x80d0), and falls through when a0 == a4(=0x80d0).
  The `beq` branch at 0x45cfc8 targets 0x45cd94 and is always taken.
  The `bne` branch at 0x45cfd0 targets 0x45d920, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x45cfd8 targets 0x45c674, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x45cff0 targets 0x45da68, is taken when a0 < v0(=0x80b6) (unsigned), and falls through when a0 >= v0(=0x80b6) (unsigned).
  The `bne` branch at 0x45cffc targets 0x45c674, is taken when v0(=0x80b6) < a0 (unsigned), and falls through when v0(=0x80b6) >= a0 (unsigned).
  The `bne` branch at 0x45d014 targets 0x45d4d8, is taken when a0 < v0(=0x8010) (unsigned), and falls through when a0 >= v0(=0x8010) (unsigned).
  The `beq` branch at 0x45d01c targets 0x45cd94, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0x45d024 targets 0x45c674, is taken when a0 != t2(=0x8011), and falls through when a0 == t2(=0x8011).
  The `beq` branch at 0x45d02c targets 0x45cd94 and is always taken.
  The `bne` branch at 0x45d034 targets 0x45ca80, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45d040 targets 0x45ca90, is taken when a0 < 0xd98 (unsigned), and falls through when a0 >= 0xd98 (unsigned).
  The `bne` branch at 0x45d048 targets 0x45c674, is taken when a0 != t8(=0xd98), and falls through when a0 == t8(=0xd98).
  The `beq` branch at 0x45d050 targets 0x45ca90 and is always taken.
  The `bne` branch at 0x45d058 targets 0x45d500, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45d064 targets 0x45da08, is taken when a0 < 0xd55 (unsigned), and falls through when a0 >= 0xd55 (unsigned).
  The `bne` branch at 0x45d06c targets 0x45c674, is taken when a0 != at(=0xd55), and falls through when a0 == at(=0xd55).
  The `bne` branch at 0x45d080 targets 0x45d518, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45d08c targets 0x45da10, is taken when a0 < 0xd37 (unsigned), and falls through when a0 >= 0xd37 (unsigned).
  The `bne` branch at 0x45d094 targets 0x45c674, is taken when a0 != v1(=0xd37), and falls through when a0 == v1(=0xd37).
  The `bne` branch at 0x45d0a4 targets 0x45cfd0, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45d0b0 targets 0x45cfe0, is taken when a0 < 0xcb2 (unsigned), and falls through when a0 >= 0xcb2 (unsigned).
  The `bne` branch at 0x45d0b8 targets 0x45c674, is taken when a0 != a2(=0xcb2), and falls through when a0 == a2(=0xcb2).
  The `beq` branch at 0x45d0c0 targets 0x45cfe0 and is always taken.
  The `bne` branch at 0x45d0c8 targets 0x45d540, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45d0d4 targets 0x45da20, is taken when a0 < 0xc23 (unsigned), and falls through when a0 >= 0xc23 (unsigned).
  The `bne` branch at 0x45d0dc targets 0x45c674, is taken when a0 != a4(=0xc23), and falls through when a0 == a4(=0xc23).
  The `bne` branch at 0x45d0ec targets 0x45d558, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0x45d0f8 targets 0x45da28, is taken when a0 < 0xbf1 (unsigned), and falls through when a0 >= 0xbf1 (unsigned).
  The `bne` branch at 0x45d100 targets 0x45c674, is taken when a0 != a7(=0xbf1), and falls through when a0 == a7(=0xbf1).
  The `bne` branch at 0x45d110 targets 0x45d578, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45d11c targets 0x45da38, is taken when a0 < 0xb92 (unsigned), and falls through when a0 >= 0xb92 (unsigned).
  The `bne` branch at 0x45d124 targets 0x45c674, is taken when a0 != t1(=0xb92), and falls through when a0 == t1(=0xb92).
  The `bne` branch at 0x45d134 targets 0x45d590, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x45d140 targets 0x45da40, is taken when a0 < 0xb66 (unsigned), and falls through when a0 >= 0xb66 (unsigned).
  The `bne` branch at 0x45d148 targets 0x45c674, is taken when a0 != t8(=0xb66), and falls through when a0 == t8(=0xb66).
  The `bne` branch at 0x45d158 targets 0x45d5b0, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x45d164 targets 0x45da50, is taken when a0 < 0xb44 (unsigned), and falls through when a0 >= 0xb44 (unsigned).
  The `bne` branch at 0x45d16c targets 0x45c674, is taken when a0 != v0(=0xb44), and falls through when a0 == v0(=0xb44).
  The `bne` branch at 0x45d180 targets 0x45c674, is taken when a0 != v1(=0x3002), and falls through when a0 == v1(=0x3002).
  The `bne` branch at 0x45d190 targets 0x45c674, is taken when a0 != a1(=0xd1b), and falls through when a0 == a1(=0xd1b).
  The `bne` branch at 0x45d1a0 targets 0x45d5e0, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x45d1a8 targets 0x45c674, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x45d1c8 targets 0x45d64c, is taken when a0 < v0(=0x8068) (unsigned), and falls through when a0 >= v0(=0x8068) (unsigned).
  The `beq` branch at 0x45d1d0 targets 0x45d1e0, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x45d1d8 targets 0x45c674, is taken when a0 != a5(=0x8069), and falls through when a0 == a5(=0x8069).
  The `bne` branch at 0x45d1e8 targets 0x45c674, is taken when a0 != a6(=0x801e), and falls through when a0 == a6(=0x801e).
  The `bne` branch at 0x45d220 targets 0x45cb00, is taken when a0 < v0(=0x807e) (unsigned), and falls through when a0 >= v0(=0x807e) (unsigned).
  The `beq` branch at 0x45d228 targets 0x45cb1c, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0x45d230 targets 0x45c674, is taken when a0 != t1(=0x807f), and falls through when a0 == t1(=0x807f).
  The `beq` branch at 0x45d238 targets 0x45cb1c and is always taken.
  The `bne` branch at 0x45d248 targets 0x45d1e8, is taken when a0 < v0(=0x801f) (unsigned), and falls through when a0 >= v0(=0x801f) (unsigned).
  The `beq` branch at 0x45d254 targets 0x45d1f0, is taken when v0(=0x801f) >= a0 (unsigned), and falls through when v0(=0x801f) < a0 (unsigned).
  The `bne` branch at 0x45d25c targets 0x45c674, is taken when a0 != t8(=0x8020), and falls through when a0 == t8(=0x8020).
  The `beq` branch at 0x45d264 targets 0x45d1f0 and is always taken.
  The `bne` branch at 0x45d26c targets 0x45d670, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x45d278 targets 0x45d7c0, is taken when a0 < 0x2a01 (unsigned), and falls through when a0 >= 0x2a01 (unsigned).
  The `bne` branch at 0x45d280 targets 0x45c674, is taken when a0 != v0(=0x3000), and falls through when a0 == v0(=0x3000).
  The `beq` branch at 0x45d288 targets 0x45d188 and is always taken.
  The `bne` branch at 0x45d290 targets 0x45cf64, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `bne` branch at 0x45d29c targets 0x45cf6c, is taken when a0 < 0xdb7 (unsigned), and falls through when a0 >= 0xdb7 (unsigned).
  The `bne` branch at 0x45d2a4 targets 0x45c674, is taken when a0 != a2(=0xdb7), and falls through when a0 == a2(=0xdb7).
  The `beq` branch at 0x45d2ac targets 0x45cf6c and is always taken.
  The `bne` branch at 0x45d2b4 targets 0x45d2d8, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x45d2c0 targets 0x45da88, is taken when a0 < 0xd71 (unsigned), and falls through when a0 >= 0xd71 (unsigned).
  The `bne` branch at 0x45d2c8 targets 0x45c674, is taken when a0 != a5(=0xd80), and falls through when a0 == a5(=0xd80).
  The `bne` branch at 0x45d2d8 targets 0x45c674, is taken when a0 != a6(=0xd5b), and falls through when a0 == a6(=0xd5b).
  The `bne` branch at 0x45d2e8 targets 0x45d6c0, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45d2f4 targets 0x45da98, is taken when a0 < 0xd03 (unsigned), and falls through when a0 >= 0xd03 (unsigned).
  The `bne` branch at 0x45d2fc targets 0x45c674, is taken when a0 != t0(=0xd03), and falls through when a0 == t0(=0xd03).
  The `bne` branch at 0x45d30c targets 0x45d6d8, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x45d318 targets 0x45cfe0, is taken when a0 < 0xcba (unsigned), and falls through when a0 >= 0xcba (unsigned).
  The `bne` branch at 0x45d320 targets 0x45c674, is taken when a0 != t3(=0xcf0), and falls through when a0 == t3(=0xcf0).
  The `bne` branch at 0x45d330 targets 0x45d6f8, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `bne` branch at 0x45d33c targets 0x45daa0, is taken when a0 < 0xc52 (unsigned), and falls through when a0 >= 0xc52 (unsigned).
  The `bne` branch at 0x45d344 targets 0x45c674, is taken when a0 != at(=0xc52), and falls through when a0 == at(=0xc52).
  The `bne` branch at 0x45d354 targets 0x45d728, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45d360 targets 0x45dab8, is taken when a0 < 0xba1 (unsigned), and falls through when a0 >= 0xba1 (unsigned).
  The `bne` branch at 0x45d368 targets 0x45c674, is taken when a0 != a1(=0xba1), and falls through when a0 == a1(=0xba1).
  The `bne` branch at 0x45d378 targets 0x45d768, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x45d384 targets 0x45c674, is taken when a0 >= 0xba9 (unsigned), and falls through when a0 < 0xba9 (unsigned).
  The `bne` branch at 0x45d394 targets 0x45d778, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x45d39c targets 0x45c674, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x45d3ac targets 0x45d788, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x45d3b4 targets 0x45c674, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x45d3c4 targets 0x45d798, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x45d3cc targets 0x45c674, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x45d408 targets 0x45cfe8, is taken when a0 < v0(=0x80b7) (unsigned), and falls through when a0 >= v0(=0x80b7) (unsigned).
  The `beq` branch at 0x45d410 targets 0x45d004, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0x45d418 targets 0x45c674, is taken when a0 != t1(=0x80b8), and falls through when a0 == t1(=0x80b8).
  The `beq` branch at 0x45d420 targets 0x45d004 and is always taken.
  The `bne` branch at 0x45d430 targets 0x45d808, is taken when a0 < v0(=0x8089) (unsigned), and falls through when a0 >= v0(=0x8089) (unsigned).
  The `beq` branch at 0x45d43c targets 0x45cb1c, is taken when v0(=0x8089) >= a0 (unsigned), and falls through when v0(=0x8089) < a0 (unsigned).
  The `bne` branch at 0x45d444 targets 0x45c674, is taken when a0 != t8(=0x808a), and falls through when a0 == t8(=0x808a).
  The `beq` branch at 0x45d44c targets 0x45cb1c and is always taken.
  The `bne` branch at 0x45d45c targets 0x45d828, is taken when a0 < v0(=0x8074) (unsigned), and falls through when a0 >= v0(=0x8074) (unsigned).
  The `beq` branch at 0x45d468 targets 0x45cb1c, is taken when v0(=0x8074) >= a0 (unsigned), and falls through when v0(=0x8074) < a0 (unsigned).
  The `bne` branch at 0x45d470 targets 0x45c674, is taken when a0 != v0(=0x8075), and falls through when a0 == v0(=0x8075).
  The `beq` branch at 0x45d478 targets 0x45cb1c and is always taken.
  The `bne` branch at 0x45d480 targets 0x45d858, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `bne` branch at 0x45d48c targets 0x45c864, is taken when a0 < 0x4002 (unsigned), and falls through when a0 >= 0x4002 (unsigned).
  The `bne` branch at 0x45d494 targets 0x45c674, is taken when a0 != a2(=0x4002), and falls through when a0 == a2(=0x4002).
  The `beq` branch at 0x45d49c targets 0x45c864 and is always taken.
  The `bne` branch at 0x45d4a4 targets 0x45d888, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x45d4b0 targets 0x45c664, is taken when a0 < 0xd15 (unsigned), and falls through when a0 >= 0xd15 (unsigned).
  The `bne` branch at 0x45d4b8 targets 0x45c674, is taken when a0 != a5(=0xd15), and falls through when a0 == a5(=0xd15).
  The `beq` branch at 0x45d4c0 targets 0x45d198 and is always taken.
  The `bne` branch at 0x45d4c8 targets 0x45c674, is taken when a0 != a6(=0x801a), and falls through when a0 == a6(=0x801a).
  The `bne` branch at 0x45d4e0 targets 0x45d8d8, is taken when a0 < v0(=0x8009) (unsigned), and falls through when a0 >= v0(=0x8009) (unsigned).
  The `bne` branch at 0x45d4ec targets 0x45c674, is taken when v0(=0x8009) < a0 (unsigned), and falls through when v0(=0x8009) >= a0 (unsigned).
  The `bne` branch at 0x45d500 targets 0x45d900, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `beq` branch at 0x45d508 targets 0x45c674, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x45d518 targets 0x45d910, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `beq` branch at 0x45d520 targets 0x45c674, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x45d530 targets 0x45c674, is taken when a0 != t3(=0xd30), and falls through when a0 == t3(=0xd30).
  The `bne` branch at 0x45d540 targets 0x45d930, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `beq` branch at 0x45d548 targets 0x45c674, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x45d558 targets 0x45c674, is taken when a0 != t9(=0xbe2), and falls through when a0 == t9(=0xbe2).
  The `bne` branch at 0x45d568 targets 0x45c674, is taken when a0 != at(=0xbc2), and falls through when a0 == at(=0xbc2).
  The `bne` branch at 0x45d578 targets 0x45d940, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `beq` branch at 0x45d580 targets 0x45c674, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x45d590 targets 0x45c674, is taken when a0 != a1(=0xb64), and falls through when a0 == a1(=0xb64).
  The `bne` branch at 0x45d5a0 targets 0x45c674, is taken when a0 != a2(=0xb60), and falls through when a0 == a2(=0xb60).
  The `bne` branch at 0x45d5b0 targets 0x45c674, is taken when a0 != a3(=0xb42), and falls through when a0 == a3(=0xb42).
  The `bne` branch at 0x45d5c0 targets 0x45c674, is taken when a0 != a4(=0xb32), and falls through when a0 == a4(=0xb32).
  The `bne` branch at 0x45d5d0 targets 0x45c674, is taken when a0 != a5(=0xb20), and falls through when a0 == a5(=0xb20).
  The `bne` branch at 0x45d5e0 targets 0x45c674, is taken when a0 != a6(=0xb00), and falls through when a0 == a6(=0xb00).
  The `bne` branch at 0x45d628 targets 0x45cd8c, is taken when a0 < v0(=0x81f8) (unsigned), and falls through when a0 >= v0(=0x81f8) (unsigned).
  The `beq` branch at 0x45d634 targets 0x45db08, is taken when v0(=0x81f8) >= a0 (unsigned), and falls through when v0(=0x81f8) < a0 (unsigned).
  The `bne` branch at 0x45d63c targets 0x45c674, is taken when a0 != t1(=0x846d), and falls through when a0 == t1(=0x846d).
  The `bne` branch at 0x45d654 targets 0x45d7b8, is taken when a0 < v0(=0x803a) (unsigned), and falls through when a0 >= v0(=0x803a) (unsigned).
  The `bne` branch at 0x45d660 targets 0x45c674, is taken when v0(=0x803a) < a0 (unsigned), and falls through when v0(=0x803a) >= a0 (unsigned).
  The `bne` branch at 0x45d670 targets 0x45d9e8, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `beq` branch at 0x45d67c targets 0x45c674, is taken when a0 >= 0xde2 (unsigned), and falls through when a0 < 0xde2 (unsigned).
  The `bne` branch at 0x45d68c targets 0x45c674, is taken when a0 != at(=0xdb1), and falls through when a0 == at(=0xdb1).
  The `beq` branch at 0x45d694 targets 0x45cf6c and is always taken.
  The `bne` branch at 0x45d69c targets 0x45c674, is taken when a0 != v0(=0xd57), and falls through when a0 == v0(=0xd57).
  The `bne` branch at 0x45d6ac targets 0x45c674, is taken when a0 != v1(=0xd39), and falls through when a0 == v1(=0xd39).
  The `bne` branch at 0x45d6c0 targets 0x45d9f8, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x45d6c8 targets 0x45c674, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x45d6d8 targets 0x45c674, is taken when a0 != a2(=0xcb8), and falls through when a0 == a2(=0xcb8).
  The `beq` branch at 0x45d6e0 targets 0x45cfe0 and is always taken.
  The `bne` branch at 0x45d6e8 targets 0x45c674, is taken when a0 != a3(=0xcb4), and falls through when a0 == a3(=0xcb4).
  The `beq` branch at 0x45d6f0 targets 0x45cfe0 and is always taken.
  The `bne` branch at 0x45d6f8 targets 0x45c674, is taken when a0 != a4(=0xc50), and falls through when a0 == a4(=0xc50).
  The `bne` branch at 0x45d708 targets 0x45c674, is taken when a0 != a5(=0xc31), and falls through when a0 == a5(=0xc31).
  The `bne` branch at 0x45d718 targets 0x45c674, is taken when a0 != a6(=0xc01), and falls through when a0 == a6(=0xc01).
  The `bne` branch at 0x45d728 targets 0x45c674, is taken when a0 != a7(=0xb98), and falls through when a0 == a7(=0xb98).
  The `bne` branch at 0x45d738 targets 0x45c674, is taken when a0 != t0(=0xb94), and falls through when a0 == t0(=0xb94).
  The `bne` branch at 0x45d748 targets 0x45c674, is taken when a0 != t1(=0xb71), and falls through when a0 == t1(=0xb71).
  The `bne` branch at 0x45d758 targets 0x45c674, is taken when a0 != t2(=0xb46), and falls through when a0 == t2(=0xb46).
  The `bne` branch at 0x45d768 targets 0x45c674, is taken when a0 != t3(=0xba7), and falls through when a0 == t3(=0xba7).
  The `bne` branch at 0x45d778 targets 0x45c674, is taken when a0 != t8(=0xb53), and falls through when a0 == t8(=0xb53).
  The `bne` branch at 0x45d788 targets 0x45c674, is taken when a0 != t9(=0xb24), and falls through when a0 == t9(=0xb24).
  The `bne` branch at 0x45d798 targets 0x45c674, is taken when a0 != at(=0xb09), and falls through when a0 == at(=0xb09).
  The `bne` branch at 0x45d7a8 targets 0x45c674, is taken when a0 != v0(=0xd17), and falls through when a0 == v0(=0xd17).
  The `bne` branch at 0x45d7b8 targets 0x45c674, is taken when a0 != v1(=0x8038), and falls through when a0 == v1(=0x8038).
  The `bne` branch at 0x45d808 targets 0x45c674, is taken when a0 != a1(=0x8088), and falls through when a0 == a1(=0x8088).
  The `beq` branch at 0x45d810 targets 0x45cb1c and is always taken.
  The `bne` branch at 0x45d818 targets 0x45c674, is taken when a0 != a2(=0x8082), and falls through when a0 == a2(=0x8082).
  The `beq` branch at 0x45d820 targets 0x45cb1c and is always taken.
  The `bne` branch at 0x45d828 targets 0x45c674, is taken when a0 != a3(=0x806f), and falls through when a0 == a3(=0x806f).
  The `beq` branch at 0x45d830 targets 0x45d684 and is always taken.
  The `bne` branch at 0x45d838 targets 0x45c674, is taken when a0 != a4(=0x806b), and falls through when a0 == a4(=0x806b).
  The `bne` branch at 0x45d848 targets 0x45c674, is taken when a0 != a5(=0x8022), and falls through when a0 == a5(=0x8022).
  The `beq` branch at 0x45d850 targets 0x45d1f0 and is always taken.
  The `bne` branch at 0x45d858 targets 0x45c674, is taken when a0 != a6(=0x4000), and falls through when a0 == a6(=0x4000).
  The `beq` branch at 0x45d860 targets 0x45c864 and is always taken.
  The `bne` branch at 0x45d868 targets 0x45c674, is taken when a0 != a7(=0xdd0), and falls through when a0 == a7(=0xdd0).
  The `bne` branch at 0x45d878 targets 0x45c674, is taken when a0 != t0(=0xd91), and falls through when a0 == t0(=0xd91).
  The `beq` branch at 0x45d880 targets 0x45ca90 and is always taken.
  The `bne` branch at 0x45d888 targets 0x45c674, is taken when a0 != t1(=0xd13), and falls through when a0 == t1(=0xd13).
  The `bne` branch at 0x45d898 targets 0x45c674, is taken when a0 != t2(=0xd05), and falls through when a0 == t2(=0xd05).
  The `bne` branch at 0x45d8a8 targets 0x45c674, is taken when a0 != t3(=0xcf2), and falls through when a0 == t3(=0xcf2).
  The `bne` branch at 0x45d8b8 targets 0x45c674, is taken when a0 != t8(=0xc54), and falls through when a0 == t8(=0xc54).
  The `bne` branch at 0x45d8c8 targets 0x45c674, is taken when a0 != t9(=0xba3), and falls through when a0 == t9(=0xba3).
  The `bne` branch at 0x45d8d8 targets 0x45c674, is taken when a0 != at(=0x8005), and falls through when a0 == at(=0x8005).
  The `bne` branch at 0x45d8ec targets 0x45c674, is taken when a0 != v0(=0xd95), and falls through when a0 == v0(=0xd95).
  The `beq` branch at 0x45d8f4 targets 0x45ca90 and is always taken.
  The `bne` branch at 0x45d900 targets 0x45c674, is taken when a0 != v1(=0xd52), and falls through when a0 == v1(=0xd52).
  The `bne` branch at 0x45d910 targets 0x45c674, is taken when a0 != a1(=0xd34), and falls through when a0 == a1(=0xd34).
  The `bne` branch at 0x45d920 targets 0x45c674, is taken when a0 != a2(=0xc63), and falls through when a0 == a2(=0xc63).
  The `bne` branch at 0x45d930 targets 0x45c674, is taken when a0 != a3(=0xc20), and falls through when a0 == a3(=0xc20).
  The `bne` branch at 0x45d940 targets 0x45c674, is taken when a0 != a4(=0xb80), and falls through when a0 == a4(=0xb80).
  The `bne` branch at 0x45d950 targets 0x45c674, is taken when a0 != a5(=0x84e0), and falls through when a0 == a5(=0x84e0).
  The `bne` branch at 0x45d9a8 targets 0x45c674, is taken when a0 != a6(=0x80ba), and falls through when a0 == a6(=0x80ba).
  The `beq` branch at 0x45d9b0 targets 0x45d004 and is always taken.
  The `bne` branch at 0x45d9b8 targets 0x45c674, is taken when a0 != a7(=0x80b1), and falls through when a0 == a7(=0x80b1).
  The `bne` branch at 0x45d9c8 targets 0x45c674, is taken when a0 != t0(=0x8077), and falls through when a0 == t0(=0x8077).
  The `beq` branch at 0x45d9d0 targets 0x45cb1c and is always taken.
  The `bne` branch at 0x45d9d8 targets 0x45c674, is taken when a0 != t1(=0x807b), and falls through when a0 == t1(=0x807b).
  The `beq` branch at 0x45d9e0 targets 0x45cb1c and is always taken.
  The `bne` branch at 0x45d9e8 targets 0x45c674, is taken when a0 != t2(=0xde0), and falls through when a0 == t2(=0xde0).
  The `beq` branch at 0x45d9f0 targets 0x45d684 and is always taken.
  The `bne` branch at 0x45d9f8 targets 0x45c674, is taken when a0 != t3(=0xd00), and falls through when a0 == t3(=0xd00).
  The `bne` branch at 0x45da68 targets 0x45c674, is taken when a0 != t8(=0x80b5), and falls through when a0 == t8(=0x80b5).
  The `beq` branch at 0x45da70 targets 0x45d004 and is always taken.
  The return at 0x45c5d8 has v0 = 0x1.
  The return at 0x45c664 has v0 = 0x1.
  The return at 0x45c674 has v0 = -0x1.
  The return at 0x45c6d8 has v0 = 0x1.
  The return at 0x45c798 has v0 = 0x1.
  The return at 0x45c7a0 has v0 = 0x10.
  The return at 0x45c854 has v0 = 0x2.
  The return at 0x45c864 has v0 = 0x1.
  The return at 0x45c8b0 has v0 = 0x1.
  The return at 0x45c8fc has v0 = 0x4.
  The return at 0x45c948 has v0 = 0x1.
  The return at 0x45c950 has v0 = 0x1.
  The return at 0x45c9f0 has v0 = 0x4.
  The return at 0x45ca3c has v0 = 0x1.
  The return at 0x45ca74 has v0 = 0x4.
  The return at 0x45ca90 has v0 = 0x1.
  The return at 0x45ca98 has v0 = 0x1.
  The return at 0x45cb1c has v0 = 0x1.
  The return at 0x45cb54 has v0 = 0x1.
  The return at 0x45cb8c has v0 = 0x1.
  The return at 0x45cbc4 has v0 = 0x1.
  The return at 0x45cbfc has v0 = 0x2.
  The return at 0x45cc04 has v0 = 0x1.
  The return at 0x45cd28 has v0 = 0x1.
  The return at 0x45cd60 has v0 = 0x1.
  The return at 0x45cd84 has v0 = 0x4.
  The return at 0x45cd94 has v0 = 0x1.
  The return at 0x45cd9c has v0 = 0x1.
  The return at 0x45cda4 has v0 = 0x1.
  The return at 0x45cdac has v0 = 0x1.
  The return at 0x45ce38 has v0 = 0x1.
  The return at 0x45cea8 has v0 = 0x1.
  The return at 0x45cef0 has v0 = 0x1.
  The return at 0x45cf14 has v0 = 0x1.
  The return at 0x45cf38 has v0 = 0x1.
  The return at 0x45cf5c has v0 = 0x2.
  The return at 0x45cf6c has v0 = 0x1.
  The return at 0x45cf74 has v0 = 0x2.
  The return at 0x45cf80 has v0 = 0x1.
  The return at 0x45cf88 has v0 = 0x1.
  The return at 0x45cfe0 has v0 = 0x1.
  The return at 0x45d004 has v0 = 0x1.
  The return at 0x45d074 has v0 = 0x1.
  The return at 0x45d09c has v0 = 0x1.
  The return at 0x45d0e4 has v0 = 0x4.
  The return at 0x45d108 has v0 = 0x1.
  The return at 0x45d12c has v0 = 0x1.
  The return at 0x45d150 has v0 = 0x4.
  The return at 0x45d174 has v0 = 0x1.
  The return at 0x45d188 has v0 = 0x1.
  The return at 0x45d198 has v0 = 0x1.
  The return at 0x45d1b0 has v0 = 0x1.
  The return at 0x45d1e0 has v0 = 0x1.
  The return at 0x45d1f0 has v0 = 0x1.
  The return at 0x45d1f8 has v0 = 0x1.
  The return at 0x45d200 has v0 = 0x1.
  The return at 0x45d208 has v0 = 0x1.
  The return at 0x45d210 has v0 = 0x1.
  The return at 0x45d2d0 has v0 = 0x1.
  The return at 0x45d2e0 has v0 = 0x1.
  The return at 0x45d304 has v0 = 0x1.
  The return at 0x45d328 has v0 = 0x1.
  The return at 0x45d34c has v0 = 0x1.
  The return at 0x45d370 has v0 = 0x1.
  The return at 0x45d38c has v0 = 0x10.
  The return at 0x45d3a4 has v0 = 0x1.
  The return at 0x45d3bc has v0 = 0x1.
  The return at 0x45d3d4 has v0 = 0x1.
  The return at 0x45d3dc has v0 = 0x1.
  The return at 0x45d3e4 has v0 = 0x1.
  The return at 0x45d3ec has v0 = 0x4.
  The return at 0x45d4d0 has v0 = 0x1.
  The return at 0x45d4f4 has v0 = 0x1.
  The return at 0x45d510 has v0 = 0x1.
  The return at 0x45d528 has v0 = 0x1.
  The return at 0x45d538 has v0 = 0x1.
  The return at 0x45d550 has v0 = 0x1.
  The return at 0x45d560 has v0 = 0x1.
  The return at 0x45d570 has v0 = 0x1.
  The return at 0x45d588 has v0 = 0x1.
  The return at 0x45d598 has v0 = 0x1.
  The return at 0x45d5a8 has v0 = 0x1.
  The return at 0x45d5b8 has v0 = 0x1.
  The return at 0x45d5c8 has v0 = 0x1.
  The return at 0x45d5d8 has v0 = 0x1.
  The return at 0x45d5e8 has v0 = 0x4.
  The return at 0x45d5f0 has v0 = 0x1.
  The return at 0x45d5f8 has v0 = 0x1.
  The return at 0x45d600 has v0 = 0x1.
  The return at 0x45d608 has v0 = 0x1.
  The return at 0x45d610 has v0 = 0x1.
  The return at 0x45d618 has v0 = 0x1.
  The return at 0x45d644 has v0 = 0x2.
  The return at 0x45d668 has v0 = 0x1.
  The return at 0x45d684 has v0 = 0x1.
  The return at 0x45d6a4 has v0 = 0x1.
  The return at 0x45d6b4 has v0 = 0x1.
  The return at 0x45d6d0 has v0 = 0x1.
  The return at 0x45d700 has v0 = 0x1.
  The return at 0x45d710 has v0 = 0x1.
  The return at 0x45d720 has v0 = 0x1.
  The return at 0x45d730 has v0 = 0x1.
  The return at 0x45d740 has v0 = 0x1.
  The return at 0x45d750 has v0 = 0x1.
  The return at 0x45d760 has v0 = 0x1.
  The return at 0x45d770 has v0 = 0x10.
  The return at 0x45d780 has v0 = 0x4.
  The return at 0x45d790 has v0 = 0x1.
  The return at 0x45d7a0 has v0 = 0x1.
  The return at 0x45d7b0 has v0 = 0x1.
  The return at 0x45d7c0 has v0 = 0x1.
  The return at 0x45d7c8 has v0 = 0x1.
  The return at 0x45d7d0 has v0 = 0x1.
  The return at 0x45d7d8 has v0 = 0x1.
  The return at 0x45d7e0 has v0 = 0x1.
  The return at 0x45d7e8 has v0 = 0x1.
  The return at 0x45d7f0 has v0 = 0x2.
  The return at 0x45d7f8 has v0 = 0x1.
  The return at 0x45d800 has v0 = 0x3.
  The return at 0x45d840 has v0 = 0x1.
  The return at 0x45d870 has v0 = 0x2.
  The return at 0x45d890 has v0 = 0x1.
  The return at 0x45d8a0 has v0 = 0x1.
  The return at 0x45d8b0 has v0 = 0x1.
  The return at 0x45d8c0 has v0 = 0x1.
  The return at 0x45d8d0 has v0 = 0x1.
  The return at 0x45d8e0 has v0 = 0x4.
  The return at 0x45d908 has v0 = 0x1.
  The return at 0x45d918 has v0 = 0x1.
  The return at 0x45d928 has v0 = 0x1.
  The return at 0x45d938 has v0 = 0x1.
  The return at 0x45d948 has v0 = 0x4.
  The return at 0x45d958 has v0 = 0x1.
  The return at 0x45d960 has v0 = 0x1.
  The return at 0x45d968 has v0 = 0x1.
  The return at 0x45d970 has v0 = 0x1.
  The return at 0x45d978 has v0 = 0x4.
  The return at 0x45d980 has v0 = 0x1.
  The return at 0x45d988 has v0 = 0x1.
  The return at 0x45d990 has v0 = 0x1.
  The return at 0x45d998 has v0 = 0x1.
  The return at 0x45d9a0 has v0 = 0x4.
  The return at 0x45d9c0 has v0 = 0x10.
  The return at 0x45da00 has v0 = 0x1.
  The return at 0x45da08 has v0 = 0x1.
  The return at 0x45da10 has v0 = 0x1.
  The return at 0x45da18 has v0 = 0x1.
  The return at 0x45da20 has v0 = 0x4.
  The return at 0x45da28 has v0 = 0x1.
  The return at 0x45da30 has v0 = 0x1.
  The return at 0x45da38 has v0 = 0x1.
  The return at 0x45da40 has v0 = 0x1.
  The return at 0x45da48 has v0 = 0x1.
  The return at 0x45da50 has v0 = 0x1.
  The return at 0x45da58 has v0 = 0x1.
  The return at 0x45da60 has v0 = 0x1.
  The return at 0x45da78 has v0 = 0x1.
  The return at 0x45da80 has v0 = 0x2.
  The return at 0x45da88 has v0 = 0x1.
  The return at 0x45da90 has v0 = 0x2.
  The return at 0x45da98 has v0 = 0x1.
  The return at 0x45daa0 has v0 = 0x1.
  The return at 0x45daa8 has v0 = 0x1.
  The return at 0x45dab0 has v0 = 0x1.
  The return at 0x45dab8 has v0 = 0x1.
  The return at 0x45dac0 has v0 = 0x1.
  The return at 0x45dac8 has v0 = 0x1.
  The return at 0x45dad0 has v0 = 0x1.
  The return at 0x45dad8 has v0 = 0x1.
  The return at 0x45dae0 has v0 = 0x1.
  The return at 0x45dae8 has v0 = 0x1.
  The return at 0x45daf0 has v0 = 0x1.
  The return at 0x45daf8 has v0 = 0x1.
  The return at 0x45db00 has v0 = 0x1.
  The return at 0x45db08 has v0 = 0x1.
  The return at 0x45db10 has v0 = 0x1.
  The instructions from 0x45c67c to 0x45c67c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45ca7c to 0x45ca7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45caf4 to 0x45cafc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45ccbc to 0x45ccbc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45cdb4 to 0x45cdbc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45cf7c to 0x45cf7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45d07c to 0x45d07c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45d17c to 0x45d17c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45d1b8 to 0x45d1bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45d3f4 to 0x45d3fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45d4fc to 0x45d4fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45d6bc to 0x45d6bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x45d8fc to 0x45d8fc are not reached by any path from the entry, and their branches are not listed.

- `__glGetDoublev_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45db40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45db40-0x45db74 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45db5c calls __glGet_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45db6c has v0 = ret(__glGet_size).

- `__glGetFloatv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45db80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45db80-0x45dbb4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45db9c calls __glGet_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45dbac has v0 = ret(__glGet_size).

- `__glGetIntegerv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45dbc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45dbc0-0x45dbf4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45dbdc calls __glGet_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45dbec has v0 = ret(__glGet_size).

- `__glGetBooleanv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45dc00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45dc00-0x45dc34 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45dc1c calls __glGet_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45dc2c has v0 = ret(__glGet_size).

- `__glGetTexLevelParameterfv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45dc40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45dc40-0x45dd54 (276 bytes).
  It occupies 276 bytes.
  The `bne` branch at 0x45dc5c targets 0x45dca4, is taken when a0 < a4(=0x805d) (unsigned), and falls through when a0 >= a4(=0x805d) (unsigned).
  The `beq` branch at 0x45dc64 targets 0x45dcec, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `bne` branch at 0x45dc7c targets 0x45dd08, is taken when a0 < a6(=0x8060) (unsigned), and falls through when a0 >= a6(=0x8060) (unsigned).
  The `beq` branch at 0x45dc84 targets 0x45dcec, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x45dc8c targets 0x45dd44, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x45dc94 targets 0x45dcec, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x45dc9c targets 0x45dd00 and is always taken.
  The `bne` branch at 0x45dca8 targets 0x45dcd4, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `bne` branch at 0x45dcb4 targets 0x45dcec, is taken when a0 < 0x1004 (unsigned), and falls through when a0 >= 0x1004 (unsigned).
  The `bne` branch at 0x45dcbc targets 0x45dd34, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x45dcc4 targets 0x45dcec, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x45dccc targets 0x45dd00 and is always taken.
  The `bne` branch at 0x45dcdc targets 0x45dcf4, is taken when a0 < 0x1001 (unsigned), and falls through when a0 >= 0x1001 (unsigned).
  The `beq` branch at 0x45dce4 targets 0x45dd00, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x45dcf8 targets 0x45dcec, is taken when a0 == a4(=0x1000), and falls through when a0 != a4(=0x1000).
  The `bne` branch at 0x45dd0c targets 0x45dd24, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x45dd14 targets 0x45dcec, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x45dd1c targets 0x45dd00 and is always taken.
  The `bne` branch at 0x45dd24 targets 0x45dd00, is taken when a0 != a4(=0x805e), and falls through when a0 == a4(=0x805e).
  The `beq` branch at 0x45dd2c targets 0x45dcec and is always taken.
  The `bne` branch at 0x45dd34 targets 0x45dd00, is taken when a0 != a5(=0x1005), and falls through when a0 == a5(=0x1005).
  The `beq` branch at 0x45dd3c targets 0x45dcec and is always taken.
  The `bne` branch at 0x45dd44 targets 0x45dd00, is taken when a0 != a5(=0x8061), and falls through when a0 == a5(=0x8061).
  The `beq` branch at 0x45dd4c targets 0x45dcec and is always taken.
  The return at 0x45dcec has v0 = 0x1.
  The return at 0x45dd00 has v0 = -0x1.

- `__glGetTexLevelParameteriv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45dd80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45dd80-0x45ddb4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45dd9c calls __glGetTexLevelParameterfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45ddac has v0 = ret(__glGetTexLevelParameterfv_size).

- `__glGetTexImage_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45ddc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45ddc0-0x45e0c4 (772 bytes).
  It occupies 772 bytes.
  The `bne` branch at 0x45ddc4 targets 0x45de78, is taken when a2 < 0x1908 (unsigned), and falls through when a2 >= 0x1908 (unsigned).
  The `bne` branch at 0x45ddd0 targets 0x45de10, is taken when a2 < 0x1909 (unsigned), and falls through when a2 >= 0x1909 (unsigned).
  The `bne` branch at 0x45dde0 targets 0x45dfdc, is taken when a2 < a1(=0x8000) (unsigned), and falls through when a2 >= a1(=0x8000) (unsigned).
  The `beq` branch at 0x45ddec targets 0x45de10, is taken when a1(=0x8000) >= a2 (unsigned), and falls through when a1(=0x8000) < a2 (unsigned).
  The `bne` branch at 0x45de00 targets 0x45e068, is taken when a2 < a1(=0x80e1) (unsigned), and falls through when a2 >= a1(=0x80e1) (unsigned).
  The `bne` branch at 0x45de08 targets 0x45df6c, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bne` branch at 0x45de18 targets 0x45dec0, is taken when a3 < a2(=0x8034) (unsigned), and falls through when a3 >= a2(=0x8034) (unsigned).
  The `beq` branch at 0x45de24 targets 0x45df00, is taken when a2(=0x8034) >= a3 (unsigned), and falls through when a2(=0x8034) < a3 (unsigned).
  The `bne` branch at 0x45de34 targets 0x45df98, is taken when a3 < a1(=0x8364) (unsigned), and falls through when a3 >= a1(=0x8364) (unsigned).
  The `beq` branch at 0x45de3c targets 0x45df00, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x45de50 targets 0x45e078, is taken when a3 < a2(=0x8367) (unsigned), and falls through when a3 >= a2(=0x8367) (unsigned).
  The `beq` branch at 0x45de5c targets 0x45e060, is taken when a2(=0x8367) >= a3 (unsigned), and falls through when a2(=0x8367) < a3 (unsigned).
  The `bne` branch at 0x45de68 targets 0x45dfb8, is taken when a3 != v0(=0x8368), and falls through when a3 == v0(=0x8368).
  The `beq` branch at 0x45de70 targets 0x45e060 and is always taken.
  The `bne` branch at 0x45de78 targets 0x45dea4, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bne` branch at 0x45de84 targets 0x45deb4, is taken when a2 < 0x1906 (unsigned), and falls through when a2 >= 0x1906 (unsigned).
  The `bne` branch at 0x45de8c targets 0x45e034, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x45de94 targets 0x45df6c, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x45de9c targets 0x45de10 and is always taken.
  The `bne` branch at 0x45dea4 targets 0x45df64, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x45deac targets 0x45df6c, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x45deb4 targets 0x45de10 and is always taken.
  The `bne` branch at 0x45dec0 targets 0x45df74, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x45decc targets 0x45dfd4, is taken when a3 < 0x1405 (unsigned), and falls through when a3 >= 0x1405 (unsigned).
  The `bne` branch at 0x45ded8 targets 0x45dfc0, is taken when a3 < a2(=0x8032) (unsigned), and falls through when a3 >= a2(=0x8032) (unsigned).
  The `bne` branch at 0x45dee4 targets 0x45def8, is taken when a2(=0x8032) < a3 (unsigned), and falls through when a2(=0x8032) >= a3 (unsigned).
  The `beq` branch at 0x45def0 targets 0x45df04 and is always taken.
  The `bne` branch at 0x45def8 targets 0x45dfb8, is taken when a3 != a1(=0x8033), and falls through when a3 == a1(=0x8033).
  The `beq` branch at 0x45df34 targets 0x45df44, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x45df64 targets 0x45deb4, is taken when a2 == a7(=0x1903), and falls through when a2 != a7(=0x1903).
  The `bne` branch at 0x45df74 targets 0x45dff8, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `bne` branch at 0x45df80 targets 0x45df90, is taken when a3 < 0x1403 (unsigned), and falls through when a3 >= 0x1403 (unsigned).
  The `bne` branch at 0x45df88 targets 0x45dfb8, is taken when a3 != t1(=0x1403), and falls through when a3 == t1(=0x1403).
  The `beq` branch at 0x45df90 targets 0x45df04 and is always taken.
  The `bne` branch at 0x45dfa0 targets 0x45e044, is taken when a3 < a1(=0x8362) (unsigned), and falls through when a3 >= a1(=0x8362) (unsigned).
  The `beq` branch at 0x45dfa8 targets 0x45deec, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0x45dfb0 targets 0x45df00, is taken when a3 == a2(=0x8363), and falls through when a3 != a2(=0x8363).
  The `bne` branch at 0x45dfc4 targets 0x45e0a4, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `beq` branch at 0x45dfcc targets 0x45dfb8, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x45dfd4 targets 0x45df04 and is always taken.
  The `bne` branch at 0x45dfdc targets 0x45e020, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `beq` branch at 0x45dfe8 targets 0x45df6c, is taken when a2 >= 0x190b (unsigned), and falls through when a2 < 0x190b (unsigned).
  The `beq` branch at 0x45dff0 targets 0x45de14 and is always taken.
  The `bne` branch at 0x45dff8 targets 0x45e010, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x45e000 targets 0x45e018, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x45e008 targets 0x45dfb8 and is always taken.
  The `bne` branch at 0x45e010 targets 0x45dfb8, is taken when a3 != v1(=0x1400), and falls through when a3 == v1(=0x1400).
  The `beq` branch at 0x45e018 targets 0x45df04 and is always taken.
  The `bne` branch at 0x45e024 targets 0x45df6c, is taken when a2 != a0(=0x1909), and falls through when a2 == a0(=0x1909).
  The `beq` branch at 0x45e02c targets 0x45deb4 and is always taken.
  The `bne` branch at 0x45e034 targets 0x45df6c, is taken when a2 != a1(=0x1906), and falls through when a2 == a1(=0x1906).
  The `beq` branch at 0x45e03c targets 0x45deb4 and is always taken.
  The `bne` branch at 0x45e050 targets 0x45e094, is taken when a3 < a1(=0x8036) (unsigned), and falls through when a3 >= a1(=0x8036) (unsigned).
  The `bne` branch at 0x45e058 targets 0x45dfb8, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x45e060 targets 0x45df04 and is always taken.
  The `bne` branch at 0x45e068 targets 0x45df6c, is taken when a2 != a7(=0x80e0), and falls through when a2 == a7(=0x80e0).
  The `beq` branch at 0x45e070 targets 0x45de9c and is always taken.
  The `bne` branch at 0x45e078 targets 0x45e0b4, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x45e084 targets 0x45df00, is taken when a7(=0x8366) >= a3 (unsigned), and falls through when a7(=0x8366) < a3 (unsigned).
  The `beq` branch at 0x45e08c targets 0x45dfb8 and is always taken.
  The `bne` branch at 0x45e094 targets 0x45dfb8, is taken when a3 != a2(=0x8035), and falls through when a3 == a2(=0x8035).
  The `beq` branch at 0x45e09c targets 0x45e060 and is always taken.
  The `bne` branch at 0x45e0a4 targets 0x45dfb8, is taken when a3 != a7(=0x1405), and falls through when a3 == a7(=0x1405).
  The `beq` branch at 0x45e0ac targets 0x45dfd4 and is always taken.
  The `bne` branch at 0x45e0b4 targets 0x45dfb8, is taken when a3 != t1(=0x8365), and falls through when a3 == t1(=0x8365).
  The `beq` branch at 0x45e0bc targets 0x45df00 and is always taken.
  The return at 0x45df5c has v0 = ?.
  The return at 0x45df6c has v0 = -0x1.
  The return at 0x45dfb8 has v0 = -0x1.
  The instructions from 0x45debc to 0x45debc are not reached by any path from the entry, and their branches are not listed.

- `__glGetConvolutionParameteriv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45e100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45e100-0x45e1e0 (224 bytes).
  It occupies 224 bytes.
  The `bne` branch at 0x45e114 targets 0x45e154, is taken when a0 < a4(=0x8018) (unsigned), and falls through when a0 >= a4(=0x8018) (unsigned).
  The `beq` branch at 0x45e124 targets 0x45e194, is taken when a4(=0x8018) >= a0 (unsigned), and falls through when a4(=0x8018) < a0 (unsigned).
  The `bne` branch at 0x45e134 targets 0x45e180, is taken when a0 < a6(=0x801b) (unsigned), and falls through when a0 >= a6(=0x801b) (unsigned).
  The `beq` branch at 0x45e13c targets 0x45e194, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x45e144 targets 0x45e178, is taken when a0 != a7(=0x8154), and falls through when a0 == a7(=0x8154).
  The `beq` branch at 0x45e14c targets 0x45e1b4 and is always taken.
  The `bne` branch at 0x45e160 targets 0x45e19c, is taken when a0 < a5(=0x8015) (unsigned), and falls through when a0 >= a5(=0x8015) (unsigned).
  The `beq` branch at 0x45e168 targets 0x45e1b4, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x45e170 targets 0x45e194, is taken when a0 == a6(=0x8017), and falls through when a0 != a6(=0x8017).
  The `bne` branch at 0x45e184 targets 0x45e1d0, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0x45e18c targets 0x45e178, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x45e1a4 targets 0x45e1c0, is taken when a0 < a7(=0x8014) (unsigned), and falls through when a0 >= a7(=0x8014) (unsigned).
  The `bne` branch at 0x45e1ac targets 0x45e178, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0x45e1c0 targets 0x45e178, is taken when a0 != a4(=0x8013), and falls through when a0 == a4(=0x8013).
  The `beq` branch at 0x45e1c8 targets 0x45e194 and is always taken.
  The `bne` branch at 0x45e1d0 targets 0x45e178, is taken when a0 != a6(=0x8019), and falls through when a0 == a6(=0x8019).
  The `beq` branch at 0x45e1d8 targets 0x45e194 and is always taken.
  The return at 0x45e178 has v0 = -0x1.
  The return at 0x45e194 has v0 = 0x1.
  The return at 0x45e1b4 has v0 = 0x4.
  The instructions from 0x45e1bc to 0x45e1bc are not reached by any path from the entry, and their branches are not listed.

- `__glGetConvolutionParameterfv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45e200 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45e200-0x45e234 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45e21c calls __glGetConvolutionParameteriv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45e22c has v0 = ret(__glGetConvolutionParameteriv_size).

- `__glGetHistogramParameterfv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45e240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45e240-0x45e27c (60 bytes).
  It occupies 60 bytes.
  The `beq` branch at 0x45e264 targets 0x45e274, is taken when a6(=a0-32806) >= 0x8 (unsigned), and falls through when a6(=a0-32806) < 0x8 (unsigned).
  The return at 0x45e26c has v0 = 0x1.
  The return at 0x45e274 has v0 = -0x1.

- `__glGetHistogramParameteriv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45e280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45e280-0x45e2b4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45e29c calls __glGetHistogramParameterfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45e2ac has v0 = ret(__glGetHistogramParameterfv_size).

- `__glGetMinmaxParameterfv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45e2c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45e2c0-0x45e2e8 (40 bytes).
  It occupies 40 bytes.
  The `beq` branch at 0x45e2c8 targets 0x45e2e0, is taken when a0 == at(=0x802f), and falls through when a0 != at(=0x802f).
  The `beq` branch at 0x45e2d0 targets 0x45e2e0, is taken when a0 == a3(=0x8030), and falls through when a0 != a3(=0x8030).
  The return at 0x45e2d8 has v0 = -0x1.
  The return at 0x45e2e0 has v0 = 0x1.

- `__glGetMinmaxParameteriv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45e300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45e300-0x45e334 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45e31c calls __glGetMinmaxParameterfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45e32c has v0 = ret(__glGetMinmaxParameterfv_size).

- `__glGetColorTableParameterfv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45e340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45e340-0x45e39c (92 bytes).
  It occupies 92 bytes.
  The `lw` at 0x45e35c loads 4 bytes from abs 0x4719f0.
  The `lw` at 0x45e378 loads 4 bytes from table(0x4604bc) +0x0.
  The `beq` branch at 0x45e370 targets 0x45e38c, is taken when a6(=a0-32982) >= 0xa (unsigned), and falls through when a6(=a0-32982) < 0xa (unsigned).
  The return at 0x45e384 has v0 = 0x4.
  The return at 0x45e38c has v0 = 0x0.
  The return at 0x45e394 has v0 = 0x1.
  The indirect jump at 0x45e37c uses the jump table at 0x4604bc with targets 0x45e384, 0x45e384, 0x45e394, 0x45e394, 0x45e394, 0x45e394, 0x45e394, 0x45e394, 0x45e394, 0x45e394.

- `__glGetColorTableParameteriv_size` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45e3c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45e3c0-0x45e3f4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x45e3dc calls __glGetColorTableParameterfv_size with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x45e3ec has v0 = ret(__glGetColorTableParameterfv_size).

- `__glXMakeBitmapFromGlyph` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45e400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45e400-0x45e658 (600 bytes).
  It occupies 600 bytes.
  2 such `lh` accesses load 2 bytes from a1 (arg1 at entry) +0x0, including `lh` at 0x45e404, `lh` at 0x45e57c.
  The `lh` at 0x45e408 loads 2 bytes from a1 (arg1 at entry) +0x2.
  The `lh` at 0x45e410 loads 2 bytes from a1 (arg1 at entry) +0x6.
  2 such `lh` accesses load 2 bytes from a1 (arg1 at entry) +0x8, including `lh` at 0x45e420, `lh` at 0x45e570.
  The `lw` at 0x45e468 loads 4 bytes from a1 (arg1 at entry) +0xc.
  18 such `sb` accesses store 1 byte to ?, including `sb` at 0x45e490, `sb` at 0x45e4d0, `sb` at 0x45e4ec.
  17 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x45e4c4, `lbu` at 0x45e4e8, `lbu` at 0x45e4f0.
  The `lh` at 0x45e574 loads 2 bytes from a1 (arg1 at entry) +0x4.
  The `jalr` at 0x45e5a4 calls glBitmap with a0=?, a1=([a1+6]:2 + [a1+8]:2), a2=?, a3=?.
  The `jalr` at 0x45e5b4 calls __glXFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x45e5e0 calls __glXMalloc with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x45e454 targets 0x45e5dc, is taken when a0(?) >= 0x801 (signed), and falls through when a0(?) < 0x801 (signed).
  The `blez` branch at 0x45e474 targets 0x45e568, is taken when s1(=([a1+6]:2 + [a1+8]:2)) <= 0 (signed), and falls through when s1(=([a1+6]:2 + [a1+8]:2)) > 0 (signed).
  The `blez` branch at 0x45e47c targets 0x45e568, is taken when s0(?) <= 0 (signed), and falls through when s0(?) > 0 (signed).
  The `beq` branch at 0x45e484 targets 0x45e64c and is always taken.
  The `beq` branch at 0x45e49c targets 0x45e568, is taken when a7(?) == s1(=([a1+6]:2 + [a1+8]:2)), and falls through when a7(?) != s1(=([a1+6]:2 + [a1+8]:2)).
  The `beq` branch at 0x45e4b4 targets 0x45e4d4, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `bne` branch at 0x45e4cc targets 0x45e4bc, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `beq` branch at 0x45e4d8 targets 0x45e494, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x45e4e0 targets 0x45e628, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `beq` branch at 0x45e52c targets 0x45e48c, is taken when a1(?) == at(?), and falls through when a1(?) != at(?).
  The `bne` branch at 0x45e558 targets 0x45e508, is taken when a1(?) != at(?), and falls through when a1(?) == at(?).
  The `beq` branch at 0x45e560 targets 0x45e494 and is always taken.
  The `beq` branch at 0x45e568 targets 0x45e600, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x45e5ac targets 0x45e5bc, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x45e5ec targets 0x45e608, is taken when v0(=ret(__glXMalloc)) == 0, and falls through when v0(=ret(__glXMalloc)) != 0.
  The `beq` branch at 0x45e5f4 targets 0x45e460 and is always taken.
  The `beq` branch at 0x45e600 targets 0x45e570 and is always taken.
  The `beq` branch at 0x45e644 targets 0x45e494 and is always taken.
  The `beq` branch at 0x45e650 targets 0x45e4a8 and is always taken.
  The return at 0x45e5d4 has v0 = 0x0.
  The return at 0x45e620 has v0 = 0xb.
  The instructions from 0x45e5fc to 0x45e5fc are not reached by any path from the entry, and their branches are not listed.

- `MakeBitmapsFromFont` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45e680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45e680-0x45e844 (452 bytes).
  It occupies 452 bytes.
  The `lhu` at 0x45e684 loads 2 bytes from a0 (arg0 at entry) +0xa.
  The `lw` at 0x45e778 loads 4 bytes from a0 (arg0 at entry) +0x5c.
  The `jalr` at 0x45e6c0 calls glPixelStorei with a0=0xcf0, a1=0x0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x45e6d0 calls glPixelStorei with a0=0xcf1, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x45e6e0 calls glPixelStorei with a0=0xcf2, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x45e6f0 calls glPixelStorei with a0=0xcf3, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x45e700 calls glPixelStorei with a0=0xcf4, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x45e710 calls glPixelStorei with a0=0xcf5, a1=0x4, a2=?, a3=?.
  The `jalr` at 0x45e754 calls glEndList with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x45e78c calls (unknown callee) with a0=a0 at entry (arg0), a1=0x1, a2=sp-112, a3=one of 0x2, 0x3, a4=sp-108, a5=sp-104.
  The `jalr` at 0x45e79c calls glNewList with a0=?, a1=0x1300, a2=?, a3=?.
  The `bgezall` at 0x45e7b4 calls __glXMakeBitmapFromGlyph [0x45e400] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x45e6a0 targets 0x45e834, is taken when at(=[a0+10]:2) == 0, and falls through when at(=[a0+10]:2) != 0.
  The `beq` branch at 0x45e728 targets 0x45e800, is taken when s8(=a2) == 0, and falls through when s8(=a2) != 0.
  The `beq` branch at 0x45e748 targets 0x45e768 and is always taken.
  The `beq` branch at 0x45e760 targets 0x45e800, is taken when s0(?) == s5(=(a1 + a2)), and falls through when s0(?) != s5(=(a1 + a2)).
  The `beq` branch at 0x45e7a8 targets 0x45e750, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x45e7bc targets 0x45e750, is taken when v0(=ret(__glXMakeBitmapFromGlyph)) == 0, and falls through when v0(=ret(__glXMakeBitmapFromGlyph)) != 0.
  The `beq` branch at 0x45e83c targets 0x45e6b4 and is always taken.
  The return at 0x45e7ec has v0 = ret(__glXMakeBitmapFromGlyph).
  The return at 0x45e82c has v0 = 0x0.
  The instructions from 0x45e7f4 to 0x45e7fc are not reached by any path from the entry, and their branches are not listed.

- `__glXUseXFont` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45e880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45e880-0x45e9a8 (296 bytes).
  It occupies 296 bytes.
  The `lw` at 0x45e898 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x45e8a8 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x45e918 loads 4 bytes from ?.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x45e91c, `sw` at 0x45e9a4.
  The `lw` at 0x45e920 loads 4 bytes from sym(__glXBadContextState) +0x0.
  3 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x8, including `lw` at 0x45e93c, `lw` at 0x45e958, `lw` at 0x45e998.
  The `lw` at 0x45e964 loads 4 bytes from ret(LookupIDByType) +0x2c.
  The `lw` at 0x45e970 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x45e978 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x45e984 loads 4 bytes from a1 (arg1 at entry) +0x14.
  The `jalr` at 0x45e8b0 calls __glXForceCurrent with a0=a0 at entry (arg0), a1=[a1+4], a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x45e8f4 calls glGetIntegerv with a0=0xb33, a1=sp-44, a2=?, a3=?.
  The `jalr` at 0x45e938 calls LookupIDByType with a0=[a1+8], a1=0x4, a2=?, a3=?.
  The `jalr` at 0x45e954 calls LookupIDByType with a0=[a1+8], a1=0xffffffff80000003, a2=?, a3=?.
  The `bgezall` at 0x45e980 calls MakeBitmapsFromFont [0x45e680] with a0=?, a1=[a1+12], a2=[a1+16], a3=[a1+20].
  The `bne` branch at 0x45e8bc targets 0x45e8ec, is taken when v0(=ret(__glXForceCurrent)) != 0, and falls through when v0(=ret(__glXForceCurrent)) == 0.
  The `beq` branch at 0x45e904 targets 0x45e92c, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x45e940 targets 0x45e968, is taken when v0(=ret(LookupIDByType)) != 0, and falls through when v0(=ret(LookupIDByType)) == 0.
  The `beq` branch at 0x45e95c targets 0x45e990, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x45e988 targets 0x45e8d8 and is always taken.
  The `beq` branch at 0x45e9a0 targets 0x45e8d8 and is always taken.
  The return at 0x45e8d0 has v0 = ?.
  The return at 0x45e8e4 has v0 = one of ret(MakeBitmapsFromFont), 0x7.
  The return at 0x45e924 has v0 = [sym(__glXBadContextState)].

- `glxSetup` in `usr/X11R6/lib/modules/extensions/libglx.so` at 0x45e9c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libglx.so`.
  Range: 0x45e9c0-0x45ead8 (280 bytes).
  It occupies 280 bytes.
  The `lbu` at 0x45e9e8 loads 1 byte from abs 0x472f06.
  The `lhu` at 0x45e9f0 loads 2 bytes from abs 0x472f04.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x0, including `sw` at 0x45ea14, `sw` at 0x45ea80.
  The `jalr` at 0x45ea60 calls LoadSubModule with a0=a0 at entry (arg0), a1=sp-48, a2=0x0, a3=0x0, a4=0x0, a5=0x0, a6=a2 at entry (arg2), a7=a3 at entry (arg3).
  The `jalr` at 0x45ea9c calls LoaderReqSymLists with a0=0x470780, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x45eaac calls LoadExtension with a0=sym(GLXExt), a1=0x0, a2=?, a3=?.
  The `jalr` at 0x45eab8 calls GlxWrapInitVisuals with a0=sym(miInitVisualsProc), a1=?, a2=?, a3=?.
  The `jalr` at 0x45eac8 calls miHookInitVisuals with a0=0x0, a1=sym(GlxWrapInitVisuals), a2=?, a3=?.
  The `beq` branch at 0x45ea04 targets 0x45ea40, is taken when v1(=[0x472ed8]) == 0, and falls through when v1(=[0x472ed8]) != 0.
  The `beq` branch at 0x45ea0c targets 0x45ea18, is taken when a2 == 0, and falls through when a2 != 0.
  The `bne` branch at 0x45ea68 targets 0x45ea90, is taken when v0(=ret(LoadSubModule)) != 0, and falls through when v0(=ret(LoadSubModule)) == 0.
  The `beq` branch at 0x45ea70 targets 0x45ea2c, is taken when s0(=a2) == 0, and falls through when s0(=a2) != 0.
  The `beq` branch at 0x45ead0 targets 0x45ea2c and is always taken.
  The return at 0x45ea24 has v0 = 0x0.
  The return at 0x45ea38 has v0 = one of ret(LoadSubModule), ?.
  The return at 0x45ea88 has v0 = ret(LoadSubModule).
