# Routine readings, fglrx_drv.so batch 4

Role statements for the routines of `usr/X11R6/lib/modules/drivers/fglrx_drv.so` that
`evidence/inventory/functions.tsv` does not show as understood, in address order, taking every
15th routine from index 4 (24 routines). Each statement uses the rendered facts: calls and
their arguments, branch targets, offsets and return values. Names are a hint only. Where the
render does not show what a value means, the entry says so. `is1_calc_rfp` at 0x452780 was
dropped because the render shows only a floating-point loop around `xf86fabs` and no
identifiable role.

- `__fglDRMPM4Submit` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40a1c0
  **Inferred.** A 72-byte wrapper. The `bgezall` at 0x40a1d8 passes its four argument registers
  unchanged to `__fglDRMPM4Queue` at 0x409fc0. The routine then stores a word through the pointer
  at a0+4 at offset 0x714 (`sw` at 0x40a1f0) and returns the word at [a0+8] (return at 0x40a200).
  The name suggests a PM4 packet submit to a command ring. The render shows the queue call, three
  loads and the one store, not the packet format or what the stored word means.
  Reviewed: 2026-11-12 (sonnet)

- `R200CPSubsequentDashedTwoPointLine` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40c980
  **Inferred.** A 276-byte routine. Four `beq` branches (0x40c9ac, 0x40c9c0, 0x40c9c8 and 0x40c9d0)
  all skip to 0x40ca64. The first two compare a1 with the word at [a0+156] and a2 with the word at
  [a0+160] (signed). When none of them skips, it calls `__fglDRMPM4Alloc` at 0x409f40 with a1 set to 6
  (`bgezall` at 0x40c9f8), makes six word stores at offsets 0x0, 0x4, 0x8, 0xc, 0x10 and 0x14 (stores
  at 0x40ca08 to 0x40ca50; the render does not give the base register), and calls
  `__fglDRMPM4Submit` at 0x40a1c0 (from 0x40ca58) with a1 set to the `Alloc` result plus 24. The
  return at 0x40ca68 yields the `Submit` result or a value the render does not resolve. A separate
  call to `LastLinePel` at 0x40ca84 passes four stack addresses; the render does not show the
  condition that reaches it. The name points to a dashed line segment. The render does not show the
  dash arithmetic, so the packet contents are not identified.
  Reviewed: 2026-11-12 (sonnet)

- `asicHwRevID2chipRev` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40f800
  **Inferred.** A 4184-byte routine that calls `ENCODE_DEVICE_ID` at 0x40f6c0 108 times, with 101
  distinct literal first arguments (for example 0x5148 at 0x40f82c, 0x4242 at 0x40f89c, 0x5960 at
  0x40fd44, 0x3173 at 0x410804). Each call is followed by a `beq` or `bne` between s0 and another register (the first, at
  0x40f83c, compares s0 with the call result; the render does not resolve the others).
  Other branches test a1 and a2 against small constants (0x0, 0x1, 0x2, 0x4, 0xc, 0x80, 0x81). The
  returns are constants: 0xff at several sites (for example 0x40f920 and 0x40f964), 0x1 (0x40fa14),
  0x2 (0x40fa30) and 0x3 (0x40f9f0), and the return at 0x40f97c is one of 0xff, 0x1, 0x2, 0x3, 0x80
  and 0x81. The name suggests an ASIC hardware revision to chip revision map. The render does not
  say what the IDs or revisions mean, which register holds the input or when 0xff is returned.
  Reviewed: 2026-11-12 (sonnet)

