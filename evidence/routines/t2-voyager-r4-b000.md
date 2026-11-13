# Routine readings, voyager round 4, batch 0

Role statements for the first 25 targets of the ranked list (offset 0). Each statement uses the rendered facts only: the instructions and offsets, the branches and their targets, the calls at each `jalr` or `bgezall`, and the return values. All entries are inferred. The render shows what each routine reads, writes and calls, not what its callers expect, and offsets into the context struct are not named.

- `__glDoMultMatrix` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5aae80
  **Inferred.** Works on a context struct passed in a0. It tests bits 0x80, 0x200 and 0x2000 of the word at a0+58032 (branches at 0x5aaf28, 0x5aafb4 and 0x5aaf64) and branches around blocks of 4-byte loads and stores at offsets in the same struct. It makes three indirect calls whose callee the render does not resolve: at 0x5aaedc and 0x5aaef4 near the entry, and at 0x5ab0dc, which is reached when the byte at a0+328 is zero (beq at 0x5aaf18). One return at 0x5ab034 yields the OR of the word at a0+58048 and a word at +20 from the pointer at a0+256616. The other return at 0x5ab058 yields the result of a call the render does not resolve.
  Reviewed: 2026-11-12 (sonnet)

- `__glDoScale` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab380
  **Inferred.** Calls `__glDoMultMatrix` at 0x5aae80 (call at 0x5ab3b4) with a0 passed through, a1 = sp-32, a2 = 0x5ab2c0, a3 = -0x4d40 and a4 = 0x68d7f8, and returns that callee's v0 (return at 0x5ab3c4). Role (from name): a scale operation done through the matrix routine; the facts show only the forwarding call.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm4` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab7f0
  **Inferred.** Reads floats at offsets +0x0 through +0x3c and writes four floats at +0x0, +0x4, +0x8 and +0xc; the render does not show the base registers except for the compare operand at a1+0xc. The float compare at 0x5ab824 tests the word at a1+0xc against the word at 0xc3f378 (`bc1f` at 0x5ab838), and each of the two paths stores the same four offsets. Both returns (0x5ab8c8 and 0x5ab964) set v0 to 0x68d388.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm2_W` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac260
  **Inferred.** Straight-line code with no branch and no call. It loads floats at offsets +0x0 and +0x4 first, then at offsets up to +0x38, stores floats at +0x0, +0x4, +0xc and +0x8, and returns 0x68c918 in v0 at 0x5ac2d8. The render does not show the base registers of the loads and stores. Role (from name): a two-component transform with a w term; the facts do not confirm it.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm3_W` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac2e0
  **Inferred.** Straight-line code with no calls. It loads floats at offsets +0x0, +0x4 and +0x8 and at offsets up to +0x38, stores floats at +0x0, +0x4, +0xc and +0x8, and returns 0x68c898 in v0 at 0x5ac380. The render does not show the base registers. Role (from name): a three-component transform with a w term; the facts do not confirm it.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm4_W` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac390
  **Inferred.** Compares the word at a1+0xc with the word at 0xc3f378 (`c.eq.s` at 0x5ac3c4, `bc1f` at 0x5ac3d8). Each of the two paths stores floats at +0x0, +0x4, +0xc and +0x8 (base register not shown) and returns 0x68c7e8 in v0 (returns at 0x5ac440 and 0x5ac4b0). Its structure matches `__glXForm4` at 0x5ab7f0, with a different return constant.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm2_2DW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac4c0
  **Inferred.** Straight-line code with no branch and no call. It loads floats at offsets +0x0 and +0x4 first, then at offsets up to +0x38, stores floats at +0x0, +0x4, +0xc and +0x8, and returns 0x68c6b8 in v0 at 0x5ac520. The render does not show the base registers or any constant loaded from an absolute address. Role (from name): a two-component 2D transform with a w term; the facts do not confirm it.
  Reviewed: 2026-11-12 (sonnet)

- `__glXForm4_2DNRW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac740
  **Inferred.** Compares the word at a1+0xc with the word at 0xc3f378 (`c.eq.s` at 0x5ac760, `bc1f` at 0x5ac770). Both paths store floats at +0x0, +0x4, +0xc and +0x8 (base register not shown) and return 0x68c438 in v0 (returns at 0x5ac7a8 and 0x5ac7e8). Loads use offsets +0x0 through +0x38; the render does not show which base register each load uses.
  Reviewed: 2026-11-12 (sonnet)

