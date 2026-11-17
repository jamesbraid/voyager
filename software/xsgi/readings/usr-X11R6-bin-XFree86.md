# Readings: `usr/X11R6/bin/XFree86`

One entry per routine, filed here from the reading batches by binary.

- `xf86MatchPciInstances` in `usr/X11R6/bin/XFree86` at 0x100401c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x100401c0-0x10040ed4 (3348 bytes).
  It occupies 3348 bytes.
  2 such `sw` accesses store 4 bytes to a7 (arg7 at entry) +0x0, including `sw` at 0x100401c4, `sw` at 0x10040ca8.
  The `lw` at 0x10040218 loads 4 bytes from sym(xf86PciVideoInfo) +0x0.
  3 such `lw` accesses load 4 bytes from [sym(xf86PciVideoInfo)] +0x0, including `lw` at 0x10040230, `lw` at 0x10040440, `lw` at 0x10040480.
  115 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10040264, `lw` at 0x10040268, `lw` at 0x10040274.
  40 such `sw` accesses store 4 bytes to ?, including `sw` at 0x100402c8, `sw` at 0x100402cc, `sw` at 0x100402d0.
  4 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x4, including `lw` at 0x100402dc, `lw` at 0x10040550, `lw` at 0x10040638.
  The `lw` at 0x1004030c loads 4 bytes from sym(xf86DoProbe) +0x0.
  The `lw` at 0x1004035c loads 4 bytes from sym(xf86DoConfigure) +0x0.
  The `lw` at 0x10040368 loads 4 bytes from sym(xf86DoConfigurePass1) +0x0.
  The `sw` at 0x1004039c stores 4 bytes to ret(xf86AddDeviceToConfigure) +0x25c.
  The `sw` at 0x100403a0 stores 4 bytes to ret(xf86AddDeviceToConfigure) +0x258.
  The `lw` at 0x100403bc loads 4 bytes from a6 (arg6 at entry) +0x4.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x1004076c, `lbu` at 0x100408dc.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x0, including `lw` at 0x100409f4, `lw` at 0x10040d24.
  2 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x0, including `lw` at 0x10040a4c, `lw` at 0x10040b00.
  The `lw` at 0x10040c54 loads 4 bytes from sym(xf86NumEntities) +0x0.
  The `lw` at 0x10040c5c loads 4 bytes from sym(xf86Entities) +0x0.
  The `lw` at 0x10040eb8 loads 4 bytes from a4 (arg4 at entry) +0x0.
  The `jal` at 0x100402b8 calls XNFrealloc [0x100de080] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10040328 calls Xfree [0x100de100] with a0=?, a1=?, a2=?, a3=?, a4=[sym(xf86DoProbe)], a5=sym(xf86DoConfigure).
  The `jal` at 0x100403c8 calls xf86AddDeviceToConfigure [0x10043d80] with a0=[a6+4], a1=?, a2=-0x1, a3=?.
  The `jal` at 0x100403e4 calls Xfree [0x100de100] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100404d8 calls XNFrealloc [0x100de080] with a0=?, a1=?, a2=?, a3=0x1.
  The `jal` at 0x100405fc calls Xfree [0x100de100] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004065c calls xf86CheckPciGAType [0x10051b80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10040684 calls XNFrealloc [0x100de080] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10040720 calls xf86ComparePciBusString [0x10051a40] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100407ac calls XNFrealloc [0x100de080] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100408b8 calls xf86MsgVerb [0x1003f680] with a0=0x6, a1=0x0, a2=0x101f6d80, a3=a0 at entry (arg0).
  The `jal` at 0x100408f4 calls xf86ComparePciBusString [0x10051a40] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004092c calls xf86IsPrimaryPci [0x10051b00] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10040944 calls xf86Msg [0x1003f700] with a0=0x0, a1=0x101f6dd0, a2=?, a3=?.
  The `jal` at 0x10040978 calls xf86MsgVerb [0x1003f680] with a0=0x6, a1=0x0, a2=0x101f6e10, a3=?.
  The `jal` at 0x100409b4 calls xf86MsgVerb [0x1003f680] with a0=0x6, a1=0x0, a2=0x101f6e48, a3=a0 at entry (arg0).
  The `jal` at 0x10040a0c calls xf86NameCmp [0x1003a040] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10040a9c calls xf86Msg [0x1003f700] with a0=0x1, a1=0x101f6ed8, a2=?, a3=?.
  The `jal` at 0x10040b5c calls xf86Msg [0x1003f700] with a0=0x1, a1=0x101f6f80, a2=?, a3=?.
  The `jal` at 0x10040bb4 calls xf86CheckPciSlot [0x10051e00] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10040c00 calls XNFrealloc [0x100de080] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10040c2c calls xf86ClaimPciSlot [0x10051200] with a0=?, a1=?, a2=?, a3=a6 at entry (arg6).
  The `jal` at 0x10040c7c calls Xfree [0x100de100] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10040d10 calls xf86AddDevToEntity [0x10053740] with a0=?, a1=?, a2=?, a3=?, a5=(([sym(xf86NumEntities)] << 0x2) + [sym(xf86Entities)]).
  The `jal` at 0x10040d68 calls xf86Msg [0x1003f700] with a0=one of 0x0, 0x1, a1=0x101f6fa0, a2=?, a3=?.
  The `jal` at 0x10040dc8 calls xf86MsgVerb [0x1003f680] with a0=0x6, a1=0x0, a2=0x101f6e90, a3=a0 at entry (arg0).
  The `jal` at 0x10040e0c calls xf86MsgVerb [0x1003f680] with a0=0x6, a1=0x0, a2=0x101f6ef0, a3=a0 at entry (arg0).
  The `jal` at 0x10040e5c calls xf86MsgVerb [0x1003f680] with a0=0x6, a1=0x0, a2=0x101f6f38, a3=a0 at entry (arg0).
  The `beq` branch at 0x10040214 targets 0x10040440, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x10040220 targets 0x10040480, is taken when a1 == t9(=0xff), and falls through when a1 != t9(=0xff).
  The `beq` branch at 0x10040228 targets 0x100405d4, is taken when s2(=[sym(xf86PciVideoInfo)]) == 0, and falls through when s2(=[sym(xf86PciVideoInfo)]) != 0.
  The `beq` branch at 0x10040240 targets 0x10040d78, is taken when v0(=[[sym(xf86PciVideoInfo)]]) == 0, and falls through when v0(=[[sym(xf86PciVideoInfo)]]) != 0.
  The `beq` branch at 0x1004025c targets 0x10040298 and is always taken.
  The `beq` branch at 0x1004026c targets 0x10040420, is taken when t3(?) == v0(?), and falls through when t3(?) != v0(?).
  The `bne` branch at 0x10040278 targets 0x1004026c, is taken when t3(?) != s7(=-0x1), and falls through when t3(?) == s7(=-0x1).
  The `beq` branch at 0x10040284 targets 0x10040300, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x10040290 targets 0x10040300, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x1004029c targets 0x10040280, is taken when v1(?) != s0(=a1), and falls through when v1(?) == s0(=a1).
  The `bne` branch at 0x100402e8 targets 0x10040264, is taken when t3(=[a3+4]) != s7(=-0x1), and falls through when t3(=[a3+4]) == s7(=-0x1).
  The `beq` branch at 0x100402f0 targets 0x10040284 and is always taken.
  The `blez` branch at 0x10040304 targets 0x100405e8, is taken when a2(?) <= 0 (signed), and falls through when a2(?) > 0 (signed).
  The `beq` branch at 0x10040310 targets 0x1004035c, is taken when a4(=[sym(xf86DoProbe)]) == 0, and falls through when a4(=[sym(xf86DoProbe)]) != 0.
  The `beq` branch at 0x10040360 targets 0x100406c8, is taken when a5(=[sym(xf86DoConfigure)]) == 0, and falls through when a5(=[sym(xf86DoConfigure)]) != 0.
  The `beq` branch at 0x1004036c targets 0x100406cc, is taken when a6(=[sym(xf86DoConfigurePass1)]) == 0, and falls through when a6(=[sym(xf86DoConfigurePass1)]) != 0.
  The `beq` branch at 0x10040394 targets 0x100403b0 and is always taken.
  The `beq` branch at 0x100403a8 targets 0x100403e0, is taken when s0(?) == s1(?), and falls through when s0(?) != s1(?).
  The `beq` branch at 0x100403b4 targets 0x100403a4, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x100403d0 targets 0x1004039c, is taken when v0(=ret(xf86AddDeviceToConfigure)) != 0, and falls through when v0(=ret(xf86AddDeviceToConfigure)) == 0.
  The `beq` branch at 0x100403d8 targets 0x100403a8 and is always taken.
  The `beq` branch at 0x1004042c targets 0x10040280 and is always taken.
  The `beq` branch at 0x10040450 targets 0x10040d80, is taken when at(=[[sym(xf86PciVideoInfo)]]) == 0, and falls through when at(=[[sym(xf86PciVideoInfo)]]) != 0.
  The `beq` branch at 0x10040474 targets 0x10040ea4 and is always taken.
  The `beq` branch at 0x10040494 targets 0x10040dd8, is taken when v1(=[[sym(xf86PciVideoInfo)]]) == 0, and falls through when v1(=[[sym(xf86PciVideoInfo)]]) != 0.
  The `beq` branch at 0x100404b0 targets 0x10040638 and is always taken.
  The `bne` branch at 0x10040510 targets 0x10040528, is taken when a1(?) != a2(?), and falls through when a1(?) == a2(?).
  The `bne` branch at 0x10040538 targets 0x10040578, is taken when t2(?) != s7(=-0x1), and falls through when t2(?) == s7(=-0x1).
  The `beq` branch at 0x10040548 targets 0x100405c0, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x10040558 targets 0x10040540, is taken when t2(=[a3+4]) == s7(=-0x1), and falls through when t2(=[a3+4]) != s7(=-0x1).
  The `beq` branch at 0x10040560 targets 0x1004057c and is always taken.
  The `beq` branch at 0x10040570 targets 0x10040540, is taken when t2(?) == s7(=-0x1), and falls through when t2(?) != s7(=-0x1).
  The `bne` branch at 0x10040588 targets 0x10040568, is taken when a7(?) != t0(?), and falls through when a7(?) == t0(?).
  The `beq` branch at 0x10040590 targets 0x100404c0, is taken when a1(=one of 0x0, 0x1) == 0, and falls through when a1(=one of 0x0, 0x1) != 0.
  The `bne` branch at 0x100405a0 targets 0x10040568, is taken when t1(?) != t8(?), and falls through when t1(?) == t8(?).
  The `beq` branch at 0x100405b4 targets 0x10040568 and is always taken.
  The `bgtz` branch at 0x100405c4 targets 0x1004030c, is taken when ra(?) > 0 (signed), and falls through when ra(?) <= 0 (signed).
  The `beq` branch at 0x100405cc targets 0x100405ec and is always taken.
  The `beq` branch at 0x10040630 targets 0x100406c0, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x1004063c targets 0x1004062c, is taken when v1(=[a3+4]) == s7(=-0x1), and falls through when v1(=[a3+4]) != s7(=-0x1).
  The `beq` branch at 0x10040644 targets 0x1004065c and is always taken.
  The `beq` branch at 0x10040650 targets 0x1004062c, is taken when a0(?) == s7(=-0x1), and falls through when a0(?) != s7(=-0x1).
  The `bne` branch at 0x10040668 targets 0x1004064c, is taken when a1(?) != v0(=ret(xf86CheckPciGAType)), and falls through when a1(?) == v0(=ret(xf86CheckPciGAType)).
  The `beq` branch at 0x100406b4 targets 0x1004064c and is always taken.
  The `beq` branch at 0x100406c0 targets 0x10040304 and is always taken.
  The `blez` branch at 0x100406d0 targets 0x10040808, is taken when a7(=a5) <= 0 (signed), and falls through when a7(=a5) > 0 (signed).
  The `beq` branch at 0x100406fc targets 0x10040eb0 and is always taken.
  The `bne` branch at 0x10040728 targets 0x10040788, is taken when v0(=ret(xf86ComparePciBusString)) != 0, and falls through when v0(=ret(xf86ComparePciBusString)) == 0.
  The `bne` branch at 0x10040738 targets 0x10040708, is taken when s0(?) != s5(?), and falls through when s0(?) == s5(?).
  The `beq` branch at 0x10040744 targets 0x10040800, is taken when s4(?) == s2(=((a5 << 0x2) + a4)), and falls through when s4(?) != s2(=((a5 << 0x2) + a4)).
  The `blez` branch at 0x10040758 targets 0x10040740, is taken when a2(?) <= 0 (signed), and falls through when a2(?) > 0 (signed).
  The `beq` branch at 0x10040764 targets 0x10040740, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x10040770 targets 0x10040740, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bgtz` branch at 0x10040778 targets 0x10040704, is taken when a4(?) > 0 (signed), and falls through when a4(?) <= 0 (signed).
  The `beq` branch at 0x10040780 targets 0x10040744 and is always taken.
  The `beq` branch at 0x100407f8 targets 0x10040740 and is always taken.
  The `blez` branch at 0x10040810 targets 0x10040e6c, is taken when t1(?) <= 0 (signed), and falls through when t1(?) > 0 (signed).
  The `beq` branch at 0x10040838 targets 0x10040ebc and is always taken.
  The `beq` branch at 0x10040840 targets 0x10040850, is taken when s5(?) == 0, and falls through when s5(?) != 0.
  The `beq` branch at 0x10040850 targets 0x10040994, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x10040880 targets 0x100409c4, is taken when a0(?) == a1(?), and falls through when a0(?) != a1(?).
  The `blez` branch at 0x10040890 targets 0x10040994, is taken when a2(=a5) <= 0 (signed), and falls through when a2(=a5) > 0 (signed).
  The `beq` branch at 0x10040898 targets 0x100408cc and is always taken.
  The `beq` branch at 0x100408c4 targets 0x10040840, is taken when s0(?) == s2(=((a5 << 0x2) + a4)), and falls through when s0(?) != s2(=((a5 << 0x2) + a4)).
  The `beq` branch at 0x100408d4 targets 0x1004092c, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x100408e0 targets 0x1004092c, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x100408fc targets 0x100408c0, is taken when v0(=ret(xf86ComparePciBusString)) == 0, and falls through when v0(=ret(xf86ComparePciBusString)) != 0.
  The `bne` branch at 0x10040910 targets 0x100408c0, is taken when a2(?) != a3(?), and falls through when a2(?) == a3(?).
  The `bne` branch at 0x10040918 targets 0x100408a0, is taken when s5(?) != 0, and falls through when s5(?) == 0.
  The `beq` branch at 0x10040920 targets 0x100408c0 and is always taken.
  The `beq` branch at 0x10040934 targets 0x100408c0, is taken when v0(=ret(xf86IsPrimaryPci)) == 0, and falls through when v0(=ret(xf86IsPrimaryPci)) != 0.
  The `bne` branch at 0x10040950 targets 0x10040960, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x10040958 targets 0x10040988, is taken when s5(?) == 0, and falls through when s5(?) != 0.
  The `beq` branch at 0x10040980 targets 0x100408c4 and is always taken.
  The `beq` branch at 0x1004098c targets 0x100408c0 and is always taken.
  The `beq` branch at 0x100409bc targets 0x10040870 and is always taken.
  The `blez` branch at 0x100409d4 targets 0x10040b70, is taken when a3(?) <= 0 (signed), and falls through when a3(?) > 0 (signed).
  The `beq` branch at 0x100409ec targets 0x10040ec8 and is always taken.
  The `bltz` branch at 0x100409f8 targets 0x10040d88, is taken when a4(=[a2]) < 0 (signed), and falls through when a4(=[a2]) >= 0 (signed).
  The `beq` branch at 0x10040a14 targets 0x10040a38, is taken when v0(=ret(xf86NameCmp)) == 0, and falls through when v0(=ret(xf86NameCmp)) != 0.
  The `bgez` branch at 0x10040a24 targets 0x10040a00, is taken when a2(?) >= 0 (signed), and falls through when a2(?) < 0 (signed).
  The `beq` branch at 0x10040a3c targets 0x10040d98, is taken when a4(?) == s7(=-0x1), and falls through when a4(?) != s7(=-0x1).
  The `bltz` branch at 0x10040a54 targets 0x10040de0, is taken when v0(=[a3]) < 0 (signed), and falls through when v0(=[a3]) >= 0 (signed).
  The `beq` branch at 0x10040a5c targets 0x10040a88, is taken when a4(?) == v0(?), and falls through when a4(?) != v0(?).
  The `bgez` branch at 0x10040a6c targets 0x10040a5c, is taken when v0(?) >= 0 (signed), and falls through when v0(?) < 0 (signed).
  The `bltz` branch at 0x10040a88 targets 0x10040de0, is taken when v0(?) < 0 (signed), and falls through when v0(?) >= 0 (signed).
  The `beq` branch at 0x10040ab0 targets 0x10040d20, is taken when v0(?) == a2(=0x1), and falls through when v0(?) != a2(=0x1).
  The `beq` branch at 0x10040ac0 targets 0x10040b70, is taken when s1(?) >= a3(?) (unsigned), and falls through when s1(?) < a3(?) (unsigned).
  The `blez` branch at 0x10040ac8 targets 0x10040b70, is taken when a4(?) <= 0 (signed), and falls through when a4(?) > 0 (signed).
  The `beq` branch at 0x10040adc targets 0x10040ab4, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x10040aec targets 0x100409f4, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `blez` branch at 0x10040af8 targets 0x10040e1c, is taken when a1(?) <= 0 (signed), and falls through when a1(?) > 0 (signed).
  The `bltz` branch at 0x10040b04 targets 0x10040e80, is taken when a4(=[a3]) < 0 (signed), and falls through when a4(=[a3]) >= 0 (signed).
  The `beq` branch at 0x10040b10 targets 0x10040b40, is taken when a6(?) == a1(?), and falls through when a6(?) != a1(?).
  The `bgez` branch at 0x10040b20 targets 0x10040b0c, is taken when a7(?) >= 0 (signed), and falls through when a7(?) < 0 (signed).
  The `beq` branch at 0x10040b44 targets 0x10040e30, is taken when a4(?) == s7(=-0x1), and falls through when a4(?) != s7(=-0x1).
  The `beq` branch at 0x10040b68 targets 0x10040aac and is always taken.
  The `blez` branch at 0x10040b84 targets 0x10040e78, is taken when a2(?) <= 0 (signed), and falls through when a2(?) > 0 (signed).
  The `beq` branch at 0x10040ba0 targets 0x10040bd4 and is always taken.
  The `bne` branch at 0x10040bbc targets 0x10040bf0, is taken when v0(=ret(xf86CheckPciSlot)) != 0, and falls through when v0(=ret(xf86CheckPciSlot)) == 0.
  The `beq` branch at 0x10040bcc targets 0x10040c6c, is taken when s1(?) >= s6(?) (unsigned), and falls through when s1(?) < s6(?) (unsigned).
  The `beq` branch at 0x10040bd8 targets 0x10040bc4, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0x10040be4 targets 0x10040ba8, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0x10040c38 targets 0x10040bc4, is taken when v0(=ret(xf86ClaimPciSlot)) != s7(=-0x1), and falls through when v0(=ret(xf86ClaimPciSlot)) == s7(=-0x1).
  The `blez` branch at 0x10040c4c targets 0x10040bc4, is taken when t0(?) <= 0 (signed), and falls through when t0(?) > 0 (signed).
  The `blez` branch at 0x10040c58 targets 0x10040bc4, is taken when v0(=[sym(xf86NumEntities)]) <= 0 (signed), and falls through when v0(=[sym(xf86NumEntities)]) > 0 (signed).
  The `beq` branch at 0x10040c64 targets 0x10040ccc and is always taken.
  The `blez` branch at 0x10040c9c targets 0x10040cac, is taken when s5(?) <= 0 (signed), and falls through when s5(?) > 0 (signed).
  The `beq` branch at 0x10040cc4 targets 0x10040bc4, is taken when a2(?) == a5(=(([sym(xf86NumEntities)] << 0x2) + [sym(xf86Entities)])), and falls through when a2(?) != a5(=(([sym(xf86NumEntities)] << 0x2) + [sym(xf86Entities)])).
  The `bne` branch at 0x10040cd4 targets 0x10040cc0, is taken when a6(?) != s0(=0x2), and falls through when a6(?) == s0(=0x2).
  The `bne` branch at 0x10040ce0 targets 0x10040cc0, is taken when a7(?) != t0(?), and falls through when a7(?) == t0(?).
  The `bne` branch at 0x10040cf0 targets 0x10040cc0, is taken when t1(?) != t3(?), and falls through when t1(?) == t3(?).
  The `bne` branch at 0x10040d00 targets 0x10040cc4, is taken when t8(?) != t9(?), and falls through when t8(?) == t9(?).
  The `beq` branch at 0x10040d18 targets 0x10040bc8 and is always taken.
  The `bltz` branch at 0x10040d2c targets 0x10040d50, is taken when a5(=[a2]) < 0 (signed), and falls through when a5(=[a2]) >= 0 (signed).
  The `beq` branch at 0x10040d38 targets 0x10040d60, is taken when a4(?) == a5(?), and falls through when a4(?) != a5(?).
  The `bgez` branch at 0x10040d48 targets 0x10040d38, is taken when a5(?) >= 0 (signed), and falls through when a5(?) < 0 (signed).
  The `beq` branch at 0x10040d70 targets 0x10040ab8 and is always taken.
  The `beq` branch at 0x10040d78 targets 0x100405e8 and is always taken.
  The `beq` branch at 0x10040d80 targets 0x100405e8 and is always taken.
  The `beq` branch at 0x10040d88 targets 0x10040da0, is taken when a4(=[a2]) == s7(=-0x1), and falls through when a4(=[a2]) != s7(=-0x1).
  The `beq` branch at 0x10040d90 targets 0x10040a4c and is always taken.
  The `beq` branch at 0x10040dd0 targets 0x10040aa8 and is always taken.
  The `beq` branch at 0x10040dd8 targets 0x100405e8 and is always taken.
  The `beq` branch at 0x10040e14 targets 0x10040aa8 and is always taken.
  The `beq` branch at 0x10040e20 targets 0x10040e90, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x10040e28 targets 0x10040aac and is always taken.
  The `beq` branch at 0x10040e64 targets 0x10040b68 and is always taken.
  The `beq` branch at 0x10040e70 targets 0x10040c6c and is always taken.
  The `beq` branch at 0x10040e78 targets 0x10040c6c and is always taken.
  The `beq` branch at 0x10040e80 targets 0x10040e34, is taken when a4(=[a3]) == s7(=-0x1), and falls through when a4(=[a3]) != s7(=-0x1).
  The `beq` branch at 0x10040e88 targets 0x10040b4c and is always taken.
  The `beq` branch at 0x10040e9c targets 0x10040e28 and is always taken.
  The `beq` branch at 0x10040ea8 targets 0x10040554 and is always taken.
  The `beq` branch at 0x10040eb4 targets 0x10040750 and is always taken.
  The `beq` branch at 0x10040ec0 targets 0x1004088c and is always taken.
  The `beq` branch at 0x10040ecc targets 0x10040ad4 and is always taken.
  The return at 0x10040354 has v0 = ?.
  The return at 0x10040418 has v0 = ?.
  The return at 0x10040624 has v0 = 0x0.
  The return at 0x10040cb4 has v0 = ?.
  The instructions from 0x100402f8 to 0x100402fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x10040434 to 0x1004043c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1004047c to 0x1004047c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x100404b8 to 0x100404bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x100405bc to 0x100405bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x100406bc to 0x100406bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x10040928 to 0x10040928 are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x10040cbc to 0x10040cbc are not reached by any path from the entry, and their branches are not listed.

- `xf86MatchIsaInstances` in `usr/X11R6/bin/XFree86` at 0x10040f00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10040f00-0x100412a8 (936 bytes).
  It occupies 936 bytes.
  2 such `sw` accesses store 4 bytes to a7 (arg7 at entry) +0x0, including `sw` at 0x10040f18, `sw` at 0x10041298.
  The `lw` at 0x10040f1c loads 4 bytes from sym(xf86DoProbe) +0x0.
  The `lw` at 0x10040f68 loads 4 bytes from a3 (arg3 at entry) +0x4.
  The `lw` at 0x10040fc4 loads 4 bytes from sym(xf86DoConfigure) +0x0.
  The `lw` at 0x10040fd0 loads 4 bytes from sym(xf86DoConfigurePass1) +0x0.
  The `lw` at 0x10041044 loads 4 bytes from a2 (arg2 at entry) +0x0.
  16 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10041058, `lw` at 0x10041070, `lw` at 0x100410ac.
  The `sw` at 0x100410cc stores 4 bytes to ?.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x0, including `lw` at 0x100410d0, `lw` at 0x10041180.
  The `lbu` at 0x10041140 loads 1 byte from ?.
  The `jalr` at 0x10040f54 calls (unknown callee) with a0=0x0, a1=?, a2=?, a3=a3 at entry (arg3).
  The `jal` at 0x10040f6c calls xf86AddDeviceToConfigure [0x10043d80] with a0=[a3+4], a1=0x0, a2=ret(?), a3=?.
  The `jal` at 0x1004109c calls XNFrealloc [0x100de080] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100410bc calls xf86ClaimIsaSlot [0x10059800] with a0=a3 at entry (arg3), a1=?, a2=?, a3=?.
  The `jal` at 0x10041118 calls xf86Msg [0x1003f700] with a0=one of 0x0, 0x1, a1=0x101f6fa0, a2=?, a3=?, a5=sym(xf86Msg).
  The `jal` at 0x1004114c calls xf86ParseIsaBusString [0x1005a000] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10041194 calls xf86NameCmp [0x1003a040] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100411e4 calls xf86MsgVerb [0x1003f680] with a0=0x6, a1=0x0, a2=0x101f6e90, a3=a0 at entry (arg0).
  The `jal` at 0x10041204 calls xf86IsPrimaryIsa [0x1005a040] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10041250 calls xf86MsgVerb [0x1003f680] with a0=0x6, a1=0x0, a2=0x101f6fb8, a3=a0 at entry (arg0).
  The `jalr` at 0x10041268 calls (unknown callee) with a0=?, a1=?, a2=?, a3=a4 at entry (arg4).
  The `beq` branch at 0x10040f44 targets 0x10040fc0, is taken when at(=[sym(xf86DoProbe)]) == 0, and falls through when at(=[sym(xf86DoProbe)]) != 0.
  The `beq` branch at 0x10040f4c targets 0x10040f98, is taken when a4 == 0, and falls through when a4 != 0.
  The `beq` branch at 0x10040f5c targets 0x10040f98, is taken when v0(=ret(?)) == s8(=-0x1), and falls through when v0(=ret(?)) != s8(=-0x1).
  The `beq` branch at 0x10040fc8 targets 0x10040fdc, is taken when v1(=[sym(xf86DoConfigure)]) == 0, and falls through when v1(=[sym(xf86DoConfigure)]) != 0.
  The `bne` branch at 0x10040fd4 targets 0x10040f4c, is taken when a2(=[sym(xf86DoConfigurePass1)]) != 0, and falls through when a2(=[sym(xf86DoConfigurePass1)]) == 0.
  The `blez` branch at 0x10040fec targets 0x1004129c, is taken when a6 <= 0 (signed), and falls through when a6 > 0 (signed).
  The `beq` branch at 0x10041024 targets 0x10041130 and is always taken.
  The `beq` branch at 0x1004102c targets 0x100411d0, is taken when a2(=[a1]) == s8(=-0x1), and falls through when a2(=[a1]) != s8(=-0x1).
  The `bltz` branch at 0x1004103c targets 0x1004107c, is taken when s0(?) < 0 (signed), and falls through when s0(?) >= 0 (signed).
  The `bltz` branch at 0x10041048 targets 0x10041234, is taken when a6(=[a2]) < 0 (signed), and falls through when a6(=[a2]) >= 0 (signed).
  The `beq` branch at 0x10041050 targets 0x10041074, is taken when a6(?) == s0(?), and falls through when a6(?) != s0(?).
  The `bgez` branch at 0x10041060 targets 0x10041050, is taken when a6(?) >= 0 (signed), and falls through when a6(?) < 0 (signed).
  The `beq` branch at 0x10041074 targets 0x10041240, is taken when a6(?) == s8(=-0x1), and falls through when a6(?) != s8(=-0x1).
  The `beq` branch at 0x1004107c targets 0x10041120, is taken when s0(?) == s8(=-0x1), and falls through when s0(?) != s8(=-0x1).
  The `bltz` branch at 0x100410dc targets 0x100410fc, is taken when t3(=[a1]) < 0 (signed), and falls through when t3(=[a1]) >= 0 (signed).
  The `beq` branch at 0x100410e4 targets 0x10041108, is taken when t3(?) == s0(?), and falls through when t3(?) != s0(?).
  The `bgez` branch at 0x100410f4 targets 0x100410e4, is taken when t3(?) >= 0 (signed), and falls through when t3(?) < 0 (signed).
  The `beq` branch at 0x10041128 targets 0x10041278, is taken when s4(?) == a2(=((a6 << 0x2) + a5)), and falls through when s4(?) != a2(=((a6 << 0x2) + a5)).
  The `beq` branch at 0x10041138 targets 0x10041204, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x10041144 targets 0x10041200, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x10041154 targets 0x100411f4, is taken when v0(=ret(xf86ParseIsaBusString)) == 0, and falls through when v0(=ret(xf86ParseIsaBusString)) != 0.
  The `beq` branch at 0x10041160 targets 0x1004121c, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x1004116c targets 0x100411f4, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x10041178 targets 0x10041224, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bltz` branch at 0x10041184 targets 0x1004102c, is taken when a2(=[a1]) < 0 (signed), and falls through when a2(=[a1]) >= 0 (signed).
  The `beq` branch at 0x1004119c targets 0x100411bc, is taken when v0(=ret(xf86NameCmp)) == 0, and falls through when v0(=ret(xf86NameCmp)) != 0.
  The `bgez` branch at 0x100411ac targets 0x1004118c, is taken when a2(?) >= 0 (signed), and falls through when a2(?) < 0 (signed).
  The `bne` branch at 0x100411c0 targets 0x10041034, is taken when a2(?) != s8(=-0x1), and falls through when a2(?) == s8(=-0x1).
  The `beq` branch at 0x100411ec targets 0x1004103c and is always taken.
  The `beq` branch at 0x100411f4 targets 0x1004103c and is always taken.
  The `beq` branch at 0x1004120c targets 0x10041260, is taken when v0(=ret(xf86IsPrimaryIsa)) == 0, and falls through when v0(=ret(xf86IsPrimaryIsa)) != 0.
  The `beq` branch at 0x10041214 targets 0x10041168 and is always taken.
  The `beq` branch at 0x1004121c targets 0x100411f4 and is always taken.
  The `bne` branch at 0x10041224 targets 0x10041268, is taken when a3(=a4) != 0, and falls through when a3(=a4) == 0.
  The `beq` branch at 0x1004122c targets 0x1004103c and is always taken.
  The `bne` branch at 0x10041238 targets 0x1004107c, is taken when a6(=[a2]) != s8(=-0x1), and falls through when a6(=[a2]) == s8(=-0x1).
  The `beq` branch at 0x10041258 targets 0x10041120 and is always taken.
  The `beq` branch at 0x10041260 targets 0x100411f4 and is always taken.
  The `beq` branch at 0x10041270 targets 0x1004122c and is always taken.
  The `beq` branch at 0x10041294 targets 0x10040f9c and is always taken.
  The `beq` branch at 0x100412a0 targets 0x1004127c and is always taken.
  The return at 0x10040f90 has v0 = 0x1.
  The return at 0x10040fb4 has v0 = one of 0x0, ?.
  The instructions from 0x10040fbc to 0x10040fbc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x100411fc to 0x100411fc are not reached by any path from the entry, and their branches are not listed.

- `xf86ConfigIsaEntity` in `usr/X11R6/bin/XFree86` at 0x10042800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10042800-0x100429b0 (432 bytes).
  It occupies 432 bytes.
  The `lw` at 0x10042860 loads 4 bytes from ret(xf86GetEntityInfo) +0x4.
  The `lw` at 0x1004286c loads 4 bytes from ret(xf86GetEntityInfo) +0x18.
  The `lw` at 0x100428c4 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `lw` at 0x100428d4 loads 4 bytes from ret(xf86GetEntityInfo) +0x14.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x100428e0, `lw` at 0x100428fc.
  The `lw` at 0x1004297c loads 4 bytes from ret(xf86GetEntityInfo) +0x24.
  The `jal` at 0x1004284c calls xf86GetEntityInfo [0x10053800] with a0=a2 at entry (arg2), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10042874 calls Xfree [0x100de100] with a0=ret(xf86GetEntityInfo), a1=?, a2=?, a3=?.
  The `jal` at 0x100428b4 calls xf86AddEntityToScreen [0x10052fc0] with a0=?, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10042900 calls xf86ClaimFixedResources [0x10056ec0] with a0=?, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10042910 calls Xfree [0x100de100] with a0=ret(xf86GetEntityInfo), a1=?, a2=?, a3=?.
  The `jal` at 0x10042924 calls xf86ClaimFixedResources [0x10056ec0] with a0=a4 at entry (arg4), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10042940 calls xf86SetEntityFuncs [0x10052ec0] with a0=a2 at entry (arg2), a1=a5 at entry (arg5), a2=a6 at entry (arg6), a3=a7 at entry (arg7).
  The `jal` at 0x10042978 calls xf86AllocateScreen [0x1003d240] with a0=[ret(xf86GetEntityInfo)+36], a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x100429a0 calls xf86ConfigIsaEntityInactive [0x10043140] with a0=ret(xf86GetEntityInfo), a1=a3 at entry (arg3), a2=a4 at entry (arg4), a3=a5 at entry (arg5), a4=a6 at entry (arg6), a5=a7 at entry (arg7).
  The `beq` branch at 0x10042858 targets 0x10042968, is taken when v0(=ret(xf86GetEntityInfo)) == 0, and falls through when v0(=ret(xf86GetEntityInfo)) != 0.
  The `beq` branch at 0x10042868 targets 0x100428a0, is taken when v0(=[ret(xf86GetEntityInfo)+4]) == v1(=0x1), and falls through when v0(=[ret(xf86GetEntityInfo)+4]) != v1(=0x1).
  The `beq` branch at 0x100428a0 targets 0x10042988, is taken when v0(=[ret(xf86GetEntityInfo)+24]) == 0, and falls through when v0(=[ret(xf86GetEntityInfo)+24]) != 0.
  The `beq` branch at 0x100428a8 targets 0x10042970, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x100428bc targets 0x10042908, is taken when s3(=a3) == 0, and falls through when s3(=a3) != 0.
  The `beq` branch at 0x100428cc targets 0x100428f0, is taken when t8(=[a3]) == ra(=-0x1), and falls through when t8(=[a3]) != ra(=-0x1).
  The `beq` branch at 0x100428d8 targets 0x100428f8, is taken when t9(=[ret(xf86GetEntityInfo)+20]) == t8(?), and falls through when t9(=[ret(xf86GetEntityInfo)+20]) != t8(?).
  The `bne` branch at 0x100428e8 targets 0x100428d8, is taken when t8(?) != ra(=-0x1), and falls through when t8(?) == ra(=-0x1).
  The `beq` branch at 0x10042968 targets 0x10042948 and is always taken.
  The `beq` branch at 0x10042980 targets 0x100428ac and is always taken.
  The `beq` branch at 0x100429a8 targets 0x10042948 and is always taken.
  The return at 0x10042898 has v0 = a0.
  The return at 0x10042960 has v0 = one of ?, a0.

- `xf86ConfigPciEntity` in `usr/X11R6/bin/XFree86` at 0x100429c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x100429c0-0x10042bc0 (512 bytes).
  It occupies 512 bytes.
  The `lw` at 0x10042a18 loads 4 bytes from ret(xf86GetEntityInfo) +0x4.
  The `lw` at 0x10042a3c loads 4 bytes from ret(xf86GetEntityInfo) +0x18.
  The `lw` at 0x10042aec loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `lw` at 0x10042afc loads 4 bytes from ret(xf86GetEntityInfo) +0x14.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10042b08, `lw` at 0x10042b30.
  The `lw` at 0x10042b8c loads 4 bytes from ret(xf86GetEntityInfo) +0x24.
  The `jal` at 0x10042a08 calls xf86GetEntityInfo [0x10053800] with a0=a2 at entry (arg2), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10042a2c calls xf86GetPciInfoForEntity [0x10051c80] with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `jal` at 0x10042a50 calls xf86IsEntitySharable [0x10059400] with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `jal` at 0x10042a60 calls xf86SetEntityShared [0x10059380] with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `jal` at 0x10042a70 calls xf86AddEntityToScreen [0x10052fc0] with a0=?, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10042a7c calls xf86IsEntityShared [0x10059300] with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `jal` at 0x10042a98 calls Xfree [0x100de100] with a0=ret(xf86GetEntityInfo), a1=?, a2=?, a3=?.
  The `jal` at 0x10042b34 calls xf86ClaimFixedResources [0x10056ec0] with a0=?, a1=a2 at entry (arg2), a2=?, a3=a3 at entry (arg3).
  The `jal` at 0x10042b40 calls Xfree [0x100de100] with a0=ret(xf86GetEntityInfo), a1=?, a2=?, a3=?.
  The `jal` at 0x10042b54 calls xf86ClaimFixedResources [0x10056ec0] with a0=a4 at entry (arg4), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x10042b70 calls xf86SetEntityFuncs [0x10052ec0] with a0=a2 at entry (arg2), a1=a5 at entry (arg5), a2=a6 at entry (arg6), a3=a7 at entry (arg7).
  The `jal` at 0x10042b88 calls xf86AllocateScreen [0x1003d240] with a0=[ret(xf86GetEntityInfo)+36], a1=a1 at entry (arg1), a2=[ret(xf86GetEntityInfo)+24], a3=?.
  The `jal` at 0x10042bb0 calls xf86ConfigPciEntityInactive [0x10043000] with a0=ret(xf86GetEntityInfo), a1=a3 at entry (arg3), a2=a4 at entry (arg4), a3=a5 at entry (arg5), a4=a6 at entry (arg6), a5=a7 at entry (arg7).
  The `beq` branch at 0x10042a10 targets 0x10042ac0, is taken when v0(=ret(xf86GetEntityInfo)) == 0, and falls through when v0(=ret(xf86GetEntityInfo)) != 0.
  The `bne` branch at 0x10042a20 targets 0x10042a98, is taken when v1(=[ret(xf86GetEntityInfo)+4]) != a0(=0x2), and falls through when v1(=[ret(xf86GetEntityInfo)+4]) == a0(=0x2).
  The `beq` branch at 0x10042a34 targets 0x10042a98, is taken when v0(=ret(xf86GetPciInfoForEntity)) == 0, and falls through when v0(=ret(xf86GetPciInfoForEntity)) != 0.
  The `beq` branch at 0x10042a40 targets 0x10042b98, is taken when a2(=[ret(xf86GetEntityInfo)+24]) == 0, and falls through when a2(=[ret(xf86GetEntityInfo)+24]) != 0.
  The `beq` branch at 0x10042a48 targets 0x10042b80, is taken when s1(=a0) == 0, and falls through when s1(=a0) != 0.
  The `beq` branch at 0x10042a58 targets 0x10042a68, is taken when v0(=ret(xf86IsEntitySharable)) == 0, and falls through when v0(=ret(xf86IsEntitySharable)) != 0.
  The `beq` branch at 0x10042a84 targets 0x10042ae0, is taken when v0(=ret(xf86IsEntityShared)) == 0, and falls through when v0(=ret(xf86IsEntityShared)) != 0.
  The `beq` branch at 0x10042a8c targets 0x10042aa4 and is always taken.
  The `beq` branch at 0x10042ae4 targets 0x10042b3c, is taken when a3 == 0, and falls through when a3 != 0.
  The `beq` branch at 0x10042af4 targets 0x10042b18, is taken when t8(=[a3]) == v0(=-0x1), and falls through when t8(=[a3]) != v0(=-0x1).
  The `beq` branch at 0x10042b00 targets 0x10042b2c, is taken when t9(=[ret(xf86GetEntityInfo)+20]) == t8(?), and falls through when t9(=[ret(xf86GetEntityInfo)+20]) != t8(?).
  The `bne` branch at 0x10042b10 targets 0x10042b00, is taken when t8(?) != v0(=-0x1), and falls through when t8(?) == v0(=-0x1).
  The `beq` branch at 0x10042b78 targets 0x10042aa8 and is always taken.
  The `beq` branch at 0x10042b90 targets 0x10042a4c and is always taken.
  The `beq` branch at 0x10042bb8 targets 0x10042aa4 and is always taken.
  The return at 0x10042ab8 has v0 = ?.
  The return at 0x10042ad8 has v0 = a0.
  The instructions from 0x10042a94 to 0x10042a94 are not reached by any path from the entry, and their branches are not listed.

- `xf86ConfigActiveIsaEntity` in `usr/X11R6/bin/XFree86` at 0x10042d00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10042d00-0x10042e5c (348 bytes).
  It occupies 348 bytes.
  The `lw` at 0x10042d50 loads 4 bytes from ret(xf86GetEntityInfo) +0x18.
  The `lw` at 0x10042d5c loads 4 bytes from ret(xf86GetEntityInfo) +0x4.
  The `lw` at 0x10042da8 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lw` at 0x10042db8 loads 4 bytes from ret(xf86GetEntityInfo) +0x14.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10042dc8, `lw` at 0x10042de4.
  The `jal` at 0x10042d40 calls xf86GetEntityInfo [0x10053800] with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10042d68 calls Xfree [0x100de100] with a0=ret(xf86GetEntityInfo), a1=?, a2=?, a3=?.
  The `jal` at 0x10042d90 calls xf86AddEntityToScreen [0x10052fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10042de8 calls xf86ClaimFixedResources [0x10056ec0] with a0=?, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10042df4 calls Xfree [0x100de100] with a0=ret(xf86GetEntityInfo), a1=?, a2=?, a3=?.
  The `jal` at 0x10042e08 calls xf86ClaimFixedResources [0x10056ec0] with a0=a3 at entry (arg3), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10042e24 calls xf86SetEntityFuncs [0x10052ec0] with a0=a1 at entry (arg1), a1=a4 at entry (arg4), a2=a5 at entry (arg5), a3=a6 at entry (arg6), a4=a7 at entry (arg7).
  The `beq` branch at 0x10042d48 targets 0x10042e48, is taken when v0(=ret(xf86GetEntityInfo)) == 0, and falls through when v0(=ret(xf86GetEntityInfo)) != 0.
  The `beq` branch at 0x10042d58 targets 0x10042d64, is taken when v1(=[ret(xf86GetEntityInfo)+24]) == 0, and falls through when v1(=[ret(xf86GetEntityInfo)+24]) != 0.
  The `beq` branch at 0x10042d60 targets 0x10042d88, is taken when v0(=[ret(xf86GetEntityInfo)+4]) == t2(=0x1), and falls through when v0(=[ret(xf86GetEntityInfo)+4]) != t2(=0x1).
  The `beq` branch at 0x10042da0 targets 0x10042df0, is taken when v0(=a2) == 0, and falls through when v0(=a2) != 0.
  The `beq` branch at 0x10042db0 targets 0x10042dd8, is taken when t8(=[a2]) == ra(=-0x1), and falls through when t8(=[a2]) != ra(=-0x1).
  The `beq` branch at 0x10042dc0 targets 0x10042de0, is taken when t9(=[ret(xf86GetEntityInfo)+20]) == t8(?), and falls through when t9(=[ret(xf86GetEntityInfo)+20]) != t8(?).
  The `bne` branch at 0x10042dd0 targets 0x10042dc0, is taken when t8(?) != ra(=-0x1), and falls through when t8(?) == ra(=-0x1).
  The `beq` branch at 0x10042e2c targets 0x10042e54, is taken when v0(=ret(xf86SetEntityFuncs)) == 0, and falls through when v0(=ret(xf86SetEntityFuncs)) != 0.
  The `beq` branch at 0x10042e4c targets 0x10042d78 and is always taken.
  The `beq` branch at 0x10042e54 targets 0x10042d78 and is always taken.
  The return at 0x10042d80 has v0 = 0x0.
  The return at 0x10042e40 has v0 = 0x1.

- `xf86ConfigActivePciEntity` in `usr/X11R6/bin/XFree86` at 0x10042e80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10042e80-0x10042fe4 (356 bytes).
  It occupies 356 bytes.
  The `lw` at 0x10042ed0 loads 4 bytes from ret(xf86GetEntityInfo) +0x18.
  The `lw` at 0x10042edc loads 4 bytes from ret(xf86GetEntityInfo) +0x4.
  The `lw` at 0x10042f28 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lw` at 0x10042f38 loads 4 bytes from ret(xf86GetEntityInfo) +0x14.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10042f48, `lw` at 0x10042f6c.
  The `jal` at 0x10042ec0 calls xf86GetEntityInfo [0x10053800] with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10042ee8 calls Xfree [0x100de100] with a0=ret(xf86GetEntityInfo), a1=?, a2=?, a3=?.
  The `jal` at 0x10042f10 calls xf86AddEntityToScreen [0x10052fc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10042f70 calls xf86ClaimFixedResources [0x10056ec0] with a0=?, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10042f7c calls Xfree [0x100de100] with a0=ret(xf86GetEntityInfo), a1=?, a2=?, a3=?.
  The `jal` at 0x10042f90 calls xf86ClaimFixedResources [0x10056ec0] with a0=a3 at entry (arg3), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10042fac calls xf86SetEntityFuncs [0x10052ec0] with a0=a1 at entry (arg1), a1=a4 at entry (arg4), a2=a5 at entry (arg5), a3=a6 at entry (arg6), a4=a7 at entry (arg7).
  The `beq` branch at 0x10042ec8 targets 0x10042fd0, is taken when v0(=ret(xf86GetEntityInfo)) == 0, and falls through when v0(=ret(xf86GetEntityInfo)) != 0.
  The `beq` branch at 0x10042ed8 targets 0x10042ee4, is taken when v1(=[ret(xf86GetEntityInfo)+24]) == 0, and falls through when v1(=[ret(xf86GetEntityInfo)+24]) != 0.
  The `beq` branch at 0x10042ee0 targets 0x10042f08, is taken when v0(=[ret(xf86GetEntityInfo)+4]) == t2(=0x2), and falls through when v0(=[ret(xf86GetEntityInfo)+4]) != t2(=0x2).
  The `beq` branch at 0x10042f20 targets 0x10042f78, is taken when v0(=a2) == 0, and falls through when v0(=a2) != 0.
  The `beq` branch at 0x10042f30 targets 0x10042f58, is taken when t8(=[a2]) == ra(=-0x1), and falls through when t8(=[a2]) != ra(=-0x1).
  The `beq` branch at 0x10042f40 targets 0x10042f68, is taken when t9(=[ret(xf86GetEntityInfo)+20]) == t8(?), and falls through when t9(=[ret(xf86GetEntityInfo)+20]) != t8(?).
  The `bne` branch at 0x10042f50 targets 0x10042f40, is taken when t8(?) != ra(=-0x1), and falls through when t8(?) == ra(=-0x1).
  The `beq` branch at 0x10042fb4 targets 0x10042fdc, is taken when v0(=ret(xf86SetEntityFuncs)) == 0, and falls through when v0(=ret(xf86SetEntityFuncs)) != 0.
  The `beq` branch at 0x10042fd4 targets 0x10042ef8 and is always taken.
  The `beq` branch at 0x10042fdc targets 0x10042ef8 and is always taken.
  The return at 0x10042f00 has v0 = 0x0.
  The return at 0x10042fc8 has v0 = 0x1.

- `xf86ConfigPciEntityInactive` in `usr/X11R6/bin/XFree86` at 0x10043000 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10043000-0x10043118 (280 bytes).
  It occupies 280 bytes.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x10043028, `lw` at 0x100430a4, `lw` at 0x100430b0.
  The `lw` at 0x1004305c loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x1004306c loads 4 bytes from a0 (arg0 at entry) +0x14.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10043078, `lw` at 0x1004309c.
  The `jal` at 0x10043044 calls xf86FindScreenForEntity [0x100531c0] with a0=[a0], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x100430a0 calls xf86ClaimFixedResources [0x10056ec0] with a0=?, a1=[a0], a2=?, a3=?.
  The `jal` at 0x100430b4 calls xf86ClaimFixedResources [0x10056ec0] with a0=a2 at entry (arg2), a1=[a0], a2=?, a3=?.
  The `jal` at 0x100430c8 calls xf86DeallocateResourcesForEntity [0x10053680] with a0=[a0], a1=0x20, a2=?, a3=?.
  The `jal` at 0x100430e4 calls xf86SetEntityFuncs [0x10052ec0] with a0=[a0], a1=a3 at entry (arg3), a2=a4 at entry (arg4), a3=a5 at entry (arg5), a4=a6 at entry (arg6).
  The `jal` at 0x10043108 calls xf86RemoveEntityFromScreen [0x10053280] with a0=ret(xf86FindScreenForEntity), a1=[a0], a2=?, a3=?.
  The `bne` branch at 0x1004304c targets 0x10043100, is taken when v0(=ret(xf86FindScreenForEntity)) != 0, and falls through when v0(=ret(xf86FindScreenForEntity)) == 0.
  The `beq` branch at 0x10043054 targets 0x100430ac, is taken when s1(=a1) == 0, and falls through when s1(=a1) != 0.
  The `beq` branch at 0x10043060 targets 0x10043088, is taken when t2(=[a1]) == t8(=-0x1), and falls through when t2(=[a1]) != t8(=-0x1).
  The `beq` branch at 0x10043070 targets 0x1004309c, is taken when t3(=[a0+20]) == t2(?), and falls through when t3(=[a0+20]) != t2(?).
  The `bne` branch at 0x10043080 targets 0x10043070, is taken when t2(?) != t8(=-0x1), and falls through when t2(?) == t8(=-0x1).
  The `beq` branch at 0x10043110 targets 0x100430ac and is always taken.
  The return at 0x100430f8 has v0 = ret(xf86SetEntityFuncs).

- `xf86ConfigIsaEntityInactive` in `usr/X11R6/bin/XFree86` at 0x10043140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10043140-0x10043258 (280 bytes).
  It occupies 280 bytes.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x10043168, `lw` at 0x100431dc, `lw` at 0x100431e8.
  The `lw` at 0x1004319c loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x100431ac loads 4 bytes from a0 (arg0 at entry) +0x14.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x100431b8, `lw` at 0x100431d4.
  The `jal` at 0x10043184 calls xf86FindScreenForEntity [0x100531c0] with a0=[a0], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x100431d8 calls xf86ClaimFixedResources [0x10056ec0] with a0=?, a1=[a0], a2=?, a3=?.
  The `jal` at 0x100431ec calls xf86ClaimFixedResources [0x10056ec0] with a0=a2 at entry (arg2), a1=[a0], a2=?, a3=?.
  The `jal` at 0x10043200 calls xf86DeallocateResourcesForEntity [0x10053680] with a0=[a0], a1=0x20, a2=?, a3=?.
  The `jal` at 0x1004321c calls xf86SetEntityFuncs [0x10052ec0] with a0=[a0], a1=a3 at entry (arg3), a2=a4 at entry (arg4), a3=a5 at entry (arg5), a4=a6 at entry (arg6).
  The `jal` at 0x10043248 calls xf86RemoveEntityFromScreen [0x10053280] with a0=ret(xf86FindScreenForEntity), a1=[a0], a2=?, a3=?.
  The `bne` branch at 0x1004318c targets 0x10043240, is taken when v0(=ret(xf86FindScreenForEntity)) != 0, and falls through when v0(=ret(xf86FindScreenForEntity)) == 0.
  The `beq` branch at 0x10043194 targets 0x100431e4, is taken when s1(=a1) == 0, and falls through when s1(=a1) != 0.
  The `beq` branch at 0x100431a0 targets 0x100431c8, is taken when t2(=[a1]) == t8(=-0x1), and falls through when t2(=[a1]) != t8(=-0x1).
  The `beq` branch at 0x100431b0 targets 0x100431d4, is taken when t3(=[a0+20]) == t2(?), and falls through when t3(=[a0+20]) != t2(?).
  The `bne` branch at 0x100431c0 targets 0x100431b0, is taken when t2(?) != t8(=-0x1), and falls through when t2(?) == t8(=-0x1).
  The `beq` branch at 0x10043250 targets 0x100431e4 and is always taken.
  The return at 0x10043230 has v0 = ret(xf86SetEntityFuncs).
  The instructions from 0x10043238 to 0x1004323c are not reached by any path from the entry, and their branches are not listed.

- `xf86AddBusDeviceToConfigure` in `usr/X11R6/bin/XFree86` at 0x10043740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10043740-0x10043d44 (1540 bytes).
  It occupies 1540 bytes.
  The `lw` at 0x10043758 loads 4 bytes from sym(xf86DoProbe) +0x0.
  The `lw` at 0x10043768 loads 4 bytes from sym(xf86DoConfigure) +0x0.
  The `lw` at 0x10043774 loads 4 bytes from sym(xf86DoConfigurePass1) +0x0.
  22 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10043808, `lw` at 0x10043818, `lw` at 0x1004381c.
  The `lw` at 0x10043814 loads 4 bytes from a2 (arg2 at entry) +0x14.
  The `lw` at 0x10043820 loads 4 bytes from a2 (arg2 at entry) +0x1c.
  The `lw` at 0x1004382c loads 4 bytes from a2 (arg2 at entry) +0x18.
  15 such `sw` accesses store 4 bytes to ?, including `sw` at 0x10043940, `sw` at 0x10043948, `sw` at 0x1004394c.
  The `lbu` at 0x1004398c loads 1 byte from a0 (arg0 at entry) +0x0.
  2 such `sb` accesses store 1 byte to ?, including `sb` at 0x100439a8, `sb` at 0x100439e0.
  The `lbu` at 0x100439bc loads 1 byte from ?.
  The `lw` at 0x10043a04 loads 4 bytes from sym(xf86DriverList) +0x0.
  The `lw` at 0x10043a10 loads 4 bytes from ([sym(xf86DriverList)] + ([0x102406a4] << 0x2)) +0x0.
  The `lw` at 0x10043a14 loads 4 bytes from [([sym(xf86DriverList)] + ([0x102406a4] << 0x2))] +0x10.
  The `lw` at 0x10043a98 loads 4 bytes from [0x1024069c] +0x26c.
  3 such `lw` accesses load 4 bytes from sym(xf86PCIVendorNameInfo) +0x0, including `lw` at 0x10043b2c, `lw` at 0x10043bb8, `lw` at 0x10043c14.
  3 such `lw` accesses load 4 bytes from sym(xf86PCIVendorInfo) +0x0, including `lw` at 0x10043b60, `lw` at 0x10043bdc, `lw` at 0x10043c48.
  The `jal` at 0x10043850 calls xf86IsPrimaryPci [0x10051b00] with a0=a2 at entry (arg2), a1=[sym(xf86DoConfigurePass1)], a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=0x2.
  The `jal` at 0x10043898 calls XNFrealloc [0x100de080] with a0=[0x1024069c], a1=?, a2=?, a3=?, a7=[0x1024069c].
  The `jalr` at 0x100438e8 calls memmove with a0=ret(XNFrealloc)+628, a1=ret(XNFrealloc), a2=?, a3=[0x102406a0], a7=ret(XNFrealloc).
  The `jalr` at 0x10043928 calls memset with a0=?, a1=0x0, a2=0x274, a3=?.
  The `jalr` at 0x10043954 calls strlen with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x10043964 calls XNFalloc [0x100dddc0] with a0=ret(strlen)+1, a1=?, a2=?, a3=?.
  The `jalr` at 0x10043988 calls tolower with a0=[a0]:1, a1=?, a2=?, a3=?.
  The `jalr` at 0x100439b8 calls tolower with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10043a20 calls (unknown callee) with a0=?, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x10043a5c calls xf86IsPrimaryIsa [0x1005a040] with a0=a0 at entry (arg0), a1=[sym(xf86DoConfigurePass1)], a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=0x2, a5=0x1.
  The `jal` at 0x10043b0c calls (unnamed) [0x10043680] with a0=?, a1=?, a2=sp-112, a3=sp-108, a4=sp-104.
  The `jalr` at 0x10043b3c calls strlen with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10043b84 calls strlen with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10043b98 calls XNFalloc [0x100dddc0] with a0=(ret(strlen) + ret(strlen))+2, a1=?, a2=?, a3=?.
  The `jalr` at 0x10043c08 calls sprintf with a0=ret(XNFalloc), a1=0x10240f00, a2=?, a3=?.
  The `jal` at 0x10043c74 calls XNFalloc [0x100dddc0] with a0=0x10, a1=?, a2=?, a3=?.
  The `jalr` at 0x10043ca4 calls sprintf with a0=ret(XNFalloc), a1=0x101f71d8, a2=?, a3=?.
  The `jal` at 0x10043d34 calls FatalError [0x100de400] with a0=0x101f7120, a1=?, a2=?, a3=?.
  The `bne` branch at 0x1004375c targets 0x100437a8, is taken when at(=[sym(xf86DoProbe)]) != 0, and falls through when at(=[sym(xf86DoProbe)]) == 0.
  The `beq` branch at 0x1004376c targets 0x100437a8, is taken when v1(=[sym(xf86DoConfigure)]) == 0, and falls through when v1(=[sym(xf86DoConfigure)]) != 0.
  The `beq` branch at 0x10043778 targets 0x100437a8, is taken when a1(=[sym(xf86DoConfigurePass1)]) == 0, and falls through when a1(=[sym(xf86DoConfigurePass1)]) != 0.
  The `beq` branch at 0x10043784 targets 0x100437c0, is taken when v0(=a1) == a4(=0x2), and falls through when v0(=a1) != a4(=0x2).
  The `beq` branch at 0x10043790 targets 0x10043a54, is taken when v0(=a1) == a5(=0x1), and falls through when v0(=a1) != a5(=0x1).
  The `blez` branch at 0x100437cc targets 0x1004384c, is taken when t0(=[0x102406a0]) <= 0 (signed), and falls through when t0(=[0x102406a0]) > 0 (signed).
  The `beq` branch at 0x100437f8 targets 0x10043808 and is always taken.
  The `beq` branch at 0x10043800 targets 0x10043850, is taken when v0(?) == t3(?), and falls through when v0(?) != t3(?).
  The `beq` branch at 0x1004380c targets 0x10043800, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bne` branch at 0x10043828 targets 0x10043800, is taken when t8(?) != t9(=[a2+20]), and falls through when t8(?) == t9(=[a2+20]).
  The `bne` branch at 0x10043830 targets 0x10043800, is taken when a7(?) != t0(=[a2+24]), and falls through when a7(?) == t0(=[a2+24]).
  The `bne` branch at 0x10043838 targets 0x10043800, is taken when t2(?) != t1(=[a2+28]), and falls through when t2(?) == t1(=[a2+28]).
  The `beq` branch at 0x10043844 targets 0x100437ac and is always taken.
  The `blez` branch at 0x100438ac targets 0x100438fc, is taken when t8(?) <= 0 (signed), and falls through when t8(?) > 0 (signed).
  The `beq` branch at 0x100438b8 targets 0x100438fc, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x100439a4 targets 0x100439e8, is taken when (v0(=ret(tolower)) & 0xff) == 0, and falls through when (v0(=ret(tolower)) & 0xff) != 0.
  The `bne` branch at 0x100439dc targets 0x100439b4, is taken when (v0(=ret(tolower)) & 0xff) != 0, and falls through when (v0(=ret(tolower)) & 0xff) == 0.
  The `beq` branch at 0x100439f0 targets 0x10043aec, is taken when t0(=a1) == t1(=0x2), and falls through when t0(=a1) != t1(=0x2).
  The `beq` branch at 0x100439f8 targets 0x10043ad4, is taken when t0(=a1) == t3(=0x1), and falls through when t0(=a1) != t3(=0x1).
  The `beq` branch at 0x10043a18 targets 0x10043a34, is taken when t9(=[[([sym(xf86DriverList)] + ([0x102406a4] << 0x2))]+16]) == 0, and falls through when t9(=[[([sym(xf86DriverList)] + ([0x102406a4] << 0x2))]+16]) != 0.
  The `beq` branch at 0x10043a64 targets 0x10043cec, is taken when v0(=ret(xf86IsPrimaryIsa)) == 0, and falls through when v0(=ret(xf86IsPrimaryIsa)) != 0.
  The `blez` branch at 0x10043a6c targets 0x10043d00, is taken when t0(=[0x102406a0]) <= 0 (signed), and falls through when t0(=[0x102406a0]) > 0 (signed).
  The `beq` branch at 0x10043a9c targets 0x10043ac0, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `bnel` branch at 0x10043aa4 targets 0x10043a9c, is taken when a2(?) != a6(?), and falls through when a2(?) == a6(?); its branch-likely delay slot `lw t2,620(a2)` at 0x10043aa8 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x10043ab4 targets 0x10043880 and is always taken.
  The `beq` branch at 0x10043ae4 targets 0x100439fc and is always taken.
  The `beq` branch at 0x10043b18 targets 0x10043d2c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x10043b20 targets 0x10043d20, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `bgez` branch at 0x10043cc8 targets 0x100439fc, is taken when a5(=a3) >= 0 (signed), and falls through when a5(=a3) < 0 (signed).
  The `beq` branch at 0x10043ce4 targets 0x100439fc and is always taken.
  The `beq` branch at 0x10043cf0 targets 0x100437ac and is always taken.
  The `beq` branch at 0x10043d18 targets 0x10043aac and is always taken.
  The `bne` branch at 0x10043d24 targets 0x10043b28, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `beq` branch at 0x10043d3c targets 0x10043b24 and is always taken.
  The return at 0x100437a0 has v0 = 0x0.
  The return at 0x100437b0 has v0 = 0x0.
  The return at 0x10043a4c has v0 = ?.
  The return at 0x10043acc has v0 = 0x0.
  The instructions from 0x100437b8 to 0x100437bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x10043abc to 0x10043abc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x10043cf8 to 0x10043cfc are not reached by any path from the entry, and their branches are not listed.

- `xf86InitialCheckModeForDriver` in `usr/X11R6/bin/XFree86` at 0x10047240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10047240-0x10047724 (1252 bytes).
  It occupies 1252 bytes.
  The `lw` at 0x10047278 loads 4 bytes from a1 (arg1 at entry) +0x18.
  The `lw` at 0x10047284 loads 4 bytes from a1 (arg1 at entry) +0x1c.
  The `lw` at 0x10047294 loads 4 bytes from a1 (arg1 at entry) +0x20.
  The `lw` at 0x100472a4 loads 4 bytes from a1 (arg1 at entry) +0x24.
  The `lw` at 0x100472b4 loads 4 bytes from a1 (arg1 at entry) +0x2c.
  The `lw` at 0x100472c0 loads 4 bytes from a1 (arg1 at entry) +0x30.
  The `lw` at 0x100472d0 loads 4 bytes from a1 (arg1 at entry) +0x34.
  The `lw` at 0x100472e0 loads 4 bytes from a1 (arg1 at entry) +0x38.
  The `lbu` at 0x100472f4 loads 1 byte from a0 (arg0 at entry) +0x45.
  The `lw` at 0x10047308 loads 4 bytes from a0 (arg0 at entry) +0x324.
  The `lw` at 0x10047350 loads 4 bytes from a0 (arg0 at entry) +0x94.
  The `lw` at 0x10047364 loads 4 bytes from a0 (arg0 at entry) +0x98.
  The `lw` at 0x10047448 loads 4 bytes from ret(0x10046000) +0x18.
  The `lw` at 0x10047454 loads 4 bytes from ret(0x10046000) +0x1c.
  The `lw` at 0x10047460 loads 4 bytes from a0 (arg0 at entry) +0x11c.
  The `lw` at 0x10047464 loads 4 bytes from a1 (arg1 at entry) +0x14.
  3 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x48, including `sw` at 0x10047470, `sw` at 0x100476e8, `sw` at 0x1004770c.
  The `lw` at 0x10047478 loads 4 bytes from a0 (arg0 at entry) +0x41c.
  The `lw` at 0x10047494 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x100474c4 loads 4 bytes from a0 (arg0 at entry) +0xd4.
  The `lwc1` at 0x100474d0 loads 4 bytes from a1 (arg1 at entry) +0x94.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x60, including `lw` at 0x100474ec, `lw` at 0x10047598.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x48, including `lw` at 0x100474f0, `lw` at 0x100475a0.
  The `swc1` at 0x10047508 stores 4 bytes to a1 (arg1 at entry) +0x94.
  The `lw` at 0x1004750c loads 4 bytes from [a0+212] +0xc.
  4 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x1004753c, `lwc1` at 0x10047548, `lwc1` at 0x100475fc.
  The `lwc1` at 0x1004757c loads 4 bytes from a1 (arg1 at entry) +0x98.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x7c, including `lw` at 0x10047594, `lw` at 0x1004764c.
  The `swc1` at 0x100475c8 stores 4 bytes to a1 (arg1 at entry) +0x98.
  The `lw` at 0x100475cc loads 4 bytes from [a0+212] +0x50.
  The `lw` at 0x1004763c loads 4 bytes from a1 (arg1 at entry) +0x40.
  The `sw` at 0x10047654 stores 4 bytes to a1 (arg1 at entry) +0x7c.
  The `sw` at 0x10047670 stores 4 bytes to ret(0x10046000) +0x18.
  The `sw` at 0x10047684 stores 4 bytes to ret(0x10046000) +0x1c.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x100476c0, `lw` at 0x100476d0.
  The `lw` at 0x100476c8 loads 4 bytes from (a0 + (ret(xf86GetNearestClock) << 0x2)) +0x124.
  The `jal` at 0x100473c8 calls ErrorF [0x100de600] with a0=0x101f7d18, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10047424 calls (unnamed) [0x10046c80] with a0=a1 at entry (arg1), a1=0x1, a2=[a1+44], a3=a3 at entry (arg3).
  The `jal` at 0x10047438 calls (unnamed) [0x10046000] with a0=a2 at entry (arg2), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x10047490 calls (unknown callee) with a0=[a0+12], a1=a1 at entry (arg1), a2=0x0, a3=0x0.
  The `jal` at 0x100476ac calls xf86GetNearestClock [0x10045a00] with a0=a0 at entry (arg0), a1=[a1+20], a2=?, a3=?, a5=sp-64.
  The `jal` at 0x10047714 calls ErrorF [0x100de600] with a0=0x101f7d58, a1=?, a2=?, a3=[a0+212].
  The `beq` branch at 0x10047260 targets 0x100473c0, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x10047268 targets 0x100473c4, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x10047270 targets 0x100473c4, is taken when a2 == 0, and falls through when a2 != 0.
  The `blez` branch at 0x1004727c targets 0x10047390, is taken when a1(=[a1+24]) <= 0 (signed), and falls through when a1(=[a1+24]) > 0 (signed).
  The `bne` branch at 0x1004728c targets 0x10047390, is taken when a2(=[a1+28]) < a1(=[a1+24]) (signed), and falls through when a2(=[a1+28]) >= a1(=[a1+24]) (signed).
  The `beq` branch at 0x1004729c targets 0x10047390, is taken when a2(=[a1+28]) >= t1(=[a1+32]) (signed), and falls through when a2(=[a1+28]) < t1(=[a1+32]) (signed).
  The `beq` branch at 0x100472ac targets 0x10047390, is taken when t1(=[a1+32]) >= t2(=[a1+36]) (signed), and falls through when t1(=[a1+32]) < t2(=[a1+36]) (signed).
  The `blez` branch at 0x100472b8 targets 0x100473ec, is taken when a2(=[a1+44]) <= 0 (signed), and falls through when a2(=[a1+44]) > 0 (signed).
  The `bne` branch at 0x100472c8 targets 0x100473ec, is taken when t1(=[a1+48]) < a2(=[a1+44]) (signed), and falls through when t1(=[a1+48]) >= a2(=[a1+44]) (signed).
  The `beq` branch at 0x100472d8 targets 0x100473ec, is taken when t1(=[a1+48]) >= t3(=[a1+52]) (signed), and falls through when t1(=[a1+48]) < t3(=[a1+52]) (signed).
  The `beq` branch at 0x100472e8 targets 0x100473ec, is taken when t3(=[a1+52]) >= t1(=[a1+56]) (signed), and falls through when t3(=[a1+52]) < t1(=[a1+56]) (signed).
  The `bne` branch at 0x10047318 targets 0x10047400, is taken when ra(=([a0+804] << 0xd)) < at(?) (signed), and falls through when ra(=([a0+804] << 0xd)) >= at(?) (signed).
  The `blez` branch at 0x10047320 targets 0x10047330, is taken when a4 <= 0 (signed), and falls through when a4 > 0 (signed).
  The `bne` branch at 0x10047328 targets 0x10047408, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `blez` branch at 0x10047330 targets 0x10047340, is taken when a5 <= 0 (signed), and falls through when a5 > 0 (signed).
  The `bne` branch at 0x10047338 targets 0x10047410, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `blez` branch at 0x10047340 targets 0x10047350, is taken when a6 <= 0 (signed), and falls through when a6 > 0 (signed).
  The `bne` branch at 0x10047348 targets 0x100474a8, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `blez` branch at 0x10047354 targets 0x10047364, is taken when a1(=[a0+148]) <= 0 (signed), and falls through when a1(=[a0+148]) > 0 (signed).
  The `bne` branch at 0x1004735c targets 0x100474b0, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `blez` branch at 0x10047370 targets 0x10047418, is taken when a1(=[a0+152]) <= 0 (signed), and falls through when a1(=[a0+152]) > 0 (signed).
  The `beq` branch at 0x1004737c targets 0x1004741c, is taken when a1(=[a0+152]) >= t1(=[a1+56]) (signed), and falls through when a1(=[a0+152]) < t1(=[a1+56]) (signed).
  The `beq` branch at 0x10047384 targets 0x100473a4 and is always taken.
  The `beq` branch at 0x10047400 targets 0x100473a4 and is always taken.
  The `beq` branch at 0x10047408 targets 0x100473a4 and is always taken.
  The `beq` branch at 0x10047410 targets 0x100473a4 and is always taken.
  The `beq` branch at 0x10047440 targets 0x10047660, is taken when v0(=ret(0x10046000)) == 0, and falls through when v0(=ret(0x10046000)) != 0.
  The `blez` branch at 0x1004744c targets 0x10047670, is taken when a4(=[ret(0x10046000)+24]) <= 0 (signed), and falls through when a4(=[ret(0x10046000)+24]) > 0 (signed).
  The `blez` branch at 0x10047458 targets 0x10047680, is taken when a3(=[ret(0x10046000)+28]) <= 0 (signed), and falls through when a3(=[ret(0x10046000)+28]) > 0 (signed).
  The `beq` branch at 0x10047468 targets 0x10047698, is taken when ra(=[a0+284]) == 0, and falls through when ra(=[a0+284]) != 0.
  The `beq` branch at 0x1004747c targets 0x100474c0, is taken when t9(=[a0+1052]) == 0, and falls through when t9(=[a0+1052]) != 0.
  The `beq` branch at 0x10047498 targets 0x100474c4, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `beq` branch at 0x100474a0 targets 0x100473a8 and is always taken.
  The `beq` branch at 0x100474a8 targets 0x100473a4 and is always taken.
  The `beq` branch at 0x100474b0 targets 0x100473a4 and is always taken.
  The `beq` branch at 0x100474c8 targets 0x10047710, is taken when a3(=[a0+212]) == 0, and falls through when a3(=[a0+212]) != 0.
  The `bc1f` branch at 0x100474e4 targets 0x1004750c, is taken when not (f0 <= f8 (c.le.d at 0x100474dc)), and falls through when f0 <= f8 (c.le.d at 0x100474dc).
  The `blez` branch at 0x10047510 targets 0x1004757c, is taken when a4(=[[a0+212]+12]) <= 0 (signed), and falls through when a4(=[[a0+212]+12]) > 0 (signed).
  The `beq` branch at 0x1004752c targets 0x1004753c and is always taken.
  The `beq` branch at 0x10047534 targets 0x10047574, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bc1f` branch at 0x10047558 targets 0x10047534, is taken when not (f9 < f5 (c.lt.d at 0x1004754c)), and falls through when f9 < f5 (c.lt.d at 0x1004754c).
  The `bc1f` branch at 0x1004756c targets 0x10047534, is taken when not (f5 < f10 (c.lt.d at 0x10047564)), and falls through when f5 < f10 (c.lt.d at 0x10047564).
  The `beq` branch at 0x10047574 targets 0x10047668, is taken when v0(?) == a4(=[[a0+212]+12]), and falls through when v0(?) != a4(=[[a0+212]+12]).
  The `bc1f` branch at 0x1004758c targets 0x100475cc, is taken when not (f11 <= f8 (c.le.d at 0x10047584)), and falls through when f11 <= f8 (c.le.d at 0x10047584).
  The `blez` branch at 0x100475d0 targets 0x1004763c, is taken when a4(=[[a0+212]+80]) <= 0 (signed), and falls through when a4(=[[a0+212]+80]) > 0 (signed).
  The `beq` branch at 0x100475ec targets 0x100475fc and is always taken.
  The `beq` branch at 0x100475f4 targets 0x10047634, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bc1f` branch at 0x10047618 targets 0x100475f4, is taken when not (f8 < f5 (c.lt.d at 0x1004760c)), and falls through when f8 < f5 (c.lt.d at 0x1004760c).
  The `bc1f` branch at 0x1004762c targets 0x100475f4, is taken when not (f5 < f9 (c.lt.d at 0x10047624)), and falls through when f5 < f9 (c.lt.d at 0x10047624).
  The `beq` branch at 0x10047634 targets 0x10047690, is taken when v0(?) == a4(=[[a0+212]+80]), and falls through when v0(?) != a4(=[[a0+212]+80]).
  The `beq` branch at 0x10047644 targets 0x10047658, is taken when (a3(=[a1+64]) & 0x10) == 0, and falls through when (a3(=[a1+64]) & 0x10) != 0.
  The `beq` branch at 0x10047658 targets 0x100473a4 and is always taken.
  The `beq` branch at 0x10047660 targets 0x100473a4 and is always taken.
  The `beq` branch at 0x10047668 targets 0x100473a4 and is always taken.
  The `beq` branch at 0x10047674 targets 0x10047454 and is always taken.
  The `beq` branch at 0x10047688 targets 0x1004745c and is always taken.
  The `beq` branch at 0x10047690 targets 0x100473a4 and is always taken.
  The `beq` branch at 0x100476f4 targets 0x10047474, is taken when (a4(?) & 0x4000) == 0, and falls through when (a4(?) & 0x4000) != 0.
  The `beq` branch at 0x10047708 targets 0x10047474 and is always taken.
  The `beq` branch at 0x1004771c targets 0x100473a4 and is always taken.
  The return at 0x1004739c has v0 = 0x3.
  The return at 0x100473b0 has v0 = one of ?, ret(?).
  The return at 0x100473e0 has v0 = -0x1.
  The return at 0x100473f8 has v0 = 0x4.
  The instructions from 0x1004738c to 0x1004738c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x100473b8 to 0x100473bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x100473e8 to 0x100473e8 are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x100474b8 to 0x100474bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1004767c to 0x1004767c are not reached by any path from the entry, and their branches are not listed.

- `xf86CheckModeForDriver` in `usr/X11R6/bin/XFree86` at 0x10047740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10047740-0x10047c1c (1244 bytes).
  It occupies 1244 bytes.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x11c, including `lw` at 0x1004776c, `lw` at 0x10047854, `lw` at 0x10047b60.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x374, including `lw` at 0x10047780, `lw` at 0x10047850.
  The `lw` at 0x1004778c loads 4 bytes from a1 (arg1 at entry) +0x18.
  The `lw` at 0x10047790 loads 4 bytes from a0 (arg0 at entry) +0x9c.
  The `lw` at 0x100477a0 loads 4 bytes from a1 (arg1 at entry) +0x2c.
  The `lw` at 0x100477a4 loads 4 bytes from a0 (arg0 at entry) +0xa0.
  The `lw` at 0x100477b4 loads 4 bytes from a0 (arg0 at entry) +0x94.
  The `lw` at 0x100477c0 loads 4 bytes from a1 (arg1 at entry) +0x24.
  The `lw` at 0x100477d0 loads 4 bytes from a0 (arg0 at entry) +0x98.
  The `lw` at 0x100477e0 loads 4 bytes from a1 (arg1 at entry) +0x38.
  The `lw` at 0x100477fc loads 4 bytes from [a0+884] +0x1c.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0x10047804, `sw` at 0x10047808, `sw` at 0x10047828.
  25 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1004780c, `lw` at 0x10047818, `lw` at 0x10047820.
  5 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x14, including `lw` at 0x10047870, `lw` at 0x10047924, `lw` at 0x100479fc.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x120, including `lw` at 0x10047898, `lw` at 0x10047bfc, `lw` at 0x10047c0c.
  4 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x40, including `lw` at 0x100478c0, `lw` at 0x10047a00, `lw` at 0x10047ae4.
  3 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x44, including `sw` at 0x10047940, `sw` at 0x10047b6c, `sw` at 0x10047c04.
  4 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x48, including `sw` at 0x10047950, `sw` at 0x10047b7c, `sw` at 0x10047b94.
  The `sw` at 0x10047968 stores 4 bytes to a1 (arg1 at entry) +0x90.
  2 such `lw` accesses load 4 bytes from (a0 + (ret(xf86GetNearestClock) << 0x2)) +0x124, including `lw` at 0x10047a84, `lw` at 0x10047b74.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x3c, including `lw` at 0x10047b1c, `lw` at 0x10047bc0.
  3 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x14, including `sw` at 0x10047b70, `sw` at 0x10047ba0, `sw` at 0x10047c08.
  The `jal` at 0x100478a8 calls ErrorF [0x100de600] with a0=0x101f7d98, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x100479dc calls ErrorF [0x100de600] with a0=0x101f7dd8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10047a70 calls xf86GetNearestClock [0x10045a00] with a0=a0 at entry (arg0), a1=[a1+20], a2=?, a3=?, a5=sp-64.
  The `jal` at 0x10047b0c calls ErrorF [0x100de600] with a0=0x101f7e10, a1=[a0+884], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x10047764 targets 0x100478a0, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x10047770 targets 0x10047898, is taken when a0(=[a0+284]) == 0, and falls through when a0(=[a0+284]) != 0.
  The `beq` branch at 0x10047778 targets 0x100479d8, is taken when s2(=a1) == 0, and falls through when s2(=a1) != 0.
  The `beq` branch at 0x10047784 targets 0x10047b08, is taken when a1(=[a0+884]) == 0, and falls through when a1(=[a0+884]) != 0.
  The `bne` branch at 0x10047798 targets 0x10047880, is taken when v1(=[a0+156]) < a2(=[a1+24]) (signed), and falls through when v1(=[a0+156]) >= a2(=[a1+24]) (signed).
  The `bne` branch at 0x100477ac targets 0x10047980, is taken when a3(=[a0+160]) < a4(=[a1+44]) (signed), and falls through when a3(=[a0+160]) >= a4(=[a1+44]) (signed).
  The `blez` branch at 0x100477b8 targets 0x100477d0, is taken when a4(=[a0+148]) <= 0 (signed), and falls through when a4(=[a0+148]) > 0 (signed).
  The `bne` branch at 0x100477c8 targets 0x100479c8, is taken when a4(=[a0+148]) < a5(=[a1+36]) (signed), and falls through when a4(=[a0+148]) >= a5(=[a1+36]) (signed).
  The `blez` branch at 0x100477d8 targets 0x100477f0, is taken when a4(=[a0+152]) <= 0 (signed), and falls through when a4(=[a0+152]) > 0 (signed).
  The `bne` branch at 0x100477e8 targets 0x100479d0, is taken when a4(=[a0+152]) < a7(=[a1+56]) (signed), and falls through when a4(=[a0+152]) >= a7(=[a1+56]) (signed).
  The `beq` branch at 0x100477f0 targets 0x10047858, is taken when a1(=[a0+884]) == 0, and falls through when a1(=[a0+884]) != 0.
  The `beq` branch at 0x100477f8 targets 0x1004781c and is always taken.
  The `blez` branch at 0x10047800 targets 0x100479a8, is taken when a0(?) <= 0 (signed), and falls through when a0(?) > 0 (signed).
  The `beq` branch at 0x10047810 targets 0x10047850, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `blez` branch at 0x1004781c targets 0x10047998, is taken when a1(?) <= 0 (signed), and falls through when a1(?) > 0 (signed).
  The `blez` branch at 0x10047824 targets 0x100479a0, is taken when a0(?) <= 0 (signed), and falls through when a0(?) > 0 (signed).
  The `beq` branch at 0x10047834 targets 0x10047850, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bgtz` branch at 0x10047840 targets 0x10047800, is taken when a1(?) > 0 (signed), and falls through when a1(?) <= 0 (signed).
  The `beq` branch at 0x10047848 targets 0x10047800 and is always taken.
  The `beq` branch at 0x10047858 targets 0x100479ec, is taken when a0(=[a0+284]) == 0, and falls through when a0(=[a0+284]) != 0.
  The `beq` branch at 0x10047864 targets 0x10047910, is taken when a1(=[a0+884]) == 0, and falls through when a1(=[a0+884]) != 0.
  The `beq` branch at 0x1004786c targets 0x100478dc and is always taken.
  The `bne` branch at 0x1004789c targets 0x10047778, is taken when t0(=[a0+288]) != 0, and falls through when t0(=[a0+288]) == 0.
  The `beq` branch at 0x100478b0 targets 0x10047880 and is always taken.
  The `beq` branch at 0x100478c8 targets 0x10047b1c, is taken when (a1(=[a1+64]) & 0x20) == 0, and falls through when (a1(=[a1+64]) & 0x20) != 0.
  The `beq` branch at 0x100478d4 targets 0x100479b4, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `bne` branch at 0x100478f0 targets 0x100478d0, is taken when a4(=[a1+20]) < a2(?) (signed), and falls through when a4(=[a1+20]) >= a2(?) (signed).
  The `bne` branch at 0x100478f8 targets 0x100478d0, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x10047900 targets 0x10047ae4, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x10047908 targets 0x100478c0, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x10047910 targets 0x100479b4, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0x10047998 targets 0x10047824 and is always taken.
  The `beq` branch at 0x100479a0 targets 0x1004782c and is always taken.
  The `beq` branch at 0x100479a8 targets 0x10047808 and is always taken.
  The `beq` branch at 0x100479c8 targets 0x10047884 and is always taken.
  The `beq` branch at 0x100479d0 targets 0x10047884 and is always taken.
  The `beq` branch at 0x100479e4 targets 0x10047880 and is always taken.
  The `beq` branch at 0x100479ec targets 0x10047bd8, is taken when a1(=[a0+884]) == 0, and falls through when a1(=[a0+884]) != 0.
  The `beq` branch at 0x100479f8 targets 0x10047a1c and is always taken.
  The `beq` branch at 0x10047a08 targets 0x10047bc0, is taken when (a1(=[a1+64]) & 0x20) == 0, and falls through when (a1(=[a1+64]) & 0x20) != 0.
  The `beq` branch at 0x10047a14 targets 0x10047b00, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `bne` branch at 0x10047a30 targets 0x10047a10, is taken when t0(=[a1+20]) < a2(?) (signed), and falls through when t0(=[a1+20]) >= a2(?) (signed).
  The `bne` branch at 0x10047a38 targets 0x10047a10, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x10047a40 targets 0x10047b40, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x10047a48 targets 0x10047a00, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x10047ab8 targets 0x10047ba4, is taken when (t2(?) & 0x4000) == 0, and falls through when (t2(?) & 0x4000) != 0.
  The `bne` branch at 0x10047ad4 targets 0x10047b58, is taken when a4(?) < 0x7d2 (signed), and falls through when a4(?) >= 0x7d2 (signed).
  The `beq` branch at 0x10047adc targets 0x10047a10 and is always taken.
  The `bne` branch at 0x10047aec targets 0x100478d0, is taken when (t0(=[a1+64]) & 0x10) != 0, and falls through when (t0(=[a1+64]) & 0x10) == 0.
  The `beq` branch at 0x10047af4 targets 0x10047908 and is always taken.
  The `beq` branch at 0x10047b00 targets 0x10047880 and is always taken.
  The `beq` branch at 0x10047b14 targets 0x10047880 and is always taken.
  The `beq` branch at 0x10047b24 targets 0x100478d0, is taken when a1(=[a1+60]) >= 0x2 (signed), and falls through when a1(=[a1+60]) < 0x2 (signed).
  The `beq` branch at 0x10047b2c targets 0x10047910 and is always taken.
  The `bne` branch at 0x10047b48 targets 0x10047a10, is taken when (a2(=[a1+64]) & 0x10) != 0, and falls through when (a2(=[a1+64]) & 0x10) == 0.
  The `beq` branch at 0x10047b50 targets 0x10047a48 and is always taken.
  The `beq` branch at 0x10047b58 targets 0x10047afc, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `bne` branch at 0x10047b64 targets 0x10047928, is taken when a3(=[a0+284]) != 0, and falls through when a3(=[a0+284]) == 0.
  The `beq` branch at 0x10047b78 targets 0x10047954, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x10047b9c targets 0x10047954 and is always taken.
  The `beq` branch at 0x10047bb0 targets 0x10047ad0 and is always taken.
  The `beq` branch at 0x10047bc8 targets 0x10047a10, is taken when a6(=[a1+60]) >= 0x2 (signed), and falls through when a6(=[a1+60]) < 0x2 (signed).
  The `beq` branch at 0x10047bd0 targets 0x10047a4c and is always taken.
  The `beq` branch at 0x10047bd8 targets 0x10047afc, is taken when a1(=[a0+884]) == 0, and falls through when a1(=[a0+884]) != 0.
  The `beq` branch at 0x10047be4 targets 0x10047bfc, is taken when a7(=[a0+284]) == 0, and falls through when a7(=[a0+284]) != 0.
  The `beq` branch at 0x10047bf4 targets 0x10047928 and is always taken.
  The `beq` branch at 0x10047c14 targets 0x10047954 and is always taken.
  The return at 0x10047890 has v0 = one of ?, 0x12, 0x13.
  The return at 0x10047970 has v0 = 0x0.
  The return at 0x10047990 has v0 = 0xc.
  The return at 0x100479c0 has v0 = 0x11.
  The instructions from 0x10047874 to 0x1004787c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x100478b8 to 0x100478bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x10047978 to 0x1004797c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x100479b0 to 0x100479b0 are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x10047b34 to 0x10047b3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x10047bb8 to 0x10047bbc are not reached by any path from the entry, and their branches are not listed.

- `xf86PruneDriverModes` in `usr/X11R6/bin/XFree86` at 0x10049640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10049640-0x1004970c (204 bytes).
  It occupies 204 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc8, including `lw` at 0x10049644, `lw` at 0x10049684.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x100496a0, `lw` at 0x100496a8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc4, including `lw` at 0x100496c8, `lw` at 0x100496e0.
  The `jal` at 0x100496b0 calls xf86DeleteMode [0x10049540] with a0=a0+200, a1=?, a2=?, a3=?.
  The `jal` at 0x100496d8 calls xf86DeleteMode [0x10049540] with a0=a0+196, a1=[a0+196], a2=?, a3=?.
  The `beq` branch at 0x1004966c targets 0x100496ec, is taken when a1(=[a0+200]) == 0, and falls through when a1(=[a0+200]) != 0.
  The `beq` branch at 0x10049680 targets 0x10049698 and is always taken.
  The `beq` branch at 0x10049688 targets 0x100496c8, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0x10049690 targets 0x100496c8, is taken when s2(=[a0+200]) == s1(?), and falls through when s2(=[a0+200]) != s1(?).
  The `beq` branch at 0x10049698 targets 0x100496f0, is taken when s2(=[a0+200]) == 0, and falls through when s2(=[a0+200]) != 0.
  The `beq` branch at 0x100496a4 targets 0x10049688, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `beq` branch at 0x100496b8 targets 0x100496c8, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `bne` branch at 0x100496c0 targets 0x10049680, is taken when s2(=[a0+200]) != s1(?), and falls through when s2(=[a0+200]) == s1(?).
  The `beq` branch at 0x100496cc targets 0x100496ec, is taken when a1(=[a0+196]) == 0, and falls through when a1(=[a0+196]) != 0.
  The `bne` branch at 0x100496e4 targets 0x100496d8, is taken when a1(=[a0+196]) != 0, and falls through when a1(=[a0+196]) == 0.
  The return at 0x10049704 has v0 = ?.

- `ResourceBrokerInitPci` in `usr/X11R6/bin/XFree86` at 0x1004d0c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1004d0c0-0x1004d1ec (300 bytes).
  It occupies 300 bytes.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x1004d0fc, `lw` at 0x1004d150, `lw` at 0x1004d1b0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1004d120, `lw` at 0x1004d194.
  The `jal` at 0x1004d0f4 calls (unnamed) [0x1004c640] with a0=sp-48, a1=sp-44, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1004d118 calls RemoveOverlaps [0x100557c0] with a0=?, a1=?, a2=0x0, a3=0x1.
  The `jal` at 0x1004d13c calls xf86MsgVerb [0x1003f680] with a0=0x7, a1=0x3, a2=0x101f86e8, a3=?.
  The `jal` at 0x1004d14c calls xf86PrintResList [0x100552c0] with a0=0x3, a1=[a0], a2=?, a3=?.
  The `jal` at 0x1004d160 calls xf86AddRangesToList [0x100555c0] with a0=[0x102406a8], a1=sym(PciAvoid), a2=-0x1, a3=?.
  The `jal` at 0x1004d18c calls RemoveOverlaps [0x100557c0] with a0=?, a1=?, a2=0x0, a3=0x1.
  The `jal` at 0x1004d1ac calls xf86DupResList [0x100551c0] with a0=[a0], a1=?, a2=?, a3=?.
  The `jal` at 0x1004d1c0 calls xf86JoinResLists [0x10054f40] with a0=[0x102406a8], a1=ret(xf86DupResList), a2=?, a3=?.
  The `jal` at 0x1004d1d4 calls xf86JoinResLists [0x10054f40] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1004d100 targets 0x1004d12c, is taken when s0(=[a0]) == 0, and falls through when s0(=[a0]) != 0.
  The `bne` branch at 0x1004d124 targets 0x1004d10c, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0x1004d174 targets 0x1004d1a0, is taken when v0(=ret(xf86AddRangesToList)) == 0, and falls through when v0(=ret(xf86AddRangesToList)) != 0.
  The `bne` branch at 0x1004d198 targets 0x1004d180, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The return at 0x1004d1e4 has v0 = ret(xf86JoinResLists).

- `xf86ReallocatePciResources` in `usr/X11R6/bin/XFree86` at 0x1004dec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1004dec0-0x1004e170 (688 bytes).
  It occupies 688 bytes.
  14 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1004df44, `lw` at 0x1004df64, `lw` at 0x1004df98.
  4 such `lw` accesses load 4 bytes from ret(xf86GetPciInfoForEntity) +0x14, including `lw` at 0x1004df80, `lw` at 0x1004dfb4, `lw` at 0x1004e0ec.
  4 such `lw` accesses load 4 bytes from ret(xf86GetPciInfoForEntity) +0x18, including `lw` at 0x1004df84, `lw` at 0x1004dfb8, `lw` at 0x1004e0f0.
  4 such `lw` accesses load 4 bytes from ret(xf86GetPciInfoForEntity) +0x1c, including `lw` at 0x1004df8c, `lw` at 0x1004dfc4, `lw` at 0x1004e0f8.
  The `sw` at 0x1004e028 stores 4 bytes to ?.
  2 such `lw` accesses load 4 bytes from ret(xf86GetPciInfoForEntity) +0x7c, including `lw` at 0x1004e104, `lw` at 0x1004e134.
  The `lw` at 0x1004e130 loads 4 bytes from ret(xf86GetPciInfoForEntity) +0x80.
  The `jal` at 0x1004dee4 calls xf86GetPciInfoForEntity [0x10051c80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1004df34 calls Xfree [0x100de100] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004df88 calls pciTag [0x1006ea80] with a0=[ret(xf86GetPciInfoForEntity)+20], a1=[ret(xf86GetPciInfoForEntity)+24], a2=[ret(xf86GetPciInfoForEntity)+28], a3=?.
  The `jal` at 0x1004df9c calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `jal` at 0x1004dfc0 calls pciTag [0x1006ea80] with a0=[ret(xf86GetPciInfoForEntity)+20], a1=[ret(xf86GetPciInfoForEntity)+24], a2=[ret(xf86GetPciInfoForEntity)+28], a3=?.
  The `jal` at 0x1004dfe4 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `jal` at 0x1004e018 calls (unnamed) [0x1004d200] with a0=?, a1=0x0, a2=ret(xf86GetPciInfoForEntity), a3=?.
  The `jal` at 0x1004e0f4 calls pciTag [0x1006ea80] with a0=[ret(xf86GetPciInfoForEntity)+20], a1=[ret(xf86GetPciInfoForEntity)+24], a2=[ret(xf86GetPciInfoForEntity)+28], a3=?.
  The `jal` at 0x1004e108 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=[ret(xf86GetPciInfoForEntity)+124], a3=?.
  The `jal` at 0x1004e124 calls pciTag [0x1006ea80] with a0=[ret(xf86GetPciInfoForEntity)+20], a1=[ret(xf86GetPciInfoForEntity)+24], a2=[ret(xf86GetPciInfoForEntity)+28], a3=?.
  The `jal` at 0x1004e148 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `beq` branch at 0x1004def0 targets 0x1004e0e4, is taken when v0(=ret(xf86GetPciInfoForEntity)) == 0, and falls through when v0(=ret(xf86GetPciInfoForEntity)) != 0.
  The `beq` branch at 0x1004df1c targets 0x1004e0a4, is taken when s0(=a1) == 0, and falls through when s0(=a1) != 0.
  The `beq` branch at 0x1004df2c targets 0x1004df44 and is always taken.
  The `beq` branch at 0x1004df3c targets 0x1004e0a8, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x1004df4c targets 0x1004e0ec, is taken when a2(?) == s6(=0x1), and falls through when a2(?) != s6(=0x1).
  The `bne` branch at 0x1004df54 targets 0x1004e000, is taken when a2(?) != s8(=0x2), and falls through when a2(?) == s8(=0x2).
  The `beq` branch at 0x1004df60 targets 0x1004e040 and is always taken.
  The `beq` branch at 0x1004df74 targets 0x1004e000, is taken when s2(?) == s4(=ret(xf86GetPciInfoForEntity)+24), and falls through when s2(?) != s4(=ret(xf86GetPciInfoForEntity)+24).
  The `bne` branch at 0x1004dfa8 targets 0x1004df6c, is taken when a4(?) != v0(=ret(pciBusAddrToHostAddr)), and falls through when a4(?) == v0(=ret(pciBusAddrToHostAddr)).
  The `bne` branch at 0x1004dff0 targets 0x1004df6c, is taken when a4(?) != v0(=ret(pciBusAddrToHostAddr)), and falls through when a4(?) == v0(=ret(pciBusAddrToHostAddr)).
  The `beq` branch at 0x1004e000 targets 0x1004e06c, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `bne` branch at 0x1004e020 targets 0x1004df34, is taken when v0(=ret(0x1004d200)) != 0, and falls through when v0(=ret(0x1004d200)) == 0.
  The `beq` branch at 0x1004e02c targets 0x1004df3c and is always taken.
  The `beq` branch at 0x1004e038 targets 0x1004e000, is taken when a5(?) == s4(=ret(xf86GetPciInfoForEntity)+24), and falls through when a5(?) != s4(=ret(xf86GetPciInfoForEntity)+24).
  The `bne` branch at 0x1004e044 targets 0x1004e034, is taken when a2(?) != t0(?), and falls through when a2(?) == t0(?).
  The `bne` branch at 0x1004e05c targets 0x1004e038, is taken when t1(?) != t2(?), and falls through when t1(?) == t2(?).
  The `bne` branch at 0x1004e064 targets 0x1004e004, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x1004e0e4 targets 0x1004e0c8 and is always taken.
  The `bne` branch at 0x1004e114 targets 0x1004e164, is taken when t3(?) != v0(=ret(pciBusAddrToHostAddr)), and falls through when t3(?) == v0(=ret(pciBusAddrToHostAddr)).
  The `bne` branch at 0x1004e154 targets 0x1004e164, is taken when a4(?) != v0(=ret(pciBusAddrToHostAddr)), and falls through when a4(?) == v0(=ret(pciBusAddrToHostAddr)).
  The `beq` branch at 0x1004e15c targets 0x1004e004 and is always taken.
  The `beq` branch at 0x1004e168 targets 0x1004df7c and is always taken.
  The return at 0x1004e09c has v0 = ?.
  The return at 0x1004e0dc has v0 = one of ?, a1.
  The instructions from 0x1004df68 to 0x1004df68 are not reached by any path from the entry, and their branches are not listed.

- `getValidBIOSBase` in `usr/X11R6/bin/XFree86` at 0x1004e180 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1004e180-0x1004e7cc (1612 bytes).
  It occupies 1612 bytes.
  2 such `lw` accesses load 4 bytes from sym(xf86PciVideoInfo) +0x0, including `lw` at 0x1004e198, `lw` at 0x1004e1dc.
  The `lw` at 0x1004e1b4 loads 4 bytes from [sym(xf86PciVideoInfo)] +0x0.
  60 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1004e1e4, `lw` at 0x1004e1f4, `lw` at 0x1004e1fc.
  The `lw` at 0x1004e260 loads 4 bytes from table(0x101f8780) +0x0.
  The `lw` at 0x1004e434 loads 4 bytes from ret(xf86JoinResLists) +0x8.
  The `sw` at 0x1004e440 stores 4 bytes to ?.
  The `jal` at 0x1004e200 calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e2a4 calls xf86IsSubsetOf [0x10058500] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e2bc calls ChkConflict [0x10054e80] with a0=sp-160, a1=?, a2=0x0, a3=?.
  The `jal` at 0x1004e2d8 calls xf86FreeResList [0x10055140] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e2ec calls xf86FreeResList [0x10055140] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e36c calls xf86DupResList [0x100551c0] with a0=[0x102406a8], a1=?, a2=?, a3=?.
  The `jal` at 0x1004e3e4 calls xf86DupResList [0x100551c0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e3f4 calls xf86JoinResLists [0x10054f40] with a0=?, a1=ret(xf86DupResList), a2=?, a3=?.
  The `jal` at 0x1004e40c calls xf86DupResList [0x100551c0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e41c calls xf86JoinResLists [0x10054f40] with a0=ret(xf86JoinResLists), a1=ret(xf86DupResList), a2=?, a3=?.
  The `jal` at 0x1004e468 calls xf86DupResList [0x100551c0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e478 calls xf86JoinResLists [0x10054f40] with a0=?, a1=ret(xf86DupResList), a2=?, a3=?.
  The `jal` at 0x1004e488 calls xf86DupResList [0x100551c0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e498 calls xf86JoinResLists [0x10054f40] with a0=ret(xf86JoinResLists), a1=ret(xf86DupResList), a2=?, a3=?.
  The `jal` at 0x1004e4a8 calls xf86DupResList [0x100551c0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e4b8 calls xf86JoinResLists [0x10054f40] with a0=ret(xf86JoinResLists), a1=ret(xf86DupResList), a2=?, a3=?.
  The `jal` at 0x1004e4c8 calls xf86DupResList [0x100551c0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e4d8 calls xf86JoinResLists [0x10054f40] with a0=ret(xf86JoinResLists), a1=ret(xf86DupResList), a2=?, a3=?.
  The `jal` at 0x1004e518 calls (unnamed) [0x10052500] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e54c calls xf86DupResList [0x100551c0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e560 calls xf86DupResList [0x100551c0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e5f8 calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e60c calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x2, a2=?, a3=?.
  The `jal` at 0x1004e624 calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e638 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x2, a2=?, a3=?.
  The `jal` at 0x1004e658 calls xf86GetBlock [0x10055900] with a0=0x411, a1=ret(pciBusAddrToHostAddr), a2=?, a3=?, a4=ret(pciBusAddrToHostAddr).
  The `jal` at 0x1004e698 calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?, a4=-0x1.
  The `jal` at 0x1004e6ac calls pciHostAddrToBusAddr [0x1006e640] with a0=ret(pciTag), a1=0x5, a2=?, a3=?.
  The `jal` at 0x1004e6d4 calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=-0x800.
  The `jal` at 0x1004e6e8 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `jal` at 0x1004e700 calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e724 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `jal` at 0x1004e758 calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e76c calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `jal` at 0x1004e784 calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004e7a8 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `beq` branch at 0x1004e1a8 targets 0x1004e6c0, is taken when v0(=[sym(xf86PciVideoInfo)]) == 0, and falls through when v0(=[sym(xf86PciVideoInfo)]) != 0.
  The `beq` branch at 0x1004e1c4 targets 0x1004e218, is taken when s1(=[[sym(xf86PciVideoInfo)]]) == 0, and falls through when s1(=[[sym(xf86PciVideoInfo)]]) != 0.
  The `beq` branch at 0x1004e1d0 targets 0x1004e1f4 and is always taken.
  The `beq` branch at 0x1004e1ec targets 0x1004e218, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `bne` branch at 0x1004e208 targets 0x1004e1d8, is taken when v0(=ret(pciTag)) != s3(=a0), and falls through when v0(=ret(pciTag)) == s3(=a0).
  The `beq` branch at 0x1004e210 targets 0x1004e21c and is always taken.
  The `beq` branch at 0x1004e21c targets 0x1004e318, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `bne` branch at 0x1004e234 targets 0x1004e240, is taken when s2(?) < 0x19 (unsigned), and falls through when s2(?) >= 0x19 (unsigned).
  The `beq` branch at 0x1004e258 targets 0x1004e26c, is taken when a0(=a1+2) >= 0x9 (unsigned), and falls through when a0(=a1+2) < 0x9 (unsigned).
  The `beq` branch at 0x1004e2ac targets 0x1004e2cc, is taken when v0(=ret(xf86IsSubsetOf)) == 0, and falls through when v0(=ret(xf86IsSubsetOf)) != 0.
  The `beq` branch at 0x1004e2c4 targets 0x1004e2d4, is taken when v0(=ret(ChkConflict)) == 0, and falls through when v0(=ret(ChkConflict)) != 0.
  The `beq` branch at 0x1004e34c targets 0x1004e300 and is always taken.
  The `beq` branch at 0x1004e388 targets 0x1004e500, is taken when a2(=[0x102406ac]) == 0, and falls through when a2(=[0x102406ac]) != 0.
  The `beq` branch at 0x1004e398 targets 0x1004e3d0 and is always taken.
  The `beq` branch at 0x1004e3a0 targets 0x1004e4f4, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0x1004e3b0 targets 0x1004e468, is taken when a3(?) == a0(?), and falls through when a3(?) != a0(?).
  The `bne` branch at 0x1004e3bc targets 0x1004e3ac, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0x1004e3c8 targets 0x1004e50c, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `bne` branch at 0x1004e3d4 targets 0x1004e3a0, is taken when a4(?) != a0(?), and falls through when a4(?) == a0(?).
  The `beq` branch at 0x1004e3dc targets 0x1004e548, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x1004e400 targets 0x1004e55c, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x1004e428 targets 0x1004e3a0, is taken when v0(=ret(xf86JoinResLists)) == 0, and falls through when v0(=ret(xf86JoinResLists)) != 0.
  The `beq` branch at 0x1004e430 targets 0x1004e454 and is always taken.
  The `beq` branch at 0x1004e448 targets 0x1004e3a0, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x1004e458 targets 0x1004e440, is taken when a7(?) < -0x1 (unsigned), and falls through when a7(?) >= -0x1 (unsigned).
  The `beq` branch at 0x1004e460 targets 0x1004e440 and is always taken.
  The `bne` branch at 0x1004e4e4 targets 0x1004e3a8, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0x1004e4ec targets 0x1004e3c4 and is always taken.
  The `beq` branch at 0x1004e4f4 targets 0x1004e3c4 and is always taken.
  The `bne` branch at 0x1004e528 targets 0x1004e294, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0x1004e530 targets 0x1004e2d0, is taken when s6(?) == 0, and falls through when s6(?) != 0.
  The `beq` branch at 0x1004e540 targets 0x1004e5ec and is always taken.
  The `beq` branch at 0x1004e554 targets 0x1004e3f0 and is always taken.
  The `beq` branch at 0x1004e568 targets 0x1004e418 and is always taken.
  The `beq` branch at 0x1004e580 targets 0x1004e59c, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x1004e594 targets 0x1004e748, is taken when a0(?) >= s2(?) (unsigned), and falls through when a0(?) < s2(?) (unsigned).
  The `beq` branch at 0x1004e5a8 targets 0x1004e300 and is always taken.
  The `bne` branch at 0x1004e5c4 targets 0x1004e6c8, is taken when a1(?) != a2(?), and falls through when a1(?) == a2(?).
  The `beq` branch at 0x1004e5d8 targets 0x1004e300 and is always taken.
  The `beq` branch at 0x1004e5e4 targets 0x1004e2d4, is taken when s6(?) == 0, and falls through when s6(?) != 0.
  The `beq` branch at 0x1004e684 targets 0x1004e5e0, is taken when a3(?) == a4(=-0x1), and falls through when a3(?) != a4(=-0x1).
  The `beq` branch at 0x1004e6b4 targets 0x1004e2d0 and is always taken.
  The `beq` branch at 0x1004e6c0 targets 0x1004e300 and is always taken.
  The `beq` branch at 0x1004e740 targets 0x1004e35c and is always taken.
  The `beq` branch at 0x1004e7c4 targets 0x1004e35c and is always taken.
  The return at 0x1004e28c has v0 = 0x0.
  The return at 0x1004e310 has v0 = one of ?, 0x0.
  The return at 0x1004e334 has v0 = 0x0.
  The instructions from 0x1004e33c to 0x1004e33c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1004e438 to 0x1004e43c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1004e4fc to 0x1004e4fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1004e6bc to 0x1004e6bc are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x1004e264 uses the jump table at 0x101f8780 with targets 0x1004e340, 0x1004e5b0, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e354.
  The indirect jump at 0x1004e264 uses the jump table at 0x101f8780 with targets 0x1004e340, 0x1004e5b0, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e354.
  The indirect jump at 0x1004e264 uses the jump table at 0x101f8780 with targets 0x1004e340, 0x1004e5b0, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e354.
  The indirect jump at 0x1004e264 uses the jump table at 0x101f8780 with targets 0x1004e340, 0x1004e5b0, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e354.
  The indirect jump at 0x1004e264 uses the jump table at 0x101f8780 with targets 0x1004e340, 0x1004e5b0, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e354.
  The indirect jump at 0x1004e264 uses the jump table at 0x101f8780 with targets 0x1004e340, 0x1004e5b0, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e570, 0x1004e354.

- `xf86GetPciBridgeInfo` in `usr/X11R6/bin/XFree86` at 0x1004ed00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1004ed00-0x1004f594 (2196 bytes).
  It occupies 2196 bytes.
  The `lw` at 0x1004ed38 loads 4 bytes from a0 (arg0 at entry) +0x0.
  28 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1004ed90, `lw` at 0x1004ed9c, `lw` at 0x1004edac.
  13 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x1004eda4, `lbu` at 0x1004edd8, `lbu` at 0x1004ee10.
  11 such `sw` accesses store 4 bytes to ?, including `sw` at 0x1004ee28, `sw` at 0x1004ef60, `sw` at 0x1004f118.
  4 such `sw` accesses store 4 bytes to ret(XNFcalloc) +0xc, including `sw` at 0x1004ee2c, `sw` at 0x1004ef64, `sw` at 0x1004f11c.
  4 such `sw` accesses store 4 bytes to ret(XNFcalloc) +0x10, including `sw` at 0x1004ee30, `sw` at 0x1004ef6c, `sw` at 0x1004f120.
  3 such `sw` accesses store 4 bytes to ret(XNFcalloc) +0x0, including `sw` at 0x1004ee38, `sw` at 0x1004f128, `sw` at 0x1004f1dc.
  3 such `sw` accesses store 4 bytes to ret(XNFcalloc) +0x4, including `sw` at 0x1004ee40, `sw` at 0x1004f130, `sw` at 0x1004f1e4.
  4 such `sw` accesses store 4 bytes to ret(XNFcalloc) +0x18, including `sw` at 0x1004ee48, `sw` at 0x1004ef78, `sw` at 0x1004f138.
  3 such `sw` accesses store 4 bytes to ret(XNFcalloc) +0x38, including `sw` at 0x1004ee60, `sw` at 0x1004f14c, `sw` at 0x1004f200.
  3 such `sw` accesses store 4 bytes to ret(XNFcalloc) +0x8, including `sw` at 0x1004ee6c, `sw` at 0x1004f158, `sw` at 0x1004f1f0.
  The `sw` at 0x1004ef90 stores 4 bytes to ret(XNFcalloc) +0x20.
  The `sw` at 0x1004efa4 stores 4 bytes to ret(XNFcalloc) +0x24.
  The `sw` at 0x1004efc0 stores 4 bytes to ret(XNFcalloc) +0x28.
  The `sw` at 0x1004f1d4 stores 4 bytes to ret(XNFcalloc) +0x14.
  The `sw` at 0x1004f1f8 stores 4 bytes to ret(XNFcalloc) +0x1c.
  12 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x1004f204, `lhu` at 0x1004f210, `lhu` at 0x1004f214.
  The `lw` at 0x1004f590 loads 4 bytes from sym(pciBusInfo) +0x0.
  The `jal` at 0x1004ed28 calls xf86PciBusAccWindowsFromOS [0x10072700] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1004edfc calls xf86MsgVerb [0x1003f680] with a0=0x3, a1=0x6, a2=0x101f88a8, a3=?.
  The `jal` at 0x1004ee14 calls XNFcalloc [0x100ddec0] with a0=0x40, a1=?, a2=?, a3=?.
  The `jal` at 0x1004ee68 calls xf86MsgVerb [0x1003f680] with a0=0x7, a1=0x3, a2=0x101f8890, a3=?, a4=0x8, a5=ret(XNFcalloc)+60.
  The `jal` at 0x1004ef54 calls XNFcalloc [0x100ddec0] with a0=0x40, a1=?, a2=?, a3=0x0.
  The `jal` at 0x1004ef7c calls xf86ExtractTypeFromList [0x10058cc0] with a0=ret(xf86PciBusAccWindowsFromOS), a1=0x2, a2=?, a3=?.
  The `jal` at 0x1004ef94 calls xf86ExtractTypeFromList [0x10058cc0] with a0=ret(xf86PciBusAccWindowsFromOS), a1=0x1, a2=?, a3=?.
  The `jal` at 0x1004efa8 calls xf86ExtractTypeFromList [0x10058cc0] with a0=ret(xf86PciBusAccWindowsFromOS), a1=0x1, a2=?, a3=?.
  The `jal` at 0x1004efc4 calls xf86MsgVerb [0x1003f680] with a0=0x7, a1=0x3, a2=0x101f8878, a3=?.
  The `jal` at 0x1004f0e0 calls xf86FreeResList [0x10055140] with a0=ret(xf86PciBusAccWindowsFromOS), a1=?, a2=?, a3=?.
  The `jal` at 0x1004f104 calls XNFcalloc [0x100ddec0] with a0=0x40, a1=?, a2=?, a3=?.
  The `jal` at 0x1004f154 calls xf86ExtractTypeFromList [0x10058cc0] with a0=ret(xf86PciBusAccWindowsFromOS), a1=0x2, a2=?, a3=?, a6=0x8, a7=ret(XNFcalloc)+60.
  The `jal` at 0x1004f16c calls xf86ExtractTypeFromList [0x10058cc0] with a0=ret(xf86PciBusAccWindowsFromOS), a1=0x1, a2=?, a3=?.
  The `jal` at 0x1004f180 calls xf86ExtractTypeFromList [0x10058cc0] with a0=ret(xf86PciBusAccWindowsFromOS), a1=0x1, a2=?, a3=?.
  The `jal` at 0x1004f19c calls xf86MsgVerb [0x1003f680] with a0=0x7, a1=0x3, a2=0x101f8878, a3=?.
  The `jal` at 0x1004f1b0 calls XNFcalloc [0x100ddec0] with a0=0x40, a1=?, a2=?, a3=?.
  The `jal` at 0x1004f300 calls xf86AddResToList [0x10054fc0] with a0=?, a1=sp-168, a2=-0x1, a3=?.
  The `jal` at 0x1004f3ac calls pciBusAddrToHostAddr [0x1006e580] with a0=?, a1=0x0, a2=?, a3=?.
  The `jal` at 0x1004f3d0 calls pciBusAddrToHostAddr [0x1006e580] with a0=?, a1=0x0, a2=?, a3=0xfffff.
  The `jal` at 0x1004f3f0 calls xf86AddResToList [0x10054fc0] with a0=0x0, a1=sp-168, a2=-0x1, a3=?, a4=0x411.
  The `jal` at 0x1004f468 calls (unnamed) [0x1004e9c0] with a0=ret(XNFcalloc), a1=?, a2=?, a3=?.
  The `jal` at 0x1004f49c calls xf86AddResToList [0x10054fc0] with a0=?, a1=sp-168, a2=-0x1, a3=?.
  The `jal` at 0x1004f4b8 calls pciBusAddrToHostAddr [0x1006e580] with a0=?, a1=0x0, a2=?, a3=?.
  The `jal` at 0x1004f4dc calls pciBusAddrToHostAddr [0x1006e580] with a0=?, a1=0x0, a2=?, a3=0xfffff.
  The `jal` at 0x1004f4fc calls xf86AddResToList [0x10054fc0] with a0=0x0, a1=sp-168, a2=-0x1, a3=?, a4=0x411.
  The `beq` branch at 0x1004ed30 targets 0x1004f404, is taken when s1(=a0) == 0, and falls through when s1(=a0) != 0.
  The `beq` branch at 0x1004ed5c targets 0x1004f420, is taken when v1(=[a0]) == 0, and falls through when v1(=[a0]) != 0.
  The `beq` branch at 0x1004ed74 targets 0x1004ed9c and is always taken.
  The `beq` branch at 0x1004ed80 targets 0x1004ee14, is taken when s4(?) == s7(=0x1), and falls through when s4(?) != s7(=0x1).
  The `beq` branch at 0x1004ed88 targets 0x1004f104, is taken when s4(?) == 0, and falls through when s4(?) != 0.
  The `beq` branch at 0x1004ed94 targets 0x1004ee78, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0x1004eda8 targets 0x1004edb4, is taken when s3(?) >= a3(?) (signed), and falls through when s3(?) < a3(?) (signed).
  The `beq` branch at 0x1004edb4 targets 0x1004edc4, is taken when a1(?) == s2(=0x6), and falls through when a1(?) != s2(=0x6).
  The `bne` branch at 0x1004edc0 targets 0x1004ed90, is taken when a4(?) != s2(=0x6), and falls through when a4(?) == s2(=0x6).
  The `beq` branch at 0x1004edc8 targets 0x1004ee0c, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bne` branch at 0x1004edd0 targets 0x1004ed80, is taken when s4(?) != s6(=0x4), and falls through when s4(?) == s6(=0x4).
  The `beq` branch at 0x1004ede0 targets 0x1004f1ac, is taken when a7(?) == s7(=0x1), and falls through when a7(?) != s7(=0x1).
  The `beq` branch at 0x1004ee04 targets 0x1004ed94 and is always taken.
  The `beq` branch at 0x1004ee0c targets 0x1004edd0 and is always taken.
  The `beq` branch at 0x1004ee70 targets 0x1004ed94 and is always taken.
  The `bltz` branch at 0x1004ee78 targets 0x1004efd4, is taken when s3(?) < 0 (signed), and falls through when s3(?) >= 0 (signed).
  The `beq` branch at 0x1004ee88 targets 0x1004f588 and is always taken.
  The `beq` branch at 0x1004eef4 targets 0x1004efd4, is taken when s1(?) == s4(?), and falls through when s1(?) != s4(?).
  The `beq` branch at 0x1004ef04 targets 0x1004eeec, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x1004ef0c targets 0x1004ef34 and is always taken.
  The `bne` branch at 0x1004ef38 targets 0x1004eeec and is never taken: its condition can never hold for these operands, so execution always falls through.
  The `beq` branch at 0x1004ef40 targets 0x1004ef54 and is always taken.
  The `beq` branch at 0x1004efcc targets 0x1004eef0 and is always taken.
  The `beq` branch at 0x1004efd8 targets 0x1004f000 and is always taken.
  The `beq` branch at 0x1004f000 targets 0x1004f0c0 and is always taken.
  The `beq` branch at 0x1004f1a4 targets 0x1004ed94 and is always taken.
  The `beq` branch at 0x1004f234 targets 0x1004f450, is taken when a4(?) == t0(=0x108e), and falls through when a4(?) != t0(=0x108e).
  The `beq` branch at 0x1004f240 targets 0x1004f35c, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x1004f248 targets 0x1004f510, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x1004f274 targets 0x1004f348, is taken when (t1(?) & 0x4) == 0, and falls through when (t1(?) & 0x4) != 0.
  The `bne` branch at 0x1004f28c targets 0x1004f340, is taken when t9(=0xffff) < s4(?) (unsigned), and falls through when t9(=0xffff) >= s4(?) (unsigned).
  The `bne` branch at 0x1004f294 targets 0x1004f344, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x1004f2ac targets 0x1004f2d0 and is always taken.
  The `bne` branch at 0x1004f2c8 targets 0x1004f33c, is taken when ra(?) < a1(?) (unsigned), and falls through when ra(?) >= a1(?) (unsigned).
  The `beq` branch at 0x1004f334 targets 0x1004f2c0, is taken when a4(=0x100fe) >= a1(?) (unsigned), and falls through when a4(=0x100fe) < a1(?) (unsigned).
  The `beq` branch at 0x1004f34c targets 0x1004f480, is taken when a6(?) >= s4(?) (unsigned), and falls through when a6(?) < s4(?) (unsigned).
  The `beq` branch at 0x1004f35c targets 0x1004ed90, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x1004f36c targets 0x1004f520, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x1004f37c targets 0x1004f4b0, is taken when s4(?) >= a3(?) (unsigned), and falls through when s4(?) < a3(?) (unsigned).
  The `beq` branch at 0x1004f38c targets 0x1004f530, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x1004f39c targets 0x1004ed90, is taken when s4(?) < a3(?) (unsigned), and falls through when s4(?) >= a3(?) (unsigned).
  The `beq` branch at 0x1004f3fc targets 0x1004ed90 and is always taken.
  The `beq` branch at 0x1004f42c targets 0x1004ee7c and is always taken.
  The `bne` branch at 0x1004f454 targets 0x1004f240, is taken when a6(?) != t0(=0x5000), and falls through when a6(?) == t0(=0x5000).
  The `beq` branch at 0x1004f470 targets 0x1004ed94 and is always taken.
  The `beq` branch at 0x1004f4a8 targets 0x1004f354 and is always taken.
  The `beq` branch at 0x1004f508 targets 0x1004f384 and is always taken.
  The `beq` branch at 0x1004f510 targets 0x1004f570, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x1004f518 targets 0x1004f254 and is always taken.
  The `bne` branch at 0x1004f520 targets 0x1004f378, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x1004f528 targets 0x1004f388 and is always taken.
  The `bne` branch at 0x1004f530 targets 0x1004f398, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bne` branch at 0x1004f53c targets 0x1004f398, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0x1004f548 targets 0x1004f398, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `beq` branch at 0x1004f550 targets 0x1004ed94 and is always taken.
  The `bne` branch at 0x1004f570 targets 0x1004f254, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x1004f578 targets 0x1004f254, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x1004f580 targets 0x1004f35c and is always taken.
  The `beq` branch at 0x1004f58c targets 0x1004ef00 and is always taken.
  The return at 0x1004f0fc has v0 = 0x0.
  The return at 0x1004f418 has v0 = 0x0.
  The instructions from 0x1004ed7c to 0x1004ed7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1004ee90 to 0x1004eee8 are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1004ef14 to 0x1004ef30 are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1004ef48 to 0x1004ef50 are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1004efe0 to 0x1004effc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1004f008 to 0x1004f0bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1004f2b4 to 0x1004f2bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1004f434 to 0x1004f44c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1004f478 to 0x1004f47c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1004f558 to 0x1004f56c are not reached by any path from the entry, and their branches are not listed.

- `ValidatePci` in `usr/X11R6/bin/XFree86` at 0x1004f700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1004f700-0x100506ec (4076 bytes).
  It occupies 4076 bytes.
  7 such `lw` accesses load 4 bytes from sym(xf86PciVideoInfo) +0x0, including `lw` at 0x1004f718, `lw` at 0x1004f81c, `lw` at 0x1004f88c.
  The `lw` at 0x1004f760 loads 4 bytes from sym(osRes) +0x0.
  2 such `lw` accesses load 4 bytes from sym(xf86NumScreens) +0x0, including `lw` at 0x1004f768, `lw` at 0x1004f804.
  3 such `lw` accesses load 4 bytes from sym(xf86Screens) +0x0, including `lw` at 0x1004f7a0, `lw` at 0x1004f7d8, `lw` at 0x1004f7e0.
  117 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1004f7a8, `lw` at 0x1004f7ac, `lw` at 0x1004f7c0.
  The `sw` at 0x1004f7dc stores 4 bytes to ret(xf86GetPciInfoForEntity) +0x8c.
  2 such `lw` accesses load 4 bytes from [sym(xf86PciVideoInfo)] +0x0, including `lw` at 0x1004f820, `lw` at 0x1004fde8.
  The `lw` at 0x1004f8c8 loads 4 bytes from sym(xf86NumEntities) +0x0.
  The `lw` at 0x1004f8d8 loads 4 bytes from sym(xf86Entities) +0x0.
  The `lw` at 0x1004fad4 loads 4 bytes from sym(xf86PciInfo) +0x0.
  The `lw` at 0x1004fad8 loads 4 bytes from [sym(xf86PciInfo)] +0x0.
  4 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x1004fb2c, `lhu` at 0x1004fc0c, `lhu` at 0x1004fc8c.
  5 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x1004fbd8, `lbu` at 0x1004fbfc, `lbu` at 0x1004fc24.
  7 such `lw` accesses load 4 bytes from sym(ResRange) +0x0, including `lw` at 0x10050038, `lw` at 0x10050054, `lw` at 0x10050070.
  The `jal` at 0x1004f75c calls xf86DupResList [0x100551c0] with a0=[sym(osRes)], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1004f7cc calls xf86GetPciInfoForEntity [0x10051c80] with a0=?, a1=?, a2=[sym(xf86Screens)], a3=?.
  The `jal` at 0x1004f850 calls xf86FreeResList [0x10055140] with a0=?, a1=?, a2=?, a3=[sym(xf86PciVideoInfo)].
  The `jal` at 0x1004f9c4 calls xf86AddResToList [0x10054fc0] with a0=?, a1=sp-336, a2=-0x1, a3=?.
  The `jal` at 0x1004fa0c calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004fa24 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `jal` at 0x1004fa3c calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004fa64 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `jal` at 0x1004fa84 calls xf86AddResToList [0x10054fc0] with a0=?, a1=sp-336, a2=-0x1, a3=0x411.
  The `jal` at 0x1004fb58 calls pciBusAddrToHostAddr [0x1006e580] with a0=?, a1=0x0, a2=?, a3=?, a7=0x4.
  The `jal` at 0x1004fb88 calls pciBusAddrToHostAddr [0x1006e580] with a0=?, a1=0x0, a2=?, a3=?.
  The `jal` at 0x1004fba8 calls xf86AddResToList [0x10054fc0] with a0=?, a1=sp-336, a2=-0x1, a3=0x411.
  The `jal` at 0x1004fcd0 calls xf86AddResToList [0x10054fc0] with a0=?, a1=sp-336, a2=-0x1, a3=?, a7=0x4.
  The `jal` at 0x1004fd7c calls pciBusAddrToHostAddr [0x1006e580] with a0=?, a1=0x0, a2=?, a3=?, a7=0x4.
  The `jal` at 0x1004fdac calls pciBusAddrToHostAddr [0x1006e580] with a0=?, a1=0x0, a2=?, a3=?.
  The `jal` at 0x1004fe20 calls xf86FreeResList [0x10055140] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004fe2c calls xf86FreeResList [0x10055140] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004fe38 calls xf86FreeResList [0x10055140] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004fe44 calls xf86FreeResList [0x10055140] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004fe78 calls xf86DupResList [0x100551c0] with a0=?, a1=?, a2=?, a3=[sym(xf86PciVideoInfo)].
  The `jal` at 0x1004ff04 calls xf86AddResToList [0x10054fc0] with a0=?, a1=sp-336, a2=-0x1, a3=?.
  The `jal` at 0x1004ff40 calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004ff54 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `jal` at 0x1004ff6c calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1004ff90 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `jal` at 0x1004ffb0 calls xf86AddResToList [0x10054fc0] with a0=?, a1=sp-336, a2=-0x1, a3=?, a4=0x411.
  The `jal` at 0x10050034 calls xf86FindIntersectOfLists [0x10058c00] with a0=?, a1=[sym(ResRange)], a2=?, a3=?.
  The `jal` at 0x10050050 calls xf86FindIntersectOfLists [0x10058c00] with a0=?, a1=[sym(ResRange)], a2=?, a3=?.
  The `jal` at 0x1005006c calls xf86FindIntersectOfLists [0x10058c00] with a0=?, a1=[sym(ResRange)], a2=?, a3=?.
  The `jal` at 0x10050088 calls xf86FindIntersectOfLists [0x10058c00] with a0=?, a1=[sym(ResRange)], a2=?, a3=?.
  The `jal` at 0x100500a4 calls xf86FindIntersectOfLists [0x10058c00] with a0=?, a1=[sym(ResRange)], a2=?, a3=?.
  The `jal` at 0x100500b4 calls xf86JoinResLists [0x10054f40] with a0=?, a1=ret(xf86FindIntersectOfLists), a2=?, a3=?.
  The `jal` at 0x100500d4 calls xf86FindIntersectOfLists [0x10058c00] with a0=?, a1=[sym(ResRange)], a2=?, a3=?.
  The `jal` at 0x100500e4 calls xf86JoinResLists [0x10054f40] with a0=?, a1=ret(xf86FindIntersectOfLists), a2=?, a3=?.
  The `jal` at 0x100500f4 calls xf86DupResList [0x100551c0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10050104 calls xf86JoinResLists [0x10054f40] with a0=?, a1=ret(xf86DupResList), a2=?, a3=?.
  The `jal` at 0x10050114 calls xf86DupResList [0x100551c0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10050124 calls xf86JoinResLists [0x10054f40] with a0=?, a1=ret(xf86DupResList), a2=?, a3=?.
  The `jal` at 0x10050134 calls xf86DupResList [0x100551c0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10050144 calls xf86JoinResLists [0x10054f40] with a0=?, a1=ret(xf86DupResList), a2=?, a3=?.
  The `jal` at 0x10050178 calls (unnamed) [0x10052500] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100501d4 calls xf86IsSubsetOf [0x10058500] with a0=0x412, a1=?, a2=?, a3=?.
  The `jal` at 0x100501ec calls ChkConflict [0x10054e80] with a0=sp-336, a1=?, a2=0x0, a3=?.
  The `jal` at 0x10050210 calls xf86MsgVerb [0x1003f680] with a0=0x6, a1=0x0, a2=0x101f8918, a3=?.
  The `jal` at 0x1005022c calls (unnamed) [0x1004d200] with a0=?, a1=0x0, a2=?, a3=?.
  The `jal` at 0x100502ec calls xf86AddResToList [0x10054fc0] with a0=?, a1=sp-336, a2=-0x1, a3=?.
  The `jal` at 0x1005032c calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10050340 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `jal` at 0x10050358 calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10050380 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `jal` at 0x100503a0 calls xf86AddResToList [0x10054fc0] with a0=?, a1=sp-336, a2=-0x1, a3=?, a4=0x411.
  The `jal` at 0x100503c8 calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100503dc calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `jal` at 0x100503f4 calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10050418 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `jal` at 0x1005044c calls xf86IsSubsetOf [0x10058500] with a0=0x411, a1=(ret(pciBusAddrToHostAddr) << 0x20), a2=?, a3=?, a5=0x411.
  The `jal` at 0x10050464 calls ChkConflict [0x10054e80] with a0=sp-336, a1=?, a2=0x0, a3=?.
  The `jal` at 0x100504a8 calls xf86FreeResList [0x10055140] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100504cc calls ChkConflict [0x10054e80] with a0=sp-336, a1=?, a2=0x0, a3=?.
  The `jal` at 0x100504e8 calls ChkConflict [0x10054e80] with a0=sp-336, a1=?, a2=0x0, a3=?.
  The `jal` at 0x100504fc calls xf86FreeResList [0x10055140] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1005051c calls xf86DupResList [0x100551c0] with a0=[sym(ResRange)], a1=?, a2=?, a3=?.
  The `jal` at 0x1005053c calls xf86IsSubsetOf [0x10058500] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10050554 calls ChkConflict [0x10054e80] with a0=sp-336, a1=?, a2=0x0, a3=?.
  The `jal` at 0x10050578 calls xf86MsgVerb [0x1003f680] with a0=0x6, a1=0x0, a2=0x101f8958, a3=?.
  The `jal` at 0x1005058c calls ChkConflict [0x10054e80] with a0=sp-336, a1=?, a2=0x0, a3=?.
  The `jal` at 0x100505a4 calls xf86MsgVerb [0x1003f680] with a0=0x7, a1=0x3, a2=0x10241080, a3=?.
  The `jal` at 0x100505b4 calls xf86PrintResList [0x100552c0] with a0=0x3, a1=?, a2=?, a3=?.
  The `jal` at 0x100505c8 calls ChkConflict [0x10054e80] with a0=sp-336, a1=?, a2=0x0, a3=?.
  The `jal` at 0x100505e0 calls xf86MsgVerb [0x1003f680] with a0=0x7, a1=0x3, a2=0x10241088, a3=?.
  The `jal` at 0x100505f0 calls xf86PrintResList [0x100552c0] with a0=0x3, a1=?, a2=?, a3=?.
  The `jal` at 0x10050604 calls ChkConflict [0x10054e80] with a0=sp-336, a1=?, a2=0x0, a3=?.
  The `jal` at 0x1005061c calls xf86MsgVerb [0x1003f680] with a0=0x7, a1=0x3, a2=0x10241090, a3=?.
  The `jal` at 0x1005062c calls xf86PrintResList [0x100552c0] with a0=0x3, a1=?, a2=?, a3=?.
  The `jal` at 0x1005064c calls ChkConflict [0x10054e80] with a0=sp-336, a1=?, a2=0x0, a3=?.
  The `jal` at 0x10050668 calls ChkConflict [0x10054e80] with a0=sp-336, a1=?, a2=0x0, a3=?.
  The `jal` at 0x1005067c calls xf86FreeResList [0x10055140] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1005069c calls ChkConflict [0x10054e80] with a0=sp-336, a1=?, a2=0x0, a3=?.
  The `jal` at 0x100506b8 calls ChkConflict [0x10054e80] with a0=sp-336, a1=?, a2=0x0, a3=?.
  The `jal` at 0x100506cc calls xf86FreeResList [0x10055140] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1004f744 targets 0x1004f878, is taken when at(=[sym(xf86PciVideoInfo)]) == 0, and falls through when at(=[sym(xf86PciVideoInfo)]) != 0.
  The `blez` branch at 0x1004f788 targets 0x1004f818, is taken when a3(=[sym(xf86NumScreens)]) <= 0 (signed), and falls through when a3(=[sym(xf86NumScreens)]) > 0 (signed).
  The `blez` branch at 0x1004f7b0 targets 0x1004f808, is taken when a4(?) <= 0 (signed), and falls through when a4(?) > 0 (signed).
  The `beq` branch at 0x1004f7d4 targets 0x1004f7e4, is taken when v0(=ret(xf86GetPciInfoForEntity)) == 0, and falls through when v0(=ret(xf86GetPciInfoForEntity)) != 0.
  The `bne` branch at 0x1004f7f8 targets 0x1004f7c0, is taken when s1(?) < a3(?) (signed), and falls through when s1(?) >= a3(?) (signed).
  The `bne` branch at 0x1004f810 targets 0x1004f7a4, is taken when s8(?) < a3(=[sym(xf86NumScreens)]) (signed), and falls through when s8(?) >= a3(=[sym(xf86NumScreens)]) (signed).
  The `beq` branch at 0x1004f824 targets 0x1004fad0, is taken when s1(=[[sym(xf86PciVideoInfo)]]) == 0, and falls through when s1(=[[sym(xf86PciVideoInfo)]]) != 0.
  The `beq` branch at 0x1004f844 targets 0x1004f8ac and is always taken.
  The `beq` branch at 0x1004f8a4 targets 0x1004fad0, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0x1004f8b0 targets 0x1004fa94, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x1004f8b8 targets 0x1004f890, is taken when a0(?) == t8(=0x3), and falls through when a0(?) != t8(=0x3).
  The `beq` branch at 0x1004f8c0 targets 0x1004faa8, is taken when a0(?) == t9(=0x4), and falls through when a0(?) != t9(=0x4).
  The `blez` branch at 0x1004f8cc targets 0x1004fac0, is taken when a0(=[sym(xf86NumEntities)]) <= 0 (signed), and falls through when a0(=[sym(xf86NumEntities)]) > 0 (signed).
  The `beq` branch at 0x1004f8e0 targets 0x1004f8f4 and is always taken.
  The `beq` branch at 0x1004f8ec targets 0x1004f980, is taken when a1(?) == a7(=([sym(xf86Entities)] + ([sym(xf86NumEntities)] << 0x2))), and falls through when a1(?) != a7(=([sym(xf86Entities)] + ([sym(xf86NumEntities)] << 0x2))).
  The `beq` branch at 0x1004f8fc targets 0x1004f954, is taken when a4(?) == s0(=0x2), and falls through when a4(?) != s0(=0x2).
  The `beq` branch at 0x1004f908 targets 0x1004f980, is taken when a1(?) == a7(=([sym(xf86Entities)] + ([sym(xf86NumEntities)] << 0x2))), and falls through when a1(?) != a7(=([sym(xf86Entities)] + ([sym(xf86NumEntities)] << 0x2))).
  The `bne` branch at 0x1004f918 targets 0x1004f8e8, is taken when a5(?) != s0(=0x2), and falls through when a5(?) == s0(=0x2).
  The `bne` branch at 0x1004f924 targets 0x1004f8e8, is taken when t0(?) != t1(?), and falls through when t0(?) == t1(?).
  The `bne` branch at 0x1004f934 targets 0x1004f8e8, is taken when t2(?) != t3(?), and falls through when t2(?) == t3(?).
  The `bne` branch at 0x1004f944 targets 0x1004f8ec, is taken when t8(?) != t9(?), and falls through when t8(?) == t9(?).
  The `beq` branch at 0x1004f94c targets 0x1004f980 and is always taken.
  The `bne` branch at 0x1004f958 targets 0x1004f904, is taken when ra(?) != at(?), and falls through when ra(?) == at(?).
  The `bne` branch at 0x1004f968 targets 0x1004f904, is taken when v1(?) != a4(?), and falls through when v1(?) == a4(?).
  The `bne` branch at 0x1004f978 targets 0x1004f908, is taken when a5(?) != t0(?), and falls through when a5(?) == t0(?).
  The `bne` branch at 0x1004f980 targets 0x1004f890, is taken when a2(?) != a0(=[sym(xf86NumEntities)]), and falls through when a2(?) == a0(=[sym(xf86NumEntities)]).
  The `beq` branch at 0x1004f98c targets 0x1004f9e0 and is always taken.
  The `beq` branch at 0x1004f9d8 targets 0x1004f88c, is taken when a0(?) == t3(?), and falls through when a0(?) != t3(?).
  The `bne` branch at 0x1004f9e4 targets 0x1004f994, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x1004f9f0 targets 0x1004f9d4, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x1004fa8c targets 0x1004f9d0 and is always taken.
  The `bne` branch at 0x1004fa98 targets 0x1004f8b8, is taken when a4(?) != s4(=0x1), and falls through when a4(?) == s4(=0x1).
  The `beq` branch at 0x1004faa0 targets 0x1004f894 and is always taken.
  The `bne` branch at 0x1004faac targets 0x1004f8c8, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x1004fab4 targets 0x1004f894 and is always taken.
  The `bne` branch at 0x1004fac0 targets 0x1004f894, is taken when a0(=[sym(xf86NumEntities)]) != 0, and falls through when a0(=[sym(xf86NumEntities)]) == 0.
  The `beq` branch at 0x1004fac8 targets 0x1004f988 and is always taken.
  The `beq` branch at 0x1004fae8 targets 0x1004fde8, is taken when a6(=[[sym(xf86PciInfo)]]) == 0, and falls through when a6(=[[sym(xf86PciInfo)]]) != 0.
  The `beq` branch at 0x1004fb0c targets 0x1004fbd8 and is always taken.
  The `beq` branch at 0x1004fb24 targets 0x1004fbc4, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x1004fb34 targets 0x1004fbc4, is taken when (a4(?) & 0x2) == 0, and falls through when (a4(?) & 0x2) != 0.
  The `beq` branch at 0x1004fb3c targets 0x1004fbc4, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x1004fbd0 targets 0x1004fde0, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x1004fbdc targets 0x1004fbc4, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x1004fbe4 targets 0x1004fbc8, is taken when a2(?) == a6(=0x3), and falls through when a2(?) != a6(=0x3).
  The `beq` branch at 0x1004fbec targets 0x1004fc24, is taken when a2(?) == a7(=0x4), and falls through when a2(?) != a7(=0x4).
  The `beq` branch at 0x1004fbf4 targets 0x1004fc40, is taken when a2(?) == t1(=0xb), and falls through when a2(?) != t1(=0xb).
  The `bne` branch at 0x1004fc04 targets 0x1004fbc8, is taken when (t2(?) & 0x7f) != 0, and falls through when (t2(?) & 0x7f) == 0.
  The `beq` branch at 0x1004fc14 targets 0x1004fbc4, is taken when (t3(?) & 0x3) == 0, and falls through when (t3(?) & 0x3) != 0.
  The `beq` branch at 0x1004fc1c targets 0x1004fc78 and is always taken.
  The `bne` branch at 0x1004fc28 targets 0x1004fbf4, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `beq` branch at 0x1004fc30 targets 0x1004fbc8 and is always taken.
  The `bne` branch at 0x1004fc48 targets 0x1004fbfc, is taken when t9(?) != ra(=0x40), and falls through when t9(?) == ra(=0x40).
  The `beq` branch at 0x1004fc50 targets 0x1004fbc8 and is always taken.
  The `beq` branch at 0x1004fc70 targets 0x1004fb14, is taken when s0(?) >= a2(?) (unsigned), and falls through when s0(?) < a2(?) (unsigned).
  The `beq` branch at 0x1004fc7c targets 0x1004fc5c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x1004fc84 targets 0x1004fcf0, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x1004fc9c targets 0x1004fd24, is taken when a1(?) < 0x1 (unsigned), and falls through when a1(?) >= 0x1 (unsigned).
  The `beq` branch at 0x1004fca4 targets 0x1004fc5c, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x1004fcac targets 0x1004fc5c, is taken when s2(?) != 0, and falls through when s2(?) == 0.
  The `bne` branch at 0x1004fcb4 targets 0x1004fc5c, is taken when s1(?) != 0, and falls through when s1(?) == 0.
  The `beq` branch at 0x1004fce8 targets 0x1004fc58 and is always taken.
  The `beq` branch at 0x1004fcf0 targets 0x1004fd4c, is taken when a4(?) == a7(=0x4), and falls through when a4(?) != a7(=0x4).
  The `bne` branch at 0x1004fd08 targets 0x1004fd5c, is taken when s3(?) < 0x1 (unsigned), and falls through when s3(?) >= 0x1 (unsigned).
  The `beq` branch at 0x1004fd10 targets 0x1004fd1c, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x1004fd1c targets 0x1004fca4 and is always taken.
  The `beq` branch at 0x1004fd44 targets 0x1004fca4 and is always taken.
  The `beq` branch at 0x1004fd54 targets 0x1004fd10 and is always taken.
  The `beq` branch at 0x1004fdd8 targets 0x1004fd10 and is always taken.
  The `beq` branch at 0x1004fdec targets 0x1004f84c, is taken when a2(=[[sym(xf86PciVideoInfo)]]) == 0, and falls through when a2(=[[sym(xf86PciVideoInfo)]]) != 0.
  The `beq` branch at 0x1004fdf8 targets 0x1004fe64 and is always taken.
  The `beq` branch at 0x1004fe5c targets 0x1004f84c, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x1004fe68 targets 0x1004fe54, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x1004fe94 targets 0x1004ffc0, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x1004fea0 targets 0x1004fec4 and is always taken.
  The `beq` branch at 0x1004febc targets 0x1004ffc0, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x1004fec8 targets 0x1004feac, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x1004fed0 targets 0x1004ff1c and is always taken.
  The `beq` branch at 0x1004ff14 targets 0x1004fea8, is taken when s0(?) == s2(?), and falls through when s0(?) != s2(?).
  The `bne` branch at 0x1004ff20 targets 0x1004fed8, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x1004ff2c targets 0x1004ff10, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x1004ffb8 targets 0x1004ff10 and is always taken.
  The `beq` branch at 0x1004ffcc targets 0x1005050c, is taken when a5(=[0x102406ac]) == 0, and falls through when a5(=[0x102406ac]) != 0.
  The `beq` branch at 0x1004ffdc targets 0x10050014 and is always taken.
  The `beq` branch at 0x1004ffe4 targets 0x10050008, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0x1004fff4 targets 0x100500f4, is taken when a7(?) == a6(?), and falls through when a7(?) != a6(?).
  The `bne` branch at 0x10050000 targets 0x1004fff0, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0x1005000c targets 0x10050160, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `bne` branch at 0x1005001c targets 0x1004ffe4, is taken when t0(?) != t1(?), and falls through when t0(?) == t1(?).
  The `beq` branch at 0x10050028 targets 0x10050040, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x10050044 targets 0x1005005c, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x10050060 targets 0x10050078, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x1005007c targets 0x10050094, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x10050098 targets 0x100500c0, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x100500c4 targets 0x1004ffe4, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x100500ec targets 0x1004ffe4 and is always taken.
  The `bne` branch at 0x10050150 targets 0x1004ffec, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0x10050158 targets 0x1005000c and is always taken.
  The `beq` branch at 0x10050160 targets 0x10050514, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x10050190 targets 0x100506e0 and is always taken.
  The `beq` branch at 0x1005019c targets 0x100503b0, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x100501dc targets 0x100501f8, is taken when v0(=ret(xf86IsSubsetOf)) == 0, and falls through when v0(=ret(xf86IsSubsetOf)) != 0.
  The `beq` branch at 0x100501f4 targets 0x100504c0, is taken when v0(=ret(ChkConflict)) == 0, and falls through when v0(=ret(ChkConflict)) != 0.
  The `beq` branch at 0x10050238 targets 0x1005049c, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0x10050280 targets 0x1004fe00, is taken when at(?) == v1(=0x6), and falls through when at(?) != v1(=0x6).
  The `beq` branch at 0x10050298 targets 0x10050494, is taken when a2(?) >= 0x5 (signed), and falls through when a2(?) < 0x5 (signed).
  The `beq` branch at 0x100502b0 targets 0x10050304 and is always taken.
  The `beq` branch at 0x100502fc targets 0x10050198, is taken when s0(?) == a7(?), and falls through when s0(?) != a7(?).
  The `bne` branch at 0x10050308 targets 0x100502c0, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x10050314 targets 0x100502f8, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x100503a8 targets 0x100502f8 and is always taken.
  The `beq` branch at 0x100503b4 targets 0x10050480, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x10050438 targets 0x10050470, is taken when (a4(?) & 0x8) == 0, and falls through when (a4(?) & 0x8) != 0.
  The `beq` branch at 0x10050454 targets 0x10050470, is taken when v0(=ret(xf86IsSubsetOf)) == 0, and falls through when v0(=ret(xf86IsSubsetOf)) != 0.
  The `beq` branch at 0x1005046c targets 0x10050640, is taken when v0(=ret(ChkConflict)) == 0, and falls through when v0(=ret(ChkConflict)) != 0.
  The `beq` branch at 0x10050474 targets 0x1005052c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0x10050484 targets 0x10050234, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x1005048c targets 0x10050234 and is always taken.
  The `beq` branch at 0x10050494 targets 0x10050198 and is always taken.
  The `bne` branch at 0x1005049c targets 0x10050244, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `beq` branch at 0x100504b0 targets 0x10050244 and is always taken.
  The `bne` branch at 0x100504d4 targets 0x100501fc, is taken when v0(=ret(ChkConflict)) != 0, and falls through when v0(=ret(ChkConflict)) == 0.
  The `bne` branch at 0x100504f0 targets 0x100501fc, is taken when v0(=ret(ChkConflict)) != 0, and falls through when v0(=ret(ChkConflict)) == 0.
  The `beq` branch at 0x10050504 targets 0x10050244 and is always taken.
  The `beq` branch at 0x10050524 targets 0x10050164 and is always taken.
  The `beq` branch at 0x10050544 targets 0x10050560, is taken when v0(=ret(xf86IsSubsetOf)) == 0, and falls through when v0(=ret(xf86IsSubsetOf)) != 0.
  The `beq` branch at 0x1005055c targets 0x10050690, is taken when v0(=ret(ChkConflict)) == 0, and falls through when v0(=ret(ChkConflict)) != 0.
  The `beq` branch at 0x10050594 targets 0x100505bc, is taken when v0(=ret(ChkConflict)) == 0, and falls through when v0(=ret(ChkConflict)) != 0.
  The `beq` branch at 0x100505d0 targets 0x100505f8, is taken when v0(=ret(ChkConflict)) == 0, and falls through when v0(=ret(ChkConflict)) != 0.
  The `beq` branch at 0x1005060c targets 0x1005047c, is taken when v0(=ret(ChkConflict)) == 0, and falls through when v0(=ret(ChkConflict)) != 0.
  The `beq` branch at 0x10050634 targets 0x10050480 and is always taken.
  The `bne` branch at 0x10050654 targets 0x10050474, is taken when v0(=ret(ChkConflict)) != 0, and falls through when v0(=ret(ChkConflict)) == 0.
  The `bne` branch at 0x10050670 targets 0x10050474, is taken when v0(=ret(ChkConflict)) != 0, and falls through when v0(=ret(ChkConflict)) == 0.
  The `beq` branch at 0x10050688 targets 0x10050470 and is always taken.
  The `bne` branch at 0x100506a4 targets 0x10050564, is taken when v0(=ret(ChkConflict)) != 0, and falls through when v0(=ret(ChkConflict)) == 0.
  The `bne` branch at 0x100506c0 targets 0x10050564, is taken when v0(=ret(ChkConflict)) != 0, and falls through when v0(=ret(ChkConflict)) == 0.
  The `beq` branch at 0x100506d8 targets 0x1005047c and is always taken.
  The `beq` branch at 0x100506e4 targets 0x1005028c and is always taken.
  The return at 0x1004f884 has v0 = one of ?, ret(xf86FreeResList).
  The instructions from 0x1004fabc to 0x1004fabc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1004fc38 to 0x1004fc3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x100502b8 to 0x100502bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x100504b8 to 0x100504bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1005063c to 0x1005063c are not reached by any path from the entry, and their branches are not listed.

- `GetImplicitPciResources` in `usr/X11R6/bin/XFree86` at 0x10050700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10050700-0x100508c4 (452 bytes).
  It occupies 452 bytes.
  8 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10050784, `lw` at 0x1005078c, `lw` at 0x10050790.
  7 such `sw` accesses store 4 bytes to ?, including `sw` at 0x10050788, `sw` at 0x1005079c, `sw` at 0x100507ac.
  2 such `lw` accesses load 4 bytes from ret(xf86GetPciInfoForEntity) +0x14, including `lw` at 0x100507e8, `lw` at 0x1005081c.
  2 such `lw` accesses load 4 bytes from ret(xf86GetPciInfoForEntity) +0x18, including `lw` at 0x100507ec, `lw` at 0x10050820.
  2 such `lw` accesses load 4 bytes from ret(xf86GetPciInfoForEntity) +0x1c, including `lw` at 0x100507f0, `lw` at 0x10050828.
  The `jal` at 0x1005071c calls xf86GetPciInfoForEntity [0x10051c80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10050778 calls XNFrealloc [0x100de080] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100507dc calls XNFrealloc [0x100de080] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100507f4 calls pciTag [0x1006ea80] with a0=[ret(xf86GetPciInfoForEntity)+20], a1=[ret(xf86GetPciInfoForEntity)+24], a2=[ret(xf86GetPciInfoForEntity)+28], a3=?.
  The `jal` at 0x10050808 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `jal` at 0x10050824 calls pciTag [0x1006ea80] with a0=[ret(xf86GetPciInfoForEntity)+20], a1=[ret(xf86GetPciInfoForEntity)+24], a2=[ret(xf86GetPciInfoForEntity)+28], a3=?.
  The `jal` at 0x10050848 calls pciBusAddrToHostAddr [0x1006e580] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `jal` at 0x10050864 calls XNFrealloc [0x100de080] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x10050724 targets 0x100508ac, is taken when v0(=ret(xf86GetPciInfoForEntity)) == 0, and falls through when v0(=ret(xf86GetPciInfoForEntity)) != 0.
  The `beq` branch at 0x10050760 targets 0x100507bc and is always taken.
  The `beq` branch at 0x100507b4 targets 0x10050860, is taken when s0(?) == s4(=ret(xf86GetPciInfoForEntity)+24), and falls through when s0(?) != s4(=ret(xf86GetPciInfoForEntity)+24).
  The `bne` branch at 0x100507c0 targets 0x10050768, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x100507c8 targets 0x100507b0, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x10050858 targets 0x100507b0 and is always taken.
  The return at 0x100508a4 has v0 = ret(XNFrealloc).
  The return at 0x100508bc has v0 = 0x0.

- `initPciState` in `usr/X11R6/bin/XFree86` at 0x10050900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10050900-0x10050af4 (500 bytes).
  It occupies 500 bytes.
  3 such `lw` accesses load 4 bytes from sym(xf86PciAccInfo) +0x0, including `lw` at 0x1005091c, `lw` at 0x100509fc, `lw` at 0x10050a20.
  2 such `lw` accesses load 4 bytes from sym(xf86PciVideoInfo) +0x0, including `lw` at 0x10050954, `lw` at 0x100509e0.
  The `lw` at 0x10050960 loads 4 bytes from [sym(xf86PciVideoInfo)] +0x0.
  2 such `sw` accesses store 4 bytes to ret(XNFalloc) +0x7c, including `sw` at 0x100509c0, `sw` at 0x10050ae0.
  The `lw` at 0x100509c8 loads 4 bytes from ret(XNFalloc) +0xc.
  The `lw` at 0x100509d8 loads 4 bytes from ret(XNFalloc) +0x3c.
  The `sw` at 0x100509dc stores 4 bytes to ret(XNFalloc) +0x14.
  10 such `lw` accesses load 4 bytes from ?, including `lw` at 0x100509e8, `lw` at 0x10050a34, `lw` at 0x10050a3c.
  The `sw` at 0x10050a08 stores 4 bytes to sym(xf86PciAccInfo) +0x0.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x10050a10, `sw` at 0x10050a2c.
  The `sw` at 0x10050a38 stores 4 bytes to ret(XNFalloc) +0x0.
  The `sw` at 0x10050a40 stores 4 bytes to ret(XNFalloc) +0x4.
  The `sw` at 0x10050a48 stores 4 bytes to ret(XNFalloc) +0x8.
  The `sw` at 0x10050a64 stores 4 bytes to ret(XNFalloc) +0xc.
  The `sw` at 0x10050a70 stores 4 bytes to ret(XNFalloc) +0x10.
  The `sw` at 0x10050a74 stores 4 bytes to ret(XNFalloc) +0x1c.
  The `sw` at 0x10050a7c stores 4 bytes to ret(XNFalloc) +0x20.
  The `sw` at 0x10050a80 stores 4 bytes to ret(XNFalloc) +0x28.
  The `sw` at 0x10050a84 stores 4 bytes to ret(XNFalloc) +0x2c.
  The `sw` at 0x10050a88 stores 4 bytes to ret(XNFalloc) +0x30.
  The `sw` at 0x10050a8c stores 4 bytes to ret(XNFalloc) +0x38.
  The `sw` at 0x10050aa0 stores 4 bytes to ret(XNFalloc) +0x18.
  The `sw` at 0x10050aa8 stores 4 bytes to ret(XNFalloc) +0x24.
  The `sw` at 0x10050ab0 stores 4 bytes to ret(XNFalloc) +0x34.
  The `jal` at 0x100509cc calls (unnamed) [0x1004be00] with a0=[ret(XNFalloc)+12], a1=ret(XNFalloc)+60, a2=0x1004bb40, a3=?, a5=0x3.
  The `jal` at 0x10050a00 calls XNFrealloc [0x100de080] with a0=[sym(xf86PciAccInfo)], a1=?, a2=?, a3=?.
  The `jal` at 0x10050a18 calls XNFalloc [0x100dddc0] with a0=0x80, a1=?, a2=?, a3=?.
  The `jal` at 0x10050a54 calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10050a68 calls pciLongFunc [0x1006e480] with a0=ret(pciTag), a1=0x0, a2=?, a3=?.
  The `bne` branch at 0x10050948 targets 0x1005098c, is taken when at(=[sym(xf86PciAccInfo)]) != 0, and falls through when at(=[sym(xf86PciAccInfo)]) == 0.
  The `beq` branch at 0x10050958 targets 0x10050990, is taken when a1(=[sym(xf86PciVideoInfo)]) == 0, and falls through when a1(=[sym(xf86PciVideoInfo)]) != 0.
  The `beq` branch at 0x10050964 targets 0x1005098c, is taken when s2(=[[sym(xf86PciVideoInfo)]]) == 0, and falls through when s2(=[[sym(xf86PciVideoInfo)]]) != 0.
  The `beq` branch at 0x10050984 targets 0x100509f8 and is always taken.
  The `beq` branch at 0x100509f0 targets 0x1005098c, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x10050ac0 targets 0x10050ae4, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x10050ac8 targets 0x100509c0, is taken when a1(?) != a5(=0x3), and falls through when a1(?) == a5(=0x3).
  The `bne` branch at 0x10050ad4 targets 0x100509c0, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x10050adc targets 0x100509c4 and is always taken.
  The `bne` branch at 0x10050ae4 targets 0x10050ac8, is taken when a3(?) != t0(=0x1), and falls through when a3(?) == t0(=0x1).
  The `beq` branch at 0x10050aec targets 0x10050adc and is always taken.
  The return at 0x100509b8 has v0 = one of 0x1f5374, ?.

- `initPciBusState` in `usr/X11R6/bin/XFree86` at 0x10050b00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10050b00-0x10050d1c (540 bytes).
  It occupies 540 bytes.
  3 such `sw` accesses store 4 bytes to ret(XNFcalloc) +0x20, including `sw` at 0x10050b6c, `sw` at 0x10050be8, `sw` at 0x10050c94.
  3 such `sw` accesses store 4 bytes to ret(XNFcalloc) +0x0, including `sw` at 0x10050b70, `sw` at 0x10050bf0, `sw` at 0x10050c98.
  5 such `lw` accesses load 4 bytes from sym(xf86BusAccInfo) +0x0, including `lw` at 0x10050b7c, `lw` at 0x10050be4, `lw` at 0x10050c68.
  The `sw` at 0x10050b80 stores 4 bytes to ret(XNFcalloc) +0x1c.
  The `sw` at 0x10050b84 stores 4 bytes to sym(xf86BusAccInfo) +0x0.
  14 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10050b88, `lw` at 0x10050b9c, `lw` at 0x10050bac.
  The `sw` at 0x10050ba0 stores 4 bytes to ret(XNFcalloc) +0x28.
  The `sw` at 0x10050bb8 stores 4 bytes to ret(XNFcalloc) +0x24.
  The `sw` at 0x10050bc4 stores 4 bytes to ret(XNFcalloc) +0x2c.
  2 such `sw` accesses store 4 bytes to ret(XNFcalloc) +0x30, including `sw` at 0x10050bc8, `sw` at 0x10050ce8.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x10050c44, `sw` at 0x10050c5c.
  The `lw` at 0x10050c78 loads 4 bytes from [sym(xf86BusAccInfo)] +0x24.
  The `sw` at 0x10050cb0 stores 4 bytes to ret(XNFcalloc) +0xc.
  The `sw` at 0x10050cb8 stores 4 bytes to ret(XNFcalloc) +0x10.
  The `sw` at 0x10050cc0 stores 4 bytes to ret(XNFcalloc) +0x4.
  The `sw` at 0x10050cc8 stores 4 bytes to ret(XNFcalloc) +0x8.
  The `sw` at 0x10050cfc stores 4 bytes to ret(XNFcalloc) +0x44.
  The `jal` at 0x10050b94 calls XNFcalloc [0x100ddec0] with a0=0x48, a1=?, a2=?, a3=?.
  The `jal` at 0x10050bc0 calls pciTag [0x1006ea80] with a0=0xff, a1=0xff, a2=0xff, a3=?.
  The `jal` at 0x10050cd8 calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10050cec calls pciLongFunc [0x1006e480] with a0=ret(pciTag), a1=0x2, a2=?, a3=?.
  The `jal` at 0x10050d00 calls (unnamed) [0x1004c040] with a0=ret(XNFcalloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0x10050b48 targets 0x10050d10, is taken when at(=[0x102406ac]) == 0, and falls through when at(=[0x102406ac]) != 0.
  The `beq` branch at 0x10050b64 targets 0x10050b90 and is always taken.
  The `beq` branch at 0x10050b8c targets 0x10050bf4, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0x10050bd0 targets 0x10050b6c, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x10050bd8 targets 0x10050c94, is taken when a0(?) == s7(=0x4), and falls through when a0(?) != s7(=0x4).
  The `bne` branch at 0x10050be0 targets 0x10050b80, is taken when a0(?) != s6(=0x1), and falls through when a0(?) == s6(=0x1).
  The `beq` branch at 0x10050bec targets 0x10050b7c and is always taken.
  The `beq` branch at 0x10050c14 targets 0x10050c80, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0x10050c1c targets 0x10050c58 and is always taken.
  The `beq` branch at 0x10050c28 targets 0x10050c48, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x10050c34 targets 0x10050c24, is taken when a6(?) != s2(=0x2), and falls through when a6(?) == s2(=0x2).
  The `bne` branch at 0x10050c3c targets 0x10050c24, is taken when a0(?) != a3(?), and falls through when a0(?) == a3(?).
  The `beq` branch at 0x10050c4c targets 0x10050c80, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `bne` branch at 0x10050c58 targets 0x10050c48, is taken when a7(?) != s2(=0x2), and falls through when a7(?) == s2(=0x2).
  The `bltz` branch at 0x10050c64 targets 0x10050c48, is taken when a3(?) < 0 (signed), and falls through when a3(?) >= 0 (signed).
  The `beq` branch at 0x10050c6c targets 0x10050c48, is taken when v0(=[sym(xf86BusAccInfo)]) == 0, and falls through when v0(=[sym(xf86BusAccInfo)]) != 0.
  The `beq` branch at 0x10050c74 targets 0x10050c34 and is always taken.
  The `beq` branch at 0x10050d08 targets 0x10050b80 and is always taken.
  The `beq` branch at 0x10050d14 targets 0x10050bf8 and is always taken.
  The return at 0x10050c8c has v0 = ?.
  The instructions from 0x10050c7c to 0x10050c7c are not reached by any path from the entry, and their branches are not listed.

- `xf86ClaimPciSlot` in `usr/X11R6/bin/XFree86` at 0x10051200 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10051200-0x100514ac (684 bytes).
  It occupies 684 bytes.
  The `lw` at 0x10051250 loads 4 bytes from sym(xf86PciAccInfo) +0x0.
  The `lw` at 0x1005125c loads 4 bytes from sym(xf86BusAccInfo) +0x0.
  The `lw` at 0x10051280 loads 4 bytes from sym(xf86Entities) +0x0.
  The `lw` at 0x10051294 loads 4 bytes from ([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2)) +0x0.
  The `sw` at 0x1005129c stores 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x0.
  The `sw` at 0x100512a0 stores 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x4.
  The `sw` at 0x100512a8 stores 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x28.
  The `sw` at 0x100512ac stores 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x2c.
  The `sw` at 0x100512b0 stores 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x30.
  The `sw` at 0x100512b4 stores 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x34.
  The `sw` at 0x100512b8 stores 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x20.
  The `sw` at 0x100512c4 stores 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x24.
  The `sw` at 0x100512d4 stores 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x38.
  The `lw` at 0x100512e8 loads 4 bytes from [sym(xf86PciAccInfo)] +0x0.
  The `lw` at 0x100512f8 loads 4 bytes from [[sym(xf86PciAccInfo)]] +0x0.
  13 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1005130c, `lw` at 0x10051318, `lw` at 0x1005131c.
  The `sw` at 0x10051338 stores 4 bytes to ret(XNFcalloc) +0x0.
  4 such `lw` accesses load 4 bytes from [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x38, including `lw` at 0x1005133c, `lw` at 0x10051360, `lw` at 0x1005137c.
  2 such `sw` accesses store 4 bytes to [[([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))]+56] +0x4, including `sw` at 0x10051348, `sw` at 0x1005138c.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x10051358, `sw` at 0x10051384.
  3 such `sw` accesses store 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x40, including `sw` at 0x10051394, `sw` at 0x100513e0, `sw` at 0x10051464.
  The `lw` at 0x1005139c loads 4 bytes from [sym(xf86BusAccInfo)] +0x20.
  The `sw` at 0x10051424 stores 4 bytes to sym(pciSlotClaimed) +0x0.
  The `jal` at 0x10051258 calls xf86CheckPciSlot [0x10051e00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10051270 calls xf86AllocateEntity [0x10052a40] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100512cc calls XNFcalloc [0x100ddec0] with a0=0x14, a1=?, a2=?, a3=?.
  The `jal` at 0x100513f4 calls (unnamed) [0x1004b5c0] with a0=ret(xf86AllocateEntity), a1=?, a2=?, a3=?, a5=sym(AccessNULL).
  The `jal` at 0x10051408 calls pciTag [0x1006ea80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10051418 calls (unnamed) [0x1004c1c0] with a0=ret(pciTag), a1=?, a2=?, a3=?.
  The `jal` at 0x10051494 calls xf86AddDevToEntity [0x10053740] with a0=ret(xf86AllocateEntity), a1=a5 at entry (arg5), a2=?, a3=?.
  The `beq` branch at 0x10051260 targets 0x10051468, is taken when v0(=ret(xf86CheckPciSlot)) == 0, and falls through when v0(=ret(xf86CheckPciSlot)) != 0.
  The `bne` branch at 0x100512c0 targets 0x10051490, is taken when a1(=a5) != 0, and falls through when a1(=a5) == 0.
  The `beq` branch at 0x100512e0 targets 0x10051380, is taken when s6(=[sym(xf86PciAccInfo)]) == 0, and falls through when s6(=[sym(xf86PciAccInfo)]) != 0.
  The `beq` branch at 0x100512ec targets 0x100514a4, is taken when a4(=[[sym(xf86PciAccInfo)]]) == 0, and falls through when a4(=[[sym(xf86PciAccInfo)]]) != 0.
  The `beq` branch at 0x100512f4 targets 0x1005131c and is always taken.
  The `beq` branch at 0x10051304 targets 0x10051364, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x10051310 targets 0x10051364, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x10051320 targets 0x10051300, is taken when t8(?) != s1(=a0), and falls through when t8(?) == s1(=a0).
  The `bne` branch at 0x10051328 targets 0x10051300, is taken when a1(?) != s3(=a1), and falls through when a1(?) == s3(=a1).
  The `bne` branch at 0x10051330 targets 0x10051300, is taken when a2(?) != s5(=a2), and falls through when a2(?) == s5(=a2).
  The `bne` branch at 0x10051354 targets 0x1005136c, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x1005135c targets 0x10051384 and is always taken.
  The `beq` branch at 0x10051364 targets 0x1005135c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0x10051370 targets 0x10051390, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `beq` branch at 0x10051378 targets 0x10051384 and is always taken.
  The `beq` branch at 0x10051390 targets 0x100513e4, is taken when s0(=[sym(xf86BusAccInfo)]) == 0, and falls through when s0(=[sym(xf86BusAccInfo)]) != 0.
  The `beq` branch at 0x10051398 targets 0x100513b0 and is always taken.
  The `beq` branch at 0x100513a4 targets 0x100513e4, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0x100513b0 targets 0x10051454, is taken when a2(?) == s2(=0x2), and falls through when a2(?) != s2(=0x2).
  The `beq` branch at 0x100513bc targets 0x100513e4, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `bne` branch at 0x100513c8 targets 0x100513a0, is taken when a3(?) != s2(=0x2), and falls through when a3(?) == s2(=0x2).
  The `bne` branch at 0x100513d4 targets 0x100513a0, is taken when a4(?) != s1(=a0), and falls through when a4(?) == s1(=a0).
  The `beq` branch at 0x100513dc targets 0x100513a0 and is always taken.
  The `bne` branch at 0x10051458 targets 0x100513b8, is taken when at(?) != s1(=a0), and falls through when at(?) == s1(=a0).
  The `beq` branch at 0x10051460 targets 0x100513b8 and is always taken.
  The `beq` branch at 0x1005149c targets 0x100512cc and is always taken.
  The `beq` branch at 0x100514a4 targets 0x10051384 and is always taken.
  The return at 0x1005144c has v0 = ret(xf86AllocateEntity).
  The return at 0x10051488 has v0 = -0x1.
  The instructions from 0x100512fc to 0x100512fc are not reached by any path from the entry, and their branches are not listed.

- `xf86SetPciVideo` in `usr/X11R6/bin/XFree86` at 0x10051540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10051540-0x100517c4 (644 bytes).
  It occupies 644 bytes.
  The `lw` at 0x10051574 loads 4 bytes from [0x102406b4] +0x0.
  The `lw` at 0x10051584 loads 4 bytes from [0x102406b4] +0x8.
  3 such `lw` accesses load 4 bytes from [0x102406b0] +0x18, including `lw` at 0x10051598, `lw` at 0x100515b8, `lw` at 0x100515c0.
  The `sw` at 0x100515bc stores 4 bytes to [[0x102406b0]+24] +0x14.
  The `lw` at 0x100515c4 loads 4 bytes from [[0x102406b0]+24] +0x18.
  15 such `lw` accesses load 4 bytes from ?, including `lw` at 0x100515d0, `lw` at 0x100515e0, `lw` at 0x100515e4.
  The `sw` at 0x100515dc stores 4 bytes to ?.
  The `lw` at 0x10051634 loads 4 bytes from sym(xf86PciVideoInfo) +0x0.
  2 such `lw` accesses load 4 bytes from sym(xf86PciAccInfo) +0x0, including `lw` at 0x10051640, `lw` at 0x10051698.
  2 such `lw` accesses load 4 bytes from sym(xf86BusAccInfo) +0x0, including `lw` at 0x1005164c, `lw` at 0x100516ec.
  The `lw` at 0x10051658 loads 4 bytes from [sym(xf86PciVideoInfo)] +0x0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x1c, including `lw` at 0x1005167c, `lw` at 0x100516b8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x18, including `lw` at 0x10051680, `lw` at 0x100516c4.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x14, including `lw` at 0x10051688, `lw` at 0x100516ac.
  The `lw` at 0x100516f8 loads 4 bytes from [sym(xf86BusAccInfo)] +0x28.
  The `jalr` at 0x10051580 calls (unknown callee) with a0=[[0x102406b4]+8], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[0x102406b4].
  The `jalr` at 0x100515ac calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10051684 calls xf86CheckPciSlot [0x10051e00] with a0=[a0+20], a1=[a0+24], a2=[a0+28], a3=?, a5=[sym(xf86PciAccInfo)], a6=[sym(xf86BusAccInfo)].
  The `jalr` at 0x10051738 calls (unknown callee) with a0=?, a1=?, a2=a1 at entry (arg1), a3=?, a4=[a0+24], a6=[a0+20], a7=[a0+28].
  The `jalr` at 0x10051774 calls (unknown callee) with a0=?, a1=?, a2=a1 at entry (arg1), a3=?, a5=0x2.
  The `jalr` at 0x100517b4 calls (unknown callee) with a0=?, a1=?, a2=a1 at entry (arg1), a3=?, a4=[a0+24], a6=[a0+20], a7=[a0+28].
  The `bne` branch at 0x10051560 targets 0x10051620, is taken when at(=[0x102406b8]) != 0, and falls through when at(=[0x102406b8]) == 0.
  The `beq` branch at 0x1005156c targets 0x1005158c, is taken when a3(=[0x102406b4]) == 0, and falls through when a3(=[0x102406b4]) != 0.
  The `beq` branch at 0x10051578 targets 0x10051588, is taken when t9(=[[0x102406b4]]) == 0, and falls through when t9(=[[0x102406b4]]) != 0.
  The `beq` branch at 0x10051590 targets 0x100515f4, is taken when a0(=[0x102406b0]) == 0, and falls through when a0(=[0x102406b0]) != 0.
  The `bne` branch at 0x1005159c targets 0x100515d0, is taken when a3(=[[0x102406b0]+24]) != 0, and falls through when a3(=[[0x102406b0]+24]) == 0.
  The `beq` branch at 0x100515a4 targets 0x100515f0 and is always taken.
  The `beq` branch at 0x100515c8 targets 0x100515f0, is taken when a3(=[[[0x102406b0]+24]+24]) == 0, and falls through when a3(=[[[0x102406b0]+24]+24]) != 0.
  The `bne` branch at 0x100515d4 targets 0x100515ac, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x100515e8 targets 0x100515d0, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x100515f4 targets 0x10051634, is taken when s0(=a0) != 0, and falls through when s0(=a0) == 0.
  The `beq` branch at 0x10051604 targets 0x10051620, is taken when a2(=a1) == 0, and falls through when a2(=a1) != 0.
  The `beq` branch at 0x10051638 targets 0x10051620, is taken when a4(=[sym(xf86PciVideoInfo)]) == 0, and falls through when a4(=[sym(xf86PciVideoInfo)]) != 0.
  The `beq` branch at 0x10051644 targets 0x10051620, is taken when a5(=[sym(xf86PciAccInfo)]) == 0, and falls through when a5(=[sym(xf86PciAccInfo)]) != 0.
  The `beq` branch at 0x10051650 targets 0x10051624, is taken when a6(=[sym(xf86BusAccInfo)]) == 0, and falls through when a6(=[sym(xf86BusAccInfo)]) != 0.
  The `beq` branch at 0x1005165c targets 0x1005167c, is taken when a3(=[[sym(xf86PciVideoInfo)]]) == s0(=a0), and falls through when a3(=[[sym(xf86PciVideoInfo)]]) != s0(=a0).
  The `beq` branch at 0x10051664 targets 0x10051624, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0x10051670 targets 0x10051664, is taken when a3(?) != s0(=a0), and falls through when a3(?) == s0(=a0).
  The `beq` branch at 0x1005168c targets 0x10051620, is taken when v0(=ret(xf86CheckPciSlot)) == 0, and falls through when v0(=ret(xf86CheckPciSlot)) != 0.
  The `beq` branch at 0x10051694 targets 0x100516a0 and is always taken.
  The `beq` branch at 0x100516a4 targets 0x10051624, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0x100516c0 targets 0x1005169c, is taken when a1(?) != a6(=[a0+20]), and falls through when a1(?) == a6(=[a0+20]).
  The `bne` branch at 0x100516c8 targets 0x1005169c, is taken when a5(?) != a4(=[a0+24]), and falls through when a5(?) == a4(=[a0+24]).
  The `bne` branch at 0x100516d0 targets 0x100516a0, is taken when t0(?) != a7(=[a0+28]), and falls through when t0(?) == a7(=[a0+28]).
  The `beq` branch at 0x100516e4 targets 0x100517a8, is taken when a2(=a1) == 0, and falls through when a2(=a1) != 0.
  The `bnel` branch at 0x100516f4 targets 0x10051724, is taken when a0(=[sym(xf86BusAccInfo)]) != 0, and falls through when a0(=[sym(xf86BusAccInfo)]) == 0; its branch-likely delay slot `lw a1,40(a0)` at 0x100516f8 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x10051718 targets 0x10051700, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x10051724 targets 0x10051714, is taken when a1(?) != a6(=[a0+20]), and falls through when a1(?) == a6(=[a0+20]).
  The `beq` branch at 0x10051730 targets 0x10051740, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x10051748 targets 0x10051784, is taken when a2(=a1) == a3(=0x1), and falls through when a2(=a1) != a3(=0x1).
  The `beq` branch at 0x10051750 targets 0x10051790, is taken when a2(=a1) == a5(=0x2), and falls through when a2(=a1) != a5(=0x2).
  The `beq` branch at 0x10051758 targets 0x1005179c, is taken when a2(=a1) == a7(=0x3), and falls through when a2(=a1) != a7(=0x3).
  The `beq` branch at 0x10051760 targets 0x10051624, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x1005176c targets 0x10051624, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x1005177c targets 0x10051624 and is always taken.
  The `beq` branch at 0x10051788 targets 0x10051760 and is always taken.
  The `beq` branch at 0x10051794 targets 0x10051760 and is always taken.
  The `beq` branch at 0x100517a0 targets 0x10051760 and is always taken.
  The `beq` branch at 0x100517ac targets 0x10051620, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x100517bc targets 0x10051624 and is always taken.
  The return at 0x10051618 has v0 = ?.
  The return at 0x1005162c has v0 = one of ?, ret(xf86CheckPciSlot), ret(?).
  The return at 0x1005170c has v0 = ret(xf86CheckPciSlot).

- `xf86ParsePciBusString` in `usr/X11R6/bin/XFree86` at 0x10051800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10051800-0x10051a1c (540 bytes).
  It occupies 540 bytes.
  3 such `lbu` accesses load 1 byte from ret(strtok) +0x0, including `lbu` at 0x10051874, `lbu` at 0x100518e0, `lbu` at 0x1005194c.
  3 such `lw` accesses load 4 bytes from sym(__libc_attr) +0x0, including `lw` at 0x10051884, `lw` at 0x100518dc, `lw` at 0x10051948.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10051890, `lw` at 0x100518f4, `lw` at 0x10051960.
  3 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x100518a0, `lbu` at 0x10051904, `lbu` at 0x10051970.
  The `sw` at 0x100518cc stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x1005192c stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0x10051938, `sw` at 0x10051998.
  The `jal` at 0x10051828 calls StringToBusType [0x10052700] with a0=a0 at entry (arg0), a1=sp-64, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10051850 calls Xstrdup [0x100de180] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10051864 calls strtok with a0=ret(Xstrdup), a1=0x10241098, a2=?, a3=?.
  The `jalr` at 0x100518b0 calls atoi with a0=ret(strtok), a1=?, a2=?, a3=?, a7=[sym(__libc_attr)].
  The `jalr` at 0x100518c8 calls strtok with a0=0x0, a1=0x10241098, a2=?, a3=?.
  The `jalr` at 0x10051914 calls atoi with a0=ret(strtok), a1=?, a2=?, a3=?, a7=[sym(__libc_attr)].
  The `jalr` at 0x10051934 calls strtok with a0=0x0, a1=0x10241098, a2=?, a3=?.
  The `jalr` at 0x10051980 calls atoi with a0=ret(strtok), a1=?, a2=?, a3=?, a7=[sym(__libc_attr)].
  The `jal` at 0x10051994 calls Xfree [0x100de100] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100519a4 calls Xfree [0x100de100] with a0=?, a1=?, a2=?, a3=?, a7=[sym(__libc_attr)].
  The `jal` at 0x100519c0 calls Xfree [0x100de100] with a0=?, a1=?, a2=?, a3=?, a7=[sym(__libc_attr)].
  The `jal` at 0x100519d0 calls Xfree [0x100de100] with a0=?, a1=?, a2=?, a3=?, a7=[sym(__libc_attr)].
  The `jal` at 0x100519e4 calls Xfree [0x100de100] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100519f8 calls Xfree [0x100de100] with a0=?, a1=?, a2=?, a3=?, a6=ret(strtok), a7=[sym(__libc_attr)].
  The `jal` at 0x10051a0c calls Xfree [0x100de100] with a0=?, a1=?, a2=?, a3=?, a5=ret(strtok), a7=[sym(__libc_attr)].
  The `beq` branch at 0x10051834 targets 0x1005184c, is taken when v0(=ret(StringToBusType)) == v1(=0x2), and falls through when v0(=ret(StringToBusType)) != v1(=0x2).
  The `beq` branch at 0x1005186c targets 0x100519e4, is taken when v0(=ret(strtok)) == 0, and falls through when v0(=ret(strtok)) != 0.
  The `beq` branch at 0x10051878 targets 0x100519e0, is taken when a5(=[ret(strtok)]:1) == 0, and falls through when a5(=[ret(strtok)]:1) != 0.
  The `beq` branch at 0x10051898 targets 0x100519a4, is taken when (t0(?) & 0x4) == 0, and falls through when (t0(?) & 0x4) != 0.
  The `bne` branch at 0x100518a4 targets 0x10051888, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x100518d8 targets 0x100519f4, is taken when v0(=ret(strtok)) == 0, and falls through when v0(=ret(strtok)) != 0.
  The `beq` branch at 0x100518e4 targets 0x100519f8, is taken when a5(=[ret(strtok)]:1) == 0, and falls through when a5(=[ret(strtok)]:1) != 0.
  The `beq` branch at 0x100518fc targets 0x100519c0, is taken when (t0(?) & 0x4) == 0, and falls through when (t0(?) & 0x4) != 0.
  The `bne` branch at 0x10051908 targets 0x100518ec, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x10051944 targets 0x10051a08, is taken when v0(=ret(strtok)) == 0, and falls through when v0(=ret(strtok)) != 0.
  The `beq` branch at 0x10051950 targets 0x10051a0c, is taken when a2(=[ret(strtok)]:1) == 0, and falls through when a2(=[ret(strtok)]:1) != 0.
  The `beq` branch at 0x10051968 targets 0x100519d0, is taken when (t0(?) & 0x4) == 0, and falls through when (t0(?) & 0x4) != 0.
  The `bne` branch at 0x10051974 targets 0x10051958, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x1005199c targets 0x1005183c and is always taken.
  The `beq` branch at 0x100519c8 targets 0x1005183c and is always taken.
  The `beq` branch at 0x100519d8 targets 0x1005183c and is always taken.
  The `beq` branch at 0x100519ec targets 0x1005183c and is always taken.
  The `beq` branch at 0x10051a00 targets 0x1005183c and is always taken.
  The `beq` branch at 0x10051a14 targets 0x1005183c and is always taken.
  The return at 0x10051844 has v0 = one of 0x0, 0x1.
  The return at 0x100519b8 has v0 = 0x0.

- `xf86CheckPciGAType` in `usr/X11R6/bin/XFree86` at 0x10051b80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10051b80-0x10051c48 (200 bytes).
  It occupies 200 bytes.
  The `lw` at 0x10051b8c loads 4 bytes from abs 0x10240090.
  The `lw` at 0x10051b90 loads 4 bytes from sym(xf86PciInfo) +0x0.
  The `lw` at 0x10051b94 loads 4 bytes from [sym(xf86PciInfo)] +0x0.
  The `lw` at 0x10051ba4 loads 4 bytes from a0 (arg0 at entry) +0x14.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10051ba8, `lw` at 0x10051bb4, `lw` at 0x10051bbc.
  The `lw` at 0x10051bc0 loads 4 bytes from a0 (arg0 at entry) +0x18.
  The `lw` at 0x10051bc4 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  4 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x10051bd8, `lbu` at 0x10051be4, `lbu` at 0x10051bf8.
  The `beq` branch at 0x10051b98 targets 0x10051c20, is taken when a4(=[[sym(xf86PciInfo)]]) == 0, and falls through when a4(=[[sym(xf86PciInfo)]]) != 0.
  The `beq` branch at 0x10051ba0 targets 0x10051bb4 and is always taken.
  The `beq` branch at 0x10051bac targets 0x10051c20, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x10051bb8 targets 0x10051ba8, is taken when t0(?) != a7(=[a0+20]), and falls through when t0(?) == a7(=[a0+20]).
  The `bne` branch at 0x10051bc8 targets 0x10051ba8, is taken when a6(?) != t1(=[a0+24]), and falls through when a6(?) == t1(=[a0+24]).
  The `bnel` branch at 0x10051bd0 targets 0x10051bac, is taken when t1(?) != t0(=[a0+28]), and falls through when t1(?) == t0(=[a0+28]); its branch-likely delay slot `lw a4,4(a5)` at 0x10051bd4 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x10051be8 targets 0x10051c28, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x10051bf0 targets 0x10051c18, is taken when a5(?) != a0(=0x3), and falls through when a5(?) == a0(=0x3).
  The `bne` branch at 0x10051bfc targets 0x10051c18, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `beq` branch at 0x10051c08 targets 0x10051c40, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x10051c10 targets 0x10051c38, is taken when a0(?) == t3(=0x1), and falls through when a0(?) != t3(=0x1).
  The `bne` branch at 0x10051c28 targets 0x10051bf0, is taken when a7(?) != a6(=0x1), and falls through when a7(?) == a6(=0x1).
  The return at 0x10051c18 has v0 = -0x1.
  The return at 0x10051c20 has v0 = -0x1.
  The return at 0x10051c30 has v0 = 0x0.
  The return at 0x10051c38 has v0 = 0x1.
  The return at 0x10051c40 has v0 = 0x0.

- `xf86FindPciDeviceVendor` in `usr/X11R6/bin/XFree86` at 0x10051f80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10051f80-0x10052024 (164 bytes).
  It occupies 164 bytes.
  The `lw` at 0x10051f8c loads 4 bytes from abs 0x10240094.
  The `lw` at 0x10051f90 loads 4 bytes from sym(xf86PciVideoInfo) +0x0.
  The `lw` at 0x10051f94 loads 4 bytes from [sym(xf86PciVideoInfo)] +0x0.
  7 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10051fac, `lw` at 0x10051fc0, `lw` at 0x10051fc4.
  The `beq` branch at 0x10051f9c targets 0x1005201c, is taken when v1(=[[sym(xf86PciVideoInfo)]]) == 0, and falls through when v1(=[[sym(xf86PciVideoInfo)]]) != 0.
  The `beq` branch at 0x10051fa4 targets 0x10051fb8 and is always taken.
  The `beq` branch at 0x10051fb0 targets 0x1005201c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x10051fb8 targets 0x10051fe4, is taken when a3 == v0(?), and falls through when a3 != v0(?).
  The `bne` branch at 0x10051fc8 targets 0x10051fe4, is taken when t2(?) != a0, and falls through when t2(?) == a0.
  The `bne` branch at 0x10051fd0 targets 0x10051fe4, is taken when t0(?) != a1, and falls through when t0(?) == a1.
  The `beq` branch at 0x10051fdc targets 0x1005201c, is taken when (t1(?) & 0xff) == 0, and falls through when (t1(?) & 0xff) != 0.
  The `beq` branch at 0x10051fec targets 0x1005201c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x10051ff4 targets 0x10051fac, is taken when a3 == v0(?), and falls through when a3 != v0(?).
  The `bne` branch at 0x10052000 targets 0x10051fac, is taken when t3(?) != a0, and falls through when t3(?) == a0.
  The `bne` branch at 0x10052008 targets 0x10051fac, is taken when t0(?) != a1, and falls through when t0(?) == a1.
  The `bnel` branch at 0x10052014 targets 0x10051fb0, is taken when (t1(?) & 0xff) != 0, and falls through when (t1(?) & 0xff) == 0; its branch-likely delay slot `lw v0,4(a6)` at 0x10052018 runs only when taken and is annulled on fall-through.
  The return at 0x1005201c has v0 = one of [[sym(xf86PciVideoInfo)]], ?.

- `xf86FindPciClass` in `usr/X11R6/bin/XFree86` at 0x10052040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10052040-0x100520fc (188 bytes).
  It occupies 188 bytes.
  The `lw` at 0x1005204c loads 4 bytes from abs 0x10240094.
  The `lw` at 0x10052050 loads 4 bytes from sym(xf86PciVideoInfo) +0x0.
  The `lw` at 0x10052054 loads 4 bytes from [sym(xf86PciVideoInfo)] +0x0.
  9 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1005206c, `lw` at 0x10052080, `lw` at 0x10052084.
  The `beq` branch at 0x1005205c targets 0x100520f4, is taken when v1(=[[sym(xf86PciVideoInfo)]]) == 0, and falls through when v1(=[[sym(xf86PciVideoInfo)]]) != 0.
  The `beq` branch at 0x10052064 targets 0x10052078 and is always taken.
  The `beq` branch at 0x10052070 targets 0x100520f4, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x10052078 targets 0x100520b0, is taken when a4 == v0(?), and falls through when a4 != v0(?).
  The `bne` branch at 0x1005208c targets 0x100520b0, is taken when t8(?) != a0, and falls through when t8(?) == a0.
  The `bne` branch at 0x10052094 targets 0x100520b0, is taken when t1(?) != a1, and falls through when t1(?) == a1.
  The `bne` branch at 0x1005209c targets 0x100520b0, is taken when t2(?) != a2, and falls through when t2(?) == a2.
  The `beq` branch at 0x100520a8 targets 0x100520f4, is taken when (t3(?) & 0xff) == 0, and falls through when (t3(?) & 0xff) != 0.
  The `beq` branch at 0x100520b8 targets 0x100520f4, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x100520c0 targets 0x1005206c, is taken when a4 == v0(?), and falls through when a4 != v0(?).
  The `bne` branch at 0x100520d0 targets 0x1005206c, is taken when t9(?) != a0, and falls through when t9(?) == a0.
  The `bne` branch at 0x100520d8 targets 0x1005206c, is taken when t1(?) != a1, and falls through when t1(?) == a1.
  The `bne` branch at 0x100520e0 targets 0x1005206c, is taken when t2(?) != a2, and falls through when t2(?) == a2.
  The `bnel` branch at 0x100520ec targets 0x10052070, is taken when (t3(?) & 0xff) != 0, and falls through when (t3(?) & 0xff) == 0; its branch-likely delay slot `lw v0,4(a7)` at 0x100520f0 runs only when taken and is annulled on fall-through.
  The return at 0x100520f4 has v0 = one of [[sym(xf86PciVideoInfo)]], ?.

- `pciTestMultiDeviceCard` in `usr/X11R6/bin/XFree86` at 0x10052100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10052100-0x10052374 (628 bytes).
  It occupies 628 bytes.
  The `lw` at 0x1005213c loads 4 bytes from sym(xf86PciInfo) +0x0.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0x1005214c, `sw` at 0x100522c8.
  The `lw` at 0x10052158 loads 4 bytes from [sym(xf86PciInfo)] +0x0.
  20 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1005216c, `lw` at 0x10052178, `lw` at 0x10052180.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x100521a4, `lbu` at 0x100521fc.
  The `lw` at 0x100521c8 loads 4 bytes from [[sym(xf86PciInfo)]] +0x4.
  2 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x0, including `lw` at 0x100522bc, `lw` at 0x10052304.
  The `sw` at 0x10052310 stores 4 bytes to ?.
  The `jalr` at 0x1005229c calls sprintf with a0=?, a1=0x101f89f8, a2=?, a3=?.
  The `jal` at 0x100522b8 calls XNFrealloc [0x100de080] with a0=[a3], a1=?, a2=?, a3=?.
  The `jal` at 0x100522f8 calls pciTag [0x1006ea80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10052330 calls xf86MsgVerb [0x1003f680] with a0=0x7, a1=0x3, a2=0x101f8a08, a3=sp-336.
  The `beq` branch at 0x10052138 targets 0x1005235c, is taken when a3 == 0, and falls through when a3 != 0.
  The `beq` branch at 0x1005215c targets 0x1005219c, is taken when t8(=[[sym(xf86PciInfo)]]) == 0, and falls through when t8(=[[sym(xf86PciInfo)]]) != 0.
  The `beq` branch at 0x10052164 targets 0x10052178 and is always taken.
  The `beq` branch at 0x10052170 targets 0x1005219c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x1005217c targets 0x1005216c, is taken when v1(?) != s0(=a0), and falls through when v1(?) == s0(=a0).
  The `bnel` branch at 0x10052184 targets 0x10052170, is taken when a1(?) != a7(?), and falls through when a1(?) == a7(?); its branch-likely delay slot `lw v0,4(a0)` at 0x10052188 runs only when taken and is annulled on fall-through.
  The `bne` branch at 0x1005218c targets 0x100521a4, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x10052194 targets 0x10052214 and is always taken.
  The `beq` branch at 0x1005219c targets 0x10052194, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x100521b0 targets 0x100521bc, is taken when (t2(?) & 0x80) == 0, and falls through when (t2(?) & 0x80) != 0.
  The `beq` branch at 0x100521bc targets 0x10052230, is taken when t8(=[[sym(xf86PciInfo)]]) == 0, and falls through when t8(=[[sym(xf86PciInfo)]]) != 0.
  The `beq` branch at 0x100521c4 targets 0x100521dc and is always taken.
  The `beq` branch at 0x100521d0 targets 0x10052230, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x100521e0 targets 0x100521cc, is taken when a3(?) != s0(=a0), and falls through when a3(?) == s0(=a0).
  The `bne` branch at 0x100521e8 targets 0x100521cc, is taken when a0(?) != a7(?), and falls through when a0(?) == a7(?).
  The `beq` branch at 0x100521f8 targets 0x100521cc, is taken when a4(?) == a5(?), and falls through when a4(?) != a5(?).
  The `bne` branch at 0x10052204 targets 0x10052210, is taken when a0(?) != a6(?), and falls through when a0(?) == a6(?).
  The `beq` branch at 0x1005220c targets 0x100521cc, is taken when t0(?) == t2(?), and falls through when t0(?) != t2(?).
  The `beq` branch at 0x10052230 targets 0x10052240, is taken when t9(=one of 0x0, 0x1) == 0, and falls through when t9(=one of 0x0, 0x1) != 0.
  The `bne` branch at 0x10052238 targets 0x1005215c, is taken when a7(?) != a2(=0x8), and falls through when a7(?) == a2(=0x8).
  The `beq` branch at 0x10052240 targets 0x10052364, is taken when t3(=one of 0x0, 0x1) == 0, and falls through when t3(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x10052248 targets 0x1005236c, is taken when t8(=[[sym(xf86PciInfo)]]) == 0, and falls through when t8(=[[sym(xf86PciInfo)]]) != 0.
  The `beq` branch at 0x10052264 targets 0x1005227c and is always taken.
  The `beq` branch at 0x10052274 targets 0x10052320, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x10052280 targets 0x1005226c, is taken when a2(?) != s0(=a0), and falls through when a2(?) == s0(=a0).
  The `bne` branch at 0x10052288 targets 0x1005226c, is taken when a4(?) != s3(=a2), and falls through when a4(?) == s3(=a2).
  The `bne` branch at 0x10052318 targets 0x1005227c, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `beq` branch at 0x1005235c targets 0x10052218 and is always taken.
  The `beq` branch at 0x10052364 targets 0x10052214 and is always taken.
  The `beq` branch at 0x1005236c targets 0x1005231c and is always taken.
  The return at 0x10052228 has v0 = 0x0.
  The return at 0x10052354 has v0 = ?.

- `StringToBusType` in `usr/X11R6/bin/XFree86` at 0x10052700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10052700-0x10052894 (404 bytes).
  It occupies 404 bytes.
  The `lbu` at 0x10052718 loads 1 byte from a0 (arg0 at entry) +0x0.
  The `lw` at 0x1005271c loads 4 bytes from sym(__libc_attr) +0x0.
  The `lw` at 0x10052728 loads 4 bytes from ([sym(__libc_attr)] + ([a0]:1 << 0x2)) +0x4.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0x10052748, `sw` at 0x1005283c.
  The `lbu` at 0x100527ac loads 1 byte from ret(strtok) +0x0.
  The `jal` at 0x10052788 calls Xstrdup [0x100de180] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1005279c calls strtok with a0=ret(Xstrdup), a1=0x102410a8, a2=?, a3=?.
  The `jal` at 0x100527c0 calls xf86NameCmp [0x1003a040] with a0=ret(strtok), a1=0x102410ac, a2=?, a3=?.
  The `jal` at 0x100527d4 calls xf86NameCmp [0x1003a040] with a0=ret(strtok), a1=0x102410b0, a2=?, a3=?.
  The `jal` at 0x100527f0 calls xf86NameCmp [0x1003a040] with a0=ret(strtok), a1=0x102410b4, a2=?, a3=?, a4=0x2.
  The `jal` at 0x10052804 calls xf86NameCmp [0x1003a040] with a0=ret(strtok), a1=0x102410b8, a2=?, a3=?.
  The `jalr` at 0x10052828 calls strlen with a0=ret(strtok), a1=?, a2=one of 0x0, 0x1, 0x2, 0x3, a3=?.
  The `jal` at 0x10052844 calls Xfree [0x100de100] with a0=ret(Xstrdup), a1=?, a2=?, a3=?.
  The `jal` at 0x10052884 calls Xfree [0x100de100] with a0=ret(Xstrdup), a1=ret(strtok), a2=?, a3=?.
  The `beq` branch at 0x10052738 targets 0x10052780, is taken when (at(=[([sym(__libc_attr)] + ([a0]:1 << 0x2))+4]) & 0x4) == 0, and falls through when (at(=[([sym(__libc_attr)] + ([a0]:1 << 0x2))+4]) & 0x4) != 0.
  The `beq` branch at 0x10052740 targets 0x10052750, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x100527a4 targets 0x10052880, is taken when v0(=ret(strtok)) == 0, and falls through when v0(=ret(strtok)) != 0.
  The `beq` branch at 0x100527b0 targets 0x10052880, is taken when v1(=[ret(strtok)]:1) == 0, and falls through when v1(=[ret(strtok)]:1) != 0.
  The `beq` branch at 0x100527c8 targets 0x10052854, is taken when v0(=ret(xf86NameCmp)) == 0, and falls through when v0(=ret(xf86NameCmp)) != 0.
  The `beq` branch at 0x100527dc targets 0x10052858, is taken when v0(=ret(xf86NameCmp)) == 0, and falls through when v0(=ret(xf86NameCmp)) != 0.
  The `beq` branch at 0x100527f8 targets 0x10052860, is taken when v0(=ret(xf86NameCmp)) == 0, and falls through when v0(=ret(xf86NameCmp)) != 0.
  The `beq` branch at 0x1005280c targets 0x1005286c, is taken when v0(=ret(xf86NameCmp)) == 0, and falls through when v0(=ret(xf86NameCmp)) != 0.
  The `beq` branch at 0x10052814 targets 0x10052844, is taken when a2(=one of 0x0, 0x1, 0x2, 0x3) == 0, and falls through when a2(=one of 0x0, 0x1, 0x2, 0x3) != 0.
  The `beq` branch at 0x1005281c targets 0x10052844, is taken when s0(=a1) == 0, and falls through when s0(=a1) != 0.
  The `beq` branch at 0x1005284c targets 0x10052760 and is always taken.
  The `beq` branch at 0x10052858 targets 0x100527e8 and is always taken.
  The `beq` branch at 0x10052864 targets 0x100527fc and is always taken.
  The `beq` branch at 0x10052870 targets 0x10052810 and is always taken.
  The `beq` branch at 0x1005288c targets 0x10052760 and is always taken.
  The return at 0x10052758 has v0 = 0x2.
  The return at 0x1005276c has v0 = one of 0x0, 0x1, 0x2, 0x3.
  The instructions from 0x10052774 to 0x1005277c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x10052878 to 0x1005287c are not reached by any path from the entry, and their branches are not listed.

- `xf86DriverHasEntities` in `usr/X11R6/bin/XFree86` at 0x10052f40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10052f40-0x10052f94 (84 bytes).
  It occupies 84 bytes.
  The `lw` at 0x10052f4c loads 4 bytes from abs 0x102400b4.
  The `lw` at 0x10052f50 loads 4 bytes from sym(xf86NumEntities) +0x0.
  The `lw` at 0x10052f5c loads 4 bytes from abs 0x102400b0.
  The `lw` at 0x10052f60 loads 4 bytes from sym(xf86Entities) +0x0.
  The `lw` at 0x10052f6c loads 4 bytes from [sym(xf86Entities)] +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10052f70, `lw` at 0x10052f80.
  The `blez` branch at 0x10052f58 targets 0x10052f84, is taken when a6(=[sym(xf86NumEntities)]) <= 0 (signed), and falls through when a6(=[sym(xf86NumEntities)]) > 0 (signed).
  The `beq` branch at 0x10052f74 targets 0x10052f8c, is taken when a6(?) == a0, and falls through when a6(?) != a0.
  The `bnel` branch at 0x10052f7c targets 0x10052f70, is taken when a4(?) != a5(=(([sym(xf86NumEntities)] << 0x2) + [sym(xf86Entities)])), and falls through when a4(?) == a5(=(([sym(xf86NumEntities)] << 0x2) + [sym(xf86Entities)])); its branch-likely delay slot `lw a6,0(a4)` at 0x10052f80 runs only when taken and is annulled on fall-through.
  The return at 0x10052f84 has v0 = 0x0.
  The return at 0x10052f8c has v0 = 0x1.

- `xf86ClaimIsaSlot` in `usr/X11R6/bin/XFree86` at 0x10059800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10059800-0x1005993c (316 bytes).
  It occupies 316 bytes.
  The `lw` at 0x1005984c loads 4 bytes from sym(xf86BusAccInfo) +0x0.
  The `lw` at 0x10059854 loads 4 bytes from sym(xf86Entities) +0x0.
  The `lw` at 0x10059868 loads 4 bytes from ([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2)) +0x0.
  The `sw` at 0x10059870 stores 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x24.
  The `sw` at 0x10059874 stores 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x20.
  The `sw` at 0x1005987c stores 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x28.
  The `sw` at 0x10059884 stores 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x4.
  The `sw` at 0x10059890 stores 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x0.
  The `sw` at 0x100598b4 stores 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x38.
  The `sw` at 0x100598bc stores 4 bytes to ret(XNFcalloc) +0x0.
  The `lw` at 0x100598c0 loads 4 bytes from [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x38.
  The `sw` at 0x100598c8 stores 4 bytes to [[([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))]+56] +0x4.
  3 such `sw` accesses store 4 bytes to [([sym(xf86Entities)] + (ret(xf86AllocateEntity) << 0x2))] +0x40, including `sw` at 0x100598d0, `sw` at 0x10059910, `sw` at 0x10059938.
  The `lw` at 0x100598d8 loads 4 bytes from [sym(xf86BusAccInfo)] +0x20.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x100598dc, `lw` at 0x100598e8, `lw` at 0x100598f4.
  The `sw` at 0x1005991c stores 4 bytes to sym(isaSlotClaimed) +0x0.
  The `jal` at 0x10059848 calls xf86AllocateEntity [0x10052a40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1005988c calls xf86AddDevToEntity [0x10053740] with a0=ret(xf86AllocateEntity), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0x100598a4 calls XNFcalloc [0x100ddec0] with a0=0x14, a1=?, a2=?, a3=?.
  The `beq` branch at 0x100598cc targets 0x10059914, is taken when s0(=[sym(xf86BusAccInfo)]) == 0, and falls through when s0(=[sym(xf86BusAccInfo)]) != 0.
  The `beq` branch at 0x100598d4 targets 0x100598ec and is always taken.
  The `beq` branch at 0x100598e0 targets 0x10059914, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0x100598ec targets 0x10059934, is taken when at(?) == s1(=0x1), and falls through when at(?) != s1(=0x1).
  The `beq` branch at 0x100598f8 targets 0x10059914, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `bne` branch at 0x10059904 targets 0x100598dc, is taken when v0(?) != s1(=0x1), and falls through when v0(?) == s1(=0x1).
  The `beq` branch at 0x1005990c targets 0x100598dc and is always taken.
  The `beq` branch at 0x10059934 targets 0x100598f4 and is always taken.
  The return at 0x1005992c has v0 = ret(xf86AllocateEntity).

- `xf86GetIsaInfoForScreen` in `usr/X11R6/bin/XFree86` at 0x10059940 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10059940-0x10059ff4 (1716 bytes).
  It occupies 1716 bytes.
  The `lw` at 0x1005994c loads 4 bytes from abs 0x1023ffe0.
  The `lw` at 0x10059950 loads 4 bytes from sym(xf86Screens) +0x0.
  The `lw` at 0x10059960 loads 4 bytes from ([sym(xf86Screens)] + (a0 << 0x2)) +0x0.
  The `lw` at 0x10059964 loads 4 bytes from [([sym(xf86Screens)] + (a0 << 0x2))] +0xe0.
  The `lw` at 0x10059970 loads 4 bytes from abs 0x102400b0.
  The `lw` at 0x10059974 loads 4 bytes from [([sym(xf86Screens)] + (a0 << 0x2))] +0xdc.
  The `lw` at 0x1005998c loads 4 bytes from sym(xf86Entities) +0x0.
  87 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1005999c, `lw` at 0x100599a8, `lw` at 0x100599b0.
  The `blez` branch at 0x10059978 targets 0x10059f2c, is taken when v1(=[[([sym(xf86Screens)] + (a0 << 0x2))]+224]) <= 0 (signed), and falls through when v1(=[[([sym(xf86Screens)] + (a0 << 0x2))]+224]) > 0 (signed).
  The `beq` branch at 0x10059994 targets 0x100599d4, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x100599c0 targets 0x100599cc, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x100599cc targets 0x1005999c, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x100599d8 targets 0x10059e6c, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x100599e0 targets 0x10059f40, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x10059aa4 targets 0x10059ab0, is taken when s7(?) == 0, and falls through when s7(?) != 0.
  The `beq` branch at 0x10059ac0 targets 0x10059acc, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x10059adc targets 0x10059ae8, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0x10059b38 targets 0x10059b44, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x10059b4c targets 0x10059ed4, is taken when t9(?) == a0(=[[([sym(xf86Screens)] + (a0 << 0x2))]+224]), and falls through when t9(?) != a0(=[[([sym(xf86Screens)] + (a0 << 0x2))]+224]).
  The `beq` branch at 0x10059b54 targets 0x10059b60, is taken when s7(?) == 0, and falls through when s7(?) != 0.
  The `beq` branch at 0x10059b70 targets 0x10059b7c, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x10059b8c targets 0x10059b98, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0x10059be8 targets 0x10059bf4, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x10059bfc targets 0x10059e84, is taken when t9(?) == a0(=[[([sym(xf86Screens)] + (a0 << 0x2))]+224]), and falls through when t9(?) != a0(=[[([sym(xf86Screens)] + (a0 << 0x2))]+224]).
  The `beq` branch at 0x10059c04 targets 0x10059c10, is taken when s7(?) == 0, and falls through when s7(?) != 0.
  The `beq` branch at 0x10059c20 targets 0x10059c2c, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x10059c3c targets 0x10059c48, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0x10059c98 targets 0x10059ca4, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0x10059cac targets 0x10059aa4, is taken when t9(?) != a0(=[[([sym(xf86Screens)] + (a0 << 0x2))]+224]), and falls through when t9(?) == a0(=[[([sym(xf86Screens)] + (a0 << 0x2))]+224]).
  The `bne` branch at 0x10059d10 targets 0x10059d1c, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `bne` branch at 0x10059d2c targets 0x10059d38, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `bne` branch at 0x10059d44 targets 0x10059d50, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x10059d60 targets 0x10059d6c, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x10059d78 targets 0x10059d84, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x10059da0 targets 0x10059dac, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x10059db4 targets 0x10059dc0, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x10059de0 targets 0x10059dec, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x10059e10 targets 0x10059e1c, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x10059e38 targets 0x10059e44, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x10059e4c targets 0x10059e58, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x10059e60 targets 0x10059e6c, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x10059ecc targets 0x10059d10 and is always taken.
  The `beq` branch at 0x10059f24 targets 0x10059d10 and is always taken.
  The `beq` branch at 0x10059f9c targets 0x10059fa8, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0x10059fb4 targets 0x10059fc0, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x10059fc8 targets 0x10059fd4, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x10059fd8 targets 0x10059fe4, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x10059fe4 targets 0x10059f40, is taken when a1(?) != v1(=[[([sym(xf86Screens)] + (a0 << 0x2))]+224]), and falls through when a1(?) == v1(=[[([sym(xf86Screens)] + (a0 << 0x2))]+224]).
  The `beq` branch at 0x10059fec targets 0x10059e70 and is always taken.
  The return at 0x10059e7c has v0 = ?.
  The return at 0x10059f2c has v0 = 0x0.
  The instructions from 0x10059f34 to 0x10059f3c are not reached by any path from the entry, and their branches are not listed.

- `xf86ParseIsaBusString` in `usr/X11R6/bin/XFree86` at 0x1005a000 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1005a000-0x1005a03c (60 bytes).
  It occupies 60 bytes.
  The `jal` at 0x1005a01c calls StringToBusType [0x10052700] with a0=a0 at entry (arg0), a1=0x0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x1005a034 has v0 = ?.

- `xf86IsPrimaryIsa` in `usr/X11R6/bin/XFree86` at 0x1005a040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1005a040-0x1005a060 (32 bytes).
  It occupies 32 bytes.
  The `lw` at 0x1005a04c loads 4 bytes from abs 0x102400c4.
  The `lw` at 0x1005a050 loads 4 bytes from sym(primaryBus) +0x0.
  The return at 0x1005a058 has v0 = ?.

- `isaConvertRange2Host` in `usr/X11R6/bin/XFree86` at 0x1005a080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1005a080-0x1005a088 (8 bytes).
  It occupies 8 bytes.
  The return at 0x1005a080 has v0 = ?.

- `xf86DisableInputHandler` in `usr/X11R6/bin/XFree86` at 0x1005cd40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1005cd40-0x1005cd84 (68 bytes).
  It occupies 68 bytes.
  The `lw` at 0x1005cd58 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `sw` at 0x1005cd60 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `jal` at 0x1005cd6c calls RemoveEnabledDevice [0x100d6e80] with a0=[a0], a1=a1 at entry (arg1), a2=[a0], a3=a3 at entry (arg3).
  The `beq` branch at 0x1005cd50 targets 0x1005cd78, is taken when a0 == 0, and falls through when a0 != 0.
  The `bltz` branch at 0x1005cd5c targets 0x1005cd78, is taken when a2(=[a0]) < 0 (signed), and falls through when a2(=[a0]) >= 0 (signed).
  The return at 0x1005cd7c has v0 = one of ?, ret(RemoveEnabledDevice).

- `DoScanPci` in `usr/X11R6/bin/XFree86` at 0x1005f440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1005f440-0x1005f5e0 (416 bytes).
  It occupies 416 bytes.
  2 such `lw` accesses load 4 bytes from sym(xf86Verbose) +0x0, including `lw` at 0x1005f490, `lw` at 0x1005f4dc.
  2 such `sw` accesses store 4 bytes to sym(xf86Verbose) +0x0, including `sw` at 0x1005f4a4, `sw` at 0x1005f4f0.
  The `lw` at 0x1005f500 loads 4 bytes from sym(xf86ModulePath) +0x0.
  The `jal` at 0x1005f47c calls OsInit [0x100e30c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1005f4b4 calls ddxProcessArgument [0x100308c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x1005f4ec calls LoaderInit [0x10078640] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1005f4fc calls LoaderSetPath [0x1007d380] with a0=[sym(xf86ModulePath)], a1=?, a2=?, a3=?.
  The `jal` at 0x1005f524 calls LoadModule [0x1007ee40] with a0=0x10241168, a1=0x0, a2=0x0, a3=0x0, a4=0x0, a5=0x0, a6=sp-80, a7=sp-76.
  The `jal` at 0x1005f544 calls LoaderErrorMsg [0x1007f900] with a0=0x0, a1=0x10241168, a2=?, a3=?.
  The `jalr` at 0x1005f550 calls exit with a0=0x1, a1=?, a2=?, a3=?.
  The `jal` at 0x1005f55c calls LoaderCheckUnresolved [0x1007a600] with a0=0x0, a1=?, a2=?, a3=?.
  The `jal` at 0x1005f574 calls xf86Msg [0x1003f700] with a0=0x6, a1=0x101f91f0, a2=?, a3=?.
  The `jal` at 0x1005f588 calls LoaderSymbol [0x1007a480] with a0=0x101f9218, a1=?, a2=?, a3=?.
  The `jal` at 0x1005f59c calls LoaderSymbol [0x1007a480] with a0=0x101f9230, a1=?, a2=?, a3=?.
  The `jalr` at 0x1005f5b0 calls (unknown callee) with a0=sym(xf86PCIVendorNameInfo), a1=sym(xf86PCIVendorInfo), a2=sym(xf86PCICardInfo), a3=?.
  The `jalr` at 0x1005f5bc calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x1005f5c8 calls exit with a0=0x0, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1005f49c targets 0x1005f4e0, is taken when s0(=a2+1) >= s1(=a0) (signed), and falls through when s0(=a2+1) < s1(=a0) (signed).
  The `beq` branch at 0x1005f4bc targets 0x1005f4cc, is taken when v0(=ret(ddxProcessArgument)) == 0, and falls through when v0(=ret(ddxProcessArgument)) != 0.
  The `bne` branch at 0x1005f4d4 targets 0x1005f4ac, is taken when s0(?) < s1(=a0) (signed), and falls through when s0(?) >= s1(=a0) (signed).
  The `beq` branch at 0x1005f4e0 targets 0x1005f5d0, is taken when s3(=[sym(xf86Verbose)]-1) == 0, and falls through when s3(=[sym(xf86Verbose)]-1) != 0.
  The `bne` branch at 0x1005f52c targets 0x1005f558, is taken when v0(=ret(LoadModule)) != 0, and falls through when v0(=ret(LoadModule)) == 0.
  The `beq` branch at 0x1005f564 targets 0x1005f57c, is taken when v0(=ret(LoaderCheckUnresolved)) == 0, and falls through when v0(=ret(LoaderCheckUnresolved)) != 0.
  The `blez` branch at 0x1005f5d0 targets 0x1005f4e4, is taken when v0(?) <= 0 (signed), and falls through when v0(?) > 0 (signed).
  The `beq` branch at 0x1005f5d8 targets 0x1005f4e8 and is always taken.

- `xf86parseDRISection` in `usr/X11R6/bin/XFree86` at 0x10069240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10069240-0x1006949c (604 bytes).
  It occupies 604 bytes.
  2 such `sw` accesses store 4 bytes to ret(calloc) +0x0, including `sw` at 0x10069290, `sw` at 0x10069438.
  2 such `sw` accesses store 4 bytes to ret(calloc) +0x8, including `sw` at 0x10069294, `sw` at 0x100693dc.
  2 such `sw` accesses store 4 bytes to ret(calloc) +0xc, including `sw` at 0x10069298, `sw` at 0x10069400.
  2 such `sw` accesses store 4 bytes to ret(calloc) +0x10, including `sw` at 0x100692a0, `sw` at 0x100692ec.
  2 such `sw` accesses store 4 bytes to ret(calloc) +0x4, including `sw` at 0x100692a8, `sw` at 0x100693b8.
  The `lw` at 0x100692e0 loads 4 bytes from ret(calloc) +0x10.
  2 such `lw` accesses load 4 bytes from sym(val) +0x4, including `lw` at 0x100692e8, `lw` at 0x10069430.
  2 such `lw` accesses load 4 bytes from sym(val) +0x0, including `lw` at 0x100693a4, `lw` at 0x100693d4.
  The `lw` at 0x100693f0 loads 4 bytes from ret(calloc) +0xc.
  The `jalr` at 0x10069264 calls calloc with a0=0x1, a1=0x14, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x100692ac calls xf86getToken [0x1005f880] with a0=0x10214090, a1=-0x1, a2=?, a3=?.
  The `jal` at 0x100692e4 calls xf86addComment [0x10061380] with a0=[ret(calloc)+16], a1=[sym(val)+4], a2=0x5, a3=?, a4=0x26, a5=0x99, a6=-0x4, a7=0xc.
  The `jal` at 0x100692f8 calls xf86getToken [0x1005f880] with a0=0x10214090, a1=?, a2=?, a3=?.
  The `jal` at 0x10069348 calls xf86tokenString [0x10060040] with a0=?, a1=0x98, a2=0x5, a3=?, a4=0x26, a5=0x99, a6=-0x4, a7=0xc.
  The `jal` at 0x1006935c calls xf86parseError [0x10060d40] with a0=0x101fb5a0, a1=ret(xf86tokenString), a2=?, a3=?.
  The `jal` at 0x10069368 calls xf86freeDRI [0x10069640] with a0=ret(calloc), a1=?, a2=?, a3=?.
  The `jal` at 0x10069390 calls xf86getSubToken [0x1005fec0] with a0=ret(calloc)+16, a1=0x98, a2=0x5, a3=?, a4=0x26, a5=0x99, a6=-0x4, a7=0xc.
  The `jal` at 0x100693c0 calls xf86getSubToken [0x1005fec0] with a0=ret(calloc)+16, a1=0x98, a2=0x5, a3=?, a4=0x26, a5=0x99, a6=-0x4, a7=0xc.
  The `jal` at 0x100693e0 calls xf86parseBuffers [0x10069080] with a0=?, a1=0x98, a2=0x5, a3=?, a4=0x26, a5=0x99, a6=-0x4, a7=0xc.
  The `jal` at 0x100693f4 calls xf86addListItem [0x100685c0] with a0=[ret(calloc)+12], a1=ret(xf86parseBuffers), a2=?, a3=?.
  The `jal` at 0x10069410 calls xf86parseError [0x10060d40] with a0=0x101fb540, a1=0x10241510, a2=?, a3=0x1, a4=sym(val).
  The `jal` at 0x1006941c calls xf86freeDRI [0x10069640] with a0=ret(calloc), a1=?, a2=?, a3=?.
  The `jal` at 0x10069448 calls xf86parseError [0x10060d40] with a0=0x101fb4e0, a1=0x0, a2=0x1, a3=?.
  The `jal` at 0x10069454 calls xf86freeDRI [0x10069640] with a0=ret(calloc), a1=?, a2=?, a3=?.
  The `jal` at 0x1006946c calls xf86parseError [0x10060d40] with a0=0x101fb570, a1=0x0, a2=0x5, a3=?, a4=0x26, a5=0x99, a6=-0x4, a7=0xc.
  The `jal` at 0x10069478 calls xf86freeDRI [0x10069640] with a0=ret(calloc), a1=?, a2=?, a3=?.
  The `jal` at 0x1006948c calls xf86freeDRI [0x10069640] with a0=ret(calloc), a1=?, a2=?, a3=?.
  The `bne` branch at 0x1006926c targets 0x1006928c, is taken when v0(=ret(calloc)) != 0, and falls through when v0(=ret(calloc)) == 0.
  The `beq` branch at 0x100692c0 targets 0x10069388, is taken when v0(=ret(xf86getToken)) == a2(=0x5), and falls through when v0(=ret(xf86getToken)) != a2(=0x5).
  The `beq` branch at 0x100692d4 targets 0x1006931c and is always taken.
  The `beq` branch at 0x10069314 targets 0x10069388, is taken when v0(=ret(xf86getToken)) == a2(=0x5), and falls through when v0(=ret(xf86getToken)) != a2(=0x5).
  The `beq` branch at 0x1006931c targets 0x10069390, is taken when v0(=ret(xf86getToken)) == a1(=0x98), and falls through when v0(=ret(xf86getToken)) != a1(=0x98).
  The `beq` branch at 0x10069324 targets 0x100693c0, is taken when v0(=ret(xf86getToken)) == a4(=0x26), and falls through when v0(=ret(xf86getToken)) != a4(=0x26).
  The `beq` branch at 0x1006932c targets 0x100693e0, is taken when v0(=ret(xf86getToken)) == a5(=0x99), and falls through when v0(=ret(xf86getToken)) != a5(=0x99).
  The `beq` branch at 0x10069334 targets 0x10069464, is taken when v0(=ret(xf86getToken)) == a6(=-0x4), and falls through when v0(=ret(xf86getToken)) != a6(=-0x4).
  The `beq` branch at 0x1006933c targets 0x100692dc, is taken when v0(=ret(xf86getToken)) == a7(=0xc), and falls through when v0(=ret(xf86getToken)) != a7(=0xc).
  The `beq` branch at 0x10069388 targets 0x10069278 and is always taken.
  The `beq` branch at 0x100693a0 targets 0x1006942c, is taken when v0(=ret(xf86getSubToken)) == a2(=0x2), and falls through when v0(=ret(xf86getSubToken)) != a2(=0x2).
  The `bne` branch at 0x100693ac targets 0x10069440, is taken when v0(=ret(xf86getSubToken)) != a2(=0x1), and falls through when v0(=ret(xf86getSubToken)) == a2(=0x1).
  The `beq` branch at 0x100693b4 targets 0x100692f0 and is always taken.
  The `bne` branch at 0x100693cc targets 0x10069404, is taken when v0(=ret(xf86getSubToken)) != a3(=0x1), and falls through when v0(=ret(xf86getSubToken)) == a3(=0x1).
  The `beq` branch at 0x100693d8 targets 0x100692f0 and is always taken.
  The `beq` branch at 0x100693e8 targets 0x10069488, is taken when v0(=ret(xf86parseBuffers)) == 0, and falls through when v0(=ret(xf86parseBuffers)) != 0.
  The `beq` branch at 0x100693fc targets 0x100692f0 and is always taken.
  The `beq` branch at 0x10069424 targets 0x10069278 and is always taken.
  The `beq` branch at 0x10069434 targets 0x100692f0 and is always taken.
  The `beq` branch at 0x1006945c targets 0x10069278 and is always taken.
  The `beq` branch at 0x10069480 targets 0x10069278 and is always taken.
  The `beq` branch at 0x10069494 targets 0x10069278 and is always taken.
  The return at 0x10069284 has v0 = one of 0x0, ret(calloc).
  The return at 0x10069380 has v0 = 0x0.
  The instructions from 0x100693bc to 0x100693bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1006943c to 0x1006943c are not reached by any path from the entry, and their branches are not listed.

- `xf86printDRISection` in `usr/X11R6/bin/XFree86` at 0x100694c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x100694c0-0x10069638 (376 bytes).
  It occupies 376 bytes.
  The `lw` at 0x10069504 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x1006951c loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x10069520 loads 4 bytes from a1 (arg1 at entry) +0x4.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x8, including `lw` at 0x10069544, `lw` at 0x10069634.
  The `lw` at 0x10069560 loads 4 bytes from a1 (arg1 at entry) +0xc.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10069574, `lw` at 0x1006957c, `lw` at 0x10069588.
  The `jalr` at 0x100694fc calls fprintf with a0=a0 at entry (arg0), a1=0x101fb5d0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10069514 calls fprintf with a0=a0 at entry (arg0), a1=0x10241518, a2=[a1+16], a3=?.
  The `jalr` at 0x1006953c calls fprintf with a0=a0 at entry (arg0), a1=0x101fb5e0, a2=[a1], a3=?, a4=[a1].
  The `jalr` at 0x10069558 calls fprintf with a0=a0 at entry (arg0), a1=0x101fb610, a2=[a1+8], a3=?.
  The `jalr` at 0x10069580 calls fprintf with a0=a0 at entry (arg0), a1=0x101fb628, a2=?, a3=?.
  The `jalr` at 0x10069598 calls fprintf with a0=a0 at entry (arg0), a1=0x10241520, a2=?, a3=?.
  The `jalr` at 0x100695b0 calls fprintf with a0=a0 at entry (arg0), a1=0x10241518, a2=?, a3=?.
  The `jalr` at 0x100695d4 calls fprintf with a0=a0 at entry (arg0), a1=0x101fb640, a2=?, a3=?.
  The `jalr` at 0x10069608 calls fprintf with a0=a0 at entry (arg0), a1=0x10241528, a2=?, a3=?.
  The `jalr` at 0x10069628 calls fprintf with a0=a0 at entry (arg0), a1=0x101fb5f8, a2=[a1+4], a3=?, a4=[a1].
  The `beq` branch at 0x100694e0 targets 0x100695e4, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x10069508 targets 0x1006951c, is taken when a2(=[a1+16]) == 0, and falls through when a2(=[a1+16]) != 0.
  The `beq` branch at 0x10069524 targets 0x10069618, is taken when a4(=[a1]) == 0, and falls through when a4(=[a1]) != 0.
  The `beq` branch at 0x10069548 targets 0x10069560, is taken when a2(=[a1+8]) == 0, and falls through when a2(=[a1+8]) != 0.
  The `beq` branch at 0x10069564 targets 0x100695c8, is taken when s0(=[a1+12]) == 0, and falls through when s0(=[a1+12]) != 0.
  The `beq` branch at 0x1006958c targets 0x100695a0, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x100695a4 targets 0x10069600, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x100695bc targets 0x10069570, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0x10069610 targets 0x100695bc and is always taken.
  The `bltz` branch at 0x10069618 targets 0x10069544, is taken when a2(=[a1+4]) < 0 (signed), and falls through when a2(=[a1+4]) >= 0 (signed).
  The `beq` branch at 0x10069630 targets 0x10069548 and is always taken.
  The return at 0x100695f0 has v0 = one of ?, ret(fprintf).
  The instructions from 0x100695f8 to 0x100695fc are not reached by any path from the entry, and their branches are not listed.

- `xf86freeDRI` in `usr/X11R6/bin/XFree86` at 0x10069640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10069640-0x100696a8 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x1006966c loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x10069670 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `sw` at 0x10069684 stores 4 bytes to a0 (arg0 at entry) +0x10.
  The `jal` at 0x10069668 calls xf86freeBuffersList [0x100696c0] with a0=[a0+12], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1006967c calls free with a0=[a0+16], a1=?, a2=?, a3=?.
  The `jalr` at 0x1006968c calls free with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x10069658 targets 0x10069698, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x10069674 targets 0x10069688, is taken when a0(=[a0+16]) == 0, and falls through when a0(=[a0+16]) != 0.
  The return at 0x100696a0 has v0 = one of ?, ret(free).

- `xf86findInputByDriver` in `usr/X11R6/bin/XFree86` at 0x1006ba00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006ba00-0x1006ba84 (132 bytes).
  It occupies 132 bytes.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1006ba38, `lw` at 0x1006ba44.
  The `jal` at 0x1006ba34 calls xf86nameCompare [0x10061040] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x1006ba24 targets 0x1006ba50, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x1006ba3c targets 0x1006ba6c, is taken when v0(=ret(xf86nameCompare)) == 0, and falls through when v0(=ret(xf86nameCompare)) != 0.
  The `bne` branch at 0x1006ba48 targets 0x1006ba30, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The return at 0x1006ba64 has v0 = 0x0.
  The return at 0x1006ba7c has v0 = ?.

- `pciInit` in `usr/X11R6/bin/XFree86` at 0x1006dd80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006dd80-0x1006dde8 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x1006ddc0 loads 4 bytes from sym(pciNumBuses) +0x0.
  The `jal` at 0x1006ddb4 calls irixPciInit [0x100730c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1006ddd8 calls xf86Msg [0x1003f700] with a0=0x5, a1=0x101fd0b8, a2=?, a3=?.
  The `beq` branch at 0x1006dd98 targets 0x1006ddac, is taken when at(=[0x1024071c]) == 0, and falls through when at(=[0x1024071c]) != 0.
  The `bne` branch at 0x1006ddc4 targets 0x1006dda0, is taken when a0(=[sym(pciNumBuses)]) != 0, and falls through when a0(=[sym(pciNumBuses)]) == 0.
  The `beq` branch at 0x1006dde0 targets 0x1006dda0 and is always taken.
  The return at 0x1006dda4 has v0 = one of 0x1d7ef4, ret(irixPciInit), ret(xf86Msg).

- `pciFindFirst` in `usr/X11R6/bin/XFree86` at 0x1006de00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006de00-0x1006de64 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x1006de30 loads 4 bytes from sym(pciFindFirstFP) +0x0.
  The `sw` at 0x1006de44 stores 4 bytes to sym(pciDevid) +0x0.
  The `sw` at 0x1006de4c stores 4 bytes to sym(pciDevidMask) +0x0.
  The `jal` at 0x1006de24 calls pciInit [0x1006dd80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1006de48 calls (unknown callee) with a0=?, a1=sym(pciDevid), a2=?, a3=?.
  The return at 0x1006de5c has v0 = ret(?).

- `pciFindNext` in `usr/X11R6/bin/XFree86` at 0x1006de80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006de80-0x1006dec4 (68 bytes).
  It occupies 68 bytes.
  The `lw` at 0x1006dea8 loads 4 bytes from sym(pciFindNextFP) +0x0.
  The `jal` at 0x1006de9c calls pciInit [0x1006dd80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1006deac calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The return at 0x1006debc has v0 = ret(?).

- `pciReadLong` in `usr/X11R6/bin/XFree86` at 0x1006df00
  **Inferred.** Calls `pciInit` at 0x1006df24, ahead of any branch the render shows. It then compares a bus index against `pciNumBuses` at 0x1006df4c and tests the flag loaded from 0x10240720 at 0x1006df54. When the later loaded values are non-zero it makes an indirect call through `pciBusInfo` at 0x1006df74 and returns that call's result. A second path returns -0x1 at 0x1006df9c. The render does not show whether the bus index is advanced in a loop, and shows no masking of the value it returns.
  Reviewed: 2026-11-12 (sonnet)

- `pciReadWord` in `usr/X11R6/bin/XFree86` at 0x1006dfc0
  **Inferred.** Tests the low two bits of the offset (a1 & 0x3) against 0 at 0x1006dfec and tests a value in s0 against 2 at 0x1006dff8; both branches go to 0x1006e00c when equal. The fall-through of the second branch reaches `FatalError` at 0x1006e004, which suggests a misaligned offset is treated as fatal. It then calls `pciReadLong` at 0x1006e018; the render does not show the value of a1 for that call. The render does not show how the 16-bit field is extracted from the long.
  Reviewed: 2026-11-12 (sonnet)

- `pciReadByte` in `usr/X11R6/bin/XFree86` at 0x1006e080
  **Inferred.** A thin wrapper that calls `pciReadLong` at 0x1006e0a8, passing a0, a2 and a3 from entry and a computed a1 the render does not resolve, and returns a value in v0 at 0x1006e0cc. The render shows no masking or shift of the result, so the byte selection, if any, is not visible in this routine.
  Reviewed: 2026-11-12 (sonnet)

- `pciWriteLong` in `usr/X11R6/bin/XFree86` at 0x1006e100
  **Inferred.** The write-side counterpart of `pciReadLong` by name. It calls `pciInit` at 0x1006e128, ahead of any branch the render shows, compares a0 against `pciNumBuses` at 0x1006e148, and makes an indirect call through `pciBusInfo` at 0x1006e170 when the loaded values it tests are non-zero. Its return value is either the result of `pciInit` or a value the render does not resolve. The shape mirrors the read path, which suggests the same bus table is used.
  Reviewed: 2026-11-12 (sonnet)

- `pciWriteWord` in `usr/X11R6/bin/XFree86` at 0x1006e1c0
  **Inferred.** Tests the low two bits of a1 (a1 & 0x3) against 0 at 0x1006e1f8 and a value in s1 against 2 at 0x1006e200. The path where both tests fail calls `FatalError` at 0x1006e20c with a4 = 0x2. It also calls `pciReadLong` at 0x1006e224 and `pciWriteLong` at 0x1006e254, returning the write's result at 0x1006e270. The render does not show what the read value is combined with, or what is passed to the write.
  Reviewed: 2026-11-12 (sonnet)

- `pciWriteByte` in `usr/X11R6/bin/XFree86` at 0x1006e280
  **Inferred.** Calls `pciReadLong` at 0x1006e2b4 and then `pciWriteLong` at 0x1006e2ec, returning the write's result in v0 at 0x1006e300. Its shape suggests a read-then-write wrapper, but the render shows no byte-merge instructions, so the lane selection is not visible here.
  Reviewed: 2026-11-12 (sonnet)

- `pciSetBitsLong` in `usr/X11R6/bin/XFree86` at 0x1006e340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006e340-0x1006e3e0 (160 bytes).
  It occupies 160 bytes.
  The `lw` at 0x1006e37c loads 4 bytes from sym(pciNumBuses) +0x0.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1006e398, `lw` at 0x1006e3a4, `lw` at 0x1006e3c0.
  The `jal` at 0x1006e36c calls pciInit [0x1006dd80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1006e3d0 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x1006e38c targets 0x1006e3ac, is taken when a0(?) >= a1(=[sym(pciNumBuses)]) (signed), and falls through when a0(?) < a1(=[sym(pciNumBuses)]) (signed).
  The `beq` branch at 0x1006e39c targets 0x1006e3b0, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x1006e3a8 targets 0x1006e3c0, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x1006e3d8 targets 0x1006e3b0 and is always taken.
  The return at 0x1006e3b8 has v0 = one of ret(pciInit), ret(?).

- `pciSetBitsByte` in `usr/X11R6/bin/XFree86` at 0x1006e400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006e400-0x1006e448 (72 bytes).
  It occupies 72 bytes.
  The `jal` at 0x1006e430 calls pciSetBitsLong [0x1006e340] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The return at 0x1006e440 has v0 = ret(pciSetBitsLong).

- `pciLongFunc` in `usr/X11R6/bin/XFree86` at 0x1006e480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006e480-0x1006e57c (252 bytes).
  It occupies 252 bytes.
  The `lw` at 0x1006e4b8 loads 4 bytes from sym(pciNumBuses) +0x0.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1006e4e4, `lw` at 0x1006e4f0, `lw` at 0x1006e544.
  The `jal` at 0x1006e4a8 calls pciInit [0x1006dd80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x1006e4d4 targets 0x1006e52c, is taken when v1(=[sym(pciNumBuses)]) < v0(?) (signed), and falls through when v1(=[sym(pciNumBuses)]) >= v0(?) (signed).
  The `beq` branch at 0x1006e4e8 targets 0x1006e530, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x1006e4f4 targets 0x1006e52c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x1006e4fc targets 0x1006e55c, is taken when s0(=a1) == 0, and falls through when s0(=a1) != 0.
  The `beq` branch at 0x1006e504 targets 0x1006e574, is taken when s0(=a1) == a0(=0x1), and falls through when s0(=a1) != a0(=0x1).
  The `beq` branch at 0x1006e50c targets 0x1006e540, is taken when s0(=a1) == a1(=0x2), and falls through when s0(=a1) != a1(=0x2).
  The `beq` branch at 0x1006e574 targets 0x1006e518 and is always taken.
  The return at 0x1006e524 has v0 = one of 0x0, ?.
  The return at 0x1006e538 has v0 = 0x0.
  The return at 0x1006e554 has v0 = ?.
  The return at 0x1006e56c has v0 = ?.

- `pciBusAddrToHostAddr` in `usr/X11R6/bin/XFree86` at 0x1006e580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006e580-0x1006e624 (164 bytes).
  It occupies 164 bytes.
  The `lw` at 0x1006e5b8 loads 4 bytes from sym(pciNumBuses) +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1006e5d8, `lw` at 0x1006e5e4.
  The `jal` at 0x1006e5a8 calls pciInit [0x1006dd80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1006e5f4 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?, a5=sym(pciBusInfo).
  The `beq` branch at 0x1006e5cc targets 0x1006e610, is taken when a0(?) >= a1(=[sym(pciNumBuses)]) (signed), and falls through when a0(?) < a1(=[sym(pciNumBuses)]) (signed).
  The `beq` branch at 0x1006e5dc targets 0x1006e614, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x1006e5e8 targets 0x1006e610, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The return at 0x1006e608 has v0 = ret(?).
  The return at 0x1006e61c has v0 = a2.

- `pciHostAddrToBusAddr` in `usr/X11R6/bin/XFree86` at 0x1006e640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006e640-0x1006e6e4 (164 bytes).
  It occupies 164 bytes.
  The `lw` at 0x1006e678 loads 4 bytes from sym(pciNumBuses) +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1006e698, `lw` at 0x1006e6a4.
  The `jal` at 0x1006e668 calls pciInit [0x1006dd80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1006e6b4 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?, a5=sym(pciBusInfo).
  The `beq` branch at 0x1006e68c targets 0x1006e6d0, is taken when a0(?) >= a1(=[sym(pciNumBuses)]) (signed), and falls through when a0(?) < a1(=[sym(pciNumBuses)]) (signed).
  The `beq` branch at 0x1006e69c targets 0x1006e6d4, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x1006e6a8 targets 0x1006e6d0, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The return at 0x1006e6c8 has v0 = ret(?).
  The return at 0x1006e6dc has v0 = a2.

- `pciGetBaseSize` in `usr/X11R6/bin/XFree86` at 0x1006e700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006e700-0x1006ea44 (836 bytes).
  It occupies 836 bytes.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0x1006e784, `sw` at 0x1006e7a8.
  The `jal` at 0x1006e758 calls pciInit [0x1006dd80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1006e76c calls xf86GetPciSizeFromOS [0x100741c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sp-112, a3=?.
  The `jal` at 0x1006e7c8 calls pciReadLong [0x1006df00] with a0=a0 at entry (arg0), a1=?, a2=a2 at entry (arg2), a3=0x6.
  The `jal` at 0x1006e7f8 calls pciWriteLong [0x1006e100] with a0=a0 at entry (arg0), a1=?, a2=-0x1, a3=?, a7=a2 at entry (arg2).
  The `jal` at 0x1006e80c calls pciReadLong [0x1006df00] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x1006e824 calls pciWriteLong [0x1006e100] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x1006e900 calls pciReadLong [0x1006df00] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a7=a2 at entry (arg2).
  The `jal` at 0x1006e98c calls pciReadLong [0x1006df00] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x1006e9b4 calls pciWriteLong [0x1006e100] with a0=a0 at entry (arg0), a1=?, a2=-0x1, a3=?.
  The `jal` at 0x1006e9c4 calls pciReadLong [0x1006df00] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x1006e9dc calls pciWriteLong [0x1006e100] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bltz` branch at 0x1006e720 targets 0x1006e73c, is taken when a1 < 0 (signed), and falls through when a1 >= 0 (signed).
  The `bne` branch at 0x1006e734 targets 0x1006e750, is taken when a1 < 0x7 (signed), and falls through when a1 >= 0x7 (signed).
  The `beq` branch at 0x1006e774 targets 0x1006e7a0, is taken when v0(=ret(xf86GetPciSizeFromOS)) == 0, and falls through when v0(=ret(xf86GetPciSizeFromOS)) != 0.
  The `beq` branch at 0x1006e77c targets 0x1006e788, is taken when a1(=a3) == 0, and falls through when a1(=a3) != 0.
  The `beq` branch at 0x1006e7a0 targets 0x1006e7ac, is taken when a1(=a3) == 0, and falls through when a1(=a3) != 0.
  The `beq` branch at 0x1006e7b0 targets 0x1006e930, is taken when s1(=a1) == a3(=0x6), and falls through when s1(=a1) != a3(=0x6).
  The `blez` branch at 0x1006e7d4 targets 0x1006e7e4, is taken when s1(=a1) <= 0 (signed), and falls through when s1(=a1) > 0 (signed).
  The `bne` branch at 0x1006e7e0 targets 0x1006e8f0, is taken when s1(=a1) < 0x6 (signed), and falls through when s1(=a1) >= 0x6 (signed).
  The `beq` branch at 0x1006e7e8 targets 0x1006e834, is taken when a7(=a2) == 0, and falls through when a7(=a2) != 0.
  The `beq` branch at 0x1006e82c targets 0x1006e840 and is always taken.
  The `beq` branch at 0x1006e844 targets 0x1006e858, is taken when s1(=a1) >= 0x5 (signed), and falls through when s1(=a1) < 0x5 (signed).
  The `beq` branch at 0x1006e850 targets 0x1006e95c, is taken when (s0(?) & 0x1) == 0, and falls through when (s0(?) & 0x1) != 0.
  The `beq` branch at 0x1006e858 targets 0x1006e874, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x1006e864 targets 0x1006e940, is taken when (s0(?) & 0x1) == 0, and falls through when (s0(?) & 0x1) != 0.
  The `beq` branch at 0x1006e86c targets 0x1006e878 and is always taken.
  The `beq` branch at 0x1006e878 targets 0x1006e950, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `bne` branch at 0x1006e880 targets 0x1006e8a8, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x1006e890 targets 0x1006e8a8, is taken when (s0(?) & 0x1) != 0, and falls through when (s0(?) & 0x1) == 0.
  The `beq` branch at 0x1006e8a0 targets 0x1006e888, is taken when (s0(?) & 0x1) == 0, and falls through when (s0(?) & 0x1) != 0.
  The `beq` branch at 0x1006e8a8 targets 0x1006e8d4, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x1006e8b8 targets 0x1006e8cc, is taken when (a0(?) & 0x1) == 0, and falls through when (a0(?) & 0x1) != 0.
  The `bne` branch at 0x1006e8c0 targets 0x1006e8d8, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x1006e8cc targets 0x1006e744 and is always taken.
  The `bne` branch at 0x1006e8d8 targets 0x1006e8cc, is taken when s1(=a1) != a2(=0x6), and falls through when s1(=a1) == a2(=0x6).
  The `bne` branch at 0x1006e8e0 targets 0x1006e8cc, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x1006e8e8 targets 0x1006e8cc and is always taken.
  The `bne` branch at 0x1006e910 targets 0x1006e7e4, is taken when (v0(=ret(pciReadLong)) & 0x1) != 0, and falls through when (v0(=ret(pciReadLong)) & 0x1) == 0.
  The `bne` branch at 0x1006e920 targets 0x1006e7e8, is taken when a4(?) != a5(=0x4), and falls through when a4(?) == a5(=0x4).
  The `beq` branch at 0x1006e928 targets 0x1006e740 and is always taken.
  The `beq` branch at 0x1006e934 targets 0x1006e7c0 and is always taken.
  The `bne` branch at 0x1006e948 targets 0x1006e880, is taken when (s0(?) & a7(=-0x10)) != 0, and falls through when (s0(?) & a7(=-0x10)) == 0.
  The `beq` branch at 0x1006e954 targets 0x1006e740 and is always taken.
  The `bne` branch at 0x1006e964 targets 0x1006e858, is taken when t0(?) != t1(=0x4), and falls through when t0(?) == t1(=0x4).
  The `bne` branch at 0x1006e974 targets 0x1006e858, is taken when (s0(?) & t2(=-0x10)) != 0, and falls through when (s0(?) & t2(=-0x10)) == 0.
  The `beq` branch at 0x1006e99c targets 0x1006e9f0, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x1006e9e8 targets 0x1006e9f4 and is always taken.
  The `beq` branch at 0x1006e9f4 targets 0x1006ea38, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x1006e9fc targets 0x1006e854, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x1006ea0c targets 0x1006ea24, is taken when (a0(?) & 0x1) != 0, and falls through when (a0(?) & 0x1) == 0.
  The `beq` branch at 0x1006ea1c targets 0x1006ea04, is taken when (a0(?) & 0x1) == 0, and falls through when (a0(?) & 0x1) != 0.
  The `blez` branch at 0x1006ea24 targets 0x1006e858, is taken when a1(?) <= 0 (signed), and falls through when a1(?) > 0 (signed).
  The `beq` branch at 0x1006ea30 targets 0x1006e740 and is always taken.
  The `beq` branch at 0x1006ea3c targets 0x1006e740 and is always taken.
  The return at 0x1006e748 has v0 = ?.
  The return at 0x1006e798 has v0 = ?.
  The instructions from 0x1006e93c to 0x1006e93c are not reached by any path from the entry, and their branches are not listed.

- `pciTag` in `usr/X11R6/bin/XFree86` at 0x1006ea80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006ea80-0x1006eaa4 (36 bytes).
  It occupies 36 bytes.
  The return at 0x1006ea9c has v0 = ?.

- `pciMfDev` in `usr/X11R6/bin/XFree86` at 0x1006eac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006eac0-0x1006ebe0 (288 bytes).
  It occupies 288 bytes.
  The `jal` at 0x1006eaf4 calls pciReadLong [0x1006df00] with a0=?, a1=0x0, a2=0x1d71b4, a3=a3 at entry (arg3).
  The `jal` at 0x1006eb10 calls pciReadLong [0x1006df00] with a0=?, a1=0xc, a2=?, a3=?.
  The `jal` at 0x1006eb64 calls pciReadLong [0x1006df00] with a0=?, a1=0x0, a2=?, a3=(ret(pciReadLong) << 0x28).
  The `jal` at 0x1006eb90 calls pciReadLong [0x1006df00] with a0=?, a1=0x10, a2=ret(pciReadLong), a3=?.
  The `jal` at 0x1006eba4 calls pciReadLong [0x1006df00] with a0=?, a1=0x10, a2=?, a3=?.
  The `beq` branch at 0x1006eb00 targets 0x1006eb40, is taken when v0(=ret(pciReadLong)) == a1(=-0x1), and falls through when v0(=ret(pciReadLong)) != a1(=-0x1).
  The `bgez` branch at 0x1006eb1c targets 0x1006eb54, is taken when a3(=(ret(pciReadLong) << 0x28)) >= 0 (signed), and falls through when a3(=(ret(pciReadLong) << 0x28)) < 0 (signed).
  The `beq` branch at 0x1006eb70 targets 0x1006ebd8, is taken when v0(=ret(pciReadLong)) == a1(=-0x1), and falls through when v0(=ret(pciReadLong)) != a1(=-0x1).
  The `beq` branch at 0x1006eb78 targets 0x1006ebd8, is taken when v0(=ret(pciReadLong)) == 0, and falls through when v0(=ret(pciReadLong)) != 0.
  The `bne` branch at 0x1006eb80 targets 0x1006ebc0, is taken when a2(=ret(pciReadLong)) != v0(=ret(pciReadLong)), and falls through when a2(=ret(pciReadLong)) == v0(=ret(pciReadLong)).
  The `beq` branch at 0x1006ebb8 targets 0x1006ebd0, is taken when a3(=ret(pciReadLong)) == v0(=ret(pciReadLong)), and falls through when a3(=ret(pciReadLong)) != v0(=ret(pciReadLong)).
  The `beq` branch at 0x1006ebd0 targets 0x1006eb24 and is always taken.
  The `beq` branch at 0x1006ebd8 targets 0x1006eb24 and is always taken.
  The return at 0x1006eb2c has v0 = one of 0x0, 0x1.
  The return at 0x1006eb4c has v0 = 0x0.
  The return at 0x1006ebc8 has v0 = 0x1.
  The instructions from 0x1006eb34 to 0x1006eb3c are not reached by any path from the entry, and their branches are not listed.

- `pciGenFindNext` in `usr/X11R6/bin/XFree86` at 0x1006ec00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006ec00-0x1006f114 (1300 bytes).
  It occupies 1300 bytes.
  2 such `lw` accesses load 4 bytes from (sym(pciBusInfo) + ([sym(pciBusNum)] << 0x2)) +0x0, including `lw` at 0x1006ec74, `lw` at 0x1006ed40.
  9 such `lw` accesses load 4 bytes from sym(pciBusNum) +0x0, including `lw` at 0x1006ec78, `lw` at 0x1006ecf8, `lw` at 0x1006ee1c.
  2 such `sw` accesses store 4 bytes to (sym(pciBusInfo) + ([sym(pciBusNum)] << 0x2)) +0x0, including `sw` at 0x1006ec84, `sw` at 0x1006ef08.
  8 such `sw` accesses store 4 bytes to sym(pciBusNum) +0x0, including `sw` at 0x1006ec94, `sw` at 0x1006ed70, `sw` at 0x1006ed84.
  4 such `sw` accesses store 4 bytes to sym(pciDevNum) +0x0, including `sw` at 0x1006eca0, `sw` at 0x1006ed2c, `sw` at 0x1006ede8.
  The `lw` at 0x1006eca8 loads 4 bytes from (sym(pciBusInfo) + ([sym(pciBusNum)]+1 << 0x2)) +0x0.
  2 such `lw` accesses load 4 bytes from sym(pciFuncNum) +0x0, including `lw` at 0x1006ecb0, `lw` at 0x1006ecfc.
  The `sw` at 0x1006ece0 stores 4 bytes to sym(pciDeviceTag) +0x0.
  The `lw` at 0x1006ed00 loads 4 bytes from sym(pciBusInfo) +0x0.
  5 such `lw` accesses load 4 bytes from sym(pciDevNum) +0x0, including `lw` at 0x1006ed04, `lw` at 0x1006ee08, `lw` at 0x1006ee14.
  3 such `lw` accesses load 4 bytes from sym(pciNumBuses) +0x0, including `lw` at 0x1006ed0c, `lw` at 0x1006ee40, `lw` at 0x1006f090.
  4 such `sw` accesses store 4 bytes to sym(pciFuncNum) +0x0, including `sw` at 0x1006ed20, `sw` at 0x1006ed24, `sw` at 0x1006eddc.
  The `lbu` at 0x1006ed4c loads 1 byte from [(sym(pciBusInfo) + ([sym(pciBusNum)] << 0x2))] +0x1.
  20 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1006ed80, `lw` at 0x1006ed94, `lw` at 0x1006eda8.
  2 such `sw` accesses store 4 bytes to sym(pciNumBuses) +0x0, including `sw` at 0x1006ee58, `sw` at 0x1006f0a8.
  3 such `lw` accesses load 4 bytes from sym(pciDeviceTag) +0x0, including `lw` at 0x1006ee70, `lw` at 0x1006efe8, `lw` at 0x1006f0e0.
  The `lw` at 0x1006ee90 loads 4 bytes from sym(pciDevidMask) +0x0.
  The `lw` at 0x1006ee94 loads 4 bytes from sym(pciDevid) +0x0.
  The `lw` at 0x1006ef14 loads 4 bytes from (sym(pciBusInfo) + ([0x10240724] << 0x2)) +0x0.
  The `lw` at 0x1006ef18 loads 4 bytes from [(sym(pciBusInfo) + ([0x10240724] << 0x2))] +0x0.
  The `sw` at 0x1006ef1c stores 4 bytes to ret(XNFalloc) +0x0.
  The `lw` at 0x1006ef20 loads 4 bytes from [(sym(pciBusInfo) + ([0x10240724] << 0x2))] +0x4.
  The `sw` at 0x1006ef24 stores 4 bytes to ret(XNFalloc) +0x4.
  The `lw` at 0x1006ef28 loads 4 bytes from [(sym(pciBusInfo) + ([0x10240724] << 0x2))] +0x8.
  The `sw` at 0x1006ef2c stores 4 bytes to ret(XNFalloc) +0x8.
  The `lw` at 0x1006ef30 loads 4 bytes from [(sym(pciBusInfo) + ([0x10240724] << 0x2))] +0xc.
  The `sw` at 0x1006ef34 stores 4 bytes to ret(XNFalloc) +0xc.
  The `lw` at 0x1006ef38 loads 4 bytes from [(sym(pciBusInfo) + ([0x10240724] << 0x2))] +0x10.
  The `sw` at 0x1006ef3c stores 4 bytes to ret(XNFalloc) +0x10.
  The `lw` at 0x1006ef40 loads 4 bytes from [(sym(pciBusInfo) + ([0x10240724] << 0x2))] +0x14.
  The `sw` at 0x1006ef44 stores 4 bytes to ret(XNFalloc) +0x14.
  The `lw` at 0x1006ef48 loads 4 bytes from [(sym(pciBusInfo) + ([0x10240724] << 0x2))] +0x18.
  The `sw` at 0x1006ef4c stores 4 bytes to ret(XNFalloc) +0x18.
  The `lw` at 0x1006ef50 loads 4 bytes from [(sym(pciBusInfo) + ([0x10240724] << 0x2))] +0x1c.
  The `sw` at 0x1006ef54 stores 4 bytes to ret(XNFalloc) +0x1c.
  The `lw` at 0x1006ef58 loads 4 bytes from [(sym(pciBusInfo) + ([0x10240724] << 0x2))] +0x20.
  The `sw` at 0x1006ef5c stores 4 bytes to ret(XNFalloc) +0x20.
  10 such `sw` accesses store 4 bytes to ?, including `sw` at 0x1006f030, `sw` at 0x1006f038, `sw` at 0x1006f040.
  3 such `sb` accesses store 1 byte to ?, including `sb` at 0x1006f078, `sb` at 0x1006f080, `sb` at 0x1006f08c.
  The `jal` at 0x1006ec70 calls Xfree [0x100de100] with a0=[(sym(pciBusInfo) + ([sym(pciBusNum)] << 0x2))], a1=?, a2=?, a3=?, a4=[sym(pciBusNum)].
  The `jal` at 0x1006ece4 calls pciReadLong [0x1006df00] with a0=?, a1=0x0, a2=sym(pciDeviceTag), a3=?.
  The `jal` at 0x1006ee6c calls pciReadLong [0x1006df00] with a0=[sym(pciDeviceTag)], a1=0x8, a2=?, a3=?, a4=[sym(pciBusNum)], a5=0xffffffffffff0000, a6=0xffff.
  The `jal` at 0x1006eee8 calls XNFalloc [0x100dddc0] with a0=0x24, a1=?, a2=?, a3=?.
  The `jal` at 0x1006ef70 calls pciMfDev [0x1006eac0] with a0=[sym(pciBusNum)], a1=[sym(pciDevNum)], a2=?, a3=?, a4=[sym(pciBusNum)], a5=[sym(pciBusInfo)].
  The `jal` at 0x1006efe4 calls pciReadLong [0x1006df00] with a0=[sym(pciDeviceTag)], a1=0x18, a2=0x6, a3=sym(pciDevidMask).
  The `jal` at 0x1006f0f0 calls XNFalloc [0x100dddc0] with a0=0x24, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1006ec58 targets 0x1006ecf8 and is always taken.
  The `beq` branch at 0x1006ec60 targets 0x1006ec88, is taken when s7(=one of 0x0, 0x1) == 0, and falls through when s7(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x1006ec98 targets 0x1006eeac, is taken when a4(=[sym(pciBusNum)]+1) >= 0x100 (signed), and falls through when a4(=[sym(pciBusNum)]+1) < 0x100 (signed).
  The `beq` branch at 0x1006ecac targets 0x1006eee4, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0x1006ecf0 targets 0x1006ee20, is taken when v0(=ret(pciReadLong)) != s4(=-0x1), and falls through when v0(=ret(pciReadLong)) == s4(=-0x1).
  The `beq` branch at 0x1006ed08 targets 0x1006ed64, is taken when a4(=[sym(pciBusNum)]) == s4(=-0x1), and falls through when a4(=[sym(pciBusNum)]) != s4(=-0x1).
  The `beq` branch at 0x1006ed10 targets 0x1006ee00, is taken when a0(=[sym(pciFuncNum)]) == 0, and falls through when a0(=[sym(pciFuncNum)]) != 0.
  The `bne` branch at 0x1006ed1c targets 0x1006ed30, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x1006ed38 targets 0x1006ec60, is taken when v0(?) >= 0x20 (signed), and falls through when v0(?) < 0x20 (signed).
  The `beq` branch at 0x1006ed44 targets 0x1006ec60, is taken when a3(=[(sym(pciBusInfo) + ([sym(pciBusNum)] << 0x2))]) == 0, and falls through when a3(=[(sym(pciBusInfo) + ([sym(pciBusNum)] << 0x2))]) != 0.
  The `bne` branch at 0x1006ed54 targets 0x1006ecac, is taken when v0(?) < a2(=[[(sym(pciBusInfo) + ([sym(pciBusNum)] << 0x2))]+1]:1) (signed), and falls through when v0(?) >= a2(=[[(sym(pciBusInfo) + ([sym(pciBusNum)] << 0x2))]+1]:1) (signed).
  The `beq` branch at 0x1006ed5c targets 0x1006ec60 and is always taken.
  The `beq` branch at 0x1006ed64 targets 0x1006ef88, is taken when a3(=[sym(pciNumBuses)]) == 0, and falls through when a3(=[sym(pciNumBuses)]) != 0.
  The `bne` branch at 0x1006ed6c targets 0x1006edd8, is taken when a5(=[sym(pciBusInfo)]) != 0, and falls through when a5(=[sym(pciBusInfo)]) == 0.
  The `bne` branch at 0x1006ed8c targets 0x1006edd4, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x1006eda0 targets 0x1006edd4, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0x1006edb4 targets 0x1006edd4, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x1006edcc targets 0x1006ed80, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x1006edf4 targets 0x1006ecac and is always taken.
  The `beq` branch at 0x1006ee00 targets 0x1006ef6c, is taken when s7(=one of 0x0, 0x1) == 0, and falls through when s7(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x1006ee18 targets 0x1006ed30 and is always taken.
  The `beq` branch at 0x1006ee20 targets 0x1006ecfc, is taken when v0(=ret(pciReadLong)) == 0, and falls through when v0(=ret(pciReadLong)) != 0.
  The `beq` branch at 0x1006ee2c targets 0x1006ecfc, is taken when v0(=ret(pciReadLong)) == a5(=0xffffffffffff0000), and falls through when v0(=ret(pciReadLong)) != a5(=0xffffffffffff0000).
  The `beq` branch at 0x1006ee38 targets 0x1006ecfc, is taken when v0(=ret(pciReadLong)) == a6(=0xffff), and falls through when v0(=ret(pciReadLong)) != a6(=0xffff).
  The `bne` branch at 0x1006ee4c targets 0x1006ee60, is taken when a4(=[sym(pciBusNum)]) < a7(=[sym(pciNumBuses)]) (signed), and falls through when a4(=[sym(pciBusNum)]) >= a7(=[sym(pciNumBuses)]) (signed).
  The `beq` branch at 0x1006ee84 targets 0x1006efc0, is taken when a1(?) == a2(=0x6), and falls through when a1(?) != a2(=0x6).
  The `beq` branch at 0x1006ee9c targets 0x1006f0ac, is taken when a2(=[sym(pciDevid)]) == a3(?), and falls through when a2(=[sym(pciDevid)]) != a3(?).
  The `beq` branch at 0x1006eea4 targets 0x1006ecf8 and is always taken.
  The `beq` branch at 0x1006ef64 targets 0x1006ecb0 and is always taken.
  The `beq` branch at 0x1006ef78 targets 0x1006ee0c, is taken when v0(=ret(pciMfDev)) == 0, and falls through when v0(=ret(pciMfDev)) != 0.
  The `beq` branch at 0x1006ef80 targets 0x1006ee14 and is always taken.
  The `bne` branch at 0x1006efd0 targets 0x1006ee8c, is taken when ra(?) != at(=0x4), and falls through when ra(?) == at(=0x4).
  The `beq` branch at 0x1006eff4 targets 0x1006ee88, is taken when (s7(?) & 0xff) == 0, and falls through when (s7(?) & 0xff) != 0.
  The `beq` branch at 0x1006effc targets 0x1006ee8c, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x1006f014 targets 0x1006ee88, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x1006f024 targets 0x1006f0e4, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0x1006f098 targets 0x1006ee8c, is taken when s7(?) < at(=[sym(pciNumBuses)]) (unsigned), and falls through when s7(?) >= at(=[sym(pciNumBuses)]) (unsigned).
  The `beq` branch at 0x1006f0a4 targets 0x1006ee88 and is always taken.
  The `beq` branch at 0x1006f10c targets 0x1006f02c and is always taken.
  The return at 0x1006eedc has v0 = -0x1.
  The return at 0x1006efb8 has v0 = -0x1.
  The return at 0x1006f0dc has v0 = [sym(pciDeviceTag)].
  The instructions from 0x1006edfc to 0x1006edfc are not reached by any path from the entry, and their branches are not listed.

- `pciGenFindFirst` in `usr/X11R6/bin/XFree86` at 0x1006f140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006f140-0x1006f17c (60 bytes).
  It occupies 60 bytes.
  The `sw` at 0x1006f168 stores 4 bytes to sym(pciBusNum) +0x0.
  The `jal` at 0x1006f164 calls pciGenFindNext [0x1006ec00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x1006f174 has v0 = ret(pciGenFindNext).

- `pciCfgMech1Read` in `usr/X11R6/bin/XFree86` at 0x1006f180 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006f180-0x1006f1d4 (84 bytes).
  It occupies 84 bytes.
  The `jal` at 0x1006f1b0 calls outl [0x10070740] with a0=0xcf8, a1=?, a2=0xffffffff80000000, a3=a0 at entry (arg0).
  The `jal` at 0x1006f1bc calls inl [0x10070a40] with a0=0xcfc, a1=?, a2=?, a3=?.
  The return at 0x1006f1cc has v0 = ret(inl).

- `pciCfgMech1Write` in `usr/X11R6/bin/XFree86` at 0x1006f200 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006f200-0x1006f260 (96 bytes).
  It occupies 96 bytes.
  The `jal` at 0x1006f234 calls outl [0x10070740] with a0=0xcf8, a1=?, a2=0xffffffff80000000, a3=0x1d6a74.
  The `jal` at 0x1006f244 calls outl [0x10070740] with a0=0xcfc, a1=a2 at entry (arg2), a2=?, a3=?.
  The return at 0x1006f258 has v0 = ret(outl).

- `pciCfgMech1SetBits` in `usr/X11R6/bin/XFree86` at 0x1006f280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006f280-0x1006f2fc (124 bytes).
  It occupies 124 bytes.
  The `jal` at 0x1006f2b8 calls outl [0x10070740] with a0=0xcf8, a1=?, a2=0xffffffff80000000, a3=0x1d69f4.
  The `jal` at 0x1006f2c4 calls inl [0x10070a40] with a0=0xcfc, a1=?, a2=?, a3=?.
  The `jal` at 0x1006f2e0 calls outl [0x10070740] with a0=0xcfc, a1=?, a2=?, a3=?.
  The return at 0x1006f2f4 has v0 = ret(outl).

- `pciByteSwap` in `usr/X11R6/bin/XFree86` at 0x1006f300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006f300-0x1006f330 (48 bytes).
  It occupies 48 bytes.
  The return at 0x1006f328 has v0 = ?.

- `pciReadLongNULL` in `usr/X11R6/bin/XFree86` at 0x1006f340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006f340-0x1006f348 (8 bytes).
  It occupies 8 bytes.
  The return at 0x1006f340 has v0 = -0x1.

- `pciWriteLongNULL` in `usr/X11R6/bin/XFree86` at 0x1006f380 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006f380-0x1006f388 (8 bytes).
  It occupies 8 bytes.
  The return at 0x1006f380 has v0 = ?.

- `pciSetBitsLongNULL` in `usr/X11R6/bin/XFree86` at 0x1006f3c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006f3c0-0x1006f3c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x1006f3c0 has v0 = ?.

- `pciAddrNOOP` in `usr/X11R6/bin/XFree86` at 0x1006f400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006f400-0x1006f408 (8 bytes).
  It occupies 8 bytes.
  The return at 0x1006f400 has v0 = a2.

- `xf86scanpci` in `usr/X11R6/bin/XFree86` at 0x1006f440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006f440-0x1006f8e8 (1192 bytes).
  It occupies 1192 bytes.
  The `lw` at 0x1006f460 loads 4 bytes from abs 0x10247530.
  The `sw` at 0x1006f518 stores 4 bytes to ret(Xalloc) +0x350.
  The `sw` at 0x1006f538 stores 4 bytes to ret(Xalloc) +0x354.
  The `sw` at 0x1006f558 stores 4 bytes to ret(Xalloc) +0x358.
  The `sw` at 0x1006f578 stores 4 bytes to ret(Xalloc) +0x35c.
  The `sw` at 0x1006f598 stores 4 bytes to ret(Xalloc) +0x360.
  The `sw` at 0x1006f5b8 stores 4 bytes to ret(Xalloc) +0x364.
  The `sw` at 0x1006f5d4 stores 4 bytes to ret(Xalloc) +0x368.
  3 such `lbu` accesses load 1 byte from ret(Xalloc) +0x1d, including `lbu` at 0x1006f5d8, `lbu` at 0x1006f6e0, `lbu` at 0x1006f724.
  The `sw` at 0x1006f5e4 stores 4 bytes to ret(Xalloc) +0x370.
  The `lw` at 0x1006f5e8 loads 4 bytes from ret(Xalloc) +0x4.
  The `lw` at 0x1006f5ec loads 4 bytes from ret(Xalloc) +0x8.
  The `lw` at 0x1006f5f0 loads 4 bytes from ret(Xalloc) +0xc.
  The `lhu` at 0x1006f5f4 loads 2 bytes from ret(Xalloc) +0x12.
  The `lhu` at 0x1006f5f8 loads 2 bytes from ret(Xalloc) +0x10.
  The `lhu` at 0x1006f5fc loads 2 bytes from ret(Xalloc) +0x3e.
  The `lhu` at 0x1006f604 loads 2 bytes from ret(Xalloc) +0x3c.
  The `lbu` at 0x1006f60c loads 1 byte from ret(Xalloc) +0x1b.
  The `lbu` at 0x1006f614 loads 1 byte from ret(Xalloc) +0x18.
  The `lbu` at 0x1006f61c loads 1 byte from ret(Xalloc) +0x19.
  The `lbu` at 0x1006f624 loads 1 byte from ret(Xalloc) +0x1a.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x1006f648, `sw` at 0x1006f6d4.
  The `sw` at 0x1006f690 stores 4 bytes to ret(Xalloc) +0x0.
  The `sw` at 0x1006f69c stores 4 bytes to ret(Xalloc) +0x4.
  The `sw` at 0x1006f6a8 stores 4 bytes to ret(Xalloc) +0xc.
  The `sw` at 0x1006f6b8 stores 4 bytes to ret(Xalloc) +0x8.
  The `lbu` at 0x1006f6f8 loads 1 byte from ret(Xalloc) +0x4d.
  The `lw` at 0x1006f74c loads 4 bytes from table(0x1024752c) +0x0.
  The `lbu` at 0x1006f750 loads 1 byte from entry(0x1024752c) +0x1d.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1006f778, `lw` at 0x1006f7cc, `lw` at 0x1006f7d8.
  4 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x1006f7dc, `lbu` at 0x1006f804, `lbu` at 0x1006f81c.
  The `lbu` at 0x1006f8c4 loads 1 byte from entry(0x1024752c) +0x4d.
  The `lw` at 0x1006f8dc loads 4 bytes from entry(0x1024752c) +0x0.
  The `jal` at 0x1006f488 calls pciInit [0x1006dd80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1006f49c calls pciFindFirst [0x1006de00] with a0=0x0, a1=0x0, a2=?, a3=?.
  The `jal` at 0x1006f4cc calls xf86MsgVerb [0x1003f680] with a0=0x7, a1=0x2, a2=0x101fd160, a3=?.
  The `jal` at 0x1006f50c calls pciGetBaseSize [0x1006e700] with a0=?, a1=0x0, a2=0x0, a3=ret(Xalloc)+876.
  The `jal` at 0x1006f52c calls pciGetBaseSize [0x1006e700] with a0=?, a1=0x1, a2=0x0, a3=ret(Xalloc)+876.
  The `jal` at 0x1006f54c calls pciGetBaseSize [0x1006e700] with a0=?, a1=0x2, a2=0x0, a3=ret(Xalloc)+876.
  The `jal` at 0x1006f56c calls pciGetBaseSize [0x1006e700] with a0=?, a1=0x3, a2=0x0, a3=ret(Xalloc)+876.
  The `jal` at 0x1006f58c calls pciGetBaseSize [0x1006e700] with a0=?, a1=0x4, a2=0x0, a3=ret(Xalloc)+876.
  The `jal` at 0x1006f5ac calls pciGetBaseSize [0x1006e700] with a0=?, a1=0x5, a2=0x0, a3=ret(Xalloc)+876.
  The `jal` at 0x1006f5cc calls pciGetBaseSize [0x1006e700] with a0=?, a1=0x6, a2=0x0, a3=ret(Xalloc)+876.
  The `jal` at 0x1006f638 calls xf86MsgVerb [0x1003f680] with a0=0x7, a1=0x2, a2=0x101fd1b8, a3=[ret(Xalloc)+4], a4=[ret(Xalloc)+8], a5=[ret(Xalloc)+12], a6=[ret(Xalloc)+18]:2, a7=[ret(Xalloc)+16]:2.
  The `jal` at 0x1006f644 calls pciFindNext [0x1006de80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1006f674 calls Xalloc [0x100ddd00] with a0=0x374, a1=?, a2=?, a3=?.
  The `jal` at 0x1006f6c8 calls pciReadLong [0x1006df00] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1006f718 calls pciWriteByte [0x1006e280] with a0=?, a1=0x3e, a2=?, a3=[ret(Xalloc)+77]:1.
  The `jal` at 0x1006f7ac calls xf86MsgVerb [0x1003f680] with a0=0x7, a1=0x2, a2=0x101fd218, a3=?.
  The `jal` at 0x1006f7d0 calls pciWriteByte [0x1006e280] with a0=?, a1=0x3e, a2=?, a3=?.
  The `jal` at 0x1006f854 calls pciWriteByte [0x1006e280] with a0=?, a1=0x3e, a2=?, a3=?.
  The `jal` at 0x1006f890 calls xf86Msg [0x1003f700] with a0=0x5, a1=0x101fd188, a2=?, a3=?.
  The `jal` at 0x1006f8d8 calls pciWriteByte [0x1006e280] with a0=[entry(0x1024752c)], a1=0x3e, a2=[entry(0x1024752c)+77]:1, a3=entry(0x1024752c).
  The `beq` branch at 0x1006f464 targets 0x1006f480, is taken when at(=[0x10247530]) == 0, and falls through when at(=[0x10247530]) != 0.
  The `beq` branch at 0x1006f4a8 targets 0x1006f864, is taken when v0(=ret(pciFindFirst)) == t9(=-0x1), and falls through when v0(=ret(pciFindFirst)) != t9(=-0x1).
  The `beq` branch at 0x1006f4f0 targets 0x1006f670 and is always taken.
  The `beq` branch at 0x1006f660 targets 0x1006f728, is taken when t9(?) >= 0x40 (signed), and falls through when t9(?) < 0x40 (signed).
  The `beq` branch at 0x1006f66c targets 0x1006f728, is taken when v0(=ret(pciFindNext)) == ra(=-0x1), and falls through when v0(=ret(pciFindNext)) != ra(=-0x1).
  The `beq` branch at 0x1006f67c targets 0x1006f880, is taken when v0(=ret(Xalloc)) == 0, and falls through when v0(=ret(Xalloc)) != 0.
  The `bne` branch at 0x1006f6d8 targets 0x1006f6c0, is taken when s1(?) != s3(=ret(Xalloc)+68), and falls through when s1(?) == s3(=ret(Xalloc)+68).
  The `beq` branch at 0x1006f6e8 targets 0x1006f4f8, is taken when (v0(=[ret(Xalloc)+29]:1) & 0x7f) == 0, and falls through when (v0(=[ret(Xalloc)+29]:1) & 0x7f) != 0.
  The `bne` branch at 0x1006f6f0 targets 0x1006f5e0, is taken when a0(?) != s6(=0x1), and falls through when a0(?) == s6(=0x1).
  The `beq` branch at 0x1006f700 targets 0x1006f5dc, is taken when (a3(=[ret(Xalloc)+77]:1) & 0x20) == 0, and falls through when (a3(=[ret(Xalloc)+77]:1) & 0x20) != 0.
  The `beq` branch at 0x1006f720 targets 0x1006f5dc and is always taken.
  The `blez` branch at 0x1006f730 targets 0x1006f77c, is taken when a3(?) <= 0 (signed), and falls through when a3(?) > 0 (signed).
  The `beq` branch at 0x1006f744 targets 0x1006f76c, is taken when (a3(?) & 0x1) == 0, and falls through when (a3(?) & 0x1) != 0.
  The `beq` branch at 0x1006f758 targets 0x1006f768, is taken when (v0(=[entry(0x1024752c)+29]:1) & 0x7f) == 0, and falls through when (v0(=[entry(0x1024752c)+29]:1) & 0x7f) != 0.
  The `beq` branch at 0x1006f760 targets 0x1006f8c4, is taken when v0(?) == s6(=0x1), and falls through when v0(?) != s6(=0x1).
  The `bnel` branch at 0x1006f774 targets 0x1006f804, is taken when v1(?) != 0, and falls through when v1(?) == 0; its branch-likely delay slot `lw a3,-4(s0)` at 0x1006f778 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x1006f7e4 targets 0x1006f7f4, is taken when (v0(?) & 0x7f) == 0, and falls through when (v0(?) & 0x7f) != 0.
  The `beq` branch at 0x1006f7ec targets 0x1006f840, is taken when v0(?) == s6(=0x1), and falls through when v0(?) != s6(=0x1).
  The `beq` branch at 0x1006f7f8 targets 0x1006f780, is taken when s0(?) == v1(=0x10247530), and falls through when s0(?) != v1(=0x10247530).
  The `beq` branch at 0x1006f80c targets 0x1006f7d8, is taken when (v0(?) & 0x7f) == 0, and falls through when (v0(?) & 0x7f) != 0.
  The `bne` branch at 0x1006f814 targets 0x1006f7d8, is taken when v0(?) != s6(=0x1), and falls through when v0(?) == s6(=0x1).
  The `bne` branch at 0x1006f824 targets 0x1006f7cc, is taken when (a2(?) & 0x20) != 0, and falls through when (a2(?) & 0x20) == 0.
  The `beq` branch at 0x1006f82c targets 0x1006f7dc and is always taken.
  The `beq` branch at 0x1006f848 targets 0x1006f7f0, is taken when (a2(?) & 0x20) == 0, and falls through when (a2(?) & 0x20) != 0.
  The `beq` branch at 0x1006f85c targets 0x1006f7f4 and is always taken.
  The `beq` branch at 0x1006f8bc targets 0x1006f46c and is always taken.
  The `beq` branch at 0x1006f8cc targets 0x1006f768, is taken when (a2(=[entry(0x1024752c)+77]:1) & 0x20) == 0, and falls through when (a2(=[entry(0x1024752c)+77]:1) & 0x20) != 0.
  The `beq` branch at 0x1006f8e0 targets 0x1006f76c and is always taken.
  The return at 0x1006f474 has v0 = one of 0x0, 0x10247530.
  The return at 0x1006f7c4 has v0 = 0x10247530.
  The return at 0x1006f878 has v0 = 0x0.
  The instructions from 0x1006f47c to 0x1006f47c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x1006f834 to 0x1006f83c are not reached by any path from the entry, and their branches are not listed.

- `pciCheckForBrokenBase` in `usr/X11R6/bin/XFree86` at 0x1006f900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006f900-0x1006f95c (92 bytes).
  It occupies 92 bytes.
  The `jal` at 0x1006f930 calls pciWriteLong [0x1006e100] with a0=a0 at entry (arg0), a1=(a1 << 0x2)+16, a2=-0x1, a3=0x1d6374.
  The `jal` at 0x1006f940 calls pciReadLong [0x1006df00] with a0=a0 at entry (arg0), a1=(a1 << 0x2)+16, a2=?, a3=?.
  The return at 0x1006f954 has v0 = ret(pciReadLong).

- `xf86MapPciMem` in `usr/X11R6/bin/XFree86` at 0x1006f980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1006f980-0x1006fad8 (344 bytes).
  It occupies 344 bytes.
  The `lw` at 0x1006faac loads 4 bytes from sym(errno) +0x0.
  The `jal` at 0x1006f9d0 calls pciBusAddrToHostAddr [0x1006e580] with a0=a2 at entry (arg2), a1=0x0, a2=a3 at entry (arg3), a3=a3 at entry (arg3).
  The `jal` at 0x1006f9f0 calls pciReadLong [0x1006df00] with a0=a2 at entry (arg2), a1=0x4, a2=?, a3=?.
  The `jal` at 0x1006fa0c calls pciWriteLong [0x1006e100] with a0=a2 at entry (arg2), a1=0x4, a2=?, a3=?.
  The `jal` at 0x1006fa30 calls xf86MapVidMem [0x10071cc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=ret(pciBusAddrToHostAddr), a3=a4 at entry (arg4).
  The `jal` at 0x1006fa5c calls xf86MapReadSideEffects [0x10072600] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=ret(xf86MapVidMem), a3=a4 at entry (arg4).
  The `jal` at 0x1006fa70 calls pciWriteLong [0x1006e100] with a0=a2 at entry (arg2), a1=0x4, a2=?, a3=?.
  The `jalr` at 0x1006faa8 calls strerror with a0=[sym(errno)], a1=?, a2=?, a3=?.
  The `jal` at 0x1006fac8 calls FatalError [0x100de400] with a0=0x101fd230, a1=a3 at entry (arg3), a2=ret(pciBusAddrToHostAddr), a3=a4 at entry (arg4), a4=ret(strerror).
  The `beq` branch at 0x1006f9e0 targets 0x1006fa1c, is taken when (s0(=a1) & 0x8) == 0, and falls through when (s0(=a1) & 0x8) != 0.
  The `beq` branch at 0x1006fa14 targets 0x1006fa24 and is always taken.
  The `beq` branch at 0x1006fa38 targets 0x1006faa0, is taken when v0(=ret(xf86MapVidMem)) == 0, and falls through when v0(=ret(xf86MapVidMem)) != 0.
  The `beq` branch at 0x1006fa44 targets 0x1006fa78, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x1006fad0 targets 0x1006fa44 and is always taken.
  The return at 0x1006fa98 has v0 = ret(xf86MapVidMem).

- `xf86ReadPciBIOS` in `usr/X11R6/bin/XFree86` at 0x10070540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10070540-0x10070574 (52 bytes).
  It occupies 52 bytes.
  The `jal` at 0x1007055c calls xf86ReadPciBIOSByType [0x10070580] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=0x0.
  The return at 0x1007056c has v0 = ret(xf86ReadPciBIOSByType).

- `xf86ReadPciBIOSByType` in `usr/X11R6/bin/XFree86` at 0x10070580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10070580-0x100705dc (92 bytes).
  It occupies 92 bytes.
  The `jal` at 0x100705c4 calls (unnamed) [0x100702c0] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x1006fe00, a3=sp-32.
  The return at 0x100705d4 has v0 = ret(0x100702c0).

- `xf86GetAvailablePciBIOSTypes` in `usr/X11R6/bin/XFree86` at 0x10070600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10070600-0x10070640 (64 bytes).
  It occupies 64 bytes.
  The `jal` at 0x10070628 calls (unnamed) [0x100702c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x10070140, a3=a2 at entry (arg2).
  The return at 0x10070638 has v0 = ret(0x100702c0).

- `sigbusHandler` in `usr/X11R6/bin/XFree86` at 0x10070640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10070640-0x1007067c (60 bytes).
  It occupies 60 bytes.
  The `jalr` at 0x10070664 calls longjmp with a0=0x10247638, a1=0x1, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x10070674 has v0 = ret(longjmp).

- `irixInitVGAIOBase` in `usr/X11R6/bin/XFree86` at 0x10070b80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10070b80-0x10070c18 (152 bytes).
  It occupies 152 bytes.
  The `lw` at 0x10070bc8 loads 4 bytes from ret(xf86GetPciInfoForEntity) +0x14.
  The `lw` at 0x10070bcc loads 4 bytes from ret(xf86GetPciInfoForEntity) +0x18.
  The `lw` at 0x10070bd4 loads 4 bytes from ret(xf86GetPciInfoForEntity) +0x1c.
  The `lw` at 0x10070be8 loads 4 bytes from ret(irixGetAndAllocDevInfo) +0x4.
  The `jal` at 0x10070b9c calls xf86GetPciInfoForEntity [0x10051c80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10070bb8 calls ErrorF [0x100de600] with a0=0x101fd330, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jal` at 0x10070bd0 calls pciTag [0x1006ea80] with a0=[ret(xf86GetPciInfoForEntity)+20], a1=[ret(xf86GetPciInfoForEntity)+24], a2=[ret(xf86GetPciInfoForEntity)+28], a3=?.
  The `jal` at 0x10070be0 calls irixGetAndAllocDevInfo [0x10072f40] with a0=ret(pciTag), a1=?, a2=?, a3=?.
  The `jal` at 0x10070c08 calls irixOpenDevIO [0x10070c80] with a0=ret(pciTag), a1=ret(irixGetAndAllocDevInfo), a2=?, a3=?.
  The `bne` branch at 0x10070ba4 targets 0x10070bc8, is taken when v0(=ret(xf86GetPciInfoForEntity)) != 0, and falls through when v0(=ret(xf86GetPciInfoForEntity)) == 0.
  The `beq` branch at 0x10070bc0 targets 0x10070bf4 and is always taken.
  The `beq` branch at 0x10070bec targets 0x10070c00, is taken when a1(=[ret(irixGetAndAllocDevInfo)+4]) == 0, and falls through when a1(=[ret(irixGetAndAllocDevInfo)+4]) != 0.
  The `beq` branch at 0x10070c10 targets 0x10070bf4 and is always taken.
  The return at 0x10070bf8 has v0 = one of ret(ErrorF), ret(irixGetAndAllocDevInfo), ret(irixOpenDevIO).

- `irixOpenDevIO` in `usr/X11R6/bin/XFree86` at 0x10070c80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10070c80-0x1007119c (1308 bytes).
  It occupies 1308 bytes.
  3 such `lw` accesses load 4 bytes from sym(pciba) +0x0, including `lw` at 0x10070c98, `lw` at 0x10070e18, `lw` at 0x10070ec8.
  The `lw` at 0x10070cd8 loads 4 bytes from ?.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0xc, including `sw` at 0x10070d4c, `sw` at 0x10070fe4.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x4, including `sw` at 0x10070d6c, `sw` at 0x10071000.
  The `sw` at 0x10070e3c stores 4 bytes to a1 (arg1 at entry) +0x10.
  The `sw` at 0x10070e44 stores 4 bytes to a1 (arg1 at entry) +0x8.
  The `lw` at 0x10071014 loads 4 bytes from sym(errno) +0x0.
  The `lw` at 0x10071024 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `jal` at 0x10070ce0 calls irixGetHwPath [0x10072ac0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10070cfc calls snprintf with a0=sp-336, a1=0x100, a2=0x101fd358, a3=ret(irixGetHwPath).
  The `jalr` at 0x10070d10 calls open with a0=sp-336, a1=0x2, a2=?, a3=?.
  The `jalr` at 0x10070d58 calls mmap with a0=0x0, a1=0x20000, a2=0x3, a3=0x1, a4=ret(open).
  The `jal` at 0x10070d80 calls ErrorF [0x100de600] with a0=0x101fd3f8, a1=sp-336, a2=?, a3=?.
  The `jalr` at 0x10070d90 calls close with a0=ret(open), a1=?, a2=?, a3=?.
  The `jal` at 0x10070da4 calls irixGetHwPath [0x10072ac0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x10070dc0 calls snprintf with a0=sp-336, a1=0x100, a2=0x101fd428, a3=ret(irixGetHwPath).
  The `jalr` at 0x10070dd4 calls open with a0=sp-336, a1=0x2, a2=?, a3=?.
  The `jalr` at 0x10070e00 calls mmap with a0=0x0, a1=[0x10240518], a2=0x3, a3=0x1, a4=ret(open).
  The `jalr` at 0x10070e24 calls close with a0=ret(open), a1=?, a2=?, a3=?.
  The `jalr` at 0x10070e90 calls open with a0=sp-336, a1=0x2, a2=?, a3=?.
  The `jalr` at 0x10070ee4 calls ioctl with a0=ret(open), a1=0x66670002, a2=0x0, a3=?.
  The `jal` at 0x10070f00 calls irixGetHwPath [0x10072ac0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x10070f1c calls snprintf with a0=sp-336, a1=0x100, a2=0x101fd438, a3=ret(irixGetHwPath).
  The `jalr` at 0x10070f2c calls open with a0=sp-336, a1=0x2, a2=?, a3=?.
  The `jal` at 0x10070f4c calls FatalError [0x100de400] with a0=0x101fd448, a1=sp-336, a2=?, a3=?, a4=ret(open).
  The `jal` at 0x10070f64 calls irixGetHwPath [0x10072ac0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x10070f80 calls snprintf with a0=sp-336, a1=0x100, a2=0x101fd378, a3=ret(irixGetHwPath).
  The `jalr` at 0x10070f90 calls open with a0=sp-336, a1=0x2, a2=?, a3=?.
  The `jal` at 0x10070fc0 calls FatalError [0x100de400] with a0=0x101fd480, a1=sp-336, a2=?, a3=?, a7=[0x10240728].
  The `jalr` at 0x10070fec calls mmap with a0=0x0, a1=0x10000, a2=0x3, a3=0x1, a4=ret(open), a6=-0x1.
  The `jal` at 0x10071018 calls FatalError [0x100de400] with a0=0x101fd3b8, a1=sp-336, a2=[sym(errno)], a3=?.
  The `jal` at 0x1007102c calls irixGetHwPath [0x10072ac0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10071048 calls snprintf with a0=sp-336, a1=0x100, a2=0x101fd368, a3=ret(irixGetHwPath).
  The `jal` at 0x1007105c calls irixGetHwPath [0x10072ac0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x10071078 calls snprintf with a0=sp-336, a1=0x100, a2=0x101fd358, a3=ret(irixGetHwPath).
  The `jalr` at 0x10071088 calls open with a0=sp-336, a1=0x2, a2=?, a3=?.
  The `jal` at 0x100710a8 calls irixGetHwPath [0x10072ac0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x100710c4 calls snprintf with a0=sp-336, a1=0x100, a2=0x101fd368, a3=ret(irixGetHwPath).
  The `jal` at 0x100710d8 calls irixGetDevPath [0x100729c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x100710e8 calls irixGetDevName [0x10072a40] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x10071104 calls snprintf with a0=sp-336, a1=0x100, a2=0x10241780, a3=ret(irixGetDevPath), a4=ret(irixGetDevName).
  The `jal` at 0x10071114 calls irixGetDevPath [0x100729c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x10071124 calls irixGetDevName [0x10072a40] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x10071140 calls snprintf with a0=sp-336, a1=0x100, a2=0x10241780, a3=ret(irixGetDevPath), a4=ret(irixGetDevName).
  The `jalr` at 0x10071168 calls ioctl with a0=ret(open), a1=0x66670002, a2=0x0, a3=?, a6=[sym(pciba)].
  The `jal` at 0x1007118c calls FatalError [0x100de400] with a0=0x101fd388, a1=sp-336, a2=?, a3=?.
  The `beq` branch at 0x10070cd4 targets 0x10070e6c, is taken when at(=[sym(pciba)]) == 0, and falls through when at(=[sym(pciba)]) != 0.
  The `bltz` branch at 0x10070d1c targets 0x10070f5c, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The `beq` branch at 0x10070d68 targets 0x10070fd0, is taken when v0(=ret(mmap)) == a6(=-0x1), and falls through when v0(=ret(mmap)) != a6(=-0x1).
  The `beq` branch at 0x10070d88 targets 0x10070ec4, is taken when s1(?) == s5(=0x1002), and falls through when s1(?) != s5(=0x1002).
  The `beq` branch at 0x10070d9c targets 0x10070ea8, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bltz` branch at 0x10070ddc targets 0x10070ef4, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The `bne` branch at 0x10070e0c targets 0x10070e20, is taken when s1(?) != s5(=0x1002), and falls through when s1(?) == s5(=0x1002).
  The `beq` branch at 0x10070e1c targets 0x10071158, is taken when a6(=[sym(pciba)]) == 0, and falls through when a6(=[sym(pciba)]) != 0.
  The `beq` branch at 0x10070e40 targets 0x10070fb0, is taken when a7(=[0x10240728]) == t0(=-0x1), and falls through when a7(=[0x10240728]) != t0(=-0x1).
  The `beq` branch at 0x10070e78 targets 0x10071028, is taken when s1(?) == t2(=0x10de), and falls through when s1(?) != t2(=0x10de).
  The `beq` branch at 0x10070e80 targets 0x100710d4, is taken when s1(?) == s5(=0x1002), and falls through when s1(?) != s5(=0x1002).
  The `bltz` branch at 0x10070e98 targets 0x10071058, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The `beq` branch at 0x10070ea0 targets 0x10070d34 and is always taken.
  The `beq` branch at 0x10070eac targets 0x100710a8, is taken when s1(?) == t3(=0x10de), and falls through when s1(?) != t3(=0x10de).
  The `beq` branch at 0x10070eb4 targets 0x10071114, is taken when s1(?) == s5(=0x1002), and falls through when s1(?) != s5(=0x1002).
  The `beq` branch at 0x10070ebc targets 0x10070dcc and is always taken.
  The `bne` branch at 0x10070ecc targets 0x10070d90, is taken when t8(=[sym(pciba)]) != 0, and falls through when t8(=[sym(pciba)]) == 0.
  The `beq` branch at 0x10070eec targets 0x10070d90 and is always taken.
  The `beq` branch at 0x10070ef8 targets 0x10070f38, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bgez` branch at 0x10070f38 targets 0x10070de8, is taken when s2(=ret(open)) >= 0 (signed), and falls through when s2(=ret(open)) < 0 (signed).
  The `beq` branch at 0x10070f54 targets 0x10070de8 and is always taken.
  The `bltz` branch at 0x10070f98 targets 0x10071180, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The `beq` branch at 0x10070fa8 targets 0x10070d34 and is always taken.
  The `beq` branch at 0x10070fc8 targets 0x10070e4c and is always taken.
  The `bne` branch at 0x10070ffc targets 0x10070d70, is taken when v0(=ret(mmap)) != a1(=-0x1), and falls through when v0(=ret(mmap)) == a1(=-0x1).
  The `beq` branch at 0x10071020 targets 0x10070d70 and is always taken.
  The `beq` branch at 0x10071050 targets 0x10070e88 and is always taken.
  The `bltz` branch at 0x10071090 targets 0x10070f60, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The `beq` branch at 0x100710a0 targets 0x10070d34 and is always taken.
  The `beq` branch at 0x100710cc targets 0x10070dcc and is always taken.
  The `beq` branch at 0x1007110c targets 0x10070e88 and is always taken.
  The `beq` branch at 0x10071150 targets 0x10070dcc and is always taken.
  The `beq` branch at 0x10071170 targets 0x10070e24 and is always taken.
  The `beq` branch at 0x10071194 targets 0x10070fa4 and is always taken.
  The return at 0x10070e64 has v0 = a1.
  The instructions from 0x10071178 to 0x1007117c are not reached by any path from the entry, and their branches are not listed.

- `xf86DisableIO` in `usr/X11R6/bin/XFree86` at 0x100711c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x100711c0-0x100712a4 (228 bytes).
  It occupies 228 bytes.
  The `lw` at 0x100711e0 loads 4 bytes from sym(irixPci0) +0x20.
  3 such `lw` accesses load 4 bytes from [sym(irixPci0)+32] +0x8, including `lw` at 0x100711e4, `lw` at 0x10071238, `lw` at 0x1007126c.
  7 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1007120c, `lw` at 0x10071220, `lw` at 0x10071224.
  2 such `lw` accesses load 4 bytes from [sym(irixPci0)+32] +0x4, including `lw` at 0x10071218, `lw` at 0x1007124c.
  The `jalr` at 0x10071210 calls munmap with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x10071230 calls munmap with a0=?, a1=?, a2=?, a3=?.
  The `blez` branch at 0x100711f8 targets 0x10071284, is taken when at(=[[sym(irixPci0)+32]+8]) <= 0 (signed), and falls through when at(=[[sym(irixPci0)+32]+8]) > 0 (signed).
  The `beq` branch at 0x10071200 targets 0x1007124c and is always taken.
  The `beq` branch at 0x10071228 targets 0x10071238, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x10071244 targets 0x10071284, is taken when s1(?) >= a4(=[[sym(irixPci0)+32]+8]) (signed), and falls through when s1(?) < a4(=[[sym(irixPci0)+32]+8]) (signed).
  The `bne` branch at 0x1007125c targets 0x10071208, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x10071264 targets 0x10071230, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `bne` branch at 0x1007127c targets 0x10071254, is taken when s1(?) < a3(=[[sym(irixPci0)+32]+8]) (signed), and falls through when s1(?) >= a3(=[[sym(irixPci0)+32]+8]) (signed).
  The return at 0x1007129c has v0 = one of ?, ret(munmap).

- `xf86ReadBIOS` in `usr/X11R6/bin/XFree86` at 0x10071500 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10071500-0x100715dc (220 bytes).
  It occupies 220 bytes.
  The `jal` at 0x10071550 calls ErrorF [0x100de600] with a0=0x101fd580, a1=a0 at entry (arg0), a2=a1 at entry (arg1), a3=a2 at entry (arg2), a4=a3 at entry (arg3).
  The `jalr` at 0x1007157c calls memcpy with a0=a2 at entry (arg2), a1=(a0 + a1), a2=a3 at entry (arg3), a3=?.
  The `jal` at 0x100715b4 calls ErrorF [0x100de600] with a0=0x101fd5b8, a1=a0 at entry (arg0), a2=a3 at entry (arg3), a3=?.
  The `beq` branch at 0x10071558 targets 0x100715a4, is taken when s2(=a2) == 0, and falls through when s2(=a2) != 0.
  The `bne` branch at 0x10071564 targets 0x100715a8, is taken when s0(=a0) < a0(=0x100000) (unsigned), and falls through when s0(=a0) >= a0(=0x100000) (unsigned).
  The return at 0x1007159c has v0 = a3.
  The return at 0x100715d4 has v0 = -0x1.

- `xf86DisableInterrupts` in `usr/X11R6/bin/XFree86` at 0x10071600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10071600-0x1007163c (60 bytes).
  It occupies 60 bytes.
  The `jal` at 0x10071620 calls ErrorF [0x100de600] with a0=0x101fd5f0, a1=0x1d4674, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x10071634 has v0 = 0x1.

- `xf86MapVidMem` in `usr/X11R6/bin/XFree86` at 0x10071cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10071cc0-0x1007254c (2188 bytes).
  It occupies 2188 bytes.
  The `lw` at 0x10071cdc loads 4 bytes from sym(xf86Screens) +0x0.
  The `lw` at 0x10071cf0 loads 4 bytes from ([sym(xf86Screens)] + (a0 << 0x2)) +0x0.
  The `lw` at 0x10071cf8 loads 4 bytes from [([sym(xf86Screens)] + (a0 << 0x2))] +0xdc.
  The `lw` at 0x10071d0c loads 4 bytes from [[([sym(xf86Screens)] + (a0 << 0x2))]+220] +0x0.
  The `lw` at 0x10071d10 loads 4 bytes from ret(xf86GetEntityInfo) +0x4.
  The `lw` at 0x10071d48 loads 4 bytes from ret(xf86GetEntityInfo) +0x0.
  2 such `lw` accesses load 4 bytes from ret(xf86GetPciInfoForEntity) +0x14, including `lw` at 0x10071d60, `lw` at 0x10072094.
  The `lw` at 0x10071d74 loads 4 bytes from ret(xf86GetPciInfoForEntity) +0x1c.
  The `lw` at 0x10071d7c loads 4 bytes from ret(xf86GetPciInfoForEntity) +0x18.
  The `lw` at 0x10071d84 loads 4 bytes from (sym(irixHwDev) + ((([ret(xf86GetPciInfoForEntity)+20] << 0x5) + [ret(xf86GetPciInfoForEntity)+20]) << 0x3)) +0x0.
  16 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10071e34, `lw` at 0x10071e3c, `lw` at 0x10071eb8.
  3 such `lw` accesses load 4 bytes from sym(pciba) +0x0, including `lw` at 0x10071f0c, `lw` at 0x10071fe4, `lw` at 0x10072280.
  3 such `sw` accesses store 4 bytes to ?, including `sw` at 0x10071fd0, `sw` at 0x10071fd8, `sw` at 0x10071fdc.
  The `sb` at 0x100720f4 stores 1 byte to (ret(strlen) + sp-496) -0x2.
  The `sb` at 0x10072104 stores 1 byte to (ret(strlen) + sp-496) -0x3.
  3 such `lw` accesses load 4 bytes from sym(errno) +0x0, including `lw` at 0x1007211c, `lw` at 0x1007217c, `lw` at 0x100721ac.
  The `lw` at 0x100724f4 loads 4 bytes from ret(irixGetAndAllocDevInfo) +0x48.
  The `lw` at 0x10072500 loads 4 bytes from ret(irixGetAndAllocDevInfo) +0x64.
  The `jal` at 0x10071d08 calls xf86GetEntityInfo [0x10053800] with a0=[[[([sym(xf86Screens)] + (a0 << 0x2))]+220]], a1=[sym(xf86Screens)], a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=0x1d3fb4.
  The `jal` at 0x10071d3c calls FatalError [0x100de400] with a0=0x101fd718, a1=?, a2=?, a3=?, a5=[ret(xf86GetEntityInfo)+4], a6=0x2.
  The `jal` at 0x10071d50 calls xf86GetPciInfoForEntity [0x10051c80] with a0=[ret(xf86GetEntityInfo)], a1=?, a2=?, a3=?.
  The `jal` at 0x10071d88 calls pciTag [0x1006ea80] with a0=[ret(xf86GetPciInfoForEntity)+20], a1=[ret(xf86GetPciInfoForEntity)+24], a2=[ret(xf86GetPciInfoForEntity)+28], a3=[(sym(irixHwDev) + ((([ret(xf86GetPciInfoForEntity)+20] << 0x5) + [ret(xf86GetPciInfoForEntity)+20]) << 0x3))], a4=((([ret(xf86GetPciInfoForEntity)+20] << 0x5) + [ret(xf86GetPciInfoForEntity)+20]) << 0x3).
  The `jal` at 0x10071d98 calls irixGetAndAllocDevInfo [0x10072f40] with a0=ret(pciTag), a1=?, a2=?, a3=?.
  The `jalr` at 0x10071db0 calls strlen with a0=0x101fd778, a1=?, a2=?, a3=?.
  The `jalr` at 0x10071dc4 calls strlen with a0=ret(irixGetAndAllocDevInfo)+616, a1=?, a2=?, a3=?.
  The `jalr` at 0x10071dec calls snprintf with a0=ret(xf86GetPciInfoForEntity)+148, a1=(ret(strlen) + ret(strlen))+3, a2=0x10241798, a3=0x101fd778, a4=ret(irixGetAndAllocDevInfo)+616.
  The `jalr` at 0x10071df8 calls getpagesize with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x10071e88 calls ErrorF [0x100de600] with a0=0x101fd7b0, a1=?, a2=?, a3=?.
  The `jal` at 0x10071ea0 calls FatalError [0x100de400] with a0=0x101fd7e0, a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=?.
  The `jal` at 0x10071ecc calls irixGetHwPath [0x10072ac0] with a0=ret(pciTag), a1=?, a2=?, a3=?.
  The `jalr` at 0x10071ef0 calls snprintf with a0=sp-752, a1=0x100, a2=0x101fd808, a3=ret(irixGetHwPath).
  The `jalr` at 0x10071f00 calls strcpy with a0=sp-496, a1=sp-752, a2=?, a3=?.
  The `jalr` at 0x10071f54 calls open with a0=sp-752, a1=0x2, a2=?, a3=?.
  The `jalr` at 0x10071f74 calls strcpy with a0=sp-752, a1=sp-496, a2=?, a3=?.
  The `jalr` at 0x10071fa4 calls mmap with a0=0x0, a1=?, a2=0x3, a3=0x1, a4=ret(open).
  The `jal` at 0x10071fc0 calls ErrorF [0x100de600] with a0=0x101fd840, a1=sp-752, a2=ret(mmap), a3=?.
  The `jalr` at 0x10071ff0 calls close with a0=ret(open), a1=?, a2=?, a3=?.
  The `jal` at 0x10072088 calls FatalError [0x100de400] with a0=0x101fd748, a1=?, a2=?, a3=?.
  The `jalr` at 0x100720d8 calls strlen with a0=sp-496, a1=?, a2=?, a3=?.
  The `jalr` at 0x10072100 calls open with a0=sp-496, a1=0x2, a2=?, a3=?, a6=0x2e, a7=(ret(strlen) + sp-496).
  The `jalr` at 0x10072118 calls strerror with a0=[sym(errno)], a1=?, a2=?, a3=?.
  The `jal` at 0x10072130 calls FatalError [0x100de400] with a0=0x101fd818, a1=sp-752, a2=ret(strerror), a3=?.
  The `jalr` at 0x10072160 calls ioctl with a0=ret(open), a1=0x66670002, a2=0x0, a3=?.
  The `jal` at 0x10072180 calls ErrorF [0x100de600] with a0=0x101fd870, a1=[sym(errno)], a2=?, a3=-0x1.
  The `jalr` at 0x100721f8 calls strerror with a0=[sym(errno)], a1=?, a2=0x1002, a3=0x101fd8c0, a4=0x102417a0, a5=0x102417a8, a6=0x102417b0, a7=0x102417b8.
  The `jal` at 0x10072234 calls FatalError [0x100de400] with a0=0x101fd8d8, a1=?, a2=sp-752, a3=?, a5=a2 at entry (arg2), a7=ret(strerror).
  The `jal` at 0x10072248 calls irixGetHwPath [0x10072ac0] with a0=ret(pciTag), a1=?, a2=?, a3=?, a4=0xa0000.
  The `jalr` at 0x10072264 calls snprintf with a0=sp-752, a1=0x100, a2=0x101fd788, a3=ret(irixGetHwPath).
  The `jalr` at 0x10072274 calls strcpy with a0=sp-496, a1=sp-752, a2=?, a3=?.
  The `jalr` at 0x10072314 calls strerror with a0=[sym(errno)], a1=?, a2=0x1002, a3=0x10de.
  The `jal` at 0x10072350 calls FatalError [0x100de400] with a0=0x101fd8d8, a1=?, a2=sp-752, a3=?, a5=a2 at entry (arg2), a7=ret(strerror).
  The `jal` at 0x10072364 calls irixGetHwPath [0x10072ac0] with a0=ret(pciTag), a1=?, a2=0x10de, a3=[sym(pciba)], a4=0x1002.
  The `jalr` at 0x10072380 calls snprintf with a0=sp-752, a1=0x100, a2=0x101fd7a0, a3=ret(irixGetHwPath).
  The `jal` at 0x10072394 calls irixGetDevPath [0x100729c0] with a0=ret(pciTag), a1=?, a2=0x10de, a3=[sym(pciba)], a4=0x1002.
  The `jal` at 0x100723a4 calls irixGetDevName [0x10072a40] with a0=ret(pciTag), a1=?, a2=?, a3=?.
  The `jalr` at 0x100723c0 calls snprintf with a0=sp-752, a1=0x100, a2=0x10241798, a3=?, a4=ret(irixGetDevName).
  The `jalr` at 0x100723ec calls open with a0=sp-496, a1=0x2, a2=?, a3=?.
  The `jalr` at 0x1007243c calls strerror with a0=[sym(errno)], a1=?, a2=?, a3=0x10de.
  The `jal` at 0x10072478 calls FatalError [0x100de400] with a0=0x101fd8d8, a1=?, a2=sp-752, a3=?, a5=a2 at entry (arg2), a7=ret(strerror).
  The `jal` at 0x1007248c calls irixGetHwPath [0x10072ac0] with a0=ret(pciTag), a1=?, a2=?, a3=[sym(pciba)], a5=0x1, a7=0x10de.
  The `jalr` at 0x100724a8 calls snprintf with a0=sp-752, a1=0x100, a2=0x101fd7a0, a3=ret(irixGetHwPath).
  The `jal` at 0x100724c0 calls irixGetDevPath [0x100729c0] with a0=ret(pciTag), a1=?, a2=?, a3=[sym(pciba)], a5=0x1, a7=0x10de.
  The `jal` at 0x100724d0 calls irixGetDevName [0x10072a40] with a0=ret(pciTag), a1=?, a2=?, a3=?.
  The `jalr` at 0x100724ec calls snprintf with a0=sp-752, a1=0x100, a2=0x10241798, a3=ret(irixGetDevPath), a4=ret(irixGetDevName).
  The `beq` branch at 0x10071d2c targets 0x10071d44, is taken when a5(=[ret(xf86GetEntityInfo)+4]) == a6(=0x2), and falls through when a5(=[ret(xf86GetEntityInfo)+4]) != a6(=0x2).
  The `beq` branch at 0x10071d58 targets 0x10072080, is taken when v0(=ret(xf86GetPciInfoForEntity)) == 0, and falls through when v0(=ret(xf86GetPciInfoForEntity)) != 0.
  The `beq` branch at 0x10071e10 targets 0x10072244, is taken when s0(=a2) == a4(=0xa0000), and falls through when s0(=a2) != a4(=0xa0000).
  The `beq` branch at 0x10071e24 targets 0x10071e34 and is always taken.
  The `beq` branch at 0x10071e2c targets 0x10071e7c, is taken when a4(?) == t2(=ret(xf86GetPciInfoForEntity)-28), and falls through when a4(?) != t2(=ret(xf86GetPciInfoForEntity)-28).
  The `beq` branch at 0x10071e40 targets 0x10071e2c, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0x10071e48 targets 0x10071e2c, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bne` branch at 0x10071e58 targets 0x10071e2c, is taken when a1(?) < s1(=a3) (unsigned), and falls through when a1(?) >= s1(=a3) (unsigned).
  The `bne` branch at 0x10071e60 targets 0x10071e2c, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bltz` branch at 0x10071e6c targets 0x10071e84, is taken when s7(?) < 0 (signed), and falls through when s7(?) >= 0 (signed).
  The `beq` branch at 0x10071e74 targets 0x10071eac and is always taken.
  The `beq` branch at 0x10071f10 targets 0x10072098, is taken when a3(=[sym(pciba)]) == 0, and falls through when a3(=[sym(pciba)]) != 0.
  The `beq` branch at 0x10071f2c targets 0x10071f4c, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x10071f44 targets 0x10072040, is taken when a6(?) >= a7(?) (unsigned), and falls through when a6(?) < a7(?) (unsigned).
  The `bltz` branch at 0x10071f5c targets 0x100720c0, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The `beq` branch at 0x10071f68 targets 0x10071f7c, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bltz` branch at 0x10071f7c targets 0x10072110, is taken when s6(=ret(open)) < 0 (signed), and falls through when s6(=ret(open)) >= 0 (signed).
  The `beq` branch at 0x10071fe8 targets 0x10072140, is taken when a2(=[sym(pciba)]) == 0, and falls through when a2(=[sym(pciba)]) != 0.
  The `beq` branch at 0x10071ffc targets 0x10072170, is taken when s1(?) == a3(=-0x1), and falls through when s1(?) != a3(=-0x1).
  The `beq` branch at 0x10072090 targets 0x10071d64 and is always taken.
  The `beq` branch at 0x100720a0 targets 0x10072360, is taken when a1(?) == a2(=0x10de), and falls through when a1(?) != a2(=0x10de).
  The `beq` branch at 0x100720a8 targets 0x10072394, is taken when a1(?) == a4(=0x1002), and falls through when a1(?) != a4(=0x1002).
  The `beq` branch at 0x100720b4 targets 0x10071f20 and is always taken.
  The `beq` branch at 0x100720c4 targets 0x100723dc, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bgez` branch at 0x100720cc targets 0x10071f68, is taken when s6(=ret(open)) >= 0 (signed), and falls through when s6(=ret(open)) < 0 (signed).
  The `beq` branch at 0x10072108 targets 0x10071f64 and is always taken.
  The `beq` branch at 0x10072138 targets 0x10071fe0 and is always taken.
  The `bne` branch at 0x10072148 targets 0x10071ff0, is taken when a1(?) != a2(=0x1002), and falls through when a1(?) == a2(=0x1002).
  The `beq` branch at 0x10072168 targets 0x10071ff0 and is always taken.
  The `beq` branch at 0x100721a8 targets 0x10072408, is taken when a2(?) == a3(=0x10de), and falls through when a2(?) != a3(=0x10de).
  The `beq` branch at 0x100721b8 targets 0x100722d8, is taken when a1(?) == a2(=0x1002), and falls through when a1(?) != a2(=0x1002).
  The `beq` branch at 0x1007223c targets 0x10072004 and is always taken.
  The `beq` branch at 0x10072284 targets 0x100722b0, is taken when a3(=[sym(pciba)]) == 0, and falls through when a3(=[sym(pciba)]) != 0.
  The `beq` branch at 0x100722a8 targets 0x10071f24 and is always taken.
  The `beq` branch at 0x100722b8 targets 0x10072488, is taken when a6(?) == a7(=0x10de), and falls through when a6(?) != a7(=0x10de).
  The `beq` branch at 0x100722c0 targets 0x100724c0, is taken when a6(?) == t1(=0x1002), and falls through when a6(?) != t1(=0x1002).
  The `beq` branch at 0x100722d0 targets 0x100722a4 and is always taken.
  The `beq` branch at 0x10072358 targets 0x10072004 and is always taken.
  The `beq` branch at 0x1007238c targets 0x100720b4 and is always taken.
  The `beq` branch at 0x100723d4 targets 0x100720b4 and is always taken.
  The `beq` branch at 0x10072400 targets 0x100720cc and is always taken.
  The `beq` branch at 0x10072480 targets 0x10072004 and is always taken.
  The `beq` branch at 0x100724b8 targets 0x100722cc and is always taken.
  The `beq` branch at 0x100724f8 targets 0x10072530, is taken when a4(=[ret(irixGetAndAllocDevInfo)+72]) == 0, and falls through when a4(=[ret(irixGetAndAllocDevInfo)+72]) != 0.
  The `beq` branch at 0x1007250c targets 0x1007203c, is taken when a5(=[ret(irixGetAndAllocDevInfo)+100]) >= a6(?) (unsigned), and falls through when a5(=[ret(irixGetAndAllocDevInfo)+100]) < a6(?) (unsigned).
  The `beq` branch at 0x10072528 targets 0x10071f48 and is always taken.
  The `beq` branch at 0x10072544 targets 0x10071f48 and is always taken.
  The return at 0x10072034 has v0 = ?.
  The return at 0x10072078 has v0 = one of ?, table(0x0).
  The instructions from 0x100720bc to 0x100720bc are not reached by any path from the entry, and their branches are not listed.

- `xf86UnMapVidMem` in `usr/X11R6/bin/XFree86` at 0x10072580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10072580-0x10072588 (8 bytes).
  It occupies 8 bytes.
  The return at 0x10072580 has v0 = ?.

- `xf86LinearVidMem` in `usr/X11R6/bin/XFree86` at 0x100725c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x100725c0-0x100725c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x100725c0 has v0 = 0x1.

- `xf86BusAccWindowsFromOS` in `usr/X11R6/bin/XFree86` at 0x10072680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10072680-0x100726f4 (116 bytes).
  It occupies 116 bytes.
  The `jal` at 0x100726b4 calls xf86AddResToList [0x10054fc0] with a0=0x0, a1=sp-32, a2=-0x1, a3=a3 at entry (arg3).
  The `jal` at 0x100726dc calls xf86AddResToList [0x10054fc0] with a0=ret(xf86AddResToList), a1=sp-32, a2=-0x1, a3=?.
  The return at 0x100726ec has v0 = ret(xf86AddResToList).

- `xf86PciBusAccWindowsFromOS` in `usr/X11R6/bin/XFree86` at 0x10072700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10072700-0x10072774 (116 bytes).
  It occupies 116 bytes.
  The `jal` at 0x10072734 calls xf86AddResToList [0x10054fc0] with a0=0x0, a1=sp-32, a2=-0x1, a3=a3 at entry (arg3).
  The `jal` at 0x1007275c calls xf86AddResToList [0x10054fc0] with a0=ret(xf86AddResToList), a1=sp-32, a2=-0x1, a3=?.
  The return at 0x1007276c has v0 = ret(xf86AddResToList).

- `xf86IsaBusAccWindowsFromOS` in `usr/X11R6/bin/XFree86` at 0x10072780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10072780-0x100727f4 (116 bytes).
  It occupies 116 bytes.
  The `jal` at 0x100727b4 calls xf86AddResToList [0x10054fc0] with a0=0x0, a1=sp-32, a2=-0x1, a3=a3 at entry (arg3).
  The `jal` at 0x100727dc calls xf86AddResToList [0x10054fc0] with a0=ret(xf86AddResToList), a1=sp-32, a2=-0x1, a3=?.
  The return at 0x100727ec has v0 = ret(xf86AddResToList).

- `irixGetDevPath` in `usr/X11R6/bin/XFree86` at 0x100729c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x100729c0-0x10072a2c (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x100729d4 loads 4 bytes from abs 0x102400fc.
  7 such `lw` accesses load 4 bytes from ?, including `lw` at 0x100729e0, `lw` at 0x100729e4, `lw` at 0x100729e8.
  The `blez` branch at 0x100729f0 targets 0x10072a1c, is taken when a4(?) <= 0 (signed), and falls through when a4(?) > 0 (signed).
  The `beq` branch at 0x10072a0c targets 0x10072a24, is taken when a7(?) == a0, and falls through when a7(?) != a0.
  The `bnel` branch at 0x10072a14 targets 0x10072a04, is taken when a4(?) != 0, and falls through when a4(?) == 0; its branch-likely delay slot `lw a6,0(a3)` at 0x10072a18 runs only when taken and is annulled on fall-through.
  The return at 0x10072a1c has v0 = 0x0.
  The return at 0x10072a24 has v0 = ?.

- `irixGetDevName` in `usr/X11R6/bin/XFree86` at 0x10072a40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10072a40-0x10072aac (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x10072a54 loads 4 bytes from abs 0x102400fc.
  7 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10072a60, `lw` at 0x10072a64, `lw` at 0x10072a68.
  The `blez` branch at 0x10072a70 targets 0x10072a9c, is taken when a4(?) <= 0 (signed), and falls through when a4(?) > 0 (signed).
  The `beq` branch at 0x10072a8c targets 0x10072aa4, is taken when a7(?) == a0, and falls through when a7(?) != a0.
  The `bnel` branch at 0x10072a94 targets 0x10072a84, is taken when a4(?) != 0, and falls through when a4(?) == 0; its branch-likely delay slot `lw a6,0(a3)` at 0x10072a98 runs only when taken and is annulled on fall-through.
  The return at 0x10072a9c has v0 = 0x0.
  The return at 0x10072aa4 has v0 = ?.

- `irixGetHwPath` in `usr/X11R6/bin/XFree86` at 0x10072ac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10072ac0-0x10072b2c (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x10072ad4 loads 4 bytes from abs 0x102400fc.
  7 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10072ae0, `lw` at 0x10072ae4, `lw` at 0x10072ae8.
  The `blez` branch at 0x10072af0 targets 0x10072b1c, is taken when a4(?) <= 0 (signed), and falls through when a4(?) > 0 (signed).
  The `beq` branch at 0x10072b0c targets 0x10072b24, is taken when a7(?) == a0, and falls through when a7(?) != a0.
  The `bnel` branch at 0x10072b14 targets 0x10072b04, is taken when a4(?) != 0, and falls through when a4(?) == 0; its branch-likely delay slot `lw a6,0(a3)` at 0x10072b18 runs only when taken and is annulled on fall-through.
  The return at 0x10072b1c has v0 = 0x0.
  The return at 0x10072b24 has v0 = ?.

- `irixAllocDevInfo` in `usr/X11R6/bin/XFree86` at 0x10072b40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10072b40-0x10072d84 (580 bytes).
  It occupies 580 bytes.
  10 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10072b70, `lw` at 0x10072b74, `lw` at 0x10072b78.
  3 such `sw` accesses store 4 bytes to ?, including `sw` at 0x10072bc4, `sw` at 0x10072bd4, `sw` at 0x10072c0c.
  The `sw` at 0x10072c1c stores 4 bytes to ret(XNFalloc) +0x0.
  The `jal` at 0x10072bc8 calls XNFrealloc [0x100de080] with a0=?, a1=?, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10072bdc calls XNFalloc [0x100dddc0] with a0=0x36c, a1=?, a2=?, a3=?.
  The `jalr` at 0x10072c08 calls memset with a0=ret(XNFalloc), a1=0x0, a2=0x36c, a3=?.
  The `jalr` at 0x10072c20 calls strcpy with a0=ret(XNFalloc)+104, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x10072c34 calls strcpy with a0=ret(XNFalloc)+360, a1=0x101fd958, a2=?, a3=?.
  The `jal` at 0x10072c44 calls (unnamed) [0x10072dc0] with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `jalr` at 0x10072c60 calls strlen with a0=0x101fd958, a1=?, a2=?, a3=?.
  The `jalr` at 0x10072c70 calls strlen with a0=ret(0x10072dc0), a1=?, a2=?, a3=?.
  The `jalr` at 0x10072c80 calls malloc with a0=(ret(strlen) + ret(strlen))+4, a1=?, a2=?, a3=?.
  The `jalr` at 0x10072c94 calls strcpy with a0=ret(XNFalloc)+616, a1=ret(0x10072dc0), a2=?, a3=?.
  The `jalr` at 0x10072cb4 calls snprintf with a0=ret(malloc), a1=(ret(strlen) + ret(strlen))+3, a2=0x102417d0, a3=0x101fd958, a4=ret(0x10072dc0).
  The `jalr` at 0x10072cc4 calls strcspn with a0=ret(malloc), a1=[0x10240520], a2=?, a3=?.
  The `jalr` at 0x10072cd0 calls atoi with a0=(ret(malloc) + ret(strcspn)), a1=?, a2=?, a3=?.
  The `jalr` at 0x10072cdc calls free with a0=ret(0x10072dc0), a1=?, a2=?, a3=?.
  The `jalr` at 0x10072cec calls stat with a0=ret(malloc), a1=sp-208, a2=?, a3=?.
  The `jal` at 0x10072d04 calls FatalError [0x100de400] with a0=0x101fd968, a1=ret(malloc), a2=?, a3=?.
  The `jalr` at 0x10072d10 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jal` at 0x10072d68 calls ErrorF [0x100de600] with a0=0x101fd980, a1=?, a2=?, a3=?.
  The `blez` branch at 0x10072b88 targets 0x10072d78, is taken when a7(?) <= 0 (signed), and falls through when a7(?) > 0 (signed).
  The `beq` branch at 0x10072bac targets 0x10072d40, is taken when t9(?) == s0(=a0), and falls through when t9(?) != s0(=a0).
  The `bnel` branch at 0x10072bb4 targets 0x10072ba4, is taken when a4(?) != 0, and falls through when a4(?) == 0; its branch-likely delay slot `lw a6,0(v0)` at 0x10072bb8 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x10072c4c targets 0x10072d60, is taken when v0(=ret(0x10072dc0)) == 0, and falls through when v0(=ret(0x10072dc0)) != 0.
  The `beq` branch at 0x10072cf4 targets 0x10072d0c, is taken when v0(=ret(stat)) == 0, and falls through when v0(=ret(stat)) != 0.
  The `beq` branch at 0x10072d70 targets 0x10072d1c and is always taken.
  The `beq` branch at 0x10072d7c targets 0x10072bbc and is always taken.
  The return at 0x10072d34 has v0 = ret(XNFalloc).
  The return at 0x10072d58 has v0 = ?.
  The instructions from 0x10072d3c to 0x10072d3c are not reached by any path from the entry, and their branches are not listed.

- `irixGetAndAllocDevInfo` in `usr/X11R6/bin/XFree86` at 0x10072f40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10072f40-0x10073084 (324 bytes).
  It occupies 324 bytes.
  10 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10072f6c, `lw` at 0x10072f70, `lw` at 0x10072f74.
  3 such `sw` accesses store 4 bytes to ?, including `sw` at 0x10072fc0, `sw` at 0x10072fd0, `sw` at 0x10073004.
  The `sw` at 0x1007301c stores 4 bytes to ret(XNFalloc) +0x0.
  The `jal` at 0x10072fc4 calls XNFrealloc [0x100de080] with a0=?, a1=?, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x10072fd4 calls XNFalloc [0x100dddc0] with a0=0x36c, a1=?, a2=?, a3=?.
  The `jalr` at 0x10073000 calls memset with a0=ret(XNFalloc), a1=0x0, a2=0x36c, a3=?.
  The `jal` at 0x10073018 calls pciReadLong [0x1006df00] with a0=a0 at entry (arg0), a1=0x30, a2=?, a3=?.
  The `jal` at 0x10073074 calls pciWriteLong [0x1006e100] with a0=a0 at entry (arg0), a1=0x30, a2=(ret(pciReadLong) | 0x1), a3=?.
  The `blez` branch at 0x10072f80 targets 0x1007305c, is taken when a6(?) <= 0 (signed), and falls through when a6(?) > 0 (signed).
  The `beq` branch at 0x10072fa8 targets 0x10073044, is taken when v1(?) == s0(=a0), and falls through when v1(?) != s0(=a0).
  The `bnel` branch at 0x10072fb0 targets 0x10072fa0, is taken when a3(?) != 0, and falls through when a3(?) == 0; its branch-likely delay slot `lw a5,0(v0)` at 0x10072fb4 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x10073024 targets 0x10073068, is taken when (v0(=ret(pciReadLong)) & 0x1) == 0, and falls through when (v0(=ret(pciReadLong)) & 0x1) != 0.
  The `beq` branch at 0x10073060 targets 0x10072fb8 and is always taken.
  The `beq` branch at 0x1007307c targets 0x1007302c and is always taken.
  The return at 0x1007303c has v0 = ret(XNFalloc).
  The return at 0x10073054 has v0 = ?.

- `irixPciInit` in `usr/X11R6/bin/XFree86` at 0x100730c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x100730c0-0x10073130 (112 bytes).
  It occupies 112 bytes.
  The `sw` at 0x10073100 stores 4 bytes to sym(irixPci0) +0x20.
  The `sw` at 0x10073104 stores 4 bytes to ret(XNFalloc) +0x8.
  The `sw` at 0x10073108 stores 4 bytes to ret(XNFalloc) +0x4.
  The `sw` at 0x10073110 stores 4 bytes to sym(pciNumBuses) +0x0.
  The `sw` at 0x10073114 stores 4 bytes to sym(pciBusInfo) +0x0.
  The `sw` at 0x10073118 stores 4 bytes to sym(pciFindFirstFP) +0x0.
  The `sw` at 0x1007312c stores 4 bytes to sym(pciFindNextFP) +0x0.
  The `jal` at 0x100730dc calls XNFalloc [0x100dddc0] with a0=0xc, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x10073128 has v0 = sym(irixPciFindNext).

- `irixPciFindFirst` in `usr/X11R6/bin/XFree86` at 0x10073a00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10073a00-0x10073ba8 (424 bytes).
  It occupies 424 bytes.
  The `lw` at 0x10073a18 loads 4 bytes from sym(pciNumBuses) +0x0.
  The `sw` at 0x10073a44 stores 4 bytes to sym(pciDevNum) +0x0.
  The `sw` at 0x10073a4c stores 4 bytes to sym(pciBusNum) +0x0.
  The `sw` at 0x10073a54 stores 4 bytes to sym(pciFuncNum) +0x0.
  2 such `lw` accesses load 4 bytes from [0x10240738] +0x0, including `lw` at 0x10073a5c, `lw` at 0x10073b58.
  The `sw` at 0x10073ab4 stores 4 bytes to [0x1024073c] +0x1c.
  The `lw` at 0x10073ab8 loads 4 bytes from [0x1024073c] +0x0.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x10073ad0, `sw` at 0x10073b3c.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x10073ad4, `lw` at 0x10073b34.
  The `lw` at 0x10073b10 loads 4 bytes from sym(pciDevidMask) +0x0.
  The `lw` at 0x10073b28 loads 4 bytes from sym(pciDevid) +0x0.
  The `jal` at 0x10073a50 calls (unnamed) [0x10073700] with a0=sym(pciFuncNum), a1=sym(pciDevNum), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10073af4 calls irixAllocDevInfo [0x10072b40] with a0=?, a1=?, a2=[0x1024051c], a3=?.
  The `jal` at 0x10073b04 calls pciReadLong [0x1006df00] with a0=?, a1=0x0, a2=?, a3=?.
  The `jal` at 0x10073b70 calls irixPciFindNext [0x10073bc0] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x10073a1c targets 0x10073b88, is taken when at(=[sym(pciNumBuses)]) == 0, and falls through when at(=[sym(pciNumBuses)]) != 0.
  The `beq` branch at 0x10073a6c targets 0x10073b5c, is taken when v0(=[[0x10240738]]) == 0, and falls through when v0(=[[0x10240738]]) != 0.
  The `beq` branch at 0x10073a9c targets 0x10073b9c and is always taken.
  The `bne` branch at 0x10073aac targets 0x10073ab8, is taken when v1(=[sym(pciDevid)]) != a1(?), and falls through when v1(=[sym(pciDevid)]) == a1(?).
  The `beq` branch at 0x10073ac0 targets 0x10073b40, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x10073ac8 targets 0x10073b34, is taken when a2(=[0x1024051c]) == 0, and falls through when a2(=[0x1024051c]) != 0.
  The `beq` branch at 0x10073b0c targets 0x10073b2c, is taken when v0(=ret(pciReadLong)) == s6(=-0x1), and falls through when v0(=ret(pciReadLong)) != s6(=-0x1).
  The `beq` branch at 0x10073b14 targets 0x10073b2c, is taken when v0(=ret(pciReadLong)) == 0, and falls through when v0(=ret(pciReadLong)) != 0.
  The `beq` branch at 0x10073b1c targets 0x10073b2c, is taken when v0(=ret(pciReadLong)) == s2(=0xffffffffffff0000), and falls through when v0(=ret(pciReadLong)) != s2(=0xffffffffffff0000).
  The `bne` branch at 0x10073b24 targets 0x10073aa4, is taken when v0(=ret(pciReadLong)) != s3(=0xffff), and falls through when v0(=ret(pciReadLong)) == s3(=0xffff).
  The `beq` branch at 0x10073b2c targets 0x10073ac0 and is always taken.
  The `beq` branch at 0x10073b38 targets 0x10073ad4 and is always taken.
  The `beq` branch at 0x10073ba0 targets 0x10073ac8 and is always taken.
  The return at 0x10073b80 has v0 = ret(irixPciFindNext).
  The return at 0x10073b94 has v0 = -0x1.

- `irixPciFindNext` in `usr/X11R6/bin/XFree86` at 0x10073bc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10073bc0-0x10073bf8 (56 bytes).
  It occupies 56 bytes.
  The `lw` at 0x10073bcc loads 4 bytes from abs 0x1024073c.
  The `lw` at 0x10073bd8 loads 4 bytes from abs 0x102400f8.
  The `lw` at 0x10073bdc loads 4 bytes from [0x1024073c] +0x1c.
  The `sw` at 0x10073be0 stores 4 bytes to sym(pciDeviceTag) +0x0.
  The `lw` at 0x10073be4 loads 4 bytes from [0x1024073c] +0x0.
  The `sw` at 0x10073bec stores 4 bytes to abs 0x1024073c.
  The `beq` branch at 0x10073bd4 targets 0x10073bf0, is taken when a4(=[0x1024073c]) == 0, and falls through when a4(=[0x1024073c]) != 0.
  The return at 0x10073be8 has v0 = [[0x1024073c]+28].
  The return at 0x10073bf0 has v0 = -0x1.

- `irixPciAddrBusToHost` in `usr/X11R6/bin/XFree86` at 0x10073c00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10073c00-0x10073c7c (124 bytes).
  It occupies 124 bytes.
  2 such `lw` accesses load 4 bytes from ret(irixGetAndAllocDevInfo) +0x4, including `lw` at 0x10073c40, `lw` at 0x10073c78.
  The `jal` at 0x10073c38 calls irixGetAndAllocDevInfo [0x10072f40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x10073c68 calls irixOpenDevIO [0x10070c80] with a0=a0 at entry (arg0), a1=ret(irixGetAndAllocDevInfo), a2=[ret(irixGetAndAllocDevInfo)+4], a3=?.
  The `beq` branch at 0x10073c18 targets 0x10073c30, is taken when a1 == v1(=0x1), and falls through when a1 != v1(=0x1).
  The `beq` branch at 0x10073c44 targets 0x10073c60, is taken when a2(=[ret(irixGetAndAllocDevInfo)+4]) == 0, and falls through when a2(=[ret(irixGetAndAllocDevInfo)+4]) != 0.
  The `beq` branch at 0x10073c74 targets 0x10073c4c and is always taken.
  The return at 0x10073c28 has v0 = a2.
  The return at 0x10073c58 has v0 = [ret(irixGetAndAllocDevInfo)+4].

- `irixPciAddrHostToBus` in `usr/X11R6/bin/XFree86` at 0x10073c80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10073c80-0x10073c88 (8 bytes).
  It occupies 8 bytes.
  The return at 0x10073c80 has v0 = a2.

- `irixPciCfgRead` in `usr/X11R6/bin/XFree86` at 0x10073e40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10073e40-0x10073ec0 (128 bytes).
  It occupies 128 bytes.
  The `jal` at 0x10073e6c calls (unnamed) [0x10073cc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10073e94 calls ioctl with a0=ret(0x10073cc0), a1=(a1 | 0x40040000), a2=sp-48, a3=0x40040000.
  The `jalr` at 0x10073ea0 calls close with a0=ret(0x10073cc0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x10073e78 targets 0x10073ea8, is taken when v0(=ret(0x10073cc0)) == v1(=-0x1), and falls through when v0(=ret(0x10073cc0)) != v1(=-0x1).
  The return at 0x10073eb8 has v0 = ?.

- `irixPciCfgWrite` in `usr/X11R6/bin/XFree86` at 0x10073ec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10073ec0-0x10073f38 (120 bytes).
  It occupies 120 bytes.
  The `jal` at 0x10073ee8 calls (unnamed) [0x10073cc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10073f10 calls ioctl with a0=ret(0x10073cc0), a1=(a1 | 0xffffffff80040000), a2=sp-12, a3=0xffffffff80040000.
  The `jalr` at 0x10073f1c calls close with a0=ret(0x10073cc0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x10073ef4 targets 0x10073f24, is taken when v0(=ret(0x10073cc0)) == at(=-0x1), and falls through when v0(=ret(0x10073cc0)) != at(=-0x1).
  The return at 0x10073f30 has v0 = one of ret(0x10073cc0), ret(close).

- `irixPciCfgSetBits` in `usr/X11R6/bin/XFree86` at 0x10073f40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10073f40-0x10073ff8 (184 bytes).
  It occupies 184 bytes.
  The `jal` at 0x10073f70 calls (unnamed) [0x10073cc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x10073f94 calls ioctl with a0=ret(0x10073cc0), a1=(a1 | 0x40040000), a2=sp-64, a3=?.
  The `jalr` at 0x10073fcc calls ioctl with a0=ret(0x10073cc0), a1=(a1 | 0xffffffff80040000), a2=sp-64, a3=?, a5=a3 at entry (arg3).
  The `jalr` at 0x10073fd8 calls close with a0=ret(0x10073cc0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x10073f7c targets 0x10073fe0, is taken when v0(=ret(0x10073cc0)) == at(=-0x1), and falls through when v0(=ret(0x10073cc0)) != at(=-0x1).
  The return at 0x10073ff0 has v0 = one of ret(0x10073cc0), ret(close).

- `xf86GetPciSizeFromOS` in `usr/X11R6/bin/XFree86` at 0x100741c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x100741c0-0x100741c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x100741c0 has v0 = 0x0.

- `xf86isalnum` in `usr/X11R6/bin/XFree86` at 0x10077c40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10077c40-0x10077c6c (44 bytes).
  It occupies 44 bytes.
  The `lw` at 0x10077c4c loads 4 bytes from abs 0x1023dd7c.
  The `lw` at 0x10077c50 loads 4 bytes from sym(__libc_attr) +0x0.
  The `lw` at 0x10077c5c loads 4 bytes from ([sym(__libc_attr)] + (a0 << 0x2)) +0x4.
  The return at 0x10077c64 has v0 = ?.

- `xf86isalpha` in `usr/X11R6/bin/XFree86` at 0x10077c80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10077c80-0x10077cac (44 bytes).
  It occupies 44 bytes.
  The `lw` at 0x10077c8c loads 4 bytes from abs 0x1023dd7c.
  The `lw` at 0x10077c90 loads 4 bytes from sym(__libc_attr) +0x0.
  The `lw` at 0x10077c9c loads 4 bytes from ([sym(__libc_attr)] + (a0 << 0x2)) +0x4.
  The return at 0x10077ca4 has v0 = ?.

- `LoadDriver` in `usr/X11R6/bin/XFree86` at 0x1007f3c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1007f3c0-0x1007f40c (76 bytes).
  It occupies 76 bytes.
  The `jal` at 0x1007f3f4 calls LoadModule [0x1007ee40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x0, a3=0x0, a4=a3 at entry (arg3), a5=0x0, a6=a4 at entry (arg4), a7=a5 at entry (arg5).
  The return at 0x1007f404 has v0 = ret(LoadModule).

- `UnloadDriver` in `usr/X11R6/bin/XFree86` at 0x1007f480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1007f480-0x1007f4b8 (56 bytes).
  It occupies 56 bytes.
  The `jal` at 0x1007f4a0 calls (unnamed) [0x1007f4c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x1007f4b0 has v0 = ret(0x1007f4c0).

- `xf86XVRegisterGenericAdaptorDriver` in `usr/X11R6/bin/XFree86` at 0x10084dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10084dc0-0x10084e44 (132 bytes).
  It occupies 132 bytes.
  The `sw` at 0x10084e38 stores 4 bytes to (ret(Xrealloc) + ([0x102407a0]+1 << 0x2)) -0x4.
  The `jal` at 0x10084dec calls Xrealloc [0x100ddf80] with a0=[0x1024079c], a1=([0x102407a0] << 0x2)+4, a2=0x1c0eb4, a3=a3 at entry (arg3).
  The `bne` branch at 0x10084df8 targets 0x10084e14, is taken when v0(=ret(Xrealloc)) != 0, and falls through when v0(=ret(Xrealloc)) == 0.
  The return at 0x10084e0c has v0 = 0x0.
  The return at 0x10084e3c has v0 = 0x1.

- `VidModeCheckModeForDriver` in `usr/X11R6/bin/XFree86` at 0x1008a340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x1008a340-0x1008a3c8 (136 bytes).
  It occupies 136 bytes.
  The `lw` at 0x1008a39c loads 4 bytes from sym(xf86Screens) +0x0.
  The `lw` at 0x1008a3b4 loads 4 bytes from ([sym(xf86Screens)] + (a0 << 0x2)) +0x0.
  The `jal` at 0x1008a368 calls VidModeAvailable [0x100895c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1008a3b0 calls xf86CheckModeForDriver [0x10047740] with a0=[([sym(xf86Screens)] + (a0 << 0x2))], a1=a1 at entry (arg1), a2=0x0, a3=?.
  The `beq` branch at 0x1008a35c targets 0x1008a380, is taken when a1 == 0, and falls through when a1 != 0.
  The `bne` branch at 0x1008a378 targets 0x1008a394, is taken when v0(=ret(VidModeAvailable)) != 0, and falls through when v0(=ret(VidModeAvailable)) == 0.
  The return at 0x1008a38c has v0 = -0x1.
  The return at 0x1008a3c0 has v0 = ret(xf86CheckModeForDriver).

- `main` in `usr/X11R6/bin/XFree86` at 0x100a5ac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x100a5ac0-0x100a644c (2444 bytes).
  It occupies 2444 bytes.
  The `sw` at 0x100a5afc stores 4 bytes to sym(display) +0x0.
  The `sw` at 0x100a5b5c stores 4 bytes to sym(argcGlobal) +0x0.
  The `sw` at 0x100a5b6c stores 4 bytes to sym(argvGlobal) +0x0.
  The `lw` at 0x100a5be4 loads 4 bytes from sym(defaultDPMSOffTime) +0x0.
  The `lw` at 0x100a5be8 loads 4 bytes from sym(defaultDPMSEnabled) +0x0.
  2 such `sw` accesses store 4 bytes to sym(DPMSEnabled) +0x0, including `sw` at 0x100a5bf0, `sw` at 0x100a6350.
  2 such `lw` accesses load 4 bytes from sym(serverGeneration) +0x0, including `lw` at 0x100a5bf4, `lw` at 0x100a5c84.
  The `sh` at 0x100a5c14 stores 2 bytes to sym(DPMSPowerLevel) +0x0.
  The `lw` at 0x100a5c1c loads 4 bytes from sym(defaultScreenSaverTime) +0x0.
  The `sw` at 0x100a5c20 stores 4 bytes to sym(ScreenSaverTime) +0x0.
  The `lw` at 0x100a5c28 loads 4 bytes from sym(defaultScreenSaverInterval) +0x0.
  The `sw` at 0x100a5c2c stores 4 bytes to sym(ScreenSaverInterval) +0x0.
  The `lw` at 0x100a5c34 loads 4 bytes from sym(defaultScreenSaverBlanking) +0x0.
  The `sw` at 0x100a5c38 stores 4 bytes to sym(ScreenSaverBlanking) +0x0.
  The `lw` at 0x100a5c40 loads 4 bytes from sym(defaultScreenSaverAllowExposures) +0x0.
  The `sw` at 0x100a5c44 stores 4 bytes to sym(ScreenSaverAllowExposures) +0x0.
  The `lw` at 0x100a5c4c loads 4 bytes from sym(defaultDPMSStandbyTime) +0x0.
  The `sw` at 0x100a5c50 stores 4 bytes to sym(DPMSStandbyTime) +0x0.
  The `lw` at 0x100a5c58 loads 4 bytes from sym(defaultDPMSSuspendTime) +0x0.
  The `sw` at 0x100a5c5c stores 4 bytes to sym(DPMSSuspendTime) +0x0.
  The `sw` at 0x100a5c68 stores 4 bytes to sym(serverGeneration) +0x0.
  The `sw` at 0x100a5c70 stores 4 bytes to sym(DPMSOffTime) +0x0.
  6 such `lw` accesses load 4 bytes from sym(clients) +0x0, including `lw` at 0x100a5cac, `lw` at 0x100a6220, `lw` at 0x100a6244.
  7 such `lw` accesses load 4 bytes from sym(serverClient) +0x0, including `lw` at 0x100a5cb0, `lw` at 0x100a5cc4, `lw` at 0x100a5e28.
  The `sw` at 0x100a5cb4 stores 4 bytes to [sym(clients)] +0x0.
  The `sw` at 0x100a5cbc stores 4 bytes to sym(currentMaxClients) +0x0.
  The `sw` at 0x100a5ce4 stores 4 bytes to sym(screenInfo) +0x2c.
  2 such `sw` accesses store 4 bytes to sym(screenInfo) +0x30, including `sw` at 0x100a5ce8, `sw` at 0x100a6094.
  2 such `sw` accesses store 4 bytes to sym(screenInfo) +0x74, including `sw` at 0x100a5cf8, `sw` at 0x100a6348.
  2 such `sw` accesses store 4 bytes to sym(WindowTable) +0x0, including `sw` at 0x100a5d00, `sw` at 0x100a60c4.
  The `lw` at 0x100a5d0c loads 4 bytes from abs 0x10217678.
  The `lw` at 0x100a5d10 loads 4 bytes from abs 0x1021765c.
  The `lw` at 0x100a5d14 loads 4 bytes from abs 0x102177e8.
  The `sw` at 0x100a5d38 stores 4 bytes to sym(PixmapWidthPaddingInfo) +0x18.
  The `sw` at 0x100a5d44 stores 4 bytes to sym(PixmapWidthPaddingInfo) +0x2c.
  2 such `lw` accesses load 4 bytes from table(0x102175f8) +0x0, including `lw` at 0x100a5d50, `lw` at 0x100a5d54.
  The `sw` at 0x100a5d58 stores 4 bytes to sym(PixmapWidthPaddingInfo) +0x1c.
  The `sw` at 0x100a5d60 stores 4 bytes to sym(PixmapWidthPaddingInfo) +0x20.
  9 such `lw` accesses load 4 bytes from sym(screenInfo) +0x30, including `lw` at 0x100a5dfc, `lw` at 0x100a5e30, `lw` at 0x100a5e78.
  2 such `lw` accesses load 4 bytes from sym(screenInfo) +0x74, including `lw` at 0x100a5e04, `lw` at 0x100a6398.
  7 such `lw` accesses load 4 bytes from ?, including `lw` at 0x100a5e90, `lw` at 0x100a5ea4, `lw` at 0x100a5fac.
  The `lw` at 0x100a5f18 loads 4 bytes from sym(loadableFonts) +0x0.
  2 such `lw` accesses load 4 bytes from sym(defaultFontPath) +0x0, including `lw` at 0x100a5f24, `lw` at 0x100a6304.
  2 such `lw` accesses load 4 bytes from sym(defaultTextFont) +0x0, including `lw` at 0x100a5f48, `lw` at 0x100a63cc.
  2 such `lw` accesses load 4 bytes from sym(defaultCursorFont) +0x0, including `lw` at 0x100a5f60, `lw` at 0x100a6324.
  The `sw` at 0x100a5f6c stores 4 bytes to sym(rootCursor) +0x0.
  The `sw` at 0x100a5f88 stores 4 bytes to sym(DPMSCapableFlag) +0x0.
  3 such `lw` accesses load 4 bytes from sym(WindowTable) +0x0, including `lw` at 0x100a5f9c, `lw` at 0x100a5fcc, `lw` at 0x100a60b8.
  The `lw` at 0x100a5fd4 loads 4 bytes from [sym(WindowTable)] +0x0.
  The `lw` at 0x100a600c loads 4 bytes from sym(screenIsSaved) +0x0.
  The `lw` at 0x100a60d8 loads 4 bytes from [sym(serverClient)] +0x98.
  The `sw` at 0x100a60e4 stores 4 bytes to [sym(serverClient)] +0x98.
  The `lbu` at 0x100a60e8 loads 1 byte from sym(dispatchException) +0x0.
  The `lw` at 0x100a61bc loads 4 bytes from sym(ConnectionInfo) +0x0.
  The `sw` at 0x100a61cc stores 4 bytes to sym(ConnectionInfo) +0x0.
  The `sw` at 0x100a6210 stores 4 bytes to sym(clients) +0x0.
  5 such `sw` accesses store 4 bytes to ?, including `sw` at 0x100a623c, `sw` at 0x100a624c, `sw` at 0x100a625c.
  The `sw` at 0x100a62a4 stores 4 bytes to sym(serverClient) +0x0.
  The `jal` at 0x100a5b08 calls FatalError [0x100de400] with a0=0x10205458, a1=0x1, a2=a2 at entry (arg2), a3=0x1a01b4.
  The `jal` at 0x100a5b28 calls CheckUserParameters [0x100defc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x100a5b34 calls CheckUserAuthorization [0x100df380] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5b40 calls InitConnectionLimits [0x100d5100] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x100a5b68 calls getenv with a0=0x10205498, a1=a0 at entry (arg0), a2=a1 at entry (arg1), a3=sym(argvGlobal).
  The `jal` at 0x100a5b94 calls ProcessCommandLine [0x100dce80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x100a5c6c calls InitBlockAndWakeupHandlers [0x100923c0] with a0=sym(DPMSOffTime), a1=sym(DPMSSuspendTime), a2=sym(DPMSStandbyTime), a3=sym(ScreenSaverAllowExposures), a4=sym(ScreenSaverBlanking), a5=sym(ScreenSaverInterval), a6=sym(ScreenSaverTime).
  The `jal` at 0x100a5c78 calls OsInit [0x100e30c0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5c94 calls ResetWellKnownSockets [0x100d5780] with a0=?, a1=?, a2=?, a3=?, a7=[sym(serverGeneration)].
  The `jal` at 0x100a5cc0 calls InitClientResources [0x10093280] with a0=[sym(serverClient)], a1=0x1, a2=sym(currentMaxClients), a3=[sym(serverClient)], a4=[sym(clients)].
  The `jal` at 0x100a5cd4 calls SetInputCheck [0x100b6240] with a0=sp-144, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5cf4 calls Xalloc [0x100ddd00] with a0=0x40, a1=?, a2=?, a3=?, a5=-0x1, a6=0x10.
  The `jal` at 0x100a5d5c calls InitAtoms [0x100d0300] with a0=?, a1=?, a2=?, a3=?, a7=entry(0x102175f8).
  The `jal` at 0x100a5d68 calls InitEvents [0x100b0b00] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5d74 calls InitGlyphCaching [0x100fb340] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5d80 calls ResetClientPrivates [0x100c4980] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5d8c calls ResetScreenPrivates [0x100c4b80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5d98 calls ResetWindowPrivates [0x100c4d00] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5da4 calls ResetGCPrivates [0x100c4ec0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5db0 calls ResetPixmapPrivates [0x100c5080] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5dbc calls ResetColormapPrivates [0x100c5240] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5dc8 calls ResetFontPrivateIndex [0x100ebe40] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5dd4 calls InitCallbackManager [0x10093080] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5de0 calls InitVisualWrap [0x10031f80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5df4 calls InitOutput [0x1002eac0] with a0=sym(screenInfo), a1=a0 at entry (arg0), a2=a1 at entry (arg1), a3=?.
  The `jal` at 0x100a5e14 calls InitExtensions [0x10031e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x100a5e24 calls InitClientPrivates [0x100c0180] with a0=[sym(serverClient)], a1=?, a2=?, a3=?.
  The `jal` at 0x100a5e4c calls CreateGCperDepth [0x100d2740] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5e5c calls CreateDefaultStipple [0x100d28c0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5e6c calls CreateRootWindow [0x10095c80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5e94 calls CreateScratchPixmapsForScreen [0x100d05c0] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x100a5eb0 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5ec8 calls FatalError [0x100de400] with a0=0x102055a0, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5ee0 calls InitInput [0x10030180] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0x100a5eec calls InitAndStartDevices [0x100cbac0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5f00 calls FatalError [0x100de400] with a0=0x10205630, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5f0c calls InitFonts [0x100c9cc0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5f34 calls SetFontPath [0x100c9640] with a0=0x0, a1=0x0, a2=[sym(defaultFontPath)], a3=sp-120.
  The `jal` at 0x100a5f44 calls SetDefaultFont [0x100c54c0] with a0=[sym(defaultTextFont)], a1=?, a2=?, a3=?.
  The `jal` at 0x100a5f5c calls CreateRootCursor [0x100d3ec0] with a0=[sym(defaultCursorFont)], a1=0x0, a2=?, a3=?.
  The `jal` at 0x100a5f74 calls DPMSSupported [0x1005d2c0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5fa8 calls InitRootWindow [0x10096000] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a5fd0 calls DefineInitialRootWindow [0x100ac000] with a0=[[sym(WindowTable)]], a1=?, a2=?, a3=?.
  The `jal` at 0x100a5fe0 calls SaveScreens [0x1009bf80] with a0=0x2, a1=0x0, a2=?, a3=?.
  The `jal` at 0x100a5ff0 calls (unnamed) [0x100a6480] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a6000 calls Dispatch [0x100b6780] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a6018 calls CloseDownExtensions [0x100a7c40] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a6024 calls FreeAllResources [0x10094e00] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a6030 calls CloseDownDevices [0x100cbf00] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a6054 calls FreeScratchPixmapsForScreen [0x100d0600] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a6060 calls FreeGCperDepth [0x100d2680] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a606c calls FreeDefaultStipple [0x100d2a40] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x100a607c calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a6088 calls (unnamed) [0x100a7340] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a60a4 calls CloseDownEvents [0x100b0c80] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a60b4 calls Xfree [0x100de100] with a0=[sym(WindowTable)], a1=?, a2=?, a3=?.
  The `jal` at 0x100a60c0 calls FreeFonts [0x100ca0c0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a60d4 calls Xfree [0x100de100] with a0=[[sym(serverClient)]+152], a1=?, a2=?, a3=?.
  The `jal` at 0x100a60f8 calls CloseWellKnownConnections [0x100d5a00] with a0=?, a1=?, a2=[sym(serverClient)], a3=?.
  The `jal` at 0x100a6124 calls OsCleanup [0x100e3440] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a6130 calls ddxGiveUp [0x10030600] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a6150 calls FatalError [0x100de400] with a0=0x10205578, a1=?, a2=?, a3=?.
  The `jal` at 0x100a6168 calls FatalError [0x100de400] with a0=0x102055c8, a1=?, a2=?, a3=?.
  The `jal` at 0x100a6188 calls FatalError [0x100de400] with a0=0x102055e8, a1=?, a2=?, a3=?.
  The `jal` at 0x100a61a0 calls FatalError [0x100de400] with a0=0x10205610, a1=?, a2=[sym(screenInfo)+48], a3=?.
  The `jal` at 0x100a61b8 calls Xfree [0x100de100] with a0=[sym(ConnectionInfo)], a1=?, a2=[sym(serverClient)], a3=?.
  The `jal` at 0x100a61d4 calls InitAuthorization [0x100e25c0] with a0=ret(getenv), a1=?, a2=?, a3=?.
  The `jal` at 0x100a61e8 calls CreateWellKnownSockets [0x100d5200] with a0=?, a1=?, a2=?, a3=?, a7=[sym(serverGeneration)].
  The `jal` at 0x100a61f4 calls InitProcVectors [0x100bfa40] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x100a6200 calls Xalloc [0x100ddd00] with a0=0x400, a1=?, a2=?, a3=?.
  The `jal` at 0x100a6290 calls Xalloc [0x100ddd00] with a0=0xf8, a1=?, a2=?, a3=?, a5=0x3fc.
  The `jal` at 0x100a62b0 calls InitClient [0x100c0040] with a0=?, a1=0x0, a2=0x0, a3=?.
  The `jal` at 0x100a62d8 calls AccessSocket [0x10117e80] with a0=0x0, a1=0x0, a2=sp-136, a3=?.
  The `jal` at 0x100a62ec calls SetDefaultFontPath [0x100c9700] with a0=[sym(defaultFontPath)], a1=?, a2=[sym(defaultFontPath)], a3=[sym(loadableFonts)].
  The `jal` at 0x100a6308 calls ErrorF [0x100de600] with a0=0x10205658, a1=[sym(defaultFontPath)], a2=?, a3=?.
  The `jal` at 0x100a6328 calls FatalError [0x100de400] with a0=0x102056a8, a1=[sym(defaultCursorFont)], a2=?, a3=?.
  The `jal` at 0x100a635c calls FatalError [0x100de400] with a0=0x102054e8, a1=?, a2=?, a3=?.
  The `jal` at 0x100a6374 calls FatalError [0x100de400] with a0=0x10205508, a1=?, a2=?, a3=?.
  The `jal` at 0x100a638c calls FatalError [0x100de400] with a0=0x10205530, a1=?, a2=?, a3=?.
  The `jal` at 0x100a63a4 calls FatalError [0x100de400] with a0=0x10205548, a1=[sym(screenInfo)+48], a2=?, a3=?.
  The `jal` at 0x100a63d0 calls FatalError [0x100de400] with a0=0x10205680, a1=[sym(defaultTextFont)], a2=?, a3=?.
  The `jal` at 0x100a63e8 calls FatalError [0x100de400] with a0=0x102056d0, a1=?, a2=?, a3=?.
  The `jal` at 0x100a6408 calls SaveScreens [0x1009bf80] with a0=0x1, a1=0x0, a2=?, a3=?.
  The `jal` at 0x100a6420 calls FatalError [0x100de400] with a0=0x102054a8, a1=?, a2=sym(clients), a3=?.
  The `jal` at 0x100a6438 calls FatalError [0x100de400] with a0=0x102054c8, a1=?, a2=?, a3=?.
  The `beq` branch at 0x100a5af8 targets 0x100a5b18, is taken when at(=[0x102407f0]) == 0, and falls through when at(=[0x102407f0]) != 0.
  The `beq` branch at 0x100a5b10 targets 0x100a5b20 and is always taken.
  The `bne` branch at 0x100a5b70 targets 0x100a61d0, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `beq` branch at 0x100a5c8c targets 0x100a61e4, is taken when a7(=[sym(serverGeneration)]) == t0(=0x1), and falls through when a7(=[sym(serverGeneration)]) != t0(=0x1).
  The `beq` branch at 0x100a5cc8 targets 0x100a6354, is taken when v0(=ret(InitClientResources)) == 0, and falls through when v0(=ret(InitClientResources)) != 0.
  The `beq` branch at 0x100a5cfc targets 0x100a636c, is taken when v0(=ret(Xalloc)) == 0, and falls through when v0(=ret(Xalloc)) != 0.
  The `blez` branch at 0x100a5e00 targets 0x100a6384, is taken when t0(=[sym(screenInfo)+48]) <= 0 (signed), and falls through when t0(=[sym(screenInfo)+48]) > 0 (signed).
  The `bltz` branch at 0x100a5e08 targets 0x100a6340, is taken when t1(=[sym(screenInfo)+116]) < 0 (signed), and falls through when t1(=[sym(screenInfo)+116]) >= 0 (signed).
  The `beq` branch at 0x100a5e2c targets 0x100a639c, is taken when v0(=ret(InitClientPrivates)) == 0, and falls through when v0(=ret(InitClientPrivates)) != 0.
  The `blez` branch at 0x100a5e38 targets 0x100a5ed8, is taken when a1(=[sym(screenInfo)+48]) <= 0 (signed), and falls through when a1(=[sym(screenInfo)+48]) > 0 (signed).
  The `beq` branch at 0x100a5e40 targets 0x100a5e90 and is always taken.
  The `beq` branch at 0x100a5e54 targets 0x100a6160, is taken when v0(=ret(CreateGCperDepth)) == 0, and falls through when v0(=ret(CreateGCperDepth)) != 0.
  The `beq` branch at 0x100a5e64 targets 0x100a6180, is taken when v0(=ret(CreateDefaultStipple)) == 0, and falls through when v0(=ret(CreateDefaultStipple)) != 0.
  The `beq` branch at 0x100a5e74 targets 0x100a6198, is taken when v0(=ret(CreateRootWindow)) == 0, and falls through when v0(=ret(CreateRootWindow)) != 0.
  The `beq` branch at 0x100a5e84 targets 0x100a5ed8, is taken when s0(?) >= a2(=[sym(screenInfo)+48]) (signed), and falls through when s0(?) < a2(=[sym(screenInfo)+48]) (signed).
  The `beq` branch at 0x100a5e9c targets 0x100a614c, is taken when v0(=ret(CreateScratchPixmapsForScreen)) == 0, and falls through when v0(=ret(CreateScratchPixmapsForScreen)) != 0.
  The `beq` branch at 0x100a5ea8 targets 0x100a5e48, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bne` branch at 0x100a5eb8 targets 0x100a5e4c, is taken when v0(=ret(?)) != 0, and falls through when v0(=ret(?)) == 0.
  The `beq` branch at 0x100a5ed0 targets 0x100a5e4c and is always taken.
  The `beq` branch at 0x100a5ef4 targets 0x100a5f08, is taken when v0(=ret(InitAndStartDevices)) == 0, and falls through when v0(=ret(InitAndStartDevices)) != 0.
  The `beq` branch at 0x100a5f20 targets 0x100a62e8, is taken when a3(=[sym(loadableFonts)]) == 0, and falls through when a3(=[sym(loadableFonts)]) != 0.
  The `beq` branch at 0x100a5f4c targets 0x100a63c0, is taken when v0(=ret(SetDefaultFont)) == 0, and falls through when v0(=ret(SetDefaultFont)) != 0.
  The `beq` branch at 0x100a5f68 targets 0x100a6318, is taken when v0(=ret(CreateRootCursor)) == 0, and falls through when v0(=ret(CreateRootCursor)) != 0.
  The `beq` branch at 0x100a5f84 targets 0x100a634c, is taken when v0(=ret(DPMSSupported)) == 0, and falls through when v0(=ret(DPMSSupported)) != 0.
  The `blez` branch at 0x100a5f94 targets 0x100a5fc8, is taken when a3(=[sym(screenInfo)+48]) <= 0 (signed), and falls through when a3(=[sym(screenInfo)+48]) > 0 (signed).
  The `bne` branch at 0x100a5fc0 targets 0x100a5f9c, is taken when s1(?) < a1(=[sym(screenInfo)+48]) (signed), and falls through when s1(?) >= a1(=[sym(screenInfo)+48]) (signed).
  The `beq` branch at 0x100a5ff8 targets 0x100a63e0, is taken when v0(=ret(0x100a6480)) == 0, and falls through when v0(=ret(0x100a6480)) != 0.
  The `beq` branch at 0x100a6010 targets 0x100a6400, is taken when ra(=[sym(screenIsSaved)]) == 0, and falls through when ra(=[sym(screenIsSaved)]) != 0.
  The `bltz` branch at 0x100a6040 targets 0x100a60a0, is taken when s0(=[sym(screenInfo)+48]-1) < 0 (signed), and falls through when s0(=[sym(screenInfo)+48]-1) >= 0 (signed).
  The `bne` branch at 0x100a6098 targets 0x100a6050, is taken when s1(?) != s6(=sym(screenInfo)-4), and falls through when s1(?) == s6(=sym(screenInfo)-4).
  The `beq` branch at 0x100a60f0 targets 0x100a61b0, is taken when (a1(=[sym(dispatchException)]:1) & 0x2) == 0, and falls through when (a1(=[sym(dispatchException)]:1) & 0x2) != 0.
  The `beq` branch at 0x100a6158 targets 0x100a5ea8 and is always taken.
  The `beq` branch at 0x100a6170 targets 0x100a5e5c and is always taken.
  The `beq` branch at 0x100a6190 targets 0x100a5e6c and is always taken.
  The `beq` branch at 0x100a61a8 targets 0x100a5e7c and is always taken.
  The `beq` branch at 0x100a61c8 targets 0x100a5bd8 and is always taken.
  The `beq` branch at 0x100a61dc targets 0x100a5b78 and is always taken.
  The `beq` branch at 0x100a620c targets 0x100a6418, is taken when v0(=ret(Xalloc)) == 0, and falls through when v0(=ret(Xalloc)) != 0.
  The `bne` branch at 0x100a6238 targets 0x100a621c, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0x100a6284 targets 0x100a6240, is taken when v0(?) != a5(=0x3fc), and falls through when v0(?) == a5(=0x3fc).
  The `beq` branch at 0x100a62a0 targets 0x100a6430, is taken when v0(=ret(Xalloc)) == 0, and falls through when v0(=ret(Xalloc)) != 0.
  The `beq` branch at 0x100a62e0 targets 0x100a5ca0 and is always taken.
  The `beq` branch at 0x100a62f4 targets 0x100a5f3c, is taken when v0(=ret(SetDefaultFontPath)) == 0, and falls through when v0(=ret(SetDefaultFontPath)) != 0.
  The `beq` branch at 0x100a6310 targets 0x100a5f40 and is always taken.
  The `beq` branch at 0x100a6330 targets 0x100a5f74 and is always taken.
  The `beq` branch at 0x100a6344 targets 0x100a5e0c and is always taken.
  The `beq` branch at 0x100a634c targets 0x100a5f8c and is always taken.
  The `beq` branch at 0x100a6364 targets 0x100a5cd0 and is always taken.
  The `beq` branch at 0x100a637c targets 0x100a5d08 and is always taken.
  The `beq` branch at 0x100a6394 targets 0x100a5e08 and is always taken.
  The `beq` branch at 0x100a63ac targets 0x100a5e34 and is always taken.
  The `beq` branch at 0x100a63d8 targets 0x100a5f54 and is always taken.
  The `beq` branch at 0x100a63f0 targets 0x100a6000 and is always taken.
  The `beq` branch at 0x100a6410 targets 0x100a6018 and is always taken.
  The `beq` branch at 0x100a6428 targets 0x100a6218 and is always taken.
  The `beq` branch at 0x100a6444 targets 0x100a62a8 and is always taken.
  The return at 0x100a6144 has v0 = 0x0.
  The instructions from 0x100a6178 to 0x100a617c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x100a6338 to 0x100a633c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x100a63b4 to 0x100a63bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x100a63f8 to 0x100a63fc are not reached by any path from the entry, and their branches are not listed.

- `DisableDevice` in `usr/X11R6/bin/XFree86` at 0x100cb9c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x100cb9c0-0x100cba8c (204 bytes).
  It occupies 204 bytes.
  The `lw` at 0x100cb9dc loads 4 bytes from sym(inputInfo) +0x4.
  The `lw` at 0x100cba04 loads 4 bytes from ?.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x24, including `lw` at 0x100cba18, `lw` at 0x100cba68.
  The `lw` at 0x100cba34 loads 4 bytes from a0 (arg0 at entry) +0x14.
  The `sw` at 0x100cba38 stores 4 bytes to ?.
  The `lw` at 0x100cba40 loads 4 bytes from sym(inputInfo) +0x8.
  The `sw` at 0x100cba44 stores 4 bytes to a0 (arg0 at entry) +0x14.
  The `sw` at 0x100cba4c stores 4 bytes to sym(inputInfo) +0x8.
  The `jalr` at 0x100cba20 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x2, a2=?, a3=a3 at entry (arg3).
  The `beq` branch at 0x100cb9ec targets 0x100cba5c, is taken when a2(=[sym(inputInfo)+4]) == 0, and falls through when a2(=[sym(inputInfo)+4]) != 0.
  The `beq` branch at 0x100cb9f8 targets 0x100cba6c, is taken when a2(=[sym(inputInfo)+4]) == a0, and falls through when a2(=[sym(inputInfo)+4]) != a0.
  The `beq` branch at 0x100cba08 targets 0x100cba6c, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x100cba10 targets 0x100cba00, is taken when a2(?) != s0(=a0), and falls through when a2(?) == s0(=a0).
  The `bne` branch at 0x100cba5c targets 0x100cba74, is taken when a2(=[sym(inputInfo)+4]) != a0, and falls through when a2(=[sym(inputInfo)+4]) == a0.
  The `beq` branch at 0x100cba64 targets 0x100cba1c and is always taken.
  The `beq` branch at 0x100cba6c targets 0x100cba18, is taken when a2(?) == s0(=a0), and falls through when a2(?) != s0(=a0).
  The return at 0x100cba54 has v0 = 0x1.
  The return at 0x100cba84 has v0 = 0x0.

- `DisableLocalHost` in `usr/X11R6/bin/XFree86` at 0x100e6dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x100e6dc0-0x100e6e28 (104 bytes).
  It occupies 104 bytes.
  2 such `lh` accesses load 2 bytes from ?, including `lh` at 0x100e6df0, `lh` at 0x100e6df4.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x100e6e04, `lw` at 0x100e6e08.
  The `jal` at 0x100e6e00 calls RemoveHost [0x100e7c80] with a0=0x0, a1=?, a2=?, a3=?.
  The `beq` branch at 0x100e6de0 targets 0x100e6e18, is taken when at(=[0x10240934]) == 0, and falls through when at(=[0x10240934]) != 0.
  The `bne` branch at 0x100e6e0c targets 0x100e6df0, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The return at 0x100e6e20 has v0 = one of 0x15eeb4, ret(RemoveHost).

- `XkbDisableComputedAutoRepeats` in `usr/X11R6/bin/XFree86` at 0x10132880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10132880-0x101328fc (124 bytes).
  It occupies 124 bytes.
  The `lw` at 0x10132884 loads 4 bytes from a0 (arg0 at entry) +0x90.
  The `lw` at 0x10132888 loads 4 bytes from [a0+144] +0x158.
  The `lw` at 0x1013288c loads 4 bytes from [[a0+144]+344] +0x24.
  The `lw` at 0x10132890 loads 4 bytes from [[[a0+144]+344]+36] +0x10.
  The `lw` at 0x1013289c loads 4 bytes from [[[[a0+144]+344]+36]+16] +0x10.
  The `lbu` at 0x101328b0 loads 1 byte from ([[[[[a0+144]+344]+36]+16]+16] + a1) +0x0.
  The `sb` at 0x101328bc stores 1 byte to ([[[[[a0+144]+344]+36]+16]+16] + a1) +0x0.
  The `jal` at 0x101328e4 calls XkbSendMapNotify [0x1012a6c0] with a0=a0 at entry (arg0), a1=sp-48, a2=([([[[[[a0+144]+344]+36]+16]+16] + a1)]:1 | 0x20), a3=([[[[[a0+144]+344]+36]+16]+16] + a1), a4=0x1133f4.
  The return at 0x101328f4 has v0 = ret(XkbSendMapNotify).

- `XkbEnableDisableControls` in `usr/X11R6/bin/XFree86` at 0x10132f40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x10132f40-0x101330ac (364 bytes).
  It occupies 364 bytes.
  The `lw` at 0x10132f44 loads 4 bytes from a0 (arg0 at entry) +0x24.
  The `lw` at 0x10132f48 loads 4 bytes from [a0+36] +0xc.
  3 such `lw` accesses load 4 bytes from [[a0+36]+12] +0xc, including `lw` at 0x10132f4c, `lw` at 0x10133048, `lw` at 0x10133050.
  The `sw` at 0x10132f8c stores 4 bytes to [[a0+36]+12] +0xc.
  The `lw` at 0x10132fa0 loads 4 bytes from a3 (arg3 at entry) +0x20.
  The `lw` at 0x10132fa4 loads 4 bytes from a3 (arg3 at entry) +0x1c.
  The `sw` at 0x10132fac stores 4 bytes to a3 (arg3 at entry) +0x20.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x1c, including `sw` at 0x10132fb8, `sw` at 0x101330a8.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x28, including `lw` at 0x10132fcc, `lw` at 0x10132fdc, `lw` at 0x10133088.
  The `lw` at 0x10132fe8 loads 4 bytes from ret(XkbFindSrvLedInfo) +0x40.
  The `lbu` at 0x10133030 loads 1 byte from [[a0+36]+12] +0x1.
  The `lbu` at 0x10133060 loads 1 byte from a4 (arg4 at entry) +0x0.
  The `lbu` at 0x10133068 loads 1 byte from a4 (arg4 at entry) +0x1.
  The `lbu` at 0x10133070 loads 1 byte from a4 (arg4 at entry) +0x2.
  The `lbu` at 0x10133078 loads 1 byte from a4 (arg4 at entry) +0x3.
  The `jal` at 0x10132fd0 calls XkbFindSrvLedInfo [0x10153600] with a0=[a0+40], a1=0x300, a2=0x400, a3=0x0.
  The `jal` at 0x10132fec calls XkbUpdateIndicators [0x10152c00] with a0=[a0+40], a1=[ret(XkbFindSrvLedInfo)+64], a2=0x1, a3=a3 at entry (arg3).
  The `jal` at 0x10133084 calls XkbSendControlsNotify [0x1012ac40] with a0=[a0+40], a1=sp-80, a2=0xffffffff80000000, a3=[[[a0+36]+12]+1]:1, a6=[[[a0+36]+12]+12], a7=0xffffffff80000000.
  The `beq` branch at 0x10132f90 targets 0x10133014, is taken when t0(?) == a6(=[[[a0+36]+12]+12]), and falls through when t0(?) != a6(=[[[a0+36]+12]+12]).
  The `bne` branch at 0x10132f98 targets 0x10133030, is taken when a4 != 0, and falls through when a4 == 0.
  The `beq` branch at 0x10132fb0 targets 0x10133094, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x1013308c targets 0x10132fc4 and is always taken.
  The `beq` branch at 0x101330a4 targets 0x10132fc0 and is always taken.
  The return at 0x1013300c has v0 = 0x1.
  The return at 0x10133028 has v0 = 0x0.

- `LbxDisableSmartGrab` in `usr/X11R6/bin/XFree86` at 0x101860c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x101860c0-0x101860f8 (56 bytes).
  It occupies 56 bytes.
  The `lw` at 0x101860cc loads 4 bytes from abs 0x10240b74.
  The `lw` at 0x101860d0 loads 4 bytes from a0 (arg0 at entry) +0x48.
  The `lw` at 0x101860dc loads 4 bytes from ([a0+72] + ([0x10240b74] << 0x2)) +0x0.
  The `sb` at 0x101860ec stores 1 byte to [([a0+72] + ([0x10240b74] << 0x2))] +0x1.
  The `beq` branch at 0x101860e0 targets 0x101860f0, is taken when a3(=[([a0+72] + ([0x10240b74] << 0x2))]) == 0, and falls through when a3(=[([a0+72] + ([0x10240b74] << 0x2))]) != 0.
  The return at 0x101860e8 has v0 = ?.
  The return at 0x101860f0 has v0 = ?.

- `miRegionBreak` in `usr/X11R6/bin/XFree86` at 0x1019af40
  **Inferred.** Loads the pointer at a0+8; only when that pointer and the word it points at are both non-zero does it call `Xfree` at 0x1019af74, with the pointer as the first argument. It then loads four halfwords at offsets 0 to 6 and stores halfwords at offsets 0, 2, 4 and 6 and a word at offset 8 of its argument structure (0x1019af8c to 0x1019afb0), and returns 0x0 at 0x1019afb8. The render does not show where the loaded halfwords come from, though the name `miEmptyBox` suggests an empty-box constant. The name suggests it resets a region to an empty state, which the render does not fully confirm.
  Reviewed: 2026-11-12 (sonnet)

- `xf86BusToMem` in `usr/X11R6/bin/XFree86` at 0x101e7340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x101e7340-0x101e7374 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x101e735c calls memcpy with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x101e736c has v0 = ret(memcpy).

- `xf86MemToBus` in `usr/X11R6/bin/XFree86` at 0x101e7380 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/bin/XFree86`.
  Range: 0x101e7380-0x101e73b4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x101e739c calls memcpy with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x101e73ac has v0 = ret(memcpy).
