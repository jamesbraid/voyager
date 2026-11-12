# Role readings, fglrx_drv.so batch 13

Role statements for routines in the fglrx X driver module that `docs/inventory/functions.tsv` does not yet show as understood, taken in address order. Every statement comes from the rendered facts: registers, calls, constants, branch targets and sizes. Each one is inferred. The renders show what a routine does with its arguments and return value, not what its callers expect, and the names are used only as a hint.

- `R200CPSubsequentSolidTwoPointLine` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40c100
  **Inferred.** A 232-byte routine that builds a four-word command packet for a solid two-point line. It loads the driver private pointer at a0+0xf8 and the packet state at +0x1dec, allocates the packet with `__fglDRMPM4Alloc` (called at 0x40c144), stores four words into it between 0x40c160 and 0x40c198, and submits it with `__fglDRMPM4Submit` (called at 0x40c1a0). The `LastLinePel` call at 0x40c1d8 takes four stack slots. Bit 0 of a5 decides whether the path at 0x40c1c0 runs. The packet layout is not decoded.

- `R200_DGAGetViewport` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40ee80
  **Inferred.** A 12-byte accessor. It loads the driver private pointer at a0+0xf8, then returns the 32-bit word at +0x195c of that block. The name suggests a DGA viewport value, but the body does nothing else.

- `R200GetBIOSParameters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x413f40
  **Inferred.** A 1944-byte routine that fills the driver private block from option settings and a BIOS table. It tests two signature bytes in the table at [a0+248]+56, 0x55 at offset 0 (bne at 0x413f6c) and 0xaa at offset 1 (beq at 0x413f7c), then reads table fields up to offset 0x49. It reads option values through `xf86IsOptionSet` and `xf86GetOptValULong` on the `R200Options` table (option ids 0x13 and 0x19, calls at 0x413fe0 and 0x414248) and reports them with `xf86DrvMsg`. Near the end it calls `RADEONGetTVInfo` (0x414608, 0x412680) and `R200QueryConnectedDisplays` (0x414628, 0x413140), on paths gated by the byte at +90. The return values are 0 and 1.

- `R200PreInitDRI` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x417480
  **Inferred.** A 1912-byte pre-initialization routine for the DRI path. It takes the entity private record through `xf86GetEntityPrivate` (called at 0x4174c0) and copies values between that record and the driver private block, reading the global `gR200EntityIndex` to select the entity. It reads about a dozen options from `R200Options` (ids 0x21, 0x22, 0x29, 0x1, 0xe, 0x7, 0x8, 0x9, 0x5, 0x6, 0xa, 0x1d and 0xd) and reports each with `xf86DrvMsg`. Near the end it calls `xf86LoadSubModule` with the module name at 0x45e348 (called at 0x417ba0), and the branch at 0x417ba8 depends on the result.

- `R200SavePLLRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41d540
  **Inferred.** A 132-byte routine that saves four PLL registers. It calls `R200INPLL` four times with indices 0x3, 0x7, 0x9 and 0x8 (calls at 0x41d564, 0x41d578, 0x41d58c and 0x41d5a0) and stores each result in the record at a1 at offsets 0x34c, 0x350, 0x354 and 0x378. The return value is the result of the last `R200INPLL` call.

- `R200Init` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x421600
  **Inferred.** A 2600-byte mode-setting routine that programs the display blocks for the configured layout. It calls `R200CompositorModeFlags` (0x42164c) and tests bits of its result. It picks among register-initialization routines by the value at +76 (compared with 4 and 5) and at +160 (compared with 0x2c, 0x2d and 0x34). The routines it can call are `R200InitCrtc2Registers` (0x41ea80), `R200InitCrtcRegisters` (0x41e280), `R200InitPLL2Registers` (0x420ac0), `R200InitPLL2RegistersDVO` (0x420c80), `R200InitTVRegisters` (0x41f880), `R200InitCommonRegisters` (0x41e200), `R200InitPLLRegisters` (0x420900) and `R200EnableDisplay` (0x41dec0). It logs a status line through `xf86snprintf` and `xf86DrvMsg`. The return is 1 at 0x421850 and 0 on the other exits.

- `R200AllocateDRMBuffers` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x427d80
  **Inferred.** A 4748-byte routine that sets up the DRM-side buffers. It takes the entity private record through `xf86GetEntityPrivate` (0x427db0) and calls `firegl_AllocBuffer` three times (0x427dd4, 0x427e00, 0x427ed8), with a fixed size of 0xe78 and sizes taken from fields of that record. It maps buffers with `drmMap` (0x427ef8, 0x4281c8), unmaps them with `drmUnmap` on the failure paths, and adds a 0x400000-byte map with `drmAddMap` (0x4281ac, map type 0x2). It calls `FGLInitCP` (0x428174) once the map succeeds. Most of the body compares a field at +232 of the entity record against constants before choosing a path. The return is 0 on most exits and 1 at 0x428824.

