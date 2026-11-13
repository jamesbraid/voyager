# Routine readings, fglrx_drv.so batch 1

Role entries for every 15th routine of usr/X11R6/lib/modules/drivers/fglrx_drv.so that the function inventory does not show as understood, in address order, starting at the second routine. Each statement comes from the instruction render at the cited addresses: calls, constants, branch targets and returns. Where the render leaves an operand unknown, the entry says so. A routine is left out when its render does not support a role, and the omission is listed in the batch report rather than entered here.

- `__fglDRMPM4Alloc` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x409f40
  **Inferred.** Returns 0 when a1 is not positive (the `blez` at 0x409f44 goes to the return at 0x409fa0). Otherwise it loads [a0+8] and tests two computed values against fields of that record (the `beq` at 0x409f78 and the `bne` at 0x409f80; the render leaves their operands unknown). If the `beq` is taken (a computed value is at least [[a0+8]+8], unsigned) or the `bne` is taken (its operand is nonzero), it tail-calls firegl_PM4Alloc through the GOT (the `jr` at 0x409f98) with a0 to a2 passed on unchanged, a3 loaded from [a0+8] and a5 loaded from [[a0+8]+4]. If neither is taken, it returns [a0+12] plus four times [[a0+8]+4] (the return at 0x409f8c). Role (from name): the name and the PM4 callee suggest it sizes and allocates a command-packet buffer. The render shows the arithmetic and the call, not the buffer use.
  Reviewed: 2026-11-12 (sonnet)

- `R200CPSubsequentSolidHorVertLineOverlay` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40c500
  **Inferred.** Reserves a six-word buffer with __fglDRMPM4Alloc at 0x40c540 (a1 set to 0x6), writes six 4-byte words into it at offsets 0x0 to 0x14, and submits it with __fglDRMPM4Submit at 0x40c5a4 with tag 0x566 in a7. The `beq` at 0x40c56c tests a4 and picks one of two store sequences: when a4 is nonzero the stores at 0x40c558 to 0x40c594 run, and when a4 is zero the offset 0x0 and 0x4 stores at 0x40c558 and 0x40c568 are followed by the stores at 0x40c5c0 to 0x40c5e0; the render shows both sequences reaching the submit. The return at 0x40c5b4 passes the submit result back. The stored values are not in the render, so the packet contents are unknown. Role (from name): line drawing.
  Reviewed: 2026-11-12 (sonnet)

- `R200PreInitConfig` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x414bc0
  **Inferred.** Role (from name): driver pre-initialization for the R200 chip. The render shows a string from the record chain at a0+248 passed to xf86StringToToken with the R200Chipsets table (0x414bfc), and many xf86DrvMsg calls (0x414c6c, 0x414c90, 0x414cc0 and later). It also shows xf86GetEntityPrivate with gR200EntityIndex (0x414d9c, 0x415034), R200MapMMIO (0x414e38), asicHwRevID2chipRev (0x414ec8), fbdevHWGetVidmem (0x414ee0), and xf86ReturnOptValBool on option index 4 of R200Options (0x4150f0). Which of these calls run depends on branches that are not traced here. The returns give 0 at 0x4153cc, 0x415404, 0x415470, 0x415688 and 0x41585c, 1 at 0x4156c0, and 0 or 1 at 0x415098.
  Reviewed: 2026-11-12 (sonnet)

- `R200PreInitFSAA` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x418180
  **Inferred.** Role (from name): reads the antialiasing-related R200Options values. It first branches on the value at [[a0+248]+160] against 0x2c, 0x34 and 0x32 (0x4181b4, 0x4181c0, 0x4181d4). It checks each option with xf86IsOptionSet and reads it with xf86GetOptValBool (option 0x28 at 0x41820c, options 0x2a and 0x2b at 0x4182d8 and 0x41834c) or xf86GetOptValReal (options 0x2c to 0x37, the calls from 0x4183c0 to 0x4187e0). After each xf86GetOptValReal the render shows two `c.le.d` range tests on the value, with the double 1.0 (0x3ff0000000000000) as the upper bound; the lower bound is not in the render. xf86DrvMsg is called at 0x4182b0, 0x418320, 0x418390 and 0x418928, after the Bool options; no xf86DrvMsg call sits between the Real reads. Both returns give 1 (0x41882c and 0x418858). The option names are not in the render.
  Reviewed: 2026-11-12 (sonnet)

- `FGLQueryTickCount` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x424540
  **Inferred.** The routine is 12 bytes and does no work of its own. It jumps through the GOT to rdrtc (the `jr` at 0x424544) with its four argument registers passed on unchanged, so its result is whatever rdrtc returns. The name suggests a tick count. The render shows only the tail call.
  Reviewed: 2026-11-12 (sonnet)

