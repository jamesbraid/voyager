# Readings: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`

One entry per routine, filed here from the reading batches by binary.

- `_stub` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x403ce0
  **Inferred.** A run of 21 indirect calls spaced 0x14 bytes apart (0x403cec to 0x403e7c), each through the same slot at 0xfb602ac. Only the first call is shown passing a0 to a3 from entry; the render does not resolve the arguments of the others. The symbol carries no real name, so the entry describes the stub shape only and not the routine it forwards to.
  Reviewed: 2026-11-12 (sonnet)

- `OMPdestroyScreen` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x403ec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x403ec0-0x403f18 (88 bytes).
  It occupies 88 bytes.
  The `lw` at 0x403ee0 loads 4 bytes from a2 (arg2 at entry) +0xb0.
  The `jalr` at 0x403ef0 calls drmHashDestroy with a0=[a2+176], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x403efc calls free with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `beq` branch at 0x403ed8 targets 0x403f08, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x403ee4 targets 0x403ef8, is taken when a0(=[a2+176]) == 0, and falls through when a0(=[a2+176]) != 0.
  The return at 0x403f10 has v0 = one of ?, ret(free).

- `OMPdestroyContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x403f40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x403f40-0x403fa4 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x403f60 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `lw` at 0x403f6c loads 4 bytes from [a2+4] +0x88.
  The `lw` at 0x403f70 loads 4 bytes from [[a2+4]+136] +0x4.
  The `lw` at 0x403f74 loads 4 bytes from [[[a2+4]+136]+4] +0x4.
  The `lw` at 0x403f80 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `jalr` at 0x403f7c calls (unknown callee) with a0=a0 at entry (arg0), a1=[a2], a2=[a2+4], a3=a3 at entry (arg3).
  The `jalr` at 0x403f88 calls free with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `beq` branch at 0x403f58 targets 0x403f94, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x403f64 targets 0x403f94, is taken when a2(=[a2+4]) == 0, and falls through when a2(=[a2+4]) != 0.
  The return at 0x403f9c has v0 = one of ?, ret(free).

- `OMPbindContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x403fc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x403fc0-0x4040ec (300 bytes).
  It occupies 300 bytes.
  The `lw` at 0x403fc8 loads 4 bytes from a4 (arg4 at entry) +0x57c.
  3 such `lw` accesses load 4 bytes from [a4+1404] +0x4, including `lw` at 0x404000, `lw` at 0x40404c, `lw` at 0x404078.
  The `lw` at 0x40400c loads 4 bytes from [[a4+1404]+4] +0x88.
  The `lw` at 0x404014 loads 4 bytes from [[[a4+1404]+4]+136] +0x4.
  The `lw` at 0x404018 loads 4 bytes from [[[[a4+1404]+4]+136]+4] +0x8.
  The `lw` at 0x40401c loads 4 bytes from [a4+1404] +0x0.
  2 such `lw` accesses load 4 bytes from a4 (arg4 at entry) +0x28, including `lw` at 0x404058, `lw` at 0x404088.
  2 such `sw` accesses store 4 bytes to [a4+1404] +0xc, including `sw` at 0x40405c, `sw` at 0x40408c.
  The `sw` at 0x404064 stores 4 bytes to [a4+1404] +0x8.
  The `lw` at 0x40409c loads 4 bytes from [[[a4+1404]+4]+136] +0x0.
  The `jalr` at 0x40402c calls (unknown callee) with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=[[a4+1404]], a7=[[a4+1404]+4].
  The `bgezall` at 0x404054 calls __addDrawable [0x404680] with a0=a0 at entry (arg0), a1=[[a4+1404]+4], a2=a2 at entry (arg2), a3=[a4+40].
  The `bgezall` at 0x404084 calls __addDrawable [0x404680] with a0=a0 at entry (arg0), a1=[[a4+1404]+4], a2=a3 at entry (arg3), a3=[a4+40].
  The `jalr` at 0x404098 calls _glapi_set_dispatch with a0=[[[[a4+1404]+4]+136]], a1=?, a2=?, a3=?.
  The `beq` branch at 0x403ff8 targets 0x4040c4, is taken when s0(=[a4+1404]) == 0, and falls through when s0(=[a4+1404]) != 0.
  The `beq` branch at 0x404004 targets 0x4040c4, is taken when a7(=[[a4+1404]+4]) == 0, and falls through when a7(=[[a4+1404]+4]) != 0.
  The `beq` branch at 0x404034 targets 0x4040e0, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `beq` branch at 0x404060 targets 0x404090, is taken when s2(=a2) == s1(=a3), and falls through when s2(=a2) != s1(=a3).
  The `beq` branch at 0x404068 targets 0x404090, is taken when s1(=a3) == 0, and falls through when s1(=a3) != 0.
  The `beq` branch at 0x4040e4 targets 0x4040a8 and is always taken.
  The return at 0x4040bc has v0 = one of ret(?), 0x0.
  The return at 0x4040d8 has v0 = 0x0.

- `OMPunbindContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x404100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x404100-0x4041ac (172 bytes).
  It occupies 172 bytes.
  The `lw` at 0x404104 loads 4 bytes from a3 (arg3 at entry) +0x57c.
  The `lw` at 0x404120 loads 4 bytes from [a3+1404] +0x4.
  The `lw` at 0x404150 loads 4 bytes from [[a3+1404]+4] +0x88.
  The `lw` at 0x404154 loads 4 bytes from [[[a3+1404]+4]+136] +0x4.
  The `lw` at 0x404158 loads 4 bytes from [[[[a3+1404]+4]+136]+4] +0x8.
  The `sw` at 0x404190 stores 4 bytes to [a3+1404] +0xc.
  The `sw` at 0x404194 stores 4 bytes to [a3+1404] +0x8.
  The `jalr` at 0x404168 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x0, a2=0x0, a3=0x0, a5=[a3+1404], a7=[[a3+1404]+4].
  The `jalr` at 0x404180 calls _glapi_set_dispatch with a0=0x0, a1=?, a2=?, a3=?.
  The `beq` branch at 0x404118 targets 0x404140, is taken when a5(=[a3+1404]) == 0, and falls through when a5(=[a3+1404]) != 0.
  The `beq` branch at 0x404124 targets 0x404140, is taken when a7(=[[a3+1404]+4]) == 0, and falls through when a7(=[[a3+1404]+4]) != 0.
  The `beq` branch at 0x40412c targets 0x404150, is taken when a4 == 0, and falls through when a4 != 0.
  The `beq` branch at 0x404170 targets 0x404198, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The return at 0x404138 has v0 = 0x1.
  The return at 0x404148 has v0 = 0x0.
  The return at 0x4041a4 has v0 = ret(?).

- `OMPcopyContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4041c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4041c0-0x404238 (120 bytes).
  It occupies 120 bytes.
  The `lw` at 0x4041c4 loads 4 bytes from a1 (arg1 at entry) +0x57c.
  The `lw` at 0x4041d0 loads 4 bytes from a0 (arg0 at entry) +0x57c.
  The `lw` at 0x4041e4 loads 4 bytes from [a1+1404] +0x4.
  The `lw` at 0x4041f8 loads 4 bytes from [a0+1404] +0x4.
  The `lw` at 0x404210 loads 4 bytes from [[a1+1404]+4] +0x88.
  The `lw` at 0x404214 loads 4 bytes from [[[a1+1404]+4]+136] +0x4.
  The `lw` at 0x404218 loads 4 bytes from [[[[a1+1404]+4]+136]+4] +0x10.
  The `lw` at 0x40421c loads 4 bytes from [a0+1404] +0x0.
  The `lw` at 0x404220 loads 4 bytes from [a1+1404] +0x0.
  The `lw` at 0x40422c loads 4 bytes from [[a1+1404]+4] +0x0.
  The `jalr` at 0x404228 calls (unknown callee) with a0=[[[a1+1404]+4]], a1=[[a1+1404]], a2=[[a0+1404]], a3=a2 at entry (arg2), a5=[a0+1404], a6=[a1+1404], a7=[[a1+1404]+4].
  The `beq` branch at 0x4041dc targets 0x404204, is taken when a6(=[a1+1404]) == 0, and falls through when a6(=[a1+1404]) != 0.
  The `beq` branch at 0x4041e8 targets 0x404204, is taken when a7(=[[a1+1404]+4]) == 0, and falls through when a7(=[[a1+1404]+4]) != 0.
  The `beq` branch at 0x4041f0 targets 0x404204, is taken when a5(=[a0+1404]) == 0, and falls through when a5(=[a0+1404]) != 0.
  The `bne` branch at 0x4041fc targets 0x404210, is taken when v0(=[[a0+1404]+4]) != 0, and falls through when v0(=[[a0+1404]+4]) == 0.
  The `beq` branch at 0x404230 targets 0x404204 and is always taken.
  The return at 0x404208 has v0 = one of ?, [[a0+1404]+4], ret(?).

- `OMPcreateContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x404240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x404240-0x4043b8 (376 bytes).
  It occupies 376 bytes.
  The `lw` at 0x404264 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x404280 loads 4 bytes from ret(__glXFindDRIScreen) +0x10.
  The `lw` at 0x4042a4 loads 4 bytes from [ret(__glXFindDRIScreen)+16] +0x88.
  The `sw` at 0x4042cc stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0x4042d4 stores 4 bytes to a3 (arg3 at entry) +0x4.
  The `sw` at 0x4042dc stores 4 bytes to a3 (arg3 at entry) +0x8.
  The `sw` at 0x4042e4 stores 4 bytes to a3 (arg3 at entry) +0xc.
  The `sw` at 0x4042f0 stores 4 bytes to a3 (arg3 at entry) +0x14.
  The `sw` at 0x4042fc stores 4 bytes to a3 (arg3 at entry) +0x18.
  The `lw` at 0x404310 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lw` at 0x404324 loads 4 bytes from [[ret(__glXFindDRIScreen)+16]+136] +0x4.
  The `lw` at 0x404328 loads 4 bytes from [[[ret(__glXFindDRIScreen)+16]+136]+4] +0x0.
  The `sw` at 0x404348 stores 4 bytes to ret(malloc) +0x0.
  The `lw` at 0x40434c loads 4 bytes from [ret(__glXFindDRIScreen)+16] +0xb0.
  The `sw` at 0x404350 stores 4 bytes to ret(malloc) +0x8.
  The `sw` at 0x404354 stores 4 bytes to ret(malloc) +0xc.
  The `sw` at 0x40435c stores 4 bytes to ret(malloc) +0x4.
  The `sw` at 0x404398 stores 4 bytes to [ret(__glXFindDRIScreen)+16] +0xb0.
  The `jalr` at 0x404270 calls __glXFindDRIScreen with a0=a0 at entry (arg0), a1=[a1+8], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4042f8 calls malloc with a0=0x10, a1=0x4048c0, a2=a3 at entry (arg3), a3=0x404840, a4=0x4041c0, a5=0x404100, a6=0x403fc0, a7=0x403f40.
  The `jalr` at 0x404334 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=0x1.
  The `jalr` at 0x404384 calls drmHashCreate with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x4043a8 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0x404278 targets 0x404374, is taken when v0(=ret(__glXFindDRIScreen)) == 0, and falls through when v0(=ret(__glXFindDRIScreen)) != 0.
  The `bne` branch at 0x404288 targets 0x4042a0, is taken when v1(=[ret(__glXFindDRIScreen)+16]) != 0, and falls through when v1(=[ret(__glXFindDRIScreen)+16]) == 0.
  The `beq` branch at 0x404300 targets 0x40439c, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0x404308 targets 0x40431c, is taken when a1(=a2) == 0, and falls through when a1(=a2) != 0.
  The `beq` branch at 0x404314 targets 0x404320 and is always taken.
  The `beq` branch at 0x404344 targets 0x4043a4, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `beq` branch at 0x404358 targets 0x404380, is taken when ra(=[[ret(__glXFindDRIScreen)+16]+176]) == 0, and falls through when ra(=[[ret(__glXFindDRIScreen)+16]+176]) != 0.
  The `beq` branch at 0x404374 targets 0x404290 and is always taken.
  The `beq` branch at 0x404394 targets 0x404360 and is always taken.
  The `beq` branch at 0x40439c targets 0x404290 and is always taken.
  The `beq` branch at 0x4043b0 targets 0x404290 and is always taken.
  The return at 0x404298 has v0 = 0x0.
  The return at 0x40436c has v0 = ret(malloc).
  The instructions from 0x40437c to 0x40437c are not reached by any path from the entry, and their branches are not listed.

