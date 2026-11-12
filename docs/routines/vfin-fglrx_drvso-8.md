# Routine readings: fglrx_drv.so, sampled routines (vfin-fglrx_drvso-8)

Role statements for routines of `usr/X11R6/lib/modules/drivers/fglrx_drv.so` that the function inventory does not yet show as understood. The routines are the 357 such rows in address order, and the sample takes every 15th row from index 8 (0-based), giving 24 candidates. Two candidates are dropped and listed at the end of this file. Each statement uses the rendered facts only: registers, branch targets, constants, calls and sizes. Every entry is inferred, because the renders show what a routine does with its arguments and return value but not what its callers expect. Where a callee is named only by its import name, the entry says so.

- `R200RestoreCPAccelState` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40aa00
  **Inferred.** An 8-byte routine whose body is only the return at 0x40aa00 and its delay slot. It stores nothing, calls nothing and branches nowhere, so it changes no state. The render shows no value for v0. The name suggests restoring accelerator state, and the body does not do that.
  Reviewed: 2026-11-12 (sonnet)

- `R200MMIOAccelInit` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40cdc0
  **Inferred.** A 188-byte routine that makes nine word stores at +0x4 through +0x24 (the stores at 0x40cdd4, 0x40cddc, 0x40ce30 and onward); the render does not name the base register or show where the stored values come from. It first passes the value reached through arg0+220 to xf86IsEntityShared at 0x40cdec. When that result is zero, the beq at 0x40cdf4 branches to 0x40ce34, skipping the xf86GetEntityPrivate call. Otherwise it calls xf86GetEntityPrivate at 0x40ce0c with that value and gR200EntityIndex, then tests words reached through the result (the bne at 0x40ce20 and the beq at 0x40ce28). The return at 0x40ce74 gives one of the two call results. The body does not say what the nine fields are for.
  Reviewed: 2026-11-12 (sonnet)

- `R200UnmapFB` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x410d00
  **Inferred.** A 184-byte routine that works on the private record at arg0+248. When the word at +52 is zero, the beq at 0x410d14 branches to 0x410d70; the xf86DrvMsg call at 0x410d84 (message type 5) and the xf86exit call at 0x410d90 (status 1) lie after that target. When the word at +52 is nonzero and the word at +24 is nonzero, it calls fbdevHWUnmapVidmem at 0x410d30. When the word at +52 is nonzero and the word at +24 is zero, it calls drmUnmap at 0x410d50 if the doubleword at +9256 (an 8-byte load) is nonzero, and xf86UnMapVidMem at 0x410da8 if it is zero. The return at 0x410d68 gives 1, after a word store to +52 at 0x410d60; the render does not show the value stored. The render lists the xf86UnMapVidMem call after the xf86exit call in address order only and shows no branch between them, so this entry does not describe the flow there. Role (from name): unmapping the framebuffer and DRM mappings.
  Reviewed: 2026-11-12 (sonnet)

- `R200ValidateCloneModes` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x416080
  **Inferred.** A 1752-byte routine. Role (from name): validating the mode list of a clone output. It calls xf86GetOptValString three times on the R200Options table with option IDs 0x16, 0x17 and 0x18 (0x416250, 0x4162ac, 0x4162c4). It calls xf86sscanf at 0x41657c with destinations on the stack, and at 0x416608 and 0x416654 with destinations at [arg0+212]+20 and +16, and +88 and +84. It allocates a 0x24-byte record with XNFcalloc at 0x416200 and passes it to xf86ValidateModes at 0x416374 with arg0 and the list at [[arg0+212]+148]. When that call returns a positive value it goes on to xf86SetCrtcForModes at 0x41638c and xf86PrintModes at 0x416398, and logs through xf86DrvMsg at message type 7 (0x4163dc). On a later path guarded by several tests it allocates a 0x9c-byte record with XNFcalloc at 0x41641c and copies from [arg0+200] with xf86memcpy at 0x41643c. It calls R200SetSyncRangeFromEdid with a1 = 1 at 0x4166d4 when the word at [arg0+212]+12 is zero (the bne at 0x4166c0), and with a1 = 0 at 0x4166f4 when the word at [arg0+212]+80 is zero (the bne at 0x4166e8). The meaning of the option strings is not stated by the body.
  Reviewed: 2026-11-12 (sonnet)

