# Routine readings: fglrx_drv.so, sample from index 14

Role entries for routines of `usr/X11R6/lib/modules/drivers/fglrx_drv.so` that `docs/inventory/functions.tsv` does not list as understood. The routines are sorted by address and the sample takes index 14, then every 15th routine after it. Each entry is rendered by `retools/tools/render_reading.py` from the install path in its header. All entries are inferred, because the render shows the instructions, calls, constants and branches of each routine, but not the purpose its authors gave it. The role names follow from those facts and from the routine's name.

- `R200CPSubsequentSolidHorVertLine` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40c200
  **Inferred.** Builds a PM4 command packet for a solid horizontal or vertical line and sends it to the DRM ring. The `bgezall` at 0x40c244 calls `__fglDRMPM4Alloc` at 0x409f40 with a1 set to 6, and the stores at 0x40c28c through 0x40c2b0 fill that block at offsets 0x0 through 0x14. The `bgezall` at 0x40c2c0 then passes the block to `__fglDRMPM4Submit` at 0x40a1c0, and the return at 0x40c2d4 gives back its v0. Two flag tests, at 0x40c278 on the word at +8164 with mask 0x4000 and at 0x40c284 on the word at +9208, decide which stores run.

- `R200_DGASetViewport` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40eec0
  **Inferred.** Forwards a DGA viewport change to the frame-adjust routine. It reads the screen pointer at a0+8, then the screen's private record, and the `jalr` at 0x40eee8 calls `R200AdjustFrame` with that screen as a0 and the arguments a1 to a3 as received. The store at 0x40eef8 writes into the private record at +0x195c after that call, and the return at 0x40ef00 gives back the v0 of `R200AdjustFrame`.

