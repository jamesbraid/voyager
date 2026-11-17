# Readings: `usr/X11R6/lib/modules/libint10.so`

One entry per routine, filed here from the reading batches by binary.

- `mapPciRom` in `usr/X11R6/lib/modules/libint10.so` at 0x4094c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x4094c0-0x4095a0 (224 bytes).
  It occupies 224 bytes.
  The `lw` at 0x40950c loads 4 bytes from ret(xf86GetPciInfoForEntity) +0x1c.
  The `lw` at 0x409510 loads 4 bytes from ret(xf86GetPciInfoForEntity) +0x18.
  The `lw` at 0x409514 loads 4 bytes from ret(xf86GetPciInfoForEntity) +0x14.
  The `lw` at 0x409524 loads 4 bytes from ret(xf86GetPciInfoForEntity) +0x80.
  The `jalr` at 0x4094e0 calls xf86GetPciInfoForEntity with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x409518 calls pciTag with a0=[ret(xf86GetPciInfoForEntity)+20], a1=[ret(xf86GetPciInfoForEntity)+24], a2=[ret(xf86GetPciInfoForEntity)+28], a3=?.
  The `jalr` at 0x409534 calls XNFcalloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x409554 calls xf86ReadPciBIOS with a0=0x0, a1=ret(pciTag), a2=-0x1, a3=ret(XNFcalloc).
  The `jalr` at 0x409570 calls xf86memcpy with a0=a1 at entry (arg1), a1=ret(XNFcalloc), a2=ret(xf86ReadPciBIOS), a3=?.
  The `jalr` at 0x40957c calls Xfree with a0=ret(XNFcalloc), a1=?, a2=?, a3=?.
  The `bne` branch at 0x4094ec targets 0x409508, is taken when v0(=ret(xf86GetPciInfoForEntity)) != 0, and falls through when v0(=ret(xf86GetPciInfoForEntity)) == 0.
  The `blez` branch at 0x40955c targets 0x409578, is taken when v0(=ret(xf86ReadPciBIOS)) <= 0 (signed), and falls through when v0(=ret(xf86ReadPciBIOS)) > 0 (signed).
  The return at 0x409500 has v0 = 0x0.
  The return at 0x409598 has v0 = ret(xf86ReadPciBIOS).

- `int10Setup` in `usr/X11R6/lib/modules/libint10.so` at 0x4095c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x4095c0-0x4095e8 (40 bytes).
  It occupies 40 bytes.
  The `lw` at 0x4095cc loads 4 bytes from abs 0x4360a4.
  The `sw` at 0x4095e4 stores 4 bytes to abs 0x4360a4.
  The `beq` branch at 0x4095d0 targets 0x4095e0, is taken when v0(=[0x4360a4]) == 0, and falls through when v0(=[0x4360a4]) != 0.
  The return at 0x4095d8 has v0 = 0x1.
  The return at 0x4095e0 has v0 = 0x1.

