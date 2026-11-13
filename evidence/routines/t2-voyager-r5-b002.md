- `__R300ScissoredFastZStencilClear` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7bdd40
  **Inferred.** It calls __R300CalcHWDepthClearValue [call 1], calls __R300SetOverrideRendering [call 4, @0x7bdde4 fall], and calls __glATISubmitBM [call 5, @0x7be058 fall]. It calls __R300TCLFFXProgramNullShader [call 6, @0x7bdde4 fall] and then __R300WriteDrawRectRegisters [call 7], and calls __ATITCLFFXRestoreShader [call 11, @0x7be3dc fall]. A second clear path calls NotSoFastZStencilClear [call 16, @0x7bdde4 taken].
  Role (from name): a scissored depth and stencil clear that has several draw-rectangle call sites, with the null shader helper [call 6] ahead of the first draw-rectangle helper [call 7] and the shader restore [call 11].
  Reviewed: 2026-11-12

- `__R300FastZStencilClear` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7bedd0
  **Inferred.** It calls __R300CalcHWDepthClearValue [call 1], __R300SetOverrideRendering [call 4, @0x7bf148 fall], and __R300TCLFFXProgramNullShader [call 6, @0x7bf148 fall]. It calls __R300WriteMaskCorrectRectAbort [call 7] and then __R300WriteDrawRectRegisters [call 8]. It calls __ATITCLFFXRestoreShader [call 9, @0x7bf148 fall] and __R300CompleteOverrideRendering [call 10, @0x7bf148 fall].
  Role (from name): a fast depth and stencil clear that uses the null shader [call 6] and the draw-rectangle path [call 8], then restores the shader state [call 9].
  Reviewed: 2026-11-12

- `__R300FlushZStencilBuffer` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7bfa90
  **Inferred.** The body is skipped when the word at [a0+345328] is nonzero [@0x7bfabc taken nonzero]. It calls __glATISubmitBM [call 1]. It calls __R300TCLFFXProgramNullShader [call 5] and then __R300WriteDrawRectRegisters [call 6], and calls __ATITCLFFXRestoreShader [call 7].
  Role (from facts): a batch submit [call 1] followed by the null-shader and draw-rectangle calls [call 5] [call 6] and a shader restore [call 7].
  Reviewed: 2026-11-12

- `__R300NoGCFlushZStencilBuffer` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7bfff0
  **Inferred.** It leaves early when the pointer at [a0+120] is zero [@0x7c0004 taken zero]. It calls __R300GetPipeCount [call 1], fglX11GetQsList [call 2] and fglX11DrawableBufToBltSurface [call 3]. It calls __R300HWBlt_SetupPitchAndOffset [call 7], __R300WriteColorChannelMask [call 8] and __R300NoGCDrawRectangle [call 9], and sends the queue with fglX11SendQsList [call 10].
  Role (from facts): a blit of the drawable buffer through the queue, with pitch, offset and channel mask set [call 7] [call 8] and one rectangle drawn [call 9].
  Reviewed: 2026-11-12

- `SendColorMask` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7cacf0
  **Inferred.** When the byte at a0+0x5c854 is nonzero [@0x7cacfc fall] it also logs a1 in a table indexed by the counter word at a0+0x5c858 [@0x7cad04] [@0x7cad20] [@0x7cad38], and adds one to that counter [@0x7cad44]. It loads a word from a0+0x54f7c [@0x7cad98] and writes two words at a1+0 and a1+4 [@0x7cada0] [@0x7cada8]. A chain of compares of [[a0+276368]:8+1280] against computed values ends either on a match, which writes two more words at a1+8 and a1+0xc [@0x7cb5ec] [@0x7cb5f0] and returns a1+16 [@0x7cb5fc], or on no match [@0x7cb5bc taken], which returns a1+8 [@0x7cb604].
  Role (from facts): writes a two-word record at a1, adds a second two-word record when one of the compares matches [@0x7cadd0 taken], and returns the address past what it wrote [@0x7cb5fc] [@0x7cb604].
  Reviewed: 2026-11-12

