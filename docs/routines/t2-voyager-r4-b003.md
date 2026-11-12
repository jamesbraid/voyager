# Voyager tier-2 batch 3 routine roles

Routines from the fglrx_dri64 texture and filter code, read from the rendered facts of the n64 build.

- `__glLinearFilter1` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ca3a0
  **Inferred.** Looks like a one-dimensional linear texel filter. It calls `ClampCoordLinear` at 0x5c9dc0 (called at 0x5ca414) with [a2+32] in a5, calls `floorf` at 0x5ca424 (its argument is not resolved in the facts), and compares a value loaded from a1+0x34 with 0x1902, 0x1906 to 0x190a and 0x8049 in a chain of branches. Stores at +0, +4 and +8 (0x5ca4e0, 0x5ca4f8, 0x5ca510) and +0xc (0x5ca5a4) go through the pointer the routine saved from a6 at entry; which stores run depends on those compares. The two indirect calls at 0x5ca454 and 0x5ca47c may be per-sample fetches, by call pattern only; their targets are not resolved here.
  Reviewed: 2026-11-12 (sonnet)

- `__glLinearFilter2` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ca5c0
  **Inferred.** The two-dimensional form of the linear filter, by shape. Two `ClampCoordLinear` calls (0x5ca63c and 0x5ca674) pass [a2+32] and [a2+36] in a5, two `floorf` calls follow (0x5ca688 and 0x5ca69c; their arguments are not resolved in the facts), and four indirect calls from 0x5ca6cc to 0x5ca744 may be neighbouring-texel fetches. The branches at 0x5ca760 to 0x5ca864 compare a value loaded from a1+0x34 with the same constants as `__glLinearFilter1` (0x1902, 0x1906 to 0x190a, 0x8049); stores at +0, +4, +8 and +0xc follow (0x5ca7dc to 0x5ca900) through a pointer the facts do not name.
  Reviewed: 2026-11-12 (sonnet)

- `__glLinearFilter3` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ca920
  **Inferred.** The three-dimensional form of the linear filter, by shape. Three `ClampCoordLinear` calls (0x5ca9a0, 0x5ca9d0, 0x5caa00) pass [a2+32], [a2+36] and [a2+40] in a5, three `floorf` calls run from 0x5caa10 to 0x5caa40 (arguments not resolved in the facts), and eight indirect calls from 0x5caa74 to 0x5cab8c may be texel fetches. The branches at 0x5cabb0 to 0x5cad68 compare a value loaded from a1+0x34 with the base-format constants; stores at +0, +4, +8 and +0xc (0x5cac80 to 0x5cae68) go through a pointer the facts do not name. Both returns (0x5cad94, 0x5cae6c) have v0 = 0x1907.
  Reviewed: 2026-11-12 (sonnet)

- `__glLinearFilter` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cae80
  **Inferred.** A small stub that calls through a pointer and returns its result. It loads the index at a1+176 (0x5cae84), the table pointer at a1+40 (0x5cae88) and an 8-byte value at +0x178 (0x5caeac); the record is [a1+40 + (index << 3)], loaded at 0x5caea4, and three floats at +0x2c, +0x30 and +0x34 of it are loaded (0x5caeb0 to 0x5caeb8). The call at 0x5caec8 has a0 and a1 as at entry, a2 = that record pointer and a3 = index << 3; its target is not resolved. The facts do not show what the callee does with the three floats.
  Reviewed: 2026-11-12 (sonnet)

- `__glNearestFilter` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5caee0
  **Inferred.** Same shape as `__glLinearFilter`, by comparison. It loads the index at a1+176 and the table pointer at a1+40, loads the record [a1+40 + (index << 3)] at 0x5caf04, loads three floats at +0x2c, +0x30 and +0x34 of it, and loads an 8-byte value at +0x180 (0x5caf0c) where `__glLinearFilter` loads one at +0x178 (the facts do not name the base register of either). The call at 0x5caf28 has a2 = the record pointer and a3 = index << 3; its target is not resolved. Role (from name): the nearest-neighbour counterpart of `__glLinearFilter`.
  Reviewed: 2026-11-12 (sonnet)

- `__glNMNFilter` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5caf40
  **Inferred.** Role (from name): nearest-mipmap-nearest sampling. Facts: a float compare against the constant at 0xc3f3a8 (`c.le.s` at 0x5caf64, branch at 0x5caf88); one side of that branch loads a value at +0x19c (0x5caf90); a further branch at 0x5cafb4 goes to the `ceilf` call at 0x5cb020 when `f1 < f14` is false, and that call has a3 = [a1+176] and a5 = [a1+412] in the facts. The indirect call at 0x5caff0 has a0 and a1 as at entry and a4 = a6 at entry; its target is not resolved. That the compare and `ceilf` select a mipmap level is an inference from the name; the selection formula is not in the facts.
  Reviewed: 2026-11-12 (sonnet)