- `dump_code` in `usr/X11R6/lib/modules/libint10.so` at 0x409a80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x409a80-0x409bb0 (304 bytes).
  It occupies 304 bytes.
  The `lbu` at 0x409aa4 loads 1 byte from sym(_X86EMU_env) +0x2e.
  The `lbu` at 0x409aa8 loads 1 byte from sym(_X86EMU_env) +0x35.
  The `lbu` at 0x409aac loads 1 byte from sym(_X86EMU_env) +0x34.
  The `lbu` at 0x409ab0 loads 1 byte from sym(_X86EMU_env) +0x2f.
  The `lw` at 0x409aec loads 4 bytes from a0 (arg0 at entry) +0x4.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x14, including `lw` at 0x409b00, `lw` at 0x409b4c.
  2 such `lw` accesses load 4 bytes from [a0+20] +0x0, including `lw` at 0x409b04, `lw` at 0x409b50.
  The `jalr` at 0x409af0 calls xf86DrvMsgVerb with a0=[a0+4], a1=0x7, a2=0x3, a3=0x434060, a4=(([sym(_X86EMU_env)+47]:1 | ([sym(_X86EMU_env)+46]:1 << 0x8)) + (([sym(_X86EMU_env)+53]:1 | ([sym(_X86EMU_env)+52]:1 << 0x8)) << 0x4)).
  The `jalr` at 0x409b0c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x409b20 calls xf86ErrorFVerb with a0=0x3, a1=0x4360b8, a2=ret(?), a3=?.
  The `jalr` at 0x409b3c calls xf86ErrorFVerb with a0=0x3, a1=0x4360c0, a2=?, a3=?.
  The `jalr` at 0x409b58 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x409b6c calls xf86ErrorFVerb with a0=0x3, a1=0x4360b8, a2=ret(?), a3=?.
  The `jalr` at 0x409b88 calls xf86ErrorFVerb with a0=0x3, a1=0x4360c0, a2=?, a3=?.
  The `bne` branch at 0x409b2c targets 0x409b00, is taken when s0(?) != s3(=(([sym(_X86EMU_env)+47]:1 | ([sym(_X86EMU_env)+46]:1 << 0x8)) + (([sym(_X86EMU_env)+53]:1 | ([sym(_X86EMU_env)+52]:1 << 0x8)) << 0x4))+16), and falls through when s0(?) == s3(=(([sym(_X86EMU_env)+47]:1 | ([sym(_X86EMU_env)+46]:1 << 0x8)) + (([sym(_X86EMU_env)+53]:1 | ([sym(_X86EMU_env)+52]:1 << 0x8)) << 0x4))+16).
  The `bne` branch at 0x409b78 targets 0x409b4c, is taken when s0(?) != s4(=(([sym(_X86EMU_env)+47]:1 | ([sym(_X86EMU_env)+46]:1 << 0x8)) + (([sym(_X86EMU_env)+53]:1 | ([sym(_X86EMU_env)+52]:1 << 0x8)) << 0x4))+32), and falls through when s0(?) == s4(=(([sym(_X86EMU_env)+47]:1 | ([sym(_X86EMU_env)+46]:1 << 0x8)) + (([sym(_X86EMU_env)+53]:1 | ([sym(_X86EMU_env)+52]:1 << 0x8)) << 0x4))+32).
  The return at 0x409ba8 has v0 = ret(xf86ErrorFVerb).

