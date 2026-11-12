# Tier-2 routine readings, voyager round 4, batch 2

Role statements for the 25 routines in batch 2 of the tier-2 reading round. Each statement uses only the rendered facts (registers, calls, constants, branch targets). Every grade here is inferred: the renders show access patterns and constants, not the meaning of the data they touch. The routines are the software OpenGL path in the fglrx DRI driver, so the names are the main guide to purpose.

- `__glATIFSAARestoreReadBuffer` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b9fb0
  **Inferred.** Branches on the word at a0+3284 against six constants (0x404, 0x406, 0x401, 0x407, 0x405, 0x403 at 0x5b9fc8 to 0x5b9ff0). If none match it returns 0x40000 at 0x5b9ff8 with no store. The code after the dispatch stores 8-byte values at offsets +0x43770, +0xe340 and +0x43778 (sd at 0x5ba01c to 0x5ba094); the facts do not show the base register or which constant leads to which store. Its other returns are 0x40000 (0x5ba044, 0x5ba06c, 0x5ba090) and a0+274136 (0x5ba020). Role (from name): restoring the read buffer after an anti-aliasing pass; the stored values are unknown from the render, so only the dispatch shape is settled.
  Reviewed: 2026-11-12 (sonnet)

- `__glRenderTriangle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ba330
  **Inferred.** Takes three vertex pointers (a1, a2, a3), which the later calls pass on. It loads floats at +0x68 and +0x6c (six lwc1 at 0x5ba334 to 0x5ba348) and stores 8-byte values at +0x58 (sd from 0x5ba450 on); the facts do not show the base registers. It compares a value rendered as entry(0x3fc28) with the byte at [a0+261164] (beq at 0x5ba3f4) and tests bit 0x800 of [a0+261036] (beq at 0x5ba41c). Seven indirect calls follow, all conditional on branches: 0x5ba498, 0x5ba4d0 and 0x5ba50c each pass one of a1, a2, a3 as the second argument and are skipped when a flag test on that vertex is zero; 0x5ba638 passes [a0+253504]:8 and 0x488 (a4); 0x5ba66c, 0x5ba694 and 0x5ba6b4 pass a1, a2, a3 unchanged. The targets are unnamed, so the triangle-rasterizer role rests on the three-vertex layout and the tests.
  Reviewed: 2026-11-12 (sonnet)

- `__glRenderLineTriangle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ba6d0
  **Inferred.** Tests bit 0x1000 in the word at +80 of each of a1, a2 and a3 (beq at 0x5ba70c, 0x5ba730, 0x5ba758). Each of three indirect calls (0x5ba720, 0x5ba748, 0x5ba774) is made only when the matching vertex's bit is set; the branch skips it when the bit is clear. The calls rotate the pointers: the first passes a1, a2, a3 unchanged, the second a2 then a3, the third a3 then a1. Role (from name): a dispatch to a per-vertex renderer for line primitives; the callees are unnamed.
  Reviewed: 2026-11-12 (sonnet)

- `__glRenderOffsetLineTriangle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ba7a0
  **Inferred.** Loads a float at +0x70 three times (lwc1 at 0x5ba7bc to 0x5ba7dc) and stores a float at +0x70 three times (swc1 at 0x5ba820 to 0x5ba83c); the facts do not show the base registers. It calls __glCalcPolygonOffset at 0x5ba1c0 (bgezall at 0x5ba7f4), then __glRenderLineTriangle at 0x5ba6d0 (bgezall at 0x5ba80c), both with a1, a2, a3 passed unchanged. The three stores come after both calls, so the second call is not a tail call. It returns the result of __glRenderLineTriangle (0x5ba844). Role (from name): a line-primitive variant that applies a polygon offset; the facts show the offset call first, the render call second and the stores last.
  Reviewed: 2026-11-12 (sonnet)

- `__glRenderPointTriangle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ba850
  **Inferred.** Reads the word at +0x50 of each of three vertex pointers (lw at 0x5ba854, 0x5ba8a0, 0x5ba8c8) and tests bit 0x1000 in it (beq at 0x5ba884, 0x5ba8a8, 0x5ba8d0). Each of three indirect calls (0x5ba898, 0x5ba8c0, 0x5ba8e8) is made only when that vertex's bit is set. The first passes a1, a2, a3; the second and third pass a2 and a3 as the second argument with later arguments unresolved. The structure matches __glRenderLineTriangle at 0x5ba6d0. Role (from name): a point-primitive dispatch; the callees are unnamed.
  Reviewed: 2026-11-12 (sonnet)