- `OMPdestroyDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4043c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4043c0-0x40441c (92 bytes).
  It occupies 92 bytes.
  The `lw` at 0x4043e0 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x4043ec loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x4043f8 loads 4 bytes from [a1+8] +0xb0.
  The `jalr` at 0x4043f4 calls drmHashDelete with a0=[[a1+8]+176], a1=[a1], a2=a2 at entry (arg2), a3=[a1+8].
  The `jalr` at 0x404400 calls free with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `beq` branch at 0x4043d8 targets 0x40440c, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x4043e4 targets 0x40440c, is taken when a3(=[a1+8]) == 0, and falls through when a3(=[a1+8]) != 0.
  The return at 0x404414 has v0 = one of ?, ret(free).

- `OMPswapBuffers` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x404440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x404440-0x404490 (80 bytes).
  It occupies 80 bytes.
  The `lw` at 0x40445c loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x404468 loads 4 bytes from [a1+8] +0x88.
  The `lw` at 0x40446c loads 4 bytes from [[a1+8]+136] +0x4.
  The `lw` at 0x404470 loads 4 bytes from [[[a1+8]+136]+4] +0xc.
  The `lw` at 0x40447c loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `jalr` at 0x404478 calls (unknown callee) with a0=a0 at entry (arg0), a1=[a1], a2=a2 at entry (arg2), a3=a1 at entry (arg1), a4=[a1+8].
  The `beq` branch at 0x404454 targets 0x404484, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x404460 targets 0x404484, is taken when a4(=[a1+8]) == 0, and falls through when a4(=[a1+8]) != 0.
  The return at 0x404488 has v0 = one of ?, ret(?).

- `OMPcreateDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4044c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4044c0-0x4045cc (268 bytes).
  It occupies 268 bytes.
  The `lw` at 0x4044f8 loads 4 bytes from ret(__glXFindDRIScreen) +0x10.
  The `sw` at 0x404530 stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `sw` at 0x40453c stores 4 bytes to a4 (arg4 at entry) +0x4.
  The `sw` at 0x40458c stores 4 bytes to ret(malloc) +0x0.
  The `sw` at 0x404590 stores 4 bytes to ret(malloc) +0x4.
  The `sw` at 0x404594 stores 4 bytes to ret(malloc) +0xc.
  The `sw` at 0x404598 stores 4 bytes to ret(malloc) +0x18.
  The `sw` at 0x40459c stores 4 bytes to ret(malloc) +0x8.
  The `lw` at 0x4045a0 loads 4 bytes from [ret(__glXFindDRIScreen)+16] +0xb0.
  The `jalr` at 0x4044e8 calls __glXFindDRIScreen with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x404538 calls malloc with a0=0x60, a1=0x404440, a2=a4 at entry (arg4), a3=0x4043c0.
  The `jalr` at 0x40456c calls memset with a0=ret(malloc), a1=0x0, a2=0x60, a3=?.
  The `jalr` at 0x4045a4 calls drmHashInsert with a0=[[ret(__glXFindDRIScreen)+16]+176], a1=a2 at entry (arg2), a2=a4 at entry (arg4), a3=a3 at entry (arg3), a4=a1 at entry (arg1).
  The `jalr` at 0x4045b4 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0x4044f0 targets 0x404550, is taken when v0(=ret(__glXFindDRIScreen)) == 0, and falls through when v0(=ret(__glXFindDRIScreen)) != 0.
  The `bne` branch at 0x404500 targets 0x404518, is taken when v1(=[ret(__glXFindDRIScreen)+16]) != 0, and falls through when v1(=[ret(__glXFindDRIScreen)+16]) == 0.
  The `bne` branch at 0x404540 targets 0x404560, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x404548 targets 0x404508 and is always taken.
  The `beq` branch at 0x4045ac targets 0x4045c4, is taken when v0(=ret(drmHashInsert)) == 0, and falls through when v0(=ret(drmHashInsert)) != 0.
  The `beq` branch at 0x4045bc targets 0x404508 and is always taken.
  The `beq` branch at 0x4045c4 targets 0x404508 and is always taken.
  The return at 0x404510 has v0 = one of 0x0, ret(malloc).
  The return at 0x404558 has v0 = 0x0.

- `OMPgetDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x404600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x404600-0x404654 (84 bytes).
  It occupies 84 bytes.
  The `lw` at 0x404618 loads 4 bytes from a2 (arg2 at entry) +0xb0.
  The `jalr` at 0x404620 calls drmHashLookup with a0=[a2+176], a1=a1 at entry (arg1), a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x404628 targets 0x404640, is taken when v0(=ret(drmHashLookup)) == 0, and falls through when v0(=ret(drmHashLookup)) != 0.
  The return at 0x404638 has v0 = 0x0.
  The return at 0x40464c has v0 = ?.

- `__addDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x404680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x404680-0x404754 (212 bytes).
  It occupies 212 bytes.
  The `lw` at 0x4046c8 loads 4 bytes from a1 (arg1 at entry) +0xb0.
  The `lw` at 0x404704 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `sw` at 0x40470c stores 4 bytes to ?.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x404714, `lw` at 0x404738.
  The `jalr` at 0x4046c4 calls drmHashLookup with a0=[a1+176], a1=a2 at entry (arg2), a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x4046d4 calls malloc with a0=0x10, a1=?, a2=?, a3=?.
  The `bgezall` at 0x404700 calls OMPcreateDrawable [0x4044c0] with a0=a0 at entry (arg0), a1=[a1+4], a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=ret(malloc).
  The `jalr` at 0x404724 calls free with a0=?, a1=?, a2=?, a3=?.
  The `bne` branch at 0x404694 targets 0x4046b0, is taken when a1 != 0, and falls through when a1 == 0.
  The `beq` branch at 0x4046cc targets 0x404734, is taken when v0(=ret(drmHashLookup)) == 0, and falls through when v0(=ret(drmHashLookup)) != 0.
  The `beq` branch at 0x4046e0 targets 0x40474c, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `bne` branch at 0x404718 targets 0x404740, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x40472c targets 0x4046a4 and is always taken.
  The `beq` branch at 0x40474c targets 0x4046a4 and is always taken.
  The return at 0x40469c has v0 = 0x0.
  The return at 0x4046a8 has v0 = 0x0.
  The return at 0x404744 has v0 = ?.

- `OMPCreatePbuffer` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x404780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x404780-0x4047bc (60 bytes).
  It occupies 60 bytes.
  The `lw` at 0x404784 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x404788 loads 4 bytes from [a0+136] +0x4.
  The `lw` at 0x40479c loads 4 bytes from [[a0+136]+4] +0x14.
  The `lw` at 0x4047a8 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0x4047a4 calls (unknown callee) with a0=[a0], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x4047b4 has v0 = ret(?).

- `OMPDestroyPbuffer` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4047c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4047c0-0x4047fc (60 bytes).
  It occupies 60 bytes.
  The `lw` at 0x4047c4 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x4047c8 loads 4 bytes from [a0+136] +0x4.
  The `lw` at 0x4047dc loads 4 bytes from [[a0+136]+4] +0x18.
  The `lw` at 0x4047e8 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0x4047e4 calls (unknown callee) with a0=[a0], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x4047f4 has v0 = ret(?).

- `OMPQueryDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x404800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x404800-0x40483c (60 bytes).
  It occupies 60 bytes.
  The `lw` at 0x404804 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x404808 loads 4 bytes from [a0+136] +0x4.
  The `lw` at 0x40481c loads 4 bytes from [[a0+136]+4] +0x1c.
  The `lw` at 0x404828 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0x404824 calls (unknown callee) with a0=[a0], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x404834 has v0 = ret(?).

- `OMPGetVideoSyncSGI` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x404840 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x404840-0x4048a0 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0x404844 loads 4 bytes from a0 (arg0 at entry) +0x57c.
  The `lw` at 0x404860 loads 4 bytes from [a0+1404] +0x4.
  The `lw` at 0x40486c loads 4 bytes from [[a0+1404]+4] +0x88.
  The `lw` at 0x404870 loads 4 bytes from [[[a0+1404]+4]+136] +0x4.
  The `lw` at 0x404874 loads 4 bytes from [[[[a0+1404]+4]+136]+4] +0x20.
  The `jalr` at 0x40487c calls (unknown callee) with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a0+1404], a4=[[a0+1404]+4].
  The `beq` branch at 0x404858 targets 0x404894, is taken when a3(=[a0+1404]) == 0, and falls through when a3(=[a0+1404]) != 0.
  The `beq` branch at 0x404864 targets 0x404894, is taken when a4(=[[a0+1404]+4]) == 0, and falls through when a4(=[[a0+1404]+4]) != 0.
  The return at 0x40488c has v0 = ret(?).
  The return at 0x404898 has v0 = 0x0.

- `OMPWaitVideoSyncSGI` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4048c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4048c0-0x404930 (112 bytes).
  It occupies 112 bytes.
  The `lw` at 0x4048c8 loads 4 bytes from a0 (arg0 at entry) +0x57c.
  The `lw` at 0x4048e8 loads 4 bytes from [a0+1404] +0x4.
  The `lw` at 0x4048f4 loads 4 bytes from [[a0+1404]+4] +0x88.
  The `lw` at 0x4048f8 loads 4 bytes from [[[a0+1404]+4]+136] +0x4.
  The `lw` at 0x4048fc loads 4 bytes from [[[[a0+1404]+4]+136]+4] +0x24.
  The `jalr` at 0x40490c calls (unknown callee) with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=a3 at entry (arg3), a5=[a0+1404], a6=a2 at entry (arg2), a7=a1 at entry (arg1).
  The `beq` branch at 0x4048e0 targets 0x404924, is taken when a5(=[a0+1404]) == 0, and falls through when a5(=[a0+1404]) != 0.
  The `beq` branch at 0x4048ec targets 0x404924, is taken when t0(=[[a0+1404]+4]) == 0, and falls through when t0(=[[a0+1404]+4]) != 0.
  The return at 0x40491c has v0 = ret(?).
  The return at 0x404928 has v0 = 0x0.

- `OMPGetCurrentReadDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x404940 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x404940-0x404970 (48 bytes).
  It occupies 48 bytes.
  The `lw` at 0x404948 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `beq` branch at 0x404940 targets 0x404960, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x40494c targets 0x404968, is taken when a2(=[a0+12]) == 0, and falls through when a2(=[a0+12]) != 0.
  The `beq` branch at 0x404968 targets 0x404958 and is always taken.
  The return at 0x404958 has v0 = one of [a0+12]+16, 0x0.
  The return at 0x404960 has v0 = 0x0.

- `OMPGetAssociatedVisInfo` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x404980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x404980-0x404988 (8 bytes).
  It occupies 8 bytes.
  The return at 0x404980 has v0 = 0x0.

- `__driCreateScreen` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4049c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4049c0-0x404bbc (508 bytes).
  It occupies 508 bytes.
  The `sw` at 0x404a00 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0x404a08 stores 4 bytes to a2 (arg2 at entry) +0x4.
  The `sw` at 0x404a14 stores 4 bytes to a2 (arg2 at entry) +0x8.
  The `sw` at 0x404a20 stores 4 bytes to a2 (arg2 at entry) +0xc.
  2 such `sw` accesses store 4 bytes to ret(malloc) +0x4, including `sw` at 0x404a68, `sw` at 0x404b0c.
  2 such `sw` accesses store 4 bytes to ret(malloc) +0x0, including `sw` at 0x404a94, `sw` at 0x404b08.
  The `sw` at 0x404ac0 stores 4 bytes to ret(malloc) +0x8.
  The `sw` at 0x404acc stores 4 bytes to ret(malloc) +0xc.
  The `sw` at 0x404b18 stores 4 bytes to ret(malloc) +0x88.
  The `sw` at 0x404b34 stores 4 bytes to ret(malloc) +0xb4.
  The `sdl` at 0x404b44 stores 8 bytes to ret(malloc) +0x0.
  The `sdr` at 0x404b48 stores 8 bytes to ret(malloc) +0x7.
  The `sdl` at 0x404b4c stores 8 bytes to ret(malloc) +0x8.
  The `sdr` at 0x404b50 stores 8 bytes to ret(malloc) +0xf.
  The `sdl` at 0x404b54 stores 8 bytes to ret(malloc) +0x10.
  The `sdr` at 0x404b58 stores 8 bytes to ret(malloc) +0x17.
  The `sdl` at 0x404b5c stores 8 bytes to ret(malloc) +0x18.
  The `sdr` at 0x404b60 stores 8 bytes to ret(malloc) +0x1f.
  The `sdl` at 0x404b64 stores 8 bytes to ret(malloc) +0x20.
  The `sdr` at 0x404b68 stores 8 bytes to ret(malloc) +0x27.
  The `swl` at 0x404b6c stores 4 bytes to ret(malloc) +0x28.
  The `swr` at 0x404b70 stores 4 bytes to ret(malloc) +0x2b.
  The `lw` at 0x404b74 loads 4 bytes from ret(malloc) +0xb4.
  The `sw` at 0x404b7c stores 4 bytes to [ret(malloc)+180] +0x0.
  The `sw` at 0x404b84 stores 4 bytes to [ret(malloc)+180] +0x4.
  The `sw` at 0x404b8c stores 4 bytes to [ret(malloc)+180] +0x8.
  The `sw` at 0x404b94 stores 4 bytes to [ret(malloc)+180] +0x18.
  The `sw` at 0x404b98 stores 4 bytes to [ret(malloc)+180] +0x1c.
  The `sw` at 0x404ba4 stores 4 bytes to [ret(malloc)+180] +0x20.
  The `jalr` at 0x404a1c calls malloc with a0=0x10, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=0x403ec0, a6=0xfa24.
  The `jalr` at 0x404a48 calls putenv with a0=0x40c000, a1=?, a2=?, a3=?.
  The `jalr` at 0x404a54 calls omp_initGLXInterface with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x404a84 calls omp_initGLInterface with a0=?, a1=?, a2=ret(malloc), a3=?.
  The `jalr` at 0x404aa8 calls putenv with a0=0x40c010, a1=?, a2=?, a3=?, a4=ret(malloc).
  The `jalr` at 0x404ac8 calls malloc with a0=0xc8, a1=a4 at entry (arg4), a2=ret(malloc), a3=a3 at entry (arg3).
  The `jalr` at 0x404aec calls memset with a0=ret(malloc), a1=0x0, a2=0xc8, a3=?.
  The `jalr` at 0x404b14 calls malloc with a0=0x2c, a1=?, a2=?, a3=?, a5=ret(malloc), a6=ret(malloc), a7=a1 at entry (arg1).
  The `jalr` at 0x404bac calls free with a0=ret(malloc), a1=ret(malloc), a2=?, a3=?.
  The `bne` branch at 0x404a24 targets 0x404a40, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `bne` branch at 0x404a64 targets 0x404a80, is taken when v0(=ret(omp_initGLXInterface)) != 0, and falls through when v0(=ret(omp_initGLXInterface)) == 0.
  The `bne` branch at 0x404a90 targets 0x404aa0, is taken when v0(=ret(omp_initGLInterface)) != 0, and falls through when v0(=ret(omp_initGLInterface)) == 0.
  The `beq` branch at 0x404a98 targets 0x404a30 and is always taken.
  The `bne` branch at 0x404ad0 targets 0x404ae0, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x404ad8 targets 0x404a30 and is always taken.
  The `beq` branch at 0x404b30 targets 0x404ba8, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0x404ba0 targets 0x404a30 and is always taken.
  The `beq` branch at 0x404bb4 targets 0x404a30 and is always taken.
  The return at 0x404a38 has v0 = one of 0x0, ret(malloc).
  The return at 0x404a74 has v0 = 0x0.
  The instructions from 0x404a7c to 0x404a7c are not reached by any path from the entry, and their branches are not listed.

