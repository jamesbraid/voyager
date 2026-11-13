# Routine role readings, voyager fglrx_drv.so batch 10

Role statements for the routines of `usr/X11R6/lib/modules/drivers/fglrx_drv.so` that the functions table does not yet show as understood, taken every 15th routine from index 10 in address order. Each statement comes from one render with `retools/tools/render_reading.py`: the callees and their argument registers, the constants, the loads and stores at each base register, and the branch conditions. Where a register or a stored value is not resolved by the render, the entry says so. Entries are inferred unless marked established.

- `R200CPSetupForScreenToScreenCopyOverlay` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40bd00
  **Inferred.** Builds a four-word command for a screen-to-screen copy. It allocates the buffer with `__fglDRMPM4Alloc` at 0x409f40 (the call at 0x40bd44 passes a0 loaded from `[[a0+248]+7660]`, the size 4, and a2 and a3 unchanged). The raster operation comes from the `R200_ROP` table at `sym(R200_ROP) + (a3 << 3)` (the load at 0x40bd6c), and the four words are stored at offsets 0, 4, 8 and 0xc of the buffer (0x40bd60 to 0x40bdac). The sign of a2, tested by the `bltz` at 0x40bd80, selects between two paths that rejoin. Both reach `__fglDRMPM4Submit` at 0x40a1c0, called at 0x40bdb4 with the buffer plus 16 and a2 as one of 0x0 or 0x2 (the constant 2 is set at 0x40bd8c on the non-negative path), and the return at 0x40bdc4 yields the submit result.
  Reviewed: 2026-11-12 (sonnet)

- `R200SetCursorPosition` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40d280
  **Inferred.** Role (from name): moves the hardware cursor to a requested position. What the render shows is a clamp and a set of stores. A value in a2 is compared with the word at +8 of the bounds record `[[a0+248]+6396]` and a value derived from a1 with the word at +12 (the `bne` branches at 0x40d418 and 0x40d42c), and the clamped values are packed into words stored into `[[a0+248]+48]` at offsets 0x360, 0x364 and 0x368 (0x40d458 to 0x40d488). Those stores are on the path where the byte at `[a0+248]+0x5a` is nonzero (the `beq` at 0x40d44c); when it is zero a different path stores at offsets 0x260, 0x264 and 0x268 (0x40d630 to 0x40d664). The only named callee the render shows is `R200CloneAdjustFrame` at 0x40d5e8, called on one branch with `[a0+12]` as a0 and `[[a0+248]+112]` as its sixth argument (a5). The two returns at 0x40d534 and 0x40d564 yield values the render does not resolve.
  Reviewed: 2026-11-12 (sonnet)

- `R200IsTVConnected` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x411d40
  **Inferred.** Role (from name): probes the output for a TV encoder. What the render shows is a selector word at `[[a0+248]+160]` compared with the constants 0x2c, 0x2d, 0x2f, 0x31 and 0x34 along the chains from 0x411d60 to 0x411eec. It reads and writes words at `[[a0+248]+48]` +0x198 and +0x1a0, calls `R200INPLL` with index 0x8 (0x4120f8), 0x2d (0x412154) and 0x22 (0x4121b0), and calls `xf86usleep` with 0x4e20 microseconds, which is 20 ms (0x412618). It calls `xf86DrvMsg` at 0x411df4 on one path. The early return at 0x411d94 yields one of 0, 4 or 5, and the return at 0x411e0c yields 0.
  Reviewed: 2026-11-12 (sonnet)

