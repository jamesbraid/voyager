# Routine readings, voyager fglrx_drv.so batch 5

Role entries for the routines of `usr/X11R6/lib/modules/drivers/fglrx_drv.so` that the inventory does not show as understood. The targets are every 15th routine of that list, sorted by address, starting at index 5. Each entry was rendered from the install path in its header, and every fact below comes from that render: registers, calls, constants, branch targets and sizes.

- `WAIT_FOR_ASIC_IDLE` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40a240
  **Inferred.** Calls a wait-for-idle routine when the chip record at a0+7660 is non-null and a flag bit in the word reached through the record's field at +8 is set. The `beq` at 0x40a24c and the `beq` at 0x40a260 both jump to 0x40a2b0 otherwise, and that path is not an early return. On the first path it calls `firegl_PM4WaitForIdle` at 0x40a268 with the chip record; a nonzero result reports through `xf86DrvMsg` at 0x40a288 and calls `xf86exit` with 1 at 0x40a29c, and zero reaches the return at 0x40a2a8. On the other path it calls `__fglQSQuietDown` at 0x40a2c0 with the pointer at a0+48; a nonzero result reports through `xf86DrvMsg` at 0x40a2e0 and calls `xf86exit` with 1 at 0x40a2f4, and zero reaches the same return. The return at 0x40a2a8 gives one of the two call results. Role (from name): the name suggests waiting for the graphics engine to go idle; the facts show only the two wait calls and the exit on failure.
  Reviewed: 2026-11-12 (sonnet)

- `R200CPSetupForDashedLineOverlay` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40cac0
  **Inferred.** A message-only routine. It loads the field at a0+12 and passes it to `xf86DrvMsg` at 0x40caf0 with a1 = 5, a2 = 0x45c110 and a3 = 0x45c128. The facts give those two as addresses and do not show what they hold. Nothing in the 72 bytes sets up a line or an overlay, and the return at 0x40cb00 hands back the callee's v0. Role (from name): the name suggests dashed-line setup for an overlay, which the body does not show.
  Reviewed: 2026-11-12 (sonnet)

- `R200GetRec` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x410880
  **Inferred.** Allocates the R200 chip record on first use. If the pointer at a0+248 is already set, the `beq` at 0x41088c is not taken and the return at 0x410894 gives 1. If the pointer is null the `beq` jumps to the allocation. There it allocates 0x2488 bytes with `XNFcalloc` at 0x4108a4 and stores the result at a0+248, then allocates 0xbc bytes with a second `XNFcalloc` at 0x4108b8 and stores that pointer at offset 0x247c of the record. The return at 0x4108e4 gives 1 again.
  Reviewed: 2026-11-12 (sonnet)

- `R200SetPitch` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x415b40
  **Inferred.** Compares a2 with 1, 2, 3 and 4 in four `beq` branches at 0x415b64, 0x415b6c, 0x415b74 and 0x415b7c, and every exit ends in a store to the field at a0+0xac. The facts show a2 as unknown at those compares, so it is not an incoming argument; it is computed in the routine after the load of a0+0x50. The branches at 0x415b74 and 0x415b7c share the target 0x415b90, so 3 and 4 take one path; 1 and 2 each have their own, and a value matching none of them returns at 0x415b84 after its own store to a0+0xac. The word at a0+0x9c is also read. Role (from name): the name suggests setting a pitch, but the facts do not give the stored values.
  Reviewed: 2026-11-12 (sonnet)

- `R200BlockHandler` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x419d00
  **Inferred.** Block handler for one screen. The index in a0 selects the screen from `xf86Screens`. When the byte at +90 of the R200 record is zero, the pointer at +268 of the screen record is nonzero and the word at +72 of the screen record equals 0x20 (`bnez` at 0x419d6c, `beqz` at 0x419d74, `beq` at 0x419d84), it first calls `FIREGL_OverlayBlockHandler` at 0x419df4 with a0 to a3 unchanged; otherwise it skips that call. Both paths then call an indirect hook at 0x419da0 with a0 to a3 unchanged. If the word at +8244 of the R200 record is nonzero (`beqz` at 0x419dc4), it then calls a second indirect hook at 0x419dd4 with the screen record in a0 and the word at `currentTime`+4 in a1. The return at 0x419dec gives v0 as the last call left it, not the overlay call's result.
  Reviewed: 2026-11-12 (sonnet)

