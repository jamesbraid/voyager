# fglrx_drv.so routine readings, batch 11

Role statements for every fifteenth routine of `usr/X11R6/lib/modules/drivers/fglrx_drv.so` that the inventory does not show as understood, sorted by address and starting at index 11 (the twelfth row). Each statement comes from the rendered facts: the calls, the memory accesses and the branches of the routine. Where the render does not say what a value means, the entry says so rather than supplying a meaning. All entries are inferred. Two selected routines are not written up, because their render shows no callee, memory access or branch to read: MulDiv64 at 0x443600 and ATIHPVResetExtension at 0x446640.

- `R200CPSubsequentScreenToScreenCopyOverlay` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40be00
  **Inferred.** Reads the driver private through the pointer at +0xf8 of its first argument, along with the words at +0x1920, +0x1924 and +0x1dec of that private. It calls `__fglDRMPM4Alloc` (0x409f40) for a block of six words, stores six words into the block (0x40be7c to 0x40beb4), and then calls `__fglDRMPM4Submit` (0x40a1c0) on it, returning that call's v0. Two sign tests at 0x40be50 and 0x40be58 on the words at +6432 and +6436 of the private choose the path. The allocate-then-submit pair suggests a command packet for an overlay screen-to-screen copy. The packet fields are not derived here.
  Reviewed: 2026-11-12 (sonnet)

- `R200UseHWCursor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40e400
  **Inferred.** Takes a screen index from its argument, looks up that screen's record in `xf86Screens` (0x40e414 to 0x40e420), follows the driver-private pointer at +0xf8 (0x40e424), and loads the word at +0x1900 of it (0x40e428) before returning at 0x40e42c. The result is a per-screen value that the name suggests is the hardware-cursor choice. What sets the word at +0x1900 is not derived here.
  Reviewed: 2026-11-12 (sonnet)

- `R200ValidateCloneTVModes` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x412c00
  **Inferred.** Walks a list of clone TV-mode entries reached through the driver private (+0xf8, then +0xd8 and +0x40). It copies each mode name with `XNFalloc` and `xf86strcpy` (0x412ce4, 0x412d04), and parses a value with `xf86sscanf` using the format string at 0x467ae8, which is not read here, comparing the count against 2 at 0x412da0. Records of 0x9c bytes come from `XNFcalloc` (0x412dec) and get fields written at offsets from 0x0 up to 0x7c (stores from 0x412e1c to 0x413050). The record field at +0x2c is compared with 0xc8, 0x12c and 0xf0 (0x412f1c to 0x412f2c). Messages go out through `xf86DrvMsg` (0x412d6c, 0x412f98, 0x412fbc), and `xf86free` is called at 0x413088 and 0x413104. The rules the comparisons enforce are not derived here.
  Reviewed: 2026-11-12 (sonnet)

- `R200PreInitAccel` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x417200
  **Inferred.** It gets the entity private with `xf86GetEntityPrivate` (0x417230), writes a word at +0x18f0 of the driver private (0x417250, 0x417298, 0x4172c0), and tests the option list: `xf86IsOptionSet` (0x417294) and `xf86ReturnOptValBool` (0x4172ac) are called with the `R200Options` table. It reports through `xf86DrvMsg` (0x417268, 0x4172f4, 0x417330), and when the word at +6384 of the private is zero it loads a submodule with `xf86LoadSubModule` (0x417310) from the data at 0x467bc8. It returns 1 at 0x417280 on one path and 0 at 0x417348 on another. Role (from name): the name and the option and submodule calls suggest a pre-initialisation step that enables the 2D acceleration path. Which option selects which path is not derived here.
  Reviewed: 2026-11-12 (sonnet)

- `R200Save2ndTMDSRegs` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41d340
  **Inferred.** Saves the second TMDS (digital output) state. It reads the byte at +0x5a of the driver private: when that byte is non-zero the routine returns at 0x41d350. When the byte is zero it copies four words from the state block reached through the pointer at +0x30 of the private (+0xd64, +0xd6c, +0x7c and +0x288) into the argument block at +0x90, +0x94, +0x80 and +0xc4 (0x41d35c to 0x41d378). The name suggests these are the TMDS registers saved for a later restore. The meaning of each word is not derived here.
  Reviewed: 2026-11-12 (sonnet)

- `R200InitCenterMode` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x420e00
  **Inferred.** Fills a block of register values for centred display modes. It reads eight or more words of the driver private at +0x164 to +0x180 and two fields of the mode record in a2 (+0x4c and +0x68). It stores six words into the argument block at +0x4, +0x8, +0x54, +0x58, +0x5c and +0x60 (0x420e40 to 0x420ee8), and returns the constant 0x800000 at 0x420ee4. Which register each stored word feeds, and how the private words combine into it, is not derived here.
  Reviewed: 2026-11-12 (sonnet)

- `R200DRIMoveBuffers` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x427a00
  **Inferred.** Works on a screen region for a DRI buffer move. It finds the screen record from the index at +0x10 of its argument (`xf86Screens`, 0x427a24 to 0x427a3c) and reads its fields at +0x48, +0x10c and +0x2080. It builds region lists with `miTranslateRegion` (0x427ab8, 0x427ae0) and `miIntersect` (0x427acc), allocates a scratch array with `Xalloc` (0x427b08), passes the result to `doCopyRegion` (0x4274c0) at 0x427c1c, and frees it with `Xfree` and `miRegionDestroy`. A signed test on s2 at 0x427b64 chooses between two paths. It also calls `FIREGL_OverlayCollectUnderlayRegions` (0x427ca8). The copy direction and the meaning of the region fields are not derived here.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_DRIExtensionInit` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42ba00
  **Inferred.** Registers the DRI extension with the server. The `jalr` at 0x42ba44 calls `AddExtension` with the extension name at 0x45f8a8, the constants 0x3 and 0x0, the routine addresses 0x42b880, 0x42b980 and 0x42b9c0 in a3 to a5, and the minor-opcode handler `StandardMinorOpcode` in a6. If `AddExtension` returns zero (the `beq` at 0x42ba4c), it calls `FatalError` (0x42ba68) with the message at 0x460628. The routines at 0x42b880, 0x42b980 and 0x42b9c0 are not read here.
  Reviewed: 2026-11-12 (sonnet)

