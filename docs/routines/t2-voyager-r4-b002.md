# Tier-2 routine readings, voyager round 4, batch 2

Role statements for the 25 routines in batch 2 of the tier-2 reading round. Each statement uses only the rendered facts (registers, calls, constants, branch targets). Every grade here is inferred: the renders show access patterns and constants, not the meaning of the data they touch. The routines are the software OpenGL path in the fglrx DRI driver, so the names are the main guide to purpose.

- `__glATIFSAARestoreReadBuffer` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b9fb0
  **Inferred.** Branches on the word at a0+3284 against six constants (0x404, 0x406, 0x401, 0x407, 0x405, 0x403 at 0x5b9fc8 to 0x5b9ff0). Each path stores 8-byte values into the context at a0+0x43770, a0+0xe340 and a0+0x43778 (sd at 0x5ba01c to 0x5ba08c). It returns 0x40000 on most paths and a0+274136 on one (0x5ba020). The name points at restoring the read buffer after an anti-aliasing pass; the stored values are unknown from the render, so only the dispatch shape is settled.

- `__glRenderTriangle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ba330
  **Inferred.** Takes three vertex pointers (a1, a2, a3) and reads a float pair at +0x68 and +0x6c from each (lwc1 at 0x5ba334 to 0x5ba348). It writes 8-byte values at +0x58 of each vertex (sd at 0x5ba450, 0x5ba464). It checks the mode byte at table(0x3fc28) and the flag word at [a0+261036] against 0x800 (beq at 0x5ba41c), then makes indirect calls at 0x5ba498, 0x5ba4d0, 0x5ba50c, 0x5ba638, 0x5ba66c, 0x5ba694 and 0x5ba6b4. The targets are unnamed, so the triangle-rasterizer role rests on the three-vertex layout and the mode checks.

- `__glRenderLineTriangle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ba6d0
  **Inferred.** Tests bit 0x1000 in the word at +80 of each of three vertex pointers (beq at 0x5ba70c, 0x5ba730, 0x5ba758). It then makes three indirect calls at 0x5ba720, 0x5ba748 and 0x5ba774, each passing the vertex pointers in a shifted order. The shape is a dispatch to the per-vertex renderer for line primitives, with the bit 0x1000 test choosing each vertex's path. The callees are unnamed.

- `__glRenderOffsetLineTriangle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ba7a0
  **Inferred.** Reads and writes a float at +0x70 of each of three vertex pointers (lwc1 at 0x5ba7bc to 0x5ba7dc, swc1 at 0x5ba820 to 0x5ba83c). It calls __glCalcPolygonOffset at 0x5ba1c0 (bgezall at 0x5ba7f4) before the store. It then tail-calls __glRenderLineTriangle at 0x5ba6d0 (bgezall at 0x5ba80c) and returns that result (0x5ba844). The name and the callee point at a line-primitive variant that applies a polygon offset before rendering.

- `__glRenderPointTriangle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ba850
  **Inferred.** Reads the word at +0x50 of each of three vertex pointers (lw at 0x5ba854, 0x5ba8a0, 0x5ba8c8) and tests bit 0x1000 in the word at +80 of each (beq at 0x5ba884, 0x5ba8a8, 0x5ba8d0). It makes three indirect calls at 0x5ba898, 0x5ba8c0 and 0x5ba8e8 with the vertex pointers passed on. The structure matches __glRenderLineTriangle at 0x5ba6d0, which fits a point-primitive dispatch. The bit 0x1000 test chooses each vertex's path, and the callees are unnamed.

- `__glRenderOffsetPointTriangle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ba910
  **Inferred.** Reads and writes a float at +0x70 of each of three vertex pointers (lwc1 at 0x5ba92c to 0x5ba94c, swc1 at 0x5ba990 to 0x5ba9ac). It calls __glCalcPolygonOffset at 0x5ba1c0 (bgezall at 0x5ba964). It then tail-calls __glRenderPointTriangle at 0x5ba850 (bgezall at 0x5ba97c) and returns that result (0x5ba9b4). It is the point-primitive counterpart of __glRenderOffsetLineTriangle at 0x5ba7a0.

- `__glRenderFlatTriangle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ba9c0
  **Inferred.** Reads a float pair at +0x68 and +0x6c from three vertex pointers (lwc1 at 0x5ba9c4 to 0x5ba9d8) and the context words at a0+0x3de48, a0+0x3de4c and a0+0x3fbac. It writes 8-byte values at +0x58 into the state at a0+253504 (sd at 0x5baab8, 0x5babd0). It tests the mode byte at table(0x3fc28) and bit 0x800 of [a0+261036] (beq at 0x5baa64, 0x5baa7c), then makes indirect calls at 0x5baadc, 0x5bab14, 0x5bab4c, 0x5bab84 and 0x5baba4. Its layout matches __glRenderSmoothTriangle at 0x5bac20, which fits the flat-shaded variant of the same triangle path.

