# Routine readings, voyager fglrx_drv.so batch 5

Role entries for the routines of `usr/X11R6/lib/modules/drivers/fglrx_drv.so` that the inventory does not show as understood. The targets are every 15th routine of that list, sorted by address, starting at index 5. Each entry was rendered from the install path in its header, and every fact below comes from that render: registers, calls, constants, branch targets and sizes.

- `WAIT_FOR_ASIC_IDLE` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40a240
  **Inferred.** Waits for the command engine to drain. It does nothing when the chip record at a0+7660 is null or a flag bit in the record it points to is clear (`beq` at 0x40a24c and 0x40a260). Otherwise it calls `firegl_PM4WaitForIdle` at 0x40a268, and on a nonzero result it reports through `xf86DrvMsg` at 0x40a288 and calls `xf86exit` with 1 at 0x40a29c. On a second path it calls `__fglQSQuietDown` at 0x40a2c0 with the pointer at a0+48 and reports the same way at 0x40a2e0. The return at 0x40a2a8 gives one of the two call results.

- `R200CPSetupForDashedLineOverlay` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40cac0
  **Inferred.** A message-only routine. It loads the field at a0+12 and passes it to `xf86DrvMsg` at 0x40caf0 with message class 5 and two format strings at 0x45c110 and 0x45c128. Nothing in the 72 bytes sets up a line or an overlay, and the return at 0x40cb00 hands back the callee's v0. The name points to dashed-line setup, which the body does not show.

- `R200GetRec` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x410880
  **Inferred.** Allocates the R200 chip record on first use. If the pointer at a0+248 is already set, the `beq` at 0x41088c skips the allocation and the return at 0x410894 gives 1. Otherwise it allocates 0x2488 bytes with `XNFcalloc` at 0x4108a4 and stores the result at a0+248, then allocates 0xbc bytes with a second `XNFcalloc` at 0x4108b8 and stores a pointer at offset 0x247c of the record. The return at 0x4108e4 gives 1 again.

- `R200SetPitch` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x415b40
  **Inferred.** A four-way selector over the integer argument a2. Four `beq` branches at 0x415b64, 0x415b6c, 0x415b74 and 0x415b7c compare a2 with 1, 2, 3 and 4, and each path ends in a store to the field at a0+0xac. It reads the fields at a0+0x50 and a0+0x9c first. The name suggests a pitch setter, and the four cases fit a set of per-depth pitch values, but the facts do not give the stored values.

- `R200BlockHandler` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x419d00
  **Inferred.** Block handler for one screen. The index in a0 selects the screen from `xf86Screens`. It calls an indirect hook at 0x419da0 with its arguments unchanged. Then, depending on the flag at +90 of the R200 record, the pointer at +268 and the value at +72 of the screen record (compared with 0x20), it either calls `FIREGL_OverlayBlockHandler` at 0x419df4 with its arguments, the value at +268 and the constant 0x553e8, or calls an indirect hook at 0x419dd4 with the time from `currentTime`. The return at 0x419dec gives back the overlay call's result.

