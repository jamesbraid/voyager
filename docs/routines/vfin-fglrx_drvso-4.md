# Routine readings, fglrx_drv.so batch 4

Role statements for the routines of `usr/X11R6/lib/modules/drivers/fglrx_drv.so` that
`docs/inventory/functions.tsv` does not show as understood, in address order, taking every
15th routine from index 4 (24 routines). Each statement uses the rendered facts: calls and
their arguments, branch targets, offsets and return values. Names are a hint only. Where the
render does not show what a value means, the entry says so. `is1_calc_rfp` at 0x452780 was
dropped because the render shows only a floating-point loop around `xf86fabs` and no
identifiable role.

- `__fglDRMPM4Submit` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40a1c0
  **Inferred.** A 72-byte wrapper. The `bgezall` at 0x40a1d8 passes its four argument registers
  unchanged to `__fglDRMPM4Queue` at 0x409fc0. The routine then stores a word through the pointer
  at a0+4 at offset 0x714 (`sw` at 0x40a1f0) and returns the word at [a0+8] (return at 0x40a200).
  The name suggests a PM4 packet submit to a command ring. The render shows the queue call and
  the counter update, not the packet format.

- `R200CPSubsequentDashedTwoPointLine` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40c980
  **Inferred.** A 276-byte routine that writes a six-word command. It calls `__fglDRMPM4Alloc` at
  0x409f40 with a1 set to 6 (`bgezall` at 0x40c9f8), stores six words at offsets 0x0 through 0x14
  of the returned block (stores at 0x40ca08 to 0x40ca50), and submits the block with
  `__fglDRMPM4Submit` at 0x40a1c0 (from 0x40ca58). Before that it compares a1 and a2 with the
  words at [a0+156] and [a0+160] (`beq` at 0x40c9ac and 0x40c9c0). It also calls `LastLinePel`
  at 0x40ca84. The name points to a dashed line segment. The render does not show the dash
  arithmetic, so the packet contents are not identified.

- `asicHwRevID2chipRev` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40f800
  **Inferred.** A 4184-byte lookup from an ASIC identifier to a chip revision. The routine calls
  `ENCODE_DEVICE_ID` at 0x40f6c0 for more than 100 literal IDs (for example 0x5148 at 0x40f82c,
  0x4242 at 0x40f89c, 0x5960 at 0x40fd44, 0x3173 at 0x410804). It compares each encoded result
  with the input held in s0 (`beq` branches from 0x40f83c onward). The returns give chip-revision
  values 0x1, 0x2, 0x3, 0x80 and 0x81 (for example 0x40fa14, 0x40fa30, 0x40f9f0 and 0x40f97c),
  and 0xff when no entry matches (0x40f920, 0x40f964). The name suggests an ASIC hardware
  revision to chip revision map. The render does not say what the IDs or revisions mean.

- `R200PreInitDDC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x415a80
  **Inferred.** A 192-byte pre-init step for the display data channel of the R200 driver. It
  loads two submodules with `xf86LoadSubModule`, using the name strings at 0x467b88 and 0x467b8c
  (calls at 0x415aa4 and 0x415ae0), and requests symbol lists with `xf86LoaderReqSymLists`
  (0x415ad0 and 0x415b10). It calls `R200I2cInit` at 0x4159c0 from 0x415b20. It stores three
  byte flags in the private block at [a0+248]+0x198, 0x199 and 0x19a (`sb` at 0x415a9c, 0x415aa8,
  0x415ab8 and 0x415b2c). The stored values are not in the render. The routine returns the load
  result or the `R200I2cInit` result, depending on the path (0x415af4 and 0x415b38).

- `R200LoadPalette` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4195c0
  **Inferred.** A 1796-byte palette loader for the screen. It runs a loop bounded by the entry
  count in a1 and stores into the private block at [a0+248]+48 (byte stores at +0xb3 and word
  stores at +0xb4). It calls `FGLSetGammaData` at 0x419798 and 0x4197b8 and `FGLMDelay` with 0x32
  as the argument at 0x4196a4, 0x419878, 0x4199a8 and 0x4199fc. It brackets the work with
  `DRILock` at 0x419c70 and `DRIUnlock` at 0x419c94, and calls `FIREGL_OverlayLoadPalette` at
  0x419c88 between them. Branches compare the value at [a0+248]+6536 with 0xf and 0x10 (0x419644
  and 0x419650). The name matches a palette load. The render does not give the table layout.

- `R200InitCrtc2Registers` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41ea80
  **Inferred.** A 1704-byte routine that fills two register-value records. The arguments a1 and a2
  are written through, and a3 is the screen private block. It switches on the word at a3+6544
  against 0x4, 0x8, 0xf, 0x10, 0x18 and 0x20 (`beq` at 0x41eab8 to 0x41eae0 and 0x41eaec), and on
  the fields at [a3+136]+16 and [a3+152]+16 against values from 0x1 to 0x5. It calls `xf86DrvMsg`
  at 0x41eb0c with the message string at 0x45f128, and calls `R200InitFPRegisters` at 0x41f140
  from 0x41f104. The name points to second-CRTC register setup, and the call to flat-panel
  registers fits. The render shows the switches and stores, not what each register controls.

- `R200InitVisualConfigs` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x425480
  **Inferred.** A 1916-byte routine that builds GLX visual configurations for the screen. It calls
  `XNFcalloc` at 0x425634, 0x425650 and 0x42566c. The call at 0x425634 carries the depth values 0xf,
  0x10, 0x18 and 0x20 among its arguments, and the branches at 0x4254b4 to 0x4254d8 compare the
  word at +6544 of the screen's private block with 0x8, 0xf, 0x10, 0x18 and 0x20. It hands the
  result to `GlxSetVisualConfigs` at 0x425550 and returns 1 (0x425568) or 0 (0x425594). It calls
  `Xfree` at 0x425b9c, 0x425bd0 and 0x425bdc on the `XNFcalloc` results.

- `FIREGL_DRICopyWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4294c0
  **Inferred.** A 356-byte copy-window routine on the DRI path. It reads the window's screen index
  from a0+16 and the screen record from `xf86Screens`. It walks the window tree with `TraverseTree`
  (call at 0x42953c, callback at 0x429480). It translates and intersects the region with
  `miTranslateRegion` (0x429574) and `miIntersect` (0x429588). It calls `R200DRIMoveBuffers` at
  0x427a00 (from 0x4295a8) to move the buffers, and calls `Xfree` at 0x4295c8.
  The name matches a window copy. The render shows the region arithmetic, not the copy offsets.

