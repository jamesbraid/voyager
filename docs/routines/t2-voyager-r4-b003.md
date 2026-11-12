# Voyager tier-2 batch 3 routine roles

Routines from the fglrx_dri64 texture and filter code, read from the rendered facts of the n64 build.

- `__glLinearFilter1` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ca3a0
  **Inferred.** Looks like a one-dimensional linear texel filter. It clamps the sample coordinate through `ClampCoordLinear` at 0x5c9dc0 (called at 0x5ca414), takes `floorf` of the coordinate at 0x5ca424, and branches on a base-format value from the texture record (compares against 0x1902, 0x1906 to 0x190a and 0x8049). It then writes four floats to the output block at a6 (stores at 0x5ca4e0 to 0x5ca5a4). The two indirect calls at 0x5ca454 and 0x5ca47c are the per-sample fetches, by call pattern only; their targets are not resolved here.

- `__glLinearFilter2` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ca5c0
  **Inferred.** The two-dimensional form of the linear filter. Two `ClampCoordLinear` calls (0x5ca63c and 0x5ca674) use the texture coordinates at a2+32 and a2+36, each is floored (`floorf` at 0x5ca688 and 0x5ca69c), and four indirect calls from 0x5ca6cc to 0x5ca744 look like the neighbouring-texel fetches for the bilinear blend. The same base-format branch set as `__glLinearFilter1` selects the store path that writes four floats to a6.

- `__glLinearFilter3` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ca920
  **Inferred.** The three-dimensional linear filter. Three `ClampCoordLinear` calls (0x5ca9a0, 0x5ca9d0, 0x5caa00) use the coordinates at a2+32, a2+36 and a2+40, three `floorf` calls run from 0x5caa10 to 0x5caa40, and eight indirect calls from 0x5caa74 to 0x5cab8c look like the eight-texel fetches of a trilinear-style blend. The base-format branches at 0x5cabb0 to 0x5cad68 pick the store path that writes a6 (0x5cac80 to 0x5cae68). The routine returns the constant 0x1907 on both exits (0x5cad94, 0x5cae6c).

- `__glLinearFilter` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cae80
  **Inferred.** A small dispatch stub. It reads a field at a1+0xb0, the record table pointer at a1+40, and the index at a1+176, scales that index by 8 (the shift at 0x5caea4), loads three floats (+0x2c, +0x30, +0x34) from the selected record, and calls the helper at 0x5caec8 with that record pointer and the scaled index. The call passes the record pointer and the scaled index; the facts do not show what the helper does with the three float values.

- `__glNearestFilter` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5caee0
  **Inferred.** The nearest-neighbour counterpart of `__glLinearFilter`. It uses the same record-table lookup (a1+40 indexed by a1+176) and the same three float fields, but reads its extra 8-byte field at a1+0x180 rather than a1+0x178. It calls the helper at 0x5caf28 with the selected record.

- `__glNMNFilter` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5caf40
  **Inferred.** Name suggests nearest-mipmap-nearest sampling. The routine compares a float against the constant at 0xc3f3a8 (`c.le.s` at 0x5caf64, branch at 0x5caf88), selects a level from the state at a1+0x19c, and uses `ceilf` at 0x5cb020 with the level count from a1+176 and the state field a1+412. The indirect call at 0x5caff0 handles the texel fetch. The level-selection role is inferred from the compare, the `ceilf` call and the name; the exact selection formula is not in the rendered facts.

- `__glLMNFilter` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb050
  **Inferred.** Name suggests linear-mipmap-nearest sampling, with the same shape as `__glNMNFilter`: the float compare against the constant at 0xc3f3a8 (0x5cb074), the state reads at a1+0xb0 and a1+0x19c, the `ceilf` call at 0x5cb130 for the level index, and an indirect fetch at 0x5cb100. The mipmap blend role is inferred from the name and the shape, not from a formula in the facts.

