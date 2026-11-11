# Tier-2 routine readings, voyager batch 2

Role statements for the 25 routines in batch 2 of the tier-2 reading round. Each statement uses only the rendered facts (registers, calls, constants, branch targets). Every grade here is inferred: the renders show access patterns and constants, not the meaning of the data they touch.

- `firegl_DRMPoll` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5184f0
  **Inferred.** Walks a slot table, with the loop bound taken from [a0+40] and the shared counter at 0xc3eba0 (bne at 0x518520, beq at 0x518578). It claims a slot with an ll/sc pair on table(0x8) (ll at 0x51853c, sc at 0x51854c) and returns the claimed pointer at 0x51861c, or 0 at 0x518628. The name suggests a DRM poll on a completion slot, but the render does not show what the slots hold, so the role rests on the access pattern.

- `__glDoMultMatrix` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5aae80
  **Inferred.** Applies a matrix to the state in the context at a0. It tests bits of the flag word at [a0+58032] (0x80, 0x200 and 0x2000 at 0x5aaf28, 0x5aafb4 and 0x5aaf64) and makes three indirect calls at 0x5aaedc, 0x5aaef4 and 0x5ab0dc whose targets are not named. It writes context words at a0+0xe2b0, a0+0xe2b8 and a0+0xe2c0 and the indexed array at a0+0x50b90. The three callers at 0x5ab298, 0x5ab3b4 and 0x5ab4e4 (__glDoRotate, __glDoScale and __glDoTranslate) support the reading of a common matrix-apply step, but the arithmetic itself is not shown.

- `__glDoRotate` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab0f0
  **Inferred.** Builds a rotation matrix in the stack buffer at sp-208 and applies it through __glDoMultMatrix (bgezall at 0x5ab298, with a2 = 0x5a6aa0). It calls an unnamed routine at 0x5ab148 with stack buffers sp-224 and sp-240, calls __rcis at 0x5ab15c, and starts from an identity built by __glMakeIdentity [0x60cad0] at 0x5ab1a8. A single-precision compare at 0x5ab260 feeds branches at 0x5ab254 and 0x5ab268, both to 0x5ab278, on the angle or axis value. That may be a degenerate-axis check, but the compare pattern alone does not settle it.

- `__glDoScale` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab380
  **Inferred.** A short wrapper with no arithmetic of its own. It passes a stack matrix at sp-32 and the constant 0x5ab2c0 to __glDoMultMatrix (bgezall at 0x5ab3b4) along with the context pointer at a0, so the scale values are presumably built by the caller or by the constants in a3 and a4 (-0x4d40 and 0x68d7f8).

- `__glTranslateMatrix` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab3d0
  **Inferred.** Reads a three-float vector at a2+0x0, a2+0x4 and a2+0x8, combines it with the sixteen-float matrix at a1 (loads from a1+0x0 through a1+0x40), and writes the four words at a1+0x30, a1+0x34, a1+0x38 and a1+0x3c. Those four words are where the translation column of a 4x4 matrix would sit. The branch at 0x5ab3d8 on the word at a1+0x40 (below 4) picks between two paths, and the routine makes no calls.

- `__glDoTranslate` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab4b0
  **Inferred.** Like __glDoScale, it has no arithmetic of its own. It passes a stack matrix at sp-32 to __glDoMultMatrix (bgezall at 0x5ab4e4) with the context at a0 and the constant 0x5ab3d0 in a2. That constant is the entry of __glTranslateMatrix, so the routine may hand that function over as a callback. The render does not show how __glDoMultMatrix uses it.

- `__glComputeClipBox` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab500
  **Inferred.** Works out a bounding box from the context and stores four words at a0+0x3ee40, a0+0x3ee44, a0+0x3ee48 and a0+0x3ee4c (sw at 0x5ab5f4, 0x5ab604, 0x5ab628 and 0x5ab61c). Its inputs are the words at a0+0x616c through a0+0x6170 and a set of loop bounds, compared with signed branches at 0x5ab55c, 0x5ab584 and 0x5ab590. The indirect call at 0x5ab5dc has no named target. Reading the four stores as box extents rests on the name and the compare pattern.

- `__glXForm2` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab6a0
  **Inferred.** Transforms a two-float vector read from a1 (lwc1 at 0x5ab6a0 and 0x5ab6a4) by the 4x4 float matrix at a2 (loads from a2+0x0 through a2+0x3c) and writes four floats to a0+0x0 through a0+0xc. It has no branches. The render shows no load for the missing components, so the z and w inputs are probably constants.

