# Tier-2 routine readings, voyager batch 2

Role statements for the 25 routines in batch 2 of the tier-2 reading round. Each statement uses only the rendered facts (registers, calls, constants, branch targets). Every grade here is inferred: the renders show access patterns and constants, not the meaning of the data they touch.

- `firegl_DRMPoll` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5184f0
  **Inferred.** Walks a slot table, with the loop bound taken from [a0+40] and the shared counter at 0xc3eba0 (bne at 0x518520, beq at 0x518578). It claims a slot with an ll/sc pair on table(0x8) (ll at 0x51853c, sc at 0x51854c) and returns the claimed pointer at 0x51861c, or 0 at 0x518628. The name suggests a DRM poll on a completion slot, but the render does not show what the slots hold, so the role rests on the access pattern.
  Reviewed: 2026-11-12 (sonnet)

- `__glDoMultMatrix` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5aae80
  **Inferred.** Role (from name): applies a matrix to the state in the context at a0; the arithmetic is not shown. It tests bits of the flag word at [a0+58032] (0x80, 0x200 and 0x2000 at 0x5aaf28, 0x5aafb4 and 0x5aaf64) and makes three indirect calls at 0x5aaedc, 0x5aaef4 and 0x5ab0dc whose targets are not named. It writes context words at a0+0xe2b0, a0+0xe2b8 and a0+0xe2c0 and words at a0+0x50b90 and a0+0x50b98. The three callers at 0x5ab298, 0x5ab3b4 and 0x5ab4e4 (__glDoRotate, __glDoScale and __glDoTranslate) support the reading of a common matrix-apply step.
  Reviewed: 2026-11-12 (sonnet)

- `__glDoRotate` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab0f0
  **Inferred.** Role (from name): builds a rotation matrix and applies it; the matrix arithmetic is not shown. It calls an unnamed routine at 0x5ab148 with stack buffers sp-224 and sp-240, calls __rcis at 0x5ab15c, calls __glMakeIdentity [0x60cad0] at 0x5ab1a8 on the buffer at sp-208, and passes that buffer to __glDoMultMatrix at 0x5ab298 (bgezall, with a2 = 0x5a6aa0), returning its result. The branch at 0x5ab254 tests the FP condition code left by an earlier compare. The single-precision compare at 0x5ab260 (c.eq.s) feeds only the branch at 0x5ab268. Both branches go to 0x5ab278 when their condition is false. That may be a degenerate-axis check, but the compare pattern alone does not settle it.
  Reviewed: 2026-11-12 (sonnet)

- `__glDoScale` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab380
  **Inferred.** A short wrapper with no arithmetic of its own. It passes a stack matrix at sp-32, the constant 0x5ab2c0 in a2, a3 = -0x4d40 and a4 = 0x68d7f8 to __glDoMultMatrix (bgezall at 0x5ab3b4) along with the context pointer at a0, and returns its result. The facts do not show how the scale values reach the matrix or what a3 and a4 carry.
  Reviewed: 2026-11-12 (sonnet)

- `__glTranslateMatrix` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab3d0
  **Inferred.** Reads a three-float vector at a2+0x0, a2+0x4 and a2+0x8, combines it with the float words of the matrix at a1 (loads from a1+0x0 through a1+0x3c), and writes the four words at a1+0x30, a1+0x34, a1+0x38 and a1+0x3c. Those four words are where the translation part of a 4x4 matrix would sit. It also loads the word at a1+0x40; the branch at 0x5ab3d8 skips a store to a1+0x40 (0x5ab3e0) when that word is below 4 (unsigned) and falls into the store otherwise. The routine makes no calls.
  Reviewed: 2026-11-12 (sonnet)

- `__glDoTranslate` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab4b0
  **Inferred.** Like __glDoScale, it has no arithmetic of its own. It passes a stack matrix at sp-32 to __glDoMultMatrix (bgezall at 0x5ab4e4) with the context at a0 and the constant 0x5ab3d0 in a2. That constant is the entry of __glTranslateMatrix, so the routine may hand that function over as a callback. The render does not show how __glDoMultMatrix uses it.
  Reviewed: 2026-11-12 (sonnet)