- `gl_lib_name` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x404bc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x404bc0-0x404c14 (84 bytes).
  It occupies 84 bytes.
  The `jalr` at 0x404bdc calls getenv with a0=0x40c020, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x404bc8 targets 0x404c04, is taken when at(=[0x40c544]) == 0, and falls through when at(=[0x40c544]) != 0.
  The `bne` branch at 0x404bec targets 0x404c0c, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `beq` branch at 0x404c04 targets 0x404bf4, is taken when v0(=[0x40c530]) == 0, and falls through when v0(=[0x40c530]) != 0.
  The return at 0x404bfc has v0 = 0x40c030.
  The return at 0x404c0c has v0 = one of ret(getenv), [0x40c530].

- `glx_lib_name` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x404c40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x404c40-0x404c94 (84 bytes).
  It occupies 84 bytes.
  The `jalr` at 0x404c5c calls getenv with a0=0x40c040, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x404c48 targets 0x404c84, is taken when at(=[0x40c548]) == 0, and falls through when at(=[0x40c548]) != 0.
  The `bne` branch at 0x404c6c targets 0x404c8c, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `beq` branch at 0x404c84 targets 0x404c74, is taken when v0(=[0x40c534]) == 0, and falls through when v0(=[0x40c534]) != 0.
  The return at 0x404c7c has v0 = 0x40c050.
  The return at 0x404c8c has v0 = one of ret(getenv), [0x40c534].

