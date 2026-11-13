# Tier-2 routine readings, voyager round 5, batch 1

Role entries for the 25 routines in batch 1 of the tier-2 reading round (targets 25 to 49 of the ranked list). Every routine is in the GLX driver DRI module at usr/X11R6/lib/modules/dri/fglrx_dri64.so. Each role comes from the rendered facts: instructions, calls, branch sides and returns. Entries stay at inferred because the facts give control flow and callees, not field meanings.

- `__R300LoadILProgramVL` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x757890
  **Inferred.** Loads words from a1 at +0x1290 [@0x757894] and +0x1294 [@0x7578a4] and appends words to the buffer position passed in a0 [@0x7578cc] [@0x7578c8], then keeps storing through the advanced position [@0x7579e0]. The branch at 0x7578b8 is taken when a2 is zero [@0x7578b8 taken zero], which skips the first two stores. The only return is at 0x757fd0, with v0 left as an unresolved value [@0x757fd0]. Role (from facts): appends a run of words, many of them copied from fields of a1, to the buffer at a0, with the a2 flag gating the first stores [@0x7578b8 taken zero].
  Reviewed: 2026-11-12

- `__R300ActivateILProgramDP` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x757ff0
  **Inferred.** Calls __R300LoadILProgramVL [call 1], which runs only when the word at a0+2000 is nonzero [@0x758018 fall nonzero]. The result of that call is returned at 0x758044 [@0x758044]. A second return at 0x75874c gives an unresolved value [@0x75874c]. Role (from facts): forwards the result of the load routine when the flag word at a0+2000 is set [call 1] [@0x758018 fall nonzero].
  Reviewed: 2026-11-12

- `__R300ClearCMask` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7ad420
  **Inferred.** Calls __glATISubmitBM [call 1, @0x7ad4f4 fall] and then makes calls to unnamed targets [call 2] [call 3]. It returns a value taken from an unnamed call [@0x7ad5d0]. Role (from name): clears the colour compression mask of a surface.
  Reviewed: 2026-11-12

- `__R300UpdateMultisampleRegsForBlt` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7ad960
  **Inferred.** Reads a byte at a0+0xa04 [@0x7ada58] and a byte at a2+0x47 [@0x7ada64]. Calls Screendoor [call 1]. The word at a0+1944 is compared with 4 at 0x7ad99c [@0x7ad99c taken]. It returns a1+56 [@0x7ada50]. Role (from name): updates the multisample registers used by a blit.
  Reviewed: 2026-11-12

- `__R300ResolveMultisampledColorBuffer` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7adcd0
  **Inferred.** Calls __R300ForceCmaskClear [call 1] late in the routine and skips it when the word at a2+24 shifted left by 0x26 is non-negative [@0x7af0e8 fall]. It has two returns: one at 0x7af110 gives a value built from a1 or the call result [@0x7af110], and one at 0x7af15c returns a1 [@0x7af15c]. Role (from name): resolves a multisampled colour buffer, forcing a compression-mask clear on one path.
  Reviewed: 2026-11-12

- `__R300AccumAccumulate` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7b0920
  **Inferred.** When the word at +1944 behind [a0]+276368 is 3 or 4 [@0x7b0980 taken] [@0x7b0988 taken] and both flag bytes tested at 0x7b0c84 and 0x7b0c90 are nonzero [@0x7b0c84 fall nonzero] [@0x7b0c90 fall nonzero], it first calls __glATISubmitBM [call 15] and fglX11ResolveFSAAColorBuffer [call 16], then runs the main path. The main path, which other modes enter directly and the flag test also reaches on its taken side, calls fglX11DrawableBufToBltSurface twice [call 1, @0x7b0c90 taken] [call 2, @0x7b0c90 taken], then __glATISubmitBM [call 4, @0x7b0c90 taken] and accumMultiBlt [call 7, @0x7b0c90 taken]. It programs the pixel shader with __R300ProgramPixelShader [call 8, @0x7b0c90 taken] and loads it with __R300LoadPixelShaderProgram [call 9, @0x7b0c90 taken]. The return at 0x7b0be0 returns the result of __glATISubmitBM [@0x7b0be0]. Role (from name): the accumulate step of the accumulation buffer, applied to a multisampled drawable.
  Reviewed: 2026-11-12