- `R200InitFPRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41f140
  **Inferred.** Fills a register-state record at a2 from the inputs a1, a3 and a4. It copies many words from a1 into a2 at offsets 0xb8 through 0xf0, and reads a3+64 and a4+76 to choose between paths. The branch on a4+76 compared with 2 and 3 selects one set of stores. The word at a4+160 is compared with 0x8, 0x2c, 0x2d, 0x2f, 0x31 and 0x34 along the branch chain at 0x41f61c through 0x41f668. It reads the entity private through `xf86GetEntityPrivate` at 0x41f324, and it reports through `xf86DrvMsg` at 0x41f78c, 0x41f7ac and 0x41f7c4. The field names and the register meanings are not in the facts.

- `R200InitFBConfigs` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x425c00
  **Inferred.** Builds the GLX framebuffer-config table for one screen and publishes it. The depth field at +6544 of the R200 record is compared with 8, 15, 24, 16 and 32 (`beq` at 0x425c50 through 0x425c78), and each depth takes its own set of stores. The table is allocated with `XNFcalloc` at 0x425f20, 0x425f40, 0x425f60, 0x426618, 0x426630 and 0x426648, and the publish call is `GlxSetFBConfigs` at 0x425e34. On the allocation-failure paths the routine frees the partial tables with `Xfree` at 0x426990 through 0x426a6c. The return values are 1 on success and 0 on the failure exits.

- `ProcFIREGL_DRIQueryVersion` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42b140
  **Inferred.** A request handler in the protocol-handler shape. It reads the request's fields at a0+136, a0+16 and a0+40. When the value at a0+136 is not 1 it returns 0x10 at 0x42b154. When it is 1 it sends a 32-byte reply through `WriteToClient` at 0x42b1c0 from a stack buffer. The return at 0x42b1d4 gives the field at a0+40. The reply layout and the version values it carries are not named in the facts.

- `r200_WriteTimeStamp` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42c240
  **Inferred.** Copies four words from a timestamp source into the chip-side record. It loads the pointer at a0+7660, then the words at +0x228, +0x22c, +0x230 and +0x234 of the source at +16, and stores them at +0x15e0, +0x15e4, +0x15e8 and +0x15ec of the record at +4. The return at 0x42c280 gives the pointer at +4. The routine makes no register access and no call.

- `FIREGL_OverlayPolyPoint` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4335c0
  **Inferred.** Overlay point drawing. It reads a1+0x44, +0x48, +0x4c and the table selected by a1+76 and the global at 0x467ecc, and it validates the drawable through the indirect pointer at 0x432d40 (`bgezall` at 0x433674). It then re-initialises the accelerator hooks with `R200CPAccelInitFuncs` at 0x4336d4 and 0x4336ec, with flag 0 and then 1, and the choice follows the byte at a1+4 compared with 8 and 0x18. The indirect call at 0x433694 passes the arguments unchanged. The name points to a GC point operation, and the request record a1 is consistent with that. The return at 0x4336c0 gives the word at a1+68.

- `FIREGL_OverlayValidateGC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434a80
  **Inferred.** Validates a graphics context for the overlay. It reads the context argument a0 and the drawable a2, validates the drawable through the indirect pointer at 0x432d40 (`bgezall` at 0x434b4c), and builds a composite clip with `FIREGL_OverlayComputeCompositeClip` at 0x434c38, passing 0x7fffffff as the last bound. It re-initialises the accelerator hooks with `R200CPAccelInitFuncs` at 0x434c74 and 0x434c8c, with the choice following the byte at a0+4 compared with 8 and 0x18. Several branches test bits of the word at +0x2c8 and +0x2cc of the chip record. The returns at 0x434be0 and 0x434c00 give the callee results.

- `CMapDestroyColormap` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x435dc0
  **Inferred.** Frees the storage of one colormap. It reads the colormap's per-screen entry at a0+72 indexed by the global at 0x467ed4, and calls `Xfree` at 0x435e30 and 0x435e3c on the pointers it holds at +4 and +0. It then calls `Xfree` again at 0x435e80, and an unresolved indirect callee at 0x435e9c. It writes the field at +0x3c of the entry in the table at [a0+12]+360, and writes two fields at +0x138 of the record at a0+12. The return at 0x435ecc gives the result of the indirect call.

