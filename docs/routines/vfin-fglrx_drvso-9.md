# fglrx_drv.so routine readings, batch 9

Role statements for every 15th routine of `usr/X11R6/lib/modules/drivers/fglrx_drv.so` that the function inventory did not show as understood, sorted by address, starting at the tenth (index 9). Each statement uses only the rendered facts: registers, calls, constants, branch targets and sizes. Every entry is inferred. The renders show what a routine does with its arguments and return value, not what its callers expect. Where the render leaves a callee or a field unidentified, the entry says so.

- `LastLinePel` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40aec0
  **Inferred.** A 448-byte routine that reads four words through the pointers in a0 to a3 and writes two words back through a2 and a3 at 0x40b030 and 0x40b038. It calls xf86abs at 0x40af04 and 0x40af1c and branches on the sign and equality of the results. The name suggests the last pixel of a line, which fits the absolute-difference branches, but the render does not show the formula that sets the output words.

- `R200SetCursorColors` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40d200
  **Inferred.** A 68-byte routine that follows the private record at a0+0xf8 to its register block at +0x30 and stores words at block offsets 0x26c and 0x270 when the flag byte at record offset 0x5a is zero, and at 0x36c and 0x370 when it is nonzero. It reads the byte at record offset 0x5d and returns it. The name suggests the cursor foreground and background color registers, but the render does not identify the registers.

- `R200PLLWaitForReadUpdateComplete` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41c300
  **Inferred.** A 108-byte polling loop. It calls R200INPLL at 0x41c318 and 0x41c338 with register index 3 and tests bit 0x8000 of the returned value at 0x41c324 and 0x41c344. The loop branches back at 0x41c350 while a0 is nonzero, and the routine returns the last R200INPLL value. The name suggests waiting for a PLL read-update flag, which the tested bit fits. The render does not establish which PLL register index 3 selects.

- `R200PreInitModes` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x416780
  **Inferred.** A 2544-byte driver pre-init for a screen. It reads option flags through xf86IsOptionSet with option ids 0x42, 0x43, 0x24, 0x27, 0x25, 0x26 and 0x44. It parses boolean options into the private record at offsets +9304 to +9328 with xf86GetOptValBool and string options 0x43 and 0x44 with xf86GetOptValString, and reports each with xf86DrvMsg. It then gets the entity private with xf86GetEntityPrivate, sets monitor data with R200SetMonitorInfo, allocates a 0x24-byte record with XNFcalloc, and validates modes with xf86ValidateModes. It prunes the modes, sets the CRTC and pitch with R200SetPitch, and sets the sync range from EDID. It returns 0 or 1 on its exits. The option ids and call order establish the shape. The render does not show what each option does beyond its name.

- `R200InitPLL2Registers` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x420ac0
  **Inferred.** A 400-byte routine that reads the mode record at a1, including words at a1+0, a1+4 and a1+8 and halfwords at a1+0 and a1+2. It loads eight 8-byte constants from 0x45f1d8 to 0x45f210. It calls R200Div through the pointer at 0x4112c0 and stores seven words at a0+0x358 through a0+0x370. The name suggests PLL-2 register values computed from the mode. The render does not show which constant feeds which register, so the mapping is unknown.

- `__R300Flush3DCache` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x426c00
  **Inferred.** An 84-byte routine that reads the word at a0+0x1dec and calls the function at the pointer 0x424d40 with that word and request value 2. It writes two words into the record the callee returns, at offsets 0 and +4. It then tail-jumps to 0x424fc0. The name suggests a 3D cache flush, and the request value 2 is the only evidence for it. The render does not show what request 2 does.

- `FIREGL_DRISwapDispatch` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42b980
  **Inferred.** An 8-byte body that returns the constant 1 in v0 and does nothing else. The name suggests a DRI buffer-swap dispatch, but the body has no call and no memory access, so the render supports only the constant return.

- `CheckForOSSupport_SSE2` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42cb40
  **Inferred.** A 48-byte routine that calls xf86DrvMsg at 0x42cb58 with level 5 and the constant message at 0x460970, then returns 0. The body has no CPU feature test. The name suggests an SSE2 OS-support probe, but this body only logs and returns 0.

- `queryMaxBarriers` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x430700
  **Inferred.** A 52-byte routine that reads the table pointer at 0x4681a8, indexes it by a0 with an 8-byte stride, and reads the word at entry offset +4. It returns 1 when that word is nonzero and 0 when it is zero. The name suggests a count of barriers, but the render does not show the table contents or what the flag means.

- `FIREGL_OverlayChangeClip` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434f80
  **Inferred.** A 176-byte routine that reads a0+0x4c, selects a record through the table at a0+0x4c indexed by the value at 0x467ecc, and copies the words at a0+0x44 and a0+0x48 into that record at offsets 0 and +4. It calls an unidentified function at 0x434fd0 with the record's pointers in a5 and a6, and returns that function's value. The name suggests an overlay clip update, which fits the record copy. The callee is not identified in the render.

- `CMapSwitchMode` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4365c0
  **Inferred.** A 156-byte routine that follows the per-screen entry in screenInfo indexed by a0, through its +0x34 and +0x168 fields and a table indexed by the word at 0x467ed0, to call an unidentified function at 0x436604 with its four arguments passed through. It returns 0 when that call returns 0. Otherwise it reads miInstalledMaps[a0] and, when it is nonzero, calls CMapReinstallMap on it, then returns 1. The name suggests a colormap switch for a screen, which fits reinstalling the installed map. The unidentified callee's behavior is not shown.

