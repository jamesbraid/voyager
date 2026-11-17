# Readings: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`

One entry per routine, filed here from the reading batches by binary.

- `_stub` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x404930
  **Inferred.** A 356-byte stub made of 22 indirect calls (`jalr` at 0x40493c through 0x404a8c), every one through the same unnamed function pointer `[0xfb6032c]`. Call 1 receives a0 to a3 as at entry; the facts do not show the argument registers for calls 2 to 22. The render names no callee. Role (from name): a dispatch stub; the target is only known at run time.
  Reviewed: 2026-11-12 (sonnet)

- `OMPdestroyScreen` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x404ac0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x404ac0-0x404b18 (88 bytes).
  It occupies 88 bytes.
  The `ld` at 0x404ae0 loads 8 bytes from a2 (arg2 at entry) +0x128.
  The `jalr` at 0x404af0 calls drmHashDestroy with a0=[a2+296]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x404afc calls free with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `beq` branch at 0x404ad8 targets 0x404b08, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x404ae4 targets 0x404af8, is taken when a0(=[a2+296]:8) == 0, and falls through when a0(=[a2+296]:8) != 0.
  The return at 0x404b10 has v0 = one of ?, ret(free).

- `OMPdestroyContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x404b20 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x404b20-0x404b84 (100 bytes).
  It occupies 100 bytes.
  The `ld` at 0x404b40 loads 8 bytes from a2 (arg2 at entry) +0x8.
  The `ld` at 0x404b4c loads 8 bytes from [a2+8]:8 +0xd8.
  The `ld` at 0x404b50 loads 8 bytes from [[a2+8]:8+216]:8 +0x8.
  The `ld` at 0x404b54 loads 8 bytes from [[[a2+8]:8+216]:8+8]:8 +0x8.
  The `ld` at 0x404b60 loads 8 bytes from a2 (arg2 at entry) +0x0.
  The `jalr` at 0x404b5c calls (unknown callee) with a0=a0 at entry (arg0), a1=[a2]:8, a2=[a2+8]:8, a3=a3 at entry (arg3).
  The `jalr` at 0x404b68 calls free with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `beq` branch at 0x404b38 targets 0x404b74, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x404b44 targets 0x404b74, is taken when a2(=[a2+8]:8) == 0, and falls through when a2(=[a2+8]:8) != 0.
  The return at 0x404b7c has v0 = one of ?, ret(free).

- `OMPbindContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x404b90 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x404b90-0x404cc8 (312 bytes).
  It occupies 312 bytes.
  The `ld` at 0x404b98 loads 8 bytes from a4 (arg4 at entry) +0x808.
  3 such `ld` accesses load 8 bytes from [a4+2056]:8 +0x8, including `ld` at 0x404bd0, `ld` at 0x404c20, `ld` at 0x404c54.
  The `ld` at 0x404bdc loads 8 bytes from [[a4+2056]:8+8]:8 +0xd8.
  The `ld` at 0x404be4 loads 8 bytes from [[[a4+2056]:8+8]:8+216]:8 +0x8.
  The `ld` at 0x404be8 loads 8 bytes from [[[[a4+2056]:8+8]:8+216]:8+8]:8 +0x10.
  The `ld` at 0x404bec loads 8 bytes from [a4+2056]:8 +0x0.
  2 such `ld` accesses load 8 bytes from a4 (arg4 at entry) +0x48, including `ld` at 0x404c28, `ld` at 0x404c64.
  2 such `sd` accesses store 8 bytes to [a4+2056]:8 +0x18, including `sd` at 0x404c34, `sd` at 0x404c68.
  The `sd` at 0x404c3c stores 8 bytes to [a4+2056]:8 +0x10.
  The `ld` at 0x404c78 loads 8 bytes from [[[a4+2056]:8+8]:8+216]:8 +0x0.
  The `jalr` at 0x404bfc calls (unknown callee) with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=[[a4+2056]:8]:8, a7=[[a4+2056]:8+8]:8.
  The `bgezall` at 0x404c2c calls __addDrawable [0x4051d0] with a0=a0 at entry (arg0), a1=[[a4+2056]:8+8]:8, a2=a2 at entry (arg2), a3=[a4+72]:8.
  The `bgezall` at 0x404c60 calls __addDrawable [0x4051d0] with a0=a0 at entry (arg0), a1=[[a4+2056]:8+8]:8, a2=a3 at entry (arg3), a3=[a4+72]:8.
  The `jalr` at 0x404c74 calls _glapi_set_dispatch with a0=[[[[a4+2056]:8+8]:8+216]:8]:8, a1=?, a2=?, a3=?.
  The `beq` branch at 0x404bc8 targets 0x404ca0, is taken when s0(=[a4+2056]:8) == 0, and falls through when s0(=[a4+2056]:8) != 0.
  The `beq` branch at 0x404bd4 targets 0x404ca0, is taken when a7(=[[a4+2056]:8+8]:8) == 0, and falls through when a7(=[[a4+2056]:8+8]:8) != 0.
  The `beq` branch at 0x404c04 targets 0x404cbc, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `beq` branch at 0x404c38 targets 0x404c6c, is taken when s2(=a2) == s1(=a3), and falls through when s2(=a2) != s1(=a3).
  The `beq` branch at 0x404c40 targets 0x404c6c, is taken when s1(=a3) == 0, and falls through when s1(=a3) != 0.
  The `beq` branch at 0x404cc0 targets 0x404c84 and is always taken.
  The return at 0x404c98 has v0 = one of ret(?), 0x0.
  The return at 0x404cb4 has v0 = 0x0.

- `OMPunbindContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x404cd0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x404cd0-0x404d7c (172 bytes).
  It occupies 172 bytes.
  The `ld` at 0x404cd4 loads 8 bytes from a3 (arg3 at entry) +0x808.
  The `ld` at 0x404cf0 loads 8 bytes from [a3+2056]:8 +0x8.
  The `ld` at 0x404d20 loads 8 bytes from [[a3+2056]:8+8]:8 +0xd8.
  The `ld` at 0x404d24 loads 8 bytes from [[[a3+2056]:8+8]:8+216]:8 +0x8.
  The `ld` at 0x404d28 loads 8 bytes from [[[[a3+2056]:8+8]:8+216]:8+8]:8 +0x10.
  The `sd` at 0x404d60 stores 8 bytes to [a3+2056]:8 +0x18.
  The `sd` at 0x404d64 stores 8 bytes to [a3+2056]:8 +0x10.
  The `jalr` at 0x404d38 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x0, a2=0x0, a3=0x0, a5=[a3+2056]:8, a7=[[a3+2056]:8+8]:8.
  The `jalr` at 0x404d50 calls _glapi_set_dispatch with a0=0x0, a1=?, a2=?, a3=?.
  The `beq` branch at 0x404ce8 targets 0x404d10, is taken when a5(=[a3+2056]:8) == 0, and falls through when a5(=[a3+2056]:8) != 0.
  The `beq` branch at 0x404cf4 targets 0x404d10, is taken when a7(=[[a3+2056]:8+8]:8) == 0, and falls through when a7(=[[a3+2056]:8+8]:8) != 0.
  The `beq` branch at 0x404cfc targets 0x404d20, is taken when a4 == 0, and falls through when a4 != 0.
  The `beq` branch at 0x404d40 targets 0x404d68, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The return at 0x404d08 has v0 = 0x1.
  The return at 0x404d18 has v0 = 0x0.
  The return at 0x404d74 has v0 = ret(?).

- `OMPcopyContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x404d80 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x404d80-0x404e00 (128 bytes).
  It occupies 128 bytes.
  The `ld` at 0x404d84 loads 8 bytes from a1 (arg1 at entry) +0x808.
  The `ld` at 0x404d90 loads 8 bytes from a0 (arg0 at entry) +0x808.
  The `ld` at 0x404da4 loads 8 bytes from [a1+2056]:8 +0x8.
  The `ld` at 0x404db8 loads 8 bytes from [a0+2056]:8 +0x8.
  The `ld` at 0x404dd0 loads 8 bytes from [[a1+2056]:8+8]:8 +0xd8.
  The `ld` at 0x404dd4 loads 8 bytes from [[[a1+2056]:8+8]:8+216]:8 +0x8.
  The `ld` at 0x404dd8 loads 8 bytes from [[[[a1+2056]:8+8]:8+216]:8+8]:8 +0x20.
  The `ld` at 0x404ddc loads 8 bytes from [a0+2056]:8 +0x0.
  The `ld` at 0x404de0 loads 8 bytes from [a1+2056]:8 +0x0.
  The `ld` at 0x404de4 loads 8 bytes from [[a1+2056]:8+8]:8 +0x0.
  The `jalr` at 0x404df0 calls (unknown callee) with a0=[[[a1+2056]:8+8]:8]:8, a1=[[a1+2056]:8]:8, a2=[[a0+2056]:8]:8, a3=?, a5=[a0+2056]:8, a6=[a1+2056]:8, a7=a2 at entry (arg2).
  The `beq` branch at 0x404d9c targets 0x404dc4, is taken when a6(=[a1+2056]:8) == 0, and falls through when a6(=[a1+2056]:8) != 0.
  The `beq` branch at 0x404da8 targets 0x404dc4, is taken when t0(=[[a1+2056]:8+8]:8) == 0, and falls through when t0(=[[a1+2056]:8+8]:8) != 0.
  The `beq` branch at 0x404db0 targets 0x404dc4, is taken when a5(=[a0+2056]:8) == 0, and falls through when a5(=[a0+2056]:8) != 0.
  The `bne` branch at 0x404dbc targets 0x404dd0, is taken when v0(=[[a0+2056]:8+8]:8) != 0, and falls through when v0(=[[a0+2056]:8+8]:8) == 0.
  The `beq` branch at 0x404df8 targets 0x404dc4 and is always taken.
  The return at 0x404dc8 has v0 = one of ?, [[a0+2056]:8+8]:8, ret(?).

- `OMPcreateContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x404e00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x404e00-0x404f94 (404 bytes).
  It occupies 404 bytes.
  The `lw` at 0x404e24 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `ld` at 0x404e40 loads 8 bytes from ret(__glXFindDRIScreen) +0x20.
  The `ld` at 0x404e64 loads 8 bytes from [ret(__glXFindDRIScreen)+32]:8 +0xd8.
  The `sd` at 0x404e98 stores 8 bytes to a3 (arg3 at entry) +0x0.
  The `sd` at 0x404ea4 stores 8 bytes to a3 (arg3 at entry) +0x8.
  The `sd` at 0x404eb0 stores 8 bytes to a3 (arg3 at entry) +0x10.
  The `sd` at 0x404ebc stores 8 bytes to a3 (arg3 at entry) +0x18.
  The `sd` at 0x404ec8 stores 8 bytes to a3 (arg3 at entry) +0x28.
  The `sd` at 0x404ed4 stores 8 bytes to a3 (arg3 at entry) +0x30.
  The `ld` at 0x404ee8 loads 8 bytes from a2 (arg2 at entry) +0x0.
  The `ld` at 0x404f04 loads 8 bytes from [[ret(__glXFindDRIScreen)+32]:8+216]:8 +0x8.
  The `ld` at 0x404f08 loads 8 bytes from [[[ret(__glXFindDRIScreen)+32]:8+216]:8+8]:8 +0x0.
  The `sd` at 0x404f28 stores 8 bytes to ret(malloc) +0x0.
  The `ld` at 0x404f2c loads 8 bytes from [ret(__glXFindDRIScreen)+32]:8 +0x128.
  The `sd` at 0x404f30 stores 8 bytes to ret(malloc) +0x10.
  The `sd` at 0x404f34 stores 8 bytes to ret(malloc) +0x18.
  The `sd` at 0x404f3c stores 8 bytes to ret(malloc) +0x8.
  The `sd` at 0x404f74 stores 8 bytes to [ret(__glXFindDRIScreen)+32]:8 +0x128.
  The `jalr` at 0x404e30 calls __glXFindDRIScreen with a0=a0 at entry (arg0), a1=[a1+16], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x404ed0 calls malloc with a0=0x20, a1=0x4053d0, a2=a3 at entry (arg3), a3=0x53d0, a4=0x405370, a5=0x5370, a6=0x404d80, a7=0x4d80.
  The `jalr` at 0x404f14 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=0x1.
  The `jalr` at 0x404f60 calls drmHashCreate with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x404f84 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0x404e38 targets 0x404f54, is taken when v0(=ret(__glXFindDRIScreen)) == 0, and falls through when v0(=ret(__glXFindDRIScreen)) != 0.
  The `bne` branch at 0x404e48 targets 0x404e60, is taken when v1(=[ret(__glXFindDRIScreen)+32]:8) != 0, and falls through when v1(=[ret(__glXFindDRIScreen)+32]:8) == 0.
  The `beq` branch at 0x404ed8 targets 0x404f78, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0x404ee0 targets 0x404ef4, is taken when a1(=a2) == 0, and falls through when a1(=a2) != 0.
  The `beq` branch at 0x404eec targets 0x404f00 and is always taken.
  The `beq` branch at 0x404f24 targets 0x404f80, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `beq` branch at 0x404f38 targets 0x404f5c, is taken when ra(=[[ret(__glXFindDRIScreen)+32]:8+296]:8) == 0, and falls through when ra(=[[ret(__glXFindDRIScreen)+32]:8+296]:8) != 0.
  The `beq` branch at 0x404f54 targets 0x404e50 and is always taken.
  The `beq` branch at 0x404f70 targets 0x404f40 and is always taken.
  The `beq` branch at 0x404f78 targets 0x404e50 and is always taken.
  The `beq` branch at 0x404f8c targets 0x404e50 and is always taken.
  The return at 0x404e58 has v0 = 0x0.
  The return at 0x404f4c has v0 = ret(malloc).

- `OMPdestroyDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x404fa0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x404fa0-0x404ffc (92 bytes).
  It occupies 92 bytes.
  The `ld` at 0x404fc0 loads 8 bytes from a1 (arg1 at entry) +0x10.
  The `ld` at 0x404fcc loads 8 bytes from a1 (arg1 at entry) +0x0.
  The `ld` at 0x404fd8 loads 8 bytes from [a1+16]:8 +0x128.
  The `jalr` at 0x404fd4 calls drmHashDelete with a0=[[a1+16]:8+296]:8, a1=[a1]:8, a2=a2 at entry (arg2), a3=[a1+16]:8.
  The `jalr` at 0x404fe0 calls free with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `beq` branch at 0x404fb8 targets 0x404fec, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x404fc4 targets 0x404fec, is taken when a3(=[a1+16]:8) == 0, and falls through when a3(=[a1+16]:8) != 0.
  The return at 0x404ff4 has v0 = one of ?, ret(free).