- `R200InitFPRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41f140
  **Inferred.** Fills a register-state record at a2 from the inputs a1, a3 and a4. It copies many words from a1 into a2 at offsets 0xb8 through 0xf0, and reads a3+64 and a4+76 to choose between paths. The branch on a4+76 compared with 2 and 3 selects one set of stores. The word at a4+160 is compared with 0x8, 0x2c, 0x2d, 0x2f, 0x31 and 0x34 along the branch chain at 0x41f61c through 0x41f668. It reads the entity private through `xf86GetEntityPrivate` at 0x41f324, and it reports through `xf86DrvMsg` at 0x41f78c, 0x41f7ac and 0x41f7c4. The field names and the register meanings are not in the facts.
  Reviewed: 2026-11-12 (sonnet)

- `R200InitFBConfigs` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x425c00
  **Inferred.** Builds and publishes a table of GLX framebuffer configurations for one screen. The depth field at +6544 of the R200 record is compared with 8, 15, 24, 16 and 32 (`beq` at 0x425c50 through 0x425c78). Depths 8, 15 and 24 all jump to 0x425e70, which returns 0 at 0x425e98. Depth 16 jumps to 0x42660c and depth 32 to 0x425ea0, each to its own allocation path; any other value falls through to the code at 0x425c80. The 32 path allocates with `XNFcalloc` at 0x425f20, 0x425f40 and 0x425f60, and the 16 path with `XNFcalloc` at 0x426618, 0x426630 and 0x426648. The publish call is `GlxSetFBConfigs` at 0x425e34, followed by the return of 1 at 0x425e68. When an allocation returns null the routine frees the tables already allocated with `Xfree` at 0x426990, 0x4269cc, 0x426a0c, 0x426a18, 0x426a60 and 0x426a6c and returns 0. The facts do not show the contents stored into the tables.
  Reviewed: 2026-11-12 (sonnet)

- `ProcFIREGL_DRIQueryVersion` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42b140
  **Inferred.** Reads fields of a0 at +136, +28, +16 and +40. When the value at a0+136 is not 1 it returns 0x10 at 0x42b154. When it is 1 it calls `WriteToClient` at 0x42b1c0 with a1 = 0x20 and a2 pointing at a stack buffer, and the word at a0+16 decides a branch at 0x42b190 on the way. The return at 0x42b1d4 gives the field at a0+40. The reply layout and the version values it carries are not named in the facts. Role (from name): the name suggests a request handler that answers a version query; the facts show only the check, the 32-byte write and the returns.
  Reviewed: 2026-11-12 (sonnet)

- `r200_WriteTimeStamp` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42c240
  **Inferred.** Loads the pointer at a0+7660, then the words at +0x234, +0x230, +0x22c and +0x228 reached through that record's field at +16, and stores them at +0x15ec, +0x15e8, +0x15e4 and +0x15e0 of the record's field at +4. The return at 0x42c280 gives the pointer at +4. The routine makes no call; the facts do not show whether the stores reach a register. Role (from name): the name suggests writing a time stamp, which the facts do not confirm.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayPolyPoint` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4335c0
  **Inferred.** Reads the word at a1+0x4c and the global at 0x467ecc to pick a table entry, copies two words of that entry into a1+0x44 and a1+0x48, and reads the byte at a1+4. When that byte differs from the word at +8312 of the R200 record (`beq` at 0x43364c) it stores the byte there. A byte of 8 then calls `R200CPAccelInitFuncs` at 0x4336ec with a2 = 1, and 0x18 calls it at 0x4336d4 with a2 = 0 (`beq` at 0x43365c and 0x433664); these are alternatives, and whichever runs does so before the validate call. It then calls `VALIDATE_DRAWABLE` at 0x432d40 (the `bgezall` at 0x433674, a direct call) with a0 = a1 and a1 = a0, and an indirect hook at 0x433694 with a0 to a3 unchanged. The return at 0x4336c0 gives the word read from a1+68 at entry, which the routine also stores back to a1+0x44. Role (from name): the name suggests a point-drawing operation on an overlay.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayValidateGC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434a80
  **Inferred.** Reads a1, a2 and the table at a0+0x4c selected by the global at 0x467ecc, and copies the first word of the chosen entry into a0+0x44 and, when it is nonzero, the second into a0+0x48. When the byte at a0+4 differs from the word at +8312 of the R200 record (`beq` at 0x434b24) it stores the byte there. A byte of 8 then calls `R200CPAccelInitFuncs` at 0x434c74 with a2 = 1, and 0x18 calls it at 0x434c8c with a2 = 0 (`beq` at 0x434b34 and 0x434b3c); these are alternatives, and whichever runs does so before the validate call. It calls `VALIDATE_DRAWABLE` at 0x432d40 (the `bgezall` at 0x434b4c, a direct call) with a0 = a0 and a1 = a2, then an indirect hook at 0x434b64 with a0 to a2 unchanged. When the byte at a2 is zero it calls `FIREGL_OverlayComputeCompositeClip` at 0x434c38 with a0 = a0 and a1 = a2, if a1 has a bit in 0xe8000 set (`bne` at 0x434c14) or the word at a2+20 differs from a value derived from a0+0x40 (`beq` at 0x434c28). The word at +0x2c8 of the record at +6388 of the R200 record is tested against zero at 0x434b80, and on one path the word at +0x2cc of that record is loaded at 0x434c54 and called at 0x434c60. The facts show v0 as unknown at the returns at 0x434be0 and 0x434c00. Role (from name): validating a graphics context for an overlay.
  Reviewed: 2026-11-12 (sonnet)