- `dump_registers` in `usr/X11R6/lib/modules/libint10.so` at 0x409bc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x409bc0-0x409d34 (372 bytes).
  It occupies 372 bytes.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4, including `lw` at 0x409be4, `lw` at 0x409c2c, `lw` at 0x409c6c.
  The `lwl` at 0x409bf8 loads 4 bytes from sym(_X86EMU_env) +0x18.
  The `lwl` at 0x409bfc loads 4 bytes from sym(_X86EMU_env) +0x14.
  The `lwl` at 0x409c00 loads 4 bytes from sym(_X86EMU_env) +0xc.
  The `lwl` at 0x409c04 loads 4 bytes from sym(_X86EMU_env) +0x10.
  The `lwr` at 0x409c08 loads 4 bytes from sym(_X86EMU_env) +0xf.
  The `lwr` at 0x409c10 loads 4 bytes from sym(_X86EMU_env) +0x13.
  The `lwr` at 0x409c1c loads 4 bytes from sym(_X86EMU_env) +0x17.
  The `lwr` at 0x409c28 loads 4 bytes from sym(_X86EMU_env) +0x1b.
  The `lwl` at 0x409c30 loads 4 bytes from sym(_X86EMU_env) +0x28.
  The `lwl` at 0x409c38 loads 4 bytes from sym(_X86EMU_env) +0x24.
  The `lwl` at 0x409c3c loads 4 bytes from sym(_X86EMU_env) +0x1c.
  The `lwl` at 0x409c40 loads 4 bytes from sym(_X86EMU_env) +0x20.
  The `lwr` at 0x409c44 loads 4 bytes from sym(_X86EMU_env) +0x1f.
  The `lwr` at 0x409c4c loads 4 bytes from sym(_X86EMU_env) +0x23.
  The `lwr` at 0x409c58 loads 4 bytes from sym(_X86EMU_env) +0x27.
  The `lwr` at 0x409c64 loads 4 bytes from sym(_X86EMU_env) +0x2b.
  The `lbu` at 0x409c70 loads 1 byte from sym(_X86EMU_env) +0x37.
  The `lbu` at 0x409c74 loads 1 byte from sym(_X86EMU_env) +0x3b.
  The `lbu` at 0x409c78 loads 1 byte from sym(_X86EMU_env) +0x36.
  The `lbu` at 0x409c7c loads 1 byte from sym(_X86EMU_env) +0x3a.
  The `lbu` at 0x409c80 loads 1 byte from sym(_X86EMU_env) +0x3c.
  The `lbu` at 0x409c84 loads 1 byte from sym(_X86EMU_env) +0x3d.
  The `lbu` at 0x409c88 loads 1 byte from sym(_X86EMU_env) +0x39.
  The `lbu` at 0x409c98 loads 1 byte from sym(_X86EMU_env) +0x35.
  The `lbu` at 0x409ca4 loads 1 byte from sym(_X86EMU_env) +0x34.
  The `lbu` at 0x409cb0 loads 1 byte from sym(_X86EMU_env) +0x38.
  The `lbu` at 0x409cc8 loads 1 byte from sym(_X86EMU_env) +0x3e.
  The `lbu` at 0x409cd4 loads 1 byte from sym(_X86EMU_env) +0x3f.
  The `lwl` at 0x409cf0 loads 4 bytes from sym(_X86EMU_env) +0x30.
  The `lwl` at 0x409cf4 loads 4 bytes from sym(_X86EMU_env) +0x2c.
  The `lwr` at 0x409d08 loads 4 bytes from sym(_X86EMU_env) +0x2f.
  The `lwr` at 0x409d14 loads 4 bytes from sym(_X86EMU_env) +0x33.
  The `jalr` at 0x409c24 calls xf86DrvMsgVerb with a0=[a0+4], a1=0x7, a2=0x3, a3=0x434078.
  The `jalr` at 0x409c60 calls xf86DrvMsgVerb with a0=[a0+4], a1=0x7, a2=0x3, a3=0x4340b0.
  The `jalr` at 0x409ce4 calls xf86DrvMsgVerb with a0=[a0+4], a1=0x7, a2=0x3, a3=0x4340e8, a4=([sym(_X86EMU_env)+53]:1 | ([sym(_X86EMU_env)+52]:1 << 0x8)), a5=([sym(_X86EMU_env)+57]:1 | ([sym(_X86EMU_env)+56]:1 << 0x8)), a6=([sym(_X86EMU_env)+55]:1 | ([sym(_X86EMU_env)+54]:1 << 0x8)), a7=([sym(_X86EMU_env)+59]:1 | ([sym(_X86EMU_env)+58]:1 << 0x8)).
  The `jalr` at 0x409d10 calls xf86DrvMsgVerb with a0=[a0+4], a1=0x7, a2=0x3, a3=0x434130.
  The return at 0x409d2c has v0 = ret(xf86DrvMsgVerb).

