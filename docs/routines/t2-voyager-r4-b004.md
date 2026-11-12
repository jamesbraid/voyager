# Tier-2 routine readings, voyager round 4 batch 4

Role entries for the 25 routines at positions 100 to 124 of the tier-2 target list, all in the fglrx DRI driver `usr/X11R6/lib/modules/dri/fglrx_dri64.so`. Each role uses only the rendered facts (loads, stores, calls, constants, branch targets). Where a role rests on a name or on constants matched from the public GL headers, the entry says so.

- `__glTextureReplaceRGB` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbc70
  **Inferred.** Moves three float words into the destination at a2 (offsets 0x0, 0x4 and 0x8). Each word is read as a pair: a1 at offsets 0x98, 0x9c and 0xa0 with a3 at offsets 0x0, 0x4 and 0x8. It makes no calls and has no branches, and the fourth word at a2 is not written. The name suggests a replace texture environment for RGB, but the render shows only the word moves and not the operation on each pair, so the mapping stays open.

- `__glTextureReplaceRGBA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbcb0
  **Inferred.** Moves four float words into a2 at offsets 0x0 to 0xc, each read from a1 at offsets 0x98, 0x9c, 0xa0 and 0xa4 paired with a3 at offsets 0x0, 0x4, 0x8 and 0xc. It makes no calls and no branches. The shape is the RGB variant with the alpha word added, which fits a replace environment for RGBA, though the facts do not show the operation itself.

- `__glTextureReplaceA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbd00
  **Inferred.** Moves one float word from a1 at offset 0xa4 and from a3 at offset 0xc into a2 at offset 0xc, so only the fourth word of the destination is written. It has no calls and no branches, and its return value is unknown (v0 = ?). The single-word shape fits a replace environment for alpha-only textures, with the same open operation as the other Replace routines.

- `__glTextureReplaceI` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbd20
  **Inferred.** Reads one word from a3 at offset 0x0 and four words from a1 at offsets 0x98 to 0xa4, and writes four words to a2 at offsets 0x0 to 0xc. It makes no calls and has no branches. The four-word write matches a replace environment for intensity textures, but the facts do not say which source word feeds each output, so the mapping is not settled.

- `ClampColor` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbd60
  **Inferred.** Compares each of the four float words at a2 (offsets 0x0 to 0xc) with a limit read from a1 at offsets 0x98 to 0xa4, using four c.lt.s compares at 0x5cbd68, 0x5cbd88, 0x5cbda4 and 0x5cbdc8. The stores to a2 at 0x5cbd78, 0x5cbd98, 0x5cbdb4 and 0x5cbddc sit on the path where the limit is below the stored word, which suggests a clamp of the colour to the limit block. It makes no calls, and the return values at 0x5cbdd8 and 0x5cbde0 are unknown (v0 = ?).

- `__glTextureAddL` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbdf0
  **Inferred.** Writes three words of the colour at a2 (offsets 0x0, 0x4 and 0x8), reading a1 at offsets 0x98, 0x9c and 0xa0 and a3 at offset 0x0 along the way. It then calls ClampColor at 0x5cbe54 with the same four arguments and returns that call's result. The name suggests an add environment for luminance, but the facts show only the loads, the stores and the call, so the per-word operation is not settled.

- `__glTextureAddLA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbe70
  **Inferred.** Writes four words of the colour at a2 (offsets 0x0 to 0xc), reading a1 at offsets 0x98, 0x9c and 0xa0 and a3 at offsets 0x0 and 0xc. It then calls ClampColor at 0x5cbee4 with the same arguments and returns its result. The shape matches the luminance-alpha add variant, but the per-word operation is not shown by the facts.

- `__glTextureAddRGB` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbf00
  **Inferred.** Writes three words of the colour at a2 (offsets 0x0, 0x4 and 0x8), reading a1 at offsets 0x98, 0x9c and 0xa0 with a3 at offsets 0x0, 0x4 and 0x8. It then calls ClampColor at 0x5cbf6c and returns that result. The name suggests an add environment for RGB; the facts do not show the arithmetic.

- `__glTextureAddRGBA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbf90
  **Inferred.** Writes four words of the colour at a2 (offsets 0x0 to 0xc), reading a1 at offsets 0x98 to 0xa0, a3 at offsets 0x0 to 0xc and a2 at offsets 0x0 to 0xc. It then calls ClampColor at 0x5cc00c and returns that result. The name suggests an add environment for RGBA; the per-word operation is not shown.