- `__glDepthTestStencilStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b3a90
  **Inferred.** Works on a context in a0. It loads the byte at a0+0x3f048 (tested at 0x5b3b38, which branches to 0x5b3dc0 when it is zero) and the word at a0+258672 (tested at 0x5b3b50). It makes five indirect calls whose callee the render does not resolve: a0 = a0+273432 at 0x5b3c48, 0x5b3c68, 0x5b3cd8 and 0x5b3cf8, and a0 = a0+273648 at 0x5b3cc0, each with a2 loaded from a0+258108. It returns 0 at 0x5b3d7c or 1 at 0x5b3db4. Role (from name): a depth and stencil test over a stippled span; the facts do not show what the returned 0 or 1 means.
  Reviewed: 2026-11-12 (sonnet)

- `__glDepthPassSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b3de0
  **Inferred.** Loads the byte at a0+0x3f048 (`beq` at 0x5b3e18 branches to 0x5b3eb0 when it is zero) and the word at a0+258672 (`blez` at 0x5b3e34 branches to 0x5b3e84 when it is zero or negative). It makes two indirect calls whose callee the render does not resolve, with a0 = a0+273432 (jalr at 0x5b3e54 and 0x5b3e70), inside a loop closed by the `bnel` at 0x5b3e7c, and returns 0 at 0x5b3ea8. Role (from name): the unstippled depth-pass span; the facts do not confirm it.
  Reviewed: 2026-11-12 (sonnet)

- `__glDepthPassStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b3ec0
  **Inferred.** Loads the same byte at a0+0x3f048 (`beq` at 0x5b3f1c) and tests the word at a0+258672 (`beq` at 0x5b3f2c), and loads a 64-bit value at a0+0x3fc10 (at 0x5b3efc). It makes two indirect calls whose callee the render does not resolve, with a0 = a0+273432 at 0x5b3fa8 and 0x5b3fc4, and returns 0 at 0x5b4038. Role (from name): the stippled counterpart of `__glDepthPassSpan` at 0x5b3de0; the facts do not confirm it.
  Reviewed: 2026-11-12 (sonnet)

- `__glShadeCISpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b4050
  **Inferred.** A color-index shading span: it loads a word at a0+0x3f270 and two floats at a0+0x3f294 and a0+0x3f04c, and loops over the count at a0+258672. The loop is unrolled by eight (`andi` 0x7 test at 0x5b4080), and it returns 0 at 0x5b4150. The float loads suggest per-pixel increments, which the render does not name.
  Reviewed: 2026-11-12 (sonnet)

- `__glShadeRGBASpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b4160
  **Inferred.** The RGBA form: four float state words at a0+0x3f294 to a0+0x3f2a0 are loaded as per-span values, and the loop is driven by the count at a0+258672 (`blez` at 0x5b4198). Two conditional branches at 0x5b41a4 and 0x5b41d4 select the path, and it returns 0 at 0x5b4230.
  Reviewed: 2026-11-12 (sonnet)

- `__glShadeSpecularSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b4240
  **Inferred.** The specular-color variant of the shade span: floats at a0+0x3f2d8 to a0+0x3f2e0 are loaded as per-span values, the count at a0+258672 controls the loop (`blez` at 0x5b4278), and the routine returns 0 at 0x5b4314. Its structure matches `__glShadeRGBASpan` at 0x5b4160.
  Reviewed: 2026-11-12 (sonnet)

- `__glColorSumSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b43c0
  **Inferred.** A span routine of about 1 KB that loads a count from a0+258672 and a float from a pointer chain at [a0+58144]+152, then branches on float compares (`c.lt.s` at 0x5b4448, `bc1f` at 0x5b446c). The compares look like a clamp of the color sum, but the render does not name the bounds. It returns 0 at 0x5b46f8.
  Reviewed: 2026-11-12 (sonnet)

- `__glSetCubeMapCoords` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b4920
  **Inferred.** Makes a series of float compares (`c.le.s` at 0x5b4928, 0x5b4940 and 0x5b4958 first, more from 0x5b4980, and a `c.eq.s` at 0x5b49e4 whose `bc1t` at 0x5b49fc picks between two store paths). Each path stores floats at +0x0 (base registers not shown), loads a 64-bit value and stores a doubleword at +0x28, and returns an unresolved value (returns at 0x5b4a2c and 0x5b4a58). The loads at 0x5b49ec and 0x5b49f8 show only an offset of +0x0. Role (from name): cube-map coordinate selection; the facts do not confirm it.
  Reviewed: 2026-11-12 (sonnet)

- `__glILSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b4fd0
  **Inferred.** Loads a float at a0+0x3f398 and words at a0+0x3f380, a0+0x3f37c and a0+0x3f040, and calls `__glRunILFragmentShaderProgram` (call at 0x5b539c) with a0 passed through, a1 = sp-768, a2 = 0x1 and a4 = sp-732. The word at a0+32548 bounds loops (`blez` at 0x5b5084 and the loop branches at 0x5b50cc and 0x5b5298). It returns 0 or 1 at 0x5b544c and 1 at 0x5b5488. Role (from name): an IL fragment-program span; the facts show only the call.
  Reviewed: 2026-11-12 (sonnet)