- `R200GetPLLParameters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x414700
  **Inferred.** Reads the PLL parameter table that the card private points to at +0x38, and stores the decoded fields into the private record at +0x1a8 through +0x1b4. A null table pointer skips the reads: the `beq` at 0x414718 tests it. The `lhu` loads at 0x4147f8 and 0x414800 read back two of the stored halfwords, which are passed as the values in two `xf86DrvMsg` messages at 0x414804 and 0x414834, the second at a lower verbosity. The return at 0x41481c gives 1.

- `R200PreInitOverlay` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x417c00
  **Inferred.** Pre-initialization for the video overlay. It checks two boolean options from the `R200Options` table, option 0x40 and option 0x12, first with `xf86IsOptionSet` and then with `xf86GetOptValBool`. The field at private+7820 selects one of two paths: values 0 and 1 take one, values of 2 or more take the other. Each path logs its choice through `xf86DrvMsg` at level 1 or 2 and writes flags into the screen record at +0x108 and +0x10c and the private record at +0x1b2c and +0x23f8. The return at 0x417d7c gives 1.

- `R200SavePLL2Registers` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41d600
  **Inferred.** Reads four PLL registers through `R200INPLL` and stores the values in the structure at a1. The four calls at 0x41d624 through 0x41d660 pass the register numbers 0x2b, 0x2c, 0x2e and 0x2d, with a0 as received. The stores at 0x41d634 through 0x41d674 place the results at a1 +0x368, +0x36c, +0x370 and +0x374. The return at 0x41d67c gives the v0 of the last `R200INPLL` call.

- `InitDRMConnection` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x429040
  **Inferred.** Sets up the DRM connection for one screen. It gets the entity record through `xf86GetEntityPrivate`, using the index in `gR200EntityIndex`, clears a 0x30-byte block with `xf86memset`, and calls `firegl_InitDRM` on the block at the card private's +7660 offset. When `firegl_InitDRM` returns a nonzero value, the routine logs it with `xf86DrvMsg` at level 5 and returns 0. When it returns zero, the routine copies 0x28 bytes of the block out with `xf86memcpy` and returns 1.

- `vR200_PM4Init` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42be40
  **Inferred.** Writes twelve words into the structure at a0 from +0x40 to +0x6c, at offsets 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68 and 0x6c. The render does not show the values stored, only the offsets. The routine makes no calls and returns the constant 0x10000000.

- `ProcFGLVidModePanelSetGammaData` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42ef00
  **Inferred.** Handles a client request that sets the gamma data for a flat panel. It finds the screen from the record at a0+8 and the screen table `screenInfo`, then the screen's private record at +0xf8. The `jalr` at 0x42efcc passes the gamma payload to `FGLSetGammaData`. A 0x20-byte reply goes back to the client through `WriteToClient` at 0x42eff4. The routine also builds a config file name, writes the gamma values through `UpdateFile` at 0x42efb4 and 0x42f084, and logs a failure with `ErrorF` at 0x42f0a0 or 0x42f0c0 when the write returns a negative value.

- `FIREGL_OverlayPolyText16` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434180
  **Inferred.** Overlay text hook. It validates the drawable with the routine at 0x432d40 through the `bgezall` at 0x434238. A compare at 0x434210 skips the dispatch when the field at private+8312 equals the drawable's depth byte. Otherwise a depth of 8 calls `R200CPAccelInitFuncs` at 0x4342b4 with a2 set to 1, and a depth of 0x18 calls it at 0x43429c with a2 set to 0. The call at 0x43425c is indirect, and the render does not name its target. Both paths join at 0x434230.

- `FIREGL_MakeTrans` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4354c0
  **Inferred.** Builds a transparency request. A loop over a1 entries reads halfwords from the list at a2 and fills a request record of about 72 bytes that the call at 0x4314c0 returns. The routine stores fields into that record at offsets 0x0 through 0x44, reads the raster-op table `R200_ROP` at +0x1c, and calls the routine at 0x431740 with a1 set to the record plus 72 and a2 set to the ROP word ORed with 0x32d2.

- `ComputeGamma` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x437480
  **Inferred.** Computes gamma ramp values for a gamma setting. It reads three single-precision floats at a0+0x84, +0x88 and +0x8c, and writes them back at 0x437574 through 0x437584. It evaluates powers with `xf86pow` at 0x437650, 0x437690 and 0x437710. Its comparisons are double-precision, against the constants 0.1 (0x3fb999999999999a), 10.0 (0x4024000000000000) and 1.0 (0x3ff0000000000000). Six halfword stores at 0x43767c through 0x4376c8 write a table, and the loads from a0+0x34 at 0x437660, 0x4376a0 and 0x4376c0 come just before them. The routine logs with `xf86DrvMsgVerb` at 0x437540 and 0x437564 at verbosity 6. The render does not analyse the conditions of the five `bc1t` and `bc1f` branches between 0x4374d8 and 0x437518.

- `FIREGL_OverlayValidateTree` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x439b00
  **Inferred.** Recomputes the clip region for an overlay window tree. It combines regions with the `mi` region calls: `miRegionValidate` at 0x439c60, `miUnion` at 0x439c80, `miIntersect` at 0x439f00, `miSubtract` at 0x439f30, `miRegionCopy` at 0x439dec and `miRegionAppend` at 0x439f40. It calls the overlay clip computation `FIREGL_OverlayComputeClips` at 0x439f18 and calls the function pointer at 0x4317c0 three times, in the walk over the window's region list. The routine frees temporary regions with `Xfree` at several sites. At the end it compares the incremented `globalSerialNumber` with 0x10000000 at 0x43a098, then writes the serial back at 0x43a09c or 0x43a0a4. The returns at 0x439eac and 0x439ee8 give 1.

- `MarkWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43d500
  **Inferred.** Allocates a per-window record when none exists. If the pointer at the window's +0x44 is zero, the routine calls `XNFalloc` at 0x43d520 for a 0x18-byte block and fills it: two halfwords from the window's +0x8 and +0xa, and two words, then stores the new pointer at +0x44. When the pointer is already set, the routine returns at 0x43d510 without allocating. The final return at 0x43d54c gives the v0 of `XNFalloc`.