- `ulRage6GetFractional` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42e8c0
  **Inferred.** Returns zero when `a0 >= a1` (unsigned; the `beq` at 0x42e8c4 is taken in that case) and also when `a1` is zero (0x42e8cc); both branches reach the return at 0x42e900. Otherwise (`a0 < a1` and `a1` non-zero) it compares two derived values at 0x42e8ec and reaches a return at 0x42e8f8 whose value the render does not show. Role (from name): the name suggests a fractional-part helper for a fixed-point ratio. What the value on the non-zero path is, and which argument is the numerator, is not derived here.
  Reviewed: 2026-11-12 (sonnet)

- `vR200SetSurfaceInfo` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4309c0
  **Inferred.** Selects a surface-state path from the format code in a6, read from the argument at +0x8 of a1. It reads the driver private through the pointer at +0xf8 of a0, then the words at +0x30 and +0xa0 of that private. The word at +0xa0 of the private is compared with 0x34, 0x2d and 0x2c (0x430a10 to 0x430a20). The argument a2 is checked against 8 (0x4309f0, which branches away when a2 is 8 or more); when a2 is below 8, an indirect jump at 0x4309fc uses a jump table at 0x460ebc. The render does not show which register indexes that table. Two compare chains on a6 test the values 1, 2, 3, 4, 6 and 5 (0x430a58 to 0x430a84) and 1, 2, 3, 4, 7 and 8 (0x430b0c to 0x430b38). A format code that matches none of the compares in its chain reaches `xf86exit` (0x430a98, 0x430b4c). Eight words at +0xb0c to +0xb7c of the state block reached through +0x30 are loaded on one of the paths. The render shows no stores to surface registers, so this entry does not establish what the function writes.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayPolyFillRect` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x433d80
  **Inferred.** Role (from name): the overlay polygon-fill entry point. It reads the GC in a1 and its saved-ops table through the index word at 0x467ecc (0x433d98 to 0x433db4), stores two words at +0x44 and +0x48 of the GC, and gets the screen record from the screen pointer at the start of a1 (`xf86Screens`, 0x433dc8 to 0x433dd8). It calls the routine at 0x432d40 (`VALIDATE_DRAWABLE`, 0x433e34) with a1 and a0 swapped into a0 and a1, then compares the byte at a1+4 with 8 and 24 (0x433e1c, 0x433e24). It calls `R200CPAccelInitFuncs` (0x433e94, 0x433eac) with a third argument (a2) of 0 or 1, and calls an unresolved routine through a pointer (0x433e50) with a0 to a3 passed through. The fill itself is not derived here.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayCopyClip` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x435100
  **Inferred.** Role (from name): passes a clip update down a per-GC chain. It loads the record for the GC from the array at a0+76, indexed by the word at 0x467ecc (0x435128, 0x43512c), and stores two words from the GC into the record at +0x0 and +0x4 (0x435160, 0x435184). It calls an unresolved routine through a function pointer (0x435150) loaded at +0x18 of the record's first word (0x43514c), passing a0 to a2 unchanged and the record words at +0x0 and +0x4 in a3 and a4. Zero tests at 0x435140 and 0x435178 select the path. The clip structure itself is not derived here.
  Reviewed: 2026-11-12 (sonnet)