- `__glNMLFilter` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb160
  **Inferred.** Name suggests nearest-mipmap-linear sampling. The routine takes `floorf` at 0x5cb1f0 and 0x5cb280, makes two indirect fetches (0x5cb238 and 0x5cb274) and a third from 0x5cb3a4 that uses the record at a1+40 indexed by a1+412. A float compare at 0x5cb1a0 chooses between the two fetch paths, and the base-format branches at 0x5cb2b8 to 0x5cb344 pick the store path that writes a6 (0x5cb2f8, 0x5cb310, 0x5cb328, 0x5cb40c). The blend weights are a sub-fact not resolved by the facts.

- `__glLMLFilter` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb420
  **Inferred.** Name suggests linear-mipmap-linear sampling, with the same shape as `__glNMLFilter`. `floorf` runs at 0x5cb4b0 and 0x5cb540, two indirect fetches at 0x5cb4f8 and 0x5cb534 and a third at 0x5cb664, a float compare at 0x5cb464 picks the path, and the base-format branches at 0x5cb578 to 0x5cb604 choose the store path to a6 (0x5cb5b8, 0x5cb5d0, 0x5cb5e8, 0x5cb6c8). The trilinear blend role is inferred from the name and the two-path shape.

- `__glTextureModulateL` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb6e0
  **Inferred.** Modulate-environment helper for a luminance texture. It reads one float from the texel at a3 (0x5cb6e0) and three floats from the fragment colour at a2 (0x5cb6e4 to 0x5cb6ec), then writes the three colour values back to a2 (0x5cb6f8 to 0x5cb708). The read-modify-write pattern on a2 with a single texel value fits per-channel modulation. The rendered facts show no arithmetic, so the operation is inferred from the access pattern.

- `__glTextureModulateLA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb710
  **Inferred.** Modulate-environment helper for a luminance-alpha texture. It reads the luminance texel at a3+0 and the alpha texel at a3+0xc, reads four floats of the fragment colour at a2 (0x5cb718 to 0x5cb724), and writes four floats back to a2 (0x5cb730 to 0x5cb748). The luminance texel is applied to the three colour channels and the alpha texel to alpha, inferred from the access pattern.

- `__glTextureModulateRGB` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb750
  **Inferred.** Per-channel modulate for an RGB texture. It loads three texel floats from a3 (0x5cb750, 0x5cb764, 0x5cb774) and three fragment floats from a2 (0x5cb754, 0x5cb758, 0x5cb768), and stores three values back to a2 at 0x5cb760, 0x5cb770 and 0x5cb780. The pairwise load-load-store pattern matches a component-wise product of texel and fragment colour, inferred from the access pattern.

- `__glTextureModulateRGBA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb790
  **Inferred.** Per-channel modulate for an RGBA texture. It pairs four texel floats from a3 (0x5cb790, 0x5cb7a4, 0x5cb7b4, 0x5cb7c4) with four fragment floats from a2 (0x5cb794, 0x5cb798, 0x5cb7a8, 0x5cb7b8) and writes all four components back (0x5cb7a0, 0x5cb7b0, 0x5cb7c0, 0x5cb7d0). Same access pattern as `__glTextureModulateRGB`, extended to alpha.

- `__glTextureModulateA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb7e0
  **Inferred.** Alpha-only modulate. It reads the texel alpha at a3+0xc and the fragment alpha at a2+0xc (0x5cb7e0, 0x5cb7e4) and writes the alpha back at 0x5cb7f0, leaving the colour words untouched.

- `__glTextureModulateI` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb800
  **Inferred.** Modulate for an intensity texture. It reads one texel float from a3 (0x5cb800) and four fragment floats from a2 (0x5cb804 to 0x5cb810), and writes all four components back (0x5cb81c to 0x5cb834). The single texel value applies to every channel, including alpha, inferred from the access pattern.

- `__glTextureDecalRGB` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb840
  **Inferred.** Decal for an RGB texture. It reads three texel floats from a3 (0x5cb844, 0x5cb854, 0x5cb864) and three state floats from a1+0x98, a1+0x9c and a1+0xa0 (0x5cb840, 0x5cb850, 0x5cb860), and writes three values to a2 (0x5cb84c, 0x5cb85c, 0x5cb870). The decal result is the texel colour written over the fragment colour; the exact combination with the state values is a sub-fact not resolved by the facts.

- `__glTextureDecalRGBA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb880
  **Inferred.** Decal for an RGBA texture. It uses the texel alpha at a3+0xc, reads the constant at 0xc3f378 (0x5cb894, likely 1.0), reads state values from a1+0x98 to a1+0xa0, and writes three colour components to a2 (0x5cb8b4, 0x5cb8d4, 0x5cb8f8). The alpha word at a2+0xc is not written. The blend weight from the texel alpha and the constant is inferred. The return value 0x66d2f8 is a constant on the exit path.