- `R200PreInitCursor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x417180
  **Inferred.** Role (from name): decides at pre-init whether the hardware cursor is available. It tests the byte at `[[a0+248]+0x5a]` (the `lbu` at 0x417188 and the `beq` at 0x41718c). When that byte is zero, it calls `xf86ReturnOptValBool` on `sym(R200Options)` with index 2 (0x4171b0). A nonzero answer returns 1 (the return at 0x417198). A zero answer loads a sub-module through `xf86LoadSubModule` at 0x4171c8, with the name at 0x467bb8, and returns 1 if the load succeeds or 0 if it fails (the return at 0x4171dc). When the byte is nonzero the `beq` falls through to the same return of 1 (0x417194 to 0x417198).
  Reviewed: 2026-11-12 (sonnet)

- `R200PLL2WaitForReadUpdateComplete` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41c440
  **Inferred.** Role (from name): waits for a PLL2 read update to complete. It reads PLL index 0x2b through `R200INPLL` (the calls at 0x41c458 and 0x41c478) and tests bit 0x8000 of the value; the `beq` branches at 0x41c464 and 0x41c484 leave the loop when that bit is clear. The loop from 0x41c474 to 0x41c490 repeats while a register the render does not resolve is nonzero. The return at 0x41c4a4 yields the last value `R200INPLL` returned.
  Reviewed: 2026-11-12 (sonnet)

- `R200InitPLL2RegistersDVO` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x420c80
  **Inferred.** Role (from name): computes the PLL2 divider fields for the DVO output from a mode record. What the render shows is that it reads the halfword at `[a1]` and the words at `[a1+4]` and `[a1+8]`, loads 64-bit words with `ld` from a constant table into a stack array, compares `[a1+8]` and `[a1+4]` with values derived from them (the branches at 0x420cfc, 0x420d1c and 0x420d70), and calls `R200Div` at 0x4112c0 from 0x420d9c with `[a1]` in a1 and `[a1+8]` in a3. Register a6 is shown holding the constant 0xaaaaaaab, which the render does not identify further. Seven words are stored at offsets 0x358, 0x35c, 0x360, 0x364, 0x368, 0x36c and 0x370 from a base register (0x420d64 to 0x420dd4). The return at 0x420ddc yields the `R200Div` result.
  Reviewed: 2026-11-12 (sonnet)

- `__R300FlushZCache` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x426c80
  **Inferred.** Writes a two-word request into the buffer returned by the routine at 0x424d40, then jumps to 0x424fc0. The call at 0x426c9c passes a0 loaded from `[a0+7660]`, the constant 2 as its second argument, and a2 and a3 unchanged. The stores at 0x426cb0 and 0x426cb8 write the two words at offsets 0 and 4 of that buffer. The render gives the callee no name, so the meaning of the request on the chip is not established here.
  Reviewed: 2026-11-12 (sonnet)

- `CompareFixed` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42e5c0
  **Inferred.** Compares two two-word values, one from each argument, and returns 1 or 0. The first words of `a0` and `a1` are loaded at 0x42e5c0 and 0x42e5c4, and the second words at 0x42e5d0 and 0x42e5cc. The routine returns 1 when the first word of `a1` is below the first word of `a0` (the `bne` at 0x42e5d4 to 0x42e5ec), returns 0 when it is above (the `bne` at 0x42e5dc to 0x42e5f4), and when the first words are equal it returns 0 if the register tested at 0x42e5e4 is nonzero. That register is set by code the render does not show, so the second-word rule is inferred from its use only.
  Reviewed: 2026-11-12 (sonnet)

- `msf_program_aperture` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x430940
  **Inferred.** Writes three words into an indexed table for the index in a1. The table pointer is `[a0+248]+48` (loaded at 0x430944), and the stores at 0x430968, 0x430978 and 0x430980 go to table word indexes `4*a1+705`, `4*a1+706` and `4*a1+707`. The stores are skipped when the table pointer is zero (the `beq` at 0x430954). The render does not resolve the values written, so the content of those entries is not established here.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayFillPolygon` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x433c00
  **Inferred.** Role (from name): handles an overlay fill-polygon request for a drawable. It reads the screen record `xf86Screens[index]`, where the index is loaded through a1, and compares the word at `[..+248]+8312` with the byte at a1+4. Only when they differ does it write that byte to `[..+248]+0x2078` (0x433c98), and then it branches on the byte against 8 and 0x18 (the `beq` tests at 0x433ca0 and 0x433ca8). Byte 0x18 reaches `R200CPAccelInitFuncs` at 0x433d1c with a2 equal to 0, and byte 8 reaches it at 0x433d34 with a2 equal to 1. It calls `VALIDATE_DRAWABLE` at 0x432d40 (the `bgezall` at 0x433cb8), then calls an unknown callee at 0x433cdc with the entry registers a0 to a3, after loads at +0x48 and +0x28. The render does not identify that callee.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayDestroyClip` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x435040
  **Inferred.** Role (from name): releases the overlay clip for one screen. It loads a record pointer from the array at `[a0+76]`, indexed by the word at 0x467ecc shifted left by 2, and reads the record's first two words, which it passes as a2 and a3 to an unknown callee at 0x435090. Before the call it saves the first word at a0+0x44 and, when the second word is nonzero (the `beq` at 0x435080), saves it at a0+0x48. After the call it stores the word at a0+0x44 back to the record's first word (0x4350a0); when the record's second word is nonzero (the `beq` at 0x4350b8), it stores the word at a0+0x48 back to the second word (0x4350c4). The returns at 0x4350d4 and 0x4350e8 yield a value the render shows only as a call result.
  Reviewed: 2026-11-12 (sonnet)

- `CMapSetDGAMode` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x436680
  **Inferred.** Role (from name): records a DGA state on a colormap. It calls an unknown callee at 0x4366d4 with the entry registers a0 to a3, then calls `DGAActive` at 0x4366e4. The store of a word at +0x44 of the colormap entry `[[..]+360] + ([0x467ed0] << 2)` (0x4366f4) sits in the delay slot of the `bne` at 0x4366f0. When `DGAActive` returns 0 and both `miInstalledMaps[a0]` and the screen word at +872 are nonzero, it calls `CMapReinstallMap` at 0x436780 (the `bgezall` at 0x436738) with `miInstalledMaps[a0]` as a0, the address of `miInstalledMaps` as a1, the screen word at +872 as a2, the address of `xf86Screens` as a3 and the screen index shifted left by 2 as a4. The return at 0x436750 yields a call result the render does not resolve.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayMarkOverlappedWindows` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x438640
  **Inferred.** Marks windows that overlap the overlay and sizes windows. It reads the screen index at a0+0x10 and takes the screen record `xf86Screens[index]`. The branches at 0x4387b8, 0x4388e0 and others loop back, and inside them it calls `MarkWindow` at 0x43d500 (0x4387b0 and 0x43888c) and `MarkUnderlayWindow` at 0x43d580 (0x4387dc, 0x43895c and 0x438a08). It tests window regions with `miRectIn` (the calls at 0x438824 and 0x43894c), sizes with `SetWinSize` and `SetBorderSize` (0x438840, 0x438854, 0x4389a8 and 0x4389dc). When the word at `[[a0+128] + ([0x467ec8] << 2)]` is zero (the `beq` at 0x4386b4) it calls `HasUnderlayChildren` at 0x43d300 (the `bgezall` at 0x438af0) and branches back on the result. The return at 0x438a60 yields 1 and the return at 0x438b28 yields 0.
  Reviewed: 2026-11-12 (sonnet)