- `CMapReinstallMap` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x436780
  **Inferred.** Role (from name): reinstalls a colormap. It reads the colormap pointer at +0x48 of its argument and an entry through the index at 0x467ed4 (0x43679c, 0x4367b0), reads the pointer at +0xc of its argument and the table at +0x168 of that record (0x4367a8), and loads the word at +0x38 of a further block (0x4367c4). It makes 33 stores with no offset shown into a block the render cannot name (from 0x4367e8 on). It calls `CMapRefreshColors` (0x4369c0, call at 0x436900) when the word at +0x8 of the entry is non-zero (the branch at 0x4368e8), and otherwise makes an indirect call at 0x43693c passing the entry and words loaded from it. The branch at 0x4367c8 is a signed test on the entry's first word, and the one at 0x436868 compares a7 with 7. The entry layout is not derived here.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayComputeClips` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x438b80
  **Inferred.** Role (from name): recomputes an overlay clip region. It reads the record at +0x80 of its first argument and the rectangle fields at +0x8 to +0xe and +0x64 (`lh` and `lhu`, 0x438ba4 to 0x438c80). It takes a region through the per-screen table at +0x80, indexed by the word at 0x467ec8 (0x438bac, 0x438bb4). It calls `miRectIn` (0x438c54) and compares the result with 1 and 2 (0x438c60, 0x438c6c). It subtracts and intersects regions with `miSubtract` (0x438d80, 0x438db8, 0x438e18, 0x438e5c, 0x438f54), `miTranslateRegion` (0x438ce0, 0x438cf4), `miRegionCopy` (0x438e6c) and `miIntersect` (0x438e80), and frees temporaries with `miRegionDestroy` (0x438d8c) and `Xfree` (0x438ef8, 0x438f1c). It increments `globalSerialNumber` (0x438fb0 to 0x438fd4) and returns 1 or that serial plus one (0x439000). Which region is the output, and why the serial changes, is not derived here.
  Reviewed: 2026-11-12 (sonnet)

- `RebuildTree` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43d180
  **Inferred.** Role (from name): rebuilds a tree. It starts from the structure at +0x18 of its argument and the node at +0x80 of that structure (0x43d18c to 0x43d1a4). Each node is reached through the index at 0x467ec8, and a loop of loads with stores at 0x43d1e4 and 0x43d1f0 follows the links. It calls `DoLeaf` (0x43d100) at 0x43d23c on the path where the zero test at 0x43d230 falls through (the value is non-zero); the facts show no sign test there. The loop repeats while the compare at 0x43d2b0 finds its two registers different, and the routine returns at 0x43d2c8. The node layout is not derived here.
  Reviewed: 2026-11-12 (sonnet)

- `FindTimingTable` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447fc0
  **Inferred.** Role (from name): searches a table of timing entries by name. It compares a 32-bit field at +0xc of its argument with the limit word at 0x4681e4 (0x447fd4) and returns 0 at 0x447fe4 when the field is not below the limit. Otherwise it looks for a '.' (0x2e) in its name argument with `xf86strchr` (0x448024), copies a prefix of the name into a buffer at sp-320 with `xf86strncpy` (0x448058), and compares candidate names with `xf86strcmp` (0x44809c); a zero result takes the branch at 0x4480a4. It also returns 0 at 0x4480d0. The render does not show the value returned at 0x4480f4; the zero-result branch suggests it is the matching entry. The table contents are not derived here.
  Reviewed: 2026-11-12 (sonnet)