- `R200PreInitDDC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x415a80
  **Inferred.** A 192-byte routine. Role (from name): a pre-init step for the display data channel of
  the R200 driver. It calls `xf86LoadSubModule` with the name strings at 0x467b88 and 0x467b8c (calls
  at 0x415aa4 and 0x415ae0), tests each result against zero (`bne` at 0x415aac and 0x415ae8), and
  calls `xf86LoaderReqSymLists` (0x415ad0 and 0x415b10). It calls `R200I2cInit` at 0x4159c0 from
  0x415b20. It makes four byte stores at +0x198, +0x199, +0x19a and +0x19a (`sb` at 0x415aa8,
  0x415a9c, 0x415ab8 and 0x415b2c) on a block the render does not resolve (it loads [a0+248]
  first). The stored values are not in the render. The routine returns a load result (0x415af4) or
  the `R200I2cInit` result (0x415b38), depending on the path.
  Reviewed: 2026-11-12 (sonnet)

- `R200LoadPalette` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4195c0
  **Inferred.** A 1796-byte routine. Several loops run while a counter differs from a bound derived
  from a1 (a1 is also tested with `blez`), and each makes byte stores at +0xb3 and a word store at
  +0xb4; the render does not give the base register of those stores. It calls `FGLSetGammaData` at
  0x419798 and 0x4197b8, each under branches (0x41977c, 0x419788 and 0x4197a8), and `FGLMDelay` with
  a0 = 0x32 at 0x4196a4, 0x419878, 0x4199a8 and 0x4199fc. On one path it calls `DRILock` at 0x419c70,
  `FIREGL_OverlayLoadPalette` at 0x419c88 and `DRIUnlock` at 0x419c94, in that order, and returns the
  `DRIUnlock` result; the other return (0x4197f4) is not preceded by those calls. Branches compare
  the value at [a0+248]+6536 with 0xf and 0x10 (0x419644 and 0x419650). The name matches a palette
  load. The render does not give the table layout.
  Reviewed: 2026-11-12 (sonnet)

- `R200InitCrtc2Registers` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41ea80
  **Inferred.** A 1704-byte routine that makes many word loads and stores at fixed offsets; the
  render does not resolve the base register of most stores, so which argument is written is not
  shown. It loads [a3+6544] and branches on it against 0x4, 0x8, 0xf, 0x10, 0x18 and 0x20 (`beq` at
  0x41eab8 to 0x41eae0 and 0x41eaec), and compares the fields at [a3+136]+16 and [a3+152]+16 with
  values from 0x1 to 0x5. When the word at [a3+6544] matches none of the six values, it calls
  `xf86DrvMsg` at 0x41eb0c with the message string at 0x45f128 and returns 0 (0x41eb28). A path that
  ends with a return of 1 (0x41ed64) and one that calls `R200InitFPRegisters` at 0x41f140 (from
  0x41f104, with a1 = a3+444 and a5 = 0x2) are separate. The name points to second-CRTC register
  setup, and the call to flat-panel registers fits. The render shows the branches and stores, not
  what each register controls.
  Reviewed: 2026-11-12 (sonnet)

- `R200InitVisualConfigs` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x425480
  **Inferred.** A 1916-byte routine that calls `GlxSetVisualConfigs` at 0x425550, so it appears to
  build GLX visual configurations. It calls `XNFcalloc` at 0x425634, 0x425650 and 0x42566c, testing
  each result against zero (`beq` at 0x425640, 0x42565c and 0x425678). The call at 0x425634 carries
  0xf, 0x10, 0x18 and 0x20 among its arguments, and the branches at 0x4254b4 to 0x4254d8 compare the
  word at +6544 of the screen's private block with 0x8, 0xf, 0x10, 0x18 and 0x20. The render does
  not resolve the arguments of the `GlxSetVisualConfigs` call. It returns 1 (0x425568) or 0 (0x425594,
  0x4255a8, 0x425b88). It calls `Xfree` at 0x425b9c, 0x425bd0 and 0x425bdc with `XNFcalloc` results
  as a0, at sites the zero-result branches at 0x42565c and 0x425678 lead toward.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_DRICopyWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4294c0
  **Inferred.** A 356-byte routine. It loads a word from a0+16 and calls `TraverseTree` at 0x42953c
  with a0 at entry and a1 = 0x429480. The branch at 0x429554 can skip the region calls (to 0x4295b4). It calls
  `miTranslateRegion` (0x429574) and `miIntersect` (0x429588) on a stack region, then
  `R200DRIMoveBuffers` at 0x427a00 (from 0x4295a8) with a2 set to the stack region and a3 = 0. It
  calls `Xfree` at 0x4295c8 only when two values tested at 0x4295b4 and 0x4295c0 are both nonzero;
  either test skips it. It later makes an indirect call at 0x4295e8, stores at +0xc8 and +0x20a0 of
  a base the render does not resolve, and returns the indirect call's value. The name matches a
  window copy. The render shows the region calls, not the copy offsets.
  Reviewed: 2026-11-12 (sonnet)

- `r200_EnableRPTRwriteback` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42c1c0
  **Inferred.** A 48-byte routine. It loads a word from the argument at a1+0x2c and stores a value
  at a0+0x70c (`sw` at 0x42c1cc); the render does not show whether that value is the loaded word
  unchanged. It then loads the word at a0+0x704 and stores a value back there (`lw` at 0x42c1d4,
  `sw` at 0x42c1e0). The return at 0x42c1e8 reports v0 as 0xfffffffff7ffffff, the sign-extended form
  of the 32-bit value 0xf7ffffff, not a 60-bit constant. The render does not show what operation
  changes the word at +0x704, so the bit it affects is not identified. The name and the store
  to +0x70c fit a read-pointer writeback enable.
  Reviewed: 2026-11-12 (sonnet)

- `FGLRXSwapDispatch` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42fc00
  **Established.** The routine is 8 bytes. Its only path returns the constant 1 (return at
  0x42fc00), with no calls, memory accesses or branches. The name suggests a swap-dispatch
  callback, but the render cannot show its callers, so the purpose is not established.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayCopyPlane` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x433440
  **Inferred.** A 384-byte overlay copy-plane entry. It calls `VALIDATE_DRAWABLE` at 0x432d40
  twice (0x433504 and 0x433518). It compares the byte at [a2+4] with 0x8 and 0x18 (`beq` at
  0x4334ec and 0x4334f4) and calls `R200CPAccelInitFuncs` at 0x433598 and 0x4335b0, with a2 set to
  0 and 1. An indirect call at 0x433554 passes the four arguments through to a callee the render
  does not resolve. The name matches overlay copy-plane. The render does not show the copy itself.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayPushPixels` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434900
  **Inferred.** A 348-byte overlay push-pixels entry with the same shape as
  `FIREGL_OverlayCopyPlane`. It calls `VALIDATE_DRAWABLE` at 0x4349c4, compares the byte at
  [a0+4] with 0x8 and 0x18 (0x4349ac and 0x4349b4), and calls `R200CPAccelInitFuncs` at 0x434a34
  and 0x434a4c. An indirect call at 0x4349ec passes its arguments to an unresolved callee. It
  returns the word at [a0+68] (return at 0x434a20). The name matches the push-pixels path, and
  the render does not show the pixel handling.
  Reviewed: 2026-11-12 (sonnet)

- `CMapCreateColormap` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x435d00
  **Inferred.** A 172-byte routine. It loads a word through a0+12, then the table at [[a0+12]+360]
  and indexes it with a value the render does not name. It makes three word stores at +0x134 (`sw` at
  0x435d40 before the first branch, then 0x435d6c and 0x435d90 on later paths). It makes an indirect call at 0x435d3c with its four
  arguments passed through to an unresolved callee. When that call returns nonzero it calls
  `CMapAllocateColormapPrivate` at 0x435bc0 from 0x435d50 and tests its result at 0x435d5c. It
  returns 0 or 1. The name matches the X colormap create entry point. The render does not show the
  indirect callee.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayDestroyWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x437e40
  **Inferred.** A 352-byte routine. It reads a record from the slot at [a0+128] indexed by the word
  at 0x467ec8 and tests it for zero (`beq` at 0x437e98). When it is nonzero it calls `Xfree` at
  0x437ee4 on the field at +32 and at 0x437f08 on the field at +44, each only when the field and the
  word it points to are nonzero, and at 0x437f1c on the record itself. It stores at +0x20 (0x437eec),
  +0x2c (0x437f14), +0x8 (0x437f8c) and +0xc (0x437f9c) and at other offsets. It makes an indirect
  call at 0x437f3c, under the branch at 0x437f34, that passes a0 at entry; the other argument
  registers are not resolved. It
  returns 1 (0x437f78) or the indirect result (0x437f64). The name matches the overlay
  destroy-window path. The render does not show what the record holds.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayRecomputeExposures` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43b340
  **Inferred.** A 296-byte routine that calls `miSubtract` up to six times. The first three calls (at
  0x43b398, 0x43b3b0 and 0x43b3c8) use [a0+68] and run only when it is nonzero (`beq` at 0x43b384).
  The next three (0x43b3e8, 0x43b400 and 0x43b418) use a record reached through [a0+128] and run only
  when that record and its field at +52 are nonzero (`beq` at 0x43b3d0 and 0x43b3dc). It returns 1
  (0x43b438) or 3 (0x43b460). The name fits an exposure update, and the `miSubtract` calls match the
  X server region code. The render does not say which windows the regions describe.
  Reviewed: 2026-11-12 (sonnet)

