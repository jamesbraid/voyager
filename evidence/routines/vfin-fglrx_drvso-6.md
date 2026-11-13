# fglrx_drv.so routine readings, batch 6

- `R200CPWaitForIdle` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40a4c0
  **Inferred.** Waits for the R200 command processor to go idle. It takes the DRI lock (DRILock at 0x40a4ec, lock handle from a0+8), calls the wait-for-idle hook through the pointer at 0x40a240 with the device private at a0+248 (0x40a4fc), then releases the lock with DRIUnlock at 0x40a50c.
  Reviewed: 2026-11-12 (sonnet)

- `R200CPSubsequentDashedTwoPointLineOverlay` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40cb40
  **Inferred.** A message-only routine. Its one call is xf86DrvMsg at 0x40cb70, with the scrnIndex from a0+12, message type 5 and two constant format strings at 0x45c110 and 0x45c128. It makes no other calls and draws nothing.
  Reviewed: 2026-11-12 (sonnet)

- `R200FreeRec` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x410900
  **Inferred.** Frees the R200 screen record. When the device private pointer at a0+248 is set, it frees the buffer at offset 9340 of that private (Xfree at 0x41092c, only when that buffer pointer is set), then frees the private itself (Xfree at 0x41093c), and writes the slot at a0+248 after the free (0x410948).
  Reviewed: 2026-11-12 (sonnet)

- `R200PreInitGamma` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x415c00
  **Inferred.** Sets the default gamma ramp during pre-init. It calls R200SGIVCSetDefGamma at 0x415c24 with a stack buffer, then passes the result to xf86SetGamma at 0x415c3c. It returns 1 when xf86SetGamma returns a nonzero value, and 0 when it returns zero (branch at 0x415c44, returns at 0x415c54 and 0x415c68).
  Reviewed: 2026-11-12 (sonnet)

- `visualDepth` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x419e40
  **Inferred.** Searches a two-level table. The record count is the halfword at a0+0x10 and the table base is the pointer at a0+0x14; records are 8 bytes (the end bound is base + count*8, branch at 0x419e90). A non-positive count returns 0 (0x419e98). For each record it reads a halfword at +2 and a pointer at +4 (0x419e54, 0x419e58); when the halfword is positive it scans that many words from the pointer and compares each with the word loaded from a1 (0x419e68, branch at 0x419e78). On a match it returns the byte loaded at 0x419ea4 from the matching record; when no record matches it returns 0 (0x419e98).
  Reviewed: 2026-11-12 (sonnet)

- `GetTVModeIndex` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41f800
  **Inferred.** Returns 0 when the word at the symbol tv_total is zero (0x41f804, branch at 0x41f808). Otherwise it steps through the table at tv_total in 0x38-byte entries (the loads at 0x41f818 and 0x41f83c and the advance at 0x41f81c use +0x38), returning 0 at 0x41f848 when an entry's first word is zero (branch at 0x41f820). It compares the word at a0+0x18 with each entry's first word (branch at 0x41f828) and, on equality, the word at a0+0x2c with the word at +4 of that entry (loads at 0x41f830 and 0x41f834, branch at 0x41f838). On a match it returns at 0x41f840 a count kept in v0 (incremented once per step at 0x41f824 in the disassembly, so the entry index).
  Reviewed: 2026-11-12 (sonnet)

- `R200CreateContext` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x426ac0
  **Established.** The routine is 8 bytes and has one return, at 0x426ac0, of the constant 1; it does not read its arguments. Role (from name): a success stub for a context-creation hook.
  Reviewed: 2026-11-12 (sonnet)

- `ProcFIREGL_DRIGetDrawableInfo` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42b200
  **Inferred.** Role (from name): X extension request handler for the drawable-info request. It returns 0x10 at 0x42b220 when the word at a0+136 is not 3 (branch at 0x42b214). Otherwise it passes the word at offset 8 of the structure pointed to by a0+8 to SecurityLookupDrawable (0x42b280, a0 passed as the client) and, when a drawable is found, calls DRIGetDrawableInfo (0x42b2e4). Later branches decide whether FIREGL_OverlayGetPrivateClips (0x42b494) is called. WriteToClient is called at 0x42b37c and 0x42b414 with a size of 0x20 and again at 0x42b398. One return is the word at a0+40 (0x42b3ac).
  Reviewed: 2026-11-12 (sonnet)