- `OMPswapBuffers` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405000 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405000-0x405050 (80 bytes).
  It occupies 80 bytes.
  The `ld` at 0x40501c loads 8 bytes from a1 (arg1 at entry) +0x10.
  The `ld` at 0x405028 loads 8 bytes from [a1+16]:8 +0xd8.
  The `ld` at 0x40502c loads 8 bytes from [[a1+16]:8+216]:8 +0x8.
  The `ld` at 0x405030 loads 8 bytes from [[[a1+16]:8+216]:8+8]:8 +0x18.
  The `ld` at 0x40503c loads 8 bytes from a1 (arg1 at entry) +0x0.
  The `jalr` at 0x405038 calls (unknown callee) with a0=a0 at entry (arg0), a1=[a1]:8, a2=a2 at entry (arg2), a3=a1 at entry (arg1), a4=[a1+16]:8.
  The `beq` branch at 0x405014 targets 0x405044, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x405020 targets 0x405044, is taken when a4(=[a1+16]:8) == 0, and falls through when a4(=[a1+16]:8) != 0.
  The return at 0x405048 has v0 = one of ?, ret(?).

- `OMPcreateDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405050 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405050-0x40516c (284 bytes).
  It occupies 284 bytes.
  The `ld` at 0x405088 loads 8 bytes from ret(__glXFindDRIScreen) +0x20.
  The `sd` at 0x4050c8 stores 8 bytes to a4 (arg4 at entry) +0x0.
  The `sd` at 0x4050d4 stores 8 bytes to a4 (arg4 at entry) +0x8.
  The `sd` at 0x40512c stores 8 bytes to ret(malloc) +0x0.
  The `sw` at 0x405130 stores 4 bytes to ret(malloc) +0x8.
  The `sd` at 0x405134 stores 8 bytes to ret(malloc) +0x18.
  The `sd` at 0x405138 stores 8 bytes to ret(malloc) +0x30.
  The `sd` at 0x40513c stores 8 bytes to ret(malloc) +0x10.
  The `ld` at 0x405140 loads 8 bytes from [ret(__glXFindDRIScreen)+32]:8 +0x128.
  The `jalr` at 0x405078 calls __glXFindDRIScreen with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4050d0 calls malloc with a0=0x90, a1=0x405000, a2=a4 at entry (arg4), a3=0x5000, a4=0x404fa0, a5=0x4fa0.
  The `jalr` at 0x40510c calls memset with a0=ret(malloc), a1=0x0, a2=0x90, a3=?.
  The `jalr` at 0x405144 calls drmHashInsert with a0=[[ret(__glXFindDRIScreen)+32]:8+296]:8, a1=a2 at entry (arg2), a2=a4 at entry (arg4), a3=a3 at entry (arg3), a4=a1 at entry (arg1).
  The `jalr` at 0x405154 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0x405080 targets 0x4050e8, is taken when v0(=ret(__glXFindDRIScreen)) == 0, and falls through when v0(=ret(__glXFindDRIScreen)) != 0.
  The `bne` branch at 0x405090 targets 0x4050a8, is taken when v1(=[ret(__glXFindDRIScreen)+32]:8) != 0, and falls through when v1(=[ret(__glXFindDRIScreen)+32]:8) == 0.
  The `bne` branch at 0x4050d8 targets 0x405100, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x4050e0 targets 0x405098 and is always taken.
  The `beq` branch at 0x40514c targets 0x405164, is taken when v0(=ret(drmHashInsert)) == 0, and falls through when v0(=ret(drmHashInsert)) != 0.
  The `beq` branch at 0x40515c targets 0x405098 and is always taken.
  The `beq` branch at 0x405164 targets 0x405098 and is always taken.
  The return at 0x4050a0 has v0 = one of 0x0, ret(malloc).
  The return at 0x4050f0 has v0 = 0x0.
  The instructions from 0x4050f8 to 0x4050fc are not reached by any path from the entry, and their branches are not listed.

- `OMPgetDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405170 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405170-0x4051c8 (88 bytes).
  It occupies 88 bytes.
  The `ld` at 0x405188 loads 8 bytes from a2 (arg2 at entry) +0x128.
  The `jalr` at 0x405190 calls drmHashLookup with a0=[a2+296]:8, a1=a1 at entry (arg1), a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x405198 targets 0x4051b0, is taken when v0(=ret(drmHashLookup)) == 0, and falls through when v0(=ret(drmHashLookup)) != 0.
  The return at 0x4051a8 has v0 = 0x0.
  The return at 0x4051c0 has v0 = ?.

- `__addDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4051d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4051d0-0x4052a8 (216 bytes).
  It occupies 216 bytes.
  The `ld` at 0x405218 loads 8 bytes from a1 (arg1 at entry) +0x128.
  The `lw` at 0x40525c loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `sd` at 0x405264 stores 8 bytes to ?.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x40526c, `ld` at 0x40528c.
  The `jalr` at 0x405214 calls drmHashLookup with a0=[a1+296]:8, a1=a2 at entry (arg2), a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x405228 calls malloc with a0=0x20, a1=?, a2=?, a3=?.
  The `bgezall` at 0x405258 calls OMPcreateDrawable [0x405050] with a0=a0 at entry (arg0), a1=[a1+8], a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=ret(malloc).
  The `jalr` at 0x40527c calls free with a0=?, a1=?, a2=?, a3=?.
  The `bne` branch at 0x4051e4 targets 0x405200, is taken when a1 != 0, and falls through when a1 == 0.
  The `beq` branch at 0x40521c targets 0x40528c, is taken when v0(=ret(drmHashLookup)) == 0, and falls through when v0(=ret(drmHashLookup)) != 0.
  The `beq` branch at 0x405234 targets 0x4052a0, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `bne` branch at 0x405270 targets 0x405294, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x405284 targets 0x4051f4 and is always taken.
  The `beq` branch at 0x4052a0 targets 0x4051f4 and is always taken.
  The return at 0x4051ec has v0 = 0x0.
  The return at 0x4051f8 has v0 = 0x0.
  The return at 0x405298 has v0 = ?.

- `OMPCreatePbuffer` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4052b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4052b0-0x4052ec (60 bytes).
  It occupies 60 bytes.
  The `ld` at 0x4052b4 loads 8 bytes from a0 (arg0 at entry) +0xd8.
  The `ld` at 0x4052b8 loads 8 bytes from [a0+216]:8 +0x8.
  The `ld` at 0x4052cc loads 8 bytes from [[a0+216]:8+8]:8 +0x28.
  The `ld` at 0x4052d8 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0x4052d4 calls (unknown callee) with a0=[a0]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x4052e4 has v0 = ret(?).

- `OMPDestroyPbuffer` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4052f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4052f0-0x40532c (60 bytes).
  It occupies 60 bytes.
  The `ld` at 0x4052f4 loads 8 bytes from a0 (arg0 at entry) +0xd8.
  The `ld` at 0x4052f8 loads 8 bytes from [a0+216]:8 +0x8.
  The `ld` at 0x40530c loads 8 bytes from [[a0+216]:8+8]:8 +0x30.
  The `ld` at 0x405318 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0x405314 calls (unknown callee) with a0=[a0]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x405324 has v0 = ret(?).

- `OMPQueryDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405330 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405330-0x40536c (60 bytes).
  It occupies 60 bytes.
  The `ld` at 0x405334 loads 8 bytes from a0 (arg0 at entry) +0xd8.
  The `ld` at 0x405338 loads 8 bytes from [a0+216]:8 +0x8.
  The `ld` at 0x40534c loads 8 bytes from [[a0+216]:8+8]:8 +0x38.
  The `ld` at 0x405358 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0x405354 calls (unknown callee) with a0=[a0]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x405364 has v0 = ret(?).

- `OMPGetVideoSyncSGI` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405370 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405370-0x4053d0 (96 bytes).
  It occupies 96 bytes.
  The `ld` at 0x405374 loads 8 bytes from a0 (arg0 at entry) +0x808.
  The `ld` at 0x405390 loads 8 bytes from [a0+2056]:8 +0x8.
  The `ld` at 0x40539c loads 8 bytes from [[a0+2056]:8+8]:8 +0xd8.
  The `ld` at 0x4053a0 loads 8 bytes from [[[a0+2056]:8+8]:8+216]:8 +0x8.
  The `ld` at 0x4053a4 loads 8 bytes from [[[[a0+2056]:8+8]:8+216]:8+8]:8 +0x40.
  The `jalr` at 0x4053ac calls (unknown callee) with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a0+2056]:8, a4=[[a0+2056]:8+8]:8.
  The `beq` branch at 0x405388 targets 0x4053c4, is taken when a3(=[a0+2056]:8) == 0, and falls through when a3(=[a0+2056]:8) != 0.
  The `beq` branch at 0x405394 targets 0x4053c4, is taken when a4(=[[a0+2056]:8+8]:8) == 0, and falls through when a4(=[[a0+2056]:8+8]:8) != 0.
  The return at 0x4053bc has v0 = ret(?).
  The return at 0x4053c8 has v0 = 0x0.

- `OMPWaitVideoSyncSGI` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4053d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4053d0-0x405440 (112 bytes).
  It occupies 112 bytes.
  The `ld` at 0x4053d8 loads 8 bytes from a0 (arg0 at entry) +0x808.
  The `ld` at 0x4053f8 loads 8 bytes from [a0+2056]:8 +0x8.
  The `ld` at 0x405404 loads 8 bytes from [[a0+2056]:8+8]:8 +0xd8.
  The `ld` at 0x405408 loads 8 bytes from [[[a0+2056]:8+8]:8+216]:8 +0x8.
  The `ld` at 0x40540c loads 8 bytes from [[[[a0+2056]:8+8]:8+216]:8+8]:8 +0x48.
  The `jalr` at 0x40541c calls (unknown callee) with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=a3 at entry (arg3), a5=[a0+2056]:8, a6=a2 at entry (arg2), a7=a1 at entry (arg1).
  The `beq` branch at 0x4053f0 targets 0x405434, is taken when a5(=[a0+2056]:8) == 0, and falls through when a5(=[a0+2056]:8) != 0.
  The `beq` branch at 0x4053fc targets 0x405434, is taken when t0(=[[a0+2056]:8+8]:8) == 0, and falls through when t0(=[[a0+2056]:8+8]:8) != 0.
  The return at 0x40542c has v0 = ret(?).
  The return at 0x405438 has v0 = 0x0.