- `__glLMNFilter` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb050
  **Inferred.** Role (from name): linear-mipmap-nearest sampling. Same shape as `__glNMNFilter`: a float compare against the constant at 0xc3f3a8 (`c.le.s` at 0x5cb074, branch at 0x5cb098), a load at +0x19c on one side (0x5cb0a0), a branch at 0x5cb0c4 that goes to the `ceilf` call at 0x5cb130 (a3 = [a1+176], a5 = [a1+412]) when `f1 < f14` is false, and an indirect call at 0x5cb100 whose target is not resolved. The mipmap blend role is inferred from the name and the shape, not from a formula in the facts.
  Reviewed: 2026-11-12 (sonnet)

- `__glNMLFilter` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb160
  **Inferred.** Role (from name): nearest-mipmap-linear sampling. Facts: `floorf` calls at 0x5cb1f0 and 0x5cb280; indirect calls at 0x5cb238 and 0x5cb274 and a third at 0x5cb3a4 whose a2 is the record [a1+40 + (a1+412 << 3)]; targets not resolved. A float compare (`c.le.s` at 0x5cb1a0, branch at 0x5cb1d4) goes to the code at 0x5cb380, which holds the call at 0x5cb3a4, when it is taken, and falls into the two-call path otherwise. A store at +0xc (0x5cb40c) precedes the return at 0x5cb410. On the two-call path, branches at 0x5cb2b8 to 0x5cb344 compare a value loaded from a1+0x34 with the base-format constants (0x1902, 0x1906 to 0x190a, 0x8049) and stores at +0, +4 and +8 follow (0x5cb2f8, 0x5cb310, 0x5cb328) through a pointer the facts do not name. The blend weights are not resolved by the facts.
  Reviewed: 2026-11-12 (sonnet)