- `r200_EnableRPTRwriteback` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42c1c0
  **Inferred.** A 48-byte routine that sets up ring read-pointer writeback. It loads a word from
  the argument at a1+0x2c and stores it at a0+0x70c (`sw` at 0x42c1cc). It then reads the word at
  a0+0x704 and stores it back there (`lw` at 0x42c1d4, `sw` at 0x42c1e0). The return at 0x42c1e8
  reports v0 as 0xfffffffff7ffffff, a 60-bit constant that does not look like a 32-bit mask, so
  the render may show a sign-extended value. The bit changed in the read-modify-write at +0x704
  is not identified. The name and the writeback address store fit a read-pointer writeback
  enable.

- `FGLRXSwapDispatch` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42fc00
  **Established.** The routine is 8 bytes. Its only path returns the constant 1 (return at
  0x42fc00), with no calls, memory accesses or branches. The name suggests a swap-dispatch
  callback, but the render cannot show its callers, so the purpose is not established.

- `FIREGL_OverlayCopyPlane` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x433440
  **Inferred.** A 384-byte overlay copy-plane entry. It calls `VALIDATE_DRAWABLE` at 0x432d40
  twice (0x433504 and 0x433518). It compares the byte at [a2+4] with 0x8 and 0x18 (`beq` at
  0x4334ec and 0x4334f4) and calls `R200CPAccelInitFuncs` at 0x433598 and 0x4335b0, with a2 set to
  0 and 1. An indirect call at 0x433554 passes the four arguments through to a callee the render
  does not resolve. The name matches overlay copy-plane. The render does not show the copy itself.

- `FIREGL_OverlayPushPixels` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434900
  **Inferred.** A 348-byte overlay push-pixels entry with the same shape as
  `FIREGL_OverlayCopyPlane`. It calls `VALIDATE_DRAWABLE` at 0x4349c4, compares the byte at
  [a0+4] with 0x8 and 0x18 (0x4349ac and 0x4349b4), and calls `R200CPAccelInitFuncs` at 0x434a34
  and 0x434a4c. An indirect call at 0x4349ec passes its arguments to an unresolved callee. It
  returns the word at [a0+68] (return at 0x434a20). The name matches the push-pixels path, and
  the render does not show the pixel handling.

- `CMapCreateColormap` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x435d00
  **Inferred.** A 172-byte colormap-creation hook. It reads the screen record through a0+12 and
  the private-index table at [[a0+12]+360], indexed by the word at 0x467ed0. It stores three words
  at [a0+12]+0x134 (`sw` at 0x435d40, 0x435d6c and 0x435d90). It makes an indirect call at 0x435d3c
  with its four arguments passed through to an unresolved callee. It calls
  `CMapAllocateColormapPrivate` at 0x435bc0 from 0x435d50 and tests its result at 0x435d5c. It
  returns 0 or 1. The name matches the X colormap create entry point. The render does not show
  the indirect callee.

