# The 3D state the R300 GL module programs per draw, vertex submission, fences and texture upload

What state `fglrx_dri64.so` (IRIX 6.5.22, patch SG0005448) loads before and between draws on an R300 or R350, in which unit
(AMD names first: VAP, RS, US, TX, RB3D, ZB, SC, GA and SU), with the values that are fixed and where the variable ones
come from. It sits beside [r300-stream-pm4-packets.md](r300-stream-pm4-packets.md) (the packets that carry it) and
[r300-shader-formats.md](../opengl/r300-shader-formats.md) (the shader words), and uses
[r300-stream-clip-scissor.md](r300-stream-clip-scissor.md) for the SC part. Grades follow `AGENTS.md` section 5.

**How much was read.** The state loaders are large (`__R300LoadContext`, `__R300UpdateHWState`, `__R300InitRegs` are 4672 bytes
and more). The register sets below come from every type-0 header constant in them (a constant scan checked in the instruction
listing), so which registers each loader writes is **inferred**; the routines read **in full** for this page are named where a
value is **established**. The meaning of a shadow word is given only when a read routine shows the register it feeds.

## 1. Where state lives and how it reaches the chip

- **Shadow state.** The GL context holds a shadow of the hardware registers in words from about +0x54ec0 to +0x55b00, plus a state-dirty
  word at +0x54bd0 and a command-buffer cursor at +0x54a90 (end at +0x54a98, start at +0x54a88). **Established** (every
  loader writes the packet at the cursor and advances it; `__glATISubmitBM` consumes the buffer between start and cursor).
  Each loader checks for space first (`while (free dwords < N) __glATISubmitBM(...)`), so a block of state is never split by
  a submit.
- **Three emitters.** `__R300InitRegs` (at `__R300MakeCurrent`): clears and defaults. `__R300LoadContext`: reloads the complete
  state, used when the context becomes current again after another client or the server used the chip. `__R300UpdateHWState`
  (called from the draw validators): emits what changed. **Inferred** from names, call sites and the register sets.
- **Context hand-over.** Because the lock can pass to another process, the module reloads state after taking it back; a model
  must keep state independent per hardware context and not assume it persists across a lock change. **Inferred** from `__R300LoadContext`'s
  use; the exact trigger (a context-id change in the shared lock) is **unknown** in this release.

## 2. State fixed by `__R300InitRegs` (read in full)

All **established** (whole routine). These are the values at each `MakeCurrent`:

- A type-0 write of zeros to a three-register group at 0x4290 (`GA_OFFSET` and the two registers after it, header 0x210a4);
  zero to `TX_INVALTAGS` (0x4100, header 0x1040); zero fills of 16 registers at 0x4400 (`TX_FILTER0_0` to `_15`, header 0xf1100,
  one-register-write flag clear), 32 at 0x4620 (`US_TEX_INST_0`...), 256 at 0x46c0 (the four 64-entry ALU banks
  `US_ALU_RGB_ADDR`, `_ALPHA_ADDR`, `_RGB_INST`, `_ALPHA_INST`) and 128 at 0x4c00 (32 fragment constants of four words). So every shader memory is cleared at
  make-current.
- Shadows (register named where `__R300SetOverrideRendering`, read in full, shows which register each shadow word feeds):
  `RB3D_COLOR_CHANNEL_MASK` (0x4e0c, shadow +0x54f64) = 0xf; `SC_SCREENDOOR` (+0x54fc4) = 0xffffff; `SC_EDGERULE` (0x43a8, +0x54f24) = 0x2da49525
  under mask 0xc0000000; `ZB_CNTL` (0x4f00, +0x54f08) = 0x10; `ZB_ZSTENCILCNTL` (0x4f04, +0x54f0c) = 0; `ZB_STENCILREFMASK` (0x4f08, +0x54f10) =
  0xffff00 (reference 0, mask and write mask 0xff); `VAP_VTE_CNTL` (0x20b0, +0x54fe8) = 0x43f; `VAP_CLIP_CNTL` (0x221c, +0x54fd8) = 0
  (the override paths OR 0x1c000 into it); `SU_CULL_MODE` (0x42b8, +0x54f90) = 0 after the override paths. The Z and stencil clear value
  shadows are 0. **Established** for the stores; the register each feeds is established by the emitting routine for those named.
