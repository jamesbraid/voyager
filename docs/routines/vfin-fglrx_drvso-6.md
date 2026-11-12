# fglrx_drv.so routine readings, batch 6

- `R200CPWaitForIdle` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40a4c0
  **Inferred.** Waits for the R200 command processor to go idle. It takes the DRI lock (DRILock at 0x40a4ec, lock handle from a0+8), calls the wait-for-idle hook through the pointer at 0x40a240 with the device private at a0+248 (0x40a4fc), then releases the lock with DRIUnlock at 0x40a50c.

- `R200CPSubsequentDashedTwoPointLineOverlay` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40cb40
  **Inferred.** A message-only routine. Its one call is xf86DrvMsg at 0x40cb70, with the scrnIndex from a0+12, message type 5 and two constant format strings at 0x45c110 and 0x45c128. It makes no other calls and draws nothing.

- `R200FreeRec` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x410900
  **Inferred.** Frees the R200 screen record. When the device private pointer at a0+248 is set, it frees the buffer at offset 9340 of that private (Xfree at 0x41092c, only when that buffer pointer is set), then frees the private itself (Xfree at 0x41093c), and writes the slot at a0+248 after the free (0x410948).

- `R200PreInitGamma` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x415c00
  **Inferred.** Sets the default gamma ramp during pre-init. It calls R200SGIVCSetDefGamma at 0x415c24 with a stack buffer, then passes the result to xf86SetGamma at 0x415c3c. It returns 1 when xf86SetGamma returns a nonzero value, and 0 when it returns zero (branch at 0x415c44, returns at 0x415c54 and 0x415c68).

- `visualDepth` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x419e40
  **Inferred.** Searches a counted table of 8-byte records for a match. The record count is the halfword at a0+0x10 and the table base is the pointer at a0+0x14. Each record's word is compared with the value loaded from a1 (0x419e68, branch at 0x419e78), and the routine returns 0 when the count is not positive (0x419e98).

- `GetTVModeIndex` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41f800
  **Inferred.** Returns 0 when the symbol tv_total is zero (0x41f804, branch at 0x41f808). Otherwise it walks a linked list of 56-byte entries headed at a0+0x2c, following the link at +56 of each entry (lw at 0x41f83c), and compares a0+0x18 with a field of each entry (branch at 0x41f828). The matching entry's result leaves at 0x41f840, and no match returns 0 at 0x41f848.

- `R200CreateContext` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x426ac0
  **Established.** The whole routine is 8 bytes and returns the constant 1 without touching its arguments. It is a success stub for the context hook.

- `ProcFIREGL_DRIGetDrawableInfo` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42b200
  **Inferred.** X extension request handler for the drawable-info request. It reads the drawable id from the client state at a0+8, resolves it with SecurityLookupDrawable (0x42b280), and asks DRIGetDrawableInfo for the drawable geometry (0x42b2e4). When the overlay clip list is needed, it calls FIREGL_OverlayGetPrivateClips (0x42b494) and writes a 32-byte reply to the client with WriteToClient (0x42b37c and 0x42b414). The early-failure path returns 0x10 at 0x42b220.

- `FGLRXExtensionInit` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42fc80
  **Established.** Registers the FGLRX X extension with AddExtension at 0x42fcc4 (name at 0x460d30, event count 7, error count 0, minor-opcode table StandardMinorOpcode). If registration fails (branch at 0x42fccc), it calls FatalError at 0x42fce8 with the message at 0x460d40.

- `FIREGL_OverlayPolylines` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x433700
  **Inferred.** Overlay polyline wrapper. It validates the drawable with VALIDATE_DRAWABLE (0x4337b4). When the drawable's depth byte at a1+4 is 8 or 0x18, it calls R200CPAccelInitFuncs with flag 1 or 0 respectively (0x43382c and 0x433814). It then calls through a pointer at 0x4337d4 with its own arguments.

- `FIREGL_OverlayChangeGC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434cc0
  **Inferred.** GC-change hook for overlay windows, with the same depth test as FIREGL_OverlayPolylines. It copies two words from the GC's per-screen slot (indexed by 0x467ecc) into the GC at +0x44 and +0x48, and for a depth byte of 8 or 0x18 calls R200CPAccelInitFuncs with flag 1 or 0 (0x434dc8 and 0x434de0). An indirect call at 0x434d60 runs the saved GC function.

- `CMapStoreColors` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x435f00
  **Inferred.** Stores colormap entries for the screen. It reads a halfword at offset 4 of the colormap record and branches on the values 4, 2, 0 and 5 (branches at 0x435f8c, 0x435f94, 0x435f9c and 0x435fa4), which are the X visual class numbers. Each path walks the entries from the request and writes them into the screen's color arrays. For the active colormap it calls CMapRefreshColors through the pointer at 0x4369c0 (0x436088).

- `FIREGL_OverlayChangeCRTC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x438080
  **Inferred.** Overlay CRTC-change hook. It fetches the screen's entity private with xf86GetEntityPrivate (0x4380e8), then updates overlay state in the device private at +248 (fields at +0x78 and +0x1c00 and +0x1c04). It branches on the mode fields at +120, +7820 and +7824, waits for vertical sync with R200WaitForVerticalSync (0x438138), and tail-calls FIREGL_ShowOverlay through the GOT (0x438174).