- `__glILStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b54b0
  **Inferred.** Loads the same state words as `__glILSpan` at 0x5b4fd0 and calls `__glRunILFragmentShaderProgram` (call at 0x5b5764) with a0 passed through, a1 = sp-768, a2 = 0x1 and a3 = sp-732; the argument slot of the second stack address differs from `__glILSpan`, which uses a4. The word at a0+32548 bounds loops. It returns 0 at 0x5b5950 and 1 at 0x5b5994. Role (from name): the stippled form of `__glILSpan`; the facts do not confirm it.
  Reviewed: 2026-11-12 (sonnet)

- `__glDitherCISpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b59b0
  **Inferred.** Loads the word at a0+0x6638 (the same location as a0+26168, tested by the `blez` at 0x5b59dc, which branches to 0x5b59e8), the word at a0+258672 (`blez` at 0x5b59ec branches to the return at 0x5b5b30 when it is zero or negative), and words at a0+0x3f038 and a0+0x3f03c. The rest is a loop of float loads, byte loads and float stores. It returns 0 at 0x5b5b30. Role (from name): a color-index dither span; the facts do not confirm it.
  Reviewed: 2026-11-12 (sonnet)

- `__glDitherCIStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b5ba0
  **Inferred.** Loads the word at a0+0x6638 (the same location as a0+26168, tested by the `blez` at 0x5b5bf4, which branches to 0x5b59e8 either way) and a 64-bit value at a0+0x3fc10. The `beq` at 0x5b5c00 tests the word at a0+258672 and branches to 0x5b5dd8 when it is zero; the render does not show two separate loops. It returns 0 at 0x5b5df4. Role (from name): a stippled color-index dither span; the facts do not confirm it.
  Reviewed: 2026-11-12 (sonnet)

- `__glDitherRGBASpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b5e00
  **Inferred.** The RGBA dither span: it reads 64-bit values at a0+0xe320 and a0+0x3fbf0, and the count at a0+258672. A check on the value in a1 (`bne` at 0x5b5e88) chooses between two paths, and it returns 0 at 0x5b61cc.
  Reviewed: 2026-11-12 (sonnet)

- `__glDitherRGBAStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b62e0
  **Inferred.** Loads a 64-bit value at 0x5b6310 (offset +0x0, base not shown), a 64-bit value at a0+0x3fc10 and a word at a0+0x3f270 (the same location as a0+258672, tested by the `beq` at 0x5b6344, which branches to 0x5b64e4 when it is zero). It returns 0 at 0x5b6500. Role (from name): a stippled RGBA dither span; the facts do not confirm it.
  Reviewed: 2026-11-12 (sonnet)

- `__glRoundCISpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b6510
  **Inferred.** Loads the word at a0+0x6638 (the same location as a0+26168, tested by the `blez` at 0x5b6530) and the word at a0+258672 (`blez` at 0x5b653c branches to the return at 0x5b65a8 when it is zero or negative). It makes no call. A loop closes with the `bne` at 0x5b6598, and the load at 0x5b6558 shows only an offset of +0x0. It returns 0 at 0x5b65a8. Role (from name): a color-index rounding span; the facts do not confirm it.
  Reviewed: 2026-11-12 (sonnet)

- `__glRoundCIStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b65b0
  **Inferred.** Loads the word at a0+0x6638 (the same location as a0+26168, tested by the `blez` at 0x5b65ec) and 64-bit values at a0+0x3fc10 and a0+0x3fbf0. The `beq` at 0x5b65f8 tests the word at a0+258672 and branches to 0x5b6754 when it is zero. It returns 0 at 0x5b6764. Role (from name): a stippled color-index rounding span; the facts do not confirm it.
  Reviewed: 2026-11-12 (sonnet)

- `__glRoundRGBASpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b6770
  **Inferred.** Loads the word at a0+258672 (also read as a0+0x3f270; `blez` at 0x5b67c8 branches to 0x5b6bc8 when it is zero or negative), a 64-bit value at a0+0xe320 and one at a0+0x3fbf0, and words at +0x88, +0x8c, +0x90 and +0x94 from the pointer at a0+58144. The word at [a0+58144]+140 is compared with a5 at 0x5b6830, and those at +148, +136 and +144 are compared later. It returns 0 at 0x5b6bdc. Role (from name): an RGBA rounding span; the facts do not confirm it.
  Reviewed: 2026-11-12 (sonnet)