- `__glTextureAddI` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cc030
  **Inferred.** Writes four words of the colour at a2 (offsets 0x0 to 0xc), reading a1 at offsets 0x98, 0x9c, 0xa0 and 0xa4 and a2 at the same offsets, with one read of a3 at offset 0x0. It then calls ClampColor at 0x5cc0a8 and returns that result. The name suggests an add environment for intensity textures, but the facts do not settle the arithmetic.

- `BumpmapLookup` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cc0c0
  **Inferred.** Reads a per-unit state block through a0, with a pointer table at a0 + 0x3e500 indexed by a1 (8-byte entries). It loops while the count at a0 + 0x7634 stays positive (the blez at 0x5cc144 and the bne at 0x5cc1bc), and makes two indirect calls at 0x5cc270 and 0x5cc28c with 0x5c04d0 in a5. Two float words are stored to a2 at offsets 0x0 and 0x4 (0x5cc2a0 and 0x5cc2a8). The name suggests a bump-map texel lookup; the callee identities and the arithmetic are not shown.

- `TextureCrossbarLookup` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cc340
  **Inferred.** Selects a per-unit record through the pointer table at a0 + 0x3e500 indexed by a2, then branches on a format field at that record's offset 0x34. The compares use 0x1902, 0x1906, 0x1907, 0x1908, 0x1909, 0x190a, 0x8049 and 0x8779; the first six match the GL base-format enum values (DEPTH_COMPONENT, ALPHA, RGB, RGBA, LUMINANCE, LUMINANCE_ALPHA) and 0x8049 matches INTENSITY, as I recall them from the public GL headers. I did not check these values against a source, and I could not match 0x8779 to a name. It makes two indirect calls at 0x5cc444 and 0x5cc460 and writes four float words to a3 at offsets 0x0 to 0xc. The name suggests a texture crossbar lookup, but the callee identities are not shown.

- `ComputeTexCombine` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cc6e0
  **Inferred.** Reads float inputs from a1 at offsets 0x98 to 0xa4 and from the record in a2 at offsets 0x68 to 0x70, then dispatches on the constants 0x8574 to 0x8578 and 0x84c0 to 0x84c7 and on the operand codes 0x300 to 0x303. Those values match the GL texture-environment combine enums and the GL_TEXTURE0 unit enums as I recall them from the public GL headers, which is why the role is a texture-environment combine. It calls TextureCrossbarLookup at 0x5cc340 six times and ClampColor at 0x5cd4a4 once, and returns at 0x5cc8e8 and 0x5cd534. The constant match is from memory of the headers, not from a checked source.

- `__glTextureCombineL` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cd970
  **Inferred.** Reads a float from a1 at offset 0x98 and from a3 at offset 0x0, four words from a2 at offsets 0x0 to 0xc, and a1 at offset 0xa4. It calls ComputeTexCombine at 0x5cda08 with a2 set to a0 + 1288 × [a0 + 0x10dc] + 0x1564, and a7 set to 0x1564, then returns its result. The name suggests the combine environment for luminance; the record choice is shown by the facts, but the per-word role is not.