- `__glXForm3` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab730
  **Inferred.** Transforms a three-float vector from a1 (lwc1 at 0x5ab730, 0x5ab734 and 0x5ab738) by the matrix at a2 and writes four floats to a0 (swc1 from 0x5ab764). The render shows no load for the fourth input, so it is probably a constant 1.0 supplied by the code.

- `__glXForm4` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab7f0
  **Inferred.** Transforms a four-float vector from a1 by the matrix at a2 and writes four floats to a0. It loads the constant at 0xc3f378 (lwc1 at 0x5ab800) and branches on the w component at a1+0xc against it (c.eq.s at 0x5ab824, bc1f at 0x5ab838 to 0x5ab8d0). The two exits return the address 0x68d388 at 0x5ab8c8 and 0x5ab964. The branch looks like a test for w equal to 1.0 that selects a path without a divide, but the constant's value is not shown.

- `__glXForm4_PreMultiply` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab970
  **Inferred.** Transforms a four-float vector from a1 by the matrix at a2 and writes four floats to a0 (stores at 0x5ab9ac, 0x5ab9dc, 0x5aba0c and 0x5aba40). It has no branches or calls, and the output is written in the same order as __glXForm4. The name suggests the matrix is applied before a later multiply, but the render does not show that second step.

- `__glXForm2_W` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac260
  **Inferred.** Uses the same two-float input and sixteen-float matrix as __glXForm2 (loads from a1 at 0x5ac260 and 0x5ac264, from a2 at 0x5ac26c and 0x5ac278) and writes four floats to a0. It returns the address 0x68c918 at 0x5ac2d8. The "W" suffix suggests a variant that handles the w component differently, but the render shows no separate w load, so the difference is not confirmed.

- `__glXForm3_W` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac2e0
  **Inferred.** Transforms a three-float vector from a1 (lwc1 at 0x5ac2e0, 0x5ac2e4 and 0x5ac2e8) by the matrix at a2 and writes four floats to a0 (swc1 from 0x5ac314). It returns the address 0x68c898 at 0x5ac380. Like __glXForm3, it has no load for the fourth input, and the "W" variant's difference is not shown.

- `__glXForm4_W` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac390
  **Inferred.** Transforms a four-float vector from a1 by the matrix at a2 and writes four floats to a0. It compares the w component at a1+0xc with the value at 0xc3f378 (c.eq.s at 0x5ac3c4) and branches on the result (bc1f at 0x5ac3d8 to 0x5ac448). The two exits return the address 0x68c7e8 at 0x5ac440 and 0x5ac4b0. This matches the w-equals-1.0 split seen in __glXForm4, though the constant's value is still not shown.

- `__glXForm2_2DW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac4c0
  **Inferred.** Transforms a two-float vector from a1 (lwc1 at 0x5ac4c0 and 0x5ac4c4) by the matrix at a2 and writes four floats to a0 (swc1 at 0x5ac4e4). It returns the address 0x68c6b8 at 0x5ac520. The "2D" in the name suggests it skips the z and w outputs, but the render shows four stores, so that reading is not confirmed.

- `__glXForm3_2DW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac530
  **Inferred.** Transforms a three-float vector from a1 (lwc1 at 0x5ac530, 0x5ac534 and 0x5ac550) by the matrix at a2 and writes four floats to a0 (swc1 at 0x5ac558). It returns the address 0x68c648 at 0x5ac5a0. The rendered facts do not show whether the output is clipped to two components.

- `__glXForm4_2DW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac5b0
  **Inferred.** Transforms a four-float vector from a1 by the matrix at a2. It compares the w component at a1+0xc with the value at 0xc3f378 (c.eq.s at 0x5ac5dc) and branches on the result (bc1f at 0x5ac5ec to 0x5ac638). The two exits return the address 0x68c5c8 at 0x5ac630 and 0x5ac67c. The w test matches __glXForm4 and __glXForm4_W, but the render does not show what the "2D" suffix changes.

- `__glXForm2_2DNRW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac690
  **Inferred.** Transforms a two-float vector from a1 (lwc1 at 0x5ac694 and 0x5ac6a0) by the matrix at a2 (loads from a2+0x0, a2+0x14, a2+0x30 and a2+0x34) and writes four floats to a0 (swc1 at 0x5ac6a8). It also loads the constant at 0xc3f378 (lwc1 at 0x5ac6c4). It returns the address 0x68c4e8 at 0x5ac6d8. The "NRW" suffix may mean a variant with no renormalization, but the render does not confirm it.