- `ProcFGLVidModeGetGammaRampSize` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42f340
  **Inferred.** Role (from name): VidMode gamma-ramp size query handler. The render shows a request-handler shape, not the gamma meaning. It takes the screen number from the request ([[a0+8]+4]) and compares it, unsigned, with the screen count at screenInfo+48 (the `bne` at 0x42f360). A bad number leads to an ErrorF message (the call at 0x42f378) and a return of [a0+40] (0x42f38c). A good number leads to a 16-byte reply through WriteToClient (the call at 0x42f3b0), then a return of [a0+40] (0x42f3c4). The reply contents are not shown.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayPutImage` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x433140
  **Inferred.** Role (from name): overlay put-image path. It compares the byte at a1+4 with the value at +0x2078 of the overlay record (the `beq` at 0x4331d8). When they differ, it branches on the values 8 and 24 (the `beq` instructions at 0x4331e8 and 0x4331f0) and calls R200CPAccelInitFuncs with the flag 1 (0x433298, the 8 branch) or 0 (0x433280, the 24 branch); the equal path and the neither-8-nor-24 path make no such call. It then validates the drawable with VALIDATE_DRAWABLE (the `bgezall` at 0x433200, with a0 and a1 swapped), makes an unresolved indirect call at 0x43323c with a0 to a3 passed on unchanged, and returns the constant address 0x465ca8 (the return at 0x433268). The 8 and 24 suggest a pixel depth, but the render does not say. The render does not show what the unresolved call does.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayImageGlyphBlt` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434600
  **Inferred.** Same shape as FIREGL_OverlayPutImage at 0x433140. It validates the drawable with VALIDATE_DRAWABLE (the `bgezall` at 0x4346c4), compares the byte at a1+4 with the value at +0x2078 (the `beq` at 0x43469c), and branches on 8 and 24 (0x4346ac, 0x4346b4). It calls R200CPAccelInitFuncs with the flag 0 (0x434734) or 1 (0x43474c), makes an unresolved call at 0x4346ec, and returns [a1+68] (0x434720). The glyph role comes from the name. The render does not show glyph data.
  Reviewed: 2026-11-12 (sonnet)

- `CMapCloseScreen` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x435b40
  **Inferred.** Close-screen hook for the colormap layer. It calls CMapUnwrapScreen at 0x4373c0 (the `bgezall` at 0x435b6c, with a1 passed as a0 and a1). It then loads the pointer at +0x80 of the second argument (the `lw` at 0x435b7c) and calls through it at 0x435b80. The return at 0x435b94 gives that call's result. The chain-to-the-next-hook role follows from the unwrap and the indirect call, and the name agrees.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_EnableDisableFBAccess` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x437b00
  **Inferred.** Role (from name): enables or disables framebuffer access for screen number a0. It loads a pointer from screenInfo+52 indexed by a0 (the loads from 0x437b24), reads the word at offset 0 of that pointer (the `lw` at 0x437b2c), uses it to index xf86Screens, and loads the private block at +0xf8 (0x437b54). It calls FIREGL_OverlaySetRootClip (the `bgezall` at 0x437b5c) with the pointer from screenInfo as a0, the flag a1 and a3 unchanged. a2 holds 0x375e8, which the prologue also adds to t9 to form the global pointer, so it is probably not a real argument. It then makes an unresolved call at 0x437b70 through the pointer at +0x2070 of the private block (the `lw` at 0x437b68), with a0 set to the original a0 and a1 passed on, and returns that call's result. The render does not show what the callees do with the flag.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayMoveWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43a580
  **Inferred.** Role (from name): moves or resizes an overlay window and restacks it; the calls to SetWinSize, SetBorderSize and MoveWindowInStack fit that. It calls miRegionCopy three times, with stack buffers as destinations (0x43a67c, 0x43a690, 0x43a6a4), and calls CollectUnderlayChildrenRegions (0x43a6b8) with a stack buffer. It then calls SetWinSize (0x43a728), SetBorderSize (0x43a734), MoveWindowInStack (0x43a758), ResizeChildrenWinSize (0x43a780), WindowsRestructured (0x43a8dc) and FIREGL_OverlayChangeCRTC (0x43a8f4). The return at 0x43a910 gives either a word loaded through [a0+128] indexed by the value stored at the global 0x467ec8, or the result of FIREGL_OverlayChangeCRTC. The order follows the calls. The exact condition for each step is not fully traced; the first branch at 0x43a5f0 skips to 0x43a900 when [a0+24] is zero.
  Reviewed: 2026-11-12 (sonnet)

- `ProcATITVOAdjustPosition` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x445d80
  **Inferred.** Request handler for the TV-out position adjustment. It reads three signed offsets from the request (the fields at a0+8 plus +8, +12 and +16). It checks the first against -30 and 31 (the `bne` at 0x445dd4 and the `beq` at 0x445de0), the second against -6 (0x445df0) and the third against -30 (0x445e08). It writes three config entries through xf86sprintf and UpdateFile (the calls from 0x445eb8 to 0x445f80), re-applies the mode with R200SwitchMode (0x445f9c), logs failures through ErrorF (0x445fc0 to 0x445ff8), and sends a 32-byte reply through WriteToClient (0x445e44). The name gives the TV-out role. The meaning of each bound is not in the render.
  Reviewed: 2026-11-12 (sonnet)