- `R200PictureCreateDefaultFormats` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x419f40
  **Inferred.** A 1800-byte routine. Role (from name): building the default picture-format list. A halfword at arg0+96 is loaded, and the blez at 0x419fd8 branches to 0x41a630 when it is not positive. A loop calls visualDepth through [0x419e40] at 0x41a050. The render shows 13 addFormat calls through [0x419ec0], ten of which pass fixed second-argument constants: 0x20020888, 0x20030888, 0x18020888, 0x18030888, 0x10020555, 0x10030555, 0x10021555, 0x10031555, 0x10020565 and 0x10030565 (the first at 0x41a268, the last at 0x41a620). This entry does not check the bit layout of those constants against a public header. It calls Xalloc at 0x41a2fc, calls xf86memset on the Xalloc result with a value of 0 at 0x41a354, and calls FakeClientID with 0 at 0x41a450. The return at 0x41a338 gives 0 on the path where the Xalloc result at 0x41a308 is zero.
  Reviewed: 2026-11-12 (sonnet)

- `R200InitPLLRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x420900
  **Inferred.** A 388-byte routine that stores seven words at offsets +0x33c, +0x340, +0x344, +0x348, +0x34c, +0x350 and +0x354; the render does not name the store base. It loads halfwords and words from arg1 (+0, +2, +4, +8) and performs nine 64-bit loads (ld at 0x420940 through 0x42095c and at 0x42097c). A loop branches back from 0x420a08 to 0x4209e8, and a bnel at 0x420a14 compares the word at arg1+8 with another register. It calls R200Div through [0x4112c0] at 0x420a34 with a1 taken from the halfword at arg1+0, a3 = the word at arg1+8 and a7 = 0x45f190, and returns its result at 0x420a74. Role (from name): PLL register setup. The body does not show which hardware register each stored word feeds.
  Reviewed: 2026-11-12 (sonnet)

- `R200DRIInitBuffers` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x426b40
  **Inferred.** A 140-byte routine. It follows the word that arg0+16 points to as an index into the xf86Screens table and reads the word at +9208 of that screen's private record at +248. When that word is zero, the beq at 0x426b94 branches to 0x426bc0 and the return at 0x426bc4 gives it. When it is nonzero, the code after the beq loads a word at +0x7c (0x426b9c), calls QBS_MakeTrans at 0x426bb4 with a3 = 0x3fffffff and a5 = the word at arg1+8, and stores a word at +0x7c at 0x426bb8; the stored value is not traced by the render. The return at 0x426bc4 gives one of the +9208 word and QBS_MakeTrans's result. The render also tests the word at arg1+8 (the beq at 0x426b68) and does not show which side of that test reaches the call. The body does not show what buffers are set up, so the name is not confirmed by the body.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_DRIDispatch` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42b880
  **Inferred.** A 248-byte routine that switches on the minor opcode byte at [arg0+8]+1. Role (from name): a request dispatcher for the DRI extension. Opcode 0 branches to the QueryVersion handler (call at 0x42b908). For every other opcode the routine first calls LocalClient at 0x42b8b4 and returns 1 when that result is zero (the beq at 0x42b8bc). Opcode 1 then goes to the drawable-info handler (call at 0x42b968), and opcode 2 goes to the visual-config handler (call at 0x42b948). The fall-through return at 0x42b8f0 gives either 1 or the drawable-info handler's result, and the render does not separate the two. The handler names are the render's callee names.
  Reviewed: 2026-11-12 (sonnet)

- `CheckForOSSupport_SSE` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42cb00
  **Inferred.** A 48-byte routine with no branch. It calls xf86DrvMsg once, with screen 0, message type 5 and the format string at 0x460940, and returns 0. The body performs no CPU-feature or OS-support test, so the name's check is not made here. Its only effect is the logged line.
  Reviewed: 2026-11-12 (sonnet)

