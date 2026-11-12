# Routine readings, voyager round 4, batch 0

Role statements for the first 25 targets of the ranked list (offset 0). Each statement uses the rendered facts only: the instructions and offsets, the branches and their targets, the calls at each `jalr` or `bgezall`, and the return values. All entries are inferred. The render shows what each routine reads, writes and calls, not what its callers expect, and offsets into the context struct are not named.

- `__glDoMultMatrix` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5aae80
  **Inferred.** The routine works on a context struct passed in a0. It tests bits 0x80, 0x200 and 0x2000 of the word at a0+58032 and branches around blocks of 4-byte loads and stores into the same struct. It ends with indirect calls at 0x5aaedc, 0x5aaef4 and 0x5ab0dc, whose callee is not resolved by the render, and returns either a value from a0+58048 or the result of a pointer chain at a0+256616.

- `__glDoScale` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab380
  **Inferred.** A short wrapper that forwards a0 and a 32-byte stack buffer (a1=sp-32) to `__glDoMultMatrix` at 0x5aae80 through the conditional call at 0x5ab3b4, with a2 set to the code address 0x5ab2c0 and a4 to 0x68d7f8. The constant -0x4d40 in a3 is passed on as it is. It returns the callee's v0 at 0x5ab3c4, so the scale work itself is done inside the matrix routine.

- `__glXForm4` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ab7f0
  **Inferred.** Takes a 4-component input vector from a1 (loads at +0x0, +0x4, +0x8, +0xc) and a 4x4 matrix from a2 (loads at +0x0 through +0x3c) and writes four floats to a0 at +0x0 to +0xc. The float compare at 0x5ab824 tests the w component against the constant at 0xc3f378 with `bc1f` at 0x5ab838, and the two paths store the same four outputs. Both returns load 0x68d388 into v0.

- `__glXForm2_W` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac260
  **Inferred.** A two-component variant: it reads x and y from a1 (+0x0, +0x4), multiplies them through the matrix at a2 (rows at +0x0 to +0x38, with the constant at 0xc3f378 loaded at 0x5ac2c8) and stores four floats to a0 (+0x0, +0x4, +0x8, +0xc). It has no branch and no call, and returns 0x68c918 in v0 at 0x5ac2d8.

- `__glXForm3_W` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac2e0
  **Inferred.** A three-component variant of the same pattern: input from a1 (+0x0, +0x4, +0x8), matrix from a2 (loads through +0x38), and output stored to a0. The routine is straight-line code with no calls, and it returns 0x68c898 in v0 at 0x5ac380.

- `__glXForm4_W` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac390
  **Inferred.** The four-component transform with the w-test: it loads w from a1+0xc and compares it with the constant at 0xc3f378 (`c.eq.s` at 0x5ac3c4), with `bc1f` at 0x5ac3d8 selecting between two store sequences to a0. Both returns at 0x5ac440 and 0x5ac4b0 load 0x68c7e8 into v0. It differs from `__glXForm4` at 0x5ab7f0 in its address range and the constant it returns.

- `__glXForm2_2DW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac4c0
  **Inferred.** Another two-component transform: x and y come from a1 (+0x0, +0x4), the matrix rows come from a2 (+0x0 to +0x38), and four floats are written to a0 at +0x0, +0x4, +0x8 and +0xc. The constant at 0xc3f378 is loaded at 0x5ac50c, and the routine has no branch or call. It returns 0x68c6b8 in v0 at 0x5ac520.

- `__glXForm4_2DNRW` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ac740
  **Inferred.** A four-component transform with a w-test: it compares a1+0xc against the constant at 0xc3f378 (`c.eq.s` at 0x5ac760, `bc1f` at 0x5ac770) and stores the outputs to a0 along two paths that both end at returns 0x5ac7a8 and 0x5ac7e8 with 0x68c438 in v0. The matrix is read from a2 at offsets +0x0 through +0x38, and the vector from a1 at +0x0 to +0xc.

- `__glDepthTestStencilStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b3a90
  **Inferred.** A per-span routine over a context in a0. It reads a 1-byte enable at a0+0x3f048 and the count at a0+258672, and it makes indirect calls with a0 set to a0+273432 (jalr at 0x5b3c48, 0x5b3c68, 0x5b3cd8, 0x5b3cf8) or a0+273648 (0x5b3cc0), passing a2 loaded from a0+258108. The callees are not resolved by the render. It returns 0 at 0x5b3d7c or 1 at 0x5b3db4, so the result reads as a pass or fail flag for the span.

- `__glDepthPassSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b3de0
  **Inferred.** The unstippled form of the depth-pass span: it tests the enable byte at a0+0x3f048 (`beq` at 0x5b3e18), exits when the count at a0+258672 is zero or negative (`blez` at 0x5b3e34), and makes two indirect calls with a0 set to a0+273432 (jalr at 0x5b3e54 and 0x5b3e70). It returns 0 at 0x5b3ea8.

- `__glDepthPassStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b3ec0
  **Inferred.** The stippled counterpart of `__glDepthPassSpan` at 0x5b3de0. It uses the same enable byte and count, plus a 64-bit value at a0+0x3fc10 (loaded at 0x5b3efc), and makes indirect calls with a0 set to a0+273432 at 0x5b3fa8 and 0x5b3fc4. It returns 0 at 0x5b4038.