- `FGLRXExtensionInit` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42fc80
  **Established.** Registers the FGLRX X extension with AddExtension at 0x42fcc4 (name at 0x460d30, event count 7, error count 0, minor-opcode table StandardMinorOpcode). If registration fails (branch at 0x42fccc), it calls FatalError at 0x42fce8 with the message at 0x460d40.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayPolylines` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x433700
  **Inferred.** Role (from name): overlay polyline wrapper. It reads the byte at a1+4 (the depth) and compares it with the word at +0x2078 of the device private (the pointer at +248 of the xf86Screens entry selected through a1). Only when they differ (branch at 0x43378c) does it store the depth there (0x433794); then it calls R200CPAccelInitFuncs with flag 1 for depth 8 (0x43382c) and flag 0 for depth 0x18 (0x433814), in out-of-line blocks at 0x433824 and 0x433808 whose rejoin the facts do not show. It calls VALIDATE_DRAWABLE through the pointer at 0x432d40 (call at 0x4337b4, a0 and a1 swapped), makes an indirect call at 0x4337d4 with its four entry arguments, stores at +0x44 and +0x48 (0x4337f0, 0x4337f8) and returns the word at a1+68 (0x433800).
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayChangeGC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434cc0
  **Inferred.** Role (from name): GC-change hook for overlay windows, with the same depth test on the byte at a0+4 as FIREGL_OverlayPolylines. It loads a word from the slot at [[a0+76] + [0x467ecc]*4] and stores it at +0x44 (0x434cf0); the store at +0x48 (0x434d04) happens only when the word at +4 of that slot is nonzero (branch at 0x434cfc). When the depth byte differs from the word at +0x2078 of the device private (branch at 0x434d38) it stores it (0x434d40) and calls R200CPAccelInitFuncs with flag 1 for depth 8 (0x434dc8) and flag 0 for depth 0x18 (0x434de0). An indirect call at 0x434d60 passes a0 and a1 on. Stores follow at 0x434d70, 0x434d78, 0x434d94 and 0x434d98; the facts do not show what they hold.
  Reviewed: 2026-11-12 (sonnet)

- `CMapStoreColors` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x435f00
  **Inferred.** Role (from name): stores colormap entries for a screen. It reads the halfword at offset 4 of the record pointed to by a0 (0x435f80) and compares it with 4, 2, 0 and 5 in that order (branches at 0x435f8c, 0x435f94, 0x435f9c, 0x435fa4); these match the X visual class numbers for TrueColor, StaticColor, StaticGray and DirectColor, which is an inference from the values. The paths contain word load and store loops whose destinations the facts do not show. It calls CMapRefreshColors through the pointer at 0x4369c0 (call at 0x436088); the facts do not show the condition for that call.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayChangeCRTC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x438080
  **Inferred.** Role (from name): overlay CRTC-change hook. It calls xf86GetEntityPrivate at 0x4380e8 (entity index from gR200EntityIndex, a2 = the halfword at a0+10). It branches on the bytes at +90 and +93 and on the words at +120, +7820 and +7824 of the device private (the pointer at +248 of the xf86Screens entry selected through a0+16). On some paths it calls R200WaitForVerticalSync (0x438138), stores a word at +0x78 (0x43813c) and tail-calls FIREGL_ShowOverlay with a2=0 (0x438174). The words at +0x1c00 and +0x1c04 are only loaded (0x4380dc, 0x4380e0, 0x4381f0, 0x43824c). It returns the xf86GetEntityPrivate result at 0x4381cc.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlaySetShape` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43c5c0
  **Inferred.** Role (from name): window shape change for overlay windows. Most of its calls are conditional. It calls miRegionCreate (0x43c634, 0x43c694, 0x43c8e0), miSubtract (0x43c650, 0x43c6b0), miRegionCopy (0x43c8f4), SetWinSize (0x43c6cc), SetBorderSize (0x43c6d8), ResizeChildrenWinSize (0x43c6f4, four zero arguments), WindowsRestructured (0x43c8ac), CheckCursorConfinement (0x43c8c0, whose result it returns at 0x43c8d4) and miRegionDestroy (0x43c7b4 and 0x43c838). It also makes several indirect calls (for example 0x43c608, 0x43c720, 0x43c74c). The facts do not show that the destroyed regions are temporaries.
  Reviewed: 2026-11-12 (sonnet)

- `ATITVoutExtensionInit` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x446380
  **Established.** Registers the ATI TV-out X extension with AddExtension at 0x4463c4 (name at 0x4614c0, event count 6, error count 0, minor-opcode table StandardMinorOpcode). If registration fails (branch at 0x4463cc), it calls FatalError at 0x4463e8 with the message at 0x461830.
  Reviewed: 2026-11-12 (sonnet)