- `bindBarrier` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x430600
  **Inferred.** A 252-byte routine over a table at [0x4681a8] that holds eight bytes per arg0 value, so each arg0 value has two word slots selected by arg2. Arg2 is tested against 2 and 0 (the beq at 0x430624 and the bltz at 0x43062c), and out-of-range values branch to 0x4306a4. The render shows two xf86DrvMsg calls at message type 6 (0x430658 and 0x4306b0) and returns of 2 at 0x43066c and 0x4306c4; the return at 0x430688 gives 0 or 2. For an in-range index it branches on a zero slot word (the beq at 0x430648) and on a slot word equal to arg1 (the beq at 0x430694). The two calls to is1Bind through [0x453d00], at 0x4306d4 and 0x4306ec, each follow a store to the table at 0x4306d0 and 0x4306e8. The render does not show what is1Bind does. Role (from name): binding a barrier slot.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayPolyRectangle` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x433980
  **Inferred.** A 316-byte routine. Role (from name): an overlay wrapper for a rectangle-drawing request. It loads words at +0x0, +0x4, +0x44, +0x48 and +0x4c from arg1 (the render does not give every base) and indexes the xf86Screens table by the word at [arg1] to reach a private record at +248. The byte at arg1+4 is compared with 0x8 (the beq at 0x433a1c) and 0x18 (the beq at 0x433a24). Equal to 0x8 reaches R200CPAccelInitFuncs at 0x433aac with a2 = 1, equal to 0x18 reaches it at 0x433a94 with a2 = 0, and any other value calls VALIDATE_DRAWABLE at 0x432d40 with arg1 and arg0, then an untraced callee at 0x433a50 that receives arg0 through arg3 unchanged. The return at 0x433a80 gives the word at arg1+68.
  Reviewed: 2026-11-12 (sonnet)

- `CMapEnterVT` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x436480
  **Inferred.** A 272-byte routine. Role (from name): reinstalling the colormap of a screen on entry to a virtual terminal. It reads a +360 table reached through the sym(screenInfo) entry for arg0 and its word at +52, indexed by the word at 0x467ed0. It also reads the installed-map pointer at miInstalledMaps[arg0]. An untraced callee at 0x4364c8 runs first, and a zero result from it branches to 0x436578 (the beq at 0x4364d0). CMapReinstallMap at 0x436780 is called on two paths, one for the installed map (0x4364f0) and one for the entry at 0x469140 (0x436568). Those paths depend on a zero test on the installed map (the beq at 0x4364e4), a 2-byte field at +10 compared with 8 (the bne at 0x436510), and a zero test on the entry at 0x469140 (the beq at 0x436528). The routine returns 1 at 0x436560 and 0 at 0x436588.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayReparentWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4384c0
  **Inferred.** A 148-byte routine. Role (from name): an overlay hook for reparenting a window. It loads the word at [arg0+128] and the word at 0x467ec8, uses the latter times four as an offset, and tests a word reached through that table entry (the bne at 0x4384f4). When that word is nonzero, the routine branches to the RebuildTree call at 0x438538, whose a0 is the word at +36 of WindowTable[the word arg0+16 points to] and whose a1 is that index times four. When it is zero, it first calls HasUnderlayChildren at 0x438504 with a1 = 0x36c28, and the beq at 0x43850c skips the RebuildTree call when that result is zero. The return at 0x43854c gives one of the two callees' results.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlaySetRootClip` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43cbc0
  **Inferred.** A 272-byte routine. Role (from name): updating the clip state of one overlay window. It indexes WindowTable by the word at arg0 and reads the overlay record reached through +128 of that window and the word at 0x467ec8, then the region pointer at +32 of that record. It calls MarkUnderlayWindow at 0x43cc10, before any branch on arg1, passing arg1 through arg3 unchanged, and then branches on arg1 (the beq at 0x43cc18). When arg1 is nonzero it loads halfwords at +0x8 and +0xa (base not shown), stores words at +0x18 and +0x1c, calls Xfree on the region pointer at 0x43cc60 when the tests at 0x43cc4c and 0x43cc58 both find a nonzero value, and calls miRegionBreak on the record's +36 at 0x43cc78; the return at 0x43cc88 gives miRegionBreak's result. When arg1 is zero it calls Xfree on the region pointer at 0x43cca8 under the same kind of tests (0x43cc94 and 0x43cca0), then loads halfwords at +0x18 and +0x1a and stores a word at +0x20 and halfwords at +0x1e and +0x1c (0x43ccb4 onward). The render shows no return on the arg1-zero path.
  Reviewed: 2026-11-12 (sonnet)

- `ReadRomOffset` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43ea00
  **Inferred.** A 96-byte routine that reads from the card's BIOS ROM. It takes the BIOS base from the word at +40 of the private record at arg0+248 and calls xf86ReadBIOS at 0x43ea24 with the base as the first argument, arg2 as the second, arg1 as the third and arg3 unchanged as the fourth. The routine returns 1 when s8, which holds arg3, equals the register a5, and 0 otherwise (the bne at 0x43ea38 branches to the return of 0 at 0x43ea58 when they differ). The render does not trace a5, so the test's second operand is unknown. The body does not check the result of xf86ReadBIOS, unless a5 is that result, which the render does not establish.
  Reviewed: 2026-11-12 (sonnet)