- `__glShadeCISpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b4050
  **Inferred.** A color-index shading span: it loads a word at a0+0x3f270 and two floats at a0+0x3f294 and a0+0x3f04c, and loops over the count at a0+258672. The loop is unrolled by eight (`andi` 0x7 test at 0x5b4080), and it returns 0 at 0x5b4150. The float loads suggest per-pixel increments, which the render does not name.

- `__glShadeRGBASpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b4160
  **Inferred.** The RGBA form: three float state words at a0+0x3f298 to a0+0x3f2a0 are loaded as per-span values, and the loop is driven by the count at a0+258672 (`blez` at 0x5b4198). Two conditional branches at 0x5b41a4 and 0x5b41d4 select the path, and it returns 0 at 0x5b4230.

- `__glShadeSpecularSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b4240
  **Inferred.** The specular-color variant of the shade span: floats at a0+0x3f2d8 to a0+0x3f2e0 are loaded as per-span values, the count at a0+258672 controls the loop (`blez` at 0x5b4278), and the routine returns 0 at 0x5b4314. Its structure matches `__glShadeRGBASpan` at 0x5b4160.

- `__glColorSumSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b43c0
  **Inferred.** A span routine of about 1 KB that loads a count from a0+258672 and a float from a pointer chain at [a0+58144]+152, then branches on float compares (`c.lt.s` at 0x5b4448, `bc1f` at 0x5b446c). The compares look like a clamp of the color sum, but the render does not name the bounds. It returns 0 at 0x5b46f8.

- `__glSetCubeMapCoords` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b4920
  **Inferred.** Makes three float compares (`c.le.s` at 0x5b4928, 0x5b4940, 0x5b4958) on coordinate pairs, which fits a cube-map face choice, and writes results through two pointer arguments, a4 and a5, at +0x0. It loads the constants at 0xc3f3a8 and 0xc3f378 to compare against. The two returns at 0x5b4a2c and 0x5b4a58 pass back a value the render does not trace to a constant.

- `__glILSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b4fd0
  **Inferred.** An interpreted fragment path: it reads a float at a0+0x3f398 and integers at a0+0x3f380, a0+0x3f37c and a0+0x3f040, and calls `__glRunILFragmentShaderProgram` at 0x71be20 with a1 set to a 768-byte stack buffer and a2=1 (jalr at 0x5b539c). The count at a0+32548 controls the loop (`blez` at 0x5b5084). It returns 0 or 1 at 0x5b544c and 1 at 0x5b5488.

- `__glILStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b54b0
  **Inferred.** The stippled form of `__glILSpan` at 0x5b4fd0. It loads the same state words, calls `__glRunILFragmentShaderProgram` at 0x71be20 (jalr at 0x5b5764) with the same stack buffer, and loops over the count at a0+32548. It returns 0 at 0x5b5950 and 1 at 0x5b5994.

- `__glDitherCISpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b59b0
  **Inferred.** A color-index dither span: it reads a word at a0+0x6638, the count at a0+26168 and a0+258672, and words at a0+0x3f038 and a0+0x3f03c. The two `blez` tests at 0x5b59dc and 0x5b59ec decide whether the loop runs, and the routine returns 0 at 0x5b5b30.

- `__glDitherCIStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b5ba0
  **Inferred.** The stippled color-index dither: it reads the same word at a0+0x6638 and count at a0+26168, and loads a 64-bit value at a0+0x3fc10. The branch at 0x5b5c00 chooses between two loops keyed on a0+258672, and it returns 0 at 0x5b5df4.

- `__glDitherRGBASpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b5e00
  **Inferred.** The RGBA dither span: it reads 64-bit values at a0+0xe320 and a0+0x3fbf0, and the count at a0+258672. A check on the value in a1 (`bne` at 0x5b5e88) chooses between two paths, and it returns 0 at 0x5b61cc.

- `__glDitherRGBAStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b62e0
  **Inferred.** The stippled RGBA dither: it loads a 64-bit constant from abs 0xc3db20 at 0x5b6310, a 64-bit value at a0+0x3fc10 and a word at a0+0x3f270, and branches on the count at a0+258672 (`beq` at 0x5b6344). It returns 0 at 0x5b6500.

- `__glRoundCISpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b6510
  **Inferred.** A color-index rounding span: it reads a word at a0+0x6638, a count at a0+26168, and a float constant at abs 0xc3f3a8 (`lwc1` at 0x5b6558), then loops over a0+258672 (`blez` at 0x5b653c). The routine is short, with no call, and it returns 0 at 0x5b65a8.

- `__glRoundCIStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b65b0
  **Inferred.** The stippled color-index rounding span: it uses the same word at a0+0x6638 and count at a0+26168, and selects between two paths on a0+258672 (`beq` at 0x5b65f8). It returns 0 at 0x5b6764.

- `__glRoundRGBASpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b6770
  **Inferred.** An RGBA rounding span of about 1.4 KB: it reads the count at a0+258672, a pointer chain at [a0+58144]+0x88 and [a0+58144]+140 (compared with a5 at 0x5b6830), and two context words at a0+0x3f270 and a0+0xe320. It returns 0 at 0x5b6bdc.