- **Sample positions** (`GB_MSPOS0` 0x4010, `GB_MSPOS1` 0x4014) are kept in +0x54ed8 and +0x54edc and are
  0x66666666 / 0x06666666 when the copy of `GB_TILE_CONFIG` has subpixel bit 16 clear and 0x78888888 / 0x08888888 when set. In
  the module as shipped the bit is always clear (clip page), so 0x66666666 / 0x06666666: every sample at the pixel centre in
  1/12-pixel units (6 of 12). **Established** for the arms; the reading as the centre is **inferred** from AMD's description of the
  fields as sample positions in subpixel units.
- The `GB_TILE_CONFIG` copy (hardware-context +0xac8, read through the register aperture, bit 16 cleared) is stored at +0x54fb4; its
  low nibble decides pipe-related words: `(copy & 0xf) >> 1` of 0 to 2 gives +0x55ab0 = 1 and 3 to 5 gives 2 (**established**; the
  meaning, the pipe count, is **inferred** from `PIPE_COUNT` bits 3:1). `GB_TILE_CONFIG` field values: AMD R3xx printed page 30.

## 3. What `__R300LoadContext` writes (register set, **inferred**)

Per unit, counting the one-register or n-register type-0 writes that the routine builds:

- **VAP**: `OUT_VTX_FMT_0/1` (0x2090, 0x2094), `VTE_CNTL` (0x20b0), `VTX_SIZE` (0x20b4), `VF_MAX/MIN_VTX_INDX` (0x2134, 0x2138), the status
  word at 0x2140, `VTX_STATE_CNTL` (0x2180), `PSC_SGN_NORM_CNTL` (0x21dc), `CLIP_CNTL` (0x221c), `PVS_VTX_TIMEOUT_REG` (0x2288).
- **GB/GA/SU/RE**: `GB_TILE_CONFIG` (0x4018), the point, line, polygon and offset registers 0x4200 to 0x4298 and 0x42a0 to 0x42c4 (point size and
  min/max, line control and stipple, `SU_POLY_OFFSET_*`, `SU_CULL_MODE`, fog scale and offset, colour control and solid
  colour, `GA_ENHANCE`, `GA_ROUND_MODE`), `SU_DEPTH_SCALE/OFFSET`.
- **SC**: `SC_HYPERZ_EN` (0x43a4), `SC_EDGERULE` (0x43a8), the scissor pair (0x43e0 and 0x43e4), `SC_SCREENDOOR` (0x43e8).
- **US**: `US_OUT_FMT` (four registers at 0x46a4), the fragment constants 0x4c00 (32 registers), and the programs through the shader loaders.
- **RB3D**: `RB3D_BLENDCNTL` and the blend-control pair (0x4e04, 2 registers), `CONSTANT_COLOR`, `COLOR_CLEAR_VALUE`, `ROPCNTL`,
  `DST_CACHE_CTLSTAT` (0x4e4c), `DITHER_CTL`, the colour-mask-RAM offsets and pitches (`CMASK_OFFSET/PITCH`, four registers each), `AARESOLVE_CTL`.
- **ZB**: `ZB_CNTL` (0x4f00), `ZSTENCILCNTL` (0x4f04), `STENCILREFMASK`, `FORMAT` (0x4f10), `ZTOP`, `ZCACHE_CTLSTAT`, `ZB_BW_CNTL` (0x4f1c),
  `DEPTHOFFSET/PITCH`, `DEPTHCLEARVALUE`, `ZMASK_OFFSET/PITCH`, the Hi-Z registers and the z-pass pair.
- **Shader memories and TX**: through `__R300PSCWrite`, `__R300UpdateHWTexState` and the program loaders (sections 4 and 5).

## 4. Per-draw: `__R300UpdateHWState` and the unit states