- `FIREGL_OverlayDestroyWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x437e40
  **Inferred.** A 352-byte overlay teardown. It reads the overlay record from the window-private
  slot selected by the index at 0x467ec8 (through a0+128). It frees buffers held in that record
  with `Xfree` (calls at 0x437ee4, 0x437f08 and 0x437f1c), writes several fields of the record
  (`sw` at 0x437eec, 0x437f14, 0x437f8c and 0x437f9c), and makes an indirect call at 0x437f3c with
  its arguments passed through. It returns 1 (0x437f78) or the indirect result (0x437f64). The
  name matches the overlay destroy-window path. The render does not show what the record holds.

- `FIREGL_OverlayRecomputeExposures` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43b340
  **Inferred.** A 296-byte routine that recomputes exposed regions for an overlay window. It calls
  `miSubtract` six times (at 0x43b398, 0x43b3b0, 0x43b3c8, 0x43b3e8, 0x43b400 and 0x43b418) on
  region structures reached through [a0+128] and the argument a1. It returns 1 (0x43b438) or 3
  (0x43b460). The name fits an exposure update, and the `miSubtract` calls match the X server
  region code. The render does not say which windows the regions describe.

- `SetSrcColorkey` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43d740
  **Inferred.** A 64-byte routine that reads the adapter block at [a0+248] and its sub-block at
  +48. It writes two words at +0x4e4 and +0x4e8 of that sub-block (`sw` at 0x43d770 and 0x43d77c),
  and returns the sub-block pointer (return at 0x43d778). The name suggests it sets the source
  colour key for the overlay. The render shows the two stores but not the values written, so
  that purpose is not confirmed.

- `ATITVOSwapDispatch` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4461c0
  **Established.** The routine is 8 bytes. Its only path returns the constant 1 (return at
  0x4461c0), with no calls, memory accesses or branches. The name suggests a swap-dispatch
  callback, but the render cannot show its callers, so the purpose is not established.

- `R200GetBoardName` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447640
  **Inferred.** A 20-byte routine that makes no calls and touches no memory. It returns the
  constant address 0x467ccc (return at 0x44764c). The name suggests it returns the board name
  string at that address. The render does not print the string.

- `R200GenlockHandler` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4494c0
  **Inferred.** A 92-byte genlock handler. It loads the screen-private index from
  `sym(vcScreenPrivateIndex)` and uses it to select a pointer from the table at [a0+360]. It calls
  `is1GenlockAchieved` at 0x453600 (`jalr` at 0x4494f8) with its arguments passed through. It
  writes a word at +0x1c of the selected record (`sw` at 0x449504) and returns 0 (0x449514). The
  name fits a genlock-achieved check. The render does not show what the stored word holds.

- `R200_lockCloseScreen` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44d8c0
  **Inferred.** A 392-byte CloseScreen wrapper. It takes the DRI lock with `DRILock` (0x44da18).
  It loads fields from the lock-wrapper record at [a1+360], indexed by `R200_lockScreenIndex`,
  and stores them into the screen record at a1+0x80 through a1+0x148 (the `lw`/`sw` pairs from
  0x44d92c to 0x44da0c). It writes the `miPointerScreenIndex` slot of the same wrapper table
  (`sw` at 0x44d9ec), calls `Xfree` with fields of the wrapper (0x44da08), and calls the callee
  at 0x44da28 indirectly, with the arguments passed through. The name suggests the wrapped
  close-screen hook, but the render does not resolve that callee. The render shows the field
  copies and the call order.

- `R200_lockCreateGC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e600
  **Inferred.** A 220-byte CreateGC wrapper. It takes the DRI lock with `DRILock` (0x44e66c),
  stores two words at offsets 0x44 and 0x48 of the argument block (`sw` at 0x44e6b4 and 0x44e6b8),
  and writes two words at the GC-index slot of the record at +0x0 and +0x4 (`sw` at 0x44e6a8 and
  0x44e6b0). It calls an indirect callee at 0x44e678 with the arguments passed through, releases
  the lock with `DRIUnlock` (0x44e688), and returns the callee's value (return at 0x44e6d4). The
  name matches the CreateGC wrapper. The render shows the lock order and the table writes.

- `R200_lockChangeClip` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f200
  **Inferred.** A 208-byte ChangeClip wrapper with the same shape as `R200_lockCreateGC`. It takes
  the DRI lock with `DRILock` (0x44f264), writes two words in the GC-index slot (`sw` at 0x44f2b0
  and 0x44f2b8), calls an indirect callee at 0x44f280 with its arguments passed through, and
  releases the lock with `DRIUnlock` (0x44f290). The render reports v0 at the return (0x44f2c8) as
  the address of `R200_lockGCOps`. The name matches the ChangeClip hook, and the render does not
  show the callee.

- `R200_lockPolyFillArc` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4501c0
  **Inferred.** A 216-byte PolyFillArc wrapper with the same shape as `R200_lockChangeClip`. It takes
  the DRI lock with `DRILock` (0x450228), writes two words in the GC-index slot (`sw` at 0x450278
  and 0x450280), calls an indirect callee at 0x450244 with its arguments passed through, and releases
  the lock with `DRIUnlock` (0x450258). The render reports v0 at the return (0x450290) as the
  address of `R200_lockGCOps`. The name matches the PolyFillArc hook, and the render does not show
  the callee.