- `FIREGL_OverlaySetShape` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43c5c0
  **Inferred.** Window shape change for overlay windows. It builds regions with miRegionCreate (0x43c634, 0x43c694, 0x43c8e0) and combines them with miSubtract (0x43c650, 0x43c6b0) and miRegionCopy (0x43c8f4). It resizes the window and border with SetWinSize (0x43c6cc) and SetBorderSize (0x43c6d8), resizes children with ResizeChildrenWinSize (0x43c6f4), restructures the window tree with WindowsRestructured (0x43c8ac), checks cursor confinement with CheckCursorConfinement (0x43c8c0), and frees temporary regions with miRegionDestroy (0x43c7b4 and 0x43c838).

- `ATITVoutExtensionInit` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x446380
  **Established.** Registers the ATI TV-out X extension with AddExtension at 0x4463c4 (name at 0x4614c0, event count 6, error count 0, minor-opcode table StandardMinorOpcode). If registration fails (branch at 0x4463cc), it calls FatalError at 0x4463e8 with the message at 0x461830.

- `R200QryGammaColor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447740
  **Inferred.** Answers a gamma query for a screen. It reads the gamma table descriptor from the screen's private, indexed by vcScreenPrivateIndex (0x447760 to 0x447778), sizes temporary buffers with Xalloc (0x4477a8, 0x4477c0, 0x4477d4), fills them with the current ramp through VidModeGetGammaRamp (0x4477f4), and copies 16-bit entries out in a loop (lhu and sh at 0x447840 to 0x447870). The requested format in a2 selects the path (compares with 1, 2 and 3 at 0x447800, 0x44780c and 0x447814). It frees the buffers with Xfree (0x4478fc, 0x44790c and 0x44791c).

- `R200LdCombinationSub` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x449ec0
  **Inferred.** Loads a compositor combination for the screen. It finds the combination file with vfmtFindCmpCombinationFile (0x449f40), parses it with vfmtReadCmp1Combination (0x449f68), and looks up a format by name with R200LdFmtByName (0x44a018). It then programs the compositor with R200CompositorRegWrite (0x44a1fc and 0x44a390), R200LoadCompositorTiming (0x44a238), ReadWriteTimingTable (0x44a2b0), R200CompositorConfigurePLL (0x44a2dc and 0x44a2fc) and R200SetCompositorTiling (0x44a3e8). Failures are reported through xf86DrvMsg (0x449f8c, 0x44a080, 0x44a324) and ErrorF (0x44a128, 0x44a3cc).

- `R200_lockFreeScreen` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44db40
  **Inferred.** Lock wrapper for a screen-level operation. It takes the DRI lock for the screen (DRILock at 0x44db9c), using the screen index in R200_lockScreenIndex to pick the entry at +0x168 of the screen private. It calls the hook at +0x68 of that entry (0x44dbb0) with the caller's arguments, then releases the lock with DRIUnlock (0x44dbc0).

- `R200_lockRecolorCursor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e7c0
  **Inferred.** Lock wrapper for recoloring the hardware cursor. It takes the DRI lock (DRILock at 0x44e814), records two words at +0x128 of the screen private (0x44e818 and 0x44e850), calls the hook at +0x50 of the screen's entry for R200_lockScreenIndex (0x44e828), and releases the lock with DRIUnlock (0x44e838).

- `R200_lockDestroyClip` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f3c0
  **Inferred.** Lock wrapper for clip destruction on a GC. It takes the DRI lock (DRILock at 0x44f414), copies a saved pair of words from the slot indexed by R200_lockGCIndex into the GC at +0x44 and +0x48, calls the saved routine (0x44f424), copies the words back into the slot (0x44f444 and 0x44f44c), and releases the lock with DRIUnlock (0x44f430). It returns the value at a0+68.

- `R200_lockPolyText16` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4503c0
  **Inferred.** Lock wrapper for the 16-bit poly-text draw, using the same save and restore pattern as R200_lockDestroyClip. It takes the DRI lock (DRILock at 0x450430), copies the saved pair from the slot indexed by R200_lockGCIndex into the GC (0x45041c and 0x45042c), calls the saved routine (0x450454), copies the words back (0x450488 and 0x450490), and releases the lock with DRIUnlock (0x450468).

- `is1SetupFormatData` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x452bc0
  **Inferred.** Fills the IS1 format block for a channel. It copies fields from the descriptor at a2 (offsets 0x24 to 0x7c) into the channel block at a0+0x254 to a0+0x31c, and sets byte flags from the descriptor (stores at 0x452ea4 to 0x452edc). It reads the R200 info pointer through R200GetSGIInfoPtr (0x452be8), then branches on the value at a0+600 (1 or 2) to pick the timing path. The 525-line timing runs through is1_calc_525 (0x452e60), and framelock timing runs through is1UpdateFramelockTiming (0x452f50). The routine returns 1 at 0x452dd0 and 0 at 0x452d90 and 0x452fb0.