`__R300UpdateHWState` writes, as changed: VAP (0x2090 two registers, 0x2094, 0x20b4, 0x2180, 0x221c), GA/SU (point 0x4200 to 0x4208,
0x421c point size, 0x4230, line 0x4234/0x4238/0x4268, 0x4278, 0x4288 polygon mode, 0x4294/0x4298 fog, the four offset registers 0x42a4 to 0x42b0 and the
enable 0x42b4, 0x42b8 cull), RS (0x4300, 0x4310 eight interpolators), SC (0x43a4, 0x43e8), US (0x46a4), RB3D (0x4e04 two registers, 0x4e10, 0x4e14, 0x4e18,
0x4e4c, 0x4e50) and ZB (0x4f00, 0x4f04, 0x4f08, 0x4f14, 0x4f18, 0x4f1c, 0x4f28). **Inferred** (constants).

- **Texture units** (`__R300UpdateHWTexState`, 2912 bytes, registers of each of the 16 units written as separate single-register
  packets): `TX_FILTER0_n` (0x4400 + 4n), `TX_FILTER1_n` (0x4440), `TX_FORMAT0_n` (0x4480, the size word), `TX_FORMAT1_n` (0x44c0), `TX_OFFSET_n` (0x4540),
  `TX_CHROMA_KEY_n` (0x4580) and `TX_BORDER_COLOR_n` (0x45c0), the header being the unit's dword index plus the base index kept in +0x54bd8.
  **Inferred**: the header arithmetic was read for the first six units (the pattern is uniform) and the routine's tail was not read. `TX_INVALTAGS` (0x4100) is
  written after a texture is replaced and `TX_ENABLE` (0x4104) when the set of active units changes.
- **Texture offsets** are the card addresses of the surface the texture manager placed (see the upload path in section 8); the 16 units match AMD's
  `TX_ENABLE` bits (R3xx printed page 48).
- **Shader state.** `__R300ProgramPixelShader`, `__R300LoadPixelShaderProgram` and `__R300LoadCachedPSProgToHwRegs` load the fragment programs (US_CONFIG
  3 registers at 0x4600, `US_CODE_ADDR_0..3` at 0x4610, the ALU and texture instruction memories); `__R300LoadProgram`, `__R300TCLVSLoadProgram` and
  `__R300TCLWriteVertexShaderData` the vertex programs (PVS) as in [r300-command-stream.md](../opengl/r300-command-stream.md). The interpolator setup (`RS_COUNT` 0x4300, `RS_INST_COUNT` 0x4304,
  `RS_IP_0..7` 0x4310, `RS_INST_0` 0x4330) is written with the fragment program. **Inferred.**
- **Value ranges visible in constants:** `GB_MSPOS` as above; `PVS_CODE_CNTL_0..2` (0x22d0, three registers) with first, last and constant-base fields in the first words
  (shader page); `RB3D_DSTCACHE_CTLSTAT` (0x4e4c) 10 (flush and free) after every clear, blit and draw group (established in
  `__R300ClearCMask`, `__R300BltData`, `__R300AccumClear`); `ZB_ZCACHE_CTLSTAT` (0x4f18) 3 before a Z-mask clear (`__R300FastZStencilClear`);
  `ZB_BW_CNTL` bit 0 (Hi-Z enable) cleared around Hi-Z clears and restored from the shadow; `WAIT_UNTIL` (0x1720) 0x8000 after state reload and in
  the override-rendering blocks (bit meaning **unknown**: not in the public lists used). **Established** for the stores named.

## 5. Vertex submission formats

Four routes from a vertex to the VAP, chosen per draw by the validator (`__R300PickBepProcs`, `__R300TCLPickVertexArrayProcs`,
`__R300TCLPickProcs`; **inferred** from the names and the function-pointer tables they fill, whose targets are the packet writers
read):

1. **Vertex arrays in memory** (indexed or not): `3D_LOAD_VBPNTR` (0x2f) describing up to 16 arrays, then `3D_DRAW_VBUF` (0x28, walk 2) or
   `INDX_BUFFER` (0x33) with `3D_DRAW_INDX_2` (0x36, walk 1, 16- or 32-bit indices). **Established**
   (`__R300TCLProcessArrayPrimitive`, `...IndexBufferPrimitive`, read in full).