- `FIREGL_OverlayRestackWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x438580
  **Inferred.** A 136-byte routine that reads the window record through a0+0x80 and the table at 0x467ec8, then tests the first word of that record. When the word is nonzero, or when HasUnderlayChildren at 0x4385c4 returns nonzero, it calls RebuildTree at 0x4385d8. It then always calls FIREGL_OverlayChangeCRTC at 0x4385e8 and returns that call's value. The name points to restacking an overlay window, and the rebuild-then-apply order fits it. The bodies of the callees are not in this render.

- `FIREGL_OverlayComputeCompositeClip` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43cd80
  **Inferred.** A 664-byte routine that reads the overlay record through a1+0x80 and the table at 0x467ec8. It builds a composite clip region with the region helpers miRegionCreate (at 0x43cf70 and 0x43cff0), miTranslateRegion (at 0x43cea4 and 0x43cf24), miIntersect (at 0x43cec4, 0x43cf3c, 0x43cfd0 and 0x43d008) and miComputeCompositeClip (reached by the jump at 0x43cf5c). It frees regions with miRegionDestroy at 0x43ce08 and 0x43ced8. The render shows the call order but not the geometry values, so the exact clip result is not derived.

- `ProcATIHPVTMDSStopTransmission` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x446580
  **Inferred.** A 128-byte routine with the shape of an X request handler. It reads the client record at a0+8 and a count in screenInfo at +0x30 and compares the client's word at [a0+8]+4 with that count. When the client word is smaller, it writes a 32-byte reply from the stack with WriteToClient at 0x4465e4. Otherwise it returns the word at a0+40 without writing. The name refers to an HPV TMDS transmission stop, but the render shows no register access in the body, only the reply.

- `R200ResetProc` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447c00
  **Inferred.** A 108-byte routine that reads the screen private index at vcScreenPrivateIndex and the per-screen private pointer at a0+0x168 indexed by it. It calls is1Reset through the pointer at 0x4520c0 with the screen word at a0 and the entry arguments. It then calls Xfree on the private pointer when that pointer is nonzero, and returns the value of the last call. The body is a reset followed by a free of the per-screen private.

- `R200CompositorExternalWrite` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44ac80
  **Inferred.** A 324-byte routine that calls R200CmpIoctl through the pointer at 0x44ab80 three times, at 0x44acd8, 0x44ad00 and 0x44ad28, each with request 0x6667000b and the argument block at sp-64. A negative result from any of them goes to ErrorF with the message at 0x461fd8 and makes the routine return -1. The normal exit returns 0. The request number and the error handling are the observable behavior. The render does not show what the ioctl does.

- `R200_lockSourceValidate` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44de00
  **Inferred.** A 176-byte lock wrapper. It follows the screen's private at a0+0x10 and the lock screen index to a per-screen record. It stores a word at the record's +0x98 slot, calls DRILock on the screen handle at a0+0x10 with flag 0, calls an unidentified function at 0x44de7c with the entry arguments, and then calls DRIUnlock. It stores and reloads the +0x98 word around the call. The wrapped function is not identified in the render.

- `R200_lockDisplayCursor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44ea00
  **Inferred.** A 160-byte lock wrapper. It reads the lock screen index and the per-screen record, then calls DRILock on its first argument with flag 0 and calls an unidentified function with the entry arguments. It calls DRIUnlock on the first argument afterward. It stores and reloads a word at a0+0x11c around the call. The wrapped function is not identified in the render.

- `R200_lockPutImage` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f680
  **Inferred.** A 264-byte lock wrapper for a graphics-context operation. It reads the lock GC index and the per-GC record through a1+0x4c. It calls DRILock on the word at a1 with flag 0, calls an unidentified function at 0x44f734 with the entry arguments, and then calls DRIUnlock on the same word. It stores and reloads the pointers at a1+0x44 and a1+0x48 around the call. It returns the address of R200_lockGCFuncs. The wrapped function is not identified in the render.

- `R200_lockImageGlyphBlt` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4506c0
  **Inferred.** A 240-byte lock wrapper with the same structure as `R200_lockPutImage`. It reads the lock GC index and per-GC record through a1+0x4c, calls DRILock on the word at a1 with flag 0, calls an unidentified function at 0x45075c with the entry arguments, and calls DRIUnlock on the same word. It stores and reloads the pointers at a1+0x44 and a1+0x48 around the call. It returns the address of R200_lockGCOps. The wrapped function is not identified in the render.

- `addNewSymbol` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x459174
  **Inferred.** A 192-byte routine that calls getFreeSymbol through the pointer at 0x459338. When it returns a record, the routine copies up to 0x20 bytes of the name in a1 into the record at offset +12 with strncpy, and sets the record's byte at +0x2b. It links the record through words at offsets 0, +4 and +8 that it reads from the list head a0. It then calls xdr_typedData on the record and returns that call's value, or 0 when getFreeSymbol returned nothing. The name suggests adding an entry to a symbol table, and the stores fit it. The record layout is inferred from those stores.

## Dropped

- R200Div, at 0x4112c0 in the binary above. The body is 32 bytes. The render shows only a return with v0 unknown and no callee or memory access that would support a role.
- FIREGL_OverlayPolyArc, at 0x433ac0. The render shows a drawable check, two calls to R200CPAccelInitFuncs and a depth test on the drawable's byte at offset 4. It does not show any arc computation, and the callee names conflict with the routine name. A role here would be a guess.
- GetMVParams, at 0x43f4c0. The body is 2816 bytes with about 25 compare-and-branch steps on the argument and more than 80 loads and stores through computed addresses. A role would need the tables it reads, and the render does not resolve them.