- `R200StrGamma8` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447200
  **Inferred.** Role (from name): sets a gamma ramp from 8-bit entries. It allocates three buffers with Xalloc, each sized twice the entry count in a3 (0x447240, 0x447254, 0x447264). It calls VidModeGetGammaRamp with a0=[a0], the count a3 and the three buffers (0x447284). The `blez` at 0x44728c skips the byte loop when a3 is not positive; the loop-back branch is the `bne` at 0x4473a0, which compares a counter with a3. The loop copies bytes into the buffers (the `lbu` and `sh` pairs from 0x4472c8 on); the render does not name the source pointer, and the branches inside the loop are not fully traced. It then calls xf86ChangeGammaRamp with the count and the three buffers (0x4473bc), frees the buffers with Xfree (0x4473d0 to 0x4473f0) and returns the last Xfree result (0x447404).
  Reviewed: 2026-11-12 (sonnet)

- `R200QryMonitor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x449340
  **Inferred.** Role (from name): copies a monitor name into a table. It reaches the per-screen table through vcScreenPrivateIndex (the loads at 0x449358 and 0x449368). It copies up to 64 bytes (0x40) with xf86strncpy into the 72-byte record for index a1, the offset being a1 times 72 (computed before the call at 0x449398). A second xf86strncpy call at 0x4493d8 handles the other path. The `blez` at 0x449384 skips the first copy when a1 is not positive. The first source is the fixed string at 0x467d18. The second source is not in the render.
  Reviewed: 2026-11-12 (sonnet)

- `R200QueryHyperpipeConfig` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44d000
  **Inferred.** Queries the hyperpipe configuration for screen a0. It looks the screen up through xf86Screens (the loads at 0x44d020 and 0x44d034), checks the DRM file descriptor with checkdrmFD (0x44d050), calls R200QueryHyperpipeNetwork (0x44d08c), and issues ioctl request 0x66670015 with a stack buffer at sp-2160 (xf86ioctl at 0x44d0c4). On an ioctl failure it reads xf86errno and reports the strerror text through ErrorF (0x44d1f0 to 0x44d20c). A loop caps its count at 0x80 (the `bne` at 0x44d1d8) and stores results through the output pointer a2. The render shows the request value and the cap. Its meaning as a hyperpipe query comes from the routine name.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockValidateTree` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e440
  **Inferred.** Lock wrapper for the validate-tree hook. It takes the DRI hardware lock with DRILock on the handle at [a0+16] (0x44e49c). It calls the wrapped hook found through the lock screen table, selected by R200_lockScreenIndex (the loads from 0x44e468 to 0x44e494), and releases the lock with DRIUnlock (0x44e4c4). It stores to +0xb4 of the screen record before and after the call (0x44e4a0 and 0x44e4e4). The return at 0x44e4ec gives the hook's result.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockChangeGC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f040
  **Inferred.** Lock wrapper for the GC change hook. It takes DRILock on the handle at [a0] (0x44f09c). It calls the wrapped hook chosen by R200_lockGCIndex from the table at a0+76 (the loads from 0x44f060 to 0x44f080), stores two words at a0+0x48 and a0+0x44 before the call (0x44f084, 0x44f094) and two more at the same offsets after it (0x44f0ec, 0x44f0f0), and releases the lock with DRIUnlock (0x44f0c0). The stores at 0x44f0e0 and 0x44f0e8 write through a different pointer, not a0. The return at 0x44f0f8 gives the address of R200_lockGCOps.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockFillPolygon` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44ffc0
  **Inferred.** Lock wrapper for the polygon-fill hook of a GC. It takes DRILock on the handle at [a1] (0x450030). It calls the wrapped hook chosen by R200_lockGCIndex from the table at a1+76 (the loads at 0x450010 and 0x450018), stores two words at a1+0x44 and a1+0x48 around the call (0x45001c, 0x45002c, 0x450094, 0x450098), and releases the lock with DRIUnlock (0x450068). The one return sets v0 to the address of R200_lockGCOps (0x4500a0). The render does not show why the wrapper returns that address.
  Reviewed: 2026-11-12 (sonnet)

- `addToIS1BoardList` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x450f80
  **Inferred.** Parses one board description string and links the resulting record into a list. It allocates a 0x428-byte record with XNFalloc (0x450fb0) and clears it with xf86bzero (0x450fdc). It copies the description into the record at +8 with xf86strcpy (0x450ff0), splits it on the delimiter at 0x467d68 with xf86strtok (0x451014 to 0x451080), and reads numeric fields with xf86strtol in base 16 and base 10 (0x45104c, 0x451094). It matches a keyword with xf86strcmp against the string at 0x467d70 (0x4510b8), and formats a name into the record at +264 with xf86snprintf (0x45110c). It inserts the record into the list whose head pointer is the global at 0x468204, in the order given by newIsBigger (0x451370). Errors go through ErrorF (0x451400). The name fixes the IS1 board list.
  Reviewed: 2026-11-12 (sonnet)