- `__glTextureBlendL` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb900
  **Inferred.** Blend for a luminance texture. It reads a blend colour from the first argument's record at a0+0x15cc, a0+0x15d0 and a0+0x15d4, the constant at 0xc3f378, the texel at a3+0, and the state at a1+0x98 to a1+0xa0. It writes three colour components to a2 (0x5cb934, 0x5cb954, 0x5cb978). The mix of the blend colour and the luminance texel is inferred from the access pattern. The return value 0x66d278 is a constant on the exit path.

- `__glTextureBlendLA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb980
  **Inferred.** Blend for a luminance-alpha texture. It reads the luminance texel at a3+0 and the alpha texel at a3+0xc, the blend colour at a0+0x15cc to a0+0x15d4, the constant at 0xc3f378, and the state at a1+0x98 to a1+0xa0. It writes three colour components to a2 (0x5cb9b4, 0x5cb9d4, 0x5cb9f8) and alpha to a2+0xc (0x5cba08). The return value 0x66d1f8 is a constant on the exit path.

- `__glTextureBlendRGB` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cba10
  **Inferred.** Blend for an RGB texture. It reads three texel floats from a3 (0x5cba14, 0x5cba40, 0x5cba44), the blend colour from a0+0x15cc to a0+0x15d4, the constant at 0xc3f378 and the state at a1+0x98 to a1+0xa0, and writes three colour components to a2 (0x5cba4c, 0x5cba70, 0x5cba98). The return value 0x66d168 is a constant on the exit path.

- `__glTextureBlendRGBA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbaa0
  **Inferred.** Blend for an RGBA texture. It reads four texel floats from a3 (0x5cbaa4, 0x5cbad0, 0x5cbad4, 0x5cbb2c), the blend colour from a0+0x15cc to a0+0x15d4, the constant at 0xc3f378 and the state at a1+0x98 to a1+0xa0, and writes four components to a2 (0x5cbadc, 0x5cbb00, 0x5cbb28, 0x5cbb38). The return value 0x66d0d8 is a constant on the exit path.

- `__glTextureBlendA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbb40
  **Inferred.** Alpha-only blend. It has the same 20-byte access pattern as `__glTextureModulateA` at 0x5cb7e0: it reads the texel alpha at a3+0xc and the fragment alpha at a2+0xc and writes the alpha back at 0x5cbb50. The rendered facts do not show a separate blend-colour load, so the alpha product is the inferred role.

- `__glTextureBlendI` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbb60
  **Inferred.** Blend for an intensity texture. It reads the intensity texel at a3+0 (0x5cbb64), the blend colour at a0+0x15cc to a0+0x15d8 (four words, including alpha), the constant at 0xc3f378, and the state at a1+0x98 to a1+0xa4. It writes four components to a2 (0x5cbb94, 0x5cbbb4, 0x5cbbd4, 0x5cbbf8). The return value 0x66d018 is a constant on the exit path.

- `__glTextureReplaceL` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbc00
  **Inferred.** Replace for a luminance texture. It reads one texel float from a3 (0x5cbc00) and three state floats from a1+0x98, a1+0x9c and a1+0xa0 (0x5cbc04, 0x5cbc10, 0x5cbc1c), and writes three components to a2 (0x5cbc0c, 0x5cbc18, 0x5cbc28). The texel-to-colour mapping is a sub-fact not resolved by the facts; the write-out pattern is what the role rests on.

- `__glTextureReplaceLA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbc30
  **Inferred.** Replace for a luminance-alpha texture. It reads the luminance texel at a3+0 and the alpha texel at a3+0xc, plus four state floats from a1+0x98 to a1+0xa4, and writes four components to a2 (0x5cbc40, 0x5cbc4c, 0x5cbc58, 0x5cbc68). The mapping of texel to colour is a sub-fact not resolved by the facts.