- `__glRenderOffsetPointTriangle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ba910
  **Inferred.** Reads and writes a float at +0x70 of each of three vertex pointers (lwc1 at 0x5ba92c to 0x5ba94c, swc1 at 0x5ba990 to 0x5ba9ac). It calls __glCalcPolygonOffset at 0x5ba1c0 (bgezall at 0x5ba964). It then calls __glRenderPointTriangle at 0x5ba850 (bgezall at 0x5ba97c), so the swc1 stores run after that call, and returns the call's result (0x5ba9b4). It is the point-primitive counterpart of __glRenderOffsetLineTriangle at 0x5ba7a0.
  Reviewed: 2026-11-12 (sonnet)

- `__glRenderFlatTriangle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ba9c0
  **Inferred.** Reads floats at +0x68 and +0x6c (six lwc1 at 0x5ba9c4 to 0x5ba9d8) and the context words at a0+0x3de48, a0+0x3de4c and a0+0x3fbac. It stores 8-byte values at +0x58 (sd at 0x5baab8 and 0x5babd0); the facts do not show the store base, only that one call passes the 8-byte value at [a0+253504] as its second argument. It compares a value rendered as entry(0x3fc28) with the byte at [a0+261164] (beq at 0x5baa64) and tests bit 0x800 of [a0+261036] (beq at 0x5baa7c). Five indirect calls follow those tests (0x5baadc, 0x5bab14, 0x5bab4c, 0x5bab84, 0x5baba4); the first four are each skipped by a flag-bit branch (0x5baab4, 0x5baaf0, 0x5bab28, 0x5bab60). Its layout matches __glRenderSmoothTriangle at 0x5bac20. Role (from name): the flat-shaded variant of the same triangle path.
  Reviewed: 2026-11-12 (sonnet)