- `R200QryGammaColor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447740
  **Inferred.** Role (from name): answers a gamma query for a screen. It reads a table descriptor from the screen's private, indexed by vcScreenPrivateIndex (0x447760 to 0x447778), allocates three buffers with Xalloc (0x4477a8, 0x4477c0, 0x4477d4), fills them through VidModeGetGammaRamp (0x4477f4) and copies 16-bit entries out in loops (lhu and sh pairs from 0x447840). The value in a2 selects the path (compared with 1, 2 and 3 at 0x447800, 0x44780c and 0x447814; any other value goes to 0x4478f0). It frees the three buffers with Xfree (0x4478fc, 0x44790c, 0x44791c); the facts do not say what the values of a2 mean.
  Reviewed: 2026-11-12 (sonnet)

- `R200LdCombinationSub` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x449ec0
  **Inferred.** Role (from name): loads a compositor combination for the screen. It calls vfmtFindCmpCombinationFile (0x449f40, and again at 0x44a0b4 after a strncat), vfmtReadCmp1Combination (0x449f68) and R200LdFmtByName (0x44a018). It then calls R200CompositorRegWrite (0x44a1fc and 0x44a390), R200LoadCompositorTiming (0x44a238), ReadWriteTimingTable (0x44a2b0), R200CompositorConfigurePLL (0x44a2dc and 0x44a2fc) and R200SetCompositorTiling (0x44a3e8), several of them only on some paths, and xf86ioctl at 0x44a36c. Messages go through xf86DrvMsg (0x449f8c, 0x44a080, 0x44a324) and ErrorF (0x44a128, 0x44a3cc). Only the ErrorF at 0x44a3cc is shown to follow an error (xf86strerror at 0x44a3b8, after a negative xf86ioctl result); the facts do not show that the others are failures.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockFreeScreen` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44db40
  **Inferred.** Role (from name): lock wrapper for a screen-level operation. a0 is a screen index: the screen pointer at +52 of the screenInfo entry for a0 is passed to DRILock (0x44db9c, a1=0) and to DRIUnlock (0x44dbc0). It loads the entry at +0x168 of that screen indexed by the word loaded at 0x44db74 (read as R200_lockScreenIndex), calls the hook at +0x68 of that entry (0x44dbb0) with a0 and a1 from entry, and returns the DRIUnlock result (0x44dbd0).
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockRecolorCursor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e7c0
  **Inferred.** Role (from name): lock wrapper for recoloring the hardware cursor. a0 is the screen. It indexes the entry at +0x168 of a0 by the word loaded at 0x44e7f8 (read as R200_lockScreenIndex) and loads the hook at +0x50 of it (0x44e808). It calls DRILock (0x44e814, a0 passed on, a1=0), stores a word at a0+0x128 (0x44e818, in the delay slot of that call), calls through that slot with a0, a1 and the saved a2 (0x44e828), calls DRIUnlock (0x44e838) and writes +0x128 again at 0x44e850; the facts do not show that second value. It returns the DRIUnlock result (0x44e858).
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockDestroyClip` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f3c0
  **Inferred.** Role (from name): lock wrapper for clip destruction on a GC. Before taking the lock it copies two words from the slot indexed by R200_lockGCIndex (the slot comes from the pointer at a0+0x4c) into a0+0x48 and a0+0x44 (0x44f400, 0x44f40c). It then calls DRILock (0x44f414, a0=[a0], a1=0), makes an indirect call at 0x44f424 through a function pointer reached from the word at +0x44 (offset +0x14 of it), calls DRIUnlock (0x44f430) and only after the unlock copies the words back into the slot (0x44f444, 0x44f44c). It then stores two other values at +0x48 and +0x44 (0x44f458, 0x44f45c) and returns the word at a0+68 (0x44f468).
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockPolyText16` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4503c0
  **Inferred.** Role (from name): lock wrapper for the 16-bit poly-text draw, with the same save and restore pattern as R200_lockDestroyClip. Before taking the lock it stores a word at +0x48 (0x45041c) and another at +0x44 (0x45042c), taken from the slot indexed by R200_lockGCIndex. It then calls DRILock (0x450430, a0=[a1], a1=0), makes an indirect call at 0x450454 with its four entry arguments, calls DRIUnlock (0x450468) and only after the unlock stores back at +0x0 and +0x4 of the slot (0x450488, 0x450490). Two more stores to +0x48 and +0x44 follow (0x450494, 0x450498).
  Reviewed: 2026-11-12 (sonnet)

- `is1SetupFormatData` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x452bc0
  **Inferred.** Role (from name): fills the IS1 format block for a channel. It calls R200GetSGIInfoPtr (0x452be8), loads fields at offsets 0x24 to 0x7c and stores words at a0+0x254 to a0+0x31c, with byte stores at +0x2b4 to +0x2bc (0x452ea4 to 0x452edc); the facts do not show that the byte values come from the descriptor. It branches on the word at a0+600 (0x452c70 to 0x452c80): 1 goes to 0x452e04, where is1_calc_525 (0x452e60, a1=2) is called unless the test at 0x452e2c finds zero; 2 goes to 0x452f40 and calls is1UpdateFramelockTiming (0x452f50). It returns 1 at 0x452dd0 and 0 at 0x452d90 (after an ErrorF at 0x452d78 on the path where the word at a0+624 is not 0, 1 or 2) and at 0x452fb0 (after an ErrorF at 0x452f98).
  Reviewed: 2026-11-12 (sonnet)