2. **Arrays described in registers**: the same arrays written as type-0 groups starting at 0x20c0 (`VAP_VTX_NUM_ARRAYS` and the array attribute and
   address registers, headers of the form `n << 16 | 0x830`), then `3D_DRAW_VBUF_2` (0xc0003400) with `VF_CNTL` (`__R300TCLProcessFastDrawArrays`,
   `__R300TCLSetupAOSTIMMO`). **Established** for the header form and the draw packet; the register meanings are AMD's `VAP_VTX_NUM_ARRAYS` / `VAP_VTX_AOS_*` (**inferred**).
3. **Inline vertices, state-based** (walk 0): positions and normals pushed through the vertex-state ports (0x2310 normal, 0x24a0 position, with
   the 0x2b and 0x2d packets for runs of float triples) with `VAP_VTX_ST_END_OF_PKT` (0x24ac) closing the primitive. **Established** in
   `__R300TCLDrawArraysV3F` and `...V3FN3F`; used for plain float position or position-and-normal arrays when the vertex program is simple.
4. **Software-built vertices as `3D_DRAW_IMMD_2`** (0x35): `__R300DrawCached*`, `__R300DrawIndexed*`, the point, line and triangle renderers and
   the clear rectangles: `VF_CNTL` then the vertex dwords. **Established** for the clear rectangle; **inferred** for the rest.