- `__glRenderSmoothTriangle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bac20
  **Inferred.** Shares the shape of __glRenderFlatTriangle at 0x5ba9c0 but not its exact loads and stores: float loads at +0x68 and +0x6c (lwc1 at 0x5bac24 to 0x5bac38), six 8-byte stores at +0x58 (sd at 0x5bad0c, 0x5bad14, 0x5bad1c, 0x5bae08, 0x5bae10, 0x5bae20) against two in the flat routine, and the tests at 0x5bacc0 (a value rendered as entry(0x3fc28) against the byte at [a0+261164]) and 0x5bacdc (bit 0x800 of [a0+261036]). It makes four indirect calls (0x5bad54, 0x5bad8c, 0x5badc4, 0x5bade4); the first three are each skipped by a flag-bit branch. It returns a2+1160 at 0x5bae2c and the constant 0x67df58 at 0x5bae58. Role (from name): the smooth-shaded triangle variant; the callees are unnamed, so the role rests on the name and the shared layout with the flat variant.
  Reviewed: 2026-11-12 (sonnet)

- `SphereGen` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bbc70
  **Inferred.** Loads floats at +0x24, +0x20 and +0x28 (lwc1 at 0x5bbca8 to 0x5bbcb4; the base register is not shown) and an 8-byte value at a0+0xe418 (ld at 0x5bbc7c). It calls an unnamed routine at 0x5bbc98 with a stack buffer at sp-48 and a1+120 as its first two arguments. A float compare (c.eq.s at 0x5bbd1c) feeds the branch at 0x5bbd28, which picks one of two paths; each path stores two floats at +0 and +4 (swc1 at 0x5bbd48, 0x5bbd4c and at 0x5bbd5c, 0x5bbd60) and returns an unresolved value. Role (from name): sphere-map texture coordinate generation; the callee's arithmetic is not traced here.
  Reviewed: 2026-11-12 (sonnet)

- `ReflectGen` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bbd70
  **Inferred.** Loads the same three floats from a1+0x20, +0x24 and +0x28 (lwc1 at 0x5bbda8 to 0x5bbdb4) and the same 8-byte context value at a0+0xe418 (ld at 0x5bbd7c). It calls an unnamed routine at 0x5bbd98 with the stack buffer at sp-48 and a1+120. It writes three floats to a2+0, a2+4 and a2+8 (swc1 at 0x5bbdf8 to 0x5bbe04). It is the three-component counterpart of SphereGen at 0x5bbc70. The name points at reflection-map coordinate generation.
  Reviewed: 2026-11-12 (sonnet)

- `__glFogSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bcf80
  **Inferred.** Loops over a span: it loads a count from a0+0x3f270 (lw at 0x5bcf88; blez at 0x5bcfe8 goes to the return when it is not positive) and float fog parameters from a0+0xe04, +0xe08 and +0xe0c. It compares floats (c.lt.s at 0x5bd078, 0x5bd0b8, 0x5bd0cc, 0x5bd0e4 and 0x5bd180) and makes twelve float stores (swc1 at 0x5bd024 to 0x5bd1d0, at offsets +0, +4 and +8 where shown); the facts do not show the store base registers. It returns 0 at 0x5bd040, its only return. Role (from name): per-pixel fog over a span. The fog equation and the constant at abs 0xc3f378 are unknown from the render.
  Reviewed: 2026-11-12 (sonnet)