- `__glXForm3_2DNRW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac6e0
  **Inferred.** Transforms a three-float vector from a1 (lwc1 at 0x5ac6e4, 0x5ac6f0 and 0x5ac6f4) by the matrix at a2 (loads from a2+0x0, a2+0x14, a2+0x30 and a2+0x34) and writes four floats to a0 (swc1 at 0x5ac6fc). It returns the address 0x68c498 at 0x5ac738. The same "NRW" uncertainty as __glXForm2_2DNRW applies.

- `__glXForm4_2DNRW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac740
  **Inferred.** Transforms a four-float vector from a1 by the matrix at a2 and writes four floats to a0. It loads the constant at 0xc3f378 (lwc1 at 0x5ac750) and branches on the w component at a1+0xc against it (c.eq.s at 0x5ac760, bc1f at 0x5ac770 to 0x5ac7b0). The two exits return the address 0x68c438 at 0x5ac7a8 and 0x5ac7e8. The w test follows the same pattern as __glXForm4_2DW, and the "NRW" suffix is not explained by the render.

- `__glGenericPickMvpMatrixProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac7f0
  **Inferred.** Chooses a set of matrix-processing functions by an index read from [a0+256624]. It calls __glPickMatrixType [0x5a6980] at 0x5ac848 with a1 and a2 taken from context fields at a0+256712 and a0+256848, then makes two indirect calls at 0x5ac860 and 0x5ac86c whose targets are not named. It returns the value of the call at 0x5ac88c. The pick-by-type name fits this, but the callee's behavior is not in the render.

- `__glGenericPickMatrixProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac8a0
  **Inferred.** Selects six function-pointer words by the mode in [a1+64] (values 0 to 5, tested by beq at 0x5ac8b0, 0x5ac8bc, 0x5ac8c8, 0x5ac8d0, 0x5ac8dc and 0x5ac8e4). The chosen words are stored at a1+0x50, a1+0x58 and a1+0x60, loaded from the constant table at 0xc31fc8 through 0xc32050. Most exits return 0x68c2d8, and the return at 0x5ac950, on the path for mode 1 (beq at 0x5ac8bc), returns 0x5ac260, the entry of __glXForm2_W. The mode-to-procedure mapping is inferred from the compare chain, not from a named table.

- `__glGenericPickInvTransposeProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac980
  **Inferred.** Uses the same mode switch on [a1+64] (values 0 to 5, beq at 0x5ac990, 0x5ac99c, 0x5ac9a8, 0x5ac9b0, 0x5ac9bc and 0x5ac9c4) to choose function-pointer words, which it stores at a1+0x58 and a1+0x60 from the constant table at 0xc31fd8 through 0xc32048. Every exit returns 0x68c1f8. The name suggests the choice is for the inverse-transpose matrix path, but the render does not show what those words do.

- `__glGenericPickSpanProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ad340
  **Inferred.** A large selector that fills more than fifty function-pointer slots in the context, at a0+0xe610 through a0+0xe6a0 and a0+0xe708. Its decisions come from flag bits in [a0+261036] (0x20, 0x100 and 0x1000 at 0x5ad388, 0x5ad5e8 and 0x5ad614), from the word at [a0+4088] compared with 0x302 through 0x308 and 0x1102 (beq at 0x5ad588 through 0x5ad8e8, and 0x5ad808), and from [a0+4096]. It returns the word at [a0+273740] at 0x5ad9f4. The name suggests it picks the span (scanline) routines, but the compare constants are not mapped to names in the render.

- `__glGenericPickPointProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ada00
  **Inferred.** Selects point-drawing functions from the mode in [a0+332], compared with 0x1c01 at 0x5ada98 and 0x1c02 at 0x5adaa4, and from flag bits in [a0+2696] and [a0+2700] (tested at 0x5adac4, 0x5adb48 and 0x5adb00). It stores function-pointer words at a0+0xe908 through a0+0xe958 and branches on double-precision compares at 0x5ada50 and 0x5ada60. It returns 0x6e1c60 at 0x5adb30 and 0x5adb9c, and 0x68b178 at 0x5adb8c. The name fits a point-processing selector, but the render does not confirm what the chosen functions draw.