- `DoLeaf` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43d100
  **Inferred.** Writes a record whose address it loads through two pointers, `[[a0+128] + ([0x467ec8] << 2)]`, and updates words of a1. The stores at 0x43d118 to 0x43d12c write offsets 4 (a1), 8 (zero), 0xc (zero), 0x10 (a2) and 0x14 (zero, in the delay slot of the `beq` at 0x43d128). When a2 is nonzero it also stores the record address at +0x14 of a2 (0x43d130). It then reads a1+8 and a1+0xc. When `[a1+8]` is zero it stores the record address at a1+0xc and a1+8 (0x43d158 and 0x43d160). Otherwise it stores the record address at a1+0xc only when `[a1+0xc]` equals a2 (the `bne` at 0x43d140, store at 0x43d14c). The returns at 0x43d148, 0x43d150 and 0x43d15c yield the record address.
  Reviewed: 2026-11-12 (sonnet)

- `CalcTime` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4402c0
  **Inferred.** Role (from name): a timing calculator, large enough that this entry states only the checks and returns the render shows. The selector a1 is tested for negative (the `bltz` at 0x4402d0) and below 3 (the `bne` at 0x4402dc); a negative or too-large selector returns -1 (0x4402f4). The routine tests the words at 0x469bb4, 0x469ba8 and 0x469bb0 and compares values against the address 0x469bb8 in many branches, and makes many stores and loads through base registers the render does not resolve. It makes indirect jumps (`jr`) at 0x441018 and 0x4410fc, through tables addressed with the low halves 0x1428 and 0x145c. Its returns give -1 (0x4402f4), -2 (0x44104c), -6 (0x44109c), 0 (0x441ff4), -4 (0x44246c), -9 (0x4425c0), -8 (0x442d40), -5 (0x442d74) and -7 (0x4434d8). The render does not give the meaning of the individual words, so no table contents are stated.
  Reviewed: 2026-11-12 (sonnet)