- `__glFogStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bd1e0
  **Inferred.** Reads the same span count (a0+0x3f270) and fog parameters (a0+0xe04 to +0xe0c, a0+0xe320) as __glFogSpan at 0x5bcf80. The beq at 0x5bd244 tests that same count (258672 is 0x3f270) against zero and goes to the return path; __glFogSpan also exits on a non-positive count, so this is not an added gate. A bit test against 0xffffffff80000000 (beq at 0x5bd300) is on a register whose source the render does not resolve. It returns 0 at 0x5bd488. Role (from name): fog applied through a stipple pattern; whether the tested value is a stipple mask is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `__glFogSpanSlow` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bd4e0
  **Inferred.** Reads the span count (a0+0x3f270), the word at a0+0xe00 and fog parameters (a0+0xe04 to +0xe24). It makes six powf calls (0x5bd86c, 0x5bd88c, 0x5bd8ac, 0x5bd8d0, 0x5bd95c, 0x5bd97c). The word at a0+3584 is compared with 0x800, 0x801 and 0x2601 in repeated branches (for example 0x5bd5e8, 0x5bd5f0, 0x5bd5f8); the a2 value shown in the rendered powf calls is that word left in a register, and powf takes float arguments, so it is not a powf operand. The facts show a compare constant at 0xc3f378 and do not show one at 0xc3f3c8. It returns 0 at 0x5bd6a0. Role (from name): the non-table fog path over a span, probably evaluating an exponential falloff with powf; the exponent source is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `__glFogStippledSpanSlow` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bd990
  **Inferred.** Makes the same six powf calls as __glFogSpanSlow at 0x5bd4e0 (at 0x5bdda0, 0x5bddc0, 0x5bdde4, 0x5bde14, 0x5bdee4 and 0x5bdf18). The word at a0+3584 is compared with 0x800, 0x801 and 0x2601 in branches (for example 0x5bdb70, 0x5bdb78, 0x5bdb80); the a2 value shown in the rendered powf calls is that word left in a register and not a powf operand. The facts do not show a constant at 0xc3f3c8. It reads the span count and fog parameters from a0+0x3f270 and a0+0xe04 to +0xe24. It returns 0 at 0x5bde74. Role (from name): the stippled variant of the slow span fog.
  Reviewed: 2026-11-12 (sonnet)

- `__glFogFragmentSlow` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bdf30
  **Inferred.** Reads a word at a0+0xe00 (lw at 0x5bdf38) and fog parameters at a0+0xe04 to +0xe24, and compares the word at a0+3584 with 0x800, 0x801 and 0x2601 (beq at 0x5bdf80, 0x5bdf88, 0x5bdf90). It makes two powf calls (at 0x5be0a4 and 0x5be0d4). The three constants show up in a4 to a7 in the rendered calls, but they are the compare values left in registers and not float arguments to powf. They match the OpenGL fog mode enums EXP, EXP2 and LINEAR. Role (from name): a per-fragment fog factor that likely chooses an equation by mode. Its returns (0x5be000, 0x5be078) carry values the render does not resolve.
  Reviewed: 2026-11-12 (sonnet)

- `__glFogVertex` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5be0f0
  **Inferred.** Reads a word at a0+0xe00 (lw at 0x5be134) and fog parameters at a0+0xe1c and +0xe20 (lwc1 at 0x5be1c0 and 0x5be1c4). It compares [a0+3628] with 0x8451 (beq at 0x5be10c) and the word at a0+3584 with 0x800, 0x801 and 0x2601 (beq at 0x5be13c, 0x5be144, 0x5be14c). It makes two powf calls (at 0x5be1e4 and 0x5be214); the constants shown in the rendered calls are compare values left in a3 to a5, not powf arguments. It has three returns (0x5be180, 0x5be190, 0x5be1a4) whose values are unknown from the render. Role (from name): the per-vertex form of the fog factor.
  Reviewed: 2026-11-12 (sonnet)

- `__glFogVertexLinear` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5be230
  **Inferred.** Makes no powf call and compares no fog-mode constant. It reads a word at a0+0xe2c, fog parameters at a0+0xe1c and +0xe20, and a float at +0x0 (lwc1 at 0x5be268; the render shows no absolute address here). Its three returns all give the constant 0x67a948 (0x5be294, 0x5be29c, 0x5be2a8). Role (from name): the linear specialization of __glFogVertex at 0x5be0f0, matching the LINEAR mode that the slow variants switch on.
  Reviewed: 2026-11-12 (sonnet)

- `__glFogColorSlow` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5be2c0
  **Inferred.** Reads the word at a0+0x6638 (lw at 0x5be2c0), two floats at +0x0 (0x5be2d0, 0x5be2d4) and fog parameters at a0+0xe04, +0xe08, +0xe0c and +0xe24. When [a0+26168] is positive (blez at 0x5be2d8 not taken) it returns that word at 0x5be2ec; otherwise it stores floats at +0x0 to +0xc and returns the same word at 0x5be33c. Role (from name): the fog colour path. The same field is also tested for <= 0 in __glFogSpan at 0x5bcf80 (blez at 0x5bd010), so the return may be a count or flag and not a colour.
  Reviewed: 2026-11-12 (sonnet)

- `__glExtractBumpmap` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5c04d0
  **Inferred.** Reads words at a1+0x10, +0x20 and +0x24 and an 8-byte value at +0x0 (lw at 0x5c04e8 to 0x5c04fc, ld at 0x5c04f4). Two values a4 and a5 are tested against zero (bltz at 0x5c04d8 and 0x5c04e0) and against [a1+36] and [a1+32] (beq at 0x5c04f8, bne at 0x5c0504), the shape of a bounds check; where a4 and a5 come from is not shown. Each of two paths stores two floats at +0 and +4 (swc1 at 0x5c0514, 0x5c051c and at 0x5c0558, 0x5c0560; base not shown) and returns 0x6786a8 (0x5c0518, 0x5c055c). Role (from name): extracting a bump map; the bump-map arithmetic is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `__glExtractBumpmap_B` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5c2310
  **Inferred.** The second bump-map extraction routine. It reads a word at +0x10 and an 8-byte value at +0 (lw at 0x5c2310, ld at 0x5c2320), then loads two bytes (lb at 0x5c2338 and 0x5c2340) and a float (lwc1 at 0x5c2358), with no branches. It stores two floats at +4 and +0 (swc1 at 0x5c2368 and 0x5c2370) and returns 0x676868 (0x5c236c). The facts do not show the base registers of these accesses. Role (from name): a smaller form of __glExtractBumpmap at 0x5c04d0 without its bounds-check branches; the name is the only evidence for the bump-map role.
  Reviewed: 2026-11-12 (sonnet)

- `ClampCoordNearest` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5c9c00
  **Inferred.** Compares a4 against 0x2901, 0x8742, 0x8743, 0x6080, 0x6081 and 0x8370 (beq at 0x5c9c30 to 0x5c9c58) and later against 0x812d (beq at 0x5c9c6c). It calls floor once, at 0x5c9d44; the constants 0x8742, 0x8743, 0x6080 and 0x6081 in the rendered call are compare values left in a1 and a5 to a7, not arguments to floor. It returns 0x812d at 0x5c9c94 and 0x5c9cf0, and one of 0x812d or an unresolved value at 0x5c9ca8. 0x2901, 0x8370 and 0x812d match OpenGL texture wrap enums. Role (from name): a texture coordinate clamp for nearest filtering, with the wrap mode chosen by the caller.
  Reviewed: 2026-11-12 (sonnet)

- `ClampCoordLinear` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5c9dc0
  **Inferred.** Compares a6 against 0x2901, 0x8742, 0x8743, 0x6080, 0x6081 and 0x8370 (beq at 0x5c9df0 to 0x5c9e20) and later against 0x2900, 0x8742, 0x6080, 0x812f, 0x8743, 0x6081, 0x8370 and 0x812d (0x5c9e78 to 0x5c9ec4). It calls floor three times (0x5c9f48, 0x5ca040, 0x5ca0b0); the constants in the rendered call arguments are compare values left in registers, not arguments to floor. Its returns are ret(floor) at 0x5c9f88 and one of ret(floor) or an unresolved value at 0x5c9fa4. Role (from name): the linear-filter counterpart of ClampCoordNearest at 0x5c9c00; the render does not show how a coordinate is split into index and fraction.
  Reviewed: 2026-11-12 (sonnet)

- `__glNearestFilter1` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ca0f0
  **Inferred.** Calls ClampCoordNearest at 0x5c9c00 (bgezall at 0x5ca148) on one coordinate, with the wrap mode from [a1+124]. It then makes an indirect call at 0x5ca174 with a3 and a4 set to 0. The name indicates a one-dimensional nearest-texel lookup. The indirect target is unnamed.
  Reviewed: 2026-11-12 (sonnet)

- `__glNearestFilter2` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ca1a0
  **Inferred.** Calls ClampCoordNearest at 0x5c9c00 twice (bgezall at 0x5ca20c and 0x5ca230), with wrap modes from [a1+124] and [a1+128] as the fifth argument (a4). It then makes an indirect call at 0x5ca25c. The facts do not show which coordinate values are clamped. Role (from name): a two-dimensional nearest-texel lookup; the indirect target is unnamed.
  Reviewed: 2026-11-12 (sonnet)

- `__glNearestFilter3` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ca280
  **Inferred.** Calls ClampCoordNearest at 0x5c9c00 three times (bgezall at 0x5ca300, 0x5ca31c and 0x5ca33c), with wrap modes from [a1+124], [a1+128] and [a1+132] as the fifth argument (a4). It then makes an indirect call at 0x5ca368. The facts do not show which coordinate values are clamped. Role (from name): a three-dimensional nearest-texel lookup; the indirect target is unnamed.
  Reviewed: 2026-11-12 (sonnet)