- `LockLegacyVGA` in `usr/X11R6/lib/modules/libint10.so` at 0x40ad40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x40ad40-0x40ae68 (296 bytes).
  It occupies 296 bytes.
  2 such `lw` accesses load 4 bytes from sym(xf86Screens) +0x0, including `lw` at 0x40ad64, `lw` at 0x40ae38.
  2 such `lw` accesses load 4 bytes from ([sym(xf86Screens)] + (a0 << 0x2)) +0x0, including `lw` at 0x40ad84, `lw` at 0x40ae50.
  The `sb` at 0x40ad9c stores 1 byte to a1 (arg1 at entry) +0x0.
  The `sb` at 0x40adac stores 1 byte to a1 (arg1 at entry) +0x2.
  The `sb` at 0x40adbc stores 1 byte to a1 (arg1 at entry) +0x3.
  The `lbu` at 0x40add0 loads 1 byte from a1 (arg1 at entry) +0x0.
  The `sb` at 0x40addc stores 1 byte to a1 (arg1 at entry) +0x1.
  The `lbu` at 0x40adec loads 1 byte from a1 (arg1 at entry) +0x2.
  The `lbu` at 0x40ae04 loads 1 byte from a1 (arg1 at entry) +0x3.
  The `lbu` at 0x40ae1c loads 1 byte from a1 (arg1 at entry) +0x1.
  The `jalr` at 0x40ad80 calls xf86SetCurrentAccess with a0=0x0, a1=[([sym(xf86Screens)] + (a0 << 0x2))], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x40ad90 calls inb with a0=0x3cc, a1=?, a2=?, a3=?.
  The `jalr` at 0x40ada0 calls inb with a0=0x3c3, a1=?, a2=?, a3=?.
  The `jalr` at 0x40adb0 calls inb with a0=0x46e8, a1=?, a2=?, a3=?.
  The `jalr` at 0x40adc0 calls inb with a0=0x102, a1=?, a2=?, a3=?.
  The `jalr` at 0x40ade0 calls outb with a0=0x3c2, a1=?, a2=-0x4, a3=?.
  The `jalr` at 0x40adf8 calls outb with a0=0x3c3, a1=?, a2=-0x2, a3=?.
  The `jalr` at 0x40ae10 calls outb with a0=0x46e8, a1=?, a2=-0x9, a3=?.
  The `jalr` at 0x40ae28 calls outb with a0=0x102, a1=?, a2=-0x2, a3=?.
  The `jalr` at 0x40ae4c calls xf86SetCurrentAccess with a0=0x1, a1=[([sym(xf86Screens)] + (a0 << 0x2))], a2=?, a3=?.
  The return at 0x40ae60 has v0 = ret(xf86SetCurrentAccess).

- `UnlockLegacyVGA` in `usr/X11R6/lib/modules/libint10.so` at 0x40ae80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x40ae80-0x40af44 (196 bytes).
  It occupies 196 bytes.
  2 such `lw` accesses load 4 bytes from sym(xf86Screens) +0x0, including `lw` at 0x40aea4, `lw` at 0x40af18.
  2 such `lw` accesses load 4 bytes from ([sym(xf86Screens)] + (a0 << 0x2)) +0x0, including `lw` at 0x40aec4, `lw` at 0x40af30.
  The `lbu` at 0x40aed8 loads 1 byte from a1 (arg1 at entry) +0x1.
  The `lbu` at 0x40aee8 loads 1 byte from a1 (arg1 at entry) +0x3.
  The `lbu` at 0x40aef8 loads 1 byte from a1 (arg1 at entry) +0x2.
  The `lbu` at 0x40af08 loads 1 byte from a1 (arg1 at entry) +0x0.
  The `jalr` at 0x40aec0 calls xf86SetCurrentAccess with a0=0x0, a1=[([sym(xf86Screens)] + (a0 << 0x2))], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x40aed4 calls outb with a0=0x102, a1=[a1+1]:1, a2=?, a3=?.
  The `jalr` at 0x40aee4 calls outb with a0=0x46e8, a1=[a1+3]:1, a2=?, a3=?.
  The `jalr` at 0x40aef4 calls outb with a0=0x3c3, a1=[a1+2]:1, a2=?, a3=?.
  The `jalr` at 0x40af04 calls outb with a0=0x3c2, a1=[a1]:1, a2=?, a3=?.
  The `jalr` at 0x40af2c calls xf86SetCurrentAccess with a0=0x1, a1=[([sym(xf86Screens)] + (a0 << 0x2))], a2=(a0 << 0x2), a3=?.
  The return at 0x40af3c has v0 = ret(xf86SetCurrentAccess).