- `CMapDestroyColormap` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x435dc0
  **Inferred.** Reads the colormap's per-screen entry through a0+72, indexed by the global at 0x467ed4. When that entry is nonzero it calls `Xfree` at 0x435e30 on the pointer at entry+4 when that is nonzero, and at 0x435e3c on the entry itself. It then reads a list head from the table at [a0+12]+360 (indexed by the global at 0x467ed0, field +0x3c) and walks the list for a node whose first word is a0. If it finds one it unlinks it, writing the next pointer into the previous node or, for the head, into field +0x3c of the table entry (the `beqz` at 0x435e74 selects the head case), and calls `Xfree` on the node at 0x435e80 in either case. If the walk ends without a match, that `Xfree` is skipped. If the pointer at +12 of the table entry is nonzero it stores into +0x138 of the record at a0+12, calls it as an unresolved indirect callee at 0x435e9c with a0, and stores to +0x138 again; the return at 0x435ecc gives that call's result. When the pointer is zero the routine returns at 0x435ee8, with v0 unknown in the facts.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayUnrealizeWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x437fc0
  **Inferred.** Reads the word at a0+128 indexed by the global at 0x467ec8 to reach a table entry, and the object at a0+16, whose first word indexes `xf86Screens`. When the entry's word is nonzero (`beq` at 0x438014) it stores 3 to field +0x30 of that word's target. The pointer at +8292 of the R200 record is called as an indirect hook at 0x438030 only when it is nonzero (`beq` at 0x438024), with a0 and a1 unchanged, a2 the R200 record, a3 the table-entry word and a4 = 3. On that path the routine writes two values to +0xb0 of the object at a0+16, one before and one after the call, and the return at 0x438050 gives the hook's result. Otherwise the return at 0x438060 gives 1.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayResizeWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43b480
  **Inferred.** The largest entry in the batch at 4368 bytes. It reads the 16-bit fields at a0+8, +10, +12 and +14, the word at +0x18 and the word at a0+0x10. It calls the server region routines `miRegionCreate`, `miRegionCopy`, `miUnion`, `miSubtract`, `miIntersect`, `miTranslateRegion` and `miRegionDestroy` at many call sites. It also calls `SetWinSize` at 0x43b8d0, `SetBorderSize` at 0x43b8e0, `ResizeChildrenWinSize` at 0x43b93c and `MoveWindowInStack` at 0x43b960, `TraverseTree` at 0x43c0ac, `HasUnderlayChildren` at 0x43c42c and `UnmapWindow` at 0x43c370. The facts do not show on which paths the last two run. Role (from name): the callee names suggest a window resize with clip recomputation; the field meanings are not derived.
  Reviewed: 2026-11-12 (sonnet)