**The clear and resolve rectangle is one big point.** `__R300AccumClear` (read in full) draws its full-surface rectangle with
`VF_CNTL` = 0x10031 (primitive type 1 = point list, walk 3 = vertex data embedded, one vertex) in a 9-dword `3D_DRAW_IMMD_2`
(`VF_CNTL` and eight dwords: the point's x and y at the rectangle centre, z, w, then four colour floats), after writing
`GA_POINT_SIZE` (0x421c) with the rectangle's width in the low half and height in the high half, each multiplied by the subpixel
denominator (hardware-context +0xad8, 12 or 16) and a constant, and restoring `GA_POINT_SIZE` from its shadow afterwards
(a second write of header 0x1087). `__R300FastZStencilClear`, `__R300ClearColorBuffer3D`, `__R300FlushZStencilBuffer` and
`__R300ResolveMultisampledColorBuffer` use the same 9-dword form with a `GA_POINT_SIZE` write (scan). **Established** for
`__R300AccumClear`; **inferred** for the others. This use of +0xad8 as a scale for sizes confirms that it holds the subpixel
denominator ([clip page](r300-stream-clip-scissor.md) section 4). A model must therefore support point primitives of
the full surface size (up to the 13-bit scissor range) and clip them with the scissor and clip rule, since the sprite is
the only thing the clears draw.

Vertex data are single-precision floats for positions, normals and texture coordinates in the paths read; colours go through the packed-colour port
(0x249c `VAP_VTX_ST_USR_CLR_PKD`, 49 routines) or the four-float port (0x2460, 124 routines). Maximum 16 arrays (the `__R300CmdSpaceTable` has 16
entries). **Established** for the maximum, **inferred** for the colour ports.

## 6. Fences, scratch and the timeline

See [r300-stream-kernel-contract.md](r300-stream-kernel-contract.md) section 5. In the state stream: `RB3D_DSTCACHE_CTLSTAT` (0x4e4c) = 10 and
`RB2D_DSTCACHE_CTLSTAT` (0x342c) = 15 bracket every submit, so colour and depth are flushed before a time stamp is written, and the
time stamp registers (0x15e8, 0x15e0, 0x15f0) are in the submit routine only. `WAIT_FOR_IDLE` (0xc0002600) is added when bit 12 of the submit record's flags is set, and `__glATISubmitBM` sets the flags to 0x1000
for every submit it makes, so every submit from the GL context ends with the previous time stamp, `WAIT_FOR_IDLE` and the new time stamp.
**Established** (`__glATISubmitBM` and `__R300DRMSubmitPM4`, read in full); other callers of the submit routine (the X module's 2D path) were not checked.

## 7. Clears

- **Depth and stencil** (`__R300FastZStencilClear`, **established**, read in part): `ZB_BW_CNTL` bit 0 cleared (0x4f1c written with the shadow and 0xfffffffe),
  `ZB_ZCACHE_CTLSTAT` = 3 (0x4f18), `3D_CLEAR_ZMASK` with start and block count, optional `3D_CLEAR_HIZ` with the clear value replicated
  four times (the depth value shifted down to 8 bits), `ZB_BW_CNTL` restored, `DEPTHCLEARVALUE` (0x4f28) loaded from `__R300CalcHWDepthClearValue` (16-bit
  value duplicated in both halves for 16-bit depth, shifted left by 8 for 24-bit), then a 9-dword `3D_DRAW_IMMD_2` rectangle through the null shaders for any part not
  covered by whole blocks.
- **Colour mask RAM** (`__R300ClearCMask`, **established**, whole routine): `RB3D_COLOR_CLEAR_VALUE` (0x4e14, header 0x1385) set to the clear colour packed as
  alpha 24, red 16, green 8, blue 0 from floats times a constant (255), `RB3D_DSTCACHE_CTLSTAT` = 10, then `3D_CLEAR_CMASK`: offset, block count (size in 16-byte units divided by
  the pipe count word +0x55ab0), 0.
- **Colour buffer** (`__R300ClearColorBuffer3D`): a rectangle by `3D_DRAW_IMMD_2` with the null shader. **Inferred.**

## 8. Texture upload

- **Choice of path** (`__R300LoadTexture`, 1324 bytes, **established** for the selection logic): the routine first makes sure the chip is not
  using the surface (`__glATISubmitBM` when the command buffer holds work), then computes the pitch (`__R300ComputeTexPitch`) and
  byte sizes by format, with compressed formats (internal format codes 0xb, 0xc, 0xd: 4x4 blocks of 8 or 16 bytes) handled in whole blocks, and
  dispatches to one of three helpers:
  - `FUN_008efd00`: **host writes into the mapped texture surface** (via a function pointer at context +0xf468 that copies rows,
    then `__glATISubmitBM`), for small linear surfaces (pitch at most 0x2000 and fewer than five bytes per texel).
  - `FUN_008ef6c0`: the same with the **tiled address** of each row computed by `__R300ComputeTiledAddr`, for tiled surfaces.
  - `FUN_008ef400`: **staging through a host buffer**: the rows are copied into a malloc'ed buffer aligned to 4 KB with 32-byte aligned rows, then
    for each chunk of up to 512 rows the hardware context's callback at +0x420 (pin and map the host pages for the card) and a blit routine
    (context +0xf078, and the callback at +0x428) copy from host memory to the surface by a **bus-mastered blit read of host memory**,
    which is why the kernel's `firegl_LockPages` (ioctl 0xc020644b) and the platform's page translation matter
    ([onyx4-bus-attach.md](../kernel/onyx4-bus-attach.md)).
  **Established** for the structure (all three read for calls and loops, not every branch); **inferred** for which condition selects the
  third path.
- **Card-to-card copy** (cube-map to cache, mip generation, texture cache partition: `__R300CopyCubeMapTextureToCache`, `__R300GenerateMipMaps`,
  `__R300PartitionTextureCache`): 2D-engine blits through `__R300BltData`/`__R300BltBlock` with `INDX`-free packets
  (0x1b) or `3D_DRAW_IMMD_2` textured quads. **Inferred.**
- The surface itself is allocated by `fglX11CMMAllocTexSurface`/`__FGLTexMgrAllocMem` through `firegl_AllocBuffer`, and its card address goes into `TX_OFFSET_n`. **Inferred**
  (names and call chains).

## 9. What this leaves

- The packing of `3D_LOAD_VBPNTR` descriptor words and of the `VAP_VTX_AOS_*` registers (copied from context shadows that other routines build).
- The full per-draw state: only the register sets of the loaders and the values above are established; a model that accepts any value
  in these registers and takes the surfaces from `RB3D_COLOROFFSET/PITCH`, `ZB_DEPTHOFFSET/PITCH` and `TX_OFFSET_n` follows the stream.
- Whether a point with the size of the surface is the chip's own idea of a rectangle clear: it is how the stream does it.