- `ProcATIHPVTMDSTransmit` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x446500
  **Inferred.** A 128-byte routine. It loads the word at [arg0+8]+4 and compares it, as an unsigned value, with the word at sym(screenInfo)+0x30 (the bne at 0x44651c is taken when the first is smaller). When it is smaller, it loads a word at +0x1c (0x44655c) and calls WriteToClient at 0x446564 with a1 = 0x20 and a2 = sp-48. The routine returns the word at arg0+40 on both paths (0x44652c and 0x446578). The render lists no store into the stack buffer, so what the reply carries is not shown. Role (from name): a request handler for an HPV TMDS transmit control; the WriteToClient call is consistent with a request handler.
  Reviewed: 2026-11-12 (sonnet)

- `R200QryCntrl` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447bc0
  **Inferred.** A 28-byte routine. When arg2 equals 0xa, the beq at 0x447bc4 jumps to the return at 0x447bd4, and the delay slot of that return holds a word store at +0x20 (0x447bd8) whose base register the render does not show. Otherwise it returns at 0x447bcc. The value stored and the meaning of selector 0xa are not shown by the body. The render shows no v0 value for either return.
  Reviewed: 2026-11-12 (sonnet)

- `R200CompositorRegWrite` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44ac00
  **Inferred.** A 100-byte routine that sends one request through R200CmpIoctl at 0x44ac28, with the request code 0x6667000b, arg0, and a stack buffer at sp-32. It returns 0 when that call returns 0. A nonzero result calls ErrorF with the message at 0x461fb8 (at 0x44ac3c) and returns -1. The meaning of the request code is not in the body. The name suggests a compositor register write, and the callee name agrees with that.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockGetSpans` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44dd00
  **Inferred.** A 212-byte routine that calls DRILock with the word at arg0+16 and a1 = 0 at 0x44dd70, then an untraced callee at 0x44dd90 with arg0 through arg3 unchanged, then DRIUnlock at 0x44ddac. It loads through arg0+16, a table at +360 and a per-screen entry; the render does not name the global that supplies the index. It stores a word at +0x90 at 0x44dd74 and again at 0x44ddc4, after the DRIUnlock call. The return at 0x44ddcc gives DRIUnlock's result. Role (from name): a lock wrapper around a span-fetching operation.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockUnrealizeCursor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e940
  **Inferred.** A 160-byte routine that calls DRILock on arg0 with a1 = 0 at 0x44e990, an untraced callee at 0x44e9a0 with arg0 and arg1, and DRIUnlock on arg0 at 0x44e9b0. It loads a +360 table and an entry with a word at +0x4c; the render does not name the global that supplies the index. It stores a word at +0x124 at 0x44e994 and again at 0x44e9d0. The return at 0x44e9d8 gives the untraced callee's result, as the render lists it. Role (from name): a lock wrapper around a cursor-unrealize operation.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockSetSpans` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f580
  **Inferred.** A 240-byte routine that calls DRILock on the word at arg1+0 with a1 = 0 at 0x44f5f4, an untraced callee at 0x44f61c with arg0 through arg3 unchanged, and DRIUnlock on the same word at 0x44f630. It loads a pointer at +76 (0x4c) and stores words at +0x48 and +0x44 at 0x44f5e0 and 0x44f5f0, ahead of the lock, and at +0x0, +0x4, +0x48 and +0x44 at 0x44f650 through 0x44f660, following the unlock; the render does not name every base. The return at 0x44f668 gives the address of R200_lockGCOps. Role (from name): a lock wrapper around a set-spans operation on a GC.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockImageText16` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4505c0
  **Inferred.** A 232-byte routine with the same shape as R200_lockSetSpans. It calls DRILock on the word at arg1+0 with a1 = 0 at 0x450630, an untraced callee at 0x450654 with arg0 through arg3 unchanged, and DRIUnlock on the same word at 0x450668. It loads a pointer at +76 (0x4c) and stores words at +0x48 and +0x44 at 0x45061c and 0x45062c, ahead of the lock, and at +0x0, +0x4, +0x48 and +0x44 at 0x450688 through 0x450698, following the unlock; the render does not name every base. It loads a word at +0x40 at 0x45063c where the set-spans wrapper loads +0x4. The return at 0x4506a0 gives the address of R200_lockGCOps. Role (from name): a lock wrapper around an image-text operation on a GC.
  Reviewed: 2026-11-12 (sonnet)

## Dropped

Two sampled routines have no role the renders support, so they have no entry above.

The first is vfmtRamboSuffix at 0x455d00 (156 bytes). The string compared at 0x455d70 is not traced, and the call that follows (named strcmp by its import) takes a third argument, which a two-string comparison does not. The render does not establish what the routine does with its strings.

The second is FIREGL_OverlayDestroyGC at 0x434ec0 (176 bytes). Its only call is an untraced indirect callee at 0x434f10, and the two record words it passes in are saved and restored around that call. The render supports the save and restore pattern but not the routine's role.