- `__R300AccumClear` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7b0d30
  **Inferred.** Calls __R300SetOverrideRendering [call 3] early, then writes accumulation offset and pitch registers with __R300WriteAccumOffsetRegisters [call 7] and __R300WriteAccumPitchRegisters [call 8]. It writes the draw rectangle with __R300WriteDrawRectRegisters [call 10], then calls __R300CompleteOverrideRendering [call 14], __glATISubmitBM [call 15] and an unnamed target [call 16]. It returns a value taken from that unnamed call [@0x7b11b0]. Role (from name): clears the accumulation buffer by programming the rendering state around a clear shader.
  Reviewed: 2026-11-12

- `__R300AccumLoad` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7b12b0
  **Inferred.** When the word at +1944 behind [a0]+276368 is 3 or 4 [@0x7b1310 taken] [@0x7b1318 taken] and both flag bytes tested at 0x7b1608 and 0x7b1614 are nonzero [@0x7b1608 fall nonzero] [@0x7b1614 fall nonzero], it first calls __glATISubmitBM [call 15] and fglX11ResolveFSAAColorBuffer [call 16], then runs the main path. The main path, which other modes enter directly and the flag test also reaches on its taken side, calls fglX11DrawableBufToBltSurface twice [call 1, @0x7b1614 taken] [call 2, @0x7b1614 taken], then __glATISubmitBM [call 4, @0x7b1614 taken] and accumMultiBlt [call 7, @0x7b1614 taken]. It converts a float with FloatToS16E7 only when the word at +345520 behind [a0] is zero [call 11, @0x7b13dc taken zero]. The return at 0x7b1564 returns the result of __glATISubmitBM [@0x7b1564]. Role (from name): loads the accumulation buffer back into the drawable.
  Reviewed: 2026-11-12

- `__R300AccumMult` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7b1a50
  **Inferred.** Calls fglX11DrawableBufToBltSurface [call 1], then __glATISubmitBM [call 3, @0x7b1adc fall nonzero] and accumMultiBlt [call 6, @0x7b1adc fall nonzero]; both sides of the byte test at 0x7b1adc rejoin before those calls. It converts a float factor with FloatToS16E7 only when the word at +345520 behind [a0] is zero [call 10, @0x7b1b00 taken zero]. The return at 0x7b1c88 returns the result of __glATISubmitBM [@0x7b1c88]. Role (from name): multiplies the accumulation buffer by a scale factor.
  Reviewed: 2026-11-12

- `__R300AccumAdd` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7b1d50
  **Inferred.** Calls fglX11DrawableBufToBltSurface [call 1], then __glATISubmitBM [call 3, @0x7b1ddc fall nonzero] and accumMultiBlt [call 6, @0x7b1ddc fall nonzero]; both sides of the byte test at 0x7b1ddc rejoin before those calls. It converts a float with FloatToS16E7 only when the word at +345520 behind [a0] is zero [call 10, @0x7b1e00 taken zero]. The return at 0x7b1f88 returns the result of __glATISubmitBM [@0x7b1f88]. Role (from name): adds the accumulation buffer into the drawable.
  Reviewed: 2026-11-12

- `ZBltFunc` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7b4e00
  **Inferred.** Calls __R300HWBltFunc [call 1] on the first path. When the word at a2+16 is nonzero, it calls fglX11CMMAllocBltSurface [call 2] [@0x7b5248 fall nonzero]. Later calls to __R300HWBltFunc are [call 3] and [call 4]. The return at 0x7b5000 gives either the result of __R300HWBltFunc or a1+32 [@0x7b5000]. Role (from name): a Z-buffer blit.
  Reviewed: 2026-11-12