- `omp_initGLInterface` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x404cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x404cc0-0x404da8 (232 bytes).
  It occupies 232 bytes.
  The `bgezall` at 0x404ce0 calls gl_lib_name [0x404bc0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x404cf0 calls dlopen with a0=ret(gl_lib_name), a1=0x2, a2=?, a3=?.
  The `jalr` at 0x404d08 calls dlsym with a0=ret(dlopen), a1=0x40c080, a2=?, a3=?.
  The `bgezall` at 0x404d30 calls gl_lib_name [0x404bc0] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x404d4c calls fprintf with a0=sym(__iob)+32, a1=0x40c060, a2=ret(gl_lib_name), a3=?.
  The `bgezall` at 0x404d70 calls gl_lib_name [0x404bc0] with a0=ret(dlsym), a1=?, a2=?, a3=?.
  The `jalr` at 0x404d8c calls fprintf with a0=sym(__iob)+32, a1=0x40c098, a2=ret(gl_lib_name), a3=?.
  The `beq` branch at 0x404cf8 targets 0x404d28, is taken when v0(=ret(dlopen)) == 0, and falls through when v0(=ret(dlopen)) != 0.
  The `beq` branch at 0x404d14 targets 0x404d68, is taken when v0(=ret(dlsym)) == 0, and falls through when v0(=ret(dlsym)) != 0.
  The return at 0x404d20 has v0 = ret(dlsym).
  The return at 0x404d60 has v0 = 0x0.
  The return at 0x404da0 has v0 = 0x0.

- `omp_initGLXInterface` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x404dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x404dc0-0x404f88 (456 bytes).
  It occupies 456 bytes.
  The `sw` at 0x404e74 stores 4 bytes to abs 0x40c630.
  The `sw` at 0x404e90 stores 4 bytes to abs 0x40c634.
  The `sw` at 0x404eac stores 4 bytes to abs 0x40c638.
  The `sw` at 0x404ec8 stores 4 bytes to abs 0x40c63c.
  The `sw` at 0x404ee4 stores 4 bytes to abs 0x40c640.
  The `sw` at 0x404f00 stores 4 bytes to abs 0x40c644.
  The `sw` at 0x404f1c stores 4 bytes to abs 0x40c648.
  The `sw` at 0x404f38 stores 4 bytes to abs 0x40c64c.
  The `sw` at 0x404f54 stores 4 bytes to abs 0x40c650.
  The `sw` at 0x404f7c stores 4 bytes to abs 0x40c654.
  The `bgezall` at 0x404de0 calls glx_lib_name [0x404c40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x404df4 calls dlopen with a0=ret(glx_lib_name), a1=0x2, a2=?, a3=?.
  The `bgezall` at 0x404e0c calls glx_lib_name [0x404c40] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x404e28 calls fprintf with a0=sym(__iob)+32, a1=0x40c060, a2=ret(glx_lib_name), a3=?.
  The `jalr` at 0x404e5c calls dlsym with a0=ret(dlopen), a1=0x40c0f8, a2=?, a3=?.
  The `jalr` at 0x404e78 calls dlsym with a0=ret(dlopen), a1=0x40c110, a2=0x410000, a3=?.
  The `jalr` at 0x404e94 calls dlsym with a0=ret(dlopen), a1=0x40c128, a2=0x410000, a3=?.
  The `jalr` at 0x404eb0 calls dlsym with a0=ret(dlopen), a1=0x40c140, a2=0x410000, a3=?.
  The `jalr` at 0x404ecc calls dlsym with a0=ret(dlopen), a1=0x40c150, a2=0x410000, a3=?.
  The `jalr` at 0x404ee8 calls dlsym with a0=ret(dlopen), a1=0x40c160, a2=0x410000, a3=?.
  The `jalr` at 0x404f04 calls dlsym with a0=ret(dlopen), a1=0x40c178, a2=0x410000, a3=?.
  The `jalr` at 0x404f20 calls dlsym with a0=ret(dlopen), a1=0x40c190, a2=0x410000, a3=?.
  The `jalr` at 0x404f3c calls dlsym with a0=ret(dlopen), a1=0x40c1a8, a2=0x410000, a3=?.
  The `jalr` at 0x404f58 calls dlsym with a0=ret(dlopen), a1=0x40c1c0, a2=0x410000, a3=?.
  The `bne` branch at 0x404dfc targets 0x404e48, is taken when v0(=ret(dlopen)) != 0, and falls through when v0(=ret(dlopen)) == 0.
  The return at 0x404e40 has v0 = 0x0.
  The return at 0x404f80 has v0 = 0x40c630.

- `HashHash` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x404fc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x404fc0-0x4050b0 (240 bytes).
  It occupies 240 bytes.
  The `lw` at 0x405010 loads 4 bytes from table(0x40c658) +0x0.
  The `sw` at 0x405078 stores 4 bytes to ?.
  The `jalr` at 0x405048 calls drmRandomCreate with a0=0x25, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x405068 calls drmRandom with a0=ret(drmRandomCreate), a1=?, a2=?, a3=?.
  The `beq` branch at 0x404fdc targets 0x405040, is taken when at(=[0x40c538]) == 0, and falls through when at(=[0x40c538]) != 0.
  The `beq` branch at 0x404ff4 targets 0x405090, is taken when s1(=a0) == 0, and falls through when s1(=a0) != 0.
  The `bne` branch at 0x405018 targets 0x405000, is taken when s1(?) != 0, and falls through when s1(?) == 0.
  The `bne` branch at 0x405074 targets 0x405064, is taken when s0(?) != s2(=0x40ca58), and falls through when s0(?) == s2(=0x40ca58).
  The `beq` branch at 0x405088 targets 0x404fe4 and is always taken.
  The return at 0x40502c has v0 = ?.
  The return at 0x4050a8 has v0 = 0x0.
  The instructions from 0x405034 to 0x40503c are not reached by any path from the entry, and their branches are not listed.

- `drmHashCreate` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4050c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4050c0-0x405188 (200 bytes).
  It occupies 200 bytes.
  The `sw` at 0x4050f8 stores 4 bytes to ret(drmMalloc) +0x0.
  The `sw` at 0x4050fc stores 4 bytes to ret(drmMalloc) +0x4.
  The `sw` at 0x405100 stores 4 bytes to ret(drmMalloc) +0x8.
  The `sw` at 0x405104 stores 4 bytes to ret(drmMalloc) +0xc.
  The `sw` at 0x405108 stores 4 bytes to ret(drmMalloc) +0x10.
  16 such `sw` accesses store 4 bytes to ?, including `sw` at 0x405114, `sw` at 0x405118, `sw` at 0x40511c.
  The `jalr` at 0x4050dc calls drmMalloc with a0=0x81c, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x4050ec targets 0x405170, is taken when v0(=ret(drmMalloc)) == 0, and falls through when v0(=ret(drmMalloc)) != 0.
  The `bne` branch at 0x405158 targets 0x405114, is taken when v1(?) != at(=ret(drmMalloc)+2048), and falls through when v1(?) == at(=ret(drmMalloc)+2048).
  The return at 0x405168 has v0 = ret(drmMalloc).
  The return at 0x405180 has v0 = 0x0.

- `drmHashDestroy` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4051c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4051c0-0x405284 (196 bytes).
  It occupies 196 bytes.
  The `lw` at 0x4051c8 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0x40520c loads 4 bytes from a0 (arg0 at entry) +0x14.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x405220, `lw` at 0x405234.
  The `jalr` at 0x40521c calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x40523c calls drmFree with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bne` branch at 0x4051ec targets 0x40526c, is taken when v0(=[a0]) != v1(=0xffffffffdeadbeef), and falls through when v0(=[a0]) == v1(=0xffffffffdeadbeef).
  The `beq` branch at 0x405210 targets 0x40522c, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x405224 targets 0x405218, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `bnel` branch at 0x405230 targets 0x405210, is taken when s2(?) != s3(=a0+2048), and falls through when s2(?) == s3(=a0+2048); its branch-likely delay slot `lw a0,20(s2)` at 0x405234 runs only when taken and is annulled on fall-through.
  The return at 0x405264 has v0 = 0x0.
  The return at 0x40527c has v0 = -0x1.

- `HashFind` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4052c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4052c0-0x4053b0 (240 bytes).
  It occupies 240 bytes.
  The `sw` at 0x4052f8 stores 4 bytes to a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from (a0 + (ret(HashHash) << 0x2)) +0x14, including `lw` at 0x405304, `lw` at 0x405348.
  The `lw` at 0x40531c loads 4 bytes from [(a0 + (ret(HashHash) << 0x2))+20] +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x40532c, `lw` at 0x405334.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x405344, `sw` at 0x40534c.
  The `sw` at 0x405350 stores 4 bytes to (a0 + (ret(HashHash) << 0x2)) +0x14.
  The `lw` at 0x405354 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `sw` at 0x40535c stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `lw` at 0x405380 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `sw` at 0x405390 stores 4 bytes to a0 (arg0 at entry) +0x10.
  The `lw` at 0x4053a0 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `sw` at 0x4053ac stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `bgezall` at 0x4052e8 calls HashHash [0x404fc0] with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x4052f0 targets 0x405300, is taken when s2(=a2) == 0, and falls through when s2(=a2) != 0.
  The `beq` branch at 0x405310 targets 0x405380, is taken when a2(=[(a0 + (ret(HashHash) << 0x2))+20]) == 0, and falls through when a2(=[(a0 + (ret(HashHash) << 0x2))+20]) != 0.
  The `beq` branch at 0x405318 targets 0x405330 and is always taken.
  The `beq` branch at 0x405324 targets 0x405380, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x405330 targets 0x405320, is taken when a5(?) != s0(=a1), and falls through when a5(?) == s0(=a1).
  The `beq` branch at 0x40533c targets 0x4053a0, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x4053a8 targets 0x405360 and is always taken.
  The return at 0x40536c has v0 = ?.
  The return at 0x405398 has v0 = 0x0.
  The instructions from 0x405374 to 0x40537c are not reached by any path from the entry, and their branches are not listed.

- `drmHashLookup` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4053c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4053c0-0x405450 (144 bytes).
  It occupies 144 bytes.
  The `lw` at 0x4053dc loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0x405434 loads 4 bytes from ret(HashFind) +0x4.
  The `sw` at 0x40543c stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0x405400 calls HashFind [0x4052c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x0, a3=0xffffffffdeadbeef.
  The `beq` branch at 0x4053d4 targets 0x405428, is taken when a0 == 0, and falls through when a0 != 0.
  The `bne` branch at 0x4053e8 targets 0x405428, is taken when v1(=[a0]) != a3(=0xffffffffdeadbeef), and falls through when v1(=[a0]) == a3(=0xffffffffdeadbeef).
  The `bne` branch at 0x405414 targets 0x405434, is taken when v0(=ret(HashFind)) != 0, and falls through when v0(=ret(HashFind)) == 0.
  The return at 0x405420 has v0 = 0x1.
  The return at 0x40542c has v0 = -0x1.
  The return at 0x405448 has v0 = 0x0.

- `drmHashInsert` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x405480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x405480-0x40555c (220 bytes).
  It occupies 220 bytes.
  The `lw` at 0x405484 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `sw` at 0x405520 stores 4 bytes to ret(drmMalloc) +0x4.
  The `sw` at 0x405528 stores 4 bytes to ret(drmMalloc) +0x0.
  The `lw` at 0x40553c loads 4 bytes from ?.
  The `sw` at 0x405540 stores 4 bytes to ret(drmMalloc) +0x8.
  The `sw` at 0x405558 stores 4 bytes to ?.
  The `bgezall` at 0x4054dc calls HashFind [0x4052c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sp-48, a3=0xffffffffdeadbeef.
  The `jalr` at 0x405504 calls drmMalloc with a0=0xc, a1=?, a2=?, a3=?.
  The `beq` branch at 0x4054ac targets 0x4054d0, is taken when v1(=[a0]) == a3(=0xffffffffdeadbeef), and falls through when v1(=[a0]) != a3(=0xffffffffdeadbeef).
  The `beq` branch at 0x4054e4 targets 0x405500, is taken when v0(=ret(HashFind)) == 0, and falls through when v0(=ret(HashFind)) != 0.
  The `bne` branch at 0x405510 targets 0x405520, is taken when v0(=ret(drmMalloc)) != 0, and falls through when v0(=ret(drmMalloc)) == 0.
  The `beq` branch at 0x405518 targets 0x4054c0 and is always taken.
  The `beq` branch at 0x405554 targets 0x4054c0 and is always taken.
  The return at 0x4054b8 has v0 = -0x1.
  The return at 0x4054c8 has v0 = one of -0x1, 0x0.
  The return at 0x4054f4 has v0 = 0x1.
  The instructions from 0x4054fc to 0x4054fc are not reached by any path from the entry, and their branches are not listed.

- `drmHashDelete` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x405580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x405580-0x405628 (168 bytes).
  It occupies 168 bytes.
  The `lw` at 0x405588 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0x405600 loads 4 bytes from ret(HashFind) +0x8.
  The `sw` at 0x405610 stores 4 bytes to ?.
  The `bgezall` at 0x4055cc calls HashFind [0x4052c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sp-32, a3=a3 at entry (arg3).
  The `jalr` at 0x40560c calls drmFree with a0=ret(HashFind), a1=0x1, a2=?, a3=?.
  The `beq` branch at 0x4055a0 targets 0x4055c0, is taken when v1(=[a0]) == a2(=0xffffffffdeadbeef), and falls through when v1(=[a0]) != a2(=0xffffffffdeadbeef).
  The `bne` branch at 0x4055d8 targets 0x4055f0, is taken when v0(=ret(HashFind)) != 0, and falls through when v0(=ret(HashFind)) == 0.
  The return at 0x4055b0 has v0 = -0x1.
  The return at 0x4055e8 has v0 = 0x1.
  The return at 0x405620 has v0 = 0x0.
  The instructions from 0x4055b8 to 0x4055bc are not reached by any path from the entry, and their branches are not listed.

- `drmHashNext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x405640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x405640-0x4056a8 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x405640 loads 4 bytes from a0 (arg0 at entry) +0x814.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x818, including `lw` at 0x405650, `lw` at 0x405668, `lw` at 0x405674.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x405660, `lw` at 0x405690.
  The `sw` at 0x405664 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lw` at 0x40566c loads 4 bytes from [a0+2072] +0x4.
  The `sw` at 0x405670 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `lw` at 0x405678 loads 4 bytes from [a0+2072] +0x8.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x818, including `sw` at 0x405684, `sw` at 0x40569c.
  The `sw` at 0x405688 stores 4 bytes to a0 (arg0 at entry) +0x814.
  The `beq` branch at 0x405648 targets 0x4056a0, is taken when a4(=[a0+2068]) >= 0x200 (signed), and falls through when a4(=[a0+2068]) < 0x200 (signed).
  The `beq` branch at 0x405658 targets 0x405688, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x405698 targets 0x405658, is taken when a4(?) < 0x200 (signed), and falls through when a4(?) >= 0x200 (signed).
  The return at 0x405680 has v0 = 0x1.
  The return at 0x4056a0 has v0 = 0x0.

- `drmHashFirst` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4056c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4056c0-0x405728 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x4056c8 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `sw` at 0x405704 stores 4 bytes to a0 (arg0 at entry) +0x814.
  The `lw` at 0x40570c loads 4 bytes from a0 (arg0 at entry) +0x14.
  The `sw` at 0x405714 stores 4 bytes to a0 (arg0 at entry) +0x818.
  The `jalr` at 0x405710 calls drmHashNext with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=0xffffffffdeadbeef, a4=[a0+20].
  The `beq` branch at 0x4056e0 targets 0x405700, is taken when v1(=[a0]) == a3(=0xffffffffdeadbeef), and falls through when v1(=[a0]) != a3(=0xffffffffdeadbeef).
  The return at 0x4056ec has v0 = -0x1.
  The return at 0x405720 has v0 = ret(drmHashNext).
  The instructions from 0x4056f4 to 0x4056fc are not reached by any path from the entry, and their branches are not listed.

- `drmMsg` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x405780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x405780-0x405800 (128 bytes).
  It occupies 128 bytes.
  The `jalr` at 0x4057b0 calls getenv with a0=0x40c1d8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4057d0 calls strstr with a0=ret(getenv), a1=0x40c550, a2=?, a3=?.
  The `jalr` at 0x4057f0 calls vfprintf with a0=sym(__iob)+32, a1=a0 at entry (arg0), a2=sp-56, a3=?.
  The `bne` branch at 0x4057b8 targets 0x4057c8, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `beq` branch at 0x4057d8 targets 0x4057c0, is taken when v0(=ret(strstr)) == 0, and falls through when v0(=ret(strstr)) != 0.
  The `beq` branch at 0x4057f8 targets 0x4057c0 and is always taken.
  The return at 0x4057c0 has v0 = one of ret(getenv), ret(strstr), ret(vfprintf).

- `drmMalloc` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x405800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x405800-0x405880 (128 bytes).
  It occupies 128 bytes.
  The `jalr` at 0x40582c calls malloc with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x405864 calls memset with a0=ret(malloc), a1=0x0, a2=a0 at entry (arg0), a3=?.
  The `beq` branch at 0x40581c targets 0x405874, is taken when a0 == 0, and falls through when a0 != 0.
  The `bne` branch at 0x405834 targets 0x405858, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x40586c targets 0x405840 and is always taken.
  The `beq` branch at 0x405878 targets 0x405828 and is always taken.
  The return at 0x405850 has v0 = ret(malloc).

- `drmFree` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x405880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x405880-0x4058bc (60 bytes).
  It occupies 60 bytes.
  The `jalr` at 0x4058ac calls free with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x405890 targets 0x4058a4, is taken when a0 != 0, and falls through when a0 == 0.
  The `beq` branch at 0x4058b4 targets 0x405898 and is always taken.
  The return at 0x40589c has v0 = one of ?, ret(free).

- `drmStrdup` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4058c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4058c0-0x405944 (132 bytes).
  It occupies 132 bytes.
  The `jalr` at 0x4058dc calls strlen with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4058f4 calls strlen with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x405904 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x405918 calls strcpy with a0=ret(malloc), a1=a0 at entry (arg0), a2=?, a3=?.
  The `beq` branch at 0x4058cc targets 0x405928, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x4058e8 targets 0x405900, is taken when v0(=ret(strlen)) == at(=-0x1), and falls through when v0(=ret(strlen)) != at(=-0x1).
  The `beq` branch at 0x405920 targets 0x405934 and is always taken.
  The return at 0x40592c has v0 = 0x0.
  The return at 0x40593c has v0 = ret(malloc).

- `drmGetKeyFromFd` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x405980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x405980-0x4059a8 (40 bytes).
  It occupies 40 bytes.
  The `jalr` at 0x405990 calls fstat with a0=a0 at entry (arg0), a1=sp-160, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x4059a0 has v0 = ?.

- `drmGetEntry` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4059c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4059c0-0x405a7c (188 bytes).
  It occupies 188 bytes.
  The `sw` at 0x405a14 stores 4 bytes to ret(drmMalloc) +0x0.
  The `sw` at 0x405a1c stores 4 bytes to ret(drmMalloc) +0x4.
  The `sw` at 0x405a34 stores 4 bytes to ?.
  The `bgezall` at 0x4059d4 calls drmGetKeyFromFd [0x405980] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4059f0 calls drmHashLookup with a0=?, a1=ret(drmGetKeyFromFd), a2=sp-48, a3=?.
  The `jalr` at 0x405a00 calls drmMalloc with a0=0xc, a1=?, a2=?, a3=?.
  The `jalr` at 0x405a18 calls drmHashCreate with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x405a30 calls drmHashInsert with a0=[0x40c53c], a1=ret(drmGetKeyFromFd), a2=?, a3=?.
  The `jalr` at 0x405a68 calls drmHashCreate with a0=[0x40c53c], a1=?, a2=?, a3=?.
  The `beq` branch at 0x4059e0 targets 0x405a64, is taken when a0(=[0x40c53c]) == 0, and falls through when a0(=[0x40c53c]) != 0.
  The `beq` branch at 0x4059f8 targets 0x405a40, is taken when v0(=ret(drmHashLookup)) == 0, and falls through when v0(=ret(drmHashLookup)) != 0.
  The `beq` branch at 0x405a38 targets 0x405a54 and is always taken.
  The `beq` branch at 0x405a74 targets 0x4059e8 and is always taken.
  The return at 0x405a4c has v0 = ?.
  The return at 0x405a5c has v0 = ?.

- `drmOpenDevice` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x405a80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x405a80-0x405c6c (492 bytes).
  It occupies 492 bytes.
  2 such `lw` accesses load 4 bytes from sym(errno) +0x0, including `lw` at 0x405c28, `lw` at 0x405c60.
  The `jalr` at 0x405a98 calls geteuid with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x405ab4 calls drmMsg [0x405780] with a0=0x40c1e8, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x405ac8 calls stat with a0=0x40c208, a1=sp-256, a2=?, a3=?.
  The `jalr` at 0x405b04 calls remove with a0=0x40c208, a1=?, a2=?, a3=?.
  The `jalr` at 0x405b18 calls mkdir with a0=0x40c208, a1=0x1f8, a2=?, a3=?.
  The `jalr` at 0x405b38 calls sprintf with a0=sp-104, a1=0x40c218, a2=0x40c208, a3=a1 at entry (arg1).
  The `bgezall` at 0x405b54 calls drmMsg [0x405780] with a0=0x40c228, a1=sp-104, a2=?, a3=?.
  The `jalr` at 0x405b64 calls stat with a0=sp-104, a1=sp-256, a2=?, a3=?.
  The `jalr` at 0x405bb0 calls remove with a0=sp-104, a1=-0x3eb, a2=a0 at entry (arg0), a3=?.
  The `jalr` at 0x405bc4 calls mknod with a0=sp-104, a1=0x21b0, a2=a0 at entry (arg0), a3=?.
  The `jalr` at 0x405bd8 calls open with a0=sp-104, a1=0x2, a2=0x0, a3=?.
  The `bgezall` at 0x405bf8 calls drmMsg [0x405780] with a0=0x40c248, a1=?, a2=?, a3=?.
  The `jalr` at 0x405c24 calls strerror with a0=[sym(errno)], a1=?, a2=0x40c558, a3=?.
  The `bgezall` at 0x405c48 calls drmMsg [0x405780] with a0=0x40c270, a1=?, a2=?, a3=?.
  The `jalr` at 0x405c54 calls remove with a0=sp-104, a1=?, a2=?, a3=?.
  The `beq` branch at 0x405ad0 targets 0x405b24, is taken when v0(=ret(stat)) == 0, and falls through when v0(=ret(stat)) != 0.
  The `beq` branch at 0x405ad8 targets 0x405b00, is taken when s1(=ret(geteuid)) == 0, and falls through when s1(=ret(geteuid)) != 0.
  The `beq` branch at 0x405b70 targets 0x405b94, is taken when v0(=ret(stat)) == 0, and falls through when v0(=ret(stat)) != 0.
  The `beq` branch at 0x405b78 targets 0x405ba8, is taken when s1(=ret(geteuid)) == 0, and falls through when s1(=ret(geteuid)) != 0.
  The `bne` branch at 0x405b98 targets 0x405b78, is taken when a2(=a0) != a3(?), and falls through when a2(=a0) == a3(?).
  The `beq` branch at 0x405ba0 targets 0x405bcc and is always taken.
  The `bltz` branch at 0x405be4 targets 0x405c1c, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The `bltz` branch at 0x405c08 targets 0x405c40, is taken when a0(?) < 0 (signed), and falls through when a0(?) >= 0 (signed).
  The `beq` branch at 0x405c2c targets 0x405bec and is always taken.
  The `beq` branch at 0x405c64 targets 0x405ae8 and is always taken.
  The return at 0x405af0 has v0 = one of -0x3eb, ?.
  The return at 0x405b8c has v0 = -0x3eb.
  The return at 0x405c14 has v0 = ?.
  The instructions from 0x405af8 to 0x405afc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x405c34 to 0x405c3c are not reached by any path from the entry, and their branches are not listed.

- `drmOpenMinor` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x405c80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x405c80-0x405d18 (152 bytes).
  It occupies 152 bytes.
  The `lw` at 0x405d08 loads 4 bytes from sym(errno) +0x0.
  The `bgezall` at 0x405cac calls drmOpenDevice [0x405a80] with a0=?, a1=a0 at entry (arg0), a2=0x2440000, a3=a0 at entry (arg0).
  The `jalr` at 0x405cd4 calls sprintf with a0=sp-80, a1=0x40c218, a2=0x40c208, a3=a0 at entry (arg0).
  The `jalr` at 0x405ce8 calls open with a0=sp-80, a1=0x2, a2=0x0, a3=?.
  The `beq` branch at 0x405c88 targets 0x405cc0, is taken when a1 == 0, and falls through when a1 != 0.
  The `bltz` branch at 0x405cf4 targets 0x405d04, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The return at 0x405cb8 has v0 = ret(drmOpenDevice).
  The return at 0x405cfc has v0 = ret(open).
  The return at 0x405d10 has v0 = ?.

- `drmAvailable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x405d40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x405d40-0x405e0c (204 bytes).
  It occupies 204 bytes.
  The `bgezall` at 0x405d68 calls drmOpenMinor [0x405c80] with a0=0x0, a1=0x1, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x405d7c calls drmGetVersion with a0=ret(drmOpenMinor), a1=?, a2=?, a3=?.
  The `jalr` at 0x405d94 calls close with a0=ret(drmOpenMinor), a1=?, a2=?, a3=?.
  The `jalr` at 0x405db4 calls drmFreeVersion with a0=ret(drmGetVersion), a1=?, a2=?, a3=?.
  The `jalr` at 0x405dd8 calls access with a0=0x40c290, a1=0x4, a2=?, a3=?.
  The `bltz` branch at 0x405d70 targets 0x405dc8, is taken when v0(=ret(drmOpenMinor)) < 0 (signed), and falls through when v0(=ret(drmOpenMinor)) >= 0 (signed).
  The `bne` branch at 0x405d84 targets 0x405db4, is taken when v0(=ret(drmGetVersion)) != 0, and falls through when v0(=ret(drmGetVersion)) == 0.
  The `beq` branch at 0x405dc0 targets 0x405d90 and is always taken.
  The `beq` branch at 0x405de0 targets 0x405df8, is taken when v0(=ret(access)) == 0, and falls through when v0(=ret(access)) != 0.
  The return at 0x405dac has v0 = one of 0x0, 0x1.
  The return at 0x405df0 has v0 = 0x0.
  The return at 0x405e04 has v0 = 0x1.

- `drmOpenByDevName` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x405e40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x405e40-0x405e84 (68 bytes).
  It occupies 68 bytes.
  The `lw` at 0x405e74 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x405e50 calls open with a0=a0 at entry (arg0), a1=0x2, a2=0x0, a3=a3 at entry (arg3).
  The `bltz` branch at 0x405e5c targets 0x405e6c, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The return at 0x405e64 has v0 = ret(open).
  The return at 0x405e7c has v0 = ?.

- `drmOpenByBusid` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x405ec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x405ec0-0x406034 (372 bytes).
  It occupies 372 bytes.
  The `bgezall` at 0x405efc calls drmMsg [0x405780] with a0=0x40c2a0, a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x405f2c calls close with a0=ret(drmOpenMinor), a1=?, a2=?, a3=?.
  The `bgezall` at 0x405f44 calls drmOpenMinor [0x405c80] with a0=?, a1=0x0, a2=?, a3=?.
  The `bgezall` at 0x405f5c calls drmMsg [0x405780] with a0=0x40c2c0, a1=ret(drmOpenMinor), a2=?, a3=?.
  The `jalr` at 0x405f6c calls drmGetBusid with a0=ret(drmOpenMinor), a1=?, a2=?, a3=?.
  The `bgezall` at 0x405f84 calls drmMsg [0x405780] with a0=0x40c2f0, a1=ret(drmGetBusid), a2=?, a3=?.
  The `jalr` at 0x405f98 calls strcmp with a0=ret(drmGetBusid), a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0x405fb4 calls drmFreeBusid with a0=ret(drmGetBusid), a1=?, a2=?, a3=?.
  The `jalr` at 0x405ff8 calls drmFreeBusid with a0=ret(drmGetBusid), a1=?, a2=?, a3=?.
  The `beq` branch at 0x405f20 targets 0x405f3c and is always taken.
  The `beq` branch at 0x405f38 targets 0x405fc4, is taken when s1(?) == s5(=0x40), and falls through when s1(?) != s5(=0x40).
  The `bltz` branch at 0x405f64 targets 0x405f34, is taken when s0(=ret(drmOpenMinor)) < 0 (signed), and falls through when s0(=ret(drmOpenMinor)) >= 0 (signed).
  The `beq` branch at 0x405f8c targets 0x405f28, is taken when s3(=ret(drmGetBusid)) == 0, and falls through when s3(=ret(drmGetBusid)) != 0.
  The `beq` branch at 0x405fa0 targets 0x405ff8, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `beq` branch at 0x405fa8 targets 0x405f2c, is taken when s3(=ret(drmGetBusid)) == 0, and falls through when s3(=ret(drmGetBusid)) != 0.
  The `beq` branch at 0x405fbc targets 0x405f2c and is always taken.
  The return at 0x405ff0 has v0 = -0x1.
  The return at 0x40602c has v0 = ret(drmOpenMinor).

- `drmOpen` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406040-0x4060a0 (96 bytes).
  It occupies 96 bytes.
  The `bgezall` at 0x406064 calls drmOpenByDevName [0x405e40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x406088 calls drmOpenByBusid [0x405ec0] with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x406054 targets 0x406080, is taken when a1 != 0, and falls through when a1 == 0.
  The return at 0x406074 has v0 = ret(drmOpenByDevName).
  The return at 0x406098 has v0 = ret(drmOpenByBusid).
  The instructions from 0x40607c to 0x40607c are not reached by any path from the entry, and their branches are not listed.

- `drmFreeVersion` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4060c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4060c0-0x406140 (128 bytes).
  It occupies 128 bytes.
  The `lw` at 0x4060e0 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x4060f8 loads 4 bytes from a0 (arg0 at entry) +0x18.
  The `lw` at 0x40610c loads 4 bytes from a0 (arg0 at entry) +0x20.
  The `jalr` at 0x4060f0 calls drmFree with a0=[a0+16], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x406104 calls drmFree with a0=[a0+24], a1=?, a2=?, a3=?.
  The `jalr` at 0x406118 calls drmFree with a0=[a0+32], a1=?, a2=?, a3=?.
  The `jalr` at 0x406124 calls drmFree with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x4060d8 targets 0x406130, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x4060e4 targets 0x4060f8, is taken when a0(=[a0+16]) == 0, and falls through when a0(=[a0+16]) != 0.
  The `beq` branch at 0x4060fc targets 0x40610c, is taken when a0(=[a0+24]) == 0, and falls through when a0(=[a0+24]) != 0.
  The `beq` branch at 0x406110 targets 0x406120, is taken when a0(=[a0+32]) == 0, and falls through when a0(=[a0+32]) != 0.
  The return at 0x406138 has v0 = one of ?, ret(drmFree).

- `drmFreeKernelVersion` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406140-0x4061b8 (120 bytes).
  It occupies 120 bytes.
  The `lw` at 0x406154 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `lw` at 0x406168 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `lw` at 0x40617c loads 4 bytes from a0 (arg0 at entry) +0x3c.
  The `jalr` at 0x406160 calls drmFree with a0=[a0+28], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x406174 calls drmFree with a0=[a0+44], a1=?, a2=?, a3=?.
  The `jalr` at 0x406188 calls drmFree with a0=[a0+60], a1=?, a2=?, a3=?.
  Calls drmFree via got with a0=a0 at entry (arg0), a1=?, a2=?, a3=? (`jr` at 0x4061a0).
  The `beq` branch at 0x40614c targets 0x4061a8, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x406158 targets 0x406168, is taken when a0(=[a0+28]) == 0, and falls through when a0(=[a0+28]) != 0.
  The `beq` branch at 0x40616c targets 0x40617c, is taken when a0(=[a0+44]) == 0, and falls through when a0(=[a0+44]) != 0.
  The `beq` branch at 0x406180 targets 0x406190, is taken when a0(=[a0+60]) == 0, and falls through when a0(=[a0+60]) != 0.
  The return at 0x4061b0 has v0 = ?.

- `drmCopyVersion` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4061c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4061c0-0x40625c (156 bytes).
  It occupies 156 bytes.
  The `lw` at 0x4061d4 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `sw` at 0x4061d8 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lw` at 0x4061e0 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `sw` at 0x4061e4 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lw` at 0x4061e8 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `sw` at 0x4061ec stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `ld` at 0x4061f4 loads 8 bytes from a1 (arg1 at entry) +0x10.
  The `sw` at 0x406200 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `lw` at 0x40620c loads 4 bytes from a1 (arg1 at entry) +0x1c.
  The `sw` at 0x406210 stores 4 bytes to a0 (arg0 at entry) +0x10.
  The `ld` at 0x406214 loads 8 bytes from a1 (arg1 at entry) +0x20.
  The `sw` at 0x40621c stores 4 bytes to a0 (arg0 at entry) +0x14.
  The `lw` at 0x406224 loads 4 bytes from a1 (arg1 at entry) +0x2c.
  The `sw` at 0x406228 stores 4 bytes to a0 (arg0 at entry) +0x18.
  The `ld` at 0x40622c loads 8 bytes from a1 (arg1 at entry) +0x30.
  The `sw` at 0x406234 stores 4 bytes to a0 (arg0 at entry) +0x1c.
  The `lw` at 0x40623c loads 4 bytes from a1 (arg1 at entry) +0x3c.
  The `sw` at 0x40624c stores 4 bytes to a0 (arg0 at entry) +0x20.
  The `bgezall` at 0x406208 calls drmStrdup [0x4058c0] with a0=[a1+28], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x406220 calls drmStrdup [0x4058c0] with a0=[a1+44], a1=?, a2=?, a3=?.
  The `bgezall` at 0x406238 calls drmStrdup [0x4058c0] with a0=[a1+60], a1=?, a2=?, a3=?.
  The return at 0x406254 has v0 = ret(drmStrdup).

- `drmGetVersion` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406280-0x406448 (456 bytes).
  It occupies 456 bytes.
  The `sd` at 0x4062b4 stores 8 bytes to ret(drmMalloc) +0x10.
  2 such `sw` accesses store 4 bytes to ret(drmMalloc) +0x1c, including `sw` at 0x4062b8, `sw` at 0x406330.
  The `sd` at 0x4062bc stores 8 bytes to ret(drmMalloc) +0x20.
  2 such `sw` accesses store 4 bytes to ret(drmMalloc) +0x2c, including `sw` at 0x4062c0, `sw` at 0x406350.
  The `sd` at 0x4062cc stores 8 bytes to ret(drmMalloc) +0x30.
  2 such `sw` accesses store 4 bytes to ret(drmMalloc) +0x3c, including `sw` at 0x4062d8, `sw` at 0x406370.
  2 such `ld` accesses load 8 bytes from ret(drmMalloc) +0x10, including `ld` at 0x406314, `ld` at 0x4063ac.
  2 such `ld` accesses load 8 bytes from ret(drmMalloc) +0x20, including `ld` at 0x406334, `ld` at 0x4063c4.
  2 such `ld` accesses load 8 bytes from ret(drmMalloc) +0x30, including `ld` at 0x406354, `ld` at 0x4063dc.
  The `lw` at 0x4063b4 loads 4 bytes from ret(drmMalloc) +0x1c.
  The `sb` at 0x4063c0 stores 1 byte to ([ret(drmMalloc)+28] + ([ret(drmMalloc)+16]:8 << 0x0)) +0x0.
  The `lw` at 0x4063cc loads 4 bytes from ret(drmMalloc) +0x2c.
  The `sb` at 0x4063d8 stores 1 byte to ([ret(drmMalloc)+44] + ([ret(drmMalloc)+32]:8 << 0x0)) +0x0.
  The `lw` at 0x4063e4 loads 4 bytes from ret(drmMalloc) +0x3c.
  The `sb` at 0x4063f0 stores 1 byte to ([ret(drmMalloc)+60] + ([ret(drmMalloc)+48]:8 << 0x0)) +0x0.
  The `jalr` at 0x4062a8 calls drmMalloc with a0=0x40, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4062dc calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0406400, a2=ret(drmMalloc), a3=?.
  The `bgezall` at 0x4062f0 calls drmFreeKernelVersion [0x406140] with a0=ret(drmMalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x406328 calls drmMalloc with a0=([ret(drmMalloc)+16]:8+1 << 0x0), a1=?, a2=?, a3=?.
  The `jalr` at 0x406348 calls drmMalloc with a0=([ret(drmMalloc)+32]:8+1 << 0x0), a1=?, a2=?, a3=?.
  The `jalr` at 0x406368 calls drmMalloc with a0=([ret(drmMalloc)+48]:8+1 << 0x0), a1=?, a2=?, a3=?.
  The `jalr` at 0x406384 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0406400, a2=ret(drmMalloc), a3=?.
  The `bgezall` at 0x406398 calls drmFreeKernelVersion [0x406140] with a0=ret(drmMalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x4063f8 calls drmMalloc with a0=0x24, a1=?, a2=?, a3=?.
  The `bgezall` at 0x406410 calls drmCopyVersion [0x4061c0] with a0=ret(drmMalloc), a1=ret(drmMalloc), a2=?, a3=?.
  The `bgezall` at 0x406420 calls drmFreeKernelVersion [0x406140] with a0=ret(drmMalloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0x4062e4 targets 0x406314, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x406318 targets 0x406334, is taken when v0(=[ret(drmMalloc)+16]:8) == 0, and falls through when v0(=[ret(drmMalloc)+16]:8) != 0.
  The `beq` branch at 0x406338 targets 0x406354, is taken when v0(=[ret(drmMalloc)+32]:8) == 0, and falls through when v0(=[ret(drmMalloc)+32]:8) != 0.
  The `beq` branch at 0x406358 targets 0x406374, is taken when v0(=[ret(drmMalloc)+48]:8) == 0, and falls through when v0(=[ret(drmMalloc)+48]:8) != 0.
  The `beq` branch at 0x40638c targets 0x4063ac, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x4063a4 targets 0x406430 and is always taken.
  The `beq` branch at 0x4063b0 targets 0x4063c4, is taken when v0(=[ret(drmMalloc)+16]:8) == 0, and falls through when v0(=[ret(drmMalloc)+16]:8) != 0.
  The `beq` branch at 0x4063c8 targets 0x4063dc, is taken when v0(=[ret(drmMalloc)+32]:8) == 0, and falls through when v0(=[ret(drmMalloc)+32]:8) != 0.
  The `beq` branch at 0x4063e0 targets 0x4063f4, is taken when v0(=[ret(drmMalloc)+48]:8) == 0, and falls through when v0(=[ret(drmMalloc)+48]:8) != 0.
  The return at 0x40630c has v0 = 0x0.
  The return at 0x406440 has v0 = one of 0x0, ret(drmMalloc).

- `drmFreeBusid` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406480-0x4064b4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x40649c calls drmFree with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x4064ac has v0 = ret(drmFree).

- `drmGetBusid` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4064c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4064c0-0x406580 (192 bytes).
  It occupies 192 bytes.
  The `sb` at 0x406570 stores 1 byte to ?.
  The `jalr` at 0x4064f0 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0106401, a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x406520 calls drmMalloc with a0=(table(0x1) << 0x0), a1=0x1, a2=?, a3=?.
  The `jalr` at 0x40653c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0106401, a2=sp-48, a3=?.
  The `beq` branch at 0x4064f8 targets 0x406510, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x406544 targets 0x40655c, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x406508 has v0 = 0x0.
  The return at 0x406554 has v0 = 0x0.
  The return at 0x406578 has v0 = ?.

- `drmSetBusid` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406580-0x406610 (144 bytes).
  It occupies 144 bytes.
  The `lw` at 0x4065e4 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x4065a8 calls strlen with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4065cc calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80106410, a2=sp-48, a3=?.
  The `beq` branch at 0x4065d4 targets 0x4065f8, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4065f0 has v0 = ?.
  The return at 0x406608 has v0 = 0x0.

- `drmGetMagic` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406640-0x4066b4 (116 bytes).
  It occupies 116 bytes.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0x406658, `sw` at 0x4066a8.
  The `lw` at 0x406680 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x40666c calls ioctl with a0=a0 at entry (arg0), a1=0x40046402, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x406674 targets 0x406694, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x40668c has v0 = ?.
  The return at 0x4066ac has v0 = 0x0.

- `drmAuthMagic` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4066c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4066c0-0x406724 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x4066fc loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x4066e8 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80046411, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x4066f0 targets 0x406710, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x406708 has v0 = ?.
  The return at 0x40671c has v0 = 0x0.

- `drmAddMap` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406740-0x4067d0 (144 bytes).
  It occupies 144 bytes.
  The `lw` at 0x406798 loads 4 bytes from sym(errno) +0x0.
  The `sd` at 0x4067c4 stores 8 bytes to a5 (arg5 at entry) +0x0.
  The `jalr` at 0x406784 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0286415, a2=sp-64, a3=a3 at entry (arg3).
  The `beq` branch at 0x40678c targets 0x4067ac, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x4067b8 targets 0x4067c8, is taken when v1(=a5) == 0, and falls through when v1(=a5) != 0.
  The return at 0x4067a4 has v0 = ?.
  The return at 0x4067c8 has v0 = 0x0.

- `drmRmMap` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406800-0x406864 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x40683c loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x406828 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff8028641b, a2=sp-64, a3=a3 at entry (arg3).
  The `beq` branch at 0x406830 targets 0x406850, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x406848 has v0 = ?.
  The return at 0x40685c has v0 = 0x0.

- `drmAddBufs` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406880-0x4068f8 (120 bytes).
  It occupies 120 bytes.
  The `lw` at 0x4068d0 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x4068bc calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0186416, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x4068c4 targets 0x4068e4, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4068dc has v0 = ?.
  The return at 0x4068f0 has v0 = a1.

- `drmMarkBufs` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406900-0x406ab8 (440 bytes).
  It occupies 440 bytes.
  2 such `lw` accesses load 4 bytes from sym(errno) +0x0, including `lw` at 0x4069c0, `lw` at 0x406a9c.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4069f4, `lw` at 0x406a18.
  2 such `swc1` accesses store 4 bytes to ?, including `swc1` at 0x406a0c, `swc1` at 0x406a34.
  The `jalr` at 0x406938 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0086418, a2=sp-80, a3=a3 at entry (arg3).
  The `jalr` at 0x406970 calls drmMalloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4069a8 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0086418, a2=sp-80, a3=?, a4=-0xc.
  The `jalr` at 0x4069cc calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x406a48 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80186417, a2=?, a3=?.
  The `jalr` at 0x406a7c calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x406aa8 calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x406940 targets 0x406958, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x40695c targets 0x406a8c, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x40697c targets 0x406998, is taken when v0(=ret(drmMalloc)) != 0, and falls through when v0(=ret(drmMalloc)) == 0.
  The `beq` branch at 0x4069b0 targets 0x4069dc, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x4069d4 targets 0x406948 and is always taken.
  The `blez` branch at 0x4069dc targets 0x406a78, is taken when a1(?) <= 0 (signed), and falls through when a1(?) > 0 (signed).
  The `bne` branch at 0x406a50 targets 0x406a94, is taken when v0(=ret(ioctl)) != 0, and falls through when v0(=ret(ioctl)) == 0.
  The `bne` branch at 0x406a70 targets 0x4069e8, is taken when a5(?) < a6(?) (signed), and falls through when a5(?) >= a6(?) (signed).
  The `beq` branch at 0x406a84 targets 0x406948 and is always taken.
  The `beq` branch at 0x406a8c targets 0x40694c and is always taken.
  The `beq` branch at 0x406ab0 targets 0x406948 and is always taken.
  The return at 0x406950 has v0 = one of ?, -0x16.
  The return at 0x406990 has v0 = -0xc.

- `drmFreeBufs` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406ac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406ac0-0x406b28 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x406b00 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x406aec calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff8008641a, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x406af4 targets 0x406b14, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x406b0c has v0 = ?.
  The return at 0x406b20 has v0 = 0x0.

- `drmClose` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406b40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406b40-0x406be8 (168 bytes).
  It occupies 168 bytes.
  The `lw` at 0x406b94 loads 4 bytes from ret(drmGetEntry) +0x8.
  The `sw` at 0x406b9c stores 4 bytes to ret(drmGetEntry) +0x0.
  The `sw` at 0x406ba0 stores 4 bytes to ret(drmGetEntry) +0x4.
  The `sw` at 0x406ba4 stores 4 bytes to ret(drmGetEntry) +0x8.
  The `bgezall` at 0x406b68 calls drmGetKeyFromFd [0x405980] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x406b80 calls drmGetEntry [0x4059c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x406b90 calls drmHashDestroy with a0=[ret(drmGetEntry)+8], a1=?, a2=?, a3=?.
  The `jalr` at 0x406bac calls drmHashDelete with a0=[0x40c53c], a1=ret(drmGetKeyFromFd), a2=?, a3=?.
  The `jalr` at 0x406bbc calls drmFree with a0=ret(drmGetEntry), a1=?, a2=?, a3=?.
  The `jalr` at 0x406bcc calls close with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The return at 0x406be0 has v0 = ret(close).

- `drmMap` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406c00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406c00-0x406cc8 (200 bytes).
  It occupies 200 bytes.
  The `sw` at 0x406c74 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `lw` at 0x406c7c loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x406c58 calls mmap with a0=0x0, a1=?, a2=0x3, a3=0x1, a4=a0 at entry (arg0), a5=a1 at entry (arg1).
  The `jalr` at 0x406cb4 calls getpagesize with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bltz` branch at 0x406c10 targets 0x406ca0, is taken when a0 < 0 (signed), and falls through when a0 >= 0 (signed).
  The `beq` branch at 0x406c2c targets 0x406cb0, is taken when t0(=[0x40c540]) == 0, and falls through when t0(=[0x40c540]) != 0.
  The `bne` branch at 0x406c70 targets 0x406c90, is taken when v0(=ret(mmap)) != a2(=-0x1), and falls through when v0(=ret(mmap)) == a2(=-0x1).
  The `beq` branch at 0x406cc0 targets 0x406c34 and is always taken.
  The return at 0x406c88 has v0 = ?.
  The return at 0x406c98 has v0 = 0x0.
  The return at 0x406ca8 has v0 = -0x16.

- `drmUnmap` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406d00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406d00-0x406d34 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x406d1c calls munmap with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x406d2c has v0 = ret(munmap).

- `drmGetBufInfo` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406d40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406d40-0x406ee4 (420 bytes).
  It occupies 420 bytes.
  The `sw` at 0x406e28 stores 4 bytes to ret(drmMalloc) +0x0.
  The `sw` at 0x406e3c stores 4 bytes to ret(drmMalloc) +0x4.
  4 such `lw` accesses load 4 bytes from ret(drmMalloc) +0x4, including `lw` at 0x406e58, `lw` at 0x406e70, `lw` at 0x406e88.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x406e64, `lw` at 0x406e7c, `lw` at 0x406e94.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0x406e68, `sw` at 0x406e80, `sw` at 0x406e98.
  The `jalr` at 0x406d70 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0086418, a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x406da4 calls drmMalloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x406dd8 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0086418, a2=sp-48, a3=?.
  The `jalr` at 0x406de8 calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x406e18 calls drmMalloc with a0=0x8, a1=?, a2=?, a3=?.
  The `jalr` at 0x406e34 calls drmMalloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x406ed0 calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x406d78 targets 0x406d90, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x406d94 targets 0x406e08, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x406dac targets 0x406dc8, is taken when v0(=ret(drmMalloc)) != 0, and falls through when v0(=ret(drmMalloc)) == 0.
  The `beq` branch at 0x406de0 targets 0x406e10, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x406e08 targets 0x406d80 and is always taken.
  The `blez` branch at 0x406e4c targets 0x406ecc, is taken when a2(?) <= 0 (signed), and falls through when a2(?) > 0 (signed).
  The `bne` branch at 0x406ec4 targets 0x406e54, is taken when a0(?) < a3(?) (signed), and falls through when a0(?) >= a3(?) (signed).
  The `beq` branch at 0x406edc targets 0x406d80 and is always taken.
  The return at 0x406d88 has v0 = one of 0x0, ret(drmMalloc).
  The return at 0x406dc0 has v0 = 0x0.
  The return at 0x406e00 has v0 = 0x0.

- `drmMapBufs` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x406f00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x406f00-0x40707c (380 bytes).
  It occupies 380 bytes.
  The `sw` at 0x406fe0 stores 4 bytes to ret(drmMalloc) +0x0.
  The `sw` at 0x406ff4 stores 4 bytes to ret(drmMalloc) +0x4.
  4 such `lw` accesses load 4 bytes from ret(drmMalloc) +0x4, including `lw` at 0x407010, `lw` at 0x407028, `lw` at 0x40703c.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x40701c, `lw` at 0x407034, `lw` at 0x407058.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0x407020, `sw` at 0x407038, `sw` at 0x407044.
  The `jalr` at 0x406f30 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc00c6419, a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x406f5c calls drmMalloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x406f90 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc00c6419, a2=sp-48, a3=?.
  The `jalr` at 0x406fa0 calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x406fd0 calls drmMalloc with a0=0x8, a1=?, a2=?, a3=?.
  The `jalr` at 0x406fec calls drmMalloc with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x406f38 targets 0x406f50, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x406f54 targets 0x406fc0, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x406f64 targets 0x406f80, is taken when v0(=ret(drmMalloc)) != 0, and falls through when v0(=ret(drmMalloc)) == 0.
  The `beq` branch at 0x406f98 targets 0x406fc8, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x406fc0 targets 0x406f40 and is always taken.
  The `blez` branch at 0x407004 targets 0x407074, is taken when a2(?) <= 0 (signed), and falls through when a2(?) > 0 (signed).
  The `bne` branch at 0x40706c targets 0x40700c, is taken when a0(?) < a3(?) (signed), and falls through when a0(?) >= a3(?) (signed).
  The `beq` branch at 0x407074 targets 0x406f40 and is always taken.
  The return at 0x406f48 has v0 = one of 0x0, ret(drmMalloc).
  The return at 0x406f78 has v0 = 0x0.
  The return at 0x406fb4 has v0 = 0x0.
  The instructions from 0x406fbc to 0x406fbc are not reached by any path from the entry, and their branches are not listed.

- `drmUnmapBufs` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407080-0x407110 (144 bytes).
  It occupies 144 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x407084, `lw` at 0x4070d8.
  The `lw` at 0x4070c0 loads 4 bytes from a0 (arg0 at entry) +0x4.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4070cc, `lw` at 0x4070d4.
  The `jalr` at 0x4070d0 calls munmap with a0=?, a1=?, a2=?, a3=?.
  The `blez` branch at 0x4070a4 targets 0x4070f8, is taken when v0(=[a0]) <= 0 (signed), and falls through when v0(=[a0]) > 0 (signed).
  The `bne` branch at 0x4070e4 targets 0x4070c0, is taken when s2(?) < a2(=[a0]) (signed), and falls through when s2(?) >= a2(=[a0]) (signed).
  The return at 0x407108 has v0 = 0x0.

- `drmDMA` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407140-0x407250 (272 bytes).
  It occupies 272 bytes.
  The `lw` at 0x407158 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x407160 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x407168 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x407170 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x407178 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x407180 loads 4 bytes from a1 (arg1 at entry) +0x14.
  The `lw` at 0x407188 loads 4 bytes from a1 (arg1 at entry) +0x18.
  The `lw` at 0x407190 loads 4 bytes from a1 (arg1 at entry) +0x1c.
  The `lw` at 0x4071ac loads 4 bytes from a1 (arg1 at entry) +0x20.
  2 such `lw` accesses load 4 bytes from sym(errno) +0x0, including `lw` at 0x4071e0, `lw` at 0x407208.
  The `sw` at 0x407244 stores 4 bytes to a1 (arg1 at entry) +0x24.
  The `jalr` at 0x4071c8 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0286429, a2=sp-96, a3=?.
  The `beq` branch at 0x4071dc targets 0x407204, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `bne` branch at 0x4071e4 targets 0x407204, is taken when a4(=[sym(errno)]) != t0(=0xb), and falls through when a4(=[sym(errno)]) == t0(=0xb).
  The `bne` branch at 0x4071f4 targets 0x4071c0, is taken when t1(?) < 0x11 (signed), and falls through when t1(?) >= 0x11 (signed).
  The `beq` branch at 0x4071fc targets 0x407210 and is always taken.
  The `beq` branch at 0x407204 targets 0x407228, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407220 has v0 = ?.
  The return at 0x407248 has v0 = 0x0.

- `drmGetLock` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407280-0x40737c (252 bytes).
  It occupies 252 bytes.
  The `jalr` at 0x407330 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff8008642a, a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x40734c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff8008642a, a2=sp-48, a3=?.
  The `beq` branch at 0x4072b8 targets 0x4072c8, is taken when (a2 & 0x1) == 0, and falls through when (a2 & 0x1) != 0.
  The `beq` branch at 0x4072c8 targets 0x4072d8, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x4072dc targets 0x4072ec, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x4072ec targets 0x4072fc, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x4072fc targets 0x40730c, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x40730c targets 0x407318, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x407338 targets 0x407360, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `bne` branch at 0x407354 targets 0x407344, is taken when v0(=ret(ioctl)) != 0, and falls through when v0(=ret(ioctl)) == 0.
  The return at 0x407374 has v0 = 0x0.

- `drmUnlock` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407380 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407380-0x4073c4 (68 bytes).
  It occupies 68 bytes.
  The `jalr` at 0x4073ac calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff8008642b, a2=sp-32, a3=a3 at entry (arg3).
  The return at 0x4073bc has v0 = ret(ioctl).

- `drmGetReservedContextList` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407400-0x40755c (348 bytes).
  It occupies 348 bytes.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4074ec, `lw` at 0x407508.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x4074f0, `sw` at 0x40750c.
  The `sw` at 0x407544 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `jalr` at 0x407438 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0086426, a2=sp-64, a3=a3 at entry (arg3).
  The `jalr` at 0x407474 calls drmMalloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x407494 calls drmMalloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4074bc calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0086426, a2=sp-64, a3=?.
  The `jalr` at 0x40752c calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x40754c calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x407440 targets 0x407468, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x40746c targets 0x4074d8, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x40747c targets 0x40748c, is taken when v0(=ret(drmMalloc)) != 0, and falls through when v0(=ret(drmMalloc)) == 0.
  The `beq` branch at 0x407484 targets 0x407458 and is always taken.
  The `beq` branch at 0x40749c targets 0x407548, is taken when v0(=ret(drmMalloc)) == 0, and falls through when v0(=ret(drmMalloc)) != 0.
  The `beq` branch at 0x4074c8 targets 0x4074e0, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x4074d0 targets 0x407458 and is always taken.
  The `beq` branch at 0x4074d8 targets 0x407458 and is always taken.
  The `blez` branch at 0x4074e0 targets 0x407528, is taken when a4(?) <= 0 (signed), and falls through when a4(?) > 0 (signed).
  The `beq` branch at 0x407500 targets 0x407528, is taken when a1(?) >= a3(?) (signed), and falls through when a1(?) < a3(?) (signed).
  The `bne` branch at 0x407520 targets 0x4074ec, is taken when a1(?) < a7(?) (signed), and falls through when a1(?) >= a7(?) (signed).
  The `beq` branch at 0x407540 targets 0x407458 and is always taken.
  The `beq` branch at 0x407554 targets 0x407458 and is always taken.
  The return at 0x407450 has v0 = 0x0.
  The return at 0x407460 has v0 = one of 0x0, ?.

- `drmFreeReservedContextList` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407580-0x4075b4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x40759c calls drmFree with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x4075ac has v0 = ret(drmFree).

- `drmCreateContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4075c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4075c0-0x407634 (116 bytes).
  It occupies 116 bytes.
  The `lw` at 0x407600 loads 4 bytes from sym(errno) +0x0.
  The `sw` at 0x407628 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `jalr` at 0x4075ec calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0086420, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x4075f4 targets 0x407614, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x40760c has v0 = ?.
  The return at 0x40762c has v0 = 0x0.

- `drmSwitchToContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407640-0x4076a4 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x40767c loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407668 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80086424, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x407670 targets 0x407690, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407688 has v0 = ?.
  The return at 0x40769c has v0 = 0x0.

- `drmSetContextFlags` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4076c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4076c0-0x40774c (140 bytes).
  It occupies 140 bytes.
  The `lw` at 0x407724 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407710 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80086422, a2=sp-32, a3=(one of 0x0, 0x1 | 0x2), a4=one of 0x0, 0x1.
  The `beq` branch at 0x4076e4 targets 0x4076f4, is taken when (a2 & 0x1) == 0, and falls through when (a2 & 0x1) != 0.
  The `beq` branch at 0x4076f8 targets 0x407704, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x407718 targets 0x407738, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407730 has v0 = ?.
  The return at 0x407744 has v0 = 0x0.

- `drmGetContextFlags` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407780-0x407824 (164 bytes).
  It occupies 164 bytes.
  The `lw` at 0x4077c0 loads 4 bytes from sym(errno) +0x0.
  3 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x0, including `sw` at 0x4077d8, `sw` at 0x407800, `sw` at 0x407818.
  The `jalr` at 0x4077ac calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0086423, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x4077b4 targets 0x4077d4, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x4077f8 targets 0x40780c, is taken when (a1(?) & 0x1) == 0, and falls through when (a1(?) & 0x1) != 0.
  The `beq` branch at 0x407810 targets 0x40781c, is taken when (a1(?) & 0x2) == 0, and falls through when (a1(?) & 0x2) != 0.
  The return at 0x4077cc has v0 = ?.
  The return at 0x40781c has v0 = 0x0.

- `drmDestroyContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407840 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407840-0x4078a4 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x40787c loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407868 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0086421, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x407870 targets 0x407890, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407888 has v0 = ?.
  The return at 0x40789c has v0 = 0x0.

- `drmCreateDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4078c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4078c0-0x407930 (112 bytes).
  It occupies 112 bytes.
  The `lw` at 0x4078fc loads 4 bytes from sym(errno) +0x0.
  The `sw` at 0x407924 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `jalr` at 0x4078e8 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0046427, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x4078f0 targets 0x407910, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407908 has v0 = ?.
  The return at 0x407928 has v0 = 0x0.

- `drmDestroyDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407940 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407940-0x4079a4 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x40797c loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407968 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0046428, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x407970 targets 0x407990, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407988 has v0 = ?.
  The return at 0x40799c has v0 = 0x0.

- `drmAgpAcquire` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4079c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4079c0-0x407a20 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0x4079f8 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x4079e4 calls ioctl with a0=a0 at entry (arg0), a1=0x20006430, a2=0x0, a3=a3 at entry (arg3).
  The `beq` branch at 0x4079ec targets 0x407a0c, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407a04 has v0 = ?.
  The return at 0x407a18 has v0 = 0x0.

- `drmAgpRelease` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407a40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407a40-0x407aa0 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0x407a78 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407a64 calls ioctl with a0=a0 at entry (arg0), a1=0x20006431, a2=0x0, a3=a3 at entry (arg3).
  The `beq` branch at 0x407a6c targets 0x407a8c, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407a84 has v0 = ?.
  The return at 0x407a98 has v0 = 0x0.

- `drmAgpEnable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407ac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407ac0-0x407b24 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x407afc loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407ae8 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80046432, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x407af0 targets 0x407b10, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407b08 has v0 = ?.
  The return at 0x407b1c has v0 = 0x0.

- `drmAgpAlloc` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407b40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407b40-0x407bd4 (148 bytes).
  It occupies 148 bytes.
  2 such `sw` accesses store 4 bytes to a4 (arg4 at entry) +0x0, including `sw` at 0x407b58, `sw` at 0x407bc8.
  The `lw` at 0x407b90 loads 4 bytes from sym(errno) +0x0.
  The `sw` at 0x407bc0 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `jalr` at 0x407b7c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0106434, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x407b84 targets 0x407ba4, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x407bb4 targets 0x407bc4, is taken when v1(=a3) == 0, and falls through when v1(=a3) != 0.
  The return at 0x407b9c has v0 = ?.
  The return at 0x407bcc has v0 = 0x0.

- `drmAgpFree` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407c00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407c00-0x407c68 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x407c40 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407c2c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80106435, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x407c34 targets 0x407c54, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407c4c has v0 = ?.
  The return at 0x407c60 has v0 = 0x0.

- `drmAgpBind` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407c80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407c80-0x407ce8 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x407cc0 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407cac calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80086436, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x407cb4 targets 0x407cd4, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407ccc has v0 = ?.
  The return at 0x407ce0 has v0 = 0x0.

- `drmAgpUnbind` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407d00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407d00-0x407d68 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x407d40 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407d2c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80086437, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x407d34 targets 0x407d54, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407d4c has v0 = ?.
  The return at 0x407d60 has v0 = 0x0.

- `drmAgpVersionMajor` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407d80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407d80-0x407de0 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0x407db8 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407da4 calls ioctl with a0=a0 at entry (arg0), a1=0x40206433, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x407dac targets 0x407dcc, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407dc4 has v0 = ?.
  The return at 0x407dd8 has v0 = ?.

- `drmAgpVersionMinor` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407e00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407e00-0x407e60 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0x407e38 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407e24 calls ioctl with a0=a0 at entry (arg0), a1=0x40206433, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x407e2c targets 0x407e4c, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407e44 has v0 = ?.
  The return at 0x407e58 has v0 = ?.

- `drmAgpGetMode` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407e80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407e80-0x407ed8 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x407ea4 calls ioctl with a0=a0 at entry (arg0), a1=0x40206433, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x407eac targets 0x407ec4, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407ebc has v0 = 0x0.
  The return at 0x407ed0 has v0 = ?.

- `drmAgpBase` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407f00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407f00-0x407f58 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x407f24 calls ioctl with a0=a0 at entry (arg0), a1=0x40206433, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x407f2c targets 0x407f44, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407f3c has v0 = 0x0.
  The return at 0x407f50 has v0 = ?.

- `drmAgpSize` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x407f80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x407f80-0x407fd8 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x407fa4 calls ioctl with a0=a0 at entry (arg0), a1=0x40206433, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x407fac targets 0x407fc4, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407fbc has v0 = 0x0.
  The return at 0x407fd0 has v0 = ?.

- `drmAgpMemoryUsed` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408000 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408000-0x408058 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x408024 calls ioctl with a0=a0 at entry (arg0), a1=0x40206433, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x40802c targets 0x408044, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x40803c has v0 = 0x0.
  The return at 0x408050 has v0 = ?.

- `drmAgpMemoryAvail` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408080-0x4080d8 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x4080a4 calls ioctl with a0=a0 at entry (arg0), a1=0x40206433, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x4080ac targets 0x4080c4, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4080bc has v0 = 0x0.
  The return at 0x4080d0 has v0 = ?.

- `drmAgpVendorId` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408100-0x408158 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x408124 calls ioctl with a0=a0 at entry (arg0), a1=0x40206433, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x40812c targets 0x408144, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x40813c has v0 = 0x0.
  The return at 0x408150 has v0 = ?.

- `drmAgpDeviceId` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408180 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408180-0x4081d8 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x4081a4 calls ioctl with a0=a0 at entry (arg0), a1=0x40206433, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x4081ac targets 0x4081c4, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4081bc has v0 = 0x0.
  The return at 0x4081d0 has v0 = ?.

- `drmScatterGatherAlloc` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408200 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408200-0x40827c (124 bytes).
  It occupies 124 bytes.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x0, including `sw` at 0x408218, `sw` at 0x408270.
  The `lw` at 0x408248 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x408234 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80086438, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x40823c targets 0x40825c, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408254 has v0 = ?.
  The return at 0x408274 has v0 = 0x0.

- `drmScatterGatherFree` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408280-0x4082e8 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x4082c0 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x4082ac calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80086439, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x4082b4 targets 0x4082d4, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4082cc has v0 = ?.
  The return at 0x4082e0 has v0 = 0x0.

- `drmError` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408300-0x408454 (340 bytes).
  It occupies 340 bytes.
  The `jalr` at 0x408370 calls strerror with a0=?, a1=a1 at entry (arg1), a2=-0x3ea, a3=-0x3eb, a5=-0x3ec.
  The `jalr` at 0x408390 calls fprintf with a0=sym(__iob)+32, a1=0x40c318, a2=a1 at entry (arg1), a3=?, a4=ret(strerror).
  The `jalr` at 0x4083d4 calls fprintf with a0=sym(__iob)+32, a1=0x40c368, a2=a1 at entry (arg1), a3=-0x3eb, a5=-0x3ec.
  The `jalr` at 0x4083f8 calls fprintf with a0=sym(__iob)+32, a1=0x40c358, a2=a1 at entry (arg1), a3=-0x3eb, a5=-0x3ec.
  The `jalr` at 0x40841c calls fprintf with a0=sym(__iob)+32, a1=0x40c348, a2=a1 at entry (arg1), a3=-0x3eb, a5=-0x3ec.
  The `jalr` at 0x408440 calls fprintf with a0=sym(__iob)+32, a1=0x40c330, a2=a1 at entry (arg1), a3=-0x3eb, a5=-0x3ec.
  The `beq` branch at 0x408340 targets 0x4083c0, is taken when a0 == at(=-0x3e9), and falls through when a0 != at(=-0x3e9).
  The `beq` branch at 0x408348 targets 0x4083e8, is taken when a0 == a2(=-0x3ea), and falls through when a0 != a2(=-0x3ea).
  The `beq` branch at 0x408350 targets 0x40840c, is taken when a0 == a3(=-0x3eb), and falls through when a0 != a3(=-0x3eb).
  The `beq` branch at 0x408358 targets 0x408430, is taken when a0 == a5(=-0x3ec), and falls through when a0 != a5(=-0x3ec).
  The `bgez` branch at 0x408360 targets 0x408370, is taken when a0 >= 0 (signed), and falls through when a0 < 0 (signed).
  The `beq` branch at 0x4083e0 targets 0x4083a4 and is always taken.
  The `beq` branch at 0x408404 targets 0x4083a4 and is always taken.
  The `beq` branch at 0x408428 targets 0x4083a4 and is always taken.
  The `beq` branch at 0x40844c targets 0x4083a4 and is always taken.
  The return at 0x4083ac has v0 = 0x1.
  The instructions from 0x4083b4 to 0x4083bc are not reached by any path from the entry, and their branches are not listed.

- `drmCtlInstHandler` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408480-0x4084ec (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x4084c4 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x4084b0 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80086414, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x4084b8 targets 0x4084d8, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4084d0 has v0 = ?.
  The return at 0x4084e4 has v0 = 0x0.

- `drmCtlUninstHandler` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408500 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408500-0x40856c (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x408544 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x408530 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80086414, a2=sp-32, a3=0x3.
  The `beq` branch at 0x408538 targets 0x408558, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408550 has v0 = ?.
  The return at 0x408564 has v0 = 0x0.

- `drmFinish` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408580-0x408650 (208 bytes).
  It occupies 208 bytes.
  The `lw` at 0x408628 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x408614 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff8008642c, a2=sp-32, a3=?.
  The `beq` branch at 0x4085a8 targets 0x4085b8, is taken when (a2 & 0x1) == 0, and falls through when (a2 & 0x1) != 0.
  The `beq` branch at 0x4085b8 targets 0x4085c8, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x4085cc targets 0x4085dc, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x4085dc targets 0x4085ec, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x4085ec targets 0x4085fc, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x4085fc targets 0x408608, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x40861c targets 0x40863c, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408634 has v0 = ?.
  The return at 0x408648 has v0 = 0x0.

- `drmGetInterruptFromBusID` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408680-0x4086ec (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x4086c4 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x4086b0 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0106403, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x4086b8 targets 0x4086d8, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4086d0 has v0 = ?.
  The return at 0x4086e4 has v0 = ?.

- `drmAddContextTag` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408700-0x408798 (152 bytes).
  It occupies 152 bytes.
  3 such `lw` accesses load 4 bytes from ret(drmGetEntry) +0x8, including `lw` at 0x408744, `lw` at 0x408760, `lw` at 0x40876c.
  The `bgezall` at 0x408730 calls drmGetEntry [0x4059c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x408748 calls drmHashInsert with a0=[ret(drmGetEntry)+8], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?.
  The `jalr` at 0x40875c calls drmHashDelete with a0=[ret(drmGetEntry)+8], a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x408770 calls drmHashInsert with a0=[ret(drmGetEntry)+8], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?.
  The `beq` branch at 0x408750 targets 0x408778, is taken when v0(=ret(drmHashInsert)) == 0, and falls through when v0(=ret(drmHashInsert)) != 0.
  The return at 0x408790 has v0 = 0x0.

- `drmDelContextTag` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4087c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4087c0-0x408810 (80 bytes).
  It occupies 80 bytes.
  The `lw` at 0x4087f0 loads 4 bytes from ret(drmGetEntry) +0x8.
  The `bgezall` at 0x4087e4 calls drmGetEntry [0x4059c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4087f4 calls drmHashDelete with a0=[ret(drmGetEntry)+8], a1=a1 at entry (arg1), a2=?, a3=?.
  The return at 0x408808 has v0 = ret(drmHashDelete).

- `drmGetContextTag` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408840 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408840-0x4088b4 (116 bytes).
  It occupies 116 bytes.
  The `lw` at 0x408874 loads 4 bytes from ret(drmGetEntry) +0x8.
  The `bgezall` at 0x408864 calls drmGetEntry [0x4059c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x408878 calls drmHashLookup with a0=[ret(drmGetEntry)+8], a1=a1 at entry (arg1), a2=sp-32, a3=?.
  The `beq` branch at 0x408880 targets 0x40889c, is taken when v0(=ret(drmHashLookup)) == 0, and falls through when v0(=ret(drmHashLookup)) != 0.
  The return at 0x408894 has v0 = 0x0.
  The return at 0x4088ac has v0 = ?.

- `drmAddContextPrivateMapping` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4088c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4088c0-0x408928 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x408900 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x4088ec calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff8010641c, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x4088f4 targets 0x408914, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x40890c has v0 = ?.
  The return at 0x408920 has v0 = 0x0.

- `drmGetContextPrivateMapping` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408940 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408940-0x4089b8 (120 bytes).
  It occupies 120 bytes.
  The `lw` at 0x408980 loads 4 bytes from sym(errno) +0x0.
  The `sd` at 0x4089ac stores 8 bytes to a2 (arg2 at entry) +0x0.
  The `jalr` at 0x40896c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc010641d, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x408974 targets 0x408994, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x4089a0 targets 0x4089b0, is taken when v1(=a2) == 0, and falls through when v1(=a2) != 0.
  The return at 0x40898c has v0 = ?.
  The return at 0x4089b0 has v0 = 0x0.

- `drmGetMap` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4089c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4089c0-0x408a8c (204 bytes).
  It occupies 204 bytes.
  The `lw` at 0x408a14 loads 4 bytes from sym(errno) +0x0.
  The `sd` at 0x408a44 stores 8 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0x408a4c stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0x408a54 stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `sw` at 0x408a5c stores 4 bytes to a5 (arg5 at entry) +0x0.
  The `sd` at 0x408a74 stores 8 bytes to a6 (arg6 at entry) +0x0.
  The `sw` at 0x408a80 stores 4 bytes to a7 (arg7 at entry) +0x0.
  The `jalr` at 0x408a00 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0286404, a2=sp-112, a3=a3 at entry (arg3).
  The `beq` branch at 0x408a08 targets 0x408a28, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408a20 has v0 = ?.
  The return at 0x408a84 has v0 = 0x0.

- `drmGetClient` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408ac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408ac0-0x408b74 (180 bytes).
  It occupies 180 bytes.
  The `lw` at 0x408b10 loads 4 bytes from sym(errno) +0x0.
  The `sw` at 0x408b44 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0x408b4c stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0x408b54 stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `sw` at 0x408b5c stores 4 bytes to a5 (arg5 at entry) +0x0.
  The `sw` at 0x408b68 stores 4 bytes to a6 (arg6 at entry) +0x0.
  The `jalr` at 0x408afc calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0186405, a2=sp-80, a3=a3 at entry (arg3).
  The `beq` branch at 0x408b04 targets 0x408b24, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408b1c has v0 = ?.
  The return at 0x408b6c has v0 = 0x0.

- `drmGetStats` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x408b80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x408b80-0x408f50 (976 bytes).
  It occupies 976 bytes.
  The `lw` at 0x408bbc loads 4 bytes from sym(errno) +0x0.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0x408bf8, `sw` at 0x408c28.
  117 such `sw` accesses store 4 bytes to ?, including `sw` at 0x408c60, `sw` at 0x408c64, `sw` at 0x408c68.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x408c98, `lw` at 0x408ca0.
  The `lw` at 0x408cbc loads 4 bytes from table(0x40c3b8) +0x0.
  The `jalr` at 0x408ba8 calls ioctl with a0=a0 at entry (arg0), a1=0x407c6406, a2=sp-160, a3=a3 at entry (arg3).
  The `jalr` at 0x408bf4 calls memset with a0=a1 at entry (arg1), a1=0x0, a2=0x220, a3=?.
  The `beq` branch at 0x408bb0 targets 0x408be0, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `bne` branch at 0x408c18 targets 0x408c28, is taken when a0(?) < 0x10 (unsigned), and falls through when a0(?) >= 0x10 (unsigned).
  The `beq` branch at 0x408c20 targets 0x408bd4 and is always taken.
  The `beq` branch at 0x408c34 targets 0x408cc8, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x408c58 targets 0x408f44 and is always taken.
  The `beq` branch at 0x408c90 targets 0x408cc8, is taken when v0(?) >= at(?) (unsigned), and falls through when v0(?) < at(?) (unsigned).
  The `beq` branch at 0x408cb4 targets 0x408c60, is taken when at(?) >= 0xf (unsigned), and falls through when at(?) < 0xf (unsigned).
  The `beq` branch at 0x408cc8 targets 0x408bd0 and is always taken.
  The `beq` branch at 0x408ce8 targets 0x408c80 and is always taken.
  The `beq` branch at 0x408d14 targets 0x408c80 and is always taken.
  The `beq` branch at 0x408d44 targets 0x408c80 and is always taken.
  The `beq` branch at 0x408d70 targets 0x408c80 and is always taken.
  The `beq` branch at 0x408da8 targets 0x408c80 and is always taken.
  The `beq` branch at 0x408dd8 targets 0x408c80 and is always taken.
  The `beq` branch at 0x408e04 targets 0x408c80 and is always taken.
  The `beq` branch at 0x408e30 targets 0x408c80 and is always taken.
  The `beq` branch at 0x408e58 targets 0x408c80 and is always taken.
  The `beq` branch at 0x408e84 targets 0x408c80 and is always taken.
  The `beq` branch at 0x408eb0 targets 0x408c80 and is always taken.
  The `beq` branch at 0x408ee4 targets 0x408c80 and is always taken.
  The `beq` branch at 0x408f10 targets 0x408c80 and is always taken.
  The `beq` branch at 0x408f3c targets 0x408c80 and is always taken.
  The `beq` branch at 0x408f48 targets 0x408c9c and is always taken.
  The return at 0x408bc8 has v0 = ?.
  The return at 0x408bd8 has v0 = one of -0x1, 0x0.
  The instructions from 0x408d78 to 0x408d7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x408e38 to 0x408e3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x408eb8 to 0x408ebc are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x408cc0 uses the jump table at 0x40c3b8 with targets 0x408cd0, 0x408f18, 0x408eec, 0x408ec0, 0x408e8c, 0x408e60, 0x408e40, 0x408e0c, 0x408c60, 0x408de0, 0x408db0, 0x408d80, 0x408d4c, 0x408d1c, 0x408cf0.
  The indirect jump at 0x408cc0 uses the jump table at 0x40c3b8 with targets 0x408cd0, 0x408f18, 0x408eec, 0x408ec0, 0x408e8c, 0x408e60, 0x408e40, 0x408e0c, 0x408c60, 0x408de0, 0x408db0, 0x408d80, 0x408d4c, 0x408d1c, 0x408cf0.
  The indirect jump at 0x408cc0 uses the jump table at 0x40c3b8 with targets 0x408cd0, 0x408f18, 0x408eec, 0x408ec0, 0x408e8c, 0x408e60, 0x408e40, 0x408e0c, 0x408c60, 0x408de0, 0x408db0, 0x408d80, 0x408d4c, 0x408d1c, 0x408cf0.
  The indirect jump at 0x408cc0 uses the jump table at 0x40c3b8 with targets 0x408cd0, 0x408f18, 0x408eec, 0x408ec0, 0x408e8c, 0x408e60, 0x408e40, 0x408e0c, 0x408c60, 0x408de0, 0x408db0, 0x408d80, 0x408d4c, 0x408d1c, 0x408cf0.
  The indirect jump at 0x408cc0 uses the jump table at 0x40c3b8 with targets 0x408cd0, 0x408f18, 0x408eec, 0x408ec0, 0x408e8c, 0x408e60, 0x408e40, 0x408e0c, 0x408c60, 0x408de0, 0x408db0, 0x408d80, 0x408d4c, 0x408d1c, 0x408cf0.

- `drmRandomCreate` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x409000 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x409000-0x4090c8 (200 bytes).
  It occupies 200 bytes.
  The `sw` at 0x409048 stores 4 bytes to ret(drmMalloc) +0x10.
  The `sw` at 0x40904c stores 4 bytes to ret(drmMalloc) +0xc.
  The `sw` at 0x409050 stores 4 bytes to ret(drmMalloc) +0x4.
  3 such `sw` accesses store 4 bytes to ret(drmMalloc) +0x18, including `sw` at 0x409054, `sw` at 0x409094, `sw` at 0x4090bc.
  The `sw` at 0x409068 stores 4 bytes to ret(drmMalloc) +0x14.
  The `sw` at 0x409074 stores 4 bytes to ret(drmMalloc) +0x8.
  The `sw` at 0x409080 stores 4 bytes to ret(drmMalloc) +0x0.
  The `jalr` at 0x409020 calls drmMalloc with a0=0x1c, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x40903c targets 0x4090a4, is taken when v0(=ret(drmMalloc)) == 0, and falls through when v0(=ret(drmMalloc)) != 0.
  The `blez` branch at 0x40907c targets 0x4090b8, is taken when a0 <= 0 (signed), and falls through when a0 > 0 (signed).
  The `bne` branch at 0x409088 targets 0x409098, is taken when v0(?) < a6(=0x7fffffff) (unsigned), and falls through when v0(?) >= a6(=0x7fffffff) (unsigned).
  The `beq` branch at 0x4090c0 targets 0x409084 and is always taken.
  The return at 0x40909c has v0 = ret(drmMalloc).
  The return at 0x4090b0 has v0 = 0x0.

- `drmRandomDestroy` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x409100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x409100-0x409138 (56 bytes).
  It occupies 56 bytes.
  The `jalr` at 0x40911c calls drmFree with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x409130 has v0 = 0x0.

- `drmRandom` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x409140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x409140-0x4091ac (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x409140 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x409144 loads 4 bytes from a0 (arg0 at entry) +0x18.
  The `lw` at 0x40914c loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0x409168 loads 4 bytes from a0 (arg0 at entry) +0x10.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x18, including `sw` at 0x409188, `sw` at 0x4091a8.
  The `lw` at 0x40919c loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `blez` branch at 0x40918c targets 0x40919c, is taken when a3(?) <= 0 (signed), and falls through when a3(?) > 0 (signed).
  The return at 0x409194 has v0 = ?.
  The return at 0x4091a4 has v0 = ?.

- `drmRandomDouble` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x4091c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so`.
  Range: 0x4091c0-0x409228 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x4091f4 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `jalr` at 0x4091e4 calls drmRandom with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x409220 has v0 = ?.
