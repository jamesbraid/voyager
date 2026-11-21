# The register lists of the R300 state loaders, routine by routine

What `__R300InitRegs`, `__R300UpdateHWState`, `__R300LoadContext` and `__R300InitHardwareStateMachineTCL` put into the command stream,
register by register, with the shadow word of the GL context each value comes from. It replaces the constant-scan register lists in
sections 3 and 4 of [r300-stream-3d-state.md](r300-stream-3d-state.md), which are still correct for what they list but were never complete.

Source: `usr/X11R6/lib/modules/dri/fglrx_dri64.so` of the install in `root/` (ELF64, 14223320 bytes, symbols present). Addresses and
shadow offsets here are those of that file: `__R300InitRegs` at 0x7d81b0 (4660 bytes), `__R300UpdateHWState` at 0x7cf5a0 (3012),
`__R300LoadContext` at 0x7d5270 (4292), `__R300InitHardwareStateMachineTCL` at 0x8277c0 (100), and the helpers named below. The older pages in
this directory cite other addresses and shadow offsets for the same routines (for example the screen-door shadow at +0x54fc4 where this file has it at
+0x54fdc), so they describe another build of the module (the 6.5.22 patch); the semantics below agree with theirs where both state one. Method: the
Ghidra decompiler over each routine, read in full, with the header immediates checked against an `objdump` listing (the constants 0x1100, 0x1188, 0x11b0, 0x1300,
0x10a4, 0x12f2, 0x1381, 0x11a9 and 0x10c4 occur as `ori` operands at the expected places). Decompiler output is navigation; a value is
graded by the instruction it came from. Grades follow `AGENTS.md` section 5: **established** is what the code does, read in full; a register name is the AMD
name where the R3xx 3D guide (rev 1.0) or the R5xx *Acceleration* guide (rev 1.5) lists the offset, else a public Mesa or Linux name, marked *pub*; "-" is
unnamed in every source searched.

A type-0 header is 0x00cc rrrr: the register is the low 15 bits times four, and the count is bits 29:16 plus one. Shadow offsets are from the
GL context pointer, the first argument of each routine. The command buffer cursor is at +0x54aa8, its end at +0x54ab0, and each routine first
calls `__glATISubmitBM` until enough dwords are free.

## `__R300InitRegs` (0x7d81b0)

**Established.** Six packets, in this order, all with zero data: `GA_OFFSET` (0x4290, three registers: `GA_OFFSET`, and the two after it) ; `TX_FILTER0_0..15`
(0x4400, 16 registers); `TX_INVALTAGS` (0x4100); `US_TEX_INST_0..31` (0x4620, 32); the four 64-entry ALU banks (0x46c0, 256 registers); the
fragment constants (0x4c00, 128 registers). It writes no other register. Everything else it does is shadow and bookkeeping: it clears dozens of shadow words,
sets the fixed values the older page lists (`ZB_CNTL` shadow +0x54f20 = 0x10, `ZB_STENCILREFMASK` +0x54f28 = 0xffff00, `SC_SCREENDOOR` +0x54fdc = 0xffffff, `SC_EDGERULE`
+0x54f3c under mask 0xc0000000 = 0x2da49525, `VAP_VTE_CNTL` +0x55000 = 0x43f, the four `US_OUT_FMT` shadows +0x55a48 to +0x55a54 = 0x1b0f), calls
`__R300PixelShaderInitialize` (0x7440f0, which builds the null pixel-shader program in memory and writes no stream packet), and marks the units
dirty: it sets 0x7ffff in the word at +0xe2b8 and a run of bits in the word at +0xe2b0, appending the unit's update routine to the list at +0x50b98 when its bit was not already set.
It takes the tile-configuration word the hardware context keeps at +0xae0 (the `GB_TILE_CONFIG` copy), stores it at +0x54fcc, and sets the hardware-context word at +0xaf0 to 12, or to 16 when bit 16
of the copy is set; the sample-position shadows (+0x54ef0, +0x54ef4) follow (0x66666666 and 0x06666666, or 0x78888888 and 0x08888888).

## `__R300InitHardwareStateMachineTCL` (0x8277c0)

**Established.** Writes no register and no stream dword. It stores nine function pointers in the context, in +0x50cc0 to +0x50d70: the lighting, culling, matrix,
fog, vertex-shader, material, user-clip-plane, current-state and point/normal/triangle update routines (`__R300TCLUpdateLighting`,
`__R300TCLUpdateCullingState`, `__R300TCLUpdateMatrices`, `__R300UpdateFogState`, `__R300TCLVSUpdateShaderState`, `__R300TCLWriteMaterialData`,
`__R300TCLUpdateUserClipPlanes`, `__R300TCLUpdateCurrentState`, `__R300TCLUpdatePointNormalTriangleState`), and clears the word at +0x50d00. The registers those routines write are
not read here.

