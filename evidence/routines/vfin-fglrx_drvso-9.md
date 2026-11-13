# fglrx_drv.so routine readings, batch 9

Role statements for every 15th routine of `usr/X11R6/lib/modules/drivers/fglrx_drv.so` that the function inventory did not show as understood, sorted by address, starting at the tenth (index 9). Each statement uses only the rendered facts: registers, calls, constants, branch targets and sizes. Every entry is inferred. The renders show what a routine does with its arguments and return value, not what its callers expect. Where the render leaves a callee or a field unidentified, the entry says so.

- `LastLinePel` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40aec0
  **Inferred.** A 448-byte routine that makes four word loads near its entry (0x40aed0 to 0x40aef0) and two word stores at 0x40b030 and 0x40b038. The render does not show the base registers of those loads and stores. It calls xf86abs at 0x40af04 and 0x40af1c. It branches on the sign of s4 and s5, whose values the render leaves unknown, and on whether results of xf86abs are zero or equal to another value. Role (from name): the last pixel of a line. The render does not show the formula that sets the stored words.
  Reviewed: 2026-11-12 (sonnet)

- `R200SetCursorColors` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40d200
  **Inferred.** A 68-byte routine that follows the private record at a0+0xf8 to its register block at +0x30 and stores words at block offsets 0x26c and 0x270 when the flag byte at record offset 0x5a is zero, and at 0x36c and 0x370 when it is nonzero. It reads the byte at record offset 0x5d and returns it. The name suggests the cursor foreground and background color registers, but the render does not identify the registers.
  Reviewed: 2026-11-12 (sonnet)

- `R200PLLWaitForReadUpdateComplete` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41c300
  **Inferred.** A 108-byte polling loop. It calls R200INPLL at 0x41c318 and 0x41c338 with register index 3 and tests bit 0x8000 of the returned value at 0x41c324 and 0x41c344. The loop branches back at 0x41c350 while a0 is nonzero, and the routine returns the last R200INPLL value. The name suggests waiting for a PLL read-update flag, which the tested bit fits. The render does not establish which PLL register index 3 selects.
  Reviewed: 2026-11-12 (sonnet)

- `R200PreInitModes` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x416780
  **Inferred.** A 2544-byte routine. Its first call, at 0x4167b8, is xf86GetEntityPrivate with gR200EntityIndex; it calls it again at 0x416a64. It tests options with xf86IsOptionSet using ids 0x42, 0x43, 0x24, 0x27, 0x25, 0x26 and 0x44. When an option is set it reads the boolean options 0x42, 0x24, 0x27, 0x25 and 0x26 with xf86GetOptValBool into the private record at +9328, +9316, +9320, +9304 and +9308, and the string options 0x43 and 0x44 with xf86GetOptValString. Several branches call xf86DrvMsg. The routine also calls R200SetMonitorInfo at 0x416b14, XNFcalloc with 0x24 at 0x416b28, xf86ValidateModes at 0x416bc8, R200SGIVCCopyModes at 0x416bec, xf86PruneDriverModes at 0x416bf8, and xf86SetCrtcForModes at 0x416c30 only when the word at record +0x4c is neither 4 nor 5. It calls R200SetPitch at 0x416d14 and 0x416f98, R200SGIVCGetDefMode, xf86PrintModes, xf86SetDpi and xf86LoadSubModule, and R200SetSyncRangeFromEdid at 0x41708c and 0x4170a0. It returns 0x0 on some exits (0x416db8, 0x416e60, 0x416fe0) and 0x1 at 0x416e34. Role (from name): driver mode setup for a screen. The render does not show what each option does beyond its id.
  Reviewed: 2026-11-12 (sonnet)