- `ATIHPVSwapDispatch` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x446600
  **Established.** The 8-byte body, 0x446600 to 0x446608, is a single return with v0 set to 1 (the `addiu` sits in the delay slot of the `jr $ra`). It makes no calls, reads no argument register and writes no memory, so every call returns 1 and changes nothing.
  Reviewed: 2026-11-12 (sonnet)

- `ReadWriteTimingTable` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447e00
  **Inferred.** Opens a timing-table file, then reads or writes it, and reports a failed open. It builds the file name with `xf86sprintf` (format at 0x461998 or 0x4619b8) and opens it with `xf86fopen` (mode string at 0x467ca2 or 0x467cd0, chosen by a `beq` on a3 at 0x447e4c). When the open fails (the `bne` at 0x447e64 falls through) a further test of a3 at 0x447e6c picks among strings, then it calls `xf86strerror` (0x447e90) and `ErrorF` (0x447ec0) and returns 10 (0x447edc). When the open succeeds, the `beq` at 0x447ee4 tests a3: the fall-through calls `xf86fprintf` (0x447ef8 and 0x447f10, formats at 0x467cf8 and 0x467cfc) and the taken branch leads to the `xf86fscanf` calls (0x447f98 and 0x447fac, formats at 0x467d00 and 0x467d04). It then calls `xf86fclose` at 0x447f1c and returns 0 (0x447f3c).
  Reviewed: 2026-11-12 (sonnet)