- `R200CompositorConfigurePLL` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44b8c0
  **Inferred.** When its second argument (a1) is non-zero, it reads a compositor format file through `vfmtFindCmpFormatFile` (0x44b964) and `vfmtReadCmp1Format` (0x44b974), and reports a failure through `ErrorF` (0x44b990). It then evaluates a floating-point comparison chain with `xf86floor` and `xf86fabs` (0x44b9f4, 0x44ba14). The routine also issues a run of writes: `R200CompositorExternalWrite` (0x44ac80) with a1 of 0x4c and several selectors in a2, and `R200CompositorRegWrite` (0x44ac00) with a1 of 0xaa and a2 of 0x0, 0x40 to 0x44 and 0x50. Role (from name): the name fits the sequence. The values written, the register each selector names and the arithmetic in the comparison chain are not derived here; the constants 0x2800000, 0x200000 and 0x78000 appear in registers at some calls but the facts do not show that they are passed as arguments.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockPaintWindowBorder` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44df80
  **Inferred.** A lock wrapper around the paint-window-border hook. It loads the per-screen lock index from `R200_lockScreenIndex` and the table entry at +0x18 for that screen (0x44dfa8 to 0x44dfd4). It stores to +0xc4 of the screen state before and after the call (0x44dfe0, 0x44e01c), takes the DRI lock with `DRILock` (0x44dfdc), calls the wrapped routine through the table pointer (0x44dff0), and releases with `DRIUnlock` (0x44e004). It returns the value of `DRIUnlock`. The effect of the word at +0xc4 is not derived here.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockAdjustFrame` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44eb80
  **Inferred.** Lock wrapper with the same shape as the paint-window-border wrapper. It reads the screen record from `screenInfo` for its argument (0x44ebb8 to 0x44ebc0), uses the lock index `R200_lockScreenIndex`, and reads the table entry at +0x58 (0x44ebdc to 0x44ebf0). It calls `DRILock` with a1 set to 0 and a4 set to 0x20568 (0x44ebe4), calls the wrapped routine through a function pointer (0x44ec00), and releases with `DRIUnlock` (0x44ec10). It returns the value of `DRIUnlock`. The wrapped routine is named only by the table entry.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockCopyPlane` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f940
  **Inferred.** Lock wrapper for the GC copy-plane op. It reads the GC index `R200_lockGCIndex` and the saved-ops words at +0x48 and +0x44 of the GC in a2 (0x44f978 to 0x44fa50), and takes `DRILock` on the DRI state at +0x10 of a0 (0x44f9bc). It calls the wrapped routine through a function pointer (0x44fa04) and releases with `DRIUnlock` (0x44fa14). When the DRI state of a1 differs from that of a0 (the `bne` at 0x44f9cc), it takes and releases a second lock (`DRILock` at 0x44fa74, `DRIUnlock` at 0x44fa88). The saved GC-ops words are stored at 0x44fa4c and 0x44fa54.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockPushPixels` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4508c0
  **Inferred.** Lock wrapper for the GC push-pixels op, with a structure like the copy-plane wrapper's but without a second lock in these facts. It saves GC-ops words through the index `R200_lockGCIndex` (0x4508f4 to 0x450914, stores at 0x450928 and 0x450990). It takes `DRILock` on the state at +0x0 of a0 (0x450930), calls the wrapped routine through a function pointer (0x450958), releases with `DRIUnlock` (0x450968), and returns the address of the `R200_lockGCOps` table (0x4509a0).
  Reviewed: 2026-11-12 (sonnet)

- `versionWithinRange` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x459dc0
  **Inferred.** Tests whether a version in a0 lies inside a range given by a1 and a2. Each version is two 16-bit fields, at offsets 0 and 2 (`lhu` at 0x459dc0 to 0x459dec). The first field of a0 is compared with the first field of a1 (0x459dcc), the second field with the second field of a1 (0x459de0), and the first field of a0 with the first field of a2 (0x459df8). Any failed compare goes to the return at 0x459e10, which gives 0. A further test at 0x459e00 on a register the render does not identify also returns 0 when it is non-zero. The routine returns 1 at 0x459e08 when every test passes.
  Reviewed: 2026-11-12 (sonnet)