- `R200InitPLL2Registers` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x420ac0
  **Inferred.** A 400-byte routine that reads the words at a1+4 and a1+8 and the halfwords at a1+0 and a1+2. It makes eight 8-byte loads near its start (0x420afc to 0x420b18); the render does not show their addresses. It calls R200Div through the pointer at 0x4112c0 once, at 0x420bf4, with a1 set to the halfword at a1+0, and stores words at a0+0x358 through a0+0x370 (seven distinct offsets, with +0x35c stored on two paths). It returns the result of R200Div. Role (from name): PLL-2 register values computed from the mode. The render does not show which constant feeds which register, so the mapping is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `__R300Flush3DCache` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x426c00
  **Inferred.** An 84-byte routine that calls the function at the pointer 0x424d40 with the word at a0+0x1dec as a0 and request value 2 as a1, passing a2 and a3 through. It makes two word stores at offsets 0 and +4 at 0x426c30 and 0x426c38, and loads the word at a0+0x1dec again at 0x426c44. The render does not show the base register of those stores, does not list a return, and does not show where the routine ends, so it does not establish a tail jump. Role (from name): a 3D cache flush. The render does not show what request 2 does.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_DRISwapDispatch` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42b980
  **Inferred.** An 8-byte body that returns the constant 1 in v0 and does nothing else. The name suggests a DRI buffer-swap dispatch, but the body has no call and no memory access, so the render supports only the constant return.
  Reviewed: 2026-11-12 (sonnet)

- `CheckForOSSupport_SSE2` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42cb40
  **Inferred.** A 48-byte routine that calls xf86DrvMsg at 0x42cb58 with level 5 and the constant message at 0x460970, then returns 0. The body has no CPU feature test. The name suggests an SSE2 OS-support probe, but this body only logs and returns 0.
  Reviewed: 2026-11-12 (sonnet)

- `queryMaxBarriers` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x430700
  **Inferred.** A 52-byte routine that reads the table pointer at 0x4681a8, indexes it by a0 with an 8-byte stride, and reads the word at entry offset +4. It returns 1 when that word is nonzero and 0 when it is zero. The name suggests a count of barriers, but the render does not show the table contents or what the flag means.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayChangeClip` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434f80
  **Inferred.** A 176-byte routine that loads the table pointer at a0+0x4c and selects a record by the value at 0x467ecc. Before its one call it stores at +0x44 (0x434fb0) and, only when the record's word at +4 is nonzero, at +0x48 (0x434fc8). It then calls an unidentified function at 0x434fd0 with a0 to a3 passed through and the record's words at 0 and +4 in a5 and a6. After the call it loads +0x44 and stores at offset 0 (0x434fe0), stores at +0x44 (0x434fe8), then loads +4 and +0x48 and, only when the record's word at +4 is nonzero, stores at +4 and +0x48 (0x435004, 0x435008). It returns the value of the unidentified call. Role (from name): an overlay clip update. The render does not show the base registers of the plain loads and stores or the values stored, and the callee is not identified.
  Reviewed: 2026-11-12 (sonnet)

- `CMapSwitchMode` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4365c0
  **Inferred.** A 156-byte routine that loads through a chain of fields at +0x34, +0x168, +0x0 and +0x20, then calls an unidentified function at 0x436604 with a0 to a3 passed through. It returns 0 when that call returns 0. Otherwise it reads miInstalledMaps indexed by a0 and, when that word is nonzero, calls CMapReinstallMap on it, then returns 1. The render does not name the structures in the field chain or the table that supplies the callee. Role (from name): a colormap switch for a screen. The unidentified callee's behavior is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayRestackWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x438580
  **Inferred.** A 136-byte routine that reads the window record through a0+0x80 and the table at 0x467ec8, then tests the first word of that record. When the word is nonzero, or when HasUnderlayChildren at 0x4385c4 returns nonzero, it calls RebuildTree at 0x4385d8. It then always calls FIREGL_OverlayChangeCRTC at 0x4385e8 and returns that call's value. The name points to restacking an overlay window, and the rebuild-then-apply order fits it. The bodies of the callees are not in this render.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayComputeCompositeClip` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43cd80
  **Inferred.** A 664-byte routine that reads the overlay record through a1+0x80 and the table at 0x467ec8. It calls the region helpers miRegionCreate (at 0x43cf70 and 0x43cff0), miTranslateRegion (at 0x43cea4 and as a tail call at 0x43cf24), miIntersect (at 0x43cec4, 0x43cf3c, 0x43cfd0 and 0x43d008) and miRegionDestroy (at 0x43ce08 and 0x43ced8), and reaches miComputeCompositeClip by the tail jump at 0x43cf5c. Each miRegionDestroy call is guarded by a branch on a zero test (at 0x43ce00 and 0x43ced0), and the other helper calls sit on different branch paths. Role (from name): composing a clip region for an overlay window. The render shows the call order but not the geometry values, so the exact clip result is not derived.
  Reviewed: 2026-11-12 (sonnet)

- `ProcATIHPVTMDSStopTransmission` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x446580
  **Inferred.** A 128-byte routine with the shape of an X request handler. It reads the client record at a0+8 and a count in screenInfo at +0x30 and compares the client's word at [a0+8]+4 with that count. When the client word is smaller, it writes a 32-byte reply from the stack with WriteToClient at 0x4465e4. Otherwise it returns the word at a0+40 without writing. The name refers to an HPV TMDS transmission stop, but the render shows no register access in the body, only the reply.
  Reviewed: 2026-11-12 (sonnet)