- `__glLMLFilter` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb420
  **Inferred.** Role (from name): linear-mipmap-linear sampling, with the same shape as `__glNMLFilter`. Facts: `floorf` calls at 0x5cb4b0 and 0x5cb540; indirect calls at 0x5cb4f8 and 0x5cb534 and a third at 0x5cb664; targets not resolved. A float compare (`c.le.s` at 0x5cb464, branch at 0x5cb498) goes to the code at 0x5cb640, which holds the call at 0x5cb664, when it is taken, and falls into the two-call path otherwise. A store at +0xc (0x5cb6c8) precedes the return at 0x5cb6cc. On the two-call path, branches at 0x5cb578 to 0x5cb604 compare a value loaded from a1+0x34 with the base-format constants and stores at +0, +4 and +8 follow (0x5cb5b8, 0x5cb5d0, 0x5cb5e8) through a pointer the facts do not name. The trilinear blend role is inferred from the name and the two-path shape.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureModulateL` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb6e0
  **Inferred.** Modulate-environment helper for a luminance texture. It reads one float from the texel at a3 (0x5cb6e0) and three floats from the fragment colour at a2 (0x5cb6e4 to 0x5cb6ec), then writes the three colour values back to a2 (0x5cb6f8 to 0x5cb708). The read-modify-write pattern on a2 with a single texel value fits per-channel modulation. The rendered facts show no arithmetic, so the operation is inferred from the access pattern.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureModulateLA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb710
  **Inferred.** Modulate-environment helper for a luminance-alpha texture. It reads the luminance texel at a3+0 and the alpha texel at a3+0xc, reads four floats of the fragment colour at a2 (0x5cb718 to 0x5cb724), and writes four floats back to a2 (0x5cb730 to 0x5cb748). The luminance texel is applied to the three colour channels and the alpha texel to alpha, inferred from the access pattern.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureModulateRGB` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb750
  **Inferred.** Per-channel modulate for an RGB texture. It loads three texel floats from a3 (0x5cb750, 0x5cb764, 0x5cb774) and three fragment floats from a2 (0x5cb754, 0x5cb758, 0x5cb768), and stores three values back to a2 at 0x5cb760, 0x5cb770 and 0x5cb780. The pairwise load-load-store pattern matches a component-wise product of texel and fragment colour, inferred from the access pattern.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureModulateRGBA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb790
  **Inferred.** Per-channel modulate for an RGBA texture. It pairs four texel floats from a3 (0x5cb790, 0x5cb7a4, 0x5cb7b4, 0x5cb7c4) with four fragment floats from a2 (0x5cb794, 0x5cb798, 0x5cb7a8, 0x5cb7b8) and writes all four components back (0x5cb7a0, 0x5cb7b0, 0x5cb7c0, 0x5cb7d0). Same access pattern as `__glTextureModulateRGB`, extended to alpha.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureModulateA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb7e0
  **Inferred.** Alpha-only modulate. It reads the texel alpha at a3+0xc and the fragment alpha at a2+0xc (0x5cb7e0, 0x5cb7e4) and writes the alpha back at 0x5cb7f0, leaving the colour words untouched.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureModulateI` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb800
  **Inferred.** Modulate for an intensity texture. It reads one texel float from a3 (0x5cb800) and four fragment floats from a2 (0x5cb804 to 0x5cb810), and writes all four components back (0x5cb81c to 0x5cb834). The single texel value applies to every channel, including alpha, inferred from the access pattern.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureDecalRGB` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb840
  **Inferred.** Decal for an RGB texture. It reads three texel floats from a3 (0x5cb844, 0x5cb854, 0x5cb864) and three state floats from a1+0x98, a1+0x9c and a1+0xa0 (0x5cb840, 0x5cb850, 0x5cb860), and writes three values to a2 (0x5cb84c, 0x5cb85c, 0x5cb870). The decal result is the texel colour written over the fragment colour; the exact combination with the state values is a sub-fact not resolved by the facts.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureDecalRGBA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb880
  **Inferred.** Decal for an RGBA texture. It uses the texel alpha at a3+0xc, reads the constant at 0xc3f378 (0x5cb894, 1.0 in the image), reads state values from a1+0x98 to a1+0xa0, and writes three colour components to a2 (0x5cb8b4, 0x5cb8d4, 0x5cb8f8). The alpha word at a2+0xc is not written. The blend weight from the texel alpha and the constant is inferred. The return at 0x5cb8f4 has v0 = 0x66d2f8.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureBlendL` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb900
  **Inferred.** Blend for a luminance texture. It reads a blend colour from the first argument's record at a0+0x15cc, a0+0x15d0 and a0+0x15d4, the constant at 0xc3f378, the texel at a3+0, and the state at a1+0x98 to a1+0xa0. It writes three colour components to a2 (0x5cb934, 0x5cb954, 0x5cb978). The mix of the blend colour and the luminance texel is inferred from the access pattern. The return at 0x5cb974 has v0 = 0x66d278.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureBlendLA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cb980
  **Inferred.** Blend for a luminance-alpha texture. It reads the luminance texel at a3+0 and the alpha texel at a3+0xc, the blend colour at a0+0x15cc to a0+0x15d4, the constant at 0xc3f378, and the state at a1+0x98 to a1+0xa0. It writes three colour components to a2 (0x5cb9b4, 0x5cb9d4, 0x5cb9f8) and alpha to a2+0xc (0x5cba08). The return at 0x5cba04 has v0 = 0x66d1f8.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureBlendRGB` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cba10
  **Inferred.** Blend for an RGB texture. It reads three texel floats from a3 (0x5cba14, 0x5cba40, 0x5cba44), the blend colour from a0+0x15cc to a0+0x15d4, the constant at 0xc3f378 and the state at a1+0x98 to a1+0xa0, and writes three colour components to a2 (0x5cba4c, 0x5cba70, 0x5cba98). The return at 0x5cba94 has v0 = 0x66d168.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureBlendRGBA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbaa0
  **Inferred.** Blend for an RGBA texture. It reads four texel floats from a3 (0x5cbaa4, 0x5cbad0, 0x5cbad4, 0x5cbb2c), the blend colour from a0+0x15cc to a0+0x15d4, the constant at 0xc3f378 and the state at a1+0x98 to a1+0xa0, and writes four components to a2 (0x5cbadc, 0x5cbb00, 0x5cbb28, 0x5cbb38). The return at 0x5cbb34 has v0 = 0x66d0d8.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureBlendA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbb40
  **Inferred.** Alpha-only blend, by shape. It has the same access pattern as `__glTextureModulateA` at 0x5cb7e0: it reads the texel alpha at a3+0xc and the fragment alpha at a2+0xc and writes the alpha back at 0x5cbb50. The facts show no blend-colour load, so the alpha product is the inferred role.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureBlendI` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbb60
  **Inferred.** Blend for an intensity texture. It reads the intensity texel at a3+0 (0x5cbb64), the blend colour at a0+0x15cc to a0+0x15d8 (four words, including alpha), the constant at 0xc3f378, and the state at a1+0x98 to a1+0xa4. It writes four components to a2 (0x5cbb94, 0x5cbbb4, 0x5cbbd4, 0x5cbbf8). The return at 0x5cbbf4 has v0 = 0x66d018.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureReplaceL` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbc00
  **Inferred.** Replace for a luminance texture. It reads one texel float from a3 (0x5cbc00) and three state floats from a1+0x98, a1+0x9c and a1+0xa0 (0x5cbc04, 0x5cbc10, 0x5cbc1c), and writes three components to a2 (0x5cbc0c, 0x5cbc18, 0x5cbc28). The texel-to-colour mapping is a sub-fact not resolved by the facts; the write-out pattern is what the role rests on.
  Reviewed: 2026-11-12 (sonnet)

- `__glTextureReplaceLA` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cbc30
  **Inferred.** Replace for a luminance-alpha texture. It reads the luminance texel at a3+0 and the alpha texel at a3+0xc, plus four state floats from a1+0x98 to a1+0xa4, and writes four components to a2 (0x5cbc40, 0x5cbc4c, 0x5cbc58, 0x5cbc68). The mapping of texel to colour is a sub-fact not resolved by the facts.
  Reviewed: 2026-11-12 (sonnet)