- `ProcATITVOSetStandard` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x445840
  **Inferred.** Handles a client request that sets the TV-out standard. It finds the screen from the record at a0+8 and the screen tables, then the private record at +0xf8. The routine writes the new standard into the config file through `UpdateFile`, calls `R200SwitchMode` at 0x4459d0 with a2 set to 0, and replies with a 0x24-byte reply through `WriteToClient` at 0x445918. A failed config write is logged with `ErrorF` at 0x4459f0. The returns at 0x44592c and 0x445948 give back the word at +0x28 of the a0 argument.

- `addMode` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x446840
  **Inferred.** Walks a list of mode records and compares a new mode against them. The name comparison is `xf86strcmp` at 0x446874. The routine also tests the integer fields at +0x18 and +0x2c and the float at +0x98 of the record at a0, and stores pointers through a1 and a2 at the end. The return at 0x446900 gives 1 and the return at 0x4469b0 gives 0.

- `R200LoadAndFree` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x448600
  **Inferred.** Frees and reloads a timing table. It calls `xf86free` at 0x448674 and 0x448698 on the old data, then calls `R200LoadTimingTable` at 0x4486bc on one path, or `ReadWriteTimingTable` at 0x448730 on the other. The branch at 0x4486a4 tests the argument a4 for zero, and the test at 0x4486ac tests the fifth argument. The return at 0x4486dc gives the v0 of whichever of the two calls ran, and the return at 0x4486f4 gives 0.

- `R200_lockSaveAreas` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e200
  **Inferred.** Wraps the saved-areas hook in the DRI hardware lock. It finds the screen private through the index in `R200_lockScreenIndex` and the per-screen table at +0x168, then calls `DRILock` at 0x44e264 on the screen record. Between the lock and `DRIUnlock` at 0x44e294, the call at 0x44e280 goes through a pointer loaded from the table entry at +0x24, passing the four argument registers unchanged. The stores at 0x44e268 and 0x44e2ac write the screen private's +0xf8 field before and after that call. The return at 0x44e2b4 gives the v0 of `DRIUnlock`.

- `R200_lockLeaveVT` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44edc0
  **Inferred.** Takes the DRI lock around the leave-VT hook. It reads the screen pointer at +0x34 of the `screenInfo` entry indexed by a0, then the lock table entry selected by `R200_lockScreenIndex`. `DRILock` at 0x44ee1c runs with flag 0 and the constant 0x20328 as a2. The call at 0x44ee30 goes through the pointer loaded at 0x44ee28 from the table entry at +0x64, and `DRIUnlock` at 0x44ee40 releases the lock. The return at 0x44ee50 gives the v0 of `DRIUnlock`.

- `R200_lockPolySegment` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44fcc0
  **Inferred.** Wraps the poly-segment graphics-context op in the DRI lock. It takes the lock with `DRILock` at 0x44fd28 on the DRI record at [a1], and the op slot for the GC is read from a1+0x4c indexed by `R200_lockGCIndex`. The routine copies the two words of that slot into fields at a1+0x44 and a1+0x48 around the lock and the call, and calls the wrapped op through the indirect call at 0x44fd44. `DRIUnlock` at 0x44fd58 releases the lock. The return at 0x44fd90 gives the address of the `R200_lockGCOps` table.

- `R200_lockSpriteSetCursor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x450bc0
  **Inferred.** Wraps the sprite cursor set operation in the DRI lock. It reads the screen index of the pointer layer, `miPointerScreenIndex`, and of the R200 lock layer, `R200_lockScreenIndex`, then the per-screen table at a0+360 for each. The routine takes `DRILock` at 0x450c34 on a0 and calls the wrapped routine at 0x450c50 with the entry arguments, using the pointer read at 0x450c2c from the lock layer's +0x6c field. `DRIUnlock` at 0x450c64 releases the lock, and the stores at 0x450c84 and 0x450c88 write back the +0x6c field and the pointer layer's +0 field. The return at 0x450c90 gives the word at the pointer layer's slot.