- `xf86HandleInt10Options` in `usr/X11R6/lib/modules/libint10.so` at 0x40b440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x40b440-0x40b558 (280 bytes).
  It occupies 280 bytes.
  The `lw` at 0x40b46c loads 4 bytes from ret(xf86GetEntityInfo) +0x20.
  The `lw` at 0x40b480 loads 4 bytes from ret(xf86GetEntityInfo) +0x0.
  The `lw` at 0x40b488 loads 4 bytes from sym(xf86Screens) +0x0.
  The `lw` at 0x40b494 loads 4 bytes from ([sym(xf86Screens)] + ([ret(xf86GetEntityInfo)] << 0x2)) +0x0.
  The `lw` at 0x40b4a0 loads 4 bytes from [([sym(xf86Screens)] + ([ret(xf86GetEntityInfo)] << 0x2))] +0x344.
  The `lw` at 0x40b4ac loads 4 bytes from [ret(xf86GetEntityInfo)+32] +0x260.
  The `lw` at 0x40b54c loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `jalr` at 0x40b464 calls xf86GetEntityInfo with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x40b4c4 calls Xfree with a0=ret(xf86GetEntityInfo), a1=?, a2=?, a3=?.
  The `jalr` at 0x40b4e4 calls Xalloc with a0=0xa0, a1=[ret(xf86GetEntityInfo)+32], a2=?, a3=?.
  The `jalr` at 0x40b530 calls xf86memcpy with a0=ret(Xalloc), a1=0x434d70, a2=0xa0, a3=?.
  The `jalr` at 0x40b548 calls xf86ProcessOptions with a0=[a0+12], a1=?, a2=ret(Xalloc), a3=?.
  The `beq` branch at 0x40b478 targets 0x40b514, is taken when a1(=[ret(xf86GetEntityInfo)+32]) == 0, and falls through when a1(=[ret(xf86GetEntityInfo)+32]) != 0.
  The `bltz` branch at 0x40b484 targets 0x40b4ac, is taken when v0(=[ret(xf86GetEntityInfo)]) < 0 (signed), and falls through when v0(=[ret(xf86GetEntityInfo)]) >= 0 (signed).
  The `beq` branch at 0x40b498 targets 0x40b4ac, is taken when a2(=[([sym(xf86Screens)] + ([ret(xf86GetEntityInfo)] << 0x2))]) == 0, and falls through when a2(=[([sym(xf86Screens)] + ([ret(xf86GetEntityInfo)] << 0x2))]) != 0.
  The `bne` branch at 0x40b4a4 targets 0x40b4b0, is taken when a4(=[[([sym(xf86Screens)] + ([ret(xf86GetEntityInfo)] << 0x2))]+836]) != 0, and falls through when a4(=[[([sym(xf86Screens)] + ([ret(xf86GetEntityInfo)] << 0x2))]+836]) == 0.
  The `bne` branch at 0x40b4b0 targets 0x40b4e4, is taken when s1(?) != 0, and falls through when s1(?) == 0.
  The `bne` branch at 0x40b4f0 targets 0x40b520, is taken when v0(=ret(Xalloc)) != 0, and falls through when v0(=ret(Xalloc)) == 0.
  The `beq` branch at 0x40b518 targets 0x40b4c0 and is always taken.
  The `beq` branch at 0x40b550 targets 0x40b4c0 and is always taken.
  The return at 0x40b4dc has v0 = ?.
  The return at 0x40b50c has v0 = 0x0.

- `int10skip` in `usr/X11R6/lib/modules/libint10.so` at 0x40b580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x40b580-0x40b5d4 (84 bytes).
  It occupies 84 bytes.
  The `jalr` at 0x40b5b8 calls xf86GetOptValBool with a0=a0 at entry (arg0), a1=0x0, a2=sp-32, a3=a3 at entry (arg3).
  The `bne` branch at 0x40b594 targets 0x40b5a8, is taken when a0 != 0, and falls through when a0 == 0.
  The return at 0x40b5a0 has v0 = 0x0.
  The return at 0x40b5cc has v0 = ?.