## `__R300UpdateHWState` (0x7cf5a0)

**Established.** It reads the unit-dirty word at +0x54be8 and the texture-dirty word at +0x54bec, runs `__R300UpdateHWTexState` with the second, and returns when the first is zero. It then waits for 0xbc free
dwords, and for each set bit of the first word writes the packets below, in this order, skipping the bits that are clear. It pads the end of the block with type-2 words
(0x80000000) to a 64-byte boundary of the stream address, advances the cursor, calls three routines for bits 20, 21 and 24, and clears both dirty words.

| Dirty bit | Registers written, with the shadow each value comes from |
|---|---|
| 0x100 | `RB3D_DSTCACHE_CTLSTAT` 0x4e4c = 10 |
| 0x2000000 | `ZB_ZCACHE_CTLSTAT` 0x4f18 = 3 |
| 0x1 | `FG_FOG_COLOR_R, _G, _B` 0x4bc8 to 0x4bd0 (+0x54edc, +0x54ee0, +0x54ee4); `FG_FOG_BLEND` 0x4bc0 (+0x54f70); `GA_FOG_OFFSET` 0x4298 (+0x54f00); `GA_FOG_SCALE` 0x4294 (+0x54f04); `GB_SELECT` 0x401c (+0x54eec) |
| 0x4 | `RB3D_BLENDCNTL` 0x4e04 and `RB3D_ABLENDCNTL` 0x4e08 (+0x54f08, +0x54f0c); `RB3D_CONSTANT_COLOR` 0x4e10 (+0x54f10); `RB3D_DITHER_CTL` 0x4e50 (+0x54f78) |
| 0x10000 | `RB3D_ROPCNTL` 0x4e18 (+0x54f80) |
| 0x200 | `FG_ALPHA_FUNC` 0x4bd4 (+0x54ed4) |
| 0x8000000 | `FG_DEPTH_SRC` 0x4bd8 (+0x54ed8) |
| 0x20000 | `ZB_ZTOP` 0x4f14 (+0x54f38) |
| 0x800 | `ZB_ZSTENCILCNTL` 0x4f04 (+0x54f24); `ZB_CNTL` 0x4f00 (+0x54f20) |
| 0x8 | `ZB_STENCILREFMASK` 0x4f08 (+0x54f28) |
| 0x1000 | `SC_HYPERZ_EN` 0x43a4 (+0x54f60); `ZB_BW_CNTL` 0x4f1c (+0x54f30) |
| 0x20 | `SU_POLY_OFFSET_FRONT_OFFSET` 0x42a8 (+0x54f90); `_BACK_OFFSET` 0x42b0 (+0x54f98); `_FRONT_SCALE` 0x42a4 (+0x54f94); `_BACK_SCALE` 0x42ac (+0x54f9c); `SU_POLY_OFFSET_ENABLE` 0x42b4 (+0x54f8c) |
| 0x2000 | `GA_POLY_MODE` 0x4288 (+0x54fb4); `GB_ENABLE` 0x4008 (+0x54fc8); `GB_SELECT` 0x401c (+0x54eec); `VAP_OUT_VTX_FMT_1` 0x2094 (+0x55018) |
| 0x8000 | `GA_POINT_SIZE` 0x421c (+0x55108); `GA_POINT_S1` 0x4208 and `GA_POINT_T1` 0x420c (+0x550fc, +0x55104); `GA_POINT_MINMAX` 0x4230 (+0x5510c); `GA_POINT_S0` 0x4200 (+0x550f8); `GA_POINT_T0` 0x4204 (+0x55100) |
| 0x4000 | `GA_LINE_CNTL` 0x4234 (+0x54fb8); `GA_LINE_STIPPLE_CONFIG` 0x4238 (+0x54fe0); `GA_LINE_S1` 0x4268 (+0x54fec) |
| 0x10 | `GA_COLOR_CONTROL` 0x4278 (+0x54fa4), through a helper that first aligns the cursor |
| 0x40 | `US_OUT_FMT_0..3` 0x46a4 (+0x55a48 to +0x55a54); `RB3D_COLOR_CLEAR_VALUE` 0x4e14 (+0x54f14); `ZB_DEPTHCLEARVALUE` 0x4f28 (+0x54f64) |
| 0x400 | `SU_CULL_MODE` 0x42b8 (+0x54fa8) |
| 0x80000 | `GB_AA_CONFIG` 0x4020 (+0x54ee8); `GB_MSPOS0` and `GB_MSPOS1` 0x4010 (+0x54ef0, +0x54ef4); `SC_SCREENDOOR` 0x43e8 (+0x54fdc); then `RB3D_CCTL` 0x4e00 from +0x54f74 through `__R300WriteCmaskEnableRegistersAbort` (below) |
| 0x2 | `SC_SCISSOR0` and `SC_SCISSOR1` 0x43e0 and 0x43e4 (+0x54fd4, +0x54f88) through `__R300WriteScissorRegisters` (0x7d1ab0), which also records the packet in the list at +0x5c868 when the flag at +0x5c854 is set |
| 0x80 | the viewport through `__R300WriteViewportTransform` (below) |
| 0x40000 | *pub* `R300_VAP_VSM_VTX_ASSM` 0x2184 (+0x550dc); `VAP_VTX_SIZE` 0x20b4 (+0x550e0); `VAP_OUT_VTX_FMT_0` and `_1` 0x2090 (+0x55014, +0x55018); `VAP_VTX_STATE_CNTL` 0x2180 (+0x54ff4); and, when bit 0x100000 is clear, `RS_COUNT` 0x4300 (+0x55828) and `RS_IP_0..7` 0x4310 (+0x557e8 to +0x55804) |
| 0x400000 | `VAP_CLIP_CNTL` 0x221c (+0x54ff0) |
| 0x800000 | `GB_ENABLE` 0x4008 (+0x54fc8); `VAP_OUT_VTX_FMT_1` 0x2094 (+0x55018) |
| 0x4000000 | the fragment constants at 0x4c00 (`US_ALU_CONST_*` in the R3xx guide), `4 * n` words from +0x55834, where n is the smaller of the words at +0xe2a0 and +0x7f30 |
| 0x100000, 0x200000, 0x1000000 | no direct write: calls `__R300LoadCachedPSProgToHwRegs`, `__R300TCLWritePointSpriteData` and `__R300TCLWriteUserClipPlaneData` through function pointers (their registers are not read here) |