- `ColorBltFunc` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7b59e0
  **Inferred.** Computes tiled alignment with __R300ComputeTiledAlignment [call 1] and tiled addresses with __R300ComputeTiledAddr [call 2] [call 3]. It issues blits through __R300HWBltFunc [call 4] [call 6] [call 7] [call 8] [call 9]. It has five returns; the one at 0x7b6818 returns a1 [@0x7b6818]. Role (from name): a colour blit with a path that works out tiled addresses before it blits.
  Reviewed: 2026-11-12

- `__R300ColorBltFuncOV` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7b6820
  **Inferred.** Loads 8-byte values from a2 at +0x0 and +0x8 [@0x7b6830] [@0x7b6834]. Calls __glATIAddPaletteToList [call 1]. Its return at 0x7b6ad0 returns the output position (a1 advanced as words were written) plus 0x40 [@0x7b6ad0]. Role (from name): the overlay colour blit, which registers a palette before drawing.
  Reviewed: 2026-11-12

- `__R300SetupCLUTTextures` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7b6b20
  **Inferred.** Reads the words at a0+0x2ac and a0+0x310 [@0x7b6b20] [@0x7b6b24]. It stores ten words into a1 at offsets from 0x0 to 0x24 [@0x7b6b64] [@0x7b6b90]. It returns a1+40 [@0x7b6b8c]. Role (from facts): writes a ten-word block at a1, using two fields of a0, and returns the address just past it [@0x7b6b8c].
  Reviewed: 2026-11-12

- `__R300OVSetupShader` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7b6ba0
  **Inferred.** Calls __R300SetupCLUTTextures [call 1] with a1+88 as its second argument. It returns ret(__R300SetupCLUTTextures)+40 [@0x7b6d20]. Role (from facts): hands the position a1+88 to the ten-word writer [call 1] and returns the address 40 bytes past the position that routine returns [@0x7b6d20].
  Reviewed: 2026-11-12

- `__R300SetupNullShader` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7b6d30
  **Inferred.** Writes a block of state words into a0 at offsets from 0x0 to 0x74 [@0x7b6d38] [@0x7b6e1c] [@0x7b6e4c]. It returns a0+120 [@0x7b6e50]. Role (from name): sets up the null shader state block.
  Reviewed: 2026-11-12

- `__R300ColorBlt3DSync` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7b6fd0
  **Inferred.** Calls __glATISubmitBM [call 1], then calls __R300HWBltFunc [call 2] and __glATISubmitBM [call 3]. It returns the constant 0x1 [@0x7b70b8]. Role (from name): syncs a 3D colour blit with the submit queue.
  Reviewed: 2026-11-12

- `__R300HWBlt_SetupTextureOffsetForBlit` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7b9af0
  **Inferred.** Loads the 8-byte value at a1 [@0x7b9af0]. It stores a first pair of words into a0 at offsets 0x0 and 0x4 [@0x7b9b34], and a second pair, ending at offset 0xc, only when a5 is nonzero [@0x7b9b64] [@0x7b9b40 fall nonzero]. The branch at 0x7b9b1c is taken when bit 0x2 of the word at [a1]+28 is clear [@0x7b9b1c taken zero]. It returns a0+8 or a0+16 [@0x7b9bb0] [@0x7b9bf4]. Role (from facts): appends one or two word pairs at a0 from the descriptor at a1 [@0x7b9af0] and returns the advanced position, 8 bytes past a0 for one pair or 16 for two [@0x7b9bb0].
  Reviewed: 2026-11-12