- `R200QryGammaMap` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447680
  **Inferred.** Finds the screen's private through the pointer at a0+360 and the index in `vcScreenPrivateIndex`, then reads the word at +36 of it. It calls `VidModeGetGammaRampSize` at 0x4476c0 with a0 replaced by the word at [a0] and a1 to a3 unchanged, and then writes three words through the +36 pointer at offsets 0, 4 and 8 (`sw` at 0x4476d8, 0x4476ec and 0x447708). The return at 0x447704 gives the callee's result. The facts do not show the values written or the index that selects the target. Role (from name): a gamma-ramp size query for one screen.
  Reviewed: 2026-11-12 (sonnet)

- `R200SetCompositorTiling` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x449a00
  **Inferred.** Reads the screen record through `xf86Screens` and the R200 record at +248. It calls `R200CompositorRegWrite` (a direct call to 0x44ac00) first with a1 = 0xaa, a2 = 0xff and a3 = 1; a nonzero result returns 0 at 0x449a60. It issues an `xf86ioctl` at 0x449b28 with command 0x6667000c on the device at +6572 of the record; a negative result jumps to 0x449c1c, which reports through `xf86strerror` at 0x449c24 and `ErrorF` at 0x449c38. It then calls `R200CompositorRegWrite` with a1 = 0xaa and a2 = 0x23 up to 0x2a, with values from the tiling record a1 at offsets 0x310 through 0x34c in pairs, and once more with a2 = 0xff and a3 = 1. A nonzero result from the first of those calls returns 0 at 0x449bb8. The success path calls `is1SwapReady` at 0x449e28. Role (from name): programming compositor tiling for one screen.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockSaveScreen` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44da80
  **Inferred.** Lock wrapper for the screen-save hook. It stores a word read from the table at +360 indexed by `R200_lockScreenIndex` (field +0x3c) into a0+0x88, calls `DRILock` at 0x44dad0 with a1 = 0, then calls the hook through that word at 0x44dae0 with a0 and a1 unchanged, and `DRIUnlock` at 0x44daf0. It stores another word to +0x88 before returning. The call target is unresolved in the render, and the return at 0x44db18 gives the hook's result.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockStoreColors` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e700
  **Inferred.** Lock wrapper for the colormap store hook. It takes `DRILock` on the screen pointer at [a0+12] with a1 set to 0 (call at 0x44e75c). It stores a word read from the table at [a0+12]+360 indexed by `R200_lockScreenIndex` (field +0x40) into +0x148 of that screen record, and calls it as an indirect hook at 0x44e770 with a0 to a2 unchanged. It then calls `DRIUnlock` at 0x44e784 and stores another word to +0x148. The return at 0x44e7a4 gives the `DRIUnlock` result.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockCopyClip` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f300
  **Inferred.** Lock wrapper for the copy-clip graphics-context hook. It reads the table at a0+76 indexed by `R200_lockGCIndex`, copies two words of the chosen entry into a0+0x48 and a0+0x44, and takes `DRILock` on [a0] at 0x44f35c with a1 = 0. It calls an indirect hook at 0x44f370 with a0 and a1 unchanged, then `DRIUnlock` at 0x44f380. After that it writes the current words at a0+0x48 and a0+0x44 back into the table entry and stores two other words into those fields. The return at 0x44f3b8 gives the address of `R200_lockGCOps`.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockPolyText8` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4502c0
  **Inferred.** Lock wrapper for the 8-bit text-drawing graphics-context hook. It reads the table at a1+76 indexed by `R200_lockGCIndex`, copies two words of the chosen entry into a1+0x48 and a1+0x44, and takes `DRILock` on [a1] at 0x450330 with a1 = 0. It calls an indirect hook at 0x450354 with a0 to a3 unchanged, then `DRIUnlock` at 0x450368. After that it writes the current words at a1+0x48 and a1+0x44 back into the table entry and stores two other words into those fields. The return at 0x4503a8 gives the hook's result.
  Reviewed: 2026-11-12 (sonnet)