- `__glRenderSmoothTriangle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bac20
  **Inferred.** Has the same loads and stores as __glRenderFlatTriangle at 0x5ba9c0: float pairs at +0x68 and +0x6c, 8-byte writes at +0x58 of each vertex, and the mode test at 0x5bacc0 and 0x5bacdc. It makes four indirect calls at 0x5bad54, 0x5bad8c, 0x5badc4 and 0x5bade4 and returns a2+1160 on one path (0x5bae2c). The name points at the smooth-shaded triangle variant. The callees are unnamed, so the role rests on the name and the shared layout with the flat variant.

- `SphereGen` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bbc70
  **Inferred.** Loads three floats from the input at a1+0x20, +0x24 and +0x28 (lwc1 at 0x5bbcac to 0x5bbcb4) and an 8-byte value from the context at a0+0xe418 (ld at 0x5bbc7c). It calls an unnamed routine at 0x5bbc98 with a stack buffer at sp-48, and a float compare (c.eq.s at 0x5bbd1c) feeds the branch at 0x5bbd28. It writes four float stores to a2+0 and a2+4 (swc1 at 0x5bbd48 to 0x5bbd60). The name suggests sphere-map texture coordinate generation; the callee's arithmetic is not traced here.

- `ReflectGen` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bbd70
  **Inferred.** Loads the same three floats from a1+0x20, +0x24 and +0x28 (lwc1 at 0x5bbda8 to 0x5bbdb4) and the same 8-byte context value at a0+0xe418 (ld at 0x5bbd7c). It calls an unnamed routine at 0x5bbd98 with the stack buffer at sp-48 and a1+120. It writes three floats to a2+0, a2+4 and a2+8 (swc1 at 0x5bbdf8 to 0x5bbe04). It is the three-component counterpart of SphereGen at 0x5bbc70. The name points at reflection-map coordinate generation.

- `__glFogSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bcf80
  **Inferred.** Loops over a span with a count read from a0+0x3f270 (lw at 0x5bcf88) and float fog parameters from a0+0xe04, +0xe08 and +0xe0c. It compares floats (c.lt.s at 0x5bd078, 0x5bd0b8, 0x5bd0cc and 0x5bd0e4) and writes a float at [a0+261104]:8 (swc1 at 0x5bd024 and 0x5bd1bc). It returns 0 at 0x5bd040. The name suggests per-pixel fog over a span. The fog equation and the constant at abs 0xc3f378 are unknown from the render.