- `int10_check_bios` in `usr/X11R6/lib/modules/libint10.so` at 0x40b600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x40b600-0x40b714 (276 bytes).
  It occupies 276 bytes.
  The `lbu` at 0x40b694 loads 1 byte from a2 (arg2 at entry) +0x0.
  The `lbu` at 0x40b6a4 loads 1 byte from a2 (arg2 at entry) +0x1.
  The `lbu` at 0x40b6b4 loads 1 byte from a2 (arg2 at entry) +0x2.
  The `jalr` at 0x40b670 calls xf86IsPc98 with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?, a5=(a1 << 0x4).
  The `jalr` at 0x40b6e8 calls bios_checksum with a0=a2 at entry (arg2), a1=([a2+2]:1 << 0x9), a2=?, a3=?, a4=[a2]:1, a5=[a2+1]:1, a6=0xaa.
  The `jalr` at 0x40b704 calls xf86DrvMsg with a0=a0 at entry (arg0), a1=0x6, a2=0x434198, a3=?.
  The `bne` branch at 0x40b618 targets 0x40b648, is taken when (a1 & 0x1f) != 0, and falls through when (a1 & 0x1f) == 0.
  The `bne` branch at 0x40b630 targets 0x40b648, is taken when a5(=(a1 << 0x4)) < a3(=0xc0000) (signed), and falls through when a5(=(a1 << 0x4)) >= a3(=0xc0000) (signed).
  The `bne` branch at 0x40b640 targets 0x40b668, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x40b678 targets 0x40b690, is taken when v0(=ret(xf86IsPc98)) == 0, and falls through when v0(=ret(xf86IsPc98)) != 0.
  The `bne` branch at 0x40b69c targets 0x40b6e0, is taken when a4(=[a2]:1) != a5(=0x55), and falls through when a4(=[a2]:1) == a5(=0x55).
  The `bne` branch at 0x40b6ac targets 0x40b6e0, is taken when a5(=[a2+1]:1) != a6(=0xaa), and falls through when a5(=[a2+1]:1) == a6(=0xaa).
  The `beq` branch at 0x40b6b8 targets 0x40b6e0, is taken when v0(=[a2+2]:1) == 0, and falls through when v0(=[a2+2]:1) != 0.
  The `beq` branch at 0x40b6d0 targets 0x40b6e8, is taken when v1(=0x100000) >= a0(=((a1 << 0x4) + ([a2+2]:1 << 0x9))) (signed), and falls through when v1(=0x100000) < a0(=((a1 << 0x4) + ([a2+2]:1 << 0x9))) (signed).
  The `beq` branch at 0x40b6d8 targets 0x40b658 and is always taken.
  The `beq` branch at 0x40b6e0 targets 0x40b658 and is always taken.
  The `beq` branch at 0x40b6f0 targets 0x40b70c, is taken when v0(=ret(bios_checksum)) == 0, and falls through when v0(=ret(bios_checksum)) != 0.
  The `beq` branch at 0x40b70c targets 0x40b658 and is always taken.
  The return at 0x40b650 has v0 = 0x0.
  The return at 0x40b660 has v0 = one of 0x0, 0x1.
  The return at 0x40b688 has v0 = 0x0.

- `initPrimary` in `usr/X11R6/lib/modules/libint10.so` at 0x40b740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x40b740-0x40b794 (84 bytes).
  It occupies 84 bytes.
  The `jalr` at 0x40b778 calls xf86GetOptValBool with a0=a0 at entry (arg0), a1=0x1, a2=sp-32, a3=a3 at entry (arg3).
  The `bne` branch at 0x40b754 targets 0x40b768, is taken when a0 != 0, and falls through when a0 == 0.
  The return at 0x40b760 has v0 = 0x0.
  The return at 0x40b78c has v0 = ?.