- `PM4LoadMicroCode` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42bcc0
  **Inferred.** A 352-byte routine that picks a PM4 microcode table from the chip id at a0+160 and copies words into a buffer at [[a0+7660]+4]. Chip id 0x31 selects the `aPM4_Microcode_R6x` table (branch at 0x42bd08). Chip ids 0x2c and 0x2d select the `aPM4_Microcode_R300` table (branches at 0x42bd10 and 0x42bd18). Ids 0x8 and 0x2f branch to 0x42bd9c, which the render does not decode further. The return values are the table base plus 2032, from the R300 path at 0x42bd94 and 0x42be18 and the R6x path at 0x42be10.

- `ProcFGLSetDisplaySettings` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42edc0
  **Inferred.** A 284-byte request handler that writes display settings to the XF86Config file. It compares a field reached through a0+8 with the value at `screenInfo`+0x30 (branch at 0x42ede0). It formats the file name with `xf86sprintf`, finds the config file name with `getXF86ConfigFileName`, and calls `UpdateFile`. A negative result from `UpdateFile` (branch at 0x42ee4c) leads to an error logged through `ErrorF`. The routine also replies to the client through `WriteToClient` (call at 0x42ee70, length 0x20). It returns the value at a0+40 (returns at 0x42ee84 and 0x42eeb0).

- `FIREGL_ClipNotify` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x432bc0
  **Inferred.** A 348-byte clip-change notification for the overlay. It reads the screen index at a0+0x10 and looks up that screen's private block, then calls `InOverlay` (0x4317c0). When that returns non-zero and the field at a0+24 is set, it walks that list and calls two indirect callees with the routine's own arguments (calls at 0x432c5c and 0x432cd8). The callees are not identified in the render. The return value is the word at [a0+16]+208.

- `FIREGL_OverlayPolyText8` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434000
  **Inferred.** A 324-byte overlay drawing entry. It reads and writes words at a1+0x44 and a1+0x48, looks up the drawable's screen private block, and calls `VALIDATE_DRAWABLE` (0x432d40) and one indirect callee (0x4340dc). It then selects a path from the byte at a1+4, comparing it with 8 and 24 (branches at 0x4340a0 and 0x4340a8), which is probably the drawable depth. Both paths call `R200CPAccelInitFuncs`, with its flag argument set to 0 or 1 (calls at 0x43411c and 0x434134). The name is a text-drawing name, but no text drawing appears in this body.

- `setup_overlay_visuals` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4352c0
  **Inferred.** A 492-byte routine that builds the overlay visual list and publishes it as a root window property. It allocates a record with `Xalloc` (call at 0x435374). It creates an atom with `MakeAtom` (call at 0x43543c) from a 22-byte name, and the two immediates at the `Xalloc` call site (0x435374) decode by hand to the text `SERVER_OVERLAY_VISUALS`. It registers the property with `xf86RegisterRootWindowProperty` (call at 0x435468, size argument 0x20). The return is either the `Xalloc` result or the result of `xf86RegisterRootWindowProperty`.

- `CMapUnwrapScreen` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4373c0
  **Inferred.** A 168-byte unwrap routine for the colormap layer. It reads the per-screen wrapper record from the table at a0+360, indexed by a per-screen id, and copies saved function pointers back into the screen record at a0+0x80, 0x134, 0x138, 0x13c and 0x148. It also writes three fields of the `xf86Screens` entry at +0x410, +0x408 and +0x424. It then frees saved blocks with `Xfree` (calls at 0x43743c and 0x437448) and tail-jumps through the saved `Xfree` pointer (`jr` at 0x437460).

- `FIREGL_OverlayMarkUnrealizedWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x439940
  **Inferred.** A 416-byte routine that clears the overlay clip state of an unrealized window. It frees the window's clip storage with `Xfree` at a0+52 (call at 0x439988) and at a0+64 (call at 0x4399e4), passing `miEmptyData` as the second pointer argument on the second free. Through the overlay record at [a0+128] plus a per-screen index, it resets the fields at +0x20 and +0x2c and several 16-bit fields between +0x1c and +0x2a. It frees the overlay's lists with `Xfree` (calls at 0x439a54 and 0x439a8c). The return is the result of `Xfree` on some paths and an unset value on others.

- `CollectUnderlayChildrenRegions` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43d3c0
  **Inferred.** A 320-byte routine that gathers the regions of the underlay children of a window. It reads the child list reached through a0+0x24 and appends a child's region with `miRegionAppend` (0x43d444), then validates the result with `miRegionValidate` (0x43d4b8). The loop tests a flag at [a0+36] (branch at 0x43d3e8) and compares a child pointer against a0 (branch at 0x43d45c). It returns 0 or 1.

- `Choose_Mode` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x443f80
  **Inferred.** A 548-byte routine that selects a static mode record. It branches on the argument a1, which takes the values 0 to 3 (branches at 0x443f80 to 0x443f9c), and then on the word at [a0+248]+184, which takes the values 0 to 5 (branches from 0x443fac to 0x44419c). Each path stores into a group of globals between 0x469180 and 0x4691a8. One return path yields 0x469180, and the other returns are not decoded. The meaning of the individual fields is not decoded.

- `ATIHPVExtensionInit` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x446740
  **Inferred.** A 116-byte extension registration. It calls `AddExtension` (0x446780) with the extension name at 0x467c98, an event count of 3 and an error count of 0, the main, swap and close procedures at 0x446680, 0x446600 and 0x446640, and the minor-opcode table `StandardMinorOpcode`. It calls `FatalError` (0x4467a4) if the registration returns 0 (branch at 0x446788).

- `R200LdFmtByName` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x448500
  **Inferred.** A 212-byte routine that loads a timing table for a screen. It finds the board number with `R200GetBoardNumberFromScreen` (0x44854c), calls `ReadWriteTimingTable` (0x447e00) with the read-or-write flag set to 1 (call at 0x448580), and calls `R200LoadTimingTable` (0x448100) at 0x4485b8 only when a3 is non-zero and a2 is zero (branches at 0x44851c and 0x448524). The name suggests a lookup by format name, but the body does not compare any name.

- `sgiGetHyperpipeTopology` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44c880
  **Inferred.** An 840-byte routine that queries the hyperpipe topology from the DRM device. It checks the DRM file descriptor with `checkdrmFD` (0x44c840), opens a device node by a fixed path at 0x4621e8 with `xf86open`, and issues ioctls 0x66670014, 0x65, and 0x66 through `xf86ioctl` (calls at 0x44c8e8, 0x44c91c and 0x44c9f4). It copies a 0x50-byte name with `xf86strncpy`, closes the device with `xf86close`, and logs each failure through `ErrorF` with `xf86strerror`. The early failure path returns -1 (0x44c8c4), and the final path returns 0 or -1 (0x44c8d0).

- `R200_lockClearToBackground` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e100
  **Inferred.** A 212-byte lock wrapper around a screen operation. It takes the DRI lock with `DRILock` (0x44e170), stores a word at [a0+16]+0xcc after taking the lock and reads it back before the call, calls the wrapped operation through the per-screen table indexed by `R200_lockScreenIndex` at +0x20 (call at 0x44e190), and releases the lock with `DRIUnlock` (0x44e1ac). The return value is the result of `DRIUnlock`.

- `R200_lockEnterVT` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44ed00
  **Inferred.** A 160-byte lock wrapper for the VT-enter hook. It takes the DRI lock on the screen's DRI record (`DRILock` at 0x44ed5c, with a2 set to 0x203e8), calls the wrapped hook from the per-screen table at +0x60 (call at 0x44ed70), and releases the lock with `DRIUnlock` (0x44ed80).

- `R200_lockPolylines` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44fbc0
  **Inferred.** A 224-byte lock wrapper for the polyline graphics-context operation. It takes the DRI lock (`DRILock` at 0x44fc2c), saves the GC operation pointers at a1+0x44 and a1+0x48 into the per-GC table indexed by `R200_lockGCIndex`, calls the wrapped operation (0x44fc4c), restores the saved pointers, and releases the lock with `DRIUnlock` (0x44fc60). The return value on the rendered path is the address of `R200_lockGCOps`.

- `R200_lockSpriteUnrealizeCursor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x450ac0
  **Inferred.** A 204-byte lock wrapper for cursor unrealization. It takes the DRI lock (`DRILock` at 0x450b28), reads the hook at +0x6c of the screen's private record (indexed by `R200_lockScreenIndex`), stores a pointer into the slot for `miPointerScreenIndex` (store at 0x450b2c), calls the wrapped operation (0x450b40), writes the +0x6c slot back (store at 0x450b70), and releases the lock with `DRIUnlock` (0x450b54).