- `__R300UpdateHWState` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7cf5a0
  **Inferred.** It calls CheckIfBatchable [call 1] and __R300UpdateHWTexState [call 2]. It calls SendColorMask [call 4, @0x7cf9f0 fall nonzero] and __R300WriteCmaskEnableRegistersAbort [call 5, @0x7cfaa8 fall]. It calls __R300WriteScissorRegisters [call 6, @0x7cfb08 fall nonzero] and __R300WriteViewportTransform [call 7, @0x7cfb24 fall nonzero]. It calls __R300LoadCachedPSProgToHwRegs [call 8, @0x7cfef8 fall nonzero], __R300TCLWritePointSpriteData [call 9, @0x7cff14 fall] and __R300TCLWriteUserClipPlaneData [call 10, @0x7cff2c fall]. It calls __glATISubmitBM [call 3, @0x7cf640 fall] in a loop [@0x7cf668 taken] while the free space in the buffer at [a0+346792] is short, and calls it once more [call 11, @0x7cf608 taken] ahead of call 2 when the counter word at a0+0x5c858 plus 7 reaches 0x3e9. It returns the texture-state result [call 2, @0x7d00dc].
  Role (from facts): refreshes the hardware state through the colour, cmask, scissor and viewport helpers [call 4] [call 5] [call 6] [call 7] and the point-sprite and clip helpers [call 9] [call 10], and calls the batch submit [call 3] [call 11] to make room before the writes.
  Reviewed: 2026-11-12