- `xf86int10ParseBiosLocation` in `usr/X11R6/lib/modules/libint10.so` at 0x40b7c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x40b7c0-0x40b9a4 (484 bytes).
  It occupies 484 bytes.
  5 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0x40b7f8, `sw` at 0x40b840, `sw` at 0x40b8cc.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x0, including `lw` at 0x40b850, `lw` at 0x40b878.
  3 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x4, including `sw` at 0x40b8ac, `sw` at 0x40b920, `sw` at 0x40b950.
  The `sw` at 0x40b974 stores 4 bytes to a1 (arg1 at entry) +0x8.
  The `sw` at 0x40b9a0 stores 4 bytes to a1 (arg1 at entry) +0xc.
  The `jalr` at 0x40b7f0 calls xf86GetOptValString with a0=a0 at entry (arg0), a1=0x2, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x40b808 calls Xstrdup with a0=ret(xf86GetOptValString), a1=?, a2=?, a3=?.
  The `jalr` at 0x40b81c calls xf86strtok with a0=ret(Xstrdup), a1=0x4360d8, a2=?, a3=?.
  The `jalr` at 0x40b830 calls xf86NameCmp with a0=ret(xf86strtok), a1=0x4360dc, a2=?, a3=?.
  The `jalr` at 0x40b848 calls Xfree with a0=ret(Xstrdup), a1=one of 0x1, 0x2, a2=?, a3=?.
  The `jalr` at 0x40b85c calls Xstrdup with a0=ret(xf86GetOptValString), a1=?, a2=[a1], a3=?.
  The `jalr` at 0x40b870 calls xf86strchr with a0=ret(Xstrdup), a1=0x3a, a2=?, a3=?.
  The `jalr` at 0x40b8a0 calls xf86atoi with a0=ret(xf86strchr)+1, a1=ret(xf86strchr), a2=?, a3=0x1, a4=[a1], a5=0x2.
  The `jalr` at 0x40b8b4 calls xf86strchr with a0=ret(xf86strchr)+1, a1=0x3a, a2=?, a3=?.
  The `jalr` at 0x40b8d4 calls Xfree with a0=ret(Xstrdup), a1=?, a2=?, a3=?.
  The `jalr` at 0x40b92c calls xf86NameCmp with a0=ret(xf86strtok), a1=0x4360e0, a2=?, a3=?.
  The `jalr` at 0x40b944 calls xf86atoi with a0=ret(xf86strchr)+1, a1=ret(xf86strchr), a2=?, a3=0x1, a4=[a1].
  The `jalr` at 0x40b95c calls xf86atoi with a0=ret(xf86strchr)+1, a1=?, a2=?, a3=?, a6=0x0.
  The `jalr` at 0x40b970 calls xf86strchr with a0=ret(xf86strchr)+1, a1=0x3a, a2=?, a3=?.
  The `jalr` at 0x40b98c calls xf86atoi with a0=ret(xf86strchr)+1, a1=?, a2=?, a3=?.
  The `beq` branch at 0x40b7e0 targets 0x40b8e4, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x40b7fc targets 0x40b900, is taken when v0(=ret(xf86GetOptValString)) == 0, and falls through when v0(=ret(xf86GetOptValString)) != 0.
  The `beq` branch at 0x40b838 targets 0x40b924, is taken when v0(=ret(xf86NameCmp)) == 0, and falls through when v0(=ret(xf86NameCmp)) != 0.
  The `beq` branch at 0x40b854 targets 0x40b900, is taken when a2(=[a1]) == 0, and falls through when a2(=[a1]) != 0.
  The `beq` branch at 0x40b880 targets 0x40b914, is taken when a4(=[a1]) == a3(=0x1), and falls through when a4(=[a1]) != a3(=0x1).
  The `bne` branch at 0x40b88c targets 0x40b8d4, is taken when a4(=[a1]) != a5(=0x2), and falls through when a4(=[a1]) == a5(=0x2).
  The `beq` branch at 0x40b894 targets 0x40b8cc, is taken when v0(=ret(xf86strchr)) == 0, and falls through when v0(=ret(xf86strchr)) != 0.
  The `bne` branch at 0x40b8bc targets 0x40b954, is taken when v0(=ret(xf86strchr)) != 0, and falls through when v0(=ret(xf86strchr)) == 0.
  The `bne` branch at 0x40b8c4 targets 0x40b8d4, is taken when a6(=one of 0x0, 0x1) != 0, and falls through when a6(=one of 0x0, 0x1) == 0.
  The `beq` branch at 0x40b8dc targets 0x40b904 and is always taken.
  The `bne` branch at 0x40b914 targets 0x40b944, is taken when v0(=ret(xf86strchr)) != 0, and falls through when v0(=ret(xf86strchr)) == 0.
  The `beq` branch at 0x40b91c targets 0x40b8d0 and is always taken.
  The `beq` branch at 0x40b934 targets 0x40b844, is taken when v0(=ret(xf86NameCmp)) == 0, and falls through when v0(=ret(xf86NameCmp)) != 0.
  The `beq` branch at 0x40b93c targets 0x40b844 and is always taken.
  The `beq` branch at 0x40b94c targets 0x40b8d0 and is always taken.
  The `bne` branch at 0x40b978 targets 0x40b988, is taken when v0(=ret(xf86strchr)) != 0, and falls through when v0(=ret(xf86strchr)) == 0.
  The `beq` branch at 0x40b980 targets 0x40b8c0 and is always taken.
  The `beq` branch at 0x40b99c targets 0x40b97c and is always taken.
  The return at 0x40b8f0 has v0 = ?.
  The return at 0x40b90c has v0 = one of ret(Xfree), ?.
  The instructions from 0x40b8f8 to 0x40b8fc are not reached by any path from the entry, and their branches are not listed.