- `R200LoadCompositorTiming` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44ae00
  **Inferred.** Finds a compositor timing format file and writes compositor registers. It clears a 0x558-byte buffer with `xf86bzero` (0x44ae64), finds the format file with `vfmtFindCmpFormatFile` (0x44ae84 and 0x44aef4), reads it with `vfmtReadCmp1Format` (0x44ae94), and calls `ErrorF` on failure paths. It then writes register groups with `R200CompositorRegWrite` at 0x44ac00 (register index 0xaa, and 0xd4 at 0x44b850) and `R200CompositorExternalWrite` at 0x44ac80 (index 0x4c and 0x70). Several data arguments in those calls are constants in the render, for example a3 = 0x41, 0x80 and 0x50 at 0x44b458, 0x44b500 and 0x44b530; others are unresolved. The render does not show that the register values come from the file contents. The return at 0x44aec4 yields 0 and the return at 0x44aedc yields 0 or 1.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockPaintWindowBackground` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44dec0
  **Inferred.** Takes the DRI lock, calls an unknown callee, and releases the lock. Role (from name): wraps the screen's PaintWindowBackground hook. It reads the DRI record at `[a0+16]` and loads a word through `[[a0+16]+360] + (index << 2)` and its +0x14 field (0x44df00 to 0x44df14). It takes the lock with `DRILock` at 0x44df1c, stores to +0xc0 (0x44df20), calls an unknown callee at 0x44df30 with a0, a1 and a2 as at entry (a3 is not resolved), releases the lock with `DRIUnlock` at 0x44df44 and stores to +0xc0 again (0x44df5c). The stored values are not resolved. The return at 0x44df64 yields the `DRIUnlock` result.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockSetCursorPosition` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44eac0
  **Inferred.** Takes the DRI lock, calls an unknown callee, and releases the lock. Role (from name): wraps the cursor-position hook. It loads a word through `[a0+360] + (index << 2)` and its +0x54 field (0x44eafc to 0x44eb0c), calls `DRILock` on `a0` at 0x44eb18, stores to +0x12c (0x44eb1c), calls an unknown callee at 0x44eb30 with the entry registers a0 to a3, calls `DRIUnlock` on `a0` at 0x44eb40 and stores to +0x12c again (0x44eb60). The stored values are not resolved.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockCopyArea` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f7c0
  **Inferred.** Takes the DRI lock on `[a0+16]`, calls an unknown callee, and releases the lock, and takes a second lock when `[a0+16]` and `[a1+16]` differ. Role (from name): wraps the copy-area hook. It takes `DRILock` on `[a0+16]` at 0x44f83c, calls an unknown callee at 0x44f87c with the entry registers a0 to a3, and releases with `DRIUnlock` at 0x44f88c. It compares `[a0+16]` with `[a1+16]` (the `bne` branches at 0x44f84c and 0x44f89c), and when they differ it also calls `DRILock` and `DRIUnlock` on `[a1+16]` at 0x44f8ec and 0x44f904. The hook word is loaded through a +76 offset indexed by `R200_lockGCIndex` (0x44f7fc to 0x44f818). The routine stores to +0x48 and +0x44 at 0x44f81c and 0x44f834 before the lock, and to +0x48 and +0x44 at 0x44f8c8 and 0x44f8cc after the unlock, with stores at +0 and +4 of another record at 0x44f8bc and 0x44f8c4.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockPolyGlyphBlt` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4507c0
  **Inferred.** Takes the DRI lock on `[a1]`, calls an unknown callee, and releases the lock. Role (from name): wraps the poly-glyph-blit hook. It loads a word from `a1+76` indexed by `R200_lockGCIndex` (0x450800 to 0x45081c), stores words to a1+0x44 and a1+0x48 around the call (0x450820, 0x450830, 0x45089c and 0x4508a0), takes `DRILock` on `[a1]` at 0x450834, calls an unknown callee at 0x45085c with the entry registers, and releases the lock with `DRIUnlock` at 0x450870. The return at 0x4508a8 yields the address `sym(R200_lockGCOps)`.
  Reviewed: 2026-11-12 (sonnet)

- `newSDBfileHeader` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x459234
  **Inferred.** Fills a header record that a0 points to and attaches a block to it. It calls an unknown callee at 0x459260 with 1 and 0xa4, stores its result at a0+8, and copies four bytes with `strncpy` (0x45927c) from the pointer loaded from the word at 0x4670e4. It then calls `SDBsetHeader` at 0x4597a4 with a0, a1, a2 and the constant 1 (the `bgezall` at 0x4592a4), and copies up to 100 bytes from a2 into the block at offset 12 with `strncpy` (0x4592c0, with the argument 0x64). It then writes the block's fields at offsets 0x70, 0x74 and 0x78 (0x4592f4 to 0x459320), with an unknown callee call at 0x459304 whose result goes to offset 0x74. It finishes with a jump to 0x45a3f0.
  Reviewed: 2026-11-12 (sonnet)