- `SetSrcColorkey` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43d740
  **Inferred.** A 64-byte routine that reads the adapter block at [a0+248] and its sub-block at
  +48. It writes two words at +0x4e4 and +0x4e8 of that sub-block (`sw` at 0x43d770 and 0x43d77c),
  and returns the sub-block pointer (return at 0x43d778). The name suggests it sets the source
  colour key for the overlay. The render shows the two stores but not the values written, so
  that purpose is not confirmed.
  Reviewed: 2026-11-12 (sonnet)

- `ATITVOSwapDispatch` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4461c0
  **Established.** The routine is 8 bytes. Its only path returns the constant 1 (return at
  0x4461c0), with no calls, memory accesses or branches. The name suggests a swap-dispatch
  callback, but the render cannot show its callers, so the purpose is not established.
  Reviewed: 2026-11-12 (sonnet)

- `R200GetBoardName` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447640
  **Inferred.** A 20-byte routine that makes no calls and touches no memory. It returns the
  constant address 0x467ccc (return at 0x44764c). The name suggests it returns the board name
  string at that address. The render does not print the string.
  Reviewed: 2026-11-12 (sonnet)

- `R200GenlockHandler` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4494c0
  **Inferred.** A 92-byte routine. It loads an index word the render does not name and uses it to select a pointer
  from the table at [a0+360]. It calls `is1GenlockAchieved` at 0x453600 (`jalr` at 0x4494f8) with a0 = [a0]
  and a1 to a3 as at entry. It writes a word at +0x1c of the selected record (`sw` at 0x449504) and
  returns 0 (0x449514). The name fits a genlock-achieved check. The render does not show what the stored
  word holds.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockCloseScreen` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44d8c0
  **Inferred.** A 392-byte routine. It loads the table at [a1+360] and a record indexed by
  `R200_lockScreenIndex`, then copies words from that record to other locations at offsets
  from +0x0 to +0x418 (the `lw`/`sw` pairs from 0x44d92c to 0x44da0c; the render does not resolve
  the base registers of all the stores). It stores a word at +0x0 (`sw` at 0x44d9ec). It calls `Xfree` at 0x44da08 with fields of the
  record, then `DRILock` at 0x44da18 with a0 = a1 at entry and a1 = 0, then an indirect callee at
  0x44da28 with a0 and a1 as at entry (a2 and a3 are not resolved), and returns its value. The name
  suggests the wrapped close-screen hook, but the render does not resolve that callee.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockCreateGC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e600
  **Inferred.** A 220-byte routine. It calls `DRILock` at 0x44e66c, stores a word at +0x130
  (0x44e670), and calls an indirect callee at 0x44e678 with a0 as at entry and the other argument registers not resolved. It then releases the lock with `DRIUnlock`
  (0x44e688). After the unlock it stores words at +0x0 and +0x4 (`sw` at 0x44e6a8
  and 0x44e6b0), at +0x48 and +0x44 (0x44e6b4 and 0x44e6b8) and again at +0x130
  (0x44e6c0). It returns the value of the unresolved call (return at 0x44e6d4). The name matches the
  CreateGC wrapper. The render shows the call order and the stores, not the table contents.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockChangeClip` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f200
  **Inferred.** A 208-byte routine with a similar call sequence to `R200_lockCreateGC`. It stores
  at +0x48 and +0x44 (0x44f24c and 0x44f25c) and calls `DRILock` at 0x44f264.
  It calls an indirect callee at 0x44f280 with its four arguments passed through and releases the
  lock with `DRIUnlock` (0x44f290). After the unlock it writes words at +0x0 and +0x4 (`sw` at 0x44f2b0 and 0x44f2b8) and at +0x48 and +0x44 again (0x44f2bc and 0x44f2c0). The
  render reports v0 at the return (0x44f2c8) as the address of `R200_lockGCOps`. The name matches the
  ChangeClip hook, and the render does not show the callee.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockPolyFillArc` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4501c0
  **Inferred.** A 216-byte routine with a similar call sequence to `R200_lockChangeClip`. It stores
  at +0x48 and +0x44 (0x450214 and 0x450224) and calls `DRILock` at 0x450228 with a0 = [a1]. It calls
  an indirect callee at 0x450244 with its four arguments passed through and releases the lock with
  `DRIUnlock` (0x450258). After the unlock it writes words at +0x0 and +0x4 (`sw`
  at 0x450278 and 0x450280) and at +0x48 and +0x44 again (0x450284 and 0x450288). The render reports
  v0 at the return (0x450290) as the address of `R200_lockGCOps`. The name matches the PolyFillArc
  hook, and the render does not show the callee.
  Reviewed: 2026-11-12 (sonnet)