- `findPci` in `usr/X11R6/lib/modules/libint10.so` at 0x40d2c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x40d2c0-0x40d324 (100 bytes).
  It occupies 100 bytes.
  The `jalr` at 0x40d2ec calls xf86IsPciDevPresent with a0=?, a1=?, a2=?, a3=a3 at entry (arg3).
  Calls pciTag via got with a0=?, a1=?, a2=?, a3=? (`jr` at 0x40d30c).
  The `beq` branch at 0x40d2f4 targets 0x40d314, is taken when v0(=ret(xf86IsPciDevPresent)) == 0, and falls through when v0(=ret(xf86IsPciDevPresent)) != 0.
  The return at 0x40d31c has v0 = 0x0.

- `pciSlotBX` in `usr/X11R6/lib/modules/libint10.so` at 0x40d340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x40d340-0x40d36c (44 bytes).
  It occupies 44 bytes.
  The `lw` at 0x40d340 loads 4 bytes from a0 (arg0 at entry) +0x18.
  The `lw` at 0x40d344 loads 4 bytes from a0 (arg0 at entry) +0x14.
  The `lw` at 0x40d348 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The return at 0x40d364 has v0 = ?.

- `MapVRam` in `usr/X11R6/lib/modules/libint10.so` at 0x40dc00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x40dc00-0x40dc74 (116 bytes).
  It occupies 116 bytes.
  The `lw` at 0x40dc0c loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0x40dc60 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `sw` at 0x40dc70 stores 4 bytes to [a0+16] +0xc.
  The `jalr` at 0x40dc14 calls xf86getpagesize with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x40dc50 calls xf86MapVidMem with a0=[a0+4], a1=0x2, a2=0xa0000, a3=?.
  The return at 0x40dc6c has v0 = ret(xf86MapVidMem).

- `UnmapVRam` in `usr/X11R6/lib/modules/libint10.so` at 0x40dc80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x40dc80-0x40dce8 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x40dc88 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0x40dccc loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x40dce4 loads 4 bytes from [a0+16] +0xc.
  The `jalr` at 0x40dc98 calls xf86getpagesize with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  Calls xf86UnMapVidMem via got with a0=[a0+4], a1=[[a0+16]+12], a2=?, a3=ret(xf86getpagesize)+131071 (`jr` at 0x40dce0).

- `MapCurrentInt10` in `usr/X11R6/lib/modules/libint10.so` at 0x40dd00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/libint10.so`.
  Range: 0x40dd00-0x40dd08 (8 bytes).
  It occupies 8 bytes.
  The return at 0x40dd00 has v0 = 0x1.