- `__R300LoadContext` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7d5270
  **Inferred.** It calls __glATISubmitBM [call 1, @0x7d52b4 fall] and calls __R300WriteColorOffsetRegisters [call 2] and __R300WriteColorPitchRegisters [call 3]. It calls __R300UpdateHWTexState [call 5], __R300WriteViewportTransform [call 7], __R300WriteCmaskEnableRegistersAbort [call 8], SendColorMask [call 9], __R300WriteScissorRegisters [call 10], __R300WriteDepthOffsetRegisters [call 11] and __R300WriteDepthPitchRegisters [call 12]. It calls __R300LoadLargePSProgToHwRegs [call 13], then __glATISubmitBM [call 16, @0x7d6320 taken nonzero]. When the value returned by call 13 is zero [@0x7d5dfc taken zero] it calls __R300LoadCachedPSProgToHwRegs [call 23], __R300LoadAllCachedPSProgInstToHwRegs [call 24] and __R300TCLWritePointSpriteData [call 25]. Falling through [@0x7d6320 fall] reaches those calls too.
  Role (from facts): sets up the colour, depth, scissor, viewport and cmask register groups [call 2] [call 3] [call 7] [call 8] [call 10] [call 11] [call 12], calls the batch submit [call 1] [call 16] in loops that run while the buffer is short of room, and programs the shader and point-sprite data [call 23] [call 24] [call 25].
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3D` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x8109e0
  **Inferred.** It stores a word at +0 [@0x810a10] and three single-precision values at +4, +8 and +C [@0x810a20] [@0x810a2c] [@0x810a38] at the write pointer held at [a0+346792]. It calls __R300HandleBrokenPrimitive [call 1, @0x810a5c taken] when the advanced pointer is at or past the limit at [a0+346800], and returns [@0x810a68].
  Role (from facts): appends a vertex record through the stores [@0x810a10] [@0x810a20] [@0x810a2c] [@0x810a38] and calls the broken-primitive handler [call 1, @0x810a5c taken] when the write pointer reaches its limit.
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DC4UB` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x810d70
  **Inferred.** It loads four bytes [@0x810dc0] and stores words at +0 [@0x810db8], +4 [@0x810df8] and +8 [@0x810de4] at the write pointer held at [a0+346792]. Three single-precision values go to +C, +0x10 and +0x14 [@0x810e04] [@0x810e10] [@0x810e1c]. It calls __R300HandleBrokenPrimitive [call 1, @0x810e40 taken] when the advanced pointer is at or past the limit at [a0+346800].
  Role (from facts): appends a vertex record through the stores [@0x810db8] [@0x810df8] [@0x810de4] [@0x810e04] and calls the broken-primitive handler [call 1, @0x810e40 taken] when the write pointer reaches its limit.
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DC4UB_vcount` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x810e70
  **Inferred.** It increments a counter word at a0+0x44098 [@0x810ea4] [@0x810eb8]. Then it writes the same record layout as the C4UB element [@0x810ecc] [@0x810ef8] [@0x810f0c] [@0x810f18] [@0x810f24] [@0x810f30]. It calls __R300HandleBrokenPrimitive [call 1, @0x810f54 taken] when the advanced pointer is at or past the limit at [a0+346800].
  Role (from facts): increments the counter [@0x810eb8], appends a vertex record through the stores [@0x810ecc] [@0x810f0c] [@0x810ef8] [@0x810f18] and calls the broken-primitive handler [call 1, @0x810f54 taken] when the write pointer reaches its limit.
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DC3F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x811160
  **Inferred.** It stores words at +0 [@0x8111ac], +4 [@0x8111b8], +8 [@0x8111c0], +0xc [@0x8111d4] and +0x10 [@0x8111cc] at the write pointer held at [a0+346792]. Three single-precision values go to +0x14, +0x18 and +0x1c [@0x8111e0] [@0x8111ec] [@0x8111f8]. It calls __R300HandleBrokenPrimitive [call 1, @0x81121c taken] when the advanced pointer is at or past the limit at [a0+346800].
  Role (from facts): appends a vertex record through the stores [@0x8111ac] [@0x8111b8] [@0x8111e0] and calls the broken-primitive handler [call 1, @0x81121c taken] when the write pointer reaches its limit.
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DC3F_vcount` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x811250
  **Inferred.** It increments a counter word at a0+0x44098 [@0x811284] [@0x811298]. It writes the same record layout as the C3F element [@0x8112b0] [@0x8112bc] [@0x8112c4] [@0x8112d8] [@0x8112d0] [@0x8112e4] [@0x8112f0] [@0x8112fc]. It calls __R300HandleBrokenPrimitive [call 1, @0x811320 taken] when the advanced pointer is at or past the limit at [a0+346800].
  Role (from facts): increments the counter [@0x811298], appends a vertex record through the stores [@0x8112b0] [@0x8112bc] [@0x8112e4] and calls the broken-primitive handler [call 1, @0x811320 taken] when the write pointer reaches its limit.
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DC4F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x811560
  **Inferred.** It stores words at +0 [@0x8115ac], +4 [@0x8115b8], +8 [@0x8115c0], +0xc [@0x8115c8], +0x10 [@0x8115e0] and +0x14 [@0x8115d8] at the write pointer held at [a0+346792]. Three single-precision values go to +0x18, +0x1c and +0x20 [@0x8115ec] [@0x8115f8] [@0x811604]. It calls __R300HandleBrokenPrimitive [call 1, @0x811628 taken] when the advanced pointer is at or past the limit at [a0+346800].
  Role (from facts): appends a vertex record through the stores [@0x8115ac] [@0x8115b8] [@0x8115ec] and calls the broken-primitive handler [call 1, @0x811628 taken] when the write pointer reaches its limit.
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DC4F_vcount` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x811660
  **Inferred.** It increments a counter word at a0+0x44098 [@0x811694] [@0x8116a8]. It writes the same record layout as the C4F element [@0x8116c0] [@0x8116cc] [@0x8116d4] [@0x8116dc] [@0x8116f4] [@0x8116ec] [@0x811700] [@0x81170c] [@0x811718]. It calls __R300HandleBrokenPrimitive [call 1, @0x81173c taken] when the advanced pointer is at or past the limit at [a0+346800].
  Role (from facts): increments the counter [@0x8116a8], appends a vertex record through the stores [@0x8116c0] [@0x8116cc] [@0x811700] and calls the broken-primitive handler [call 1, @0x81173c taken] when the write pointer reaches its limit.
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DN3F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x811960
  **Inferred.** It stores words at +0 [@0x8119ac], +4 [@0x8119b8], +8 [@0x8119c0], +0xc [@0x8119d4] and +0x10 [@0x8119cc] at the write pointer held at [a0+346792]. Three single-precision values go to +0x14, +0x18 and +0x1c [@0x8119e0] [@0x8119ec] [@0x8119f8]. It calls __R300HandleBrokenPrimitive [call 1, @0x811a1c taken] when the advanced pointer is at or past the limit at [a0+346800].
  Role (from facts): appends a vertex record through the stores [@0x8119ac] [@0x8119b8] [@0x8119e0] and calls the broken-primitive handler [call 1, @0x811a1c taken] when the write pointer reaches its limit.
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DN3FC4UB` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x811df0
  **Inferred.** It loads four bytes [@0x811e58] and stores words at +0 [@0x811e50], +4 [@0x811e80], +8 [@0x811e94], +0xc [@0x811e9c], +0x10 [@0x811ea4], +0x14 [@0x811eb8] and +0x18 [@0x811eb0] at the write pointer held at [a0+346792]. Three single-precision values go to +0x1c, +0x20 and +0x24 [@0x811ec4] [@0x811ed0] [@0x811edc]. It calls __R300HandleBrokenPrimitive [call 1, @0x811f00 taken] when the advanced pointer is at or past the limit at [a0+346800].
  Role (from facts): appends a vertex record through the stores [@0x811e50] [@0x811e80] [@0x811ec4] and calls the broken-primitive handler [call 1, @0x811f00 taken] when the write pointer reaches its limit.
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DN3FC3F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x8122e0
  **Inferred.** It stores words at +0 [@0x812344], +4 [@0x812350], +8 [@0x812358], +0xc [@0x812360], +0x10 [@0x812374], +0x14 [@0x81237c], +0x18 [@0x812384], +0x1c [@0x812398] and +0x20 [@0x812390] at the write pointer held at [a0+346792]. Three single-precision values go to +0x24, +0x28 and +0x2c [@0x8123a4] [@0x8123b0] [@0x8123bc]. It calls __R300HandleBrokenPrimitive [call 1, @0x8123e0 taken] when the advanced pointer is at or past the limit at [a0+346800].
  Role (from facts): appends a vertex record through the stores [@0x812344] [@0x812350] [@0x8123a4] and calls the broken-primitive handler [call 1, @0x8123e0 taken] when the write pointer reaches its limit.
  Reviewed: 2026-11-12