- `OMPGetCurrentReadDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405440 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405440-0x405468 (40 bytes).
  It occupies 40 bytes.
  The `ld` at 0x405448 loads 8 bytes from a0 (arg0 at entry) +0x18.
  The `beq` branch at 0x405440 targets 0x405460, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x40544c targets 0x405458, is taken when a4(=[a0+24]:8) == 0, and falls through when a4(=[a0+24]:8) != 0.
  The return at 0x405458 has v0 = one of 0x0, [a0+24]:8+32.
  The return at 0x405460 has v0 = 0x0.

- `OMPGetAssociatedVisInfo` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405470 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405470-0x405478 (8 bytes).
  It occupies 8 bytes.
  The return at 0x405470 has v0 = 0x0.

- `__driCreateScreen` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405480 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405480-0x405674 (500 bytes).
  It occupies 500 bytes.
  The `sd` at 0x4054cc stores 8 bytes to a2 (arg2 at entry) +0x0.
  The `sd` at 0x4054d8 stores 8 bytes to a2 (arg2 at entry) +0x8.
  The `sd` at 0x4054e4 stores 8 bytes to a2 (arg2 at entry) +0x10.
  The `sd` at 0x4054f0 stores 8 bytes to a2 (arg2 at entry) +0x18.
  The `sd` at 0x40553c stores 8 bytes to ret(malloc) +0x8.
  2 such `sd` accesses store 8 bytes to ret(malloc) +0x0, including `sd` at 0x405568, `sd` at 0x4055d8.
  The `sw` at 0x40558c stores 4 bytes to ret(malloc) +0x10.
  The `sd` at 0x405598 stores 8 bytes to ret(malloc) +0x18.
  The `sw` at 0x4055d4 stores 4 bytes to ret(malloc) +0x8.
  The `sd` at 0x4055e4 stores 8 bytes to ret(malloc) +0xd8.
  The `sd` at 0x4055f0 stores 8 bytes to ret(malloc) +0x130.
  The `ld` at 0x405630 loads 8 bytes from ret(malloc) +0x130.
  The `sw` at 0x405644 stores 4 bytes to [ret(malloc)+304]:8 +0x0.
  The `sd` at 0x405650 stores 8 bytes to [ret(malloc)+304]:8 +0x8.
  The `sd` at 0x40565c stores 8 bytes to [ret(malloc)+304]:8 +0x10.
  The `sd` at 0x405664 stores 8 bytes to [ret(malloc)+304]:8 +0x30.
  The `sd` at 0x405668 stores 8 bytes to [ret(malloc)+304]:8 +0x38.
  The `sd` at 0x405670 stores 8 bytes to [ret(malloc)+304]:8 +0x40.
  The `jalr` at 0x4054ec calls malloc with a0=0x20, a1=0x5050, a2=a2 at entry (arg2), a3=0x404e00, a5=0x400000, a6=0x4e00, a7=0x404ac0.
  The `jalr` at 0x40551c calls putenv with a0=0x40c000, a1=-0x4000, a2=?, a3=?.
  The `jalr` at 0x405528 calls omp_initGLXInterface with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x405554 calls omp_initGLInterface with a0=?, a1=?, a2=?, a3=ret(malloc).
  The `jalr` at 0x405594 calls malloc with a0=0x158, a1=?, a2=?, a3=?, a5=ret(malloc), a6=a4 at entry (arg4).
  The `jalr` at 0x4055b8 calls memset with a0=ret(malloc), a1=0x0, a2=0x158, a3=?.
  The `jalr` at 0x4055e0 calls malloc with a0=0x58, a1=?, a2=?, a3=?.
  The `jalr` at 0x4055f8 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x405614 calls memset with a0=ret(malloc), a1=0x0, a2=0x58, a3=?.
  The `bne` branch at 0x4054f4 targets 0x405510, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `bne` branch at 0x405538 targets 0x405550, is taken when v0(=ret(omp_initGLXInterface)) != 0, and falls through when v0(=ret(omp_initGLXInterface)) == 0.
  The `bne` branch at 0x405564 targets 0x405580, is taken when v0(=ret(omp_initGLInterface)) != 0, and falls through when v0(=ret(omp_initGLInterface)) == 0.
  The `bne` branch at 0x40559c targets 0x4055ac, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x4055a4 targets 0x405500 and is always taken.
  The `bne` branch at 0x4055ec targets 0x405608, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x405600 targets 0x405500 and is always taken.
  The `beq` branch at 0x40566c targets 0x405500 and is always taken.
  The return at 0x405508 has v0 = one of 0x0, ret(malloc).
  The return at 0x405548 has v0 = 0x0.
  The return at 0x405574 has v0 = 0x0.
  The instructions from 0x40557c to 0x40557c are not reached by any path from the entry, and their branches are not listed.

- `gl_lib_name` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405680 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405680-0x4056dc (92 bytes).
  It occupies 92 bytes.
  The `jalr` at 0x4056a0 calls getenv with a0=0x40c010, a1=-0x3ff0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x405688 targets 0x4056cc, is taken when at(=[0x40c6c0]) == 0, and falls through when at(=[0x40c6c0]) != 0.
  The `bne` branch at 0x4056b0 targets 0x4056d4, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `beq` branch at 0x4056cc targets 0x4056b8, is taken when v0(=[0x40c698]:8) == 0, and falls through when v0(=[0x40c698]:8) != 0.
  The return at 0x4056c4 has v0 = 0x40c020.
  The return at 0x4056d4 has v0 = one of ret(getenv), [0x40c698]:8.

- `glx_lib_name` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4056e0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4056e0-0x40573c (92 bytes).
  It occupies 92 bytes.
  The `jalr` at 0x405700 calls getenv with a0=0x40c030, a1=-0x3fd0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x4056e8 targets 0x40572c, is taken when at(=[0x40c6c4]) == 0, and falls through when at(=[0x40c6c4]) != 0.
  The `bne` branch at 0x405710 targets 0x405734, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `beq` branch at 0x40572c targets 0x405718, is taken when v0(=[0x40c6a0]:8) == 0, and falls through when v0(=[0x40c6a0]:8) != 0.
  The return at 0x405724 has v0 = 0x40c040.
  The return at 0x405734 has v0 = one of ret(getenv), [0x40c6a0]:8.

- `omp_initGLInterface` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405740 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405740-0x405848 (264 bytes).
  It occupies 264 bytes.
  The `bgezall` at 0x405764 calls gl_lib_name [0x405680] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x405774 calls dlopen with a0=ret(gl_lib_name), a1=0x2, a2=?, a3=?.
  The `jalr` at 0x405790 calls dlsym with a0=ret(dlopen), a1=0x40c070, a2=-0x3f90, a3=?.
  The `bgezall` at 0x4057c0 calls gl_lib_name [0x405680] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4057e4 calls fprintf with a0=sym(__iob)+64, a1=0x40c050, a2=ret(gl_lib_name), a3=-0x3fb0.
  The `bgezall` at 0x405808 calls gl_lib_name [0x405680] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x40582c calls fprintf with a0=sym(__iob)+64, a1=0x40c088, a2=ret(gl_lib_name), a3=-0x3f78.
  The `beq` branch at 0x40577c targets 0x4057b0, is taken when v0(=ret(dlopen)) == 0, and falls through when v0(=ret(dlopen)) != 0.
  The `beq` branch at 0x405798 targets 0x405800, is taken when v0(=ret(dlsym)) == 0, and falls through when v0(=ret(dlsym)) != 0.
  The return at 0x4057a8 has v0 = ret(dlsym).
  The return at 0x4057f8 has v0 = 0x0.
  The return at 0x405840 has v0 = 0x0.

- `omp_initGLXInterface` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405850 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405850-0x405a50 (512 bytes).
  It occupies 512 bytes.
  The `sd` at 0x405918 stores 8 bytes to abs 0x40c7b8.
  The `sd` at 0x405938 stores 8 bytes to abs 0x40c7c0.
  The `sd` at 0x405958 stores 8 bytes to abs 0x40c7c8.
  The `sd` at 0x405978 stores 8 bytes to abs 0x40c7d0.
  The `sd` at 0x405998 stores 8 bytes to abs 0x40c7d8.
  The `sd` at 0x4059b8 stores 8 bytes to abs 0x40c7e0.
  The `sd` at 0x4059d8 stores 8 bytes to abs 0x40c7e8.
  The `sd` at 0x4059f8 stores 8 bytes to abs 0x40c7f0.
  The `sd` at 0x405a18 stores 8 bytes to abs 0x40c7f8.
  The `sd` at 0x405a44 stores 8 bytes to abs 0x40c800.
  The `bgezall` at 0x405874 calls glx_lib_name [0x4056e0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x405888 calls dlopen with a0=ret(glx_lib_name), a1=0x2, a2=?, a3=?.
  The `bgezall` at 0x4058a4 calls glx_lib_name [0x4056e0] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4058c8 calls fprintf with a0=sym(__iob)+64, a1=0x40c050, a2=ret(glx_lib_name), a3=0x40.
  The `jalr` at 0x4058fc calls dlsym with a0=ret(dlopen), a1=0x40c0e8, a2=-0x3f18, a3=?.
  The `jalr` at 0x40591c calls dlsym with a0=ret(dlopen), a1=0x40c100, a2=-0x3f00, a3=0x410000.
  The `jalr` at 0x40593c calls dlsym with a0=ret(dlopen), a1=0x40c118, a2=-0x3ee8, a3=0x410000.
  The `jalr` at 0x40595c calls dlsym with a0=ret(dlopen), a1=0x40c130, a2=-0x3ed0, a3=0x410000.
  The `jalr` at 0x40597c calls dlsym with a0=ret(dlopen), a1=0x40c140, a2=-0x3ec0, a3=0x410000.
  The `jalr` at 0x40599c calls dlsym with a0=ret(dlopen), a1=0x40c150, a2=-0x3eb0, a3=0x410000.
  The `jalr` at 0x4059bc calls dlsym with a0=ret(dlopen), a1=0x40c168, a2=-0x3e98, a3=0x410000.
  The `jalr` at 0x4059dc calls dlsym with a0=ret(dlopen), a1=0x40c180, a2=-0x3e80, a3=0x410000.
  The `jalr` at 0x4059fc calls dlsym with a0=ret(dlopen), a1=0x40c198, a2=-0x3e68, a3=0x410000.
  The `jalr` at 0x405a1c calls dlsym with a0=ret(dlopen), a1=0x40c1b0, a2=-0x3e50, a3=0x410000.
  The `bne` branch at 0x405890 targets 0x4058e4, is taken when v0(=ret(dlopen)) != 0, and falls through when v0(=ret(dlopen)) == 0.
  The return at 0x4058dc has v0 = 0x0.
  The return at 0x405a48 has v0 = 0x40c7b8.

- `HashHash` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405a80 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405a80-0x405b7c (252 bytes).
  It occupies 252 bytes.
  The `ld` at 0x405ad4 loads 8 bytes from table(0x40c808) +0x0.
  The `sd` at 0x405b3c stores 8 bytes to ?.
  The `jalr` at 0x405b08 calls drmRandomCreate with a0=0x25, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x405b30 calls drmRandom with a0=ret(drmRandomCreate), a1=?, a2=?, a3=?.
  The `beq` branch at 0x405a9c targets 0x405b00, is taken when at(=[0x40c6a8]) == 0, and falls through when at(=[0x40c6a8]) != 0.
  The `beq` branch at 0x405ab8 targets 0x405b5c, is taken when s1(=a0) == 0, and falls through when s1(=a0) != 0.
  The `bne` branch at 0x405adc targets 0x405ac4, is taken when s1(?) != 0, and falls through when s1(?) == 0.
  The `bne` branch at 0x405b44 targets 0x405b2c, is taken when s0(?) != s2(=0x40d008), and falls through when s0(?) == s2(=0x40d008).
  The `beq` branch at 0x405b54 targets 0x405aa4 and is always taken.
  The return at 0x405af0 has v0 = ?.
  The return at 0x405b74 has v0 = 0x0.
  The instructions from 0x405af8 to 0x405afc are not reached by any path from the entry, and their branches are not listed.

- `drmHashCreate` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405b80 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405b80-0x405c5c (220 bytes).
  It occupies 220 bytes.
  The `sd` at 0x405bac stores 8 bytes to ret(drmMalloc) +0x8.
  The `sd` at 0x405bb0 stores 8 bytes to ret(drmMalloc) +0x10.
  The `sd` at 0x405bb4 stores 8 bytes to ret(drmMalloc) +0x18.
  The `sd` at 0x405bbc stores 8 bytes to ret(drmMalloc) +0x20.
  The `sd` at 0x405bd0 stores 8 bytes to ret(drmMalloc) +0x0.
  8 such `sd` accesses store 8 bytes to ?, including `sd` at 0x405be8, `sd` at 0x405bf4, `sd` at 0x405c00.
  The `jalr` at 0x405b9c calls drmMalloc with a0=0x1038, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x405ba4 targets 0x405c48, is taken when v0(=ret(drmMalloc)) == 0, and falls through when v0(=ret(drmMalloc)) != 0.
  The `bne` branch at 0x405c30 targets 0x405bd4, is taken when a2(?) != a3(=ret(drmMalloc)+4096), and falls through when a2(?) == a3(=ret(drmMalloc)+4096).
  The return at 0x405c40 has v0 = ret(drmMalloc).
  The return at 0x405c54 has v0 = 0x0.

- `drmHashDestroy` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405c60 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405c60-0x405d28 (200 bytes).
  It occupies 200 bytes.
  The `ld` at 0x405c70 loads 8 bytes from a0 (arg0 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x405cb4, `ld` at 0x405cc0.
  The `jalr` at 0x405cc4 calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x405ce4 calls drmFree with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bne` branch at 0x405c8c targets 0x405d14, is taken when v0(=[a0]:8) != v1(=0xdeadbeef), and falls through when v0(=[a0]:8) == v1(=0xdeadbeef).
  The `beq` branch at 0x405cb8 targets 0x405cd4, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x405ccc targets 0x405cc0, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `bne` branch at 0x405cdc targets 0x405cb4, is taken when s2(?) != s3(=a0+4096), and falls through when s2(?) == s3(=a0+4096).
  The return at 0x405d0c has v0 = 0x0.
  The return at 0x405d20 has v0 = -0x1.