- `__glFogStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bd1e0
  **Inferred.** Reads the same span count (a0+0x3f270) and fog parameters (a0+0xe04 to +0xe0c, a0+0xe320) as __glFogSpan at 0x5bcf80. It adds a gate on the word at [a0+258672] (beq at 0x5bd244) and a bit test against 0x80000000 (beq at 0x5bd300). It returns 0 at 0x5bd488. The name points at fog applied through a stipple pattern, with the gate read as the stipple mask. The mask source is unknown.

- `__glFogSpanSlow` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bd4e0
  **Inferred.** Calls powf six times (at 0x5bd86c, 0x5bd88c, 0x5bd8ac, 0x5bd8d0, 0x5bd95c and 0x5bd97c), with the word at a0+3584 as an operand and a float constant from 0xc3f3c8. It reads the span count (a0+0x3f270) and fog parameters (a0+0xe04 to +0xe1c). It returns 0 at 0x5bd6a0. The name suggests the non-table fog path over a span, where powf evaluates an exponential falloff. The exponent source is unknown.

- `__glFogStippledSpanSlow` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bd990
  **Inferred.** Makes the same six powf calls as __glFogSpanSlow at 0x5bd4e0 (at 0x5bdda0, 0x5bddc0, 0x5bdde4, 0x5bde14, 0x5bdee4 and 0x5bdf18), with the word at a0+3584 and the float constant at 0xc3f3c8. It reads the span count and fog parameters from a0+0x3f270 and a0+0xe04 to +0xe1c. It returns 0 at 0x5bde74. The name is the stippled variant of the slow span fog.

- `__glFogFragmentSlow` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5bdf30
  **Inferred.** Reads a word at a0+0xe00 (lw at 0x5bdf38) and fog parameters at a0+0xe04 to +0xe24. It makes two powf calls (at 0x5be0a4 and 0x5be0d4) with the fog mode constants 0x800, 0x801 and 0x2601 as arguments. Those values are the OpenGL fog mode enums for EXP, EXP2 and LINEAR. The routine is a per-fragment fog factor that chooses an equation by mode. Its returns (0x5be000, 0x5be078) carry values the render does not resolve.

- `__glFogVertex` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5be0f0
  **Inferred.** Reads a word at a0+0xe00 (lw at 0x5be134) and fog parameters at a0+0xe1c and +0xe20 (lwc1 at 0x5be1c0 and 0x5be1c4). It makes two powf calls (at 0x5be1e4 and 0x5be214) with the same fog mode constants as __glFogFragmentSlow at 0x5bdf30 (0x800, 0x801, 0x2601). It is the per-vertex form of the fog factor, with three returns (0x5be180, 0x5be190, 0x5be1a4) whose values are unknown from the render.

- `__glFogVertexLinear` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5be230
  **Inferred.** The linear-only specialization of __glFogVertex at 0x5be0f0: it makes no powf call. It reads fog parameters at a0+0xe1c and +0xe20 and the float at abs 0xc3f378 (lwc1 at 0x5be268). Its three returns all give the constant 0x67a948 (0x5be294, 0x5be29c, 0x5be2a8). The name matches the LINEAR mode in the fog enum set that the slow variants switch on.

- `__glFogColorSlow` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5be2c0
  **Inferred.** Reads the word at a0+0x6638 (lw at 0x5be2c0), the float at abs 0xc3f378, and fog parameters at a0+0xe04, +0xe08, +0xe0c and +0xe24. Both returns give the word at [a0+26168] (0x5be2ec, 0x5be33c). The name suggests the fog colour path. The same field at a0+26168 is a loop bound in __glFogSpan at 0x5bcf80 (blez at 0x5bd010), so the return may be a count and not a colour.

- `__glExtractBumpmap` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5c04d0
  **Inferred.** Reads the input block at a1: words at +0x10, +0x20 and +0x24, and an 8-byte value at +0x0 (lw at 0x5c04e8 to 0x5c04fc, ld at 0x5c04f4). It bounds-checks the indices against [a1+32] and [a1+36] (bltz at 0x5c04d8 and 0x5c04e0, beq at 0x5c04f8, bne at 0x5c0504). It writes four float stores to the output at a7+0 and a7+4 (swc1 at 0x5c0514 to 0x5c0560). It returns 0x6786a8 on both returns (0x5c0518, 0x5c055c). The name points at extracting a bump map from a texel block; the bounds checks support that shape, and the bump-map arithmetic is unknown.

- `__glExtractBumpmap_B` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5c2310
  **Inferred.** The second bump-map extraction routine. It reads a word at a1+0x10 and an 8-byte value at a1+0 (lw at 0x5c2310, ld at 0x5c2320), then two byte table lookups at table(0x3) and table(0x2) (lb at 0x5c2338 and 0x5c2340). It writes two floats to a7+0 and a7+4 (swc1 at 0x5c2368 and 0x5c2370) and returns 0x676868 (0x5c236c). It is a smaller form of __glExtractBumpmap at 0x5c04d0, without the bounds checks; the name is the only evidence for the bump-map role.

- `ClampCoordNearest` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5c9c00
  **Inferred.** Calls floor at 0x5c9d44 with the wrap-mode constants 0x8742, 0x8743, 0x6080 and 0x6081 as arguments. The constants 0x2900 (CLAMP), 0x8370 (MIRRORED_REPEAT) and 0x812d (CLAMP_TO_BORDER) in the same family are OpenGL texture wrap enums. It returns 0x812d on two paths (0x5c9c94, 0x5c9cf0) and one of 0x812d or an unknown value on a third (0x5c9ca8). The role is a texture coordinate clamp for nearest filtering, with the wrap mode chosen by the caller.

- `ClampCoordLinear` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5c9dc0
  **Inferred.** The linear-filter counterpart of ClampCoordNearest at 0x5c9c00. It calls floor three times (at 0x5ca040, 0x5ca0b0 and 0x5c9f48) with wrap-mode constants 0x8370, 0x8742, 0x6081 and 0x2900, which fits splitting a coordinate into a texel index and a fraction for bilinear weights. Its returns carry the floor result (0x5c9f88) or one of two values the render does not resolve (0x5c9fa4).

- `__glNearestFilter1` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ca0f0
  **Inferred.** Calls ClampCoordNearest at 0x5c9c00 (bgezall at 0x5ca148) on one coordinate, with the wrap mode from [a1+124]. It then makes an indirect call at 0x5ca174 with a3 and a4 set to 0. The name indicates a one-dimensional nearest-texel lookup. The indirect target is unnamed.

- `__glNearestFilter2` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ca1a0
  **Inferred.** Calls ClampCoordNearest at 0x5c9c00 twice (bgezall at 0x5ca20c and 0x5ca230), on the coordinate float registers f15 and f16 with wrap modes from [a1+124] and [a1+128]. It then makes an indirect call at 0x5ca25c. The name and the two clamps point at a two-dimensional nearest-texel lookup. The indirect target is unnamed.

- `__glNearestFilter3` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ca280
  **Inferred.** Calls ClampCoordNearest at 0x5c9c00 three times (bgezall at 0x5ca300, 0x5ca31c and 0x5ca33c), on the float registers f15, f16 and f17 with wrap modes from [a1+124], [a1+128] and [a1+132]. It then makes an indirect call at 0x5ca368. The name and the three clamps point at a three-dimensional nearest-texel lookup. The indirect target is unnamed.