- `__R300WriteViewportTransform` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7d1910
  **Inferred.** It stores a word at a1+0 [@0x7d1994], then loads words from the context block at a0+0x550c8 [@0x7d1998] and a0+0x550c4 [@0x7d19a0] and stores them at a1+4 [@0x7d199c] and a1+8 [@0x7d19a4]. Further words from a0+0x550d0 through a0+0x550f0 are copied the same way [@0x7d19a8] [@0x7d19f0] up to a1+0x2c [@0x7d19fc]. It returns a1+48 [@0x7d1a00].
  Role (from facts): copies viewport transform words into the output block at a1 [@0x7d199c] [@0x7d19a4] and returns the address past them [@0x7d1a00].
  Reviewed: 2026-11-12

- `__R300WriteScissorRegisters` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7d1ab0
  **Inferred.** It loads two words from the context at a0+0x54fd4 [@0x7d1b5c] and a0+0x54f88 [@0x7d1b6c] and stores four words into the block at a1 [@0x7d1b58] [@0x7d1b64] [@0x7d1b68] [@0x7d1b7c]. It returns a1+16 [@0x7d1b84].
  Role (from facts): writes a four-word scissor record at a1 [@0x7d1b58] [@0x7d1b64] [@0x7d1b68] [@0x7d1b7c] and returns the address past it [@0x7d1b84].
  Reviewed: 2026-11-12

- `__R300WriteDepthOffsetRegisters` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7d1f40
  **Inferred.** It stores two words at a1+0 [@0x7d1fc0] and a1+4 [@0x7d1fc8] on one path, and the same two words again on the other path [@0x7d2090] [@0x7d2094]. It returns a1+8 [@0x7d1fd0] [@0x7d20a0].
  Role (from facts): writes a two-word depth offset record at a1 [@0x7d1fc0] [@0x7d1fc8] and returns the address past it [@0x7d1fd0] [@0x7d20a0].
  Reviewed: 2026-11-12

- `__R300WriteDepthPitchRegisters` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7d20b0
  **Inferred.** It stores two words at a1+0 [@0x7d2130] [@0x7d2200] and a1+4 [@0x7d2134] [@0x7d2204]. It returns a1+8 [@0x7d2140] [@0x7d2210].
  Role (from facts): writes a two-word depth pitch record at a1 [@0x7d2130] [@0x7d2134] and returns the address past it [@0x7d2140] [@0x7d2210].
  Reviewed: 2026-11-12

- `__R300WriteAccumOffsetRegisters` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7d2370
  **Inferred.** It stores two words at a1+0 [@0x7d23f0] [@0x7d24c0] and a1+4 [@0x7d23f8] [@0x7d24c4]. It returns a1+8 [@0x7d2400] [@0x7d24d0].
  Role (from facts): writes a two-word accumulation offset record at a1 [@0x7d23f0] [@0x7d23f8] and returns the address past it [@0x7d2400] [@0x7d24d0].
  Reviewed: 2026-11-12

- `__R300WriteAccumPitchRegisters` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7d24e0
  **Inferred.** It stores two words at a1+0 [@0x7d2560] [@0x7d2638] and a1+4 [@0x7d2568] [@0x7d263c]. It returns a1+8 [@0x7d2570] [@0x7d2648].
  Role (from facts): writes a two-word accumulation pitch record at a1 [@0x7d2560] [@0x7d2568] and returns the address past it [@0x7d2570] [@0x7d2648].
  Reviewed: 2026-11-12

- `__R300WriteCmaskEnableRegistersAbort` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x7d2790
  **Inferred.** It stores a word at a1+4 [@0x7d2800] and a word at a1+0 [@0x7d2808]. It loads two bytes from the context at a0+0x55f41 [@0x7d27f0] and a0+0x55f42 [@0x7d27fc]; they decide whether a2 is masked before that store. It returns a1+8 [@0x7d2870] [@0x7d292c].
  Role (from facts): writes a two-word cmask enable record at a1 [@0x7d2800] [@0x7d2808] whose value is the a2 argument, possibly masked by two context bytes, and returns the address past it [@0x7d2870] [@0x7d292c].
  Reviewed: 2026-11-12