- `HashFind` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405d30 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405d30-0x405e20 (240 bytes).
  It occupies 240 bytes.
  The `sd` at 0x405d70 stores 8 bytes to a2 (arg2 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from (a0 + (ret(HashHash) << 0x3)) +0x28, including `ld` at 0x405d7c, `ld` at 0x405dc8.
  The `ld` at 0x405d98 loads 8 bytes from [(a0 + (ret(HashHash) << 0x3))+40]:8 +0x0.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x405da8, `ld` at 0x405db0.
  2 such `sd` accesses store 8 bytes to ?, including `sd` at 0x405dc4, `sd` at 0x405dcc.
  The `sd` at 0x405dd0 stores 8 bytes to (a0 + (ret(HashHash) << 0x3)) +0x28.
  The `ld` at 0x405dd4 loads 8 bytes from a0 (arg0 at entry) +0x18.
  The `sd` at 0x405ddc stores 8 bytes to a0 (arg0 at entry) +0x18.
  The `ld` at 0x405dec loads 8 bytes from a0 (arg0 at entry) +0x20.
  The `sd` at 0x405dfc stores 8 bytes to a0 (arg0 at entry) +0x20.
  The `ld` at 0x405e0c loads 8 bytes from a0 (arg0 at entry) +0x10.
  The `sd` at 0x405e1c stores 8 bytes to a0 (arg0 at entry) +0x10.
  The `bgezall` at 0x405d5c calls HashHash [0x405a80] with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x405d68 targets 0x405d74, is taken when s2(=a2) == 0, and falls through when s2(=a2) != 0.
  The `beq` branch at 0x405d8c targets 0x405dec, is taken when v0(=[(a0 + (ret(HashHash) << 0x3))+40]:8) == 0, and falls through when v0(=[(a0 + (ret(HashHash) << 0x3))+40]:8) != 0.
  The `beq` branch at 0x405d94 targets 0x405dac and is always taken.
  The `beq` branch at 0x405da0 targets 0x405dec, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x405dac targets 0x405d9c, is taken when a5(?) != s0(=a1), and falls through when a5(?) == s0(=a1).
  The `beq` branch at 0x405dbc targets 0x405e0c, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x405e18 targets 0x405de0 and is always taken.
  The return at 0x405de4 has v0 = ?.
  The return at 0x405e04 has v0 = 0x0.

- `drmHashLookup` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405e20 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405e20-0x405eb4 (148 bytes).
  It occupies 148 bytes.
  The `ld` at 0x405e40 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `ld` at 0x405e98 loads 8 bytes from ret(HashFind) +0x8.
  The `sd` at 0x405ea0 stores 8 bytes to a2 (arg2 at entry) +0x0.
  The `bgezall` at 0x405e64 calls HashFind [0x405d30] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x0, a3=0xdeadbeef, a5=0xdead.
  The `beq` branch at 0x405e38 targets 0x405e8c, is taken when a0 == 0, and falls through when a0 != 0.
  The `bne` branch at 0x405e4c targets 0x405e8c, is taken when v1(=[a0]:8) != a3(=0xdeadbeef), and falls through when v1(=[a0]:8) == a3(=0xdeadbeef).
  The `bne` branch at 0x405e78 targets 0x405e98, is taken when v0(=ret(HashFind)) != 0, and falls through when v0(=ret(HashFind)) == 0.
  The return at 0x405e84 has v0 = 0x1.
  The return at 0x405e90 has v0 = -0x1.
  The return at 0x405eac has v0 = 0x0.

- `drmHashInsert` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405ec0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405ec0-0x405fa4 (228 bytes).
  It occupies 228 bytes.
  The `ld` at 0x405ec4 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `sd` at 0x405f68 stores 8 bytes to ret(drmMalloc) +0x0.
  The `sd` at 0x405f70 stores 8 bytes to ret(drmMalloc) +0x8.
  The `ld` at 0x405f84 loads 8 bytes from ?.
  The `sd` at 0x405f88 stores 8 bytes to ret(drmMalloc) +0x10.
  The `sd` at 0x405fa0 stores 8 bytes to ?.
  The `bgezall` at 0x405f20 calls HashFind [0x405d30] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sp-48, a3=0xdeadbeef.
  The `jalr` at 0x405f48 calls drmMalloc with a0=0x18, a1=?, a2=?, a3=?.
  The `beq` branch at 0x405ef0 targets 0x405f10, is taken when v1(=[a0]:8) == a3(=0xdeadbeef), and falls through when v1(=[a0]:8) != a3(=0xdeadbeef).
  The `beq` branch at 0x405f28 targets 0x405f48, is taken when v0(=ret(HashFind)) == 0, and falls through when v0(=ret(HashFind)) != 0.
  The `bne` branch at 0x405f58 targets 0x405f68, is taken when v0(=ret(drmMalloc)) != 0, and falls through when v0(=ret(drmMalloc)) == 0.
  The `beq` branch at 0x405f60 targets 0x405f04 and is always taken.
  The `beq` branch at 0x405f9c targets 0x405f04 and is always taken.
  The return at 0x405efc has v0 = -0x1.
  The return at 0x405f08 has v0 = one of -0x1, 0x0.
  The return at 0x405f40 has v0 = 0x1.

- `drmHashDelete` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x405fb0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x405fb0-0x40605c (172 bytes).
  It occupies 172 bytes.
  The `ld` at 0x405fbc loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `ld` at 0x406030 loads 8 bytes from ret(HashFind) +0x10.
  The `sd` at 0x406044 stores 8 bytes to ?.
  The `bgezall` at 0x405ffc calls HashFind [0x405d30] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sp-32, a3=a3 at entry (arg3).
  The `jalr` at 0x406040 calls drmFree with a0=ret(HashFind), a1=0x1, a2=?, a3=?.
  The `beq` branch at 0x405fd4 targets 0x405fec, is taken when v1(=[a0]:8) == a2(=0xdeadbeef), and falls through when v1(=[a0]:8) != a2(=0xdeadbeef).
  The `bne` branch at 0x406008 targets 0x406020, is taken when v0(=ret(HashFind)) != 0, and falls through when v0(=ret(HashFind)) == 0.
  The return at 0x405fe4 has v0 = -0x1.
  The return at 0x406018 has v0 = 0x1.
  The return at 0x406054 has v0 = 0x0.

- `drmHashNext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406060 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406060-0x4060cc (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x406060 loads 4 bytes from a0 (arg0 at entry) +0x1028.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x1030, including `ld` at 0x406070, `ld` at 0x406088, `ld` at 0x406094.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x406080, `ld` at 0x4060b8.
  The `sd` at 0x406084 stores 8 bytes to a1 (arg1 at entry) +0x0.
  The `ld` at 0x40608c loads 8 bytes from [a0+4144]:8 +0x8.
  The `sd` at 0x406090 stores 8 bytes to a2 (arg2 at entry) +0x0.
  The `ld` at 0x406098 loads 8 bytes from [a0+4144]:8 +0x10.
  2 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0x1030, including `sd` at 0x4060a4, `sd` at 0x4060c0.
  The `sw` at 0x4060b0 stores 4 bytes to a0 (arg0 at entry) +0x1028.
  The `beq` branch at 0x406068 targets 0x4060c4, is taken when a4(=[a0+4136]) >= 0x200 (signed), and falls through when a4(=[a0+4136]) < 0x200 (signed).
  The `beq` branch at 0x406078 targets 0x4060a8, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x4060bc targets 0x406078, is taken when a4(?) < 0x200 (signed), and falls through when a4(?) >= 0x200 (signed).
  The return at 0x4060a0 has v0 = 0x1.
  The return at 0x4060c4 has v0 = 0x0.

- `drmHashFirst` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4060d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4060d0-0x406130 (96 bytes).
  It occupies 96 bytes.
  The `ld` at 0x4060dc loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `sw` at 0x40610c stores 4 bytes to a0 (arg0 at entry) +0x1028.
  The `ld` at 0x406114 loads 8 bytes from a0 (arg0 at entry) +0x28.
  The `sd` at 0x40611c stores 8 bytes to a0 (arg0 at entry) +0x1030.
  The `jalr` at 0x406118 calls drmHashNext with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=0xdeadbeef, a4=[a0+40]:8.
  The `beq` branch at 0x4060f4 targets 0x406108, is taken when v1(=[a0]:8) == a3(=0xdeadbeef), and falls through when v1(=[a0]:8) != a3(=0xdeadbeef).
  The return at 0x406100 has v0 = -0x1.
  The return at 0x406128 has v0 = ret(drmHashNext).

- `drmMsg` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406180 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406180-0x406208 (136 bytes).
  It occupies 136 bytes.
  The `jalr` at 0x4061b4 calls getenv with a0=0x40c1c8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4061d8 calls strstr with a0=ret(getenv), a1=0x40c6c8, a2=?, a3=?.
  The `jalr` at 0x4061f8 calls vfprintf with a0=sym(__iob)+64, a1=a0 at entry (arg0), a2=sp-56, a3=0x40.
  The `bne` branch at 0x4061bc targets 0x4061cc, is taken when v0(=ret(getenv)) != 0, and falls through when v0(=ret(getenv)) == 0.
  The `beq` branch at 0x4061e0 targets 0x4061c0, is taken when v0(=ret(strstr)) == 0, and falls through when v0(=ret(strstr)) != 0.
  The `beq` branch at 0x406200 targets 0x4061c4 and is always taken.
  The return at 0x4061c4 has v0 = one of ret(getenv), ?, ret(vfprintf).

- `drmMalloc` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406210 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406210-0x406290 (128 bytes).
  It occupies 128 bytes.
  The `jalr` at 0x40623c calls malloc with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x406274 calls memset with a0=ret(malloc), a1=0x0, a2=a0 at entry (arg0), a3=?.
  The `beq` branch at 0x40622c targets 0x406284, is taken when a0 == 0, and falls through when a0 != 0.
  The `bne` branch at 0x406244 targets 0x406268, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x40627c targets 0x406250 and is always taken.
  The `beq` branch at 0x406288 targets 0x406238 and is always taken.
  The return at 0x406260 has v0 = ret(malloc).

- `drmFree` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406290 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406290-0x4062d8 (72 bytes).
  It occupies 72 bytes.
  The `jalr` at 0x4062c8 calls free with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x4062a0 targets 0x4062c0, is taken when a0 != 0, and falls through when a0 == 0.
  The `beq` branch at 0x4062d0 targets 0x4062a8 and is always taken.
  The return at 0x4062ac has v0 = one of ?, ret(free).
  The instructions from 0x4062b4 to 0x4062bc are not reached by any path from the entry, and their branches are not listed.

- `drmStrdup` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4062e0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4062e0-0x40636c (140 bytes).
  It occupies 140 bytes.
  The `jalr` at 0x4062fc calls strlen with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x406314 calls strlen with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x406328 calls malloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x406340 calls strcpy with a0=ret(malloc), a1=a0 at entry (arg0), a2=?, a3=?.
  The `beq` branch at 0x4062ec targets 0x406350, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x406308 targets 0x406324, is taken when v0(=ret(strlen)) == v1(=-0x1), and falls through when v0(=ret(strlen)) != v1(=-0x1).
  The `beq` branch at 0x406348 targets 0x40635c and is always taken.
  The return at 0x406354 has v0 = 0x0.
  The return at 0x406364 has v0 = ret(malloc).

- `drmGetKeyFromFd` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406370 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406370-0x406398 (40 bytes).
  It occupies 40 bytes.
  The `jalr` at 0x406380 calls fstat with a0=a0 at entry (arg0), a1=sp-256, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x406390 has v0 = ?.

- `drmGetEntry` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4063a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4063a0-0x406468 (200 bytes).
  It occupies 200 bytes.
  The `sd` at 0x4063f4 stores 8 bytes to ret(drmMalloc) +0x8.
  The `sw` at 0x406400 stores 4 bytes to ret(drmMalloc) +0x0.
  The `sd` at 0x406418 stores 8 bytes to ?.
  The `bgezall` at 0x4063b8 calls drmGetKeyFromFd [0x406370] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4063d4 calls drmHashLookup with a0=?, a1=ret(drmGetKeyFromFd), a2=sp-48, a3=?.
  The `jalr` at 0x4063e4 calls drmMalloc with a0=0x18, a1=?, a2=?, a3=?.
  The `jalr` at 0x4063fc calls drmHashCreate with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x406414 calls drmHashInsert with a0=[0x40c6b0]:8, a1=ret(drmGetKeyFromFd), a2=?, a3=?.
  The `jalr` at 0x406454 calls drmHashCreate with a0=[0x40c6b0]:8, a1=?, a2=?, a3=?.
  The `beq` branch at 0x4063c4 targets 0x406450, is taken when a0(=[0x40c6b0]:8) == 0, and falls through when a0(=[0x40c6b0]:8) != 0.
  The `beq` branch at 0x4063dc targets 0x406424, is taken when v0(=ret(drmHashLookup)) == 0, and falls through when v0(=ret(drmHashLookup)) != 0.
  The `beq` branch at 0x40641c targets 0x406440 and is always taken.
  The `beq` branch at 0x406460 targets 0x4063cc and is always taken.
  The return at 0x406430 has v0 = ?.
  The return at 0x406448 has v0 = ?.
  The instructions from 0x406438 to 0x40643c are not reached by any path from the entry, and their branches are not listed.

- `drmOpenDevice` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406470 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406470-0x4066a0 (560 bytes).
  It occupies 560 bytes.
  2 such `lw` accesses load 4 bytes from sym(errno) +0x0, including `lw` at 0x406660, `lw` at 0x406694.
  The `jalr` at 0x406488 calls geteuid with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x4064b0 calls drmMsg [0x406180] with a0=0x40c1d8, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x4064cc calls stat with a0=0x40c1f8, a1=sp-352, a2=-0x3e08, a3=?.
  The `jalr` at 0x40650c calls remove with a0=0x40c1f8, a1=-0x3e08, a2=?, a3=?, a4=sym(remove).
  The `jalr` at 0x406524 calls mkdir with a0=0x40c1f8, a1=0x1f8, a2=-0x3e08, a3=?.
  The `jalr` at 0x40654c calls sprintf with a0=sp-112, a1=0x40c208, a2=0x40c1f8, a3=a1 at entry (arg1), a4=-0x3e08.
  The `bgezall` at 0x406570 calls drmMsg [0x406180] with a0=0x40c218, a1=sp-112, a2=-0x3de8, a3=?.
  The `jalr` at 0x406584 calls stat with a0=sp-112, a1=sp-352, a2=?, a3=sym(stat).
  The `jalr` at 0x4065dc calls remove with a0=sp-112, a1=-0x3eb, a2=?, a3=?, a4=a0 at entry (arg0), a6=sym(remove).
  The `jalr` at 0x4065f4 calls mknod with a0=sp-112, a1=0x21b0, a2=(a0 << 0x0), a3=?.
  The `jalr` at 0x406608 calls open with a0=sp-112, a1=0x2, a2=0x0, a3=?.
  The `bgezall` at 0x406630 calls drmMsg [0x406180] with a0=0x40c238, a1=?, a2=?, a3=?.
  The `jalr` at 0x40665c calls strerror with a0=[sym(errno)], a1=?, a2=?, a3=?.
  The `bgezall` at 0x406678 calls drmMsg [0x406180] with a0=0x40c260, a1=-0x3da0, a2=?, a3=?.
  The `jalr` at 0x406688 calls remove with a0=sp-112, a1=?, a2=sym(remove), a3=?.
  The `beq` branch at 0x4064d4 targets 0x406530, is taken when v0(=ret(stat)) == 0, and falls through when v0(=ret(stat)) != 0.
  The `beq` branch at 0x4064dc targets 0x406500, is taken when s1(=ret(geteuid)) == 0, and falls through when s1(=ret(geteuid)) != 0.
  The `beq` branch at 0x406590 targets 0x4065c0, is taken when v0(=ret(stat)) == 0, and falls through when v0(=ret(stat)) != 0.
  The `beq` branch at 0x406598 targets 0x4065d4, is taken when s1(=ret(geteuid)) == 0, and falls through when s1(=ret(geteuid)) != 0.
  The `bne` branch at 0x4065c4 targets 0x406598, is taken when a4(=a0) != a5(?), and falls through when a4(=a0) == a5(?).
  The `beq` branch at 0x4065cc targets 0x4065fc and is always taken.
  The `bltz` branch at 0x406614 targets 0x406654, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The `bltz` branch at 0x406640 targets 0x40666c, is taken when a0(?) < 0 (signed), and falls through when a0(?) >= 0 (signed).
  The `beq` branch at 0x406664 targets 0x406620 and is always taken.
  The `beq` branch at 0x406698 targets 0x4064ec and is always taken.
  The return at 0x4064f4 has v0 = one of -0x3eb, ?.
  The return at 0x4065b0 has v0 = -0x3eb.
  The return at 0x40664c has v0 = ?.
  The instructions from 0x4064fc to 0x4064fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4065b8 to 0x4065bc are not reached by any path from the entry, and their branches are not listed.

- `drmOpenMinor` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4066a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4066a0-0x40674c (172 bytes).
  It occupies 172 bytes.
  The `lw` at 0x40673c loads 4 bytes from sym(errno) +0x0.
  The `bgezall` at 0x4066d8 calls drmOpenDevice [0x406470] with a0=?, a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a0 at entry (arg0).
  The `jalr` at 0x406708 calls sprintf with a0=sp-80, a1=0x40c208, a2=0x40c1f8, a3=a0 at entry (arg0), a4=-0x3e08.
  The `jalr` at 0x40671c calls open with a0=sp-80, a1=0x2, a2=0x0, a3=?.
  The `beq` branch at 0x4066a8 targets 0x4066ec, is taken when a1 == 0, and falls through when a1 != 0.
  The `bltz` branch at 0x406728 targets 0x406738, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The return at 0x4066e4 has v0 = ret(drmOpenDevice).
  The return at 0x406730 has v0 = ret(open).
  The return at 0x406744 has v0 = ?.

- `drmAvailable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406750 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406750-0x406824 (212 bytes).
  It occupies 212 bytes.
  The `bgezall` at 0x40677c calls drmOpenMinor [0x4066a0] with a0=0x0, a1=0x1, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x406790 calls drmGetVersion with a0=ret(drmOpenMinor), a1=?, a2=?, a3=?.
  The `jalr` at 0x4067a8 calls close with a0=ret(drmOpenMinor), a1=?, a2=?, a3=?.
  The `jalr` at 0x4067c8 calls drmFreeVersion with a0=ret(drmGetVersion), a1=?, a2=?, a3=?.
  The `jalr` at 0x4067f0 calls access with a0=0x40c280, a1=0x4, a2=-0x3d80, a3=?.
  The `bltz` branch at 0x406784 targets 0x4067dc, is taken when v0(=ret(drmOpenMinor)) < 0 (signed), and falls through when v0(=ret(drmOpenMinor)) >= 0 (signed).
  The `bne` branch at 0x406798 targets 0x4067c8, is taken when v0(=ret(drmGetVersion)) != 0, and falls through when v0(=ret(drmGetVersion)) == 0.
  The `beq` branch at 0x4067d4 targets 0x4067a4 and is always taken.
  The `beq` branch at 0x4067f8 targets 0x406810, is taken when v0(=ret(access)) == 0, and falls through when v0(=ret(access)) != 0.
  The return at 0x4067c0 has v0 = one of 0x0, 0x1.
  The return at 0x406808 has v0 = 0x0.
  The return at 0x40681c has v0 = 0x1.

- `drmOpenByDevName` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406830 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406830-0x406874 (68 bytes).
  It occupies 68 bytes.
  The `lw` at 0x406864 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x406840 calls open with a0=a0 at entry (arg0), a1=0x2, a2=0x0, a3=a3 at entry (arg3).
  The `bltz` branch at 0x40684c targets 0x40685c, is taken when v0(=ret(open)) < 0 (signed), and falls through when v0(=ret(open)) >= 0 (signed).
  The return at 0x406854 has v0 = ret(open).
  The return at 0x40686c has v0 = ?.

- `drmOpenByBusid` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406880 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406880-0x406a10 (400 bytes).
  It occupies 400 bytes.
  The `bgezall` at 0x4068c4 calls drmMsg [0x406180] with a0=0x40c290, a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4068f8 calls close with a0=ret(drmOpenMinor), a1=?, a2=?, a3=?.
  The `bgezall` at 0x406910 calls drmOpenMinor [0x4066a0] with a0=?, a1=0x0, a2=?, a3=?.
  The `bgezall` at 0x40692c calls drmMsg [0x406180] with a0=0x40c2b0, a1=ret(drmOpenMinor), a2=?, a3=?.
  The `jalr` at 0x40693c calls drmGetBusid with a0=ret(drmOpenMinor), a1=?, a2=?, a3=?.
  The `bgezall` at 0x406958 calls drmMsg [0x406180] with a0=0x40c2e0, a1=ret(drmGetBusid), a2=?, a3=?.
  The `jalr` at 0x406970 calls strcmp with a0=ret(drmGetBusid), a1=a0 at entry (arg0), a2=sym(strcmp), a3=?.
  The `jalr` at 0x40698c calls drmFreeBusid with a0=ret(drmGetBusid), a1=?, a2=?, a3=?, a4=sym(drmFreeBusid), a5=sym(drmFreeBusid).
  The `jalr` at 0x4069d4 calls drmFreeBusid with a0=ret(drmGetBusid), a1=?, a2=?, a3=?, a5=sym(drmFreeBusid).
  The `beq` branch at 0x4068ec targets 0x406908 and is always taken.
  The `beq` branch at 0x406904 targets 0x40699c, is taken when s1(?) == s5(=0x40), and falls through when s1(?) != s5(=0x40).
  The `bltz` branch at 0x406934 targets 0x406900, is taken when s0(=ret(drmOpenMinor)) < 0 (signed), and falls through when s0(=ret(drmOpenMinor)) >= 0 (signed).
  The `beq` branch at 0x406960 targets 0x4068f4, is taken when s3(=ret(drmGetBusid)) == 0, and falls through when s3(=ret(drmGetBusid)) != 0.
  The `beq` branch at 0x406978 targets 0x4069d0, is taken when v0(=ret(strcmp)) == 0, and falls through when v0(=ret(strcmp)) != 0.
  The `beq` branch at 0x406980 targets 0x4068f4, is taken when s3(=ret(drmGetBusid)) == 0, and falls through when s3(=ret(drmGetBusid)) != 0.
  The `beq` branch at 0x406994 targets 0x4068f8 and is always taken.
  The return at 0x4069c8 has v0 = -0x1.
  The return at 0x406a08 has v0 = ret(drmOpenMinor).

- `drmOpen` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406a10 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406a10-0x406a74 (100 bytes).
  It occupies 100 bytes.
  The `bgezall` at 0x406a38 calls drmOpenByDevName [0x406830] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x406a5c calls drmOpenByBusid [0x406880] with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x406a24 targets 0x406a50, is taken when a1 != 0, and falls through when a1 == 0.
  The return at 0x406a48 has v0 = ret(drmOpenByDevName).
  The return at 0x406a6c has v0 = ret(drmOpenByBusid).

- `drmFreeVersion` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406a80 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406a80-0x406b04 (132 bytes).
  It occupies 132 bytes.
  The `ld` at 0x406aa0 loads 8 bytes from a0 (arg0 at entry) +0x10.
  The `ld` at 0x406ab8 loads 8 bytes from a0 (arg0 at entry) +0x20.
  The `ld` at 0x406acc loads 8 bytes from a0 (arg0 at entry) +0x30.
  The `jalr` at 0x406ab0 calls drmFree with a0=[a0+16]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x406ac4 calls drmFree with a0=[a0+32]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x406ad8 calls drmFree with a0=[a0+48]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x406ae8 calls drmFree with a0=a0 at entry (arg0), a1=sym(drmFree), a2=?, a3=?.
  The `beq` branch at 0x406a98 targets 0x406af4, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x406aa4 targets 0x406ab8, is taken when a0(=[a0+16]:8) == 0, and falls through when a0(=[a0+16]:8) != 0.
  The `beq` branch at 0x406abc targets 0x406acc, is taken when a0(=[a0+32]:8) == 0, and falls through when a0(=[a0+32]:8) != 0.
  The `beq` branch at 0x406ad0 targets 0x406ae0, is taken when a0(=[a0+48]:8) == 0, and falls through when a0(=[a0+48]:8) != 0.
  The return at 0x406afc has v0 = one of ?, ret(drmFree).

- `drmFreeKernelVersion` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406b10 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406b10-0x406b8c (124 bytes).
  It occupies 124 bytes.
  The `ld` at 0x406b24 loads 8 bytes from a0 (arg0 at entry) +0x18.
  The `ld` at 0x406b38 loads 8 bytes from a0 (arg0 at entry) +0x28.
  The `ld` at 0x406b4c loads 8 bytes from a0 (arg0 at entry) +0x38.
  The `jalr` at 0x406b30 calls drmFree with a0=[a0+24]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x406b44 calls drmFree with a0=[a0+40]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x406b58 calls drmFree with a0=[a0+56]:8, a1=?, a2=?, a3=?.
  Calls drmFree via got with a0=a0 at entry (arg0), a1=?, a2=sym(drmFree), a3=? (`jr` at 0x406b74).
  The `beq` branch at 0x406b1c targets 0x406b7c, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x406b28 targets 0x406b38, is taken when a0(=[a0+24]:8) == 0, and falls through when a0(=[a0+24]:8) != 0.
  The `beq` branch at 0x406b3c targets 0x406b4c, is taken when a0(=[a0+40]:8) == 0, and falls through when a0(=[a0+40]:8) != 0.
  The `beq` branch at 0x406b50 targets 0x406b60, is taken when a0(=[a0+56]:8) == 0, and falls through when a0(=[a0+56]:8) != 0.
  The return at 0x406b84 has v0 = ?.

- `drmCopyVersion` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406b90 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406b90-0x406c30 (160 bytes).
  It occupies 160 bytes.
  The `lw` at 0x406ba8 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `sw` at 0x406bac stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lw` at 0x406bb0 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `sw` at 0x406bb4 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lw` at 0x406bb8 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `sw` at 0x406bc0 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `ld` at 0x406bc8 loads 8 bytes from a1 (arg1 at entry) +0x10.
  The `sw` at 0x406bd4 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `ld` at 0x406bd8 loads 8 bytes from a1 (arg1 at entry) +0x18.
  The `sd` at 0x406be4 stores 8 bytes to a0 (arg0 at entry) +0x10.
  The `ld` at 0x406be8 loads 8 bytes from a1 (arg1 at entry) +0x20.
  The `sw` at 0x406bec stores 4 bytes to a0 (arg0 at entry) +0x18.
  The `ld` at 0x406bf8 loads 8 bytes from a1 (arg1 at entry) +0x28.
  The `sd` at 0x406bfc stores 8 bytes to a0 (arg0 at entry) +0x20.
  The `ld` at 0x406c00 loads 8 bytes from a1 (arg1 at entry) +0x30.
  The `sw` at 0x406c04 stores 4 bytes to a0 (arg0 at entry) +0x28.
  The `ld` at 0x406c10 loads 8 bytes from a1 (arg1 at entry) +0x38.
  The `sd` at 0x406c20 stores 8 bytes to a0 (arg0 at entry) +0x30.
  The `bgezall` at 0x406bdc calls drmStrdup [0x4062e0] with a0=[a1+24]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x406bf4 calls drmStrdup [0x4062e0] with a0=[a1+40]:8, a1=?, a2=?, a3=?.
  The `bgezall` at 0x406c0c calls drmStrdup [0x4062e0] with a0=[a1+56]:8, a1=?, a2=?, a3=?.
  The return at 0x406c28 has v0 = ret(drmStrdup).

- `drmGetVersion` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406c30 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406c30-0x406e18 (488 bytes).
  It occupies 488 bytes.
  The `sd` at 0x406c68 stores 8 bytes to ret(drmMalloc) +0x10.
  2 such `sd` accesses store 8 bytes to ret(drmMalloc) +0x18, including `sd` at 0x406c6c, `sd` at 0x406cec.
  The `sd` at 0x406c70 stores 8 bytes to ret(drmMalloc) +0x20.
  2 such `sd` accesses store 8 bytes to ret(drmMalloc) +0x28, including `sd` at 0x406c78, `sd` at 0x406d10.
  The `sd` at 0x406c84 stores 8 bytes to ret(drmMalloc) +0x30.
  2 such `sd` accesses store 8 bytes to ret(drmMalloc) +0x38, including `sd` at 0x406c90, `sd` at 0x406d38.
  2 such `ld` accesses load 8 bytes from ret(drmMalloc) +0x10, including `ld` at 0x406cd0, `ld` at 0x406d80.
  2 such `ld` accesses load 8 bytes from ret(drmMalloc) +0x20, including `ld` at 0x406cf0, `ld` at 0x406d94.
  2 such `ld` accesses load 8 bytes from ret(drmMalloc) +0x30, including `ld` at 0x406d14, `ld` at 0x406da8.
  The `ld` at 0x406d88 loads 8 bytes from ret(drmMalloc) +0x18.
  The `sb` at 0x406d90 stores 1 byte to ([ret(drmMalloc)+24]:8 + [ret(drmMalloc)+16]:8) +0x0.
  The `ld` at 0x406d9c loads 8 bytes from ret(drmMalloc) +0x28.
  The `sb` at 0x406da4 stores 1 byte to ([ret(drmMalloc)+40]:8 + [ret(drmMalloc)+32]:8) +0x0.
  The `ld` at 0x406db0 loads 8 bytes from ret(drmMalloc) +0x38.
  The `sb` at 0x406db8 stores 1 byte to ([ret(drmMalloc)+56]:8 + [ret(drmMalloc)+48]:8) +0x0.
  The `jalr` at 0x406c5c calls drmMalloc with a0=0x40, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x406c94 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0406400, a2=ret(drmMalloc), a3=?.
  The `bgezall` at 0x406cac calls drmFreeKernelVersion [0x406b10] with a0=ret(drmMalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x406ce4 calls drmMalloc with a0=([ret(drmMalloc)+16]:8+1 << 0x0), a1=?, a2=?, a3=?.
  The `jalr` at 0x406d08 calls drmMalloc with a0=([ret(drmMalloc)+32]:8+1 << 0x0), a1=?, a2=sym(drmMalloc), a3=?.
  The `jalr` at 0x406d30 calls drmMalloc with a0=([ret(drmMalloc)+48]:8+1 << 0x0), a1=sym(drmMalloc), a2=?, a3=sym(ioctl).
  The `jalr` at 0x406d50 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0406400, a2=ret(drmMalloc), a3=sym(ioctl).
  The `bgezall` at 0x406d68 calls drmFreeKernelVersion [0x406b10] with a0=ret(drmMalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x406dc4 calls drmMalloc with a0=0x38, a1=?, a2=sym(drmMalloc), a3=?.
  The `bgezall` at 0x406de0 calls drmCopyVersion [0x406b90] with a0=ret(drmMalloc), a1=ret(drmMalloc), a2=?, a3=?.
  The `bgezall` at 0x406df4 calls drmFreeKernelVersion [0x406b10] with a0=ret(drmMalloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0x406c9c targets 0x406cd0, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x406cd4 targets 0x406cf0, is taken when v0(=[ret(drmMalloc)+16]:8) == 0, and falls through when v0(=[ret(drmMalloc)+16]:8) != 0.
  The `beq` branch at 0x406cf4 targets 0x406d14, is taken when v0(=[ret(drmMalloc)+32]:8) == 0, and falls through when v0(=[ret(drmMalloc)+32]:8) != 0.
  The `beq` branch at 0x406d18 targets 0x406d40, is taken when v0(=[ret(drmMalloc)+48]:8) == 0, and falls through when v0(=[ret(drmMalloc)+48]:8) != 0.
  The `beq` branch at 0x406d58 targets 0x406d80, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x406d74 targets 0x406e04 and is always taken.
  The `beq` branch at 0x406d84 targets 0x406d94, is taken when v0(=[ret(drmMalloc)+16]:8) == 0, and falls through when v0(=[ret(drmMalloc)+16]:8) != 0.
  The `beq` branch at 0x406d98 targets 0x406da8, is taken when v0(=[ret(drmMalloc)+32]:8) == 0, and falls through when v0(=[ret(drmMalloc)+32]:8) != 0.
  The `beq` branch at 0x406dac targets 0x406dbc, is taken when v0(=[ret(drmMalloc)+48]:8) == 0, and falls through when v0(=[ret(drmMalloc)+48]:8) != 0.
  The return at 0x406cc8 has v0 = 0x0.
  The return at 0x406e10 has v0 = one of 0x0, ret(drmMalloc).
  The instructions from 0x406d7c to 0x406d7c are not reached by any path from the entry, and their branches are not listed.

- `drmFreeBusid` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406e20 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406e20-0x406e54 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x406e3c calls drmFree with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x406e4c has v0 = ret(drmFree).

- `drmGetBusid` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406e60 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406e60-0x406f30 (208 bytes).
  It occupies 208 bytes.
  The `sb` at 0x406f20 stores 1 byte to ?.
  The `jalr` at 0x406e94 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0106401, a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x406ed0 calls drmMalloc with a0=(table(0x1) << 0x0), a1=0x1, a2=?, a3=?.
  The `jalr` at 0x406eec calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0106401, a2=sp-48, a3=?.
  The `beq` branch at 0x406e9c targets 0x406ec0, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x406ef4 targets 0x406f0c, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x406eac has v0 = 0x0.
  The return at 0x406f04 has v0 = 0x0.
  The return at 0x406f28 has v0 = ?.
  The instructions from 0x406eb4 to 0x406ebc are not reached by any path from the entry, and their branches are not listed.

- `drmSetBusid` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406f30 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406f30-0x406fb8 (136 bytes).
  It occupies 136 bytes.
  The `lw` at 0x406f8c loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x406f58 calls strlen with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x406f74 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80106410, a2=sp-48, a3=?.
  The `beq` branch at 0x406f7c targets 0x406fa0, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x406f98 has v0 = ?.
  The return at 0x406fb0 has v0 = 0x0.

- `drmGetMagic` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x406fc0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x406fc0-0x407034 (116 bytes).
  It occupies 116 bytes.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0x406fd8, `sw` at 0x407028.
  The `lw` at 0x407000 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x406fec calls ioctl with a0=a0 at entry (arg0), a1=0x40046402, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x406ff4 targets 0x407014, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x40700c has v0 = ?.
  The return at 0x40702c has v0 = 0x0.

- `drmAuthMagic` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x407040 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x407040-0x4070a4 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x407080 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407068 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80046411, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x407070 targets 0x407094, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x40708c has v0 = ?.
  The return at 0x40709c has v0 = 0x0.

- `drmAddMap` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4070b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4070b0-0x407140 (144 bytes).
  It occupies 144 bytes.
  The `lw` at 0x407108 loads 4 bytes from sym(errno) +0x0.
  The `sd` at 0x407134 stores 8 bytes to a5 (arg5 at entry) +0x0.
  The `jalr` at 0x4070f4 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0286415, a2=sp-64, a3=a3 at entry (arg3).
  The `beq` branch at 0x4070fc targets 0x40711c, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x407128 targets 0x407138, is taken when v1(=a5) == 0, and falls through when v1(=a5) != 0.
  The return at 0x407114 has v0 = ?.
  The return at 0x407138 has v0 = 0x0.

- `drmRmMap` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x407140 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x407140-0x4071a4 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x40717c loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407168 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff8028641b, a2=sp-64, a3=a3 at entry (arg3).
  The `beq` branch at 0x407170 targets 0x407190, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407188 has v0 = ?.
  The return at 0x40719c has v0 = 0x0.

- `drmAddBufs` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4071b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4071b0-0x407228 (120 bytes).
  It occupies 120 bytes.
  The `lw` at 0x407200 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x4071ec calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0206416, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x4071f4 targets 0x407214, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x40720c has v0 = ?.
  The return at 0x407220 has v0 = a1.

- `drmMarkBufs` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x407230 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x407230-0x4073f0 (448 bytes).
  It occupies 448 bytes.
  2 such `lw` accesses load 4 bytes from sym(errno) +0x0, including `lw` at 0x4072f0, `lw` at 0x4073d4.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x407324, `lw` at 0x407348.
  2 such `swc1` accesses store 4 bytes to ?, including `swc1` at 0x40733c, `swc1` at 0x407364.
  The `jalr` at 0x40726c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0106418, a2=sp-96, a3=a3 at entry (arg3).
  The `jalr` at 0x4072a0 calls drmMalloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4072d8 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0106418, a2=sp-96, a3=?, a4=-0xc.
  The `jalr` at 0x4072fc calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x40737c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80206417, a2=?, a3=?, a4=sym(ioctl).
  The `jalr` at 0x4073b4 calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4073e0 calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x407274 targets 0x407290, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x407290 targets 0x4073c4, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x4072ac targets 0x4072c8, is taken when v0(=ret(drmMalloc)) != 0, and falls through when v0(=ret(drmMalloc)) == 0.
  The `beq` branch at 0x4072e0 targets 0x40730c, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x407304 targets 0x407280 and is always taken.
  The `blez` branch at 0x40730c targets 0x4073b0, is taken when a1(?) <= 0 (signed), and falls through when a1(?) > 0 (signed).
  The `bne` branch at 0x407384 targets 0x4073cc, is taken when v0(=ret(ioctl)) != 0, and falls through when v0(=ret(ioctl)) == 0.
  The `bne` branch at 0x4073a8 targets 0x407318, is taken when a5(?) < a6(?) (signed), and falls through when a5(?) >= a6(?) (signed).
  The `beq` branch at 0x4073bc targets 0x407280 and is always taken.
  The `beq` branch at 0x4073c4 targets 0x407284 and is always taken.
  The `beq` branch at 0x4073e8 targets 0x407280 and is always taken.
  The return at 0x407288 has v0 = one of ?, -0x16.
  The return at 0x4072c0 has v0 = -0xc.

- `drmFreeBufs` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4073f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4073f0-0x407458 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x407430 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x40741c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff8010641a, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x407424 targets 0x407444, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x40743c has v0 = ?.
  The return at 0x407450 has v0 = 0x0.

- `drmClose` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x407460 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x407460-0x407510 (176 bytes).
  It occupies 176 bytes.
  The `ld` at 0x4074bc loads 8 bytes from ret(drmGetEntry) +0x10.
  The `sw` at 0x4074c4 stores 4 bytes to ret(drmGetEntry) +0x0.
  The `sd` at 0x4074c8 stores 8 bytes to ret(drmGetEntry) +0x8.
  The `sd` at 0x4074cc stores 8 bytes to ret(drmGetEntry) +0x10.
  The `bgezall` at 0x40748c calls drmGetKeyFromFd [0x406370] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x4074a8 calls drmGetEntry [0x4063a0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x4074b8 calls drmHashDestroy with a0=[ret(drmGetEntry)+16]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x4074d4 calls drmHashDelete with a0=[0x40c6b0]:8, a1=ret(drmGetKeyFromFd), a2=?, a3=?.
  The `jalr` at 0x4074e4 calls drmFree with a0=ret(drmGetEntry), a1=?, a2=?, a3=?.
  The `jalr` at 0x4074f4 calls close with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The return at 0x407508 has v0 = ret(close).

- `drmMap` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x407510 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x407510-0x4075e8 (216 bytes).
  It occupies 216 bytes.
  The `sd` at 0x407590 stores 8 bytes to a3 (arg3 at entry) +0x0.
  The `lw` at 0x407598 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407574 calls mmap with a0=0x0, a1=?, a2=0x3, a3=0x1, a4=a0 at entry (arg0), a5=a1 at entry (arg1).
  The `jalr` at 0x4075d4 calls getpagesize with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bltz` branch at 0x407520 targets 0x4075c0, is taken when a0 < 0 (signed), and falls through when a0 >= 0 (signed).
  The `beq` branch at 0x40753c targets 0x4075d0, is taken when t0(=[0x40c6b8]:8) == 0, and falls through when t0(=[0x40c6b8]:8) != 0.
  The `bne` branch at 0x40758c targets 0x4075ac, is taken when v0(=ret(mmap)) != a2(=-0x1), and falls through when v0(=ret(mmap)) == a2(=-0x1).
  The `beq` branch at 0x4075e0 targets 0x407544 and is always taken.
  The return at 0x4075a4 has v0 = ?.
  The return at 0x4075b4 has v0 = 0x0.
  The return at 0x4075c8 has v0 = -0x16.
  The instructions from 0x4075bc to 0x4075bc are not reached by any path from the entry, and their branches are not listed.

- `drmUnmap` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4075f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4075f0-0x407628 (56 bytes).
  It occupies 56 bytes.
  The `jalr` at 0x407610 calls munmap with a0=a0 at entry (arg0), a1=?, a2=0xce20, a3=a3 at entry (arg3).
  The return at 0x407620 has v0 = ret(munmap).

- `drmGetBufInfo` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x407630 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x407630-0x4077e8 (440 bytes).
  It occupies 440 bytes.
  The `sw` at 0x407720 stores 4 bytes to ret(drmMalloc) +0x0.
  The `sd` at 0x407738 stores 8 bytes to ret(drmMalloc) +0x8.
  4 such `ld` accesses load 8 bytes from ret(drmMalloc) +0x8, including `ld` at 0x407754, `ld` at 0x40776c, `ld` at 0x407784.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x407760, `lw` at 0x407778, `lw` at 0x407790.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0x407764, `sw` at 0x40777c, `sw` at 0x407794.
  The `jalr` at 0x407664 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0106418, a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x407698 calls drmMalloc with a0=?, a1=?, a2=sym(drmMalloc), a3=?.
  The `jalr` at 0x4076d0 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0106418, a2=sp-48, a3=?.
  The `jalr` at 0x4076e0 calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x407710 calls drmMalloc with a0=0x10, a1=?, a2=?, a3=?.
  The `jalr` at 0x407730 calls drmMalloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4077d4 calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x40766c targets 0x407688, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x407688 targets 0x407700, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x4076a0 targets 0x4076c0, is taken when v0(=ret(drmMalloc)) != 0, and falls through when v0(=ret(drmMalloc)) == 0.
  The `beq` branch at 0x4076d8 targets 0x407708, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x407700 targets 0x407678 and is always taken.
  The `blez` branch at 0x407748 targets 0x4077d0, is taken when a2(?) <= 0 (signed), and falls through when a2(?) > 0 (signed).
  The `bne` branch at 0x4077c8 targets 0x407750, is taken when a0(?) < a5(?) (signed), and falls through when a0(?) >= a5(?) (signed).
  The `beq` branch at 0x4077e0 targets 0x407678 and is always taken.
  The return at 0x407680 has v0 = one of 0x0, ret(drmMalloc).
  The return at 0x4076b4 has v0 = 0x0.
  The return at 0x4076f4 has v0 = 0x0.
  The instructions from 0x4076bc to 0x4076bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4076fc to 0x4076fc are not reached by any path from the entry, and their branches are not listed.

- `drmMapBufs` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4077f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4077f0-0x407994 (420 bytes).
  It occupies 420 bytes.
  The `sw` at 0x4078e4 stores 4 bytes to ret(drmMalloc) +0x0.
  The `sd` at 0x407908 stores 8 bytes to ret(drmMalloc) +0x8.
  4 such `ld` accesses load 8 bytes from ret(drmMalloc) +0x8, including `ld` at 0x407924, `ld` at 0x40793c, `ld` at 0x407950.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x407930, `lw` at 0x407948.
  3 such `sw` accesses store 4 bytes to ?, including `sw` at 0x407934, `sw` at 0x40794c, `sw` at 0x407958.
  The `ld` at 0x40796c loads 8 bytes from ?.
  The `sd` at 0x407970 stores 8 bytes to ?.
  The `jalr` at 0x407824 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0186419, a2=sp-64, a3=a3 at entry (arg3).
  The `jalr` at 0x407860 calls drmMalloc with a0=?, a1=?, a2=sym(drmMalloc), a3=?.
  The `jalr` at 0x407898 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0186419, a2=sp-64, a3=?.
  The `jalr` at 0x4078a8 calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4078d8 calls drmMalloc with a0=0x10, a1=?, a2=?, a3=?.
  The `jalr` at 0x407900 calls drmMalloc with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x40782c targets 0x407848, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x407848 targets 0x4078c8, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x407868 targets 0x407888, is taken when v0(=ret(drmMalloc)) != 0, and falls through when v0(=ret(drmMalloc)) == 0.
  The `beq` branch at 0x4078a0 targets 0x4078d0, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x4078c8 targets 0x407838 and is always taken.
  The `blez` branch at 0x407918 targets 0x40798c, is taken when a3(?) <= 0 (signed), and falls through when a3(?) > 0 (signed).
  The `bne` branch at 0x407984 targets 0x407920, is taken when a0(?) < a5(?) (signed), and falls through when a0(?) >= a5(?) (signed).
  The `beq` branch at 0x40798c targets 0x407838 and is always taken.
  The return at 0x407840 has v0 = one of 0x0, ret(drmMalloc).
  The return at 0x407880 has v0 = 0x0.
  The return at 0x4078c0 has v0 = 0x0.

- `drmUnmapBufs` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4079a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4079a0-0x407a34 (148 bytes).
  It occupies 148 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x4079a4, `lw` at 0x4079f8.
  The `ld` at 0x4079e0 loads 8 bytes from a0 (arg0 at entry) +0x8.
  The `ld` at 0x4079e8 loads 8 bytes from ?.
  The `lw` at 0x4079f4 loads 4 bytes from ?.
  The `jalr` at 0x4079f0 calls munmap with a0=?, a1=?, a2=?, a3=?.
  The `blez` branch at 0x4079c4 targets 0x407a1c, is taken when v0(=[a0]) <= 0 (signed), and falls through when v0(=[a0]) > 0 (signed).
  The `bne` branch at 0x407a08 targets 0x4079e0, is taken when s2(?) < a3(=[a0]) (signed), and falls through when s2(?) >= a3(=[a0]) (signed).
  The return at 0x407a2c has v0 = 0x0.

- `drmDMA` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x407a40 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x407a40-0x407b54 (276 bytes).
  It occupies 276 bytes.
  The `lw` at 0x407a58 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x407a60 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `ld` at 0x407a68 loads 8 bytes from a1 (arg1 at entry) +0x8.
  The `ld` at 0x407a70 loads 8 bytes from a1 (arg1 at entry) +0x10.
  The `lw` at 0x407a78 loads 4 bytes from a1 (arg1 at entry) +0x18.
  The `lw` at 0x407a80 loads 4 bytes from a1 (arg1 at entry) +0x1c.
  The `lw` at 0x407a88 loads 4 bytes from a1 (arg1 at entry) +0x20.
  The `ld` at 0x407a90 loads 8 bytes from a1 (arg1 at entry) +0x28.
  The `ld` at 0x407aac loads 8 bytes from a1 (arg1 at entry) +0x30.
  2 such `lw` accesses load 4 bytes from sym(errno) +0x0, including `lw` at 0x407ae4, `lw` at 0x407b0c.
  The `sw` at 0x407b44 stores 4 bytes to a1 (arg1 at entry) +0x38.
  The `jalr` at 0x407acc calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0406429, a2=sp-112, a3=?.
  The `beq` branch at 0x407ae0 targets 0x407b08, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `bne` branch at 0x407ae8 targets 0x407b08, is taken when a4(=[sym(errno)]) != t1(=0xb), and falls through when a4(=[sym(errno)]) == t1(=0xb).
  The `bne` branch at 0x407af8 targets 0x407ac0, is taken when t2(?) < 0x11 (signed), and falls through when t2(?) >= 0x11 (signed).
  The `beq` branch at 0x407b00 targets 0x407b14 and is always taken.
  The `beq` branch at 0x407b08 targets 0x407b2c, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407b24 has v0 = ?.
  The return at 0x407b4c has v0 = 0x0.

- `drmGetLock` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x407b60 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x407b60-0x407c5c (252 bytes).
  It occupies 252 bytes.
  The `jalr` at 0x407c10 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff8008642a, a2=sp-48, a3=a3 at entry (arg3).
  The `jalr` at 0x407c2c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff8008642a, a2=sp-48, a3=?.
  The `beq` branch at 0x407b98 targets 0x407ba8, is taken when (a2 & 0x1) == 0, and falls through when (a2 & 0x1) != 0.
  The `beq` branch at 0x407ba8 targets 0x407bb8, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x407bbc targets 0x407bcc, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x407bcc targets 0x407bdc, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x407bdc targets 0x407bec, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x407bec targets 0x407bf8, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x407c18 targets 0x407c40, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `bne` branch at 0x407c34 targets 0x407c24, is taken when v0(=ret(ioctl)) != 0, and falls through when v0(=ret(ioctl)) == 0.
  The return at 0x407c54 has v0 = 0x0.

- `drmUnlock` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x407c60 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x407c60-0x407ca4 (68 bytes).
  It occupies 68 bytes.
  The `jalr` at 0x407c8c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff8008642b, a2=sp-32, a3=a3 at entry (arg3).
  The return at 0x407c9c has v0 = ret(ioctl).

- `drmGetReservedContextList` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x407cb0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x407cb0-0x407e24 (372 bytes).
  It occupies 372 bytes.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x407dac, `lw` at 0x407dc8.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x407db0, `sw` at 0x407dcc.
  The `sw` at 0x407e0c stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `jalr` at 0x407cec calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0106426, a2=sp-64, a3=a3 at entry (arg3).
  The `jalr` at 0x407d30 calls drmMalloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x407d54 calls drmMalloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x407d7c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0106426, a2=sp-64, a3=?.
  The `jalr` at 0x407df4 calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x407e14 calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x407cf4 targets 0x407d20, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x407d20 targets 0x407d98, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x407d38 targets 0x407d48, is taken when v0(=ret(drmMalloc)) != 0, and falls through when v0(=ret(drmMalloc)) == 0.
  The `beq` branch at 0x407d40 targets 0x407d10 and is always taken.
  The `beq` branch at 0x407d5c targets 0x407e10, is taken when v0(=ret(drmMalloc)) == 0, and falls through when v0(=ret(drmMalloc)) != 0.
  The `beq` branch at 0x407d88 targets 0x407da0, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x407d90 targets 0x407d10 and is always taken.
  The `beq` branch at 0x407d98 targets 0x407d10 and is always taken.
  The `blez` branch at 0x407da0 targets 0x407df0, is taken when a4(?) <= 0 (signed), and falls through when a4(?) > 0 (signed).
  The `beq` branch at 0x407dc0 targets 0x407df0, is taken when a1(?) >= a3(?) (signed), and falls through when a1(?) < a3(?) (signed).
  The `bne` branch at 0x407de8 targets 0x407dac, is taken when a1(?) < a7(?) (signed), and falls through when a1(?) >= a7(?) (signed).
  The `beq` branch at 0x407e08 targets 0x407d10 and is always taken.
  The `beq` branch at 0x407e1c targets 0x407d10 and is always taken.
  The return at 0x407d08 has v0 = 0x0.
  The return at 0x407d18 has v0 = one of 0x0, ?.

- `drmFreeReservedContextList` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x407e30 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x407e30-0x407e64 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x407e4c calls drmFree with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x407e5c has v0 = ret(drmFree).

- `drmCreateContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x407e70 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x407e70-0x407ee4 (116 bytes).
  It occupies 116 bytes.
  The `lw` at 0x407eb0 loads 4 bytes from sym(errno) +0x0.
  The `sw` at 0x407ed8 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `jalr` at 0x407e9c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0086420, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x407ea4 targets 0x407ec4, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407ebc has v0 = ?.
  The return at 0x407edc has v0 = 0x0.

- `drmSwitchToContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x407ef0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x407ef0-0x407f54 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x407f30 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407f18 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80086424, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x407f20 targets 0x407f44, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407f3c has v0 = ?.
  The return at 0x407f4c has v0 = 0x0.

- `drmSetContextFlags` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x407f60 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x407f60-0x407fec (140 bytes).
  It occupies 140 bytes.
  The `lw` at 0x407fc4 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x407fb0 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80086422, a2=sp-32, a3=(one of 0x0, 0x1 | 0x2), a4=one of 0x0, 0x1.
  The `beq` branch at 0x407f84 targets 0x407f94, is taken when (a2 & 0x1) == 0, and falls through when (a2 & 0x1) != 0.
  The `beq` branch at 0x407f98 targets 0x407fa4, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x407fb8 targets 0x407fd8, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x407fd0 has v0 = ?.
  The return at 0x407fe4 has v0 = 0x0.

- `drmGetContextFlags` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x407ff0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x407ff0-0x408094 (164 bytes).
  It occupies 164 bytes.
  The `lw` at 0x408030 loads 4 bytes from sym(errno) +0x0.
  3 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x0, including `sw` at 0x408048, `sw` at 0x408070, `sw` at 0x408088.
  The `jalr` at 0x40801c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0086423, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x408024 targets 0x408044, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x408068 targets 0x40807c, is taken when (a1(?) & 0x1) == 0, and falls through when (a1(?) & 0x1) != 0.
  The `beq` branch at 0x408080 targets 0x40808c, is taken when (a1(?) & 0x2) == 0, and falls through when (a1(?) & 0x2) != 0.
  The return at 0x40803c has v0 = ?.
  The return at 0x40808c has v0 = 0x0.

- `drmDestroyContext` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4080a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4080a0-0x408108 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x4080dc loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x4080c8 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0086421, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x4080d0 targets 0x4080f0, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4080e8 has v0 = ?.
  The return at 0x408100 has v0 = 0x0.

- `drmCreateDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408110 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408110-0x408180 (112 bytes).
  It occupies 112 bytes.
  The `lw` at 0x408150 loads 4 bytes from sym(errno) +0x0.
  The `sw` at 0x408174 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `jalr` at 0x408138 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0046427, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x408140 targets 0x408164, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x40815c has v0 = ?.
  The return at 0x408178 has v0 = 0x0.

- `drmDestroyDrawable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408180 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408180-0x4081e4 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x4081bc loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x4081a8 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0046428, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x4081b0 targets 0x4081d0, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4081c8 has v0 = ?.
  The return at 0x4081dc has v0 = 0x0.

- `drmAgpAcquire` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4081f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4081f0-0x408250 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0x40822c loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x408214 calls ioctl with a0=a0 at entry (arg0), a1=0x20006430, a2=0x0, a3=a3 at entry (arg3).
  The `beq` branch at 0x40821c targets 0x408240, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408238 has v0 = ?.
  The return at 0x408248 has v0 = 0x0.

- `drmAgpRelease` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408250 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408250-0x4082b0 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0x408288 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x408274 calls ioctl with a0=a0 at entry (arg0), a1=0x20006431, a2=0x0, a3=a3 at entry (arg3).
  The `beq` branch at 0x40827c targets 0x40829c, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408294 has v0 = ?.
  The return at 0x4082a8 has v0 = 0x0.

- `drmAgpEnable` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4082b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4082b0-0x408314 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x4082f0 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x4082d8 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80086432, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x4082e0 targets 0x408304, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4082fc has v0 = ?.
  The return at 0x40830c has v0 = 0x0.

- `drmAgpAlloc` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408320 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408320-0x4083b4 (148 bytes).
  It occupies 148 bytes.
  2 such `sd` accesses store 8 bytes to a4 (arg4 at entry) +0x0, including `sd` at 0x408338, `sd` at 0x4083a8.
  The `lw` at 0x408370 loads 4 bytes from sym(errno) +0x0.
  The `sd` at 0x4083a0 stores 8 bytes to a3 (arg3 at entry) +0x0.
  The `jalr` at 0x40835c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0206434, a2=sp-64, a3=a3 at entry (arg3).
  The `beq` branch at 0x408364 targets 0x408384, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x408394 targets 0x4083a4, is taken when v1(=a3) == 0, and falls through when v1(=a3) != 0.
  The return at 0x40837c has v0 = ?.
  The return at 0x4083ac has v0 = 0x0.

- `drmAgpFree` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4083c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4083c0-0x408428 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x408404 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x4083ec calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80206435, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x4083f4 targets 0x408418, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408410 has v0 = ?.
  The return at 0x408420 has v0 = 0x0.

- `drmAgpBind` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408430 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408430-0x408498 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x408474 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x40845c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80106436, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x408464 targets 0x408488, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408480 has v0 = ?.
  The return at 0x408490 has v0 = 0x0.

- `drmAgpUnbind` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4084a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4084a0-0x408508 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x4084e0 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x4084cc calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80106437, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x4084d4 targets 0x4084f4, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4084ec has v0 = ?.
  The return at 0x408500 has v0 = 0x0.

- `drmAgpVersionMajor` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408510 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408510-0x408570 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0x40854c loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x408534 calls ioctl with a0=a0 at entry (arg0), a1=0x40386433, a2=sp-80, a3=a3 at entry (arg3).
  The `beq` branch at 0x40853c targets 0x408560, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408558 has v0 = ?.
  The return at 0x408568 has v0 = ?.

- `drmAgpVersionMinor` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408570 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408570-0x4085d0 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0x4085ac loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x408594 calls ioctl with a0=a0 at entry (arg0), a1=0x40386433, a2=sp-80, a3=a3 at entry (arg3).
  The `beq` branch at 0x40859c targets 0x4085c0, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4085b8 has v0 = ?.
  The return at 0x4085c8 has v0 = ?.

- `drmAgpGetMode` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4085d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4085d0-0x408628 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x4085f4 calls ioctl with a0=a0 at entry (arg0), a1=0x40386433, a2=sp-80, a3=a3 at entry (arg3).
  The `beq` branch at 0x4085fc targets 0x408618, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408610 has v0 = 0x0.
  The return at 0x408620 has v0 = ?.

- `drmAgpBase` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408630 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408630-0x408688 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x408654 calls ioctl with a0=a0 at entry (arg0), a1=0x40386433, a2=sp-80, a3=a3 at entry (arg3).
  The `beq` branch at 0x40865c targets 0x408674, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x40866c has v0 = 0x0.
  The return at 0x408680 has v0 = ?.

- `drmAgpSize` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408690 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408690-0x4086e8 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x4086b4 calls ioctl with a0=a0 at entry (arg0), a1=0x40386433, a2=sp-80, a3=a3 at entry (arg3).
  The `beq` branch at 0x4086bc targets 0x4086d8, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4086d0 has v0 = 0x0.
  The return at 0x4086e0 has v0 = ?.

- `drmAgpMemoryUsed` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4086f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4086f0-0x408748 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x408714 calls ioctl with a0=a0 at entry (arg0), a1=0x40386433, a2=sp-80, a3=a3 at entry (arg3).
  The `beq` branch at 0x40871c targets 0x408738, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408730 has v0 = 0x0.
  The return at 0x408740 has v0 = ?.

- `drmAgpMemoryAvail` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408750 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408750-0x4087a8 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x408774 calls ioctl with a0=a0 at entry (arg0), a1=0x40386433, a2=sp-80, a3=a3 at entry (arg3).
  The `beq` branch at 0x40877c targets 0x408798, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408790 has v0 = 0x0.
  The return at 0x4087a0 has v0 = ?.

- `drmAgpVendorId` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4087b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4087b0-0x408808 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x4087d4 calls ioctl with a0=a0 at entry (arg0), a1=0x40386433, a2=sp-80, a3=a3 at entry (arg3).
  The `beq` branch at 0x4087dc targets 0x4087f4, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4087ec has v0 = 0x0.
  The return at 0x408800 has v0 = ?.

- `drmAgpDeviceId` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408810 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408810-0x408868 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x408834 calls ioctl with a0=a0 at entry (arg0), a1=0x40386433, a2=sp-80, a3=a3 at entry (arg3).
  The `beq` branch at 0x40883c targets 0x408858, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408850 has v0 = 0x0.
  The return at 0x408860 has v0 = ?.

- `drmScatterGatherAlloc` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408870 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408870-0x4088ec (124 bytes).
  It occupies 124 bytes.
  2 such `sd` accesses store 8 bytes to a2 (arg2 at entry) +0x0, including `sd` at 0x408888, `sd` at 0x4088e0.
  The `lw` at 0x4088bc loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x4088a4 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80106438, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x4088ac targets 0x4088d0, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4088c8 has v0 = ?.
  The return at 0x4088e4 has v0 = 0x0.

- `drmScatterGatherFree` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4088f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4088f0-0x408958 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x408934 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x40891c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80106439, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x408924 targets 0x408948, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408940 has v0 = ?.
  The return at 0x408950 has v0 = 0x0.

- `drmError` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408960 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408960-0x408ac0 (352 bytes).
  It occupies 352 bytes.
  The `jalr` at 0x4089d4 calls strerror with a0=?, a1=0x40, a2=-0x3eb, a3=-0x3ec, a4=-0x3ea.
  The `jalr` at 0x4089f8 calls fprintf with a0=sym(__iob)+64, a1=0x40c308, a2=a1 at entry (arg1), a3=?, a4=ret(strerror), a5=-0x3cf8.
  The `jalr` at 0x408a34 calls fprintf with a0=sym(__iob)+64, a1=0x40c358, a2=a1 at entry (arg1), a3=-0x3ca8.
  The `jalr` at 0x408a5c calls fprintf with a0=sym(__iob)+64, a1=0x40c348, a2=a1 at entry (arg1), a3=-0x3cb8, a4=-0x3ea.
  The `jalr` at 0x408a84 calls fprintf with a0=sym(__iob)+64, a1=0x40c338, a2=a1 at entry (arg1), a3=-0x3cc8, a4=-0x3ea.
  The `jalr` at 0x408aac calls fprintf with a0=sym(__iob)+64, a1=0x40c320, a2=a1 at entry (arg1), a3=-0x3ce0, a4=-0x3ea.
  The `beq` branch at 0x4089a0 targets 0x408a1c, is taken when a0 == at(=-0x3e9), and falls through when a0 != at(=-0x3e9).
  The `beq` branch at 0x4089ac targets 0x408a48, is taken when a0 == a4(=-0x3ea), and falls through when a0 != a4(=-0x3ea).
  The `beq` branch at 0x4089b4 targets 0x408a70, is taken when a0 == a2(=-0x3eb), and falls through when a0 != a2(=-0x3eb).
  The `beq` branch at 0x4089bc targets 0x408a98, is taken when a0 == a3(=-0x3ec), and falls through when a0 != a3(=-0x3ec).
  The `bgez` branch at 0x4089c4 targets 0x4089d4, is taken when a0 >= 0 (signed), and falls through when a0 < 0 (signed).
  The `beq` branch at 0x408a40 targets 0x408a0c and is always taken.
  The `beq` branch at 0x408a68 targets 0x408a0c and is always taken.
  The `beq` branch at 0x408a90 targets 0x408a0c and is always taken.
  The `beq` branch at 0x408ab8 targets 0x408a0c and is always taken.
  The return at 0x408a14 has v0 = 0x1.

- `drmCtlInstHandler` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408ac0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408ac0-0x408b2c (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x408b04 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x408af0 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80086414, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x408af8 targets 0x408b18, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408b10 has v0 = ?.
  The return at 0x408b24 has v0 = 0x0.

- `drmCtlUninstHandler` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408b30 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408b30-0x408b9c (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x408b74 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x408b60 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff80086414, a2=sp-32, a3=0x3.
  The `beq` branch at 0x408b68 targets 0x408b88, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408b80 has v0 = ?.
  The return at 0x408b94 has v0 = 0x0.

- `drmFinish` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408ba0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408ba0-0x408c70 (208 bytes).
  It occupies 208 bytes.
  The `lw` at 0x408c4c loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x408c34 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff8008642c, a2=sp-32, a3=?.
  The `beq` branch at 0x408bc8 targets 0x408bd8, is taken when (a2 & 0x1) == 0, and falls through when (a2 & 0x1) != 0.
  The `beq` branch at 0x408bd8 targets 0x408be8, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x408bec targets 0x408bfc, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x408bfc targets 0x408c0c, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x408c0c targets 0x408c1c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x408c1c targets 0x408c28, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x408c3c targets 0x408c60, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408c58 has v0 = ?.
  The return at 0x408c68 has v0 = 0x0.

- `drmGetInterruptFromBusID` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408c70 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408c70-0x408cdc (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x408cb8 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x408ca0 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0106403, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x408ca8 targets 0x408ccc, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408cc4 has v0 = ?.
  The return at 0x408cd4 has v0 = ?.

- `drmAddContextTag` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408ce0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408ce0-0x408d94 (180 bytes).
  It occupies 180 bytes.
  3 such `ld` accesses load 8 bytes from ret(drmGetEntry) +0x10, including `ld` at 0x408d38, `ld` at 0x408d5c, `ld` at 0x408d68.
  The `bgezall` at 0x408d18 calls drmGetEntry [0x4063a0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x408d40 calls drmHashInsert with a0=[ret(drmGetEntry)+16]:8, a1=?, a2=a2 at entry (arg2), a3=?.
  The `jalr` at 0x408d58 calls drmHashDelete with a0=[ret(drmGetEntry)+16]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x408d6c calls drmHashInsert with a0=[ret(drmGetEntry)+16]:8, a1=?, a2=a2 at entry (arg2), a3=?.
  The `beq` branch at 0x408d48 targets 0x408d74, is taken when v0(=ret(drmHashInsert)) == 0, and falls through when v0(=ret(drmHashInsert)) != 0.
  The return at 0x408d8c has v0 = 0x0.

- `drmDelContextTag` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408da0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408da0-0x408df8 (88 bytes).
  It occupies 88 bytes.
  The `ld` at 0x408dd4 loads 8 bytes from ret(drmGetEntry) +0x10.
  The `bgezall` at 0x408dc8 calls drmGetEntry [0x4063a0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x408ddc calls drmHashDelete with a0=[ret(drmGetEntry)+16]:8, a1=?, a2=?, a3=?.
  The return at 0x408df0 has v0 = ret(drmHashDelete).

- `drmGetContextTag` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408e00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408e00-0x408e7c (124 bytes).
  It occupies 124 bytes.
  The `ld` at 0x408e34 loads 8 bytes from ret(drmGetEntry) +0x10.
  The `bgezall` at 0x408e28 calls drmGetEntry [0x4063a0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x408e40 calls drmHashLookup with a0=[ret(drmGetEntry)+16]:8, a1=?, a2=sp-32, a3=?.
  The `beq` branch at 0x408e48 targets 0x408e64, is taken when v0(=ret(drmHashLookup)) == 0, and falls through when v0(=ret(drmHashLookup)) != 0.
  The return at 0x408e5c has v0 = 0x0.
  The return at 0x408e74 has v0 = ?.

- `drmAddContextPrivateMapping` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408e80 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408e80-0x408ee8 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x408ec4 loads 4 bytes from sym(errno) +0x0.
  The `jalr` at 0x408eac calls ioctl with a0=a0 at entry (arg0), a1=0xffffffff8010641c, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0x408eb4 targets 0x408ed8, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408ed0 has v0 = ?.
  The return at 0x408ee0 has v0 = 0x0.

- `drmGetContextPrivateMapping` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408ef0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408ef0-0x408f68 (120 bytes).
  It occupies 120 bytes.
  The `lw` at 0x408f30 loads 4 bytes from sym(errno) +0x0.
  The `sd` at 0x408f5c stores 8 bytes to a2 (arg2 at entry) +0x0.
  The `jalr` at 0x408f1c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc010641d, a2=sp-48, a3=a3 at entry (arg3).
  The `beq` branch at 0x408f24 targets 0x408f44, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x408f50 targets 0x408f60, is taken when v1(=a2) == 0, and falls through when v1(=a2) != 0.
  The return at 0x408f3c has v0 = ?.
  The return at 0x408f60 has v0 = 0x0.

- `drmGetMap` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x408f70 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x408f70-0x409034 (196 bytes).
  It occupies 196 bytes.
  The `lw` at 0x408fc4 loads 4 bytes from sym(errno) +0x0.
  The `sd` at 0x408ffc stores 8 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0x409004 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0x40900c stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `sw` at 0x409014 stores 4 bytes to a5 (arg5 at entry) +0x0.
  The `sd` at 0x40901c stores 8 bytes to a6 (arg6 at entry) +0x0.
  The `sw` at 0x409028 stores 4 bytes to a7 (arg7 at entry) +0x0.
  The `jalr` at 0x408fb0 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0286404, a2=sp-112, a3=a3 at entry (arg3).
  The `beq` branch at 0x408fb8 targets 0x408fd8, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x408fd0 has v0 = ?.
  The return at 0x40902c has v0 = 0x0.

- `drmGetClient` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x409040 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x409040-0x4090f4 (180 bytes).
  It occupies 180 bytes.
  The `lw` at 0x409094 loads 4 bytes from sym(errno) +0x0.
  The `sw` at 0x4090c4 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0x4090cc stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0x4090d4 stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `sd` at 0x4090dc stores 8 bytes to a5 (arg5 at entry) +0x0.
  The `sd` at 0x4090e8 stores 8 bytes to a6 (arg6 at entry) +0x0.
  The `jalr` at 0x40907c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0286405, a2=sp-96, a3=a3 at entry (arg3).
  The `beq` branch at 0x409084 targets 0x4090a8, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The return at 0x4090a0 has v0 = ?.
  The return at 0x4090ec has v0 = 0x0.

- `drmGetStats` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x409100 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x409100-0x4095c0 (1216 bytes).
  It occupies 1216 bytes.
  The `lw` at 0x40913c loads 4 bytes from sym(errno) +0x0.
  2 such `sd` accesses store 8 bytes to a1 (arg1 at entry) +0x0, including `sd` at 0x409168, `sd` at 0x4091a4.
  43 such `sw` accesses store 4 bytes to ?, including `sw` at 0x409200, `sw` at 0x409204, `sw` at 0x40920c.
  74 such `sd` accesses store 8 bytes to ?, including `sd` at 0x409208, `sd` at 0x409210, `sd` at 0x409214.
  The `ld` at 0x409248 loads 8 bytes from ?.
  The `lw` at 0x409250 loads 4 bytes from ?.
  The `ld` at 0x40926c loads 8 bytes from table(0x40c3a8) +0x0.
  The `jalr` at 0x409128 calls ioctl with a0=a0 at entry (arg0), a1=0x40f86406, a2=sp-272, a3=a3 at entry (arg3).
  The `jalr` at 0x409164 calls memset with a0=a1 at entry (arg1), a1=0x0, a2=0x3c8, a3=?.
  The `beq` branch at 0x409130 targets 0x409150, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `bne` branch at 0x409188 targets 0x4091a4, is taken when a0(?) < 0x10 (unsigned), and falls through when a0(?) >= 0x10 (unsigned).
  The `beq` branch at 0x4091ac targets 0x409280, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x4091ec targets 0x4095b4 and is always taken.
  The `beq` branch at 0x409240 targets 0x409280, is taken when a4(?) >= v0(?) (unsigned), and falls through when a4(?) < v0(?) (unsigned).
  The `beq` branch at 0x409264 targets 0x409200, is taken when at(?) >= 0xf (unsigned), and falls through when at(?) < 0xf (unsigned).
  The `beq` branch at 0x4092b0 targets 0x409220 and is always taken.
  The `beq` branch at 0x4092ec targets 0x409220 and is always taken.
  The `beq` branch at 0x409330 targets 0x409220 and is always taken.
  The `beq` branch at 0x40936c targets 0x409220 and is always taken.
  The `beq` branch at 0x4093b0 targets 0x409220 and is always taken.
  The `beq` branch at 0x4093f0 targets 0x409220 and is always taken.
  The `beq` branch at 0x40942c targets 0x409220 and is always taken.
  The `beq` branch at 0x40946c targets 0x409220 and is always taken.
  The `beq` branch at 0x40949c targets 0x409220 and is always taken.
  The `beq` branch at 0x4094d0 targets 0x409220 and is always taken.
  The `beq` branch at 0x409504 targets 0x409220 and is always taken.
  The `beq` branch at 0x409538 targets 0x409220 and is always taken.
  The `beq` branch at 0x40956c targets 0x409220 and is always taken.
  The `beq` branch at 0x4095ac targets 0x409220 and is always taken.
  The `beq` branch at 0x4095b8 targets 0x40924c and is always taken.
  The return at 0x409148 has v0 = ?.
  The return at 0x40919c has v0 = -0x1.
  The return at 0x40928c has v0 = 0x0.
  The instructions from 0x4091f4 to 0x4091fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x409278 to 0x40927c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4092b8 to 0x4092bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4092f4 to 0x4092fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x409338 to 0x40933c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x409374 to 0x40937c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4093b8 to 0x4093bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4093f8 to 0x4093fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x409434 to 0x40943c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x409474 to 0x40947c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x409574 to 0x40957c are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x409270 uses the jump table at 0x40c3a8 with targets 0x409294, 0x409580, 0x409540, 0x40950c, 0x4094d8, 0x4094a4, 0x409480, 0x409440, 0x409200, 0x409400, 0x4093c0, 0x409380, 0x409340, 0x409300, 0x4092c0.
  The indirect jump at 0x409270 uses the jump table at 0x40c3a8 with targets 0x409294, 0x409580, 0x409540, 0x40950c, 0x4094d8, 0x4094a4, 0x409480, 0x409440, 0x409200, 0x409400, 0x4093c0, 0x409380, 0x409340, 0x409300, 0x4092c0.
  The indirect jump at 0x409270 uses the jump table at 0x40c3a8 with targets 0x409294, 0x409580, 0x409540, 0x40950c, 0x4094d8, 0x4094a4, 0x409480, 0x409440, 0x409200, 0x409400, 0x4093c0, 0x409380, 0x409340, 0x409300, 0x4092c0.
  The indirect jump at 0x409270 uses the jump table at 0x40c3a8 with targets 0x409294, 0x409580, 0x409540, 0x40950c, 0x4094d8, 0x4094a4, 0x409480, 0x409440, 0x409200, 0x409400, 0x4093c0, 0x409380, 0x409340, 0x409300, 0x4092c0.
  The indirect jump at 0x409270 uses the jump table at 0x40c3a8 with targets 0x409294, 0x409580, 0x409540, 0x40950c, 0x4094d8, 0x4094a4, 0x409480, 0x409440, 0x409200, 0x409400, 0x4093c0, 0x409380, 0x409340, 0x409300, 0x4092c0.

- `drmRandomCreate` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4095c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4095c0-0x40968c (204 bytes).
  It occupies 204 bytes.
  The `sd` at 0x409610 stores 8 bytes to ret(drmMalloc) +0x8.
  The `sd` at 0x409614 stores 8 bytes to ret(drmMalloc) +0x18.
  The `sd` at 0x409618 stores 8 bytes to ret(drmMalloc) +0x20.
  The `sd` at 0x409620 stores 8 bytes to ret(drmMalloc) +0x10.
  The `sd` at 0x409628 stores 8 bytes to ret(drmMalloc) +0x28.
  3 such `sd` accesses store 8 bytes to ret(drmMalloc) +0x30, including `sd` at 0x409630, `sd` at 0x409658, `sd` at 0x409680.
  The `sd` at 0x409644 stores 8 bytes to ret(drmMalloc) +0x0.
  The `jalr` at 0x4095e0 calls drmMalloc with a0=0x38, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x409608 targets 0x409668, is taken when v0(=ret(drmMalloc)) == 0, and falls through when v0(=ret(drmMalloc)) != 0.
  The `blez` branch at 0x409640 targets 0x40967c, is taken when a0 <= 0 (signed), and falls through when a0 > 0 (signed).
  The `bne` branch at 0x40964c targets 0x409660, is taken when a5(?) < t1(=0x7fffffff) (unsigned), and falls through when a5(?) >= t1(=0x7fffffff) (unsigned).
  The `beq` branch at 0x409684 targets 0x409648 and is always taken.
  The return at 0x409660 has v0 = ret(drmMalloc).
  The return at 0x409674 has v0 = 0x0.

- `drmRandomDestroy` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x409690 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x409690-0x4096c8 (56 bytes).
  It occupies 56 bytes.
  The `jalr` at 0x4096ac calls drmFree with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x4096c0 has v0 = 0x0.

- `drmRandom` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x4096d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x4096d0-0x40973c (108 bytes).
  It occupies 108 bytes.
  The `ld` at 0x4096d0 loads 8 bytes from a0 (arg0 at entry) +0x18.
  The `ld` at 0x4096d4 loads 8 bytes from a0 (arg0 at entry) +0x30.
  The `ld` at 0x4096dc loads 8 bytes from a0 (arg0 at entry) +0x8.
  The `ld` at 0x4096f8 loads 8 bytes from a0 (arg0 at entry) +0x20.
  2 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0x30, including `sd` at 0x409718, `sd` at 0x409738.
  The `ld` at 0x40972c loads 8 bytes from a0 (arg0 at entry) +0x10.
  The `blez` branch at 0x40971c targets 0x40972c, is taken when a3(?) <= 0 (signed), and falls through when a3(?) > 0 (signed).
  The return at 0x409724 has v0 = ?.
  The return at 0x409734 has v0 = ?.

- `drmRandomDouble` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x409740 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so`.
  Range: 0x409740-0x4097c4 (132 bytes).
  It occupies 132 bytes.
  The `ld` at 0x40976c loads 8 bytes from a0 (arg0 at entry) +0x10.
  The `jalr` at 0x409764 calls drmRandom with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x409798 targets 0x4097a4, is taken when v0(=ret(drmRandom)) < 0x0 (signed), and falls through when v0(=ret(drmRandom)) >= 0x0 (signed).
  The `bne` branch at 0x4097a4 targets 0x4097b0, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The return at 0x4097bc has v0 = ?.