- `R200ResetProc` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447c00
  **Inferred.** A 108-byte routine that reads the screen private index at vcScreenPrivateIndex and the per-screen private pointer at a0+0x168 indexed by it. It calls is1Reset through the pointer at 0x4520c0 with the screen word at a0 and the entry arguments. It then calls Xfree on the private pointer when that pointer is nonzero, and returns the value of the last call. The body is a reset followed by a free of the per-screen private.
  Reviewed: 2026-11-12 (sonnet)

- `R200CompositorExternalWrite` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44ac80
  **Inferred.** A 324-byte routine that calls R200CmpIoctl through the pointer at 0x44ab80 at 0x44acd8, 0x44ad00 and 0x44ad28, each with request 0x6667000b and the argument block at sp-64. Each later call is reached only when the previous result is not negative. A negative result at each call branches to a path that calls ErrorF with the message at 0x461fd8. The render shows returns of -1 at 0x44ad60 and 0x44ad8c, and the normal exit returns 0 at 0x44ad48. The render does not show where the third ErrorF path (0x44adb4) returns, nor what the ioctl does.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockSourceValidate` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44de00
  **Inferred.** A 176-byte routine that follows the word at a0+0x10 and the lock screen index to a per-screen record, and loads the word at record +0x10. It stores a word at the +0x98 slot (at 0x44de50) on every path. Only when the record word at +0x10 is nonzero does it call DRILock on the word at a0+0x10 with flag 0, reload the +0x98 word, call an unidentified function at 0x44de7c with a0 to a3 passed through, and call DRIUnlock. It stores the +0x98 slot again at 0x44dea0 before returning. The return value is either the shifted lock screen index or the result of DRIUnlock. Role (from name): a lock wrapper around a source-validate function. The wrapped function is not identified in the render.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockDisplayCursor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44ea00
  **Inferred.** A 160-byte routine that reads the lock screen index and the per-screen record, then calls DRILock on a0 with flag 0. It stores and reloads a word at +0x11c (at 0x44ea54 and 0x44ea58), calls an unidentified function with a0 and a1 passed through, and calls DRIUnlock on a0. It stores to +0x11c again at 0x44ea90 and returns the unidentified call's value. The render does not establish a2 and a3 for the wrapped call, and the wrapped function is not identified.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockPutImage` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f680
  **Inferred.** A 264-byte lock wrapper for a graphics-context operation. It reads the lock GC index and the per-GC record through a1+0x4c. It calls DRILock on the word at a1 with flag 0, calls an unidentified function at 0x44f734 with the entry arguments, and then calls DRIUnlock on the same word. It stores and reloads the pointers at a1+0x44 and a1+0x48 around the call. It returns the address of R200_lockGCFuncs. The wrapped function is not identified in the render.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockImageGlyphBlt` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4506c0
  **Inferred.** A 240-byte lock wrapper with the same structure as `R200_lockPutImage`. It reads the lock GC index and per-GC record through a1+0x4c, calls DRILock on the word at a1 with flag 0, calls an unidentified function at 0x45075c with the entry arguments, and calls DRIUnlock on the same word. It stores and reloads the pointers at a1+0x44 and a1+0x48 around the call. It returns the address of R200_lockGCOps. The wrapped function is not identified in the render.
  Reviewed: 2026-11-12 (sonnet)

- `addNewSymbol` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x459174
  **Inferred.** A 192-byte routine that calls getFreeSymbol through the pointer at 0x459338 with a0 to a3 passed through. It returns 0 when that call returns zero. Otherwise it calls strncpy with the returned record plus 12 as the destination, the name in a1 as the source and a length of 0x20, stores a byte at +0x2b, and stores words at offsets 0, +8 and +4. It loads words at +0, +4 and +0x10 from a0 and makes one unidentified call with the word at a0 as its first argument. It then calls xdr_typedData with the word at a0, the first word of the returned record and the stack address sp-80, and returns that call's value on this path, or 0 when getFreeSymbol returned zero. Role (from name): adding an entry to a symbol table. The record layout is inferred from the stores only.
  Reviewed: 2026-11-12 (sonnet)

## Dropped

- R200Div, at 0x4112c0 in the binary above. The body is 32 bytes. The render shows only a return with v0 unknown and no callee or memory access that would support a role.
- FIREGL_OverlayPolyArc, at 0x433ac0. The render shows a drawable check, two calls to R200CPAccelInitFuncs and a depth test on the drawable's byte at offset 4. It does not show any arc computation, and the callee names conflict with the routine name. A role here would be a guess.
- GetMVParams, at 0x43f4c0. The body is 2816 bytes with about 25 compare-and-branch steps on the argument and more than 80 loads and stores through computed addresses. A role would need the tables it reads, and the render does not resolve them.