- `__glTextureCombineLA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cda20
  **Inferred.** Reads a1 at offsets 0x98 and 0xa4 with a3 at offsets 0x0 and 0xc, and four words from a2 at offsets 0x0 to 0xc. It calls ComputeTexCombine at 0x5cdac0 with the same record pointer as the other combine variants and returns its result. The name suggests a luminance-alpha combine; the facts show the input choice only.

- `__glTextureCombineRGB` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cdae0
  **Inferred.** Reads four words from a2 at offsets 0x0 to 0xc, and pairs a1 at offsets 0x98, 0x9c and 0xa0 with a3 at offsets 0x0, 0x4 and 0x8, with a1 at offset 0xa4 read alone. It calls ComputeTexCombine at 0x5cdb90 with the shared record pointer and returns its result. The name suggests a combine for RGB; the facts show the input choice only.

- `__glTextureCombineRGBA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cdbb0
  **Inferred.** Reads four words from a2 at offsets 0x0 to 0xc, and pairs a1 at offsets 0x98 to 0xa4 with a3 at offsets 0x0 to 0xc. It calls ComputeTexCombine at 0x5cdc68 with the shared record pointer and returns its result. The name suggests a combine for RGBA; the facts show the input choice only.

- `__glTextureCombineA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cdc80
  **Inferred.** Reads four words from a2 at offsets 0x0 to 0xc, plus a1 at offset 0xa4 and a3 at offset 0xc. It calls ComputeTexCombine at 0x5cdd18 with the shared record pointer and returns its result. The name suggests a combine for alpha only; the facts show the input choice only.

- `__glTextureCombineI` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cdd30
  **Inferred.** Reads a1 at offset 0x98 with a3 at offset 0x0, and four words from a2 at offsets 0x0 to 0xc. It calls ComputeTexCombine at 0x5cddc4 with the shared record pointer and returns its result. The name suggests a combine for intensity textures; the facts show the input choice only.

- `tweakCubeMapCoords` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cdde0
  **Inferred.** Compares its selector argument a2 against the small constants 0 to 5, which are held in registers at each compare site, through a long chain of beq branches starting at 0x5cdde4. It stores float words to a6 at offsets 0x0 and 0x4 on its paths, and the ten return sites (from 0x5cdf4c to 0x5ce1a4) leave v0 unknown. It makes no calls. The six-way selector and the name suggest a cube-map face coordinate transform, but the facts do not show the arithmetic that picks the coordinates.

- `__glNopPolygonRho` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ce2d0
  **Established.** The routine is 12 bytes and the render shows no loads, stores, calls or branches, only the return at 0x5ce2d4. It does nothing beyond returning, and the return value is unknown (v0 = ?).

- `__glComputePolygonRho` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ce2e0
  **Inferred.** Reads two float words from a1-indexed table at a0 + 0x3f59c and loads the per-unit pointer from a0 + 0x3e500 indexed by a1. It calls __glSetCubeMapCoords at 0x5b4920 four times, with the unit pointer as the first argument, and tweakCubeMapCoords at 0x5cdde0 twice. The name and the cube-map calls suggest a level-of-detail (rho) computation for polygons; the facts do not show the rho arithmetic.

- `__glNopLineRho` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ce9d0
  **Established.** The routine is 12 bytes and the render shows no loads, stores, calls or branches, only the return at 0x5ce9d4. It does nothing beyond returning, and the return value is unknown (v0 = ?).

- `__glComputeLineRho` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ce9e0
  **Inferred.** Reads two 8-byte words from a0 at offsets 0x3ef38 and 0x3ef30 and then the same per-unit table as the polygon variant. It calls __glSetCubeMapCoords at 0x5b4920 four times and tweakCubeMapCoords at 0x5cdde0 twice, and returns through the same record chain. The name and the cube-map calls suggest a level-of-detail (rho) computation for lines; the facts do not show the arithmetic.

- `__glFastTextureFragment` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cf1d0
  **Inferred.** Loads the unit index from a0 + 0x10dc, then loads an 8-byte pointer from the table at a0 + 0x3e500 indexed by that index, and a function pointer from that record at offset 0x168. It makes two indirect calls at 0x5cf234 and 0x5cf250, the second through a pointer whose load the facts do not resolve. The name suggests a fast-path fragment dispatch through the per-unit record; the callee identities are not shown.