- `FIREGL_OverlayUnrealizeWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x437fc0
  **Inferred.** Overlay side of a window unrealize. It reads the window's table entry at a0+128 indexed by the global at 0x467ec8, and the screen record through the screen index at a0+16. It writes the field at +0x30 of that table entry and two fields at +0xb0 of the window. The indirect hook at 0x438030 runs only when the flag at +8292 of the chip record is nonzero (`beq` at 0x438024). It passes the chip record, the table entry, a mode of 3 and the constant 0x37128. The return at 0x438060 gives 1.

- `FIREGL_OverlayResizeWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43b480
  **Inferred.** Overlay window resize, the largest entry in the batch at 4368 bytes. It reads the window's size and position fields at a0+8, +10, +12 and +14, the child list at +0x18 and the screen record through the screen index at a0+16. It builds and combines clip regions with the server region calls `miRegionCreate`, `miRegionCopy`, `miUnion`, `miSubtract`, `miIntersect`, `miTranslateRegion` and `miRegionDestroy`, which occur at many call sites. It applies the new geometry with `SetWinSize` at 0x43b8d0, `SetBorderSize` at 0x43b8e0, `ResizeChildrenWinSize` at 0x43b93c and `MoveWindowInStack` at 0x43b960. It walks the window tree with `TraverseTree` at 0x43c0ac, and it calls `HasUnderlayChildren` at 0x43c42c and `UnmapWindow` at 0x43c370 on the underlay paths. The call sequence matches a window resize with clip recomputation, which is an inference from the callee names; the field meanings are not derived.

- `R200QryGammaMap` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447680
  **Inferred.** Gamma-ramp size query for one screen. It finds the screen's private through the pointer at a0+360 and the index in `vcScreenPrivateIndex`, then reads the entry at +36. It calls `VidModeGetGammaRampSize` at 0x4476c0 with the arguments unchanged, and writes three words into the 16-byte entry for index a1 at offsets 0, 4 and 8 (`sw` at 0x4476d8, 0x4476ec and 0x447708). The return at 0x447704 gives the callee's result. The values written are not visible in the facts.

- `R200SetCompositorTiling` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x449a00
  **Inferred.** Programs the compositor tiling registers for one screen. It reads the screen record through `xf86Screens` and the R200 record at +248, then writes a long run of compositor registers through the pointer at 0x44ac00, with selector 0xaa and offsets 0x23 to 0x2a, plus 0xff. The values come from the tiling record a1 at offsets 0x310 through 0x34c, in pairs. It issues an `xf86ioctl` at 0x449b28 with command 0x6667000c on the device at record +6572. On failure it reports through `xf86strerror` at 0x449c24 and `ErrorF` at 0x449c38. The routine ends with `is1SwapReady` at 0x449e28.

- `R200_lockSaveScreen` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44da80
  **Inferred.** Lock wrapper for the screen-save hook. It takes the DRI lock with `DRILock` at 0x44dad0, calls an indirect hook at 0x44dae0 with its arguments unchanged, and releases the lock with `DRIUnlock` at 0x44daf0. The hook entry is read from the table at +360 indexed by `R200_lockScreenIndex`, field +0x3c. The call target is unresolved in the render, and the return at 0x44db18 gives the hook's result.

- `R200_lockStoreColors` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e700
  **Inferred.** Lock wrapper for the colormap store hook. It takes `DRILock` on the screen pointer at [a0+12] with a1 set to 0 (call at 0x44e75c), calls an indirect hook at 0x44e770 with its arguments unchanged, and releases with `DRIUnlock` at 0x44e784. The hook entry comes from the table at [a0+12]+360 indexed by `R200_lockScreenIndex`, field +0x40. The routine saves a word at +0x148 of the screen record around the call. The return at 0x44e7a4 gives the `DRIUnlock` result.

- `R200_lockCopyClip` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f300
  **Inferred.** Lock wrapper for the copy-clip graphics-context hook. It reads the table at a0+76 indexed by `R200_lockGCIndex`, saves and restores the function fields at a0+0x44 and +0x48 around the call, and takes `DRILock` on [a0] at 0x44f35c. It calls an indirect hook at 0x44f370 with its arguments unchanged, then releases with `DRIUnlock` at 0x44f380. The return at 0x44f3b8 gives the address of `R200_lockGCOps`.

- `R200_lockPolyText8` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4502c0
  **Inferred.** Lock wrapper for the 8-bit text-drawing graphics-context hook. It reads the table at a1+76 indexed by `R200_lockGCIndex`, saves and restores the function fields at a1+0x44 and +0x48 around the call, and takes `DRILock` on [a1] at 0x450330. It calls an indirect hook at 0x450354 with its arguments unchanged, then releases with `DRIUnlock` at 0x450368. The return at 0x4503a8 gives the hook's result.
