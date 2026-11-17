# Readings: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`

One entry per routine, filed here from the reading batches by binary.

- `fglrx_glxSetup` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b8dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4b8dc0-0x4b8dc8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4b8dc0 has v0 = 0x1.

- `InitColorBuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4beec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4beec0-0x4bef6c (172 bytes).
  It occupies 172 bytes.
  The `sw` at 0x4beefc stores 4 bytes to a0 (arg0 at entry) +0x54.
  The `sw` at 0x4bef00 stores 4 bytes to a0 (arg0 at entry) +0x58.
  The `sw` at 0x4bef10 stores 4 bytes to a0 (arg0 at entry) +0x40.
  The `sb` at 0x4bef18 stores 1 byte to a0 (arg0 at entry) +0x65.
  The `sb` at 0x4bef20 stores 1 byte to a0 (arg0 at entry) +0x88.
  The `sw` at 0x4bef38 stores 4 bytes to a0 (arg0 at entry) +0x34.
  The `sw` at 0x4bef44 stores 4 bytes to a0 (arg0 at entry) +0x38.
  The `sw` at 0x4bef50 stores 4 bytes to a0 (arg0 at entry) +0x30.
  The `sw` at 0x4bef5c stores 4 bytes to a0 (arg0 at entry) +0x44.
  The `jalr` at 0x4beeec calls memset with a0=a0 at entry (arg0), a1=0x0, a2=0xdc, a3=a3 at entry (arg3).
  The `bgezl` branch at 0x4bef64 targets 0x4bd840 and is always taken.

- `InitDepthBuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4bef80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4bef80-0x4bf028 (168 bytes).
  It occupies 168 bytes.
  The `sw` at 0x4befbc stores 4 bytes to a0 (arg0 at entry) +0x40.
  The `sw` at 0x4befc0 stores 4 bytes to a0 (arg0 at entry) +0x54.
  The `sw` at 0x4befc4 stores 4 bytes to a0 (arg0 at entry) +0x58.
  The `sb` at 0x4befd0 stores 1 byte to a0 (arg0 at entry) +0x65.
  The `sb` at 0x4befd8 stores 1 byte to a0 (arg0 at entry) +0x88.
  The `sw` at 0x4beff4 stores 4 bytes to a0 (arg0 at entry) +0x34.
  The `sw` at 0x4bf000 stores 4 bytes to a0 (arg0 at entry) +0x38.
  The `sw` at 0x4bf00c stores 4 bytes to a0 (arg0 at entry) +0x30.
  The `sw` at 0x4bf018 stores 4 bytes to a0 (arg0 at entry) +0x44.
  The `jalr` at 0x4befac calls memset with a0=a0 at entry (arg0), a1=0x0, a2=0xdc, a3=a3 at entry (arg3).
  The `bgezl` branch at 0x4bf020 targets 0x4bd840 and is always taken.

- `Ser_gl_create_context` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c3c80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4c3c80-0x4c3cfc (124 bytes).
  It occupies 124 bytes.
  The `lw` at 0x4c3ccc loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `sw` at 0x4c3cd4 stores 4 bytes to ret(calloc) +0x0.
  The `jalr` at 0x4c3ca8 calls calloc with a0=0x1, a1=0xc, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x4c3cb4 targets 0x4c3ce4, is taken when v0(=ret(calloc)) == 0, and falls through when v0(=ret(calloc)) != 0.
  The `beq` branch at 0x4c3cc0 targets 0x4c3cd0, is taken when s0(=a1) == 0, and falls through when s0(=a1) != 0.
  The `beq` branch at 0x4c3cc8 targets 0x4c3cd4 and is always taken.
  The return at 0x4c3cdc has v0 = ret(calloc).
  The return at 0x4c3cf4 has v0 = 0x0.

- `Ser_gl_destroy_context` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c3d00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4c3d00-0x4c3d34 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x4c3d1c calls free with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x4c3d2c has v0 = ret(free).

- `Ser_gl_destroy_framebuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c3d40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4c3d40-0x4c3db8 (120 bytes).
  It occupies 120 bytes.
  The `lw` at 0x4c3d5c loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `jalr` at 0x4c3d68 calls fglX11AquireProcessSpinlock with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4c3d78 calls fglX11DRMLockScreen with a0=[a0+16], a1=0x0, a2=?, a3=?.
  The `jalr` at 0x4c3d84 calls fglX11DestroyDrawablePrivate with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x4c3d94 calls fglX11DRMUnlockScreen with a0=[a0+16], a1=?, a2=?, a3=?.
  The `jalr` at 0x4c3da0 calls fglX11ReleaseProcessSpinlock with a0=?, a1=?, a2=?, a3=?.
  The return at 0x4c3db0 has v0 = ret(fglX11ReleaseProcessSpinlock).

- `driSerGLSwapBuffers` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c5f00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4c5f00-0x4c5f78 (120 bytes).
  It occupies 120 bytes.
  The `lw` at 0x4c5f30 loads 4 bytes from ret(__glXFindDRIScreen) +0xc.
  The `lw` at 0x4c5f38 loads 4 bytes from ret(__glXFindDRIScreen) +0x10.
  The `lw` at 0x4c5f60 loads 4 bytes from ret(?) +0x4.
  The `lw` at 0x4c5f64 loads 4 bytes from ret(?) +0xc.
  The `jalr` at 0x4c5f28 calls __glXFindDRIScreen with a0=0x0, a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4c5f40 calls (unknown callee) with a0=0x0, a1=a1 at entry (arg1), a2=[ret(__glXFindDRIScreen)+16], a3=?.
  The `jalr` at 0x4c5f68 calls (unknown callee) with a0=0x0, a1=[ret(?)+12], a2=?, a3=?.
  The `bne` branch at 0x4c5f48 targets 0x4c5f60, is taken when v0(=ret(?)) != 0, and falls through when v0(=ret(?)) == 0.
  The `beq` branch at 0x4c5f70 targets 0x4c5f54 and is always taken.
  The return at 0x4c5f58 has v0 = ret(?).

- `driSerGLUnbindContext` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c5f80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4c5f80-0x4c6024 (164 bytes).
  It occupies 164 bytes.
  The `lw` at 0x4c5fd4 loads 4 bytes from a2 (arg2 at entry) +0x14.
  The `sw` at 0x4c5fd8 stores 4 bytes to ret(malloc) +0x28.
  The `lw` at 0x4c5fdc loads 4 bytes from a2 (arg2 at entry) +0x10.
  The `sw` at 0x4c5fe0 stores 4 bytes to ret(malloc) +0x57c.
  The `lw` at 0x4c5fe4 loads 4 bytes from a2 (arg2 at entry) +0x8.
  The `jalr` at 0x4c5fac calls malloc with a0=0x59c, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4c5ff8 calls (unknown callee) with a0=0x0, a1=a0 at entry (arg0), a2=a1 at entry (arg1), a3=ret(malloc), a4=a3 at entry (arg3).
  The `jalr` at 0x4c6008 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `bne` branch at 0x4c5fb4 targets 0x4c5fd0, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The return at 0x4c5fc8 has v0 = 0x0.
  The return at 0x4c601c has v0 = ret(?).

- `driSerGLDestroyBuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c6040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4c6040-0x4c60e4 (164 bytes).
  It occupies 164 bytes.
  The `lw` at 0x4c6070 loads 4 bytes from ret(__glXFindDRIScreen) +0xc.
  The `lw` at 0x4c6078 loads 4 bytes from ret(__glXFindDRIScreen) +0x10.
  The `lw` at 0x4c60b8 loads 4 bytes from [ret(__glXFindDRIScreen)+16] +0xb0.
  The `lw` at 0x4c60c0 loads 4 bytes from ret(?) +0x0.
  The `lw` at 0x4c60cc loads 4 bytes from ret(?) +0xc.
  The `jalr` at 0x4c6068 calls __glXFindDRIScreen with a0=0x0, a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4c6080 calls (unknown callee) with a0=0x0, a1=a1 at entry (arg1), a2=[ret(__glXFindDRIScreen)+16], a3=?.
  The `bgezall` at 0x4c60b4 calls __driGLRemoveDrawable [0x4c4040] with a0=[[ret(__glXFindDRIScreen)+16]+176], a1=ret(?), a2=?, a3=?.
  The `jalr` at 0x4c60c8 calls (unknown callee) with a0=0x0, a1=[ret(?)+12], a2=?, a3=?.
  The `jalr` at 0x4c60d4 calls free with a0=ret(?), a1=?, a2=?, a3=?.
  The `bne` branch at 0x4c608c targets 0x4c60a4, is taken when v0(=ret(?)) != 0, and falls through when v0(=ret(?)) == 0.
  The `beq` branch at 0x4c60dc targets 0x4c6098 and is always taken.
  The return at 0x4c609c has v0 = one of ret(?), ret(free).

- `driSerGLBindContext` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c6100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4c6100-0x4c621c (284 bytes).
  It occupies 284 bytes.
  The `lw` at 0x4c6154 loads 4 bytes from a3 (arg3 at entry) +0x14.
  The `sw` at 0x4c6160 stores 4 bytes to ret(malloc) +0x28.
  The `lw` at 0x4c616c loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `sw` at 0x4c6174 stores 4 bytes to ret(malloc) +0x56c.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4c6188, `lw` at 0x4c619c, `lw` at 0x4c61b0.
  3 such `sw` accesses store 4 bytes to ?, including `sw` at 0x4c618c, `sw` at 0x4c61a0, `sw` at 0x4c61b4.
  The `lw` at 0x4c61b8 loads 4 bytes from a3 (arg3 at entry) +0x4.
  The `jalr` at 0x4c6134 calls malloc with a0=0x59c, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4c61cc calls (unknown callee) with a0=0x0, a1=a0 at entry (arg0), a2=a1 at entry (arg1), a3=a2 at entry (arg2), a4=ret(malloc).
  The `jalr` at 0x4c61dc calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0x4c613c targets 0x4c6200, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `bgtz` branch at 0x4c61a4 targets 0x4c6180, is taken when a6(?) > 0 (signed), and falls through when a6(?) <= 0 (signed).
  The return at 0x4c61f8 has v0 = ret(?).
  The return at 0x4c6214 has v0 = 0x0.

- `driSerGLDestroyContext` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c6240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4c6240-0x4c6298 (88 bytes).
  It occupies 88 bytes.
  The `lw` at 0x4c6254 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x4c6258 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `jalr` at 0x4c6270 calls (unknown callee) with a0=0x0, a1=a0 at entry (arg0), a2=[a1+16], a3=a3 at entry (arg3).
  The `jalr` at 0x4c627c calls free with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The return at 0x4c6290 has v0 = ret(free).

- `driSerGLCreateContext` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c62c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4c62c0-0x4c63e8 (296 bytes).
  It occupies 296 bytes.
  The `sw` at 0x4c634c stores 4 bytes to ret(malloc) +0x8.
  The `lw` at 0x4c6350 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `sw` at 0x4c6354 stores 4 bytes to ret(malloc) +0x4.
  The `sw` at 0x4c635c stores 4 bytes to ret(malloc) +0x14.
  The `lw` at 0x4c6360 loads 4 bytes from a2 (arg2 at entry) +0x10.
  The `lw` at 0x4c6368 loads 4 bytes from ret(__glXFindDRIScreen) +0x4.
  The `sw` at 0x4c6380 stores 4 bytes to ret(malloc) +0x10.
  The `lw` at 0x4c638c loads 4 bytes from ret(malloc) +0x10.
  The `jalr` at 0x4c62ec calls __glXFindDRIScreen with a0=0x0, a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4c6300 calls malloc with a0=0x30, a1=?, a2=?, a3=?.
  The `jalr` at 0x4c632c calls malloc with a0=0x28, a1=?, a2=?, a3=?.
  The `jalr` at 0x4c6374 calls (unknown callee) with a0=0x0, a1=ret(malloc), a2=?, a3=ret(malloc).
  The `jalr` at 0x4c6384 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x4c63b0 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x4c63d4 calls free with a0=ret(malloc), a1=?, a2=0x0, a3=a2 at entry (arg2).
  The `bne` branch at 0x4c6308 targets 0x4c6328, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x4c6338 targets 0x4c63d0, is taken when v0(=ret(malloc)) == 0, and falls through when v0(=ret(malloc)) != 0.
  The `beq` branch at 0x4c6358 targets 0x4c6364, is taken when a3(=a2) == 0, and falls through when a3(=a2) != 0.
  The `beq` branch at 0x4c6390 targets 0x4c63ac, is taken when ra(=[ret(malloc)+16]) == 0, and falls through when ra(=[ret(malloc)+16]) != 0.
  The `beq` branch at 0x4c63e0 targets 0x4c6318 and is always taken.
  The return at 0x4c6320 has v0 = 0x0.
  The return at 0x4c63a4 has v0 = ret(malloc).
  The return at 0x4c63c8 has v0 = 0x0.

- `driSerGLDestroyScreen` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c6400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4c6400-0x4c645c (92 bytes).
  It occupies 92 bytes.
  The `lw` at 0x4c6430 loads 4 bytes from ret(__glXFindDRIScreen) +0x0.
  The `lw` at 0x4c6438 loads 4 bytes from ret(__glXFindDRIScreen) +0x10.
  The `jalr` at 0x4c6428 calls __glXFindDRIScreen with a0=0x0, a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4c6440 calls (unknown callee) with a0=0x0, a1=a0 at entry (arg0), a2=[ret(__glXFindDRIScreen)+16], a3=?.
  The return at 0x4c6454 has v0 = ret(?).

- `driSerGLForceCurrent` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c6480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4c6480-0x4c6528 (168 bytes).
  It occupies 168 bytes.
  The `lw` at 0x4c64bc loads 4 bytes from ret(__glXFindDRIScreen) +0x10.
  The `lw` at 0x4c64cc loads 4 bytes from [ret(__glXFindDRIScreen)+16] +0xb0.
  The `lw` at 0x4c6504 loads 4 bytes from a2 (arg2 at entry) +0x10.
  The `lw` at 0x4c650c loads 4 bytes from ret(__driGLFindDrawable) +0xc.
  The `jalr` at 0x4c64b0 calls __glXFindDRIScreen with a0=0x0, a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x4c64c8 calls __driGLFindDrawable [0x4c4000] with a0=[[ret(__glXFindDRIScreen)+16]+176], a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x4c6508 calls SerXMesaForceCurrent with a0=[a2+16], a1=[ret(__driGLFindDrawable)+12], a2=?, a3=?.
  The `beq` branch at 0x4c64d4 targets 0x4c64e0, is taken when s0(=a2) == 0, and falls through when s0(=a2) != 0.
  The `bne` branch at 0x4c64dc targets 0x4c6500, is taken when v0(=ret(__driGLFindDrawable)) != 0, and falls through when v0(=ret(__driGLFindDrawable)) == 0.
  The return at 0x4c64f0 has v0 = 0x1.
  The return at 0x4c6520 has v0 = ret(SerXMesaForceCurrent).
  The instructions from 0x4c64f8 to 0x4c64fc are not reached by any path from the entry, and their branches are not listed.

- `driSerGLCopyContext` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c6540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4c6540-0x4c66c0 (384 bytes).
  It occupies 384 bytes.
  The `lw` at 0x4c65bc loads 4 bytes from a1 (arg1 at entry) +0x0.
  2 such `sw` accesses store 4 bytes to ret(malloc) +0x56c, including `sw` at 0x4c65c4, `sw` at 0x4c6634.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4c65dc, `lw` at 0x4c65f0, `lw` at 0x4c6608.
  6 such `sw` accesses store 4 bytes to ?, including `sw` at 0x4c65e0, `sw` at 0x4c65f4, `sw` at 0x4c660c.
  The `lw` at 0x4c6620 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lw` at 0x4c6678 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `jalr` at 0x4c6574 calls malloc with a0=0x59c, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4c6588 calls malloc with a0=0x59c, a1=?, a2=?, a3=?.
  The `jalr` at 0x4c6684 calls (unknown callee) with a0=ret(malloc), a1=ret(malloc), a2=a3 at entry (arg3), a3=?.
  The `jalr` at 0x4c6694 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x4c66a4 calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `bgtz` branch at 0x4c65f8 targets 0x4c65d4, is taken when a6(?) > 0 (signed), and falls through when a6(?) <= 0 (signed).
  The `bgtz` branch at 0x4c6664 targets 0x4c6640, is taken when a6(?) > 0 (signed), and falls through when a6(?) <= 0 (signed).
  The return at 0x4c66b8 has v0 = ret(free).

- `__driServerCreateScreen` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c66c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4c66c0-0x4c67ec (300 bytes).
  It occupies 300 bytes.
  The `sw` at 0x4c673c stores 4 bytes to ret(malloc) +0x10.
  The `sw` at 0x4c674c stores 4 bytes to a3 (arg3 at entry) +0x24.
  The `sw` at 0x4c677c stores 4 bytes to a3 (arg3 at entry) +0x20.
  The `sw` at 0x4c6784 stores 4 bytes to a3 (arg3 at entry) +0x1c.
  The `sw` at 0x4c678c stores 4 bytes to a3 (arg3 at entry) +0x14.
  The `sw` at 0x4c6794 stores 4 bytes to a3 (arg3 at entry) +0x18.
  The `sw` at 0x4c679c stores 4 bytes to a3 (arg3 at entry) +0xc.
  The `sw` at 0x4c67a4 stores 4 bytes to a3 (arg3 at entry) +0x10.
  The `sw` at 0x4c67ac stores 4 bytes to a3 (arg3 at entry) +0x8.
  The `sw` at 0x4c67b4 stores 4 bytes to a3 (arg3 at entry) +0x4.
  The `jalr` at 0x4c66f0 calls malloc with a0=0x14, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x4c6730 calls driGLCreateScreen [0x4c5680] with a0=0x0, a1=a0 at entry (arg0), a2=ret(malloc), a3=a1 at entry (arg1), a4=a2 at entry (arg2).
  The `jalr` at 0x4c67cc calls free with a0=ret(malloc), a1=?, a2=?, a3=?.
  The `bne` branch at 0x4c66fc targets 0x4c6718, is taken when v0(=ret(malloc)) != 0, and falls through when v0(=ret(malloc)) == 0.
  The `beq` branch at 0x4c6738 targets 0x4c67c8, is taken when v0(=ret(driGLCreateScreen)) == 0, and falls through when v0(=ret(driGLCreateScreen)) != 0.
  The return at 0x4c6710 has v0 = 0x0.
  The return at 0x4c67c0 has v0 = ret(malloc).
  The return at 0x4c67e4 has v0 = 0x0.

- `Ser_gl_destroy_visual` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c6800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4c6800-0x4c6834 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x4c681c calls free with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x4c682c has v0 = ret(free).

- `Update` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c89c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4c89c0-0x4c8aec (300 bytes).
  It occupies 300 bytes.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x18, including `lw` at 0x4c89c4, `lw` at 0x4c8a70.
  The `lw` at 0x4c89d8 loads 4 bytes from a1 (arg1 at entry) +0x2c.
  The `lw` at 0x4c8a34 loads 4 bytes from a6 (arg6 at entry) +0x260.
  The `sw` at 0x4c8a68 stores 4 bytes to a1 (arg1 at entry) +0x2c.
  The `sw` at 0x4c8a74 stores 4 bytes to a1 (arg1 at entry) +0x14.
  The `sw` at 0x4c8a78 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x4c8a80 stores 4 bytes to a1 (arg1 at entry) +0x4.
  The `sw` at 0x4c8a84 stores 4 bytes to a1 (arg1 at entry) +0x20.
  The `sw` at 0x4c8a8c stores 4 bytes to a1 (arg1 at entry) +0x78.
  The `sw` at 0x4c8a98 stores 4 bytes to a1 (arg1 at entry) +0xd4.
  The `sw` at 0x4c8aa0 stores 4 bytes to a1 (arg1 at entry) +0xc.
  The `sw` at 0x4c8aa4 stores 4 bytes to a1 (arg1 at entry) +0x10.
  The `sw` at 0x4c8aac stores 4 bytes to a1 (arg1 at entry) +0x28.
  The `lw` at 0x4c8ad0 loads 4 bytes from a6 (arg6 at entry) +0x258.
  The `jalr` at 0x4c8a38 calls (unknown callee) with a0=[a1+44], a1=?, a2=?, a3=?.
  The `jalr` at 0x4c8ad4 calls (unknown callee) with a0=?, a1=0x6ccdd8, a2=?, a3=?.
  The `beq` branch at 0x4c8a2c targets 0x4c8ad0, is taken when a0(=[a1+44]) == 0, and falls through when a0(=[a1+44]) != 0.
  The `bne` branch at 0x4c8a40 targets 0x4c8a50, is taken when v0(=ret(?)) != 0, and falls through when v0(=ret(?)) == 0.
  The `beq` branch at 0x4c8a48 targets 0x4c8ac0 and is always taken.
  The `bne` branch at 0x4c8adc targets 0x4c8a50, is taken when v0(=ret(?)) != 0, and falls through when v0(=ret(?)) == 0.
  The `beq` branch at 0x4c8ae4 targets 0x4c8ac0 and is always taken.
  The return at 0x4c8ab0 has v0 = ?.
  The return at 0x4c8ac8 has v0 = 0x0.
  The instructions from 0x4c8ab8 to 0x4c8abc are not reached by any path from the entry, and their branches are not listed.

- `_glapi_check_multithread` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cc940 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4cc940-0x4cc948 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4cc940 has v0 = ?.

- `_glapi_set_context` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cc980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4cc980-0x4cc988 (8 bytes).
  It occupies 8 bytes.
  The `sw` at 0x4cc984 stores 4 bytes to abs 0x1010.
  The return at 0x4cc980 has v0 = ?.

- `_glapi_get_context` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cc9c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4cc9c0-0x4cc9c8 (8 bytes).
  It occupies 8 bytes.
  The `lw` at 0x4cc9c4 loads 4 bytes from abs 0x1010.
  The return at 0x4cc9c0 has v0 = [0x1010].

- `_glapi_set_dispatch` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cca00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4cca00-0x4ccb70 (368 bytes).
  It occupies 368 bytes.
  The `lw` at 0x4cca34 loads 4 bytes from abs 0xb95bf8.
  9 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4cca58, `lw` at 0x4ccad0, `lw` at 0x4ccae0.
  9 such `sw` accesses store 4 bytes to ?, including `sw` at 0x4cca64, `sw` at 0x4ccad4, `sw` at 0x4ccae4.
  The `beq` branch at 0x4cca24 targets 0x4cca34, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x4cca2c targets 0x4cca40 and is always taken.
  The `bne` branch at 0x4cca60 targets 0x4cca48, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bgtz` branch at 0x4ccb4c targets 0x4ccac8, is taken when ra(?) > 0 (signed), and falls through when ra(?) <= 0 (signed).
  The return at 0x4ccb68 has v0 = ?.

- `_glapi_get_dispatch_table_size` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4ccb80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4ccb80-0x4ccb88 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4ccb80 has v0 = 0x2fc.

- `_glapi_add_entrypoint` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4ccbc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4ccbc0-0x4ccbc8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4ccbc0 has v0 = 0x0.

- `PageOneInit` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cdcc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4cdcc0-0x4cdd88 (200 bytes).
  It occupies 200 bytes.
  The `jalr` at 0x4cdcd8 calls open with a0=0xb6cd08, a1=0x2, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4cdcf0 calls xf86getpagesize with a0=?, a1=-0x1, a2=?, a3=?.
  The `jalr` at 0x4cdd1c calls mmap with a0=?, a1=0x1000, a2=0x3, a3=0x92, a4=ret(open), a5=0x0.
  Calls close via got with a0=ret(open), a1=?, a2=?, a3=? (`jr` at 0x4cdd40).
  The `jalr` at 0x4cdd5c calls fprintf with a0=sym(__iob)+32, a1=0xb6cd18, a2=ret(mmap), a3=?.
  The `jalr` at 0x4cdd74 calls perror with a0=0xb6cd08, a1=-0x1, a2=?, a3=?.
  The `jalr` at 0x4cdd80 calls exit with a0=0x1, a1=?, a2=?, a3=?.
  The `beq` branch at 0x4cdce4 targets 0x4cdd6c, is taken when v0(=ret(open)) == a1(=-0x1), and falls through when v0(=ret(open)) != a1(=-0x1).
  The `bne` branch at 0x4cdd28 targets 0x4cdd48, is taken when a1(?) != v0(=ret(mmap)), and falls through when a1(?) == v0(=ret(mmap)).
  The `beq` branch at 0x4cdd64 targets 0x4cdd30 and is always taken.

- `SerXMesaInitDriver` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4ce300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4ce300-0x4ce3ec (236 bytes).
  It occupies 236 bytes.
  The `lw` at 0x4ce348 loads 4 bytes from a0 (arg0 at entry) +0xb4.
  The `sw` at 0x4ce374 stores 4 bytes to [a0+180] +0x1c.
  The `sw` at 0x4ce37c stores 4 bytes to [a0+180] +0x18.
  The `sw` at 0x4ce384 stores 4 bytes to [a0+180] +0x14.
  The `sw` at 0x4ce38c stores 4 bytes to [a0+180] +0x10.
  The `sw` at 0x4ce394 stores 4 bytes to [a0+180] +0xc.
  The `sw` at 0x4ce39c stores 4 bytes to [a0+180] +0x20.
  The `sw` at 0x4ce3a4 stores 4 bytes to [a0+180] +0x8.
  The `sw` at 0x4ce3b0 stores 4 bytes to [a0+180] +0x4.
  The `sw` at 0x4ce3bc stores 4 bytes to [a0+180] +0x0.
  The `sw` at 0x4ce3c4 stores 4 bytes to [a0+180] +0x118.
  The `bgezall` at 0x4ce324 calls ACQUIRE_PROCESS_SPINLOCK [0x4ccc00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x4ce334 calls __fglInitDriver [0x4cddc0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x4ce3b8 calls drmHashCreate with a0=0x4cd900, a1=0x4cd840, a2=0x4cd940, a3=0x4cda00, a4=0x4cdac0, a5=0x4cdb80, a6=0x4cdc40.
  The `bgezall` at 0x4ce3d0 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x4ce33c targets 0x4ce3c8, is taken when v0(=ret(__fglInitDriver)) == 0, and falls through when v0(=ret(__fglInitDriver)) != 0.
  The return at 0x4ce3e4 has v0 = [0xb97060]:1.

- `SerXMesaResetDriver` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4ce400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4ce400-0x4ce62c (556 bytes).
  It occupies 556 bytes.
  The `lw` at 0x4ce420 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0x4ce440 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x4ce444 loads 4 bytes from a0 (arg0 at entry) +0xb4.
  The `lw` at 0x4ce448 loads 4 bytes from a0 (arg0 at entry) +0x60.
  The `lw` at 0x4ce450 loads 4 bytes from [a0+180] +0xf0.
  3 such `lw` accesses load 4 bytes from [a0+180] +0x118, including `lw` at 0x4ce45c, `lw` at 0x4ce4c4, `lw` at 0x4ce4e0.
  The `lw` at 0x4ce500 loads 4 bytes from [a0+180] +0xe4.
  2 such `lw` accesses load 4 bytes from [a0+180] +0x78, including `lw` at 0x4ce504, `lw` at 0x4ce5d0.
  The `lw` at 0x4ce50c loads 4 bytes from [a0+136] +0x308.
  The `lw` at 0x4ce514 loads 4 bytes from [[a0+180]+120] +0x4.
  The `lw` at 0x4ce51c loads 4 bytes from [a0+136] +0x28.
  The `lw` at 0x4ce528 loads 4 bytes from [a0+180] +0xc4.
  The `lw` at 0x4ce538 loads 4 bytes from [a0+136] +0x1d0.
  The `lw` at 0x4ce53c loads 4 bytes from [a0+180] +0xc8.
  The `lw` at 0x4ce54c loads 4 bytes from [a0+136] +0xe0.
  The `lw` at 0x4ce550 loads 4 bytes from [a0+180] +0xcc.
  The `lw` at 0x4ce560 loads 4 bytes from [a0+136] +0x200.
  The `lw` at 0x4ce564 loads 4 bytes from [a0+180] +0xd0.
  The `lw` at 0x4ce574 loads 4 bytes from [a0+136] +0x110.
  The `lw` at 0x4ce578 loads 4 bytes from [a0+180] +0xd4.
  The `lw` at 0x4ce588 loads 4 bytes from [a0+136] +0x170.
  The `lw` at 0x4ce58c loads 4 bytes from [a0+180] +0xd8.
  The `lw` at 0x4ce59c loads 4 bytes from [a0+136] +0x1a0.
  The `lw` at 0x4ce5a0 loads 4 bytes from [a0+180] +0xdc.
  The `lw` at 0x4ce5b0 loads 4 bytes from [a0+136] +0x268.
  The `lw` at 0x4ce5b4 loads 4 bytes from [a0+180] +0xe0.
  The `lw` at 0x4ce5c4 loads 4 bytes from [a0+136] +0x298.
  The `lw` at 0x4ce5d4 loads 4 bytes from [a0+180] +0x128.
  The `sw` at 0x4ce614 stores 4 bytes to a0 (arg0 at entry) +0xb4.
  The `bgezall` at 0x4ce434 calls ACQUIRE_PROCESS_SPINLOCK [0x4ccc00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4ce44c calls firegl_FreeMutex with a0=[a0+96], a1=[[a0+180]+240], a2=?, a3=?.
  The `jalr` at 0x4ce460 calls drmHashFirst with a0=[[a0+180]+280], a1=sp-80, a2=sp-76, a3=?.
  The `bgezall` at 0x4ce494 calls __fglMesaPbufferExists [0x4cd340] with a0=[a0], a1=?, a2=?, a3=?.
  The `bgezall` at 0x4ce4a8 calls __fglFreePbuffer [0x4cd380] with a0=[a0+180], a1=?, a2=?, a3=?.
  The `jalr` at 0x4ce4b4 calls free with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4ce4c8 calls drmHashNext with a0=[[a0+180]+280], a1=sp-80, a2=sp-76, a3=?.
  The `jalr` at 0x4ce4dc calls drmHashDestroy with a0=[[a0+180]+280], a1=?, a2=?, a3=?.
  The `jalr` at 0x4ce4e8 calls fglX11FreeGlobals with a0=[a0+180], a1=?, a2=?, a3=?.
  The `jalr` at 0x4ce4f4 calls fglX11TermQSConnection with a0=[a0+180], a1=?, a2=?, a3=?.
  The `jalr` at 0x4ce510 calls drmUnmap with a0=[[a0+180]+228], a1=[[a0+136]+776], a2=?, a3=?.
  The `jalr` at 0x4ce520 calls drmUnmap with a0=[[[a0+180]+120]+4], a1=[[a0+136]+40], a2=?, a3=?.
  The `jalr` at 0x4ce534 calls drmUnmap with a0=[[a0+180]+196], a1=[[a0+136]+464], a2=?, a3=?.
  The `jalr` at 0x4ce548 calls drmUnmap with a0=[[a0+180]+200], a1=[[a0+136]+224], a2=?, a3=?.
  The `jalr` at 0x4ce55c calls drmUnmap with a0=[[a0+180]+204], a1=[[a0+136]+512], a2=?, a3=?.
  The `jalr` at 0x4ce570 calls drmUnmap with a0=[[a0+180]+208], a1=[[a0+136]+272], a2=?, a3=?.
  The `jalr` at 0x4ce584 calls drmUnmap with a0=[[a0+180]+212], a1=[[a0+136]+368], a2=?, a3=?.
  The `jalr` at 0x4ce598 calls drmUnmap with a0=[[a0+180]+216], a1=[[a0+136]+416], a2=?, a3=?.
  The `jalr` at 0x4ce5ac calls drmUnmap with a0=[[a0+180]+220], a1=[[a0+136]+616], a2=?, a3=?.
  The `jalr` at 0x4ce5c0 calls drmUnmap with a0=[[a0+180]+224], a1=[[a0+136]+664], a2=?, a3=?.
  The `jalr` at 0x4ce5cc calls firegl_TermDRM with a0=[[a0+180]+120], a1=?, a2=?, a3=?.
  The `jalr` at 0x4ce5e0 calls free with a0=[[a0+180]+296], a1=?, a2=?, a3=?.
  The `jalr` at 0x4ce5fc calls free with a0=[a0+180], a1=?, a2=?, a3=?.
  The `bgezall` at 0x4ce610 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x4ce474 targets 0x4ce4d8, is taken when v0(=ret(drmHashFirst)) == 0, and falls through when v0(=ret(drmHashFirst)) != 0.
  The `beq` branch at 0x4ce49c targets 0x4ce4b0, is taken when v0(=ret(__fglMesaPbufferExists)) == 0, and falls through when v0(=ret(__fglMesaPbufferExists)) != 0.
  The `bne` branch at 0x4ce4d0 targets 0x4ce480, is taken when v0(=ret(drmHashNext)) != 0, and falls through when v0(=ret(drmHashNext)) == 0.
  The `beq` branch at 0x4ce52c targets 0x4ce53c, is taken when a0(=[[a0+180]+196]) == 0, and falls through when a0(=[[a0+180]+196]) != 0.
  The `beq` branch at 0x4ce540 targets 0x4ce550, is taken when a0(=[[a0+180]+200]) == 0, and falls through when a0(=[[a0+180]+200]) != 0.
  The `beq` branch at 0x4ce554 targets 0x4ce564, is taken when a0(=[[a0+180]+204]) == 0, and falls through when a0(=[[a0+180]+204]) != 0.
  The `beq` branch at 0x4ce568 targets 0x4ce578, is taken when a0(=[[a0+180]+208]) == 0, and falls through when a0(=[[a0+180]+208]) != 0.
  The `beq` branch at 0x4ce57c targets 0x4ce58c, is taken when a0(=[[a0+180]+212]) == 0, and falls through when a0(=[[a0+180]+212]) != 0.
  The `beq` branch at 0x4ce590 targets 0x4ce5a0, is taken when a0(=[[a0+180]+216]) == 0, and falls through when a0(=[[a0+180]+216]) != 0.
  The `beq` branch at 0x4ce5a4 targets 0x4ce5b4, is taken when a0(=[[a0+180]+220]) == 0, and falls through when a0(=[[a0+180]+220]) != 0.
  The `beq` branch at 0x4ce5b8 targets 0x4ce5c8, is taken when a0(=[[a0+180]+224]) == 0, and falls through when a0(=[[a0+180]+224]) != 0.
  The `beq` branch at 0x4ce5d8 targets 0x4ce5e8, is taken when a0(=[[a0+180]+296]) == 0, and falls through when a0(=[[a0+180]+296]) != 0.
  The return at 0x4ce624 has v0 = ret(RELEASE_PROCESS_SPINLOCK).

- `SerXMesaCreateVisual` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4ce840 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4ce840-0x4ce920 (224 bytes).
  It occupies 224 bytes.
  The `bgezall` at 0x4ce860 calls ACQUIRE_PROCESS_SPINLOCK [0x4ccc00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4ce874 calls calloc with a0=0x1, a1=0x3c, a2=?, a3=?.
  The `bgezall` at 0x4ce890 calls initialize_visual [0x4ce640] with a0=ret(calloc), a1=a3 at entry (arg3), a2=?, a3=?.
  The `bgezall` at 0x4ce8a4 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4ce8cc calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4ce8f0 calls free with a0=ret(calloc), a1=?, a2=?, a3=?.
  The `bgezall` at 0x4ce900 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x4ce87c targets 0x4ce8c4, is taken when v0(=ret(calloc)) == 0, and falls through when v0(=ret(calloc)) != 0.
  The `beq` branch at 0x4ce898 targets 0x4ce8ec, is taken when v0(=ret(initialize_visual)) == 0, and falls through when v0(=ret(initialize_visual)) != 0.
  The return at 0x4ce8bc has v0 = ret(calloc).
  The return at 0x4ce8e4 has v0 = 0x0.
  The return at 0x4ce918 has v0 = 0x0.

- `SerXMesaCreateContext` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4ceac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4ceac0-0x4cec38 (376 bytes).
  It occupies 376 bytes.
  The `lw` at 0x4ceae4 loads 4 bytes from a2 (arg2 at entry) +0x1c.
  The `lw` at 0x4ceaf0 loads 4 bytes from [a2+28] +0xb4.
  The `lw` at 0x4ceb04 loads 4 bytes from a2 (arg2 at entry) +0x8.
  The `lw` at 0x4ceb18 loads 4 bytes from [a2+8] +0x0.
  The `sw` at 0x4ceb28 stores 4 bytes to ret(calloc) +0x4.
  The `lw` at 0x4ceb54 loads 4 bytes from [[a2+8]] +0x8.
  The `lw` at 0x4ceb58 loads 4 bytes from [[[a2+8]]+8] +0x74.
  The `lw` at 0x4ceb60 loads 4 bytes from ret(calloc) +0x8.
  The `lw` at 0x4ceb70 loads 4 bytes from [[a2+28]+180] +0x11c.
  The `sw` at 0x4ceb74 stores 4 bytes to ret(calloc) +0x84.
  The `sw` at 0x4ceb7c stores 4 bytes to [[a2+28]+180] +0x11c.
  The `sw` at 0x4ceb84 stores 4 bytes to a2 (arg2 at entry) +0xc.
  The `bgezall` at 0x4ceaf8 calls ACQUIRE_PROCESS_SPINLOCK [0x4ccc00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4ceb14 calls calloc with a0=0x1, a1=0x8c, a2=?, a3=?.
  The `jalr` at 0x4ceb30 calls fglX11FormatGLModes with a0=ret(calloc)+12, a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x4ceb3c calls fglX11CreateHWContext with a0=ret(calloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x4ceb5c calls (unknown callee) with a0=[ret(calloc)+8], a1=[[[a2+8]]+8], a2=?, a3=?.
  The `bgezall` at 0x4ceb80 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4cebb4 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4cebdc calls fglX11DestroyHWContext with a0=ret(calloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x4cebe8 calls free with a0=ret(calloc), a1=?, a2=?, a3=?.
  The `bgezall` at 0x4cebf8 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4cec18 calls free with a0=ret(calloc), a1=?, a2=?, a3=?.
  The `bgezall` at 0x4cec28 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x4ceb1c targets 0x4ceba8, is taken when v0(=ret(calloc)) == 0, and falls through when v0(=ret(calloc)) != 0.
  The `beq` branch at 0x4ceb44 targets 0x4cec18, is taken when v0(=ret(fglX11CreateHWContext)) == 0, and falls through when v0(=ret(fglX11CreateHWContext)) != 0.
  The `beq` branch at 0x4ceb4c targets 0x4ceb6c, is taken when s2(=[[a2+8]]) == 0, and falls through when s2(=[[a2+8]]) != 0.
  The `beq` branch at 0x4ceb64 targets 0x4cebd4, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `beq` branch at 0x4cec30 targets 0x4ceb90 and is always taken.
  The return at 0x4ceba0 has v0 = one of 0x0, 0x1.
  The return at 0x4cebcc has v0 = 0x0.
  The return at 0x4cec10 has v0 = 0x0.

- `SerXMesaDestroyContext` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cec40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4cec40-0x4ced9c (348 bytes).
  It occupies 348 bytes.
  The `lw` at 0x4cec60 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x4cec64 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `lw` at 0x4cec70 loads 4 bytes from [a0+28] +0xb4.
  The `lw` at 0x4cec84 loads 4 bytes from sym(fgl_glapi) +0xc.
  The `lbu` at 0x4cec90 loads 1 byte from [a0+12] +0x88.
  The `lw` at 0x4cec9c loads 4 bytes from [a0+12] +0x8.
  The `lw` at 0x4cecb0 loads 4 bytes from [[a0+12]+8] +0x64.
  The `lw` at 0x4cecc4 loads 4 bytes from [[a0+28]+180] +0x11c.
  The `lw` at 0x4cecdc loads 4 bytes from ?.
  The `lw` at 0x4cecf4 loads 4 bytes from [a0+12] +0x84.
  The `sw` at 0x4cecf8 stores 4 bytes to ?.
  The `sw` at 0x4ced1c stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `sw` at 0x4ced48 stores 4 bytes to [[a0+28]+180] +0x11c.
  The `sb` at 0x4ced5c stores 1 byte to [[a0+12]+8] +0x6064.
  The `lw` at 0x4ced74 loads 4 bytes from sym(fgl_glapi) +0x8.
  The `bgezall` at 0x4cec74 calls ACQUIRE_PROCESS_SPINLOCK [0x4ccc00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4cec88 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4ced04 calls fglX11DestroyHWContext with a0=[a0+12], a1=?, a2=?, a3=?.
  The `jalr` at 0x4ced10 calls free with a0=[a0+12], a1=?, a2=?, a3=?.
  The `bgezall` at 0x4ced28 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4ced58 calls unbind_context with a0=[[a0+12]+8], a1=?, a2=?, a3=[[a0+12]+8], a4=0xb90000.
  The `jalr` at 0x4ced80 calls (unknown callee) with a0=0xb97090, a1=?, a2=?, a3=?.
  The `jalr` at 0x4ced8c calls fglX11UpdateDispatcher with a0=0x0, a1=?, a2=?, a3=?.
  The `beq` branch at 0x4cec7c targets 0x4ced20, is taken when s0(=[a0+12]) == 0, and falls through when s0(=[a0+12]) != 0.
  The `beq` branch at 0x4cec94 targets 0x4cecc0, is taken when ra(=[[a0+12]+136]:1) == 0, and falls through when ra(=[[a0+12]+136]:1) != 0.
  The `beq` branch at 0x4ceca0 targets 0x4cecc0, is taken when a3(=[[a0+12]+8]) == 0, and falls through when a3(=[[a0+12]+8]) != 0.
  The `beq` branch at 0x4ceca8 targets 0x4cecc0, is taken when a3(=[[a0+12]+8]) == at(=0xb97090), and falls through when a3(=[[a0+12]+8]) != at(=0xb97090).
  The `beq` branch at 0x4cecb8 targets 0x4ced4c, is taken when v1(=[[[a0+12]+8]+100]) == s0(=[a0+12]), and falls through when v1(=[[[a0+12]+8]+100]) != s0(=[a0+12]).
  The `beq` branch at 0x4cecc8 targets 0x4ced00, is taken when v0(=[[[a0+28]+180]+284]) == 0, and falls through when v0(=[[[a0+28]+180]+284]) != 0.
  The `beq` branch at 0x4cecd0 targets 0x4cecf0, is taken when s0(=[a0+12]) == v0(?), and falls through when s0(=[a0+12]) != v0(?).
  The `bne` branch at 0x4cece0 targets 0x4cecd0, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x4cece8 targets 0x4ced04 and is always taken.
  The `beq` branch at 0x4cecf0 targets 0x4ced40, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x4ced44 targets 0x4ced00 and is always taken.
  The `bne` branch at 0x4ced68 targets 0x4cecc4, is taken when v1(=ret(?)) != a0(=[[a0+12]+8]), and falls through when v1(=ret(?)) == a0(=[[a0+12]+8]).
  The `beq` branch at 0x4ced94 targets 0x4cecc4 and is always taken.
  The return at 0x4ced38 has v0 = ret(RELEASE_PROCESS_SPINLOCK).

- `SerXMesaCopyContext` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cedc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4cedc0-0x4cee00 (64 bytes).
  It occupies 64 bytes.
  The `lw` at 0x4cedc4 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x4cedc8 loads 4 bytes from [a0+12] +0x8.
  The `lw` at 0x4ceddc loads 4 bytes from [[a0+12]+8] +0x78.
  The `lw` at 0x4cede0 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x4cedec loads 4 bytes from [a1+12] +0x8.
  The `jalr` at 0x4cede8 calls (unknown callee) with a0=[[a0+12]+8], a1=[[a1+12]+8], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x4cedf8 has v0 = ret(?).

- `SerXMesaCreateWindowBuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cee00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4cee00-0x4cf27c (1148 bytes).
  It occupies 1148 bytes.
  The `lw` at 0x4cee20 loads 4 bytes from a1 (arg1 at entry) +0x88.
  The `lw` at 0x4cee2c loads 4 bytes from a1 (arg1 at entry) +0xb4.
  The `lw` at 0x4cee4c loads 4 bytes from a1 (arg1 at entry) +0x68.
  The `sw` at 0x4cee50 stores 4 bytes to [a1+180] +0xc0.
  The `lbu` at 0x4cee54 loads 1 byte from a3 (arg3 at entry) +0x0.
  4 such `lw` accesses load 4 bytes from [a1+136] +0x5c, including `lw` at 0x4cee60, `lw` at 0x4ceee8, `lw` at 0x4cef08.
  The `lbu` at 0x4cee80 loads 1 byte from [a1+180] +0x120.
  The `lw` at 0x4cee8c loads 4 bytes from [a1+180] +0xc4.
  The `ld` at 0x4cee98 loads 8 bytes from [a1+136] +0x1b0.
  The `lw` at 0x4ceea4 loads 4 bytes from [a1+136] +0x1d0.
  8 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x60, including `lw` at 0x4ceeb0, `lw` at 0x4cef30, `lw` at 0x4cf044.
  The `lw` at 0x4ceef8 loads 4 bytes from [a1+136] +0x2a8.
  The `lw` at 0x4cef18 loads 4 bytes from [a1+180] +0xdc.
  The `ld` at 0x4cef24 loads 8 bytes from [a1+136] +0x248.
  The `lw` at 0x4cef3c loads 4 bytes from [a1+136] +0x268.
  The `lw` at 0x4cf020 loads 4 bytes from [a1+180] +0xe0.
  The `ld` at 0x4cf02c loads 8 bytes from [a1+136] +0x278.
  The `lw` at 0x4cf038 loads 4 bytes from [a1+136] +0x298.
  The `lw` at 0x4cf098 loads 4 bytes from [a1+180] +0xc8.
  The `lw` at 0x4cf0a4 loads 4 bytes from [a1+136] +0xe0.
  The `ld` at 0x4cf0a8 loads 8 bytes from [a1+136] +0xc0.
  The `lw` at 0x4cf0ec loads 4 bytes from [a1+180] +0xd0.
  The `ld` at 0x4cf0fc loads 8 bytes from [a1+136] +0xf0.
  The `lw` at 0x4cf108 loads 4 bytes from [a1+136] +0x110.
  The `lw` at 0x4cf140 loads 4 bytes from [a1+180] +0xcc.
  The `ld` at 0x4cf14c loads 8 bytes from [a1+136] +0x1e0.
  The `lw` at 0x4cf158 loads 4 bytes from [a1+136] +0x200.
  The `lw` at 0x4cf1a8 loads 4 bytes from [a1+180] +0x2c.
  The `lw` at 0x4cf1b8 loads 4 bytes from [a1+180] +0xd4.
  The `lw` at 0x4cf1c4 loads 4 bytes from [a1+180] +0xd8.
  The `lw` at 0x4cf1d4 loads 4 bytes from [a1+136] +0x1a0.
  The `ld` at 0x4cf1d8 loads 8 bytes from [a1+136] +0x180.
  The `lw` at 0x4cf22c loads 4 bytes from [a1+136] +0x170.
  The `ld` at 0x4cf230 loads 8 bytes from [a1+136] +0x150.
  The `bgezall` at 0x4cee44 calls ACQUIRE_PROCESS_SPINLOCK [0x4ccc00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4ceeac calls drmMap with a0=[a1+96], a1=[[a1+136]+432]:8, a2=[[a1+136]+464], a3=[a1+180]+196.
  The `jalr` at 0x4ceec8 calls fprintf with a0=sym(__iob)+32, a1=0xb6d0d8, a2=?, a3=?.
  The `bgezall` at 0x4ceed8 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4cef38 calls drmMap with a0=[a1+96], a1=[[a1+136]+584]:8, a2=[[a1+136]+616], a3=[a1+180]+220.
  The `jalr` at 0x4cef54 calls fprintf with a0=sym(__iob)+32, a1=0xb6d138, a2=?, a3=?.
  The `bgezall` at 0x4cef64 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4cef84 calls fglX11DRMLockScreen with a0=[a1+180], a1=0x0, a2=?, a3=?.
  The `jalr` at 0x4cef9c calls fglX11CreateDrawablePrivate with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4cefac calls fglX11DRMUnlockScreen with a0=[a1+180], a1=?, a2=?, a3=?.
  The `bgezall` at 0x4cefc4 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4ceff4 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4cf040 calls drmMap with a0=[a1+96], a1=[[a1+136]+632]:8, a2=[[a1+136]+664], a3=[a1+180]+224.
  The `jalr` at 0x4cf05c calls fprintf with a0=sym(__iob)+32, a1=0xb6d138, a2=?, a3=?.
  The `bgezall` at 0x4cf06c calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4cf0b0 calls drmMap with a0=[a1+96], a1=[[a1+136]+192]:8, a2=[[a1+136]+224], a3=[a1+180]+200.
  The `jalr` at 0x4cf0cc calls fprintf with a0=sym(__iob)+32, a1=0xb6d088, a2=?, a3=?.
  The `bgezall` at 0x4cf0dc calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4cf104 calls drmMap with a0=[a1+96], a1=[[a1+136]+240]:8, a2=[[a1+136]+272], a3=[a1+180]+208.
  The `jalr` at 0x4cf120 calls fprintf with a0=sym(__iob)+32, a1=0xb6d0b0, a2=?, a3=?.
  The `bgezall` at 0x4cf130 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4cf160 calls drmMap with a0=[a1+96], a1=[[a1+136]+480]:8, a2=[[a1+136]+512], a3=[a1+180]+204.
  The `jalr` at 0x4cf180 calls fprintf with a0=sym(__iob)+32, a1=0xb6d108, a2=?, a3=?.
  The `bgezall` at 0x4cf190 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4cf1a4 calls fglX11GetAsicInfo with a0=[[a1+180]+44], a1=sp-144, a2=?, a3=?.
  The `jalr` at 0x4cf1e0 calls drmMap with a0=[a1+96], a1=[[a1+136]+384]:8, a2=[[a1+136]+416], a3=[a1+180]+216.
  The `jalr` at 0x4cf200 calls fprintf with a0=sym(__iob)+32, a1=0xb6d060, a2=?, a3=?.
  The `bgezall` at 0x4cf210 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4cf238 calls drmMap with a0=[a1+96], a1=[[a1+136]+336]:8, a2=[[a1+136]+368], a3=[a1+180]+212.
  The `jalr` at 0x4cf254 calls fprintf with a0=sym(__iob)+32, a1=0xb6d038, a2=?, a3=?.
  The `bgezall` at 0x4cf264 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x4cee58 targets 0x4cf1a0, is taken when at(=[a3]:1) == 0, and falls through when at(=[a3]:1) != 0.
  The `bne` branch at 0x4cee68 targets 0x4cee80, is taken when (v0(=[[a1+136]+92]) & 0x2) != 0, and falls through when (v0(=[[a1+136]+92]) & 0x2) == 0.
  The `beq` branch at 0x4cee70 targets 0x4cf098 and is always taken.
  The `beq` branch at 0x4cee78 targets 0x4cf0ec, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x4cee84 targets 0x4ceef8, is taken when v1(=[[a1+180]+288]:1) == 0, and falls through when v1(=[[a1+180]+288]:1) != 0.
  The `bne` branch at 0x4cee90 targets 0x4ceee8, is taken when a0(=[[a1+180]+196]) != 0, and falls through when a0(=[[a1+180]+196]) == 0.
  The `beq` branch at 0x4cee9c targets 0x4ceee8, is taken when a1(=[[a1+136]+432]:8) == 0, and falls through when a1(=[[a1+136]+432]:8) != 0.
  The `beq` branch at 0x4ceeb4 targets 0x4ceee8, is taken when v0(=ret(drmMap)) == 0, and falls through when v0(=ret(drmMap)) != 0.
  The `beq` branch at 0x4ceee0 targets 0x4ceffc and is always taken.
  The `beq` branch at 0x4ceef0 targets 0x4cf140, is taken when (ra(=[[a1+136]+92]) & 0x2) == 0, and falls through when (ra(=[[a1+136]+92]) & 0x2) != 0.
  The `bne` branch at 0x4cef00 targets 0x4cef80, is taken when at(=[[a1+136]+680]) < 0x2 (signed), and falls through when at(=[[a1+136]+680]) >= 0x2 (signed).
  The `bne` branch at 0x4cef10 targets 0x4cef80, is taken when (v1(=[[a1+136]+92]) & 0x2) != 0, and falls through when (v1(=[[a1+136]+92]) & 0x2) == 0.
  The `bne` branch at 0x4cef1c targets 0x4cf020, is taken when a0(=[[a1+180]+220]) != 0, and falls through when a0(=[[a1+180]+220]) == 0.
  The `beq` branch at 0x4cef28 targets 0x4cf020, is taken when a1(=[[a1+136]+584]:8) == 0, and falls through when a1(=[[a1+136]+584]:8) != 0.
  The `beq` branch at 0x4cef40 targets 0x4cf020, is taken when v0(=ret(drmMap)) == 0, and falls through when v0(=ret(drmMap)) != 0.
  The `beq` branch at 0x4cef6c targets 0x4ceffc and is always taken.
  The `bne` branch at 0x4cefb4 targets 0x4ceff0, is taken when s1(=ret(fglX11CreateDrawablePrivate)) != 0, and falls through when s1(=ret(fglX11CreateDrawablePrivate)) == 0.
  The `bne` branch at 0x4cf024 targets 0x4cef80, is taken when ra(=[[a1+180]+224]) != 0, and falls through when ra(=[[a1+180]+224]) == 0.
  The `beq` branch at 0x4cf030 targets 0x4cef7c, is taken when a1(=[[a1+136]+632]:8) == 0, and falls through when a1(=[[a1+136]+632]:8) != 0.
  The `beq` branch at 0x4cf048 targets 0x4cef7c, is taken when v0(=ret(drmMap)) == 0, and falls through when v0(=ret(drmMap)) != 0.
  The `bne` branch at 0x4cf09c targets 0x4cee78, is taken when ra(=[[a1+180]+200]) != 0, and falls through when ra(=[[a1+180]+200]) == 0.
  The `beq` branch at 0x4cf0b8 targets 0x4cf220, is taken when v0(=ret(drmMap)) == 0, and falls through when v0(=ret(drmMap)) != 0.
  The `beq` branch at 0x4cf0e4 targets 0x4ceffc and is always taken.
  The `bne` branch at 0x4cf0f0 targets 0x4cee80, is taken when ra(=[[a1+180]+208]) != 0, and falls through when ra(=[[a1+180]+208]) == 0.
  The `beq` branch at 0x4cf10c targets 0x4cee80, is taken when v0(=ret(drmMap)) == 0, and falls through when v0(=ret(drmMap)) != 0.
  The `beq` branch at 0x4cf138 targets 0x4ceffc and is always taken.
  The `bne` branch at 0x4cf144 targets 0x4ceef8, is taken when ra(=[[a1+180]+204]) != 0, and falls through when ra(=[[a1+180]+204]) == 0.
  The `beq` branch at 0x4cf150 targets 0x4ceef8, is taken when a1(=[[a1+136]+480]:8) == 0, and falls through when a1(=[[a1+136]+480]:8) != 0.
  The `beq` branch at 0x4cf168 targets 0x4ceef8, is taken when v0(=ret(drmMap)) == 0, and falls through when v0(=ret(drmMap)) != 0.
  The `beq` branch at 0x4cf198 targets 0x4ceffc and is always taken.
  The `beq` branch at 0x4cf1b0 targets 0x4cf274, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0x4cf1bc targets 0x4cf22c, is taken when at(=[[a1+180]+212]) == 0, and falls through when at(=[[a1+180]+212]) != 0.
  The `bne` branch at 0x4cf1c8 targets 0x4cef80, is taken when v1(=[[a1+180]+216]) != 0, and falls through when v1(=[[a1+180]+216]) == 0.
  The `beq` branch at 0x4cf1e8 targets 0x4cef7c, is taken when v0(=ret(drmMap)) == 0, and falls through when v0(=ret(drmMap)) != 0.
  The `beq` branch at 0x4cf218 targets 0x4ceffc and is always taken.
  The `beq` branch at 0x4cf224 targets 0x4cee78 and is always taken.
  The `beq` branch at 0x4cf240 targets 0x4cf1c4, is taken when v0(=ret(drmMap)) == 0, and falls through when v0(=ret(drmMap)) != 0.
  The `beq` branch at 0x4cf26c targets 0x4ceffc and is always taken.
  The `beq` branch at 0x4cf274 targets 0x4ceffc and is always taken.
  The return at 0x4cefe8 has v0 = 0x0.
  The return at 0x4cf018 has v0 = one of 0x0, ret(fglX11CreateDrawablePrivate).
  The return at 0x4cf090 has v0 = 0x0.
  The instructions from 0x4cef74 to 0x4cef78 are not reached by any path from the entry, and their branches are not listed.

- `SerXMesaCreatePixmapBuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cf280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4cf280-0x4cf2cc (76 bytes).
  It occupies 76 bytes.
  The `bgezall` at 0x4cf2a0 calls ACQUIRE_PROCESS_SPINLOCK [0x4ccc00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x4cf2b0 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The return at 0x4cf2c4 has v0 = 0x0.

- `SerXMesaForceCurrent` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cf300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4cf300-0x4cfea4 (2980 bytes).
  It occupies 2980 bytes.
  The `lw` at 0x4cf308 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x4cf320 loads 4 bytes from abs 0x1010.
  The `lw` at 0x4cf324 loads 4 bytes from [0x1010] +0x64.
  6 such `lw` accesses load 4 bytes from [a0+12] +0x8, including `lw` at 0x4cf348, `lw` at 0x4cf350, `lw` at 0x4cf358.
  2 such `sw` accesses store 4 bytes to abs 0x1010, including `sw` at 0x4cf34c, `sw` at 0x4cf354.
  The `lw` at 0x4cf35c loads 4 bytes from [[a0+12]+8] +0x70.
  2 such `sw` accesses store 4 bytes to [[a0+12]+8] +0xc074, including `sw` at 0x4cf374, `sw` at 0x4cf3d0.
  15 such `sw` accesses store 4 bytes to [[a0+12]+8] +0xc070, including `sw` at 0x4cf37c, `sw` at 0x4cf5c8, `sw` at 0x4cf5e0.
  20 such `sw` accesses store 4 bytes to [[a0+12]+8] +0xc06c, including `sw` at 0x4cf384, `sw` at 0x4cf398, `sw` at 0x4cf3c4.
  32 such `sw` accesses store 4 bytes to [[a0+12]+8] +0x44b74, including `sw` at 0x4cf388, `sw` at 0x4cf850, `sw` at 0x4cf884.
  25 such `sb` accesses store 1 byte to [[a0+12]+8] +0xa8, including `sb` at 0x4cf38c, `sb` at 0x4cf3a4, `sb` at 0x4cf3d8.
  37 such `lw` accesses load 4 bytes from [[a0+12]+8] +0xc06c, including `lw` at 0x4cf390, `lw` at 0x4cf3a8, `lw` at 0x4cf3dc.
  31 such `sw` accesses store 4 bytes to [[a0+12]+8] +0xa4, including `sw` at 0x4cf3a0, `sw` at 0x4cf3d4, `sw` at 0x4cf3f0.
  The `lw` at 0x4cf3b8 loads 4 bytes from [[a0+12]+8] +0xc074.
  26 such `lw` accesses load 4 bytes from [[a0+12]+8] +0xc070, including `lw` at 0x4cf5b8, `lw` at 0x4cf5d0, `lw` at 0x4cf5e8.
  The `sw` at 0x4cf714 stores 4 bytes to [[a0+12]+8] +0xc098.
  The `sw` at 0x4cf71c stores 4 bytes to [[a0+12]+8] +0xc094.
  3 such `lw` accesses load 4 bytes from [[a0+12]+8] +0x7444, including `lw` at 0x4cf720, `lw` at 0x4cf748, `lw` at 0x4cf764.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0x4cf740, `sw` at 0x4cf744, `sw` at 0x4cf75c.
  2 such `lw` accesses load 4 bytes from [[a0+12]+8] +0x7d84, including `lw` at 0x4cf780, `lw` at 0x4cf790.
  The `sw` at 0x4cf78c stores 4 bytes to [[a0+12]+8] +0xc07c.
  The `lw` at 0x4cf794 loads 4 bytes from [[a0+12]+8] +0xc088.
  The `sw` at 0x4cf7a4 stores 4 bytes to [[a0+12]+8] +0xc080.
  The `lw` at 0x4cf7ac loads 4 bytes from [[a0+12]+8] +0x7d7c.
  The `sw` at 0x4cf7bc stores 4 bytes to [[a0+12]+8] +0xc090.
  The `sw` at 0x4cf7c0 stores 4 bytes to [[a0+12]+8] +0xc08c.
  The `sw` at 0x4cf7c8 stores 4 bytes to [[a0+12]+8] +0xc088.
  The `sw` at 0x4cf7d4 stores 4 bytes to [[a0+12]+8] +0xc084.
  The `lw` at 0x4cf7e0 loads 4 bytes from [[a0+12]+8] +0xc10c.
  The `lw` at 0x4cf7fc loads 4 bytes from [[a0+12]+8] +0x44c98.
  The `lw` at 0x4cf828 loads 4 bytes from [[a0+12]+8] +0x44c18.
  62 such `lw` accesses load 4 bytes from [[a0+12]+8] +0x44b74, including `lw` at 0x4cf834, `lw` at 0x4cf848, `lw` at 0x4cf868.
  31 such `sw` accesses store 4 bytes to ([[a0+12]+8] + ([[[a0+12]+8]+281460] << 0x2)) +0x44b78, including `sw` at 0x4cf844, `sw` at 0x4cf878, `sw` at 0x4cf8ac.
  The `lw` at 0x4cf85c loads 4 bytes from [[a0+12]+8] +0x44bfc.
  The `lw` at 0x4cf890 loads 4 bytes from [[a0+12]+8] +0x44c00.
  The `lw` at 0x4cf8c4 loads 4 bytes from [[a0+12]+8] +0x44c04.
  The `lw` at 0x4cf900 loads 4 bytes from [[a0+12]+8] +0x44c1c.
  The `lw` at 0x4cf934 loads 4 bytes from [[a0+12]+8] +0x44c24.
  The `lw` at 0x4cf968 loads 4 bytes from [[a0+12]+8] +0x44c28.
  The `lw` at 0x4cf99c loads 4 bytes from [[a0+12]+8] +0x44c2c.
  The `lw` at 0x4cf9d0 loads 4 bytes from [[a0+12]+8] +0x44c30.
  The `lw` at 0x4cfa04 loads 4 bytes from [[a0+12]+8] +0x44c34.
  The `lw` at 0x4cfa40 loads 4 bytes from [[a0+12]+8] +0x44c3c.
  The `lw` at 0x4cfa74 loads 4 bytes from [[a0+12]+8] +0x44c40.
  The `lw` at 0x4cfaa8 loads 4 bytes from [[a0+12]+8] +0x44c44.
  The `lw` at 0x4cfadc loads 4 bytes from [[a0+12]+8] +0x44c20.
  The `lw` at 0x4cfb10 loads 4 bytes from [[a0+12]+8] +0x44c08.
  The `lw` at 0x4cfb44 loads 4 bytes from [[a0+12]+8] +0x44c0c.
  The `lw` at 0x4cfb80 loads 4 bytes from [[a0+12]+8] +0x44c14.
  The `lw` at 0x4cfbb4 loads 4 bytes from [[a0+12]+8] +0x44c38.
  The `lw` at 0x4cfbe8 loads 4 bytes from [[a0+12]+8] +0x44c48.
  The `lw` at 0x4cfc1c loads 4 bytes from [[a0+12]+8] +0x44c4c.
  The `lw` at 0x4cfc50 loads 4 bytes from [[a0+12]+8] +0x44c54.
  The `lw` at 0x4cfc84 loads 4 bytes from [[a0+12]+8] +0x44c58.
  The `lw` at 0x4cfcc0 loads 4 bytes from [[a0+12]+8] +0x44c5c.
  The `lw` at 0x4cfcf4 loads 4 bytes from [[a0+12]+8] +0x44c60.
  The `lw` at 0x4cfd28 loads 4 bytes from [[a0+12]+8] +0x44c64.
  The `lw` at 0x4cfd5c loads 4 bytes from [[a0+12]+8] +0x44c50.
  The `lw` at 0x4cfd90 loads 4 bytes from [[a0+12]+8] +0x44c68.
  The `lw` at 0x4cfdc4 loads 4 bytes from [[a0+12]+8] +0x44c6c.
  The `lw` at 0x4cfe00 loads 4 bytes from [[a0+12]+8] +0x44c70.
  The `lw` at 0x4cfe34 loads 4 bytes from [[a0+12]+8] +0x44c78.
  The `lw` at 0x4cfe68 loads 4 bytes from [[a0+12]+8] +0x44c7c.
  The `bgezall` at 0x4cf340 calls ACQUIRE_PROCESS_SPINLOCK [0x4ccc00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4cf360 calls (unknown callee) with a0=[[a0+12]+8], a1=?, a2=?, a3=?.
  The `jalr` at 0x4cf7e4 calls (unknown callee) with a0=[[a0+12]+8], a1=?, a2=?, a3=[[a0+12]+8], a4=0x3, a5=one of 0x5, 0x3f, a6=[[a0+12]+8]+65536, a7=0x1.
  The `jalr` at 0x4cf7f8 calls fglX11UpdateDispatcher with a0=[[[a0+12]+8]+281752], a1=?, a2=?, a3=?.
  The `bgezall` at 0x4cf808 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x4cf318 targets 0x4cf814, is taken when s1(=[a0+12]) == 0, and falls through when s1(=[a0+12]) != 0.
  The `beq` branch at 0x4cf328 targets 0x4cf818, is taken when v0(=[[0x1010]+100]) == s1(=[a0+12]), and falls through when v0(=[[0x1010]+100]) != s1(=[a0+12]).
  The `beq` branch at 0x4cf3b0 targets 0x4cf828, is taken when (a1(=[[[a0+12]+8]+49260]) & 0x80) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & 0x80) != 0.
  The `beq` branch at 0x4cf3e4 targets 0x4cf85c, is taken when (a1(=[[[a0+12]+8]+49260]) & 0x2) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & 0x2) != 0.
  The `beq` branch at 0x4cf400 targets 0x4cf890, is taken when (a1(=[[[a0+12]+8]+49260]) & 0x4) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & 0x4) != 0.
  The `beq` branch at 0x4cf41c targets 0x4cf8c4, is taken when (a1(=[[[a0+12]+8]+49260]) & 0x8) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & 0x8) != 0.
  The `beq` branch at 0x4cf438 targets 0x4cf900, is taken when (a1(=[[[a0+12]+8]+49260]) & 0x100) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & 0x100) != 0.
  The `beq` branch at 0x4cf454 targets 0x4cf934, is taken when (a1(=[[[a0+12]+8]+49260]) & 0x400) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & 0x400) != 0.
  The `beq` branch at 0x4cf470 targets 0x4cf968, is taken when (a1(=[[[a0+12]+8]+49260]) & 0x4000) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & 0x4000) != 0.
  The `beq` branch at 0x4cf488 targets 0x4cf99c, is taken when (a1(=[[[a0+12]+8]+49260]) & 0x800) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & 0x800) != 0.
  The `beq` branch at 0x4cf4a4 targets 0x4cf9d0, is taken when (a1(=[[[a0+12]+8]+49260]) & 0x1000) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & 0x1000) != 0.
  The `beq` branch at 0x4cf4c0 targets 0x4cfa04, is taken when (a1(=[[[a0+12]+8]+49260]) & 0x2000) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & 0x2000) != 0.
  The `beq` branch at 0x4cf4dc targets 0x4cfa40, is taken when (a1(=[[[a0+12]+8]+49260]) & t0(=0x10000)) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & t0(=0x10000)) != 0.
  The `bgez` branch at 0x4cf4f8 targets 0x4cfa74, is taken when at(=([[[a0+12]+8]+49260] << 0x2e)) >= 0 (signed), and falls through when at(=([[[a0+12]+8]+49260] << 0x2e)) < 0 (signed).
  The `beq` branch at 0x4cf514 targets 0x4cfaa8, is taken when (a1(=[[[a0+12]+8]+49260]) & s0(=0x40000)) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & s0(=0x40000)) != 0.
  The `beq` branch at 0x4cf530 targets 0x4cfadc, is taken when (a1(=[[[a0+12]+8]+49260]) & 0x200) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & 0x200) != 0.
  The `beq` branch at 0x4cf548 targets 0x4cfb10, is taken when (a1(=[[[a0+12]+8]+49260]) & 0x10) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & 0x10) != 0.
  The `beq` branch at 0x4cf56c targets 0x4cfb44, is taken when (a1(=[[[a0+12]+8]+49260]) & 0x20) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & 0x20) != 0.
  The `beq` branch at 0x4cf588 targets 0x4cfb80, is taken when (a1(=[[[a0+12]+8]+49260]) & 0x40) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & 0x40) != 0.
  The `beq` branch at 0x4cf5a4 targets 0x4cfbb4, is taken when (a1(=[[[a0+12]+8]+49260]) & 0x8000) == 0, and falls through when (a1(=[[[a0+12]+8]+49260]) & 0x8000) != 0.
  The `beq` branch at 0x4cf5c0 targets 0x4cfbe8, is taken when (a2(=[[[a0+12]+8]+49264]) & 0x1) == 0, and falls through when (a2(=[[[a0+12]+8]+49264]) & 0x1) != 0.
  The `beq` branch at 0x4cf5d8 targets 0x4cfc1c, is taken when (a2(=[[[a0+12]+8]+49264]) & 0x2) == 0, and falls through when (a2(=[[[a0+12]+8]+49264]) & 0x2) != 0.
  The `beq` branch at 0x4cf5f0 targets 0x4cfc50, is taken when (a2(=[[[a0+12]+8]+49264]) & 0x8) == 0, and falls through when (a2(=[[[a0+12]+8]+49264]) & 0x8) != 0.
  The `beq` branch at 0x4cf608 targets 0x4cfc84, is taken when (a2(=[[[a0+12]+8]+49264]) & 0x10) == 0, and falls through when (a2(=[[[a0+12]+8]+49264]) & 0x10) != 0.
  The `beq` branch at 0x4cf624 targets 0x4cfcc0, is taken when (a2(=[[[a0+12]+8]+49264]) & 0x20) == 0, and falls through when (a2(=[[[a0+12]+8]+49264]) & 0x20) != 0.
  The `beq` branch at 0x4cf640 targets 0x4cfcf4, is taken when (a2(=[[[a0+12]+8]+49264]) & 0x40) == 0, and falls through when (a2(=[[[a0+12]+8]+49264]) & 0x40) != 0.
  The `beq` branch at 0x4cf65c targets 0x4cfd28, is taken when (a2(=[[[a0+12]+8]+49264]) & 0x80) == 0, and falls through when (a2(=[[[a0+12]+8]+49264]) & 0x80) != 0.
  The `beq` branch at 0x4cf678 targets 0x4cfd5c, is taken when (a2(=[[[a0+12]+8]+49264]) & 0x4) == 0, and falls through when (a2(=[[[a0+12]+8]+49264]) & 0x4) != 0.
  The `beq` branch at 0x4cf694 targets 0x4cfd90, is taken when (a2(=[[[a0+12]+8]+49264]) & 0x100) == 0, and falls through when (a2(=[[[a0+12]+8]+49264]) & 0x100) != 0.
  The `beq` branch at 0x4cf6b0 targets 0x4cfdc4, is taken when (a2(=[[[a0+12]+8]+49264]) & 0x200) == 0, and falls through when (a2(=[[[a0+12]+8]+49264]) & 0x200) != 0.
  The `beq` branch at 0x4cf6c0 targets 0x4cfe00, is taken when (a2(=([[[a0+12]+8]+49264] | 0x200)) & 0x400) == 0, and falls through when (a2(=([[[a0+12]+8]+49264] | 0x200)) & 0x400) != 0.
  The `beq` branch at 0x4cf6e0 targets 0x4cfe34, is taken when (a2(=[[[a0+12]+8]+49264]) & 0x800) == 0, and falls through when (a2(=[[[a0+12]+8]+49264]) & 0x800) != 0.
  The `beq` branch at 0x4cf6fc targets 0x4cfe68, is taken when (a2(=[[[a0+12]+8]+49264]) & 0x1000) == 0, and falls through when (a2(=[[[a0+12]+8]+49264]) & 0x1000) != 0.
  The `blez` branch at 0x4cf724 targets 0x4cfe9c, is taken when a1(=[[[a0+12]+8]+29764]) <= 0 (signed), and falls through when a1(=[[[a0+12]+8]+29764]) > 0 (signed).
  The `beq` branch at 0x4cf754 targets 0x4cf780, is taken when a1(?) >= t2(=[[[a0+12]+8]+29764]) (signed), and falls through when a1(?) < t2(=[[[a0+12]+8]+29764]) (signed).
  The `bne` branch at 0x4cf778 targets 0x4cf740, is taken when a1(?) < t3(=[[[a0+12]+8]+29764]) (signed), and falls through when a1(?) >= t3(=[[[a0+12]+8]+29764]) (signed).
  The `beq` branch at 0x4cf82c targets 0x4cf3b8, is taken when a2(=[[[a0+12]+8]+281624]) == 0, and falls through when a2(=[[[a0+12]+8]+281624]) != 0.
  The `beq` branch at 0x4cf854 targets 0x4cf3b8 and is always taken.
  The `beq` branch at 0x4cf860 targets 0x4cf3ec, is taken when a2(=[[[a0+12]+8]+281596]) == 0, and falls through when a2(=[[[a0+12]+8]+281596]) != 0.
  The `beq` branch at 0x4cf888 targets 0x4cf3e8 and is always taken.
  The `beq` branch at 0x4cf894 targets 0x4cf408, is taken when a2(=[[[a0+12]+8]+281600]) == 0, and falls through when a2(=[[[a0+12]+8]+281600]) != 0.
  The `beq` branch at 0x4cf8bc targets 0x4cf404 and is always taken.
  The `beq` branch at 0x4cf8c8 targets 0x4cf424, is taken when a2(=[[[a0+12]+8]+281604]) == 0, and falls through when a2(=[[[a0+12]+8]+281604]) != 0.
  The `beq` branch at 0x4cf8f0 targets 0x4cf420 and is always taken.
  The `beq` branch at 0x4cf904 targets 0x4cf440, is taken when a2(=[[[a0+12]+8]+281628]) == 0, and falls through when a2(=[[[a0+12]+8]+281628]) != 0.
  The `beq` branch at 0x4cf92c targets 0x4cf43c and is always taken.
  The `beq` branch at 0x4cf938 targets 0x4cf460, is taken when a2(=[[[a0+12]+8]+281636]) == 0, and falls through when a2(=[[[a0+12]+8]+281636]) != 0.
  The `beq` branch at 0x4cf960 targets 0x4cf45c and is always taken.
  The `beq` branch at 0x4cf96c targets 0x4cf478, is taken when a2(=[[[a0+12]+8]+281640]) == 0, and falls through when a2(=[[[a0+12]+8]+281640]) != 0.
  The `beq` branch at 0x4cf994 targets 0x4cf474 and is always taken.
  The `beq` branch at 0x4cf9a0 targets 0x4cf490, is taken when a2(=[[[a0+12]+8]+281644]) == 0, and falls through when a2(=[[[a0+12]+8]+281644]) != 0.
  The `beq` branch at 0x4cf9c8 targets 0x4cf48c and is always taken.
  The `beq` branch at 0x4cf9d4 targets 0x4cf4ac, is taken when a2(=[[[a0+12]+8]+281648]) == 0, and falls through when a2(=[[[a0+12]+8]+281648]) != 0.
  The `beq` branch at 0x4cf9fc targets 0x4cf4a8 and is always taken.
  The `beq` branch at 0x4cfa08 targets 0x4cf4c8, is taken when a2(=[[[a0+12]+8]+281652]) == 0, and falls through when a2(=[[[a0+12]+8]+281652]) != 0.
  The `beq` branch at 0x4cfa30 targets 0x4cf4c4 and is always taken.
  The `beq` branch at 0x4cfa44 targets 0x4cf4e4, is taken when a2(=[[[a0+12]+8]+281660]) == 0, and falls through when a2(=[[[a0+12]+8]+281660]) != 0.
  The `beq` branch at 0x4cfa6c targets 0x4cf4e0 and is always taken.
  The `beq` branch at 0x4cfa78 targets 0x4cf504, is taken when a5(=[[[a0+12]+8]+281664]) == 0, and falls through when a5(=[[[a0+12]+8]+281664]) != 0.
  The `beq` branch at 0x4cfaa0 targets 0x4cf500 and is always taken.
  The `beq` branch at 0x4cfaac targets 0x4cf51c, is taken when a2(=[[[a0+12]+8]+281668]) == 0, and falls through when a2(=[[[a0+12]+8]+281668]) != 0.
  The `beq` branch at 0x4cfad4 targets 0x4cf518 and is always taken.
  The `beq` branch at 0x4cfae0 targets 0x4cf538, is taken when a2(=[[[a0+12]+8]+281632]) == 0, and falls through when a2(=[[[a0+12]+8]+281632]) != 0.
  The `beq` branch at 0x4cfb08 targets 0x4cf534 and is always taken.
  The `beq` branch at 0x4cfb14 targets 0x4cf550, is taken when a2(=[[[a0+12]+8]+281608]) == 0, and falls through when a2(=[[[a0+12]+8]+281608]) != 0.
  The `beq` branch at 0x4cfb3c targets 0x4cf54c and is always taken.
  The `beq` branch at 0x4cfb48 targets 0x4cf574, is taken when a2(=[[[a0+12]+8]+281612]) == 0, and falls through when a2(=[[[a0+12]+8]+281612]) != 0.
  The `beq` branch at 0x4cfb70 targets 0x4cf570 and is always taken.
  The `beq` branch at 0x4cfb84 targets 0x4cf590, is taken when a2(=[[[a0+12]+8]+281620]) == 0, and falls through when a2(=[[[a0+12]+8]+281620]) != 0.
  The `beq` branch at 0x4cfbac targets 0x4cf58c and is always taken.
  The `beq` branch at 0x4cfbb8 targets 0x4cf5a8, is taken when a2(=[[[a0+12]+8]+281656]) == 0, and falls through when a2(=[[[a0+12]+8]+281656]) != 0.
  The `beq` branch at 0x4cfbe0 targets 0x4cf5a8 and is always taken.
  The `beq` branch at 0x4cfbec targets 0x4cf5c8, is taken when a1(=[[[a0+12]+8]+281672]) == 0, and falls through when a1(=[[[a0+12]+8]+281672]) != 0.
  The `beq` branch at 0x4cfc14 targets 0x4cf5c4 and is always taken.
  The `beq` branch at 0x4cfc20 targets 0x4cf5e0, is taken when a1(=[[[a0+12]+8]+281676]) == 0, and falls through when a1(=[[[a0+12]+8]+281676]) != 0.
  The `beq` branch at 0x4cfc48 targets 0x4cf5dc and is always taken.
  The `beq` branch at 0x4cfc54 targets 0x4cf5f8, is taken when a1(=[[[a0+12]+8]+281684]) == 0, and falls through when a1(=[[[a0+12]+8]+281684]) != 0.
  The `beq` branch at 0x4cfc7c targets 0x4cf5f4 and is always taken.
  The `beq` branch at 0x4cfc88 targets 0x4cf610, is taken when a1(=[[[a0+12]+8]+281688]) == 0, and falls through when a1(=[[[a0+12]+8]+281688]) != 0.
  The `beq` branch at 0x4cfcb0 targets 0x4cf60c and is always taken.
  The `beq` branch at 0x4cfcc4 targets 0x4cf62c, is taken when a1(=[[[a0+12]+8]+281692]) == 0, and falls through when a1(=[[[a0+12]+8]+281692]) != 0.
  The `beq` branch at 0x4cfcec targets 0x4cf628 and is always taken.
  The `beq` branch at 0x4cfcf8 targets 0x4cf644, is taken when a1(=[[[a0+12]+8]+281696]) == 0, and falls through when a1(=[[[a0+12]+8]+281696]) != 0.
  The `beq` branch at 0x4cfd20 targets 0x4cf644 and is always taken.
  The `beq` branch at 0x4cfd2c targets 0x4cf664, is taken when a1(=[[[a0+12]+8]+281700]) == 0, and falls through when a1(=[[[a0+12]+8]+281700]) != 0.
  The `beq` branch at 0x4cfd54 targets 0x4cf660 and is always taken.
  The `beq` branch at 0x4cfd60 targets 0x4cf680, is taken when a1(=[[[a0+12]+8]+281680]) == 0, and falls through when a1(=[[[a0+12]+8]+281680]) != 0.
  The `beq` branch at 0x4cfd88 targets 0x4cf67c and is always taken.
  The `beq` branch at 0x4cfd94 targets 0x4cf69c, is taken when a1(=[[[a0+12]+8]+281704]) == 0, and falls through when a1(=[[[a0+12]+8]+281704]) != 0.
  The `beq` branch at 0x4cfdbc targets 0x4cf698 and is always taken.
  The `beq` branch at 0x4cfdc8 targets 0x4cf6bc, is taken when a1(=[[[a0+12]+8]+281708]) == 0, and falls through when a1(=[[[a0+12]+8]+281708]) != 0.
  The `beq` branch at 0x4cfdf0 targets 0x4cf6b8 and is always taken.
  The `beq` branch at 0x4cfe04 targets 0x4cf6cc, is taken when a1(=[[[a0+12]+8]+281712]) == 0, and falls through when a1(=[[[a0+12]+8]+281712]) != 0.
  The `beq` branch at 0x4cfe2c targets 0x4cf6c8 and is always taken.
  The `beq` branch at 0x4cfe38 targets 0x4cf6e8, is taken when a1(=[[[a0+12]+8]+281720]) == 0, and falls through when a1(=[[[a0+12]+8]+281720]) != 0.
  The `beq` branch at 0x4cfe60 targets 0x4cf6e4 and is always taken.
  The `beq` branch at 0x4cfe6c targets 0x4cf704, is taken when a1(=[[[a0+12]+8]+281724]) == 0, and falls through when a1(=[[[a0+12]+8]+281724]) != 0.
  The `beq` branch at 0x4cfe94 targets 0x4cf700 and is always taken.
  The `beq` branch at 0x4cfe9c targets 0x4cf780 and is always taken.
  The return at 0x4cf820 has v0 = 0x1.
  The instructions from 0x4cf8f8 to 0x4cf8fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4cfa38 to 0x4cfa3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4cfb78 to 0x4cfb7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4cfcb8 to 0x4cfcbc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4cfdf8 to 0x4cfdfc are not reached by any path from the entry, and their branches are not listed.

- `SerXMesaBindSwapBarrier` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cfec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4cfec0-0x4cff40 (128 bytes).
  It occupies 128 bytes.
  The `lw` at 0x4cfee4 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0x4cfefc loads 4 bytes from [a0+4] +0x10.
  The `sw` at 0x4cff00 stores 4 bytes to [a0+4] +0x3c9c.
  The `lw` at 0x4cff04 loads 4 bytes from [[a0+4]+16] +0x78.
  The `lw` at 0x4cff18 loads 4 bytes from [[[a0+4]+16]+120] +0x0.
  The `bgezall` at 0x4cfeec calls ACQUIRE_PROCESS_SPINLOCK [0x4ccc00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4cff14 calls ioctl with a0=[[[[a0+4]+16]+120]], a1=0x66670003, a2=0x1, a3=?.
  The `bgezall` at 0x4cff24 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The return at 0x4cff38 has v0 = 0x1.

- `SerXMesaSwapBuffers` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d0180 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4d0180-0x4d0298 (280 bytes).
  It occupies 280 bytes.
  The `lw` at 0x4d0188 loads 4 bytes from a0 (arg0 at entry) +0x4.
  2 such `lw` accesses load 4 bytes from [a0+4] +0x3c9c, including `lw` at 0x4d018c, `lw` at 0x4d0248.
  The `lw` at 0x4d019c loads 4 bytes from [a0+4] +0x10.
  The `lw` at 0x4d01a8 loads 4 bytes from [[a0+4]+16] +0x78.
  The `lw` at 0x4d01bc loads 4 bytes from [[[a0+4]+16]+120] +0x0.
  2 such `lw` accesses load 4 bytes from abs 0x1010, including `lw` at 0x4d01c0, `lw` at 0x4d027c.
  The `lw` at 0x4d01e0 loads 4 bytes from [0x1010] +0x44c98.
  The `lw` at 0x4d01e4 loads 4 bytes from [[0x1010]+281752] +0x140.
  The `lbu` at 0x4d01f0 loads 1 byte from [0x1010] +0xee3.
  The `sb` at 0x4d01f8 stores 1 byte to [0x1010] +0x605f.
  The `lw` at 0x4d0214 loads 4 bytes from [a0+4] +0x3ca0.
  The `jalr` at 0x4d01e8 calls (unknown callee) with a0=0xb90000, a1=?, a2=?, a3=?.
  The `jalr` at 0x4d020c calls fglX11DRMLockScreen with a0=[[a0+4]+16], a1=[a0+4], a2=?, a3=?.
  The `jalr` at 0x4d0218 calls (unknown callee) with a0=[a0+4], a1=?, a2=?, a3=?.
  The `jalr` at 0x4d0224 calls fglX11DRMUnlockScreen with a0=[[a0+4]+16], a1=?, a2=?, a3=?.
  The `jalr` at 0x4d0240 calls ioctl with a0=[[[[a0+4]+16]+120]], a1=0x6667000f, a2=0x0, a3=?.
  The `bgezall` at 0x4d0270 calls ACQUIRE_PROCESS_SPINLOCK [0x4ccc00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x4d0288 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=[[a0+4]+15516], a3=?.
  The `beq` branch at 0x4d01b8 targets 0x4d0268, is taken when at(=[[a0+4]+15516]) == 0, and falls through when at(=[[a0+4]+15516]) != 0.
  The `beq` branch at 0x4d01c4 targets 0x4d0200, is taken when s2(=[0x1010]) == 0, and falls through when s2(=[0x1010]) != 0.
  The `beq` branch at 0x4d01d0 targets 0x4d0204, is taken when s2(=[0x1010]) == v1(=0xb97090), and falls through when s2(=[0x1010]) != v1(=0xb97090).
  The `beq` branch at 0x4d024c targets 0x4d0280, is taken when a2(=[[a0+4]+15516]) == 0, and falls through when a2(=[[a0+4]+15516]) != 0.
  The `beq` branch at 0x4d0278 targets 0x4d01c4 and is always taken.
  The `beq` branch at 0x4d0290 targets 0x4d0258 and is always taken.
  The return at 0x4d0260 has v0 = one of ret(ioctl), ret(RELEASE_PROCESS_SPINLOCK).

- `SerXMesaMakeCurrent` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d0680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4d0680-0x4d1fa8 (6440 bytes).
  It occupies 6440 bytes.
  The `lw` at 0x4d069c loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x4d06a8 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x4d06b8 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `lw` at 0x4d06d8 loads 4 bytes from [a2+4] +0x10.
  The `lw` at 0x4d06dc loads 4 bytes from [a1+4] +0x10.
  112 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4d0728, `lw` at 0x4d075c, `lw` at 0x4d0790.
  The `lw` at 0x4d073c loads 4 bytes from table(0x46c78) +0x0.
  The `sw` at 0x4d0748 stores 4 bytes to table(0x46c78) +0x0.
  97 such `sw` accesses store 4 bytes to ?, including `sw` at 0x4d07a0, `sw` at 0x4d0838, `sw` at 0x4d0840.
  The `ld` at 0x4d08a8 loads 8 bytes from table(0x38150) +0x0.
  The `ld` at 0x4d08b4 loads 8 bytes from table(0x38158) +0x0.
  The `ld` at 0x4d08c0 loads 8 bytes from table(0x38138) +0x0.
  The `ld` at 0x4d08d8 loads 8 bytes from table(0x38130) +0x0.
  89 such `ld` accesses load 8 bytes from ?, including `ld` at 0x4d090c, `ld` at 0x4d0910, `ld` at 0x4d0948.
  102 such `sd` accesses store 8 bytes to ?, including `sd` at 0x4d0918, `sd` at 0x4d0920, `sd` at 0x4d092c.
  The `ld` at 0x4d09dc loads 8 bytes from table(0x382c8) +0x0.
  The `ld` at 0x4d0a7c loads 8 bytes from table(0x382e8) +0x0.
  The `ld` at 0x4d0a84 loads 8 bytes from table(0x382e0) +0x0.
  The `ld` at 0x4d0cd8 loads 8 bytes from table(0x38550) +0x0.
  The `ld` at 0x4d0ce4 loads 8 bytes from table(0x38558) +0x0.
  The `ld` at 0x4d0cf0 loads 8 bytes from table(0x38538) +0x0.
  The `ld` at 0x4d0cfc loads 8 bytes from table(0x38530) +0x0.
  The `ld` at 0x4d0ff4 loads 8 bytes from table(0x386b8) +0x0.
  The `ld` at 0x4d0ff8 loads 8 bytes from table(0x386b0) +0x0.
  The `ld` at 0x4d0ffc loads 8 bytes from table(0x386a8) +0x0.
  The `ld` at 0x4d1000 loads 8 bytes from table(0x386a0) +0x0.
  The `ld` at 0x4d1004 loads 8 bytes from table(0x38698) +0x0.
  The `ld` at 0x4d1008 loads 8 bytes from table(0x38690) +0x0.
  The `ld` at 0x4d100c loads 8 bytes from table(0x38688) +0x0.
  The `ld` at 0x4d1010 loads 8 bytes from table(0x38680) +0x0.
  The `ld` at 0x4d1014 loads 8 bytes from table(0x38678) +0x0.
  The `ld` at 0x4d1018 loads 8 bytes from table(0x38670) +0x0.
  The `ld` at 0x4d101c loads 8 bytes from table(0x38668) +0x0.
  The `ld` at 0x4d1078 loads 8 bytes from table(0x386d8) +0x0.
  The `ld` at 0x4d1084 loads 8 bytes from table(0x386e0) +0x0.
  The `ld` at 0x4d1088 loads 8 bytes from table(0x386c0) +0x0.
  The `lw` at 0x4d11b0 loads 4 bytes from table(0x38da0) +0x0.
  The `lw` at 0x4d11ec loads 4 bytes from table(0x3852c) +0x0.
  The `sd` at 0x4d14c8 stores 8 bytes to table(0x38898) +0x0.
  The `sd` at 0x4d14d4 stores 8 bytes to table(0x38890) +0x0.
  The `sd` at 0x4d1740 stores 8 bytes to table(0x38a30) +0x0.
  The `sd` at 0x4d174c stores 8 bytes to table(0x38a28) +0x0.
  The `sd` at 0x4d184c stores 8 bytes to table(0x38af8) +0x0.
  The `sd` at 0x4d1b30 stores 8 bytes to table(0x38c30) +0x0.
  The `sd` at 0x4d1b34 stores 8 bytes to table(0x38c38) +0x0.
  The `sd` at 0x4d1b38 stores 8 bytes to table(0x38c40) +0x0.
  The `sd` at 0x4d1b3c stores 8 bytes to table(0x38c48) +0x0.
  The `sd` at 0x4d1b40 stores 8 bytes to table(0x38c50) +0x0.
  The `sd` at 0x4d1b44 stores 8 bytes to table(0x38c58) +0x0.
  The `sd` at 0x4d1b48 stores 8 bytes to table(0x38c60) +0x0.
  The `sd` at 0x4d1b4c stores 8 bytes to table(0x38c68) +0x0.
  The `sd` at 0x4d1b50 stores 8 bytes to table(0x38c70) +0x0.
  The `sd` at 0x4d1b54 stores 8 bytes to table(0x38c78) +0x0.
  The `sd` at 0x4d1b60 stores 8 bytes to table(0x38c80) +0x0.
  The `sd` at 0x4d1bc8 stores 8 bytes to table(0x38c88) +0x0.
  The `sw` at 0x4d1cbc stores 4 bytes to table(0x38d8c) +0x0.
  The `lw` at 0x4d1ce8 loads 4 bytes from table(0x38af4) +0x0.
  The `bgezall` at 0x4d06b4 calls ACQUIRE_PROCESS_SPINLOCK [0x4ccc00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x4d0704 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4d074c calls __fglX11MakeCurrent [0x4d0400] with a0=?, a1=[a2+4], a2=?, a3=?.
  The `bgezall` at 0x4d1330 calls __fglX11MakeCurrent [0x4d0400] with a0=?, a1=[a1+4], a2=?, a3=?.
  The `bgezall` at 0x4d1e5c calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4d1ec4 calls __fglX11MakeCurrent [0x4d0400] with a0=?, a1=[a1+4], a2=?, a3=?.
  The `bgezall` at 0x4d1ed4 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4d1f20 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4d1f74 calls unbind_context with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4d1f84 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x4d06d0 targets 0x4d1e9c, is taken when s2(=[a1+4]) == s1(=[a2+4]), and falls through when s2(=[a1+4]) != s1(=[a2+4]).
  The `beq` branch at 0x4d06e0 targets 0x4d0728, is taken when v1(=[[a1+4]+16]) == a0(=[[a2+4]+16]), and falls through when v1(=[[a1+4]+16]) != a0(=[[a2+4]+16]).
  The `beq` branch at 0x4d0754 targets 0x4d1f00, is taken when v0(=ret(__fglX11MakeCurrent)) == 0, and falls through when v0(=ret(__fglX11MakeCurrent)) != 0.
  The `bne` branch at 0x4d079c targets 0x4d0784, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bgtz` branch at 0x4d087c targets 0x4d07ec, is taken when v0(?) > 0 (signed), and falls through when v0(?) <= 0 (signed).
  The `bgtz` branch at 0x4d0998 targets 0x4d090c, is taken when s8(?) > 0 (signed), and falls through when s8(?) <= 0 (signed).
  The `beq` branch at 0x4d0a94 targets 0x4d0ae4 and is always taken.
  The `bgtz` branch at 0x4d0b28 targets 0x4d0a9c, is taken when a7(?) > 0 (signed), and falls through when a7(?) <= 0 (signed).
  The `bne` branch at 0x4d0bb0 targets 0x4d0b98, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bgtz` branch at 0x4d0c8c targets 0x4d0c00, is taken when v0(?) > 0 (signed), and falls through when v0(?) <= 0 (signed).
  The `bgtz` branch at 0x4d0da4 targets 0x4d0d18, is taken when s8(?) > 0 (signed), and falls through when s8(?) <= 0 (signed).
  The `bne` branch at 0x4d0e6c targets 0x4d0e54, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bgtz` branch at 0x4d0f7c targets 0x4d0ef0, is taken when a7(?) > 0 (signed), and falls through when a7(?) <= 0 (signed).
  The `bgtz` branch at 0x4d1150 targets 0x4d10c4, is taken when s8(?) > 0 (signed), and falls through when s8(?) <= 0 (signed).
  The `blez` branch at 0x4d11e4 targets 0x4d1324, is taken when a1(?) <= 0 (signed), and falls through when a1(?) > 0 (signed).
  The `bne` branch at 0x4d1228 targets 0x4d1210, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bgtz` branch at 0x4d1300 targets 0x4d1270, is taken when v1(?) > 0 (signed), and falls through when v1(?) <= 0 (signed).
  The `bne` branch at 0x4d131c targets 0x4d1200, is taken when a7(?) != t0(?), and falls through when a7(?) == t0(?).
  The `beq` branch at 0x4d1340 targets 0x4d1f44, is taken when v0(=ret(__fglX11MakeCurrent)) == 0, and falls through when v0(=ret(__fglX11MakeCurrent)) != 0.
  The `bne` branch at 0x4d1380 targets 0x4d1368, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bgtz` branch at 0x4d1454 targets 0x4d13c8, is taken when v0(?) > 0 (signed), and falls through when v0(?) <= 0 (signed).
  The `beq` branch at 0x4d14d8 targets 0x4d1528 and is always taken.
  The `bgtz` branch at 0x4d156c targets 0x4d14e0, is taken when s8(?) > 0 (signed), and falls through when s8(?) <= 0 (signed).
  The `bne` branch at 0x4d15f8 targets 0x4d15e0, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bgtz` branch at 0x4d16cc targets 0x4d1640, is taken when v1(?) > 0 (signed), and falls through when v1(?) <= 0 (signed).
  The `beq` branch at 0x4d1750 targets 0x4d17a0 and is always taken.
  The `bgtz` branch at 0x4d17e4 targets 0x4d1758, is taken when s8(?) > 0 (signed), and falls through when s8(?) <= 0 (signed).
  The `beq` branch at 0x4d1898 targets 0x4d18e8 and is always taken.
  The `bgtz` branch at 0x4d192c targets 0x4d18a0, is taken when a7(?) > 0 (signed), and falls through when a7(?) <= 0 (signed).
  The `bne` branch at 0x4d19c8 targets 0x4d19b0, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x4d1a30 targets 0x4d1a88 and is always taken.
  The `bgtz` branch at 0x4d1acc targets 0x4d1a40, is taken when a7(?) > 0 (signed), and falls through when a7(?) <= 0 (signed).
  The `beq` branch at 0x4d1bcc targets 0x4d1c1c and is always taken.
  The `bgtz` branch at 0x4d1c60 targets 0x4d1bd4, is taken when s8(?) > 0 (signed), and falls through when s8(?) <= 0 (signed).
  The `blez` branch at 0x4d1ccc targets 0x4d1e30, is taken when a2(?) <= 0 (signed), and falls through when a2(?) > 0 (signed).
  The `bne` branch at 0x4d1d18 targets 0x4d1d00, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bgtz` branch at 0x4d1df0 targets 0x4d1d64, is taken when v0(?) > 0 (signed), and falls through when v0(?) <= 0 (signed).
  The `bne` branch at 0x4d1e28 targets 0x4d1cdc, is taken when v0(?) < v1(?) (signed), and falls through when v0(?) >= v1(?) (signed).
  The return at 0x4d0720 has v0 = 0x0.
  The return at 0x4d1e94 has v0 = 0x1.
  The return at 0x4d1ef0 has v0 = ret(__fglX11MakeCurrent).
  The return at 0x4d1f3c has v0 = 0x0.
  The return at 0x4d1fa0 has v0 = 0x0.
  The instructions from 0x4d1a38 to 0x4d1a3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4d1ef8 to 0x4d1efc are not reached by any path from the entry, and their branches are not listed.

- `SerXMesaUnbindContext` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d1fc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4d1fc0-0x4d2098 (216 bytes).
  It occupies 216 bytes.
  The `lw` at 0x4d1fe8 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x4d1ff0 loads 4 bytes from sym(fgl_glapi) +0xc.
  The `lbu` at 0x4d1ffc loads 1 byte from [a0+12] +0x88.
  The `lw` at 0x4d2010 loads 4 bytes from [a0+12] +0x8.
  The `lw` at 0x4d2084 loads 4 bytes from sym(fgl_glapi) +0x8.
  The `bgezall` at 0x4d1fe4 calls ACQUIRE_PROCESS_SPINLOCK [0x4ccc00] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4d1ff4 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4d2024 calls unbind_context with a0=[[a0+12]+8], a1=?, a2=?, a3=0xb90000.
  The `bgezall` at 0x4d2048 calls RELEASE_PROCESS_SPINLOCK [0x4ccc80] with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4d2068 calls fglX11UpdateDispatcher with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x4d2088 calls (unknown callee) with a0=0xb97090, a1=?, a2=?, a3=?.
  The `beq` branch at 0x4d2008 targets 0x4d2030, is taken when ra(=[[a0+12]+136]:1) == 0, and falls through when ra(=[[a0+12]+136]:1) != 0.
  The `beq` branch at 0x4d2014 targets 0x4d2030, is taken when s1(=[[a0+12]+8]) == 0, and falls through when s1(=[[a0+12]+8]) != 0.
  The `beq` branch at 0x4d201c targets 0x4d2030, is taken when s1(=[[a0+12]+8]) == s0(=0xb97090), and falls through when s1(=[[a0+12]+8]) != s0(=0xb97090).
  The `beq` branch at 0x4d202c targets 0x4d2080, is taken when s2(=ret(?)) == s1(=[[a0+12]+8]), and falls through when s2(=ret(?)) != s1(=[[a0+12]+8]).
  The `beq` branch at 0x4d2034 targets 0x4d2064, is taken when at(?) == s2(=ret(?)), and falls through when at(?) != s2(=ret(?)).
  The `beq` branch at 0x4d2070 targets 0x4d2040 and is always taken.
  The `beq` branch at 0x4d2090 targets 0x4d2034 and is always taken.
  The return at 0x4d205c has v0 = 0x1.
  The instructions from 0x4d2078 to 0x4d207c are not reached by any path from the entry, and their branches are not listed.

- `SerXMesaOpenFullScreen` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d20c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4d20c0-0x4d20c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4d20c0 has v0 = 0x1.

- `SerXMesaCloseFullScreen` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d2100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4d2100-0x4d2108 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4d2100 has v0 = 0x1.

- `ENCODE_DEVICE_ID` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d2500 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4d2500-0x4d2554 (84 bytes).
  It occupies 84 bytes.
  The return at 0x4d254c has v0 = ?.

- `GetObjectSurface` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4db740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4db740-0x4db748 (8 bytes).
  It occupies 8 bytes.
  The `lw` at 0x4db744 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The return at 0x4db740 has v0 = [a0+4].

- `CheckProps` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4edf40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4edf40-0x4ee5c8 (1672 bytes).
  It occupies 1672 bytes.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x10, including `lw` at 0x4edfd4, `lw` at 0x4ee12c.
  The `lw` at 0x4ee028 loads 4 bytes from a2 (arg2 at entry) +0x2c.
  The `lw` at 0x4ee044 loads 4 bytes from table(0xb6f500) +0x0.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x28, including `lw` at 0x4ee370, `lw` at 0x4ee460.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0xc, including `lw` at 0x4ee388, `lw` at 0x4ee478.
  The `bgezall` at 0x4edf80 calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f470, a2=0x0, a3=a0+289916, a6=0x1.
  The `bgezall` at 0x4edff4 calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f4b8, a2=0x0, a3=a0+289916, a6=0x1, a7=[a2+16].
  The `bgezall` at 0x4ee070 calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f3f8, a2=0x0, a3=a0+289916, a6=0x1.
  The `bgezall` at 0x4ee0c8 calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f590, a2=0x0, a3=a0+289916, a6=0x1.
  The `bgezall` at 0x4ee108 calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f570, a2=0x0, a3=a0+289916, a6=0x1.
  The `bgezall` at 0x4ee14c calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f440, a2=0x0, a3=a0+289916, a5=[a2+16], a6=0x1.
  The `bgezall` at 0x4ee19c calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f5b8, a2=0x0, a3=a0+289916, a6=0x1, a7=0x2.
  The `bgezall` at 0x4ee1f0 calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f5e0, a2=0x0, a3=a0+289916, a6=0x1, a7=0x3.
  The `bgezall` at 0x4ee238 calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f710, a2=0x0, a3=a0+289916, a5=0x2, a6=0x1.
  The `jalr` at 0x4ee264 calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4ee29c calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f608, a2=0x0, a3=a0+289916, a6=0x1, a7=0x2.
  The `jalr` at 0x4ee2c4 calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4ee2f4 calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f750, a2=0x0, a3=a0+289916, a6=0x1.
  The `bgezall` at 0x4ee33c calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f638, a2=0x0, a3=a0+289916, a6=0x1, a7=0x2.
  The `jalr` at 0x4ee360 calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4ee3a8 calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f7d8, a2=0x0, a3=a0+289916, a5=0x83f0, a6=0x83f3, a7=[a2+12].
  The `jalr` at 0x4ee3cc calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?, a4=(a3 << 0x28).
  The `jalr` at 0x4ee3e0 calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4ee410 calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f668, a2=0x0, a3=a0+289916, a6=0x1, a7=0x2.
  The `jalr` at 0x4ee434 calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?.
  The `jalr` at 0x4ee448 calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4ee498 calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f6e0, a2=0x0, a3=a0+289916, a5=0x83f0, a6=0x1, a7=0x83f3.
  The `jalr` at 0x4ee4b8 calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?.
  The `jalr` at 0x4ee4cc calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?.
  The `jalr` at 0x4ee4dc calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4ee504 calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f790, a2=0x0, a3=a0+289916, a5=0x83f0, a6=0x83f3.
  The `bgezall` at 0x4ee53c calls __glUberBufUpdateLog [0x4e81c0] with a0=a0 at entry (arg0), a1=0xb6f698, a2=0x0, a3=a0+289916, a5=0x83f0, a6=0x1, a7=0x83f3.
  The `jalr` at 0x4ee558 calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?.
  The `jalr` at 0x4ee568 calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?.
  The `jalr` at 0x4ee578 calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?.
  The `jalr` at 0x4ee588 calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?.
  The `jalr` at 0x4ee598 calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?, a4=(a3 << 0x28).
  The `jalr` at 0x4ee5a8 calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?, a4=(a3 << 0x28).
  The `jalr` at 0x4ee5b8 calls __glSetError [0x6e42c0] with a0=0x501, a1=?, a2=?, a3=?, a4=(a3 << 0x28).
  The `beq` branch at 0x4edf50 targets 0x4ee050, is taken when a1 == a6(=0x1), and falls through when a1 != a6(=0x1).
  The `beq` branch at 0x4edf5c targets 0x4edfc0, is taken when (s0(=a3) & 0x3) == 0, and falls through when (s0(=a3) & 0x3) != 0.
  The `beq` branch at 0x4edf64 targets 0x4edfc0, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x4edf90 targets 0x4ee260, is taken when (s0(=a3) & a4(=0x800000)) == 0, and falls through when (s0(=a3) & a4(=0x800000)) != 0.
  The `beq` branch at 0x4edfcc targets 0x4ee020, is taken when (s0(=a3) & a5(=0x17fc01)) == 0, and falls through when (s0(=a3) & a5(=0x17fc01)) != 0.
  The `blez` branch at 0x4edfd8 targets 0x4ee01c, is taken when a7(=[a2+16]) <= 0 (signed), and falls through when a7(=[a2+16]) > 0 (signed).
  The `beq` branch at 0x4ee004 targets 0x4ee2c0, is taken when (s0(=a3) & a4(=0x800000)) == 0, and falls through when (s0(=a3) & a4(=0x800000)) != 0.
  The `beq` branch at 0x4ee020 targets 0x4ee09c, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x4ee03c targets 0x4ee0f0, is taken when v1(=[a2+44]) >= 0x1b (unsigned), and falls through when v1(=[a2+44]) < 0x1b (unsigned).
  The `beq` branch at 0x4ee054 targets 0x4ee12c, is taken when (a3 & 0xf) == 0, and falls through when (a3 & 0xf) != 0.
  The `beq` branch at 0x4ee080 targets 0x4ee35c, is taken when (s0(=a3) & a4(=0x800000)) == 0, and falls through when (s0(=a3) & a4(=0x800000)) != 0.
  The `beq` branch at 0x4ee09c targets 0x4ee218, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x4ee0a4 targets 0x4ee178, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x4ee0ac targets 0x4ee174, is taken when a1 == a6(=0x1), and falls through when a1 != a6(=0x1).
  The `beq` branch at 0x4ee0d8 targets 0x4ee3dc, is taken when (s0(=a3) & a4(=0x800000)) == 0, and falls through when (s0(=a3) & a4(=0x800000)) != 0.
  The `bgez` branch at 0x4ee114 targets 0x4ee3c8, is taken when a4(=(a3 << 0x28)) >= 0 (signed), and falls through when a4(=(a3 << 0x28)) < 0 (signed).
  The `blez` branch at 0x4ee130 targets 0x4edf58, is taken when a5(=[a2+16]) <= 0 (signed), and falls through when a5(=[a2+16]) > 0 (signed).
  The `beq` branch at 0x4ee15c targets 0x4ee430, is taken when (s0(=a3) & a4(=0x800000)) == 0, and falls through when (s0(=a3) & a4(=0x800000)) != 0.
  The `beq` branch at 0x4ee178 targets 0x4ee1c8, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x4ee180 targets 0x4ee1c8, is taken when a1 == a7(=0x2), and falls through when a1 != a7(=0x2).
  The `beq` branch at 0x4ee1ac targets 0x4ee444, is taken when (s0(=a3) & a4(=0x800000)) == 0, and falls through when (s0(=a3) & a4(=0x800000)) != 0.
  The `beq` branch at 0x4ee1cc targets 0x4ee274, is taken when (s0(=a3) & 0x40) == 0, and falls through when (s0(=a3) & 0x40) != 0.
  The `beq` branch at 0x4ee1d4 targets 0x4ee274, is taken when a1 == a7(=0x3), and falls through when a1 != a7(=0x3).
  The `beq` branch at 0x4ee200 targets 0x4ee4b4, is taken when (s0(=a3) & a4(=0x800000)) == 0, and falls through when (s0(=a3) & a4(=0x800000)) != 0.
  The `beq` branch at 0x4ee21c targets 0x4ee2d4, is taken when a1 == a5(=0x2), and falls through when a1 != a5(=0x2).
  The `beq` branch at 0x4ee248 targets 0x4ee4c8, is taken when (s0(=a3) & a4(=0x800000)) == 0, and falls through when (s0(=a3) & a4(=0x800000)) != 0.
  The `beq` branch at 0x4ee26c targets 0x4edf98 and is always taken.
  The `beq` branch at 0x4ee278 targets 0x4ee314, is taken when (s0(=a3) & 0x80) == 0, and falls through when (s0(=a3) & 0x80) != 0.
  The `beq` branch at 0x4ee280 targets 0x4ee314, is taken when a1 == a7(=0x2), and falls through when a1 != a7(=0x2).
  The `beq` branch at 0x4ee2ac targets 0x4ee4dc, is taken when (s0(=a3) & a4(=0x800000)) == 0, and falls through when (s0(=a3) & a4(=0x800000)) != 0.
  The `beq` branch at 0x4ee2b4 targets 0x4edfa8 and is always taken.
  The `beq` branch at 0x4ee2cc targets 0x4ee00c and is always taken.
  The `beq` branch at 0x4ee2d8 targets 0x4ee370, is taken when (s0(=a3) & 0x200) == 0, and falls through when (s0(=a3) & 0x200) != 0.
  The `beq` branch at 0x4ee304 targets 0x4ee558, is taken when (s0(=a3) & a4(=0x800000)) == 0, and falls through when (s0(=a3) & a4(=0x800000)) != 0.
  The `beq` branch at 0x4ee30c targets 0x4edfa8 and is always taken.
  The `beq` branch at 0x4ee318 targets 0x4ee458, is taken when (s0(=a3) & 0x100) == 0, and falls through when (s0(=a3) & 0x100) != 0.
  The `beq` branch at 0x4ee320 targets 0x4ee3f0, is taken when a1 == a7(=0x2), and falls through when a1 != a7(=0x2).
  The `beq` branch at 0x4ee34c targets 0x4ee568, is taken when (s0(=a3) & a4(=0x800000)) == 0, and falls through when (s0(=a3) & a4(=0x800000)) != 0.
  The `beq` branch at 0x4ee354 targets 0x4edfa8 and is always taken.
  The `beq` branch at 0x4ee368 targets 0x4ee088 and is always taken.
  The `beq` branch at 0x4ee378 targets 0x4ee4ec, is taken when v0(=[a2+40]) == a5(=0x83f0), and falls through when v0(=[a2+40]) != a5(=0x83f0).
  The `beq` branch at 0x4ee380 targets 0x4ee4f0, is taken when v0(=[a2+40]) == a6(=0x83f3), and falls through when v0(=[a2+40]) != a6(=0x83f3).
  The `beq` branch at 0x4ee38c targets 0x4ee458, is taken when a7(=[a2+12]) == 0, and falls through when a7(=[a2+12]) != 0.
  The `beq` branch at 0x4ee3b8 targets 0x4ee578, is taken when (s0(=a3) & a4(=0x800000)) == 0, and falls through when (s0(=a3) & a4(=0x800000)) != 0.
  The `beq` branch at 0x4ee3c0 targets 0x4edfa8 and is always taken.
  The `beq` branch at 0x4ee3d4 targets 0x4ee11c and is always taken.
  The `beq` branch at 0x4ee3e8 targets 0x4ee0e0 and is always taken.
  The `beq` branch at 0x4ee3f4 targets 0x4ee460, is taken when (s0(=a3) & 0x200) == 0, and falls through when (s0(=a3) & 0x200) != 0.
  The `beq` branch at 0x4ee420 targets 0x4ee588, is taken when (s0(=a3) & a4(=0x800000)) == 0, and falls through when (s0(=a3) & a4(=0x800000)) != 0.
  The `beq` branch at 0x4ee428 targets 0x4edfa8 and is always taken.
  The `beq` branch at 0x4ee43c targets 0x4ee164 and is always taken.
  The `beq` branch at 0x4ee450 targets 0x4ee1b4 and is always taken.
  The `beq` branch at 0x4ee458 targets 0x4edfa8 and is always taken.
  The `beq` branch at 0x4ee468 targets 0x4ee520, is taken when v0(=[a2+40]) == a5(=0x83f0), and falls through when v0(=[a2+40]) != a5(=0x83f0).
  The `beq` branch at 0x4ee470 targets 0x4ee520, is taken when v0(=[a2+40]) == a7(=0x83f3), and falls through when v0(=[a2+40]) != a7(=0x83f3).
  The `beq` branch at 0x4ee47c targets 0x4ee458, is taken when t0(=[a2+12]) == 0, and falls through when t0(=[a2+12]) != 0.
  The `bgez` branch at 0x4ee4a4 targets 0x4ee5a8, is taken when a4(=(a3 << 0x28)) >= 0 (signed), and falls through when a4(=(a3 << 0x28)) < 0 (signed).
  The `beq` branch at 0x4ee4ac targets 0x4edfa8 and is always taken.
  The `beq` branch at 0x4ee4c0 targets 0x4ee208 and is always taken.
  The `beq` branch at 0x4ee4d4 targets 0x4ee250 and is always taken.
  The `beq` branch at 0x4ee4e4 targets 0x4ee2b4 and is always taken.
  The `bgez` branch at 0x4ee510 targets 0x4ee598, is taken when a4(=(a3 << 0x28)) >= 0 (signed), and falls through when a4(=(a3 << 0x28)) < 0 (signed).
  The `beq` branch at 0x4ee518 targets 0x4edfa8 and is always taken.
  The `bne` branch at 0x4ee520 targets 0x4ee478, is taken when a1 != a6(=0x1), and falls through when a1 == a6(=0x1).
  The `bgez` branch at 0x4ee548 targets 0x4ee5b8, is taken when a4(=(a3 << 0x28)) >= 0 (signed), and falls through when a4(=(a3 << 0x28)) < 0 (signed).
  The `beq` branch at 0x4ee550 targets 0x4edfa8 and is always taken.
  The `beq` branch at 0x4ee560 targets 0x4ee30c and is always taken.
  The `beq` branch at 0x4ee570 targets 0x4ee354 and is always taken.
  The `beq` branch at 0x4ee580 targets 0x4ee3c0 and is always taken.
  The `beq` branch at 0x4ee590 targets 0x4ee428 and is always taken.
  The `beq` branch at 0x4ee5a0 targets 0x4ee518 and is always taken.
  The `beq` branch at 0x4ee5b0 targets 0x4ee4ac and is always taken.
  The `beq` branch at 0x4ee5c0 targets 0x4ee550 and is always taken.
  The return at 0x4edfa0 has v0 = 0x0.
  The return at 0x4edfb0 has v0 = one of 0x0, 0x1.
  The return at 0x4ee014 has v0 = 0x0.
  The return at 0x4ee090 has v0 = 0x0.
  The return at 0x4ee0e8 has v0 = 0x0.
  The return at 0x4ee124 has v0 = 0x0.
  The return at 0x4ee16c has v0 = 0x0.
  The return at 0x4ee1c0 has v0 = 0x0.
  The return at 0x4ee210 has v0 = 0x0.
  The return at 0x4ee258 has v0 = 0x0.
  The instructions from 0x4edfb8 to 0x4edfbc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4ee2bc to 0x4ee2bc are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x4ee048 uses the jump table at 0xb6f500 with targets 0x4ee0f0, 0x4ee0f0, 0x4ee0f0, 0x4ee098, 0x4ee0f0, 0x4ee0f0, 0x4ee098, 0x4ee0f0, 0x4ee0f0, 0x4ee0f0, 0x4ee0f0, 0x4ee0f0, 0x4ee0f0, 0x4ee0f0, 0x4ee0f0, 0x4ee098, 0x4ee0f0, 0x4ee098, 0x4ee0f0, 0x4ee0f0, 0x4ee0f0, 0x4ee098, 0x4ee098, 0x4ee0f0, 0x4ee0f0, 0x4ee0f0, 0x4ee098.

- `UpdateObject` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4ef900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4ef900-0x4ef908 (8 bytes).
  It occupies 8 bytes.
  The `sw` at 0x4ef904 stores 4 bytes to a0 (arg0 at entry) +0x80.
  The return at 0x4ef900 has v0 = ?.

- `FreeObject` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4ef980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x4ef980-0x4ef988 (8 bytes).
  It occupies 8 bytes.
  The `sw` at 0x4ef984 stores 4 bytes to a1 (arg1 at entry) +0x80.
  The return at 0x4ef980 has v0 = ?.

- `__FGLTexMgrGetResidence` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x504ec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x504ec0-0x504ed8 (24 bytes).
  It occupies 24 bytes.
  The `lw` at 0x504ecc loads 4 bytes from a0 (arg0 at entry) +0x20.
  The `beq` branch at 0x504ec0 targets 0x504ed0, is taken when a0 == 0, and falls through when a0 != 0.
  The return at 0x504ec8 has v0 = [a0+32].
  The return at 0x504ed0 has v0 = 0x0.

- `__glATILazyMipmapRemoval` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x504f00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x504f00-0x504f78 (120 bytes).
  It occupies 120 bytes.
  The `lw` at 0x504f00 loads 4 bytes from a1 (arg1 at entry) +0x94.
  The `lw` at 0x504f04 loads 4 bytes from a1 (arg1 at entry) +0x98.
  The `lw` at 0x504f08 loads 4 bytes from a1 (arg1 at entry) +0x18.
  The `lw` at 0x504f28 loads 4 bytes from a1 (arg1 at entry) +0x6c.
  The `lw` at 0x504f30 loads 4 bytes from a1 (arg1 at entry) +0x58.
  The `lw` at 0x504f6c loads 4 bytes from a1 (arg1 at entry) +0x50.
  Calls (unknown callee) via register with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a1+108], a5=0x2601, a6=[a1+88] (`jr` at 0x504f70).
  The `beq` branch at 0x504f1c targets 0x504f28, is taken when a3(=[a1+24]) >= a4(?) (signed), and falls through when a3(=[a1+24]) < a4(?) (signed).
  The `bltz` branch at 0x504f2c targets 0x504f54, is taken when a4(?) < 0 (signed), and falls through when a4(?) >= 0 (signed).
  The `beq` branch at 0x504f34 targets 0x504f4c, is taken when a3(=[a1+108]) == a7(=0x2600), and falls through when a3(=[a1+108]) != a7(=0x2600).
  The `beq` branch at 0x504f3c targets 0x504f4c, is taken when a3(=[a1+108]) == a5(=0x2601), and falls through when a3(=[a1+108]) != a5(=0x2601).
  The `bne` branch at 0x504f44 targets 0x504f6c, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x504f54 targets 0x504f4c, is taken when a3(=[a1+108]) == a7(=0x2600), and falls through when a3(=[a1+108]) != a7(=0x2600).
  The `beq` branch at 0x504f5c targets 0x504f4c, is taken when a3(=[a1+108]) == t0(=0x2601), and falls through when a3(=[a1+108]) != t0(=0x2601).
  The `bgez` branch at 0x504f64 targets 0x504f4c, is taken when a6(=[a1+88]) >= 0 (signed), and falls through when a6(=[a1+88]) < 0 (signed).
  The return at 0x504f4c has v0 = ?.

- `__GL_SET_VALIDATE_DIRTY_ALL` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x504f80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x504f80-0x505a30 (2736 bytes).
  It occupies 2736 bytes.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0xc074, including `sw` at 0x504f88, `sw` at 0x504fe0.
  16 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0xc070, including `sw` at 0x504f90, `sw` at 0x505190, `sw` at 0x5051a0.
  20 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0xc06c, including `sw` at 0x504f98, `sw` at 0x504fac, `sw` at 0x504fd4.
  32 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x44b74, including `sw` at 0x504f9c, `sw` at 0x505384, `sw` at 0x5053b8.
  25 such `sb` accesses store 1 byte to a0 (arg0 at entry) +0xa8, including `sb` at 0x504fa0, `sb` at 0x504fb4, `sb` at 0x504fe4.
  33 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc06c, including `lw` at 0x504fa4, `lw` at 0x504fb8, `lw` at 0x504fe8.
  The `lw` at 0x504fc8 loads 4 bytes from a0 (arg0 at entry) +0xc074.
  24 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc070, including `lw` at 0x505174, `lw` at 0x5051c0, `lw` at 0x5051d8.
  The `sw` at 0x505298 stores 4 bytes to a0 (arg0 at entry) +0xc098.
  The `sw` at 0x5052a0 stores 4 bytes to a0 (arg0 at entry) +0xc094.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7444, including `lw` at 0x5052a4, `lw` at 0x5052c8, `lw` at 0x5052e4.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0x5052c0, `sw` at 0x5052c4, `sw` at 0x5052dc.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7d84, including `lw` at 0x505300, `lw` at 0x505310, `lw` at 0x5059d0.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0xc07c, including `sw` at 0x50530c, `sw` at 0x5059dc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc088, including `lw` at 0x505314, `lw` at 0x5059e8.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0xc080, including `sw` at 0x505324, `sw` at 0x5059f4.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7d7c, including `lw` at 0x50532c, `lw` at 0x5059f8.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0xc090, including `sw` at 0x50533c, `sw` at 0x505a14.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0xc08c, including `sw` at 0x505340, `sw` at 0x505a08.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0xc088, including `sw` at 0x505348, `sw` at 0x505a00.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0xc084, including `sw` at 0x505358, `sw` at 0x505a2c.
  The `lw` at 0x50535c loads 4 bytes from a0 (arg0 at entry) +0x44c18.
  62 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44b74, including `lw` at 0x505368, `lw` at 0x50537c, `lw` at 0x50539c.
  31 such `sw` accesses store 4 bytes to (a0 + ([a0+281460] << 0x2)) +0x44b78, including `sw` at 0x505378, `sw` at 0x5053ac, `sw` at 0x5053e0.
  The `lw` at 0x505390 loads 4 bytes from a0 (arg0 at entry) +0x44bfc.
  The `lw` at 0x5053c4 loads 4 bytes from a0 (arg0 at entry) +0x44c00.
  The `lw` at 0x505400 loads 4 bytes from a0 (arg0 at entry) +0x44c04.
  The `lw` at 0x505434 loads 4 bytes from a0 (arg0 at entry) +0x44c1c.
  The `lw` at 0x505468 loads 4 bytes from a0 (arg0 at entry) +0x44c24.
  The `lw` at 0x50549c loads 4 bytes from a0 (arg0 at entry) +0x44c28.
  The `lw` at 0x5054d0 loads 4 bytes from a0 (arg0 at entry) +0x44c2c.
  The `lw` at 0x505504 loads 4 bytes from a0 (arg0 at entry) +0x44c30.
  The `lw` at 0x505540 loads 4 bytes from a0 (arg0 at entry) +0x44c34.
  The `lw` at 0x505574 loads 4 bytes from a0 (arg0 at entry) +0x44c3c.
  The `lw` at 0x5055a8 loads 4 bytes from a0 (arg0 at entry) +0x44c40.
  The `lw` at 0x5055dc loads 4 bytes from a0 (arg0 at entry) +0x44c44.
  The `lw` at 0x505610 loads 4 bytes from a0 (arg0 at entry) +0x44c20.
  The `lw` at 0x505644 loads 4 bytes from a0 (arg0 at entry) +0x44c08.
  The `lw` at 0x505680 loads 4 bytes from a0 (arg0 at entry) +0x44c0c.
  The `lw` at 0x5056b4 loads 4 bytes from a0 (arg0 at entry) +0x44c14.
  The `lw` at 0x5056e8 loads 4 bytes from a0 (arg0 at entry) +0x44c38.
  The `lw` at 0x50571c loads 4 bytes from a0 (arg0 at entry) +0x44c48.
  The `lw` at 0x505750 loads 4 bytes from a0 (arg0 at entry) +0x44c4c.
  The `lw` at 0x505784 loads 4 bytes from a0 (arg0 at entry) +0x44c54.
  The `lw` at 0x5057c0 loads 4 bytes from a0 (arg0 at entry) +0x44c58.
  The `lw` at 0x5057f4 loads 4 bytes from a0 (arg0 at entry) +0x44c5c.
  The `lw` at 0x505828 loads 4 bytes from a0 (arg0 at entry) +0x44c60.
  The `lw` at 0x50585c loads 4 bytes from a0 (arg0 at entry) +0x44c64.
  The `lw` at 0x505890 loads 4 bytes from a0 (arg0 at entry) +0x44c50.
  The `lw` at 0x5058c4 loads 4 bytes from a0 (arg0 at entry) +0x44c68.
  The `lw` at 0x505900 loads 4 bytes from a0 (arg0 at entry) +0x44c6c.
  The `lw` at 0x505934 loads 4 bytes from a0 (arg0 at entry) +0x44c70.
  The `lw` at 0x505968 loads 4 bytes from a0 (arg0 at entry) +0x44c78.
  The `lw` at 0x50599c loads 4 bytes from a0 (arg0 at entry) +0x44c7c.
  The `beq` branch at 0x504fc0 targets 0x50535c, is taken when (a2(=[a0+49260]) & 0x80) == 0, and falls through when (a2(=[a0+49260]) & 0x80) != 0.
  The `beq` branch at 0x504ff0 targets 0x505390, is taken when (a2(=[a0+49260]) & 0x2) == 0, and falls through when (a2(=[a0+49260]) & 0x2) != 0.
  The `beq` branch at 0x505008 targets 0x5053c4, is taken when (a2(=[a0+49260]) & 0x4) == 0, and falls through when (a2(=[a0+49260]) & 0x4) != 0.
  The `beq` branch at 0x505020 targets 0x505400, is taken when (a2(=[a0+49260]) & 0x8) == 0, and falls through when (a2(=[a0+49260]) & 0x8) != 0.
  The `beq` branch at 0x505038 targets 0x505434, is taken when (a2(=[a0+49260]) & 0x100) == 0, and falls through when (a2(=[a0+49260]) & 0x100) != 0.
  The `beq` branch at 0x505050 targets 0x505468, is taken when (a2(=[a0+49260]) & 0x400) == 0, and falls through when (a2(=[a0+49260]) & 0x400) != 0.
  The `beq` branch at 0x505060 targets 0x50549c, is taken when (a2(=([a0+49260] | 0x400)) & 0x4000) == 0, and falls through when (a2(=([a0+49260] | 0x400)) & 0x4000) != 0.
  The `beq` branch at 0x505070 targets 0x5054d0, is taken when (a2(?) & 0x800) == 0, and falls through when (a2(?) & 0x800) != 0.
  The `beq` branch at 0x50508c targets 0x505504, is taken when (a2(=[a0+49260]) & 0x1000) == 0, and falls through when (a2(=[a0+49260]) & 0x1000) != 0.
  The `beq` branch at 0x5050a4 targets 0x505540, is taken when (a2(=[a0+49260]) & 0x2000) == 0, and falls through when (a2(=[a0+49260]) & 0x2000) != 0.
  The `beq` branch at 0x5050bc targets 0x505574, is taken when (a2(=[a0+49260]) & a3(=0x10000)) == 0, and falls through when (a2(=[a0+49260]) & a3(=0x10000)) != 0.
  The `bgez` branch at 0x5050d4 targets 0x5055a8, is taken when v1(=([a0+49260] << 0x2e)) >= 0 (signed), and falls through when v1(=([a0+49260] << 0x2e)) < 0 (signed).
  The `beq` branch at 0x5050e4 targets 0x5055dc, is taken when (a2(=([a0+49260] | 0x20000)) & a5(=0x40000)) == 0, and falls through when (a2(=([a0+49260] | 0x20000)) & a5(=0x40000)) != 0.
  The `beq` branch at 0x505100 targets 0x505610, is taken when (a2(=[a0+49260]) & 0x200) == 0, and falls through when (a2(=[a0+49260]) & 0x200) != 0.
  The `beq` branch at 0x505110 targets 0x505644, is taken when (a2(=([a0+49260] | 0x200)) & 0x10) == 0, and falls through when (a2(=([a0+49260] | 0x200)) & 0x10) != 0.
  The `beq` branch at 0x505134 targets 0x505680, is taken when (a2(=[a0+49260]) & 0x20) == 0, and falls through when (a2(=[a0+49260]) & 0x20) != 0.
  The `beq` branch at 0x50514c targets 0x5056b4, is taken when (a2(=[a0+49260]) & 0x40) == 0, and falls through when (a2(=[a0+49260]) & 0x40) != 0.
  The `beq` branch at 0x505164 targets 0x5056e8, is taken when (a2(=[a0+49260]) & 0x8000) == 0, and falls through when (a2(=[a0+49260]) & 0x8000) != 0.
  The `beq` branch at 0x50517c targets 0x50571c, is taken when (a3(=[a0+49264]) & 0x1) == 0, and falls through when (a3(=[a0+49264]) & 0x1) != 0.
  The `beq` branch at 0x50518c targets 0x505750, is taken when (a3(=([a0+49264] | 0x1)) & 0x2) == 0, and falls through when (a3(=([a0+49264] | 0x1)) & 0x2) != 0.
  The `beq` branch at 0x50519c targets 0x505784, is taken when (a3(?) & 0x8) == 0, and falls through when (a3(?) & 0x8) != 0.
  The `beq` branch at 0x5051ac targets 0x5057c0, is taken when (a3(?) & 0x10) == 0, and falls through when (a3(?) & 0x10) != 0.
  The `beq` branch at 0x5051c8 targets 0x5057f4, is taken when (a3(=[a0+49264]) & 0x20) == 0, and falls through when (a3(=[a0+49264]) & 0x20) != 0.
  The `beq` branch at 0x5051e0 targets 0x505828, is taken when (a3(=[a0+49264]) & 0x40) == 0, and falls through when (a3(=[a0+49264]) & 0x40) != 0.
  The `beq` branch at 0x5051f8 targets 0x50585c, is taken when (a3(=[a0+49264]) & 0x80) == 0, and falls through when (a3(=[a0+49264]) & 0x80) != 0.
  The `beq` branch at 0x505210 targets 0x505890, is taken when (a3(=[a0+49264]) & 0x4) == 0, and falls through when (a3(=[a0+49264]) & 0x4) != 0.
  The `beq` branch at 0x505228 targets 0x5058c4, is taken when (a3(=[a0+49264]) & 0x100) == 0, and falls through when (a3(=[a0+49264]) & 0x100) != 0.
  The `beq` branch at 0x505240 targets 0x505900, is taken when (a3(=[a0+49264]) & 0x200) == 0, and falls through when (a3(=[a0+49264]) & 0x200) != 0.
  The `beq` branch at 0x505250 targets 0x505934, is taken when (a3(=([a0+49264] | 0x200)) & 0x400) == 0, and falls through when (a3(=([a0+49264] | 0x200)) & 0x400) != 0.
  The `beq` branch at 0x50526c targets 0x505968, is taken when (a3(=[a0+49264]) & 0x800) == 0, and falls through when (a3(=[a0+49264]) & 0x800) != 0.
  The `beq` branch at 0x505284 targets 0x50599c, is taken when (a3(=[a0+49264]) & 0x1000) == 0, and falls through when (a3(=[a0+49264]) & 0x1000) != 0.
  The `blez` branch at 0x5052a8 targets 0x5059d0, is taken when a4(=[a0+29764]) <= 0 (signed), and falls through when a4(=[a0+29764]) > 0 (signed).
  The `beq` branch at 0x5052d4 targets 0x505300, is taken when a2(?) >= t2(=[a0+29764]) (signed), and falls through when a2(?) < t2(=[a0+29764]) (signed).
  The `bne` branch at 0x5052f8 targets 0x5052c0, is taken when a2(?) < t3(=[a0+29764]) (signed), and falls through when a2(?) >= t3(=[a0+29764]) (signed).
  The `beq` branch at 0x505360 targets 0x504fc8, is taken when t0(=[a0+281624]) == 0, and falls through when t0(=[a0+281624]) != 0.
  The `beq` branch at 0x505388 targets 0x504fc8 and is always taken.
  The `beq` branch at 0x505394 targets 0x504ff8, is taken when t0(=[a0+281596]) == 0, and falls through when t0(=[a0+281596]) != 0.
  The `beq` branch at 0x5053bc targets 0x504ff4 and is always taken.
  The `beq` branch at 0x5053c8 targets 0x505010, is taken when t0(=[a0+281600]) == 0, and falls through when t0(=[a0+281600]) != 0.
  The `beq` branch at 0x5053f0 targets 0x50500c and is always taken.
  The `beq` branch at 0x505404 targets 0x505028, is taken when t0(=[a0+281604]) == 0, and falls through when t0(=[a0+281604]) != 0.
  The `beq` branch at 0x50542c targets 0x505024 and is always taken.
  The `beq` branch at 0x505438 targets 0x505040, is taken when t0(=[a0+281628]) == 0, and falls through when t0(=[a0+281628]) != 0.
  The `beq` branch at 0x505460 targets 0x50503c and is always taken.
  The `beq` branch at 0x50546c targets 0x50505c, is taken when t0(=[a0+281636]) == 0, and falls through when t0(=[a0+281636]) != 0.
  The `beq` branch at 0x505494 targets 0x505058 and is always taken.
  The `beq` branch at 0x5054a0 targets 0x50506c, is taken when t0(=[a0+281640]) == 0, and falls through when t0(=[a0+281640]) != 0.
  The `beq` branch at 0x5054c8 targets 0x505068 and is always taken.
  The `beq` branch at 0x5054d4 targets 0x50507c, is taken when t0(=[a0+281644]) == 0, and falls through when t0(=[a0+281644]) != 0.
  The `beq` branch at 0x5054fc targets 0x505078 and is always taken.
  The `beq` branch at 0x505508 targets 0x505094, is taken when t0(=[a0+281648]) == 0, and falls through when t0(=[a0+281648]) != 0.
  The `beq` branch at 0x505530 targets 0x505090 and is always taken.
  The `beq` branch at 0x505544 targets 0x5050ac, is taken when t0(=[a0+281652]) == 0, and falls through when t0(=[a0+281652]) != 0.
  The `beq` branch at 0x50556c targets 0x5050a8 and is always taken.
  The `beq` branch at 0x505578 targets 0x5050c4, is taken when t0(=[a0+281660]) == 0, and falls through when t0(=[a0+281660]) != 0.
  The `beq` branch at 0x5055a0 targets 0x5050c0 and is always taken.
  The `beq` branch at 0x5055ac targets 0x5050e0, is taken when a3(=[a0+281664]) == 0, and falls through when a3(=[a0+281664]) != 0.
  The `beq` branch at 0x5055d4 targets 0x5050dc and is always taken.
  The `beq` branch at 0x5055e0 targets 0x5050f0, is taken when a3(=[a0+281668]) == 0, and falls through when a3(=[a0+281668]) != 0.
  The `beq` branch at 0x505608 targets 0x5050ec and is always taken.
  The `beq` branch at 0x505614 targets 0x50510c, is taken when a3(=[a0+281632]) == 0, and falls through when a3(=[a0+281632]) != 0.
  The `beq` branch at 0x50563c targets 0x505108 and is always taken.
  The `beq` branch at 0x505648 targets 0x50511c, is taken when a3(=[a0+281608]) == 0, and falls through when a3(=[a0+281608]) != 0.
  The `beq` branch at 0x505670 targets 0x505118 and is always taken.
  The `beq` branch at 0x505684 targets 0x50513c, is taken when a3(=[a0+281612]) == 0, and falls through when a3(=[a0+281612]) != 0.
  The `beq` branch at 0x5056ac targets 0x505138 and is always taken.
  The `beq` branch at 0x5056b8 targets 0x505154, is taken when a3(=[a0+281620]) == 0, and falls through when a3(=[a0+281620]) != 0.
  The `beq` branch at 0x5056e0 targets 0x505150 and is always taken.
  The `beq` branch at 0x5056ec targets 0x50516c, is taken when a3(=[a0+281656]) == 0, and falls through when a3(=[a0+281656]) != 0.
  The `beq` branch at 0x505714 targets 0x505168 and is always taken.
  The `beq` branch at 0x505720 targets 0x505188, is taken when a2(=[a0+281672]) == 0, and falls through when a2(=[a0+281672]) != 0.
  The `beq` branch at 0x505748 targets 0x505184 and is always taken.
  The `beq` branch at 0x505754 targets 0x505198, is taken when a2(=[a0+281676]) == 0, and falls through when a2(=[a0+281676]) != 0.
  The `beq` branch at 0x50577c targets 0x505194 and is always taken.
  The `beq` branch at 0x505788 targets 0x5051a8, is taken when a2(=[a0+281684]) == 0, and falls through when a2(=[a0+281684]) != 0.
  The `beq` branch at 0x5057b0 targets 0x5051a4 and is always taken.
  The `beq` branch at 0x5057c4 targets 0x5051b8, is taken when a2(=[a0+281688]) == 0, and falls through when a2(=[a0+281688]) != 0.
  The `beq` branch at 0x5057ec targets 0x5051b4 and is always taken.
  The `beq` branch at 0x5057f8 targets 0x5051d0, is taken when a2(=[a0+281692]) == 0, and falls through when a2(=[a0+281692]) != 0.
  The `beq` branch at 0x505820 targets 0x5051cc and is always taken.
  The `beq` branch at 0x50582c targets 0x5051e4, is taken when a2(=[a0+281696]) == 0, and falls through when a2(=[a0+281696]) != 0.
  The `beq` branch at 0x505854 targets 0x5051e4 and is always taken.
  The `beq` branch at 0x505860 targets 0x505200, is taken when a2(=[a0+281700]) == 0, and falls through when a2(=[a0+281700]) != 0.
  The `beq` branch at 0x505888 targets 0x5051fc and is always taken.
  The `beq` branch at 0x505894 targets 0x505218, is taken when a2(=[a0+281680]) == 0, and falls through when a2(=[a0+281680]) != 0.
  The `beq` branch at 0x5058bc targets 0x505214 and is always taken.
  The `beq` branch at 0x5058c8 targets 0x505230, is taken when a2(=[a0+281704]) == 0, and falls through when a2(=[a0+281704]) != 0.
  The `beq` branch at 0x5058f0 targets 0x50522c and is always taken.
  The `beq` branch at 0x505904 targets 0x50524c, is taken when a2(=[a0+281708]) == 0, and falls through when a2(=[a0+281708]) != 0.
  The `beq` branch at 0x50592c targets 0x505248 and is always taken.
  The `beq` branch at 0x505938 targets 0x50525c, is taken when a2(=[a0+281712]) == 0, and falls through when a2(=[a0+281712]) != 0.
  The `beq` branch at 0x505960 targets 0x505258 and is always taken.
  The `beq` branch at 0x50596c targets 0x505270, is taken when a2(=[a0+281720]) == 0, and falls through when a2(=[a0+281720]) != 0.
  The `beq` branch at 0x505994 targets 0x505270 and is always taken.
  The `beq` branch at 0x5059a0 targets 0x50528c, is taken when a2(=[a0+281724]) == 0, and falls through when a2(=[a0+281724]) != 0.
  The `beq` branch at 0x5059c8 targets 0x505288 and is always taken.
  The return at 0x505354 has v0 = ([a0+49264] | 0xffffffff80000000).
  The return at 0x505a28 has v0 = ?.
  The instructions from 0x5053f8 to 0x5053fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x505538 to 0x50553c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x505678 to 0x50567c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x5057b8 to 0x5057bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x5058f8 to 0x5058fc are not reached by any path from the entry, and their branches are not listed.

- `Coverage` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x593fc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x593fc0-0x59418c (460 bytes).
  It occupies 460 bytes.
  The `bc1t` branch at 0x59401c targets 0x594028, is taken when f7 <= f19 (c.le.s at 0x594014), and falls through when not (f7 <= f19 (c.le.s at 0x594014)).
  The `bc1t` branch at 0x594034 targets 0x594040, is taken when f9 <= f19 (c.le.s at 0x594028), and falls through when not (f9 <= f19 (c.le.s at 0x594028)).
  The `bc1t` branch at 0x59404c targets 0x594058, is taken when f8 <= f19 (c.le.s at 0x594040), and falls through when not (f8 <= f19 (c.le.s at 0x594040)).
  The `bc1t` branch at 0x594068 targets 0x594074, is taken when f6 <= f19 (c.le.s at 0x59405c), and falls through when not (f6 <= f19 (c.le.s at 0x59405c)).
  The `bc1t` branch at 0x59407c targets 0x594088, is taken when f7 <= f17 (c.le.s at 0x594074), and falls through when not (f7 <= f17 (c.le.s at 0x594074)).
  The `bc1t` branch at 0x594094 targets 0x5940a0, is taken when f9 <= f17 (c.le.s at 0x594088), and falls through when not (f9 <= f17 (c.le.s at 0x594088)).
  The `bc1t` branch at 0x5940ac targets 0x5940b8, is taken when f8 <= f17 (c.le.s at 0x5940a0), and falls through when not (f8 <= f17 (c.le.s at 0x5940a0)).
  The `bc1t` branch at 0x5940c8 targets 0x5940d4, is taken when f6 <= f17 (c.le.s at 0x5940bc), and falls through when not (f6 <= f17 (c.le.s at 0x5940bc)).
  The `bc1t` branch at 0x5940dc targets 0x5940e8, is taken when f7 <= f16 (c.le.s at 0x5940d4), and falls through when not (f7 <= f16 (c.le.s at 0x5940d4)).
  The `bc1t` branch at 0x5940f4 targets 0x594100, is taken when f9 <= f16 (c.le.s at 0x5940e8), and falls through when not (f9 <= f16 (c.le.s at 0x5940e8)).
  The `bc1t` branch at 0x59410c targets 0x594118, is taken when f8 <= f16 (c.le.s at 0x594100), and falls through when not (f8 <= f16 (c.le.s at 0x594100)).
  The `bc1t` branch at 0x594128 targets 0x594134, is taken when f6 <= f16 (c.le.s at 0x59411c), and falls through when not (f6 <= f16 (c.le.s at 0x59411c)).
  The `bc1t` branch at 0x59413c targets 0x594148, is taken when f7 <= f13 (c.le.s at 0x594134), and falls through when not (f7 <= f13 (c.le.s at 0x594134)).
  The `bc1t` branch at 0x594150 targets 0x59415c, is taken when f9 <= f13 (c.le.s at 0x594148), and falls through when not (f9 <= f13 (c.le.s at 0x594148)).
  The `bc1t` branch at 0x594164 targets 0x594170, is taken when f8 <= f13 (c.le.s at 0x59415c), and falls through when not (f8 <= f13 (c.le.s at 0x59415c)).
  The `bc1t` branch at 0x594178 targets 0x594184, is taken when f6 <= f13 (c.le.s at 0x594170), and falls through when not (f6 <= f13 (c.le.s at 0x594170)).
  The return at 0x594184 has v0 = ?.

- `__GL_VALIDATE` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x5a1d80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x5a1d80-0x5a1dc0 (64 bytes).
  It occupies 64 bytes.
  The `lw` at 0x5a1d88 loads 4 bytes from a0 (arg0 at entry) +0xa4.
  The `sw` at 0x5a1d90 stores 4 bytes to a0 (arg0 at entry) +0xa4.
  The `lw` at 0x5a1d9c loads 4 bytes from a0 (arg0 at entry) +0xc10c.
  The `jalr` at 0x5a1da4 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x5a1d8c targets 0x5a1db0, is taken when s8(=[a0+164]) == 0, and falls through when s8(=[a0+164]) != 0.
  The return at 0x5a1db8 has v0 = [a0+164].

- `ProcessArgument` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x5a4e40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x5a4e40-0x5a501c (476 bytes).
  It occupies 476 bytes.
  5 such `sw` accesses store 4 bytes to a5 (arg5 at entry) +0x0, including `sw` at 0x5a4ea4, `sw` at 0x5a4f4c, `sw` at 0x5a4f84.
  3 such `sw` accesses store 4 bytes to a5 (arg5 at entry) +0xc, including `sw` at 0x5a4ee0, `sw` at 0x5a4f2c, `sw` at 0x5a4f5c.
  The `sw` at 0x5a4eec stores 4 bytes to a5 (arg5 at entry) +0x4.
  5 such `sw` accesses store 4 bytes to a5 (arg5 at entry) +0x8, including `sw` at 0x5a4ef8, `sw` at 0x5a4f54, `sw` at 0x5a4f8c.
  The `sb` at 0x5a4f20 stores 1 byte to a1 (arg1 at entry) +0x2c.
  The `bne` branch at 0x5a4e48 targets 0x5a4e60, is taken when a2 < at(=0x8921) (unsigned), and falls through when a2 >= at(=0x8921) (unsigned).
  The `beq` branch at 0x5a4e58 targets 0x5a4ea0, is taken when v0(=0x8926) >= a2 (unsigned), and falls through when v0(=0x8926) < a2 (unsigned).
  The `bne` branch at 0x5a4e64 targets 0x5a4e78, is taken when a2 < v1(=0x8941) (unsigned), and falls through when a2 >= v1(=0x8941) (unsigned).
  The `beq` branch at 0x5a4e70 targets 0x5a4ea0, is taken when a0(=0x8948) >= a2 (unsigned), and falls through when a0(=0x8948) < a2 (unsigned).
  The `beq` branch at 0x5a4e78 targets 0x5a4ea0, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x5a4e80 targets 0x5a4ea0, is taken when a2 == a6(=0x1), and falls through when a2 != a6(=0x1).
  The `beq` branch at 0x5a4e88 targets 0x5a4ea0, is taken when a2 == a7(=0x8577), and falls through when a2 != a7(=0x8577).
  The `beq` branch at 0x5a4e90 targets 0x5a4ea0, is taken when a2 == t0(=0x896d), and falls through when a2 != t0(=0x896d).
  The `beq` branch at 0x5a4ea0 targets 0x5a4ed4, is taken when a3 == 0, and falls through when a3 != 0.
  The `beq` branch at 0x5a4eac targets 0x5a4ed4, is taken when a3 == t1(=0x1903), and falls through when a3 != t1(=0x1903).
  The `beq` branch at 0x5a4eb4 targets 0x5a4ed4, is taken when a3 == t2(=0x1904), and falls through when a3 != t2(=0x1904).
  The `beq` branch at 0x5a4ebc targets 0x5a4ed4, is taken when a3 == t3(=0x1905), and falls through when a3 != t3(=0x1905).
  The `beq` branch at 0x5a4ec4 targets 0x5a4ed8, is taken when a3 == t8(=0x1906), and falls through when a3 != t8(=0x1906).
  The `beq` branch at 0x5a4edc targets 0x5a4eec, is taken when (a4 & t9(=-0x10)) == 0, and falls through when (a4 & t9(=-0x10)) != 0.
  The `beq` branch at 0x5a4efc targets 0x5a4f24, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x5a4f04 targets 0x5a4f58, is taken when a2 == a7(=0x1), and falls through when a2 != a7(=0x1).
  The `beq` branch at 0x5a4f0c targets 0x5a4f1c, is taken when a2 == a3(=0x896d), and falls through when a2 != a3(=0x896d).
  The `beq` branch at 0x5a4f28 targets 0x5a4f90, is taken when (a4 & 0x2) == 0, and falls through when (a4 & 0x2) != 0.
  The `beq` branch at 0x5a4f40 targets 0x5a4fd4, is taken when a0(?) == a2(=0x9), and falls through when a0(?) != a2(=0x9).
  The `beq` branch at 0x5a4f58 targets 0x5a4f90, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x5a4f6c targets 0x5a4fe0, is taken when (a1(?) & 0x8) == 0, and falls through when (a1(?) & 0x8) != 0.
  The `beq` branch at 0x5a4f7c targets 0x5a4fb4, is taken when a2(?) == a3(=0x9), and falls through when a2(?) != a3(=0x9).
  The `beq` branch at 0x5a4f94 targets 0x5a5000, is taken when (a4 & 0x8) == 0, and falls through when (a4 & 0x8) != 0.
  The `beq` branch at 0x5a4fa0 targets 0x5a4fec, is taken when a7(?) == t0(=0x9), and falls through when a7(?) != t0(=0x9).
  The `beq` branch at 0x5a4fac targets 0x5a4f0c and is always taken.
  The `beq` branch at 0x5a4fbc targets 0x5a5014, is taken when (a4(?) & 0x4) == 0, and falls through when (a4(?) & 0x4) != 0.
  The `beq` branch at 0x5a4fd8 targets 0x5a4f48 and is always taken.
  The `beq` branch at 0x5a4fe4 targets 0x5a4f74 and is always taken.
  The `bne` branch at 0x5a4fec targets 0x5a4fa8, is taken when a2 != 0, and falls through when a2 == 0.
  The `beq` branch at 0x5a4ff4 targets 0x5a4fb8 and is always taken.
  The `bne` branch at 0x5a5000 targets 0x5a4f9c, is taken when a2 != 0, and falls through when a2 == 0.
  The `beq` branch at 0x5a500c targets 0x5a4f98 and is always taken.
  The `beq` branch at 0x5a5014 targets 0x5a4fc8 and is always taken.
  The return at 0x5a4e98 has v0 = 0x0.
  The return at 0x5a4ecc has v0 = 0x0.
  The return at 0x5a4ee4 has v0 = 0x0.
  The return at 0x5a4f14 has v0 = 0x1.
  The return at 0x5a4f1c has v0 = 0x1.
  The return at 0x5a4f50 has v0 = 0x1.
  The return at 0x5a4f88 has v0 = 0x1.
  The return at 0x5a4fcc has v0 = 0x1.
  The instructions from 0x5a4ffc to 0x5a4ffc are not reached by any path from the entry, and their branches are not listed.

- `Clear` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x5af480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x5af480-0x5afc54 (2004 bytes).
  It occupies 2004 bytes.
  The `lw` at 0x5af488 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0x5af48c loads 4 bytes from [a0] +0xeec.
  23 such `lw` accesses load 4 bytes from [a0] +0x38da0, including `lw` at 0x5af4c8, `lw` at 0x5af53c, `lw` at 0x5af55c.
  The `lw` at 0x5af4d4 loads 4 bytes from [a0] +0x36a28.
  The `lw` at 0x5af4e0 loads 4 bytes from table(0xb7009c) +0x0.
  6 such `lw` accesses load 4 bytes from [[a0]+232864] +0x280, including `lw` at 0x5af514, `lw` at 0x5af540, `lw` at 0x5af5fc.
  The `lw` at 0x5af524 loads 4 bytes from [a0] +0x7d78.
  2 such `lw` accesses load 4 bytes from [a0] +0x3806c, including `lw` at 0x5af54c, `lw` at 0x5af5bc.
  The `lw` at 0x5af550 loads 4 bytes from [[a0]+229484] +0x34.
  5 such `lw` accesses load 4 bytes from [[a0]+232864] +0x39c, including `lw` at 0x5af568, `lw` at 0x5af624, `lw` at 0x5af6d8.
  5 such `lw` accesses load 4 bytes from [a0] +0x36f00, including `lw` at 0x5af56c, `lw` at 0x5af628, `lw` at 0x5af6dc.
  The `lw` at 0x5af58c loads 4 bytes from [a0] +0x38128.
  10 such `lw` accesses load 4 bytes from [a0] +0x36f04, including `lw` at 0x5af5a8, `lw` at 0x5af660, `lw` at 0x5af714.
  The `lw` at 0x5af5c0 loads 4 bytes from [[a0]+229484] +0x38.
  6 such `lw` accesses load 4 bytes from [[a0]+232864] +0x284, including `lw` at 0x5af5dc, `lw` at 0x5af694, `lw` at 0x5af748.
  2 such `lw` accesses load 4 bytes from [a0] +0x38138, including `lw` at 0x5af608, `lw` at 0x5af674.
  The `lw` at 0x5af60c loads 4 bytes from [[a0]+229688] +0x34.
  The `lw` at 0x5af648 loads 4 bytes from [a0] +0x381f4.
  The `lw` at 0x5af678 loads 4 bytes from [[a0]+229688] +0x38.
  2 such `lw` accesses load 4 bytes from [a0] +0x382d0, including `lw` at 0x5af6bc, `lw` at 0x5af728.
  The `lw` at 0x5af6c0 loads 4 bytes from [[a0]+230096] +0x34.
  The `lw` at 0x5af6fc loads 4 bytes from [a0] +0x3838c.
  The `lw` at 0x5af72c loads 4 bytes from [[a0]+230096] +0x38.
  2 such `lw` accesses load 4 bytes from [a0] +0x3839c, including `lw` at 0x5af770, `lw` at 0x5af7dc.
  The `lw` at 0x5af774 loads 4 bytes from [[a0]+230300] +0x34.
  The `lw` at 0x5af7b0 loads 4 bytes from [a0] +0x38458.
  The `lw` at 0x5af7e0 loads 4 bytes from [[a0]+230300] +0x38.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8, including `lw` at 0x5af854, `lw` at 0x5af8bc.
  The `lw` at 0x5af858 loads 4 bytes from [a0+8] +0x34.
  The `lw` at 0x5af890 loads 4 bytes from a0 (arg0 at entry) +0xc4.
  The `lw` at 0x5af8c0 loads 4 bytes from [a0+8] +0x38.
  5 such `lw` accesses load 4 bytes from [a0] +0x35cec, including `lw` at 0x5af8f0, `lw` at 0x5af910, `lw` at 0x5af930.
  5 such `lw` accesses load 4 bytes from [a0] +0x35ce8, including `lw` at 0x5af8f4, `lw` at 0x5af914, `lw` at 0x5af934.
  5 such `lw` accesses load 4 bytes from [a0] +0x35ce4, including `lw` at 0x5af8fc, `lw` at 0x5af91c, `lw` at 0x5af93c.
  5 such `lw` accesses load 4 bytes from [a0] +0x35ce0, including `lw` at 0x5af904, `lw` at 0x5af924, `lw` at 0x5af944.
  3 such `lbu` accesses load 1 byte from [a0] +0x6491, including `lbu` at 0x5af994, `lbu` at 0x5afa58, `lbu` at 0x5afa88.
  3 such `lbu` accesses load 1 byte from [a0] +0x6490, including `lbu` at 0x5af9a8, `lbu` at 0x5af9dc, `lbu` at 0x5afa14.
  6 such `lw` accesses load 4 bytes from [[a0]+232864] +0x51c, including `lw` at 0x5af9b4, `lw` at 0x5af9e8, `lw` at 0x5afa20.
  The `jalr` at 0x5af51c calls (unknown callee) with a0=[[a0]+232864], a1=[a0], a2=?, a3=[[a0]+232864].
  The `jalr` at 0x5af544 calls (unknown callee) with a0=[[a0]+232864], a1=[a0], a2=?, a3=?.
  The `jalr` at 0x5af564 calls (unknown callee) with a0=[[[a0]+232864]+924], a1=[[a0]+229484], a2=[[a0]+232864], a3=?, a4=[[a0]+229484].
  The `jalr` at 0x5af578 calls (unknown callee) with a0=[a0], a1=([[a0]+223784] << 0x2b), a2=?, a3=?.
  The `bgezall` at 0x5af5a0 calls ClearRegionRects [0x5af340] with a0=[a0]+229476, a1=[[a0]+229672], a2=?, a3=?, a6=[[a0]+229672].
  The `jalr` at 0x5af5b4 calls (unknown callee) with a0=[a0], a1=?, a2=?, a3=?.
  The `jalr` at 0x5af5d0 calls (unknown callee) with a0=[[a0]+229484], a1=[[a0]+232864], a2=?, a3=?, a4=[[a0]+229484].
  The `jalr` at 0x5af5e0 calls (unknown callee) with a0=[[a0]+232864], a1=?, a2=?, a3=?.
  The `jalr` at 0x5af600 calls (unknown callee) with a0=[[a0]+232864], a1=[a0], a2=?, a3=?.
  The `jalr` at 0x5af620 calls (unknown callee) with a0=[[[a0]+232864]+924], a1=[[a0]+229688], a2=[[a0]+232864], a3=?, a4=[[a0]+229688].
  The `jalr` at 0x5af634 calls (unknown callee) with a0=[a0], a1=([[a0]+223784] << 0x2b), a2=?, a3=?.
  The `bgezall` at 0x5af658 calls ClearRegionRects [0x5af340] with a0=[a0]+229680, a1=[[a0]+229876], a2=?, a3=?, a6=[[a0]+229876].
  The `jalr` at 0x5af66c calls (unknown callee) with a0=[a0], a1=?, a2=?, a3=?.
  The `jalr` at 0x5af688 calls (unknown callee) with a0=[[a0]+229688], a1=[[a0]+232864], a2=?, a3=?, a4=[[a0]+229688].
  The `jalr` at 0x5af698 calls (unknown callee) with a0=[[a0]+232864], a1=?, a2=?, a3=?.
  The `jalr` at 0x5af6b4 calls (unknown callee) with a0=[[a0]+232864], a1=[a0], a2=?, a3=?.
  The `jalr` at 0x5af6d4 calls (unknown callee) with a0=[[[a0]+232864]+924], a1=[[a0]+230096], a2=[[a0]+232864], a3=?, a4=[[a0]+230096].
  The `jalr` at 0x5af6e8 calls (unknown callee) with a0=[a0], a1=([[a0]+223784] << 0x2b), a2=?, a3=?.
  The `bgezall` at 0x5af70c calls ClearRegionRects [0x5af340] with a0=[a0]+230088, a1=[[a0]+230284], a2=?, a3=?, a6=[[a0]+230284].
  The `jalr` at 0x5af720 calls (unknown callee) with a0=[a0], a1=?, a2=?, a3=?.
  The `jalr` at 0x5af73c calls (unknown callee) with a0=[[a0]+230096], a1=[[a0]+232864], a2=?, a3=?, a4=[[a0]+230096].
  The `jalr` at 0x5af74c calls (unknown callee) with a0=[[a0]+232864], a1=?, a2=?, a3=?.
  The `jalr` at 0x5af768 calls (unknown callee) with a0=[[a0]+232864], a1=[a0], a2=?, a3=?.
  The `jalr` at 0x5af788 calls (unknown callee) with a0=[[[a0]+232864]+924], a1=[[a0]+230300], a2=[[a0]+232864], a3=?, a4=[[a0]+230300].
  The `jalr` at 0x5af79c calls (unknown callee) with a0=[a0], a1=([[a0]+223784] << 0x2b), a2=?, a3=?.
  The `bgezall` at 0x5af7c0 calls ClearRegionRects [0x5af340] with a0=[a0]+230292, a1=[[a0]+230488], a2=?, a3=?, a6=[[a0]+230488].
  The `jalr` at 0x5af7d4 calls (unknown callee) with a0=[a0], a1=?, a2=?, a3=?.
  The `jalr` at 0x5af7f0 calls (unknown callee) with a0=[[a0]+230300], a1=[[a0]+232864], a2=?, a3=?, a4=[[a0]+230300].
  The `jalr` at 0x5af800 calls (unknown callee) with a0=[[a0]+232864], a1=?, a2=?, a3=?.
  The `jalr` at 0x5af81c calls (unknown callee) with a0=[[a0]+232864], a1=?, a2=?, a3=?.
  The `jalr` at 0x5af84c calls (unknown callee) with a0=[[a0]+232864], a1=[a0], a2=?, a3=?.
  The `jalr` at 0x5af86c calls (unknown callee) with a0=[[[a0]+232864]+924], a1=[a0+8], a2=[[a0]+232864], a3=?, a4=[a0+8].
  The `jalr` at 0x5af880 calls (unknown callee) with a0=[a0], a1=([[a0]+223784] << 0x2b), a2=?, a3=?.
  The `bgezall` at 0x5af8a0 calls ClearRegionRects [0x5af340] with a0=a0 at entry (arg0), a1=[a0+196], a2=?, a3=?, a6=[a0+196].
  The `jalr` at 0x5af8b4 calls (unknown callee) with a0=[a0], a1=?, a2=?, a3=?.
  The `jalr` at 0x5af8d0 calls (unknown callee) with a0=[a0+8], a1=[[a0]+232864], a2=?, a3=?, a4=[a0+8].
  The `jalr` at 0x5af8e0 calls (unknown callee) with a0=[[a0]+232864], a1=?, a2=?, a3=?.
  The `jalr` at 0x5af900 calls (unknown callee) with a0=[a0]+230292, a1=[[a0]+220384], a2=[[a0]+220388], a3=[[a0]+220392], a4=[[a0]+220396], a6=[[a0]+230488].
  The `jalr` at 0x5af920 calls (unknown callee) with a0=[a0]+229476, a1=[[a0]+220384], a2=[[a0]+220388], a3=[[a0]+220392], a4=[[a0]+220396], a6=[[a0]+229672].
  The `jalr` at 0x5af940 calls (unknown callee) with a0=[a0]+229680, a1=[[a0]+220384], a2=[[a0]+220388], a3=[[a0]+220392], a4=[[a0]+220396], a6=[[a0]+229876].
  The `jalr` at 0x5af960 calls (unknown callee) with a0=[a0]+230088, a1=[[a0]+220384], a2=[[a0]+220388], a3=[[a0]+220392], a4=[[a0]+220396], a6=[[a0]+230284].
  The `jalr` at 0x5afb54 calls (unknown callee) with a0=a0 at entry (arg0), a1=[[a0]+220384], a2=[[a0]+220388], a3=[[a0]+220392], a4=[[a0]+220396], a6=[a0+196].
  The `beq` branch at 0x5af4d8 targets 0x5af4ec, is taken when a2(=[[a0]+3820]-1024) >= 0x9 (unsigned), and falls through when a2(=[[a0]+3820]-1024) < 0x9 (unsigned).
  The `bne` branch at 0x5af52c targets 0x5af840, is taken when a6(=[[a0]+32120]) < s4(=one of 0x1, 0x2, 0x3, 0x4) (signed), and falls through when a6(=[[a0]+32120]) >= s4(=one of 0x1, 0x2, 0x3, 0x4) (signed).
  The `beq` branch at 0x5af534 targets 0x5af5ec, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x5af554 targets 0x5af56c, is taken when t9(=[[[a0]+229484]+52]) == 0, and falls through when t9(=[[[a0]+229484]+52]) != 0.
  The `beq` branch at 0x5af570 targets 0x5af584, is taken when t9(=[[a0]+225024]) == 0, and falls through when t9(=[[a0]+225024]) != 0.
  The `bgez` branch at 0x5af590 targets 0x5af910, is taken when a1(=([[a0]+223784] << 0x2b)) >= 0 (signed), and falls through when a1(=([[a0]+223784] << 0x2b)) < 0 (signed).
  The `beq` branch at 0x5af5ac targets 0x5af5bc, is taken when t9(=[[a0]+225028]) == 0, and falls through when t9(=[[a0]+225028]) != 0.
  The `beq` branch at 0x5af5c4 targets 0x5af5d8, is taken when t9(=[[[a0]+229484]+56]) == 0, and falls through when t9(=[[[a0]+229484]+56]) != 0.
  The `beq` branch at 0x5af5f0 targets 0x5af6a0, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x5af610 targets 0x5af628, is taken when t9(=[[[a0]+229688]+52]) == 0, and falls through when t9(=[[[a0]+229688]+52]) != 0.
  The `beq` branch at 0x5af62c targets 0x5af640, is taken when t9(=[[a0]+225024]) == 0, and falls through when t9(=[[a0]+225024]) != 0.
  The `bgez` branch at 0x5af64c targets 0x5af930, is taken when a1(=([[a0]+223784] << 0x2b)) >= 0 (signed), and falls through when a1(=([[a0]+223784] << 0x2b)) < 0 (signed).
  The `beq` branch at 0x5af664 targets 0x5af674, is taken when t9(=[[a0]+225028]) == 0, and falls through when t9(=[[a0]+225028]) != 0.
  The `beq` branch at 0x5af67c targets 0x5af690, is taken when t9(=[[[a0]+229688]+56]) == 0, and falls through when t9(=[[[a0]+229688]+56]) != 0.
  The `beq` branch at 0x5af6a4 targets 0x5af758, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x5af6c4 targets 0x5af6dc, is taken when t9(=[[[a0]+230096]+52]) == 0, and falls through when t9(=[[[a0]+230096]+52]) != 0.
  The `beq` branch at 0x5af6e0 targets 0x5af6f4, is taken when t9(=[[a0]+225024]) == 0, and falls through when t9(=[[a0]+225024]) != 0.
  The `bgez` branch at 0x5af700 targets 0x5af950, is taken when a1(=([[a0]+223784] << 0x2b)) >= 0 (signed), and falls through when a1(=([[a0]+223784] << 0x2b)) < 0 (signed).
  The `beq` branch at 0x5af718 targets 0x5af728, is taken when t9(=[[a0]+225028]) == 0, and falls through when t9(=[[a0]+225028]) != 0.
  The `beq` branch at 0x5af730 targets 0x5af744, is taken when t9(=[[[a0]+230096]+56]) == 0, and falls through when t9(=[[[a0]+230096]+56]) != 0.
  The `beq` branch at 0x5af758 targets 0x5af808, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x5af778 targets 0x5af790, is taken when t9(=[[[a0]+230300]+52]) == 0, and falls through when t9(=[[[a0]+230300]+52]) != 0.
  The `beq` branch at 0x5af794 targets 0x5af7a8, is taken when t9(=[[a0]+225024]) == 0, and falls through when t9(=[[a0]+225024]) != 0.
  The `bgez` branch at 0x5af7b4 targets 0x5af8f0, is taken when a1(=([[a0]+223784] << 0x2b)) >= 0 (signed), and falls through when a1(=([[a0]+223784] << 0x2b)) < 0 (signed).
  The `beq` branch at 0x5af7cc targets 0x5af7dc, is taken when t9(=[[a0]+225028]) == 0, and falls through when t9(=[[a0]+225028]) != 0.
  The `beq` branch at 0x5af7e4 targets 0x5af7f8, is taken when t9(=[[[a0]+230300]+56]) == 0, and falls through when t9(=[[[a0]+230300]+56]) != 0.
  The `beq` branch at 0x5af85c targets 0x5af874, is taken when t9(=[[a0+8]+52]) == 0, and falls through when t9(=[[a0+8]+52]) != 0.
  The `beq` branch at 0x5af878 targets 0x5af88c, is taken when t9(=[[a0]+225024]) == 0, and falls through when t9(=[[a0]+225024]) != 0.
  The `bgez` branch at 0x5af88c targets 0x5afb40, is taken when a1(=([[a0]+223784] << 0x2b)) >= 0 (signed), and falls through when a1(=([[a0]+223784] << 0x2b)) < 0 (signed).
  The `beq` branch at 0x5af8ac targets 0x5af8bc, is taken when t9(=[[a0]+225028]) == 0, and falls through when t9(=[[a0]+225028]) != 0.
  The `beq` branch at 0x5af8c4 targets 0x5af8d8, is taken when t9(=[[a0+8]+56]) == 0, and falls through when t9(=[[a0+8]+56]) != 0.
  The `beq` branch at 0x5af8e8 targets 0x5af80c and is always taken.
  The `beq` branch at 0x5af908 targets 0x5af7cc and is always taken.
  The `beq` branch at 0x5af928 targets 0x5af5ac and is always taken.
  The `beq` branch at 0x5af948 targets 0x5af664 and is always taken.
  The `beq` branch at 0x5af968 targets 0x5af718 and is always taken.
  The `beq` branch at 0x5af98c targets 0x5af514 and is always taken.
  The `beq` branch at 0x5af998 targets 0x5afb64, is taken when a1(=[[a0]+25745]:1) == 0, and falls through when a1(=[[a0]+25745]:1) != 0.
  The `beq` branch at 0x5af9ac targets 0x5afb70, is taken when v1(=[[a0]+25744]:1) == 0, and falls through when v1(=[[a0]+25744]:1) != 0.
  The `beq` branch at 0x5af9b8 targets 0x5afbf0, is taken when a2(=[[[a0]+232864]+1308]) == 0, and falls through when a2(=[[[a0]+232864]+1308]) != 0.
  The `beq` branch at 0x5af9d4 targets 0x5af514 and is always taken.
  The `beq` branch at 0x5af9e0 targets 0x5afb80, is taken when a5(=[[a0]+25744]:1) == 0, and falls through when a5(=[[a0]+25744]:1) != 0.
  The `beq` branch at 0x5af9ec targets 0x5afc10, is taken when a6(=[[[a0]+232864]+1308]) == 0, and falls through when a6(=[[[a0]+232864]+1308]) != 0.
  The `beq` branch at 0x5afa0c targets 0x5af514 and is always taken.
  The `beq` branch at 0x5afa18 targets 0x5afb8c, is taken when t0(=[[a0]+25744]:1) == 0, and falls through when t0(=[[a0]+25744]:1) != 0.
  The `beq` branch at 0x5afa24 targets 0x5afc20, is taken when t1(=[[[a0]+232864]+1308]) == 0, and falls through when t1(=[[[a0]+232864]+1308]) != 0.
  The `beq` branch at 0x5afa44 targets 0x5af514 and is always taken.
  The `beq` branch at 0x5afa54 targets 0x5afb98, is taken when t3(=[[[a0]+232864]+1308]) == 0, and falls through when t3(=[[[a0]+232864]+1308]) != 0.
  The `beq` branch at 0x5afa5c targets 0x5afc30, is taken when a1(=[[a0]+25745]:1) == 0, and falls through when a1(=[[a0]+25745]:1) != 0.
  The `beq` branch at 0x5afa80 targets 0x5af514 and is always taken.
  The `beq` branch at 0x5afa8c targets 0x5afbc4, is taken when t9(=[[a0]+25745]:1) == 0, and falls through when t9(=[[a0]+25745]:1) != 0.
  The `beq` branch at 0x5afab0 targets 0x5af514 and is always taken.
  The `beq` branch at 0x5afac4 targets 0x5afbd0, is taken when v1(=[[[a0]+232864]+1308]) == 0, and falls through when v1(=[[[a0]+232864]+1308]) != 0.
  The `beq` branch at 0x5afae4 targets 0x5af514 and is always taken.
  The `beq` branch at 0x5afaf0 targets 0x5afbe0, is taken when a2(=[[[a0]+232864]+1308]) == 0, and falls through when a2(=[[[a0]+232864]+1308]) != 0.
  The `beq` branch at 0x5afb10 targets 0x5af514 and is always taken.
  The `beq` branch at 0x5afb34 targets 0x5af514 and is always taken.
  The `beq` branch at 0x5afb5c targets 0x5af8ac and is always taken.
  The `beq` branch at 0x5afb68 targets 0x5af9a8 and is always taken.
  The `beq` branch at 0x5afb74 targets 0x5af9c8 and is always taken.
  The `beq` branch at 0x5afb84 targets 0x5af9f8 and is always taken.
  The `beq` branch at 0x5afb90 targets 0x5afa30 and is always taken.
  The `beq` branch at 0x5afb98 targets 0x5afc40, is taken when a1(=[[a0]+25745]:1) == 0, and falls through when a1(=[[a0]+25745]:1) != 0.
  The `beq` branch at 0x5afbbc targets 0x5af514 and is always taken.
  The `beq` branch at 0x5afbc8 targets 0x5afa9c and is always taken.
  The `beq` branch at 0x5afbd8 targets 0x5afad4 and is always taken.
  The `beq` branch at 0x5afbe8 targets 0x5afb00 and is always taken.
  The `beq` branch at 0x5afbf0 targets 0x5afc4c, is taken when a1(=[[a0]+25745]:1) == 0, and falls through when a1(=[[a0]+25745]:1) != 0.
  The `beq` branch at 0x5afc08 targets 0x5af9c8 and is always taken.
  The `beq` branch at 0x5afc18 targets 0x5af9f8 and is always taken.
  The `beq` branch at 0x5afc28 targets 0x5afa30 and is always taken.
  The `beq` branch at 0x5afc34 targets 0x5afa6c and is always taken.
  The `beq` branch at 0x5afc44 targets 0x5afba8 and is always taken.
  The `beq` branch at 0x5afc4c targets 0x5afc04 and is always taken.
  The return at 0x5af830 has v0 = ret(?).
  The instructions from 0x5af838 to 0x5af83c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x5afab8 to 0x5afabc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x5afb3c to 0x5afb3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x5afb7c to 0x5afb7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x5afc3c to 0x5afc3c are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x5af4e4 uses the jump table at 0xb7009c with targets 0x5af970, 0x5afb18, 0x5afaec, 0x5afac0, 0x5afa88, 0x5afa4c, 0x5afa14, 0x5af9dc, 0x5af994.

- `Pick` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x5b0a40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x5b0a40-0x5b0ca0 (608 bytes).
  It occupies 608 bytes.
  The `lw` at 0x5b0a44 loads 4 bytes from a0 (arg0 at entry) +0x64a0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x36a28, including `lw` at 0x5b0a54, `lw` at 0x5b0c10.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xedc, including `lw` at 0x5b0a60, `lw` at 0x5b0a68.
  3 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x90, including `sw` at 0x5b0a64, `sw` at 0x5b0b60, `sw` at 0x5b0c64.
  3 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x94, including `sw` at 0x5b0a70, `sw` at 0x5b0b70, `sw` at 0x5b0c6c.
  The `lw` at 0x5b0a74 loads 4 bytes from a1 (arg1 at entry) +0x8.
  2 such `lw` accesses load 4 bytes from [a1+8] +0x18, including `lw` at 0x5b0a78, `lw` at 0x5b0ad8.
  15 such `lw` accesses load 4 bytes from abs 0xb8d7ec, including `lw` at 0x5b0aac, `lw` at 0x5b0ab0, `lw` at 0x5b0ae8.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0xc0, including `sw` at 0x5b0abc, `sw` at 0x5b0ba0.
  4 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0xc4, including `sw` at 0x5b0ac8, `sw` at 0x5b0b94, `sw` at 0x5b0bb0.
  The `lw` at 0x5b0acc loads 4 bytes from a0 (arg0 at entry) +0x46830.
  The `lw` at 0x5b0b00 loads 4 bytes from a0 (arg0 at entry) +0xee4.
  The `lw` at 0x5b0b04 loads 4 bytes from a1 (arg1 at entry) +0x58.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x5c, including `lw` at 0x5b0b08, `lw` at 0x5b0bec.
  The `lw` at 0x5b0b0c loads 4 bytes from a1 (arg1 at entry) +0x54.
  The `lw` at 0x5b0b10 loads 4 bytes from a1 (arg1 at entry) +0x50.
  The `lbu` at 0x5b0b24 loads 1 byte from a0 (arg0 at entry) +0xee0.
  The `lbu` at 0x5b0b30 loads 1 byte from a0 (arg0 at entry) +0xee1.
  The `lbu` at 0x5b0b40 loads 1 byte from a0 (arg0 at entry) +0xee2.
  The `lbu` at 0x5b0b50 loads 1 byte from a0 (arg0 at entry) +0xee3.
  The `lw` at 0x5b0b74 loads 4 bytes from [a1+8] +0x40.
  The `lw` at 0x5b0b80 loads 4 bytes from a0 (arg0 at entry) +0x36ecc.
  The `lw` at 0x5b0b84 loads 4 bytes from a0 (arg0 at entry) +0x36ed8.
  8 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x9c, including `sw` at 0x5b0bcc, `sw` at 0x5b0bdc, `sw` at 0x5b0c00.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0xb0, including `sw` at 0x5b0c28, `sw` at 0x5b0c8c.
  2 such `lbu` accesses load 1 byte from a1 (arg1 at entry) +0x29, including `lbu` at 0x5b0c2c, `lbu` at 0x5b0c44.
  The `blez` branch at 0x5b0a58 targets 0x5b0b00, is taken when v1(=[a0+25760]) <= 0 (signed), and falls through when v1(=[a0+25760]) > 0 (signed).
  The `beq` branch at 0x5b0a80 targets 0x5b0bc0, is taken when a4(=[[a1+8]+24]) == t2(=0x1), and falls through when a4(=[[a1+8]+24]) != t2(=0x1).
  The `beq` branch at 0x5b0a88 targets 0x5b0bd0, is taken when a4(=[[a1+8]+24]) == t3(=0x2), and falls through when a4(=[[a1+8]+24]) != t3(=0x2).
  The `beq` branch at 0x5b0a90 targets 0x5b0c04, is taken when a4(=[[a1+8]+24]) == t8(=0x3), and falls through when a4(=[[a1+8]+24]) != t8(=0x3).
  The `beq` branch at 0x5b0a98 targets 0x5b0bec, is taken when a4(=[[a1+8]+24]) == t9(=0x4), and falls through when a4(=[[a1+8]+24]) != t9(=0x4).
  The `beq` branch at 0x5b0aa0 targets 0x5b0c2c, is taken when a4(=[[a1+8]+24]) == v0(=0x8), and falls through when a4(=[[a1+8]+24]) != v0(=0x8).
  The `beq` branch at 0x5b0aa8 targets 0x5b0c44, is taken when a4(=[[a1+8]+24]) == v1(=0x10), and falls through when a4(=[[a1+8]+24]) != v1(=0x10).
  The `beq` branch at 0x5b0ad0 targets 0x5b0b74, is taken when a2(=[a0+288816]) == 0, and falls through when a2(=[a0+288816]) != 0.
  The `beq` branch at 0x5b0ae4 targets 0x5b0ba4, is taken when a0(=[[a1+8]+24]) == a7(=0x2), and falls through when a0(=[[a1+8]+24]) != a7(=0x2).
  The `beq` branch at 0x5b0af0 targets 0x5b0be0, is taken when a0(=[[a1+8]+24]) == t0(=0x3), and falls through when a0(=[[a1+8]+24]) != t0(=0x3).
  The `beq` branch at 0x5b0b1c targets 0x5b0c64, is taken when t8(=[a0+3812]) == 0, and falls through when t8(=[a0+3812]) != 0.
  The `beq` branch at 0x5b0b28 targets 0x5b0c5c, is taken when t9(=[a0+3808]:1) == 0, and falls through when t9(=[a0+3808]:1) != 0.
  The `beq` branch at 0x5b0b34 targets 0x5b0b40, is taken when v0(=[a0+3809]:1) == 0, and falls through when v0(=[a0+3809]:1) != 0.
  The `beq` branch at 0x5b0b44 targets 0x5b0b50, is taken when v1(=[a0+3810]:1) == 0, and falls through when v1(=[a0+3810]:1) != 0.
  The `beq` branch at 0x5b0b54 targets 0x5b0b60, is taken when a2(=[a0+3811]:1) == 0, and falls through when a2(=[a0+3811]:1) != 0.
  The `beq` branch at 0x5b0b6c targets 0x5b0a74 and is always taken.
  The `beq` branch at 0x5b0b78 targets 0x5b0ad8, is taken when a4(=[[a1+8]+64]) == 0, and falls through when a4(=[[a1+8]+64]) != 0.
  The `bne` branch at 0x5b0b8c targets 0x5b0ad8, is taken when t0(=[a0+224972]) != t1(?), and falls through when t0(=[a0+224972]) == t1(?).
  The `beq` branch at 0x5b0ba4 targets 0x5b0af8, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x5b0bc8 targets 0x5b0aac and is always taken.
  The `beq` branch at 0x5b0bd8 targets 0x5b0aac and is always taken.
  The `beq` branch at 0x5b0bf0 targets 0x5b0c70, is taken when v1(=[a1+92]) == 0, and falls through when v1(=[a1+92]) != 0.
  The `beq` branch at 0x5b0bfc targets 0x5b0aac and is always taken.
  The `beq` branch at 0x5b0c1c targets 0x5b0c80, is taken when (t0(=[a0+223784]) & 0x300) == 0, and falls through when (t0(=[a0+223784]) & 0x300) != 0.
  The `beq` branch at 0x5b0c24 targets 0x5b0aac and is always taken.
  The `beq` branch at 0x5b0c30 targets 0x5b0c90, is taken when t2(=[a1+41]:1) == 0, and falls through when t2(=[a1+41]:1) != 0.
  The `beq` branch at 0x5b0c3c targets 0x5b0aac and is always taken.
  The `beq` branch at 0x5b0c48 targets 0x5b0aac, is taken when t8(=[a1+41]:1) == 0, and falls through when t8(=[a1+41]:1) != 0.
  The `beq` branch at 0x5b0c54 targets 0x5b0aac and is always taken.
  The `beq` branch at 0x5b0c5c targets 0x5b0b30 and is always taken.
  The `beq` branch at 0x5b0c68 targets 0x5b0a74 and is always taken.
  The `beq` branch at 0x5b0c78 targets 0x5b0aac and is always taken.
  The `beq` branch at 0x5b0c88 targets 0x5b0aac and is always taken.
  The `beq` branch at 0x5b0c98 targets 0x5b0aac and is always taken.
  The return at 0x5b0af8 has v0 = one of 0x5b0000, ?.
  The return at 0x5b0b9c has v0 = ?.
  The return at 0x5b0bac has v0 = ?.
  The return at 0x5b0be4 has v0 = 0x5aed80.
  The instructions from 0x5b0bb4 to 0x5b0bbc are not reached by any path from the entry, and their branches are not listed.

- `__glGetVertexProgramParameterValuePointer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x5e2a40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x5e2a40-0x5e333c (2300 bytes).
  It occupies 2300 bytes.
  4 such `sb` accesses store 1 byte to a2 (arg2 at entry) +0x0, including `sb` at 0x5e2ad0, `sb` at 0x5e2b14, `sb` at 0x5e2c40.
  15 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xca8, including `lw` at 0x5e2b68, `lw` at 0x5e2e20, `lw` at 0x5e2f20.
  The `lw` at 0x5e2bb8 loads 4 bytes from a0 (arg0 at entry) +0xcdfc.
  The `lw` at 0x5e2bc0 loads 4 bytes from [a0+52732] +0x64.
  The `lw` at 0x5e2bd8 loads 4 bytes from a0 (arg0 at entry) +0x35a70.
  The `lw` at 0x5e2c74 loads 4 bytes from a0 (arg0 at entry) +0x35ad4.
  The `lw` at 0x5e2d00 loads 4 bytes from table(0x35a70) +0x0.
  The `lw` at 0x5e2d48 loads 4 bytes from table(0x35b38) +0x0.
  The `lw` at 0x5e2d68 loads 4 bytes from table(0x34e08) +0x0.
  The `lw` at 0x5e2dc0 loads 4 bytes from a0 (arg0 at entry) +0xcb0.
  The `lwc1` at 0x5e2dd0 loads 4 bytes from a0 (arg0 at entry) +0xccc.
  The `lwc1` at 0x5e2dd4 loads 4 bytes from a0 (arg0 at entry) +0xcc8.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0xcd0, including `swc1` at 0x5e2df0, `swc1` at 0x5e2fd0.
  The `lw` at 0x5e2e90 loads 4 bytes from a0 (arg0 at entry) +0x3510c.
  The `lw` at 0x5e2f50 loads 4 bytes from a0 (arg0 at entry) +0xde4.
  The `lw` at 0x5e2fe4 loads 4 bytes from a0 (arg0 at entry) +0x351a4.
  2 such `lwc1` accesses load 4 bytes from (a0 + one of 0xbf0, 0xc4c) +0x0, including `lwc1` at 0x5e3174, `lwc1` at 0x5e32dc.
  9 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x5e317c, `lwc1` at 0x5e319c, `lwc1` at 0x5e31b4.
  4 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x3511c, including `swc1` at 0x5e318c, `swc1` at 0x5e3208, `swc1` at 0x5e3284.
  2 such `lwc1` accesses load 4 bytes from (a0 + one of 0xbf4, 0xc50) +0x0, including `lwc1` at 0x5e3194, `lwc1` at 0x5e32fc.
  4 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x35120, including `swc1` at 0x5e31a4, `swc1` at 0x5e3220, `swc1` at 0x5e329c.
  2 such `lwc1` accesses load 4 bytes from (a0 + one of 0xbf8, 0xc54) +0x0, including `lwc1` at 0x5e31ac, `lwc1` at 0x5e3314.
  4 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x35124, including `swc1` at 0x5e31bc, `swc1` at 0x5e3238, `swc1` at 0x5e32b4.
  The `lwc1` at 0x5e31c0 loads 4 bytes from (a0 + one of 0xbfc, 0xc58) +0x0.
  4 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x35128, including `swc1` at 0x5e31c8, `swc1` at 0x5e3244, `swc1` at 0x5e32c4.
  The `lwc1` at 0x5e31f0 loads 4 bytes from (a0 + one of 0xc00, 0xc5c) +0x0.
  The `lwc1` at 0x5e3210 loads 4 bytes from (a0 + one of 0xc04, 0xc60) +0x0.
  The `lwc1` at 0x5e3228 loads 4 bytes from (a0 + one of 0xc08, 0xc64) +0x0.
  2 such `lwc1` accesses load 4 bytes from (a0 + one of 0xc0c, 0xc68) +0x0, including `lwc1` at 0x5e323c, `lwc1` at 0x5e3328.
  The `lwc1` at 0x5e326c loads 4 bytes from (a0 + one of 0xc10, 0xc6c) +0x0.
  The `lwc1` at 0x5e328c loads 4 bytes from (a0 + one of 0xc14, 0xc70) +0x0.
  The `lwc1` at 0x5e32a4 loads 4 bytes from (a0 + one of 0xc18, 0xc74) +0x0.
  The `lwc1` at 0x5e32b8 loads 4 bytes from (a0 + one of 0xc1c, 0xc78) +0x0.
  The `lwc1` at 0x5e32d8 loads 4 bytes from a0 (arg0 at entry) +0xbdc.
  The `lwc1` at 0x5e32e0 loads 4 bytes from (a0 + one of 0xc20, 0xc7c) +0x0.
  The `lwc1` at 0x5e32f8 loads 4 bytes from a0 (arg0 at entry) +0xbe0.
  The `lwc1` at 0x5e3300 loads 4 bytes from (a0 + one of 0xc24, 0xc80) +0x0.
  The `lwc1` at 0x5e3310 loads 4 bytes from a0 (arg0 at entry) +0xbe4.
  The `lwc1` at 0x5e3318 loads 4 bytes from (a0 + one of 0xc28, 0xc84) +0x0.
  The `jalr` at 0x5e2c18 calls __glInvertTransposeMatrix [0x5b1b40] with a0=a0+217372, a1=?, a2=a2 at entry (arg2), a3=?, a4=0x4000, a5=a0 at entry (arg0), a6=0x8000.
  The `bne` branch at 0x5e2a58 targets 0x5e2ae8, is taken when v0(?) != at(=0xc0000), and falls through when v0(?) == at(=0xc0000).
  The `beq` branch at 0x5e2a68 targets 0x5e2bd0, is taken when v0(?) == v1(=0x100), and falls through when v0(?) != v1(=0x100).
  The `beq` branch at 0x5e2a70 targets 0x5e2c64, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x5e2a7c targets 0x5e2ce8, is taken when v0(?) == a0(=0x300), and falls through when v0(?) != a0(=0x300).
  The `beq` branch at 0x5e2a88 targets 0x5e2d2c, is taken when v0(?) == a1(=0x400), and falls through when v0(?) != a1(=0x400).
  The `beq` branch at 0x5e2a90 targets 0x5e2d4c, is taken when v0(?) == a3(=0x500), and falls through when v0(?) != a3(=0x500).
  The `beq` branch at 0x5e2aa0 targets 0x5e2c40, is taken when (s1(=a1) & 0xc000) == 0, and falls through when (s1(=a1) & 0xc000) != 0.
  The `beq` branch at 0x5e2aa8 targets 0x5e2be8, is taken when s0(?) == a4(=0x4000), and falls through when s0(?) != a4(=0x4000).
  The `beq` branch at 0x5e2ab0 targets 0x5e2c00, is taken when s0(?) == a6(=0x8000), and falls through when s0(?) != a6(=0x8000).
  The `beq` branch at 0x5e2ab8 targets 0x5e2c00, is taken when s0(?) == v0(=0xc000), and falls through when s0(?) != v0(=0xc000).
  The `beq` branch at 0x5e2ac0 targets 0x5e2d04, is taken when s0(?) == a7(=0x4000), and falls through when s0(?) != a7(=0x4000).
  The `beq` branch at 0x5e2ac8 targets 0x5e2d04, is taken when s0(?) == t0(=0x8000), and falls through when s0(?) != t0(=0x8000).
  The `bne` branch at 0x5e2af0 targets 0x5e2b24, is taken when v0(?) < a0(=0x70000) (unsigned), and falls through when v0(?) >= a0(=0x70000) (unsigned).
  The `bne` branch at 0x5e2af8 targets 0x5e2b80, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `beq` branch at 0x5e2b00 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e2b08 targets 0x5e2f64, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x5e2b2c targets 0x5e2b9c, is taken when v0(?) < a0(=0x30000) (unsigned), and falls through when v0(?) >= a0(=0x30000) (unsigned).
  The `bne` branch at 0x5e2b34 targets 0x5e2ca4, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x5e2b44 targets 0x5e2e00, is taken when v0(?) < 0x3000 (unsigned), and falls through when v0(?) >= 0x3000 (unsigned).
  The `beq` branch at 0x5e2b50 targets 0x5e2f00, is taken when v0(?) >= 0x3001 (unsigned), and falls through when v0(?) < 0x3001 (unsigned).
  The `beq` branch at 0x5e2b78 targets 0x5e2b10 and is always taken.
  The `bne` branch at 0x5e2b84 targets 0x5e2c80, is taken when v0(?) < a0(=0xb0000) (unsigned), and falls through when v0(?) >= a0(=0xb0000) (unsigned).
  The `bne` branch at 0x5e2b8c targets 0x5e2d6c, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x5e2b94 targets 0x5e2b10 and is always taken.
  The `bne` branch at 0x5e2ba4 targets 0x5e2b08, is taken when v0(?) < a1(=0x10000) (unsigned), and falls through when v0(?) >= a1(=0x10000) (unsigned).
  The `bne` branch at 0x5e2bac targets 0x5e2e80, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x5e2bc8 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e2be0 targets 0x5e2a9c and is always taken.
  The `beq` branch at 0x5e2be8 targets 0x5e2c40, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0x5e2bf0 targets 0x5e2c30 and is always taken.
  The `bne` branch at 0x5e2c38 targets 0x5e2ac0, is taken when s0(?) != v0(=0xc000), and falls through when s0(?) == v0(=0xc000).
  The `beq` branch at 0x5e2c70 targets 0x5e2a9c and is always taken.
  The `bne` branch at 0x5e2c88 targets 0x5e2db8, is taken when v0(?) < a0(=0x90000) (unsigned), and falls through when v0(?) >= a0(=0x90000) (unsigned).
  The `bne` branch at 0x5e2c94 targets 0x5e2ef0, is taken when a0(=0x90000) < v0(?) (unsigned), and falls through when a0(=0x90000) >= v0(?) (unsigned).
  The `beq` branch at 0x5e2c9c targets 0x5e2b10 and is always taken.
  The `bne` branch at 0x5e2cac targets 0x5e2e40, is taken when v0(?) < a0(=0x50000) (unsigned), and falls through when v0(?) >= a0(=0x50000) (unsigned).
  The `bne` branch at 0x5e2cb4 targets 0x5e2f48, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x5e2cc0 targets 0x5e3020, is taken when (a1 & 0x3000) == 0, and falls through when (a1 & 0x3000) != 0.
  The `beq` branch at 0x5e2cc8 targets 0x5e3068, is taken when v0(?) == t0(=0x1000), and falls through when v0(?) != t0(=0x1000).
  The `beq` branch at 0x5e2cd0 targets 0x5e30b0, is taken when v0(?) == t1(=0x2000), and falls through when v0(?) != t1(=0x2000).
  The `beq` branch at 0x5e2cd8 targets 0x5e3100, is taken when v0(?) == t2(=0x3000), and falls through when v0(?) != t2(=0x3000).
  The `beq` branch at 0x5e2ce0 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e2cfc targets 0x5e2a9c and is always taken.
  The `beq` branch at 0x5e2d44 targets 0x5e2a9c and is always taken.
  The `beq` branch at 0x5e2d64 targets 0x5e2a9c and is always taken.
  The `bne` branch at 0x5e2d6c targets 0x5e2ea0, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x5e2d78 targets 0x5e2b10, is taken when a6(=0xf0000) < v0(?) (unsigned), and falls through when a6(=0xf0000) >= v0(?) (unsigned).
  The `beq` branch at 0x5e2d88 targets 0x5e3140, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x5e2d94 targets 0x5e3158, is taken when (s1(=a1) & 0x6000) == 0, and falls through when (s1(=a1) & 0x6000) != 0.
  The `beq` branch at 0x5e2d9c targets 0x5e31d4, is taken when v0(?) == t1(=0x2000), and falls through when v0(?) != t1(=0x2000).
  The `beq` branch at 0x5e2da4 targets 0x5e3250, is taken when v0(?) == t2(=0x4000), and falls through when v0(?) != t2(=0x4000).
  The `beq` branch at 0x5e2db0 targets 0x5e2b10 and is always taken.
  The `bne` branch at 0x5e2db8 targets 0x5e2b10, is taken when v0(?) != v1(=0x80000), and falls through when v0(?) == v1(=0x80000).
  The `beq` branch at 0x5e2dc8 targets 0x5e2df4, is taken when a0(=[a0+3248]) == a1(=0x2601), and falls through when a0(=[a0+3248]) != a1(=0x2601).
  The `bc1t` branch at 0x5e2de0 targets 0x5e2fc8, is taken when f5(=[a0+3272]) == f4(=[a0+3276]) (c.eq.s at 0x5e2dd8), and falls through when not (f5(=[a0+3272]) == f4(=[a0+3276]) (c.eq.s at 0x5e2dd8)).
  The `beq` branch at 0x5e2df4 targets 0x5e2b10 and is always taken.
  The `bne` branch at 0x5e2e00 targets 0x5e2f38, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x5e2e08 targets 0x5e2f9c, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x5e2e30 targets 0x5e2b10 and is always taken.
  The `bne` branch at 0x5e2e44 targets 0x5e2b10, is taken when v0(?) != a0(=0x40000), and falls through when v0(?) == a0(=0x40000).
  The `beq` branch at 0x5e2e50 targets 0x5e3048, is taken when (a1 & 0x3000) == 0, and falls through when (a1 & 0x3000) != 0.
  The `beq` branch at 0x5e2e5c targets 0x5e308c, is taken when v0(?) == a1(=0x1000), and falls through when v0(?) != a1(=0x1000).
  The `beq` branch at 0x5e2e64 targets 0x5e30d4, is taken when v0(?) == a3(=0x2000), and falls through when v0(?) != a3(=0x2000).
  The `beq` branch at 0x5e2e6c targets 0x5e3120, is taken when v0(?) == a4(=0x3000), and falls through when v0(?) != a4(=0x3000).
  The `beq` branch at 0x5e2e74 targets 0x5e2b10 and is always taken.
  The `bne` branch at 0x5e2e80 targets 0x5e2b10, is taken when v0(?) != a6(=0x20000), and falls through when v0(?) == a6(=0x20000).
  The `beq` branch at 0x5e2e98 targets 0x5e2b10 and is always taken.
  The `bne` branch at 0x5e2ea0 targets 0x5e2b10, is taken when v0(?) != v1(=0xe0000), and falls through when v0(?) == v1(=0xe0000).
  The `beq` branch at 0x5e2eac targets 0x5e3148, is taken when (s1(=a1) & 0xff) == 0, and falls through when (s1(=a1) & 0xff) != 0.
  The `beq` branch at 0x5e2eb8 targets 0x5e3150, is taken when (s1(=a1) & 0x7000) == 0, and falls through when (s1(=a1) & 0x7000) != 0.
  The `beq` branch at 0x5e2ec0 targets 0x5e31cc, is taken when v0(?) == a1(=0x1000), and falls through when v0(?) != a1(=0x1000).
  The `beq` branch at 0x5e2ec8 targets 0x5e3248, is taken when v0(?) == a3(=0x2000), and falls through when v0(?) != a3(=0x2000).
  The `beq` branch at 0x5e2ed0 targets 0x5e32c8, is taken when v0(?) == a4(=0x3000), and falls through when v0(?) != a4(=0x3000).
  The `beq` branch at 0x5e2ed8 targets 0x5e32d0, is taken when v0(?) == a6(=0x4000), and falls through when v0(?) != a6(=0x4000).
  The `beq` branch at 0x5e2ee0 targets 0x5e32d8, is taken when v0(?) == a7(=0x5000), and falls through when v0(?) != a7(=0x5000).
  The `beq` branch at 0x5e2ee8 targets 0x5e2b10 and is always taken.
  The `bne` branch at 0x5e2ef0 targets 0x5e2b10, is taken when v0(?) != t0(=0xa0000), and falls through when v0(?) == t0(=0xa0000).
  The `beq` branch at 0x5e2ef8 targets 0x5e2b10 and is always taken.
  The `bne` branch at 0x5e2f00 targets 0x5e2f6c, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `beq` branch at 0x5e2f08 targets 0x5e2fd4, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x5e2f30 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e2f38 targets 0x5e3000, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x5e2f40 targets 0x5e2b10 and is always taken.
  The `bne` branch at 0x5e2f48 targets 0x5e2b10, is taken when v0(?) != a0(=0x60000), and falls through when v0(?) == a0(=0x60000).
  The `beq` branch at 0x5e2f5c targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e2f64 targets 0x5e2b10 and is always taken.
  The `bne` branch at 0x5e2f70 targets 0x5e2f40, is taken when v0(?) != a0(=0x4000), and falls through when v0(?) == a0(=0x4000).
  The `beq` branch at 0x5e2f94 targets 0x5e2b10 and is always taken.
  The `bne` branch at 0x5e2f9c targets 0x5e2f40, is taken when v0(?) != a0(=0x2000), and falls through when v0(?) == a0(=0x2000).
  The `beq` branch at 0x5e2fc0 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e2fcc targets 0x5e2df4 and is always taken.
  The `bne` branch at 0x5e2fd8 targets 0x5e2f40, is taken when v0(?) != a1(=0x6000), and falls through when v0(?) == a1(=0x6000).
  The `beq` branch at 0x5e2ff0 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e3018 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e3040 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e3060 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e3084 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e30a8 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e30cc targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e30f0 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e3118 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e3138 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e3140 targets 0x5e2d90 and is always taken.
  The `beq` branch at 0x5e3148 targets 0x5e2eb4 and is always taken.
  The `beq` branch at 0x5e3150 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e31c4 targets 0x5e2da8 and is always taken.
  The `beq` branch at 0x5e31cc targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e3240 targets 0x5e2da8 and is always taken.
  The `beq` branch at 0x5e3248 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e32c0 targets 0x5e2da8 and is always taken.
  The `beq` branch at 0x5e32c8 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e32d0 targets 0x5e2b10 and is always taken.
  The `beq` branch at 0x5e3334 targets 0x5e2b10 and is always taken.
  The return at 0x5e2ae0 has v0 = 0x0.
  The return at 0x5e2b1c has v0 = one of a0+3252, 0x0, ?, a0+2488, a0+3036, a0+217372, a0+3268, a0+2456, (a0 + one of 0xbf0, 0xc4c), (a0 + one of 0xc00, 0xc5c), (a0 + one of 0xc10, 0xc6c), (a0 + one of 0xc20, 0xc7c), (a0 + one of 0xc30, 0xc8c).
  The return at 0x5e2c5c has v0 = ?.
  The return at 0x5e2d24 has v0 = ?.
  The instructions from 0x5e2bf8 to 0x5e2bfc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x5e2c78 to 0x5e2c7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x5e2dfc to 0x5e2dfc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x5e2e38 to 0x5e2e3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x5e2e7c to 0x5e2e7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x5e2ff8 to 0x5e2ffc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x5e30f8 to 0x5e30fc are not reached by any path from the entry, and their branches are not listed.

- `Add` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x6b4f80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x6b4f80-0x6b57a4 (2084 bytes).
  It occupies 2084 bytes.
  The `lw` at 0x6b4f84 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0x6b4f98 loads 4 bytes from [a0] +0x38da0.
  The `lw` at 0x6b4fac loads 4 bytes from [[a0]+232864] +0x280.
  The `lw` at 0x6b4fd4 loads 4 bytes from table(0x36ee4) +0x0.
  The `lw` at 0x6b5014 loads 4 bytes from table(0xc81c) +0x0.
  The `lw` at 0x6b5018 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x6b5054 loads 4 bytes from [a0+8] +0x20.
  100 such `sh` accesses store 2 bytes to ?, including `sh` at 0x6b5148, `sh` at 0x6b514c, `sh` at 0x6b5150.
  100 such `lh` accesses load 2 bytes from ?, including `lh` at 0x6b51b8, `lh` at 0x6b51c0, `lh` at 0x6b51c8.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x6b5658, `lw` at 0x6b5674, `lw` at 0x6b5678.
  The `jalr` at 0x6b4fbc calls (unknown callee) with a0=[[a0]+232864], a1=[a0], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x6b4fd8 calls (unknown callee) with a0=?, a1=0x10, a2=?, a3=?.
  The `bgezall` at 0x6b5000 calls GetClipRect [0x6b3300] with a0=?, a1=sp-240, a2=sp-236, a3=sp-232, a4=sp-228.
  The `jalr` at 0x6b5024 calls (unknown callee) with a0=?, a1=[a0+8], a2=?, a3=?.
  The `jalr` at 0x6b5668 calls (unknown callee) with a0=?, a1=0x10, a2=?, a3=?.
  The `jalr` at 0x6b5694 calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x6b5080 targets 0x6b5654, is taken when ra(?) >= at(?) (signed), and falls through when ra(?) < at(?) (signed).
  The `beq` branch at 0x6b50a0 targets 0x6b50ac, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x6b50f8 targets 0x6b5104, is taken when ra(?) >= 0 (signed), and falls through when ra(?) < 0 (signed).
  The `beq` branch at 0x6b5118 targets 0x6b52cc and is always taken.
  The `beq` branch at 0x6b519c targets 0x6b52a0, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `bne` branch at 0x6b51b0 targets 0x6b5770, is taken when t1(?) < 0x2 (signed), and falls through when t1(?) >= 0x2 (signed).
  The `beq` branch at 0x6b520c targets 0x6b5614, is taken when a7(?) == v0(?), and falls through when a7(?) != v0(?).
  The `beq` branch at 0x6b5244 targets 0x6b5604, is taken when t1(?) == v0(?), and falls through when t1(?) != v0(?).
  The `bne` branch at 0x6b527c targets 0x6b51dc, is taken when t0(?) != v0(?), and falls through when t0(?) == v0(?).
  The `beq` branch at 0x6b52c4 targets 0x6b5654, is taken when t2(?) >= t9(?) (signed), and falls through when t2(?) < t9(?) (signed).
  The `beq` branch at 0x6b52dc targets 0x6b5190, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bne` branch at 0x6b52ec targets 0x6b56ac, is taken when ra(?) < 0x2 (signed), and falls through when ra(?) >= 0x2 (signed).
  The `beq` branch at 0x6b5444 targets 0x6b5120, is taken when t0(?) == v0(?), and falls through when t0(?) != v0(?).
  The `beq` branch at 0x6b550c targets 0x6b5620, is taken when a7(?) == v0(?), and falls through when a7(?) != v0(?).
  The `bne` branch at 0x6b55d4 targets 0x6b5384, is taken when a6(?) != v0(?), and falls through when a6(?) == v0(?).
  The `beq` branch at 0x6b55fc targets 0x6b5148 and is always taken.
  The `beq` branch at 0x6b560c targets 0x6b5288 and is always taken.
  The `beq` branch at 0x6b5618 targets 0x6b5288 and is always taken.
  The `beq` branch at 0x6b564c targets 0x6b5148 and is always taken.
  The `beq` branch at 0x6b5768 targets 0x6b5190 and is always taken.
  The `beq` branch at 0x6b579c targets 0x6b52a0 and is always taken.
  The return at 0x6b56a4 has v0 = ret(?).

- `SetInitialParameters` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x6b9980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x6b9980-0x6ba848 (3784 bytes).
  It occupies 3784 bytes.
  The `lw` at 0x6b998c loads 4 bytes from a0 (arg0 at entry) +0x35e78.
  The `lw` at 0x6b9990 loads 4 bytes from a0 (arg0 at entry) +0x35e74.
  The `lw` at 0x6b99b8 loads 4 bytes from a0 (arg0 at entry) +0x36a28.
  The `sb` at 0x6b99dc stores 1 byte to a0 (arg0 at entry) +0x35ec4.
  4 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36110, including `lwc1` at 0x6b99fc, `lwc1` at 0x6b9be0, `lwc1` at 0x6ba7bc.
  4 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36120, including `lwc1` at 0x6b9a00, `lwc1` at 0x6b9be4, `lwc1` at 0x6ba7c0.
  4 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0x0, including `lwc1` at 0x6b9a04, `lwc1` at 0x6b9be8, `lwc1` at 0x6ba7c4.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36114, including `lwc1` at 0x6b9a1c, `lwc1` at 0x6b9c04.
  4 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x35ec8, including `swc1` at 0x6b9a24, `swc1` at 0x6b9c0c, `swc1` at 0x6ba7f0.
  4 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x360f0, including `swc1` at 0x6b9a28, `swc1` at 0x6b9c10, `swc1` at 0x6ba7dc.
  4 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x36100, including `swc1` at 0x6b9a30, `swc1` at 0x6b9c18, `swc1` at 0x6ba7e8.
  2 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0x4, including `lwc1` at 0x6b9a34, `lwc1` at 0x6b9c1c.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36124, including `lwc1` at 0x6b9a38, `lwc1` at 0x6b9bfc.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36118, including `lwc1` at 0x6b9a50, `lwc1` at 0x6b9c3c.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x360f4, including `swc1` at 0x6b9a5c, `swc1` at 0x6b9c48.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x35ecc, including `swc1` at 0x6b9a60, `swc1` at 0x6b9c44.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x36104, including `swc1` at 0x6b9a68, `swc1` at 0x6b9c50.
  2 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0x8, including `lwc1` at 0x6b9a6c, `lwc1` at 0x6b9c54.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36128, including `lwc1` at 0x6b9a70, `lwc1` at 0x6b9c34.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x3612c, including `lwc1` at 0x6b9a80, `lwc1` at 0x6b9c68.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x3611c, including `lwc1` at 0x6b9a88, `lwc1` at 0x6b9c70.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x360f8, including `swc1` at 0x6b9a94, `swc1` at 0x6b9c7c.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x35ed0, including `swc1` at 0x6b9a98, `swc1` at 0x6b9c78.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x36108, including `swc1` at 0x6b9aa0, `swc1` at 0x6b9c84.
  2 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0xc, including `lwc1` at 0x6b9aa8, `lwc1` at 0x6b9c8c.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x360fc, including `swc1` at 0x6b9abc, `swc1` at 0x6b9ca0.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x3610c, including `swc1` at 0x6b9ac4, `swc1` at 0x6b9ca8.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x35ed4, including `swc1` at 0x6b9ad0, `swc1` at 0x6b9cb4.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36150, including `lwc1` at 0x6b9ad4, `lwc1` at 0x6b9cb8.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36160, including `lwc1` at 0x6b9ad8, `lwc1` at 0x6b9cbc.
  2 such `lwc1` accesses load 4 bytes from a3 (arg3 at entry) +0x0, including `lwc1` at 0x6b9adc, `lwc1` at 0x6b9cc0.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36164, including `lwc1` at 0x6b9af0, `lwc1` at 0x6b9cd4.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36154, including `lwc1` at 0x6b9af8, `lwc1` at 0x6b9cdc.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x35ed8, including `swc1` at 0x6b9b00, `swc1` at 0x6b9ce4.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x36130, including `swc1` at 0x6b9b04, `swc1` at 0x6b9ce8.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x36140, including `swc1` at 0x6b9b0c, `swc1` at 0x6b9cf0.
  2 such `lwc1` accesses load 4 bytes from a3 (arg3 at entry) +0x4, including `lwc1` at 0x6b9b10, `lwc1` at 0x6b9cf4.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36168, including `lwc1` at 0x6b9b24, `lwc1` at 0x6b9d08.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36158, including `lwc1` at 0x6b9b2c, `lwc1` at 0x6b9d10.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x35edc, including `swc1` at 0x6b9b34, `swc1` at 0x6b9d18.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x36134, including `swc1` at 0x6b9b38, `swc1` at 0x6b9d1c.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x36144, including `swc1` at 0x6b9b40, `swc1` at 0x6b9d24.
  2 such `lwc1` accesses load 4 bytes from a3 (arg3 at entry) +0x8, including `lwc1` at 0x6b9b44, `lwc1` at 0x6b9d28.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x3616c, including `lwc1` at 0x6b9b58, `lwc1` at 0x6b9d3c.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x3615c, including `lwc1` at 0x6b9b60, `lwc1` at 0x6b9d44.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x35ee0, including `swc1` at 0x6b9b68, `swc1` at 0x6b9d4c.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x36138, including `swc1` at 0x6b9b6c, `swc1` at 0x6b9d50.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x36148, including `swc1` at 0x6b9b74, `swc1` at 0x6b9d58.
  2 such `lwc1` accesses load 4 bytes from a3 (arg3 at entry) +0xc, including `lwc1` at 0x6b9b7c, `lwc1` at 0x6b9d60.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x3613c, including `swc1` at 0x6b9b90, `swc1` at 0x6b9d74.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x3614c, including `swc1` at 0x6b9b98, `swc1` at 0x6b9d7c.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x35ee4, including `swc1` at 0x6b9ba0, `swc1` at 0x6b9d84.
  6 such `lbu` accesses load 1 byte from a0 (arg0 at entry) +0x46c89, including `lbu` at 0x6b9ba4, `lbu` at 0x6b9d88, `lbu` at 0x6b9ec0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7d7c, including `lw` at 0x6b9bb0, `lw` at 0x6b9d94.
  86 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x6b9dc0, `lwc1` at 0x6b9dc4, `lwc1` at 0x6b9dc8.
  10 such `lwc1` accesses load 4 bytes from a1 (arg1 at entry) +0x6c, including `lwc1` at 0x6b9dd0, `lwc1` at 0x6b9f44, `lwc1` at 0x6ba030.
  96 such `swc1` accesses store 4 bytes to ?, including `swc1` at 0x6b9e30, `swc1` at 0x6b9e3c, `swc1` at 0x6b9e48.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x6b9eb0, `lw` at 0x6ba790.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x369d8, including `lwc1` at 0x6b9ee0, `lwc1` at 0x6ba2d4.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36998, including `lwc1` at 0x6b9ee4, `lwc1` at 0x6ba2c4.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36898, including `lwc1` at 0x6b9ee8, `lwc1` at 0x6ba2c0.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36798, including `lwc1` at 0x6b9eec, `lwc1` at 0x6ba2bc.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36698, including `lwc1` at 0x6b9efc, `lwc1` at 0x6ba2b8.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36214, including `lwc1` at 0x6ba1d0, `lwc1` at 0x6ba5b0.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36210, including `lwc1` at 0x6ba1d4, `lwc1` at 0x6ba5b4.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x36208, including `swc1` at 0x6ba1f8, `swc1` at 0x6ba5d8.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x35ec0, including `swc1` at 0x6ba204, `swc1` at 0x6ba5e4.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x3620c, including `swc1` at 0x6ba208, `swc1` at 0x6ba5e8.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36204, including `lwc1` at 0x6ba214, `lwc1` at 0x6ba5f4.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36200, including `lwc1` at 0x6ba218, `lwc1` at 0x6ba5f8.
  2 such `lwc1` accesses load 4 bytes from a1 (arg1 at entry) +0x68, including `lwc1` at 0x6ba21c, `lwc1` at 0x6ba5fc.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x361f0, including `swc1` at 0x6ba244, `swc1` at 0x6ba624.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x361f4, including `swc1` at 0x6ba24c, `swc1` at 0x6ba62c.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x35ebc, including `sw` at 0x6ba258, `sw` at 0x6ba638.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36a24, including `lwc1` at 0x6ba264, `lwc1` at 0x6ba644.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0x36a20, including `lwc1` at 0x6ba268, `lwc1` at 0x6ba64c.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x36a18, including `swc1` at 0x6ba28c, `swc1` at 0x6ba670.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x36a1c, including `swc1` at 0x6ba29c, `swc1` at 0x6ba67c.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x360e8, including `swc1` at 0x6ba2a0, `swc1` at 0x6ba680.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7d88, including `lw` at 0x6ba7f8, `lw` at 0x6ba844.
  The `bc1f` branch at 0x6b99e4 targets 0x6b9bd0, is taken when not (f28 < f0 (c.lt.s at 0x6b99b0)), and falls through when f28 < f0 (c.lt.s at 0x6b99b0).
  The `beq` branch at 0x6b99ec targets 0x6ba7b4, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x6b99f4 targets 0x6b9ba4, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bgez` branch at 0x6b9acc targets 0x6b9ba4, is taken when t8(=([a0+223784] << 0x28)) >= 0 (signed), and falls through when t8(=([a0+223784] << 0x28)) < 0 (signed).
  The `beq` branch at 0x6b9ba8 targets 0x6ba7f4, is taken when at(=[a0+289929]:1) == 0, and falls through when at(=[a0+289929]:1) != 0.
  The `blez` branch at 0x6b9bb4 targets 0x6b9ed8, is taken when a1(?) <= 0 (signed), and falls through when a1(?) > 0 (signed).
  The `beq` branch at 0x6b9bc8 targets 0x6b9eb0 and is always taken.
  The `beq` branch at 0x6b9bd0 targets 0x6ba800, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x6b9bd8 targets 0x6b9d88, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bgez` branch at 0x6b9cb0 targets 0x6b9d88, is taken when v0(=([a0+223784] << 0x28)) >= 0 (signed), and falls through when v0(=([a0+223784] << 0x28)) < 0 (signed).
  The `beq` branch at 0x6b9d8c targets 0x6ba840, is taken when at(=[a0+289929]:1) == 0, and falls through when at(=[a0+289929]:1) != 0.
  The `blez` branch at 0x6b9d98 targets 0x6ba2b0, is taken when a1(?) <= 0 (signed), and falls through when a1(?) > 0 (signed).
  The `beq` branch at 0x6b9db0 targets 0x6ba790 and is always taken.
  The `beq` branch at 0x6b9ea8 targets 0x6b9ed4, is taken when a2(?) == at(?), and falls through when a2(?) != at(?).
  The `bne` branch at 0x6b9eb8 targets 0x6b9dc0, is taken when (v0(?) & 0x8) != 0, and falls through when (v0(?) & 0x8) == 0.
  The `bne` branch at 0x6b9ec4 targets 0x6b9dc0, is taken when v1(=[a0+289929]:1) != 0, and falls through when v1(=[a0+289929]:1) == 0.
  The `beq` branch at 0x6b9ecc targets 0x6b9ea8 and is always taken.
  The `beq` branch at 0x6b9ed8 targets 0x6ba20c, is taken when at(=[a0+289929]:1) == 0, and falls through when at(=[a0+289929]:1) != 0.
  The `beq` branch at 0x6b9f18 targets 0x6ba00c and is always taken.
  The `bne` branch at 0x6ba0f4 targets 0x6b9f20, is taken when a1(?) != v0(=a1+240), and falls through when a1(?) == v0(=a1+240).
  The `beq` branch at 0x6ba20c targets 0x6ba25c, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0x6ba25c targets 0x6ba68c, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x6ba2b0 targets 0x6ba5ec, is taken when at(=[a0+289929]:1) == 0, and falls through when at(=[a0+289929]:1) != 0.
  The `beq` branch at 0x6ba2f0 targets 0x6ba3ec and is always taken.
  The `bne` branch at 0x6ba4d4 targets 0x6ba300, is taken when a1(?) != v0(=a1+240), and falls through when a1(?) == v0(=a1+240).
  The `beq` branch at 0x6ba5ec targets 0x6ba63c, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0x6ba63c targets 0x6ba68c, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x6ba788 targets 0x6ba2ac, is taken when a2(?) == at(?), and falls through when a2(?) != at(?).
  The `bne` branch at 0x6ba798 targets 0x6ba6a0, is taken when (a4(?) & 0x8) != 0, and falls through when (a4(?) & 0x8) == 0.
  The `bne` branch at 0x6ba7a4 targets 0x6ba6a0, is taken when a5(=[a0+289929]:1) != 0, and falls through when a5(=[a0+289929]:1) == 0.
  The `beq` branch at 0x6ba7ac targets 0x6ba788 and is always taken.
  The `beq` branch at 0x6ba7b4 targets 0x6b9ba4, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x6ba7ec targets 0x6b9ba4 and is always taken.
  The `beq` branch at 0x6ba7f4 targets 0x6b9bb4 and is always taken.
  The `beq` branch at 0x6ba800 targets 0x6b9d88, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x6ba838 targets 0x6b9d88 and is always taken.
  The `beq` branch at 0x6ba840 targets 0x6b9d98 and is always taken.
  The return at 0x6ba2a4 has v0 = ?.
  The return at 0x6ba684 has v0 = ?.
  The return at 0x6ba698 has v0 = ?.
  The instructions from 0x6b9db8 to 0x6b9dbc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6ba2f8 to 0x6ba2fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6ba7fc to 0x6ba7fc are not reached by any path from the entry, and their branches are not listed.

- `Fetch` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x6e6240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x6e6240-0x6e6300 (192 bytes).
  It occupies 192 bytes.
  The `lw` at 0x6e6248 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0x6e6254 loads 4 bytes from [a0] +0x36a28.
  The `lw` at 0x6e627c loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x6e62c8 loads 4 bytes from [a0] +0xc820.
  The `lw` at 0x6e62e4 loads 4 bytes from ret(?) +0x0.
  The `jalr` at 0x6e6290 calls __glTestOwnership [0x559180] with a0=[a0], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x6e62d8 calls (unknown callee) with a0=[a0], a1=[a0+8], a2=a1 at entry (arg1), a3=a2 at entry (arg2).
  The `bgez` branch at 0x6e6284 targets 0x6e62c0, is taken when at(=([[a0]+223784] << 0x2b)) >= 0 (signed), and falls through when at(=([[a0]+223784] << 0x2b)) < 0 (signed).
  The `bne` branch at 0x6e6298 targets 0x6e62c4, is taken when v0(=ret(__glTestOwnership)) != 0, and falls through when v0(=ret(__glTestOwnership)) == 0.
  The return at 0x6e62b8 has v0 = 0x0.
  The return at 0x6e62f8 has v0 = [ret(?)].

- `FreePrivate` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x6e9200 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x6e9200-0x6e9258 (88 bytes).
  It occupies 88 bytes.
  The `lw` at 0x6e9204 loads 4 bytes from a0 (arg0 at entry) +0x50.
  The `sw` at 0x6e9228 stores 4 bytes to a0 (arg0 at entry) +0x50.
  The `lw` at 0x6e9240 loads 4 bytes from a1 (arg1 at entry) +0x264.
  The `jalr` at 0x6e9248 calls (unknown callee) with a0=[a0+80], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a0+80].
  The `bne` branch at 0x6e921c targets 0x6e9240, is taken when a3(=[a0+80]) != 0, and falls through when a3(=[a0+80]) == 0.
  The `beq` branch at 0x6e9250 targets 0x6e9224 and is always taken.
  The return at 0x6e9230 has v0 = one of ?, ret(?).
  The instructions from 0x6e9238 to 0x6e923c are not reached by any path from the entry, and their branches are not listed.

- `GetArgRGB` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x6f5340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x6f5340-0x6f5e48 (2824 bytes).
  It occupies 2824 bytes.
  3 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x74c, including `lw` at 0x6f5348, `lw` at 0x6f54c0, `lw` at 0x6f55cc.
  The `lw` at 0x6f535c loads 4 bytes from a0 (arg0 at entry) +0x474a4.
  5 such `lw` accesses load 4 bytes from (a3 + ([a3+1868] << 0x2)) +0x298, including `lw` at 0x6f5368, `lw` at 0x6f58d8, `lw` at 0x6f5a00.
  58 such `sw` accesses store 4 bytes to (a3 + ([a3+1868] << 0x2)) +0x298, including `sw` at 0x6f538c, `sw` at 0x6f53b0, `sw` at 0x6f5448.
  The `sw` at 0x6f53ec stores 4 bytes to (a3 + ([a3+1868] << 0x2)) +0x398.
  The `lw` at 0x6f53f8 loads 4 bytes from (a3 + ([a3+1868] << 0x2)) +0x98.
  13 such `sw` accesses store 4 bytes to (a3 + ([a3+1868] << 0x2)) +0x198, including `sw` at 0x6f5438, `sw` at 0x6f552c, `sw` at 0x6f5644.
  15 such `sw` accesses store 4 bytes to (a3 + ([a3+1868] << 0x2)) +0x98, including `sw` at 0x6f5454, `sw` at 0x6f57a4, `sw` at 0x6f57cc.
  The `lw` at 0x6f5484 loads 4 bytes from (a0 + (a1-33984 << 0x2)) +0x35560.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x74c, including `sw` at 0x6f54cc, `sw` at 0x6f55d8.
  The `lw` at 0x6f559c loads 4 bytes from [(a0 + (a1-33984 << 0x2))+218464] +0x1c.
  The `lw` at 0x6f55a0 loads 4 bytes from [[(a0 + (a1-33984 << 0x2))+218464]+28] +0x0.
  The `lw` at 0x6f55a4 loads 4 bytes from [[[(a0 + (a1-33984 << 0x2))+218464]+28]] +0x48.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0x6f58a0, `lw` at 0x6f58b4, `lw` at 0x6f59dc.
  The `bgezall` at 0x6f58d0 calls FormatToSelectRGBAlpha [0x6f52c0] with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?.
  The `bgezall` at 0x6f59f8 calls FormatToSelectRGBColor [0x6f5280] with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?.
  The `bgezall` at 0x6f5a58 calls FormatToSelectRGBColor [0x6f5280] with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x6f5b10 calls FormatToSelectRGBAlpha [0x6f52c0] with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x6f5390 targets 0x6f5670, is taken when a7 == 0, and falls through when a7 != 0.
  The `bne` branch at 0x6f5450 targets 0x6f54d8, is taken when a1 < at(=0x84c0) (unsigned), and falls through when a1 >= at(=0x84c0) (unsigned).
  The `bne` branch at 0x6f5460 targets 0x6f54d8, is taken when v1(=0x84c7) < a1 (unsigned), and falls through when v1(=0x84c7) >= a1 (unsigned).
  The `bne` branch at 0x6f5488 targets 0x6f559c, is taken when a4(=[(a0 + (a1-33984 << 0x2))+218464]) != 0, and falls through when a4(=[(a0 + (a1-33984 << 0x2))+218464]) == 0.
  The `beq` branch at 0x6f5490 targets 0x6f5954, is taken when a2 == a6(=0x300), and falls through when a2 != a6(=0x300).
  The `beq` branch at 0x6f5498 targets 0x6f5970, is taken when a2 == t0(=0x301), and falls through when a2 != t0(=0x301).
  The `beq` branch at 0x6f54a4 targets 0x6f59b0, is taken when a2 == t2(=0x302), and falls through when a2 != t2(=0x302).
  The `beq` branch at 0x6f54b8 targets 0x6f5840, is taken when a2 == t8(=0x303), and falls through when a2 != t8(=0x303).
  The `bne` branch at 0x6f54e0 targets 0x6f5558, is taken when a1 < a0(=0x8576) (unsigned), and falls through when a1 >= a0(=0x8576) (unsigned).
  The `bne` branch at 0x6f54e8 targets 0x6f55e4, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x6f54f4 targets 0x6f5780, is taken when a2 == v1(=0x300), and falls through when a2 != v1(=0x300).
  The `beq` branch at 0x6f54fc targets 0x6f57a8, is taken when a2 == a0(=0x301), and falls through when a2 != a0(=0x301).
  The `beq` branch at 0x6f5504 targets 0x6f5814, is taken when a2 == a1(=0x302), and falls through when a2 != a1(=0x302).
  The `bne` branch at 0x6f550c targets 0x6f55cc, is taken when a2 != a4(=0x303), and falls through when a2 == a4(=0x303).
  The `beq` branch at 0x6f5538 targets 0x6f5c00, is taken when a7 == 0, and falls through when a7 != 0.
  The `beq` branch at 0x6f5550 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5558 targets 0x6f5700, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x6f5560 targets 0x6f5688, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x6f556c targets 0x6f5800, is taken when a2 == a5(=0x300), and falls through when a2 != a5(=0x300).
  The `beq` branch at 0x6f5574 targets 0x6f5880, is taken when a2 == a6(=0x301), and falls through when a2 != a6(=0x301).
  The `beq` branch at 0x6f557c targets 0x6f5940, is taken when a2 == a7(=0x302), and falls through when a2 != a7(=0x302).
  The `bne` branch at 0x6f5584 targets 0x6f55cc, is taken when a2 != t0(=0x303), and falls through when a2 == t0(=0x303).
  The `beq` branch at 0x6f5594 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f55ac targets 0x6f59c8, is taken when a2 == t0(=0x300), and falls through when a2 != t0(=0x300).
  The `beq` branch at 0x6f55b4 targets 0x6f5a24, is taken when a2 == t1(=0x301), and falls through when a2 != t1(=0x301).
  The `beq` branch at 0x6f55bc targets 0x6f5ad4, is taken when a2 == at(=0x302), and falls through when a2 != at(=0x302).
  The `beq` branch at 0x6f55c4 targets 0x6f5894, is taken when a2 == v1(=0x303), and falls through when a2 != v1(=0x303).
  The `bne` branch at 0x6f55e8 targets 0x6f5698, is taken when a1 < a0(=0x8578) (unsigned), and falls through when a1 >= a0(=0x8578) (unsigned).
  The `bne` branch at 0x6f55f4 targets 0x6f5734, is taken when a0(=0x8578) < a1 (unsigned), and falls through when a0(=0x8578) >= a1 (unsigned).
  The `beq` branch at 0x6f5600 targets 0x6f5b40, is taken when a2 == a6(=0x300), and falls through when a2 != a6(=0x300).
  The `beq` branch at 0x6f5608 targets 0x6f5b88, is taken when a2 == t0(=0x301), and falls through when a2 != t0(=0x301).
  The `beq` branch at 0x6f5614 targets 0x6f5c14, is taken when a2 == t2(=0x302), and falls through when a2 != t2(=0x302).
  The `bne` branch at 0x6f561c targets 0x6f55cc, is taken when a2 != t8(=0x303), and falls through when a2 == t8(=0x303).
  The `beq` branch at 0x6f5624 targets 0x6f5da4, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x6f5650 targets 0x6f5dac, is taken when a7 == 0, and falls through when a7 != 0.
  The `beq` branch at 0x6f5668 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5680 targets 0x6f53b4 and is always taken.
  The `bne` branch at 0x6f5688 targets 0x6f55cc, is taken when a1 != at(=0x1702), and falls through when a1 == at(=0x1702).
  The `beq` branch at 0x6f5690 targets 0x6f55ac and is always taken.
  The `bne` branch at 0x6f5698 targets 0x6f55cc, is taken when a1 != v0(=0x8577), and falls through when a1 == v0(=0x8577).
  The `beq` branch at 0x6f56a0 targets 0x6f5c40, is taken when a2 == v1(=0x300), and falls through when a2 != v1(=0x300).
  The `beq` branch at 0x6f56a8 targets 0x6f5c5c, is taken when a2 == a0(=0x301), and falls through when a2 != a0(=0x301).
  The `beq` branch at 0x6f56b0 targets 0x6f5cc0, is taken when a2 == a1(=0x302), and falls through when a2 != a1(=0x302).
  The `bne` branch at 0x6f56b8 targets 0x6f55cc, is taken when a2 != a4(=0x303), and falls through when a2 == a4(=0x303).
  The `beq` branch at 0x6f56dc targets 0x6f5e00, is taken when a7 == 0, and falls through when a7 != 0.
  The `beq` branch at 0x6f56f4 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5704 targets 0x6f5ac0, is taken when a2 == a4(=0x300), and falls through when a2 != a4(=0x300).
  The `beq` branch at 0x6f570c targets 0x6f5b70, is taken when a2 == a5(=0x301), and falls through when a2 != a5(=0x301).
  The `beq` branch at 0x6f5714 targets 0x6f5be0, is taken when a2 == a6(=0x302), and falls through when a2 != a6(=0x302).
  The `bne` branch at 0x6f571c targets 0x6f55cc, is taken when a2 != a7(=0x303), and falls through when a2 == a7(=0x303).
  The `beq` branch at 0x6f572c targets 0x6f55cc and is always taken.
  The `bne` branch at 0x6f5734 targets 0x6f55cc, is taken when a1 != t8(=0x8747), and falls through when a1 == t8(=0x8747).
  The `beq` branch at 0x6f573c targets 0x6f5d00, is taken when a2 == at(=0x300), and falls through when a2 != at(=0x300).
  The `beq` branch at 0x6f5744 targets 0x6f5d40, is taken when a2 == v0(=0x301), and falls through when a2 != v0(=0x301).
  The `beq` branch at 0x6f574c targets 0x6f5d88, is taken when a2 == v1(=0x302), and falls through when a2 != v1(=0x302).
  The `bne` branch at 0x6f5754 targets 0x6f55cc, is taken when a2 != a0(=0x303), and falls through when a2 == a0(=0x303).
  The `beq` branch at 0x6f576c targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f57a0 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f57d8 targets 0x6f5ca0, is taken when a7 == 0, and falls through when a7 != 0.
  The `beq` branch at 0x6f57f0 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f580c targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f582c targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f585c targets 0x6f5cd8, is taken when a7 == 0, and falls through when a7 != 0.
  The `beq` branch at 0x6f5874 targets 0x6f54c0 and is always taken.
  The `beq` branch at 0x6f588c targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5910 targets 0x6f5cec, is taken when t8(=a7) == 0, and falls through when t8(=a7) != 0.
  The `beq` branch at 0x6f5930 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f594c targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5968 targets 0x6f54c0 and is always taken.
  The `beq` branch at 0x6f5990 targets 0x6f5d20, is taken when a7 == 0, and falls through when a7 != 0.
  The `beq` branch at 0x6f59a8 targets 0x6f54c0 and is always taken.
  The `beq` branch at 0x6f59c0 targets 0x6f54c0 and is always taken.
  The `beq` branch at 0x6f5a1c targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5a98 targets 0x6f5dc0, is taken when t8(=a7) == 0, and falls through when t8(=a7) != 0.
  The `beq` branch at 0x6f5ab8 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5acc targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5b34 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5b44 targets 0x6f5dd4, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x6f5b68 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5b80 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5b88 targets 0x6f5ddc, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x6f5bc0 targets 0x6f5de4, is taken when a7 == 0, and falls through when a7 != 0.
  The `beq` branch at 0x6f5bd8 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5bec targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5c0c targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5c18 targets 0x6f5e14, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x6f5c34 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5c54 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5c80 targets 0x6f5e1c, is taken when a7 == 0, and falls through when a7 != 0.
  The `beq` branch at 0x6f5c98 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5cac targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5cd0 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5ce4 targets 0x6f54c0 and is always taken.
  The `beq` branch at 0x6f5cf8 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5d18 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5d2c targets 0x6f54c0 and is always taken.
  The `beq` branch at 0x6f5d68 targets 0x6f5e30, is taken when a7 == 0, and falls through when a7 != 0.
  The `beq` branch at 0x6f5d80 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5d9c targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5da4 targets 0x6f562c and is always taken.
  The `beq` branch at 0x6f5db8 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5dcc targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5dd4 targets 0x6f5b4c and is always taken.
  The `beq` branch at 0x6f5ddc targets 0x6f5b90 and is always taken.
  The `beq` branch at 0x6f5df0 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5e0c targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5e14 targets 0x6f5c20 and is always taken.
  The `beq` branch at 0x6f5e28 targets 0x6f55cc and is always taken.
  The `beq` branch at 0x6f5e40 targets 0x6f55cc and is always taken.
  The return at 0x6f54d0 has v0 = ?.
  The return at 0x6f55dc has v0 = one of ?, 0x8577, 0x301, ret(FormatToSelectRGBAlpha), ret(FormatToSelectRGBColor).
  The instructions from 0x6f56fc to 0x6f56fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f5774 to 0x6f577c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f57f8 to 0x6f57fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f5834 to 0x6f583c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f587c to 0x6f587c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f5938 to 0x6f593c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f5b3c to 0x6f5b3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f5bf4 to 0x6f5bfc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f5c3c to 0x6f5c3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f5cb4 to 0x6f5cbc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f5d34 to 0x6f5d3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f5df8 to 0x6f5dfc are not reached by any path from the entry, and their branches are not listed.

- `GetArgAlpha` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x6f5e80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x6f5e80-0x6f64bc (1596 bytes).
  It occupies 1596 bytes.
  4 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x74c, including `lw` at 0x6f5e90, `lw` at 0x6f6068, `lw` at 0x6f60b4.
  The `lw` at 0x6f5ea4 loads 4 bytes from a0 (arg0 at entry) +0x474a4.
  3 such `lw` accesses load 4 bytes from (a3 + ([a3+1868] << 0x2)) +0x398, including `lw` at 0x6f5eb4, `lw` at 0x6f62c4, `lw` at 0x6f6390.
  24 such `sw` accesses store 4 bytes to (a3 + ([a3+1868] << 0x2)) +0x398, including `sw` at 0x6f5edc, `sw` at 0x6f5f00, `sw` at 0x6f5fe8.
  The `lw` at 0x6f5f04 loads 4 bytes from (a3 + ([a3+1868] << 0x2)) +0x198.
  The `lw` at 0x6f5f4c loads 4 bytes from (a3 + ([a3+1868] << 0x2)) +0x298.
  The `sw` at 0x6f5fd4 stores 4 bytes to (a3 + ([a3+1868] << 0x2)) +0x98.
  11 such `sw` accesses store 4 bytes to (a3 + ([a3+1868] << 0x2)) +0x198, including `sw` at 0x6f5fdc, `sw` at 0x6f6108, `sw` at 0x6f6174.
  The `sw` at 0x6f5ff8 stores 4 bytes to (a3 + ([a3+1868] << 0x2)) +0x298.
  The `lw` at 0x6f6028 loads 4 bytes from (a0 + (a1-33984 << 0x2)) +0x35560.
  The `lw` at 0x6f602c loads 4 bytes from [(a0 + (a1-33984 << 0x2))+218464] +0x1c.
  The `lw` at 0x6f6030 loads 4 bytes from [[(a0 + (a1-33984 << 0x2))+218464]+28] +0x0.
  The `lw` at 0x6f6038 loads 4 bytes from [[[(a0 + (a1-33984 << 0x2))+218464]+28]] +0x48.
  3 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x74c, including `sw` at 0x6f6078, `sw` at 0x6f60c4, `sw` at 0x6f6328.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x6f629c, `lw` at 0x6f6368.
  The `bgezall` at 0x6f62bc calls FormatToSelectAlpha [0x6f5300] with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x6f6388 calls FormatToSelectAlpha [0x6f5300] with a0=?, a1=?, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x6f5ee0 targets 0x6f6140, is taken when a7 == 0, and falls through when a7 != 0.
  The `bne` branch at 0x6f5ff4 targets 0x6f6040, is taken when a1 < at(=0x84c0) (unsigned), and falls through when a1 >= at(=0x84c0) (unsigned).
  The `bne` branch at 0x6f6004 targets 0x6f6044, is taken when a4(=0x84c7) < a1 (unsigned), and falls through when a4(=0x84c7) >= a1 (unsigned).
  The `beq` branch at 0x6f6034 targets 0x6f6054 and is always taken.
  The `bne` branch at 0x6f6044 targets 0x6f6084, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `beq` branch at 0x6f604c targets 0x6f60d0, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x6f6058 targets 0x6f6354, is taken when a2 == t9(=0x302), and falls through when a2 != t9(=0x302).
  The `beq` branch at 0x6f6060 targets 0x6f6288, is taken when a2 == at(=0x303), and falls through when a2 != at(=0x303).
  The `beq` branch at 0x6f6084 targets 0x6f6200, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x6f608c targets 0x6f6150, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `beq` branch at 0x6f6098 targets 0x6f6340, is taken when a2 == a0(=0x302), and falls through when a2 != a0(=0x302).
  The `bne` branch at 0x6f60a0 targets 0x6f6068, is taken when a2 != a1(=0x303), and falls through when a2 == a1(=0x303).
  The `bne` branch at 0x6f60d4 targets 0x6f61a0, is taken when a1 < a0(=0x8577) (unsigned), and falls through when a1 >= a0(=0x8577) (unsigned).
  The `bne` branch at 0x6f60e0 targets 0x6f6224, is taken when a0(=0x8577) < a1 (unsigned), and falls through when a0(=0x8577) >= a1 (unsigned).
  The `beq` branch at 0x6f60ec targets 0x6f6400, is taken when a2 == t2(=0x302), and falls through when a2 != t2(=0x302).
  The `bne` branch at 0x6f60f4 targets 0x6f6068, is taken when a2 != t9(=0x303), and falls through when a2 == t9(=0x303).
  The `beq` branch at 0x6f6114 targets 0x6f6454, is taken when a7 == 0, and falls through when a7 != 0.
  The `beq` branch at 0x6f612c targets 0x6f6068 and is always taken.
  The `beq` branch at 0x6f6148 targets 0x6f5f04 and is always taken.
  The `bne` branch at 0x6f6150 targets 0x6f6068, is taken when a1 != t2(=0xb60), and falls through when a1 == t2(=0xb60).
  The `beq` branch at 0x6f6158 targets 0x6f63e8, is taken when a2 == t9(=0x302), and falls through when a2 != t9(=0x302).
  The `bne` branch at 0x6f6160 targets 0x6f6068, is taken when a2 != at(=0x303), and falls through when a2 == at(=0x303).
  The `beq` branch at 0x6f6180 targets 0x6f6440, is taken when a7 == 0, and falls through when a7 != 0.
  The `beq` branch at 0x6f6198 targets 0x6f6068 and is always taken.
  The `bne` branch at 0x6f61a0 targets 0x6f6068, is taken when a1 != a4(=0x8576), and falls through when a1 == a4(=0x8576).
  The `beq` branch at 0x6f61a8 targets 0x6f6468, is taken when a2 == a6(=0x302), and falls through when a2 != a6(=0x302).
  The `bne` branch at 0x6f61b0 targets 0x6f6068, is taken when a2 != t0(=0x303), and falls through when a2 == t0(=0x303).
  The `beq` branch at 0x6f61dc targets 0x6f6484, is taken when a7 == 0, and falls through when a7 != 0.
  The `beq` branch at 0x6f61f4 targets 0x6f6068 and is always taken.
  The `beq` branch at 0x6f6204 targets 0x6f63d4, is taken when a2 == v1(=0x302), and falls through when a2 != v1(=0x302).
  The `bne` branch at 0x6f620c targets 0x6f6068, is taken when a2 != a0(=0x303), and falls through when a2 == a0(=0x303).
  The `beq` branch at 0x6f621c targets 0x6f6068 and is always taken.
  The `bne` branch at 0x6f6224 targets 0x6f6068, is taken when a1 != a4(=0x8578), and falls through when a1 == a4(=0x8578).
  The `beq` branch at 0x6f622c targets 0x6f6410, is taken when a2 == a5(=0x302), and falls through when a2 != a5(=0x302).
  The `bne` branch at 0x6f6234 targets 0x6f6068, is taken when a2 != a6(=0x303), and falls through when a2 == a6(=0x303).
  The `beq` branch at 0x6f623c targets 0x6f6498, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x6f6268 targets 0x6f64a0, is taken when a7 == 0, and falls through when a7 != 0.
  The `beq` branch at 0x6f6280 targets 0x6f6068 and is always taken.
  The `beq` branch at 0x6f62fc targets 0x6f63c0, is taken when t8(=a7) == 0, and falls through when t8(=a7) != 0.
  The `beq` branch at 0x6f634c targets 0x6f6068 and is always taken.
  The `beq` branch at 0x6f63ac targets 0x6f6068 and is always taken.
  The `beq` branch at 0x6f63cc targets 0x6f6068 and is always taken.
  The `beq` branch at 0x6f63e0 targets 0x6f6068 and is always taken.
  The `beq` branch at 0x6f63f0 targets 0x6f6068 and is always taken.
  The `beq` branch at 0x6f6408 targets 0x6f6068 and is always taken.
  The `beq` branch at 0x6f6414 targets 0x6f64b4, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x6f642c targets 0x6f6068 and is always taken.
  The `beq` branch at 0x6f644c targets 0x6f6068 and is always taken.
  The `beq` branch at 0x6f6460 targets 0x6f6068 and is always taken.
  The `beq` branch at 0x6f647c targets 0x6f6068 and is always taken.
  The `beq` branch at 0x6f6490 targets 0x6f6068 and is always taken.
  The `beq` branch at 0x6f6498 targets 0x6f6244 and is always taken.
  The `beq` branch at 0x6f64ac targets 0x6f6068 and is always taken.
  The `beq` branch at 0x6f64b4 targets 0x6f641c and is always taken.
  The return at 0x6f607c has v0 = [a3+1868]+1.
  The return at 0x6f60c8 has v0 = ?.
  The return at 0x6f632c has v0 = ret(FormatToSelectAlpha).
  The instructions from 0x6f603c to 0x6f603c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f6134 to 0x6f613c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f61fc to 0x6f61fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f6334 to 0x6f633c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f63b4 to 0x6f63bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f63f8 to 0x6f63fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f6434 to 0x6f643c are not reached by any path from the entry, and their branches are not listed.

- `GenTECOpRGB` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x6f65c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x6f65c0-0x6f6ce8 (1832 bytes).
  It occupies 1832 bytes.
  3 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x74c, including `lw` at 0x6f65cc, `lw` at 0x6f68c0, `lw` at 0x6f6928.
  The `lw` at 0x6f65f8 loads 4 bytes from (a2 + ([a2+1868] << 0x2)) +0x98.
  2 such `lw` accesses load 4 bytes from (a2 + ([a2+1868] << 0x2)) +0x298, including `lw` at 0x6f6610, `lw` at 0x6f6814.
  15 such `sw` accesses store 4 bytes to (a2 + ([a2+1868] << 0x2)) +0x298, including `sw` at 0x6f665c, `sw` at 0x6f66f0, `sw` at 0x6f677c.
  The `sw` at 0x6f6674 stores 4 bytes to (a2 + ([a2+1868] << 0x2)) +0x98.
  2 such `lw` accesses load 4 bytes from (a2 + ([a2+1868] << 0x2)) +0x198, including `lw` at 0x6f686c, `lw` at 0x6f68e4.
  2 such `lw` accesses load 4 bytes from (a2 + ([a2+1868] << 0x2)) +0x398, including `lw` at 0x6f687c, `lw` at 0x6f68fc.
  2 such `sw` accesses store 4 bytes to (a2 + ([a2+1868] << 0x2)) +0x398, including `sw` at 0x6f68a4, `sw` at 0x6f6918.
  2 such `sw` accesses store 4 bytes to (a2 + ([a2+1868] << 0x2)) +0x198, including `sw` at 0x6f68bc, `sw` at 0x6f6924.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x74c, including `sw` at 0x6f68cc, `sw` at 0x6f6934.
  The `bgezall` at 0x6f67cc calls SubHalf [0x6f64c0] with a0=a2+664, a1=0x3800000, a2=one of 0x86af, 0x8744, a3=?, a5=0xffffffffff83ffff, a6=0xfffffffffffc0fff, a7=one of 0xfffffffff87f0000, 0x10000.
  The `bgezall` at 0x6f67dc calls SubHalf [0x6f64c0] with a0=a2+668, a1=?, a2=?, a3=?.
  The `bgezall` at 0x6f67ec calls TimesFour [0x6f6580] with a0=a2+664, a1=?, a2=?, a3=?.
  The `bne` branch at 0x6f6670 targets 0x6f6700, is taken when a0 < t2(=0x86ae) (unsigned), and falls through when a0 >= t2(=0x86ae) (unsigned).
  The `beq` branch at 0x6f667c targets 0x6f6780, is taken when t2(=0x86ae) >= a0 (unsigned), and falls through when t2(=0x86ae) < a0 (unsigned).
  The `bne` branch at 0x6f6688 targets 0x6f69c0, is taken when a0 < a2(=0x8744) (unsigned), and falls through when a0 >= a2(=0x8744) (unsigned).
  The `bne` branch at 0x6f6698 targets 0x6f6a94, is taken when a2(=0x8744) < a0 (unsigned), and falls through when a2(=0x8744) >= a0 (unsigned).
  The `beq` branch at 0x6f66ec targets 0x6f6820 and is always taken.
  The `bne` branch at 0x6f6708 targets 0x6f6948, is taken when a0 < a2(=0x84e7) (unsigned), and falls through when a0 >= a2(=0x84e7) (unsigned).
  The `bne` branch at 0x6f6714 targets 0x6f69f0, is taken when a2(=0x84e7) < a0 (unsigned), and falls through when a2(=0x84e7) >= a0 (unsigned).
  The `beq` branch at 0x6f6778 targets 0x6f6820 and is always taken.
  The `bc1t` branch at 0x6f6850 targets 0x6f69b4, is taken when f4 == f0(=0x3ff0000000000000) (c.eq.d at 0x6f6838), and falls through when not (f4 == f0(=0x3ff0000000000000) (c.eq.d at 0x6f6838)).
  The `bc1f` branch at 0x6f6864 targets 0x6f68dc, is taken when not (f4 == f1(=0x4000000000000000) (c.eq.d at 0x6f685c)), and falls through when f4 == f1(=0x4000000000000000) (c.eq.d at 0x6f685c).
  The `bne` branch at 0x6f6948 targets 0x6f6a80, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `beq` branch at 0x6f6958 targets 0x6f6b34, is taken when a0 >= 0x1e02 (unsigned), and falls through when a0 < 0x1e02 (unsigned).
  The `beq` branch at 0x6f69ac targets 0x6f6820 and is always taken.
  The `beq` branch at 0x6f69b4 targets 0x6f68e4 and is always taken.
  The `bne` branch at 0x6f69d0 targets 0x6f6b10, is taken when a0 < a3(=0x8740) (unsigned), and falls through when a0 >= a3(=0x8740) (unsigned).
  The `beq` branch at 0x6f69d8 targets 0x6f6780, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x6f69e0 targets 0x6f6780, is taken when a0 == t2(=0x8741), and falls through when a0 != t2(=0x8741).
  The `beq` branch at 0x6f69e8 targets 0x6f6820 and is always taken.
  The `bne` branch at 0x6f6a00 targets 0x6f6b20, is taken when a0 < t3(=0x8575) (unsigned), and falls through when a0 >= t3(=0x8575) (unsigned).
  The `bne` branch at 0x6f6a08 targets 0x6f6b5c, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `beq` branch at 0x6f6a78 targets 0x6f6820 and is always taken.
  The `beq` branch at 0x6f6a84 targets 0x6f6b6c, is taken when a0 == a3(=0x104), and falls through when a0 != a3(=0x104).
  The `beq` branch at 0x6f6a8c targets 0x6f6820 and is always taken.
  The `bne` branch at 0x6f6aa4 targets 0x6f6b48, is taken when a0 < t3(=0x8746) (unsigned), and falls through when a0 >= t3(=0x8746) (unsigned).
  The `bne` branch at 0x6f6aac targets 0x6f6b64, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `beq` branch at 0x6f6b08 targets 0x6f6820 and is always taken.
  The `beq` branch at 0x6f6b10 targets 0x6f6780, is taken when a0 == a2(=0x86af), and falls through when a0 != a2(=0x86af).
  The `beq` branch at 0x6f6b18 targets 0x6f6820 and is always taken.
  The `beq` branch at 0x6f6b24 targets 0x6f6bc0, is taken when a0 == t8(=0x8574), and falls through when a0 != t8(=0x8574).
  The `beq` branch at 0x6f6b2c targets 0x6f6820 and is always taken.
  The `beq` branch at 0x6f6b38 targets 0x6f6c40, is taken when a0 == t9(=0x2100), and falls through when a0 != t9(=0x2100).
  The `beq` branch at 0x6f6b40 targets 0x6f6824 and is always taken.
  The `beq` branch at 0x6f6b4c targets 0x6f6c94, is taken when a0 == at(=0x8745), and falls through when a0 != at(=0x8745).
  The `beq` branch at 0x6f6b54 targets 0x6f6820 and is always taken.
  The `beq` branch at 0x6f6b5c targets 0x6f6820 and is always taken.
  The `beq` branch at 0x6f6b64 targets 0x6f6820 and is always taken.
  The `beq` branch at 0x6f6bb8 targets 0x6f6820 and is always taken.
  The `beq` branch at 0x6f6c30 targets 0x6f6820 and is always taken.
  The `beq` branch at 0x6f6c8c targets 0x6f6820 and is always taken.
  The `beq` branch at 0x6f6ce0 targets 0x6f6820 and is always taken.
  The return at 0x6f68d4 has v0 = ?.
  The return at 0x6f6940 has v0 = ?.
  The instructions from 0x6f66f4 to 0x6f66fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f69bc to 0x6f69bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x6f6c38 to 0x6f6c3c are not reached by any path from the entry, and their branches are not listed.

- `GenTECOpAlpha` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x6f6d00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x6f6d00-0x6f72f4 (1524 bytes).
  It occupies 1524 bytes.
  4 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x74c, including `lw` at 0x6f6d24, `lw` at 0x6f6fe4, `lw` at 0x6f700c.
  The `lw` at 0x6f6d48 loads 4 bytes from (a2 + ([a2+1868] << 0x2)) +0x298.
  The `lw` at 0x6f6d60 loads 4 bytes from (a2 + ([a2+1868] << 0x2)) +0x98.
  The `lw` at 0x6f6d6c loads 4 bytes from (a2 + ([a2+1868] << 0x2)) +0x198.
  The `sw` at 0x6f6e04 stores 4 bytes to (a2 + ([a2+1868] << 0x2)) +0x98.
  2 such `sw` accesses store 4 bytes to (a2 + ([a2+1868] << 0x2)) +0x298, including `sw` at 0x6f6e10, `sw` at 0x6f6f58.
  The `sw` at 0x6f6e28 stores 4 bytes to (a2 + ([a2+1868] << 0x2)) +0x198.
  12 such `lw` accesses load 4 bytes from (a2 + ([a2+1868] << 0x2)) +0x398, including `lw` at 0x6f6e50, `lw` at 0x6f6eb0, `lw` at 0x6f6f0c.
  14 such `sw` accesses store 4 bytes to (a2 + ([a2+1868] << 0x2)) +0x398, including `sw` at 0x6f6e90, `sw` at 0x6f6ef4, `sw` at 0x6f6f48.
  3 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x74c, including `sw` at 0x6f6ff0, `sw` at 0x6f7018, `sw` at 0x6f7094.
  The `bgezall` at 0x6f6f54 calls SubHalf [0x6f64c0] with a0=a2+676, a1=0x800000, a2=?, a3=?, a4=0x800000, a6=0xffffffffc7ffffff.
  The `bgezall` at 0x6f6f64 calls SubHalf [0x6f64c0] with a0=a2+680, a1=?, a2=?, a3=?.
  The `bgezall` at 0x6f6f74 calls TimesFour [0x6f6580] with a0=a2+676, a1=?, a2=?, a3=?.
  The `bne` branch at 0x6f6e24 targets 0x6f6e94, is taken when a0 < t0(=0x86ae) (unsigned), and falls through when a0 >= t0(=0x86ae) (unsigned).
  The `beq` branch at 0x6f6e30 targets 0x6f6f00, is taken when t0(=0x86ae) >= a0 (unsigned), and falls through when t0(=0x86ae) < a0 (unsigned).
  The `bne` branch at 0x6f6e3c targets 0x6f70a4, is taken when a0 < a2(=0x8744) (unsigned), and falls through when a0 >= a2(=0x8744) (unsigned).
  The `bne` branch at 0x6f6e48 targets 0x6f7194, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `beq` branch at 0x6f6e8c targets 0x6f6f90 and is always taken.
  The `bne` branch at 0x6f6e9c targets 0x6f7028, is taken when a0 < a2(=0x84e7) (unsigned), and falls through when a0 >= a2(=0x84e7) (unsigned).
  The `bne` branch at 0x6f6ea8 targets 0x6f70d4, is taken when a2(=0x84e7) < a0 (unsigned), and falls through when a2(=0x84e7) >= a0 (unsigned).
  The `beq` branch at 0x6f6ef0 targets 0x6f6f90 and is always taken.
  The `bc1t` branch at 0x6f6fb8 targets 0x6f7080, is taken when f4 == f0(=0x3ff0000000000000) (c.eq.d at 0x6f6fa4), and falls through when not (f4 == f0(=0x3ff0000000000000) (c.eq.d at 0x6f6fa4)).
  The `bc1f` branch at 0x6f6fcc targets 0x6f7000, is taken when not (f4 == f1(=0x4000000000000000) (c.eq.d at 0x6f6fc4)), and falls through when f4 == f1(=0x4000000000000000) (c.eq.d at 0x6f6fc4).
  The `bne` branch at 0x6f7028 targets 0x6f7148, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x6f7040 targets 0x6f7268, is taken when a0 >= 0x1e02 (unsigned), and falls through when a0 < 0x1e02 (unsigned).
  The `beq` branch at 0x6f7078 targets 0x6f6f90 and is always taken.
  The `bne` branch at 0x6f70b4 targets 0x6f71f0, is taken when a0 < a2(=0x8740) (unsigned), and falls through when a0 >= a2(=0x8740) (unsigned).
  The `beq` branch at 0x6f70bc targets 0x6f6f04, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x6f70c4 targets 0x6f6f04, is taken when a0 == a5(=0x8741), and falls through when a0 != a5(=0x8741).
  The `beq` branch at 0x6f70cc targets 0x6f6f90 and is always taken.
  The `bne` branch at 0x6f70e0 targets 0x6f7200, is taken when a0 < a4(=0x8575) (unsigned), and falls through when a0 >= a4(=0x8575) (unsigned).
  The `bne` branch at 0x6f70ec targets 0x6f6f90, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x6f7140 targets 0x6f6f90 and is always taken.
  The `bne` branch at 0x6f714c targets 0x6f6f90, is taken when a0 != a5(=0x104), and falls through when a0 == a5(=0x104).
  The `beq` branch at 0x6f718c targets 0x6f6f90 and is always taken.
  The `bne` branch at 0x6f7198 targets 0x6f72a8, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x6f71a8 targets 0x6f6f90, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `beq` branch at 0x6f71e8 targets 0x6f6f90 and is always taken.
  The `beq` branch at 0x6f71f0 targets 0x6f6f04, is taken when a0 == a4(=0x86af), and falls through when a0 != a4(=0x86af).
  The `beq` branch at 0x6f71f8 targets 0x6f6f90 and is always taken.
  The `bne` branch at 0x6f7204 targets 0x6f6f90, is taken when a0 != a5(=0x8574), and falls through when a0 == a5(=0x8574).
  The `beq` branch at 0x6f7260 targets 0x6f6f90 and is always taken.
  The `bne` branch at 0x6f7268 targets 0x6f6f94, is taken when a0 != a5(=0x2100), and falls through when a0 == a5(=0x2100).
  The `beq` branch at 0x6f72a0 targets 0x6f6f90 and is always taken.
  The `bne` branch at 0x6f72ac targets 0x6f6f90, is taken when a0 != a7(=0x8745), and falls through when a0 == a7(=0x8745).
  The `beq` branch at 0x6f72ec targets 0x6f6f90 and is always taken.
  The return at 0x6f6ff8 has v0 = ?.
  The return at 0x6f7020 has v0 = ?.
  The return at 0x6f709c has v0 = ?.
  The instructions from 0x6f6ef8 to 0x6f6efc are not reached by any path from the entry, and their branches are not listed.

- `WriteProgram` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x74c7c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x74c7c0-0x74c8e8 (296 bytes).
  It occupies 296 bytes.
  The `lw` at 0x74c7c8 loads 4 bytes from a1 (arg1 at entry) +0x18.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x1c, including `lw` at 0x74c7ec, `lw` at 0x74c894.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d58, including `lw` at 0x74c7f8, `lw` at 0x74c830, `lw` at 0x74c858.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d5c, including `lw` at 0x74c7fc, `lw` at 0x74c834.
  The `sw` at 0x74c854 stores 4 bytes to [a0+290136] +0x0.
  The `lw` at 0x74c85c loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `sw` at 0x74c860 stores 4 bytes to [a0+290136] +0x4.
  The `sw` at 0x74c87c stores 4 bytes to [a0+290136] +0x8.
  The `lw` at 0x74c880 loads 4 bytes from a0 (arg0 at entry) +0xc988.
  The `sw` at 0x74c8c0 stores 4 bytes to a0 (arg0 at entry) +0x46d58.
  The `jalr` at 0x74c828 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=[a0+290136].
  The `jalr` at 0x74c898 calls (unknown callee) with a0=[a0+290136]+12, a1=[a1+28], a2=([a1+24] << 0x4), a3=?, a4=[a0+290136], a5=([a1+24] << 0x2).
  The `beq` branch at 0x74c7e4 targets 0x74c8d0, is taken when s4(=[a1+24]) == 0, and falls through when s4(=[a1+24]) != 0.
  The `beq` branch at 0x74c7f0 targets 0x74c8d0, is taken when at(=[a1+28]) == 0, and falls through when at(=[a1+28]) != 0.
  The `beq` branch at 0x74c814 targets 0x74c850, is taken when v0(?) >= s2(=([a1+24] << 0x2)+3) (unsigned), and falls through when v0(?) < s2(=([a1+24] << 0x2)+3) (unsigned).
  The `bne` branch at 0x74c844 targets 0x74c828, is taken when v1(?) < s2(=([a1+24] << 0x2)+3) (unsigned), and falls through when v1(?) >= s2(=([a1+24] << 0x2)+3) (unsigned).
  The return at 0x74c8c8 has v0 = ret(?).
  The return at 0x74c8e0 has v0 = ?.

- `UpdateParameters` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x74c900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x74c900-0x74cad0 (464 bytes).
  It occupies 464 bytes.
  The `lw` at 0x74c90c loads 4 bytes from a0 (arg0 at entry) +0xc20c.
  The `lw` at 0x74c948 loads 4 bytes from a4 (arg4 at entry) +0x20.
  2 such `swc1` accesses store 4 bytes to (a3 + ([[ret(__glVertexShaderLookupSymbolPointer)]+4] << 0x4)) +0x0, including `swc1` at 0x74c99c, `swc1` at 0x74ca58.
  The `lwc1` at 0x74c9a0 loads 4 bytes from ret(0x74bec0) +0x4.
  2 such `swc1` accesses store 4 bytes to (a3 + ([[ret(__glVertexShaderLookupSymbolPointer)]+4] << 0x4)) +0x4, including `swc1` at 0x74c9a4, `swc1` at 0x74ca60.
  The `lwc1` at 0x74c9a8 loads 4 bytes from ret(0x74bec0) +0x8.
  2 such `swc1` accesses store 4 bytes to (a3 + ([[ret(__glVertexShaderLookupSymbolPointer)]+4] << 0x4)) +0x8, including `swc1` at 0x74c9ac, `swc1` at 0x74ca68.
  The `lwc1` at 0x74c9b4 loads 4 bytes from ret(0x74bec0) +0xc.
  2 such `swc1` accesses store 4 bytes to (a3 + ([[ret(__glVertexShaderLookupSymbolPointer)]+4] << 0x4)) +0xc, including `swc1` at 0x74c9c4, `swc1` at 0x74ca80.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x54, including `lw` at 0x74c9cc, `lw` at 0x74ca88.
  2 such `sb` accesses store 1 byte to ?, including `sb` at 0x74c9d8, `sb` at 0x74ca9c.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x74c9e8, `lw` at 0x74ca08.
  The `lbu` at 0x74ca14 loads 1 byte from ret(__glVertexShaderLookupSymbolPointer) +0x21.
  The `lw` at 0x74ca3c loads 4 bytes from ret(__glVertexShaderLookupSymbolPointer) +0x0.
  The `lwc1` at 0x74ca40 loads 4 bytes from ret(0x74bec0) +0x0.
  The `lw` at 0x74ca48 loads 4 bytes from [ret(__glVertexShaderLookupSymbolPointer)] +0x4.
  The `lwc1` at 0x74ca5c loads 4 bytes from ret(0x74bec0) +0x10.
  The `lwc1` at 0x74ca64 loads 4 bytes from ret(0x74bec0) +0x20.
  The `lwc1` at 0x74ca70 loads 4 bytes from ret(0x74bec0) +0x30.
  The `jalr` at 0x74c93c calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x74ca04 calls __glVertexShaderLookupSymbolPointer [0x6930c0] with a0=a1+32, a1=?, a2=?, a3=?.
  The `bgezall` at 0x74ca28 calls (unnamed) [0x74bec0] with a0=a0 at entry (arg0), a1=?, a2=sp-128, a3=?.
  The `beq` branch at 0x74c944 targets 0x74cab4, is taken when s3(=a5) == 0, and falls through when s3(=a5) != 0.
  The `beq` branch at 0x74c988 targets 0x74c9e8 and is always taken.
  The `beq` branch at 0x74c9e0 targets 0x74caa0, is taken when s0(?) == s6(=((a5 << 0x2) + a6)), and falls through when s0(?) != s6(=((a5 << 0x2) + a6)).
  The `beq` branch at 0x74ca0c targets 0x74c9dc, is taken when v0(=ret(__glVertexShaderLookupSymbolPointer)) == 0, and falls through when v0(=ret(__glVertexShaderLookupSymbolPointer)) != 0.
  The `beq` branch at 0x74ca18 targets 0x74c9dc, is taken when a2(=[ret(__glVertexShaderLookupSymbolPointer)+33]:1) == 0, and falls through when a2(=[ret(__glVertexShaderLookupSymbolPointer)+33]:1) != 0.
  The `beq` branch at 0x74ca34 targets 0x74c9dc, is taken when v0(=ret(0x74bec0)) == 0, and falls through when v0(=ret(0x74bec0)) != 0.
  The `bne` branch at 0x74ca44 targets 0x74c990, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x74ca98 targets 0x74c9dc and is always taken.
  The return at 0x74cac8 has v0 = one of ret(?), ?.

- `WriteConstants` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x74cb00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x74cb00-0x74d7d0 (3280 bytes).
  It occupies 3280 bytes.
  3 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x5c, including `lw` at 0x74cb04, `lw` at 0x74d140, `lw` at 0x74d708.
  The `lw` at 0x74cb44 loads 4 bytes from a0 (arg0 at entry) +0xc088.
  The `lw` at 0x74cb54 loads 4 bytes from a1 (arg1 at entry) +0x10.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x24c, including `lw` at 0x74cb64, `lw` at 0x74cc6c.
  43 such `lw` accesses load 4 bytes from ?, including `lw` at 0x74cbdc, `lw` at 0x74cc00, `lw` at 0x74cc14.
  10 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xca8, including `lw` at 0x74cbec, `lw` at 0x74cdd8, `lw` at 0x74ce90.
  11 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x74cc1c, `lwc1` at 0x74cc28, `lwc1` at 0x74cc34.
  13 such `swc1` accesses store 4 bytes to ?, including `swc1` at 0x74cc24, `swc1` at 0x74cc30, `swc1` at 0x74cc38.
  12 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x54, including `lw` at 0x74cc54, `lw` at 0x74cda0, `lw` at 0x74cf60.
  10 such `sb` accesses store 1 byte to ?, including `sb` at 0x74cc68, `sb` at 0x74cdb0, `sb` at 0x74cf74.
  The `lw` at 0x74cc80 loads 4 bytes from a2 (arg2 at entry) +0x248.
  The `lw` at 0x74cc90 loads 4 bytes from a1 (arg1 at entry) +0x24.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x35a70, including `lw` at 0x74cd58, `lw` at 0x74ce0c.
  The `lw` at 0x74ce5c loads 4 bytes from a0 (arg0 at entry) +0xde4.
  The `lw` at 0x74d048 loads 4 bytes from table(0x35b38) +0x0.
  The `lbu` at 0x74d0c8 loads 1 byte from a1 (arg1 at entry) +0x7a.
  The `lw` at 0x74d0d4 loads 4 bytes from a0 (arg0 at entry) +0xdec.
  The `lw` at 0x74d0e8 loads 4 bytes from a0 (arg0 at entry) +0xcb0.
  The `lw` at 0x74d0f4 loads 4 bytes from a2 (arg2 at entry) +0x60.
  The `lw` at 0x74d12c loads 4 bytes from a0 (arg0 at entry) +0xdf0.
  7 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d58, including `lw` at 0x74d154, `lw` at 0x74d198, `lw` at 0x74d1cc.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d5c, including `lw` at 0x74d158, `lw` at 0x74d19c, `lw` at 0x74d724.
  The `sw` at 0x74d1c4 stores 4 bytes to [a0+290136] +0x0.
  The `lw` at 0x74d1c8 loads 4 bytes from a2 (arg2 at entry) +0x14.
  The `sw` at 0x74d1dc stores 4 bytes to [a0+290136] +0x4.
  The `sw` at 0x74d1f8 stores 4 bytes to [a0+290136] +0x8.
  The `sw` at 0x74d24c stores 4 bytes to a0 (arg0 at entry) +0x46d58.
  The `lw` at 0x74d3bc loads 4 bytes from a0 (arg0 at entry) +0x35ad4.
  The `lbu` at 0x74d504 loads 1 byte from a0 (arg0 at entry) +0x4e2ed.
  The `lbu` at 0x74d538 loads 1 byte from [a2+84] +0x28.
  6 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x74d554, `lbu` at 0x74d570, `lbu` at 0x74d58c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc99c, including `lw` at 0x74d60c, `lw` at 0x74d64c.
  The `lw` at 0x74d628 loads 4 bytes from a0 (arg0 at entry) +0xcdfc.
  The `lw` at 0x74d63c loads 4 bytes from [a0+52732] +0x48.
  The `lw` at 0x74d648 loads 4 bytes from [a0+52732] +0x4c.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0xcd0, including `lwc1` at 0x74d750, `lwc1` at 0x74d768.
  The `lwc1` at 0x74d754 loads 4 bytes from a0 (arg0 at entry) +0xccc.
  3 such `swc1` accesses store 4 bytes to (a3 + ([a2+96] << 0x4)) +0x4, including `swc1` at 0x74d764, `swc1` at 0x74d78c, `swc1` at 0x74d7ac.
  3 such `swc1` accesses store 4 bytes to (a3 + ([a2+96] << 0x4)) +0x8, including `swc1` at 0x74d774, `swc1` at 0x74d79c, `swc1` at 0x74d7c4.
  2 such `lwc1` accesses load 4 bytes from a0 (arg0 at entry) +0xcc4, including `lwc1` at 0x74d790, `lwc1` at 0x74d7b0.
  The `jalr` at 0x74d190 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=[a0+290136].
  The `jalr` at 0x74d20c calls memcpy with a0=[a0+290136]+12, a1=?, a2=?, a3=[a0+290136], a4=[a0+290136].
  The `jalr` at 0x74d61c calls fglX11GLDRMLock with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a6=[a0+51612].
  The `bgezall` at 0x74d644 calls UpdateParameters [0x74c900] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a0+52732], a5=[[a0+52732]+72], a6=[[a0+52732]+76].
  The `jalr` at 0x74d65c calls fglX11GLDRMUnlock with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x74cb34 targets 0x74d2c8, is taken when at(=[a2+92]) == 0, and falls through when at(=[a2+92]) != 0.
  The `beq` branch at 0x74cb4c targets 0x74d0c8, is taken when (v0(=[a0+49288]) & 0x2) == 0, and falls through when (v0(=[a0+49288]) & 0x2) != 0.
  The `beq` branch at 0x74cb5c targets 0x74d60c, is taken when t8(=[a1+16]) == t0(=0x1), and falls through when t8(=[a1+16]) != t0(=0x1).
  The `beq` branch at 0x74cb68 targets 0x74d0c8, is taken when t9(=[a2+588]) == 0, and falls through when t9(=[a2+588]) != 0.
  The `beq` branch at 0x74cbd4 targets 0x74cc80 and is always taken.
  The `beq` branch at 0x74cc04 targets 0x74cd64, is taken when a2(?) == t8(=0x87bf), and falls through when a2(?) != t8(=0x87bf).
  The `beq` branch at 0x74cc0c targets 0x74cf40, is taken when a2(?) == t9(=0x87be), and falls through when a2(?) != t9(=0x87be).
  The `bne` branch at 0x74cc64 targets 0x74cc14, is taken when a6(?) != a2(?), and falls through when a6(?) == a2(?).
  The `beq` branch at 0x74cc78 targets 0x74d0c8, is taken when t2(?) >= a6(=[a2+588]) (unsigned), and falls through when t2(?) < a6(=[a2+588]) (unsigned).
  The `beq` branch at 0x74cca8 targets 0x74cd58, is taken when a2(?) == t3(=0x87e3), and falls through when a2(?) != t3(=0x87e3).
  The `bne` branch at 0x74ccb4 targets 0x74cd00, is taken when a2(?) < 0x1201 (unsigned), and falls through when a2(?) >= 0x1201 (unsigned).
  The `bne` branch at 0x74ccc4 targets 0x74cbdc, is taken when a2(?) < 0x1202 (unsigned), and falls through when a2(?) >= 0x1202 (unsigned).
  The `bne` branch at 0x74ccd0 targets 0x74cdb4, is taken when a2(?) < 0x3001 (unsigned), and falls through when a2(?) >= 0x3001 (unsigned).
  The `bne` branch at 0x74ccdc targets 0x74ce58, is taken when a2(?) < 0x3002 (unsigned), and falls through when a2(?) >= 0x3002 (unsigned).
  The `bne` branch at 0x74cce4 targets 0x74cf88, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `bne` branch at 0x74ccf0 targets 0x74d2f0, is taken when ra(=0x8126) < a2(?) (unsigned), and falls through when ra(=0x8126) >= a2(?) (unsigned).
  The `beq` branch at 0x74ccf8 targets 0x74cc04 and is always taken.
  The `bne` branch at 0x74cd00 targets 0x74cd1c, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `beq` branch at 0x74cd0c targets 0x74cdf0, is taken when a2(?) >= 0xb54 (unsigned), and falls through when a2(?) < 0xb54 (unsigned).
  The `beq` branch at 0x74cd14 targets 0x74cc04 and is always taken.
  The `bne` branch at 0x74cd20 targets 0x74ce10, is taken when a2(?) < 0x17 (unsigned), and falls through when a2(?) >= 0x17 (unsigned).
  The `beq` branch at 0x74cd2c targets 0x74cec8, is taken when a2(?) >= 0x18 (unsigned), and falls through when a2(?) < 0x18 (unsigned).
  The `beq` branch at 0x74cd50 targets 0x74cc00 and is always taken.
  The `beq` branch at 0x74cd5c targets 0x74cc00 and is always taken.
  The `beq` branch at 0x74cdac targets 0x74cc6c and is always taken.
  The `bne` branch at 0x74cdb4 targets 0x74ce6c, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x74cdc0 targets 0x74cfb0, is taken when a2(?) >= 0x1207 (unsigned), and falls through when a2(?) < 0x1207 (unsigned).
  The `beq` branch at 0x74cde8 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74cdf4 targets 0x74cea8, is taken when a2(?) < 0xba6 (unsigned), and falls through when a2(?) >= 0xba6 (unsigned).
  The `beq` branch at 0x74ce00 targets 0x74d020, is taken when a2(?) >= 0xba7 (unsigned), and falls through when a2(?) < 0xba7 (unsigned).
  The `beq` branch at 0x74ce08 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74ce10 targets 0x74cf08, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x74ce1c targets 0x74cf78, is taken when a2(?) >= 0x16 (unsigned), and falls through when a2(?) < 0x16 (unsigned).
  The `beq` branch at 0x74ce40 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74ce48 targets 0x74d430, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0x74ce50 targets 0x74cf80, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x74ce64 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74ce6c targets 0x74cfe8, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x74ce78 targets 0x74d34c, is taken when a2(?) >= 0x1205 (unsigned), and falls through when a2(?) < 0x1205 (unsigned).
  The `beq` branch at 0x74cea0 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74ceac targets 0x74d04c, is taken when a2(?) < 0xb64 (unsigned), and falls through when a2(?) >= 0xb64 (unsigned).
  The `beq` branch at 0x74ceb8 targets 0x74d3c0, is taken when a2(?) >= 0xb65 (unsigned), and falls through when a2(?) < 0xb65 (unsigned).
  The `beq` branch at 0x74cec0 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74cecc targets 0x74d064, is taken when a2(?) < 0x1a (unsigned), and falls through when a2(?) >= 0x1a (unsigned).
  The `beq` branch at 0x74ced8 targets 0x74d3e4, is taken when a2(?) >= 0x1b (unsigned), and falls through when a2(?) < 0x1b (unsigned).
  The `beq` branch at 0x74cf00 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74cf08 targets 0x74d098, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0x74cf10 targets 0x74cf80, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x74cf34 targets 0x74cc00 and is always taken.
  The `beq` branch at 0x74cf70 targets 0x74cc6c and is always taken.
  The `beq` branch at 0x74cf78 targets 0x74d4c0, is taken when a2(?) == v0(=0x16), and falls through when a2(?) != v0(=0x16).
  The `beq` branch at 0x74cf80 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74cf8c targets 0x74ce48, is taken when a2(?) < 0x3004 (unsigned), and falls through when a2(?) >= 0x3004 (unsigned).
  The `bne` branch at 0x74cf98 targets 0x74ce58, is taken when a2(?) < 0x3005 (unsigned), and falls through when a2(?) >= 0x3005 (unsigned).
  The `bne` branch at 0x74cfa0 targets 0x74cf80, is taken when a2(?) != a1(=0x3005), and falls through when a2(?) == a1(=0x3005).
  The `beq` branch at 0x74cfa8 targets 0x74ce5c and is always taken.
  The `bne` branch at 0x74cfb0 targets 0x74d310, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x74cfb8 targets 0x74d440, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x74cfe0 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74cfe8 targets 0x74d380, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x74cff0 targets 0x74cf80, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x74d018 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74d020 targets 0x74d3b0, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x74d02c targets 0x74d484, is taken when a2(?) >= 0xba9 (unsigned), and falls through when a2(?) < 0xba9 (unsigned).
  The `beq` branch at 0x74d044 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74d04c targets 0x74d3d0, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0x74d054 targets 0x74cf80, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x74d05c targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74d064 targets 0x74d3f4, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x74d06c targets 0x74cf80, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x74d090 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74d098 targets 0x74cf80, is taken when a2(?) != at(=0x13), and falls through when a2(?) == at(=0x13).
  The `beq` branch at 0x74d0c0 targets 0x74cc00 and is always taken.
  The `beq` branch at 0x74d0cc targets 0x74d12c, is taken when t0(=[a1+122]:1) == 0, and falls through when t0(=[a1+122]:1) != 0.
  The `beq` branch at 0x74d0e0 targets 0x74d12c, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x74d0f0 targets 0x74d750, is taken when a0(=[a0+3248]) == t2(=0x2601), and falls through when a0(=[a0+3248]) != t2(=0x2601).
  The `beq` branch at 0x74d0fc targets 0x74d780, is taken when a0(=[a0+3248]) == t3(=0x800), and falls through when a0(=[a0+3248]) != t3(=0x800).
  The `beq` branch at 0x74d104 targets 0x74d7a0, is taken when a0(=[a0+3248]) == t8(=0x801), and falls through when a0(=[a0+3248]) != t8(=0x801).
  The `beq` branch at 0x74d138 targets 0x74d500, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x74d144 targets 0x74d52c, is taken when a4 == 0, and falls through when a4 != 0.
  The `beq` branch at 0x74d170 targets 0x74d4b0, is taken when v1(?) >= s4(=([a2+92]-1 << 0x2)+7) (unsigned), and falls through when v1(?) < s4(=([a2+92]-1 << 0x2)+7) (unsigned).
  The `bne` branch at 0x74d1ac targets 0x74d190, is taken when t8(?) < s4(?) (unsigned), and falls through when t8(?) >= s4(?) (unsigned).
  The `beq` branch at 0x74d258 targets 0x74d278, is taken when (a4(?) & 0x3) == 0, and falls through when (a4(?) & 0x3) != 0.
  The `bne` branch at 0x74d270 targets 0x74d260, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x74d27c targets 0x74d2c8, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0x74d2c0 targets 0x74d284, is taken when a0(?) != a1(?), and falls through when a0(?) == a1(?).
  The `bne` branch at 0x74d2f0 targets 0x74d420, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `bne` branch at 0x74d300 targets 0x74d4e4, is taken when s6(=0x8128) < a2(?) (unsigned), and falls through when s6(=0x8128) >= a2(?) (unsigned).
  The `beq` branch at 0x74d308 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74d314 targets 0x74d450, is taken when a2(?) < 0x1208 (unsigned), and falls through when a2(?) >= 0x1208 (unsigned).
  The `beq` branch at 0x74d31c targets 0x74cf80, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x74d344 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74d34c targets 0x74cf80, is taken when a2(?) != v0(=0x1205), and falls through when a2(?) == v0(=0x1205).
  The `beq` branch at 0x74d374 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74d380 targets 0x74cf80, is taken when a2(?) != v0(=0x1202), and falls through when a2(?) == v0(=0x1202).
  The `beq` branch at 0x74d3a8 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74d3b0 targets 0x74cf80, is taken when a2(?) != v0(=0xba7), and falls through when a2(?) == v0(=0xba7).
  The `beq` branch at 0x74d3b8 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74d3c0 targets 0x74cf80, is taken when a2(?) != v1(=0xb66), and falls through when a2(?) == v1(=0xb66).
  The `beq` branch at 0x74d3c8 targets 0x74cc04 and is always taken.
  The `bne` branch at 0x74d3d4 targets 0x74cf80, is taken when a2(?) != a1(=0xb62), and falls through when a2(?) == a1(=0xb62).
  The `beq` branch at 0x74d3dc targets 0x74cc04 and is always taken.
  The `bne` branch at 0x74d3e4 targets 0x74cf80, is taken when a2(?) != a5(=0xb11), and falls through when a2(?) == a5(=0xb11).
  The `beq` branch at 0x74d3ec targets 0x74cc04 and is always taken.
  The `bne` branch at 0x74d3f4 targets 0x74cf80, is taken when a2(?) != a7(=0x18), and falls through when a2(?) == a7(=0x18).
  The `beq` branch at 0x74d418 targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74d420 targets 0x74cf80, is taken when a2(?) != at(=0x8127), and falls through when a2(?) == at(=0x8127).
  The `beq` branch at 0x74d428 targets 0x74cc04 and is always taken.
  The `bne` branch at 0x74d430 targets 0x74cf80, is taken when a2(?) != v0(=0x3002), and falls through when a2(?) == v0(=0x3002).
  The `beq` branch at 0x74d438 targets 0x74ce5c and is always taken.
  The `bne` branch at 0x74d440 targets 0x74cf80, is taken when a2(?) != v1(=0x3000), and falls through when a2(?) == v1(=0x3000).
  The `beq` branch at 0x74d448 targets 0x74ce5c and is always taken.
  The `bne` branch at 0x74d454 targets 0x74cf80, is taken when a2(?) != a1(=0x1207), and falls through when a2(?) == a1(=0x1207).
  The `beq` branch at 0x74d47c targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74d484 targets 0x74cf80, is taken when a2(?) != v0(=0x1200), and falls through when a2(?) == v0(=0x1200).
  The `beq` branch at 0x74d4a8 targets 0x74cc00 and is always taken.
  The `beq` branch at 0x74d4b4 targets 0x74d1c0 and is always taken.
  The `beq` branch at 0x74d4dc targets 0x74cc00 and is always taken.
  The `bne` branch at 0x74d4e4 targets 0x74cf80, is taken when a2(?) != at(=0x8129), and falls through when a2(?) == at(=0x8129).
  The `beq` branch at 0x74d4ec targets 0x74cc04 and is always taken.
  The `beq` branch at 0x74d508 targets 0x74d140, is taken when a0(=[a0+320237]:1) == 0, and falls through when a0(=[a0+320237]:1) != 0.
  The `beq` branch at 0x74d510 targets 0x74d140, is taken when a0(=[a0+320237]:1) == 0, and falls through when a0(=[a0+320237]:1) != 0.
  The `beq` branch at 0x74d524 targets 0x74d6d8 and is always taken.
  The `beq` branch at 0x74d52c targets 0x74d5b4, is taken when a1(=[a2+92]) == 0, and falls through when a1(=[a2+92]) != 0.
  The `bne` branch at 0x74d53c targets 0x74d5b8, is taken when a4(=[[a2+84]+40]:1) != 0, and falls through when a4(=[[a2+84]+40]:1) == 0.
  The `beq` branch at 0x74d54c targets 0x74d5b4, is taken when a2(?) >= a1(=[a2+92]) (unsigned), and falls through when a2(?) < a1(=[a2+92]) (unsigned).
  The `bne` branch at 0x74d558 targets 0x74d5b4, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x74d568 targets 0x74d5b4, is taken when a2(?) >= a1(=[a2+92]) (unsigned), and falls through when a2(?) < a1(=[a2+92]) (unsigned).
  The `bne` branch at 0x74d574 targets 0x74d5b4, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `beq` branch at 0x74d584 targets 0x74d5b4, is taken when a2(?) >= a1(=[a2+92]) (unsigned), and falls through when a2(?) < a1(=[a2+92]) (unsigned).
  The `bne` branch at 0x74d590 targets 0x74d5b4, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `beq` branch at 0x74d5a0 targets 0x74d5b4, is taken when a2(?) >= a1(=[a2+92]) (unsigned), and falls through when a2(?) < a1(=[a2+92]) (unsigned).
  The `beq` branch at 0x74d5ac targets 0x74d544, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x74d5b8 targets 0x74d70c, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x74d5e0 targets 0x74d7c8, is taken when ra(?) != 0, and falls through when ra(?) == 0.
  The `bne` branch at 0x74d5f0 targets 0x74d710, is taken when a0(?) < a2(?) (unsigned), and falls through when a0(?) >= a2(?) (unsigned).
  The `beq` branch at 0x74d5fc targets 0x74d5e8, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x74d604 targets 0x74d710 and is always taken.
  The `beq` branch at 0x74d610 targets 0x74d624, is taken when a6(=[a0+51612]) == 0, and falls through when a6(=[a0+51612]) != 0.
  The `beq` branch at 0x74d650 targets 0x74d0c8, is taken when ra(=[a0+51612]) == 0, and falls through when ra(=[a0+51612]) != 0.
  The `beq` branch at 0x74d664 targets 0x74d0c8 and is always taken.
  The `beq` branch at 0x74d6d0 targets 0x74d704, is taken when (a0(?) & 0xff) == 0, and falls through when (a0(?) & 0xff) != 0.
  The `beq` branch at 0x74d6dc targets 0x74d6c4, is taken when (a0(?) & 0x1) == 0, and falls through when (a0(?) & 0x1) != 0.
  The `bne` branch at 0x74d6f0 targets 0x74d66c, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x74d6fc targets 0x74d6a4 and is always taken.
  The `beq` branch at 0x74d704 targets 0x74d144 and is always taken.
  The `bne` branch at 0x74d710 targets 0x74d2c8, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x74d740 targets 0x74d1c4, is taken when t0(?) >= s4(?) (unsigned), and falls through when t0(?) < s4(?) (unsigned).
  The `beq` branch at 0x74d748 targets 0x74d188 and is always taken.
  The `beq` branch at 0x74d770 targets 0x74d108 and is always taken.
  The `beq` branch at 0x74d798 targets 0x74d108 and is always taken.
  The `beq` branch at 0x74d7c0 targets 0x74d108 and is always taken.
  The `beq` branch at 0x74d7c8 targets 0x74d710 and is always taken.
  The return at 0x74d2e8 has v0 = one of ?, ret(memcpy).
  The instructions from 0x74cf3c to 0x74cf3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x74d37c to 0x74d37c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x74d4bc to 0x74d4bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x74d4f4 to 0x74d4fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x74d778 to 0x74d77c are not reached by any path from the entry, and their branches are not listed.

- `UpdateUnboundConstants` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x74d800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x74d800-0x74d960 (352 bytes).
  It occupies 352 bytes.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x244, including `lw` at 0x74d800, `lw` at 0x74d884.
  11 such `lw` accesses load 4 bytes from ?, including `lw` at 0x74d82c, `lw` at 0x74d89c, `lw` at 0x74d8b4.
  5 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x74d834, `lwc1` at 0x74d840, `lwc1` at 0x74d84c.
  5 such `swc1` accesses store 4 bytes to ?, including `swc1` at 0x74d83c, `swc1` at 0x74d848, `swc1` at 0x74d850.
  3 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x54, including `lw` at 0x74d86c, `lw` at 0x74d904, `lw` at 0x74d938.
  3 such `sb` accesses store 1 byte to ?, including `sb` at 0x74d880, `sb` at 0x74d914, `sb` at 0x74d94c.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x240, including `lw` at 0x74d894, `lw` at 0x74d95c.
  The `lw` at 0x74d8a4 loads 4 bytes from a1 (arg1 at entry) +0x24.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0x74d8d8, `sw` at 0x74d8e0, `sw` at 0x74d8ec.
  The `beq` branch at 0x74d814 targets 0x74d950, is taken when at(=[a2+580]) == 0, and falls through when at(=[a2+580]) != 0.
  The `beq` branch at 0x74d81c targets 0x74d958 and is always taken.
  The `beq` branch at 0x74d824 targets 0x74d918, is taken when a6(?) == t3(=0x87be), and falls through when a6(?) != t3(=0x87be).
  The `bne` branch at 0x74d87c targets 0x74d82c, is taken when a4(?) != a6(?), and falls through when a4(?) == a6(?).
  The `beq` branch at 0x74d88c targets 0x74d950, is taken when t1(?) >= t9(=[a2+580]) (unsigned), and falls through when t1(?) < t9(=[a2+580]) (unsigned).
  The `bne` branch at 0x74d8c0 targets 0x74d824, is taken when a6(?) != t2(=0x87bf), and falls through when a6(?) == t2(=0x87bf).
  The `beq` branch at 0x74d910 targets 0x74d884 and is always taken.
  The `beq` branch at 0x74d948 targets 0x74d884 and is always taken.
  The `beq` branch at 0x74d958 targets 0x74d898 and is always taken.
  The return at 0x74d950 has v0 = ?.

- `UpdateCurrentState` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x74db40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x74db40-0x74e028 (1256 bytes).
  It occupies 1256 bytes.
  4 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x20, including `lw` at 0x74db44, `lw` at 0x74dde4, `lw` at 0x74de8c.
  33 such `lw` accesses load 4 bytes from ?, including `lw` at 0x74dba8, `lw` at 0x74dbac, `lw` at 0x74dbb4.
  The `lw` at 0x74dbd8 loads 4 bytes from a1 (arg1 at entry) +0x24.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x74dbe0, `lbu` at 0x74dbf4.
  The `lbu` at 0x74dc20 loads 1 byte from a2 (arg2 at entry) +0x37.
  The `lw` at 0x74dc30 loads 4 bytes from a1 (arg1 at entry) +0x10.
  2 such `lbu` accesses load 1 byte from a2 (arg2 at entry) +0x38, including `lbu` at 0x74dc4c, `lbu` at 0x74e024.
  The `lbu` at 0x74dc70 loads 1 byte from a2 (arg2 at entry) +0x39.
  The `lbu` at 0x74dc8c loads 1 byte from a2 (arg2 at entry) +0x3a.
  The `lbu` at 0x74dca8 loads 1 byte from a2 (arg2 at entry) +0x3b.
  The `lbu` at 0x74dcc4 loads 1 byte from a2 (arg2 at entry) +0x3c.
  The `lbu` at 0x74dce0 loads 1 byte from a2 (arg2 at entry) +0x3d.
  The `lbu` at 0x74dcfc loads 1 byte from a2 (arg2 at entry) +0x40.
  The `lbu` at 0x74dd18 loads 1 byte from a2 (arg2 at entry) +0x41.
  33 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d58, including `lw` at 0x74dd64, `lw` at 0x74dd94, `lw` at 0x74ddc8.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d5c, including `lw` at 0x74dd68, `lw` at 0x74dd98, `lw` at 0x74ddec.
  3 such `sw` accesses store 4 bytes to [a0+290136] +0x0, including `sw` at 0x74ddc4, `sw` at 0x74de48, `sw` at 0x74def0.
  3 such `sw` accesses store 4 bytes to [a0+290136] +0x4, including `sw` at 0x74ddd0, `sw` at 0x74de54, `sw` at 0x74defc.
  3 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x46d58, including `sw` at 0x74dddc, `sw` at 0x74de84, `sw` at 0x74dfe0.
  2 such `sw` accesses store 4 bytes to [a0+290136] +0x8, including `sw` at 0x74de60, `sw` at 0x74df08.
  2 such `sw` accesses store 4 bytes to [a0+290136] +0xc, including `sw` at 0x74de6c, `sw` at 0x74df14.
  2 such `sw` accesses store 4 bytes to [a0+290136] +0x10, including `sw` at 0x74de78, `sw` at 0x74df20.
  The `sw` at 0x74df2c stores 4 bytes to [a0+290136] +0x14.
  The `sw` at 0x74df38 stores 4 bytes to [a0+290136] +0x18.
  The `sw` at 0x74df44 stores 4 bytes to [a0+290136] +0x1c.
  The `sw` at 0x74df50 stores 4 bytes to [a0+290136] +0x20.
  The `sw` at 0x74df5c stores 4 bytes to [a0+290136] +0x24.
  The `sw` at 0x74df68 stores 4 bytes to [a0+290136] +0x28.
  The `sw` at 0x74df74 stores 4 bytes to [a0+290136] +0x2c.
  The `sw` at 0x74df80 stores 4 bytes to [a0+290136] +0x30.
  The `sw` at 0x74df8c stores 4 bytes to [a0+290136] +0x34.
  The `sw` at 0x74df98 stores 4 bytes to [a0+290136] +0x38.
  The `sw` at 0x74dfa4 stores 4 bytes to [a0+290136] +0x3c.
  The `sw` at 0x74dfb0 stores 4 bytes to [a0+290136] +0x40.
  The `sw` at 0x74dfbc stores 4 bytes to [a0+290136] +0x44.
  The `sw` at 0x74dfc8 stores 4 bytes to [a0+290136] +0x48.
  The `sw` at 0x74dfd4 stores 4 bytes to [a0+290136] +0x4c.
  The `bgezall` at 0x74dc44 calls WriteVector [0x74da40] with a0=0x308cc, a1=a0+3056, a2=0x1, a3=?, a6=[a1+32], a7=0x87bf.
  The `bgezall` at 0x74dc68 calls WriteVector [0x74da40] with a0=0x308d0, a1=a0+3072, a2=?, a3=?.
  The `bgezall` at 0x74dc84 calls WriteVector [0x74da40] with a0=0x308d4, a1=a0+3088, a2=?, a3=?.
  The `bgezall` at 0x74dca0 calls WriteVector [0x74da40] with a0=0x308d8, a1=a0+3196, a2=?, a3=?.
  The `bgezall` at 0x74dcbc calls WriteVector [0x74da40] with a0=0x308dc, a1=a0+3148, a2=?, a3=?.
  The `bgezall` at 0x74dcd8 calls WriteVector [0x74da40] with a0=0x308e0, a1=a0+3164, a2=?, a3=?.
  The `bgezall` at 0x74dcf4 calls WriteVector [0x74da40] with a0=0x308e4, a1=a0+3180, a2=?, a3=?.
  The `bgezall` at 0x74dd10 calls WriteScalar [0x74d980] with a0=0x90a, a1=a0+3120, a2=?, a3=?.
  The `jalr` at 0x74dd8c calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x74de10 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x74deb8 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x74e018 calls WriteVector [0x74da40] with a0=0x308cc, a1=a0+1820, a2=0x1, a3=?, a6=[a1+32], a7=0x87bf.
  The `beq` branch at 0x74db94 targets 0x74dc20, is taken when a6(=[a1+32]) == 0, and falls through when a6(=[a1+32]) != 0.
  The `beq` branch at 0x74dba0 targets 0x74dbd8 and is always taken.
  The `beq` branch at 0x74dbb0 targets 0x74dd64, is taken when a0(?) == s8(=0x87be), and falls through when a0(?) != s8(=0x87be).
  The `beq` branch at 0x74dbb8 targets 0x74dde8, is taken when a0(?) == a7(=0x87bf), and falls through when a0(?) != a7(=0x87bf).
  The `beq` branch at 0x74dbc0 targets 0x74de90, is taken when a0(?) == t0(=0x87c0), and falls through when a0(?) != t0(=0x87c0).
  The `beq` branch at 0x74dbd0 targets 0x74dc1c, is taken when s1(?) >= a6(=[a1+32]) (unsigned), and falls through when s1(?) < a6(=[a1+32]) (unsigned).
  The `beq` branch at 0x74dbe4 targets 0x74dbc8, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x74dbec targets 0x74dbc8, is taken when a4(?) != s2(=0x87c1), and falls through when a4(?) == s2(=0x87c1).
  The `beq` branch at 0x74dbf8 targets 0x74dba8, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0x74dc00 targets 0x74dbc8, is taken when a1(?) != s7(=0x12), and falls through when a1(?) == s7(=0x12).
  The `beq` branch at 0x74dc14 targets 0x74dbac and is always taken.
  The `beq` branch at 0x74dc28 targets 0x74dc4c, is taken when a2(=[a2+55]:1) == 0, and falls through when a2(=[a2+55]:1) != 0.
  The `beq` branch at 0x74dc38 targets 0x74e010, is taken when a1(=[a1+16]) == a2(=0x1), and falls through when a1(=[a1+16]) != a2(=0x1).
  The `beq` branch at 0x74dc54 targets 0x74dc70, is taken when t8(=[a2+56]:1) == 0, and falls through when t8(=[a2+56]:1) != 0.
  The `beq` branch at 0x74dc74 targets 0x74dc8c, is taken when a1(=[a2+57]:1) == 0, and falls through when a1(=[a2+57]:1) != 0.
  The `beq` branch at 0x74dc90 targets 0x74dca8, is taken when a1(=[a2+58]:1) == 0, and falls through when a1(=[a2+58]:1) != 0.
  The `beq` branch at 0x74dcac targets 0x74dcc4, is taken when a1(=[a2+59]:1) == 0, and falls through when a1(=[a2+59]:1) != 0.
  The `beq` branch at 0x74dcc8 targets 0x74dce0, is taken when a1(=[a2+60]:1) == 0, and falls through when a1(=[a2+60]:1) != 0.
  The `beq` branch at 0x74dce4 targets 0x74dcfc, is taken when a1(=[a2+61]:1) == 0, and falls through when a1(=[a2+61]:1) != 0.
  The `beq` branch at 0x74dd00 targets 0x74dd18, is taken when a1(=[a2+64]:1) == 0, and falls through when a1(=[a2+64]:1) != 0.
  The `beq` branch at 0x74dd28 targets 0x74dfec, is taken when ra(=[a2+65]:1) == 0, and falls through when ra(=[a2+65]:1) != 0.
  The `bgezl` branch at 0x74dd5c targets 0x74d980 and is always taken.
  The `beq` branch at 0x74dd78 targets 0x74ddc0, is taken when at(?) >= 0x2 (unsigned), and falls through when at(?) < 0x2 (unsigned).
  The `bne` branch at 0x74dda8 targets 0x74dd8c, is taken when v0(?) < 0x2 (unsigned), and falls through when v0(?) >= 0x2 (unsigned).
  The `beq` branch at 0x74dde0 targets 0x74dbc8 and is always taken.
  The `beq` branch at 0x74ddfc targets 0x74de44, is taken when a6(?) >= 0x5 (unsigned), and falls through when a6(?) < 0x5 (unsigned).
  The `bne` branch at 0x74de2c targets 0x74de10, is taken when a7(?) < 0x5 (unsigned), and falls through when a7(?) >= 0x5 (unsigned).
  The `beq` branch at 0x74de88 targets 0x74dbc8 and is always taken.
  The `beq` branch at 0x74dea4 targets 0x74deec, is taken when a4(?) >= 0x14 (unsigned), and falls through when a4(?) < 0x14 (unsigned).
  The `bne` branch at 0x74ded4 targets 0x74deb8, is taken when a5(?) < 0x14 (unsigned), and falls through when a5(?) >= 0x14 (unsigned).
  The `beq` branch at 0x74dfe4 targets 0x74dbc8 and is always taken.
  The `beq` branch at 0x74e020 targets 0x74dc50 and is always taken.
  The return at 0x74e008 has v0 = ?.

- `UpdateCurrentStatePunt` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x74e040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x74e040-0x74e9bc (2428 bytes).
  It occupies 2428 bytes.
  13 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x20, including `lw` at 0x74e048, `lw` at 0x74e3d8, `lw` at 0x74e444.
  62 such `lw` accesses load 4 bytes from ?, including `lw` at 0x74e074, `lw` at 0x74e078, `lw` at 0x74e080.
  3 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x24, including `lw` at 0x74e09c, `lw` at 0x74e0c4, `lw` at 0x74e9b8.
  4 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x74e0a4, `lbu` at 0x74e0cc, `lbu` at 0x74e0e4.
  48 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x24, including `lw` at 0x74e164, `lw` at 0x74e18c, `lw` at 0x74e1b4.
  48 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x74e16c, `lwc1` at 0x74e194, `lwc1` at 0x74e1bc.
  48 such `swc1` accesses store 4 bytes to ?, including `swc1` at 0x74e178, `swc1` at 0x74e1a0, `swc1` at 0x74e1c8.
  The `beq` branch at 0x74e060 targets 0x74e3e0, is taken when t0(=[a1+32]) == 0, and falls through when t0(=[a1+32]) != 0.
  The `beq` branch at 0x74e06c targets 0x74e9b0 and is always taken.
  The `beq` branch at 0x74e07c targets 0x74e448, is taken when t1(?) == t3(=0x87be), and falls through when t1(?) != t3(=0x87be).
  The `beq` branch at 0x74e084 targets 0x74e54c, is taken when t1(?) == t9(=0x87bf), and falls through when t1(?) != t9(=0x87bf).
  The `beq` branch at 0x74e08c targets 0x74e600, is taken when t1(?) == s0(=0x87c0), and falls through when t1(?) != s0(=0x87c0).
  The `beq` branch at 0x74e094 targets 0x74e3dc, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x74e0ac targets 0x74e0b8, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x74e0b4 targets 0x74e10c, is taken when t1(?) == a6(=0x87c1), and falls through when t1(?) != a6(=0x87c1).
  The `beq` branch at 0x74e0bc targets 0x74e3dc, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x74e0d4 targets 0x74e090, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x74e0dc targets 0x74e094, is taken when t1(?) != a6(=0x87c1), and falls through when t1(?) == a6(=0x87c1).
  The `beq` branch at 0x74e0e8 targets 0x74e074, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0x74e0f0 targets 0x74e094, is taken when t1(?) != t2(=0x12), and falls through when t1(?) == t2(=0x12).
  The `beq` branch at 0x74e104 targets 0x74e078 and is always taken.
  The `beq` branch at 0x74e110 targets 0x74e134, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0x74e118 targets 0x74e0bc, is taken when t1(?) != t2(=0x12), and falls through when t1(?) == t2(=0x12).
  The `beq` branch at 0x74e12c targets 0x74e138 and is always taken.
  The `beq` branch at 0x74e13c targets 0x74e3ec, is taken when t1(?) == t3(=0x87be), and falls through when t1(?) != t3(=0x87be).
  The `beq` branch at 0x74e144 targets 0x74e4a4, is taken when t1(?) == t9(=0x87bf), and falls through when t1(?) != t9(=0x87bf).
  The `bne` branch at 0x74e14c targets 0x74e0bc, is taken when t1(?) != s0(=0x87c0), and falls through when t1(?) == s0(=0x87c0).
  The `beq` branch at 0x74e3d4 targets 0x74e0b8 and is always taken.
  The `beq` branch at 0x74e3f8 targets 0x74e888, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x74e400 targets 0x74e8f0, is taken when a7(?) == t1(=0x1), and falls through when a7(?) != t1(=0x1).
  The `beq` branch at 0x74e408 targets 0x74e950, is taken when a7(?) == at(=0x2), and falls through when a7(?) != at(=0x2).
  The `bne` branch at 0x74e410 targets 0x74e0bc, is taken when a7(?) != v0(=0x3), and falls through when a7(?) == v0(=0x3).
  The `beq` branch at 0x74e440 targets 0x74e0b8 and is always taken.
  The `beq` branch at 0x74e454 targets 0x74e8c0, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x74e45c targets 0x74e920, is taken when a7(?) == t1(=0x1), and falls through when a7(?) != t1(=0x1).
  The `beq` branch at 0x74e464 targets 0x74e980, is taken when a7(?) == at(=0x2), and falls through when a7(?) != at(=0x2).
  The `bne` branch at 0x74e46c targets 0x74e094, is taken when a7(?) != v0(=0x3), and falls through when a7(?) == v0(=0x3).
  The `beq` branch at 0x74e49c targets 0x74e090 and is always taken.
  The `beq` branch at 0x74e544 targets 0x74e0b8 and is always taken.
  The `beq` branch at 0x74e5ec targets 0x74e090 and is always taken.
  The `beq` branch at 0x74e880 targets 0x74e090 and is always taken.
  The `beq` branch at 0x74e8b0 targets 0x74e0b8 and is always taken.
  The `beq` branch at 0x74e8e8 targets 0x74e090 and is always taken.
  The `beq` branch at 0x74e918 targets 0x74e0b8 and is always taken.
  The `beq` branch at 0x74e948 targets 0x74e090 and is always taken.
  The `beq` branch at 0x74e978 targets 0x74e0b8 and is always taken.
  The `beq` branch at 0x74e9a8 targets 0x74e090 and is always taken.
  The `beq` branch at 0x74e9b4 targets 0x74e0a0 and is always taken.
  The return at 0x74e3e4 has v0 = ?.
  The instructions from 0x74e5f4 to 0x74e5fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x74e8b8 to 0x74e8bc are not reached by any path from the entry, and their branches are not listed.

- `BuildKey` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x74e9c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x74e9c0-0x74eaf0 (304 bytes).
  It occupies 304 bytes.
  The `lw` at 0x74e9c0 loads 4 bytes from a0 (arg0 at entry) +0xdf0.
  The `lbu` at 0x74e9cc loads 1 byte from a1 (arg1 at entry) +0x7a.
  The `lbu` at 0x74e9dc loads 1 byte from a2 (arg2 at entry) +0x44.
  The `lbu` at 0x74e9e4 loads 1 byte from a2 (arg2 at entry) +0x43.
  The `lbu` at 0x74ea00 loads 1 byte from a1 (arg1 at entry) +0x6e.
  The `lw` at 0x74ea0c loads 4 bytes from a0 (arg0 at entry) +0xdec.
  The `lw` at 0x74ea30 loads 4 bytes from a0 (arg0 at entry) +0xcb0.
  The `lbu` at 0x74ea58 loads 1 byte from a1 (arg1 at entry) +0x6c.
  The `lw` at 0x74ea70 loads 4 bytes from a0 (arg0 at entry) +0xcc94.
  The `lw` at 0x74ea94 loads 4 bytes from a0 (arg0 at entry) +0xcc98.
  The `lbu` at 0x74eac8 loads 1 byte from a0 (arg0 at entry) +0x4e2ed.
  The `beq` branch at 0x74ea04 targets 0x74ea4c, is taken when v0(=[a1+122]:1) == 0, and falls through when v0(=[a1+122]:1) != 0.
  The `beq` branch at 0x74ea10 targets 0x74ea24, is taken when v1(=[a1+110]:1) == 0, and falls through when v1(=[a1+110]:1) != 0.
  The `beq` branch at 0x74ea28 targets 0x74ea4c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x74ea38 targets 0x74ead8, is taken when a4(=[a0+3248]) == t0(=0x2601), and falls through when a4(=[a0+3248]) != t0(=0x2601).
  The `beq` branch at 0x74ea40 targets 0x74eae0, is taken when a4(=[a0+3248]) == t1(=0x800), and falls through when a4(=[a0+3248]) != t1(=0x800).
  The `beq` branch at 0x74ea48 targets 0x74eae8, is taken when a4(=[a0+3248]) == t2(=0x801), and falls through when a4(=[a0+3248]) != t2(=0x801).
  The `beq` branch at 0x74ea54 targets 0x74eac0, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x74ea5c targets 0x74ea80, is taken when v0(=[a1+122]:1) == 0, and falls through when v0(=[a1+122]:1) != 0.
  The `beq` branch at 0x74ea64 targets 0x74ea80, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x74ea80 targets 0x74eaac, is taken when a4(=[a1+108]:1) == 0, and falls through when a4(=[a1+108]:1) != 0.
  The `beq` branch at 0x74ea88 targets 0x74eaac, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x74ead0 targets 0x74ea5c and is always taken.
  The `beq` branch at 0x74ead8 targets 0x74ea4c and is always taken.
  The `beq` branch at 0x74eae0 targets 0x74ea4c and is always taken.
  The `beq` branch at 0x74eae8 targets 0x74ea4c and is always taken.
  The return at 0x74eaa4 has v0 = ?.
  The return at 0x74eaac has v0 = ?.
  The instructions from 0x74eab4 to 0x74eabc are not reached by any path from the entry, and their branches are not listed.

- `LookupCachedShader` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x74eb00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x74eb00-0x74eb40 (64 bytes).
  It occupies 64 bytes.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x74eb0c, `lw` at 0x74eb18, `lw` at 0x74eb24.
  The `beq` branch at 0x74eb10 targets 0x74eb30, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x74eb1c targets 0x74eb38, is taken when a4(?) == a1, and falls through when a4(?) != a1.
  The `bne` branch at 0x74eb28 targets 0x74eb18, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The return at 0x74eb30 has v0 = 0x0.
  The return at 0x74eb38 has v0 = ?.

- `FreeShaderProgram` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x74eb40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x74eb40-0x74ec10 (208 bytes).
  It occupies 208 bytes.
  The `lw` at 0x74eb44 loads 4 bytes from a1 (arg1 at entry) +0x1c.
  7 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc, including `lw` at 0x74eb60, `lw` at 0x74eb78, `lw` at 0x74eb90.
  The `lw` at 0x74eb6c loads 4 bytes from a1 (arg1 at entry) +0x24.
  The `lw` at 0x74eb84 loads 4 bytes from a1 (arg1 at entry) +0x4c.
  The `lw` at 0x74eb9c loads 4 bytes from a1 (arg1 at entry) +0x54.
  The `lw` at 0x74ebb4 loads 4 bytes from a1 (arg1 at entry) +0x240.
  The `lw` at 0x74ebcc loads 4 bytes from a1 (arg1 at entry) +0x248.
  The `jalr` at 0x74eb64 calls (unknown callee) with a0=[a1+28], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a1+28].
  The `jalr` at 0x74eb7c calls (unknown callee) with a0=[a1+36], a1=?, a2=?, a3=?.
  The `jalr` at 0x74eb94 calls (unknown callee) with a0=[a1+76], a1=?, a2=?, a3=?.
  The `jalr` at 0x74ebac calls (unknown callee) with a0=[a1+84], a1=?, a2=?, a3=?.
  The `jalr` at 0x74ebc4 calls (unknown callee) with a0=[a1+576], a1=?, a2=?, a3=?.
  The `jalr` at 0x74ebdc calls (unknown callee) with a0=[a1+584], a1=?, a2=?, a3=?.
  The `jalr` at 0x74ebe8 calls (unknown callee) with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  Calls __ATITCLVSRemoveResidentShader [0xae3f80] via register-constant with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=? (`jr` at 0x74ec08).
  The `beq` branch at 0x74eb58 targets 0x74eb6c, is taken when a3(=[a1+28]) == 0, and falls through when a3(=[a1+28]) != 0.
  The `beq` branch at 0x74eb70 targets 0x74eb84, is taken when a0(=[a1+36]) == 0, and falls through when a0(=[a1+36]) != 0.
  The `beq` branch at 0x74eb88 targets 0x74eb9c, is taken when a0(=[a1+76]) == 0, and falls through when a0(=[a1+76]) != 0.
  The `beq` branch at 0x74eba0 targets 0x74ebb4, is taken when a0(=[a1+84]) == 0, and falls through when a0(=[a1+84]) != 0.
  The `beq` branch at 0x74ebb8 targets 0x74ebcc, is taken when a0(=[a1+576]) == 0, and falls through when a0(=[a1+576]) != 0.
  The `beq` branch at 0x74ebd0 targets 0x74ebe4, is taken when a0(=[a1+584]) == 0, and falls through when a0(=[a1+584]) != 0.

- `DestroyResidentShaderList` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x74ec40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x74ec40-0x74eca8 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x74ec50 loads 4 bytes from a0 (arg0 at entry) +0xccbc.
  The `lw` at 0x74ec54 loads 4 bytes from [a0+52412] +0x8.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x74ec6c, `lw` at 0x74ec80.
  The `sb` at 0x74ec70 stores 1 byte to ?.
  The `lw` at 0x74ec74 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `sw` at 0x74ec98 stores 4 bytes to [a0+52412] +0x8.
  The `jalr` at 0x74ec7c calls (unknown callee) with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x74ec5c targets 0x74ec94, is taken when a2(=[[a0+52412]+8]) == 0, and falls through when a2(=[[a0+52412]+8]) != 0.
  The `bne` branch at 0x74ec84 targets 0x74ec6c, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The return at 0x74eca0 has v0 = one of ?, ret(?).

- `__R300WriteColorChannelMask` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x766640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x766640-0x766f30 (2288 bytes).
  It occupies 2288 bytes.
  The `sw` at 0x766680 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `sw` at 0x76668c stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lw` at 0x766690 loads 4 bytes from a1 (arg1 at entry) +0x338.
  The `lw` at 0x766ecc loads 4 bytes from a1 (arg1 at entry) +0x544.
  The `sw` at 0x766ef8 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `sw` at 0x766efc stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `lbu` at 0x766f14 loads 1 byte from a1 (arg1 at entry) +0x7a4.
  The `beq` branch at 0x7666ac targets 0x766ecc, is taken when at(?) == v0(=[a1+824]), and falls through when at(?) != v0(=[a1+824]).
  The `beq` branch at 0x7666fc targets 0x766ecc, is taken when v1(?) == v0(=[a1+824]), and falls through when v1(?) != v0(=[a1+824]).
  The `beq` branch at 0x766770 targets 0x766ecc, is taken when t3(?) == v0(=[a1+824]), and falls through when t3(?) != v0(=[a1+824]).
  The `beq` branch at 0x7667b4 targets 0x766ecc, is taken when a2(?) == v0(=[a1+824]), and falls through when a2(?) != v0(=[a1+824]).
  The `beq` branch at 0x7667ec targets 0x766ecc, is taken when t9(?) == v0(=[a1+824]), and falls through when t9(?) != v0(=[a1+824]).
  The `beq` branch at 0x76683c targets 0x766ecc, is taken when a4(?) == v0(=[a1+824]), and falls through when a4(?) != v0(=[a1+824]).
  The `beq` branch at 0x76688c targets 0x766ecc, is taken when v1(?) == v0(=[a1+824]), and falls through when v1(?) != v0(=[a1+824]).
  The `beq` branch at 0x7668dc targets 0x766ecc, is taken when t3(?) == v0(=[a1+824]), and falls through when t3(?) != v0(=[a1+824]).
  The `beq` branch at 0x76692c targets 0x766ecc, is taken when a2(?) == v0(=[a1+824]), and falls through when a2(?) != v0(=[a1+824]).
  The `beq` branch at 0x76697c targets 0x766ecc, is taken when t9(?) == v0(=[a1+824]), and falls through when t9(?) != v0(=[a1+824]).
  The `beq` branch at 0x7669cc targets 0x766ecc, is taken when t9(?) == v0(=[a1+824]), and falls through when t9(?) != v0(=[a1+824]).
  The `beq` branch at 0x766a1c targets 0x766ecc, is taken when t9(?) == v0(=[a1+824]), and falls through when t9(?) != v0(=[a1+824]).
  The `beq` branch at 0x766a7c targets 0x766ecc, is taken when at(?) == v0(=[a1+824]), and falls through when at(?) != v0(=[a1+824]).
  The `beq` branch at 0x766acc targets 0x766ecc, is taken when at(?) == v0(=[a1+824]), and falls through when at(?) != v0(=[a1+824]).
  The `beq` branch at 0x766b1c targets 0x766ecc, is taken when a0(?) == v0(=[a1+824]), and falls through when a0(?) != v0(=[a1+824]).
  The `beq` branch at 0x766b80 targets 0x766ecc, is taken when at(?) == v0(=[a1+824]), and falls through when at(?) != v0(=[a1+824]).
  The `beq` branch at 0x766bd0 targets 0x766ecc, is taken when a0(?) == v0(=[a1+824]), and falls through when a0(?) != v0(=[a1+824]).
  The `beq` branch at 0x766c20 targets 0x766ecc, is taken when at(?) == v0(=[a1+824]), and falls through when at(?) != v0(=[a1+824]).
  The `beq` branch at 0x766c70 targets 0x766ecc, is taken when a0(?) == v0(=[a1+824]), and falls through when a0(?) != v0(=[a1+824]).
  The `beq` branch at 0x766cc0 targets 0x766ecc, is taken when at(?) == v0(=[a1+824]), and falls through when at(?) != v0(=[a1+824]).
  The `beq` branch at 0x766d10 targets 0x766ecc, is taken when a0(?) == v0(=[a1+824]), and falls through when a0(?) != v0(=[a1+824]).
  The `beq` branch at 0x766d60 targets 0x766ecc, is taken when at(?) == v0(=[a1+824]), and falls through when at(?) != v0(=[a1+824]).
  The `beq` branch at 0x766d98 targets 0x766ecc, is taken when a0(?) == v0(=[a1+824]), and falls through when a0(?) != v0(=[a1+824]).
  The `beq` branch at 0x766ddc targets 0x766ecc, is taken when a3(?) == v0(=[a1+824]), and falls through when a3(?) != v0(=[a1+824]).
  The `beq` branch at 0x766e24 targets 0x766ecc, is taken when a3(?) == v0(=[a1+824]), and falls through when a3(?) != v0(=[a1+824]).
  The `beq` branch at 0x766e74 targets 0x766ecc, is taken when a3(?) == v0(=[a1+824]), and falls through when a3(?) != v0(=[a1+824]).
  The `bne` branch at 0x766ec4 targets 0x766f08, is taken when at(?) != v0(=[a1+824]), and falls through when at(?) == v0(=[a1+824]).
  The `beq` branch at 0x766ed4 targets 0x766f14, is taken when v0(=[a1+1348]) == a6(=0x4), and falls through when v0(=[a1+1348]) != a6(=0x4).
  The `beq` branch at 0x766edc targets 0x766f14, is taken when v0(=[a1+1348]) == a7(=0x3), and falls through when v0(=[a1+1348]) != a7(=0x3).
  The `beq` branch at 0x766ee4 targets 0x766f28, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x766f18 targets 0x766ee4, is taken when a3(=[a1+1956]:1) == 0, and falls through when a3(=[a1+1956]:1) != 0.
  The `beq` branch at 0x766f20 targets 0x766ef0 and is always taken.
  The `beq` branch at 0x766f28 targets 0x766ef0 and is always taken.
  The return at 0x766f00 has v0 = a0+16.
  The return at 0x766f0c has v0 = a0+8.

- `CanUseZHierarchy` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x767c80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x767c80-0x767d20 (160 bytes).
  It occupies 160 bytes.
  The `lw` at 0x767c88 loads 4 bytes from a0 (arg0 at entry) +0x4696c.
  The `lw` at 0x767c94 loads 4 bytes from a0 (arg0 at entry) +0x38da0.
  The `lw` at 0x767c98 loads 4 bytes from [a0+232864] +0x48.
  The `lbu` at 0x767c9c loads 1 byte from [[a0+232864]+72] +0xa2.
  The `lw` at 0x767ca8 loads 4 bytes from a0 (arg0 at entry) +0x38690.
  The `lbu` at 0x767cb4 loads 1 byte from [a0+232864] +0x2ed.
  The `lw` at 0x767cc0 loads 4 bytes from a0 (arg0 at entry) +0x64.
  The `lw` at 0x767cc4 loads 4 bytes from [a0+100] +0x4.
  The `lw` at 0x767cc8 loads 4 bytes from [[a0+100]+4] +0x1c.
  The `lw` at 0x767ccc loads 4 bytes from [[[a0+100]+4]+28] +0xb4.
  The `lw` at 0x767cd0 loads 4 bytes from [[[[a0+100]+4]+28]+180] +0x2c.
  The `lw` at 0x767cd4 loads 4 bytes from [[[[[a0+100]+4]+28]+180]+44] +0x64.
  The `lw` at 0x767cd8 loads 4 bytes from [[[[[[a0+100]+4]+28]+180]+44]+100] +0x89c.
  The `lw` at 0x767ce8 loads 4 bytes from a0 (arg0 at entry) +0x38670.
  The `lbu` at 0x767cec loads 1 byte from [a0+231024] +0x88.
  The `beq` branch at 0x767c8c targets 0x767d00, is taken when at(=[a0+289132]) == 0, and falls through when at(=[a0+289132]) != 0.
  The `beq` branch at 0x767ca0 targets 0x767d08, is taken when a5(=[[[a0+232864]+72]+162]:1) == 0, and falls through when a5(=[[[a0+232864]+72]+162]:1) != 0.
  The `beq` branch at 0x767cac targets 0x767d10, is taken when a6(=[a0+231056]) == 0, and falls through when a6(=[a0+231056]) != 0.
  The `bne` branch at 0x767cb8 targets 0x767cf8, is taken when a7(=[[a0+232864]+749]:1) != 0, and falls through when a7(=[[a0+232864]+749]:1) == 0.
  The `beq` branch at 0x767ce0 targets 0x767cf8, is taken when t0(=[[[[[[[a0+100]+4]+28]+180]+44]+100]+2204]) == t1(=0x1), and falls through when t0(=[[[[[[[a0+100]+4]+28]+180]+44]+100]+2204]) != t1(=0x1).
  The `beq` branch at 0x767cf0 targets 0x767d18, is taken when t1(=[[a0+231024]+136]:1) == 0, and falls through when t1(=[[a0+231024]+136]:1) != 0.
  The return at 0x767cf8 has v0 = 0x1.
  The return at 0x767d00 has v0 = 0x0.
  The return at 0x767d08 has v0 = 0x0.
  The return at 0x767d10 has v0 = 0x0.
  The return at 0x767d18 has v0 = 0x0.

- `NotSoFastZStencilClear` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x767f40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x767f40-0x7682c0 (896 bytes).
  It occupies 896 bytes.
  The `lw` at 0x767f4c loads 4 bytes from a0 (arg0 at entry) +0xc0dc.
  The `lw` at 0x767f50 loads 4 bytes from [a0+49372] +0x8.
  The `lbu` at 0x767f54 loads 1 byte from [[a0+49372]+8] +0x88.
  The `lw` at 0x767f58 loads 4 bytes from a0 (arg0 at entry) +0x7460.
  The `lw` at 0x767f8c loads 4 bytes from a0 (arg0 at entry) +0x35cec.
  The `lw` at 0x767fa4 loads 4 bytes from a0 (arg0 at entry) +0x35ce4.
  The `lw` at 0x767fb4 loads 4 bytes from a0 (arg0 at entry) +0x745c.
  The `lw` at 0x767fbc loads 4 bytes from a0 (arg0 at entry) +0x35ce0.
  The `lw` at 0x767fc4 loads 4 bytes from a0 (arg0 at entry) +0x35ce8.
  The `lwc1` at 0x767fc8 loads 4 bytes from a0 (arg0 at entry) +0x6028.
  The `ldc1` at 0x76801c loads 8 bytes from a0 (arg0 at entry) +0xcf0.
  The `lw` at 0x768030 loads 4 bytes from a0 (arg0 at entry) +0x38624.
  The `lh` at 0x76803c loads 2 bytes from a0 (arg0 at entry) +0xd16.
  The `lw` at 0x768060 loads 4 bytes from a0 (arg0 at entry) +0x38690.
  The `lbu` at 0x76806c loads 1 byte from a0 (arg0 at entry) +0xcec.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d58, including `lw` at 0x768094, `lw` at 0x7680bc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d5c, including `lw` at 0x768098, `lw` at 0x7680c0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x47ec8, including `lw` at 0x7680e4, `lw` at 0x7680f0, `lw` at 0x768100.
  The `sw` at 0x7680ec stores 4 bytes to [a0+294600] +0x4.
  The `sw` at 0x7680f4 stores 4 bytes to [a0+294600] +0x0.
  The `lw` at 0x7680f8 loads 4 bytes from a0 (arg0 at entry) +0x47ec4.
  The `lw` at 0x7680fc loads 4 bytes from a0 (arg0 at entry) +0x47ecc.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x47ec8, including `sw` at 0x76811c, `sw` at 0x768294.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x38da0, including `lw` at 0x768124, `lw` at 0x768298.
  The `lw` at 0x768130 loads 4 bytes from [a0+232864] +0x878.
  The `sw` at 0x76815c stores 4 bytes to ret(__R300TCLFFXProgramNullShader) +0x0.
  The `sw` at 0x768164 stores 4 bytes to ret(__R300TCLFFXProgramNullShader) +0x30.
  The `sw` at 0x768174 stores 4 bytes to ret(__R300TCLFFXProgramNullShader) +0x8.
  The `sw` at 0x76817c stores 4 bytes to ret(__R300TCLFFXProgramNullShader) +0xc.
  The `swc1` at 0x7681b4 stores 4 bytes to ret(__R300TCLFFXProgramNullShader) +0x18.
  The `swc1` at 0x7681b8 stores 4 bytes to ret(__R300TCLFFXProgramNullShader) +0x1c.
  The `swc1` at 0x7681c0 stores 4 bytes to ret(__R300TCLFFXProgramNullShader) +0x20.
  The `swc1` at 0x7681c8 stores 4 bytes to ret(__R300TCLFFXProgramNullShader) +0x24.
  The `swc1` at 0x7681d4 stores 4 bytes to ret(__R300TCLFFXProgramNullShader) +0x28.
  The `swc1` at 0x7681e0 stores 4 bytes to ret(__R300TCLFFXProgramNullShader) +0x2c.
  The `swc1` at 0x7681f0 stores 4 bytes to ret(__R300TCLFFXProgramNullShader) +0x10.
  The `swc1` at 0x7681fc stores 4 bytes to ret(__R300TCLFFXProgramNullShader) +0x14.
  The `sw` at 0x76820c stores 4 bytes to ret(__R300TCLFFXProgramNullShader) +0x4.
  The `lw` at 0x768210 loads 4 bytes from a0 (arg0 at entry) +0x472d4.
  The `sw` at 0x768218 stores 4 bytes to ret(__R300TCLFFXProgramNullShader) +0x34.
  The `sw` at 0x768224 stores 4 bytes to a0 (arg0 at entry) +0x46d58.
  The `sw` at 0x768264 stores 4 bytes to a0 (arg0 at entry) +0x47ecc.
  The `lw` at 0x768268 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `sw` at 0x768284 stores 4 bytes to a0 (arg0 at entry) +0x47ec4.
  The `lbu` at 0x76829c loads 1 byte from [a0+232864] +0x2ed.
  The `jalr` at 0x768014 calls __glValidateZCount [0x6e8ec0] with a0=a0+231016, a1=?, a2=a0+196608, a3=[a0+220396], a4=0x30000.
  The `bgezall` at 0x76808c calls __R300SetOverrideRendering [0x767140] with a0=a0 at entry (arg0), a1=0x0, a2=one of 0x0, 0x1, a3=one of 0x0, 0x1, a4=one of 0x0, 0x1, a5=sp-224.
  The `jalr` at 0x7680b4 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=[a0+290136], a2=?, a3=?.
  The `jalr` at 0x7680dc calls __R300TCLFFXProgramNullShader [0x7d8a40] with a0=a0 at entry (arg0), a1=[a0+290136], a2=?, a3=?.
  The `jalr` at 0x768140 calls __R300WriteDrawRectRegisters [0x77c280] with a0=a0 at entry (arg0), a1=ret(__R300TCLFFXProgramNullShader), a2=?, a3=?, a7=[[a0+232864]+2168].
  The `jalr` at 0x768220 calls __ATITCLFFXRestoreShader [0xac0000] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x768248 calls __R300CompleteOverrideRendering [0x767900] with a0=a0 at entry (arg0), a1=sp-224, a2=?, a3=?.
  The `jalr` at 0x768278 calls (unknown callee) with a0=[a0+294596], a1=(([a0+294604] + [a0+294604]) << 0x4), a2=?, a3=[a0+294600]+16, a4=[a0+294600], a5=0x14, a6=[a0+294600].
  The `beq` branch at 0x767f88 targets 0x768298, is taken when at(=[[[a0+49372]+8]+136]:1) == 0, and falls through when at(=[[[a0+49372]+8]+136]:1) != 0.
  The `bc1f` branch at 0x767fe8 targets 0x767ff4, is taken when not (f4(=[a0+24616]) < f20 (c.lt.s at 0x767fe0)), and falls through when f4(=[a0+24616]) < f20 (c.lt.s at 0x767fe0).
  The `bc1f` branch at 0x767ffc targets 0x76800c, is taken when not (f4 < f22 (c.lt.s at 0x767ff4)), and falls through when f4 < f22 (c.lt.s at 0x767ff4).
  The `beq` branch at 0x768028 targets 0x768050, is taken when (s2(=a1) & 0x400) == 0, and falls through when (s2(=a1) & 0x400) != 0.
  The `blez` branch at 0x768034 targets 0x768054, is taken when a2(=[a0+230948]) <= 0 (signed), and falls through when a2(=[a0+230948]) > 0 (signed).
  The `beq` branch at 0x768040 targets 0x768054, is taken when a3(=[a0+3350]:2) == 0, and falls through when a3(=[a0+3350]:2) != 0.
  The `beq` branch at 0x768048 targets 0x768054 and is always taken.
  The `beq` branch at 0x768058 targets 0x76807c, is taken when (s2(=a1) & 0x100) == 0, and falls through when (s2(=a1) & 0x100) != 0.
  The `beq` branch at 0x768064 targets 0x76807c, is taken when a5(=[a0+231056]) == 0, and falls through when a5(=[a0+231056]) != 0.
  The `beq` branch at 0x768070 targets 0x76807c, is taken when a6(=[a0+3308]:1) == 0, and falls through when a6(=[a0+3308]:1) != 0.
  The `beq` branch at 0x7680a8 targets 0x7680d8, is taken when a7(?) >= 0x1f (unsigned), and falls through when a7(?) < 0x1f (unsigned).
  The `bne` branch at 0x7680d0 targets 0x7680b4, is taken when t0(?) < 0x1f (unsigned), and falls through when t0(?) >= 0x1f (unsigned).
  The `beq` branch at 0x768118 targets 0x768260, is taken when a3(=[a0+294600]+16) >= t1(=([a0+294596] + ([a0+294604] << 0x4))) (unsigned), and falls through when a3(=[a0+294600]+16) < t1(=([a0+294596] + ([a0+294604] << 0x4))) (unsigned).
  The `beq` branch at 0x768290 targets 0x768120 and is always taken.
  The `bne` branch at 0x7682a0 targets 0x767f90, is taken when a5(=[[a0+232864]+749]:1) != 0, and falls through when a5(=[[a0+232864]+749]:1) == 0.
  The `beq` branch at 0x7682b8 targets 0x767fa4 and is always taken.
  The return at 0x768258 has v0 = ret(__R300CompleteOverrideRendering).

- `SendTexCoords` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x76bc80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x76bc80-0x76bcc4 (68 bytes).
  It occupies 68 bytes.
  The `lbu` at 0x76bc84 loads 1 byte from (a0 + a1) +0x2e.
  The `lw` at 0x76bc98 loads 4 bytes from a0 (arg0 at entry) +0x24.
  The `lbu` at 0x76bca8 loads 1 byte from ?.
  The `bne` branch at 0x76bc88 targets 0x76bcbc, is taken when at(=[(a0 + a1)+46]:1) != 0, and falls through when at(=[(a0 + a1)+46]:1) == 0.
  The `beq` branch at 0x76bcac targets 0x76bcbc, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The return at 0x76bcb4 has v0 = 0x0.
  The return at 0x76bcbc has v0 = 0x1.

- `SetupColorArray` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x76e3c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x76e3c0-0x76e518 (344 bytes).
  It occupies 344 bytes.
  The `lw` at 0x76e3c4 loads 4 bytes from a1 (arg1 at entry) +0x3d6c.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x95c, including `lw` at 0x76e3ec, `lw` at 0x76e404.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x958, including `lw` at 0x76e3f0, `lw` at 0x76e408.
  The `lw` at 0x76e43c loads 4 bytes from (a0 + (([a1+2392] + (([a1+2396] << 0x2) + [a1+2396])) << 0x2)) +0x2ed8c.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x9b4, including `sw` at 0x76e448, `sw` at 0x76e508.
  The `lw` at 0x76e44c loads 4 bytes from a1 (arg1 at entry) +0x998.
  The `lw` at 0x76e45c loads 4 bytes from a1 (arg1 at entry) +0x974.
  The `lw` at 0x76e468 loads 4 bytes from a1 (arg1 at entry) +0x9d8.
  The `sb` at 0x76e47c stores 1 byte to a1 (arg1 at entry) +0x4120.
  3 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x9a0, including `sw` at 0x76e488, `sw` at 0x76e4a8, `sw` at 0x76e504.
  The `lw` at 0x76e4a0 loads 4 bytes from a1 (arg1 at entry) +0x3d8c.
  The `sw` at 0x76e4b0 stores 4 bytes to a1 (arg1 at entry) +0x3d8c.
  The `sw` at 0x76e4c8 stores 4 bytes to a1 (arg1 at entry) +0x9b8.
  The `sw` at 0x76e4d0 stores 4 bytes to a1 (arg1 at entry) +0x9bc.
  The `lw` at 0x76e4e8 loads 4 bytes from a1 (arg1 at entry) +0x3d90.
  The `sw` at 0x76e4fc stores 4 bytes to a1 (arg1 at entry) +0x3d90.
  The `lw` at 0x76e500 loads 4 bytes from a0 (arg0 at entry) +0x47e14.
  The `jalr` at 0x76e3fc calls __R300VarrayAddPSC [0x778900] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=[a1+2396], a3=[a1+2392], a4=0x1.
  The `jalr` at 0x76e444 calls __glSetupVertexBufferObjectPointer [0x681f40] with a0=a0 at entry (arg0), a1=a1+2376, a2=0x10000, a3=0x0.
  The `jalr` at 0x76e4dc calls __R300VarrayAddPSC [0x778900] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=0x1406, a3=0x4, a4=0x1, a6=a0+188.
  The `bgez` branch at 0x76e3e0 targets 0x76e4c0, is taken when at(=([a1+15724] << 0x2f)) >= 0 (signed), and falls through when at(=([a1+15724] << 0x2f)) < 0 (signed).
  The `beq` branch at 0x76e458 targets 0x76e498, is taken when a2(=[a1+2456]) == 0, and falls through when a2(=[a1+2456]) != 0.
  The return at 0x76e490 has v0 = ret(__R300VarrayAddPSC).
  The return at 0x76e4b8 has v0 = ret(__R300VarrayAddPSC).
  The return at 0x76e510 has v0 = ret(__R300VarrayAddPSC).

- `SetupSecondaryColorArray` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x76e540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x76e540-0x76e69c (348 bytes).
  It occupies 348 bytes.
  The `lw` at 0x76e544 loads 4 bytes from a1 (arg1 at entry) +0x3d6c.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x9f0, including `lw` at 0x76e56c, `lw` at 0x76e584.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x9ec, including `lw` at 0x76e570, `lw` at 0x76e588.
  The `lw` at 0x76e5bc loads 4 bytes from (a0 + (([a1+2540] + (([a1+2544] << 0x2) + [a1+2544])) << 0x2)) +0x2ed8c.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0xa48, including `sw` at 0x76e5c8, `sw` at 0x76e68c.
  The `lw` at 0x76e5cc loads 4 bytes from a1 (arg1 at entry) +0xa2c.
  The `lw` at 0x76e5dc loads 4 bytes from a1 (arg1 at entry) +0xa08.
  The `lw` at 0x76e5e8 loads 4 bytes from a1 (arg1 at entry) +0xa6c.
  The `sb` at 0x76e5fc stores 1 byte to a1 (arg1 at entry) +0x4120.
  3 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0xa34, including `sw` at 0x76e608, `sw` at 0x76e628, `sw` at 0x76e688.
  The `lw` at 0x76e620 loads 4 bytes from a1 (arg1 at entry) +0x3d8c.
  The `sw` at 0x76e630 stores 4 bytes to a1 (arg1 at entry) +0x3d8c.
  The `sw` at 0x76e648 stores 4 bytes to a1 (arg1 at entry) +0xa4c.
  The `sw` at 0x76e650 stores 4 bytes to a1 (arg1 at entry) +0xa50.
  The `sw` at 0x76e658 stores 4 bytes to a1 (arg1 at entry) +0xa54.
  The `lw` at 0x76e66c loads 4 bytes from a1 (arg1 at entry) +0x3d90.
  The `sw` at 0x76e680 stores 4 bytes to a1 (arg1 at entry) +0x3d90.
  The `lw` at 0x76e684 loads 4 bytes from a0 (arg0 at entry) +0x47e10.
  The `jalr` at 0x76e57c calls __R300VarrayAddPSC [0x778900] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=[a1+2544], a3=[a1+2540], a4=0x1.
  The `jalr` at 0x76e5c4 calls __glSetupVertexBufferObjectPointer [0x681f40] with a0=a0 at entry (arg0), a1=a1+2524, a2=0x20000, a3=0x1.
  The `jalr` at 0x76e660 calls __R300VarrayAddPSC [0x778900] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=0x1406, a3=0x3, a4=0x1, a6=a0+1820.
  The `bgez` branch at 0x76e560 targets 0x76e640, is taken when at(=([a1+15724] << 0x2e)) >= 0 (signed), and falls through when at(=([a1+15724] << 0x2e)) < 0 (signed).
  The `beq` branch at 0x76e5d8 targets 0x76e618, is taken when a2(=[a1+2604]) == 0, and falls through when a2(=[a1+2604]) != 0.
  The return at 0x76e610 has v0 = ret(__R300VarrayAddPSC).
  The return at 0x76e638 has v0 = ret(__R300VarrayAddPSC).
  The return at 0x76e694 has v0 = ret(__R300VarrayAddPSC).

- `SetupNormalArray` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x76e6c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x76e6c0-0x76e810 (336 bytes).
  It occupies 336 bytes.
  The `lw` at 0x76e6c4 loads 4 bytes from a1 (arg1 at entry) +0x3d6c.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x144, including `lw` at 0x76e6ec, `lw` at 0x76e704.
  The `lw` at 0x76e734 loads 4 bytes from (a0 + ((([a1+324] << 0x2) + [a1+324]) << 0x2)) +0x2ed98.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x19c, including `sw` at 0x76e740, `sw` at 0x76e800.
  The `lw` at 0x76e744 loads 4 bytes from a1 (arg1 at entry) +0x180.
  The `lw` at 0x76e754 loads 4 bytes from a1 (arg1 at entry) +0x15c.
  The `lw` at 0x76e760 loads 4 bytes from a1 (arg1 at entry) +0x1c0.
  The `sb` at 0x76e774 stores 1 byte to a1 (arg1 at entry) +0x4120.
  3 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x188, including `sw` at 0x76e780, `sw` at 0x76e7a0, `sw` at 0x76e7fc.
  The `lw` at 0x76e798 loads 4 bytes from a1 (arg1 at entry) +0x3d8c.
  The `sw` at 0x76e7a8 stores 4 bytes to a1 (arg1 at entry) +0x3d8c.
  The `sw` at 0x76e7c8 stores 4 bytes to a1 (arg1 at entry) +0x1a0.
  The `lw` at 0x76e7e0 loads 4 bytes from a1 (arg1 at entry) +0x3d90.
  The `sw` at 0x76e7f4 stores 4 bytes to a1 (arg1 at entry) +0x3d90.
  The `lw` at 0x76e7f8 loads 4 bytes from a0 (arg0 at entry) +0x47e10.
  The `jalr` at 0x76e6fc calls __R300VarrayAddPSC [0x778900] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=[a1+324], a3=0x3, a4=0x1.
  The `jalr` at 0x76e73c calls __glSetupVertexBufferObjectPointer [0x681f40] with a0=a0 at entry (arg0), a1=a1+304, a2=0x4, a3=0x0.
  The `jalr` at 0x76e7d4 calls __R300VarrayAddPSC [0x778900] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=0x1406, a3=0x3, a4=0x1.
  The `beq` branch at 0x76e6e0 targets 0x76e7c0, is taken when (at(=[a1+15724]) & 0x4) == 0, and falls through when (at(=[a1+15724]) & 0x4) != 0.
  The `beq` branch at 0x76e750 targets 0x76e790, is taken when a1(=[a1+384]) == 0, and falls through when a1(=[a1+384]) != 0.
  The return at 0x76e788 has v0 = ret(__R300VarrayAddPSC).
  The return at 0x76e7b0 has v0 = ret(__R300VarrayAddPSC).
  The return at 0x76e808 has v0 = ret(__R300VarrayAddPSC).
  The instructions from 0x76e7b8 to 0x76e7bc are not reached by any path from the entry, and their branches are not listed.

- `AddNormalArray` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x789900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x789900-0x789a74 (372 bytes).
  It occupies 372 bytes.
  The `lw` at 0x789904 loads 4 bytes from a1 (arg1 at entry) +0x3d6c.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x144, including `lw` at 0x789938, `lw` at 0x789950.
  The `lw` at 0x789980 loads 4 bytes from (a0 + ((([a1+324] << 0x2) + [a1+324]) << 0x2)) +0x2ed98.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x19c, including `sw` at 0x78998c, `sw` at 0x789a70.
  The `lw` at 0x789990 loads 4 bytes from a1 (arg1 at entry) +0x180.
  The `lw` at 0x7899a4 loads 4 bytes from a1 (arg1 at entry) +0x15c.
  The `lw` at 0x7899b4 loads 4 bytes from a1 (arg1 at entry) +0x1c0.
  The `sb` at 0x7899c8 stores 1 byte to a1 (arg1 at entry) +0x4120.
  3 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x188, including `sw` at 0x7899d4, `sw` at 0x789a20, `sw` at 0x789a68.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x88, including `sw` at 0x7899d8, `sw` at 0x7899f8.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x1b8, including `sw` at 0x7899dc, `sw` at 0x7899fc.
  The `lw` at 0x789a18 loads 4 bytes from a1 (arg1 at entry) +0x3d8c.
  The `sw` at 0x789a2c stores 4 bytes to a1 (arg1 at entry) +0x3d8c.
  The `sw` at 0x789a48 stores 4 bytes to a1 (arg1 at entry) +0x1a0.
  The `lw` at 0x789a4c loads 4 bytes from a1 (arg1 at entry) +0x3d90.
  The `sw` at 0x789a60 stores 4 bytes to a1 (arg1 at entry) +0x3d90.
  The `lw` at 0x789a64 loads 4 bytes from a0 (arg0 at entry) +0x47e10.
  The `jalr` at 0x789948 calls __R300VarrayAddPSC [0x778900] with a0=a0 at entry (arg0), a1=a3 at entry (arg3), a2=[a1+324], a3=0x3, a4=0x1.
  The `jalr` at 0x789988 calls __glSetupVertexBufferObjectPointer [0x681f40] with a0=a0 at entry (arg0), a1=a1+304, a2=0x4, a3=0x0.
  The `jalr` at 0x789a44 calls __R300VarrayAddPSC [0x778900] with a0=a0 at entry (arg0), a1=a3 at entry (arg3), a2=0x1406, a3=0x3, a4=0x1.
  The `beq` branch at 0x78992c targets 0x789a30, is taken when (at(=[a1+15724]) & 0x4) == 0, and falls through when (at(=[a1+15724]) & 0x4) != 0.
  The `beq` branch at 0x7899a0 targets 0x789a14, is taken when a1(=[a1+384]) == 0, and falls through when a1(=[a1+384]) != 0.
  The `beq` branch at 0x789a28 targets 0x7899f0 and is always taken.
  The `beq` branch at 0x789a6c targets 0x7899f0 and is always taken.
  The return at 0x7899e8 has v0 = a1+304.
  The return at 0x789a0c has v0 = a1+304.

- `AddColorArray` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x789a80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x789a80-0x789c0c (396 bytes).
  It occupies 396 bytes.
  The `lw` at 0x789a84 loads 4 bytes from a1 (arg1 at entry) +0x3d6c.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x95c, including `lw` at 0x789abc, `lw` at 0x789ad4.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x958, including `lw` at 0x789ac0, `lw` at 0x789ad8.
  The `lw` at 0x789b0c loads 4 bytes from (a0 + (([a1+2392] + (([a1+2396] << 0x2) + [a1+2396])) << 0x2)) +0x2ed8c.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x9b4, including `sw` at 0x789b18, `sw` at 0x789c08.
  The `lw` at 0x789b1c loads 4 bytes from a1 (arg1 at entry) +0x998.
  The `lw` at 0x789b30 loads 4 bytes from a1 (arg1 at entry) +0x974.
  The `lw` at 0x789b3c loads 4 bytes from a1 (arg1 at entry) +0x9d8.
  The `sb` at 0x789b50 stores 1 byte to a1 (arg1 at entry) +0x4120.
  3 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x9a0, including `sw` at 0x789b5c, `sw` at 0x789bb0, `sw` at 0x789c00.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x88, including `sw` at 0x789b60, `sw` at 0x789b80.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x9d0, including `sw` at 0x789b64, `sw` at 0x789b84.
  The `lw` at 0x789ba8 loads 4 bytes from a1 (arg1 at entry) +0x3d8c.
  The `sw` at 0x789bbc stores 4 bytes to a1 (arg1 at entry) +0x3d8c.
  The `sw` at 0x789bd4 stores 4 bytes to a1 (arg1 at entry) +0x9bc.
  The `sw` at 0x789be0 stores 4 bytes to a1 (arg1 at entry) +0x9b8.
  The `lw` at 0x789be4 loads 4 bytes from a1 (arg1 at entry) +0x3d90.
  The `sw` at 0x789bf8 stores 4 bytes to a1 (arg1 at entry) +0x3d90.
  The `lw` at 0x789bfc loads 4 bytes from a0 (arg0 at entry) +0x47e14.
  The `jalr` at 0x789acc calls __R300VarrayAddPSC [0x778900] with a0=a0 at entry (arg0), a1=a3 at entry (arg3), a2=[a1+2396], a3=[a1+2392], a4=0x1.
  The `jalr` at 0x789b14 calls __glSetupVertexBufferObjectPointer [0x681f40] with a0=a0 at entry (arg0), a1=a1+2376, a2=0x10000, a3=0x0.
  The `jalr` at 0x789bdc calls __R300VarrayAddPSC [0x778900] with a0=a0 at entry (arg0), a1=a3 at entry (arg3), a2=0x1406, a3=0x4, a4=0x1, a6=a0+188.
  The `bgez` branch at 0x789ab0 targets 0x789bc0, is taken when at(=([a1+15724] << 0x2f)) >= 0 (signed), and falls through when at(=([a1+15724] << 0x2f)) < 0 (signed).
  The `beq` branch at 0x789b2c targets 0x789ba4, is taken when a2(=[a1+2456]) == 0, and falls through when a2(=[a1+2456]) != 0.
  The `beq` branch at 0x789bb8 targets 0x789b80 and is always taken.
  The `beq` branch at 0x789c04 targets 0x789b80 and is always taken.
  The return at 0x789b74 has v0 = a1+2376.
  The return at 0x789b9c has v0 = a1+2376.
  The instructions from 0x789b7c to 0x789b7c are not reached by any path from the entry, and their branches are not listed.

- `ResetVcache_Default` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x79b5c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x79b5c0-0x79b5d0 (16 bytes).
  It occupies 16 bytes.
  The `sw` at 0x79b5cc stores 4 bytes to a0 (arg0 at entry) +0x44a70.
  The return at 0x79b5c8 has v0 = ?.

- `ResetVcache_LineStrip` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x79b600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x79b600-0x79c820 (4640 bytes).
  It occupies 4640 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x449e8, including `lw` at 0x79b608, `lw` at 0x79c810.
  94 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44a70, including `lw` at 0x79b618, `lw` at 0x79b630, `lw` at 0x79b648.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4465c, including `lw` at 0x79b61c, `lw` at 0x79b634, `lw` at 0x79b64c.
  The `lwc1` at 0x79b628 loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79b62c stores 4 bytes to [a0+280156] +0x0.
  The `lwc1` at 0x79b640 loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79b644 stores 4 bytes to [a0+280156] +0x4.
  The `lwc1` at 0x79b658 loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79b65c stores 4 bytes to [a0+280156] +0x8.
  The `lwc1` at 0x79b670 loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79b674 stores 4 bytes to [a0+280156] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44660, including `lw` at 0x79b67c, `lw` at 0x79b694, `lw` at 0x79b6ac.
  The `lwc1` at 0x79b688 loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79b68c stores 4 bytes to [a0+280160] +0x0.
  The `lwc1` at 0x79b6a0 loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79b6a4 stores 4 bytes to [a0+280160] +0x4.
  The `lwc1` at 0x79b6b8 loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79b6bc stores 4 bytes to [a0+280160] +0x8.
  The `lwc1` at 0x79b6d0 loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79b6d4 stores 4 bytes to [a0+280160] +0xc.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44664, including `lw` at 0x79b6dc, `lw` at 0x79b6f4, `lw` at 0x79b70c.
  The `lwc1` at 0x79b6e8 loads 4 bytes from ([a0+280164] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79b6ec stores 4 bytes to [a0+280164] +0x0.
  The `lwc1` at 0x79b700 loads 4 bytes from ([a0+280164] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79b704 stores 4 bytes to [a0+280164] +0x4.
  The `lwc1` at 0x79b718 loads 4 bytes from ([a0+280164] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79b71c stores 4 bytes to [a0+280164] +0x8.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44668, including `lw` at 0x79b724, `lw` at 0x79b73c, `lw` at 0x79b754.
  The `lwc1` at 0x79b730 loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79b734 stores 4 bytes to [a0+280168] +0x0.
  The `lwc1` at 0x79b748 loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79b74c stores 4 bytes to [a0+280168] +0x4.
  The `lwc1` at 0x79b760 loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79b764 stores 4 bytes to [a0+280168] +0x8.
  The `lwc1` at 0x79b778 loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79b77c stores 4 bytes to [a0+280168] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4466c, including `lw` at 0x79b784, `lw` at 0x79b79c, `lw` at 0x79b7b4.
  The `lwc1` at 0x79b790 loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79b794 stores 4 bytes to [a0+280172] +0x0.
  The `lwc1` at 0x79b7a8 loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79b7ac stores 4 bytes to [a0+280172] +0x4.
  The `lwc1` at 0x79b7c0 loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79b7c4 stores 4 bytes to [a0+280172] +0x8.
  The `lwc1` at 0x79b7d8 loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79b7dc stores 4 bytes to [a0+280172] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44670, including `lw` at 0x79b7e4, `lw` at 0x79b7fc, `lw` at 0x79b814.
  The `lwc1` at 0x79b7f0 loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79b7f4 stores 4 bytes to [a0+280176] +0x0.
  The `lwc1` at 0x79b808 loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79b80c stores 4 bytes to [a0+280176] +0x4.
  The `lwc1` at 0x79b820 loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79b824 stores 4 bytes to [a0+280176] +0x8.
  The `lwc1` at 0x79b838 loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79b83c stores 4 bytes to [a0+280176] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44674, including `lw` at 0x79b844, `lw` at 0x79b85c, `lw` at 0x79b874.
  The `lwc1` at 0x79b850 loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79b854 stores 4 bytes to [a0+280180] +0x0.
  The `lwc1` at 0x79b868 loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79b86c stores 4 bytes to [a0+280180] +0x4.
  The `lwc1` at 0x79b880 loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79b884 stores 4 bytes to [a0+280180] +0x8.
  The `lwc1` at 0x79b898 loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79b89c stores 4 bytes to [a0+280180] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44678, including `lw` at 0x79b8a4, `lw` at 0x79b8bc, `lw` at 0x79b8d4.
  The `lwc1` at 0x79b8b0 loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79b8b4 stores 4 bytes to [a0+280184] +0x0.
  The `lwc1` at 0x79b8c8 loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79b8cc stores 4 bytes to [a0+280184] +0x4.
  The `lwc1` at 0x79b8e0 loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79b8e4 stores 4 bytes to [a0+280184] +0x8.
  The `lwc1` at 0x79b8f8 loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79b8fc stores 4 bytes to [a0+280184] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4467c, including `lw` at 0x79b904, `lw` at 0x79b91c, `lw` at 0x79b934.
  The `lwc1` at 0x79b910 loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79b914 stores 4 bytes to [a0+280188] +0x0.
  The `lwc1` at 0x79b928 loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79b92c stores 4 bytes to [a0+280188] +0x4.
  The `lwc1` at 0x79b940 loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79b944 stores 4 bytes to [a0+280188] +0x8.
  The `lwc1` at 0x79b958 loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79b95c stores 4 bytes to [a0+280188] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44680, including `lw` at 0x79b964, `lw` at 0x79b97c, `lw` at 0x79b994.
  The `lwc1` at 0x79b970 loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79b974 stores 4 bytes to [a0+280192] +0x0.
  The `lwc1` at 0x79b988 loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79b98c stores 4 bytes to [a0+280192] +0x4.
  The `lwc1` at 0x79b9a0 loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79b9a4 stores 4 bytes to [a0+280192] +0x8.
  The `lwc1` at 0x79b9b8 loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79b9bc stores 4 bytes to [a0+280192] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44684, including `lw` at 0x79b9c4, `lw` at 0x79b9dc, `lw` at 0x79b9f4.
  The `lwc1` at 0x79b9d0 loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79b9d4 stores 4 bytes to [a0+280196] +0x0.
  The `lwc1` at 0x79b9e8 loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79b9ec stores 4 bytes to [a0+280196] +0x4.
  The `lwc1` at 0x79ba00 loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79ba04 stores 4 bytes to [a0+280196] +0x8.
  The `lwc1` at 0x79ba18 loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79ba1c stores 4 bytes to [a0+280196] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44688, including `lw` at 0x79ba24, `lw` at 0x79ba3c, `lw` at 0x79ba54.
  The `lwc1` at 0x79ba30 loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79ba34 stores 4 bytes to [a0+280200] +0x0.
  The `lwc1` at 0x79ba48 loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79ba4c stores 4 bytes to [a0+280200] +0x4.
  The `lwc1` at 0x79ba60 loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79ba64 stores 4 bytes to [a0+280200] +0x8.
  The `lwc1` at 0x79ba78 loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79ba7c stores 4 bytes to [a0+280200] +0xc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446e0, including `lw` at 0x79ba84, `lw` at 0x79c388.
  The `lwc1` at 0x79ba90 loads 4 bytes from ([a0+280288] + ([a0+281200] << 0x2)) -0x4.
  The `swc1` at 0x79ba94 stores 4 bytes to [a0+280288] +0x0.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446ac, including `lw` at 0x79ba9c, `lw` at 0x79bab4, `lw` at 0x79bacc.
  The `lwc1` at 0x79baa8 loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79baac stores 4 bytes to [a0+280236] +0x0.
  The `lwc1` at 0x79bac0 loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79bac4 stores 4 bytes to [a0+280236] +0x4.
  The `lwc1` at 0x79bad8 loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79badc stores 4 bytes to [a0+280236] +0x8.
  The `lwc1` at 0x79baf0 loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79baf4 stores 4 bytes to [a0+280236] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446b0, including `lw` at 0x79bafc, `lw` at 0x79bb14, `lw` at 0x79bb2c.
  The `lwc1` at 0x79bb08 loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79bb0c stores 4 bytes to [a0+280240] +0x0.
  The `lwc1` at 0x79bb20 loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79bb24 stores 4 bytes to [a0+280240] +0x4.
  The `lwc1` at 0x79bb38 loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79bb3c stores 4 bytes to [a0+280240] +0x8.
  The `lwc1` at 0x79bb50 loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79bb54 stores 4 bytes to [a0+280240] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446b4, including `lw` at 0x79bb5c, `lw` at 0x79bb74, `lw` at 0x79bb8c.
  The `lwc1` at 0x79bb68 loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79bb6c stores 4 bytes to [a0+280244] +0x0.
  The `lwc1` at 0x79bb80 loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79bb84 stores 4 bytes to [a0+280244] +0x4.
  The `lwc1` at 0x79bb98 loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79bb9c stores 4 bytes to [a0+280244] +0x8.
  The `lwc1` at 0x79bbb0 loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79bbb4 stores 4 bytes to [a0+280244] +0xc.
  2 such `lbu` accesses load 1 byte from a0 (arg0 at entry) +0x610d, including `lbu` at 0x79bbb8, `lbu` at 0x79c4bc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446b8, including `lw` at 0x79bbc8, `lw` at 0x79bbe0, `lw` at 0x79bbf8.
  The `lwc1` at 0x79bbd4 loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79bbd8 stores 4 bytes to [a0+280248] +0x0.
  The `lwc1` at 0x79bbec loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79bbf0 stores 4 bytes to [a0+280248] +0x4.
  The `lwc1` at 0x79bc04 loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79bc08 stores 4 bytes to [a0+280248] +0x8.
  The `lwc1` at 0x79bc1c loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79bc20 stores 4 bytes to [a0+280248] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446bc, including `lw` at 0x79bc28, `lw` at 0x79bc40, `lw` at 0x79bc58.
  The `lwc1` at 0x79bc34 loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79bc38 stores 4 bytes to [a0+280252] +0x0.
  The `lwc1` at 0x79bc4c loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79bc50 stores 4 bytes to [a0+280252] +0x4.
  The `lwc1` at 0x79bc64 loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79bc68 stores 4 bytes to [a0+280252] +0x8.
  The `lwc1` at 0x79bc7c loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79bc80 stores 4 bytes to [a0+280252] +0xc.
  16 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446c0, including `lw` at 0x79bc88, `lw` at 0x79bca0, `lw` at 0x79bcb8.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0x10, including `lwc1` at 0x79bc94, `lwc1` at 0x79bcf8.
  The `swc1` at 0x79bc98 stores 4 bytes to [a0+280256] +0x0.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0xc, including `lwc1` at 0x79bcac, `lwc1` at 0x79bd14.
  The `swc1` at 0x79bcb0 stores 4 bytes to [a0+280256] +0x4.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0x8, including `lwc1` at 0x79bcc4, `lwc1` at 0x79bd30.
  The `swc1` at 0x79bcc8 stores 4 bytes to [a0+280256] +0x8.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0x4, including `lwc1` at 0x79bcdc, `lwc1` at 0x79bd4c.
  The `swc1` at 0x79bce0 stores 4 bytes to [a0+280256] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446c4, including `lw` at 0x79bcf0, `lw` at 0x79bd0c, `lw` at 0x79bd28.
  The `swc1` at 0x79bcfc stores 4 bytes to [a0+280260] +0x0.
  The `swc1` at 0x79bd18 stores 4 bytes to [a0+280260] +0x4.
  The `swc1` at 0x79bd34 stores 4 bytes to [a0+280260] +0x8.
  The `swc1` at 0x79bd50 stores 4 bytes to [a0+280260] +0xc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446d8, including `lw` at 0x79bd58, `lw` at 0x79c65c.
  The `lwc1` at 0x79bd64 loads 4 bytes from ([a0+280280] + ([a0+281200] << 0x2)) -0x4.
  The `swc1` at 0x79bd68 stores 4 bytes to [a0+280280] +0x0.
  2 such `lbu` accesses load 1 byte from a0 (arg0 at entry) +0xbed, including `lbu` at 0x79bd6c, `lbu` at 0x79c670.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446c8, including `lw` at 0x79bd74, `lw` at 0x79bd90, `lw` at 0x79bda8.
  The `lwc1` at 0x79bd84 loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79bd88 stores 4 bytes to [a0+280264] +0x0.
  The `lwc1` at 0x79bd9c loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79bda0 stores 4 bytes to [a0+280264] +0x4.
  The `lwc1` at 0x79bdb4 loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79bdb8 stores 4 bytes to [a0+280264] +0x8.
  The `lwc1` at 0x79bdcc loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79bdd0 stores 4 bytes to [a0+280264] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446cc, including `lw` at 0x79bdd8, `lw` at 0x79bdf0, `lw` at 0x79be08.
  The `lwc1` at 0x79bde4 loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79bde8 stores 4 bytes to [a0+280268] +0x0.
  The `lwc1` at 0x79bdfc loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79be00 stores 4 bytes to [a0+280268] +0x4.
  The `lwc1` at 0x79be14 loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79be18 stores 4 bytes to [a0+280268] +0x8.
  The `lwc1` at 0x79be2c loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79be30 stores 4 bytes to [a0+280268] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446d0, including `lw` at 0x79be38, `lw` at 0x79be50, `lw` at 0x79be68.
  The `lwc1` at 0x79be44 loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79be48 stores 4 bytes to [a0+280272] +0x0.
  The `lwc1` at 0x79be5c loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79be60 stores 4 bytes to [a0+280272] +0x4.
  The `lwc1` at 0x79be74 loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79be78 stores 4 bytes to [a0+280272] +0x8.
  The `lwc1` at 0x79be8c loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79be90 stores 4 bytes to [a0+280272] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446d4, including `lw` at 0x79be98, `lw` at 0x79beb0, `lw` at 0x79bec8.
  The `lwc1` at 0x79bea4 loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79bea8 stores 4 bytes to [a0+280276] +0x0.
  The `lwc1` at 0x79bebc loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79bec0 stores 4 bytes to [a0+280276] +0x4.
  The `lwc1` at 0x79bed4 loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79bed8 stores 4 bytes to [a0+280276] +0x8.
  The `lwc1` at 0x79beec loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79bef0 stores 4 bytes to [a0+280276] +0xc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446dc, including `lw` at 0x79bef8, `lw` at 0x79c7fc.
  The `lwc1` at 0x79bf04 loads 4 bytes from ([a0+280284] + ([a0+281200] << 0x2)) -0x4.
  The `swc1` at 0x79bf08 stores 4 bytes to [a0+280284] +0x0.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x44a70, including `sw` at 0x79bf10, `sw` at 0x79bf18.
  94 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x39400, including `lw` at 0x79bf1c, `lw` at 0x79bf34, `lw` at 0x79bf4c.
  The `lwc1` at 0x79bf24 loads 4 bytes from [a0+280156] +0x0.
  The `swc1` at 0x79bf30 stores 4 bytes to ([a0+280156] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79bf3c loads 4 bytes from [a0+280156] +0x4.
  The `swc1` at 0x79bf48 stores 4 bytes to ([a0+280156] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79bf54 loads 4 bytes from [a0+280156] +0x8.
  The `swc1` at 0x79bf60 stores 4 bytes to ([a0+280156] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79bf6c loads 4 bytes from [a0+280156] +0xc.
  The `swc1` at 0x79bf78 stores 4 bytes to ([a0+280156] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79bf84 loads 4 bytes from [a0+280160] +0x0.
  The `swc1` at 0x79bf90 stores 4 bytes to ([a0+280160] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79bf9c loads 4 bytes from [a0+280160] +0x4.
  The `swc1` at 0x79bfa8 stores 4 bytes to ([a0+280160] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79bfb4 loads 4 bytes from [a0+280160] +0x8.
  The `swc1` at 0x79bfc0 stores 4 bytes to ([a0+280160] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79bfcc loads 4 bytes from [a0+280160] +0xc.
  The `swc1` at 0x79bfd8 stores 4 bytes to ([a0+280160] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79bfe4 loads 4 bytes from [a0+280164] +0x0.
  The `swc1` at 0x79bff0 stores 4 bytes to ([a0+280164] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79bffc loads 4 bytes from [a0+280164] +0x4.
  The `swc1` at 0x79c008 stores 4 bytes to ([a0+280164] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c014 loads 4 bytes from [a0+280164] +0x8.
  The `swc1` at 0x79c020 stores 4 bytes to ([a0+280164] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c02c loads 4 bytes from [a0+280168] +0x0.
  The `swc1` at 0x79c038 stores 4 bytes to ([a0+280168] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c044 loads 4 bytes from [a0+280168] +0x4.
  The `swc1` at 0x79c050 stores 4 bytes to ([a0+280168] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c05c loads 4 bytes from [a0+280168] +0x8.
  The `swc1` at 0x79c068 stores 4 bytes to ([a0+280168] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c074 loads 4 bytes from [a0+280168] +0xc.
  The `swc1` at 0x79c080 stores 4 bytes to ([a0+280168] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c08c loads 4 bytes from [a0+280172] +0x0.
  The `swc1` at 0x79c098 stores 4 bytes to ([a0+280172] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c0a4 loads 4 bytes from [a0+280172] +0x4.
  The `swc1` at 0x79c0b0 stores 4 bytes to ([a0+280172] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c0bc loads 4 bytes from [a0+280172] +0x8.
  The `swc1` at 0x79c0c8 stores 4 bytes to ([a0+280172] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c0d4 loads 4 bytes from [a0+280172] +0xc.
  The `swc1` at 0x79c0e0 stores 4 bytes to ([a0+280172] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c0ec loads 4 bytes from [a0+280176] +0x0.
  The `swc1` at 0x79c0f8 stores 4 bytes to ([a0+280176] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c104 loads 4 bytes from [a0+280176] +0x4.
  The `swc1` at 0x79c110 stores 4 bytes to ([a0+280176] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c11c loads 4 bytes from [a0+280176] +0x8.
  The `swc1` at 0x79c128 stores 4 bytes to ([a0+280176] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c134 loads 4 bytes from [a0+280176] +0xc.
  The `swc1` at 0x79c140 stores 4 bytes to ([a0+280176] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c14c loads 4 bytes from [a0+280180] +0x0.
  The `swc1` at 0x79c158 stores 4 bytes to ([a0+280180] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c164 loads 4 bytes from [a0+280180] +0x4.
  The `swc1` at 0x79c170 stores 4 bytes to ([a0+280180] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c17c loads 4 bytes from [a0+280180] +0x8.
  The `swc1` at 0x79c188 stores 4 bytes to ([a0+280180] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c194 loads 4 bytes from [a0+280180] +0xc.
  The `swc1` at 0x79c1a0 stores 4 bytes to ([a0+280180] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c1ac loads 4 bytes from [a0+280184] +0x0.
  The `swc1` at 0x79c1b8 stores 4 bytes to ([a0+280184] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c1c4 loads 4 bytes from [a0+280184] +0x4.
  The `swc1` at 0x79c1d0 stores 4 bytes to ([a0+280184] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c1dc loads 4 bytes from [a0+280184] +0x8.
  The `swc1` at 0x79c1e8 stores 4 bytes to ([a0+280184] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c1f4 loads 4 bytes from [a0+280184] +0xc.
  The `swc1` at 0x79c200 stores 4 bytes to ([a0+280184] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c20c loads 4 bytes from [a0+280188] +0x0.
  The `swc1` at 0x79c218 stores 4 bytes to ([a0+280188] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c224 loads 4 bytes from [a0+280188] +0x4.
  The `swc1` at 0x79c230 stores 4 bytes to ([a0+280188] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c23c loads 4 bytes from [a0+280188] +0x8.
  The `swc1` at 0x79c248 stores 4 bytes to ([a0+280188] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c254 loads 4 bytes from [a0+280188] +0xc.
  The `swc1` at 0x79c260 stores 4 bytes to ([a0+280188] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c26c loads 4 bytes from [a0+280192] +0x0.
  The `swc1` at 0x79c278 stores 4 bytes to ([a0+280192] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c284 loads 4 bytes from [a0+280192] +0x4.
  The `swc1` at 0x79c290 stores 4 bytes to ([a0+280192] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c29c loads 4 bytes from [a0+280192] +0x8.
  The `swc1` at 0x79c2a8 stores 4 bytes to ([a0+280192] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c2b4 loads 4 bytes from [a0+280192] +0xc.
  The `swc1` at 0x79c2c0 stores 4 bytes to ([a0+280192] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c2cc loads 4 bytes from [a0+280196] +0x0.
  The `swc1` at 0x79c2d8 stores 4 bytes to ([a0+280196] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c2e4 loads 4 bytes from [a0+280196] +0x4.
  The `swc1` at 0x79c2f0 stores 4 bytes to ([a0+280196] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c2fc loads 4 bytes from [a0+280196] +0x8.
  The `swc1` at 0x79c308 stores 4 bytes to ([a0+280196] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c314 loads 4 bytes from [a0+280196] +0xc.
  The `swc1` at 0x79c320 stores 4 bytes to ([a0+280196] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c32c loads 4 bytes from [a0+280200] +0x0.
  The `swc1` at 0x79c338 stores 4 bytes to ([a0+280200] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c344 loads 4 bytes from [a0+280200] +0x4.
  The `swc1` at 0x79c350 stores 4 bytes to ([a0+280200] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c35c loads 4 bytes from [a0+280200] +0x8.
  The `swc1` at 0x79c368 stores 4 bytes to ([a0+280200] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c374 loads 4 bytes from [a0+280200] +0xc.
  The `swc1` at 0x79c380 stores 4 bytes to ([a0+280200] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c38c loads 4 bytes from [a0+280288] +0x0.
  The `swc1` at 0x79c398 stores 4 bytes to ([a0+280288] + ([a0+234496] << 0x2)) +0x0.
  The `lwc1` at 0x79c3a4 loads 4 bytes from [a0+280236] +0x0.
  The `swc1` at 0x79c3b0 stores 4 bytes to ([a0+280236] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c3bc loads 4 bytes from [a0+280236] +0x4.
  The `swc1` at 0x79c3c8 stores 4 bytes to ([a0+280236] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c3d4 loads 4 bytes from [a0+280236] +0x8.
  The `swc1` at 0x79c3e0 stores 4 bytes to ([a0+280236] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c3ec loads 4 bytes from [a0+280236] +0xc.
  The `swc1` at 0x79c3f8 stores 4 bytes to ([a0+280236] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c404 loads 4 bytes from [a0+280240] +0x0.
  The `swc1` at 0x79c410 stores 4 bytes to ([a0+280240] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c41c loads 4 bytes from [a0+280240] +0x4.
  The `swc1` at 0x79c428 stores 4 bytes to ([a0+280240] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c434 loads 4 bytes from [a0+280240] +0x8.
  The `swc1` at 0x79c440 stores 4 bytes to ([a0+280240] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c44c loads 4 bytes from [a0+280240] +0xc.
  The `swc1` at 0x79c458 stores 4 bytes to ([a0+280240] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c464 loads 4 bytes from [a0+280244] +0x0.
  The `swc1` at 0x79c470 stores 4 bytes to ([a0+280244] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c47c loads 4 bytes from [a0+280244] +0x4.
  The `swc1` at 0x79c488 stores 4 bytes to ([a0+280244] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c494 loads 4 bytes from [a0+280244] +0x8.
  The `swc1` at 0x79c4a0 stores 4 bytes to ([a0+280244] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c4ac loads 4 bytes from [a0+280244] +0xc.
  The `swc1` at 0x79c4b8 stores 4 bytes to ([a0+280244] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c4d0 loads 4 bytes from [a0+280248] +0x0.
  The `swc1` at 0x79c4dc stores 4 bytes to ([a0+280248] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c4e8 loads 4 bytes from [a0+280248] +0x4.
  The `swc1` at 0x79c4f4 stores 4 bytes to ([a0+280248] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c500 loads 4 bytes from [a0+280248] +0x8.
  The `swc1` at 0x79c50c stores 4 bytes to ([a0+280248] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c518 loads 4 bytes from [a0+280248] +0xc.
  The `swc1` at 0x79c524 stores 4 bytes to ([a0+280248] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c530 loads 4 bytes from [a0+280252] +0x0.
  The `swc1` at 0x79c53c stores 4 bytes to ([a0+280252] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c548 loads 4 bytes from [a0+280252] +0x4.
  The `swc1` at 0x79c554 stores 4 bytes to ([a0+280252] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c560 loads 4 bytes from [a0+280252] +0x8.
  The `swc1` at 0x79c56c stores 4 bytes to ([a0+280252] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c578 loads 4 bytes from [a0+280252] +0xc.
  The `swc1` at 0x79c584 stores 4 bytes to ([a0+280252] + ([a0+234496] << 0x4)) +0xc.
  2 such `lwc1` accesses load 4 bytes from [a0+280256] +0x0, including `lwc1` at 0x79c590, `lwc1` at 0x79c5f4.
  The `swc1` at 0x79c59c stores 4 bytes to ([a0+280256] + ([a0+234496] << 0x4)) +0x0.
  2 such `lwc1` accesses load 4 bytes from [a0+280256] +0x4, including `lwc1` at 0x79c5a8, `lwc1` at 0x79c610.
  The `swc1` at 0x79c5b4 stores 4 bytes to ([a0+280256] + ([a0+234496] << 0x4)) +0x4.
  2 such `lwc1` accesses load 4 bytes from [a0+280256] +0x8, including `lwc1` at 0x79c5c0, `lwc1` at 0x79c62c.
  The `swc1` at 0x79c5cc stores 4 bytes to ([a0+280256] + ([a0+234496] << 0x4)) +0x8.
  2 such `lwc1` accesses load 4 bytes from [a0+280256] +0xc, including `lwc1` at 0x79c5d8, `lwc1` at 0x79c648.
  The `swc1` at 0x79c5e4 stores 4 bytes to ([a0+280256] + ([a0+234496] << 0x4)) +0xc.
  The `swc1` at 0x79c600 stores 4 bytes to ([a0+280260] + ([a0+234496] << 0x4)) +0x0.
  The `swc1` at 0x79c61c stores 4 bytes to ([a0+280260] + ([a0+234496] << 0x4)) +0x4.
  The `swc1` at 0x79c638 stores 4 bytes to ([a0+280260] + ([a0+234496] << 0x4)) +0x8.
  The `swc1` at 0x79c654 stores 4 bytes to ([a0+280260] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c660 loads 4 bytes from [a0+280280] +0x0.
  The `swc1` at 0x79c66c stores 4 bytes to ([a0+280280] + ([a0+234496] << 0x2)) +0x0.
  The `lwc1` at 0x79c680 loads 4 bytes from [a0+280264] +0x0.
  The `swc1` at 0x79c68c stores 4 bytes to ([a0+280264] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c698 loads 4 bytes from [a0+280264] +0x4.
  The `swc1` at 0x79c6a4 stores 4 bytes to ([a0+280264] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c6b0 loads 4 bytes from [a0+280264] +0x8.
  The `swc1` at 0x79c6bc stores 4 bytes to ([a0+280264] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c6c8 loads 4 bytes from [a0+280264] +0xc.
  The `swc1` at 0x79c6d4 stores 4 bytes to ([a0+280264] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c6e0 loads 4 bytes from [a0+280268] +0x0.
  The `swc1` at 0x79c6ec stores 4 bytes to ([a0+280268] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c6f8 loads 4 bytes from [a0+280268] +0x4.
  The `swc1` at 0x79c704 stores 4 bytes to ([a0+280268] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c710 loads 4 bytes from [a0+280268] +0x8.
  The `swc1` at 0x79c71c stores 4 bytes to ([a0+280268] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c728 loads 4 bytes from [a0+280268] +0xc.
  The `swc1` at 0x79c734 stores 4 bytes to ([a0+280268] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c740 loads 4 bytes from [a0+280272] +0x0.
  The `swc1` at 0x79c74c stores 4 bytes to ([a0+280272] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c758 loads 4 bytes from [a0+280272] +0x4.
  The `swc1` at 0x79c764 stores 4 bytes to ([a0+280272] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c770 loads 4 bytes from [a0+280272] +0x8.
  The `swc1` at 0x79c77c stores 4 bytes to ([a0+280272] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c788 loads 4 bytes from [a0+280272] +0xc.
  The `swc1` at 0x79c794 stores 4 bytes to ([a0+280272] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c7a0 loads 4 bytes from [a0+280276] +0x0.
  The `swc1` at 0x79c7ac stores 4 bytes to ([a0+280276] + ([a0+234496] << 0x4)) +0x0.
  The `lwc1` at 0x79c7b8 loads 4 bytes from [a0+280276] +0x4.
  The `swc1` at 0x79c7c4 stores 4 bytes to ([a0+280276] + ([a0+234496] << 0x4)) +0x4.
  The `lwc1` at 0x79c7d0 loads 4 bytes from [a0+280276] +0x8.
  The `swc1` at 0x79c7dc stores 4 bytes to ([a0+280276] + ([a0+234496] << 0x4)) +0x8.
  The `lwc1` at 0x79c7e8 loads 4 bytes from [a0+280276] +0xc.
  The `swc1` at 0x79c7f4 stores 4 bytes to ([a0+280276] + ([a0+234496] << 0x4)) +0xc.
  The `lwc1` at 0x79c800 loads 4 bytes from [a0+280284] +0x0.
  The `swc1` at 0x79c80c stores 4 bytes to ([a0+280284] + ([a0+234496] << 0x2)) +0x0.
  The `sw` at 0x79c81c stores 4 bytes to a0 (arg0 at entry) +0x449e8.
  The `beq` branch at 0x79b610 targets 0x79bf1c, is taken when at(=[a0+281064]) == a3(=0x1), and falls through when at(=[a0+281064]) != a3(=0x1).
  The `beq` branch at 0x79bbbc targets 0x79bf14, is taken when a4(=[a0+24845]:1) == 0, and falls through when a4(=[a0+24845]:1) != 0.
  The `beq` branch at 0x79bd70 targets 0x79bf14, is taken when t9(=[a0+3053]:1) == 0, and falls through when t9(=[a0+3053]:1) != 0.
  The `beq` branch at 0x79c4c0 targets 0x79c810, is taken when at(=[a0+24845]:1) == 0, and falls through when at(=[a0+24845]:1) != 0.
  The `beq` branch at 0x79c674 targets 0x79c810, is taken when t1(=[a0+3053]:1) == 0, and falls through when t1(=[a0+3053]:1) != 0.
  The `beq` branch at 0x79c818 targets 0x79b618 and is always taken.
  The return at 0x79bf0c has v0 = ([a0+280276] + ([a0+281200] << 0x4)).
  The return at 0x79bf14 has v0 = one of [a0+280240], ([a0+280280] + ([a0+281200] << 0x2)).

- `ResetVcache_TriangleStrip` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x79c840 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x79c840-0x79da48 (4616 bytes).
  It occupies 4616 bytes.
  188 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44a70, including `lw` at 0x79c848, `lw` at 0x79c860, `lw` at 0x79c878.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4465c, including `lw` at 0x79c84c, `lw` at 0x79c864, `lw` at 0x79c87c.
  The `lwc1` at 0x79c858 loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79c85c stores 4 bytes to [a0+280156] +0x0.
  The `lwc1` at 0x79c870 loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79c874 stores 4 bytes to [a0+280156] +0x4.
  The `lwc1` at 0x79c888 loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79c88c stores 4 bytes to [a0+280156] +0x8.
  The `lwc1` at 0x79c8a0 loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79c8a4 stores 4 bytes to [a0+280156] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44660, including `lw` at 0x79c8ac, `lw` at 0x79c8c4, `lw` at 0x79c8dc.
  The `lwc1` at 0x79c8b8 loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79c8bc stores 4 bytes to [a0+280160] +0x0.
  The `lwc1` at 0x79c8d0 loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79c8d4 stores 4 bytes to [a0+280160] +0x4.
  The `lwc1` at 0x79c8e8 loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79c8ec stores 4 bytes to [a0+280160] +0x8.
  The `lwc1` at 0x79c900 loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79c904 stores 4 bytes to [a0+280160] +0xc.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44664, including `lw` at 0x79c90c, `lw` at 0x79c924, `lw` at 0x79c93c.
  The `lwc1` at 0x79c918 loads 4 bytes from ([a0+280164] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79c91c stores 4 bytes to [a0+280164] +0x0.
  The `lwc1` at 0x79c930 loads 4 bytes from ([a0+280164] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79c934 stores 4 bytes to [a0+280164] +0x4.
  The `lwc1` at 0x79c948 loads 4 bytes from ([a0+280164] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79c94c stores 4 bytes to [a0+280164] +0x8.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44668, including `lw` at 0x79c954, `lw` at 0x79c96c, `lw` at 0x79c984.
  The `lwc1` at 0x79c960 loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79c964 stores 4 bytes to [a0+280168] +0x0.
  The `lwc1` at 0x79c978 loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79c97c stores 4 bytes to [a0+280168] +0x4.
  The `lwc1` at 0x79c990 loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79c994 stores 4 bytes to [a0+280168] +0x8.
  The `lwc1` at 0x79c9a8 loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79c9ac stores 4 bytes to [a0+280168] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4466c, including `lw` at 0x79c9b4, `lw` at 0x79c9cc, `lw` at 0x79c9e4.
  The `lwc1` at 0x79c9c0 loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79c9c4 stores 4 bytes to [a0+280172] +0x0.
  The `lwc1` at 0x79c9d8 loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79c9dc stores 4 bytes to [a0+280172] +0x4.
  The `lwc1` at 0x79c9f0 loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79c9f4 stores 4 bytes to [a0+280172] +0x8.
  The `lwc1` at 0x79ca08 loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79ca0c stores 4 bytes to [a0+280172] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44670, including `lw` at 0x79ca14, `lw` at 0x79ca2c, `lw` at 0x79ca44.
  The `lwc1` at 0x79ca20 loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79ca24 stores 4 bytes to [a0+280176] +0x0.
  The `lwc1` at 0x79ca38 loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79ca3c stores 4 bytes to [a0+280176] +0x4.
  The `lwc1` at 0x79ca50 loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79ca54 stores 4 bytes to [a0+280176] +0x8.
  The `lwc1` at 0x79ca68 loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79ca6c stores 4 bytes to [a0+280176] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44674, including `lw` at 0x79ca74, `lw` at 0x79ca8c, `lw` at 0x79caa4.
  The `lwc1` at 0x79ca80 loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79ca84 stores 4 bytes to [a0+280180] +0x0.
  The `lwc1` at 0x79ca98 loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79ca9c stores 4 bytes to [a0+280180] +0x4.
  The `lwc1` at 0x79cab0 loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79cab4 stores 4 bytes to [a0+280180] +0x8.
  The `lwc1` at 0x79cac8 loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79cacc stores 4 bytes to [a0+280180] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44678, including `lw` at 0x79cad4, `lw` at 0x79caec, `lw` at 0x79cb04.
  The `lwc1` at 0x79cae0 loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79cae4 stores 4 bytes to [a0+280184] +0x0.
  The `lwc1` at 0x79caf8 loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79cafc stores 4 bytes to [a0+280184] +0x4.
  The `lwc1` at 0x79cb10 loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79cb14 stores 4 bytes to [a0+280184] +0x8.
  The `lwc1` at 0x79cb28 loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79cb2c stores 4 bytes to [a0+280184] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4467c, including `lw` at 0x79cb34, `lw` at 0x79cb4c, `lw` at 0x79cb64.
  The `lwc1` at 0x79cb40 loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79cb44 stores 4 bytes to [a0+280188] +0x0.
  The `lwc1` at 0x79cb58 loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79cb5c stores 4 bytes to [a0+280188] +0x4.
  The `lwc1` at 0x79cb70 loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79cb74 stores 4 bytes to [a0+280188] +0x8.
  The `lwc1` at 0x79cb88 loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79cb8c stores 4 bytes to [a0+280188] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44680, including `lw` at 0x79cb94, `lw` at 0x79cbac, `lw` at 0x79cbc4.
  The `lwc1` at 0x79cba0 loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79cba4 stores 4 bytes to [a0+280192] +0x0.
  The `lwc1` at 0x79cbb8 loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79cbbc stores 4 bytes to [a0+280192] +0x4.
  The `lwc1` at 0x79cbd0 loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79cbd4 stores 4 bytes to [a0+280192] +0x8.
  The `lwc1` at 0x79cbe8 loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79cbec stores 4 bytes to [a0+280192] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44684, including `lw` at 0x79cbf4, `lw` at 0x79cc0c, `lw` at 0x79cc24.
  The `lwc1` at 0x79cc00 loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79cc04 stores 4 bytes to [a0+280196] +0x0.
  The `lwc1` at 0x79cc18 loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79cc1c stores 4 bytes to [a0+280196] +0x4.
  The `lwc1` at 0x79cc30 loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79cc34 stores 4 bytes to [a0+280196] +0x8.
  The `lwc1` at 0x79cc48 loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79cc4c stores 4 bytes to [a0+280196] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44688, including `lw` at 0x79cc54, `lw` at 0x79cc6c, `lw` at 0x79cc84.
  The `lwc1` at 0x79cc60 loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79cc64 stores 4 bytes to [a0+280200] +0x0.
  The `lwc1` at 0x79cc78 loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79cc7c stores 4 bytes to [a0+280200] +0x4.
  The `lwc1` at 0x79cc90 loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79cc94 stores 4 bytes to [a0+280200] +0x8.
  The `lwc1` at 0x79cca8 loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79ccac stores 4 bytes to [a0+280200] +0xc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446e0, including `lw` at 0x79ccb4, `lw` at 0x79d5a8.
  The `lwc1` at 0x79ccc0 loads 4 bytes from ([a0+280288] + ([a0+281200] << 0x2)) -0x8.
  The `swc1` at 0x79ccc4 stores 4 bytes to [a0+280288] +0x0.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446ac, including `lw` at 0x79cccc, `lw` at 0x79cce4, `lw` at 0x79ccfc.
  The `lwc1` at 0x79ccd8 loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79ccdc stores 4 bytes to [a0+280236] +0x0.
  The `lwc1` at 0x79ccf0 loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79ccf4 stores 4 bytes to [a0+280236] +0x4.
  The `lwc1` at 0x79cd08 loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79cd0c stores 4 bytes to [a0+280236] +0x8.
  The `lwc1` at 0x79cd20 loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79cd24 stores 4 bytes to [a0+280236] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446b0, including `lw` at 0x79cd2c, `lw` at 0x79cd44, `lw` at 0x79cd5c.
  The `lwc1` at 0x79cd38 loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79cd3c stores 4 bytes to [a0+280240] +0x0.
  The `lwc1` at 0x79cd50 loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79cd54 stores 4 bytes to [a0+280240] +0x4.
  The `lwc1` at 0x79cd68 loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79cd6c stores 4 bytes to [a0+280240] +0x8.
  The `lwc1` at 0x79cd80 loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79cd84 stores 4 bytes to [a0+280240] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446b4, including `lw` at 0x79cd8c, `lw` at 0x79cda4, `lw` at 0x79cdbc.
  The `lwc1` at 0x79cd98 loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79cd9c stores 4 bytes to [a0+280244] +0x0.
  The `lwc1` at 0x79cdb0 loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79cdb4 stores 4 bytes to [a0+280244] +0x4.
  The `lwc1` at 0x79cdc8 loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79cdcc stores 4 bytes to [a0+280244] +0x8.
  The `lwc1` at 0x79cde0 loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79cde4 stores 4 bytes to [a0+280244] +0xc.
  2 such `lbu` accesses load 1 byte from a0 (arg0 at entry) +0x610d, including `lbu` at 0x79cde8, `lbu` at 0x79d6dc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446b8, including `lw` at 0x79cdf8, `lw` at 0x79ce10, `lw` at 0x79ce28.
  The `lwc1` at 0x79ce04 loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79ce08 stores 4 bytes to [a0+280248] +0x0.
  The `lwc1` at 0x79ce1c loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79ce20 stores 4 bytes to [a0+280248] +0x4.
  The `lwc1` at 0x79ce34 loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79ce38 stores 4 bytes to [a0+280248] +0x8.
  The `lwc1` at 0x79ce4c loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79ce50 stores 4 bytes to [a0+280248] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446bc, including `lw` at 0x79ce58, `lw` at 0x79ce70, `lw` at 0x79ce88.
  The `lwc1` at 0x79ce64 loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79ce68 stores 4 bytes to [a0+280252] +0x0.
  The `lwc1` at 0x79ce7c loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79ce80 stores 4 bytes to [a0+280252] +0x4.
  The `lwc1` at 0x79ce94 loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79ce98 stores 4 bytes to [a0+280252] +0x8.
  The `lwc1` at 0x79ceac loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79ceb0 stores 4 bytes to [a0+280252] +0xc.
  16 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446c0, including `lw` at 0x79ceb8, `lw` at 0x79ced0, `lw` at 0x79cee8.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0x20, including `lwc1` at 0x79cec4, `lwc1` at 0x79cf28.
  The `swc1` at 0x79cec8 stores 4 bytes to [a0+280256] +0x0.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0x1c, including `lwc1` at 0x79cedc, `lwc1` at 0x79cf44.
  The `swc1` at 0x79cee0 stores 4 bytes to [a0+280256] +0x4.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0x18, including `lwc1` at 0x79cef4, `lwc1` at 0x79cf60.
  The `swc1` at 0x79cef8 stores 4 bytes to [a0+280256] +0x8.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0x14, including `lwc1` at 0x79cf0c, `lwc1` at 0x79cf7c.
  The `swc1` at 0x79cf10 stores 4 bytes to [a0+280256] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446c4, including `lw` at 0x79cf20, `lw` at 0x79cf3c, `lw` at 0x79cf58.
  The `swc1` at 0x79cf2c stores 4 bytes to [a0+280260] +0x0.
  The `swc1` at 0x79cf48 stores 4 bytes to [a0+280260] +0x4.
  The `swc1` at 0x79cf64 stores 4 bytes to [a0+280260] +0x8.
  The `swc1` at 0x79cf80 stores 4 bytes to [a0+280260] +0xc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446d8, including `lw` at 0x79cf88, `lw` at 0x79d87c.
  The `lwc1` at 0x79cf94 loads 4 bytes from ([a0+280280] + ([a0+281200] << 0x2)) -0x8.
  The `swc1` at 0x79cf98 stores 4 bytes to [a0+280280] +0x0.
  2 such `lbu` accesses load 1 byte from a0 (arg0 at entry) +0xbed, including `lbu` at 0x79cf9c, `lbu` at 0x79d890.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446c8, including `lw` at 0x79cfa4, `lw` at 0x79cfc0, `lw` at 0x79cfd8.
  The `lwc1` at 0x79cfb4 loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79cfb8 stores 4 bytes to [a0+280264] +0x0.
  The `lwc1` at 0x79cfcc loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79cfd0 stores 4 bytes to [a0+280264] +0x4.
  The `lwc1` at 0x79cfe4 loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79cfe8 stores 4 bytes to [a0+280264] +0x8.
  The `lwc1` at 0x79cffc loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79d000 stores 4 bytes to [a0+280264] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446cc, including `lw` at 0x79d008, `lw` at 0x79d020, `lw` at 0x79d038.
  The `lwc1` at 0x79d014 loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79d018 stores 4 bytes to [a0+280268] +0x0.
  The `lwc1` at 0x79d02c loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79d030 stores 4 bytes to [a0+280268] +0x4.
  The `lwc1` at 0x79d044 loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79d048 stores 4 bytes to [a0+280268] +0x8.
  The `lwc1` at 0x79d05c loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79d060 stores 4 bytes to [a0+280268] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446d0, including `lw` at 0x79d068, `lw` at 0x79d080, `lw` at 0x79d098.
  The `lwc1` at 0x79d074 loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79d078 stores 4 bytes to [a0+280272] +0x0.
  The `lwc1` at 0x79d08c loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79d090 stores 4 bytes to [a0+280272] +0x4.
  The `lwc1` at 0x79d0a4 loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79d0a8 stores 4 bytes to [a0+280272] +0x8.
  The `lwc1` at 0x79d0bc loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79d0c0 stores 4 bytes to [a0+280272] +0xc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446d4, including `lw` at 0x79d0c8, `lw` at 0x79d0e0, `lw` at 0x79d0f8.
  The `lwc1` at 0x79d0d4 loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0x20.
  The `swc1` at 0x79d0d8 stores 4 bytes to [a0+280276] +0x0.
  The `lwc1` at 0x79d0ec loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0x1c.
  The `swc1` at 0x79d0f0 stores 4 bytes to [a0+280276] +0x4.
  The `lwc1` at 0x79d104 loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0x18.
  The `swc1` at 0x79d108 stores 4 bytes to [a0+280276] +0x8.
  The `lwc1` at 0x79d11c loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0x14.
  The `swc1` at 0x79d120 stores 4 bytes to [a0+280276] +0xc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446dc, including `lw` at 0x79d128, `lw` at 0x79da1c.
  The `lwc1` at 0x79d134 loads 4 bytes from ([a0+280284] + ([a0+281200] << 0x2)) -0x8.
  The `swc1` at 0x79d138 stores 4 bytes to [a0+280284] +0x0.
  The `lwc1` at 0x79d14c loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d150 stores 4 bytes to [a0+280156] +0x10.
  The `lwc1` at 0x79d164 loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d168 stores 4 bytes to [a0+280156] +0x14.
  The `lwc1` at 0x79d17c loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d180 stores 4 bytes to [a0+280156] +0x18.
  The `lwc1` at 0x79d194 loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d198 stores 4 bytes to [a0+280156] +0x1c.
  The `lwc1` at 0x79d1ac loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d1b0 stores 4 bytes to [a0+280160] +0x10.
  The `lwc1` at 0x79d1c4 loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d1c8 stores 4 bytes to [a0+280160] +0x14.
  The `lwc1` at 0x79d1dc loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d1e0 stores 4 bytes to [a0+280160] +0x18.
  The `lwc1` at 0x79d1f4 loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d1f8 stores 4 bytes to [a0+280160] +0x1c.
  The `lwc1` at 0x79d20c loads 4 bytes from ([a0+280164] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d210 stores 4 bytes to [a0+280164] +0x10.
  The `lwc1` at 0x79d224 loads 4 bytes from ([a0+280164] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d228 stores 4 bytes to [a0+280164] +0x14.
  The `lwc1` at 0x79d23c loads 4 bytes from ([a0+280164] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d240 stores 4 bytes to [a0+280164] +0x18.
  The `lwc1` at 0x79d254 loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d258 stores 4 bytes to [a0+280168] +0x10.
  The `lwc1` at 0x79d26c loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d270 stores 4 bytes to [a0+280168] +0x14.
  The `lwc1` at 0x79d284 loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d288 stores 4 bytes to [a0+280168] +0x18.
  The `lwc1` at 0x79d29c loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d2a0 stores 4 bytes to [a0+280168] +0x1c.
  The `lwc1` at 0x79d2b4 loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d2b8 stores 4 bytes to [a0+280172] +0x10.
  The `lwc1` at 0x79d2cc loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d2d0 stores 4 bytes to [a0+280172] +0x14.
  The `lwc1` at 0x79d2e4 loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d2e8 stores 4 bytes to [a0+280172] +0x18.
  The `lwc1` at 0x79d2fc loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d300 stores 4 bytes to [a0+280172] +0x1c.
  The `lwc1` at 0x79d314 loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d318 stores 4 bytes to [a0+280176] +0x10.
  The `lwc1` at 0x79d32c loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d330 stores 4 bytes to [a0+280176] +0x14.
  The `lwc1` at 0x79d344 loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d348 stores 4 bytes to [a0+280176] +0x18.
  The `lwc1` at 0x79d35c loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d360 stores 4 bytes to [a0+280176] +0x1c.
  The `lwc1` at 0x79d374 loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d378 stores 4 bytes to [a0+280180] +0x10.
  The `lwc1` at 0x79d38c loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d390 stores 4 bytes to [a0+280180] +0x14.
  The `lwc1` at 0x79d3a4 loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d3a8 stores 4 bytes to [a0+280180] +0x18.
  The `lwc1` at 0x79d3bc loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d3c0 stores 4 bytes to [a0+280180] +0x1c.
  The `lwc1` at 0x79d3d4 loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d3d8 stores 4 bytes to [a0+280184] +0x10.
  The `lwc1` at 0x79d3ec loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d3f0 stores 4 bytes to [a0+280184] +0x14.
  The `lwc1` at 0x79d404 loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d408 stores 4 bytes to [a0+280184] +0x18.
  The `lwc1` at 0x79d41c loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d420 stores 4 bytes to [a0+280184] +0x1c.
  The `lwc1` at 0x79d434 loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d438 stores 4 bytes to [a0+280188] +0x10.
  The `lwc1` at 0x79d44c loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d450 stores 4 bytes to [a0+280188] +0x14.
  The `lwc1` at 0x79d464 loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d468 stores 4 bytes to [a0+280188] +0x18.
  The `lwc1` at 0x79d47c loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d480 stores 4 bytes to [a0+280188] +0x1c.
  The `lwc1` at 0x79d494 loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d498 stores 4 bytes to [a0+280192] +0x10.
  The `lwc1` at 0x79d4ac loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d4b0 stores 4 bytes to [a0+280192] +0x14.
  The `lwc1` at 0x79d4c4 loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d4c8 stores 4 bytes to [a0+280192] +0x18.
  The `lwc1` at 0x79d4dc loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d4e0 stores 4 bytes to [a0+280192] +0x1c.
  The `lwc1` at 0x79d4f4 loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d4f8 stores 4 bytes to [a0+280196] +0x10.
  The `lwc1` at 0x79d50c loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d510 stores 4 bytes to [a0+280196] +0x14.
  The `lwc1` at 0x79d524 loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d528 stores 4 bytes to [a0+280196] +0x18.
  The `lwc1` at 0x79d53c loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d540 stores 4 bytes to [a0+280196] +0x1c.
  The `lwc1` at 0x79d554 loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d558 stores 4 bytes to [a0+280200] +0x10.
  The `lwc1` at 0x79d56c loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d570 stores 4 bytes to [a0+280200] +0x14.
  The `lwc1` at 0x79d584 loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d588 stores 4 bytes to [a0+280200] +0x18.
  The `lwc1` at 0x79d59c loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d5a0 stores 4 bytes to [a0+280200] +0x1c.
  The `lwc1` at 0x79d5b4 loads 4 bytes from ([a0+280288] + ([a0+281200] << 0x2)) -0x4.
  The `swc1` at 0x79d5b8 stores 4 bytes to [a0+280288] +0x4.
  The `lwc1` at 0x79d5cc loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d5d0 stores 4 bytes to [a0+280236] +0x10.
  The `lwc1` at 0x79d5e4 loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d5e8 stores 4 bytes to [a0+280236] +0x14.
  The `lwc1` at 0x79d5fc loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d600 stores 4 bytes to [a0+280236] +0x18.
  The `lwc1` at 0x79d614 loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d618 stores 4 bytes to [a0+280236] +0x1c.
  The `lwc1` at 0x79d62c loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d630 stores 4 bytes to [a0+280240] +0x10.
  The `lwc1` at 0x79d644 loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d648 stores 4 bytes to [a0+280240] +0x14.
  The `lwc1` at 0x79d65c loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d660 stores 4 bytes to [a0+280240] +0x18.
  The `lwc1` at 0x79d674 loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d678 stores 4 bytes to [a0+280240] +0x1c.
  The `lwc1` at 0x79d68c loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d690 stores 4 bytes to [a0+280244] +0x10.
  The `lwc1` at 0x79d6a4 loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d6a8 stores 4 bytes to [a0+280244] +0x14.
  The `lwc1` at 0x79d6bc loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d6c0 stores 4 bytes to [a0+280244] +0x18.
  The `lwc1` at 0x79d6d4 loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d6d8 stores 4 bytes to [a0+280244] +0x1c.
  The `lwc1` at 0x79d6f8 loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d6fc stores 4 bytes to [a0+280248] +0x10.
  The `lwc1` at 0x79d710 loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d714 stores 4 bytes to [a0+280248] +0x14.
  The `lwc1` at 0x79d728 loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d72c stores 4 bytes to [a0+280248] +0x18.
  The `lwc1` at 0x79d740 loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d744 stores 4 bytes to [a0+280248] +0x1c.
  The `lwc1` at 0x79d758 loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d75c stores 4 bytes to [a0+280252] +0x10.
  The `lwc1` at 0x79d770 loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d774 stores 4 bytes to [a0+280252] +0x14.
  The `lwc1` at 0x79d788 loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d78c stores 4 bytes to [a0+280252] +0x18.
  The `lwc1` at 0x79d7a0 loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d7a4 stores 4 bytes to [a0+280252] +0x1c.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0x10, including `lwc1` at 0x79d7b8, `lwc1` at 0x79d81c.
  The `swc1` at 0x79d7bc stores 4 bytes to [a0+280256] +0x10.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0xc, including `lwc1` at 0x79d7d0, `lwc1` at 0x79d838.
  The `swc1` at 0x79d7d4 stores 4 bytes to [a0+280256] +0x14.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0x8, including `lwc1` at 0x79d7e8, `lwc1` at 0x79d854.
  The `swc1` at 0x79d7ec stores 4 bytes to [a0+280256] +0x18.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0x4, including `lwc1` at 0x79d800, `lwc1` at 0x79d870.
  The `swc1` at 0x79d804 stores 4 bytes to [a0+280256] +0x1c.
  The `swc1` at 0x79d820 stores 4 bytes to [a0+280260] +0x10.
  The `swc1` at 0x79d83c stores 4 bytes to [a0+280260] +0x14.
  The `swc1` at 0x79d858 stores 4 bytes to [a0+280260] +0x18.
  The `swc1` at 0x79d874 stores 4 bytes to [a0+280260] +0x1c.
  The `lwc1` at 0x79d888 loads 4 bytes from ([a0+280280] + ([a0+281200] << 0x2)) -0x4.
  The `swc1` at 0x79d88c stores 4 bytes to [a0+280280] +0x4.
  The `lwc1` at 0x79d8a8 loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d8ac stores 4 bytes to [a0+280264] +0x10.
  The `lwc1` at 0x79d8c0 loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d8c4 stores 4 bytes to [a0+280264] +0x14.
  The `lwc1` at 0x79d8d8 loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d8dc stores 4 bytes to [a0+280264] +0x18.
  The `lwc1` at 0x79d8f0 loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d8f4 stores 4 bytes to [a0+280264] +0x1c.
  The `lwc1` at 0x79d908 loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d90c stores 4 bytes to [a0+280268] +0x10.
  The `lwc1` at 0x79d920 loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d924 stores 4 bytes to [a0+280268] +0x14.
  The `lwc1` at 0x79d938 loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d93c stores 4 bytes to [a0+280268] +0x18.
  The `lwc1` at 0x79d950 loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d954 stores 4 bytes to [a0+280268] +0x1c.
  The `lwc1` at 0x79d968 loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d96c stores 4 bytes to [a0+280272] +0x10.
  The `lwc1` at 0x79d980 loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d984 stores 4 bytes to [a0+280272] +0x14.
  The `lwc1` at 0x79d998 loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d99c stores 4 bytes to [a0+280272] +0x18.
  The `lwc1` at 0x79d9b0 loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79d9b4 stores 4 bytes to [a0+280272] +0x1c.
  The `lwc1` at 0x79d9c8 loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79d9cc stores 4 bytes to [a0+280276] +0x10.
  The `lwc1` at 0x79d9e0 loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79d9e4 stores 4 bytes to [a0+280276] +0x14.
  The `lwc1` at 0x79d9f8 loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79d9fc stores 4 bytes to [a0+280276] +0x18.
  The `lwc1` at 0x79da10 loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79da14 stores 4 bytes to [a0+280276] +0x1c.
  The `lwc1` at 0x79da28 loads 4 bytes from ([a0+280284] + ([a0+281200] << 0x2)) -0x4.
  The `swc1` at 0x79da2c stores 4 bytes to [a0+280284] +0x4.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x44a70, including `sw` at 0x79da38, `sw` at 0x79da44.
  The `beq` branch at 0x79cdec targets 0x79d13c, is taken when at(=[a0+24845]:1) == 0, and falls through when at(=[a0+24845]:1) != 0.
  The `beq` branch at 0x79cfa0 targets 0x79d13c, is taken when a3(=[a0+3053]:1) == 0, and falls through when a3(=[a0+3053]:1) != 0.
  The `beq` branch at 0x79d6e0 targets 0x79da40, is taken when v1(=[a0+24845]:1) == 0, and falls through when v1(=[a0+24845]:1) != 0.
  The `beq` branch at 0x79d894 targets 0x79da3c, is taken when a1(=[a0+3053]:1) == 0, and falls through when a1(=[a0+3053]:1) != 0.
  The return at 0x79da34 has v0 = ([a0+280276] + ([a0+281200] << 0x4)).
  The return at 0x79da40 has v0 = one of ([a0+280240] + ([a0+281200] << 0x4)), ([a0+280256] + ([a0+281200] << 0x4)).

- `ResetVcache_TriangleFan` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x79da80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x79da80-0x79e394 (2324 bytes).
  It occupies 2324 bytes.
  94 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44a70, including `lw` at 0x79da88, `lw` at 0x79daa0, `lw` at 0x79dab8.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4465c, including `lw` at 0x79da8c, `lw` at 0x79daa4, `lw` at 0x79dabc.
  The `lwc1` at 0x79da98 loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79da9c stores 4 bytes to [a0+280156] +0x10.
  The `lwc1` at 0x79dab0 loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79dab4 stores 4 bytes to [a0+280156] +0x14.
  The `lwc1` at 0x79dac8 loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79dacc stores 4 bytes to [a0+280156] +0x18.
  The `lwc1` at 0x79dae0 loads 4 bytes from ([a0+280156] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79dae4 stores 4 bytes to [a0+280156] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44660, including `lw` at 0x79daec, `lw` at 0x79db04, `lw` at 0x79db1c.
  The `lwc1` at 0x79daf8 loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79dafc stores 4 bytes to [a0+280160] +0x10.
  The `lwc1` at 0x79db10 loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79db14 stores 4 bytes to [a0+280160] +0x14.
  The `lwc1` at 0x79db28 loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79db2c stores 4 bytes to [a0+280160] +0x18.
  The `lwc1` at 0x79db40 loads 4 bytes from ([a0+280160] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79db44 stores 4 bytes to [a0+280160] +0x1c.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44664, including `lw` at 0x79db4c, `lw` at 0x79db64, `lw` at 0x79db7c.
  The `lwc1` at 0x79db58 loads 4 bytes from ([a0+280164] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79db5c stores 4 bytes to [a0+280164] +0x10.
  The `lwc1` at 0x79db70 loads 4 bytes from ([a0+280164] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79db74 stores 4 bytes to [a0+280164] +0x14.
  The `lwc1` at 0x79db88 loads 4 bytes from ([a0+280164] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79db8c stores 4 bytes to [a0+280164] +0x18.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44668, including `lw` at 0x79db94, `lw` at 0x79dbac, `lw` at 0x79dbc4.
  The `lwc1` at 0x79dba0 loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79dba4 stores 4 bytes to [a0+280168] +0x10.
  The `lwc1` at 0x79dbb8 loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79dbbc stores 4 bytes to [a0+280168] +0x14.
  The `lwc1` at 0x79dbd0 loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79dbd4 stores 4 bytes to [a0+280168] +0x18.
  The `lwc1` at 0x79dbe8 loads 4 bytes from ([a0+280168] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79dbec stores 4 bytes to [a0+280168] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4466c, including `lw` at 0x79dbf4, `lw` at 0x79dc0c, `lw` at 0x79dc24.
  The `lwc1` at 0x79dc00 loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79dc04 stores 4 bytes to [a0+280172] +0x10.
  The `lwc1` at 0x79dc18 loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79dc1c stores 4 bytes to [a0+280172] +0x14.
  The `lwc1` at 0x79dc30 loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79dc34 stores 4 bytes to [a0+280172] +0x18.
  The `lwc1` at 0x79dc48 loads 4 bytes from ([a0+280172] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79dc4c stores 4 bytes to [a0+280172] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44670, including `lw` at 0x79dc54, `lw` at 0x79dc6c, `lw` at 0x79dc84.
  The `lwc1` at 0x79dc60 loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79dc64 stores 4 bytes to [a0+280176] +0x10.
  The `lwc1` at 0x79dc78 loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79dc7c stores 4 bytes to [a0+280176] +0x14.
  The `lwc1` at 0x79dc90 loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79dc94 stores 4 bytes to [a0+280176] +0x18.
  The `lwc1` at 0x79dca8 loads 4 bytes from ([a0+280176] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79dcac stores 4 bytes to [a0+280176] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44674, including `lw` at 0x79dcb4, `lw` at 0x79dccc, `lw` at 0x79dce4.
  The `lwc1` at 0x79dcc0 loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79dcc4 stores 4 bytes to [a0+280180] +0x10.
  The `lwc1` at 0x79dcd8 loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79dcdc stores 4 bytes to [a0+280180] +0x14.
  The `lwc1` at 0x79dcf0 loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79dcf4 stores 4 bytes to [a0+280180] +0x18.
  The `lwc1` at 0x79dd08 loads 4 bytes from ([a0+280180] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79dd0c stores 4 bytes to [a0+280180] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44678, including `lw` at 0x79dd14, `lw` at 0x79dd2c, `lw` at 0x79dd44.
  The `lwc1` at 0x79dd20 loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79dd24 stores 4 bytes to [a0+280184] +0x10.
  The `lwc1` at 0x79dd38 loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79dd3c stores 4 bytes to [a0+280184] +0x14.
  The `lwc1` at 0x79dd50 loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79dd54 stores 4 bytes to [a0+280184] +0x18.
  The `lwc1` at 0x79dd68 loads 4 bytes from ([a0+280184] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79dd6c stores 4 bytes to [a0+280184] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4467c, including `lw` at 0x79dd74, `lw` at 0x79dd8c, `lw` at 0x79dda4.
  The `lwc1` at 0x79dd80 loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79dd84 stores 4 bytes to [a0+280188] +0x10.
  The `lwc1` at 0x79dd98 loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79dd9c stores 4 bytes to [a0+280188] +0x14.
  The `lwc1` at 0x79ddb0 loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79ddb4 stores 4 bytes to [a0+280188] +0x18.
  The `lwc1` at 0x79ddc8 loads 4 bytes from ([a0+280188] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79ddcc stores 4 bytes to [a0+280188] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44680, including `lw` at 0x79ddd4, `lw` at 0x79ddec, `lw` at 0x79de04.
  The `lwc1` at 0x79dde0 loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79dde4 stores 4 bytes to [a0+280192] +0x10.
  The `lwc1` at 0x79ddf8 loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79ddfc stores 4 bytes to [a0+280192] +0x14.
  The `lwc1` at 0x79de10 loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79de14 stores 4 bytes to [a0+280192] +0x18.
  The `lwc1` at 0x79de28 loads 4 bytes from ([a0+280192] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79de2c stores 4 bytes to [a0+280192] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44684, including `lw` at 0x79de34, `lw` at 0x79de4c, `lw` at 0x79de64.
  The `lwc1` at 0x79de40 loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79de44 stores 4 bytes to [a0+280196] +0x10.
  The `lwc1` at 0x79de58 loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79de5c stores 4 bytes to [a0+280196] +0x14.
  The `lwc1` at 0x79de70 loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79de74 stores 4 bytes to [a0+280196] +0x18.
  The `lwc1` at 0x79de88 loads 4 bytes from ([a0+280196] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79de8c stores 4 bytes to [a0+280196] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x44688, including `lw` at 0x79de94, `lw` at 0x79deac, `lw` at 0x79dec4.
  The `lwc1` at 0x79dea0 loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79dea4 stores 4 bytes to [a0+280200] +0x10.
  The `lwc1` at 0x79deb8 loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79debc stores 4 bytes to [a0+280200] +0x14.
  The `lwc1` at 0x79ded0 loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79ded4 stores 4 bytes to [a0+280200] +0x18.
  The `lwc1` at 0x79dee8 loads 4 bytes from ([a0+280200] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79deec stores 4 bytes to [a0+280200] +0x1c.
  The `lw` at 0x79def4 loads 4 bytes from a0 (arg0 at entry) +0x446e0.
  The `lwc1` at 0x79df00 loads 4 bytes from ([a0+280288] + ([a0+281200] << 0x2)) -0x4.
  The `swc1` at 0x79df04 stores 4 bytes to [a0+280288] +0x4.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446ac, including `lw` at 0x79df0c, `lw` at 0x79df24, `lw` at 0x79df3c.
  The `lwc1` at 0x79df18 loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79df1c stores 4 bytes to [a0+280236] +0x10.
  The `lwc1` at 0x79df30 loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79df34 stores 4 bytes to [a0+280236] +0x14.
  The `lwc1` at 0x79df48 loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79df4c stores 4 bytes to [a0+280236] +0x18.
  The `lwc1` at 0x79df60 loads 4 bytes from ([a0+280236] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79df64 stores 4 bytes to [a0+280236] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446b0, including `lw` at 0x79df6c, `lw` at 0x79df84, `lw` at 0x79df9c.
  The `lwc1` at 0x79df78 loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79df7c stores 4 bytes to [a0+280240] +0x10.
  The `lwc1` at 0x79df90 loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79df94 stores 4 bytes to [a0+280240] +0x14.
  The `lwc1` at 0x79dfa8 loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79dfac stores 4 bytes to [a0+280240] +0x18.
  The `lwc1` at 0x79dfc0 loads 4 bytes from ([a0+280240] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79dfc4 stores 4 bytes to [a0+280240] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446b4, including `lw` at 0x79dfcc, `lw` at 0x79dfe4, `lw` at 0x79dffc.
  The `lwc1` at 0x79dfd8 loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79dfdc stores 4 bytes to [a0+280244] +0x10.
  The `lwc1` at 0x79dff0 loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79dff4 stores 4 bytes to [a0+280244] +0x14.
  The `lwc1` at 0x79e008 loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79e00c stores 4 bytes to [a0+280244] +0x18.
  The `lwc1` at 0x79e020 loads 4 bytes from ([a0+280244] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79e024 stores 4 bytes to [a0+280244] +0x1c.
  The `lbu` at 0x79e028 loads 1 byte from a0 (arg0 at entry) +0x610d.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446b8, including `lw` at 0x79e038, `lw` at 0x79e050, `lw` at 0x79e068.
  The `lwc1` at 0x79e044 loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79e048 stores 4 bytes to [a0+280248] +0x10.
  The `lwc1` at 0x79e05c loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79e060 stores 4 bytes to [a0+280248] +0x14.
  The `lwc1` at 0x79e074 loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79e078 stores 4 bytes to [a0+280248] +0x18.
  The `lwc1` at 0x79e08c loads 4 bytes from ([a0+280248] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79e090 stores 4 bytes to [a0+280248] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446bc, including `lw` at 0x79e098, `lw` at 0x79e0b0, `lw` at 0x79e0c8.
  The `lwc1` at 0x79e0a4 loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79e0a8 stores 4 bytes to [a0+280252] +0x10.
  The `lwc1` at 0x79e0bc loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79e0c0 stores 4 bytes to [a0+280252] +0x14.
  The `lwc1` at 0x79e0d4 loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79e0d8 stores 4 bytes to [a0+280252] +0x18.
  The `lwc1` at 0x79e0ec loads 4 bytes from ([a0+280252] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79e0f0 stores 4 bytes to [a0+280252] +0x1c.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446c0, including `lw` at 0x79e0f8, `lw` at 0x79e110, `lw` at 0x79e128.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0x10, including `lwc1` at 0x79e104, `lwc1` at 0x79e168.
  The `swc1` at 0x79e108 stores 4 bytes to [a0+280256] +0x10.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0xc, including `lwc1` at 0x79e11c, `lwc1` at 0x79e184.
  The `swc1` at 0x79e120 stores 4 bytes to [a0+280256] +0x14.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0x8, including `lwc1` at 0x79e134, `lwc1` at 0x79e1a0.
  The `swc1` at 0x79e138 stores 4 bytes to [a0+280256] +0x18.
  2 such `lwc1` accesses load 4 bytes from ([a0+280256] + ([a0+281200] << 0x4)) -0x4, including `lwc1` at 0x79e14c, `lwc1` at 0x79e1bc.
  The `swc1` at 0x79e150 stores 4 bytes to [a0+280256] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446c4, including `lw` at 0x79e160, `lw` at 0x79e17c, `lw` at 0x79e198.
  The `swc1` at 0x79e16c stores 4 bytes to [a0+280260] +0x10.
  The `swc1` at 0x79e188 stores 4 bytes to [a0+280260] +0x14.
  The `swc1` at 0x79e1a4 stores 4 bytes to [a0+280260] +0x18.
  The `swc1` at 0x79e1c0 stores 4 bytes to [a0+280260] +0x1c.
  The `lw` at 0x79e1c8 loads 4 bytes from a0 (arg0 at entry) +0x446d8.
  The `lwc1` at 0x79e1d4 loads 4 bytes from ([a0+280280] + ([a0+281200] << 0x2)) -0x4.
  The `swc1` at 0x79e1d8 stores 4 bytes to [a0+280280] +0x4.
  The `lbu` at 0x79e1dc loads 1 byte from a0 (arg0 at entry) +0xbed.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446c8, including `lw` at 0x79e1e4, `lw` at 0x79e200, `lw` at 0x79e218.
  The `lwc1` at 0x79e1f4 loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79e1f8 stores 4 bytes to [a0+280264] +0x10.
  The `lwc1` at 0x79e20c loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79e210 stores 4 bytes to [a0+280264] +0x14.
  The `lwc1` at 0x79e224 loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79e228 stores 4 bytes to [a0+280264] +0x18.
  The `lwc1` at 0x79e23c loads 4 bytes from ([a0+280264] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79e240 stores 4 bytes to [a0+280264] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446cc, including `lw` at 0x79e248, `lw` at 0x79e260, `lw` at 0x79e278.
  The `lwc1` at 0x79e254 loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79e258 stores 4 bytes to [a0+280268] +0x10.
  The `lwc1` at 0x79e26c loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79e270 stores 4 bytes to [a0+280268] +0x14.
  The `lwc1` at 0x79e284 loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79e288 stores 4 bytes to [a0+280268] +0x18.
  The `lwc1` at 0x79e29c loads 4 bytes from ([a0+280268] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79e2a0 stores 4 bytes to [a0+280268] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446d0, including `lw` at 0x79e2a8, `lw` at 0x79e2c0, `lw` at 0x79e2d8.
  The `lwc1` at 0x79e2b4 loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79e2b8 stores 4 bytes to [a0+280272] +0x10.
  The `lwc1` at 0x79e2cc loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79e2d0 stores 4 bytes to [a0+280272] +0x14.
  The `lwc1` at 0x79e2e4 loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79e2e8 stores 4 bytes to [a0+280272] +0x18.
  The `lwc1` at 0x79e2fc loads 4 bytes from ([a0+280272] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79e300 stores 4 bytes to [a0+280272] +0x1c.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x446d4, including `lw` at 0x79e308, `lw` at 0x79e320, `lw` at 0x79e338.
  The `lwc1` at 0x79e314 loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0x10.
  The `swc1` at 0x79e318 stores 4 bytes to [a0+280276] +0x10.
  The `lwc1` at 0x79e32c loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0xc.
  The `swc1` at 0x79e330 stores 4 bytes to [a0+280276] +0x14.
  The `lwc1` at 0x79e344 loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0x8.
  The `swc1` at 0x79e348 stores 4 bytes to [a0+280276] +0x18.
  The `lwc1` at 0x79e35c loads 4 bytes from ([a0+280276] + ([a0+281200] << 0x4)) -0x4.
  The `swc1` at 0x79e360 stores 4 bytes to [a0+280276] +0x1c.
  The `lw` at 0x79e368 loads 4 bytes from a0 (arg0 at entry) +0x446dc.
  The `lwc1` at 0x79e374 loads 4 bytes from ([a0+280284] + ([a0+281200] << 0x2)) -0x4.
  The `swc1` at 0x79e378 stores 4 bytes to [a0+280284] +0x4.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x44a70, including `sw` at 0x79e384, `sw` at 0x79e390.
  The `beq` branch at 0x79e02c targets 0x79e38c, is taken when at(=[a0+24845]:1) == 0, and falls through when at(=[a0+24845]:1) != 0.
  The `beq` branch at 0x79e1e0 targets 0x79e388, is taken when a3(=[a0+3053]:1) == 0, and falls through when a3(=[a0+3053]:1) != 0.
  The return at 0x79e380 has v0 = [a0+280276].
  The return at 0x79e38c has v0 = 0x2.

- `AdjustPrimType_Default` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x79e3c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x79e3c0-0x79e3c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x79e3c0 has v0 = ?.

- `AdjustPrimType_LineLoop` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x79e400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x79e400-0x79e41c (28 bytes).
  It occupies 28 bytes.
  The `sw` at 0x79e40c stores 4 bytes to a0 (arg0 at entry) +0x449e8.
  The `sw` at 0x79e418 stores 4 bytes to a0 (arg0 at entry) +0x393fc.
  The return at 0x79e414 has v0 = a0+262144.

- `AdjustPrimType_Polygon` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x79e440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x79e440-0x79e474 (52 bytes).
  It occupies 52 bytes.
  The `lw` at 0x79e444 loads 4 bytes from a0 (arg0 at entry) +0x9d8.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x393fc, including `sw` at 0x79e45c, `sw` at 0x79e464.
  The `sw` at 0x79e470 stores 4 bytes to a0 (arg0 at entry) +0x449e8.
  The `beq` branch at 0x79e450 targets 0x79e460, is taken when a4(=[a0+2520]) == a5(=0x1b01), and falls through when a4(=[a0+2520]) != a5(=0x1b01).
  The return at 0x79e458 has v0 = ?.
  The return at 0x79e46c has v0 = ?.

- `ComputeIndexBounds` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x7a4440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x7a4440-0x7a468c (588 bytes).
  It occupies 588 bytes.
  7 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0x7a4460, `sw` at 0x7a4510, `sw` at 0x7a45ac.
  4 such `sw` accesses store 4 bytes to a4 (arg4 at entry) +0x0, including `sw` at 0x7a4470, `sw` at 0x7a4660, `sw` at 0x7a4674.
  The `lw` at 0x7a4490 loads 4 bytes from a0 (arg0 at entry) +0x0.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x7a44c0, `lw` at 0x7a44e0, `lw` at 0x7a4508.
  The `lbu` at 0x7a4530 loads 1 byte from a0 (arg0 at entry) +0x0.
  3 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x7a455c, `lbu` at 0x7a457c, `lbu` at 0x7a45a4.
  The `lhu` at 0x7a45cc loads 2 bytes from a0 (arg0 at entry) +0x0.
  3 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x7a45fc, `lhu` at 0x7a461c, `lhu` at 0x7a4644.
  The `beq` branch at 0x7a4444 targets 0x7a4514, is taken when a2 == at(=0x1401), and falls through when a2 != at(=0x1401).
  The `beq` branch at 0x7a444c targets 0x7a45b0, is taken when a2 == v0(=0x1403), and falls through when a2 != v0(=0x1403).
  The `beq` branch at 0x7a4454 targets 0x7a4474, is taken when a2 == v1(=0x1405), and falls through when a2 != v1(=0x1405).
  The `blez` branch at 0x7a4474 targets 0x7a4650, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `beq` branch at 0x7a4488 targets 0x7a44b4, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x7a4498 targets 0x7a44a4, is taken when 0 >= a2(=[a0]) (unsigned), and falls through when 0 < a2(=[a0]) (unsigned).
  The `beq` branch at 0x7a44a4 targets 0x7a44b0, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0x7a44b8 targets 0x7a450c, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x7a44c8 targets 0x7a44d4, is taken when a7(?) >= a2(?) (unsigned), and falls through when a7(?) < a2(?) (unsigned).
  The `beq` branch at 0x7a44d4 targets 0x7a44e0, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x7a44ec targets 0x7a44f8, is taken when a7(?) >= a2(?) (unsigned), and falls through when a7(?) < a2(?) (unsigned).
  The `beq` branch at 0x7a44f8 targets 0x7a4504, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `bnel` branch at 0x7a4504 targets 0x7a44c4, is taken when a0(?) != t0(=((a1 << 0x2) + a0)), and falls through when a0(?) == t0(=((a1 << 0x2) + a0)); its branch-likely delay slot `lw a2,0(a0)` at 0x7a4508 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x7a450c targets 0x7a4464 and is always taken.
  The `blez` branch at 0x7a4514 targets 0x7a4664, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `beq` branch at 0x7a4528 targets 0x7a4554, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x7a4538 targets 0x7a4544, is taken when 0 >= a2(=[a0]:1) (unsigned), and falls through when 0 < a2(=[a0]:1) (unsigned).
  The `beq` branch at 0x7a4544 targets 0x7a4550, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x7a4554 targets 0x7a45a8, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x7a4564 targets 0x7a4570, is taken when a7(?) >= a2(?) (unsigned), and falls through when a7(?) < a2(?) (unsigned).
  The `beq` branch at 0x7a4570 targets 0x7a457c, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x7a4588 targets 0x7a4594, is taken when a7(?) >= a2(?) (unsigned), and falls through when a7(?) < a2(?) (unsigned).
  The `beq` branch at 0x7a4594 targets 0x7a45a0, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bnel` branch at 0x7a45a0 targets 0x7a4560, is taken when a0(?) != t0(=(a1 + a0)), and falls through when a0(?) == t0(=(a1 + a0)); its branch-likely delay slot `lbu a2,0(a0)` at 0x7a45a4 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x7a45a8 targets 0x7a4464 and is always taken.
  The `blez` branch at 0x7a45b0 targets 0x7a4678, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `beq` branch at 0x7a45c4 targets 0x7a45f0, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x7a45d4 targets 0x7a45e0, is taken when 0 >= a2(=[a0]:2) (unsigned), and falls through when 0 < a2(=[a0]:2) (unsigned).
  The `beq` branch at 0x7a45e0 targets 0x7a45ec, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x7a45f4 targets 0x7a4648, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0x7a4604 targets 0x7a4610, is taken when a7(?) >= a2(?) (unsigned), and falls through when a7(?) < a2(?) (unsigned).
  The `beq` branch at 0x7a4610 targets 0x7a461c, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x7a4628 targets 0x7a4634, is taken when a7(?) >= a2(?) (unsigned), and falls through when a7(?) < a2(?) (unsigned).
  The `beq` branch at 0x7a4634 targets 0x7a4640, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bnel` branch at 0x7a4640 targets 0x7a4600, is taken when a0(?) != t0(=((a1 + a1) + a0)), and falls through when a0(?) == t0(=((a1 + a1) + a0)); its branch-likely delay slot `lhu a2,0(a0)` at 0x7a4644 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x7a4648 targets 0x7a4464 and is always taken.
  The return at 0x7a446c has v0 = one of 0x1403, ?.
  The return at 0x7a465c has v0 = 0x1403.
  The return at 0x7a4670 has v0 = 0x1403.
  The return at 0x7a4684 has v0 = ?.

- `load_xyzw` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x7cdac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x7cdac0-0x7cdaf0 (48 bytes).
  It occupies 48 bytes.
  The `lw` at 0x7cdac0 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x7cdac4 loads 4 bytes from a0 (arg0 at entry) +0x40.
  The `swc1` at 0x7cdac8 stores 4 bytes to [a2] +0x0.
  The `lwc1` at 0x7cdacc loads 4 bytes from a0 (arg0 at entry) +0x44.
  The `swc1` at 0x7cdad0 stores 4 bytes to [a2] +0x4.
  The `lwc1` at 0x7cdad4 loads 4 bytes from a0 (arg0 at entry) +0x48.
  The `swc1` at 0x7cdad8 stores 4 bytes to [a2] +0x8.
  The `lwc1` at 0x7cdadc loads 4 bytes from a0 (arg0 at entry) +0x4c.
  The `swc1` at 0x7cdae0 stores 4 bytes to [a2] +0xc.
  The `sw` at 0x7cdaec stores 4 bytes to a2 (arg2 at entry) +0x0.
  The return at 0x7cdae8 has v0 = ?.

- `load_rgba` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x7cdb00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x7cdb00-0x7cdb30 (48 bytes).
  It occupies 48 bytes.
  The `lw` at 0x7cdb00 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x7cdb04 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `swc1` at 0x7cdb08 stores 4 bytes to [a2] +0x0.
  The `lwc1` at 0x7cdb0c loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `swc1` at 0x7cdb10 stores 4 bytes to [a2] +0x4.
  The `lwc1` at 0x7cdb14 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `swc1` at 0x7cdb18 stores 4 bytes to [a2] +0x8.
  The `lwc1` at 0x7cdb1c loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `swc1` at 0x7cdb20 stores 4 bytes to [a2] +0xc.
  The `sw` at 0x7cdb2c stores 4 bytes to a2 (arg2 at entry) +0x0.
  The return at 0x7cdb28 has v0 = ?.

- `load_rgb2` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x7cdb40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x7cdb40-0x7cdb68 (40 bytes).
  It occupies 40 bytes.
  The `lw` at 0x7cdb40 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x7cdb44 loads 4 bytes from a1 (arg1 at entry) +0x20.
  The `swc1` at 0x7cdb48 stores 4 bytes to [a2] +0x0.
  The `lwc1` at 0x7cdb4c loads 4 bytes from a1 (arg1 at entry) +0x24.
  The `swc1` at 0x7cdb50 stores 4 bytes to [a2] +0x4.
  The `lwc1` at 0x7cdb54 loads 4 bytes from a1 (arg1 at entry) +0x28.
  The `swc1` at 0x7cdb58 stores 4 bytes to [a2] +0x8.
  The `sw` at 0x7cdb64 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The return at 0x7cdb60 has v0 = ?.

- `load_ps` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x7cdb80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x7cdb80-0x7cdb98 (24 bytes).
  It occupies 24 bytes.
  The `lw` at 0x7cdb80 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x7cdb84 loads 4 bytes from a0 (arg0 at entry) +0x4d0.
  The `swc1` at 0x7cdb88 stores 4 bytes to [a2] +0x0.
  The `sw` at 0x7cdb94 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The return at 0x7cdb90 has v0 = ?.

- `load_fogf` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x7cdbc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x7cdbc0-0x7cdbd8 (24 bytes).
  It occupies 24 bytes.
  The `lw` at 0x7cdbc0 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x7cdbc4 loads 4 bytes from a0 (arg0 at entry) +0x58.
  The `swc1` at 0x7cdbc8 stores 4 bytes to [a2] +0x0.
  The `sw` at 0x7cdbd4 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The return at 0x7cdbd0 has v0 = ?.

- `load_rgba2` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x7cdc00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x7cdc00-0x7cdc30 (48 bytes).
  It occupies 48 bytes.
  The `lw` at 0x7cdc00 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x7cdc04 loads 4 bytes from a1 (arg1 at entry) +0x20.
  The `swc1` at 0x7cdc08 stores 4 bytes to [a2] +0x0.
  The `lwc1` at 0x7cdc0c loads 4 bytes from a1 (arg1 at entry) +0x24.
  The `swc1` at 0x7cdc10 stores 4 bytes to [a2] +0x4.
  The `lwc1` at 0x7cdc14 loads 4 bytes from a1 (arg1 at entry) +0x28.
  The `swc1` at 0x7cdc18 stores 4 bytes to [a2] +0x8.
  The `lwc1` at 0x7cdc1c loads 4 bytes from a0 (arg0 at entry) +0x58.
  The `swc1` at 0x7cdc20 stores 4 bytes to [a2] +0xc.
  The `sw` at 0x7cdc2c stores 4 bytes to a2 (arg2 at entry) +0x0.
  The return at 0x7cdc28 has v0 = ?.

- `load_5tex` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x7cdc40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x7cdc40-0x7cdd2c (236 bytes).
  It occupies 236 bytes.
  The `lw` at 0x7cdc40 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x7cdc48 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x7cdc50 loads 4 bytes from (a0 + ([a1] << 0x4)) +0x80.
  The `swc1` at 0x7cdc54 stores 4 bytes to [a2] +0x0.
  The `lwc1` at 0x7cdc58 loads 4 bytes from (a0 + ([a1] << 0x4)) +0x84.
  The `swc1` at 0x7cdc5c stores 4 bytes to [a2] +0x4.
  The `lwc1` at 0x7cdc60 loads 4 bytes from (a0 + ([a1] << 0x4)) +0x88.
  The `swc1` at 0x7cdc64 stores 4 bytes to [a2] +0x8.
  The `lwc1` at 0x7cdc68 loads 4 bytes from (a0 + ([a1] << 0x4)) +0x8c.
  The `swc1` at 0x7cdc6c stores 4 bytes to [a2] +0xc.
  The `lw` at 0x7cdc70 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lwc1` at 0x7cdc7c loads 4 bytes from (a0 + ([a1+4] << 0x4)) +0x80.
  The `swc1` at 0x7cdc80 stores 4 bytes to [a2] +0x10.
  The `lwc1` at 0x7cdc84 loads 4 bytes from (a0 + ([a1+4] << 0x4)) +0x84.
  The `swc1` at 0x7cdc88 stores 4 bytes to [a2] +0x14.
  The `lwc1` at 0x7cdc8c loads 4 bytes from (a0 + ([a1+4] << 0x4)) +0x88.
  The `swc1` at 0x7cdc90 stores 4 bytes to [a2] +0x18.
  The `lwc1` at 0x7cdc94 loads 4 bytes from (a0 + ([a1+4] << 0x4)) +0x8c.
  The `swc1` at 0x7cdc98 stores 4 bytes to [a2] +0x1c.
  The `lw` at 0x7cdc9c loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lwc1` at 0x7cdca8 loads 4 bytes from (a0 + ([a1+8] << 0x4)) +0x80.
  The `swc1` at 0x7cdcac stores 4 bytes to [a2] +0x20.
  The `lwc1` at 0x7cdcb0 loads 4 bytes from (a0 + ([a1+8] << 0x4)) +0x84.
  The `swc1` at 0x7cdcb4 stores 4 bytes to [a2] +0x24.
  The `lwc1` at 0x7cdcb8 loads 4 bytes from (a0 + ([a1+8] << 0x4)) +0x88.
  The `swc1` at 0x7cdcbc stores 4 bytes to [a2] +0x28.
  The `lwc1` at 0x7cdcc0 loads 4 bytes from (a0 + ([a1+8] << 0x4)) +0x8c.
  The `swc1` at 0x7cdcc4 stores 4 bytes to [a2] +0x2c.
  The `lw` at 0x7cdcc8 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lwc1` at 0x7cdcd4 loads 4 bytes from (a0 + ([a1+12] << 0x4)) +0x80.
  The `swc1` at 0x7cdcd8 stores 4 bytes to [a2] +0x30.
  The `lwc1` at 0x7cdcdc loads 4 bytes from (a0 + ([a1+12] << 0x4)) +0x84.
  The `swc1` at 0x7cdce0 stores 4 bytes to [a2] +0x34.
  The `lwc1` at 0x7cdce4 loads 4 bytes from (a0 + ([a1+12] << 0x4)) +0x88.
  The `swc1` at 0x7cdce8 stores 4 bytes to [a2] +0x38.
  The `lwc1` at 0x7cdcec loads 4 bytes from (a0 + ([a1+12] << 0x4)) +0x8c.
  The `swc1` at 0x7cdcf0 stores 4 bytes to [a2] +0x3c.
  The `lw` at 0x7cdcf4 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lwc1` at 0x7cdd00 loads 4 bytes from (a0 + ([a1+16] << 0x4)) +0x80.
  The `swc1` at 0x7cdd04 stores 4 bytes to [a2] +0x40.
  The `lwc1` at 0x7cdd08 loads 4 bytes from (a0 + ([a1+16] << 0x4)) +0x84.
  The `swc1` at 0x7cdd0c stores 4 bytes to [a2] +0x44.
  The `lwc1` at 0x7cdd10 loads 4 bytes from (a0 + ([a1+16] << 0x4)) +0x88.
  The `swc1` at 0x7cdd14 stores 4 bytes to [a2] +0x48.
  The `lwc1` at 0x7cdd18 loads 4 bytes from (a0 + ([a1+16] << 0x4)) +0x8c.
  The `swc1` at 0x7cdd1c stores 4 bytes to [a2] +0x4c.
  The `sw` at 0x7cdd28 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The return at 0x7cdd24 has v0 = (a0 + ([a1+16] << 0x4)).

- `load_6tex` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x7cdd40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x7cdd40-0x7cde58 (280 bytes).
  It occupies 280 bytes.
  The `lw` at 0x7cdd40 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x7cdd48 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x7cdd50 loads 4 bytes from (a0 + ([a1] << 0x4)) +0x80.
  The `swc1` at 0x7cdd54 stores 4 bytes to [a2] +0x0.
  The `lwc1` at 0x7cdd58 loads 4 bytes from (a0 + ([a1] << 0x4)) +0x84.
  The `swc1` at 0x7cdd5c stores 4 bytes to [a2] +0x4.
  The `lwc1` at 0x7cdd60 loads 4 bytes from (a0 + ([a1] << 0x4)) +0x88.
  The `swc1` at 0x7cdd64 stores 4 bytes to [a2] +0x8.
  The `lwc1` at 0x7cdd68 loads 4 bytes from (a0 + ([a1] << 0x4)) +0x8c.
  The `swc1` at 0x7cdd6c stores 4 bytes to [a2] +0xc.
  The `lw` at 0x7cdd70 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lwc1` at 0x7cdd7c loads 4 bytes from (a0 + ([a1+4] << 0x4)) +0x80.
  The `swc1` at 0x7cdd80 stores 4 bytes to [a2] +0x10.
  The `lwc1` at 0x7cdd84 loads 4 bytes from (a0 + ([a1+4] << 0x4)) +0x84.
  The `swc1` at 0x7cdd88 stores 4 bytes to [a2] +0x14.
  The `lwc1` at 0x7cdd8c loads 4 bytes from (a0 + ([a1+4] << 0x4)) +0x88.
  The `swc1` at 0x7cdd90 stores 4 bytes to [a2] +0x18.
  The `lwc1` at 0x7cdd94 loads 4 bytes from (a0 + ([a1+4] << 0x4)) +0x8c.
  The `swc1` at 0x7cdd98 stores 4 bytes to [a2] +0x1c.
  The `lw` at 0x7cdd9c loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lwc1` at 0x7cdda8 loads 4 bytes from (a0 + ([a1+8] << 0x4)) +0x80.
  The `swc1` at 0x7cddac stores 4 bytes to [a2] +0x20.
  The `lwc1` at 0x7cddb0 loads 4 bytes from (a0 + ([a1+8] << 0x4)) +0x84.
  The `swc1` at 0x7cddb4 stores 4 bytes to [a2] +0x24.
  The `lwc1` at 0x7cddb8 loads 4 bytes from (a0 + ([a1+8] << 0x4)) +0x88.
  The `swc1` at 0x7cddbc stores 4 bytes to [a2] +0x28.
  The `lwc1` at 0x7cddc0 loads 4 bytes from (a0 + ([a1+8] << 0x4)) +0x8c.
  The `swc1` at 0x7cddc4 stores 4 bytes to [a2] +0x2c.
  The `lw` at 0x7cddc8 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lwc1` at 0x7cddd4 loads 4 bytes from (a0 + ([a1+12] << 0x4)) +0x80.
  The `swc1` at 0x7cddd8 stores 4 bytes to [a2] +0x30.
  The `lwc1` at 0x7cdddc loads 4 bytes from (a0 + ([a1+12] << 0x4)) +0x84.
  The `swc1` at 0x7cdde0 stores 4 bytes to [a2] +0x34.
  The `lwc1` at 0x7cdde4 loads 4 bytes from (a0 + ([a1+12] << 0x4)) +0x88.
  The `swc1` at 0x7cdde8 stores 4 bytes to [a2] +0x38.
  The `lwc1` at 0x7cddec loads 4 bytes from (a0 + ([a1+12] << 0x4)) +0x8c.
  The `swc1` at 0x7cddf0 stores 4 bytes to [a2] +0x3c.
  The `lw` at 0x7cddf4 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lwc1` at 0x7cde00 loads 4 bytes from (a0 + ([a1+16] << 0x4)) +0x80.
  The `swc1` at 0x7cde04 stores 4 bytes to [a2] +0x40.
  The `lwc1` at 0x7cde08 loads 4 bytes from (a0 + ([a1+16] << 0x4)) +0x84.
  The `swc1` at 0x7cde0c stores 4 bytes to [a2] +0x44.
  The `lwc1` at 0x7cde10 loads 4 bytes from (a0 + ([a1+16] << 0x4)) +0x88.
  The `swc1` at 0x7cde14 stores 4 bytes to [a2] +0x48.
  The `lwc1` at 0x7cde18 loads 4 bytes from (a0 + ([a1+16] << 0x4)) +0x8c.
  The `swc1` at 0x7cde1c stores 4 bytes to [a2] +0x4c.
  The `lw` at 0x7cde20 loads 4 bytes from a1 (arg1 at entry) +0x14.
  The `lwc1` at 0x7cde2c loads 4 bytes from (a0 + ([a1+20] << 0x4)) +0x80.
  The `swc1` at 0x7cde30 stores 4 bytes to [a2] +0x50.
  The `lwc1` at 0x7cde34 loads 4 bytes from (a0 + ([a1+20] << 0x4)) +0x84.
  The `swc1` at 0x7cde38 stores 4 bytes to [a2] +0x54.
  The `lwc1` at 0x7cde3c loads 4 bytes from (a0 + ([a1+20] << 0x4)) +0x88.
  The `swc1` at 0x7cde40 stores 4 bytes to [a2] +0x58.
  The `lwc1` at 0x7cde44 loads 4 bytes from (a0 + ([a1+20] << 0x4)) +0x8c.
  The `swc1` at 0x7cde48 stores 4 bytes to [a2] +0x5c.
  The `sw` at 0x7cde54 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The return at 0x7cde50 has v0 = (a0 + ([a1+20] << 0x4)).

- `rewindToNextOpCode` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x7f3cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x7f3cc0-0x7f4130 (1136 bytes).
  It occupies 1136 bytes.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x7f3d2c, `lw` at 0x7f3dec.
  The `beq` branch at 0x7f3ce8 targets 0x7f3d2c and is always taken.
  The `bne` branch at 0x7f3cf0 targets 0x7f4100, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `beq` branch at 0x7f3cf8 targets 0x7f3d18, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x7f3d00 targets 0x7f3ee8, is taken when a0(?) == t0(=0x2), and falls through when a0(?) != t0(=0x2).
  The `beq` branch at 0x7f3d08 targets 0x7f3ee8, is taken when a0(?) == a5(=0x3), and falls through when a0(?) != a5(=0x3).
  The `beq` branch at 0x7f3d10 targets 0x7f3ee8, is taken when a0(?) == t3(=0x4), and falls through when a0(?) != t3(=0x4).
  The `bne` branch at 0x7f3d18 targets 0x7f40a8, is taken when a4(=one of 0x0, 0x1) != 0, and falls through when a4(=one of 0x0, 0x1) == 0.
  The `bne` branch at 0x7f3d24 targets 0x7f40a8, is taken when a4(=one of 0x0, 0x1) != 0, and falls through when a4(=one of 0x0, 0x1) == 0.
  The `bne` branch at 0x7f3d3c targets 0x7f3d80, is taken when a3(?) < 0x8f4 (unsigned), and falls through when a3(?) >= 0x8f4 (unsigned).
  The `bne` branch at 0x7f3d54 targets 0x7f3dc0, is taken when a3(?) < 0x8f5 (unsigned), and falls through when a3(?) >= 0x8f5 (unsigned).
  The `bne` branch at 0x7f3d5c targets 0x7f3ef0, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x7f3d64 targets 0x7f3fc8, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0x7f3d6c targets 0x7f3dd8, is taken when a0(?) != t0(=0x2), and falls through when a0(?) == t0(=0x2).
  The `beq` branch at 0x7f3d74 targets 0x7f3de4 and is always taken.
  The `bne` branch at 0x7f3d90 targets 0x7f3e80, is taken when a3(?) < 0x8e4 (unsigned), and falls through when a3(?) >= 0x8e4 (unsigned).
  The `beq` branch at 0x7f3d98 targets 0x7f3f18, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0x7f3da0 targets 0x7f3dd8, is taken when a0(?) != a5(=0x3), and falls through when a0(?) == a5(=0x3).
  The `beq` branch at 0x7f3da8 targets 0x7f3de4 and is always taken.
  The `bne` branch at 0x7f3db0 targets 0x7f40d0, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x7f3db8 targets 0x7f3dd8, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x7f3dc0 targets 0x7f3ee0, is taken when a0(?) == t0(=0x2), and falls through when a0(?) != t0(=0x2).
  The `beq` branch at 0x7f3dc8 targets 0x7f3ee0, is taken when a0(?) == a5(=0x3), and falls through when a0(?) != a5(=0x3).
  The `beq` branch at 0x7f3dd0 targets 0x7f3ee0, is taken when a0(?) == t3(=0x4), and falls through when a0(?) != t3(=0x4).
  The `bne` branch at 0x7f3dd8 targets 0x7f40a8, is taken when a4(=one of 0x0, 0x1) != 0, and falls through when a4(=one of 0x0, 0x1) == 0.
  The `bne` branch at 0x7f3de4 targets 0x7f40a8, is taken when a4(=one of 0x0, 0x1) != 0, and falls through when a4(=one of 0x0, 0x1) == 0.
  The `bne` branch at 0x7f3dfc targets 0x7f3e44, is taken when a3(?) < 0x8f4 (unsigned), and falls through when a3(?) >= 0x8f4 (unsigned).
  The `bne` branch at 0x7f3e14 targets 0x7f3d00, is taken when a3(?) < 0x8f5 (unsigned), and falls through when a3(?) >= 0x8f5 (unsigned).
  The `bne` branch at 0x7f3e1c targets 0x7f3f60, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x7f3e2c targets 0x7f4038, is taken when a3(?) >= 0x90b (unsigned), and falls through when a3(?) < 0x90b (unsigned).
  The `bne` branch at 0x7f3e34 targets 0x7f3d18, is taken when a0(?) != t0(=0x2), and falls through when a0(?) == t0(=0x2).
  The `beq` branch at 0x7f3e3c targets 0x7f3d24 and is always taken.
  The `bne` branch at 0x7f3e54 targets 0x7f3eb0, is taken when a3(?) < 0x8e4 (unsigned), and falls through when a3(?) >= 0x8e4 (unsigned).
  The `beq` branch at 0x7f3e5c targets 0x7f3f80, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0x7f3e64 targets 0x7f3d18, is taken when a0(?) != a5(=0x3), and falls through when a0(?) == a5(=0x3).
  The `beq` branch at 0x7f3e6c targets 0x7f3d24 and is always taken.
  The `bne` branch at 0x7f3e88 targets 0x7f3f38, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x7f3e90 targets 0x7f4008, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x7f3e98 targets 0x7f3ea8, is taken when a0(?) == a5(=0x3), and falls through when a0(?) != a5(=0x3).
  The `bne` branch at 0x7f3ea0 targets 0x7f3dd8, is taken when a0(?) != t3(=0x4), and falls through when a0(?) == t3(=0x4).
  The `beq` branch at 0x7f3ea8 targets 0x7f3de4 and is always taken.
  The `bne` branch at 0x7f3eb8 targets 0x7f3fa0, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x7f3ec0 targets 0x7f4078, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x7f3ec8 targets 0x7f3ed8, is taken when a0(?) == a5(=0x3), and falls through when a0(?) != a5(=0x3).
  The `bne` branch at 0x7f3ed0 targets 0x7f3d18, is taken when a0(?) != t3(=0x4), and falls through when a0(?) == t3(=0x4).
  The `beq` branch at 0x7f3ed8 targets 0x7f3d24 and is always taken.
  The `beq` branch at 0x7f3ee0 targets 0x7f3de4 and is always taken.
  The `beq` branch at 0x7f3ee8 targets 0x7f3d24 and is always taken.
  The `bne` branch at 0x7f3ef8 targets 0x7f3db0, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `bne` branch at 0x7f3f00 targets 0x7f3dc0, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0x7f3f08 targets 0x7f3dd8, is taken when a3(?) != t1(=0x904), and falls through when a3(?) == t1(=0x904).
  The `beq` branch at 0x7f3f10 targets 0x7f3dc0 and is always taken.
  The `bne` branch at 0x7f3f18 targets 0x7f3ff8, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x7f3f20 targets 0x7f3dc0, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x7f3f28 targets 0x7f3dd8, is taken when a3(?) != t2(=0x8f0), and falls through when a3(?) == t2(=0x8f0).
  The `beq` branch at 0x7f3f30 targets 0x7f3dc0 and is always taken.
  The `bne` branch at 0x7f3f38 targets 0x7f4020, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x7f3f40 targets 0x7f3dd8, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x7f3f48 targets 0x7f3f58, is taken when a0(?) == a5(=0x3), and falls through when a0(?) != a5(=0x3).
  The `bne` branch at 0x7f3f50 targets 0x7f3dd8, is taken when a0(?) != t3(=0x4), and falls through when a0(?) == t3(=0x4).
  The `beq` branch at 0x7f3f58 targets 0x7f3de4 and is always taken.
  The `bne` branch at 0x7f3f60 targets 0x7f3cf0, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0x7f3f68 targets 0x7f3d00, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x7f3f70 targets 0x7f3d18, is taken when a3(?) != t8(=0x904), and falls through when a3(?) == t8(=0x904).
  The `beq` branch at 0x7f3f78 targets 0x7f3d00 and is always taken.
  The `bne` branch at 0x7f3f80 targets 0x7f4068, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x7f3f88 targets 0x7f3d00, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x7f3f90 targets 0x7f3d18, is taken when a3(?) != at(=0x8f0), and falls through when a3(?) == at(=0x8f0).
  The `beq` branch at 0x7f3f98 targets 0x7f3d00 and is always taken.
  The `bne` branch at 0x7f3fa0 targets 0x7f4090, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `beq` branch at 0x7f3fa8 targets 0x7f3d18, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x7f3fb0 targets 0x7f3fc0, is taken when a0(?) == a5(=0x3), and falls through when a0(?) != a5(=0x3).
  The `bne` branch at 0x7f3fb8 targets 0x7f3d18, is taken when a0(?) != t3(=0x4), and falls through when a0(?) == t3(=0x4).
  The `beq` branch at 0x7f3fc0 targets 0x7f3d24 and is always taken.
  The `bne` branch at 0x7f3fc8 targets 0x7f40b8, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `beq` branch at 0x7f3fd0 targets 0x7f4110, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x7f3fd8 targets 0x7f3ff0, is taken when a0(?) == t0(=0x2), and falls through when a0(?) != t0(=0x2).
  The `beq` branch at 0x7f3fe0 targets 0x7f3ff0, is taken when a0(?) == a5(=0x3), and falls through when a0(?) != a5(=0x3).
  The `bne` branch at 0x7f3fe8 targets 0x7f3dd8, is taken when a0(?) != t3(=0x4), and falls through when a0(?) == t3(=0x4).
  The `beq` branch at 0x7f3ff0 targets 0x7f3de4 and is always taken.
  The `bne` branch at 0x7f3ff8 targets 0x7f3dd8, is taken when a3(?) != t9(=0x8e8), and falls through when a3(?) == t9(=0x8e8).
  The `beq` branch at 0x7f4000 targets 0x7f3dc0 and is always taken.
  The `bne` branch at 0x7f4008 targets 0x7f3dd8, is taken when a3(?) != ra(=0x8d4), and falls through when a3(?) == ra(=0x8d4).
  The `bne` branch at 0x7f4010 targets 0x7f3dd8, is taken when a0(?) != a5(=0x3), and falls through when a0(?) == a5(=0x3).
  The `beq` branch at 0x7f4018 targets 0x7f3de4 and is always taken.
  The `bne` branch at 0x7f4020 targets 0x7f3dd8, is taken when a3(?) != s0(=0x821), and falls through when a3(?) == s0(=0x821).
  The `bne` branch at 0x7f4028 targets 0x7f3dd8, is taken when a0(?) != v1(=0x1), and falls through when a0(?) == v1(=0x1).
  The `beq` branch at 0x7f4030 targets 0x7f3de4 and is always taken.
  The `bne` branch at 0x7f4038 targets 0x7f40e0, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x7f4040 targets 0x7f4120, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x7f4048 targets 0x7f4060, is taken when a0(?) == t0(=0x2), and falls through when a0(?) != t0(=0x2).
  The `beq` branch at 0x7f4050 targets 0x7f4060, is taken when a0(?) == a5(=0x3), and falls through when a0(?) != a5(=0x3).
  The `bne` branch at 0x7f4058 targets 0x7f3d18, is taken when a0(?) != t3(=0x4), and falls through when a0(?) == t3(=0x4).
  The `beq` branch at 0x7f4060 targets 0x7f3d24 and is always taken.
  The `bne` branch at 0x7f4068 targets 0x7f3d18, is taken when a3(?) != t9(=0x8e8), and falls through when a3(?) == t9(=0x8e8).
  The `beq` branch at 0x7f4070 targets 0x7f3d00 and is always taken.
  The `bne` branch at 0x7f4078 targets 0x7f3d18, is taken when a3(?) != ra(=0x8d4), and falls through when a3(?) == ra(=0x8d4).
  The `bne` branch at 0x7f4080 targets 0x7f3d18, is taken when a0(?) != a5(=0x3), and falls through when a0(?) == a5(=0x3).
  The `beq` branch at 0x7f4088 targets 0x7f3d24 and is always taken.
  The `bne` branch at 0x7f4090 targets 0x7f3d18, is taken when a3(?) != s0(=0x821), and falls through when a3(?) == s0(=0x821).
  The `bne` branch at 0x7f4098 targets 0x7f3d18, is taken when a0(?) != a1(=0x1), and falls through when a0(?) == a1(=0x1).
  The `beq` branch at 0x7f40a0 targets 0x7f3d24 and is always taken.
  The `bne` branch at 0x7f40b8 targets 0x7f3dd8, is taken when a3(?) != a2(=0x927), and falls through when a3(?) == a2(=0x927).
  The `bne` branch at 0x7f40c0 targets 0x7f3dd8, is taken when a0(?) != a3(=0x1), and falls through when a0(?) == a3(=0x1).
  The `beq` branch at 0x7f40c8 targets 0x7f3de4 and is always taken.
  The `bne` branch at 0x7f40d0 targets 0x7f3dd8, is taken when a3(?) != a6(=0x8f8), and falls through when a3(?) == a6(=0x8f8).
  The `beq` branch at 0x7f40d8 targets 0x7f3dc0 and is always taken.
  The `bne` branch at 0x7f40e4 targets 0x7f3d18, is taken when a3(?) != a7(=0x927), and falls through when a3(?) == a7(=0x927).
  The `bne` branch at 0x7f40ec targets 0x7f3d18, is taken when a0(?) != t1(=0x1), and falls through when a0(?) == t1(=0x1).
  The `beq` branch at 0x7f40f4 targets 0x7f3d24 and is always taken.
  The `bne` branch at 0x7f4100 targets 0x7f3d18, is taken when a3(?) != t2(=0x8f8), and falls through when a3(?) == t2(=0x8f8).
  The `beq` branch at 0x7f4108 targets 0x7f3d00 and is always taken.
  The `bne` branch at 0x7f4110 targets 0x7f3dd8, is taken when a3(?) != t8(=0x92b), and falls through when a3(?) == t8(=0x92b).
  The `beq` branch at 0x7f4118 targets 0x7f4028 and is always taken.
  The `bne` branch at 0x7f4120 targets 0x7f3d18, is taken when a3(?) != at(=0x92b), and falls through when a3(?) == at(=0x92b).
  The `beq` branch at 0x7f4128 targets 0x7f4098 and is always taken.
  The return at 0x7f40b0 has v0 = ?.
  The instructions from 0x7f3d7c to 0x7f3d7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x7f3e74 to 0x7f3e7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x7f40fc to 0x7f40fc are not reached by any path from the entry, and their branches are not listed.

- `insertStaticStateValue` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x7f55c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x7f55c0-0x7f582c (620 bytes).
  It occupies 620 bytes.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d58, including `lw` at 0x7f55fc, `lw` at 0x7f565c, `lw` at 0x7f5778.
  The `sw` at 0x7f5658 stores 4 bytes to [a0+290136] +0x0.
  The `lw` at 0x7f5664 loads 4 bytes from a0 (arg0 at entry) +0x46d5c.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x46d58, including `sw` at 0x7f5670, `sw` at 0x7f5788.
  The `lw` at 0x7f5674 loads 4 bytes from a0 (arg0 at entry) +0x36f44.
  The `lw` at 0x7f5678 loads 4 bytes from a0 (arg0 at entry) +0x46d54.
  The `lw` at 0x7f5684 loads 4 bytes from a0 (arg0 at entry) +0x36f5c.
  The `lw` at 0x7f5688 loads 4 bytes from [a0+225116] +0x24.
  The `ld` at 0x7f568c loads 8 bytes from [a0+225116] +0x28.
  The `lw` at 0x7f56a0 loads 4 bytes from a0 (arg0 at entry) +0x46e3c.
  17 such `lw` accesses load 4 bytes from ?, including `lw` at 0x7f56d4, `lw` at 0x7f56f8, `lw` at 0x7f5700.
  17 such `sw` accesses store 4 bytes to ?, including `sw` at 0x7f56e0, `sw` at 0x7f56fc, `sw` at 0x7f5704.
  The `lbu` at 0x7f57cc loads 1 byte from ret(getenv) +0x0.
  The `bgezall` at 0x7f5614 calls insertStaticStateValueInHW [0x7f5380] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x7f57b8 calls getenv with a0=0xb76fd8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bltz` branch at 0x7f55f8 targets 0x7f57ac, is taken when v0(=[0xb96da8]) < 0 (signed), and falls through when v0(=[0xb96da8]) >= 0 (signed).
  The `beq` branch at 0x7f5600 targets 0x7f5644, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x7f5620 targets 0x7f5644, is taken when v0(=ret(insertStaticStateValueInHW)) == 0, and falls through when v0(=ret(insertStaticStateValueInHW)) != 0.
  The `bne` branch at 0x7f5680 targets 0x7f56a0, is taken when a0(=[a0+290140]) != a1(=[a0+225092]), and falls through when a0(=[a0+290140]) == a1(=[a0+225092]).
  The `beq` branch at 0x7f5698 targets 0x7f56ac and is always taken.
  The `beq` branch at 0x7f56ac targets 0x7f57f4, is taken when s0(=a2) == 0, and falls through when s0(=a2) != 0.
  The `beq` branch at 0x7f56c4 targets 0x7f56e4, is taken when (s0(=a2) & 0x3) == 0, and falls through when (s0(=a2) & 0x3) != 0.
  The `bne` branch at 0x7f56dc targets 0x7f56cc, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0x7f56e4 targets 0x7f5778, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x7f56f0 targets 0x7f5808, is taken when v0(?) < 0x2 (signed), and falls through when v0(?) >= 0x2 (signed).
  The `beq` branch at 0x7f5740 targets 0x7f57a4, is taken when a1(?) == at(=((a2 << 0x2) + a3)-16), and falls through when a1(?) != at(=((a2 << 0x2) + a3)-16).
  The `bne` branch at 0x7f576c targets 0x7f571c, is taken when a1(?) != at(=((a2 << 0x2) + a3)-16), and falls through when a1(?) == at(=((a2 << 0x2) + a3)-16).
  The `beq` branch at 0x7f57a4 targets 0x7f5774 and is always taken.
  The `beq` branch at 0x7f57c4 targets 0x7f57e4, is taken when v0(=ret(getenv)) == 0, and falls through when v0(=ret(getenv)) != 0.
  The `beq` branch at 0x7f57d0 targets 0x7f5800, is taken when v1(=[ret(getenv)]:1) == at(=0x79), and falls through when v1(=[ret(getenv)]:1) != at(=0x79).
  The `beq` branch at 0x7f57d8 targets 0x7f5800, is taken when v1(=[ret(getenv)]:1) == a1(=0x59), and falls through when v1(=[ret(getenv)]:1) != a1(=0x59).
  The `beq` branch at 0x7f57e0 targets 0x7f5800, is taken when v1(=[ret(getenv)]:1) == a0(=0x31), and falls through when v1(=[ret(getenv)]:1) != a0(=0x31).
  The `beq` branch at 0x7f57ec targets 0x7f5600 and is always taken.
  The `beq` branch at 0x7f57f4 targets 0x7f577c and is always taken.
  The `beq` branch at 0x7f5800 targets 0x7f57e8 and is always taken.
  The `beq` branch at 0x7f5824 targets 0x7f5778 and is always taken.
  The return at 0x7f563c has v0 = ret(insertStaticStateValueInHW).
  The return at 0x7f579c has v0 = ?.
  The instructions from 0x7f57fc to 0x7f57fc are not reached by any path from the entry, and their branches are not listed.

- `initAOS` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x7f5840 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x7f5840-0x7f6300 (2752 bytes).
  It occupies 2752 bytes.
  5 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x1c, including `lw` at 0x7f5844, `lw` at 0x7f59c8, `lw` at 0x7f59fc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x3b578, including `lw` at 0x7f5878, `lw` at 0x7f590c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d5c, including `lw` at 0x7f5898, `lw` at 0x7f58d4.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d58, including `lw` at 0x7f589c, `lw` at 0x7f58d8.
  The `lw` at 0x7f58f0 loads 4 bytes from a0 (arg0 at entry) +0xdf0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x393f0, including `lw` at 0x7f5918, `lw` at 0x7f5990, `lw` at 0x7f5e74.
  60 such `sw` accesses store 4 bytes to ?, including `sw` at 0x7f5968, `sw` at 0x7f5980, `sw` at 0x7f5988.
  26 such `lw` accesses load 4 bytes from ?, including `lw` at 0x7f59a0, `lw` at 0x7f59ac, `lw` at 0x7f59bc.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x14, including `lw` at 0x7f59b0, `lw` at 0x7f5e94.
  2 such `ld` accesses load 8 bytes from [a1+28] +0x18, including `ld` at 0x7f59d8, `ld` at 0x7f5ec0.
  2 such `lw` accesses load 4 bytes from [a1+28] +0x38, including `lw` at 0x7f5a14, `lw` at 0x7f5ef0.
  4 such `sh` accesses store 2 bytes to ?, including `sh` at 0x7f5a34, `sh` at 0x7f5c04, `sh` at 0x7f5f10.
  2 such `lw` accesses load 4 bytes from table(0x3ad50) +0x0, including `lw` at 0x7f5bd0, `lw` at 0x7f608c.
  4 such `lw` accesses load 4 bytes from table(0x3ad30) +0x0, including `lw` at 0x7f5bfc, `lw` at 0x7f5c0c, `lw` at 0x7f60c0.
  The `lw` at 0x7f5d0c loads 4 bytes from a1 (arg1 at entry) +0x18.
  The `lw` at 0x7f5d10 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x7f62fc loads 4 bytes from [a0+243064] +0x0.
  The `jalr` at 0x7f588c calls __R300UpdateDeferredState [0x784700] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x7f58c8 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x7f5bcc calls insertStaticStateValue [0x7f55c0] with a0=a0 at entry (arg0), a1=?, a2=0x4, a3=entry(0x3ad50), a4=0x40000, a6=a2 at entry (arg2).
  The `bgezall` at 0x7f6088 calls insertStaticStateValue [0x7f55c0] with a0=a0 at entry (arg0), a1=?, a2=0x4, a3=entry(0x3ad50).
  The `beq` branch at 0x7f5868 targets 0x7f5950, is taken when at(=[a1+28]) == 0, and falls through when at(=[a1+28]) != 0.
  The `beq` branch at 0x7f5880 targets 0x7f5950, is taken when v1(=[a0+243064]) == 0, and falls through when v1(=[a0+243064]) != 0.
  The `beq` branch at 0x7f58bc targets 0x7f58f0, is taken when a0(?) >= 0x10 (unsigned), and falls through when a0(?) < 0x10 (unsigned).
  The `bne` branch at 0x7f58e8 targets 0x7f58c8, is taken when a2(?) < 0x10 (unsigned), and falls through when a2(?) >= 0x10 (unsigned).
  The `beq` branch at 0x7f5914 targets 0x7f5e10, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x7f591c targets 0x7f5d0c, is taken when a0(=[a0+234480]) == 0, and falls through when a0(=[a0+234480]) != 0.
  The `beq` branch at 0x7f5948 targets 0x7f59ac and is always taken.
  The `beq` branch at 0x7f5970 targets 0x7f5b88, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0x7f59a4 targets 0x7f5d0c, is taken when s3(?) >= t0(=[a0+234480]) (unsigned), and falls through when s3(?) < t0(=[a0+234480]) (unsigned).
  The `beq` branch at 0x7f59d0 targets 0x7f5b98, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x7f5a30 targets 0x7f5ad8, is taken when s1(?) == v1(=0x1), and falls through when s1(?) != v1(=0x1).
  The `beq` branch at 0x7f5a3c targets 0x7f5ae8, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `bne` branch at 0x7f5ac0 targets 0x7f5964, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `beq` branch at 0x7f5ad0 targets 0x7f596c and is always taken.
  The `beq` branch at 0x7f5ad8 targets 0x7f5a3c, is taken when a1(?) == t0(=0x5), and falls through when a1(?) != t0(=0x5).
  The `beq` branch at 0x7f5ae0 targets 0x7f5a38 and is always taken.
  The `beq` branch at 0x7f5b50 targets 0x7f5b64, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x7f5b5c targets 0x7f5b6c and is always taken.
  The `beq` branch at 0x7f5b6c targets 0x7f5d00, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0x7f5b80 targets 0x7f598c and is always taken.
  The `beq` branch at 0x7f5b90 targets 0x7f5984 and is always taken.
  The `beq` branch at 0x7f5bf0 targets 0x7f6280, is taken when v0(=ret(insertStaticStateValue)) == 0, and falls through when v0(=ret(insertStaticStateValue)) != 0.
  The `beq` branch at 0x7f5c00 targets 0x7f5d4c, is taken when s1(?) == t0(=0x1), and falls through when s1(?) != t0(=0x1).
  The `beq` branch at 0x7f5c30 targets 0x7f5d60, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x7f5cb8 targets 0x7f5ccc, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x7f5cc4 targets 0x7f5cd8 and is always taken.
  The `beq` branch at 0x7f5cdc targets 0x7f5e00, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x7f5cf4 targets 0x7f598c and is always taken.
  The `beq` branch at 0x7f5d04 targets 0x7f5b7c and is always taken.
  The `beq` branch at 0x7f5d50 targets 0x7f5c0c, is taken when t2(?) == t3(=0x5), and falls through when t2(?) != t3(=0x5).
  The `beq` branch at 0x7f5d58 targets 0x7f5c08 and is always taken.
  The `beq` branch at 0x7f5dc8 targets 0x7f5ddc, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x7f5dd4 targets 0x7f5de4 and is always taken.
  The `beq` branch at 0x7f5de4 targets 0x7f6274, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x7f5df8 targets 0x7f598c and is always taken.
  The `beq` branch at 0x7f5e08 targets 0x7f5cf0 and is always taken.
  The `beq` branch at 0x7f5e18 targets 0x7f5d0c, is taken when a0(=[a0+234480]) == 0, and falls through when a0(=[a0+234480]) != 0.
  The `beq` branch at 0x7f5e40 targets 0x7f62f4 and is always taken.
  The `beq` branch at 0x7f5e50 targets 0x7f604c, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0x7f5e88 targets 0x7f5d0c, is taken when s2(?) >= a7(=[a0+234480]) (unsigned), and falls through when s2(?) < a7(=[a0+234480]) (unsigned).
  The `beq` branch at 0x7f5eb4 targets 0x7f605c, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x7f5f18 targets 0x7f5fac, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x7f5f94 targets 0x7f5e48, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `beq` branch at 0x7f5fa4 targets 0x7f5e50 and is always taken.
  The `beq` branch at 0x7f6014 targets 0x7f6028, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x7f6020 targets 0x7f6030 and is always taken.
  The `beq` branch at 0x7f6030 targets 0x7f61b0, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0x7f6044 targets 0x7f5e70 and is always taken.
  The `beq` branch at 0x7f6054 targets 0x7f5e64 and is always taken.
  The `beq` branch at 0x7f60ac targets 0x7f62c0, is taken when v0(=ret(insertStaticStateValue)) == 0, and falls through when v0(=ret(insertStaticStateValue)) != 0.
  The `beq` branch at 0x7f60ec targets 0x7f61c0, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x7f6168 targets 0x7f6180, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x7f6174 targets 0x7f618c and is always taken.
  The `beq` branch at 0x7f618c targets 0x7f6264, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x7f61a8 targets 0x7f5e70 and is always taken.
  The `beq` branch at 0x7f61b4 targets 0x7f6040 and is always taken.
  The `beq` branch at 0x7f6228 targets 0x7f6240, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x7f6234 targets 0x7f6248 and is always taken.
  The `beq` branch at 0x7f6248 targets 0x7f62b4, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x7f625c targets 0x7f5e70 and is always taken.
  The `beq` branch at 0x7f626c targets 0x7f61a0 and is always taken.
  The `beq` branch at 0x7f6278 targets 0x7f5df4 and is always taken.
  The `beq` branch at 0x7f62b8 targets 0x7f6258 and is always taken.
  The `beq` branch at 0x7f62f8 targets 0x7f5e94 and is always taken.
  The return at 0x7f595c has v0 = 0x0.
  The return at 0x7f5d44 has v0 = ?.
  The return at 0x7f62ac has v0 = 0x0.
  The return at 0x7f62ec has v0 = 0x0.
  The instructions from 0x7f5cfc to 0x7f5cfc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x7f617c to 0x7f617c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x7f61bc to 0x7f61bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x7f623c to 0x7f623c are not reached by any path from the entry, and their branches are not listed.

- `updateAOS` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x7f6300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x7f6300-0x7f641c (284 bytes).
  It occupies 284 bytes.
  The `lw` at 0x7f6304 loads 4 bytes from a1 (arg1 at entry) +0x1c.
  The `lw` at 0x7f6334 loads 4 bytes from a0 (arg0 at entry) +0x3b578.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x393f0, including `lw` at 0x7f6340, `lw` at 0x7f63fc.
  The `lw` at 0x7f635c loads 4 bytes from a1 (arg1 at entry) +0x14.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x7f6360, `lw` at 0x7f636c, `lw` at 0x7f638c.
  The `lw` at 0x7f63f0 loads 4 bytes from table(0x3ad50) +0x0.
  The `sw` at 0x7f63f8 stores 4 bytes to ?.
  The `bgezall` at 0x7f63ec calls insertStaticStateValue [0x7f55c0] with a0=a0 at entry (arg0), a1=?, a2=0x4, a3=entry(0x3ad50), a4=0x40000, a5=[a0+234480], a6=[a1+20].
  The `beq` branch at 0x7f6328 targets 0x7f6398, is taken when at(=[a1+28]) == 0, and falls through when at(=[a1+28]) != 0.
  The `beq` branch at 0x7f6338 targets 0x7f6398, is taken when a4(=[a0+243064]) == 0, and falls through when a4(=[a0+243064]) != 0.
  The `beq` branch at 0x7f6348 targets 0x7f6398, is taken when a5(=[a0+234480]) == 0, and falls through when a5(=[a0+234480]) != 0.
  The `beq` branch at 0x7f6380 targets 0x7f63c0, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0x7f6390 targets 0x7f6360, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x7f640c targets 0x7f6358, is taken when s1(?) < a5(=[a0+234480]) (unsigned), and falls through when s1(?) >= a5(=[a0+234480]) (unsigned).
  The `beq` branch at 0x7f6414 targets 0x7f639c and is always taken.
  The return at 0x7f63b0 has v0 = one of ?, ret(insertStaticStateValue).
  The instructions from 0x7f63b8 to 0x7f63bc are not reached by any path from the entry, and their branches are not listed.

- `__dePrimitive` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x7f6440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x7f6440-0x7f708c (3148 bytes).
  It occupies 3148 bytes.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d5c, including `lw` at 0x7f6478, `lw` at 0x7f6504, `lw` at 0x7f6628.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d58, including `lw` at 0x7f6488, `lw` at 0x7f6500, `lw` at 0x7f6aac.
  The `lw` at 0x7f649c loads 4 bytes from table(0xb83448) +0x0.
  The `lw` at 0x7f64c4 loads 4 bytes from a0 (arg0 at entry) +0x46d64.
  The `sw` at 0x7f653c stores 4 bytes to [a0+290136] +0x0.
  2 such `sw` accesses store 4 bytes to [a0+290136] +0x4, including `sw` at 0x7f6548, `sw` at 0x7f6f48.
  53 such `lw` accesses load 4 bytes from ?, including `lw` at 0x7f6578, `lw` at 0x7f659c, `lw` at 0x7f65a4.
  56 such `sw` accesses store 4 bytes to ?, including `sw` at 0x7f6584, `sw` at 0x7f65a0, `sw` at 0x7f65a8.
  6 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x46d58, including `sw` at 0x7f6640, `sw` at 0x7f6a8c, `sw` at 0x7f6ad8.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x607c, including `lw` at 0x7f675c, `lw` at 0x7f6ba8, `lw` at 0x7f6ddc.
  The `lhu` at 0x7f678c loads 2 bytes from ?.
  The `sh` at 0x7f67a0 stores 2 bytes to ?.
  3 such `swl` accesses store 4 bytes to ?, including `swl` at 0x7f67c0, `swl` at 0x7f67e4, `swl` at 0x7f67fc.
  3 such `swr` accesses store 4 bytes to ?, including `swr` at 0x7f67cc, `swr` at 0x7f67e8, `swr` at 0x7f6808.
  The `lw` at 0x7f6964 loads 4 bytes from table(0xb76ff0) +0x0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46e98, including `lw` at 0x7f6994, `lw` at 0x7f6ae0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46e9c, including `lw` at 0x7f6998, `lw` at 0x7f6aec.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46ea0, including `lw` at 0x7f699c, `lw` at 0x7f6af8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46ea4, including `lw` at 0x7f69a0, `lw` at 0x7f6b04.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46ea8, including `lw` at 0x7f69a4, `lw` at 0x7f6b10.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46eac, including `lw` at 0x7f69a8, `lw` at 0x7f6b1c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46eb0, including `lw` at 0x7f69ac, `lw` at 0x7f6b28.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46eb4, including `lw` at 0x7f69b0, `lw` at 0x7f6b34.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46eb8, including `lw` at 0x7f69b4, `lw` at 0x7f6b40.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46ec0, including `lw` at 0x7f69b8, `lw` at 0x7f6b58.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46ebc, including `lw` at 0x7f69bc, `lw` at 0x7f6b4c.
  The `lw` at 0x7f69c0 loads 4 bytes from [a0+290496] +0x0.
  The `lw` at 0x7f69c4 loads 4 bytes from [a0+290492] +0x0.
  The `lw` at 0x7f69c8 loads 4 bytes from [a0+290488] +0x0.
  The `lw` at 0x7f69cc loads 4 bytes from [a0+290484] +0x0.
  The `lw` at 0x7f69d0 loads 4 bytes from [a0+290480] +0x0.
  The `lw` at 0x7f69d4 loads 4 bytes from [a0+290476] +0x0.
  The `lw` at 0x7f69d8 loads 4 bytes from [a0+290472] +0x0.
  The `lw` at 0x7f69dc loads 4 bytes from [a0+290468] +0x0.
  The `lw` at 0x7f69e0 loads 4 bytes from [a0+290464] +0x0.
  The `lw` at 0x7f69e4 loads 4 bytes from [a0+290460] +0x0.
  The `lw` at 0x7f69e8 loads 4 bytes from [a0+290456] +0x0.
  The `lh` at 0x7f6a44 loads 2 bytes from ?.
  The `sw` at 0x7f6ae8 stores 4 bytes to [a0+290456] +0x0.
  The `sw` at 0x7f6af4 stores 4 bytes to [a0+290460] +0x0.
  The `sw` at 0x7f6b00 stores 4 bytes to [a0+290464] +0x0.
  The `sw` at 0x7f6b0c stores 4 bytes to [a0+290468] +0x0.
  The `sw` at 0x7f6b18 stores 4 bytes to [a0+290472] +0x0.
  The `sw` at 0x7f6b24 stores 4 bytes to [a0+290476] +0x0.
  The `sw` at 0x7f6b30 stores 4 bytes to [a0+290480] +0x0.
  The `sw` at 0x7f6b3c stores 4 bytes to [a0+290484] +0x0.
  The `sw` at 0x7f6b48 stores 4 bytes to [a0+290488] +0x0.
  The `sw` at 0x7f6b54 stores 4 bytes to [a0+290492] +0x0.
  The `sw` at 0x7f6b60 stores 4 bytes to [a0+290496] +0x0.
  2 such `lw` accesses load 4 bytes from ([a0+24700] + (a2 << 0x2)) +0x0, including `lw` at 0x7f6de8, `lw` at 0x7f6f30.
  The `jalr` at 0x7f64e4 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=a3 at entry (arg3).
  The `bgezall` at 0x7f64f8 calls updateAOS [0x7f6300] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x7f6a90 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=0xffffffffc0003400.
  The `bgezall` at 0x7f6aa4 calls updateAOS [0x7f6300] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x7f6edc calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x7f6ef0 calls updateAOS [0x7f6300] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x7f6f94 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x7f6fa8 calls updateAOS [0x7f6300] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x7f7014 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=a2 at entry (arg2), a3=?.
  The `bgezall` at 0x7f7028 calls updateAOS [0x7f6300] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `beq` branch at 0x7f64a4 targets 0x7f6ccc, is taken when a5 == 0, and falls through when a5 != 0.
  The `beq` branch at 0x7f64bc targets 0x7f6650, is taken when v0(?) >= a4(?) (unsigned), and falls through when v0(?) < a4(?) (unsigned).
  The `beq` branch at 0x7f64d0 targets 0x7f664c, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bne` branch at 0x7f6520 targets 0x7f6f90, is taken when ra(?) < at(=entry(0xb83448)+2) (unsigned), and falls through when ra(?) >= at(=entry(0xb83448)+2) (unsigned).
  The `beq` branch at 0x7f6544 targets 0x7f6fd8, is taken when s7(=entry(0xb83448)) == 0, and falls through when s7(=entry(0xb83448)) != 0.
  The `beq` branch at 0x7f6568 targets 0x7f6588, is taken when (s7(=entry(0xb83448)) & 0x3) == 0, and falls through when (s7(=entry(0xb83448)) & 0x3) != 0.
  The `bne` branch at 0x7f6580 targets 0x7f6570, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x7f658c targets 0x7f6624, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x7f6594 targets 0x7f7040, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x7f65e8 targets 0x7f6d98, is taken when a1(?) == at(=((entry(0xb83448) << 0x2) + a0)+262128), and falls through when a1(?) != at(=((entry(0xb83448) << 0x2) + a0)+262128).
  The `bne` branch at 0x7f6614 targets 0x7f65c4, is taken when a1(?) != at(=((entry(0xb83448) << 0x2) + a0)+262128), and falls through when a1(?) == at(=((entry(0xb83448) << 0x2) + a0)+262128).
  The `beq` branch at 0x7f6644 targets 0x7f6650 and is always taken.
  The `beq` branch at 0x7f6650 targets 0x7f6da0, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `beq` branch at 0x7f665c targets 0x7f6d80, is taken when a2 == v1(=0x2), and falls through when a2 != v1(=0x2).
  The `beq` branch at 0x7f6664 targets 0x7f6f68, is taken when a2 == v0(=0x3), and falls through when a2 != v0(=0x3).
  The `beq` branch at 0x7f666c targets 0x7f6f80, is taken when a2 == a6(=0x5), and falls through when a2 != a6(=0x5).
  The `beq` branch at 0x7f6674 targets 0x7f6d70, is taken when a2 == t0(=0x6), and falls through when a2 != t0(=0x6).
  The `beq` branch at 0x7f667c targets 0x7f6d70, is taken when a2 == t2(=0x9), and falls through when a2 != t2(=0x9).
  The `beq` branch at 0x7f6684 targets 0x7f6fc8, is taken when a2 == ra(=0x8), and falls through when a2 != ra(=0x8).
  The `beq` branch at 0x7f6694 targets 0x7f6fe4, is taken when s2(=a4) == 0, and falls through when s2(=a4) != 0.
  The `beq` branch at 0x7f671c targets 0x7f6848 and is always taken.
  The `beq` branch at 0x7f6724 targets 0x7f6cb0, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x7f673c targets 0x7f6b94, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x7f679c targets 0x7f680c, is taken when s4(?) == 0, and falls through when s4(?) != 0.
  The `beq` branch at 0x7f67ac targets 0x7f67d0, is taken when (s4(?) & 0x1) == 0, and falls through when (s4(?) & 0x1) != 0.
  The `beq` branch at 0x7f67d4 targets 0x7f680c, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x7f6804 targets 0x7f67dc, is taken when t2(?) != t8(?), and falls through when t2(?) == t8(?).
  The `beq` branch at 0x7f6830 targets 0x7f6ad0, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x7f6838 targets 0x7f6844, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x7f6844 targets 0x7f6ad0, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `bne` branch at 0x7f6850 targets 0x7f6a80, is taken when a5(?) < at(?) (unsigned), and falls through when a5(?) >= at(?) (unsigned).
  The `beq` branch at 0x7f6858 targets 0x7f6944, is taken when ra(=one of 0x0, 0x1) == 0, and falls through when ra(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x7f6870 targets 0x7f692c, is taken when s7(=entry(0xb83448)) == 0, and falls through when s7(=entry(0xb83448)) != 0.
  The `beq` branch at 0x7f687c targets 0x7f6898, is taken when (s7(=entry(0xb83448)) & 0x3) == 0, and falls through when (s7(=entry(0xb83448)) & 0x3) != 0.
  The `bne` branch at 0x7f6890 targets 0x7f6880, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x7f689c targets 0x7f692c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x7f68a4 targets 0x7f7068, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x7f68f4 targets 0x7f6a78, is taken when a1(?) == at(?), and falls through when a1(?) != at(?).
  The `bne` branch at 0x7f6920 targets 0x7f68d0, is taken when a1(?) != at(?), and falls through when a1(?) == at(?).
  The `beq` branch at 0x7f6944 targets 0x7f6970, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x7f695c targets 0x7f6724, is taken when v1(?) >= 0xa (unsigned), and falls through when v1(?) < 0xa (unsigned).
  The `beq` branch at 0x7f6980 targets 0x7f6734, is taken when a0(=0xfffc) >= s2(?) (unsigned), and falls through when a0(=0xfffc) < s2(?) (unsigned).
  The `bne` branch at 0x7f6988 targets 0x7f6a24, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x7f6a38 targets 0x7f6a70, is taken when a1(=a6) == 0, and falls through when a1(=a6) != 0.
  The `bne` branch at 0x7f6a68 targets 0x7f6a40, is taken when v0(?) != s6(=table(0x40000)), and falls through when v0(?) == s6(=table(0x40000)).
  The `beq` branch at 0x7f6a70 targets 0x7f6738 and is always taken.
  The `beq` branch at 0x7f6a78 targets 0x7f6928 and is always taken.
  The `beq` branch at 0x7f6ac8 targets 0x7f685c and is always taken.
  The `beq` branch at 0x7f6ad4 targets 0x7f6b64, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x7f6bd0 targets 0x7f6ce4, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x7f6be0 targets 0x7f6c5c, is taken when s4(?) == 0, and falls through when s4(?) != 0.
  The `beq` branch at 0x7f6be8 targets 0x7f6c14, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `bne` branch at 0x7f6c08 targets 0x7f6bf0, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `beq` branch at 0x7f6c14 targets 0x7f6c5c, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x7f6c54 targets 0x7f6c1c, is taken when a4(?) != t8(?), and falls through when a4(?) == t8(?).
  The `beq` branch at 0x7f6c78 targets 0x7f682c, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `bne` branch at 0x7f6c80 targets 0x7f682c, is taken when s2(?) != v1(?), and falls through when s2(?) == v1(?).
  The `beq` branch at 0x7f6c94 targets 0x7f682c and is always taken.
  The `bne` branch at 0x7f6ca8 targets 0x7f6730, is taken when v1(?) < s2(?) (unsigned), and falls through when v1(?) >= s2(?) (unsigned).
  The `beq` branch at 0x7f6cb8 targets 0x7f672c, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x7f6cc4 targets 0x7f672c and is always taken.
  The `beq` branch at 0x7f6cd0 targets 0x7f6d58, is taken when v0(?) >= 0x2 (unsigned), and falls through when v0(?) < 0x2 (unsigned).
  The `beq` branch at 0x7f6cdc targets 0x7f64c4 and is always taken.
  The `beq` branch at 0x7f6cec targets 0x7f682c and is always taken.
  The `beq` branch at 0x7f6cf8 targets 0x7f6ca4 and is always taken.
  The `beq` branch at 0x7f6d08 targets 0x7f6ca4 and is always taken.
  The `beq` branch at 0x7f6d14 targets 0x7f6ca4 and is always taken.
  The `beq` branch at 0x7f6d50 targets 0x7f6ca4 and is always taken.
  The `beq` branch at 0x7f6d60 targets 0x7f6ecc, is taken when a2(=0xfffc) >= a4 (unsigned), and falls through when a2(=0xfffc) < a4 (unsigned).
  The `beq` branch at 0x7f6d68 targets 0x7f6654 and is always taken.
  The `beq` branch at 0x7f6d78 targets 0x7f6694 and is always taken.
  The `beq` branch at 0x7f6d90 targets 0x7f6694 and is always taken.
  The `beq` branch at 0x7f6d98 targets 0x7f6620 and is always taken.
  The `bne` branch at 0x7f6da8 targets 0x7f6654, is taken when a7(=0xfffc) < s2(=a4) (unsigned), and falls through when a7(=0xfffc) >= s2(=a4) (unsigned).
  The `beq` branch at 0x7f6db0 targets 0x7f6ecc, is taken when s3(=a5) == 0, and falls through when s3(=a5) != 0.
  The `bne` branch at 0x7f6dbc targets 0x7f7010, is taken when v0(?) < a4(?) (unsigned), and falls through when v0(?) >= a4(?) (unsigned).
  The `beq` branch at 0x7f6e08 targets 0x7f6e9c, is taken when s4(?) == 0, and falls through when s4(?) != 0.
  The `beq` branch at 0x7f6e28 targets 0x7f6e50, is taken when (s4(?) & 0x3) == 0, and falls through when (s4(?) & 0x3) != 0.
  The `bne` branch at 0x7f6e48 targets 0x7f6e30, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x7f6e54 targets 0x7f6e9c, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `bne` branch at 0x7f6e94 targets 0x7f6e5c, is taken when s3(?) != a1(?), and falls through when s3(?) == a1(?).
  The `beq` branch at 0x7f6ed0 targets 0x7f6f00, is taken when v0(?) >= 0x2 (unsigned), and falls through when v0(?) < 0x2 (unsigned).
  The `beq` branch at 0x7f6f70 targets 0x7f6694 and is always taken.
  The `beq` branch at 0x7f6f88 targets 0x7f6694 and is always taken.
  The `beq` branch at 0x7f6fc0 targets 0x7f6528 and is always taken.
  The `beq` branch at 0x7f6fd0 targets 0x7f6694 and is always taken.
  The `beq` branch at 0x7f6fdc targets 0x7f6624 and is always taken.
  The `beq` branch at 0x7f7030 targets 0x7f6dc0 and is always taken.
  The `beq` branch at 0x7f7060 targets 0x7f6624 and is always taken.
  The `beq` branch at 0x7f7084 targets 0x7f692c and is always taken.
  The return at 0x7f6b8c has v0 = one of ?, sp-320.
  The return at 0x7f6ec4 has v0 = one of 0x0, ?.
  The return at 0x7f6f60 has v0 = (([([a0+24700] + (a2 << 0x2))] | (a4 << 0x10)) | 0x20).
  The return at 0x7f7008 has v0 = 0x3.
  The instructions from 0x7f6f78 to 0x7f6f7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x7f7038 to 0x7f703c are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x7f6968 uses the jump table at 0xb76ff0 with targets 0x7f6cf4, 0x7f6cf4, 0x7f6c9c, 0x7f6cf4, 0x7f6d1c, 0x7f6cf4, 0x7f6d10, 0x7f6d00, 0x7f6cf4, 0x7f6d10.
  The indirect jump at 0x7f6968 uses the jump table at 0xb76ff0 with targets 0x7f6cf4, 0x7f6cf4, 0x7f6c9c, 0x7f6cf4, 0x7f6d1c, 0x7f6cf4, 0x7f6d10, 0x7f6d00, 0x7f6cf4, 0x7f6d10.
  The indirect jump at 0x7f6968 uses the jump table at 0xb76ff0 with targets 0x7f6cf4, 0x7f6cf4, 0x7f6c9c, 0x7f6cf4, 0x7f6d1c, 0x7f6cf4, 0x7f6d10, 0x7f6d00, 0x7f6cf4, 0x7f6d10.
  The indirect jump at 0x7f6968 uses the jump table at 0xb76ff0 with targets 0x7f6cf4, 0x7f6cf4, 0x7f6c9c, 0x7f6cf4, 0x7f6d1c, 0x7f6cf4, 0x7f6d10, 0x7f6d00, 0x7f6cf4, 0x7f6d10.
  The indirect jump at 0x7f6968 uses the jump table at 0xb76ff0 with targets 0x7f6cf4, 0x7f6cf4, 0x7f6c9c, 0x7f6cf4, 0x7f6d1c, 0x7f6cf4, 0x7f6d10, 0x7f6d00, 0x7f6cf4, 0x7f6d10.
  The indirect jump at 0x7f6968 uses the jump table at 0xb76ff0 with targets 0x7f6cf4, 0x7f6cf4, 0x7f6c9c, 0x7f6cf4, 0x7f6d1c, 0x7f6cf4, 0x7f6d10, 0x7f6d00, 0x7f6cf4, 0x7f6d10.
  The indirect jump at 0x7f6968 uses the jump table at 0xb76ff0 with targets 0x7f6cf4, 0x7f6cf4, 0x7f6c9c, 0x7f6cf4, 0x7f6d1c, 0x7f6cf4, 0x7f6d10, 0x7f6d00, 0x7f6cf4, 0x7f6d10.

- `GetOcclusionQuery` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x817280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x817280-0x8174f4 (628 bytes).
  It occupies 628 bytes.
  The `lw` at 0x817280 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lw` at 0x817284 loads 4 bytes from [a1+8] +0x30.
  The `lw` at 0x81728c loads 4 bytes from [a1+8] +0x34.
  2 such `lw` accesses load 4 bytes from [a1+8] +0x28, including `lw` at 0x8172b0, `lw` at 0x817368.
  4 such `lw` accesses load 4 bytes from [a1+8] +0x2c, including `lw` at 0x8172c4, `lw` at 0x817310, `lw` at 0x81733c.
  The `lw` at 0x8172d0 loads 4 bytes from [[a1+8]+40] +0x0.
  The `lw` at 0x8172e0 loads 4 bytes from [[a1+8]+44] +0x0.
  38 such `lw` accesses load 4 bytes from ?, including `lw` at 0x817300, `lw` at 0x817318, `lw` at 0x817330.
  The `beq` branch at 0x817290 targets 0x8172a8 and is always taken.
  The `bne` branch at 0x817298 targets 0x817330, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0x8172a0 targets 0x817360, is taken when a5(=one of 0x0, 0x1) != 0, and falls through when a5(=one of 0x0, 0x1) == 0.
  The `beq` branch at 0x8172a8 targets 0x817358, is taken when t1(=[[a1+8]+48]) == 0, and falls through when t1(=[[a1+8]+48]) != 0.
  The `beq` branch at 0x8172c8 targets 0x817298, is taken when (t1(=[[a1+8]+48]) & 0x1) == 0, and falls through when (t1(=[[a1+8]+48]) & 0x1) != 0.
  The `beq` branch at 0x8172d8 targets 0x8172ec, is taken when a0(=[[[a1+8]+40]]) == a4(=-0x1), and falls through when a0(=[[[a1+8]+40]]) != a4(=-0x1).
  The `bne` branch at 0x8172e4 targets 0x817298, is taken when a2(=[[[a1+8]+44]]) != a4(=-0x1), and falls through when a2(=[[[a1+8]+44]]) == a4(=-0x1).
  The `beq` branch at 0x8172ec targets 0x817298 and is always taken.
  The `beq` branch at 0x817308 targets 0x817324, is taken when a3(?) == a4(=-0x1), and falls through when a3(?) != a4(=-0x1).
  The `bne` branch at 0x81731c targets 0x817328, is taken when a6(?) != a4(=-0x1), and falls through when a6(?) == a4(=-0x1).
  The `beq` branch at 0x817328 targets 0x8172a0, is taken when v1(?) == a1(=([[a1+8]+40] + ([[a1+8]+48] << 0x5))), and falls through when v1(?) != a1(=([[a1+8]+40] + ([[a1+8]+48] << 0x5))).
  The `beq` branch at 0x817334 targets 0x817350, is taken when a7(?) == a4(=-0x1), and falls through when a7(?) != a4(=-0x1).
  The `bne` branch at 0x817348 targets 0x817300, is taken when t2(?) != a4(=-0x1), and falls through when t2(?) == a4(=-0x1).
  The `beq` branch at 0x817350 targets 0x817300 and is always taken.
  The `beq` branch at 0x817358 targets 0x8172a0 and is always taken.
  The `beq` branch at 0x817360 targets 0x817498, is taken when t1(=[[a1+8]+48]) == 0, and falls through when t1(=[[a1+8]+48]) != 0.
  The `beq` branch at 0x817374 targets 0x81739c, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0x817394 targets 0x81737c, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0x81739c targets 0x817498, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `bne` branch at 0x8173a8 targets 0x8174ac, is taken when v1(?) < 0x2 (signed), and falls through when v1(?) >= 0x2 (signed).
  The `beq` branch at 0x81740c targets 0x8174a0, is taken when a5(?) == at(=([[a1+8]+40] + ([[a1+8]+48] << 0x5))-128), and falls through when a5(?) != at(=([[a1+8]+40] + ([[a1+8]+48] << 0x5))-128).
  The `bne` branch at 0x817458 targets 0x8173c8, is taken when a4(?) != at(=([[a1+8]+40] + ([[a1+8]+48] << 0x5))-128), and falls through when a4(?) == at(=([[a1+8]+40] + ([[a1+8]+48] << 0x5))-128).
  The `beq` branch at 0x8174a4 targets 0x817464 and is always taken.
  The return at 0x817490 has v0 = ?.
  The return at 0x817498 has v0 = one of [[a1+8]+52], ?.
  The return at 0x8174ec has v0 = ?.
  The instructions from 0x8172f4 to 0x8172fc are not reached by any path from the entry, and their branches are not listed.

- `LoadIVM` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8200c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8200c0-0x8209f4 (2356 bytes).
  It occupies 2356 bytes.
  The `lw` at 0x8200c8 loads 4 bytes from a0 (arg0 at entry) +0xccc0.
  The `lw` at 0x8200cc loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x8200d8 loads 4 bytes from ([a1] + ([a0+52416] << 0x2)) +0x0.
  The `lw` at 0x8200dc loads 4 bytes from [([a1] + ([a0+52416] << 0x2))] +0x0.
  The `lbu` at 0x8200e0 loads 1 byte from [[([a1] + ([a0+52416] << 0x2))]] +0x2c.
  53 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x24, including `lw` at 0x8200e4, `lw` at 0x820124, `lw` at 0x82014c.
  4 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x1b8, including `lw` at 0x8200f0, `lw` at 0x820114, `lw` at 0x82013c.
  The `lwc1` at 0x820104 loads 4 bytes from a2 (arg2 at entry) +0x0.
  54 such `swc1` accesses store 4 bytes to ?, including `swc1` at 0x820110, `swc1` at 0x820138, `swc1` at 0x820160.
  The `lwc1` at 0x82012c loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `lwc1` at 0x820154 loads 4 bytes from a2 (arg2 at entry) +0x8.
  The `lwc1` at 0x82017c loads 4 bytes from a2 (arg2 at entry) +0xc.
  The `lbu` at 0x82018c loads 1 byte from [[([a1] + ([a0+52416] << 0x2))]] +0x2d.
  4 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x1bc, including `lw` at 0x820198, `lw` at 0x8201bc, `lw` at 0x8201e4.
  The `lwc1` at 0x8201ac loads 4 bytes from a2 (arg2 at entry) +0x20.
  The `lwc1` at 0x8201d4 loads 4 bytes from a2 (arg2 at entry) +0x24.
  The `lwc1` at 0x8201fc loads 4 bytes from a2 (arg2 at entry) +0x28.
  The `lwc1` at 0x820224 loads 4 bytes from a2 (arg2 at entry) +0x2c.
  The `lbu` at 0x820240 loads 1 byte from ?.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x82024c, `lw` at 0x820274, `lw` at 0x82029c.
  4 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x820264, `lwc1` at 0x82028c, `lwc1` at 0x8202b4.
  The `lbu` at 0x8202f8 loads 1 byte from [[([a1] + ([a0+52416] << 0x2))]] +0x36.
  4 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x1e0, including `lw` at 0x820304, `lw` at 0x820328, `lw` at 0x820350.
  The `lwc1` at 0x820318 loads 4 bytes from a2 (arg2 at entry) +0x480.
  The `lwc1` at 0x820340 loads 4 bytes from a2 (arg2 at entry) +0x484.
  The `lwc1` at 0x820368 loads 4 bytes from a2 (arg2 at entry) +0x488.
  The `lwc1` at 0x820390 loads 4 bytes from a2 (arg2 at entry) +0x48c.
  The `lbu` at 0x8203a0 loads 1 byte from [[([a1] + ([a0+52416] << 0x2))]] +0x37.
  6 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x1e4, including `lw` at 0x8203ac, `lw` at 0x8203dc, `lw` at 0x820404.
  The `lw` at 0x8203b8 loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `lwc1` at 0x8203d4 loads 4 bytes from a0 (arg0 at entry) +0xbf0.
  The `lwc1` at 0x8203f4 loads 4 bytes from a0 (arg0 at entry) +0xbf4.
  The `lwc1` at 0x82041c loads 4 bytes from a0 (arg0 at entry) +0xbf8.
  The `lwc1` at 0x820444 loads 4 bytes from a0 (arg0 at entry) +0xbfc.
  The `lbu` at 0x820454 loads 1 byte from [[([a1] + ([a0+52416] << 0x2))]] +0x38.
  4 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x1e8, including `lw` at 0x820460, `lw` at 0x820484, `lw` at 0x8204ac.
  The `lwc1` at 0x820474 loads 4 bytes from a0 (arg0 at entry) +0xc00.
  The `lwc1` at 0x82049c loads 4 bytes from a0 (arg0 at entry) +0xc04.
  The `lwc1` at 0x8204c4 loads 4 bytes from a0 (arg0 at entry) +0xc08.
  The `lwc1` at 0x8204ec loads 4 bytes from a0 (arg0 at entry) +0xc0c.
  The `lbu` at 0x8204fc loads 1 byte from [[([a1] + ([a0+52416] << 0x2))]] +0x39.
  4 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x1ec, including `lw` at 0x820508, `lw` at 0x82052c, `lw` at 0x820554.
  The `lwc1` at 0x82051c loads 4 bytes from a0 (arg0 at entry) +0xc10.
  The `lwc1` at 0x820544 loads 4 bytes from a0 (arg0 at entry) +0xc14.
  The `lwc1` at 0x82056c loads 4 bytes from a0 (arg0 at entry) +0xc18.
  The `lwc1` at 0x820594 loads 4 bytes from a0 (arg0 at entry) +0xc1c.
  The `lbu` at 0x8205a4 loads 1 byte from [[([a1] + ([a0+52416] << 0x2))]] +0x3a.
  4 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x1f0, including `lw` at 0x8205b0, `lw` at 0x8205d4, `lw` at 0x8205fc.
  The `lwc1` at 0x8205c4 loads 4 bytes from a0 (arg0 at entry) +0xc7c.
  The `lwc1` at 0x8205ec loads 4 bytes from a0 (arg0 at entry) +0xc80.
  The `lwc1` at 0x820614 loads 4 bytes from a0 (arg0 at entry) +0xc84.
  The `lwc1` at 0x82063c loads 4 bytes from a0 (arg0 at entry) +0xc88.
  The `lbu` at 0x82064c loads 1 byte from [[([a1] + ([a0+52416] << 0x2))]] +0x3b.
  4 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x1f4, including `lw` at 0x820658, `lw` at 0x82067c, `lw` at 0x8206a4.
  The `lwc1` at 0x82066c loads 4 bytes from a0 (arg0 at entry) +0xc4c.
  The `lwc1` at 0x820694 loads 4 bytes from a0 (arg0 at entry) +0xc50.
  The `lwc1` at 0x8206bc loads 4 bytes from a0 (arg0 at entry) +0xc54.
  The `lwc1` at 0x8206e4 loads 4 bytes from a0 (arg0 at entry) +0xc58.
  The `lbu` at 0x8206f4 loads 1 byte from [[([a1] + ([a0+52416] << 0x2))]] +0x3c.
  4 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x1f8, including `lw` at 0x820700, `lw` at 0x820724, `lw` at 0x82074c.
  The `lwc1` at 0x820714 loads 4 bytes from a0 (arg0 at entry) +0xc5c.
  The `lwc1` at 0x82073c loads 4 bytes from a0 (arg0 at entry) +0xc60.
  The `lwc1` at 0x820764 loads 4 bytes from a0 (arg0 at entry) +0xc64.
  The `lwc1` at 0x82078c loads 4 bytes from a0 (arg0 at entry) +0xc68.
  The `lbu` at 0x82079c loads 1 byte from [[([a1] + ([a0+52416] << 0x2))]] +0x3d.
  4 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x1fc, including `lw` at 0x8207a8, `lw` at 0x8207cc, `lw` at 0x8207f4.
  The `lwc1` at 0x8207bc loads 4 bytes from a0 (arg0 at entry) +0xc6c.
  The `lwc1` at 0x8207e4 loads 4 bytes from a0 (arg0 at entry) +0xc70.
  The `lwc1` at 0x82080c loads 4 bytes from a0 (arg0 at entry) +0xc74.
  The `lwc1` at 0x820834 loads 4 bytes from a0 (arg0 at entry) +0xc78.
  The `lbu` at 0x820844 loads 1 byte from [[([a1] + ([a0+52416] << 0x2))]] +0x3e.
  3 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x200, including `lw` at 0x820850, `lw` at 0x820884, `lw` at 0x8208b8.
  The `lwc1` at 0x820868 loads 4 bytes from a2 (arg2 at entry) +0x5c.
  The `lbu` at 0x820878 loads 1 byte from [[([a1] + ([a0+52416] << 0x2))]] +0x40.
  The `lwc1` at 0x82089c loads 4 bytes from a0 (arg0 at entry) +0xc30.
  The `lbu` at 0x8208ac loads 1 byte from [[([a1] + ([a0+52416] << 0x2))]] +0x41.
  The `lwc1` at 0x8208d0 loads 4 bytes from a0 (arg0 at entry) +0xc8c.
  The `lbu` at 0x8208e0 loads 1 byte from [[([a1] + ([a0+52416] << 0x2))]] +0x3f.
  4 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x204, including `lw` at 0x8208ec, `lw` at 0x820914, `lw` at 0x82093c.
  The `lwc1` at 0x820904 loads 4 bytes from a2 (arg2 at entry) +0x4c0.
  The `lwc1` at 0x82092c loads 4 bytes from a2 (arg2 at entry) +0x4c4.
  The `lwc1` at 0x820954 loads 4 bytes from a2 (arg2 at entry) +0x4c8.
  The `lwc1` at 0x82097c loads 4 bytes from a2 (arg2 at entry) +0x4cc.
  The `lwc1` at 0x820998 loads 4 bytes from a2 (arg2 at entry) +0x4a0.
  The `lwc1` at 0x8209b8 loads 4 bytes from a2 (arg2 at entry) +0x4a4.
  The `lwc1` at 0x8209e0 loads 4 bytes from a2 (arg2 at entry) +0x4a8.
  The `beq` branch at 0x8200e8 targets 0x82018c, is taken when at(=[[[([a1] + ([a0+52416] << 0x2))]]+44]:1) == 0, and falls through when at(=[[[([a1] + ([a0+52416] << 0x2))]]+44]:1) != 0.
  The `beq` branch at 0x820190 targets 0x820234, is taken when v0(=[[[([a1] + ([a0+52416] << 0x2))]]+45]:1) == 0, and falls through when v0(=[[[([a1] + ([a0+52416] << 0x2))]]+45]:1) != 0.
  The `beq` branch at 0x820244 targets 0x8202ec, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x8202f0 targets 0x820240, is taken when a5(?) != t0(=[[([a1] + ([a0+52416] << 0x2))]]+8), and falls through when a5(?) == t0(=[[([a1] + ([a0+52416] << 0x2))]]+8).
  The `beq` branch at 0x8202fc targets 0x8203a0, is taken when t8(=[[[([a1] + ([a0+52416] << 0x2))]]+54]:1) == 0, and falls through when t8(=[[[([a1] + ([a0+52416] << 0x2))]]+54]:1) != 0.
  The `beq` branch at 0x8203a4 targets 0x820454, is taken when t0(=[[[([a1] + ([a0+52416] << 0x2))]]+55]:1) == 0, and falls through when t0(=[[[([a1] + ([a0+52416] << 0x2))]]+55]:1) != 0.
  The `beq` branch at 0x8203cc targets 0x820998, is taken when a7(=[a1+16]) == t0(=0x1), and falls through when a7(=[a1+16]) != t0(=0x1).
  The `beq` branch at 0x820458 targets 0x8204fc, is taken when t9(=[[[([a1] + ([a0+52416] << 0x2))]]+56]:1) == 0, and falls through when t9(=[[[([a1] + ([a0+52416] << 0x2))]]+56]:1) != 0.
  The `beq` branch at 0x820500 targets 0x8205a4, is taken when t0(=[[[([a1] + ([a0+52416] << 0x2))]]+57]:1) == 0, and falls through when t0(=[[[([a1] + ([a0+52416] << 0x2))]]+57]:1) != 0.
  The `beq` branch at 0x8205a8 targets 0x82064c, is taken when a1(=[[[([a1] + ([a0+52416] << 0x2))]]+58]:1) == 0, and falls through when a1(=[[[([a1] + ([a0+52416] << 0x2))]]+58]:1) != 0.
  The `beq` branch at 0x820650 targets 0x8206f4, is taken when t8(=[[[([a1] + ([a0+52416] << 0x2))]]+59]:1) == 0, and falls through when t8(=[[[([a1] + ([a0+52416] << 0x2))]]+59]:1) != 0.
  The `beq` branch at 0x8206f8 targets 0x82079c, is taken when a7(=[[[([a1] + ([a0+52416] << 0x2))]]+60]:1) == 0, and falls through when a7(=[[[([a1] + ([a0+52416] << 0x2))]]+60]:1) != 0.
  The `beq` branch at 0x8207a0 targets 0x820844, is taken when v1(=[[[([a1] + ([a0+52416] << 0x2))]]+61]:1) == 0, and falls through when v1(=[[[([a1] + ([a0+52416] << 0x2))]]+61]:1) != 0.
  The `beq` branch at 0x820848 targets 0x820878, is taken when t3(=[[[([a1] + ([a0+52416] << 0x2))]]+62]:1) == 0, and falls through when t3(=[[[([a1] + ([a0+52416] << 0x2))]]+62]:1) != 0.
  The `beq` branch at 0x82087c targets 0x8208ac, is taken when at(=[[[([a1] + ([a0+52416] << 0x2))]]+64]:1) == 0, and falls through when at(=[[[([a1] + ([a0+52416] << 0x2))]]+64]:1) != 0.
  The `beq` branch at 0x8208b0 targets 0x8208e0, is taken when a1(=[[[([a1] + ([a0+52416] << 0x2))]]+65]:1) == 0, and falls through when a1(=[[[([a1] + ([a0+52416] << 0x2))]]+65]:1) != 0.
  The `beq` branch at 0x8208e4 targets 0x820990, is taken when a6(=[[[([a1] + ([a0+52416] << 0x2))]]+63]:1) == 0, and falls through when a6(=[[[([a1] + ([a0+52416] << 0x2))]]+63]:1) != 0.
  The `beq` branch at 0x8209ec targets 0x820454 and is always taken.
  The return at 0x820988 has v0 = [[[([a1] + ([a0+52416] << 0x2))]]+516].
  The return at 0x820990 has v0 = ?.

- `LoadVertex` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x820a00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x820a00-0x820c88 (648 bytes).
  It occupies 648 bytes.
  The `lbu` at 0x820a00 loads 1 byte from a0 (arg0 at entry) +0x6c.
  4 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x208, including `lw` at 0x820a0c, `lw` at 0x820a20, `lw` at 0x820a34.
  The `lwc1` at 0x820a18 loads 4 bytes from (a1 + ([a1+520] << 0x4)) +0x98.
  The `swc1` at 0x820a1c stores 4 bytes to a2 (arg2 at entry) +0x40.
  The `lwc1` at 0x820a2c loads 4 bytes from (a1 + ([a1+520] << 0x4)) +0x9c.
  The `swc1` at 0x820a30 stores 4 bytes to a2 (arg2 at entry) +0x44.
  The `lwc1` at 0x820a40 loads 4 bytes from (a1 + ([a1+520] << 0x4)) +0xa0.
  The `swc1` at 0x820a44 stores 4 bytes to a2 (arg2 at entry) +0x48.
  The `lwc1` at 0x820a54 loads 4 bytes from (a1 + ([a1+520] << 0x4)) +0xa4.
  The `swc1` at 0x820a58 stores 4 bytes to a2 (arg2 at entry) +0x4c.
  The `lbu` at 0x820a5c loads 1 byte from a0 (arg0 at entry) +0x6d.
  4 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x20c, including `lw` at 0x820a68, `lw` at 0x820a7c, `lw` at 0x820a90.
  The `lwc1` at 0x820a74 loads 4 bytes from (a1 + ([a1+524] << 0x4)) +0x98.
  The `swc1` at 0x820a78 stores 4 bytes to a2 (arg2 at entry) +0x480.
  The `lwc1` at 0x820a88 loads 4 bytes from (a1 + ([a1+524] << 0x4)) +0x9c.
  The `swc1` at 0x820a8c stores 4 bytes to a2 (arg2 at entry) +0x484.
  The `lwc1` at 0x820a9c loads 4 bytes from (a1 + ([a1+524] << 0x4)) +0xa0.
  The `swc1` at 0x820aa0 stores 4 bytes to a2 (arg2 at entry) +0x488.
  The `lwc1` at 0x820ab0 loads 4 bytes from (a1 + ([a1+524] << 0x4)) +0xa4.
  The `swc1` at 0x820ab4 stores 4 bytes to a2 (arg2 at entry) +0x48c.
  The `lbu` at 0x820ab8 loads 1 byte from a0 (arg0 at entry) +0x6e.
  5 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x210, including `lw` at 0x820ac4, `lw` at 0x820ad8, `lw` at 0x820aec.
  The `lwc1` at 0x820ad0 loads 4 bytes from (a1 + ([a1+528] << 0x4)) +0x98.
  The `swc1` at 0x820ad4 stores 4 bytes to a2 (arg2 at entry) +0x4a0.
  The `lwc1` at 0x820ae4 loads 4 bytes from (a1 + ([a1+528] << 0x4)) +0x9c.
  The `swc1` at 0x820ae8 stores 4 bytes to a2 (arg2 at entry) +0x4a4.
  The `lwc1` at 0x820af8 loads 4 bytes from (a1 + ([a1+528] << 0x4)) +0xa0.
  The `swc1` at 0x820afc stores 4 bytes to a2 (arg2 at entry) +0x4a8.
  2 such `lwc1` accesses load 4 bytes from (a1 + ([a1+528] << 0x4)) +0xa4, including `lwc1` at 0x820b0c, `lwc1` at 0x820c54.
  The `swc1` at 0x820b10 stores 4 bytes to a2 (arg2 at entry) +0x4ac.
  The `lbu` at 0x820b14 loads 1 byte from a0 (arg0 at entry) +0x6f.
  4 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x214, including `lw` at 0x820b20, `lw` at 0x820b34, `lw` at 0x820b48.
  The `lwc1` at 0x820b2c loads 4 bytes from (a1 + ([a1+532] << 0x4)) +0x98.
  The `swc1` at 0x820b30 stores 4 bytes to a2 (arg2 at entry) +0x490.
  The `lwc1` at 0x820b40 loads 4 bytes from (a1 + ([a1+532] << 0x4)) +0x9c.
  The `swc1` at 0x820b44 stores 4 bytes to a2 (arg2 at entry) +0x494.
  The `lwc1` at 0x820b54 loads 4 bytes from (a1 + ([a1+532] << 0x4)) +0xa0.
  The `swc1` at 0x820b58 stores 4 bytes to a2 (arg2 at entry) +0x498.
  The `lwc1` at 0x820b68 loads 4 bytes from (a1 + ([a1+532] << 0x4)) +0xa4.
  The `swc1` at 0x820b6c stores 4 bytes to a2 (arg2 at entry) +0x49c.
  The `lbu` at 0x820b70 loads 1 byte from a0 (arg0 at entry) +0x70.
  4 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x218, including `lw` at 0x820b80, `lw` at 0x820b94, `lw` at 0x820ba8.
  The `lwc1` at 0x820b8c loads 4 bytes from (a1 + ([a1+536] << 0x4)) +0x98.
  The `swc1` at 0x820b90 stores 4 bytes to a2 (arg2 at entry) +0x4b0.
  The `lwc1` at 0x820ba0 loads 4 bytes from (a1 + ([a1+536] << 0x4)) +0x9c.
  The `swc1` at 0x820ba4 stores 4 bytes to a2 (arg2 at entry) +0x4b4.
  The `lwc1` at 0x820bb4 loads 4 bytes from (a1 + ([a1+536] << 0x4)) +0xa0.
  The `swc1` at 0x820bb8 stores 4 bytes to a2 (arg2 at entry) +0x4b8.
  The `lwc1` at 0x820bc8 loads 4 bytes from (a1 + ([a1+536] << 0x4)) +0xa4.
  The `swc1` at 0x820bcc stores 4 bytes to a2 (arg2 at entry) +0x4bc.
  The `lbu` at 0x820bd4 loads 1 byte from ?.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x820be0, `lw` at 0x820bf4, `lw` at 0x820c08.
  4 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x820bec, `lwc1` at 0x820c00, `lwc1` at 0x820c14.
  4 such `swc1` accesses store 4 bytes to ?, including `swc1` at 0x820bf0, `swc1` at 0x820c04, `swc1` at 0x820c18.
  The `lbu` at 0x820c3c loads 1 byte from a0 (arg0 at entry) +0x7a.
  The `swc1` at 0x820c58 stores 4 bytes to a2 (arg2 at entry) +0x58.
  The `lbu` at 0x820c5c loads 1 byte from a0 (arg0 at entry) +0x79.
  The `lw` at 0x820c68 loads 4 bytes from a1 (arg1 at entry) +0x21c.
  The `lwc1` at 0x820c74 loads 4 bytes from (a1 + ([a1+540] << 0x4)) +0x98.
  The `swc1` at 0x820c7c stores 4 bytes to a2 (arg2 at entry) +0x4d0.
  The `beq` branch at 0x820a04 targets 0x820a5c, is taken when at(=[a0+108]:1) == 0, and falls through when at(=[a0+108]:1) != 0.
  The `beq` branch at 0x820a60 targets 0x820ab8, is taken when a5(=[a0+109]:1) == 0, and falls through when a5(=[a0+109]:1) != 0.
  The `beq` branch at 0x820abc targets 0x820b14, is taken when t2(=[a0+110]:1) == 0, and falls through when t2(=[a0+110]:1) != 0.
  The `beq` branch at 0x820b18 targets 0x820b70, is taken when v0(=[a0+111]:1) == 0, and falls through when v0(=[a0+111]:1) != 0.
  The `beq` branch at 0x820b78 targets 0x820bd0, is taken when a6(=[a0+112]:1) == 0, and falls through when a6(=[a0+112]:1) != 0.
  The `beq` branch at 0x820bd8 targets 0x820c30, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x820c34 targets 0x820bd4, is taken when a4(?) != a7(=a0+8), and falls through when a4(?) == a7(=a0+8).
  The `beq` branch at 0x820c40 targets 0x820c5c, is taken when a3(=[a0+122]:1) == 0, and falls through when a3(=[a0+122]:1) != 0.
  The `beq` branch at 0x820c60 targets 0x820c80, is taken when a5(=[a0+121]:1) == 0, and falls through when a5(=[a0+121]:1) != 0.
  The return at 0x820c78 has v0 = ?.
  The return at 0x820c80 has v0 = ?.

- `GetDstVector` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x820cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x820cc0-0x820d8c (204 bytes).
  It occupies 204 bytes.
  The `lw` at 0x820cc0 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x820d44 loads 4 bytes from a0 (arg0 at entry) +0x4c.
  The `lw` at 0x820d70 loads 4 bytes from a0 (arg0 at entry) +0x94.
  The `beq` branch at 0x820cd8 targets 0x820d28, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x820ce0 targets 0x820d58, is taken when a3(?) == a4(=0x4), and falls through when a3(?) != a4(=0x4).
  The `beq` branch at 0x820ce8 targets 0x820d84, is taken when a3(?) == a5(=0x1), and falls through when a3(?) != a5(=0x1).
  The `beq` branch at 0x820cf0 targets 0x820d0c, is taken when a3(?) == a6(=0x2), and falls through when a3(?) != a6(=0x2).
  The `beq` branch at 0x820cf8 targets 0x820d0c, is taken when a3(?) == a7(=0x3), and falls through when a3(?) != a7(=0x3).
  The return at 0x820d00 has v0 = 0x0.
  The return at 0x820d20 has v0 = ?.
  The return at 0x820d50 has v0 = ?.
  The return at 0x820d7c has v0 = ?.
  The return at 0x820d84 has v0 = a0+132.
  The instructions from 0x820d08 to 0x820d08 are not reached by any path from the entry, and their branches are not listed.

- `SwizzleNegate` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x820dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x820dc0-0x820e4c (140 bytes).
  It occupies 140 bytes.
  The `lwc1` at 0x820e08 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lwc1` at 0x820e2c loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lwc1` at 0x820e34 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lwc1` at 0x820e3c loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `beq` branch at 0x820dcc targets 0x820e08, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x820dd4 targets 0x820e28, is taken when a1 == a4(=0x1), and falls through when a1 != a4(=0x1).
  The `beq` branch at 0x820ddc targets 0x820e30, is taken when a1 == a5(=0x2), and falls through when a1 != a5(=0x2).
  The `beq` branch at 0x820de4 targets 0x820e38, is taken when a1 == a6(=0x3), and falls through when a1 != a6(=0x3).
  The `beq` branch at 0x820dec targets 0x820e40, is taken when a1 == at(=0x4), and falls through when a1 != at(=0x4).
  The `beq` branch at 0x820df4 targets 0x820e20, is taken when a1 == a7(=0x5), and falls through when a1 != a7(=0x5).
  The `beq` branch at 0x820e0c targets 0x820e18, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x820e20 targets 0x820e0c and is always taken.
  The `beq` branch at 0x820e28 targets 0x820e0c and is always taken.
  The `beq` branch at 0x820e30 targets 0x820e0c and is always taken.
  The `beq` branch at 0x820e38 targets 0x820e0c and is always taken.
  The `beq` branch at 0x820e44 targets 0x820e0c and is always taken.
  The return at 0x820e00 has v0 = ?.
  The return at 0x820e18 has v0 = ?.

- `GetSrcVector` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x820e80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x820e80-0x82121c (924 bytes).
  It occupies 924 bytes.
  4 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x0, including `lw` at 0x820e80, `lw` at 0x820f64, `lw` at 0x820fa0.
  The `lw` at 0x820f00 loads 4 bytes from a0 (arg0 at entry) +0x58.
  The `lw` at 0x820f10 loads 4 bytes from a0 (arg0 at entry) +0x54.
  The `lwc1` at 0x821020 loads 4 bytes from a0 (arg0 at entry) +0x84.
  The `lwc1` at 0x821090 loads 4 bytes from a0 (arg0 at entry) +0x90.
  The `lwc1` at 0x8210ac loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x8210c8 loads 4 bytes from a0 (arg0 at entry) +0x50.
  The `lw` at 0x8210d4 loads 4 bytes from a0 (arg0 at entry) +0x4c.
  The `lwc1` at 0x821100 loads 4 bytes from a0 (arg0 at entry) +0x8c.
  The `lw` at 0x821134 loads 4 bytes from a0 (arg0 at entry) +0x94.
  The `lw` at 0x821150 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `lw` at 0x82115c loads 4 bytes from a0 (arg0 at entry) +0x24.
  The `bgezall` at 0x820f4c calls SwizzleNegate [0x820dc0] with a0=?, a1=?, a2=?, a3=?, a4=0x3.
  The `bgezall` at 0x820f88 calls SwizzleNegate [0x820dc0] with a0=?, a1=?, a2=?, a3=0x7ffffff.
  The `bgezall` at 0x820fc4 calls SwizzleNegate [0x820dc0] with a0=?, a1=?, a2=?, a3=0xfffffff.
  The `bgezall` at 0x821000 calls SwizzleNegate [0x820dc0] with a0=?, a1=?, a2=?, a3=0x1fffffff.
  The `beq` branch at 0x820e94 targets 0x821040, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x820eac targets 0x821020, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x820eb4 targets 0x8210ac, is taken when a5(?) == a6(=0x1), and falls through when a5(?) != a6(=0x1).
  The `beq` branch at 0x820ebc targets 0x821100, is taken when a5(?) == a7(=0x2), and falls through when a5(?) != a7(=0x2).
  The `beq` branch at 0x820ec4 targets 0x821090, is taken when a5(?) == t0(=0x3), and falls through when a5(?) != t0(=0x3).
  The `beq` branch at 0x820f0c targets 0x821188, is taken when v1(?) >= a7(=[a0+88]) (unsigned), and falls through when v1(?) < a7(=[a0+88]) (unsigned).
  The `beq` branch at 0x821044 targets 0x8210c8, is taken when (v0(=[a1]) & 0xf) == 0, and falls through when (v0(=[a1]) & 0xf) != 0.
  The `beq` branch at 0x82104c targets 0x82111c, is taken when a5(?) == a4(=0x3), and falls through when a5(?) != a4(=0x3).
  The `beq` branch at 0x821054 targets 0x821150, is taken when a5(?) == a6(=0x1), and falls through when a5(?) != a6(=0x1).
  The `beq` branch at 0x821060 targets 0x820f00, is taken when a5(?) == a7(=0x2), and falls through when a5(?) != a7(=0x2).
  The `beq` branch at 0x8210a4 targets 0x821040 and is always taken.
  The `beq` branch at 0x8210c0 targets 0x821040 and is always taken.
  The `beq` branch at 0x8210dc targets 0x8211b0, is taken when v1(?) >= a7(=[a0+80]) (unsigned), and falls through when v1(?) < a7(=[a0+80]) (unsigned).
  The `beq` branch at 0x8210f8 targets 0x820f2c and is always taken.
  The `beq` branch at 0x821114 targets 0x821040 and is always taken.
  The `beq` branch at 0x821124 targets 0x8211d4, is taken when v1(?) >= 0x14 (unsigned), and falls through when v1(?) < 0x14 (unsigned).
  The `beq` branch at 0x821148 targets 0x820f2c and is always taken.
  The `beq` branch at 0x821164 targets 0x8211f8, is taken when v1(?) >= a7(=[a0+40]) (unsigned), and falls through when v1(?) < a7(=[a0+40]) (unsigned).
  The `beq` branch at 0x821180 targets 0x820f2c and is always taken.
  The `beq` branch at 0x8211cc targets 0x821018 and is always taken.
  The `beq` branch at 0x8211f0 targets 0x821018 and is always taken.
  The `beq` branch at 0x821214 targets 0x821018 and is always taken.
  The return at 0x820eec has v0 = ?.
  The return at 0x821018 has v0 = ?.
  The return at 0x821088 has v0 = ?.
  The return at 0x8211a8 has v0 = ?.
  The instructions from 0x820ef4 to 0x820efc are not reached by any path from the entry, and their branches are not listed.

- `PerformDotProduct` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8213c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8213c0-0x821410 (80 bytes).
  It occupies 80 bytes.
  The `lwc1` at 0x8213c0 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lwc1` at 0x8213c4 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `lwc1` at 0x8213c8 loads 4 bytes from a2 (arg2 at entry) +0x8.
  The `lwc1` at 0x8213cc loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x8213d0 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lwc1` at 0x8213d4 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lwc1` at 0x8213d8 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lwc1` at 0x8213e0 loads 4 bytes from a2 (arg2 at entry) +0xc.
  The `swc1` at 0x8213fc stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `swc1` at 0x821400 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `swc1` at 0x821404 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `swc1` at 0x82140c stores 4 bytes to a0 (arg0 at entry) +0x0.
  The return at 0x821408 has v0 = ?.

- `PerformVEMultiply` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x821440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x821440-0x821484 (68 bytes).
  It occupies 68 bytes.
  The `lwc1` at 0x821440 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x821444 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `swc1` at 0x82144c stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lwc1` at 0x821450 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `lwc1` at 0x821454 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `swc1` at 0x82145c stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lwc1` at 0x821460 loads 4 bytes from a2 (arg2 at entry) +0x8.
  The `lwc1` at 0x821464 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `swc1` at 0x82146c stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `lwc1` at 0x821470 loads 4 bytes from a2 (arg2 at entry) +0xc.
  The `lwc1` at 0x821474 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `swc1` at 0x821480 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The return at 0x82147c has v0 = ?.

- `PerformAdd` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8214c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8214c0-0x821504 (68 bytes).
  It occupies 68 bytes.
  The `lwc1` at 0x8214c0 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x8214c4 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `swc1` at 0x8214cc stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lwc1` at 0x8214d0 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `lwc1` at 0x8214d4 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `swc1` at 0x8214dc stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lwc1` at 0x8214e0 loads 4 bytes from a2 (arg2 at entry) +0x8.
  The `lwc1` at 0x8214e4 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `swc1` at 0x8214ec stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `lwc1` at 0x8214f0 loads 4 bytes from a2 (arg2 at entry) +0xc.
  The `lwc1` at 0x8214f4 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `swc1` at 0x821500 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The return at 0x8214fc has v0 = ?.

- `PerformMultiplyAdd` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x821540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x821540-0x8215a4 (100 bytes).
  It occupies 100 bytes.
  The `lwc1` at 0x821540 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x821544 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lwc1` at 0x821548 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `swc1` at 0x821554 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lwc1` at 0x821558 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `lwc1` at 0x82155c loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lwc1` at 0x821560 loads 4 bytes from a3 (arg3 at entry) +0x4.
  The `swc1` at 0x82156c stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lwc1` at 0x821570 loads 4 bytes from a2 (arg2 at entry) +0x8.
  The `lwc1` at 0x821574 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lwc1` at 0x821578 loads 4 bytes from a3 (arg3 at entry) +0x8.
  The `swc1` at 0x821584 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `lwc1` at 0x821588 loads 4 bytes from a2 (arg2 at entry) +0xc.
  The `lwc1` at 0x82158c loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lwc1` at 0x821590 loads 4 bytes from a3 (arg3 at entry) +0xc.
  The `swc1` at 0x8215a0 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The return at 0x82159c has v0 = ?.

- `PerformDistanceVector` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8215c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8215c0-0x8215ec (44 bytes).
  It occupies 44 bytes.
  The `swc1` at 0x8215c4 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lwc1` at 0x8215c8 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `lwc1` at 0x8215cc loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `swc1` at 0x8215d4 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lwc1` at 0x8215d8 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `swc1` at 0x8215dc stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `lwc1` at 0x8215e0 loads 4 bytes from a2 (arg2 at entry) +0xc.
  The `swc1` at 0x8215e8 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The return at 0x8215e4 has v0 = ?.

- `PerformFraction` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x821600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x821600-0x8216c8 (200 bytes).
  It occupies 200 bytes.
  The `lwc1` at 0x82160c loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `swc1` at 0x821640 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lwc1` at 0x821644 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `swc1` at 0x821664 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lwc1` at 0x821668 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `swc1` at 0x821684 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `lwc1` at 0x821688 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `swc1` at 0x8216b8 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `jalr` at 0x821630 calls floor with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x821650 calls floor with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x821674 calls floor with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x821694 calls floor with a0=?, a1=?, a2=?, a3=?.
  The return at 0x8216c0 has v0 = ret(floor).

- `PerformMaximum` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x821700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x821700-0x821788 (136 bytes).
  It occupies 136 bytes.
  The `lwc1` at 0x821700 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lwc1` at 0x821704 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `swc1` at 0x82171c stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lwc1` at 0x821720 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lwc1` at 0x821724 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `swc1` at 0x82173c stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lwc1` at 0x821740 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lwc1` at 0x821744 loads 4 bytes from a2 (arg2 at entry) +0x8.
  The `swc1` at 0x82175c stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `lwc1` at 0x821760 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lwc1` at 0x821764 loads 4 bytes from a2 (arg2 at entry) +0xc.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0xc, including `swc1` at 0x82177c, `swc1` at 0x821784.
  The `bc1t` branch at 0x821710 targets 0x82171c, is taken when f4(=[a2]) < f5(=[a1]) (c.lt.s at 0x821708), and falls through when not (f4(=[a2]) < f5(=[a1]) (c.lt.s at 0x821708)).
  The `bc1f` branch at 0x821730 targets 0x82173c, is taken when not (f4(=[a2+4]) < f6(=[a1+4]) (c.lt.s at 0x821728)), and falls through when f4(=[a2+4]) < f6(=[a1+4]) (c.lt.s at 0x821728).
  The `bc1f` branch at 0x821750 targets 0x82175c, is taken when not (f6(=[a2+8]) < f5(=[a1+8]) (c.lt.s at 0x821748)), and falls through when f6(=[a2+8]) < f5(=[a1+8]) (c.lt.s at 0x821748).
  The `bc1f` branch at 0x821770 targets 0x821780, is taken when not (f6(=[a2+12]) < f5(=[a1+12]) (c.lt.s at 0x821768)), and falls through when f6(=[a2+12]) < f5(=[a1+12]) (c.lt.s at 0x821768).
  The return at 0x821778 has v0 = ?.
  The return at 0x821780 has v0 = ?.

- `PerformMinimum` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8217c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8217c0-0x821848 (136 bytes).
  It occupies 136 bytes.
  The `lwc1` at 0x8217c0 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x8217c4 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `swc1` at 0x8217dc stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lwc1` at 0x8217e0 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `lwc1` at 0x8217e4 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `swc1` at 0x8217fc stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lwc1` at 0x821800 loads 4 bytes from a2 (arg2 at entry) +0x8.
  The `lwc1` at 0x821804 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `swc1` at 0x82181c stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `lwc1` at 0x821820 loads 4 bytes from a2 (arg2 at entry) +0xc.
  The `lwc1` at 0x821824 loads 4 bytes from a1 (arg1 at entry) +0xc.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0xc, including `swc1` at 0x82183c, `swc1` at 0x821844.
  The `bc1t` branch at 0x8217d0 targets 0x8217dc, is taken when f5(=[a1]) < f4(=[a2]) (c.lt.s at 0x8217c8), and falls through when not (f5(=[a1]) < f4(=[a2]) (c.lt.s at 0x8217c8)).
  The `bc1f` branch at 0x8217f0 targets 0x8217fc, is taken when not (f6(=[a1+4]) < f4(=[a2+4]) (c.lt.s at 0x8217e8)), and falls through when f6(=[a1+4]) < f4(=[a2+4]) (c.lt.s at 0x8217e8).
  The `bc1f` branch at 0x821810 targets 0x82181c, is taken when not (f5(=[a1+8]) < f6(=[a2+8]) (c.lt.s at 0x821808)), and falls through when f5(=[a1+8]) < f6(=[a2+8]) (c.lt.s at 0x821808).
  The `bc1f` branch at 0x821830 targets 0x821840, is taken when not (f5(=[a1+12]) < f6(=[a2+12]) (c.lt.s at 0x821828)), and falls through when f5(=[a1+12]) < f6(=[a2+12]) (c.lt.s at 0x821828).
  The return at 0x821838 has v0 = ?.
  The return at 0x821840 has v0 = ?.

- `PerformSetGreaterThanEqual` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x821880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x821880-0x821918 (152 bytes).
  It occupies 152 bytes.
  The `lwc1` at 0x821880 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lwc1` at 0x821884 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `swc1` at 0x8218a0 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lwc1` at 0x8218a4 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lwc1` at 0x8218a8 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `swc1` at 0x8218c4 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lwc1` at 0x8218c8 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lwc1` at 0x8218cc loads 4 bytes from a2 (arg2 at entry) +0x8.
  The `swc1` at 0x8218e8 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `lwc1` at 0x8218ec loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lwc1` at 0x8218f0 loads 4 bytes from a2 (arg2 at entry) +0xc.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0xc, including `swc1` at 0x821908, `swc1` at 0x821914.
  The `bc1t` branch at 0x821890 targets 0x8218a0, is taken when f0(=[a2]) <= f1(=[a1]) (c.le.s at 0x821888), and falls through when not (f0(=[a2]) <= f1(=[a1]) (c.le.s at 0x821888)).
  The `bc1t` branch at 0x8218b4 targets 0x8218c4, is taken when f2(=[a2+4]) <= f3(=[a1+4]) (c.le.s at 0x8218ac), and falls through when not (f2(=[a2+4]) <= f3(=[a1+4]) (c.le.s at 0x8218ac)).
  The `bc1t` branch at 0x8218d8 targets 0x8218e8, is taken when f5(=[a2+8]) <= f6(=[a1+8]) (c.le.s at 0x8218d0), and falls through when not (f5(=[a2+8]) <= f6(=[a1+8]) (c.le.s at 0x8218d0)).
  The `bc1f` branch at 0x8218fc targets 0x82190c, is taken when not (f7(=[a2+12]) <= f8(=[a1+12]) (c.le.s at 0x8218f4)), and falls through when f7(=[a2+12]) <= f8(=[a1+12]) (c.le.s at 0x8218f4).
  The return at 0x821904 has v0 = ?.
  The return at 0x821910 has v0 = ?.

- `PerformSetLessThan` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x821940 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x821940-0x8219d8 (152 bytes).
  It occupies 152 bytes.
  The `lwc1` at 0x821940 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x821944 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `swc1` at 0x821960 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lwc1` at 0x821964 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `lwc1` at 0x821968 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `swc1` at 0x821984 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lwc1` at 0x821988 loads 4 bytes from a2 (arg2 at entry) +0x8.
  The `lwc1` at 0x82198c loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `swc1` at 0x8219a8 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `lwc1` at 0x8219ac loads 4 bytes from a2 (arg2 at entry) +0xc.
  The `lwc1` at 0x8219b0 loads 4 bytes from a1 (arg1 at entry) +0xc.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0xc, including `swc1` at 0x8219c8, `swc1` at 0x8219d4.
  The `bc1t` branch at 0x821950 targets 0x821960, is taken when f0(=[a1]) < f1(=[a2]) (c.lt.s at 0x821948), and falls through when not (f0(=[a1]) < f1(=[a2]) (c.lt.s at 0x821948)).
  The `bc1t` branch at 0x821974 targets 0x821984, is taken when f2(=[a1+4]) < f3(=[a2+4]) (c.lt.s at 0x82196c), and falls through when not (f2(=[a1+4]) < f3(=[a2+4]) (c.lt.s at 0x82196c)).
  The `bc1t` branch at 0x821998 targets 0x8219a8, is taken when f5(=[a1+8]) < f6(=[a2+8]) (c.lt.s at 0x821990), and falls through when not (f5(=[a1+8]) < f6(=[a2+8]) (c.lt.s at 0x821990)).
  The `bc1f` branch at 0x8219bc targets 0x8219cc, is taken when not (f7(=[a1+12]) < f8(=[a2+12]) (c.lt.s at 0x8219b4)), and falls through when f7(=[a1+12]) < f8(=[a2+12]) (c.lt.s at 0x8219b4).
  The return at 0x8219c4 has v0 = ?.
  The return at 0x8219d0 has v0 = ?.

- `PerformMultiplyX2Add` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x821a00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x821a00-0x821a78 (120 bytes).
  It occupies 120 bytes.
  The `lwc1` at 0x821a00 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x821a04 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lwc1` at 0x821a10 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `swc1` at 0x821a1c stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lwc1` at 0x821a20 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `lwc1` at 0x821a24 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lwc1` at 0x821a2c loads 4 bytes from a3 (arg3 at entry) +0x4.
  The `swc1` at 0x821a38 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lwc1` at 0x821a3c loads 4 bytes from a2 (arg2 at entry) +0x8.
  The `lwc1` at 0x821a40 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `lwc1` at 0x821a48 loads 4 bytes from a3 (arg3 at entry) +0x8.
  The `swc1` at 0x821a54 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `lwc1` at 0x821a58 loads 4 bytes from a2 (arg2 at entry) +0xc.
  The `lwc1` at 0x821a5c loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lwc1` at 0x821a64 loads 4 bytes from a3 (arg3 at entry) +0xc.
  The `swc1` at 0x821a74 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The return at 0x821a70 has v0 = ?.

- `PerformMultiplyClamp` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x821a80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x821a80-0x821af4 (116 bytes).
  It occupies 116 bytes.
  The `lwc1` at 0x821a80 loads 4 bytes from a2 (arg2 at entry) +0xc.
  The `lwc1` at 0x821a84 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lwc1` at 0x821a88 loads 4 bytes from a3 (arg3 at entry) +0xc.
  The `lwc1` at 0x821a94 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `lwc1` at 0x821a9c loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0x821aa0 loads 4 bytes from a1 (arg1 at entry) +0x0.
  3 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x0, including `swc1` at 0x821ab8, `swc1` at 0x821acc, `swc1` at 0x821ae0.
  3 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0xc, including `swc1` at 0x821abc, `swc1` at 0x821ad0, `swc1` at 0x821ae4.
  3 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x8, including `swc1` at 0x821ac0, `swc1` at 0x821ad4, `swc1` at 0x821ae8.
  3 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x4, including `swc1` at 0x821ac8, `swc1` at 0x821adc, `swc1` at 0x821af0.
  The `bc1t` branch at 0x821a98 targets 0x821ae0, is taken when f4(=[a3+12]) < f0 (c.lt.s at 0x821a90), and falls through when not (f4(=[a3+12]) < f0 (c.lt.s at 0x821a90)).
  The `bc1f` branch at 0x821ab0 targets 0x821acc, is taken when not (f4 <= f5(=[a3]) (c.le.s at 0x821aa8)), and falls through when f4 <= f5(=[a3]) (c.le.s at 0x821aa8).
  The return at 0x821ac4 has v0 = ?.
  The return at 0x821ad8 has v0 = ?.
  The return at 0x821aec has v0 = ?.

- `PerformFlt2FixDX` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x821b00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x821b00-0x821b98 (152 bytes).
  It occupies 152 bytes.
  The `lwc1` at 0x821b0c loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `swc1` at 0x821b34 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lwc1` at 0x821b38 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `swc1` at 0x821b4c stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lwc1` at 0x821b50 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `swc1` at 0x821b64 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `lwc1` at 0x821b68 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `swc1` at 0x821b88 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `jalr` at 0x821b28 calls floor with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x821b40 calls floor with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x821b58 calls floor with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x821b70 calls floor with a0=?, a1=?, a2=?, a3=?.
  The return at 0x821b90 has v0 = ret(floor).

- `PerformFlt2FixDXRnd` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x821bc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x821bc0-0x821c74 (180 bytes).
  It occupies 180 bytes.
  The `lwc1` at 0x821bc8 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `swc1` at 0x821c00 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lwc1` at 0x821c04 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `swc1` at 0x821c1c stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lwc1` at 0x821c20 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `swc1` at 0x821c38 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `lwc1` at 0x821c3c loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `swc1` at 0x821c64 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `jalr` at 0x821bf4 calls floor with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x821c10 calls floor with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x821c2c calls floor with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x821c48 calls floor with a0=?, a1=?, a2=?, a3=?.
  The return at 0x821c6c has v0 = ret(floor).

- `PerformExpBase2DX` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x821c80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x821c80-0x821d1c (156 bytes).
  It occupies 156 bytes.
  3 such `lwc1` accesses load 4 bytes from a1 (arg1 at entry) +0xc, including `lwc1` at 0x821c88, `lwc1` at 0x821cc0, `lwc1` at 0x821ce8.
  The `swc1` at 0x821cbc stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `swc1` at 0x821ce4 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `swc1` at 0x821d08 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `swc1` at 0x821d0c stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `jalr` at 0x821ca0 calls floor with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x821cb0 calls pow with a0=?, a1=?, a2=?, a3=?; fp f12=0x4000000000000000, f13=ret(floor).
  The `jalr` at 0x821ccc calls floor with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x821cf0 calls pow with a0=?, a1=?, a2=?, a3=?; fp f12=0x4000000000000000.
  The return at 0x821d14 has v0 = ret(pow).

- `PerformLogBase2DX` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x821d40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x821d40-0x821df8 (184 bytes).
  It occupies 184 bytes.
  The `lwc1` at 0x821d48 loads 4 bytes from a1 (arg1 at entry) +0xc.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0xc, including `swc1` at 0x821d64, `swc1` at 0x821dd8.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x4, including `swc1` at 0x821d68, `swc1` at 0x821de8.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x8, including `swc1` at 0x821d6c, `swc1` at 0x821de0.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x0, including `swc1` at 0x821d70, `swc1` at 0x821db8.
  The `jalr` at 0x821d90 calls log with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x821da4 calls floor with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x821dbc calls pow with a0=?, a1=?, a2=?, a3=?; fp f12=0x4000000000000000.
  The `bc1f` branch at 0x821d5c targets 0x821d80, is taken when not (f4(=[a1+12]) == f1 (c.eq.s at 0x821d4c)), and falls through when f4(=[a1+12]) == f1 (c.eq.s at 0x821d4c).
  The return at 0x821d78 has v0 = ?.
  The return at 0x821df0 has v0 = ret(pow).

- `PerformExpBaseEFF` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x821e00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x821e00-0x821e48 (72 bytes).
  It occupies 72 bytes.
  The `lwc1` at 0x821e08 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `swc1` at 0x821e28 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `swc1` at 0x821e2c stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `swc1` at 0x821e30 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `swc1` at 0x821e34 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `jalr` at 0x821e18 calls exp with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x821e40 has v0 = ret(exp).

- `PerformLightCoeffDX` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x821e80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x821e80-0x821f4c (204 bytes).
  It occupies 204 bytes.
  The `swc1` at 0x821e88 stores 4 bytes to a0 (arg0 at entry) +0x0.
  2 such `lwc1` accesses load 4 bytes from a1 (arg1 at entry) +0x0, including `lwc1` at 0x821e90, `lwc1` at 0x821eb4.
  The `swc1` at 0x821eb0 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `lwc1` at 0x821ebc loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lwc1` at 0x821ec4 loads 4 bytes from a1 (arg1 at entry) +0x4.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x8, including `swc1` at 0x821ef0, `swc1` at 0x821f38.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0xc, including `swc1` at 0x821ef4, `swc1` at 0x821f3c.
  The `jalr` at 0x821f24 calls pow with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bc1t` branch at 0x821ea4 targets 0x821eb0, is taken when f4 < f7(=[a1]) (c.lt.s at 0x821e94), and falls through when not (f4 < f7(=[a1]) (c.lt.s at 0x821e94)).
  The `bc1f` branch at 0x821ec0 targets 0x821ef0, is taken when not (f4 < f1(=[a1]) (c.lt.s at 0x821eb8)), and falls through when f4 < f1(=[a1]) (c.lt.s at 0x821eb8).
  The `bc1f` branch at 0x821ed0 targets 0x821ef0, is taken when not (f4 < f5(=[a1+4]) (c.lt.s at 0x821ec8)), and falls through when f4 < f5(=[a1+4]) (c.lt.s at 0x821ec8).
  The `bc1f` branch at 0x821edc targets 0x821f08, is taken when (condition not analyzed), and falls through when (condition not analyzed).
  The `beq` branch at 0x821ee8 targets 0x821f1c and is always taken.
  The `bc1f` branch at 0x821f0c targets 0x821f18, is taken when (condition not analyzed), and falls through when (condition not analyzed).
  The return at 0x821f00 has v0 = ?.
  The return at 0x821f44 has v0 = ret(pow).

- `PerformPowerFuncFF` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x821f80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x821f80-0x821fcc (76 bytes).
  It occupies 76 bytes.
  The `lwc1` at 0x821f88 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `lwc1` at 0x821f8c loads 4 bytes from a3 (arg3 at entry) +0xc.
  The `swc1` at 0x821fb0 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `swc1` at 0x821fb4 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `swc1` at 0x821fb8 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `swc1` at 0x821fbc stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `jalr` at 0x821fa0 calls pow with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x821fc4 has v0 = ret(pow).

- `PerformRecipDX` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x822000 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x822000-0x822048 (72 bytes).
  It occupies 72 bytes.
  The `lwc1` at 0x822004 loads 4 bytes from a1 (arg1 at entry) +0xc.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0xc, including `swc1` at 0x82201c, `swc1` at 0x82203c.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x8, including `swc1` at 0x822020, `swc1` at 0x822038.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x4, including `swc1` at 0x822024, `swc1` at 0x822034.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x0, including `swc1` at 0x82202c, `swc1` at 0x822044.
  The `bc1f` branch at 0x822014 targets 0x822030, is taken when not (f4(=[a1+12]) == f0 (c.eq.s at 0x822008)), and falls through when f4(=[a1+12]) == f0 (c.eq.s at 0x822008).
  The return at 0x822028 has v0 = ?.
  The return at 0x822040 has v0 = ?.

- `PerformRecipFF` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x822080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x822080-0x8220c4 (68 bytes).
  It occupies 68 bytes.
  The `lwc1` at 0x822084 loads 4 bytes from a1 (arg1 at entry) +0xc.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x0, including `swc1` at 0x822098, `swc1` at 0x8220c0.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0xc, including `swc1` at 0x82209c, `swc1` at 0x8220b8.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x8, including `swc1` at 0x8220a0, `swc1` at 0x8220b4.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x4, including `swc1` at 0x8220a8, `swc1` at 0x8220b0.
  The `bc1f` branch at 0x822090 targets 0x8220ac, is taken when not (f4(=[a1+12]) == f6 (c.eq.s at 0x822088)), and falls through when f4(=[a1+12]) == f6 (c.eq.s at 0x822088).
  The return at 0x8220a4 has v0 = ?.
  The return at 0x8220bc has v0 = ?.

- `PerformRecipSqrtDX` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x822100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x822100-0x822158 (88 bytes).
  It occupies 88 bytes.
  The `lwc1` at 0x822104 loads 4 bytes from a1 (arg1 at entry) +0xc.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0xc, including `swc1` at 0x82211c, `swc1` at 0x82214c.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x8, including `swc1` at 0x822120, `swc1` at 0x822148.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x4, including `swc1` at 0x822124, `swc1` at 0x822144.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x0, including `swc1` at 0x82212c, `swc1` at 0x822154.
  The `bc1f` branch at 0x822114 targets 0x822130, is taken when not (f4(=[a1+12]) == f0 (c.eq.s at 0x822108)), and falls through when f4(=[a1+12]) == f0 (c.eq.s at 0x822108).
  The return at 0x822128 has v0 = ?.
  The return at 0x822150 has v0 = ?.

- `PerformRecipSqrtFF` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x822180 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x822180-0x822208 (136 bytes).
  It occupies 136 bytes.
  The `lwc1` at 0x822184 loads 4 bytes from a1 (arg1 at entry) +0xc.
  3 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x4, including `swc1` at 0x8221bc, `swc1` at 0x8221ec, `swc1` at 0x822204.
  3 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x8, including `swc1` at 0x8221c0, `swc1` at 0x8221e4, `swc1` at 0x8221f8.
  3 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0xc, including `swc1` at 0x8221c4, `swc1` at 0x8221e0, `swc1` at 0x8221f4.
  3 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x0, including `swc1` at 0x8221cc, `swc1` at 0x8221dc, `swc1` at 0x8221f0.
  The `bc1t` branch at 0x822198 targets 0x8221f0, is taken when f4(=[a1+12]) == f7 (c.eq.s at 0x822188), and falls through when not (f4(=[a1+12]) == f7 (c.eq.s at 0x822188)).
  The `bc1f` branch at 0x8221a8 targets 0x8221d0, is taken when not (f7 < f4 (c.lt.s at 0x8221a0)), and falls through when f7 < f4 (c.lt.s at 0x8221a0).
  The return at 0x8221c8 has v0 = ?.
  The return at 0x8221e8 has v0 = ?.
  The return at 0x822200 has v0 = ?.

- `PerformMEMultiply` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x822240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x822240-0x822260 (32 bytes).
  It occupies 32 bytes.
  The `lwc1` at 0x822240 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lwc1` at 0x822244 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `swc1` at 0x82224c stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `swc1` at 0x822250 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `swc1` at 0x822254 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `swc1` at 0x82225c stores 4 bytes to a0 (arg0 at entry) +0x0.
  The return at 0x822258 has v0 = ?.

- `PerformExpBase2FullDX` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x822280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x822280-0x8222c8 (72 bytes).
  It occupies 72 bytes.
  The `lwc1` at 0x822288 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `swc1` at 0x8222ac stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `swc1` at 0x8222b0 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `swc1` at 0x8222b4 stores 4 bytes to a0 (arg0 at entry) +0x8.
  The `swc1` at 0x8222b8 stores 4 bytes to a0 (arg0 at entry) +0x4.
  The `jalr` at 0x82229c calls pow with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3); fp f12=0x4000000000000000.
  The return at 0x8222c0 has v0 = ret(pow).

- `PerformLogBase2FullDX` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x822300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x822300-0x82237c (124 bytes).
  It occupies 124 bytes.
  The `lwc1` at 0x822308 loads 4 bytes from a1 (arg1 at entry) +0xc.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0xc, including `swc1` at 0x822324, `swc1` at 0x822364.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x8, including `swc1` at 0x822328, `swc1` at 0x822368.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x4, including `swc1` at 0x82232c, `swc1` at 0x82236c.
  2 such `swc1` accesses store 4 bytes to a0 (arg0 at entry) +0x0, including `swc1` at 0x822330, `swc1` at 0x822360.
  The `jalr` at 0x822348 calls log with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bc1f` branch at 0x82231c targets 0x822340, is taken when not (f5(=[a1+12]) == f1 (c.eq.s at 0x82230c)), and falls through when f5(=[a1+12]) == f1 (c.eq.s at 0x82230c).
  The return at 0x822338 has v0 = ?.
  The return at 0x822374 has v0 = ret(log).

- `CHECKSUM_ADD3` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x84bbc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x84bbc0-0x84bbdc (28 bytes).
  It occupies 28 bytes.
  The return at 0x84bbd4 has v0 = ?.

- `CHECKSUM_ADD5` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x84bc00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x84bc00-0x84bc2c (44 bytes).
  It occupies 44 bytes.
  The return at 0x84bc24 has v0 = ?.

- `ConvertTileFlags` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x860900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x860900-0x8609a0 (160 bytes).
  It occupies 160 bytes.
  7 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0x860910, `sw` at 0x860934, `sw` at 0x860950.
  6 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x0, including `sw` at 0x86093c, `sw` at 0x860958, `sw` at 0x860968.
  The `beq` branch at 0x86091c targets 0x860940, is taken when a7(?) == a5(=0x1), and falls through when a7(?) != a5(=0x1).
  The `beq` branch at 0x860924 targets 0x86096c, is taken when a4(?) == a5(=0x1), and falls through when a4(?) != a5(=0x1).
  The `beq` branch at 0x86092c targets 0x86095c, is taken when a4(?) == a6(=0x2), and falls through when a4(?) != a6(=0x2).
  The `beq` branch at 0x860940 targets 0x860990, is taken when a4(?) == a5(=0x1), and falls through when a4(?) != a5(=0x1).
  The `beq` branch at 0x860948 targets 0x860980, is taken when a4(?) == t0(=0x2), and falls through when a4(?) != t0(=0x2).
  The return at 0x860938 has v0 = ?.
  The return at 0x860954 has v0 = ?.
  The return at 0x860964 has v0 = ?.
  The return at 0x860970 has v0 = ?.
  The return at 0x860988 has v0 = ?.
  The return at 0x860998 has v0 = ?.
  The instructions from 0x860978 to 0x86097c are not reached by any path from the entry, and their branches are not listed.

- `__fglDRMPM4Alloc` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8627c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8627c0-0x862828 (104 bytes).
  It occupies 104 bytes.
  The `lw` at 0x8627c8 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x8627cc loads 4 bytes from [a0+8] +0x10.
  The `lw` at 0x8627d4 loads 4 bytes from [a0+8] +0x4.
  The `lw` at 0x8627e0 loads 4 bytes from [a0+8] +0x8.
  The `lw` at 0x8627ec loads 4 bytes from [a0+8] +0x14.
  The `lw` at 0x862808 loads 4 bytes from a0 (arg0 at entry) +0xc.
  Calls firegl_PM4Alloc via got with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a0+8], a5=[[a0+8]+4] (`jr` at 0x862818).
  The `blez` branch at 0x8627c4 targets 0x862820, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `beq` branch at 0x8627f8 targets 0x862814, is taken when a7(?) >= t0(=[[a0+8]+8]) (unsigned), and falls through when a7(?) < t0(=[[a0+8]+8]) (unsigned).
  The `bne` branch at 0x862800 targets 0x862818, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The return at 0x86280c has v0 = ([a0+12] + ([[a0+8]+4] << 0x2)).
  The return at 0x862820 has v0 = 0x0.

- `__fglDRMPM4Queue` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x862840 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x862840-0x862a28 (488 bytes).
  It occupies 488 bytes.
  The `lw` at 0x862848 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x862864 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x86287c loads 4 bytes from [a0+8] +0x10.
  6 such `sw` accesses store 4 bytes to ?, including `sw` at 0x8628a4, `sw` at 0x8628bc, `sw` at 0x86296c.
  3 such `lw` accesses load 4 bytes from [a0+8] +0x4, including `lw` at 0x8628c0, `lw` at 0x8629e4, `lw` at 0x862a24.
  5 such `lw` accesses load 4 bytes from [a0+16] +0x200, including `lw` at 0x8628c4, `lw` at 0x8628e4, `lw` at 0x8628fc.
  The `lw` at 0x862910 loads 4 bytes from [a0+8] +0x14.
  The `lw` at 0x862918 loads 4 bytes from ?.
  The `sw` at 0x86291c stores 4 bytes to [a0+8] +0x18.
  The `lw` at 0x862920 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `sw` at 0x862958 stores 4 bytes to [a0+8] +0x4.
  The `sw` at 0x862964 stores 4 bytes to [a0+8] +0x14.
  The `jalr` at 0x8629dc calls sginap with a0=0x0, a1=?, a2=?, a3=?, a4=[[a0+8]+4].
  The `jalr` at 0x862a14 calls fprintf with a0=sym(__iob)+32, a1=0xb77870, a2=?, a3=?, a4=[[a0+8]+4].
  The `beq` branch at 0x862878 targets 0x862990, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x862888 targets 0x8628c0, is taken when (a5(=[[a0+8]+16]) & at(?)) == 0, and falls through when (a5(=[[a0+8]+16]) & at(?)) != 0.
  The `beq` branch at 0x8628a0 targets 0x8628c0, is taken when (a5(=[[a0+8]+16]) & v0(?)) == 0, and falls through when (a5(=[[a0+8]+16]) & v0(?)) != 0.
  The `bne` branch at 0x8628b8 targets 0x862890, is taken when (a5(=[[a0+8]+16]) & v1(?)) != 0, and falls through when (a5(=[[a0+8]+16]) & v1(?)) == 0.
  The `bne` branch at 0x8628c8 targets 0x8628e4, is taken when a1(=[[a0+16]+512]) != a4(=[[a0+8]+4]), and falls through when a1(=[[a0+16]+512]) == a4(=[[a0+8]+4]).
  The `beq` branch at 0x8628d0 targets 0x86290c and is always taken.
  The `beq` branch at 0x8628dc targets 0x862908, is taken when a3(?) >= s2(=0x10000000) (unsigned), and falls through when a3(?) < s2(=0x10000000) (unsigned).
  The `beq` branch at 0x8628e8 targets 0x862908, is taken when a5(=[[a0+16]+512]) == a4(=[[a0+8]+4]), and falls through when a5(=[[a0+16]+512]) != a4(=[[a0+8]+4]).
  The `beq` branch at 0x8628f4 targets 0x862908, is taken when a3(?) >= s2(=0x10000000) (unsigned), and falls through when a3(?) < s2(=0x10000000) (unsigned).
  The `bne` branch at 0x862900 targets 0x8628d8, is taken when a7(=[[a0+16]+512]) != a4(=[[a0+8]+4]), and falls through when a7(=[[a0+16]+512]) == a4(=[[a0+8]+4]).
  The `beq` branch at 0x862908 targets 0x8629b0, is taken when a3(?) == s2(=0x10000000), and falls through when a3(?) != s2(=0x10000000).
  The `bne` branch at 0x862960 targets 0x862990, is taken when t0(?) < 0x4 (unsigned), and falls through when t0(?) >= 0x4 (unsigned).
  The `beq` branch at 0x8629b4 targets 0x86290c, is taken when a7(=[[a0+16]+512]) == a4(=[[a0+8]+4]), and falls through when a7(=[[a0+16]+512]) != a4(=[[a0+8]+4]).
  The `beq` branch at 0x8629c0 targets 0x8629d4 and is always taken.
  The `beq` branch at 0x8629cc targets 0x8629fc, is taken when a1(?) >= s2(=0x10000000) (unsigned), and falls through when a1(?) < s2(=0x10000000) (unsigned).
  The `bne` branch at 0x8629f4 targets 0x8629c8, is taken when t1(=[[a0+16]+512]) != a4(=[[a0+8]+4]), and falls through when t1(=[[a0+16]+512]) == a4(=[[a0+8]+4]).
  The `bne` branch at 0x8629fc targets 0x862910, is taken when a1(?) != s2(=0x10000000), and falls through when a1(?) == s2(=0x10000000).
  The `beq` branch at 0x862a20 targets 0x86290c and is always taken.
  The return at 0x862988 has v0 = ?.
  The return at 0x8629a8 has v0 = ?.

- `__fglDRMPM4Submit` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x862a40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x862a40-0x862a88 (72 bytes).
  It occupies 72 bytes.
  The `lw` at 0x862a64 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x862a68 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0x862a6c loads 4 bytes from [a0+8] +0x4.
  The `sw` at 0x862a70 stores 4 bytes to [a0+4] +0x714.
  The `bgezall` at 0x862a58 calls __fglDRMPM4Queue [0x862840] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x862a80 has v0 = [a0+8].

- `CHECKSUM_ADD4` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x866a40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x866a40-0x866a64 (36 bytes).
  It occupies 36 bytes.
  The return at 0x866a5c has v0 = ?.

- `ParseSymbol` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x89b380 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x89b380-0x89be18 (2712 bytes).
  It occupies 2712 bytes.
  The `lw` at 0x89b380 loads 4 bytes from a3 (arg3 at entry) +0xc.
  The `lw` at 0x89b3c0 loads 4 bytes from a1 (arg1 at entry) +0x60.
  The `sw` at 0x89b3c8 stores 4 bytes to a1 (arg1 at entry) +0x60.
  The `lbu` at 0x89b3cc loads 1 byte from a3 (arg3 at entry) +0x60.
  The `lw` at 0x89b3e4 loads 4 bytes from a2 (arg2 at entry) +0x24c.
  The `sw` at 0x89b3f0 stores 4 bytes to a2 (arg2 at entry) +0x24c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x89b3f8, `lw` at 0x89b5bc.
  2 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x8, including `lw` at 0x89b408, `lw` at 0x89b5cc.
  2 such `sb` accesses store 1 byte to a3 (arg3 at entry) +0x21, including `sb` at 0x89b418, `sb` at 0x89b5dc.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0x89b420, `sw` at 0x89b5e4.
  24 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x58, including `lw` at 0x89b43c, `lw` at 0x89b4b0, `lw` at 0x89b4cc.
  6 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x5c, including `lw` at 0x89b440, `lw` at 0x89b604, `lw` at 0x89b790.
  6 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x5c, including `sw` at 0x89b450, `sw` at 0x89b614, `sw` at 0x89b79c.
  42 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x54, including `lw` at 0x89b460, `lw` at 0x89b4f0, `lw` at 0x89b510.
  12 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x89b480, `lbu` at 0x89b640, `lbu` at 0x89b7c8.
  6 such `sb` accesses store 1 byte to a1 (arg1 at entry) +0x14, including `sb` at 0x89b4a8, `sb` at 0x89b668, `sb` at 0x89b7f0.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4, including `lw` at 0x89b4ac, `lw` at 0x89b66c, `lw` at 0x89b7f4.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc988, including `lw` at 0x89b4dc, `lw` at 0x89b69c, `lw` at 0x89b824.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc, including `lw` at 0x89b504, `lw` at 0x89b6c4, `lw` at 0x89b84c.
  6 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x54, including `sw` at 0x89b538, `sw` at 0x89b6f8, `sw` at 0x89b87c.
  6 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x58, including `sw` at 0x89b544, `sw` at 0x89b704, `sw` at 0x89b874.
  4 such `sw` accesses store 4 bytes to ret(?) +0x10, including `sw` at 0x89b54c, `sw` at 0x89b70c, `sw` at 0x89bc7c.
  24 such `sb` accesses store 1 byte to ?, including `sb` at 0x89b55c, `sb` at 0x89b574, `sb` at 0x89b58c.
  4 such `sw` accesses store 4 bytes to ret(?) +0x14, including `sw` at 0x89b564, `sw` at 0x89b724, `sw` at 0x89bc90.
  4 such `sw` accesses store 4 bytes to ret(?) +0x18, including `sw` at 0x89b57c, `sw` at 0x89b73c, `sw` at 0x89bca8.
  4 such `sw` accesses store 4 bytes to ret(?) +0x1c, including `sw` at 0x89b594, `sw` at 0x89b754, `sw` at 0x89bcc0.
  The `lw` at 0x89b5b0 loads 4 bytes from a1 (arg1 at entry) +0x64.
  The `sw` at 0x89b5b8 stores 4 bytes to a1 (arg1 at entry) +0x64.
  The `lw` at 0x89b770 loads 4 bytes from a2 (arg2 at entry) +0x244.
  The `sw` at 0x89b784 stores 4 bytes to a2 (arg2 at entry) +0x244.
  4 such `sw` accesses store 4 bytes to ret(?) +0x8, including `sw` at 0x89b888, `sw` at 0x89bae8, `sw` at 0x89bd8c.
  8 such `sw` accesses store 4 bytes to ret(?) +0x4, including `sw` at 0x89b890, `sw` at 0x89b9c4, `sw` at 0x89baf0.
  The `jalr` at 0x89b3fc calls (unknown callee) with a0=0x20, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[a3+96]:1, a5=[a1+96]+1.
  The `jalr` at 0x89b4bc calls (unknown callee) with a0=[a2+88]+16, a1=0x2c, a2=[a2+92]+4, a3=?.
  The `jalr` at 0x89b4f8 calls (unknown callee) with a0=ret(?), a1=[a2+84], a2=?, a3=[a2+88].
  The `jalr` at 0x89b50c calls (unknown callee) with a0=[a2+84], a1=?, a2=?, a3=?.
  The `jalr` at 0x89b5c0 calls (unknown callee) with a0=0x20, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x89b67c calls (unknown callee) with a0=[a2+88]+16, a1=0x2c, a2=0x87c0, a3=?, a4=a2 at entry (arg2).
  The `jalr` at 0x89b6b8 calls (unknown callee) with a0=ret(?), a1=[a2+84], a2=?, a3=[a2+88].
  The `jalr` at 0x89b6cc calls (unknown callee) with a0=[a2+84], a1=?, a2=?, a3=?.
  The `jalr` at 0x89b804 calls (unknown callee) with a0=[a2+88]+16, a1=0x2c, a2=?, a3=?.
  The `jalr` at 0x89b840 calls (unknown callee) with a0=ret(?), a1=[a2+84], a2=?, a3=[a2+88].
  The `jalr` at 0x89b854 calls (unknown callee) with a0=[a2+84], a1=?, a2=?, a3=?.
  The `jalr` at 0x89b93c calls (unknown callee) with a0=[a2+88]+16, a1=0x2c, a2=?, a3=?, a4=a2 at entry (arg2).
  The `jalr` at 0x89b978 calls (unknown callee) with a0=ret(?), a1=[a2+84], a2=?, a3=[a2+88].
  The `jalr` at 0x89b98c calls (unknown callee) with a0=[a2+84], a1=?, a2=?, a3=?.
  The `jalr` at 0x89ba64 calls (unknown callee) with a0=[a2+88]+16, a1=0x2c, a2=?, a3=?, a4=a2 at entry (arg2).
  The `jalr` at 0x89baa0 calls (unknown callee) with a0=ret(?), a1=[a2+84], a2=?, a3=[a2+88].
  The `jalr` at 0x89bab4 calls (unknown callee) with a0=[a2+84], a1=?, a2=?, a3=?.
  The `jalr` at 0x89bb90 calls (unknown callee) with a0=[a2+88]+16, a1=0x2c, a2=0x87c0, a3=?, a4=a2 at entry (arg2).
  The `jalr` at 0x89bbcc calls (unknown callee) with a0=ret(?), a1=[a2+84], a2=?, a3=[a2+88].
  The `jalr` at 0x89bbe0 calls (unknown callee) with a0=[a2+84], a1=?, a2=?, a3=?.
  The `beq` branch at 0x89b388 targets 0x89b3c0, is taken when v0(=[a3+12]) == at(=0x87c2), and falls through when v0(=[a3+12]) != at(=0x87c2).
  The `beq` branch at 0x89b3a4 targets 0x89b5b0, is taken when v0(=[a3+12]) == v1(=0x87c3), and falls through when v0(=[a3+12]) != v1(=0x87c3).
  The `beq` branch at 0x89b3dc targets 0x89b770, is taken when a4(=[a3+96]:1) == 0, and falls through when a4(=[a3+96]:1) != 0.
  The `beq` branch at 0x89b41c targets 0x89b788, is taken when a6(=[a3+8]) == ra(=0x87be), and falls through when a6(=[a3+8]) != ra(=0x87be).
  The `beq` branch at 0x89b428 targets 0x89b8c0, is taken when a6(=[a3+8]) == a0(=0x87bf), and falls through when a6(=[a3+8]) != a0(=0x87bf).
  The `bne` branch at 0x89b430 targets 0x89b3b0, is taken when a6(=[a3+8]) != a1(=0x87c0), and falls through when a6(=[a3+8]) == a1(=0x87c0).
  The `beq` branch at 0x89b44c targets 0x89b49c, is taken when t0(=[a2+88]-3) == 0, and falls through when t0(=[a2+88]-3) != 0.
  The `beq` branch at 0x89b484 targets 0x89bc40, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `bne` branch at 0x89b494 targets 0x89b480, is taken when a3(?) < a7(?) (unsigned), and falls through when a3(?) >= a7(?) (unsigned).
  The `beq` branch at 0x89b5a8 targets 0x89b3b0 and is always taken.
  The `beq` branch at 0x89b5e0 targets 0x89b9e8, is taken when a6(=[a3+8]) == at(=0x87be), and falls through when a6(=[a3+8]) != at(=0x87be).
  The `beq` branch at 0x89b5ec targets 0x89bb14, is taken when a6(=[a3+8]) == a1(=0x87bf), and falls through when a6(=[a3+8]) != a1(=0x87bf).
  The `bne` branch at 0x89b5f4 targets 0x89b3b0, is taken when a6(=[a3+8]) != a2(=0x87c0), and falls through when a6(=[a3+8]) == a2(=0x87c0).
  The `beq` branch at 0x89b610 targets 0x89b65c, is taken when t0(=[a2+88]-3) == 0, and falls through when t0(=[a2+88]-3) != 0.
  The `beq` branch at 0x89b644 targets 0x89bcdc, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `bne` branch at 0x89b654 targets 0x89b640, is taken when a3(?) < a7(?) (unsigned), and falls through when a3(?) >= a7(?) (unsigned).
  The `beq` branch at 0x89b768 targets 0x89b3b0 and is always taken.
  The `beq` branch at 0x89b780 targets 0x89b3f4 and is always taken.
  The `beq` branch at 0x89b798 targets 0x89b7e4, is taken when t1(=[a2+88]) == 0, and falls through when t1(=[a2+88]) != 0.
  The `beq` branch at 0x89b7d0 targets 0x89bd80, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0x89b7dc targets 0x89b7c8, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `beq` branch at 0x89b8d0 targets 0x89b91c, is taken when t1(=[a2+88]) == 0, and falls through when t1(=[a2+88]) != 0.
  The `beq` branch at 0x89b908 targets 0x89bda8, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0x89b914 targets 0x89b900, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `beq` branch at 0x89b9f8 targets 0x89ba44, is taken when t1(=[a2+88]) == 0, and falls through when t1(=[a2+88]) != 0.
  The `beq` branch at 0x89ba30 targets 0x89bdcc, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x89ba3c targets 0x89ba28, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `beq` branch at 0x89bb24 targets 0x89bb70, is taken when t1(=[a2+88]) == 0, and falls through when t1(=[a2+88]) != 0.
  The `beq` branch at 0x89bb5c targets 0x89bdf4, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x89bb68 targets 0x89bb54, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x89bc44 targets 0x89b4a0, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x89bc50 targets 0x89b4a0, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0x89bc5c targets 0x89b49c, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x89bcd4 targets 0x89b3b0 and is always taken.
  The `bne` branch at 0x89bce0 targets 0x89b660, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x89bcec targets 0x89b660, is taken when ra(?) != 0, and falls through when ra(?) == 0.
  The `bne` branch at 0x89bcf8 targets 0x89b65c, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0x89bd70 targets 0x89b3b0 and is always taken.
  The return at 0x89b3b0 has v0 = one of [a3+12], ret(?).
  The return at 0x89b8ac has v0 = ?.
  The return at 0x89b9e0 has v0 = ?.
  The return at 0x89bb0c has v0 = ?.
  The return at 0x89bc34 has v0 = ?.
  The return at 0x89bda0 has v0 = ret(?).
  The return at 0x89bdc4 has v0 = ?.
  The return at 0x89bdec has v0 = ret(?).
  The return at 0x89be10 has v0 = ret(?).
  The instructions from 0x89b3b8 to 0x89b3bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x89b8b4 to 0x89b8bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x89bc3c to 0x89bc3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x89bd78 to 0x89bd7c are not reached by any path from the entry, and their branches are not listed.

- `ParseArgument` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x89be40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x89be40-0x89bfa4 (356 bytes).
  It occupies 356 bytes.
  The `lw` at 0x89be44 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `lw` at 0x89be7c loads 4 bytes from a3 (arg3 at entry) +0x4.
  3 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x24, including `lw` at 0x89be84, `lw` at 0x89bed4, `lw` at 0x89bf18.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x89be94, `lw` at 0x89be98, `lw` at 0x89be9c.
  The `lbu` at 0x89bea4 loads 1 byte from ?.
  The `jalr` at 0x89becc calls __glVertexShaderLookupSymbolIndex [0x693080] with a0=a1+32, a1=?, a2=?, a3=a3 at entry (arg3), a7=[a1+36].
  The `bgezall` at 0x89bf10 calls ParseSymbol [0x89b380] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?, a7=[a1+36].
  The `bne` branch at 0x89be74 targets 0x89bf40, is taken when at(=[a3]) != v1(=0x2), and falls through when at(=[a3]) == v1(=0x2).
  The `bne` branch at 0x89bea0 targets 0x89bf40, is taken when a0(?) != a4, and falls through when a0(?) == a4.
  The `bne` branch at 0x89bea8 targets 0x89bf40, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `bne` branch at 0x89beb0 targets 0x89becc, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bne` branch at 0x89bebc targets 0x89bf68, is taken when a2(?) < 0x2 (unsigned), and falls through when a2(?) >= 0x2 (unsigned).
  The `beq` branch at 0x89bec4 targets 0x89bedc and is always taken.
  The `beq` branch at 0x89bef4 targets 0x89bf40, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `bne` branch at 0x89bf38 targets 0x89bf00, is taken when s2(?) < t8(?) (unsigned), and falls through when s2(?) >= t8(?) (unsigned).
  The `bgezl` branch at 0x89bf9c targets 0x89b380 and is always taken.
  The return at 0x89bf60 has v0 = one of ?, [a3+4], ret(ParseSymbol).

- `AllocateTempReg` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x89bfc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x89bfc0-0x89c780 (1984 bytes).
  It occupies 1984 bytes.
  The `lw` at 0x89bfc0 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `lw` at 0x89bfd4 loads 4 bytes from a3 (arg3 at entry) +0x4.
  4 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x24, including `lw` at 0x89bfdc, `lw` at 0x89c030, `lw` at 0x89c690.
  7 such `lw` accesses load 4 bytes from ?, including `lw` at 0x89bfec, `lw` at 0x89c008, `lw` at 0x89c044.
  8 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x89bffc, `lbu` at 0x89c098, `lbu` at 0x89c260.
  7 such `sb` accesses store 1 byte to ?, including `sb` at 0x89c02c, `sb` at 0x89c198, `sb` at 0x89c3f8.
  The `lw` at 0x89c034 loads 4 bytes from a1 (arg1 at entry) +0x68.
  The `sw` at 0x89c040 stores 4 bytes to a1 (arg1 at entry) +0x68.
  12 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x50, including `lw` at 0x89c064, `lw` at 0x89c0c4, `lw` at 0x89c0e4.
  42 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x4c, including `lw` at 0x89c080, `lw` at 0x89c108, `lw` at 0x89c128.
  3 such `sb` accesses store 1 byte to a1 (arg1 at entry) +0x14, including `sb` at 0x89c0b8, `sb` at 0x89c340, `sb` at 0x89c490.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4, including `lw` at 0x89c0c0, `lw` at 0x89c348, `lw` at 0x89c498.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc988, including `lw` at 0x89c0f4, `lw` at 0x89c37c, `lw` at 0x89c4cc.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc, including `lw` at 0x89c11c, `lw` at 0x89c3a4, `lw` at 0x89c4f4.
  3 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x4c, including `sw` at 0x89c174, `sw` at 0x89c3d4, `sw` at 0x89c524.
  3 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x50, including `sw` at 0x89c184, `sw` at 0x89c3c8, `sw` at 0x89c51c.
  37 such `sw` accesses store 4 bytes to ?, including `sw` at 0x89c18c, `sw` at 0x89c1a4, `sw` at 0x89c1b0.
  7 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x2c8, including `lw` at 0x89c1e8, `lw` at 0x89c2c8, `lw` at 0x89c440.
  7 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x2c8, including `sw` at 0x89c1fc, `sw` at 0x89c2dc, `sw` at 0x89c458.
  The `lw` at 0x89c670 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0x89c0d4 calls (unknown callee) with a0=[a2+80]+16, a1=0x2c, a2=?, a3=a1 at entry (arg1).
  The `jalr` at 0x89c110 calls (unknown callee) with a0=ret(?), a1=[a2+76], a2=?, a3=[a2+80].
  The `jalr` at 0x89c124 calls (unknown callee) with a0=[a2+76], a1=?, a2=?, a3=?.
  The `jalr` at 0x89c35c calls (unknown callee) with a0=[a2+80]+16, a1=0x2c, a2=?, a3=a1 at entry (arg1).
  The `jalr` at 0x89c398 calls (unknown callee) with a0=ret(?), a1=[a2+76], a2=?, a3=[a2+80].
  The `jalr` at 0x89c3ac calls (unknown callee) with a0=[a2+76], a1=?, a2=?, a3=?.
  The `jalr` at 0x89c4ac calls (unknown callee) with a0=[a2+80]+16, a1=0x2c, a2=?, a3=a1 at entry (arg1).
  The `jalr` at 0x89c4e8 calls (unknown callee) with a0=ret(?), a1=[a2+76], a2=?, a3=[a2+80].
  The `jalr` at 0x89c500 calls (unknown callee) with a0=[a2+76], a1=?, a2=?, a3=?.
  The `jalr` at 0x89c680 calls (unknown callee) with a0=0x20, a1=?, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=0x87c4, a6=[a3+4].
  The `bne` branch at 0x89bfcc targets 0x89c208, is taken when at(=[a3]) != v1(=0x2), and falls through when at(=[a3]) == v1(=0x2).
  The `bne` branch at 0x89bff4 targets 0x89c208, is taken when a4(?) != a5(=0x87c4), and falls through when a4(?) == a5(=0x87c4).
  The `bne` branch at 0x89c000 targets 0x89c208, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `beq` branch at 0x89c018 targets 0x89c670, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x89c04c targets 0x89c210, is taken when v0(?) == t3(=0x87be), and falls through when v0(?) != t3(=0x87be).
  The `beq` branch at 0x89c054 targets 0x89c2e8, is taken when v0(?) == v1(=0x87bf), and falls through when v0(?) != v1(=0x87bf).
  The `bne` branch at 0x89c05c targets 0x89c208, is taken when v0(?) != a0(=0x87c0), and falls through when v0(?) == a0(=0x87c0).
  The `beq` branch at 0x89c06c targets 0x89c0b4, is taken when a7(=[a2+80]-3) == 0, and falls through when a7(=[a2+80]-3) != 0.
  The `beq` branch at 0x89c09c targets 0x89c594, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0x89c0ac targets 0x89c098, is taken when v0(?) < a6(?) (unsigned), and falls through when v0(?) >= a6(?) (unsigned).
  The `bne` branch at 0x89c1e0 targets 0x89c18c, is taken when a6(?) != a7(?), and falls through when a6(?) == a7(?).
  The `bne` branch at 0x89c1f4 targets 0x89c208, is taken when a5(=[a2+80]+3) < a6(=[a2+712]) (unsigned), and falls through when a5(=[a2+80]+3) >= a6(=[a2+712]) (unsigned).
  The `beq` branch at 0x89c218 targets 0x89c48c, is taken when t1(=[a2+80]) == 0, and falls through when t1(=[a2+80]) != 0.
  The `beq` branch at 0x89c244 targets 0x89c260 and is always taken.
  The `beq` branch at 0x89c258 targets 0x89c464, is taken when v0(?) >= a7(?) (unsigned), and falls through when v0(?) < a7(?) (unsigned).
  The `beq` branch at 0x89c264 targets 0x89c24c, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x89c274 targets 0x89c250, is taken when t8(?) >= 0x4 (unsigned), and falls through when t8(?) < 0x4 (unsigned).
  The `bne` branch at 0x89c2d0 targets 0x89c208, is taken when a1(?) < t9(=[a2+712]) (unsigned), and falls through when a1(?) >= t9(=[a2+712]) (unsigned).
  The `beq` branch at 0x89c2f0 targets 0x89c33c, is taken when t1(=[a2+80]) == 0, and falls through when t1(=[a2+80]) != 0.
  The `beq` branch at 0x89c328 targets 0x89c6b0, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0x89c334 targets 0x89c320, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x89c448 targets 0x89c208, is taken when a1(=[a2+80]) < at(=[a2+712]) (unsigned), and falls through when a1(=[a2+80]) >= at(=[a2+712]) (unsigned).
  The `beq` branch at 0x89c474 targets 0x89c72c, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0x89c484 targets 0x89c470, is taken when v0(?) < a7(?) (unsigned), and falls through when v0(?) >= a7(?) (unsigned).
  The `bne` branch at 0x89c578 targets 0x89c208, is taken when a1(=[a2+80]) < at(=[a2+712]) (unsigned), and falls through when a1(=[a2+80]) >= at(=[a2+712]) (unsigned).
  The `bne` branch at 0x89c598 targets 0x89c0b8, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0x89c5a4 targets 0x89c0b8, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0x89c5b0 targets 0x89c0b4, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x89c648 targets 0x89c5ec, is taken when v0(?) != a0(?), and falls through when v0(?) == a0(?).
  The `bne` branch at 0x89c660 targets 0x89c208, is taken when t9(?) < at(=[a2+712]) (unsigned), and falls through when t9(?) >= at(=[a2+712]) (unsigned).
  The `beq` branch at 0x89c668 targets 0x89c208 and is always taken.
  The `beq` branch at 0x89c6a8 targets 0x89c028 and is always taken.
  The `bne` branch at 0x89c714 targets 0x89c208, is taken when a1(?) < a5(=[a2+712]) (unsigned), and falls through when a1(?) >= a5(=[a2+712]) (unsigned).
  The `bne` branch at 0x89c76c targets 0x89c208, is taken when a1(?) < a2(=[a2+712]) (unsigned), and falls through when a1(?) >= a2(=[a2+712]) (unsigned).
  The `beq` branch at 0x89c778 targets 0x89c208 and is always taken.
  The return at 0x89c200 has v0 = [a3+4].
  The return at 0x89c208 has v0 = one of a1, ?, [a3+4], a2.
  The return at 0x89c2e0 has v0 = ?.
  The return at 0x89c45c has v0 = [a3+4].
  The return at 0x89c58c has v0 = [a3+4].
  The return at 0x89c724 has v0 = ?.

- `SymbolMatches` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x89c780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x89c780-0x89c7d4 (84 bytes).
  It occupies 84 bytes.
  The `lw` at 0x89c780 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0x89c790 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0x89c794 loads 4 bytes from a1 (arg1 at entry) +0x18.
  The `lw` at 0x89c798 loads 4 bytes from a1 (arg1 at entry) +0x24.
  The `lw` at 0x89c79c loads 4 bytes from a1 (arg1 at entry) +0x1c.
  The `lw` at 0x89c7a8 loads 4 bytes from a1 (arg1 at entry) +0x20.
  The `bne` branch at 0x89c788 targets 0x89c7cc, is taken when at(=[a0]) != v0(=0x2), and falls through when at(=[a0]) == v0(=0x2).
  The `beq` branch at 0x89c7a4 targets 0x89c7c4, is taken when v1(=[a1+24]) == a4(=[a0+4]), and falls through when v1(=[a1+24]) != a4(=[a0+4]).
  The `beq` branch at 0x89c7ac targets 0x89c7c4, is taken when a5(=[a1+28]) == a4(=[a0+4]), and falls through when a5(=[a1+28]) != a4(=[a0+4]).
  The `beq` branch at 0x89c7b4 targets 0x89c7c4, is taken when a6(=[a1+32]) == a4(=[a0+4]), and falls through when a6(=[a1+32]) != a4(=[a0+4]).
  The `bne` branch at 0x89c7bc targets 0x89c7cc, is taken when a7(=[a1+36]) != a4(=[a0+4]), and falls through when a7(=[a1+36]) == a4(=[a0+4]).
  The return at 0x89c7c4 has v0 = 0x1.
  The return at 0x89c7cc has v0 = 0x0.

- `FreeTempRegs` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x89c800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x89c800-0x89cb28 (808 bytes).
  It occupies 808 bytes.
  The `lw` at 0x89c810 loads 4 bytes from a0 (arg0 at entry) +0xccc0.
  The `lw` at 0x89c818 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x89c824 loads 4 bytes from ([a1] + ([a0+52416] << 0x2)) +0x0.
  The `lw` at 0x89c828 loads 4 bytes from [([a1] + ([a0+52416] << 0x2))] +0x0.
  2 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x50, including `lw` at 0x89c82c, `lw` at 0x89c8bc.
  The `lw` at 0x89c89c loads 4 bytes from a1 (arg1 at entry) +0x1c.
  15 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x4c, including `lw` at 0x89c8d0, `lw` at 0x89c914, `lw` at 0x89c938.
  The `lbu` at 0x89c8d8 loads 1 byte from ?.
  12 such `lw` accesses load 4 bytes from ?, including `lw` at 0x89c8e4, `lw` at 0x89c91c, `lw` at 0x89c940.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x18, including `lw` at 0x89c8f0, `lw` at 0x89cac4.
  4 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x24, including `lw` at 0x89c900, `lw` at 0x89c924, `lw` at 0x89c948.
  5 such `sb` accesses store 1 byte to ?, including `sb` at 0x89c910, `sb` at 0x89c934, `sb` at 0x89c958.
  5 such `sw` accesses store 4 bytes to ?, including `sw` at 0x89c994, `sw` at 0x89c9a0, `sw` at 0x89c9ac.
  The `lw` at 0x89c9c8 loads 4 bytes from a1 (arg1 at entry) +0x68.
  The `sw` at 0x89c9d4 stores 4 bytes to a1 (arg1 at entry) +0x68.
  The `bgezall` at 0x89c8ac calls SymbolMatches [0x89c780] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x89ca08 calls SymbolMatches [0x89c780] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x89ca20 calls SymbolMatches [0x89c780] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x89ca38 calls SymbolMatches [0x89c780] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x89c838 targets 0x89cb04, is taken when a4(=[[[([a1] + ([a0+52416] << 0x2))]]+80]) == 0, and falls through when a4(=[[[([a1] + ([a0+52416] << 0x2))]]+80]) != 0.
  The `beq` branch at 0x89c880 targets 0x89c8d0 and is always taken.
  The `beq` branch at 0x89c8b4 targets 0x89ca00, is taken when v0(=ret(SymbolMatches)) == 0, and falls through when v0(=ret(SymbolMatches)) != 0.
  The `beq` branch at 0x89c8c8 targets 0x89cae8, is taken when s2(?) >= a4(=[[[([a1] + ([a0+52416] << 0x2))]]+80]) (unsigned), and falls through when s2(?) < a4(=[[[([a1] + ([a0+52416] << 0x2))]]+80]) (unsigned).
  The `beq` branch at 0x89c8e0 targets 0x89c8c0, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x89c8e8 targets 0x89c9d8, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x89c8f8 targets 0x89c888, is taken when s4(=a2+1) < a3(=[a1+24]) (unsigned), and falls through when s4(=a2+1) >= a3(=[a1+24]) (unsigned).
  The `beq` branch at 0x89c9d0 targets 0x89c8bc and is always taken.
  The `bne` branch at 0x89c9e0 targets 0x89c8f0, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0x89c9e8 targets 0x89c8f0, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x89c9f0 targets 0x89c8f0, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x89c9f8 targets 0x89c900 and is always taken.
  The `bne` branch at 0x89ca10 targets 0x89c8bc, is taken when v0(=ret(SymbolMatches)) != 0, and falls through when v0(=ret(SymbolMatches)) == 0.
  The `bne` branch at 0x89ca28 targets 0x89c8bc, is taken when v0(=ret(SymbolMatches)) != 0, and falls through when v0(=ret(SymbolMatches)) == 0.
  The `beq` branch at 0x89ca40 targets 0x89cac0, is taken when v0(=ret(SymbolMatches)) == 0, and falls through when v0(=ret(SymbolMatches)) != 0.
  The `beq` branch at 0x89ca90 targets 0x89cac0, is taken when (t2(?) & 0xff) == 0, and falls through when (t2(?) & 0xff) != 0.
  The `beq` branch at 0x89caa0 targets 0x89cac0, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0x89caa8 targets 0x89cac4, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x89cabc targets 0x89cb18, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `beq` branch at 0x89cad4 targets 0x89cb18, is taken when ra(?) >= at(=[a1+24]) (unsigned), and falls through when ra(?) < at(=[a1+24]) (unsigned).
  The `beq` branch at 0x89cae0 targets 0x89c89c and is always taken.
  The `beq` branch at 0x89cb20 targets 0x89c8fc and is always taken.
  The return at 0x89cb10 has v0 = ?.

- `SameMemoryDifferentVector` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x89dcc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x89dcc0-0x89dd80 (192 bytes).
  It occupies 192 bytes.
  The `lw` at 0x89dcc0 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x89dcd0 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lw` at 0x89dce4 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `lw` at 0x89dcf0 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x89dd0c loads 4 bytes from a0 (arg0 at entry) +0x4.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x89dd20, `lw` at 0x89dd34.
  The `bne` branch at 0x89dcc8 targets 0x89dcdc, is taken when at(=[a1]) != a4(=0x2), and falls through when at(=[a1]) == a4(=0x2).
  The `beq` branch at 0x89dcd4 targets 0x89dce4, is taken when v0(=[a2]) == a4(=0x2), and falls through when v0(=[a2]) != a4(=0x2).
  The `beq` branch at 0x89dd04 targets 0x89dd68, is taken when a5(=[a1+4]) == a6(=[a2+4]), and falls through when a5(=[a1+4]) != a6(=[a2+4]).
  The `beq` branch at 0x89dd30 targets 0x89dd70, is taken when a1(?) == t2(=0x87c1), and falls through when a1(?) != t2(=0x87c1).
  The `beq` branch at 0x89dd38 targets 0x89dd50, is taken when a1(?) == a7(=0x87c2), and falls through when a1(?) != a7(=0x87c2).
  The `beq` branch at 0x89dd40 targets 0x89dd50, is taken when a1(?) == t0(=0x87c3), and falls through when a1(?) != t0(=0x87c3).
  The `beq` branch at 0x89dd50 targets 0x89dd60, is taken when a2(?) == a7(=0x87c2), and falls through when a2(?) != a7(=0x87c2).
  The `bne` branch at 0x89dd58 targets 0x89dd48, is taken when a2(?) != t1(=0x87c3), and falls through when a2(?) == t1(=0x87c3).
  The `bne` branch at 0x89dd70 targets 0x89dd38, is taken when a2(?) != t2(=0x87c1), and falls through when a2(?) == t2(=0x87c1).
  The return at 0x89dcdc has v0 = 0x0.
  The return at 0x89dd48 has v0 = 0x0.
  The return at 0x89dd60 has v0 = 0x1.
  The return at 0x89dd68 has v0 = 0x0.
  The return at 0x89dd78 has v0 = 0x1.

- `FindScratchRegister` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x89dd80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x89dd80-0x89df1c (412 bytes).
  It occupies 412 bytes.
  The `lw` at 0x89dd94 loads 4 bytes from a0 (arg0 at entry) +0xccc0.
  The `lw` at 0x89dd9c loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x89dda8 loads 4 bytes from ([a1] + ([a0+52416] << 0x2)) +0x0.
  The `lw` at 0x89ddac loads 4 bytes from [([a1] + ([a0+52416] << 0x2))] +0x0.
  4 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x50, including `lw` at 0x89ddb0, `lw` at 0x89de10, `lw` at 0x89de20.
  8 such `lw` accesses load 4 bytes from [[([a1] + ([a0+52416] << 0x2))]] +0x4c, including `lw` at 0x89ddd8, `lw` at 0x89de40, `lw` at 0x89de58.
  The `lbu` at 0x89ddf0 loads 1 byte from ?.
  The `sb` at 0x89de08 stores 1 byte to a1 (arg1 at entry) +0x14.
  The `lw` at 0x89de0c loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0x89de2c loads 4 bytes from a0 (arg0 at entry) +0xc988.
  The `lw` at 0x89de50 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `sw` at 0x89de74 stores 4 bytes to [[([a1] + ([a0+52416] << 0x2))]] +0x4c.
  The `sw` at 0x89de80 stores 4 bytes to [[([a1] + ([a0+52416] << 0x2))]] +0x50.
  The `sb` at 0x89de8c stores 1 byte to ?.
  5 such `sw` accesses store 4 bytes to ?, including `sw` at 0x89de9c, `sw` at 0x89dea8, `sw` at 0x89deb4.
  The `lw` at 0x89dedc loads 4 bytes from a1 (arg1 at entry) +0x68.
  The `sw` at 0x89deec stores 4 bytes to a1 (arg1 at entry) +0x68.
  The `jalr` at 0x89de18 calls (unknown callee) with a0=[[[([a1] + ([a0+52416] << 0x2))]]+80]+16, a1=0x2c, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a6=([[[([a1] + ([a0+52416] << 0x2))]]+80] << 0x2).
  The `jalr` at 0x89de48 calls (unknown callee) with a0=ret(?), a1=[[[([a1] + ([a0+52416] << 0x2))]]+76], a2=?, a3=[[[([a1] + ([a0+52416] << 0x2))]]+80].
  The `jalr` at 0x89de54 calls (unknown callee) with a0=[[[([a1] + ([a0+52416] << 0x2))]]+76], a1=?, a2=?, a3=?.
  The `beq` branch at 0x89ddc8 targets 0x89de08, is taken when a5(=[[[([a1] + ([a0+52416] << 0x2))]]+80]) == 0, and falls through when a5(=[[[([a1] + ([a0+52416] << 0x2))]]+80]) != 0.
  The `beq` branch at 0x89ddf8 targets 0x89defc, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x89de00 targets 0x89ddf0, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The return at 0x89def4 has v0 = [[[([a1] + ([a0+52416] << 0x2))]]+80].
  The return at 0x89df14 has v0 = ?.

- `FindValue` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8b7300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8b7300-0x8b7364 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x8b7310 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x8b731c loads 4 bytes from table(0xb84450) +0x0.
  The `lbu` at 0x8b7334 loads 1 byte from ?.
  The `beq` branch at 0x8b7338 targets 0x8b7350, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `bne` branch at 0x8b7340 targets 0x8b7334, is taken when a3(?) != a5(=sp-12), and falls through when a3(?) == a5(=sp-12).
  The return at 0x8b7348 has v0 = 0x0.
  The return at 0x8b735c has v0 = ?.

- `MatchValue` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8b7380 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8b7380-0x8b7410 (144 bytes).
  It occupies 144 bytes.
  The `lw` at 0x8b7390 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lbu` at 0x8b739c loads 1 byte from ?.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x8b73b8, `lw` at 0x8b73c4, `lw` at 0x8b73cc.
  The `lwc1` at 0x8b73bc loads 4 bytes from ?.
  The `lw` at 0x8b73c8 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0x8b73d0 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lwc1` at 0x8b73d8 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `beq` branch at 0x8b7394 targets 0x8b73b8 and is always taken.
  The `beq` branch at 0x8b73a4 targets 0x8b7400, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x8b73b0 targets 0x8b73f8, is taken when a4(?) == a7(=0x4), and falls through when a4(?) != a7(=0x4).
  The `bne` branch at 0x8b73c0 targets 0x8b739c, is taken when v0(?) != a6(=[a0]), and falls through when v0(?) == a6(=[a0]).
  The `bne` branch at 0x8b73d4 targets 0x8b739c, is taken when v1(=[a0+4]) != a1(?), and falls through when v1(=[a0+4]) == a1(?).
  The `bne` branch at 0x8b73dc targets 0x8b739c, is taken when t0(=[a0+8]) != a2(?), and falls through when t0(=[a0+8]) == a2(?).
  The `bc1f` branch at 0x8b73e8 targets 0x8b739c, is taken when (condition not analyzed), and falls through when (condition not analyzed).
  The `bne` branch at 0x8b7400 targets 0x8b73ac, is taken when t1(?) != a7(=0x4), and falls through when t1(?) == a7(=0x4).
  The `beq` branch at 0x8b7408 targets 0x8b73ac and is always taken.
  The return at 0x8b73f0 has v0 = ?.
  The return at 0x8b73f8 has v0 = ?.

- `RenameSimple` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8b7440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8b7440-0x8b7560 (288 bytes).
  It occupies 288 bytes.
  3 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8b7484, `lhu` at 0x8b74d8, `lhu` at 0x8b74dc.
  The `lw` at 0x8b750c loads 4 bytes from ret(FindValue) +0x0.
  The `lwc1` at 0x8b7514 loads 4 bytes from ret(FindValue) +0xc.
  The `lw` at 0x8b7534 loads 4 bytes from a0 (arg0 at entry) +0x8c.
  The `lw` at 0x8b753c loads 4 bytes from ret(FindValue) +0x4.
  The `sh` at 0x8b7554 stores 2 bytes to ?.
  The `bgezall` at 0x8b74f8 calls FindValue [0x8b7300] with a0=?, a1=?, a2=?, a3=?, a5=0x2.
  The `beq` branch at 0x8b748c targets 0x8b74d8, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0x8b7498 targets 0x8b7484, is taken when s1(?) != s4(=0x3), and falls through when s1(?) == s4(=0x3).
  The `bne` branch at 0x8b74a8 targets 0x8b7480, is taken when s3(?) != a5(=0x2), and falls through when s3(?) == a5(=0x2).
  The `beq` branch at 0x8b7504 targets 0x8b7494, is taken when v0(=ret(FindValue)) == 0, and falls through when v0(=ret(FindValue)) != 0.
  The `beq` branch at 0x8b7518 targets 0x8b7494, is taken when (a1(=[ret(FindValue)]) & 0x400) == 0, and falls through when (a1(=[ret(FindValue)]) & 0x400) != 0.
  The `bne` branch at 0x8b7520 targets 0x8b7494, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bc1f` branch at 0x8b752c targets 0x8b7494, is taken when (condition not analyzed), and falls through when (condition not analyzed).
  The `beq` branch at 0x8b7538 targets 0x8b754c, is taken when a3(=[a0+140]) == a5(=0x2), and falls through when a3(=[a0+140]) != a5(=0x2).
  The `bne` branch at 0x8b7544 targets 0x8b7494, is taken when (a1(=[ret(FindValue)+4]) & 0x8000) != 0, and falls through when (a1(=[ret(FindValue)+4]) & 0x8000) == 0.
  The `beq` branch at 0x8b7558 targets 0x8b748c and is always taken.
  The return at 0x8b74d0 has v0 = one of 0x0, 0x1.

- `MergeConsts` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8b7580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8b7580-0x8b7c78 (1784 bytes).
  It occupies 1784 bytes.
  15 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8b762c, `lhu` at 0x8b7630, `lhu` at 0x8b7640.
  3 such `lw` accesses load 4 bytes from ret(FindValue) +0x0, including `lw` at 0x8b76bc, `lw` at 0x8b7718, `lw` at 0x8b7774.
  3 such `lwc1` accesses load 4 bytes from ret(FindValue) +0x4, including `lwc1` at 0x8b7854, `lwc1` at 0x8b78e0, `lwc1` at 0x8b7994.
  45 such `sh` accesses store 2 bytes to ?, including `sh` at 0x8b78bc, `sh` at 0x8b78c4, `sh` at 0x8b78d8.
  3 such `lhu` accesses load 2 bytes from abs 0xb84490 (r300PSOptStd0Opnd_EXP), including `lhu` at 0x8b78c0, `lhu` at 0x8b7940, `lhu` at 0x8b79f0.
  3 such `lhu` accesses load 2 bytes from abs 0xb84492 (r300PSOptStd0Opnd_EXP+2), including `lhu` at 0x8b78c8, `lhu` at 0x8b7948, `lhu` at 0x8b79f8.
  6 such `lhu` accesses load 2 bytes from abs 0xb84494 (r300PSOptStd1Opnd_EXP), including `lhu` at 0x8b7970, `lhu` at 0x8b7a20, `lhu` at 0x8b7a50.
  6 such `lhu` accesses load 2 bytes from abs 0xb84496 (r300PSOptStd1Opnd_EXP+2), including `lhu` at 0x8b7978, `lhu` at 0x8b7a28, `lhu` at 0x8b7a58.
  6 such `lhu` accesses load 2 bytes from abs 0xb84498 (r300PSOptStdHalfOpnd_EXP), including `lhu` at 0x8b7af0, `lhu` at 0x8b7b64, `lhu` at 0x8b7b98.
  6 such `lhu` accesses load 2 bytes from abs 0xb8449a (r300PSOptStdHalfOpnd_EXP+2), including `lhu` at 0x8b7af8, `lhu` at 0x8b7b6c, `lhu` at 0x8b7ba0.
  The `bgezall` at 0x8b76a4 calls FindValue [0x8b7300] with a0=?, a1=?, a2=?, a3=?, a7=0x2.
  The `bgezall` at 0x8b7700 calls FindValue [0x8b7300] with a0=?, a1=?, a2=?, a3=?, a7=0x2.
  The `bgezall` at 0x8b775c calls FindValue [0x8b7300] with a0=?, a1=?, a2=?, a3=?, a7=0x2.
  The `bgezall` at 0x8b77e8 calls r300PSOptUpdateInputs_EXP [0x8bd800] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a7=one of 0x0, 0x1.
  The `bgezall` at 0x8b77f4 calls r300PSOptCanonDepend_EXP [0x8be140] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x8b7624 targets 0x8b7640, is taken when s4(?) >= 0x2 (unsigned), and falls through when s4(?) < 0x2 (unsigned).
  The `bne` branch at 0x8b7638 targets 0x8b779c, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `beq` branch at 0x8b7650 targets 0x8b779c, is taken when a5(?) == t0(=0xffff), and falls through when a5(?) != t0(=0xffff).
  The `beq` branch at 0x8b765c targets 0x8b7830, is taken when (a5(?) & 0x8000) == 0, and falls through when (a5(?) & 0x8000) != 0.
  The `bne` branch at 0x8b7680 targets 0x8b76cc, is taken when a5(?) != s6(?), and falls through when a5(?) == s6(?).
  The `beq` branch at 0x8b7698 targets 0x8b76cc, is taken when (a0(?) & 0xffff) == 0, and falls through when (a0(?) & 0xffff) != 0.
  The `beq` branch at 0x8b76b4 targets 0x8b76cc, is taken when v0(=ret(FindValue)) == 0, and falls through when v0(=ret(FindValue)) != 0.
  The `beq` branch at 0x8b76c4 targets 0x8b784c, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0x8b76d0 targets 0x8b7784, is taken when s0(?) == s2(?), and falls through when s0(?) != s2(?).
  The `bne` branch at 0x8b76dc targets 0x8b7728, is taken when v1(?) != s6(?), and falls through when v1(?) == s6(?).
  The `beq` branch at 0x8b76f4 targets 0x8b7728, is taken when (a0(?) & 0xffff) == 0, and falls through when (a0(?) & 0xffff) != 0.
  The `beq` branch at 0x8b7710 targets 0x8b7728, is taken when v0(=ret(FindValue)) == 0, and falls through when v0(=ret(FindValue)) != 0.
  The `beq` branch at 0x8b7720 targets 0x8b78dc, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0x8b772c targets 0x8b7784, is taken when s0(?) == s2(?), and falls through when s0(?) != s2(?).
  The `bne` branch at 0x8b7738 targets 0x8b7784, is taken when v1(?) != s6(?), and falls through when v1(?) == s6(?).
  The `beq` branch at 0x8b7750 targets 0x8b7784, is taken when (a0(?) & 0xffff) == 0, and falls through when (a0(?) & 0xffff) != 0.
  The `beq` branch at 0x8b776c targets 0x8b7784, is taken when v0(=ret(FindValue)) == 0, and falls through when v0(=ret(FindValue)) != 0.
  The `beq` branch at 0x8b777c targets 0x8b798c, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `bne` branch at 0x8b7794 targets 0x8b767c, is taken when s8(?) != a7(=0x2), and falls through when s8(?) == a7(=0x2).
  The `bne` branch at 0x8b77a4 targets 0x8b7608, is taken when s4(?) != t1(=0x3), and falls through when s4(?) == t1(=0x3).
  The `bne` branch at 0x8b77d4 targets 0x8b75e4, is taken when t2(?) != a7(=0x2), and falls through when t2(?) == a7(=0x2).
  The `beq` branch at 0x8b77e0 targets 0x8b77fc, is taken when a7(=one of 0x0, 0x1) == 0, and falls through when a7(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x8b7844 targets 0x8b7678 and is always taken.
  The `beq` branch at 0x8b7858 targets 0x8b7880, is taken when (a5(?) & 0x40) == 0, and falls through when (a5(?) & 0x40) != 0.
  The `bc1f` branch at 0x8b7870 targets 0x8b7880, is taken when not (f4(=[ret(FindValue)+4]) < f0(=ret(FindValue)) (c.lt.s at 0x8b7868)), and falls through when f4(=[ret(FindValue)+4]) < f0(=ret(FindValue)) (c.lt.s at 0x8b7868).
  The `beq` branch at 0x8b7880 targets 0x8b788c, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bc1f` branch at 0x8b78ac targets 0x8b795c, is taken when not (f5 == f1 (c.eq.d at 0x8b789c)), and falls through when f5 == f1 (c.eq.d at 0x8b789c).
  The `beq` branch at 0x8b78d4 targets 0x8b76cc and is always taken.
  The `beq` branch at 0x8b78f4 targets 0x8b7918, is taken when (a5(?) & 0x40) == 0, and falls through when (a5(?) & 0x40) != 0.
  The `bc1f` branch at 0x8b790c targets 0x8b7918, is taken when not (f4(=[ret(FindValue)+4]) < f2 (c.lt.s at 0x8b7904)), and falls through when f4(=[ret(FindValue)+4]) < f2 (c.lt.s at 0x8b7904).
  The `beq` branch at 0x8b7918 targets 0x8b7924, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bc1f` branch at 0x8b7934 targets 0x8b7a0c, is taken when not (f5 == f3 (c.eq.d at 0x8b792c)), and falls through when f5 == f3 (c.eq.d at 0x8b792c).
  The `beq` branch at 0x8b7954 targets 0x8b7728 and is always taken.
  The `bc1f` branch at 0x8b7964 targets 0x8b7a40, is taken when not (f5 == f4(=0x3ff0000000000000) (c.eq.d at 0x8b795c)), and falls through when f5 == f4(=0x3ff0000000000000) (c.eq.d at 0x8b795c).
  The `beq` branch at 0x8b7984 targets 0x8b76cc and is always taken.
  The `beq` branch at 0x8b799c targets 0x8b79c0, is taken when (a5(?) & 0x40) == 0, and falls through when (a5(?) & 0x40) != 0.
  The `bc1f` branch at 0x8b79b4 targets 0x8b79c0, is taken when not (f4(=[ret(FindValue)+4]) < f5 (c.lt.s at 0x8b79ac)), and falls through when f4(=[ret(FindValue)+4]) < f5 (c.lt.s at 0x8b79ac).
  The `beq` branch at 0x8b79c0 targets 0x8b79cc, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bc1f` branch at 0x8b79dc targets 0x8b7a70, is taken when not (f5 == f6 (c.eq.d at 0x8b79d4)), and falls through when f5 == f6 (c.eq.d at 0x8b79d4).
  The `beq` branch at 0x8b7a04 targets 0x8b7784 and is always taken.
  The `bc1f` branch at 0x8b7a14 targets 0x8b7aa0, is taken when not (f5 == f7(=0x3ff0000000000000) (c.eq.d at 0x8b7a0c)), and falls through when f5 == f7(=0x3ff0000000000000) (c.eq.d at 0x8b7a0c).
  The `beq` branch at 0x8b7a34 targets 0x8b7728 and is always taken.
  The `bc1f` branch at 0x8b7a44 targets 0x8b7ad8, is taken when (condition not analyzed), and falls through when (condition not analyzed).
  The `beq` branch at 0x8b7a68 targets 0x8b76cc and is always taken.
  The `bc1f` branch at 0x8b7a74 targets 0x8b7b0c, is taken when (condition not analyzed), and falls through when (condition not analyzed).
  The `beq` branch at 0x8b7a98 targets 0x8b7784 and is always taken.
  The `bc1f` branch at 0x8b7aa4 targets 0x8b7b48, is taken when FP condition code 0 is false, and falls through when FP condition code 0 is true.
  The `beq` branch at 0x8b7ad0 targets 0x8b7728 and is always taken.
  The `bc1f` branch at 0x8b7adc targets 0x8b7b80, is taken when FP condition code 0 is false, and falls through when FP condition code 0 is true.
  The `beq` branch at 0x8b7b04 targets 0x8b76cc and is always taken.
  The `bc1f` branch at 0x8b7b14 targets 0x8b7bc0, is taken when not (f5 == f12(=0xbff0000000000000) (c.eq.d at 0x8b7b0c)), and falls through when f5 == f12(=0xbff0000000000000) (c.eq.d at 0x8b7b0c).
  The `beq` branch at 0x8b7b40 targets 0x8b7784 and is always taken.
  The `bc1f` branch at 0x8b7b50 targets 0x8b7c00, is taken when not (f5 == f13(=0x3fe0000000000000) (c.eq.d at 0x8b7b48)), and falls through when f5 == f13(=0x3fe0000000000000) (c.eq.d at 0x8b7b48).
  The `beq` branch at 0x8b7b78 targets 0x8b7728 and is always taken.
  The `bc1f` branch at 0x8b7b88 targets 0x8b76cc, is taken when not (f5 == f14(=0xbfe0000000000000) (c.eq.d at 0x8b7b80)), and falls through when f5 == f14(=0xbfe0000000000000) (c.eq.d at 0x8b7b80).
  The `beq` branch at 0x8b7bb0 targets 0x8b76cc and is always taken.
  The `bc1f` branch at 0x8b7bc8 targets 0x8b7c40, is taken when not (f5 == f15(=0x3fe0000000000000) (c.eq.d at 0x8b7bc0)), and falls through when f5 == f15(=0x3fe0000000000000) (c.eq.d at 0x8b7bc0).
  The `beq` branch at 0x8b7bf0 targets 0x8b7784 and is always taken.
  The `bc1f` branch at 0x8b7c08 targets 0x8b7728, is taken when not (f5 == f16(=0xbfe0000000000000) (c.eq.d at 0x8b7c00)), and falls through when f5 == f16(=0xbfe0000000000000) (c.eq.d at 0x8b7c00).
  The `beq` branch at 0x8b7c30 targets 0x8b7728 and is always taken.
  The `bc1f` branch at 0x8b7c48 targets 0x8b7784, is taken when not (f5 == f17(=0xbfe0000000000000) (c.eq.d at 0x8b7c40)), and falls through when f5 == f17(=0xbfe0000000000000) (c.eq.d at 0x8b7c40).
  The `beq` branch at 0x8b7c70 targets 0x8b7784 and is always taken.
  The return at 0x8b7828 has v0 = one of 0x0, 0x1.
  The instructions from 0x8b7a3c to 0x8b7a3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8b7bb8 to 0x8b7bbc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8b7bf8 to 0x8b7bfc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8b7c38 to 0x8b7c3c are not reached by any path from the entry, and their branches are not listed.

- `RenameModified` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8b7c80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8b7c80-0x8b8114 (1172 bytes).
  It occupies 1172 bytes.
  26 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8b7d00, `lhu` at 0x8b7d04, `lhu` at 0x8b7d14.
  7 such `lw` accesses load 4 bytes from ret(FindValue) +0x0, including `lw` at 0x8b7f80, `lw` at 0x8b8060, `lw` at 0x8b807c.
  The `lw` at 0x8b7fa4 loads 4 bytes from ret(FindValue) +0x4.
  7 such `sh` accesses store 2 bytes to ?, including `sh` at 0x8b7fa8, `sh` at 0x8b8078, `sh` at 0x8b8098.
  The `bgezall` at 0x8b7dc4 calls FindValue [0x8b7300] with a0=?, a1=?, a2=?, a3=?, a7=0x2.
  The `bgezall` at 0x8b7e38 calls FindValue [0x8b7300] with a0=?, a1=?, a2=?, a3=?, a7=0x2.
  The `bgezall` at 0x8b7eb4 calls FindValue [0x8b7300] with a0=?, a1=?, a2=?, a3=?, a7=0x2.
  The `bgezall` at 0x8b7f30 calls FindValue [0x8b7300] with a0=?, a1=?, a2=?, a3=?, a7=0x2.
  The `bgezall` at 0x8b803c calls r300PSOptUpdateInputs_EXP [0x8bd800] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a7=0x2.
  The `bgezall` at 0x8b8048 calls r300PSOptCanonDepend_EXP [0x8be140] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x8b7cf8 targets 0x8b7d14, is taken when s0(?) >= 0x2 (unsigned), and falls through when s0(?) < 0x2 (unsigned).
  The `bne` branch at 0x8b7d0c targets 0x8b7d24, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x8b7d1c targets 0x8b7d88, is taken when (a4(?) & 0x8000) == 0, and falls through when (a4(?) & 0x8000) != 0.
  The `bne` branch at 0x8b7d2c targets 0x8b7cf4, is taken when s0(?) != s5(=0x3), and falls through when s0(?) == s5(=0x3).
  The `bne` branch at 0x8b7d48 targets 0x8b7ce0, is taken when s4(?) != a7(=0x2), and falls through when s4(?) == a7(=0x2).
  The `beq` branch at 0x8b7d98 targets 0x8b7d24, is taken when (a5(?) & 0xffff) == 0, and falls through when (a5(?) & 0xffff) != 0.
  The `bne` branch at 0x8b7de8 targets 0x8b7f80, is taken when v0(=ret(FindValue)) != 0, and falls through when v0(=ret(FindValue)) == 0.
  The `bne` branch at 0x8b7df8 targets 0x8b7e64, is taken when t2(?) != a6(?), and falls through when t2(?) == a6(?).
  The `beq` branch at 0x8b7e10 targets 0x8b7e64, is taken when (t2(?) & 0xffff) == 0, and falls through when (t2(?) & 0xffff) != 0.
  The `beq` branch at 0x8b7e68 targets 0x8b7f58, is taken when v0(?) == a4(?), and falls through when v0(?) != a4(?).
  The `bne` branch at 0x8b7e74 targets 0x8b7ee0, is taken when ra(?) != a6(?), and falls through when ra(?) == a6(?).
  The `beq` branch at 0x8b7e8c targets 0x8b7ee0, is taken when (t2(?) & 0xffff) == 0, and falls through when (t2(?) & 0xffff) != 0.
  The `beq` branch at 0x8b7ee4 targets 0x8b7f58, is taken when v0(?) == a4(?), and falls through when v0(?) != a4(?).
  The `bne` branch at 0x8b7ef0 targets 0x8b7f58, is taken when ra(?) != a6(?), and falls through when ra(?) == a6(?).
  The `beq` branch at 0x8b7f08 targets 0x8b7f58, is taken when (t2(?) & 0xffff) == 0, and falls through when (t2(?) & 0xffff) != 0.
  The `bne` branch at 0x8b7f68 targets 0x8b7df4, is taken when t1(?) != a7(=0x2), and falls through when t1(?) == a7(=0x2).
  The `beq` branch at 0x8b7f70 targets 0x8b7d28 and is always taken.
  The `beq` branch at 0x8b7f88 targets 0x8b7d24, is taken when (a4(=[ret(FindValue)]) & 0x400) == 0, and falls through when (a4(=[ret(FindValue)]) & 0x400) != 0.
  The `bne` branch at 0x8b7f90 targets 0x8b7d24, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x8b7fbc targets 0x8b7fd0, is taken when t1(?) != t8(?), and falls through when t1(?) == t8(?).
  The `beq` branch at 0x8b7fc8 targets 0x8b8060, is taken when (t3(?) & 0x40) == 0, and falls through when (t3(?) & 0x40) != 0.
  The `beq` branch at 0x8b7fd4 targets 0x8b8028, is taken when a4(?) == a6(?), and falls through when a4(?) != a6(?).
  The `bne` branch at 0x8b7fe0 targets 0x8b8000, is taken when ra(?) != t8(?), and falls through when ra(?) == t8(?).
  The `beq` branch at 0x8b7ff8 targets 0x8b809c, is taken when (at(?) & 0x40) == 0, and falls through when (at(?) & 0x40) != 0.
  The `beq` branch at 0x8b8004 targets 0x8b8028, is taken when a4(?) == a6(?), and falls through when a4(?) != a6(?).
  The `bne` branch at 0x8b8010 targets 0x8b8028, is taken when v1(?) != t8(?), and falls through when v1(?) == t8(?).
  The `beq` branch at 0x8b8020 targets 0x8b80d8, is taken when (a1(?) & 0x40) == 0, and falls through when (a1(?) & 0x40) != 0.
  The `bne` branch at 0x8b8030 targets 0x8b7fb4, is taken when t0(?) != a7(=0x2), and falls through when t0(?) == a7(=0x2).
  The `beq` branch at 0x8b8058 targets 0x8b7d24 and is always taken.
  The `beq` branch at 0x8b8068 targets 0x8b8084, is taken when (t1(=[ret(FindValue)]) & 0x1000) == 0, and falls through when (t1(=[ret(FindValue)]) & 0x1000) != 0.
  The `beq` branch at 0x8b8084 targets 0x8b7fd0, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0x8b8094 targets 0x8b7fd0 and is always taken.
  The `beq` branch at 0x8b80a4 targets 0x8b80c0, is taken when (t1(=[ret(FindValue)]) & 0x1000) == 0, and falls through when (t1(=[ret(FindValue)]) & 0x1000) != 0.
  The `beq` branch at 0x8b80c0 targets 0x8b8000, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `beq` branch at 0x8b80d0 targets 0x8b8000 and is always taken.
  The `beq` branch at 0x8b80e0 targets 0x8b80fc, is taken when (t1(=[ret(FindValue)]) & 0x1000) == 0, and falls through when (t1(=[ret(FindValue)]) & 0x1000) != 0.
  The `beq` branch at 0x8b80fc targets 0x8b8028, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `beq` branch at 0x8b810c targets 0x8b8028 and is always taken.
  The return at 0x8b7d80 has v0 = one of 0x0, 0x1.
  The instructions from 0x8b7f78 to 0x8b7f7c are not reached by any path from the entry, and their branches are not listed.

- `MergeIntoAdd` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8b8140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8b8140-0x8b86f4 (1460 bytes).
  It occupies 1460 bytes.
  The `lhu` at 0x8b8168 loads 2 bytes from a0 (arg0 at entry) +0x6.
  The `lhu` at 0x8b816c loads 2 bytes from a0 (arg0 at entry) +0x2.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x30, including `lw` at 0x8b8178, `lw` at 0x8b82d0, `lw` at 0x8b8540.
  2 such `lhu` accesses load 2 bytes from a0 (arg0 at entry) +0x46, including `lhu` at 0x8b8190, `lhu` at 0x8b81f0.
  The `lhu` at 0x8b8194 loads 2 bytes from a0 (arg0 at entry) +0x42.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x70, including `lw` at 0x8b81a4, `lw` at 0x8b842c, `lw` at 0x8b8628.
  The `lhu` at 0x8b81f4 loads 2 bytes from a0 (arg0 at entry) +0x8a.
  3 such `lhu` accesses load 2 bytes from a0 (arg0 at entry) +0x48, including `lhu` at 0x8b8200, `lhu` at 0x8b8558, `lhu` at 0x8b8568.
  2 such `lhu` accesses load 2 bytes from a0 (arg0 at entry) +0x50, including `lhu` at 0x8b8204, `lhu` at 0x8b855c.
  3 such `lhu` accesses load 2 bytes from (a0 + (table(0x3) + table(0x3))) +0x80, including `lhu` at 0x8b8240, `lhu` at 0x8b824c, `lhu` at 0x8b859c.
  3 such `lhu` accesses load 2 bytes from a0 (arg0 at entry) +0x4a, including `lhu` at 0x8b8290, `lhu` at 0x8b8300, `lhu` at 0x8b8550.
  8 such `lw` accesses load 4 bytes from ret(FindValue) +0x0, including `lw` at 0x8b82e0, `lw` at 0x8b843c, `lw` at 0x8b8530.
  2 such `lw` accesses load 4 bytes from ret(FindValue) +0x4, including `lw` at 0x8b82f0, `lw` at 0x8b844c.
  The `sh` at 0x8b82f4 stores 2 bytes to (a0 + (table(0x3) + table(0x3))) +0x80.
  2 such `lw` accesses load 4 bytes from ret(FindValue) +0x8, including `lw` at 0x8b82f8, `lw` at 0x8b8454.
  The `sh` at 0x8b82fc stores 2 bytes to a0 (arg0 at entry) +0x8a.
  The `sh` at 0x8b8310 stores 2 bytes to a0 (arg0 at entry) +0x4c.
  3 such `sh` accesses store 2 bytes to a0 (arg0 at entry) +0x4e, including `sh` at 0x8b831c, `sh` at 0x8b8324, `sh` at 0x8b8698.
  The `lhu` at 0x8b834c loads 2 bytes from a0 (arg0 at entry) +0x84.
  3 such `lhu` accesses load 2 bytes from a0 (arg0 at entry) +0x8, including `lhu` at 0x8b8358, `lhu` at 0x8b863c, `lhu` at 0x8b8650.
  2 such `lhu` accesses load 2 bytes from a0 (arg0 at entry) +0x10, including `lhu` at 0x8b835c, `lhu` at 0x8b8640.
  3 such `lhu` accesses load 2 bytes from (a0 + (table(0x0) + table(0x0))) +0x80, including `lhu` at 0x8b8398, `lhu` at 0x8b83a4, `lhu` at 0x8b8684.
  3 such `lhu` accesses load 2 bytes from a0 (arg0 at entry) +0xa, including `lhu` at 0x8b83e0, `lhu` at 0x8b845c, `lhu` at 0x8b8668.
  The `sh` at 0x8b8450 stores 2 bytes to (a0 + (table(0x0) + table(0x0))) +0x80.
  The `sh` at 0x8b8458 stores 2 bytes to a0 (arg0 at entry) +0x84.
  The `sh` at 0x8b846c stores 2 bytes to a0 (arg0 at entry) +0xc.
  3 such `sh` accesses store 2 bytes to a0 (arg0 at entry) +0xe, including `sh` at 0x8b8478, `sh` at 0x8b8480, `sh` at 0x8b86d0.
  2 such `lhu` accesses load 2 bytes from a0 (arg0 at entry) +0x52, including `lhu` at 0x8b84dc, `lhu` at 0x8b8570.
  The `lhu` at 0x8b8554 loads 2 bytes from a0 (arg0 at entry) +0x74.
  The `sh` at 0x8b8560 stores 2 bytes to a0 (arg0 at entry) +0x48.
  The `lhu` at 0x8b8564 loads 2 bytes from a0 (arg0 at entry) +0x78.
  The `sh` at 0x8b856c stores 2 bytes to a0 (arg0 at entry) +0x74.
  The `sh` at 0x8b8578 stores 2 bytes to a0 (arg0 at entry) +0x52.
  The `sh` at 0x8b8580 stores 2 bytes to a0 (arg0 at entry) +0x50.
  The `sh` at 0x8b8588 stores 2 bytes to a0 (arg0 at entry) +0x78.
  3 such `sh` accesses store 2 bytes to a0 (arg0 at entry) +0x4a, including `sh` at 0x8b8590, `sh` at 0x8b86a0, `sh` at 0x8b86b8.
  2 such `lhu` accesses load 2 bytes from a0 (arg0 at entry) +0x12, including `lhu` at 0x8b85c0, `lhu` at 0x8b8660.
  The `lhu` at 0x8b8638 loads 2 bytes from a0 (arg0 at entry) +0x34.
  The `sh` at 0x8b8644 stores 2 bytes to a0 (arg0 at entry) +0x10.
  The `sh` at 0x8b8648 stores 2 bytes to a0 (arg0 at entry) +0x8.
  The `lhu` at 0x8b864c loads 2 bytes from a0 (arg0 at entry) +0x38.
  The `sh` at 0x8b8654 stores 2 bytes to a0 (arg0 at entry) +0x38.
  The `sh` at 0x8b8658 stores 2 bytes to a0 (arg0 at entry) +0x34.
  The `sh` at 0x8b8670 stores 2 bytes to a0 (arg0 at entry) +0x12.
  3 such `sh` accesses store 2 bytes to a0 (arg0 at entry) +0xa, including `sh` at 0x8b8678, `sh` at 0x8b86d8, `sh` at 0x8b86f0.
  The `bgezall` at 0x8b82b4 calls FindValue [0x8b7300] with a0=?, a1=(a1 + ((([(a0 + (table(0x3) + table(0x3)))+128]:2 << 0x4) + [(a0 + (table(0x3) + table(0x3)))+128]:2) << 0x2)), a2=[(a0 + (table(0x3) + table(0x3)))+128]:2, a3=?, a5=one of 0x0, 0x1, a6=a0 at entry (arg0), a7=a1 at entry (arg1).
  The `bgezall` at 0x8b832c calls r300PSOptUpdateInputs_EXP [0x8bd800] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=a0 at entry (arg0).
  The `bgezall` at 0x8b8338 calls r300PSOptCanonDepend_EXP [0x8be140] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x8b8404 calls FindValue [0x8b7300] with a0=?, a1=(a1 + ((([(a0 + (table(0x0) + table(0x0)))+128]:2 << 0x4) + [(a0 + (table(0x0) + table(0x0)))+128]:2) << 0x2)), a2=((([(a0 + (table(0x0) + table(0x0)))+128]:2 << 0x4) + [(a0 + (table(0x0) + table(0x0)))+128]:2) << 0x2), a3=?, a5=0x0, a6=a0 at entry (arg0), a7=a1 at entry (arg1).
  The `bgezall` at 0x8b8488 calls r300PSOptUpdateInputs_EXP [0x8bd800] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=a0 at entry (arg0), a7=a1 at entry (arg1).
  The `bgezall` at 0x8b8494 calls r300PSOptCanonDepend_EXP [0x8be140] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x8b8500 calls FindValue [0x8b7300] with a0=?, a1=(a1 + ((([(a0 + (table(0x3) + table(0x3)))+128]:2 << 0x4) + [(a0 + (table(0x3) + table(0x3)))+128]:2) << 0x2)), a2=((([(a0 + (table(0x3) + table(0x3)))+128]:2 << 0x4) + [(a0 + (table(0x3) + table(0x3)))+128]:2) << 0x2), a3=([a0+66]:2 | [a0+70]:2), a4=[(a0 + (table(0x3) + table(0x3)))+128]:2, a5=one of 0x0, 0x1, a6=a0 at entry (arg0), a7=a1 at entry (arg1).
  The `bgezall` at 0x8b85e4 calls FindValue [0x8b7300] with a0=?, a1=(a1 + ((([(a0 + (table(0x0) + table(0x0)))+128]:2 << 0x4) + [(a0 + (table(0x0) + table(0x0)))+128]:2) << 0x2)), a2=((([(a0 + (table(0x0) + table(0x0)))+128]:2 << 0x4) + [(a0 + (table(0x0) + table(0x0)))+128]:2) << 0x2), a3=a3 at entry (arg3), a4=[(a0 + (table(0x0) + table(0x0)))+128]:2, a5=0x0, a6=a0 at entry (arg0), a7=a1 at entry (arg1).
  The `beq` branch at 0x8b8174 targets 0x8b81e0, is taken when at(=([a0+2]:2 | [a0+6]:2)) == 0, and falls through when at(=([a0+2]:2 | [a0+6]:2)) != 0.
  The `beq` branch at 0x8b8180 targets 0x8b8190, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x8b8188 targets 0x8b834c, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x8b81a0 targets 0x8b81cc, is taken when a3(=([a0+66]:2 | [a0+70]:2)) == 0, and falls through when a3(=([a0+66]:2 | [a0+70]:2)) != 0.
  The `beq` branch at 0x8b81ac targets 0x8b81b8, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x8b81b4 targets 0x8b81f4, is taken when t3(?) == 0, and falls through when t3(?) != 0.
  The `bne` branch at 0x8b81d0 targets 0x8b81ac, is taken when (a4(=[a0+112]) & 0x1) != 0, and falls through when (a4(=[a0+112]) & 0x1) == 0.
  The `beq` branch at 0x8b81d8 targets 0x8b81bc and is always taken.
  The `bne` branch at 0x8b81e4 targets 0x8b8180, is taken when (a4(=[a0+48]) & 0x1) != 0, and falls through when (a4(=[a0+48]) & 0x1) == 0.
  The `beq` branch at 0x8b81ec targets 0x8b8194 and is always taken.
  The `bne` branch at 0x8b81f8 targets 0x8b81bc, is taken when at(=[a0+138]:2) != t1(=0xffff), and falls through when at(=[a0+138]:2) == t1(=0xffff).
  The `beq` branch at 0x8b821c targets 0x8b81b8, is taken when (t1(?) & 0xffff) == 0, and falls through when (t1(?) & 0xffff) != 0.
  The `beq` branch at 0x8b8248 targets 0x8b8268, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x8b8250 targets 0x8b81b8, is taken when a1(=[(a0 + (table(0x3) + table(0x3)))+128]:2) == a4(=[(a0 + (table(0x3) + table(0x3)))+128]:2), and falls through when a1(=[(a0 + (table(0x3) + table(0x3)))+128]:2) != a4(=[(a0 + (table(0x3) + table(0x3)))+128]:2).
  The `beq` branch at 0x8b8258 targets 0x8b8268, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x8b8260 targets 0x8b84c0, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `bne` branch at 0x8b8278 targets 0x8b81b8, is taken when (a1(=[(a0 + (table(0x3) + table(0x3)))+128]:2) & 0x8000) != 0, and falls through when (a1(=[(a0 + (table(0x3) + table(0x3)))+128]:2) & 0x8000) == 0.
  The `beq` branch at 0x8b82c8 targets 0x8b81b8, is taken when v0(=ret(FindValue)) == 0, and falls through when v0(=ret(FindValue)) != 0.
  The `bne` branch at 0x8b82d8 targets 0x8b81b8, is taken when (a3(=[a0+48]) & 0x2) != 0, and falls through when (a3(=[a0+48]) & 0x2) == 0.
  The `beq` branch at 0x8b82e8 targets 0x8b81b8, is taken when (a4(=[ret(FindValue)]) & 0x100) == 0, and falls through when (a4(=[ret(FindValue)]) & 0x100) != 0.
  The `beq` branch at 0x8b8318 targets 0x8b8688, is taken when (a5(=[a0+74]:2) & 0x2000) == 0, and falls through when (a5(=[a0+74]:2) & 0x2000) != 0.
  The `beq` branch at 0x8b8344 targets 0x8b81b8 and is always taken.
  The `bne` branch at 0x8b8350 targets 0x8b8190, is taken when at(=[a0+132]:2) != t1(=0xffff), and falls through when at(=[a0+132]:2) == t1(=0xffff).
  The `beq` branch at 0x8b8374 targets 0x8b8190, is taken when (t9(?) & 0xffff) == 0, and falls through when (t9(?) & 0xffff) != 0.
  The `beq` branch at 0x8b83a0 targets 0x8b83bc, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x8b83a8 targets 0x8b8190, is taken when t8(=[(a0 + (table(0x0) + table(0x0)))+128]:2) == a4(=[(a0 + (table(0x0) + table(0x0)))+128]:2), and falls through when t8(=[(a0 + (table(0x0) + table(0x0)))+128]:2) != a4(=[(a0 + (table(0x0) + table(0x0)))+128]:2).
  The `beq` branch at 0x8b83b0 targets 0x8b83bc, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x8b83b8 targets 0x8b85a0, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `bne` branch at 0x8b83c4 targets 0x8b8190, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `beq` branch at 0x8b8424 targets 0x8b8190, is taken when v0(=ret(FindValue)) == 0, and falls through when v0(=ret(FindValue)) != 0.
  The `bne` branch at 0x8b8434 targets 0x8b8190, is taken when (a3(=[a0+112]) & 0x2) != 0, and falls through when (a3(=[a0+112]) & 0x2) == 0.
  The `beq` branch at 0x8b8444 targets 0x8b8190, is taken when (a4(=[ret(FindValue)]) & 0x100) == 0, and falls through when (a4(=[ret(FindValue)]) & 0x100) != 0.
  The `beq` branch at 0x8b8474 targets 0x8b86c0, is taken when (a5(=[a0+10]:2) & 0x2000) == 0, and falls through when (a5(=[a0+10]:2) & 0x2000) != 0.
  The `beq` branch at 0x8b84b4 targets 0x8b8190 and is always taken.
  The `beq` branch at 0x8b8528 targets 0x8b8268, is taken when v0(=ret(FindValue)) == 0, and falls through when v0(=ret(FindValue)) != 0.
  The `beq` branch at 0x8b8538 targets 0x8b8268, is taken when (a3(=[ret(FindValue)]) & 0x100) == 0, and falls through when (a3(=[ret(FindValue)]) & 0x100) != 0.
  The `bne` branch at 0x8b8548 targets 0x8b8268, is taken when (a4(=[a0+48]) & 0x2) != 0, and falls through when (a4(=[a0+48]) & 0x2) == 0.
  The `beq` branch at 0x8b8598 targets 0x8b8268 and is always taken.
  The `beq` branch at 0x8b8610 targets 0x8b83bc, is taken when v0(=ret(FindValue)) == 0, and falls through when v0(=ret(FindValue)) != 0.
  The `beq` branch at 0x8b8620 targets 0x8b83c0, is taken when (a3(=[ret(FindValue)]) & 0x100) == 0, and falls through when (a3(=[ret(FindValue)]) & 0x100) != 0.
  The `bne` branch at 0x8b8630 targets 0x8b83c0, is taken when (a4(=[a0+112]) & 0x2) != 0, and falls through when (a4(=[a0+112]) & 0x2) == 0.
  The `beq` branch at 0x8b8680 targets 0x8b83bc and is always taken.
  The `beq` branch at 0x8b8690 targets 0x8b86a8, is taken when (t1(=[ret(FindValue)]) & 0x1000) == 0, and falls through when (t1(=[ret(FindValue)]) & 0x1000) != 0.
  The `beq` branch at 0x8b86ac targets 0x8b8328, is taken when (t1(=[ret(FindValue)]) & 0x800) == 0, and falls through when (t1(=[ret(FindValue)]) & 0x800) != 0.
  The `beq` branch at 0x8b86b4 targets 0x8b8328 and is always taken.
  The `beq` branch at 0x8b86c8 targets 0x8b86e0, is taken when (t1(=[ret(FindValue)]) & 0x1000) == 0, and falls through when (t1(=[ret(FindValue)]) & 0x1000) != 0.
  The `beq` branch at 0x8b86e4 targets 0x8b8484, is taken when (t1(=[ret(FindValue)]) & 0x800) == 0, and falls through when (t1(=[ret(FindValue)]) & 0x800) != 0.
  The `beq` branch at 0x8b86ec targets 0x8b8484 and is always taken.
  The return at 0x8b81c4 has v0 = one of 0x0, 0x1.
  The instructions from 0x8b84bc to 0x8b84bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8b86bc to 0x8b86bc are not reached by any path from the entry, and their branches are not listed.

- `NewTrackedValues` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8b8700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8b8700-0x8b8e7c (1916 bytes).
  It occupies 1916 bytes.
  15 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8b8770, `lhu` at 0x8b8784, `lhu` at 0x8b8798.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x8b8774, `lw` at 0x8b87c8, `lw` at 0x8b8b2c.
  The `lw` at 0x8b87bc loads 4 bytes from table(0xb77f94) +0x0.
  3 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x8b8918, `lbu` at 0x8b8974, `lbu` at 0x8b8bb0.
  6 such `sb` accesses store 1 byte to ?, including `sb` at 0x8b892c, `sb` at 0x8b898c, `sb` at 0x8b8bc4.
  3 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x8b89c8, `lwc1` at 0x8b89e8, `lwc1` at 0x8b8b30.
  13 such `swc1` accesses store 4 bytes to ?, including `swc1` at 0x8b89dc, `swc1` at 0x8b89f0, `swc1` at 0x8b8aac.
  The `lw` at 0x8b8a90 loads 4 bytes from ret(FindValue) +0x0.
  The `lwc1` at 0x8b8aa0 loads 4 bytes from ret(FindValue) +0x4.
  The `lw` at 0x8b8b1c loads 4 bytes from table(0xb77fcc) +0x0.
  3 such `sw` accesses store 4 bytes to ?, including `sw` at 0x8b8bf0, `sw` at 0x8b8c24, `sw` at 0x8b8dec.
  The `bgezall` at 0x8b890c calls MatchValue [0x8b7380] with a0=sp-192, a1=?, a2=?, a3=?.
  The `bgezall` at 0x8b8968 calls MatchValue [0x8b7380] with a0=sp-192, a1=?, a2=?, a3=?.
  The `bgezall` at 0x8b8a80 calls FindValue [0x8b7300] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x8b8ba4 calls MatchValue [0x8b7380] with a0=sp-192, a1=?, a2=?, a3=?.
  The `jalr` at 0x8b8ccc calls pow with a0=?, a1=?, a2=?, a3=?; fp f12=0x4000000000000000.
  The `jalr` at 0x8b8ce4 calls floor with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x8b8e64 calls log with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x8b8780 targets 0x8b8804, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x8b87b4 targets 0x8b87c8, is taken when a7(?) >= 0xe (unsigned), and falls through when a7(?) < 0xe (unsigned).
  The `beq` branch at 0x8b87d4 targets 0x8b8858, is taken when (a5(?) & 0x400) == 0, and falls through when (a5(?) & 0x400) != 0.
  The `bne` branch at 0x8b8800 targets 0x8b8930, is taken when a5(?) != a7(?), and falls through when a5(?) == a7(?).
  The `bne` branch at 0x8b8814 targets 0x8b8770, is taken when s6(?) != t0(?), and falls through when s6(?) == t0(?).
  The `beq` branch at 0x8b885c targets 0x8b8804, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x8b88a4 targets 0x8b8804, is taken when (t2(?) & 0xffff) == 0, and falls through when (t2(?) & 0xffff) != 0.
  The `beq` branch at 0x8b88b0 targets 0x8b8808, is taken when a5(?) == v1(?), and falls through when a5(?) != v1(?).
  The `beq` branch at 0x8b88b8 targets 0x8b8808, is taken when v1(?) == v0(?), and falls through when v1(?) != v0(?).
  The `beq` branch at 0x8b88c4 targets 0x8b88d8, is taken when v0(?) >= a5(?) (signed), and falls through when v0(?) < a5(?) (signed).
  The `beq` branch at 0x8b8920 targets 0x8b8dd8, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x8b8928 targets 0x8b8804 and is always taken.
  The `beq` branch at 0x8b8980 targets 0x8b8bdc, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x8b8988 targets 0x8b8804 and is always taken.
  The `beq` branch at 0x8b8990 targets 0x8b89a0 and is always taken.
  The `beq` branch at 0x8b89a4 targets 0x8b89fc and is always taken.
  The `beq` branch at 0x8b89ac targets 0x8b87c8, is taken when v0(?) == s7(=0x300), and falls through when v0(?) != s7(=0x300).
  The `beq` branch at 0x8b89c0 targets 0x8b89e0, is taken when (v0(?) & 0x2000) == 0, and falls through when (v0(?) & 0x2000) != 0.
  The `bc1f` branch at 0x8b89d4 targets 0x8b89e0, is taken when not (f4 < f20 (c.lt.s at 0x8b89cc)), and falls through when f4 < f20 (c.lt.s at 0x8b89cc).
  The `beq` branch at 0x8b89e0 targets 0x8b89f4, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x8b89f4 targets 0x8b8b00, is taken when s0(?) == s2(?), and falls through when s0(?) != s2(?).
  The `beq` branch at 0x8b8a0c targets 0x8b87c8, is taken when a5(?) == s3(=0x3), and falls through when a5(?) != s3(=0x3).
  The `beq` branch at 0x8b8a14 targets 0x8b8ab0, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x8b8a1c targets 0x8b8a2c, is taken when v0(?) == s4(=0x100), and falls through when v0(?) != s4(=0x100).
  The `bne` branch at 0x8b8a24 targets 0x8b89ac, is taken when v0(?) != s5(=0x200), and falls through when v0(?) == s5(=0x200).
  The `beq` branch at 0x8b8a58 targets 0x8b8ad4, is taken when (a7(?) & 0x8000) == 0, and falls through when (a7(?) & 0x8000) != 0.
  The `beq` branch at 0x8b8a88 targets 0x8b87c8, is taken when v0(=ret(FindValue)) == 0, and falls through when v0(=ret(FindValue)) != 0.
  The `bne` branch at 0x8b8a9c targets 0x8b87c8, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x8b8aa8 targets 0x8b89b8 and is always taken.
  The `beq` branch at 0x8b8acc targets 0x8b89b8 and is always taken.
  The `beq` branch at 0x8b8ae4 targets 0x8b8a70 and is always taken.
  The `beq` branch at 0x8b8aec targets 0x8b899c and is always taken.
  The `beq` branch at 0x8b8b14 targets 0x8b8b28, is taken when v1(?) >= 0xd (unsigned), and falls through when v1(?) < 0xd (unsigned).
  The `beq` branch at 0x8b8b3c targets 0x8b8b64, is taken when (a0(?) & 0x8) == 0, and falls through when (a0(?) & 0x8) != 0.
  The `bc1f` branch at 0x8b8b54 targets 0x8b8bc8, is taken when not (f4 < f8 (c.lt.d at 0x8b8b4c)), and falls through when f4 < f8 (c.lt.d at 0x8b8b4c).
  The `beq` branch at 0x8b8bb8 targets 0x8b8c10, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x8b8bc0 targets 0x8b8804 and is always taken.
  The `bc1f` branch at 0x8b8bcc targets 0x8b8b68, is taken when FP condition code 0 is false, and falls through when FP condition code 0 is true.
  The `beq` branch at 0x8b8bd4 targets 0x8b8b64 and is always taken.
  The `beq` branch at 0x8b8c08 targets 0x8b8804 and is always taken.
  The `beq` branch at 0x8b8c40 targets 0x8b8804 and is always taken.
  The `beq` branch at 0x8b8c58 targets 0x8b8b2c and is always taken.
  The `bc1f` branch at 0x8b8c68 targets 0x8b8e0c, is taken when not (f8 == f20 (c.eq.s at 0x8b8c60)), and falls through when f8 == f20 (c.eq.s at 0x8b8c60).
  The `beq` branch at 0x8b8c70 targets 0x8b8b2c and is always taken.
  The `bc1f` branch at 0x8b8c8c targets 0x8b8e34, is taken when not (f9 == f20 (c.eq.s at 0x8b8c84)), and falls through when f9 == f20 (c.eq.s at 0x8b8c84).
  The `beq` branch at 0x8b8c94 targets 0x8b8b2c and is always taken.
  The `bc1f` branch at 0x8b8ca8 targets 0x8b8e64, is taken when not (f10 <= f20 (c.le.s at 0x8b8ca0)), and falls through when f10 <= f20 (c.le.s at 0x8b8ca0).
  The `beq` branch at 0x8b8cb0 targets 0x8b8b2c and is always taken.
  The `beq` branch at 0x8b8cd4 targets 0x8b8b2c and is always taken.
  The `beq` branch at 0x8b8cf4 targets 0x8b8b2c and is always taken.
  The `bc1f` branch at 0x8b8d0c targets 0x8b8e40, is taken when not (f20 <= f7 (c.le.s at 0x8b8d04)), and falls through when f20 <= f7 (c.le.s at 0x8b8d04).
  The `beq` branch at 0x8b8d14 targets 0x8b8b2c and is always taken.
  The `bc1f` branch at 0x8b8d28 targets 0x8b8e48, is taken when not (f22 < f8 (c.lt.s at 0x8b8d20)), and falls through when f22 < f8 (c.lt.s at 0x8b8d20).
  The `beq` branch at 0x8b8d30 targets 0x8b8b2c and is always taken.
  The `bc1t` branch at 0x8b8d50 targets 0x8b8d5c, is taken when f9 < f5 (c.lt.s at 0x8b8d48), and falls through when not (f9 < f5 (c.lt.s at 0x8b8d48)).
  The `beq` branch at 0x8b8d5c targets 0x8b8b30 and is always taken.
  The `bc1t` branch at 0x8b8d74 targets 0x8b8d80, is taken when f5 < f10 (c.lt.s at 0x8b8d6c), and falls through when not (f5 < f10 (c.lt.s at 0x8b8d6c)).
  The `beq` branch at 0x8b8d80 targets 0x8b8b30 and is always taken.
  The `beq` branch at 0x8b8da0 targets 0x8b8b2c and is always taken.
  The `beq` branch at 0x8b8db8 targets 0x8b8b2c and is always taken.
  The `beq` branch at 0x8b8dd0 targets 0x8b8b2c and is always taken.
  The `beq` branch at 0x8b8e04 targets 0x8b8804 and is always taken.
  The `bc1f` branch at 0x8b8e10 targets 0x8b8e50, is taken when FP condition code 0 is false, and falls through when FP condition code 0 is true.
  The `beq` branch at 0x8b8e2c targets 0x8b8b2c and is always taken.
  The `beq` branch at 0x8b8e34 targets 0x8b8b2c and is always taken.
  The `beq` branch at 0x8b8e40 targets 0x8b8b2c and is always taken.
  The `beq` branch at 0x8b8e48 targets 0x8b8b2c and is always taken.
  The `beq` branch at 0x8b8e5c targets 0x8b8b2c and is always taken.
  The `beq` branch at 0x8b8e74 targets 0x8b8b2c and is always taken.
  The return at 0x8b8850 has v0 = 0x0.
  The instructions from 0x8b8af4 to 0x8b8afc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8b8c78 to 0x8b8c7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8b8cb8 to 0x8b8cbc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8b8cfc to 0x8b8cfc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8b8d38 to 0x8b8d3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8b8e3c to 0x8b8e3c are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x8b87c0 uses the jump table at 0xb77f94 with targets 0x8b8990, 0x8b8998, 0x8b8998, 0x8b8990, 0x8b8998, 0x8b8998, 0x8b8990, 0x8b8990, 0x8b8aec, 0x8b8aec, 0x8b8aec, 0x8b8aec, 0x8b8aec, 0x8b87c8.
  The indirect jump at 0x8b87c0 uses the jump table at 0xb77f94 with targets 0x8b8990, 0x8b8998, 0x8b8998, 0x8b8990, 0x8b8998, 0x8b8998, 0x8b8990, 0x8b8990, 0x8b8aec, 0x8b8aec, 0x8b8aec, 0x8b8aec, 0x8b8aec, 0x8b87c8.
  The indirect jump at 0x8b8b20 uses the jump table at 0xb77fcc with targets 0x8b8c48, 0x8b8dc0, 0x8b8da8, 0x8b8d88, 0x8b8d64, 0x8b8d40, 0x8b8d1c, 0x8b8d00, 0x8b8cdc, 0x8b8cc0, 0x8b8c9c, 0x8b8c80, 0x8b8c60.
  The indirect jump at 0x8b87c0 uses the jump table at 0xb77f94 with targets 0x8b8990, 0x8b8998, 0x8b8998, 0x8b8990, 0x8b8998, 0x8b8998, 0x8b8990, 0x8b8990, 0x8b8aec, 0x8b8aec, 0x8b8aec, 0x8b8aec, 0x8b8aec, 0x8b87c8.
  The indirect jump at 0x8b8b20 uses the jump table at 0xb77fcc with targets 0x8b8c48, 0x8b8dc0, 0x8b8da8, 0x8b8d88, 0x8b8d64, 0x8b8d40, 0x8b8d1c, 0x8b8d00, 0x8b8cdc, 0x8b8cc0, 0x8b8c9c, 0x8b8c80, 0x8b8c60.
  The indirect jump at 0x8b87c0 uses the jump table at 0xb77f94 with targets 0x8b8990, 0x8b8998, 0x8b8998, 0x8b8990, 0x8b8998, 0x8b8998, 0x8b8990, 0x8b8990, 0x8b8aec, 0x8b8aec, 0x8b8aec, 0x8b8aec, 0x8b8aec, 0x8b87c8.
  The indirect jump at 0x8b8b20 uses the jump table at 0xb77fcc with targets 0x8b8c48, 0x8b8dc0, 0x8b8da8, 0x8b8d88, 0x8b8d64, 0x8b8d40, 0x8b8d1c, 0x8b8d00, 0x8b8cdc, 0x8b8cc0, 0x8b8c9c, 0x8b8c80, 0x8b8c60.
  The indirect jump at 0x8b87c0 uses the jump table at 0xb77f94 with targets 0x8b8990, 0x8b8998, 0x8b8998, 0x8b8990, 0x8b8998, 0x8b8998, 0x8b8990, 0x8b8990, 0x8b8aec, 0x8b8aec, 0x8b8aec, 0x8b8aec, 0x8b8aec, 0x8b87c8.
  The indirect jump at 0x8b8b20 uses the jump table at 0xb77fcc with targets 0x8b8c48, 0x8b8dc0, 0x8b8da8, 0x8b8d88, 0x8b8d64, 0x8b8d40, 0x8b8d1c, 0x8b8d00, 0x8b8cdc, 0x8b8cc0, 0x8b8c9c, 0x8b8c80, 0x8b8c60.
  The indirect jump at 0x8b8b20 uses the jump table at 0xb77fcc with targets 0x8b8c48, 0x8b8dc0, 0x8b8da8, 0x8b8d88, 0x8b8d64, 0x8b8d40, 0x8b8d1c, 0x8b8d00, 0x8b8cdc, 0x8b8cc0, 0x8b8c9c, 0x8b8c80, 0x8b8c60.
  The indirect jump at 0x8b8b20 uses the jump table at 0xb77fcc with targets 0x8b8c48, 0x8b8dc0, 0x8b8da8, 0x8b8d88, 0x8b8d64, 0x8b8d40, 0x8b8d1c, 0x8b8d00, 0x8b8cdc, 0x8b8cc0, 0x8b8c9c, 0x8b8c80, 0x8b8c60.

- `PromoteOutputs` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8b8e80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8b8e80-0x8b9078 (504 bytes).
  It occupies 504 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x8b8e80, `lw` at 0x8b8ed0.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8, including `lw` at 0x8b8ee4, `lw` at 0x8b8f50, `lw` at 0x8b8f94.
  16 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8b8f00, `lhu` at 0x8b8f04, `lhu` at 0x8b8f28.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x8b8f10, `lw` at 0x8b8f9c.
  5 such `sh` accesses store 2 bytes to ?, including `sh` at 0x8b8ff4, `sh` at 0x8b9004, `sh` at 0x8b901c.
  The `beq` branch at 0x8b8e88 targets 0x8b9048, is taken when at(=[a0]) == 0, and falls through when at(=[a0]) != 0.
  The `beq` branch at 0x8b8eb8 targets 0x8b8ee4 and is always taken.
  The `bne` branch at 0x8b8ec8 targets 0x8b8f00, is taken when a4(?) != t2(=0x2), and falls through when a4(?) == t2(=0x2).
  The `beq` branch at 0x8b8edc targets 0x8b9054, is taken when t9(?) >= v1(=[a0]) (unsigned), and falls through when t9(?) < v1(=[a0]) (unsigned).
  The `beq` branch at 0x8b8f0c targets 0x8b8ec0, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x8b8f18 targets 0x8b8ec0, is taken when (t0(?) & 0x400) == 0, and falls through when (t0(?) & 0x400) != 0.
  The `bne` branch at 0x8b8f20 targets 0x8b8ec0, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `beq` branch at 0x8b8f44 targets 0x8b8ec0, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x8b8f4c targets 0x8b8f98 and is always taken.
  The `bne` branch at 0x8b8f60 targets 0x8b8f74, is taken when s3(?) != t1(?), and falls through when s3(?) == t1(?).
  The `bne` branch at 0x8b8f74 targets 0x8b8f84, is taken when ra(?) != t1(?), and falls through when ra(?) == t1(?).
  The `beq` branch at 0x8b8f84 targets 0x8b8ec0, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x8b8f8c targets 0x8b8ec0, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x8b8fa4 targets 0x8b8f54, is taken when ra(?) != t2(=0x2), and falls through when ra(?) == t2(=0x2).
  The `bne` branch at 0x8b8fb8 targets 0x8b8f84, is taken when ra(?) != t1(?), and falls through when ra(?) == t1(?).
  The `beq` branch at 0x8b8fcc targets 0x8b9008, is taken when (s3(?) & 0xffff) == 0, and falls through when (s3(?) & 0xffff) != 0.
  The `beq` branch at 0x8b8fd8 targets 0x8b9040, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `bne` branch at 0x8b8fe4 targets 0x8b900c, is taken when ra(?) != s1(?), and falls through when ra(?) == s1(?).
  The `beq` branch at 0x8b900c targets 0x8b8f84, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `beq` branch at 0x8b9034 targets 0x8b8f84 and is always taken.
  The `beq` branch at 0x8b9040 targets 0x8b8fe4 and is always taken.
  The return at 0x8b904c has v0 = 0x0.
  The return at 0x8b9070 has v0 = one of 0x0, 0x1.
  The instructions from 0x8b903c to 0x8b903c are not reached by any path from the entry, and their branches are not listed.

- `OptimizeMath` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8b9080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8b9080-0x8b9564 (1252 bytes).
  It occupies 1252 bytes.
  The `lw` at 0x8b909c loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lwc1` at 0x8b9144 loads 4 bytes from ?.
  5 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x8b9170, `lbu` at 0x8b92fc, `lbu` at 0x8b9328.
  6 such `sb` accesses store 1 byte to ?, including `sb` at 0x8b918c, `sb` at 0x8b92f8, `sb` at 0x8b9324.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4, including `lw` at 0x8b91f0, `lw` at 0x8b92d8, `lw` at 0x8b9390.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x8b9210, `lw` at 0x8b923c.
  13 such `lw` accesses load 4 bytes from ?, including `lw` at 0x8b9230, `lw` at 0x8b9258, `lw` at 0x8b9270.
  The `lw` at 0x8b9250 loads 4 bytes from a0 (arg0 at entry) +0x8.
  7 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8b9284, `lhu` at 0x8b9294, `lhu` at 0x8b92ec.
  The `sw` at 0x8b92d4 stores 4 bytes to ?.
  The `sw` at 0x8b94d4 stores 4 bytes to table(0x8804) +0x0.
  The `swc1` at 0x8b94dc stores 4 bytes to table(0x8808) +0x0.
  The `swc1` at 0x8b94e4 stores 4 bytes to table(0x880c) +0x0.
  The `swc1` at 0x8b94f0 stores 4 bytes to table(0x8810) +0x0.
  The `lw` at 0x8b9560 loads 4 bytes from [a0+12] +0x0.
  The `jalr` at 0x8b90b8 calls memset with a0=[a0+12]+34816, a1=0x0, a2=0x1100, a3=a3 at entry (arg3).
  The `bgezall` at 0x8b9160 calls MatchValue [0x8b7380] with a0=sp-176, a1=?, a2=0x1, a3=?.
  The `jalr` at 0x8b9208 calls memset with a0=[a0+12], a1=0x0, a2=((([a0+4] << 0x4) + [a0+4]) << 0x2), a3=[a0+4].
  The `bgezall` at 0x8b9268 calls RenameSimple [0x8b7440] with a0=?, a1=[a0+12], a2=?, a3=?.
  The `bgezall` at 0x8b93ec calls MergeConsts [0x8b7580] with a0=?, a1=[a0+12], a2=?, a3=?.
  The `bgezall` at 0x8b9404 calls RenameModified [0x8b7c80] with a0=?, a1=[a0+12], a2=?, a3=?.
  The `bgezall` at 0x8b941c calls MergeIntoAdd [0x8b8140] with a0=?, a1=[a0+12], a2=?, a3=?.
  The `bgezall` at 0x8b944c calls NewTrackedValues [0x8b8700] with a0=?, a1=[a0+12], a2=?, a3=?.
  The `bgezall` at 0x8b946c calls r300PSOptKillAndSqueeze_EXP [0x8c0980] with a0=a0 at entry (arg0), a1=0x0, a2=0x0, a3=?.
  The `bgezall` at 0x8b9508 calls PromoteOutputs [0x8b8e80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x8b9520 calls r300PSOptKillAndSqueeze_EXP [0x8c0980] with a0=a0 at entry (arg0), a1=0x0, a2=0x0, a3=?.
  The `beq` branch at 0x8b90e0 targets 0x8b91d8, is taken when t8(=a1) == 0, and falls through when t8(=a1) != 0.
  The `beq` branch at 0x8b9108 targets 0x8b9118 and is always taken.
  The `beq` branch at 0x8b9114 targets 0x8b91d8, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x8b9128 targets 0x8b91b0, is taken when (v0(?) & v1(?)) == 0, and falls through when (v0(?) & v1(?)) != 0.
  The `beq` branch at 0x8b9184 targets 0x8b94c0, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0x8b9194 targets 0x8b9140, is taken when s1(?) != a1(=0x4), and falls through when s1(?) == a1(=0x4).
  The `bne` branch at 0x8b91d0 targets 0x8b9110, is taken when a5(?) < 0x20 (unsigned), and falls through when a5(?) >= 0x20 (unsigned).
  The `beq` branch at 0x8b9214 targets 0x8b9500, is taken when a0(=[a0]) == 0, and falls through when a0(=[a0]) != 0.
  The `beq` branch at 0x8b9220 targets 0x8b9250 and is always taken.
  The `bne` branch at 0x8b9228 targets 0x8b9284, is taken when ra(?) != s5(=0x2), and falls through when ra(?) == s5(=0x2).
  The `beq` branch at 0x8b9234 targets 0x8b9440, is taken when a4(?) == s5(=0x2), and falls through when a4(?) != s5(=0x2).
  The `beq` branch at 0x8b9248 targets 0x8b945c, is taken when s4(?) >= a0(=[a0]) (unsigned), and falls through when s4(?) < a0(=[a0]) (unsigned).
  The `beq` branch at 0x8b925c targets 0x8b9240, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x8b9274 targets 0x8b93dc, is taken when t8(?) == s5(=0x2), and falls through when t8(?) != s5(=0x2).
  The `beq` branch at 0x8b9298 targets 0x8b9228, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x8b92dc targets 0x8b9228, is taken when a5(=[a0+4]) == 0, and falls through when a5(=[a0+4]) != 0.
  The `beq` branch at 0x8b92e4 targets 0x8b955c and is always taken.
  The `beq` branch at 0x8b9300 targets 0x8b9328, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x8b9308 targets 0x8b9318, is taken when a1(?) == a7(?), and falls through when a1(?) != a7(?).
  The `bne` branch at 0x8b9310 targets 0x8b9328, is taken when t3(?) != a7(?), and falls through when t3(?) == a7(?).
  The `beq` branch at 0x8b9330 targets 0x8b9358, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x8b9338 targets 0x8b9348, is taken when a3(?) == a7(?), and falls through when a3(?) != a7(?).
  The `bne` branch at 0x8b9340 targets 0x8b9358, is taken when t3(?) != a7(?), and falls through when t3(?) == a7(?).
  The `beq` branch at 0x8b935c targets 0x8b9390, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x8b9364 targets 0x8b9380, is taken when t3(?) == a7(?), and falls through when t3(?) != a7(?).
  The `bne` branch at 0x8b9378 targets 0x8b9390, is taken when t3(?) != a7(?), and falls through when t3(?) == a7(?).
  The `beq` branch at 0x8b939c targets 0x8b9228, is taken when t0(?) >= a5(=[a0+4]) (unsigned), and falls through when t0(?) < a5(=[a0+4]) (unsigned).
  The `beq` branch at 0x8b93b0 targets 0x8b9394, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x8b93bc targets 0x8b92fc, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x8b93c4 targets 0x8b92ec, is taken when t3(?) == a7(?), and falls through when t3(?) != a7(?).
  The `bne` branch at 0x8b93cc targets 0x8b92fc, is taken when t8(?) != a7(?), and falls through when t8(?) == a7(?).
  The `beq` branch at 0x8b93d4 targets 0x8b92f0 and is always taken.
  The `beq` branch at 0x8b9434 targets 0x8b927c and is always taken.
  The `beq` branch at 0x8b9454 targets 0x8b923c and is always taken.
  The `beq` branch at 0x8b945c targets 0x8b9500, is taken when s6(?) == 0, and falls through when s6(?) != 0.
  The `beq` branch at 0x8b9474 targets 0x8b91f0, is taken when v0(=ret(r300PSOptKillAndSqueeze_EXP)) == 0, and falls through when v0(=ret(r300PSOptKillAndSqueeze_EXP)) != 0.
  The `beq` branch at 0x8b94ec targets 0x8b9190 and is always taken.
  The `beq` branch at 0x8b9510 targets 0x8b947c, is taken when v0(=ret(PromoteOutputs)) == 0, and falls through when v0(=ret(PromoteOutputs)) != 0.
  The `beq` branch at 0x8b955c targets 0x8b93a8 and is always taken.
  The return at 0x8b94ac has v0 = one of ret(r300PSOptKillAndSqueeze_EXP), ?.
  The return at 0x8b9554 has v0 = ret(r300PSOptKillAndSqueeze_EXP).
  The instructions from 0x8b943c to 0x8b943c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8b94b4 to 0x8b94bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8b94f4 to 0x8b94fc are not reached by any path from the entry, and their branches are not listed.

- `AlignInputs` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8b9580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8b9580-0x8b9b18 (1432 bytes).
  It occupies 1432 bytes.
  34 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8b95b0, `lhu` at 0x8b95c0, `lhu` at 0x8b95dc.
  The `lw` at 0x8b9720 loads 4 bytes from a1 (arg1 at entry) +0x8c.
  The `bgezall` at 0x8b9708 calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x1, a3=0x2, a4=0x3, a7=one of 0x0, 0x1, 0x2, 0x3.
  The `bgezall` at 0x8b9738 calls r300PSOptUpdateInputs_EXP [0x8bd800] with a0=a1 at entry (arg1), a1=[a1+140], a2=0x2, a3=?.
  The `bgezall` at 0x8b9790 calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x0, a3=0x2, a7=one of 0x0, 0x1, 0x2, 0x3.
  The `bgezall` at 0x8b97d0 calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x0, a3=0x2.
  The `bgezall` at 0x8b9818 calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x1, a3=0x2, a4=0x3, a7=one of 0x0, 0x1, 0x2, 0x3.
  The `bgezall` at 0x8b9834 calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x0, a3=0x1.
  The `bgezall` at 0x8b987c calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x1, a3=0x2, a7=one of 0x0, 0x1, 0x2, 0x3.
  The `bgezall` at 0x8b98b0 calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x0, a3=0x2, a4=0x3, a6=one of 0x0, 0x1, 0x2, 0x3.
  The `bgezall` at 0x8b98f8 calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x1, a3=0x2, a4=0x3.
  The `bgezall` at 0x8b9940 calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x0, a3=0x1, a6=one of 0x0, 0x1, 0x2, 0x3, a7=one of 0x0, 0x1, 0x2, 0x3.
  The `bgezall` at 0x8b995c calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x1, a3=0x2.
  The `bgezall` at 0x8b99b0 calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x0, a3=0x2, a6=0x2, a7=one of 0x0, 0x1, 0x2, 0x3.
  The `bgezall` at 0x8b9a00 calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x0, a3=0x1, a4=0x3.
  The `bgezall` at 0x8b9a1c calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x1, a3=0x2.
  The `bgezall` at 0x8b9a54 calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x0, a3=0x1, a7=one of 0x0, 0x1, 0x2, 0x3.
  The `bgezall` at 0x8b9a84 calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x0, a3=0x1, a7=one of 0x0, 0x1, 0x2, 0x3.
  The `bgezall` at 0x8b9ac0 calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x0, a3=0x2, a4=0x3.
  The `bgezall` at 0x8b9ae4 calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x1, a3=0x2, a4=0x3.
  The `bgezall` at 0x8b9b00 calls r300PSOptSwapSources_EXP [0x8bfa00] with a0=a1 at entry (arg1), a1=a2 at entry (arg2), a2=0x0, a3=0x1.
  The `beq` branch at 0x8b95b4 targets 0x8b95c0, is taken when t8(?) == v0(=0xffff), and falls through when t8(?) != v0(=0xffff).
  The `beq` branch at 0x8b95c4 targets 0x8b95d0, is taken when t9(?) == v0(=0xffff), and falls through when t9(?) != v0(=0xffff).
  The `beq` branch at 0x8b95d4 targets 0x8b9628, is taken when a3(?) == t1(?), and falls through when a3(?) != t1(?).
  The `beq` branch at 0x8b95e0 targets 0x8b95ec, is taken when at(?) == v0(=0xffff), and falls through when at(?) != v0(=0xffff).
  The `beq` branch at 0x8b95f0 targets 0x8b95fc, is taken when v1(?) == v0(=0xffff), and falls through when v1(?) != v0(=0xffff).
  The `beq` branch at 0x8b9600 targets 0x8b9628, is taken when a3(?) == t1(?), and falls through when a3(?) != t1(?).
  The `beq` branch at 0x8b960c targets 0x8b9618, is taken when a0(?) == v0(=0xffff), and falls through when a0(?) != v0(=0xffff).
  The `beq` branch at 0x8b961c targets 0x8b9628, is taken when a2(?) == v0(=0xffff), and falls through when a2(?) != v0(=0xffff).
  The `beq` branch at 0x8b962c targets 0x8b9680, is taken when a6(=one of 0x0, 0x1, 0x2, 0x3) == v0(=0x1), and falls through when a6(=one of 0x0, 0x1, 0x2, 0x3) != v0(=0x1).
  The `beq` branch at 0x8b9634 targets 0x8b96b4, is taken when a6(=one of 0x0, 0x1, 0x2, 0x3) == a3(=0x2), and falls through when a6(=one of 0x0, 0x1, 0x2, 0x3) != a3(=0x2).
  The `beq` branch at 0x8b963c targets 0x8b965c, is taken when a6(=one of 0x0, 0x1, 0x2, 0x3) == a4(=0x3), and falls through when a6(=one of 0x0, 0x1, 0x2, 0x3) != a4(=0x3).
  The `beq` branch at 0x8b965c targets 0x8b9758, is taken when a7(=one of 0x0, 0x1, 0x2, 0x3) == v0(=0x1), and falls through when a7(=one of 0x0, 0x1, 0x2, 0x3) != v0(=0x1).
  The `beq` branch at 0x8b9664 targets 0x8b96d8, is taken when a7(=one of 0x0, 0x1, 0x2, 0x3) == a3(=0x2), and falls through when a7(=one of 0x0, 0x1, 0x2, 0x3) != a3(=0x2).
  The `beq` branch at 0x8b9688 targets 0x8b974c, is taken when a5(?) == a2(?), and falls through when a5(?) != a2(?).
  The `beq` branch at 0x8b9690 targets 0x8b9998, is taken when a7(=one of 0x0, 0x1, 0x2, 0x3) == v0(=0x1), and falls through when a7(=one of 0x0, 0x1, 0x2, 0x3) != v0(=0x1).
  The `beq` branch at 0x8b9698 targets 0x8b9998, is taken when a7(=one of 0x0, 0x1, 0x2, 0x3) == a6(=0x2), and falls through when a7(=one of 0x0, 0x1, 0x2, 0x3) != a6(=0x2).
  The `beq` branch at 0x8b96a0 targets 0x8b97a4, is taken when a7(=one of 0x0, 0x1, 0x2, 0x3) == t1(=0x3), and falls through when a7(=one of 0x0, 0x1, 0x2, 0x3) != t1(=0x3).
  The `beq` branch at 0x8b96b4 targets 0x8b9890, is taken when a7(=one of 0x0, 0x1, 0x2, 0x3) == v0(=0x1), and falls through when a7(=one of 0x0, 0x1, 0x2, 0x3) != v0(=0x1).
  The `beq` branch at 0x8b96bc targets 0x8b98cc, is taken when a7(=one of 0x0, 0x1, 0x2, 0x3) == a3(=0x2), and falls through when a7(=one of 0x0, 0x1, 0x2, 0x3) != a3(=0x2).
  The `beq` branch at 0x8b96c4 targets 0x8b984c, is taken when a7(=one of 0x0, 0x1, 0x2, 0x3) == t8(=0x3), and falls through when a7(=one of 0x0, 0x1, 0x2, 0x3) != t8(=0x3).
  The `bne` branch at 0x8b96e0 targets 0x8b97e4, is taken when t9(?) != a6(?), and falls through when t9(?) == a6(?).
  The `bne` branch at 0x8b96f0 targets 0x8b98c4, is taken when at(?) != v1(?), and falls through when at(?) == v1(?).
  The `beq` branch at 0x8b9718 targets 0x8b9650, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x8b9728 targets 0x8b9654, is taken when a1(=[a1+140]) != a2(=0x2), and falls through when a1(=[a1+140]) == a2(=0x2).
  The `beq` branch at 0x8b9744 targets 0x8b9650 and is always taken.
  The `beq` branch at 0x8b9760 targets 0x8b99c4, is taken when a2(?) == a6(?), and falls through when a2(?) != a6(?).
  The `beq` branch at 0x8b976c targets 0x8b9a70, is taken when a4(?) == a6(?), and falls through when a4(?) != a6(?).
  The `bne` branch at 0x8b9778 targets 0x8b9990, is taken when a5(?) != a6(?), and falls through when a5(?) == a6(?).
  The `beq` branch at 0x8b979c targets 0x8b9718 and is always taken.
  The `beq` branch at 0x8b97a8 targets 0x8b9a40, is taken when a6(?) == a2(?), and falls through when a6(?) != a2(?).
  The `bne` branch at 0x8b97b4 targets 0x8b9974, is taken when a7(?) != a2(?), and falls through when a7(?) == a2(?).
  The `beq` branch at 0x8b97dc targets 0x8b9718 and is always taken.
  The `bne` branch at 0x8b97e8 targets 0x8b9a34, is taken when t1(?) != a6(?), and falls through when t1(?) == a6(?).
  The `bne` branch at 0x8b9800 targets 0x8b9980, is taken when t8(?) != t9(?), and falls through when t8(?) == t9(?).
  The `beq` branch at 0x8b9844 targets 0x8b9718 and is always taken.
  The `bne` branch at 0x8b9854 targets 0x8b990c, is taken when a4(?) != a2(?), and falls through when a4(?) == a2(?).
  The `bne` branch at 0x8b9864 targets 0x8b99cc, is taken when a5(?) != a6(?), and falls through when a5(?) == a6(?).
  The `beq` branch at 0x8b9888 targets 0x8b9718 and is always taken.
  The `beq` branch at 0x8b9898 targets 0x8b9988, is taken when a7(?) == t1(?), and falls through when a7(?) != t1(?).
  The `beq` branch at 0x8b98bc targets 0x8b9718 and is always taken.
  The `beq` branch at 0x8b98c4 targets 0x8b9650 and is always taken.
  The `bne` branch at 0x8b98dc targets 0x8b99d4, is taken when a2(?) != a6(?), and falls through when a2(?) == a6(?).
  The `beq` branch at 0x8b98e4 targets 0x8b9a98, is taken when a7(?) == t1(?), and falls through when a7(?) != t1(?).
  The `beq` branch at 0x8b9904 targets 0x8b9718 and is always taken.
  The `bne` branch at 0x8b9910 targets 0x8b9aa0, is taken when t8(?) != a2(?), and falls through when t8(?) == a2(?).
  The `bne` branch at 0x8b9924 targets 0x8b9a68, is taken when t9(?) != at(?), and falls through when t9(?) == at(?).
  The `beq` branch at 0x8b996c targets 0x8b9718 and is always taken.
  The `beq` branch at 0x8b9974 targets 0x8b9650 and is always taken.
  The `beq` branch at 0x8b9980 targets 0x8b9650 and is always taken.
  The `beq` branch at 0x8b9988 targets 0x8b9650 and is always taken.
  The `beq` branch at 0x8b9990 targets 0x8b9650 and is always taken.
  The `beq` branch at 0x8b99bc targets 0x8b9718 and is always taken.
  The `beq` branch at 0x8b99c4 targets 0x8b9650 and is always taken.
  The `beq` branch at 0x8b99cc targets 0x8b9650 and is always taken.
  The `beq` branch at 0x8b99d4 targets 0x8b9ab0, is taken when a7(?) == t1(?), and falls through when a7(?) != t1(?).
  The `beq` branch at 0x8b99dc targets 0x8b9ad4, is taken when a7(?) == a6(?), and falls through when a7(?) != a6(?).
  The `bne` branch at 0x8b99e4 targets 0x8b9aa8, is taken when t1(?) != a2(?), and falls through when t1(?) == a2(?).
  The `beq` branch at 0x8b9a2c targets 0x8b9718 and is always taken.
  The `beq` branch at 0x8b9a34 targets 0x8b9650 and is always taken.
  The `beq` branch at 0x8b9a60 targets 0x8b9718 and is always taken.
  The `beq` branch at 0x8b9a68 targets 0x8b9650 and is always taken.
  The `beq` branch at 0x8b9a90 targets 0x8b9718 and is always taken.
  The `beq` branch at 0x8b9a98 targets 0x8b9650 and is always taken.
  The `beq` branch at 0x8b9aa0 targets 0x8b9650 and is always taken.
  The `beq` branch at 0x8b9aa8 targets 0x8b9650 and is always taken.
  The `beq` branch at 0x8b9acc targets 0x8b9718 and is always taken.
  The `beq` branch at 0x8b9b10 targets 0x8b9718 and is always taken.
  The return at 0x8b9648 has v0 = 0x0.
  The return at 0x8b9654 has v0 = ?.
  The return at 0x8b9670 has v0 = 0x0.
  The return at 0x8b96ac has v0 = 0x0.
  The return at 0x8b96d0 has v0 = 0x0.
  The return at 0x8b9750 has v0 = 0x0.
  The instructions from 0x8b9678 to 0x8b967c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8b997c to 0x8b997c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8b9a3c to 0x8b9a3c are not reached by any path from the entry, and their branches are not listed.

- `SwitchOmod` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8b9b40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8b9b40-0x8b9cbc (380 bytes).
  It occupies 380 bytes.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8, including `lw` at 0x8b9b80, `lw` at 0x8b9bfc, `lw` at 0x8b9ca0.
  2 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x8b9bb8, `lwc1` at 0x8b9bdc.
  2 such `swc1` accesses store 4 bytes to ?, including `swc1` at 0x8b9bd0, `swc1` at 0x8b9bf4.
  The `lwc1` at 0x8b9c0c loads 4 bytes from ([a0+8] + (((a3 << 0x2) + a3) << 0x5)) +0x6c.
  The `swc1` at 0x8b9c20 stores 4 bytes to ([a0+8] + (((a3 << 0x2) + a3) << 0x5)) +0x6c.
  The `lwc1` at 0x8b9c2c loads 4 bytes from ([a0+8] + (((a3 << 0x2) + a3) << 0x5)) +0x2c.
  The `swc1` at 0x8b9c50 stores 4 bytes to ([a0+8] + (((a3 << 0x2) + a3) << 0x5)) +0x2c.
  The `jalr` at 0x8b9b90 calls WritesRegister_EXP [0x8c1dc0] with a0=?, a1=?, a2=a2 at entry (arg2), a3=?.
  The `bltz` branch at 0x8b9b5c targets 0x8b9c98, is taken when a3 < 0 (signed), and falls through when a3 >= 0 (signed).
  The `beq` branch at 0x8b9b98 targets 0x8b9c80, is taken when v0(=ret(WritesRegister_EXP)) == 0, and falls through when v0(=ret(WritesRegister_EXP)) != 0.
  The `beq` branch at 0x8b9bb0 targets 0x8b9bd4, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bc1t` branch at 0x8b9bc8 targets 0x8b9c60, is taken when f7(=0x4010000000000000) < f9 (c.lt.d at 0x8b9bc0), and falls through when not (f7(=0x4010000000000000) < f9 (c.lt.d at 0x8b9bc0)).
  The `beq` branch at 0x8b9bd4 targets 0x8b9bfc, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bc1t` branch at 0x8b9bec targets 0x8b9c60, is taken when f7 < f5 (c.lt.d at 0x8b9be4), and falls through when not (f7 < f5 (c.lt.d at 0x8b9be4)).
  The `beq` branch at 0x8b9c04 targets 0x8b9c24, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x8b9c24 targets 0x8b9c64, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bgez` branch at 0x8b9c84 targets 0x8b9b80, is taken when s2(?) >= 0 (signed), and falls through when s2(?) < 0 (signed).
  The `beq` branch at 0x8b9c90 targets 0x8b9bf8 and is always taken.
  The `beq` branch at 0x8b9cb4 targets 0x8b9c04 and is always taken.
  The return at 0x8b9c58 has v0 = ?.
  The return at 0x8b9c78 has v0 = one of ?, ret(WritesRegister_EXP).

- `OmodValidFactor` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8b9cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8b9cc0-0x8b9ea8 (488 bytes).
  It occupies 488 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8, including `lw` at 0x8b9cf0, `lw` at 0x8b9e8c.
  6 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8b9d24, `lhu` at 0x8b9d30, `lhu` at 0x8b9de8.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x8b9d38, `lw` at 0x8b9d80.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x8b9d94, `lw` at 0x8b9e64.
  The `bgezall` at 0x8b9e28 calls UsesRegister_EXP [0x8c1cc0] with a0=?, a1=?, a2=one of 0x7, 0x8, a3=?, a6=one of 0x7, 0x8.
  The `beq` branch at 0x8b9cd8 targets 0x8b9ce4, is taken when a4 == 0, and falls through when a4 != 0.
  The `bltz` branch at 0x8b9ce4 targets 0x8b9d60, is taken when a1 < 0 (signed), and falls through when a1 >= 0 (signed).
  The `beq` branch at 0x8b9d04 targets 0x8b9e90 and is always taken.
  The `bne` branch at 0x8b9d18 targets 0x8b9d60, is taken when v0(?) < a7(=[a0+8]) (unsigned), and falls through when v0(?) >= a7(=[a0+8]) (unsigned).
  The `bne` branch at 0x8b9d28 targets 0x8b9d0c, is taken when s0(=a3) != a5(?), and falls through when s0(=a3) == a5(?).
  The `bne` branch at 0x8b9d34 targets 0x8b9d78, is taken when a0(=one of 0x7, 0x8) != a6(?), and falls through when a0(=one of 0x7, 0x8) == a6(?).
  The `beq` branch at 0x8b9d40 targets 0x8b9d80, is taken when (a3(?) & 0x8) == 0, and falls through when (a3(?) & 0x8) != 0.
  The `beq` branch at 0x8b9d78 targets 0x8b9d64 and is always taken.
  The `beq` branch at 0x8b9d84 targets 0x8b9d94, is taken when t2(?) == t3(=0x2), and falls through when t2(?) != t3(=0x2).
  The `beq` branch at 0x8b9d8c targets 0x8b9d64 and is always taken.
  The `beq` branch at 0x8b9da8 targets 0x8b9e04, is taken when a3(?) >= t1(=[a0]) (unsigned), and falls through when a3(?) < t1(=[a0]) (unsigned).
  The `beq` branch at 0x8b9dc0 targets 0x8b9e9c and is always taken.
  The `beq` branch at 0x8b9dd0 targets 0x8b9e04, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x8b9de0 targets 0x8b9e10, is taken when a2 != a1(?), and falls through when a2 == a1(?).
  The `bne` branch at 0x8b9df4 targets 0x8b9dc8, is taken when s0(=a3) != a5(?), and falls through when s0(=a3) == a5(?).
  The `bne` branch at 0x8b9dfc targets 0x8b9dcc, is taken when a6(=one of 0x7, 0x8) != t0(?), and falls through when a6(=one of 0x7, 0x8) == t0(?).
  The `beq` branch at 0x8b9e08 targets 0x8b9d64 and is always taken.
  The `beq` branch at 0x8b9e30 targets 0x8b9e44, is taken when v0(=ret(UsesRegister_EXP)) == 0, and falls through when v0(=ret(UsesRegister_EXP)) != 0.
  The `beq` branch at 0x8b9e3c targets 0x8b9d64 and is always taken.
  The `bne` branch at 0x8b9e4c targets 0x8b9e64, is taken when s0(=a3) != a7(?), and falls through when s0(=a3) == a7(?).
  The `beq` branch at 0x8b9e5c targets 0x8b9e08, is taken when a4(=one of 0x7, 0x8) == a5(?), and falls through when a4(=one of 0x7, 0x8) != a5(?).
  The `beq` branch at 0x8b9e7c targets 0x8b9e04, is taken when a6(?) >= t1(=[a0]) (unsigned), and falls through when a6(?) < t1(=[a0]) (unsigned).
  The `beq` branch at 0x8b9e88 targets 0x8b9dbc and is always taken.
  The `beq` branch at 0x8b9e94 targets 0x8b9d24 and is always taken.
  The `beq` branch at 0x8b9ea0 targets 0x8b9ddc and is always taken.
  The return at 0x8b9d58 has v0 = 0x0.
  The return at 0x8b9d70 has v0 = one of 0x0, 0x1.

- `OtherFactor` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8b9ec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8b9ec0-0x8ba080 (448 bytes).
  It occupies 448 bytes.
  The `lhu` at 0x8b9ecc loads 2 bytes from a0 (arg0 at entry) +0x48.
  The `lhu` at 0x8b9ed0 loads 2 bytes from a0 (arg0 at entry) +0x4c.
  The `lhu` at 0x8b9efc loads 2 bytes from a0 (arg0 at entry) +0x50.
  6 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8b9f18, `lhu` at 0x8b9f20, `lhu` at 0x8b9f48.
  The `lhu` at 0x8b9fe0 loads 2 bytes from a0 (arg0 at entry) +0x8.
  The `lhu` at 0x8b9fe4 loads 2 bytes from a0 (arg0 at entry) +0xc.
  The `lhu` at 0x8b9ff0 loads 2 bytes from a0 (arg0 at entry) +0x10.
  The `beq` branch at 0x8b9ec4 targets 0x8b9fe0, is taken when (a2 & 0x8) == 0, and falls through when (a2 & 0x8) != 0.
  The `beq` branch at 0x8b9ed8 targets 0x8b9fac, is taken when (a5(=[a0+72]:2) & 0x300) == 0, and falls through when (a5(=[a0+72]:2) & 0x300) != 0.
  The `beq` branch at 0x8b9ee0 targets 0x8b9fac, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x8b9ee8 targets 0x8b9fb4, is taken when a5(?) == v0(=0x200), and falls through when a5(?) != v0(=0x200).
  The `beq` branch at 0x8b9ef0 targets 0x8b9fc0, is taken when a4(?) == v0(=0x200), and falls through when a4(?) != v0(=0x200).
  The `beq` branch at 0x8b9f04 targets 0x8ba02c, is taken when a6(?) == v0(=0x200), and falls through when a6(?) != v0(=0x200).
  The `beq` branch at 0x8b9f74 targets 0x8b9fa4, is taken when a6(?) == a5(?), and falls through when a6(?) != a5(?).
  The `beq` branch at 0x8b9f7c targets 0x8b9fa4, is taken when a5(?) == a4(?), and falls through when a5(?) != a4(?).
  The `beq` branch at 0x8b9f84 targets 0x8b9fa4, is taken when a6(?) == a4(?), and falls through when a6(?) != a4(?).
  The `bne` branch at 0x8b9f8c targets 0x8b9fc8, is taken when a6(?) != a1, and falls through when a6(?) == a1.
  The `beq` branch at 0x8b9f94 targets 0x8ba068, is taken when t2(=one of 0x0, 0x1) == 0, and falls through when t2(=one of 0x0, 0x1) != 0.
  The `bne` branch at 0x8b9fac targets 0x8b9ef0, is taken when a5(?) != v0(=0x200), and falls through when a5(?) == v0(=0x200).
  The `bne` branch at 0x8b9fb8 targets 0x8b9ef8, is taken when a4(?) != v0(=0x200), and falls through when a4(?) == v0(=0x200).
  The `beq` branch at 0x8b9fc0 targets 0x8b9efc and is always taken.
  The `bne` branch at 0x8b9fc8 targets 0x8ba038, is taken when a5(?) != a1, and falls through when a5(?) == a1.
  The `beq` branch at 0x8b9fd0 targets 0x8ba078, is taken when t2(=one of 0x0, 0x1) == 0, and falls through when t2(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x8b9ff4 targets 0x8ba048, is taken when (a5(=[a0+8]:2) & 0x300) == 0, and falls through when (a5(=[a0+8]:2) & 0x300) != 0.
  The `beq` branch at 0x8b9ffc targets 0x8ba048, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x8ba004 targets 0x8ba050, is taken when a5(?) == v0(=0x200), and falls through when a5(?) != v0(=0x200).
  The `beq` branch at 0x8ba00c targets 0x8ba058, is taken when a4(?) == v0(=0x200), and falls through when a4(?) != v0(=0x200).
  The `beq` branch at 0x8ba01c targets 0x8ba070, is taken when t1(?) == v0(=0x200), and falls through when t1(?) != v0(=0x200).
  The `beq` branch at 0x8ba024 targets 0x8b9f0c and is always taken.
  The `beq` branch at 0x8ba030 targets 0x8b9f10 and is always taken.
  The `bne` branch at 0x8ba038 targets 0x8ba060, is taken when a4(?) != a1, and falls through when a4(?) == a1.
  The `bne` branch at 0x8ba048 targets 0x8ba00c, is taken when a5(?) != v0(=0x200), and falls through when a5(?) == v0(=0x200).
  The `bne` branch at 0x8ba050 targets 0x8ba014, is taken when a4(?) != v0(=0x200), and falls through when a4(?) == v0(=0x200).
  The `beq` branch at 0x8ba058 targets 0x8ba018 and is always taken.
  The `beq` branch at 0x8ba070 targets 0x8ba030 and is always taken.
  The return at 0x8b9f9c has v0 = -0x2.
  The return at 0x8b9fa4 has v0 = -0x2.
  The return at 0x8b9fd8 has v0 = -0x2.
  The return at 0x8ba040 has v0 = -0x2.
  The return at 0x8ba060 has v0 = -0x1.
  The return at 0x8ba068 has v0 = ?.
  The return at 0x8ba078 has v0 = ?.

- `MergeScaleBias` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8ba080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8ba080-0x8ba470 (1008 bytes).
  It occupies 1008 bytes.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x8ba084, `lw` at 0x8ba128, `lw` at 0x8ba280.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8, including `lw` at 0x8ba0cc, `lw` at 0x8ba2c0, `lw` at 0x8ba368.
  17 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8ba0ec, `lhu` at 0x8ba100, `lhu` at 0x8ba18c.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x8ba1b0, `lw` at 0x8ba1c8.
  The `lwc1` at 0x8ba1fc loads 4 bytes from ?.
  The `jalr` at 0x8ba198 calls IsConstantTwo_EXP [0x8c2880] with a0=a2 at entry (arg2), a1=a1 at entry (arg1), a2=?, a3=?.
  The `bgezall` at 0x8ba2d4 calls UsesRegister_EXP [0x8c1cc0] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x8ba2ec calls PresubtractAvailable_EXP [0x8c1e00] with a0=?, a1=?, a2=0x0, a3=?.
  The `bgezall` at 0x8ba310 calls WritesRegister_EXP [0x8c1dc0] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x8ba380 calls UsesRegister_EXP [0x8c1cc0] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x8ba3a4 calls SetPresubtractScaleBias_EXP [0x8c2040] with a0=?, a1=?, a2=?, a3=?, a5=0x0.
  The `bgezall` at 0x8ba3b8 calls WritesRegister_EXP [0x8c1dc0] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x8ba450 calls UsesRegisterSuperset_EXP [0x8c1d40] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x8ba0b4 targets 0x8ba140, is taken when at(=[a0]) == 0, and falls through when at(=[a0]) != 0.
  The `beq` branch at 0x8ba108 targets 0x8ba118, is taken when (a4(?) & 0x8000) == 0, and falls through when (a4(?) & 0x8000) != 0.
  The `beq` branch at 0x8ba110 targets 0x8ba180, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0x8ba120 targets 0x8ba0ec, is taken when s0(?) != s4(?), and falls through when s0(?) == s4(?).
  The `bne` branch at 0x8ba138 targets 0x8ba0cc, is taken when s6(?) < a5(=[a0]) (unsigned), and falls through when s6(?) >= a5(=[a0]) (unsigned).
  The `beq` branch at 0x8ba1a0 targets 0x8ba118, is taken when v0(=ret(IsConstantTwo_EXP)) == 0, and falls through when v0(=ret(IsConstantTwo_EXP)) != 0.
  The `beq` branch at 0x8ba1b8 targets 0x8ba268, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x8ba1d0 targets 0x8ba118, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `bne` branch at 0x8ba1d8 targets 0x8ba118, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x8ba1e8 targets 0x8ba118, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0x8ba1f4 targets 0x8ba118, is taken when t0(?) != t1(=0x12), and falls through when t0(?) == t1(=0x12).
  The `bc1f` branch at 0x8ba210 targets 0x8ba118, is taken when not (f0 == f1(=0x3ff0000000000000) (c.eq.d at 0x8ba208)), and falls through when f0 == f1(=0x3ff0000000000000) (c.eq.d at 0x8ba208).
  The `bne` branch at 0x8ba220 targets 0x8ba118, is taken when (a6(?) & 0x300) != 0, and falls through when (a6(?) & 0x300) == 0.
  The `bne` branch at 0x8ba228 targets 0x8ba118, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `beq` branch at 0x8ba240 targets 0x8ba118, is taken when a7(?) >= 0x3 (signed), and falls through when a7(?) < 0x3 (signed).
  The `bne` branch at 0x8ba24c targets 0x8ba118, is taken when t0(?) != t1(=0x1000), and falls through when t0(?) == t1(=0x1000).
  The `bne` branch at 0x8ba254 targets 0x8ba278, is taken when s0(?) != s3(?), and falls through when s0(?) == s3(?).
  The `beq` branch at 0x8ba260 targets 0x8ba280 and is always taken.
  The `bne` branch at 0x8ba268 targets 0x8ba1c0, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x8ba270 targets 0x8ba11c and is always taken.
  The `beq` branch at 0x8ba2a0 targets 0x8ba350, is taken when s8(?) >= a6(=[a0]) (unsigned), and falls through when s8(?) < a6(=[a0]) (unsigned).
  The `beq` branch at 0x8ba2dc targets 0x8ba2f8, is taken when v0(=ret(UsesRegister_EXP)) == 0, and falls through when v0(=ret(UsesRegister_EXP)) != 0.
  The `beq` branch at 0x8ba2f4 targets 0x8ba468, is taken when v0(=ret(PresubtractAvailable_EXP)) == 0, and falls through when v0(=ret(PresubtractAvailable_EXP)) != 0.
  The `bne` branch at 0x8ba300 targets 0x8ba444, is taken when a3(?) != a4(?), and falls through when a3(?) == a4(?).
  The `beq` branch at 0x8ba318 targets 0x8ba3f0, is taken when v0(=ret(WritesRegister_EXP)) == 0, and falls through when v0(=ret(WritesRegister_EXP)) != 0.
  The `beq` branch at 0x8ba328 targets 0x8ba118, is taken when a5(?) == a6(=0x2), and falls through when a5(?) != a6(=0x2).
  The `beq` branch at 0x8ba338 targets 0x8ba118, is taken when t0(?) == t1(=0x2), and falls through when t0(?) != t1(=0x2).
  The `beq` branch at 0x8ba340 targets 0x8ba118, is taken when t2(=one of 0x0, 0x1) == 0, and falls through when t2(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x8ba350 targets 0x8ba118, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x8ba388 targets 0x8ba3ac, is taken when v0(=ret(UsesRegister_EXP)) == 0, and falls through when v0(=ret(UsesRegister_EXP)) != 0.
  The `bne` branch at 0x8ba3c0 targets 0x8ba3e8, is taken when v0(=ret(WritesRegister_EXP)) != 0, and falls through when v0(=ret(WritesRegister_EXP)) == 0.
  The `bne` branch at 0x8ba3e0 targets 0x8ba360, is taken when a2(?) < a3(=[a0]) (unsigned), and falls through when a2(?) >= a3(=[a0]) (unsigned).
  The `beq` branch at 0x8ba3e8 targets 0x8ba11c and is always taken.
  The `beq` branch at 0x8ba3f8 targets 0x8ba118, is taken when a4(?) == a5(=0x2), and falls through when a4(?) != a5(=0x2).
  The `beq` branch at 0x8ba408 targets 0x8ba118, is taken when a6(?) == t0(=0x2), and falls through when a6(?) != t0(=0x2).
  The `beq` branch at 0x8ba428 targets 0x8ba33c, is taken when t1(?) >= t2(=[a0]) (unsigned), and falls through when t1(?) < t2(=[a0]) (unsigned).
  The `bne` branch at 0x8ba434 targets 0x8ba2bc, is taken when t3(=one of 0x0, 0x1) != 0, and falls through when t3(=one of 0x0, 0x1) == 0.
  The `beq` branch at 0x8ba43c targets 0x8ba11c and is always taken.
  The `beq` branch at 0x8ba458 targets 0x8ba308, is taken when v0(=ret(UsesRegisterSuperset_EXP)) == 0, and falls through when v0(=ret(UsesRegisterSuperset_EXP)) != 0.
  The `beq` branch at 0x8ba460 targets 0x8ba304 and is always taken.
  The `beq` branch at 0x8ba468 targets 0x8ba2f8 and is always taken.
  The return at 0x8ba16c has v0 = 0x0.
  The instructions from 0x8ba174 to 0x8ba17c are not reached by any path from the entry, and their branches are not listed.

- `RemoveRegisterCopies` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8ba480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8ba480-0x8baa0c (1420 bytes).
  It occupies 1420 bytes.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x8ba484, `lw` at 0x8ba804, `lw` at 0x8ba80c.
  21 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8ba4f0, `lhu` at 0x8ba4f4, `lhu` at 0x8ba4fc.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8, including `lw` at 0x8ba524, `lw` at 0x8ba710, `lw` at 0x8ba7d8.
  10 such `lw` accesses load 4 bytes from ?, including `lw` at 0x8ba52c, `lw` at 0x8ba58c, `lw` at 0x8ba600.
  2 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x8ba580, `lwc1` at 0x8ba640.
  The `bgezall` at 0x8ba724 calls UsesRegister_EXP [0x8c1cc0] with a0=?, a1=?, a2=one of 0x7, 0x8, a3=?, a4=one of 0x0, 0x1, a5=0x12.
  The `bgezall` at 0x8ba74c calls WritesRegister_EXP [0x8c1dc0] with a0=?, a1=?, a2=one of 0x7, 0x8, a3=?.
  The `bgezall` at 0x8ba76c calls WritesRegister_EXP [0x8c1dc0] with a0=?, a1=?, a2=one of 0x7, 0x8, a3=0x1.
  The `bgezall` at 0x8ba8a8 calls ReplaceRegister_EXP [0x8c1a00] with a0=?, a1=?, a2=?, a3=0x7, a5=one of 0x7, 0x8.
  The `bgezall` at 0x8ba8c8 calls ReplaceRegister_EXP [0x8c1a00] with a0=?, a1=?, a2=?, a3=0x8, a5=one of 0x7, 0x8.
  The `bgezall` at 0x8ba91c calls ReplaceRegister_EXP [0x8c1a00] with a0=?, a1=?, a2=?, a3=0x7, a5=one of 0x7, 0x8.
  The `bgezall` at 0x8ba93c calls ReplaceRegister_EXP [0x8c1a00] with a0=?, a1=?, a2=?, a3=0x8, a5=one of 0x7, 0x8.
  The `bgezall` at 0x8ba9b8 calls ReplaceRegister_EXP [0x8c1a00] with a0=?, a1=?, a2=?, a3=0x7, a5=one of 0x7, 0x8.
  The `bgezall` at 0x8ba9d8 calls ReplaceRegister_EXP [0x8c1a00] with a0=?, a1=?, a2=?, a3=0x8, a5=one of 0x7, 0x8.
  The `beq` branch at 0x8ba4b4 targets 0x8ba69c, is taken when a6(=[a0]) == 0, and falls through when a6(=[a0]) != 0.
  The `beq` branch at 0x8ba4e0 targets 0x8ba524 and is always taken.
  The `beq` branch at 0x8ba4e8 targets 0x8ba618, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x8ba4f8 targets 0x8ba630, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bne` branch at 0x8ba508 targets 0x8ba548, is taken when s1(?) != s5(=0x2), and falls through when s1(?) == s5(=0x2).
  The `beq` branch at 0x8ba51c targets 0x8ba69c, is taken when s2(?) >= a6(=[a0]) (unsigned), and falls through when s2(?) < a6(=[a0]) (unsigned).
  The `bne` branch at 0x8ba540 targets 0x8ba510, is taken when a0(?) != s5(=0x2), and falls through when a0(?) == s5(=0x2).
  The `beq` branch at 0x8ba558 targets 0x8ba4e8, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0x8ba560 targets 0x8ba600, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x8ba568 targets 0x8ba500, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x8ba570 targets 0x8ba500, is taken when a0(?) != a5(=0x12), and falls through when a0(?) == a5(=0x12).
  The `bne` branch at 0x8ba578 targets 0x8ba500, is taken when a1(?) != t0(=0x10), and falls through when a1(?) == t0(=0x10).
  The `bc1f` branch at 0x8ba590 targets 0x8ba500, is taken when not (f0 == f4(=0x3ff0000000000000) (c.eq.d at 0x8ba588)), and falls through when f0 == f4(=0x3ff0000000000000) (c.eq.d at 0x8ba588).
  The `bne` branch at 0x8ba598 targets 0x8ba500, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `bne` branch at 0x8ba5a8 targets 0x8ba500, is taken when (a0(?) & 0x300) != 0, and falls through when (a0(?) & 0x300) == 0.
  The `bne` branch at 0x8ba5b0 targets 0x8ba500, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x8ba5c4 targets 0x8ba500, is taken when a4(?) >= 0x3 (signed), and falls through when a4(?) < 0x3 (signed).
  The `bne` branch at 0x8ba5cc targets 0x8ba500, is taken when a7(?) != t1(=0x8), and falls through when a7(?) == t1(=0x8).
  The `beq` branch at 0x8ba5d4 targets 0x8ba6d0, is taken when a1(?) == t2(=0x100), and falls through when a1(?) != t2(=0x100).
  The `bne` branch at 0x8ba5dc targets 0x8ba500, is taken when a1(?) != t8(=0x200), and falls through when a1(?) == t8(=0x200).
  The `beq` branch at 0x8ba5ec targets 0x8ba500, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x8ba5f4 targets 0x8ba6e8 and is always taken.
  The `bne` branch at 0x8ba608 targets 0x8ba568, is taken when (a1(?) & 0x1) != 0, and falls through when (a1(?) & 0x1) == 0.
  The `beq` branch at 0x8ba610 targets 0x8ba504 and is always taken.
  The `bne` branch at 0x8ba620 targets 0x8ba4f0, is taken when (a2(?) & 0x1) != 0, and falls through when (a2(?) & 0x1) == 0.
  The `beq` branch at 0x8ba628 targets 0x8ba504 and is always taken.
  The `bne` branch at 0x8ba630 targets 0x8ba500, is taken when a0(?) != a5(=0x12), and falls through when a0(?) == a5(=0x12).
  The `bne` branch at 0x8ba638 targets 0x8ba500, is taken when a1(?) != t0(=0x10), and falls through when a1(?) == t0(=0x10).
  The `bc1f` branch at 0x8ba650 targets 0x8ba500, is taken when not (f1 == f4(=0x3ff0000000000000) (c.eq.d at 0x8ba648)), and falls through when f1 == f4(=0x3ff0000000000000) (c.eq.d at 0x8ba648).
  The `bne` branch at 0x8ba658 targets 0x8ba500, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `bne` branch at 0x8ba668 targets 0x8ba500, is taken when (a0(?) & 0x300) != 0, and falls through when (a0(?) & 0x300) == 0.
  The `bne` branch at 0x8ba670 targets 0x8ba500, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x8ba684 targets 0x8ba500, is taken when a4(?) >= 0x3 (signed), and falls through when a4(?) < 0x3 (signed).
  The `bne` branch at 0x8ba68c targets 0x8ba500, is taken when a7(?) != t3(=0x7), and falls through when a7(?) == t3(=0x7).
  The `beq` branch at 0x8ba694 targets 0x8ba5d0 and is always taken.
  The `beq` branch at 0x8ba6dc targets 0x8ba500, is taken when s3(?) >= a6(=[a0]) (unsigned), and falls through when s3(?) < a6(=[a0]) (unsigned).
  The `beq` branch at 0x8ba72c targets 0x8ba740, is taken when v0(=ret(UsesRegister_EXP)) == 0, and falls through when v0(=ret(UsesRegister_EXP)) != 0.
  The `beq` branch at 0x8ba734 targets 0x8ba970, is taken when a2(=one of 0x0, 0x1) == 0, and falls through when a2(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x8ba754 targets 0x8ba760, is taken when v0(=ret(WritesRegister_EXP)) == 0, and falls through when v0(=ret(WritesRegister_EXP)) != 0.
  The `beq` branch at 0x8ba790 targets 0x8ba808, is taken when v0(=ret(WritesRegister_EXP)) == 0, and falls through when v0(=ret(WritesRegister_EXP)) != 0.
  The `beq` branch at 0x8ba79c targets 0x8ba840, is taken when a4(=one of 0x0, 0x1) == 0, and falls through when a4(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x8ba7b0 targets 0x8ba968, is taken when s3(?) >= a7(?) (unsigned), and falls through when s3(?) < a7(?) (unsigned).
  The `beq` branch at 0x8ba7cc targets 0x8ba7f0, is taken when (a4(?) & 0x1) == 0, and falls through when (a4(?) & 0x1) != 0.
  The `beq` branch at 0x8ba7e4 targets 0x8ba998, is taken when at(?) == s5(=0x2), and falls through when at(?) != s5(=0x2).
  The `bnel` branch at 0x8ba7f8 targets 0x8ba85c, is taken when a1(?) != 0, and falls through when a1(?) == 0; its branch-likely delay slot `lw a7,140(s6)` at 0x8ba7fc runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x8ba800 targets 0x8ba500 and is always taken.
  The `beq` branch at 0x8ba82c targets 0x8ba984, is taken when a2(?) >= a3(=[a0]) (unsigned), and falls through when a2(?) < a3(=[a0]) (unsigned).
  The `bne` branch at 0x8ba838 targets 0x8ba708, is taken when a4(=one of 0x0, 0x1) != 0, and falls through when a4(=one of 0x0, 0x1) == 0.
  The `beq` branch at 0x8ba840 targets 0x8ba500 and is always taken.
  The `beq` branch at 0x8ba850 targets 0x8ba800, is taken when a0(?) == a6(?), and falls through when a0(?) != a6(?).
  The `beq` branch at 0x8ba868 targets 0x8ba900, is taken when a7(?) == s5(=0x2), and falls through when a7(?) != s5(=0x2).
  The `bne` branch at 0x8ba884 targets 0x8ba848, is taken when ra(?) != s5(=0x2), and falls through when ra(?) == s5(=0x2).
  The `beq` branch at 0x8ba8ec targets 0x8ba848 and is always taken.
  The `beq` branch at 0x8ba960 targets 0x8ba870 and is always taken.
  The `beq` branch at 0x8ba968 targets 0x8ba500 and is always taken.
  The `bne` branch at 0x8ba974 targets 0x8ba73c, is taken when v1(?) != s5(=0x2), and falls through when v1(?) == s5(=0x2).
  The `beq` branch at 0x8ba97c targets 0x8ba744 and is always taken.
  The `bne` branch at 0x8ba988 targets 0x8ba7a8, is taken when a0(=one of 0x0, 0x1) != 0, and falls through when a0(=one of 0x0, 0x1) == 0.
  The `beq` branch at 0x8ba990 targets 0x8ba840 and is always taken.
  The `beq` branch at 0x8baa04 targets 0x8ba7ec and is always taken.
  The return at 0x8ba6c8 has v0 = 0x0.
  The instructions from 0x8ba5fc to 0x8ba5fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8ba8f4 to 0x8ba8fc are not reached by any path from the entry, and their branches are not listed.

- `RegroupMultiplications1` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8baa40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8baa40-0x8bada8 (872 bytes).
  It occupies 872 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x8baa44, `lw` at 0x8bac28.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8, including `lw` at 0x8baa90, `lw` at 0x8baba4.
  13 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8baaa8, `lhu` at 0x8baaac, `lhu` at 0x8baab0.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x8bab30, `lw` at 0x8bab48, `lw` at 0x8babcc.
  The `lwc1` at 0x8bab74 loads 4 bytes from ?.
  The `bgezall` at 0x8bab14 calls r300PSOptKillAndSqueeze_EXP [0x8c0980] with a0=a0 at entry (arg0), a1=0x0, a2=0x0, a3=?, a4=[a0].
  The `bgezall` at 0x8bacd4 calls OtherFactor [0x8b9ec0] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x8bad20 calls OmodValidFactor [0x8b9cc0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=ret(OtherFactor).
  The `bgezall` at 0x8bad6c calls SwitchOmod [0x8b9b40] with a0=a0 at entry (arg0), a1=ret(OtherFactor), a2=one of 0x7, 0x8, a3=?.
  The `beq` branch at 0x8baa74 targets 0x8bac58, is taken when a4(=[a0]) == 0, and falls through when a4(=[a0]) != 0.
  The `beq` branch at 0x8baab8 targets 0x8bab30, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x8baac4 targets 0x8bab48, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `bne` branch at 0x8baad0 targets 0x8baaac, is taken when s1(?) != s4(=0x2), and falls through when s1(?) == s4(=0x2).
  The `bne` branch at 0x8baae0 targets 0x8baa90, is taken when s2(?) < a4(=[a0]) (unsigned), and falls through when s2(?) >= a4(=[a0]) (unsigned).
  The `beq` branch at 0x8baae8 targets 0x8bac58, is taken when t1(=one of 0x0, 0x1) == 0, and falls through when t1(=one of 0x0, 0x1) != 0.
  The `bne` branch at 0x8bab38 targets 0x8baac0, is taken when (v1(?) & 0x1) != 0, and falls through when (v1(?) & 0x1) == 0.
  The `beq` branch at 0x8bab40 targets 0x8baad0 and is always taken.
  The `bne` branch at 0x8bab50 targets 0x8baacc, is taken when (a1(?) & 0x8) != 0, and falls through when (a1(?) & 0x8) == 0.
  The `bne` branch at 0x8bab5c targets 0x8baacc, is taken when a2(?) != a0(=0x12), and falls through when a2(?) == a0(=0x12).
  The `bne` branch at 0x8bab6c targets 0x8baacc, is taken when a3(?) != a5(=0x10), and falls through when a3(?) == a5(=0x10).
  The `bc1f` branch at 0x8bab84 targets 0x8baacc, is taken when not (f0 == f4(=0x4000000000000000) (c.eq.d at 0x8bab7c)), and falls through when f0 == f4(=0x4000000000000000) (c.eq.d at 0x8bab7c).
  The `beq` branch at 0x8bab8c targets 0x8baacc, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x8babd8 targets 0x8bac8c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x8babe0 targets 0x8bac9c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x8babf8 targets 0x8bac04, is taken when t0(?) != a2(?), and falls through when t0(?) == a2(?).
  The `bne` branch at 0x8bac04 targets 0x8bac10, is taken when a7(?) != a2(?), and falls through when a7(?) == a2(?).
  The `bne` branch at 0x8bac10 targets 0x8babec, is taken when v0(?) != t2(?), and falls through when v0(?) == t2(?).
  The `bne` branch at 0x8bac1c targets 0x8babc4, is taken when t8(?) != s4(=0x2), and falls through when t8(?) == s4(=0x2).
  The `beq` branch at 0x8bac40 targets 0x8baacc, is taken when a6(?) >= a4(=[a0]) (unsigned), and falls through when a6(?) < a4(=[a0]) (unsigned).
  The `beq` branch at 0x8bac48 targets 0x8baba4, is taken when t3(=one of 0x0, 0x1) == 0, and falls through when t3(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x8bac50 targets 0x8baad0 and is always taken.
  The `bne` branch at 0x8bac8c targets 0x8babe0, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x8bac94 targets 0x8bac1c and is always taken.
  The `bne` branch at 0x8baca4 targets 0x8babe8, is taken when a7(?) != s4(=0x2), and falls through when a7(?) == s4(=0x2).
  The `beq` branch at 0x8bad00 targets 0x8bac18, is taken when v0(=ret(OtherFactor)) == ra(=-0x1), and falls through when v0(=ret(OtherFactor)) != ra(=-0x1).
  The `beq` branch at 0x8bad44 targets 0x8bad98, is taken when v0(=ret(OmodValidFactor)) == 0, and falls through when v0(=ret(OmodValidFactor)) != 0.
  The `bne` branch at 0x8bad4c targets 0x8bac1c, is taken when t3(=one of 0x0, 0x1) != 0, and falls through when t3(=one of 0x0, 0x1) == 0.
  The `beq` branch at 0x8bad54 targets 0x8bada0, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0x8bad90 targets 0x8bac18 and is always taken.
  The `beq` branch at 0x8bad98 targets 0x8bac18 and is always taken.
  The `beq` branch at 0x8bada0 targets 0x8bad5c and is always taken.
  The return at 0x8bab28 has v0 = ret(r300PSOptKillAndSqueeze_EXP).
  The return at 0x8bac84 has v0 = 0x0.

- `PreoptimizeCoissue` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8badc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8badc0-0x8bb248 (1160 bytes).
  It occupies 1160 bytes.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x8badc4, `lw` at 0x8bae7c, `lw` at 0x8baebc.
  8 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8, including `lw` at 0x8bae34, `lw` at 0x8bae9c, `lw` at 0x8baee0.
  6 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8bae3c, `lhu` at 0x8bae40, `lhu` at 0x8bae54.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x8bae48, `lw` at 0x8bb054, `lw` at 0x8bb07c.
  3 such `sh` accesses store 2 bytes to ?, including `sh` at 0x8bb058, `sh` at 0x8bb060, `sh` at 0x8bb070.
  The `lwc1` at 0x8bb068 loads 4 bytes from ?.
  The `swc1` at 0x8bb078 stores 4 bytes to ?.
  The `sw` at 0x8bb084 stores 4 bytes to ?.
  The `bgezall` at 0x8bae6c calls WritesSingleChannel_EXP [0x8c1080] with a0=?, a1=?, a2=?, a3=?, a4=[a0].
  The `bgezall` at 0x8baea8 calls WritesRegAlpha_EXP [0x8c10c0] with a0=?, a1=?, a2=?, a3=?, a4=[a0].
  The `bgezall` at 0x8baeec calls UsesRegAlpha_EXP [0x8c1100] with a0=?, a1=?, a2=?, a3=?, a4=[a0].
  The `bgezall` at 0x8baf2c calls WritesChannels_EXP [0x8c1300] with a0=?, a1=?, a2=?, a3=?, a4=[a0].
  The `bgezall` at 0x8bb01c calls GetFreeAlphaAddress_EXP [0x8c1380] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x8bb038 calls ReplaceOperand_EXP [0x8c1400] with a0=?, a1=?, a2=0x8, a3=ret(GetFreeAlphaAddress_EXP).
  The `bgezall` at 0x8bb08c calls r300PSOptUpdateInputs_EXP [0x8bd800] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x8bb098 calls r300PSOptCanonDepend_EXP [0x8be140] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x8bb108 calls UsesChannels_EXP [0x8c1180] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x8bb124 calls MixedChannels_EXP [0x8c1240] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x8bb13c calls AlphaAddressAvailable_EXP [0x8c13c0] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x8bb1d8 calls r300PSOptKillAndSqueeze_EXP [0x8c0980] with a0=a0 at entry (arg0), a1=0x0, a2=0x0, a3=?, a4=[a0], a5=one of 0x0, 0x1.
  The `beq` branch at 0x8badf8 targets 0x8bb200, is taken when a4(=[a0]) == 0, and falls through when a4(=[a0]) != 0.
  The `beq` branch at 0x8bae0c targets 0x8bb23c and is always taken.
  The `beq` branch at 0x8bae18 targets 0x8bae6c, is taken when a2(?) == at(=0xd), and falls through when a2(?) != at(=0xd).
  The `beq` branch at 0x8bae2c targets 0x8bb1a8, is taken when s6(?) >= a4(=[a0]) (unsigned), and falls through when s6(?) < a4(=[a0]) (unsigned).
  The `bne` branch at 0x8bae50 targets 0x8bae14, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x8bae5c targets 0x8bae18, is taken when (a5(?) & 0x1) != 0, and falls through when (a5(?) & 0x1) == 0.
  The `beq` branch at 0x8bae64 targets 0x8bae24 and is always taken.
  The `beq` branch at 0x8bae74 targets 0x8bb0dc, is taken when v0(=ret(WritesSingleChannel_EXP)) == 0, and falls through when v0(=ret(WritesSingleChannel_EXP)) != 0.
  The `beq` branch at 0x8bae88 targets 0x8baecc, is taken when s0(?) >= a4(=[a0]) (unsigned), and falls through when s0(?) < a4(=[a0]) (unsigned).
  The `beq` branch at 0x8baeb0 targets 0x8bb154, is taken when v0(=ret(WritesRegAlpha_EXP)) == 0, and falls through when v0(=ret(WritesRegAlpha_EXP)) != 0.
  The `beq` branch at 0x8baec4 targets 0x8baed0 and is always taken.
  The `beq` branch at 0x8baed0 targets 0x8bb234, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x8baef4 targets 0x8baf9c, is taken when v0(=ret(UsesRegAlpha_EXP)) == 0, and falls through when v0(=ret(UsesRegAlpha_EXP)) != 0.
  The `beq` branch at 0x8baf0c targets 0x8baf94, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x8baf34 targets 0x8baf80, is taken when v0(=ret(WritesChannels_EXP)) == 0, and falls through when v0(=ret(WritesChannels_EXP)) != 0.
  The `bne` branch at 0x8baf4c targets 0x8bafc0, is taken when a0(?) < s0(?) (unsigned), and falls through when a0(?) >= s0(?) (unsigned).
  The `beq` branch at 0x8baf74 targets 0x8bb0f0 and is always taken.
  The `bne` branch at 0x8baf8c targets 0x8baf18, is taken when s7(?) < a4(=[a0]) (unsigned), and falls through when s7(?) >= a4(=[a0]) (unsigned).
  The `beq` branch at 0x8baf94 targets 0x8baf3c and is always taken.
  The `bne` branch at 0x8bafa8 targets 0x8baedc, is taken when s7(?) < a4(=[a0]) (unsigned), and falls through when s7(?) >= a4(=[a0]) (unsigned).
  The `beq` branch at 0x8bafb0 targets 0x8baf08 and is always taken.
  The `beq` branch at 0x8bafc8 targets 0x8bafd8, is taken when ra(=one of 0x0, 0x1) == 0, and falls through when ra(=one of 0x0, 0x1) != 0.
  The `bne` branch at 0x8bafd4 targets 0x8bb0cc, is taken when at(?) < v1(?) (signed), and falls through when at(?) >= v1(?) (signed).
  The `beq` branch at 0x8bafdc targets 0x8baff8, is taken when a0(=one of 0x0, 0x1) == 0, and falls through when a0(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x8bafe8 targets 0x8bb0dc, is taken when a3(=one of 0x0, 0x1) == 0, and falls through when a3(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x8baff0 targets 0x8bb0dc, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x8baff8 targets 0x8bb054, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bnel` branch at 0x8bb044 targets 0x8bb010, is taken when s0(?) != s7(?), and falls through when s0(?) == s7(?); its branch-likely delay slot `lw s1,8(s3)` at 0x8bb048 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x8bb074 targets 0x8bb088, is taken when (t9(?) & 0x8) == 0, and falls through when (t9(?) & 0x8) != 0.
  The `beq` branch at 0x8bb0a0 targets 0x8bb0dc and is always taken.
  The `beq` branch at 0x8bb0b0 targets 0x8bb170, is taken when v1(=one of 0x0, 0x1) == 0, and falls through when v1(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x8bb0c4 targets 0x8bb174, is taken when a0(?) >= a1(?) (signed), and falls through when a0(?) < a1(?) (signed).
  The `beq` branch at 0x8bb0d0 targets 0x8bb0dc, is taken when a2(=one of 0x0, 0x1) == 0, and falls through when a2(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x8bb0dc targets 0x8bae20 and is always taken.
  The `beq` branch at 0x8bb0e8 targets 0x8bb0a8, is taken when s0(?) == s7(?), and falls through when s0(?) != s7(?).
  The `beq` branch at 0x8bb110 targets 0x8bb0e4, is taken when v0(=ret(UsesChannels_EXP)) == 0, and falls through when v0(=ret(UsesChannels_EXP)) != 0.
  The `beq` branch at 0x8bb12c targets 0x8bb138, is taken when v0(=ret(MixedChannels_EXP)) == 0, and falls through when v0(=ret(MixedChannels_EXP)) != 0.
  The `bne` branch at 0x8bb144 targets 0x8bb0e4, is taken when v0(=ret(AlphaAddressAvailable_EXP)) != 0, and falls through when v0(=ret(AlphaAddressAvailable_EXP)) == 0.
  The `beq` branch at 0x8bb14c targets 0x8bb0e4 and is always taken.
  The `bne` branch at 0x8bb160 targets 0x8bae98, is taken when s7(?) < a4(=[a0]) (unsigned), and falls through when s7(?) >= a4(=[a0]) (unsigned).
  The `beq` branch at 0x8bb168 targets 0x8baec4 and is always taken.
  The `beq` branch at 0x8bb178 targets 0x8bb194, is taken when a0(=one of 0x0, 0x1) == 0, and falls through when a0(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x8bb184 targets 0x8bb0dc, is taken when a1(=one of 0x0, 0x1) == 0, and falls through when a1(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x8bb18c targets 0x8bb0dc, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x8bb194 targets 0x8bb0dc, is taken when a4(=one of 0x0, 0x1) != 0, and falls through when a4(=one of 0x0, 0x1) == 0.
  The `beq` branch at 0x8bb1a0 targets 0x8baff8 and is always taken.
  The `beq` branch at 0x8bb1ac targets 0x8bb200, is taken when a5(=one of 0x0, 0x1) == 0, and falls through when a5(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x8bb234 targets 0x8baf0c and is always taken.
  The `beq` branch at 0x8bb240 targets 0x8bae38 and is always taken.
  The return at 0x8bb1ec has v0 = ret(r300PSOptKillAndSqueeze_EXP).
  The return at 0x8bb22c has v0 = 0x0.
  The instructions from 0x8baf7c to 0x8baf7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8bafb8 to 0x8bafbc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8bb1f4 to 0x8bb1fc are not reached by any path from the entry, and their branches are not listed.

- `OptimizeCoissue` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8bb280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8bb280-0x8bc034 (3508 bytes).
  It occupies 3508 bytes.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x8bb284, `lw` at 0x8bb328, `lw` at 0x8bb968.
  56 such `lw` accesses load 4 bytes from ?, including `lw` at 0x8bb318, `lw` at 0x8bb35c, `lw` at 0x8bb360.
  The `lw` at 0x8bb344 loads 4 bytes from a0 (arg0 at entry) +0x8.
  99 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8bb34c, `lhu` at 0x8bb350, `lhu` at 0x8bb378.
  The `lw` at 0x8bb3d4 loads 4 bytes from table(0xb78000) +0x0.
  36 such `sh` accesses store 2 bytes to ?, including `sh` at 0x8bb4d8, `sh` at 0x8bb4f0, `sh` at 0x8bb4f8.
  32 such `sw` accesses store 4 bytes to ?, including `sw` at 0x8bb548, `sw` at 0x8bb55c, `sw` at 0x8bb570.
  The `bgezall` at 0x8bb2e4 calls AlignInputs [0x8b9580] with a0=?, a1=?, a2=0x1, a3=?.
  The `bgezall` at 0x8bb48c calls AlignInputs [0x8b9580] with a0=?, a1=?, a2=0x0, a3=?, a5=0x4, a6=0x6, a7=0xe.
  The `bgezall` at 0x8bb5a0 calls AlignInputs [0x8b9580] with a0=?, a1=?, a2=0x0, a3=?.
  The `bgezall` at 0x8bb6c4 calls AlignInputs [0x8b9580] with a0=?, a1=?, a2=0x1, a3=one of 0x3, 0xffff, a4=0x3.
  The `bgezall` at 0x8bb748 calls AlignInputs [0x8b9580] with a0=?, a1=?, a2=0x1, a3=?.
  The `bgezall` at 0x8bb99c calls r300PSOptKillAndSqueeze_EXP [0x8c0980] with a0=a0 at entry (arg0), a1=0x0, a2=0x0, a3=?.
  The `bgezall` at 0x8bbb04 calls AlignInputs [0x8b9580] with a0=?, a1=?, a2=0x0, a3=?.
  The `bgezall` at 0x8bbda0 calls r300PSOptSortInputs_EXP [0x8bfbc0] with a0=?, a1=0x0, a2=?, a3=?.
  The `bgezall` at 0x8bbdb0 calls r300PSOptSortInputs_EXP [0x8bfbc0] with a0=?, a1=0x1, a2=?, a3=?.
  The `bgezall` at 0x8bbdbc calls r300PSOptCanonDepend_EXP [0x8be140] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x8bb2b8 targets 0x8bb9c0, is taken when v1(=[a0]) == 0, and falls through when v1(=[a0]) != 0.
  The `beq` branch at 0x8bb2d0 targets 0x8bb344 and is always taken.
  The `beq` branch at 0x8bb2f4 targets 0x8bbb24, is taken when s6(?) == ra(=0x4), and falls through when s6(?) != ra(=0x4).
  The `beq` branch at 0x8bb300 targets 0x8bba00, is taken when s6(?) == at(=0x6), and falls through when s6(?) != at(=0x6).
  The `beq` branch at 0x8bb308 targets 0x8bba00, is taken when s6(?) == v1(=0xe), and falls through when s6(?) != v1(=0xe).
  The `beq` branch at 0x8bb310 targets 0x8bb964, is taken when s8(?) == 0, and falls through when s8(?) != 0.
  The `beq` branch at 0x8bb31c targets 0x8bbd98, is taken when a0(?) == t1(=0x2), and falls through when a0(?) != t1(=0x2).
  The `beq` branch at 0x8bb33c targets 0x8bb96c, is taken when s3(?) >= v1(=[a0]) (unsigned), and falls through when s3(?) < v1(=[a0]) (unsigned).
  The `beq` branch at 0x8bb358 targets 0x8bb3e0, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x8bb36c targets 0x8bb378, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x8bb384 targets 0x8bb404, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x8bb394 targets 0x8bb3a0, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x8bb3a0 targets 0x8bb32c, is taken when s2(?) == 0, and falls through when s2(?) != 0.
  The `beq` branch at 0x8bb3ac targets 0x8bb32c, is taken when at(?) == s7(=0x1), and falls through when at(?) != s7(=0x1).
  The `bne` branch at 0x8bb3b8 targets 0x8bb32c, is taken when a0(?) != at(?), and falls through when a0(?) == at(?).
  The `beq` branch at 0x8bb3cc targets 0x8bb32c, is taken when s0(?) >= 0x10 (unsigned), and falls through when s0(?) < 0x10 (unsigned).
  The `bne` branch at 0x8bb3e8 targets 0x8bb364, is taken when (v0(?) & 0x1) != 0, and falls through when (v0(?) & 0x1) == 0.
  The `bne` branch at 0x8bb3f4 targets 0x8bb364, is taken when (at(?) & 0x44) != 0, and falls through when (at(?) & 0x44) == 0.
  The `beq` branch at 0x8bb3fc targets 0x8bb36c and is always taken.
  The `bne` branch at 0x8bb404 targets 0x8bb38c, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `bne` branch at 0x8bb40c targets 0x8bb38c, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x8bb414 targets 0x8bb394 and is always taken.
  The `beq` branch at 0x8bb424 targets 0x8bb848, is taken when s6(?) == a5(=0x4), and falls through when s6(?) != a5(=0x4).
  The `beq` branch at 0x8bb42c targets 0x8bb440, is taken when s6(?) == a6(=0x6), and falls through when s6(?) != a6(=0x6).
  The `bne` branch at 0x8bb438 targets 0x8bb32c, is taken when s6(?) != a7(=0xe), and falls through when s6(?) == a7(=0xe).
  The `beq` branch at 0x8bb448 targets 0x8bb480, is taken when (t0(?) & 0x20) == 0, and falls through when (t0(?) & 0x20) != 0.
  The `beq` branch at 0x8bb468 targets 0x8bb480, is taken when (t2(?) & 0x10) == 0, and falls through when (t2(?) & 0x10) != 0.
  The `bne` branch at 0x8bb478 targets 0x8bb32c, is taken when t9(?) != ra(?), and falls through when t9(?) == ra(?).
  The `beq` branch at 0x8bb4b8 targets 0x8bb4dc, is taken when v0(?) == ra(=0xffff), and falls through when v0(?) != ra(=0xffff).
  The `beq` branch at 0x8bb4c4 targets 0x8bb4dc, is taken when v0(?) == a6(?), and falls through when v0(?) != a6(?).
  The `bne` branch at 0x8bb4cc targets 0x8bc000, is taken when a6(?) != a2(=0xffff), and falls through when a6(?) == a2(=0xffff).
  The `bne` branch at 0x8bb4e4 targets 0x8bb4a8, is taken when a0(?) != a3(=0x3), and falls through when a0(?) == a3(=0x3).
  The `beq` branch at 0x8bb50c targets 0x8bb520, is taken when (a4(?) & 0x20) == 0, and falls through when (a4(?) & 0x20) != 0.
  The `bgtz` branch at 0x8bb574 targets 0x8bb550, is taken when a6(?) > 0 (signed), and falls through when a6(?) <= 0 (signed).
  The `beq` branch at 0x8bb588 targets 0x8bb318 and is always taken.
  The `beq` branch at 0x8bb5ac targets 0x8bbc58, is taken when s6(?) == s7(=0x1), and falls through when s6(?) != s7(=0x1).
  The `beq` branch at 0x8bb5b8 targets 0x8bb5c8, is taken when s6(?) == ra(=0x9), and falls through when s6(?) != ra(=0x9).
  The `bne` branch at 0x8bb5c0 targets 0x8bb310, is taken when s6(?) != at(=0xb), and falls through when s6(?) == at(=0xb).
  The `beq` branch at 0x8bb5e0 targets 0x8bb618, is taken when (v1(?) & 0x20) == 0, and falls through when (v1(?) & 0x20) != 0.
  The `beq` branch at 0x8bb600 targets 0x8bb618, is taken when (a0(?) & 0x10) == 0, and falls through when (a0(?) & 0x10) != 0.
  The `bne` branch at 0x8bb610 targets 0x8bb310, is taken when a3(?) != a4(?), and falls through when a3(?) == a4(?).
  The `beq` branch at 0x8bb628 targets 0x8bb640, is taken when (a5(?) & 0x20) == 0, and falls through when (a5(?) & 0x20) != 0.
  The `beq` branch at 0x8bb630 targets 0x8bb640, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bne` branch at 0x8bb63c targets 0x8bb310, is taken when t2(?) != t3(?), and falls through when t2(?) == t3(?).
  The `bne` branch at 0x8bb65c targets 0x8bb680, is taken when t8(?) != a0(?), and falls through when t8(?) == a0(?).
  The `bne` branch at 0x8bb678 targets 0x8bbddc, is taken when (t9(?) & ra(?)) != 0, and falls through when (t9(?) & ra(?)) == 0.
  The `beq` branch at 0x8bb684 targets 0x8bb6a4, is taken when v1(?) == a2(=0xffff), and falls through when v1(?) != a2(=0xffff).
  The `beq` branch at 0x8bb68c targets 0x8bb6a4, is taken when a0(?) == v1(?), and falls through when a0(?) != v1(?).
  The `bne` branch at 0x8bb694 targets 0x8bbde0, is taken when a0(?) != a3(=0xffff), and falls through when a0(?) == a3(=0xffff).
  The `bne` branch at 0x8bb6ac targets 0x8bb644, is taken when v1(?) != a4(=0x3), and falls through when v1(?) == a4(=0x3).
  The `beq` branch at 0x8bb6dc targets 0x8bbf20 and is always taken.
  The `beq` branch at 0x8bb6e4 targets 0x8bb8d8, is taken when s6(?) == s7(=0x1), and falls through when s6(?) != s7(=0x1).
  The `beq` branch at 0x8bb6ec targets 0x8bb700, is taken when s6(?) == ra(=0x9), and falls through when s6(?) != ra(=0x9).
  The `bne` branch at 0x8bb6f8 targets 0x8bb32c, is taken when s6(?) != at(=0xb), and falls through when s6(?) == at(=0xb).
  The `beq` branch at 0x8bb708 targets 0x8bb738, is taken when (a0(?) & 0x20) == 0, and falls through when (a0(?) & 0x20) != 0.
  The `beq` branch at 0x8bb728 targets 0x8bb73c, is taken when (a1(?) & 0x10) == 0, and falls through when (a1(?) & 0x10) != 0.
  The `bne` branch at 0x8bb734 targets 0x8bb32c, is taken when a4(?) != a5(?), and falls through when a4(?) == a5(?).
  The `beq` branch at 0x8bb774 targets 0x8bb798, is taken when v0(?) == ra(=0xffff), and falls through when v0(?) != ra(=0xffff).
  The `beq` branch at 0x8bb780 targets 0x8bb798, is taken when v0(?) == a6(?), and falls through when v0(?) != a6(?).
  The `bne` branch at 0x8bb788 targets 0x8bc014, is taken when a6(?) != a2(=0xffff), and falls through when a6(?) == a2(=0xffff).
  The `bne` branch at 0x8bb7a0 targets 0x8bb764, is taken when a0(?) != a3(=0x3), and falls through when a0(?) == a3(=0x3).
  The `beq` branch at 0x8bb7c8 targets 0x8bb7d4, is taken when (a4(?) & 0x20) == 0, and falls through when (a4(?) & 0x20) != 0.
  The `bgtz` branch at 0x8bb82c targets 0x8bb808, is taken when a6(?) > 0 (signed), and falls through when a6(?) <= 0 (signed).
  The `beq` branch at 0x8bb840 targets 0x8bb318 and is always taken.
  The `bgtz` branch at 0x8bb8b8 targets 0x8bb894, is taken when a6(?) > 0 (signed), and falls through when a6(?) <= 0 (signed).
  The `beq` branch at 0x8bb8d0 targets 0x8bb318 and is always taken.
  The `bgtz` branch at 0x8bb948 targets 0x8bb924, is taken when a6(?) > 0 (signed), and falls through when a6(?) <= 0 (signed).
  The `beq` branch at 0x8bb95c targets 0x8bb318 and is always taken.
  The `beq` branch at 0x8bb964 targets 0x8bb32c and is always taken.
  The `beq` branch at 0x8bb970 targets 0x8bb9c0, is taken when t1(=one of 0x0, 0x1) == 0, and falls through when t1(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x8bba14 targets 0x8bba4c, is taken when (t2(?) & 0x20) == 0, and falls through when (t2(?) & 0x20) != 0.
  The `beq` branch at 0x8bba34 targets 0x8bba4c, is taken when (t3(?) & 0x10) == 0, and falls through when (t3(?) & 0x10) != 0.
  The `bne` branch at 0x8bba44 targets 0x8bb310, is taken when ra(?) != at(?), and falls through when ra(?) == at(?).
  The `beq` branch at 0x8bba54 targets 0x8bba80, is taken when (v1(?) & 0x20) == 0, and falls through when (v1(?) & 0x20) != 0.
  The `beq` branch at 0x8bba6c targets 0x8bba84, is taken when (a0(?) & 0x10) == 0, and falls through when (a0(?) & 0x10) != 0.
  The `bne` branch at 0x8bba7c targets 0x8bb310, is taken when a3(?) != a4(?), and falls through when a3(?) == a4(?).
  The `bne` branch at 0x8bbaa4 targets 0x8bbac0, is taken when a5(?) != a0(?), and falls through when a5(?) == a0(?).
  The `bne` branch at 0x8bbab8 targets 0x8bbdcc, is taken when (a6(?) & a7(?)) != 0, and falls through when (a6(?) & a7(?)) == 0.
  The `beq` branch at 0x8bbac4 targets 0x8bbae4, is taken when v1(?) == t2(=0xffff), and falls through when v1(?) != t2(=0xffff).
  The `beq` branch at 0x8bbacc targets 0x8bbae4, is taken when a0(?) == v1(?), and falls through when a0(?) != v1(?).
  The `bne` branch at 0x8bbad4 targets 0x8bbdcc, is taken when a0(?) != t3(=0xffff), and falls through when a0(?) == t3(=0xffff).
  The `bne` branch at 0x8bbaec targets 0x8bba88, is taken when v1(?) != t8(=0x3), and falls through when v1(?) == t8(=0x3).
  The `beq` branch at 0x8bbb1c targets 0x8bc028 and is always taken.
  The `beq` branch at 0x8bbb2c targets 0x8bbb5c, is taken when (ra(?) & 0x20) == 0, and falls through when (ra(?) & 0x20) != 0.
  The `beq` branch at 0x8bbb4c targets 0x8bbb5c, is taken when (at(?) & 0x10) == 0, and falls through when (at(?) & 0x10) != 0.
  The `bne` branch at 0x8bbb58 targets 0x8bb310, is taken when a1(?) != a2(?), and falls through when a1(?) == a2(?).
  The `bne` branch at 0x8bbb80 targets 0x8bbb9c, is taken when a3(?) != a0(?), and falls through when a3(?) == a0(?).
  The `bne` branch at 0x8bbb94 targets 0x8bbdf4, is taken when (a4(?) & a5(?)) != 0, and falls through when (a4(?) & a5(?)) == 0.
  The `beq` branch at 0x8bbba0 targets 0x8bbbc0, is taken when v1(?) == a7(=0xffff), and falls through when v1(?) != a7(=0xffff).
  The `beq` branch at 0x8bbba8 targets 0x8bbbc0, is taken when a0(?) == v1(?), and falls through when a0(?) != v1(?).
  The `bne` branch at 0x8bbbb0 targets 0x8bbdf4, is taken when a0(?) != t0(=0xffff), and falls through when a0(?) == t0(=0xffff).
  The `bne` branch at 0x8bbbc8 targets 0x8bbb64, is taken when v1(?) != t2(=0x3), and falls through when v1(?) == t2(=0x3).
  The `beq` branch at 0x8bbbe0 targets 0x8bbbf0, is taken when (t3(?) & 0x20) == 0, and falls through when (t3(?) & 0x20) != 0.
  The `bgtz` branch at 0x8bbc38 targets 0x8bbc14, is taken when a6(?) > 0 (signed), and falls through when a6(?) <= 0 (signed).
  The `beq` branch at 0x8bbc50 targets 0x8bb318 and is always taken.
  The `beq` branch at 0x8bbc64 targets 0x8bbc94, is taken when (v1(?) & 0x20) == 0, and falls through when (v1(?) & 0x20) != 0.
  The `beq` branch at 0x8bbc84 targets 0x8bbc94, is taken when (a0(?) & 0x10) == 0, and falls through when (a0(?) & 0x10) != 0.
  The `bne` branch at 0x8bbc90 targets 0x8bb310, is taken when a3(?) != a4(?), and falls through when a3(?) == a4(?).
  The `bne` branch at 0x8bbcb4 targets 0x8bbcd0, is taken when a5(?) != a0(?), and falls through when a5(?) == a0(?).
  The `bne` branch at 0x8bbcc8 targets 0x8bbe08, is taken when (a6(?) & a7(?)) != 0, and falls through when (a6(?) & a7(?)) == 0.
  The `beq` branch at 0x8bbcd4 targets 0x8bbd00, is taken when v1(?) == t2(=0xffff), and falls through when v1(?) != t2(=0xffff).
  The `beq` branch at 0x8bbcdc targets 0x8bbd00, is taken when a0(?) == v1(?), and falls through when a0(?) != v1(?).
  The `bne` branch at 0x8bbce4 targets 0x8bbe08, is taken when a0(?) != t3(=0xffff), and falls through when a0(?) == t3(=0xffff).
  The `bne` branch at 0x8bbd08 targets 0x8bbc98, is taken when v1(?) != t8(=0x3), and falls through when v1(?) == t8(=0x3).
  The `beq` branch at 0x8bbd18 targets 0x8bbd28, is taken when (t9(?) & 0x20) == 0, and falls through when (t9(?) & 0x20) != 0.
  The `bgtz` branch at 0x8bbd7c targets 0x8bbd58, is taken when a6(?) > 0 (signed), and falls through when a6(?) <= 0 (signed).
  The `beq` branch at 0x8bbd90 targets 0x8bb318 and is always taken.
  The `beq` branch at 0x8bbdc4 targets 0x8bb320 and is always taken.
  The `bne` branch at 0x8bbdcc targets 0x8bb310, is taken when a1(?) != a2(=0x3), and falls through when a1(?) == a2(=0x3).
  The `beq` branch at 0x8bbdd4 targets 0x8bbaf8 and is always taken.
  The `bne` branch at 0x8bbde0 targets 0x8bb310, is taken when a1(?) != a3(=0x3), and falls through when a1(?) == a3(=0x3).
  The `beq` branch at 0x8bbde8 targets 0x8bb6b8 and is always taken.
  The `bne` branch at 0x8bbdf4 targets 0x8bb310, is taken when a1(?) != a4(=0x3), and falls through when a1(?) == a4(=0x3).
  The `beq` branch at 0x8bbdfc targets 0x8bbbd4 and is always taken.
  The `bne` branch at 0x8bbe08 targets 0x8bb310, is taken when a1(?) != a5(=0x3), and falls through when a1(?) == a5(=0x3).
  The `beq` branch at 0x8bbe10 targets 0x8bbd14 and is always taken.
  The `beq` branch at 0x8bbe30 targets 0x8bbe64, is taken when a0(?) == a6(=0x3), and falls through when a0(?) != a6(=0x3).
  The `beq` branch at 0x8bbe40 targets 0x8bbe20, is taken when v0(?) == a7(=0xffff), and falls through when v0(?) != a7(=0xffff).
  The `beq` branch at 0x8bbe4c targets 0x8bbe20, is taken when v0(?) == a6(?), and falls through when v0(?) != a6(?).
  The `beq` branch at 0x8bbe54 targets 0x8bbe18, is taken when a6(?) == t0(=0xffff), and falls through when a6(?) != t0(=0xffff).
  The `bne` branch at 0x8bbe5c targets 0x8bb310, is taken when a0(?) != t2(=0x3), and falls through when a0(?) == t2(=0x3).
  The `beq` branch at 0x8bbe6c targets 0x8bbe7c, is taken when (t3(?) & 0x20) == 0, and falls through when (t3(?) & 0x20) != 0.
  The `beq` branch at 0x8bbe84 targets 0x8bbe98, is taken when (t9(?) & 0x20) == 0, and falls through when (t9(?) & 0x20) != 0.
  The `bgtz` branch at 0x8bbee8 targets 0x8bbec4, is taken when a6(?) > 0 (signed), and falls through when a6(?) <= 0 (signed).
  The `beq` branch at 0x8bbf00 targets 0x8bb318 and is always taken.
  The `beq` branch at 0x8bbf18 targets 0x8bbf54, is taken when a0(?) == a2(=0x3), and falls through when a0(?) != a2(=0x3).
  The `beq` branch at 0x8bbf30 targets 0x8bbf10, is taken when v0(?) == a3(=0xffff), and falls through when v0(?) != a3(=0xffff).
  The `beq` branch at 0x8bbf3c targets 0x8bbf10, is taken when v0(?) == a6(?), and falls through when v0(?) != a6(?).
  The `beq` branch at 0x8bbf44 targets 0x8bbf08, is taken when a6(?) == a4(=0xffff), and falls through when a6(?) != a4(=0xffff).
  The `bne` branch at 0x8bbf4c targets 0x8bb310, is taken when a0(?) != a5(=0x3), and falls through when a0(?) == a5(=0x3).
  The `beq` branch at 0x8bbf60 targets 0x8bbf6c, is taken when (a6(?) & 0x20) == 0, and falls through when (a6(?) & 0x20) != 0.
  The `beq` branch at 0x8bbf74 targets 0x8bbf88, is taken when (t0(?) & 0x20) == 0, and falls through when (t0(?) & 0x20) != 0.
  The `bgtz` branch at 0x8bbfe4 targets 0x8bbfc0, is taken when a6(?) > 0 (signed), and falls through when a6(?) <= 0 (signed).
  The `beq` branch at 0x8bbff8 targets 0x8bb318 and is always taken.
  The `bne` branch at 0x8bc004 targets 0x8bb310, is taken when a0(?) != at(=0x3), and falls through when a0(?) == at(=0x3).
  The `beq` branch at 0x8bc00c targets 0x8bb4f0 and is always taken.
  The `bne` branch at 0x8bc018 targets 0x8bb310, is taken when a0(?) != v1(=0x3), and falls through when a0(?) == v1(=0x3).
  The `beq` branch at 0x8bc020 targets 0x8bb7ac and is always taken.
  The `beq` branch at 0x8bc02c targets 0x8bbe3c and is always taken.
  The return at 0x8bb9b0 has v0 = ret(r300PSOptKillAndSqueeze_EXP).
  The return at 0x8bb9ec has v0 = 0x0.
  The instructions from 0x8bb9b8 to 0x8bb9bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8bb9f4 to 0x8bb9fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8bbdf0 to 0x8bbdf0 are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8bbe04 to 0x8bbe04 are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x8bb3d8 uses the jump table at 0xb78000 with targets 0x8bb32c, 0x8bb41c, 0x8bb32c, 0x8bb32c, 0x8bb6e4, 0x8bb32c, 0x8bb590, 0x8bb32c, 0x8bb32c, 0x8bb2d8, 0x8bb32c, 0x8bb2d8, 0x8bb32c, 0x8bb32c, 0x8bb590, 0x8bb32c.
  The indirect jump at 0x8bb3d8 uses the jump table at 0xb78000 with targets 0x8bb32c, 0x8bb41c, 0x8bb32c, 0x8bb32c, 0x8bb6e4, 0x8bb32c, 0x8bb590, 0x8bb32c, 0x8bb32c, 0x8bb2d8, 0x8bb32c, 0x8bb2d8, 0x8bb32c, 0x8bb32c, 0x8bb590, 0x8bb32c.
  The indirect jump at 0x8bb3d8 uses the jump table at 0xb78000 with targets 0x8bb32c, 0x8bb41c, 0x8bb32c, 0x8bb32c, 0x8bb6e4, 0x8bb32c, 0x8bb590, 0x8bb32c, 0x8bb32c, 0x8bb2d8, 0x8bb32c, 0x8bb2d8, 0x8bb32c, 0x8bb32c, 0x8bb590, 0x8bb32c.
  The indirect jump at 0x8bb3d8 uses the jump table at 0xb78000 with targets 0x8bb32c, 0x8bb41c, 0x8bb32c, 0x8bb32c, 0x8bb6e4, 0x8bb32c, 0x8bb590, 0x8bb32c, 0x8bb32c, 0x8bb2d8, 0x8bb32c, 0x8bb2d8, 0x8bb32c, 0x8bb32c, 0x8bb590, 0x8bb32c.

- `OptimizeCoissue2` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8bc040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8bc040-0x8bc494 (1108 bytes).
  It occupies 1108 bytes.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x8bc044, `lw` at 0x8bc2c4, `lw` at 0x8bc398.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8, including `lw` at 0x8bc0ac, `lw` at 0x8bc218.
  11 such `lw` accesses load 4 bytes from ?, including `lw` at 0x8bc0b4, `lw` at 0x8bc0e4, `lw` at 0x8bc140.
  22 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8bc0c0, `lhu` at 0x8bc0c4, `lhu` at 0x8bc0cc.
  The `bgezall` at 0x8bc29c calls InputsClobberedInRange_EXP [0x8c29c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=[a0].
  The `bgezall` at 0x8bc370 calls InputsClobberedInRange_EXP [0x8c29c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=[a0].
  The `bgezall` at 0x8bc430 calls MergeCoissue_EXP [0x8c2c00] with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x8bc470 calls MergeCoissue_EXP [0x8c2c00] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x8bc068 targets 0x8bc11c, is taken when a6(=[a0]) == 0, and falls through when a6(=[a0]) != 0.
  The `beq` branch at 0x8bc080 targets 0x8bc0ac and is always taken.
  The `beq` branch at 0x8bc088 targets 0x8bc140, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x8bc090 targets 0x8bc190, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x8bc0a4 targets 0x8bc110, is taken when s0(?) >= a6(=[a0]) (unsigned), and falls through when s0(?) < a6(=[a0]) (unsigned).
  The `bne` branch at 0x8bc0b8 targets 0x8bc098, is taken when v1(?) != s5(=0x2), and falls through when v1(?) == s5(=0x2).
  The `beq` branch at 0x8bc0c8 targets 0x8bc088, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x8bc0d0 targets 0x8bc098, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x8bc0e0 targets 0x8bc098, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x8bc0ec targets 0x8bc098, is taken when (v0(?) & 0x40) != 0, and falls through when (v0(?) & 0x40) == 0.
  The `beq` branch at 0x8bc0f8 targets 0x8bc098, is taken when v0(?) == s5(=0x2), and falls through when v0(?) != s5(=0x2).
  The `beq` branch at 0x8bc100 targets 0x8bc098, is taken when v0(?) == t3(=0xd), and falls through when v0(?) != t3(=0xd).
  The `beq` branch at 0x8bc108 targets 0x8bc1d8 and is always taken.
  The `beq` branch at 0x8bc148 targets 0x8bc1c4, is taken when (at(?) & 0x40) == 0, and falls through when (at(?) & 0x40) != 0.
  The `bne` branch at 0x8bc150 targets 0x8bc098, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `bne` branch at 0x8bc15c targets 0x8bc098, is taken when v1(?) != 0, and falls through when v1(?) == 0.
  The `bne` branch at 0x8bc16c targets 0x8bc098, is taken when (a0(?) & 0x40) != 0, and falls through when (a0(?) & 0x40) == 0.
  The `beq` branch at 0x8bc178 targets 0x8bc098, is taken when v0(?) == s5(=0x2), and falls through when v0(?) != s5(=0x2).
  The `beq` branch at 0x8bc180 targets 0x8bc098, is taken when v0(?) == t3(=0xd), and falls through when v0(?) != t3(=0xd).
  The `beq` branch at 0x8bc188 targets 0x8bc1d4 and is always taken.
  The `bne` branch at 0x8bc194 targets 0x8bc098, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `bne` branch at 0x8bc1a0 targets 0x8bc098, is taken when (v0(?) & 0x40) != 0, and falls through when (v0(?) & 0x40) == 0.
  The `beq` branch at 0x8bc1ac targets 0x8bc098, is taken when v0(?) == s5(=0x2), and falls through when v0(?) != s5(=0x2).
  The `beq` branch at 0x8bc1b4 targets 0x8bc098, is taken when v0(?) == t3(=0xd), and falls through when v0(?) != t3(=0xd).
  The `beq` branch at 0x8bc1bc targets 0x8bc1d4 and is always taken.
  The `beq` branch at 0x8bc1c4 targets 0x8bc2f8, is taken when a0(?) == t3(=0xd), and falls through when a0(?) != t3(=0xd).
  The `beq` branch at 0x8bc1cc targets 0x8bc310, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x8bc1dc targets 0x8bc098, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x8bc1ec targets 0x8bc218 and is always taken.
  The `beq` branch at 0x8bc1f8 targets 0x8bc324, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x8bc208 targets 0x8bc2c8, is taken when a1(?) >= a6(=[a0]) (unsigned), and falls through when a1(?) < a6(=[a0]) (unsigned).
  The `bne` branch at 0x8bc210 targets 0x8bc2c8, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x8bc23c targets 0x8bc2d0, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x8bc244 targets 0x8bc1f4, is taken when a2(=one of 0x0, 0x1) == 0, and falls through when a2(=one of 0x0, 0x1) != 0.
  The `bne` branch at 0x8bc24c targets 0x8bc200, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0x8bc254 targets 0x8bc200, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `bne` branch at 0x8bc264 targets 0x8bc200, is taken when (t1(?) & 0x40) != 0, and falls through when (t1(?) & 0x40) == 0.
  The `beq` branch at 0x8bc270 targets 0x8bc200, is taken when t2(?) == t3(=0xd), and falls through when t2(?) != t3(=0xd).
  The `beq` branch at 0x8bc2b8 targets 0x8bc424, is taken when v0(=ret(InputsClobberedInRange_EXP)) == 0, and falls through when v0(=ret(InputsClobberedInRange_EXP)) != 0.
  The `beq` branch at 0x8bc2c0 targets 0x8bc200 and is always taken.
  The `beq` branch at 0x8bc2c8 targets 0x8bc09c and is always taken.
  The `bne` branch at 0x8bc2d0 targets 0x8bc244, is taken when t1(?) != 0, and falls through when t1(?) == 0.
  The `bne` branch at 0x8bc2d8 targets 0x8bc244, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `bne` branch at 0x8bc2e8 targets 0x8bc244, is taken when (at(?) & 0x1) != 0, and falls through when (at(?) & 0x1) == 0.
  The `beq` branch at 0x8bc2f0 targets 0x8bc204 and is always taken.
  The `beq` branch at 0x8bc2f8 targets 0x8bc39c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x8bc300 targets 0x8bc098, is taken when v0(=one of 0x0, 0x1) == 0, and falls through when v0(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x8bc308 targets 0x8bc1d4 and is always taken.
  The `beq` branch at 0x8bc314 targets 0x8bc3b0, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `beq` branch at 0x8bc31c targets 0x8bc1d4 and is always taken.
  The `bne` branch at 0x8bc328 targets 0x8bc200, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `bne` branch at 0x8bc338 targets 0x8bc200, is taken when (a5(?) & 0x40) != 0, and falls through when (a5(?) & 0x40) == 0.
  The `beq` branch at 0x8bc344 targets 0x8bc200, is taken when a7(?) == t3(=0xd), and falls through when a7(?) != t3(=0xd).
  The `beq` branch at 0x8bc38c targets 0x8bc464, is taken when v0(=ret(InputsClobberedInRange_EXP)) == 0, and falls through when v0(=ret(InputsClobberedInRange_EXP)) != 0.
  The `beq` branch at 0x8bc394 targets 0x8bc200 and is always taken.
  The `beq` branch at 0x8bc3a0 targets 0x8bc3c8, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x8bc3a8 targets 0x8bc300 and is always taken.
  The `beq` branch at 0x8bc3b8 targets 0x8bc3e0, is taken when (t1(?) & 0x40) == 0, and falls through when (t1(?) & 0x40) != 0.
  The `beq` branch at 0x8bc3c0 targets 0x8bc1d4 and is always taken.
  The `beq` branch at 0x8bc3d0 targets 0x8bc400, is taken when (t2(?) & 0x40) == 0, and falls through when (t2(?) & 0x40) != 0.
  The `beq` branch at 0x8bc3d8 targets 0x8bc300 and is always taken.
  The `beq` branch at 0x8bc3e4 targets 0x8bc41c, is taken when v0(?) == s5(=0x2), and falls through when v0(?) != s5(=0x2).
  The `bne` branch at 0x8bc3ec targets 0x8bc098, is taken when v0(?) != t3(=0xd), and falls through when v0(?) == t3(=0xd).
  The `beq` branch at 0x8bc3f4 targets 0x8bc1d4 and is always taken.
  The `beq` branch at 0x8bc404 targets 0x8bc454, is taken when v0(?) == s5(=0x2), and falls through when v0(?) != s5(=0x2).
  The `beq` branch at 0x8bc40c targets 0x8bc45c, is taken when v0(?) == t3(=0xd), and falls through when v0(?) != t3(=0xd).
  The `beq` branch at 0x8bc414 targets 0x8bc300 and is always taken.
  The `beq` branch at 0x8bc41c targets 0x8bc1d4 and is always taken.
  The `beq` branch at 0x8bc44c targets 0x8bc2c0 and is always taken.
  The `beq` branch at 0x8bc454 targets 0x8bc300 and is always taken.
  The `beq` branch at 0x8bc45c targets 0x8bc300 and is always taken.
  The `beq` branch at 0x8bc48c targets 0x8bc394 and is always taken.
  The return at 0x8bc130 has v0 = 0x0.
  The instructions from 0x8bc138 to 0x8bc13c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8bc3fc to 0x8bc3fc are not reached by any path from the entry, and their branches are not listed.

- `AccommodateInsts` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8bc4c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8bc4c0-0x8bc5e8 (296 bytes).
  It occupies 296 bytes.
  The `lw` at 0x8bc4c4 loads 4 bytes from a1 (arg1 at entry) +0x24.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x10, including `lw` at 0x8bc4e0, `lw` at 0x8bc568.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x4, including `lw` at 0x8bc4ec, `lw` at 0x8bc508.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x10, including `sw` at 0x8bc4f8, `sw` at 0x8bc55c.
  The `lw` at 0x8bc4fc loads 4 bytes from a1 (arg1 at entry) +0x1c.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x14, including `sw` at 0x8bc514, `sw` at 0x8bc5a8.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x1c, including `sw` at 0x8bc518, `sw` at 0x8bc590.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x0, including `lw` at 0x8bc534, `lw` at 0x8bc574.
  The `sw` at 0x8bc564 stores 4 bytes to ret(?) +0x4.
  The `sw` at 0x8bc570 stores 4 bytes to [a1+16] +0x8.
  The `sw` at 0x8bc5a0 stores 4 bytes to a1 (arg1 at entry) +0x24.
  The `jalr` at 0x8bc4f0 calls (unknown callee) with a0=[a1+16], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x8bc50c calls (unknown callee) with a0=[a1+28], a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0x8bc548 calls (unknown callee) with a0=?, a1=?, a2=-0x80, a3=?.
  The `jalr` at 0x8bc584 calls (unknown callee) with a0=?, a1=?, a2=[a1+16], a3=0x71.
  The `beq` branch at 0x8bc4d8 targets 0x8bc5ac, is taken when at(=[a1+36]) >= a0 (unsigned), and falls through when at(=[a1+36]) < a0 (unsigned).
  The `beq` branch at 0x8bc4e4 targets 0x8bc4fc, is taken when a0(=[a1+16]) == 0, and falls through when a0(=[a1+16]) != 0.
  The `beq` branch at 0x8bc500 targets 0x8bc520, is taken when a0(=[a1+28]) == 0, and falls through when a0(=[a1+28]) != 0.
  The `beq` branch at 0x8bc558 targets 0x8bc5c0, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `beq` branch at 0x8bc58c targets 0x8bc5d0, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The return at 0x8bc5b8 has v0 = 0x0.
  The return at 0x8bc5c8 has v0 = 0xffffffff80000001.
  The return at 0x8bc5e0 has v0 = 0xffffffff80000001.

- `AccommodateTemps` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8bc600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8bc600-0x8bc6e8 (232 bytes).
  It occupies 232 bytes.
  The `lw` at 0x8bc604 loads 4 bytes from a1 (arg1 at entry) +0x28.
  The `lw` at 0x8bc61c loads 4 bytes from a1 (arg1 at entry) +0x20.
  The `lw` at 0x8bc628 loads 4 bytes from a1 (arg1 at entry) +0x4.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x18, including `sw` at 0x8bc638, `sw` at 0x8bc6bc.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x20, including `sw` at 0x8bc63c, `sw` at 0x8bc6a0.
  The `lw` at 0x8bc690 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `sw` at 0x8bc6b4 stores 4 bytes to a1 (arg1 at entry) +0x28.
  The `jalr` at 0x8bc62c calls (unknown callee) with a0=[a1+32], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=a0 at entry (arg0).
  The `jalr` at 0x8bc694 calls (unknown callee) with a0=?, a1=?, a2=-0x40, a3=?, a4=a0 at entry (arg0).
  The `beq` branch at 0x8bc614 targets 0x8bc6c0, is taken when at(=[a1+40]) >= a0 (unsigned), and falls through when at(=[a1+40]) < a0 (unsigned).
  The `beq` branch at 0x8bc620 targets 0x8bc640, is taken when a0(=[a1+32]) == 0, and falls through when a0(=[a1+32]) != 0.
  The `beq` branch at 0x8bc674 targets 0x8bc680, is taken when v0(?) >= a0(?) (unsigned), and falls through when v0(?) < a0(?) (unsigned).
  The `beq` branch at 0x8bc684 targets 0x8bc690, is taken when v0(?) >= a1(?) (unsigned), and falls through when v0(?) < a1(?) (unsigned).
  The `beq` branch at 0x8bc69c targets 0x8bc6d0, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The return at 0x8bc6c8 has v0 = 0x0.
  The return at 0x8bc6e0 has v0 = 0xffffffff80000001.

- `PSOptPass1` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8bc980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8bc980-0x8bcb40 (448 bytes).
  It occupies 448 bytes.
  The `bgezall` at 0x8bc9a0 calls r300PSOptKillAndSqueeze_EXP [0x8c0980] with a0=a0 at entry (arg0), a1=0x0, a2=0x0, a3=a3 at entry (arg3).
  The `bgezall` at 0x8bca04 calls OptimizeMath [0x8b9080] with a0=a0 at entry (arg0), a1=?, a2=a3 at entry (arg3), a3=?, a6=ret(r300PSOptKillAndSqueeze_EXP).
  The `bgezall` at 0x8bca34 calls PreoptimizeCoissue [0x8badc0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x8bca60 calls OptimizeCoissue [0x8bb280] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x8bca94 calls OptimizeCoissue2 [0x8bc040] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x8bcac0 calls RegroupMultiplications1 [0x8baa40] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x8bcaec calls RemoveRegisterCopies [0x8ba480] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x8bcb20 calls MergeScaleBias [0x8ba080] with a0=a0 at entry (arg0), a1=?, a2=a3 at entry (arg3), a3=?.
  The `beq` branch at 0x8bc9a8 targets 0x8bc9cc, is taken when v0(=ret(r300PSOptKillAndSqueeze_EXP)) == 0, and falls through when v0(=ret(r300PSOptKillAndSqueeze_EXP)) != 0.
  The `beq` branch at 0x8bc9d0 targets 0x8bc9e4, is taken when at(=a3) == 0, and falls through when at(=a3) != 0.
  The `bne` branch at 0x8bc9dc targets 0x8bc9ec, is taken when (v1(=a1) & 0x10) != 0, and falls through when (v1(=a1) & 0x10) == 0.
  The `beq` branch at 0x8bc9f0 targets 0x8bca20, is taken when (a0(=a1) & 0x4) == 0, and falls through when (a0(=a1) & 0x4) != 0.
  The `beq` branch at 0x8bca10 targets 0x8bca20, is taken when v0(=ret(OptimizeMath)) == 0, and falls through when v0(=ret(OptimizeMath)) != 0.
  The `beq` branch at 0x8bca28 targets 0x8bca4c, is taken when (ra(=a1) & 0x20) == 0, and falls through when (ra(=a1) & 0x20) != 0.
  The `beq` branch at 0x8bca3c targets 0x8bca4c, is taken when v0(=ret(PreoptimizeCoissue)) == 0, and falls through when v0(=ret(PreoptimizeCoissue)) != 0.
  The `beq` branch at 0x8bca44 targets 0x8bc9c0 and is always taken.
  The `beq` branch at 0x8bca54 targets 0x8bca80, is taken when (ra(=a1) & 0x2) == 0, and falls through when (ra(=a1) & 0x2) != 0.
  The `beq` branch at 0x8bca68 targets 0x8bca80, is taken when v0(=ret(OptimizeCoissue)) == 0, and falls through when v0(=ret(OptimizeCoissue)) != 0.
  The `beq` branch at 0x8bca70 targets 0x8bc9c0 and is always taken.
  The `beq` branch at 0x8bca88 targets 0x8bcaac, is taken when (ra(=a1) & 0x200) == 0, and falls through when (ra(=a1) & 0x200) != 0.
  The `beq` branch at 0x8bca9c targets 0x8bcaac, is taken when v0(=ret(OptimizeCoissue2)) == 0, and falls through when v0(=ret(OptimizeCoissue2)) != 0.
  The `beq` branch at 0x8bcaa4 targets 0x8bc9c0 and is always taken.
  The `beq` branch at 0x8bcab4 targets 0x8bcad8, is taken when (ra(=a1) & 0x40) == 0, and falls through when (ra(=a1) & 0x40) != 0.
  The `beq` branch at 0x8bcac8 targets 0x8bcad8, is taken when v0(=ret(RegroupMultiplications1)) == 0, and falls through when v0(=ret(RegroupMultiplications1)) != 0.
  The `beq` branch at 0x8bcad0 targets 0x8bc9c0 and is always taken.
  The `beq` branch at 0x8bcae0 targets 0x8bcb04, is taken when (ra(=a1) & 0x80) == 0, and falls through when (ra(=a1) & 0x80) != 0.
  The `beq` branch at 0x8bcaf4 targets 0x8bcb04, is taken when v0(=ret(RemoveRegisterCopies)) == 0, and falls through when v0(=ret(RemoveRegisterCopies)) != 0.
  The `beq` branch at 0x8bcafc targets 0x8bc9c0 and is always taken.
  The `beq` branch at 0x8bcb0c targets 0x8bcb38, is taken when (ra(=a1) & 0x100) == 0, and falls through when (ra(=a1) & 0x100) != 0.
  The `beq` branch at 0x8bcb28 targets 0x8bcb38, is taken when v0(=ret(MergeScaleBias)) == 0, and falls through when v0(=ret(MergeScaleBias)) != 0.
  The `beq` branch at 0x8bcb30 targets 0x8bc9c0 and is always taken.
  The `beq` branch at 0x8bcb38 targets 0x8bc9bc and is always taken.
  The return at 0x8bc9b4 has v0 = ret(r300PSOptKillAndSqueeze_EXP).
  The return at 0x8bc9c4 has v0 = one of 0x0, ret(PreoptimizeCoissue), ret(OptimizeCoissue), ret(OptimizeCoissue2), ret(RegroupMultiplications1), ret(RemoveRegisterCopies), ret(MergeScaleBias).
  The return at 0x8bca18 has v0 = ret(OptimizeMath).
  The instructions from 0x8bca78 to 0x8bca7c are not reached by any path from the entry, and their branches are not listed.

- `OutMaskAndClose` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8bf500 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8bf500-0x8bf694 (404 bytes).
  It occupies 404 bytes.
  The `lw` at 0x8bf500 loads 4 bytes from a0 (arg0 at entry) +0x8c.
  The `lhu` at 0x8bf510 loads 2 bytes from a0 (arg0 at entry) +0x2.
  The `lhu` at 0x8bf514 loads 2 bytes from a0 (arg0 at entry) +0x0.
  4 such `lhu` accesses load 2 bytes from a1 (arg1 at entry) +0x2, including `lhu` at 0x8bf524, `lhu` at 0x8bf558, `lhu` at 0x8bf574.
  6 such `lhu` accesses load 2 bytes from (a1 + ([a0]:2 << 0x2)) +0x2, including `lhu` at 0x8bf538, `lhu` at 0x8bf548, `lhu` at 0x8bf5d0.
  4 such `sh` accesses store 2 bytes to a0 (arg0 at entry) +0x2, including `sh` at 0x8bf544, `sh` at 0x8bf5c8, `sh` at 0x8bf5dc.
  3 such `sh` accesses store 2 bytes to (a1 + ([a0]:2 << 0x2)) +0x2, including `sh` at 0x8bf554, `sh` at 0x8bf5f0, `sh` at 0x8bf664.
  2 such `sh` accesses store 2 bytes to a1 (arg1 at entry) +0x2, including `sh` at 0x8bf560, `sh` at 0x8bf5b4.
  The `lhu` at 0x8bf564 loads 2 bytes from a0 (arg0 at entry) +0x42.
  The `lhu` at 0x8bf570 loads 2 bytes from a0 (arg0 at entry) +0x40.
  6 such `lhu` accesses load 2 bytes from (a1 + ([a0+64]:2 << 0x2)) +0x2, including `lhu` at 0x8bf588, `lhu` at 0x8bf598, `lhu` at 0x8bf610.
  4 such `sh` accesses store 2 bytes to a0 (arg0 at entry) +0x42, including `sh` at 0x8bf594, `sh` at 0x8bf608, `sh` at 0x8bf61c.
  3 such `sh` accesses store 2 bytes to (a1 + ([a0+64]:2 << 0x2)) +0x2, including `sh` at 0x8bf5a4, `sh` at 0x8bf630, `sh` at 0x8bf690.
  The `bne` branch at 0x8bf508 targets 0x8bf5b8, is taken when at(=[a0+140]) != v0(=0x2), and falls through when at(=[a0+140]) == v0(=0x2).
  The `beq` branch at 0x8bf51c targets 0x8bf640, is taken when (a3(=[a0+2]:2) & 0x10) == 0, and falls through when (a3(=[a0+2]:2) & 0x10) != 0.
  The `beq` branch at 0x8bf52c targets 0x8bf5c0, is taken when (a2(=[a1+2]:2) & 0x10) == 0, and falls through when (a2(=[a1+2]:2) & 0x10) != 0.
  The `beq` branch at 0x8bf56c targets 0x8bf668, is taken when (a3(=[a0+66]:2) & 0x10) == 0, and falls through when (a3(=[a0+66]:2) & 0x10) != 0.
  The `beq` branch at 0x8bf57c targets 0x8bf600, is taken when (t2(=[a1+2]:2) & 0x10) == 0, and falls through when (t2(=[a1+2]:2) & 0x10) != 0.
  The `beq` branch at 0x8bf5ec targets 0x8bf558 and is always taken.
  The `beq` branch at 0x8bf62c targets 0x8bf5a8 and is always taken.
  The `beq` branch at 0x8bf660 targets 0x8bf564 and is always taken.
  The return at 0x8bf5b0 has v0 = ?.
  The return at 0x8bf5b8 has v0 = 0x2.
  The return at 0x8bf68c has v0 = ?.
  The instructions from 0x8bf5f4 to 0x8bf5fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x8bf634 to 0x8bf63c are not reached by any path from the entry, and their branches are not listed.

- `RegMaskAndClose` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8bf6c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8bf6c0-0x8bf868 (424 bytes).
  It occupies 424 bytes.
  The `lhu` at 0x8bf6c4 loads 2 bytes from a0 (arg0 at entry) +0x4.
  2 such `lhu` accesses load 2 bytes from a0 (arg0 at entry) +0x6, including `lhu` at 0x8bf6d4, `lhu` at 0x8bf714.
  3 such `lhu` accesses load 2 bytes from (a1 + ([a0+4]:2 << 0x2)) +0x2, including `lhu` at 0x8bf6dc, `lhu` at 0x8bf704, `lhu` at 0x8bf73c.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8c, including `lw` at 0x8bf6e0, `lw` at 0x8bf768.
  2 such `sh` accesses store 2 bytes to a0 (arg0 at entry) +0x6, including `sh` at 0x8bf6f0, `sh` at 0x8bf6fc.
  The `sh` at 0x8bf710 stores 2 bytes to (a1 + ([a0+4]:2 << 0x2)) +0x2.
  The `lhu` at 0x8bf718 loads 2 bytes from a0 (arg0 at entry) +0x2.
  The `lw` at 0x8bf71c loads 4 bytes from a0 (arg0 at entry) +0x30.
  The `lhu` at 0x8bf748 loads 2 bytes from a0 (arg0 at entry) +0x44.
  2 such `lhu` accesses load 2 bytes from a0 (arg0 at entry) +0x46, including `lhu` at 0x8bf750, `lhu` at 0x8bf794.
  3 such `lhu` accesses load 2 bytes from (a1 + ([a0+68]:2 << 0x2)) +0x2, including `lhu` at 0x8bf758, `lhu` at 0x8bf784, `lhu` at 0x8bf7bc.
  2 such `sh` accesses store 2 bytes to a0 (arg0 at entry) +0x46, including `sh` at 0x8bf764, `sh` at 0x8bf780.
  The `sh` at 0x8bf790 stores 2 bytes to (a1 + ([a0+68]:2 << 0x2)) +0x2.
  The `lhu` at 0x8bf798 loads 2 bytes from a0 (arg0 at entry) +0x42.
  The `lw` at 0x8bf79c loads 4 bytes from a0 (arg0 at entry) +0x70.
  The `sdl` at 0x8bf7d8 stores 8 bytes to a0 (arg0 at entry) +0x14.
  The `sdr` at 0x8bf7dc stores 8 bytes to a0 (arg0 at entry) +0x1b.
  The `sdl` at 0x8bf7e0 stores 8 bytes to a0 (arg0 at entry) +0x1c.
  The `sdr` at 0x8bf7e4 stores 8 bytes to a0 (arg0 at entry) +0x23.
  The `swl` at 0x8bf7e8 stores 4 bytes to a0 (arg0 at entry) +0x24.
  The `swr` at 0x8bf7f0 stores 4 bytes to a0 (arg0 at entry) +0x27.
  The `sdl` at 0x8bf7fc stores 8 bytes to a0 (arg0 at entry) +0x54.
  The `sdr` at 0x8bf800 stores 8 bytes to a0 (arg0 at entry) +0x5b.
  The `sdl` at 0x8bf804 stores 8 bytes to a0 (arg0 at entry) +0x5c.
  The `sdr` at 0x8bf808 stores 8 bytes to a0 (arg0 at entry) +0x63.
  The `swl` at 0x8bf80c stores 4 bytes to a0 (arg0 at entry) +0x64.
  The `swr` at 0x8bf814 stores 4 bytes to a0 (arg0 at entry) +0x67.
  2 such `lhu` accesses load 2 bytes from a2 (arg2 at entry) +0x0, including `lhu` at 0x8bf818, `lhu` at 0x8bf840.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x4, including `lw` at 0x8bf81c, `lw` at 0x8bf844.
  2 such `sh` accesses store 2 bytes to a2 (arg2 at entry) +0x0, including `sh` at 0x8bf828, `sh` at 0x8bf850.
  The `lhu` at 0x8bf82c loads 2 bytes from (a1 + ([a0+4]:2 << 0x2)) +0x0.
  2 such `sh` accesses store 2 bytes to ([a2+4] + ([a2]:2 + [a2]:2)) +0x0, including `sh` at 0x8bf834, `sh` at 0x8bf85c.
  The `sh` at 0x8bf83c stores 2 bytes to (a1 + ([a0+4]:2 << 0x2)) +0x0.
  The `lhu` at 0x8bf854 loads 2 bytes from (a1 + ([a0+68]:2 << 0x2)) +0x0.
  The `sh` at 0x8bf864 stores 2 bytes to (a1 + ([a0+68]:2 << 0x2)) +0x0.
  The `beq` branch at 0x8bf6ec targets 0x8bf704, is taken when at(=[a0+140]) == t0(=0x2), and falls through when at(=[a0+140]) != t0(=0x2).
  The `beq` branch at 0x8bf6f4 targets 0x8bf704, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x8bf724 targets 0x8bf7d0, is taken when a3(=([a0+2]:2 | [a0+6]:2)) == 0, and falls through when a3(=([a0+2]:2 | [a0+6]:2)) != 0.
  The `beq` branch at 0x8bf72c targets 0x8bf748, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x8bf734 targets 0x8bf748, is taken when a7(=[(a1 + ([a0+4]:2 << 0x2))+2]:2) == 0, and falls through when a7(=[(a1 + ([a0+4]:2 << 0x2))+2]:2) != 0.
  The `beq` branch at 0x8bf740 targets 0x8bf818, is taken when t9(=[(a1 + ([a0+4]:2 << 0x2))+2]:2) == 0, and falls through when t9(=[(a1 + ([a0+4]:2 << 0x2))+2]:2) != 0.
  The `beq` branch at 0x8bf76c targets 0x8bf784, is taken when at(=[a0+140]) == t0(=0x2), and falls through when at(=[a0+140]) != t0(=0x2).
  The `beq` branch at 0x8bf774 targets 0x8bf784, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x8bf7a4 targets 0x8bf7f4, is taken when a1(=([a0+66]:2 | [a0+70]:2)) == 0, and falls through when a1(=([a0+66]:2 | [a0+70]:2)) != 0.
  The `beq` branch at 0x8bf7ac targets 0x8bf7c8, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x8bf7b4 targets 0x8bf7c8, is taken when a7(=[(a1 + ([a0+68]:2 << 0x2))+2]:2) == 0, and falls through when a7(=[(a1 + ([a0+68]:2 << 0x2))+2]:2) != 0.
  The `beq` branch at 0x8bf7c0 targets 0x8bf840, is taken when t2(=[(a1 + ([a0+68]:2 << 0x2))+2]:2) == 0, and falls through when t2(=[(a1 + ([a0+68]:2 << 0x2))+2]:2) != 0.
  The `bne` branch at 0x8bf7d0 targets 0x8bf72c, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x8bf7ec targets 0x8bf72c and is always taken.
  The `bne` branch at 0x8bf7f4 targets 0x8bf7ac, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x8bf810 targets 0x8bf7ac and is always taken.
  The `beq` branch at 0x8bf838 targets 0x8bf748 and is always taken.
  The return at 0x8bf7c8 has v0 = ?.
  The return at 0x8bf860 has v0 = [(a1 + ([a0+68]:2 << 0x2))]:2.

- `RegMaskOrOpen` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8bf880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8bf880-0x8bf9dc (348 bytes).
  It occupies 348 bytes.
  7 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8bf8c0, `lhu` at 0x8bf8d4, `lhu` at 0x8bf8dc.
  6 such `sh` accesses store 2 bytes to ?, including `sh` at 0x8bf8e8, `sh` at 0x8bf8fc, `sh` at 0x8bf97c.
  2 such `lhu` accesses load 2 bytes from a2 (arg2 at entry) +0x0, including `lhu` at 0x8bf944, `lhu` at 0x8bf990.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x4, including `lw` at 0x8bf94c, `lw` at 0x8bf998.
  2 such `lhu` accesses load 2 bytes from a2 (arg2 at entry) +0x2, including `lhu` at 0x8bf954, `lhu` at 0x8bf9a0.
  2 such `sh` accesses store 2 bytes to a2 (arg2 at entry) +0x0, including `sh` at 0x8bf960, `sh` at 0x8bf9ac.
  2 such `sh` accesses store 2 bytes to a2 (arg2 at entry) +0x2, including `sh` at 0x8bf974, `sh` at 0x8bf9c0.
  The `bne` branch at 0x8bf8c8 targets 0x8bf900, is taken when (a7(?) & 0x8000) != 0, and falls through when (a7(?) & 0x8000) == 0.
  The `beq` branch at 0x8bf8e4 targets 0x8bf934, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x8bf8f8 targets 0x8bf980, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `bne` branch at 0x8bf908 targets 0x8bf8c0, is taken when a6(?) != a0(?), and falls through when a6(?) == a0(?).
  The `bne` branch at 0x8bf920 targets 0x8bf8a0, is taken when t0(?) != a3(=0x2), and falls through when t0(?) == a3(=0x2).
  The `beq` branch at 0x8bf934 targets 0x8bf8ec, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x8bf93c targets 0x8bf9cc, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x8bf96c targets 0x8bf978, is taken when t9(=[a2+2]:2) >= t1(?) (signed), and falls through when t9(=[a2+2]:2) < t1(?) (signed).
  The `beq` branch at 0x8bf978 targets 0x8bf8ec and is always taken.
  The `beq` branch at 0x8bf980 targets 0x8bf900, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x8bf988 targets 0x8bf9d4, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x8bf9b8 targets 0x8bf9c4, is taken when v0(=[a2+2]:2) >= t1(?) (signed), and falls through when v0(=[a2+2]:2) < t1(?) (signed).
  The `beq` branch at 0x8bf9c4 targets 0x8bf900 and is always taken.
  The `beq` branch at 0x8bf9cc targets 0x8bf8ec and is always taken.
  The `beq` branch at 0x8bf9d4 targets 0x8bf900 and is always taken.
  The return at 0x8bf92c has v0 = ?.

- `MakeAddressAvailable` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8c1680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8c1680-0x8c1934 (692 bytes).
  It occupies 692 bytes.
  8 such `sw` accesses store 4 bytes to ?, including `sw` at 0x8c16b0, `sw` at 0x8c16b4, `sw` at 0x8c1700.
  9 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8c16e0, `lhu` at 0x8c1730, `lhu` at 0x8c1780.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x8c17e0, `lw` at 0x8c1800, `lw` at 0x8c1818.
  3 such `sh` accesses store 2 bytes to ?, including `sh` at 0x8c1848, `sh` at 0x8c1890, `sh` at 0x8c18d8.
  The `bne` branch at 0x8c16bc targets 0x8c16b0, is taken when a4(?) != t8(=sp-36), and falls through when a4(?) == t8(=sp-36).
  The `bne` branch at 0x8c16d0 targets 0x8c16e0, is taken when a5(?) != a1, and falls through when a5(?) == a1.
  The `beq` branch at 0x8c16d8 targets 0x8c1714, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x8c16f0 targets 0x8c184c, is taken when t2(?) == t3(=0x3), and falls through when t2(?) != t3(=0x3).
  The `beq` branch at 0x8c16f8 targets 0x8c1704, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x8c1704 targets 0x8c1714, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x8c1718 targets 0x8c17c0 and is never taken: its condition can never hold for these operands, so execution always falls through.
  The `bne` branch at 0x8c1720 targets 0x8c1730, is taken when a5(?) != a1, and falls through when a5(?) == a1.
  The `beq` branch at 0x8c1728 targets 0x8c1764, is taken when a4(=0x1) == a2, and falls through when a4(=0x1) != a2.
  The `beq` branch at 0x8c1740 targets 0x8c1894, is taken when t2(?) == t3(=0x3), and falls through when t2(?) != t3(=0x3).
  The `beq` branch at 0x8c1748 targets 0x8c1754, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x8c1754 targets 0x8c1764, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x8c1768 targets 0x8c17c0 and is never taken: its condition can never hold for these operands, so execution always falls through.
  The `bne` branch at 0x8c1770 targets 0x8c1780, is taken when a5(?) != a1, and falls through when a5(?) == a1.
  The `beq` branch at 0x8c1778 targets 0x8c17c0, is taken when a4(=0x2) == a2, and falls through when a4(=0x2) != a2.
  The `beq` branch at 0x8c1790 targets 0x8c18dc, is taken when t2(?) == t3(=0x3), and falls through when t2(?) != t3(=0x3).
  The `beq` branch at 0x8c1798 targets 0x8c17a4, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x8c17a4 targets 0x8c17c0, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0x8c17c8 targets 0x8c16d0, is taken when a5(?) != ra(=0x2), and falls through when a5(?) == ra(=0x2).
  The `beq` branch at 0x8c17e8 targets 0x8c1840, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x8c17f8 targets 0x8c1824, is taken when a1(?) == a2(?), and falls through when a1(?) != a2(?).
  The `beq` branch at 0x8c1808 targets 0x8c188c, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `beq` branch at 0x8c1810 targets 0x8c1824, is taken when a1(?) == a2(?), and falls through when a1(?) != a2(?).
  The `beq` branch at 0x8c181c targets 0x8c18d4, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0x8c1824 targets 0x8c17dc, is taken when a4(?) != ra(=0x2), and falls through when a4(?) == ra(=0x2).
  The `beq` branch at 0x8c1844 targets 0x8c17f0 and is always taken.
  The `beq` branch at 0x8c184c targets 0x8c1868, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x8c1858 targets 0x8c191c, is taken when t0(?) == t9(=0x1), and falls through when t0(?) != t9(=0x1).
  The `beq` branch at 0x8c1860 targets 0x8c191c, is taken when t0(?) == ra(=0x2), and falls through when t0(?) != ra(=0x2).
  The `beq` branch at 0x8c1868 targets 0x8c1714, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x8c1874 targets 0x8c1884, is taken when t0(?) == t9(=0x1), and falls through when t0(?) != t9(=0x1).
  The `bne` branch at 0x8c187c targets 0x8c1714, is taken when t0(?) != ra(=0x2), and falls through when t0(?) == ra(=0x2).
  The `beq` branch at 0x8c1884 targets 0x8c1714 and is always taken.
  The `beq` branch at 0x8c188c targets 0x8c1810 and is always taken.
  The `beq` branch at 0x8c1894 targets 0x8c18b0, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x8c18a0 targets 0x8c1924, is taken when t0(?) == t9(=0x1), and falls through when t0(?) != t9(=0x1).
  The `beq` branch at 0x8c18a8 targets 0x8c1924, is taken when t0(?) == ra(=0x2), and falls through when t0(?) != ra(=0x2).
  The `beq` branch at 0x8c18b0 targets 0x8c1764, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x8c18bc targets 0x8c18cc, is taken when t0(?) == t9(=0x1), and falls through when t0(?) != t9(=0x1).
  The `bne` branch at 0x8c18c4 targets 0x8c1764, is taken when t0(?) != ra(=0x2), and falls through when t0(?) == ra(=0x2).
  The `beq` branch at 0x8c18cc targets 0x8c1764 and is always taken.
  The `beq` branch at 0x8c18d4 targets 0x8c1824 and is always taken.
  The `beq` branch at 0x8c18dc targets 0x8c18f8, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x8c18e8 targets 0x8c192c, is taken when t0(?) == t9(=0x1), and falls through when t0(?) != t9(=0x1).
  The `beq` branch at 0x8c18f0 targets 0x8c192c, is taken when t0(?) == ra(=0x2), and falls through when t0(?) != ra(=0x2).
  The `beq` branch at 0x8c18f8 targets 0x8c17c0, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x8c1904 targets 0x8c1914, is taken when t0(?) == t9(=0x1), and falls through when t0(?) != t9(=0x1).
  The `bne` branch at 0x8c190c targets 0x8c17c0, is taken when t0(?) != ra(=0x2), and falls through when t0(?) == ra(=0x2).
  The `beq` branch at 0x8c1914 targets 0x8c17c0 and is always taken.
  The `beq` branch at 0x8c191c targets 0x8c1868 and is always taken.
  The `beq` branch at 0x8c1924 targets 0x8c18b0 and is always taken.
  The `beq` branch at 0x8c192c targets 0x8c18f8 and is always taken.
  The return at 0x8c1838 has v0 = 0x0.

- `SetAddress` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8c1940 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8c1940-0x8c19f0 (176 bytes).
  It occupies 176 bytes.
  2 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8c1960, `lhu` at 0x8c197c.
  2 such `sh` accesses store 2 bytes to ?, including `sh` at 0x8c19b4, `sh` at 0x8c19c0.
  The `lhu` at 0x8c19d4 loads 2 bytes from ((a2 << 0x2) + ((a1 << 0x6) + a0)) +0x8.
  The `sh` at 0x8c19ec stores 2 bytes to ((a2 << 0x2) + ((a1 << 0x6) + a0)) +0x8.
  The `beq` branch at 0x8c1958 targets 0x8c1974, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x8c1964 targets 0x8c1974, is taken when a5(?) == t1(=0xffff), and falls through when a5(?) != t1(=0xffff).
  The `bne` branch at 0x8c196c targets 0x8c1990, is taken when a5(?) != a3, and falls through when a5(?) == a3.
  The `beq` branch at 0x8c1974 targets 0x8c19a4, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The `beq` branch at 0x8c1980 targets 0x8c19a4, is taken when a5(?) == t1(=0xffff), and falls through when a5(?) != t1(=0xffff).
  The `beq` branch at 0x8c1988 targets 0x8c19a4, is taken when a5(?) == a3, and falls through when a5(?) != a3.
  The `bne` branch at 0x8c1994 targets 0x8c1958, is taken when a7(?) != t3(=0x3), and falls through when a7(?) == t3(=0x3).
  The `beq` branch at 0x8c19a4 targets 0x8c199c, is taken when a7(?) == t3(=0x3), and falls through when a7(?) != t3(=0x3).
  The `beq` branch at 0x8c19ac targets 0x8c19b8, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x8c19b8 targets 0x8c19c4, is taken when t2(?) == 0, and falls through when t2(?) != 0.
  The return at 0x8c199c has v0 = 0x0.
  The return at 0x8c19e8 has v0 = 0x1.

- `SwitchInputs` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8c1ec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8c1ec0-0x8c2028 (360 bytes).
  It occupies 360 bytes.
  5 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x8c1f08, `lhu` at 0x8c1f58, `lhu` at 0x8c1fa4.
  8 such `sh` accesses store 2 bytes to ?, including `sh` at 0x8c1f34, `sh` at 0x8c1f44, `sh` at 0x8c1f84.
  The `beq` branch at 0x8c1ecc targets 0x8c1ed8, is taken when a3 == 0, and falls through when a3 != 0.
  The `beq` branch at 0x8c1f14 targets 0x8c1f48, is taken when (a7(?) & 0x300) == 0, and falls through when (a7(?) & 0x300) != 0.
  The `beq` branch at 0x8c1f20 targets 0x8c1f48, is taken when (t1(?) & t9(=one of 0x100, 0x200)) == 0, and falls through when (t1(?) & t9(=one of 0x100, 0x200)) != 0.
  The `bne` branch at 0x8c1f28 targets 0x8c1f38, is taken when a6(?) != a1, and falls through when a6(?) == a1.
  The `bne` branch at 0x8c1f38 targets 0x8c1f48, is taken when a6(?) != a2, and falls through when a6(?) == a2.
  The `beq` branch at 0x8c1f50 targets 0x8c1fe4, is taken when a5(?) == t0(?), and falls through when a5(?) != t0(?).
  The `beq` branch at 0x8c1f64 targets 0x8c1f98, is taken when (a7(?) & 0x300) == 0, and falls through when (a7(?) & 0x300) != 0.
  The `beq` branch at 0x8c1f70 targets 0x8c1f98, is taken when (t1(?) & t9(=one of 0x100, 0x200)) == 0, and falls through when (t1(?) & t9(=one of 0x100, 0x200)) != 0.
  The `bne` branch at 0x8c1f78 targets 0x8c1f88, is taken when a6(?) != a1, and falls through when a6(?) == a1.
  The `bne` branch at 0x8c1f88 targets 0x8c1f98, is taken when a6(?) != a2, and falls through when a6(?) == a2.
  The `beq` branch at 0x8c1f9c targets 0x8c1fe8, is taken when a5(?) == t0(?), and falls through when a5(?) != t0(?).
  The `beq` branch at 0x8c1fb0 targets 0x8c1fe4, is taken when (a7(?) & 0x300) == 0, and falls through when (a7(?) & 0x300) != 0.
  The `beq` branch at 0x8c1fbc targets 0x8c1fe4, is taken when (t1(?) & t9(=one of 0x100, 0x200)) == 0, and falls through when (t1(?) & t9(=one of 0x100, 0x200)) != 0.
  The `bne` branch at 0x8c1fc4 targets 0x8c1fd4, is taken when a6(?) != a1, and falls through when a6(?) == a1.
  The `bne` branch at 0x8c1fd4 targets 0x8c1fe4, is taken when a6(?) != a2, and falls through when a6(?) == a2.
  The `bne` branch at 0x8c1fec targets 0x8c1f08, is taken when t3(?) != v1(=0x2), and falls through when t3(?) == v1(=0x2).
  The return at 0x8c2020 has v0 = ?.

- `BitPosition` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x8d3700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x8d3700-0x8d3768 (104 bytes).
  It occupies 104 bytes.
  The `beq` branch at 0x8d3710 targets 0x8d3748, is taken when a0 == at(=0x1), and falls through when a0 != at(=0x1).
  The `beq` branch at 0x8d3718 targets 0x8d3750, is taken when a0 == a2(=0x2), and falls through when a0 != a2(=0x2).
  The `beq` branch at 0x8d3720 targets 0x8d3758, is taken when a0 == a3(=0x4), and falls through when a0 != a3(=0x4).
  The `beq` branch at 0x8d3728 targets 0x8d3760, is taken when a0 == a4(=0x8), and falls through when a0 != a4(=0x8).
  The `beq` branch at 0x8d3730 targets 0x8d3740, is taken when a0 == a5(=0x10), and falls through when a0 != a5(=0x10).
  The return at 0x8d3738 has v0 = 0x0.
  The return at 0x8d3740 has v0 = 0x4.
  The return at 0x8d3748 has v0 = 0x0.
  The return at 0x8d3750 has v0 = 0x1.
  The return at 0x8d3758 has v0 = 0x2.
  The return at 0x8d3760 has v0 = 0x3.

- `LoadTexUnit0` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x916b80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x916b80-0x916c38 (184 bytes).
  It occupies 184 bytes.
  The `lbu` at 0x916bb8 loads 1 byte from a0 (arg0 at entry) +0x355a0.
  The `lw` at 0x916bd4 loads 4 bytes from a0 (arg0 at entry) +0x46e4c.
  The `lw` at 0x916bd8 loads 4 bytes from a0 (arg0 at entry) +0x46e48.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x46e4c, including `sw` at 0x916be0, `sw` at 0x916c14.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x46e48, including `sw` at 0x916be8, `sw` at 0x916bfc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xdf4, including `lw` at 0x916bec, `lw` at 0x916c00.
  The `bgezall` at 0x916ba8 calls __R200SetupTexUnit0 [0x916780] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x916bc8 targets 0x916c24, is taken when at(=[a0+218528]:1) == 0, and falls through when at(=[a0+218528]:1) != 0.
  The `beq` branch at 0x916bf4 targets 0x916c04, is taken when (a1(=[a0+3572]) & 0x80) == 0, and falls through when (a1(=[a0+3572]) & 0x80) != 0.
  The `beq` branch at 0x916c0c targets 0x916c24, is taken when (a1(=[a0+3572]) & 0x100) == 0, and falls through when (a1(=[a0+3572]) & 0x100) != 0.
  The return at 0x916c1c has v0 = ret(__R200SetupTexUnit0).
  The return at 0x916c30 has v0 = ret(__R200SetupTexUnit0).

- `LoadTexUnit1` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x917080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x917080-0x917138 (184 bytes).
  It occupies 184 bytes.
  The `lbu` at 0x9170b8 loads 1 byte from a0 (arg0 at entry) +0x355a1.
  The `lw` at 0x9170d4 loads 4 bytes from a0 (arg0 at entry) +0x46e4c.
  The `lw` at 0x9170d8 loads 4 bytes from a0 (arg0 at entry) +0x46e48.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x46e4c, including `sw` at 0x9170e0, `sw` at 0x917114.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x46e48, including `sw` at 0x9170e8, `sw` at 0x9170fc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xdf8, including `lw` at 0x9170ec, `lw` at 0x917100.
  The `bgezall` at 0x9170a8 calls __R200SetupTexUnit1 [0x916c40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x9170c8 targets 0x917124, is taken when at(=[a0+218529]:1) == 0, and falls through when at(=[a0+218529]:1) != 0.
  The `beq` branch at 0x9170f4 targets 0x917104, is taken when (a1(=[a0+3576]) & 0x80) == 0, and falls through when (a1(=[a0+3576]) & 0x80) != 0.
  The `beq` branch at 0x91710c targets 0x917124, is taken when (a1(=[a0+3576]) & 0x100) == 0, and falls through when (a1(=[a0+3576]) & 0x100) != 0.
  The return at 0x91711c has v0 = ret(__R200SetupTexUnit1).
  The return at 0x917130 has v0 = ret(__R200SetupTexUnit1).

- `LoadTexUnit2` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x917580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x917580-0x917634 (180 bytes).
  It occupies 180 bytes.
  The `lbu` at 0x9175b8 loads 1 byte from a0 (arg0 at entry) +0x355a2.
  The `lw` at 0x9175d4 loads 4 bytes from a0 (arg0 at entry) +0x46e4c.
  The `lw` at 0x9175d8 loads 4 bytes from a0 (arg0 at entry) +0x46e48.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x46e4c, including `sw` at 0x9175e0, `sw` at 0x917614.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x46e48, including `sw` at 0x9175e8, `sw` at 0x9175fc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xdfc, including `lw` at 0x9175ec, `lw` at 0x917600.
  The `bgezall` at 0x9175a8 calls __R200SetupTexUnit2 [0x917140] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x9175cc targets 0x917620, is taken when at(=[a0+218530]:1) == 0, and falls through when at(=[a0+218530]:1) != 0.
  The `beq` branch at 0x9175f4 targets 0x917604, is taken when (a2(=[a0+3580]) & 0x80) == 0, and falls through when (a2(=[a0+3580]) & 0x80) != 0.
  The `beq` branch at 0x91760c targets 0x917620, is taken when (a2(=[a0+3580]) & 0x100) == 0, and falls through when (a2(=[a0+3580]) & 0x100) != 0.
  The return at 0x917618 has v0 = ret(__R200SetupTexUnit2).
  The return at 0x91762c has v0 = ret(__R200SetupTexUnit2).

- `FastZStencilClear` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x992cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x992cc0-0x992fb4 (756 bytes).
  It occupies 756 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x38670, including `lw` at 0x992cec, `lw` at 0x992d68.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x46e78, including `sw` at 0x992cf0, `sw` at 0x992d10.
  The `lw` at 0x992cf4 loads 4 bytes from [a0+231024] +0x60.
  The `lh` at 0x992d04 loads 2 bytes from a0 (arg0 at entry) +0xd10.
  The `sw` at 0x992d18 stores 4 bytes to [a0+231024] +0x84.
  The `lw` at 0x992d1c loads 4 bytes from a0 (arg0 at entry) +0x38690.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x38da0, including `lw` at 0x992d44, `lw` at 0x992f80.
  The `lw` at 0x992d48 loads 4 bytes from [a0+232864] +0x278.
  The `lw` at 0x992d70 loads 4 bytes from [a0+231024] +0x20.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d58, including `lw` at 0x992d8c, `lw` at 0x992df4.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d5c, including `lw` at 0x992d94, `lw` at 0x992df8.
  The `sw` at 0x992e14 stores 4 bytes to [a0+290136] +0x0.
  The `lw` at 0x992e18 loads 4 bytes from a0 (arg0 at entry) +0x46e6c.
  The `sw` at 0x992e20 stores 4 bytes to [a0+290136] +0xc.
  The `sw` at 0x992e28 stores 4 bytes to [a0+290136] +0x8.
  The `sw` at 0x992e38 stores 4 bytes to [a0+290136] +0x18.
  The `sw` at 0x992e44 stores 4 bytes to [a0+290136] +0x14.
  The `sw` at 0x992e4c stores 4 bytes to [a0+290136] +0x10.
  The `sw` at 0x992e50 stores 4 bytes to [a0+290136] +0x4.
  The `lw` at 0x992e58 loads 4 bytes from a0 (arg0 at entry) +0x46e7c.
  The `sw` at 0x992e60 stores 4 bytes to [a0+290136] +0x1c.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x482ac, including `lw` at 0x992e64, `lw` at 0x992e70, `lw` at 0x992e7c.
  The `sw` at 0x992e6c stores 4 bytes to [a0+295596] +0x4.
  The `sw` at 0x992e78 stores 4 bytes to [a0+295596] +0x0.
  The `sw` at 0x992e8c stores 4 bytes to a0 (arg0 at entry) +0x482ac.
  The `sw` at 0x992e98 stores 4 bytes to [a0+290136] +0x20.
  The `sw` at 0x992ea4 stores 4 bytes to [a0+290136] +0x24.
  2 such `sw` accesses store 4 bytes to [a0+290136] +0x28, including `sw` at 0x992ebc, `sw` at 0x992f04.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46ed4, including `lw` at 0x992ec0, `lw` at 0x992ee4, `lw` at 0x992f08.
  2 such `sw` accesses store 4 bytes to [a0+290136] +0x34, including `sw` at 0x992ec4, `sw` at 0x992f10.
  2 such `sw` accesses store 4 bytes to [a0+290136] +0x30, including `sw` at 0x992ecc, `sw` at 0x992f0c.
  2 such `sw` accesses store 4 bytes to [a0+290136] +0x2c, including `sw` at 0x992ed8, `sw` at 0x992f18.
  The `sw` at 0x992ee0 stores 4 bytes to [a0+290136] +0x38.
  The `sw` at 0x992ee8 stores 4 bytes to [a0+290136] +0x40.
  The `sw` at 0x992ef4 stores 4 bytes to [a0+290136] +0x44.
  The `sw` at 0x992f00 stores 4 bytes to [a0+290136] +0x3c.
  The `sw` at 0x992f20 stores 4 bytes to ([a0+290136] + one of 0x28, 0x38, 0x48) +0x0.
  The `lw` at 0x992f24 loads 4 bytes from a0 (arg0 at entry) +0x46e78.
  The `sw` at 0x992f2c stores 4 bytes to ([a0+290136] + one of 0x2c, 0x3c, 0x4c) +0x0.
  The `sw` at 0x992f38 stores 4 bytes to a0 (arg0 at entry) +0x46d58.
  The `lw` at 0x992f3c loads 4 bytes from a0 (arg0 at entry) +0x36eb4.
  The `lw` at 0x992f4c loads 4 bytes from a0 (arg0 at entry) +0xc0dc.
  The `lw` at 0x992f50 loads 4 bytes from [a0+49372] +0x8.
  The `lbu` at 0x992f54 loads 1 byte from [[a0+49372]+8] +0x88.
  The `lbu` at 0x992f84 loads 1 byte from [a0+232864] +0x2ed.
  The `jalr` at 0x992cdc calls __R200CalcHWDepthClearValue [0x91a380] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x992d58 calls (unknown callee) with a0=[a0+232864], a1=sp-80, a2=sp-76, a3=sp-72, a4=sp-68.
  The `jalr` at 0x992dec calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x992f94 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=([a0+290136] + one of 0x30, 0x40, 0x50), a2=0x70c, a3=?, a6=0x3000.
  The `beq` branch at 0x992cfc targets 0x992d14, is taken when at(=[[a0+231024]+96]) == 0, and falls through when at(=[[a0+231024]+96]) != 0.
  The `beq` branch at 0x992d14 targets 0x992fa4, is taken when s2(=a1) == 0, and falls through when s2(=a1) != 0.
  The `beq` branch at 0x992dc0 targets 0x992fac, is taken when s2(=a1) == 0, and falls through when s2(=a1) != 0.
  The `beq` branch at 0x992dc8 targets 0x992dd8, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x992de0 targets 0x992e14, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x992e08 targets 0x992dec, is taken when t2(?) < 0x14 (unsigned), and falls through when t2(?) >= 0x14 (unsigned).
  The `beq` branch at 0x992ea0 targets 0x992f1c, is taken when s2(=a1) == 0, and falls through when s2(=a1) != 0.
  The `bne` branch at 0x992eb4 targets 0x992f04, is taken when a5(?) < 0x3001 (unsigned), and falls through when a5(?) >= 0x3001 (unsigned).
  The `beq` branch at 0x992ed4 targets 0x992f1c, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x992efc targets 0x992f1c and is always taken.
  The `bne` branch at 0x992f44 targets 0x992f90, is taken when v1(=[a0+224948]) != 0, and falls through when v1(=[a0+224948]) == 0.
  The `beq` branch at 0x992f58 targets 0x992f80, is taken when a3(=[[[a0+49372]+8]+136]:1) == 0, and falls through when a3(=[[[a0+49372]+8]+136]:1) != 0.
  The `bne` branch at 0x992f88 targets 0x992f60, is taken when a4(=[[a0+232864]+749]:1) != 0, and falls through when a4(=[[a0+232864]+749]:1) == 0.
  The `beq` branch at 0x992f9c targets 0x992f60 and is always taken.
  The `beq` branch at 0x992fa4 targets 0x992d44 and is always taken.
  The `beq` branch at 0x992fac targets 0x992de0 and is always taken.
  The return at 0x992f70 has v0 = one of a0+65536, ret(__glATISubmitBM).
  The instructions from 0x992f78 to 0x992f7c are not reached by any path from the entry, and their branches are not listed.

- `ComputeFaceIndex` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x99dd80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x99dd80-0x99ded4 (340 bytes).
  It occupies 340 bytes.
  The `lw` at 0x99dd84 loads 4 bytes from a1 (arg1 at entry) +0x50.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x50, including `lw` at 0x99ddb4, `lw` at 0x99de9c.
  The `lw` at 0x99ddc4 loads 4 bytes from a3 (arg3 at entry) +0x50.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x9e4, including `lw` at 0x99ddd4, `lw` at 0x99ded0.
  The `lwc1` at 0x99ddd8 loads 4 bytes from a3 (arg3 at entry) +0x60.
  The `lwc1` at 0x99dddc loads 4 bytes from a3 (arg3 at entry) +0x64.
  The `lwc1` at 0x99dde0 loads 4 bytes from a2 (arg2 at entry) +0x64.
  The `lwc1` at 0x99dde4 loads 4 bytes from a1 (arg1 at entry) +0x64.
  The `lwc1` at 0x99dde8 loads 4 bytes from a2 (arg2 at entry) +0x60.
  The `lwc1` at 0x99ddec loads 4 bytes from a1 (arg1 at entry) +0x60.
  The `lbu` at 0x99ddf8 loads 1 byte from a0 (arg0 at entry) +0x7d00.
  The `jalr` at 0x99de90 calls __glXformToWindow [0x5b3280] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x99dea8 calls __glXformToWindow [0x5b3280] with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=0x5b3280, a3=?.
  The `jalr` at 0x99dec4 calls __glXformToWindow [0x5b3280] with a0=a0 at entry (arg0), a1=a3 at entry (arg3), a2=0x5b3280, a3=?.
  The `beq` branch at 0x99ddac targets 0x99de8c, is taken when (at(=[a1+80]) & 0x80) == 0, and falls through when (at(=[a1+80]) & 0x80) != 0.
  The `beq` branch at 0x99ddbc targets 0x99dea0, is taken when (v0(=[a2+80]) & 0x80) == 0, and falls through when (v0(=[a2+80]) & 0x80) != 0.
  The `beq` branch at 0x99ddcc targets 0x99dec0, is taken when (v1(=[a3+80]) & 0x80) == 0, and falls through when (v1(=[a3+80]) & 0x80) != 0.
  The `beq` branch at 0x99de38 targets 0x99de5c, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bc1t` branch at 0x99de48 targets 0x99de54, is taken when f4 < f5 (c.lt.s at 0x99de40), and falls through when not (f4 < f5 (c.lt.s at 0x99de40)).
  The `bc1t` branch at 0x99de74 targets 0x99de80, is taken when f5 <= f4 (c.le.s at 0x99de60), and falls through when not (f5 <= f4 (c.le.s at 0x99de60)).
  The `beq` branch at 0x99de98 targets 0x99ddb8 and is always taken.
  The `beq` branch at 0x99deb0 targets 0x99ddc4 and is always taken.
  The `beq` branch at 0x99decc targets 0x99ddd8 and is always taken.
  The return at 0x99de54 has v0 = one of 0x0, 0x1.
  The return at 0x99de84 has v0 = one of 0x0, 0x1.
  The instructions from 0x99deb8 to 0x99debc are not reached by any path from the entry, and their branches are not listed.

- `__dePoints2SL` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x9cd340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x9cd340-0x9cd38c (76 bytes).
  It occupies 76 bytes.
  The `bgezall` at 0x9cd374 calls (unnamed) [0x9cc400] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x0, a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=a4 at entry (arg4).
  The return at 0x9cd384 has v0 = ret(0x9cc400).

- `__deLines2SL` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x9cd3c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x9cd3c0-0x9cd40c (76 bytes).
  It occupies 76 bytes.
  The `bgezall` at 0x9cd3f4 calls (unnamed) [0x9cc400] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x1, a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=a4 at entry (arg4).
  The return at 0x9cd404 has v0 = ret(0x9cc400).

- `__deLineStrip2SL` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x9cd440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x9cd440-0x9cd48c (76 bytes).
  It occupies 76 bytes.
  The `bgezall` at 0x9cd474 calls (unnamed) [0x9cc400] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x3, a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=a4 at entry (arg4).
  The return at 0x9cd484 has v0 = ret(0x9cc400).

- `__deLineLoop2SL` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x9cd4c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x9cd4c0-0x9cd50c (76 bytes).
  It occupies 76 bytes.
  The `bgezall` at 0x9cd4f4 calls (unnamed) [0x9cc400] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x2, a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=a4 at entry (arg4).
  The return at 0x9cd504 has v0 = ret(0x9cc400).

- `__deTriangleFan2SL` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x9cd540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x9cd540-0x9cd58c (76 bytes).
  It occupies 76 bytes.
  The `bgezall` at 0x9cd574 calls (unnamed) [0x9cc400] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x6, a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=a4 at entry (arg4).
  The return at 0x9cd584 has v0 = ret(0x9cc400).

- `__deQuads2SL` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x9cd5c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x9cd5c0-0x9cd60c (76 bytes).
  It occupies 76 bytes.
  The `bgezall` at 0x9cd5f4 calls (unnamed) [0x9cc400] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x7, a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=a4 at entry (arg4).
  The return at 0x9cd604 has v0 = ret(0x9cc400).

- `__deQuadStrip2SL` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x9cd640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x9cd640-0x9cd68c (76 bytes).
  It occupies 76 bytes.
  The `bgezall` at 0x9cd674 calls (unnamed) [0x9cc400] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x8, a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=a4 at entry (arg4).
  The return at 0x9cd684 has v0 = ret(0x9cc400).

- `__dePolygon2SL` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x9cd6c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x9cd6c0-0x9cd70c (76 bytes).
  It occupies 76 bytes.
  The `bgezall` at 0x9cd6f4 calls (unnamed) [0x9cc400] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x9, a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=a4 at entry (arg4).
  The return at 0x9cd704 has v0 = ret(0x9cc400).

- `__deTriangles2SL` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x9cd740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x9cd740-0x9ced04 (5572 bytes).
  It occupies 5572 bytes.
  The `lw` at 0x9cd74c loads 4 bytes from a0 (arg0 at entry) +0x35af0.
  The `lwc1` at 0x9cd750 loads 4 bytes from a5 (arg5 at entry) +0x8.
  The `lwc1` at 0x9cd754 loads 4 bytes from a5 (arg5 at entry) +0x4.
  The `lwc1` at 0x9cd758 loads 4 bytes from a5 (arg5 at entry) +0x0.
  The `lw` at 0x9cd7b4 loads 4 bytes from a0 (arg0 at entry) +0x9e4.
  The `lw` at 0x9cd7d0 loads 4 bytes from a0 (arg0 at entry) +0x35a70.
  The `lwc1` at 0x9cd800 loads 4 bytes from [a0+219760] +0x18.
  The `lwc1` at 0x9cd804 loads 4 bytes from [a0+219760] +0x8.
  The `lwc1` at 0x9cd808 loads 4 bytes from [a0+219760] +0x28.
  2 such `lwc1` accesses load 4 bytes from a5 (arg5 at entry) +0x10, including `lwc1` at 0x9cd874, `lwc1` at 0x9ce3ec.
  2 such `lwc1` accesses load 4 bytes from a5 (arg5 at entry) +0xc, including `lwc1` at 0x9cd878, `lwc1` at 0x9ce3f0.
  2 such `lwc1` accesses load 4 bytes from a5 (arg5 at entry) +0x14, including `lwc1` at 0x9cd87c, `lwc1` at 0x9ce3f4.
  9 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7e20, including `lw` at 0x9cd8ac, `lw` at 0x9cd910, `lw` at 0x9ce184.
  13 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7e1c, including `lw` at 0x9cd8c8, `lw` at 0x9cd940, `lw` at 0x9cdbbc.
  4 such `sw` accesses store 4 bytes to [a0+32284] +0x0, including `sw` at 0x9cd8f0, `sw` at 0x9ce2b4, `sw` at 0x9ce470.
  149 such `sw` accesses store 4 bytes to ?, including `sw` at 0x9cd960, `sw` at 0x9cda98, `sw` at 0x9cdab4.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d5c, including `lw` at 0x9cd964, `lw` at 0x9cd9dc, `lw` at 0x9ce090.
  3 such `lw` accesses load 4 bytes from table(0xb87228) +0x0, including `lw` at 0x9cd974, `lw` at 0x9ce2d0, `lw` at 0x9ceb08.
  7 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d58, including `lw` at 0x9cd97c, `lw` at 0x9cd9e0, `lw` at 0x9cdf4c.
  The `lw` at 0x9cd9a8 loads 4 bytes from a0 (arg0 at entry) +0x46d64.
  3 such `sw` accesses store 4 bytes to [a0+290136] +0x4, including `sw` at 0x9cda54, `sw` at 0x9cdf68, `sw` at 0x9ce4ac.
  3 such `sw` accesses store 4 bytes to [a0+290136] +0x0, including `sw` at 0x9cda60, `sw` at 0x9cdf5c, `sw` at 0x9ce4b8.
  75 such `lw` accesses load 4 bytes from ?, including `lw` at 0x9cda8c, `lw` at 0x9cdab0, `lw` at 0x9cdab8.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x48074, including `lw` at 0x9cdbd0, `lw` at 0x9cdc10, `lw` at 0x9ce750.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x48074, including `sw` at 0x9cdc04, `sw` at 0x9ce784.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x607c, including `lw` at 0x9cde18, `lw` at 0x9ce7bc.
  2 such `lw` accesses load 4 bytes from [a0+24700] +0x10, including `lw` at 0x9cde2c, `lw` at 0x9ce7cc.
  3 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x46d58, including `sw` at 0x9cdf1c, `sw` at 0x9ce108, `sw` at 0x9ce90c.
  The `lh` at 0x9cdf8c loads 2 bytes from ?.
  16 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x9ce148, `lwc1` at 0x9ce14c, `lwc1` at 0x9ce150.
  The `lwc1` at 0x9ce368 loads 4 bytes from [a0+219760] +0x12c.
  The `lwc1` at 0x9ce36c loads 4 bytes from [a0+219760] +0x128.
  The `lwc1` at 0x9ce370 loads 4 bytes from [a0+219760] +0x130.
  The `lwc1` at 0x9ce384 loads 4 bytes from a6 (arg6 at entry) +0x0.
  The `lwc1` at 0x9ce408 loads 4 bytes from a6 (arg6 at entry) +0x4.
  The `jalr` at 0x9cd9bc calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=0x40000.
  The `bgezall` at 0x9cd9d0 calls (unnamed) [0x9c9a80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x9cdf24 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x9cdf38 calls (unnamed) [0x9c9a80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x9ce254 calls __glATIExpandBreakIndexBufferSize [0x5900c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x9ce26c calls __glATIExpandBreakIndexBufferSize [0x5900c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x9ce314 calls __glATIExpandBreakIndexBufferSize [0x5900c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x9ce330 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=((entry(0xb87228) << 0x10) | 0xffffffffc0002f00), a2=0xffffffffc0002f00, a3=?, a4=entry(0xb87228), a5=0x40000.
  The `bgezall` at 0x9ce344 calls (unnamed) [0x9c9a80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x9cea70 calls __glATIExpandBreakIndexBufferSize [0x5900c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=0xffffffff80000000.
  The `jalr` at 0x9cea90 calls __glATIExpandBreakIndexBufferSize [0x5900c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x9ceb34 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=((entry(0xb87228) << 0x10) | 0xffffffffc0002f00), a2=0xffffffffc0002f00, a3=(a4 | 0x4000), a5=0x40000, a7=entry(0xb87228).
  The `bgezall` at 0x9ceb48 calls (unnamed) [0x9c9a80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x9ceb68 calls __glATIExpandBreakIndexBufferSize [0x5900c0] with a0=a0 at entry (arg0), a1=?, a2=0x2, a3=?, a7=[a0+219760].
  The `jalr` at 0x9ceba8 calls __glATIExpandBreakIndexBufferSize [0x5900c0] with a0=a0 at entry (arg0), a1=?, a2=0x2, a3=?, a6=a6+4.
  The `beq` branch at 0x9cd7f8 targets 0x9ce368, is taken when at(=[a0+219888]) == 0, and falls through when at(=[a0+219888]) != 0.
  The `beq` branch at 0x9cd82c targets 0x9ce28c, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x9cd86c targets 0x9cd900, is taken when (a0(?) & 0x1) == 0, and falls through when (a0(?) & 0x1) != 0.
  The `beq` branch at 0x9cd8a4 targets 0x9cd8f4, is taken when s2(?) == a1(?), and falls through when s2(?) != a1(?).
  The `beq` branch at 0x9cd8bc targets 0x9ceb60, is taken when 0 >= a3(=[a0+32288]) (unsigned), and falls through when 0 < a3(=[a0+32288]) (unsigned).
  The `bne` branch at 0x9cd904 targets 0x9cecd0, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x9cd930 targets 0x9ce310, is taken when s6(?) >= a6(=[a0+32288]) (unsigned), and falls through when s6(?) < a6(=[a0+32288]) (unsigned).
  The `beq` branch at 0x9cd99c targets 0x9cda00, is taken when a7(?) >= s3(?) (unsigned), and falls through when a7(?) < s3(?) (unsigned).
  The `beq` branch at 0x9cd9b4 targets 0x9ce324, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x9cda2c targets 0x9ce498, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `bne` branch at 0x9cda44 targets 0x9ce32c, is taken when ra(?) < a3(=entry(0xb87228)+8) (unsigned), and falls through when ra(?) >= a3(=entry(0xb87228)+8) (unsigned).
  The `beq` branch at 0x9cda5c targets 0x9cdb38, is taken when a4(=entry(0xb87228)) == 0, and falls through when a4(=entry(0xb87228)) != 0.
  The `beq` branch at 0x9cda7c targets 0x9cda9c, is taken when (a4(=entry(0xb87228)) & 0x3) == 0, and falls through when (a4(=entry(0xb87228)) & 0x3) != 0.
  The `bne` branch at 0x9cda94 targets 0x9cda84, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x9cdaa0 targets 0x9cdb38, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x9cdaa8 targets 0x9cebc0, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `beq` branch at 0x9cdaf8 targets 0x9ce280, is taken when a1(?) == at(=((entry(0xb87228) << 0x2) + a0)+262128), and falls through when a1(?) != at(=((entry(0xb87228) << 0x2) + a0)+262128).
  The `bne` branch at 0x9cdb24 targets 0x9cdad4, is taken when a1(?) != at(=((entry(0xb87228) << 0x2) + a0)+262128), and falls through when a1(?) == at(=((entry(0xb87228) << 0x2) + a0)+262128).
  The `beq` branch at 0x9cdb4c targets 0x9ce0cc, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0x9cdb9c targets 0x9cdbb8 and is always taken.
  The `beq` branch at 0x9cdbb0 targets 0x9ce0cc, is taken when t9(?) == at(?), and falls through when t9(?) != at(?).
  The `beq` branch at 0x9cdbec targets 0x9cdc2c, is taken when a5(?) == v0(?), and falls through when a5(?) != v0(?).
  The `bne` branch at 0x9cdc3c targets 0x9cecc8, is taken when s1(?) != 0, and falls through when s1(?) == 0.
  The `beq` branch at 0x9cdc44 targets 0x9cdba4 and is always taken.
  The `beq` branch at 0x9cdc4c targets 0x9cdd94, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x9cdc6c targets 0x9cdc8c, is taken when (a2(?) & 0x7) == 0, and falls through when (a2(?) & 0x7) != 0.
  The `bne` branch at 0x9cdc84 targets 0x9cdc74, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x9cdc90 targets 0x9cdd94, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x9cdc98 targets 0x9cec08, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x9cdd14 targets 0x9ce0a8, is taken when t3(?) == v0(?), and falls through when t3(?) != v0(?).
  The `bne` branch at 0x9cdd60 targets 0x9cdcd0, is taken when t2(?) != v0(?), and falls through when t2(?) == v0(?).
  The `beq` branch at 0x9cdda4 targets 0x9cdba4, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `bne` branch at 0x9cddac targets 0x9cdf18, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `beq` branch at 0x9cdde0 targets 0x9cddec, is taken when s1(?) >= s2(?) (unsigned), and falls through when s1(?) < s2(?) (unsigned).
  The `beq` branch at 0x9cde44 targets 0x9cdc4c, is taken when s4(=a3) == 0, and falls through when s4(=a3) != 0.
  The `beq` branch at 0x9cde4c targets 0x9cdf00, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x9cde5c targets 0x9cde80, is taken when (a2(?) & 0x3) == 0, and falls through when (a2(?) & 0x3) != 0.
  The `bne` branch at 0x9cde78 targets 0x9cde64, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x9cde88 targets 0x9cdf00, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x9cdeb8 targets 0x9cdf10, is taken when a2(?) == at(?), and falls through when a2(?) != at(?).
  The `bne` branch at 0x9cdee8 targets 0x9cde90, is taken when a1(?) != at(?), and falls through when a1(?) == at(?).
  The `beq` branch at 0x9cdf08 targets 0x9cdda0 and is always taken.
  The `beq` branch at 0x9cdf10 targets 0x9cdf00 and is always taken.
  The `bne` branch at 0x9cdf64 targets 0x9cdfc0, is taken when s4(=a3) != 0, and falls through when s4(=a3) == 0.
  The `beq` branch at 0x9cdf70 targets 0x9cdfb8, is taken when t8(=a4) == 0, and falls through when t8(=a4) != 0.
  The `bne` branch at 0x9cdfb0 targets 0x9cdf88, is taken when a0(?) != s8(=((a4 << 0x2) + a0)+262144), and falls through when a0(?) == s8(=((a4 << 0x2) + a0)+262144).
  The `beq` branch at 0x9cdfc8 targets 0x9ce090, is taken when t3(=entry(0xb87228)) == 0, and falls through when t3(=entry(0xb87228)) != 0.
  The `beq` branch at 0x9cdfd4 targets 0x9cdff4, is taken when (t3(=entry(0xb87228)) & 0x3) == 0, and falls through when (t3(=entry(0xb87228)) & 0x3) != 0.
  The `bne` branch at 0x9cdfec targets 0x9cdfdc, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x9cdff8 targets 0x9ce090, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x9ce000 targets 0x9cebe4, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x9ce050 targets 0x9ce0c0, is taken when a1(?) == at(=((entry(0xb87228) << 0x2) + a0)+262128), and falls through when a1(?) != at(=((entry(0xb87228) << 0x2) + a0)+262128).
  The `bne` branch at 0x9ce07c targets 0x9ce02c, is taken when a1(?) != at(=((entry(0xb87228) << 0x2) + a0)+262128), and falls through when a1(?) == at(=((entry(0xb87228) << 0x2) + a0)+262128).
  The `beq` branch at 0x9ce0a0 targets 0x9cddb0 and is always taken.
  The `beq` branch at 0x9ce0b0 targets 0x9cdd74 and is always taken.
  The `beq` branch at 0x9ce0c4 targets 0x9ce08c and is always taken.
  The `beq` branch at 0x9ce17c targets 0x9ce1dc, is taken when s2(?) == t0(?), and falls through when s2(?) != t0(?).
  The `beq` branch at 0x9ce1a4 targets 0x9ce264, is taken when s6(?) >= t3(=[a0+32288]) (unsigned), and falls through when s6(?) < t3(=[a0+32288]) (unsigned).
  The `beq` branch at 0x9ce1f0 targets 0x9cd90c, is taken when s3(?) == t9(?), and falls through when s3(?) != t9(?).
  The `beq` branch at 0x9ce230 targets 0x9ce148, is taken when s2(?) == ra(?), and falls through when s2(?) != ra(?).
  The `bne` branch at 0x9ce244 targets 0x9ce118, is taken when s6(?) < v1(=[a0+32288]) (unsigned), and falls through when s6(?) >= v1(=[a0+32288]) (unsigned).
  The `beq` branch at 0x9ce25c targets 0x9ce118 and is always taken.
  The `beq` branch at 0x9ce274 targets 0x9ce1ac and is always taken.
  The `beq` branch at 0x9ce284 targets 0x9cdb34 and is always taken.
  The `beq` branch at 0x9ce294 targets 0x9ce300, is taken when a0(=[a0+32288]) == 0, and falls through when a0(=[a0+32288]) != 0.
  The `beq` branch at 0x9ce2e8 targets 0x9ceaa4, is taken when a7(?) >= s3(=entry(0xb87228)+8) (unsigned), and falls through when a7(?) < s3(=entry(0xb87228)+8) (unsigned).
  The `beq` branch at 0x9ce2f0 targets 0x9cd9a4 and is always taken.
  The `beq` branch at 0x9ce31c targets 0x9cd938 and is always taken.
  The `beq` branch at 0x9ce324 targets 0x9cda00 and is always taken.
  The `beq` branch at 0x9ce360 targets 0x9cda48 and is always taken.
  The `beq` branch at 0x9ce3a0 targets 0x9ceac0, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x9ce3e4 targets 0x9ce484, is taken when (a7(?) & 0x1) == 0, and falls through when (a7(?) & 0x1) != 0.
  The `beq` branch at 0x9ce424 targets 0x9ce474, is taken when s2(?) == t0(?), and falls through when s2(?) != t0(?).
  The `beq` branch at 0x9ce43c targets 0x9ceb9c, is taken when 0 >= a3(=[a0+32288]) (unsigned), and falls through when 0 < a3(=[a0+32288]) (unsigned).
  The `bne` branch at 0x9ce488 targets 0x9cecf8, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x9ce490 targets 0x9cd910 and is always taken.
  The `bne` branch at 0x9ce49c targets 0x9ceb30, is taken when a7(?) < s3(?) (unsigned), and falls through when a7(?) >= s3(?) (unsigned).
  The `beq` branch at 0x9ce4b4 targets 0x9ce590, is taken when a7(=entry(0xb87228)) == 0, and falls through when a7(=entry(0xb87228)) != 0.
  The `beq` branch at 0x9ce4d4 targets 0x9ce4f4, is taken when (a7(=entry(0xb87228)) & 0x3) == 0, and falls through when (a7(=entry(0xb87228)) & 0x3) != 0.
  The `bne` branch at 0x9ce4ec targets 0x9ce4dc, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x9ce4f8 targets 0x9ce590, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x9ce500 targets 0x9cec50, is taken when t8(?) != 0, and falls through when t8(?) == 0.
  The `beq` branch at 0x9ce550 targets 0x9ceaac, is taken when a1(?) == at(=((entry(0xb87228) << 0x2) + a0)+262128), and falls through when a1(?) != at(=((entry(0xb87228) << 0x2) + a0)+262128).
  The `bne` branch at 0x9ce57c targets 0x9ce52c, is taken when a1(?) != at(=((entry(0xb87228) << 0x2) + a0)+262128), and falls through when a1(?) == at(=((entry(0xb87228) << 0x2) + a0)+262128).
  The `beq` branch at 0x9ce598 targets 0x9ce8d0, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0x9ce5c8 targets 0x9cecdc and is always taken.
  The `beq` branch at 0x9ce5d0 targets 0x9ce714, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x9ce5ec targets 0x9ce60c, is taken when (a2(?) & 0x7) == 0, and falls through when (a2(?) & 0x7) != 0.
  The `bne` branch at 0x9ce604 targets 0x9ce5f4, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x9ce610 targets 0x9ce714, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x9ce618 targets 0x9cec80, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x9ce694 targets 0x9ce8c0, is taken when t3(?) == v0(?), and falls through when t3(?) != v0(?).
  The `bne` branch at 0x9ce6e0 targets 0x9ce650, is taken when t2(?) != v0(?), and falls through when t2(?) == v0(?).
  The `beq` branch at 0x9ce738 targets 0x9ce8d0, is taken when t9(?) == at(?), and falls through when t9(?) != at(?).
  The `beq` branch at 0x9ce76c targets 0x9ce79c, is taken when a0(?) == at(?), and falls through when a0(?) != at(?).
  The `beq` branch at 0x9ce7e4 targets 0x9ce5d0, is taken when s4(=a3) == 0, and falls through when s4(=a3) != 0.
  The `beq` branch at 0x9ce7ec targets 0x9ce8ac, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x9ce808 targets 0x9ce82c, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x9ce824 targets 0x9ce810, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x9ce838 targets 0x9ce8ac, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x9ce868 targets 0x9ce8a8, is taken when a2(?) == at(?), and falls through when a2(?) != at(?).
  The `bne` branch at 0x9ce898 targets 0x9ce840, is taken when a1(?) != at(?), and falls through when a1(?) == at(?).
  The `beq` branch at 0x9ce8a0 targets 0x9ce8ac and is always taken.
  The `beq` branch at 0x9ce8b4 targets 0x9ce720 and is always taken.
  The `beq` branch at 0x9ce8c8 targets 0x9ce6f4 and is always taken.
  The `beq` branch at 0x9ce99c targets 0x9ce9e8, is taken when s2(?) == at(?), and falls through when s2(?) != at(?).
  The `beq` branch at 0x9ce9b0 targets 0x9cea84, is taken when s6(?) >= a1(=[a0+32288]) (unsigned), and falls through when s6(?) < a1(=[a0+32288]) (unsigned).
  The `beq` branch at 0x9cea00 targets 0x9ce490, is taken when a0(?) == a4(?), and falls through when a0(?) != a4(?).
  The `beq` branch at 0x9cea48 targets 0x9ce94c, is taken when s2(?) == a5(?), and falls through when s2(?) != a5(?).
  The `bne` branch at 0x9cea5c targets 0x9ce91c, is taken when s6(?) < t0(=[a0+32288]) (unsigned), and falls through when s6(?) >= t0(=[a0+32288]) (unsigned).
  The `beq` branch at 0x9cea7c targets 0x9ce91c and is always taken.
  The `beq` branch at 0x9cea9c targets 0x9ce9b8 and is always taken.
  The `beq` branch at 0x9ceaa4 targets 0x9cda00 and is always taken.
  The `beq` branch at 0x9ceab0 targets 0x9ce58c and is always taken.
  The `beq` branch at 0x9ceac8 targets 0x9ceb88, is taken when t1(=[a0+32288]) == 0, and falls through when t1(=[a0+32288]) != 0.
  The `beq` branch at 0x9ceb20 targets 0x9ceb80, is taken when a7(?) >= s3(=entry(0xb87228)+8) (unsigned), and falls through when a7(?) < s3(=entry(0xb87228)+8) (unsigned).
  The `beq` branch at 0x9ceb28 targets 0x9cd9a4 and is always taken.
  The `beq` branch at 0x9ceb58 targets 0x9ce4a0 and is always taken.
  The `beq` branch at 0x9ceb74 targets 0x9cd8c4 and is always taken.
  The `beq` branch at 0x9ceb80 targets 0x9cda00 and is always taken.
  The `beq` branch at 0x9ceb94 targets 0x9ce310 and is always taken.
  The `beq` branch at 0x9cebb8 targets 0x9ce444 and is always taken.
  The `beq` branch at 0x9cebdc targets 0x9cdb38 and is always taken.
  The `beq` branch at 0x9cec00 targets 0x9ce090 and is always taken.
  The `beq` branch at 0x9cec48 targets 0x9cdd94 and is always taken.
  The `beq` branch at 0x9cec6c targets 0x9ce590 and is always taken.
  The `beq` branch at 0x9cecc0 targets 0x9ce714 and is always taken.
  The `beq` branch at 0x9cecc8 targets 0x9cddac and is always taken.
  The `beq` branch at 0x9cecd4 targets 0x9ce1fc and is always taken.
  The `beq` branch at 0x9cecf0 targets 0x9ce744 and is always taken.
  The `beq` branch at 0x9cecfc targets 0x9cea0c and is always taken.
  The return at 0x9ce110 has v0 = ?.
  The return at 0x9ce914 has v0 = ?.
  The instructions from 0x9ce0b8 to 0x9ce0bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x9ce27c to 0x9ce27c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x9ce2f8 to 0x9ce2fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x9ce8bc to 0x9ce8bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x9ceab8 to 0x9ceabc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x9ceb7c to 0x9ceb7c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x9cec74 to 0x9cec7c are not reached by any path from the entry, and their branches are not listed.

- `__deTriangleStrip2SL` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x9ced40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x9ced40-0x9d0268 (5416 bytes).
  It occupies 5416 bytes.
  The `lw` at 0x9ced4c loads 4 bytes from a0 (arg0 at entry) +0x35af0.
  The `lwc1` at 0x9ced50 loads 4 bytes from a5 (arg5 at entry) +0x8.
  The `lwc1` at 0x9ced54 loads 4 bytes from a5 (arg5 at entry) +0x4.
  The `lwc1` at 0x9ced58 loads 4 bytes from a5 (arg5 at entry) +0x0.
  The `lw` at 0x9ceda8 loads 4 bytes from a0 (arg0 at entry) +0x9e4.
  The `lw` at 0x9cedc8 loads 4 bytes from a0 (arg0 at entry) +0x35a70.
  The `lwc1` at 0x9cede8 loads 4 bytes from [a0+219760] +0x18.
  The `lwc1` at 0x9cedec loads 4 bytes from [a0+219760] +0x8.
  The `lwc1` at 0x9cedf0 loads 4 bytes from [a0+219760] +0x28.
  2 such `lwc1` accesses load 4 bytes from a5 (arg5 at entry) +0x10, including `lwc1` at 0x9cee58, `lwc1` at 0x9cf96c.
  2 such `lwc1` accesses load 4 bytes from a5 (arg5 at entry) +0xc, including `lwc1` at 0x9cee5c, `lwc1` at 0x9cf970.
  2 such `lwc1` accesses load 4 bytes from a5 (arg5 at entry) +0x14, including `lwc1` at 0x9cee60, `lwc1` at 0x9cf974.
  9 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7e20, including `lw` at 0x9cee90, `lw` at 0x9ceef4, `lw` at 0x9cf730.
  13 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x7e1c, including `lw` at 0x9ceeac, `lw` at 0x9cef1c, `lw` at 0x9cf198.
  4 such `sw` accesses store 4 bytes to [a0+32284] +0x0, including `sw` at 0x9ceed4, `sw` at 0x9cf838, `sw` at 0x9cf9f0.
  149 such `sw` accesses store 4 bytes to ?, including `sw` at 0x9cef3c, `sw` at 0x9cf074, `sw` at 0x9cf090.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d5c, including `lw` at 0x9cef40, `lw` at 0x9cefb8, `lw` at 0x9cf62c.
  3 such `lw` accesses load 4 bytes from table(0xb87228) +0x0, including `lw` at 0x9cef50, `lw` at 0x9cf854, `lw` at 0x9d0064.
  7 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d58, including `lw` at 0x9cef58, `lw` at 0x9cefbc, `lw` at 0x9cf4f8.
  The `lw` at 0x9cef84 loads 4 bytes from a0 (arg0 at entry) +0x46d64.
  3 such `sw` accesses store 4 bytes to [a0+290136] +0x4, including `sw` at 0x9cf030, `sw` at 0x9cf508, `sw` at 0x9cfa2c.
  3 such `sw` accesses store 4 bytes to [a0+290136] +0x0, including `sw` at 0x9cf03c, `sw` at 0x9cf500, `sw` at 0x9cfa30.
  75 such `lw` accesses load 4 bytes from ?, including `lw` at 0x9cf068, `lw` at 0x9cf08c, `lw` at 0x9cf094.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x48074, including `lw` at 0x9cf1ac, `lw` at 0x9cf1ec, `lw` at 0x9cfcc0.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x48074, including `sw` at 0x9cf1e0, `sw` at 0x9cfcf4.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x607c, including `lw` at 0x9cf3d0, `lw` at 0x9cfd30.
  2 such `lw` accesses load 4 bytes from [a0+24700] +0x14, including `lw` at 0x9cf3e0, `lw` at 0x9cfd44.
  3 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x46d58, including `sw` at 0x9cf4c4, `sw` at 0x9cf69c, `sw` at 0x9cfe7c.
  The `lh` at 0x9cf524 loads 2 bytes from ?.
  16 such `lwc1` accesses load 4 bytes from ?, including `lwc1` at 0x9cf6f8, `lwc1` at 0x9cf6fc, `lwc1` at 0x9cf700.
  The `lwc1` at 0x9cf8ec loads 4 bytes from [a0+219760] +0x12c.
  The `lwc1` at 0x9cf8f0 loads 4 bytes from [a0+219760] +0x128.
  The `lwc1` at 0x9cf8f4 loads 4 bytes from [a0+219760] +0x130.
  The `lwc1` at 0x9cf908 loads 4 bytes from a6 (arg6 at entry) +0x0.
  The `lwc1` at 0x9cf988 loads 4 bytes from a6 (arg6 at entry) +0x4.
  The `jalr` at 0x9cef98 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=0x40000.
  The `bgezall` at 0x9cefac calls (unnamed) [0x9c9a80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x9cf4d4 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x9cf4e4 calls (unnamed) [0x9c9a80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x9cf7dc calls __glATIExpandBreakIndexBufferSize [0x5900c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=0xffffffff80000000.
  The `jalr` at 0x9cf7f4 calls __glATIExpandBreakIndexBufferSize [0x5900c0] with a0=a0 at entry (arg0), a1=0xffffffff80000000, a2=?, a3=?.
  The `jalr` at 0x9cf894 calls __glATIExpandBreakIndexBufferSize [0x5900c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x9cf8b4 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=0x40000.
  The `bgezall` at 0x9cf8c4 calls (unnamed) [0x9c9a80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x9cffd4 calls __glATIExpandBreakIndexBufferSize [0x5900c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a5=0xffffffff80000000.
  The `jalr` at 0x9cfff4 calls __glATIExpandBreakIndexBufferSize [0x5900c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x9d0094 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=0x40000.
  The `bgezall` at 0x9d00a4 calls (unnamed) [0x9c9a80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jalr` at 0x9d00c8 calls __glATIExpandBreakIndexBufferSize [0x5900c0] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?, a7=0x2.
  The `jalr` at 0x9d010c calls __glATIExpandBreakIndexBufferSize [0x5900c0] with a0=a0 at entry (arg0), a1=?, a2=a2 at entry (arg2), a3=?, a5=a2-3, a6=a6+4, a7=0x2.
  The `beq` branch at 0x9cede0 targets 0x9cf8ec, is taken when at(=[a0+219888]) == 0, and falls through when at(=[a0+219888]) != 0.
  The `beq` branch at 0x9cee14 targets 0x9cf810, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x9cee50 targets 0x9ceee4, is taken when (a0(=a2-3) & 0x1) == 0, and falls through when (a0(=a2-3) & 0x1) != 0.
  The `beq` branch at 0x9cee88 targets 0x9ceed8, is taken when s2(?) == t8(?), and falls through when s2(?) != t8(?).
  The `beq` branch at 0x9ceea0 targets 0x9d00c0, is taken when 0 >= t0(=[a0+32288]) (unsigned), and falls through when 0 < t0(=[a0+32288]) (unsigned).
  The `bne` branch at 0x9ceee8 targets 0x9d0234, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `beq` branch at 0x9cef0c targets 0x9cf890, is taken when s6(?) >= t3(=[a0+32288]) (unsigned), and falls through when s6(?) < t3(=[a0+32288]) (unsigned).
  The `beq` branch at 0x9cef78 targets 0x9cefd4, is taken when t0(?) >= s1(?) (unsigned), and falls through when t0(?) < s1(?) (unsigned).
  The `beq` branch at 0x9cef90 targets 0x9cf8a4, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x9cf00c targets 0x9cfa18, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x9cf020 targets 0x9cf8ac, is taken when ra(?) < t9(=entry(0xb87228)+8) (unsigned), and falls through when ra(?) >= t9(=entry(0xb87228)+8) (unsigned).
  The `beq` branch at 0x9cf038 targets 0x9cf114, is taken when at(=entry(0xb87228)) == 0, and falls through when at(=entry(0xb87228)) != 0.
  The `beq` branch at 0x9cf058 targets 0x9cf078, is taken when (at(=entry(0xb87228)) & 0x3) == 0, and falls through when (at(=entry(0xb87228)) & 0x3) != 0.
  The `bne` branch at 0x9cf070 targets 0x9cf060, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x9cf07c targets 0x9cf114, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x9cf084 targets 0x9d0124, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `beq` branch at 0x9cf0d4 targets 0x9cf804, is taken when a1(?) == at(=((entry(0xb87228) << 0x2) + a0)+262128), and falls through when a1(?) != at(=((entry(0xb87228) << 0x2) + a0)+262128).
  The `bne` branch at 0x9cf100 targets 0x9cf0b0, is taken when a1(?) != at(=((entry(0xb87228) << 0x2) + a0)+262128), and falls through when a1(?) == at(=((entry(0xb87228) << 0x2) + a0)+262128).
  The `beq` branch at 0x9cf128 targets 0x9cf660, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x9cf178 targets 0x9cf194 and is always taken.
  The `beq` branch at 0x9cf18c targets 0x9cf660, is taken when at(?) == v0(?), and falls through when at(?) != v0(?).
  The `beq` branch at 0x9cf1c8 targets 0x9cf208, is taken when a5(?) == v1(?), and falls through when a5(?) != v1(?).
  The `bne` branch at 0x9cf218 targets 0x9d022c, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0x9cf220 targets 0x9cf180 and is always taken.
  The `beq` branch at 0x9cf228 targets 0x9cf370, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x9cf248 targets 0x9cf268, is taken when (a2(?) & 0x7) == 0, and falls through when (a2(?) & 0x7) != 0.
  The `bne` branch at 0x9cf260 targets 0x9cf250, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x9cf26c targets 0x9cf370, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x9cf274 targets 0x9d016c, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x9cf2f0 targets 0x9cf644, is taken when t3(?) == v0(?), and falls through when t3(?) != v0(?).
  The `bne` branch at 0x9cf33c targets 0x9cf2ac, is taken when t2(?) != v0(?), and falls through when t2(?) == v0(?).
  The `beq` branch at 0x9cf384 targets 0x9cf180, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0x9cf394 targets 0x9cf180, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `bne` branch at 0x9cf39c targets 0x9cf4c0, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `beq` branch at 0x9cf3b0 targets 0x9cf3bc, is taken when s0(?) >= s3(?) (unsigned), and falls through when s0(?) < s3(?) (unsigned).
  The `beq` branch at 0x9cf3f8 targets 0x9cf228, is taken when s5(=a3) == 0, and falls through when s5(=a3) != 0.
  The `beq` branch at 0x9cf400 targets 0x9cf4a8, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x9cf410 targets 0x9cf434, is taken when (a2(?) & 0x3) == 0, and falls through when (a2(?) & 0x3) != 0.
  The `bne` branch at 0x9cf42c targets 0x9cf418, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `beq` branch at 0x9cf43c targets 0x9cf4a8, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x9cf46c targets 0x9cf4b8, is taken when a2(?) == at(?), and falls through when a2(?) != at(?).
  The `bne` branch at 0x9cf49c targets 0x9cf444, is taken when a1(?) != at(?), and falls through when a1(?) == at(?).
  The `beq` branch at 0x9cf4b0 targets 0x9cf380 and is always taken.
  The `beq` branch at 0x9cf4b8 targets 0x9cf4a8 and is always taken.
  The `bne` branch at 0x9cf504 targets 0x9cf554, is taken when s5(=a3) != 0, and falls through when s5(=a3) == 0.
  The `beq` branch at 0x9cf510 targets 0x9cf550, is taken when t8(=a4) == 0, and falls through when t8(=a4) != 0.
  The `bne` branch at 0x9cf548 targets 0x9cf520, is taken when a0(?) != s8(=((a4 << 0x2) + a0)+262144), and falls through when a0(?) == s8(=((a4 << 0x2) + a0)+262144).
  The `beq` branch at 0x9cf560 targets 0x9cf624, is taken when t0(=entry(0xb87228)) == 0, and falls through when t0(=entry(0xb87228)) != 0.
  The `beq` branch at 0x9cf56c targets 0x9cf588, is taken when (t0(=entry(0xb87228)) & 0x3) == 0, and falls through when (t0(=entry(0xb87228)) & 0x3) != 0.
  The `bne` branch at 0x9cf580 targets 0x9cf570, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x9cf58c targets 0x9cf624, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x9cf594 targets 0x9d0148, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `beq` branch at 0x9cf5e4 targets 0x9cf654, is taken when a1(?) == at(=((entry(0xb87228) << 0x2) + a0)+262128), and falls through when a1(?) != at(=((entry(0xb87228) << 0x2) + a0)+262128).
  The `bne` branch at 0x9cf610 targets 0x9cf5c0, is taken when a1(?) != at(=((entry(0xb87228) << 0x2) + a0)+262128), and falls through when a1(?) == at(=((entry(0xb87228) << 0x2) + a0)+262128).
  The `beq` branch at 0x9cf63c targets 0x9cf3a0 and is always taken.
  The `beq` branch at 0x9cf64c targets 0x9cf350 and is always taken.
  The `beq` branch at 0x9cf658 targets 0x9cf620 and is always taken.
  The `beq` branch at 0x9cf6f0 targets 0x9ceef0, is taken when s3(?) == v1(?), and falls through when s3(?) != v1(?).
  The `beq` branch at 0x9cf728 targets 0x9cf778, is taken when s2(?) == a0(?), and falls through when s2(?) != a0(?).
  The `beq` branch at 0x9cf740 targets 0x9cf7ec, is taken when s6(?) >= a3(=[a0+32288]) (unsigned), and falls through when s6(?) < a3(=[a0+32288]) (unsigned).
  The `beq` branch at 0x9cf7b8 targets 0x9cf6dc, is taken when s2(?) == a5(?), and falls through when s2(?) != a5(?).
  The `bne` branch at 0x9cf7cc targets 0x9cf6ac, is taken when s6(?) < t1(=[a0+32288]) (unsigned), and falls through when s6(?) >= t1(=[a0+32288]) (unsigned).
  The `beq` branch at 0x9cf7e4 targets 0x9cf6ac and is always taken.
  The `beq` branch at 0x9cf7fc targets 0x9cf748 and is always taken.
  The `beq` branch at 0x9cf808 targets 0x9cf110 and is always taken.
  The `beq` branch at 0x9cf818 targets 0x9cf880, is taken when t2(=[a0+32288]) == 0, and falls through when t2(=[a0+32288]) != 0.
  The `beq` branch at 0x9cf86c targets 0x9d0008, is taken when t0(?) >= s1(=entry(0xb87228)+8) (unsigned), and falls through when t0(?) < s1(=entry(0xb87228)+8) (unsigned).
  The `beq` branch at 0x9cf874 targets 0x9cef80 and is always taken.
  The `beq` branch at 0x9cf89c targets 0x9cef14 and is always taken.
  The `beq` branch at 0x9cf8a4 targets 0x9cefd4 and is always taken.
  The `beq` branch at 0x9cf8e4 targets 0x9cf024 and is always taken.
  The `beq` branch at 0x9cf924 targets 0x9d001c, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x9cf964 targets 0x9cfa04, is taken when (a5(=a2-3) & 0x1) == 0, and falls through when (a5(=a2-3) & 0x1) != 0.
  The `beq` branch at 0x9cf9a4 targets 0x9cf9f4, is taken when s2(?) == t8(?), and falls through when s2(?) != t8(?).
  The `beq` branch at 0x9cf9bc targets 0x9d0100, is taken when 0 >= t0(=[a0+32288]) (unsigned), and falls through when 0 < t0(=[a0+32288]) (unsigned).
  The `bne` branch at 0x9cfa08 targets 0x9d025c, is taken when t2(?) != 0, and falls through when t2(?) == 0.
  The `beq` branch at 0x9cfa10 targets 0x9ceef4 and is always taken.
  The `bne` branch at 0x9cfa1c targets 0x9d008c, is taken when t0(?) < s1(?) (unsigned), and falls through when t0(?) >= s1(?) (unsigned).
  The `beq` branch at 0x9cfa34 targets 0x9cfb10, is taken when s1(=entry(0xb87228)) == 0, and falls through when s1(=entry(0xb87228)) != 0.
  The `beq` branch at 0x9cfa54 targets 0x9cfa74, is taken when (a3(=entry(0xb87228)) & 0x3) == 0, and falls through when (a3(=entry(0xb87228)) & 0x3) != 0.
  The `bne` branch at 0x9cfa6c targets 0x9cfa5c, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x9cfa78 targets 0x9cfb10, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x9cfa80 targets 0x9d01c0, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x9cfad0 targets 0x9d0010, is taken when a1(?) == at(=((entry(0xb87228) << 0x2) + a0)+262128), and falls through when a1(?) != at(=((entry(0xb87228) << 0x2) + a0)+262128).
  The `bne` branch at 0x9cfafc targets 0x9cfaac, is taken when a1(?) != at(=((entry(0xb87228) << 0x2) + a0)+262128), and falls through when a1(?) == at(=((entry(0xb87228) << 0x2) + a0)+262128).
  The `beq` branch at 0x9cfb18 targets 0x9cfe40, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x9cfb48 targets 0x9d0240 and is always taken.
  The `beq` branch at 0x9cfb50 targets 0x9cfc84, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x9cfb5c targets 0x9cfb7c, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x9cfb74 targets 0x9cfb64, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x9cfb80 targets 0x9cfc84, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bne` branch at 0x9cfb88 targets 0x9d01e4, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x9cfc04 targets 0x9cfe24, is taken when t3(?) == v0(?), and falls through when t3(?) != v0(?).
  The `bne` branch at 0x9cfc50 targets 0x9cfbc0, is taken when t2(?) != v0(?), and falls through when t2(?) == v0(?).
  The `beq` branch at 0x9cfca8 targets 0x9cfe40, is taken when t9(?) == at(?), and falls through when t9(?) != at(?).
  The `beq` branch at 0x9cfcdc targets 0x9cfd0c, is taken when a0(?) == at(?), and falls through when a0(?) != at(?).
  The `beq` branch at 0x9cfd5c targets 0x9cfb50, is taken when s5(=a3) == 0, and falls through when s5(=a3) != 0.
  The `beq` branch at 0x9cfd64 targets 0x9cfe0c, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x9cfd78 targets 0x9cfd9c, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `bne` branch at 0x9cfd94 targets 0x9cfd80, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x9cfda0 targets 0x9cfe0c, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x9cfdd0 targets 0x9cfe1c, is taken when a2(?) == at(?), and falls through when a2(?) != at(?).
  The `bne` branch at 0x9cfe00 targets 0x9cfda8, is taken when a1(?) != at(?), and falls through when a1(?) == at(?).
  The `beq` branch at 0x9cfe14 targets 0x9cfc90 and is always taken.
  The `beq` branch at 0x9cfe1c targets 0x9cfe0c and is always taken.
  The `beq` branch at 0x9cfe2c targets 0x9cfc64 and is always taken.
  The `beq` branch at 0x9cff04 targets 0x9cff50, is taken when s2(?) == at(?), and falls through when s2(?) != at(?).
  The `beq` branch at 0x9cff18 targets 0x9cffe8, is taken when s6(?) >= a1(=[a0+32288]) (unsigned), and falls through when s6(?) < a1(=[a0+32288]) (unsigned).
  The `beq` branch at 0x9cff68 targets 0x9cfa10, is taken when s3(?) == a3(?), and falls through when s3(?) != a3(?).
  The `beq` branch at 0x9cffa8 targets 0x9cfebc, is taken when s2(?) == a4(?), and falls through when s2(?) != a4(?).
  The `bne` branch at 0x9cffc0 targets 0x9cfe8c, is taken when s6(?) < t0(=[a0+32288]) (unsigned), and falls through when s6(?) >= t0(=[a0+32288]) (unsigned).
  The `beq` branch at 0x9cffe0 targets 0x9cfe8c and is always taken.
  The `beq` branch at 0x9d0000 targets 0x9cff20 and is always taken.
  The `beq` branch at 0x9d0008 targets 0x9cefd4 and is always taken.
  The `beq` branch at 0x9d0014 targets 0x9cfb0c and is always taken.
  The `beq` branch at 0x9d0024 targets 0x9d00e4, is taken when t1(=[a0+32288]) == 0, and falls through when t1(=[a0+32288]) != 0.
  The `beq` branch at 0x9d007c targets 0x9d00dc, is taken when t0(?) >= s1(=entry(0xb87228)+8) (unsigned), and falls through when t0(?) < s1(=entry(0xb87228)+8) (unsigned).
  The `beq` branch at 0x9d0084 targets 0x9cef80 and is always taken.
  The `beq` branch at 0x9d00b8 targets 0x9cfa20 and is always taken.
  The `beq` branch at 0x9d00d4 targets 0x9ceea8 and is always taken.
  The `beq` branch at 0x9d00dc targets 0x9cefd4 and is always taken.
  The `beq` branch at 0x9d00f0 targets 0x9cf890 and is always taken.
  The `beq` branch at 0x9d011c targets 0x9cf9c4 and is always taken.
  The `beq` branch at 0x9d0140 targets 0x9cf114 and is always taken.
  The `beq` branch at 0x9d0164 targets 0x9cf624 and is always taken.
  The `beq` branch at 0x9d01ac targets 0x9cf370 and is always taken.
  The `beq` branch at 0x9d01dc targets 0x9cfb10 and is always taken.
  The `beq` branch at 0x9d0224 targets 0x9cfc84 and is always taken.
  The `beq` branch at 0x9d022c targets 0x9cf39c and is always taken.
  The `beq` branch at 0x9d0238 targets 0x9cf6fc and is always taken.
  The `beq` branch at 0x9d0254 targets 0x9cfcb4 and is always taken.
  The `beq` branch at 0x9d0260 targets 0x9cff74 and is always taken.
  The return at 0x9cf6a4 has v0 = ?.
  The return at 0x9cfe84 has v0 = ?.
  The instructions from 0x9cf87c to 0x9cf87c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x9cfe34 to 0x9cfe3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x9d00f8 to 0x9d00fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x9d01b4 to 0x9d01bc are not reached by any path from the entry, and their branches are not listed.

- `RenderNonFillModeTriangle` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x9d7d80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0x9d7d80-0x9d811c (924 bytes).
  It occupies 924 bytes.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x50, including `lw` at 0x9d7d84, `lw` at 0x9d7ed0.
  3 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x50, including `lw` at 0x9d7da0, `lw` at 0x9d7f10, `lw` at 0x9d800c.
  The `lw` at 0x9d7db4 loads 4 bytes from a0 (arg0 at entry) +0x351a0.
  The `lw` at 0x9d7db8 loads 4 bytes from a0 (arg0 at entry) +0x3518c.
  The `lw` at 0x9d7dd8 loads 4 bytes from a0 (arg0 at entry) +0x392a8.
  The `lw` at 0x9d7df4 loads 4 bytes from table(0xb85c20) +0x0.
  The `lw` at 0x9d7e00 loads 4 bytes from ([a0+234152] + ([a0+217504] << 0x2)) +0x0.
  5 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x50, including `lw` at 0x9d7e10, `lw` at 0x9d7f48, `lw` at 0x9d8048.
  5 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d58, including `lw` at 0x9d7e30, `lw` at 0x9d7e70, `lw` at 0x9d7eac.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d5c, including `lw` at 0x9d7e34, `lw` at 0x9d7e74, `lw` at 0x9d80dc.
  The `sw` at 0x9d7ea8 stores 4 bytes to [a0+290136] +0x0.
  The `sw` at 0x9d7eb8 stores 4 bytes to [a0+290136] +0x4.
  The `sw` at 0x9d7ec8 stores 4 bytes to a0 (arg0 at entry) +0x46d58.
  The `lw` at 0x9d7ecc loads 4 bytes from a0 (arg0 at entry) +0x36a28.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x54, including `lw` at 0x9d7ef0, `lw` at 0x9d7f8c.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x54, including `lw` at 0x9d7f04, `lw` at 0x9d7f24.
  2 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x54, including `lw` at 0x9d7f38, `lw` at 0x9d7f60.
  6 such `lw` accesses load 4 bytes from [a0+217484] +0x54, including `lw` at 0x9d7ff0, `lw` at 0x9d8008, `lw` at 0x9d802c.
  The `jalr` at 0x9d7e68 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x9d7ef4 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[a1+84], a3=[a0+290136]+8, a4=(a4 | (one of 0x2, 0x4, 0x6 << 0x10)), a5=[a0+290136], a6=(one of 0x2, 0x4, 0x6 << 0x10).
  The `jalr` at 0x9d7f08 calls (unknown callee) with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=[a2+84], a3=?.
  The `jalr` at 0x9d7f28 calls (unknown callee) with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=[a2+84], a3=?.
  The `jalr` at 0x9d7f40 calls (unknown callee) with a0=a0 at entry (arg0), a1=a3 at entry (arg3), a2=[a3+84], a3=?.
  The `jalr` at 0x9d7f64 calls (unknown callee) with a0=a0 at entry (arg0), a1=a3 at entry (arg3), a2=[a3+84], a3=?.
  Calls (unknown callee) via register with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[a1+84], a3=? (`jr` at 0x9d7f98).
  The `jalr` at 0x9d7fec calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[[a0+217484]+84], a3=[a0+290136]+8, a4=(a4 | (one of 0x2, 0x4, 0x6 << 0x10)), a5=[a0+290136], a6=(one of 0x2, 0x4, 0x6 << 0x10).
  The `jalr` at 0x9d8004 calls (unknown callee) with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=[[a0+217484]+84], a3=?.
  The `jalr` at 0x9d8028 calls (unknown callee) with a0=a0 at entry (arg0), a1=a2 at entry (arg2), a2=[[a0+217484]+84], a3=?.
  The `jalr` at 0x9d8040 calls (unknown callee) with a0=a0 at entry (arg0), a1=a3 at entry (arg3), a2=[[a0+217484]+84], a3=?.
  The `jalr` at 0x9d8068 calls (unknown callee) with a0=a0 at entry (arg0), a1=a3 at entry (arg3), a2=[[a0+217484]+84], a3=?.
  Calls (unknown callee) via register with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[[a0+217484]+84], a3=? (`jr` at 0x9d80a0).
  The `beq` branch at 0x9d7dfc targets 0x9d7fc8, is taken when (at(=[a1+80]) & 0x1000) == 0, and falls through when (at(=[a1+80]) & 0x1000) != 0.
  The `beq` branch at 0x9d7e04 targets 0x9d80a8, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x9d7e18 targets 0x9d7e24, is taken when (v0(=[a3+80]) & 0x1000) == 0, and falls through when (v0(=[a3+80]) & 0x1000) != 0.
  The `beq` branch at 0x9d7e24 targets 0x9d7fa4, is taken when s2(=one of 0x2, 0x4, 0x6) == 0, and falls through when s2(=one of 0x2, 0x4, 0x6) != 0.
  The `beq` branch at 0x9d7e54 targets 0x9d7e94, is taken when v1(?) >= s3(?) (unsigned), and falls through when v1(?) < s3(?) (unsigned).
  The `bne` branch at 0x9d7e84 targets 0x9d7e68, is taken when a1(?) < s3(?) (unsigned), and falls through when a1(?) >= s3(?) (unsigned).
  The `bgez` branch at 0x9d7edc targets 0x9d7fd8, is taken when a2(=([a0+223784] << 0x2f)) >= 0 (signed), and falls through when a2(=([a0+223784] << 0x2f)) < 0 (signed).
  The `beq` branch at 0x9d7ee4 targets 0x9d7f10, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x9d7f18 targets 0x9d7f48, is taken when (t0(=[a2+80]) & 0x1000) == 0, and falls through when (t0(=[a2+80]) & 0x1000) != 0.
  The `beq` branch at 0x9d7f50 targets 0x9d7fa0, is taken when (t1(=[a3+80]) & 0x1000) == 0, and falls through when (t1(=[a3+80]) & 0x1000) != 0.
  The `beq` branch at 0x9d7fc8 targets 0x9d80c0, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x9d7fd0 targets 0x9d7e10 and is always taken.
  The `beq` branch at 0x9d7fd8 targets 0x9d800c, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x9d8014 targets 0x9d8048, is taken when (a3(=[a2+80]) & 0x1000) == 0, and falls through when (a3(=[a2+80]) & 0x1000) != 0.
  The `beq` branch at 0x9d8050 targets 0x9d7fa0, is taken when (a3(=[a3+80]) & 0x1000) == 0, and falls through when (a3(=[a3+80]) & 0x1000) != 0.
  The `beq` branch at 0x9d80b0 targets 0x9d80d8, is taken when (a3(=[a3+80]) & 0x1000) == 0, and falls through when (a3(=[a3+80]) & 0x1000) != 0.
  The `beq` branch at 0x9d80b8 targets 0x9d7e24 and is always taken.
  The `beq` branch at 0x9d80c8 targets 0x9d7fa0, is taken when (a4(=[a3+80]) & 0x1000) == 0, and falls through when (a4(=[a3+80]) & 0x1000) != 0.
  The `beq` branch at 0x9d80d0 targets 0x9d7e24 and is always taken.
  The `beq` branch at 0x9d80f4 targets 0x9d8110, is taken when a5(?) >= a2(=(entry(0xb85c20) + entry(0xb85c20))+2) (unsigned), and falls through when a5(?) < a2(=(entry(0xb85c20) + entry(0xb85c20))+2) (unsigned).
  The `beq` branch at 0x9d8108 targets 0x9d7e5c and is always taken.
  The `beq` branch at 0x9d8114 targets 0x9d7e90 and is always taken.
  The return at 0x9d7fc0 has v0 = ?.
  The indirect jump at 0x9d7f98 uses a jump table whose successors are unresolved.
  The indirect jump at 0x9d80a0 uses a jump table whose successors are unresolved.

- `calcMixedTexGenEyeLinear` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0xa069c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0xa069c0-0xa06bd8 (536 bytes).
  It occupies 536 bytes.
  The `lwc1` at 0xa069c4 loads 4 bytes from a2 (arg2 at entry) +0x8.
  The `lw` at 0xa069cc loads 4 bytes from a0 (arg0 at entry) +0x35a70.
  The `lwc1` at 0xa069d0 loads 4 bytes from a2 (arg2 at entry) +0xc.
  The `lwc1` at 0xa069d4 loads 4 bytes from [a0+219760] +0x24.
  The `lwc1` at 0xa069d8 loads 4 bytes from [a0+219760] +0x14.
  The `lwc1` at 0xa069dc loads 4 bytes from [a0+219760] +0x38.
  The `lwc1` at 0xa069e0 loads 4 bytes from [a0+219760] +0x3c.
  The `lwc1` at 0xa069e4 loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `lwc1` at 0xa069e8 loads 4 bytes from [a0+219760] +0x34.
  The `lwc1` at 0xa069f4 loads 4 bytes from [a0+219760] +0x4.
  The `lwc1` at 0xa069fc loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lwc1` at 0xa06a04 loads 4 bytes from [a0+219760] +0x1c.
  The `lwc1` at 0xa06a0c loads 4 bytes from [a0+219760] +0xc.
  The `lwc1` at 0xa06a14 loads 4 bytes from [a0+219760] +0x18.
  The `lwc1` at 0xa06a18 loads 4 bytes from [a0+219760] +0x8.
  The `lwc1` at 0xa06a20 loads 4 bytes from [a0+219760] +0x2c.
  The `lwc1` at 0xa06a28 loads 4 bytes from [a0+219760] +0x28.
  The `lwc1` at 0xa06a3c loads 4 bytes from [a0+219760] +0x0.
  The `lwc1` at 0xa06a40 loads 4 bytes from [a0+219760] +0x10.
  The `lwc1` at 0xa06a54 loads 4 bytes from [a0+219760] +0x20.
  The `lwc1` at 0xa06a60 loads 4 bytes from [a0+219760] +0x30.
  The `lwc1` at 0xa06abc loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xf80.
  The `lwc1` at 0xa06ac0 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xf88.
  The `lwc1` at 0xa06ac4 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xf84.
  The `lwc1` at 0xa06ac8 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xf7c.
  The `swc1` at 0xa06ae8 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lwc1` at 0xa06b04 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfa4.
  The `lwc1` at 0xa06b08 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfac.
  The `lwc1` at 0xa06b0c loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfa8.
  The `lwc1` at 0xa06b10 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfa0.
  The `swc1` at 0xa06b30 stores 4 bytes to a1 (arg1 at entry) +0x4.
  The `lwc1` at 0xa06b4c loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfc8.
  The `lwc1` at 0xa06b50 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfd0.
  The `lwc1` at 0xa06b54 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfcc.
  The `lwc1` at 0xa06b58 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfc4.
  The `swc1` at 0xa06b78 stores 4 bytes to a1 (arg1 at entry) +0x8.
  The `lwc1` at 0xa06b9c loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfec.
  The `lwc1` at 0xa06ba0 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xff4.
  The `lwc1` at 0xa06ba4 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xff0.
  The `lwc1` at 0xa06ba8 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfe8.
  The `swc1` at 0xa06bcc stores 4 bytes to a1 (arg1 at entry) +0xc.
  The `beq` branch at 0xa06ab4 targets 0xa06aec, is taken when (a5 & 0x1) == 0, and falls through when (a5 & 0x1) != 0.
  The `beq` branch at 0xa06aec targets 0xa06b34, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0xa06b34 targets 0xa06b7c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0xa06b80 targets 0xa06bd0, is taken when (a5 & 0x8) == 0, and falls through when (a5 & 0x8) != 0.
  The return at 0xa06bc8 has v0 = ?.
  The return at 0xa06bd0 has v0 = ?.

- `calcMixedTexGenObjLinear` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0xa06c00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0xa06c00-0xa06d8c (396 bytes).
  It occupies 396 bytes.
  4 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0xc, including `lwc1` at 0xa06c10, `lwc1` at 0xa06c70, `lwc1` at 0xa06cd0.
  4 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0x4, including `lwc1` at 0xa06c18, `lwc1` at 0xa06c78, `lwc1` at 0xa06cd8.
  4 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0x8, including `lwc1` at 0xa06c20, `lwc1` at 0xa06c80, `lwc1` at 0xa06ce0.
  4 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0x0, including `lwc1` at 0xa06c28, `lwc1` at 0xa06c88, `lwc1` at 0xa06ce8.
  The `lwc1` at 0xa06c30 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xf8c.
  The `lwc1` at 0xa06c34 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xf94.
  The `lwc1` at 0xa06c38 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xf90.
  The `lwc1` at 0xa06c40 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xf98.
  The `swc1` at 0xa06c5c stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `lwc1` at 0xa06c90 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfb0.
  The `lwc1` at 0xa06c94 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfb8.
  The `lwc1` at 0xa06c98 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfb4.
  The `lwc1` at 0xa06ca0 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfbc.
  The `swc1` at 0xa06cbc stores 4 bytes to a1 (arg1 at entry) +0x4.
  The `lwc1` at 0xa06cf0 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfd4.
  The `lwc1` at 0xa06cf4 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfdc.
  The `lwc1` at 0xa06cf8 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfd8.
  The `lwc1` at 0xa06d00 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xfe0.
  The `swc1` at 0xa06d1c stores 4 bytes to a1 (arg1 at entry) +0x8.
  The `lwc1` at 0xa06d50 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xff8.
  The `lwc1` at 0xa06d54 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0x1000.
  The `lwc1` at 0xa06d58 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0xffc.
  The `lwc1` at 0xa06d60 loads 4 bytes from (a0 + (((((a4 << 0x2) + a4) << 0x5) + a4) << 0x3)) +0x1004.
  The `swc1` at 0xa06d80 stores 4 bytes to a1 (arg1 at entry) +0xc.
  The `beq` branch at 0xa06c08 targets 0xa06c60, is taken when (a5 & 0x1) == 0, and falls through when (a5 & 0x1) != 0.
  The `beq` branch at 0xa06c68 targets 0xa06cc0, is taken when (a5 & 0x2) == 0, and falls through when (a5 & 0x2) != 0.
  The `beq` branch at 0xa06cc8 targets 0xa06d20, is taken when (a5 & 0x4) == 0, and falls through when (a5 & 0x4) != 0.
  The `beq` branch at 0xa06d24 targets 0xa06d84, is taken when (a5 & 0x8) == 0, and falls through when (a5 & 0x8) != 0.
  The return at 0xa06d7c has v0 = ?.
  The return at 0xa06d84 has v0 = ?.

- `calcMixedTexGenSphereMap` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0xa06dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0xa06dc0-0xa07064 (676 bytes).
  It occupies 676 bytes.
  The `lw` at 0xa06e00 loads 4 bytes from a0 (arg0 at entry) +0x35a70.
  3 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0xc, including `lwc1` at 0xa06e1c, `lwc1` at 0xa06e5c, `lwc1` at 0xa06e9c.
  The `lwc1` at 0xa06e20 loads 4 bytes from [a0+219760] +0x10.
  The `lwc1` at 0xa06e24 loads 4 bytes from [a0+219760] +0x20.
  The `lwc1` at 0xa06e28 loads 4 bytes from [a0+219760] +0x0.
  3 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0x0, including `lwc1` at 0xa06e2c, `lwc1` at 0xa06e6c, `lwc1` at 0xa06eac.
  3 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0x8, including `lwc1` at 0xa06e30, `lwc1` at 0xa06e70, `lwc1` at 0xa06eb0.
  3 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0x4, including `lwc1` at 0xa06e34, `lwc1` at 0xa06e74, `lwc1` at 0xa06eb4.
  The `lwc1` at 0xa06e3c loads 4 bytes from [a0+219760] +0x30.
  The `lwc1` at 0xa06e60 loads 4 bytes from [a0+219760] +0x14.
  The `lwc1` at 0xa06e64 loads 4 bytes from [a0+219760] +0x24.
  The `lwc1` at 0xa06e68 loads 4 bytes from [a0+219760] +0x4.
  The `lwc1` at 0xa06e7c loads 4 bytes from [a0+219760] +0x34.
  The `lwc1` at 0xa06ea0 loads 4 bytes from [a0+219760] +0x18.
  The `lwc1` at 0xa06ea4 loads 4 bytes from [a0+219760] +0x28.
  The `lwc1` at 0xa06ea8 loads 4 bytes from [a0+219760] +0x8.
  The `lwc1` at 0xa06ebc loads 4 bytes from [a0+219760] +0x38.
  The `lw` at 0xa06edc loads 4 bytes from [a0+219760] +0xb0.
  The `lw` at 0xa06ef0 loads 4 bytes from a0 (arg0 at entry) +0xdec.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc158, including `lw` at 0xa06f0c, `lw` at 0xa06f1c, `lw` at 0xa07060.
  The `swc1` at 0xa06fe8 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `swc1` at 0xa07004 stores 4 bytes to a1 (arg1 at entry) +0x4.
  The `lwc1` at 0xa07050 loads 4 bytes from [a0+219760] +0x124.
  The `jalr` at 0xa06e14 calls __glComputeEyeInObject [0x54af80] with a0=a0 at entry (arg0), a1=[a0+219760], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xa06ee8 calls (unknown callee) with a0=sp-96, a1=a3 at entry (arg3), a2=[a0+219760]+96, a3=?; fp f14=[[a0+219760]+48], f15=[[a0+219760]+32], f16=[[a0+219760]+16].
  The `jalr` at 0xa06f14 calls (unknown callee) with a0=sp-96, a1=sp-96, a2=?, a3=?.
  The `jalr` at 0xa06f24 calls (unknown callee) with a0=sp-80, a1=sp-112, a2=?, a3=?.
  The `jalr` at 0xa07054 calls __glScaleVector [0x5b1b00] with a0=sp-96, a1=?, a2=sp-96, a3=?; fp f13=[[a0+219760]+292].
  The `beq` branch at 0xa06f04 targets 0xa07040, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bc1f` branch at 0xa06fcc targets 0xa06fd8, is taken when not (f4 == f15 (c.eq.s at 0xa06fb8)), and falls through when f4 == f15 (c.eq.s at 0xa06fb8).
  The `beq` branch at 0xa06fd8 targets 0xa06fec, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0xa06fec targets 0xa07014, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0xa07044 targets 0xa06f1c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0xa0705c targets 0xa06f20 and is always taken.
  The return at 0xa0700c has v0 = ret(?).
  The return at 0xa07034 has v0 = ret(?).
  The instructions from 0xa0703c to 0xa0703c are not reached by any path from the entry, and their branches are not listed.

- `calcMixedTexGenNormalMap` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0xa07080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0xa07080-0xa071b0 (304 bytes).
  It occupies 304 bytes.
  The `lw` at 0xa070b8 loads 4 bytes from a0 (arg0 at entry) +0x35a70.
  The `lw` at 0xa070d4 loads 4 bytes from [a0+219760] +0xb0.
  The `lw` at 0xa070e8 loads 4 bytes from a0 (arg0 at entry) +0xdec.
  The `lw` at 0xa07104 loads 4 bytes from a0 (arg0 at entry) +0xc158.
  The `swc1` at 0xa07128 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `swc1` at 0xa07134 stores 4 bytes to a1 (arg1 at entry) +0x4.
  The `swc1` at 0xa07158 stores 4 bytes to a1 (arg1 at entry) +0x8.
  The `lwc1` at 0xa0719c loads 4 bytes from [a0+219760] +0x124.
  The `jalr` at 0xa070cc calls __glComputeEyeInObject [0x54af80] with a0=a0 at entry (arg0), a1=[a0+219760], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xa070e0 calls (unknown callee) with a0=sp-80, a1=a3 at entry (arg3), a2=[a0+219760]+96, a3=?.
  The `jalr` at 0xa0710c calls (unknown callee) with a0=sp-80, a1=sp-80, a2=?, a3=?.
  The `jalr` at 0xa071a0 calls __glScaleVector [0x5b1b00] with a0=sp-80, a1=?, a2=sp-80, a3=?; fp f13=[[a0+219760]+292].
  The `beq` branch at 0xa070f4 targets 0xa0718c, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0xa07120 targets 0xa0712c, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `beq` branch at 0xa0712c targets 0xa07138, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0xa07138 targets 0xa07168, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0xa07190 targets 0xa07114, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0xa071a8 targets 0xa07118 and is always taken.
  The return at 0xa07160 has v0 = ?.
  The return at 0xa07184 has v0 = ?.

- `calcMixedTexGenReflectMap` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0xa071c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0xa071c0-0xa07430 (624 bytes).
  It occupies 624 bytes.
  The `lw` at 0xa07200 loads 4 bytes from a0 (arg0 at entry) +0x35a70.
  3 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0xc, including `lwc1` at 0xa0721c, `lwc1` at 0xa0725c, `lwc1` at 0xa0729c.
  The `lwc1` at 0xa07220 loads 4 bytes from [a0+219760] +0x10.
  The `lwc1` at 0xa07224 loads 4 bytes from [a0+219760] +0x20.
  The `lwc1` at 0xa07228 loads 4 bytes from [a0+219760] +0x0.
  3 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0x0, including `lwc1` at 0xa0722c, `lwc1` at 0xa0726c, `lwc1` at 0xa072ac.
  3 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0x8, including `lwc1` at 0xa07230, `lwc1` at 0xa07270, `lwc1` at 0xa072b0.
  3 such `lwc1` accesses load 4 bytes from a2 (arg2 at entry) +0x4, including `lwc1` at 0xa07234, `lwc1` at 0xa07274, `lwc1` at 0xa072b4.
  The `lwc1` at 0xa0723c loads 4 bytes from [a0+219760] +0x30.
  The `lwc1` at 0xa07260 loads 4 bytes from [a0+219760] +0x14.
  The `lwc1` at 0xa07264 loads 4 bytes from [a0+219760] +0x24.
  The `lwc1` at 0xa07268 loads 4 bytes from [a0+219760] +0x4.
  The `lwc1` at 0xa0727c loads 4 bytes from [a0+219760] +0x34.
  The `lwc1` at 0xa072a0 loads 4 bytes from [a0+219760] +0x18.
  The `lwc1` at 0xa072a4 loads 4 bytes from [a0+219760] +0x28.
  The `lwc1` at 0xa072a8 loads 4 bytes from [a0+219760] +0x8.
  The `lwc1` at 0xa072bc loads 4 bytes from [a0+219760] +0x38.
  The `lw` at 0xa072dc loads 4 bytes from [a0+219760] +0xb0.
  The `lw` at 0xa072f0 loads 4 bytes from a0 (arg0 at entry) +0xdec.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0xc158, including `lw` at 0xa0730c, `lw` at 0xa0731c, `lw` at 0xa0742c.
  The `swc1` at 0xa07380 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `swc1` at 0xa0739c stores 4 bytes to a1 (arg1 at entry) +0x4.
  The `swc1` at 0xa073d4 stores 4 bytes to a1 (arg1 at entry) +0x8.
  The `lwc1` at 0xa0741c loads 4 bytes from [a0+219760] +0x124.
  The `jalr` at 0xa07214 calls __glComputeEyeInObject [0x54af80] with a0=a0 at entry (arg0), a1=[a0+219760], a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xa072e8 calls (unknown callee) with a0=sp-96, a1=a3 at entry (arg3), a2=[a0+219760]+96, a3=?; fp f14=[[a0+219760]+48], f15=[[a0+219760]+32], f16=[[a0+219760]+16].
  The `jalr` at 0xa07314 calls (unknown callee) with a0=sp-96, a1=sp-96, a2=?, a3=?.
  The `jalr` at 0xa07324 calls (unknown callee) with a0=sp-80, a1=sp-112, a2=?, a3=?.
  The `jalr` at 0xa07420 calls __glScaleVector [0x5b1b00] with a0=sp-96, a1=?, a2=sp-96, a3=?; fp f13=[[a0+219760]+292].
  The `beq` branch at 0xa07304 targets 0xa0740c, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0xa07370 targets 0xa07384, is taken when (s7(=a5) & 0x1) == 0, and falls through when (s7(=a5) & 0x1) != 0.
  The `beq` branch at 0xa07384 targets 0xa073a0, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0xa073a4 targets 0xa073e4, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0xa07410 targets 0xa0731c, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0xa07428 targets 0xa07320 and is always taken.
  The return at 0xa073dc has v0 = ret(?).
  The return at 0xa07404 has v0 = ret(?).

- `calcMixedTexGenNoOp` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0xa07440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0xa07440-0xa07448 (8 bytes).
  It occupies 8 bytes.
  The return at 0xa07440 has v0 = ?.

- `UpdateMatrix4x4` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0xa07940 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0xa07940-0xa07ab0 (368 bytes).
  It occupies 368 bytes.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d58, including `lw` at 0xa07990, `lw` at 0xa079b8, `lw` at 0xa079e0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x46d5c, including `lw` at 0xa07994, `lw` at 0xa079bc.
  The `sw` at 0xa079dc stores 4 bytes to [a0+290136] +0x0.
  The `sw` at 0xa079ec stores 4 bytes to [a0+290136] +0x4.
  The `sw` at 0xa079fc stores 4 bytes to [a0+290136] +0x8.
  The `lwc1` at 0xa07a04 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `swc1` at 0xa07a08 stores 4 bytes to [a0+290136] +0xc.
  The `lwc1` at 0xa07a0c loads 4 bytes from a1 (arg1 at entry) +0x10.
  The `swc1` at 0xa07a10 stores 4 bytes to [a0+290136] +0x10.
  The `lwc1` at 0xa07a14 loads 4 bytes from a1 (arg1 at entry) +0x20.
  The `swc1` at 0xa07a18 stores 4 bytes to [a0+290136] +0x14.
  The `lwc1` at 0xa07a1c loads 4 bytes from a1 (arg1 at entry) +0x30.
  The `swc1` at 0xa07a20 stores 4 bytes to [a0+290136] +0x18.
  The `lwc1` at 0xa07a24 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `swc1` at 0xa07a28 stores 4 bytes to [a0+290136] +0x1c.
  The `lwc1` at 0xa07a2c loads 4 bytes from a1 (arg1 at entry) +0x14.
  The `swc1` at 0xa07a30 stores 4 bytes to [a0+290136] +0x20.
  The `lwc1` at 0xa07a34 loads 4 bytes from a1 (arg1 at entry) +0x24.
  The `swc1` at 0xa07a38 stores 4 bytes to [a0+290136] +0x24.
  The `lwc1` at 0xa07a3c loads 4 bytes from a1 (arg1 at entry) +0x34.
  The `swc1` at 0xa07a40 stores 4 bytes to [a0+290136] +0x28.
  The `lwc1` at 0xa07a44 loads 4 bytes from a1 (arg1 at entry) +0x8.
  The `swc1` at 0xa07a48 stores 4 bytes to [a0+290136] +0x2c.
  The `lwc1` at 0xa07a4c loads 4 bytes from a1 (arg1 at entry) +0x18.
  The `swc1` at 0xa07a50 stores 4 bytes to [a0+290136] +0x30.
  The `lwc1` at 0xa07a54 loads 4 bytes from a1 (arg1 at entry) +0x28.
  The `swc1` at 0xa07a58 stores 4 bytes to [a0+290136] +0x34.
  The `lwc1` at 0xa07a5c loads 4 bytes from a1 (arg1 at entry) +0x38.
  The `swc1` at 0xa07a60 stores 4 bytes to [a0+290136] +0x38.
  The `lwc1` at 0xa07a64 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `swc1` at 0xa07a68 stores 4 bytes to [a0+290136] +0x3c.
  The `lwc1` at 0xa07a6c loads 4 bytes from a1 (arg1 at entry) +0x1c.
  The `swc1` at 0xa07a70 stores 4 bytes to [a0+290136] +0x40.
  The `lwc1` at 0xa07a74 loads 4 bytes from a1 (arg1 at entry) +0x2c.
  The `swc1` at 0xa07a7c stores 4 bytes to [a0+290136] +0x44.
  The `lwc1` at 0xa07a80 loads 4 bytes from a1 (arg1 at entry) +0x3c.
  The `swc1` at 0xa07a88 stores 4 bytes to [a0+290136] +0x48.
  The `sw` at 0xa07a98 stores 4 bytes to a0 (arg0 at entry) +0x46d58.
  The `jalr` at 0xa079b0 calls __glATISubmitBM [0xab9b80] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0xa07968 targets 0xa07aa8, is taken when a2 == at(=0x2e), and falls through when a2 != at(=0x2e).
  The `beq` branch at 0xa07974 targets 0xa07984, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0xa0797c targets 0xa07988 and is always taken.
  The `beq` branch at 0xa079a4 targets 0xa079d8, is taken when a1(?) >= 0x13 (unsigned), and falls through when a1(?) < 0x13 (unsigned).
  The `bne` branch at 0xa079cc targets 0xa079b0, is taken when a2(?) < 0x13 (unsigned), and falls through when a2(?) >= 0x13 (unsigned).
  The `beq` branch at 0xa07aa8 targets 0xa0798c and is always taken.
  The return at 0xa07aa0 has v0 = one of ?, ret(__glATISubmitBM).

- `CreateTexgenMatrix` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0xa07ac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0xa07ac0-0xa07d78 (696 bytes).
  It occupies 696 bytes.
  The `lw` at 0xa07af0 loads 4 bytes from (a0 + (a2 << 0x2)) +0xdf4.
  The `lw` at 0xa07b00 loads 4 bytes from (a0 + (a2 << 0x2)) +0x35b38.
  The `lw` at 0xa07b18 loads 4 bytes from (a0 + (a2 << 0x2)) +0x474b4.
  The `lw` at 0xa07b50 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xf78.
  The `lw` at 0xa07b88 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xf9c.
  The `lw` at 0xa07bb8 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfc0.
  The `lw` at 0xa07bec loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfe4.
  The `lwc1` at 0xa07c30 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfe8.
  The `lwc1` at 0xa07c38 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfec.
  The `lwc1` at 0xa07c40 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xff0.
  The `lwc1` at 0xa07c48 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xff4.
  The `lwc1` at 0xa07c58 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xf8c.
  The `lwc1` at 0xa07c60 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xf90.
  The `lwc1` at 0xa07c68 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xf94.
  The `lwc1` at 0xa07c70 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xf98.
  The `lwc1` at 0xa07c80 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfb0.
  The `lwc1` at 0xa07c88 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfb4.
  The `lwc1` at 0xa07c90 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfb8.
  The `lwc1` at 0xa07c98 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfbc.
  The `lwc1` at 0xa07ca8 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfd4.
  The `lwc1` at 0xa07cb0 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfd8.
  The `lwc1` at 0xa07cb8 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfdc.
  The `lwc1` at 0xa07cc0 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfe0.
  The `lwc1` at 0xa07cd0 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xf7c.
  The `lwc1` at 0xa07cd8 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xf80.
  The `lwc1` at 0xa07ce0 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xf84.
  The `lwc1` at 0xa07ce8 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xf88.
  The `lwc1` at 0xa07d00 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfa0.
  The `lwc1` at 0xa07d08 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfa4.
  The `lwc1` at 0xa07d10 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfa8.
  The `lwc1` at 0xa07d18 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfac.
  The `lwc1` at 0xa07d28 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfc4.
  The `lwc1` at 0xa07d30 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfc8.
  The `lwc1` at 0xa07d38 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfcc.
  The `lwc1` at 0xa07d40 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xfd0.
  The `lwc1` at 0xa07d50 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xff8.
  The `lwc1` at 0xa07d58 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0xffc.
  The `lwc1` at 0xa07d60 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0x1000.
  The `lwc1` at 0xa07d68 loads 4 bytes from (a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3)) +0x1004.
  The `jalr` at 0xa07b08 calls __glMakeIdentity [0x5b1780] with a0=sp-160, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xa07c18 calls __glMultMatrix [0x5b1800] with a0=a1 at entry (arg1), a1=sp-160, a2=?, a3=?.
  The `bne` branch at 0xa07b1c targets 0xa07c00, is taken when t8(=[(a0 + (a2 << 0x2))+292020]) != 0, and falls through when t8(=[(a0 + (a2 << 0x2))+292020]) == 0.
  The `beq` branch at 0xa07b34 targets 0xa07b64, is taken when (s1(=[(a0 + (a2 << 0x2))+3572]) & 0x4) == 0, and falls through when (s1(=[(a0 + (a2 << 0x2))+3572]) & 0x4) != 0.
  The `beq` branch at 0xa07b58 targets 0xa07c58, is taken when a7(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+3960]) == ra(=0x2401), and falls through when a7(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+3960]) != ra(=0x2401).
  The `beq` branch at 0xa07b60 targets 0xa07cd0, is taken when a7(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+3960]) == a5(=0x2400), and falls through when a7(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+3960]) != a5(=0x2400).
  The `beq` branch at 0xa07b68 targets 0xa07b98, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0xa07b8c targets 0xa07c80, is taken when a5(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+3996]) == a7(=0x2401), and falls through when a5(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+3996]) != a7(=0x2401).
  The `beq` branch at 0xa07b94 targets 0xa07d00, is taken when a5(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+3996]) == a6(=0x2400), and falls through when a5(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+3996]) != a6(=0x2400).
  The `beq` branch at 0xa07b9c targets 0xa07bc8, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0xa07bbc targets 0xa07ca8, is taken when a5(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+4032]) == a6(=0x2401), and falls through when a5(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+4032]) != a6(=0x2401).
  The `beq` branch at 0xa07bc4 targets 0xa07d28, is taken when a5(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+4032]) == a4(=0x2400), and falls through when a5(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+4032]) != a4(=0x2400).
  The `beq` branch at 0xa07bd0 targets 0xa07c00, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0xa07bf4 targets 0xa07d50, is taken when a5(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+4068]) == a6(=0x2401), and falls through when a5(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+4068]) != a6(=0x2401).
  The `beq` branch at 0xa07bfc targets 0xa07c30, is taken when a5(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+4068]) == a4(=0x2400), and falls through when a5(=[(a0 + (((((a2 << 0x2) + a2) << 0x5) + a2) << 0x3))+4068]) != a4(=0x2400).
  The `beq` branch at 0xa07c50 targets 0xa07c00 and is always taken.
  The `beq` branch at 0xa07c78 targets 0xa07b64 and is always taken.
  The `beq` branch at 0xa07ca0 targets 0xa07b98 and is always taken.
  The `beq` branch at 0xa07cc8 targets 0xa07bc8 and is always taken.
  The `beq` branch at 0xa07cf0 targets 0xa07b64 and is always taken.
  The `beq` branch at 0xa07d20 targets 0xa07b98 and is always taken.
  The `beq` branch at 0xa07d48 targets 0xa07bc8 and is always taken.
  The `beq` branch at 0xa07d70 targets 0xa07c00 and is always taken.
  The return at 0xa07c28 has v0 = ret(__glMultMatrix).
  The instructions from 0xa07cf8 to 0xa07cfc are not reached by any path from the entry, and their branches are not listed.

- `SetEMBMRotMatrix` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0xa29880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`.
  Range: 0xa29880-0xa299e8 (360 bytes).
  It occupies 360 bytes.
  The `lwc1` at 0xa2989c loads 4 bytes from (a0 + (((((a1 << 0x2) + a1) << 0x5) + a1) << 0x3)) +0x1470.
  The `lw` at 0xa298c8 loads 4 bytes from a0 (arg0 at entry) +0x47320.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x47320, including `sw` at 0xa298e8, `sw` at 0xa29934.
  The `lwc1` at 0xa298ec loads 4 bytes from (a0 + (((((a1 << 0x2) + a1) << 0x5) + a1) << 0x3)) +0x1474.
  The `lwc1` at 0xa29938 loads 4 bytes from (a0 + (((((a1 << 0x2) + a1) << 0x5) + a1) << 0x3)) +0x1478.
  The `lw` at 0xa29940 loads 4 bytes from a0 (arg0 at entry) +0x47324.
  3 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x47324, including `sw` at 0xa2997c, `sw` at 0xa299c8, `sw` at 0xa299e4.
  The `lwc1` at 0xa29980 loads 4 bytes from (a0 + (((((a1 << 0x2) + a1) << 0x5) + a1) << 0x3)) +0x147c.
  The `bc1f` branch at 0xa298a8 targets 0xa298b4, is taken when not (f6(=0x40fffc00) < f7(=[(a0 + (((((a1 << 0x2) + a1) << 0x5) + a1) << 0x3))+5232]) (c.lt.s at 0xa298a0)), and falls through when f6(=0x40fffc00) < f7(=[(a0 + (((((a1 << 0x2) + a1) << 0x5) + a1) << 0x3))+5232]) (c.lt.s at 0xa298a0).
  The `bc1f` branch at 0xa298c4 targets 0xa298d0, is taken when not (f7 < f4(=0xffffffffc1000000) (c.lt.s at 0xa298b4)), and falls through when f7 < f4(=0xffffffffc1000000) (c.lt.s at 0xa298b4).
  The `bc1f` branch at 0xa298f8 targets 0xa29904, is taken when not (f6 < f8(=[(a0 + (((((a1 << 0x2) + a1) << 0x5) + a1) << 0x3))+5236]) (c.lt.s at 0xa298f0)), and falls through when f6 < f8(=[(a0 + (((((a1 << 0x2) + a1) << 0x5) + a1) << 0x3))+5236]) (c.lt.s at 0xa298f0).
  The `bc1f` branch at 0xa2990c targets 0xa29918, is taken when not (f8 < f4(=0xffffffffc1000000) (c.lt.s at 0xa29904)), and falls through when f8 < f4(=0xffffffffc1000000) (c.lt.s at 0xa29904).
  The `bc1f` branch at 0xa29944 targets 0xa29950, is taken when not (f6 < f7(=[(a0 + (((((a1 << 0x2) + a1) << 0x5) + a1) << 0x3))+5240]) (c.lt.s at 0xa2993c)), and falls through when f6 < f7(=[(a0 + (((((a1 << 0x2) + a1) << 0x5) + a1) << 0x3))+5240]) (c.lt.s at 0xa2993c).
  The `bc1f` branch at 0xa29958 targets 0xa29968, is taken when not (f7 < f4(=0xffffffffc1000000) (c.lt.s at 0xa29950)), and falls through when f7 < f4(=0xffffffffc1000000) (c.lt.s at 0xa29950).
  The `bc1f` branch at 0xa2998c targets 0xa29998, is taken when not (f6 < f8(=[(a0 + (((((a1 << 0x2) + a1) << 0x5) + a1) << 0x3))+5244]) (c.lt.s at 0xa29984)), and falls through when f6 < f8(=[(a0 + (((((a1 << 0x2) + a1) << 0x5) + a1) << 0x3))+5244]) (c.lt.s at 0xa29984).
  The `bc1f` branch at 0xa299a0 targets 0xa299cc, is taken when not (f8 < f4(=0xffffffffc1000000) (c.lt.s at 0xa29998)), and falls through when f8 < f4(=0xffffffffc1000000) (c.lt.s at 0xa29998).
  The return at 0xa299c4 has v0 = ?.
  The return at 0xa299e0 has v0 = ?.