- `__R300HWBltFunc` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7b9c40
  **Inferred.** Calls __R300HWBlt_SetupDestRectangle [call 1]. When its result is zero the routine returns a1 [@0x7b9cc0 taken zero] [@0x7b9fa0]. Otherwise it calls __R300NoGCSetOverrideRendering [call 2, @0x7b9cc0 fall nonzero] and __R300UpdateMultisampleRegsForBlt [call 3, @0x7b9cc0 fall nonzero]. It sets the copy shader with __R300SetCopyTexturePixelShader [call 10, @0x7b9d78 taken] at this point, before the pitch call, and calls __R300OVSetupShader [call 4, @0x7b9d80 fall] on the other flag test. __R300HWBlt_SetupPitchAndOffset [call 5, @0x7b9cc0 fall nonzero] follows, then __R300HWBlt_SetupTextureOffsetForBlit [call 6, @0x7b9cc0 fall nonzero] and SetupTextureUnitForBlt [call 7, @0x7b9cc0 fall nonzero]. It draws with __R300DrawCopyRectangle [call 8, @0x7b9cc0 fall nonzero]. It returns ret(__R300DrawCopyRectangle)+16 [@0x7b9f14] or a1 [@0x7b9fa0]. Role (from name): the hardware blit that copies a rectangle.
  Reviewed: 2026-11-12

- `__R300NoGCSetOverrideRendering` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7ba780
  **Inferred.** Tests the flag word at a1+24 with shifted-bit branches, including [@0x7ba820 taken] and [@0x7ba82c taken]. It returns a0 plus an offset that depends on those tests [@0x7ba9dc] [@0x7ba9f4]. Role (from name): sets the override rendering state for the no-context blit path.
  Reviewed: 2026-11-12

- `__R300SetCopyTexturePixelShaderNonIL` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7badf0
  **Inferred.** Tests bits of a1 [@0x7bae18] [@0x7bae34]. It writes a run of words through an unresolved base [@0x7baec0] [@0x7baed4]. It returns table(0x48) [@0x7bb074]. Role (from name): builds the copy-texture pixel shader without the IL path.
  Reviewed: 2026-11-12

- `__R300AdjustCopyTexPixShaderOut` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7bb0c0
  **Inferred.** Stores at least five words into a0 at offsets from 0x0 to 0x10 [@0x7bb518] [@0x7bb538]. Loads from a3 at +0x90 [@0x7bb600] and +0x18 [@0x7bb638]. Its two returns give a0+36 [@0x7bb57c] [@0x7bb5f4], so the block it writes is nine words long. Role (from name): adjusts the output mapping of the copy-texture pixel shader.
  Reviewed: 2026-11-12

- `__R300HWBlt_SetupPitchAndOffset` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7bb7b0
  **Inferred.** The branch at 0x7bb7d0 is taken when bit 0x100 of a1 is clear [@0x7bb7d0 taken zero]. It loads an 8-byte slot of the global offset table at abs 0xc30f50, which holds the address of a global, not a global's value [@0x7bbbbc]. It returns a0+72 [@0x7bbd68] or a0+16 [@0x7bbe18]. Role (from name): sets the pitch and base offset of the blit surface.
  Reviewed: 2026-11-12

- `__R300SetOverrideRendering` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7bcb40
  **Inferred.** Calls __R300AbortZFillPassBatching [call 1] and SaveOverrideRenderRegs [call 2] first. It loads the pixel shader with __R300LoadPixelShaderProgram [call 3] and __R300LoadCachedPSProgToHwRegs [call 4, @0x7bcf94 fall], then writes the colour channel mask with __R300WriteColorChannelMask [call 6]. It returns the result of __R300WriteColorChannelMask [@0x7bd338]. Role (from name): installs the override rendering state for a blit.
  Reviewed: 2026-11-12

- `__R300CompleteOverrideRendering` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7bd370
  **Inferred.** Calls RestoreOverrideRenderRegs [call 1] first, then __R300LoadPixelShaderProgram [call 2, @0x7bd6b8 taken nonzero]. It writes the scissor and viewport registers with __R300WriteScissorRegisters [call 8] and __R300WriteViewportTransform [call 9, @0x7bd668 fall nonzero]. Its two returns are ret(__R300WriteViewportTransform) at 0x7bd694 [@0x7bd694] and ret(__R300WriteScissorRegisters) at 0x7bd6ac [@0x7bd6ac]. Role (from name): ends the override rendering that __R300SetOverrideRendering started.
  Reviewed: 2026-11-12