- `__glComputeClipBox` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab500
  **Inferred.** Role (from name): works out a clip box from the context. After the indirect call at 0x5ab5dc (target not named) it stores four words at a0+0x3ee40, a0+0x3ee44, a0+0x3ee48 and a0+0x3ee4c (sw at 0x5ab5f4, 0x5ab604, 0x5ab628 and 0x5ab61c). Before that it loads context words at a0+0x616c through a0+0x6170 and a0+0x7618 and a0+0x761c and compares them with signed branches (0x5ab55c, 0x5ab564, 0x5ab584 and 0x5ab590). Reading the four stores as box extents rests on the name and the compare pattern.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm2` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab6a0
  **Inferred.** Transforms a two-float vector read from a1 (lwc1 at 0x5ab6a0 and 0x5ab6a4) by the 4x4 float matrix at a2 (loads from a2+0x0 through a2+0x3c) and writes four floats to a0+0x0 through a0+0xc. It has no branches. The render shows no load for the missing components, so the z and w inputs are implied by the code rather than loaded.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm3` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab730
  **Inferred.** Transforms a three-float vector from a1 (lwc1 at 0x5ab730, 0x5ab734 and 0x5ab738) by the matrix at a2 and writes four floats to a0 (swc1 from 0x5ab764). The render shows no load for the fourth input, so the w input is implied by the code rather than loaded.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm4` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab7f0
  **Inferred.** Transforms a four-float vector from a1 by the matrix at a2 and writes four floats to a0. It loads the constant at 0xc3f378 (lwc1 at 0x5ab800) and branches on the w component at a1+0xc against it (c.eq.s at 0x5ab824, bc1f at 0x5ab838 to 0x5ab8d0). At the two returns (0x5ab8c8 and 0x5ab964) v0 = 0x68d388, a constant the facts do not tie to a result. The branch looks like a test for w equal to 1.0, but the constant's value is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm4_PreMultiply` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab970
  **Inferred.** Transforms a four-float vector from a1 by the matrix at a2 and writes four floats to a0 (stores at 0x5ab9ac, 0x5ab9dc, 0x5aba0c and 0x5aba40). It has no branches or calls, and the output is written in the same order as __glXForm4. The name suggests the matrix is applied before a later multiply, but the render does not show that second step.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm2_W` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac260
  **Inferred.** Reads the same two-float input as __glXForm2 (loads from a1 at 0x5ac260 and 0x5ac264) but loads only nine matrix words from a2 (a2+0x0, +0x4, +0x8, +0x10, +0x14, +0x18, +0x30, +0x34 and +0x38), not the sixteen that __glXForm2 reads. It writes four words to a0 (swc1 at 0x5ac284, 0x5ac2a4, 0x5ac2d0 and 0x5ac2dc), makes one further load at 0x5ac2c8, and at the return at 0x5ac2d8 has v0 = 0x68c918, a constant the facts do not tie to a result. The "W" suffix suggests a variant that handles the w component differently, but the render does not show how, so the difference is not confirmed.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm3_W` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac2e0
  **Inferred.** Transforms a three-float vector from a1 (lwc1 at 0x5ac2e0, 0x5ac2e4 and 0x5ac2e8) by the matrix at a2 and writes four floats to a0 (swc1 from 0x5ac314). At the return at 0x5ac380 v0 = 0x68c898, a constant the facts do not tie to a result. Like __glXForm3, it has no load for the fourth input, and the "W" variant's difference is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm4_W` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac390
  **Inferred.** Transforms a four-float vector from a1 by the matrix at a2 and writes four floats to a0. It compares the w component at a1+0xc with the value at 0xc3f378 (c.eq.s at 0x5ac3c4) and branches on the result (bc1f at 0x5ac3d8 to 0x5ac448). At the two returns (0x5ac440 and 0x5ac4b0) v0 = 0x68c7e8, a constant the facts do not tie to a result. This has the same compare structure as __glXForm4; the constant's value, and so whether the test is for 1.0, is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm2_2DW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac4c0
  **Inferred.** Transforms a two-float vector from a1 (lwc1 at 0x5ac4c0 and 0x5ac4c4) by the matrix at a2 and writes four floats to a0 (swc1 at 0x5ac4e4). At the return at 0x5ac520 v0 = 0x68c6b8, a constant the facts do not tie to a result. The "2D" in the name suggests it skips the z and w outputs, but the render shows four stores, so that reading is not confirmed.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm3_2DW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac530
  **Inferred.** Transforms a three-float vector from a1 (lwc1 at 0x5ac530, 0x5ac534 and 0x5ac550) by the matrix at a2 and writes four floats to a0 (swc1 at 0x5ac558). At the return at 0x5ac5a0 v0 = 0x68c648, a constant the facts do not tie to a result. The rendered facts do not show whether the output is clipped to two components.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm4_2DW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac5b0
  **Inferred.** Transforms a four-float vector from a1 by the matrix at a2. It compares the w component at a1+0xc with the value at 0xc3f378 (c.eq.s at 0x5ac5dc) and branches on the result (bc1f at 0x5ac5ec to 0x5ac638). At the two returns (0x5ac630 and 0x5ac67c) v0 = 0x68c5c8, a constant the facts do not tie to a result. The w test matches __glXForm4 and __glXForm4_W, but the render does not show what the "2D" suffix changes.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm2_2DNRW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac690
  **Inferred.** Transforms a two-float vector from a1 (lwc1 at 0x5ac694 and 0x5ac6a0) by the matrix at a2 (loads from a2+0x0, a2+0x14, a2+0x30 and a2+0x34) and writes four floats to a0 (swc1 at 0x5ac6a8). It also loads the constant at 0xc3f378 (lwc1 at 0x5ac6c4). At the return at 0x5ac6d8 v0 = 0x68c4e8, a constant the facts do not tie to a result. The "NRW" suffix may mean a variant with no renormalization, but the render does not confirm it.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm3_2DNRW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac6e0
  **Inferred.** Transforms a three-float vector from a1 (lwc1 at 0x5ac6e4, 0x5ac6f0 and 0x5ac6f4) by the matrix at a2 (loads from a2+0x0, a2+0x14, a2+0x30 and a2+0x34) and writes four floats to a0 (swc1 at 0x5ac6fc). At the return at 0x5ac738 v0 = 0x68c498, a constant the facts do not tie to a result. The same "NRW" uncertainty as __glXForm2_2DNRW applies.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm4_2DNRW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac740
  **Inferred.** Transforms a four-float vector from a1 by the matrix at a2 and writes four floats to a0. It loads the constant at 0xc3f378 (lwc1 at 0x5ac750) and branches on the w component at a1+0xc against it (c.eq.s at 0x5ac760, bc1f at 0x5ac770 to 0x5ac7b0). At the two returns (0x5ac7a8 and 0x5ac7e8) v0 = 0x68c438, a constant the facts do not tie to a result. The w test follows the same pattern as __glXForm4_2DW, and the "NRW" suffix is not explained by the render.
  Reviewed: 2026-11-12 (sonnet)

- `__glGenericPickMvpMatrixProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac7f0
  **Inferred.** Role (from name): picks a set of matrix-processing functions by an index read from [a0+256624]. It calls __glPickMatrixType [0x5a6980] at 0x5ac848 with a0 = its own a1 argument, a1 taken from the context table at a0+256712 indexed by that value and a2 from [a0+256848], then makes two indirect calls at 0x5ac860 and 0x5ac86c whose targets are not named. It returns a call result (the facts do not place which call; the return is at 0x5ac88c). The callee's behavior is not in the render.
  Reviewed: 2026-11-12 (sonnet)

- `__glGenericPickMatrixProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac8a0
  **Inferred.** Selects three function-pointer words by the mode in [a1+64] (values 0 to 5, tested by beq at 0x5ac8b0, 0x5ac8bc, 0x5ac8c8, 0x5ac8d0, 0x5ac8dc and 0x5ac8e4; modes 3, 4 and 5 share one path). The chosen words are stored at a1+0x50, a1+0x58 and a1+0x60, loaded from the constant table at 0xc31fc8 through 0xc32050. A mode above 5 returns at 0x5ac8ec with no store. At most returns v0 = 0x68c2d8, and at the return at 0x5ac950, on the path for mode 1 (beq at 0x5ac8bc), v0 = 0x5ac260, the entry of __glXForm2_W; the facts do not tie either to a result. The mode-to-procedure mapping is inferred from the compare chain, not from a named table.
  Reviewed: 2026-11-12 (sonnet)

- `__glGenericPickInvTransposeProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac980
  **Inferred.** Uses the same mode switch on [a1+64] (values 0 to 5, beq at 0x5ac990, 0x5ac99c, 0x5ac9a8, 0x5ac9b0, 0x5ac9bc and 0x5ac9c4) to choose function-pointer words, which it stores at a1+0x58 and a1+0x60 from the constant table at 0xc31fd8 through 0xc32048. At every return v0 = 0x68c1f8, a constant the facts do not tie to a result. The name suggests the choice is for the inverse-transpose matrix path, but the render does not show what those words do.
  Reviewed: 2026-11-12 (sonnet)

- `__glGenericPickSpanProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ad340
  **Inferred.** A large selector that stores function-pointer words into the context through two advancing cursors that start at a0+0xe610 and a0+0xe688, and at fixed offsets a0+0xe700, a0+0xe704 and a0+0xe708. The number of slots written on any path is not shown. Its decisions come from flag bits in [a0+261036] (0x20, 0x100 and 0x1000 at 0x5ad388, 0x5ad5e8 and 0x5ad614), from the word at [a0+4088] compared with 0x302 through 0x308 (beq at 0x5ad588 through 0x5ad8e8), from [a0+4232] compared with 0x1102 (beq at 0x5ad808), and from [a0+4096]. One return, at 0x5ad9f4, returns the word at [a0+273740]; the returns at 0x5ad678, 0x5ad790 and 0x5ad994 have unplaced values. The name suggests it picks the span (scanline) routines, but the compare constants are not mapped to names in the render.
  Reviewed: 2026-11-12 (sonnet)

- `__glGenericPickPointProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ada00
  **Inferred.** Role (from name): selects point-drawing functions. It reads the mode in [a0+332], compared with 0x1c01 at 0x5ada98 and 0x1c02 at 0x5adaa4, flag bits in [a0+2696] (0x8 at 0x5adac4 and 0x1 at 0x5adb48), and the word at [a0+2700] (compared with zero at 0x5adb00). It stores function-pointer words at a0+0xe908, a0+0xe930, a0+0xe948, a0+0xe950 and a0+0xe958 and branches on double-precision compares at 0x5ada50 and 0x5ada60. At the returns at 0x5adb30 and 0x5adb9c v0 = __glSelectPoint (0x6e1c60), and at 0x5adb8c v0 = 0x68b178; the facts do not tie these to a result. The render does not confirm what the chosen functions draw.
  Reviewed: 2026-11-12 (sonnet)