Bits 0x1, 0x2, 0x4, ... are not a contiguous set: bits 8, 9, 16, 17, 25 and 27 and the others are as listed, and no write exists for a bit that is absent from the table.

## `__R300LoadContext` (0x7d5270)

**Established.** It waits for 0x6b free dwords and writes the whole state in one pass. In order:

1. `GA_OFFSET` 0x4290, only when the cursor is at the start of the buffer (+0x54aa0): `(0x7c80 - 12 * w) & 0xffff` where `w` is the hardware-context word at +8, or 0 when `w < 0xa61` or the word it points to at +0x20 is below 0xa61.
2. `RB3D_DSTCACHE_CTLSTAT` 0x4e4c = 10; `ZB_ZCACHE_CTLSTAT` 0x4f18 = 3.
3. `RB3D_COLOROFFSET0..3` 0x4e28 and `RB3D_COLORPITCH0..3` 0x4e38 (+0x55a84 to +0x55aa0) through `__R300WriteColorOffsetRegisters` (0x7d1c80) and `__R300WriteColorPitchRegisters` (0x7d1de0), each of which writes the first value from its argument (+0x55a84, +0x55a94) and takes the other three from the caller's following dwords. All the `__R300Write*` helpers below also record the packet's stream address and a kind code in a growing list of 24-byte entries at +0x55ef8 (cursor +0x55f00); what consumes the list is not read.
4. `RB3D_DITHER_CTL` 0x4e50 (+0x54f78); *pub* `R300_RB3D_CMASK_OFFSET0..3` 0x4e54 (+0x55aa4 to +0x55ab0); *pub* `R300_RB3D_CMASK_PITCH0..3` 0x4e64 (+0x55ab4 to +0x55ac0).
5. `VAP_CNTL_STATUS` 0x2140 (+0x54ffc); `SU_POLY_OFFSET_ENABLE` 0x42b4 (+0x54f8c); `SU_CULL_MODE` 0x42b8 (+0x54fa8); `GA_POLY_MODE` 0x4288 (+0x54fb4); `GA_LINE_CNTL` 0x4234 (+0x54fb8); `GA_ROUND_MODE` 0x428c (+0x54fc0); `GB_ENABLE` 0x4008 (+0x54fc8); `GA_TRIANGLE_STIPPLE` 0x4214 (+0x54fd0); `GA_LINE_STIPPLE_CONFIG` 0x4238 (+0x54fe0); `GA_LINE_STIPPLE_VALUE` 0x4260 (+0x54fe4); `GA_LINE_S0` 0x4264 (+0x54fe8); `GA_LINE_S1` 0x4268 (+0x54fec); `GB_SELECT` 0x401c (+0x54eec); `GB_AA_CONFIG` 0x4020 (+0x54ee8); `GB_MSPOS0/1` 0x4010 (+0x54ef0, +0x54ef4); `SC_SCREENDOOR` 0x43e8 (+0x54fdc); `RB3D_AARESOLVE_CTL` 0x4e88 (+0x55ac4); `GA_ENHANCE` 0x4274 (+0x54fc4); `SU_TEX_WRAP` 0x42a0 (+0x54fa0); `US_OUT_FMT_0..3` 0x46a4; `RB3D_COLOR_CLEAR_VALUE` 0x4e14 (+0x54f14); `GA_FOG_SCALE` 0x4294 (+0x54f04); `GA_FOG_OFFSET` 0x4298 (+0x54f00).
6. A second block, registered in a patch list at +0x5c868 when the flag at +0x5c854 is set: `GA_COLOR_CONTROL` 0x4278 (+0x54fa4); *pub* `R300_VAP_VSM_VTX_ASSM` 0x2184 (+0x550dc); `VAP_OUT_VTX_FMT_0/1` 0x2090 (+0x55014, +0x55018); `VAP_VTX_SIZE` 0x20b4 (+0x550e0); `VAP_VTX_STATE_CNTL` 0x2180 (+0x54ff4); `VAP_VTE_CNTL` 0x20b0 (+0x55000); `VAP_CLIP_CNTL` 0x221c (+0x54ff0); `VAP_PVS_VTX_TIMEOUT_REG` 0x2288 (+0x55004); `VAP_PSC_SGN_NORM_CNTL` 0x21dc (+0x550f4); `VAP_VF_MIN_VTX_INDX` 0x2138 = 0; `VAP_VF_MAX_VTX_INDX` 0x2134 = 0xffffff; *pub* `RADEON_WAIT_UNTIL` 0x1720 = 0x8000; `GB_TILE_CONFIG` 0x4018 (+0x54fcc, the copy read back by `__R300InitRegs`); `SC_EDGERULE` 0x43a8 (+0x54f3c).
7. `__R300PSCWrite` (0x7d95e0): `VAP_PROG_STREAM_CNTL_0..` 0x2150 and `VAP_PROG_STREAM_CNTL_EXT_0..` 0x21e0, `(n + 1) / 2` registers each, from the arrays at +0x55ee8 and +0x55ef0, when the stream count at +0x55ee0 is nonzero. Then `__R300UpdateHWTexState` with the mask at +0x54f6c.
8. `__R300WriteViewportTransform` (0x7d1910): `VAP_VPORT_XSCALE`, `_XOFFSET`, `_YSCALE`, `_YOFFSET`, `_ZSCALE`, `_ZOFFSET` 0x1d98 (six registers, from +0x550c8, +0x550c4, +0x550d0, +0x550cc, +0x550d8, +0x550d4) and `VAP_GB_VERT_CLIP_ADJ` and the three after it, 0x2220 (+0x550e4 to +0x550f0).
9. `GA_POINT_MINMAX` 0x4230, `GA_POINT_SIZE` 0x421c, `GA_POINT_S0`, `_T0`, `_S1`, `_T1` 0x4200 (four registers); `ZB_HIZ_OFFSET` 0x4f44 (+0x55110); `ZB_HIZ_PITCH` 0x4f54 (+0x55114).
10. `ZB_STENCILREFMASK` 0x4f08 (+0x54f28), only when a hardware-context mask test and the word at +0x42c68 allow; `RB3D_ROPCNTL` 0x4e18 (+0x54f80); `RB3D_CCTL` 0x4e00 (+0x54f74) through `__R300WriteCmaskEnableRegistersAbort` (0x7d2790), which clears bits 10:9 of the value when a surface exists (+0x54948), the chip byte at +0xac1 of the hardware context is 1 or 2 and both flags +0x55f41 and +0x55f42 are zero, and records the packet at kind 4.
11. When the poly-offset enable shadow (+0x54f8c) has bit 0 or bit 1 set: `SU_POLY_OFFSET_FRONT_OFFSET` 0x42a8, `_BACK_OFFSET` 0x42b0, `_FRONT_SCALE` 0x42a4, `_BACK_SCALE` 0x42ac.
12. `FG_ALPHA_FUNC` 0x4bd4; `FG_DEPTH_SRC` 0x4bd8; `FG_FOG_COLOR_R..B` 0x4bc8; `GB_SELECT`; `FG_FOG_BLEND` 0x4bc0; `GA_SOLID_RG` 0x427c (+0x54ef8) and `GA_SOLID_BA` 0x4280 (+0x54efc); `RB3D_BLENDCNTL/ABLENDCNTL` 0x4e04; `RB3D_CONSTANT_COLOR` 0x4e10; `ZB_ZTOP` 0x4f14; `ZB_FORMAT` 0x4f10 (+0x54f2c); `ZB_ZSTENCILCNTL` 0x4f04; `ZB_BW_CNTL` 0x4f1c; `ZB_CNTL` 0x4f00; `SC_HYPERZ_EN` 0x43a4; `SU_DEPTH_OFFSET` 0x42c4 (+0x54fac); `SU_DEPTH_SCALE` 0x42c0 (+0x54fb0); `ZB_DEPTHCLEARVALUE` 0x4f28; *pub* `R300_ZB_ZMASK_OFFSET` 0x4f30 (+0x54f68); *pub* `R300_ZB_ZMASK_PITCH` 0x4f34 (+0x54f34); and `ZB_DEPTHOFFSET` 0x4f20 and `ZB_DEPTHPITCH` 0x4f24 through `__R300WriteDepthOffsetRegisters` (0x7d1f40) and `__R300WriteDepthPitchRegisters` (0x7d20b0). Values come from the same shadows as the per-draw table above.
13. **Only when either flag +0x55f41 or +0x55f42 is nonzero** (both guard the same group): `GB_Z_PEQ_CONFIG` 0x4028 (+0x55a64; named in the R5xx guide only); `RB3D_DISCARD_SRC_PIXEL_LTE_THRESHOLD` and `_GTE_THRESHOLD` 0x4ea0 and 0x4ea4 (+0x55a6c and +0x55a68; named in the R5xx guide and Mesa's R500 list only); and five registers at 0x4f78 to 0x4f88 from +0x55a70 to +0x55a80, which no source names ("-"). `__R300InitRegs` seeds the shadows for these from the words at +0x54678 to +0x5468c, with +0x55a68 = `~` +0x54678.
14. The fragment constants 0x4c00 (32 registers of four words, +0x55834 and on) when `(hardware word +0xf5c & 0xffff) >> 15` is zero; then the cached pixel-shader program routines through function pointers (`__R300LoadLargePSProgToHwRegs`, `__R300LoadCachedPSProgToHwRegs`, `__R300LoadAllCachedPSProgInstToHwRegs`, `__R300TCLWritePointSpriteData`), `__ATITCLWriteFFXData` or the vertex-program fallback; and last, when bits 24 or 25 of the word at +0xf5c are set, `ZB_ZPASS_DATA` 0x4f58 = 0.

The R5xx-only registers in step 13 are written by the R300 module under a context flag, so the flag is a newer-chip flag; what sets it is not read here (**unknown**), and whether an R300 or R350 accepts those registers is not
settled by the R3xx guide, which lacks them (**unknown**).

## Where this leaves the block table

Every register the four routines write is named above or marked unnamed, and the loaders write the units in this order of dependence: texture and shader memories
in `__R300InitRegs`, everything else in `__R300LoadContext`, only what changed in `__R300UpdateHWState`. The registers written by the routines they call through
function pointers (the texture, shader, point-sprite, user-clip-plane, material and matrix updaters) are not in this page; their routines are the next ones to read.

## Review note

Independent review of a sample against `fglrx_dri64.so`. Confirmed: `__R300InitRegs` emits exactly six packet headers in the order 0x10a4, 0x1100, 0x1040, 0x1188, 0x11b0, 0x1300; in `__R300UpdateHWState` the shadow words are at the context plus 0x50000 plus the offsets given, bit 0x100 writes 0x1393 = 10, bit 0x2000000 writes 0x13c6 = 3, and bit 1 writes the fog colour (0x12f2, count 3, from +0x54edc to +0x54ee4), `FG_FOG_BLEND`, `GA_FOG_OFFSET`, `GA_FOG_SCALE` and `GB_SELECT` from the shadows named. The registers at 0x4f78 to 0x4f88 are in no revision of the AMD R3xx or R5xx guides held. Not re-checked: `__R300LoadContext` step by step, the remaining dirty-bit rows and the helper routines.
