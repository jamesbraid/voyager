# Role readings, fglrx_drv.so batch 13

Role statements for routines in the fglrx X driver module that `docs/inventory/functions.tsv` does not yet show as understood, taken in address order. Every statement comes from the rendered facts: registers, calls, constants, branch targets and sizes. Each one is inferred. The renders show what a routine does with its arguments and return value, not what its callers expect, and the names are used only as a hint.

- `R200CPSubsequentSolidTwoPointLine` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40c100
  **Inferred.** A 232-byte routine that builds a four-word command packet. It loads the driver private pointer at a0+0xf8 and passes the word at +0x1dec of it as the first argument of `__fglDRMPM4Alloc` (called at 0x40c144, second argument 4), stores four words into the returned packet between 0x40c160 and 0x40c198, and submits it with `__fglDRMPM4Submit` (called at 0x40c1a0), returning that call's result. When bit 0 of a5 is clear, the path at 0x40c1c0 calls `LastLinePel` (0x40c1d8) with four stack-slot addresses as a0 to a3. Role (from name): a solid two-point line. The packet layout is not decoded.
  Reviewed: 2026-11-12 (sonnet)

- `R200_DGAGetViewport` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40ee80
  **Inferred.** A 12-byte accessor. It loads the driver private pointer at a0+0xf8, then returns the 32-bit word at +0x195c of that block. The name suggests a DGA viewport value, but the body does nothing else.
  Reviewed: 2026-11-12 (sonnet)

- `R200GetBIOSParameters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x413f40
  **Inferred.** A 1944-byte routine that fills the driver private block from option settings and a BIOS table. It branches to 0x414208 when the table pointer at [a0+248]+56 is zero, then tests two signature bytes in the table, 0x55 at offset 0 (bne at 0x413f6c) and 0xaa at offset 1 (beq at 0x413f7c), and reads more table bytes, among them offsets 0x2, 0x3, 0x48 and 0x49. It calls `xf86IsOptionSet` and `xf86GetOptValULong` on the `R200Options` table with option id 0x13 (calls at 0x413fe0 and 0x413ff8) and with id 0x19 (calls at 0x414248 and 0x414260), and calls `xf86DrvMsg` on several paths. It calls `RADEONGetTVInfo` (0x414608, 0x412680) and `R200QueryConnectedDisplays` (0x414628, 0x413140). The branch at 0x413fc0 tests the byte at [a0+248]+90 and goes to 0x414620, just before the `R200QueryConnectedDisplays` call, when it is zero. The return values are 0 and 1, with 1 at 0x414200. Role (from name): reading BIOS parameters.
  Reviewed: 2026-11-12 (sonnet)

- `R200PreInitDRI` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x417480
  **Inferred.** A 1912-byte routine. It takes the entity private record through `xf86GetEntityPrivate` (called at 0x4174c0) and copies values between that record and the driver private block, reading the global `gR200EntityIndex` to select the entity. It queries 13 options on `R200Options` (ids 0x21, 0x22, 0x29, 0x1, 0xe, 0x7, 0x8, 0x9, 0x5, 0x6, 0xa, 0x1d and 0xd) and calls `xf86DrvMsg` on many of the paths that handle them. It calls `xf86LoadSubModule` with the module name at 0x45e348 (called at 0x417ba0), and the branch at 0x417ba8 depends on the result. Role (from name): pre-initialization for the DRI path.
  Reviewed: 2026-11-12 (sonnet)

- `R200SavePLLRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41d540
  **Inferred.** A 132-byte routine that saves four PLL registers. It calls `R200INPLL` four times with indices 0x3, 0x7, 0x9 and 0x8 (calls at 0x41d564, 0x41d578, 0x41d58c and 0x41d5a0) and stores each result in the record at a1 at offsets 0x34c, 0x350, 0x354 and 0x378. The return value is the result of the last `R200INPLL` call.
  Reviewed: 2026-11-12 (sonnet)

- `R200Init` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x421600
  **Inferred.** A 2600-byte routine that calls a series of register-initialization routines. It calls `R200CompositorModeFlags` (0x42164c) and tests bits 0x20, 0x10, 0x1, 0x2, 0x4 and 0x8 of its result. It branches on the value at [a0+248]+76 (compared with 3, 4 and 5) and at [a0+248]+160 (compared with 0x2c, 0x2d and 0x34). Its callees include `R200InitCrtc2Registers` (0x41ea80), `R200InitCrtcRegisters` (0x41e280), `R200InitPLL2Registers` (0x420ac0), `R200InitPLL2RegistersDVO` (0x420c80), `R200InitTVRegisters` (0x41f880), `R200InitCommonRegisters` (0x41e200), `R200InitPLLRegisters` (0x420900) and `R200EnableDisplay` (0x41dec0), and also `GetBestRFP` (0x4211c0), `StartFrameLock` (0x420f00) and `xf86GetEntityPrivate`. It logs through `xf86snprintf` and `xf86DrvMsg`. The return is 1 at 0x421850 and 0 at 0x421940 and 0x421f8c. Role (from name): initialization of the display state.
  Reviewed: 2026-11-12 (sonnet)

- `R200AllocateDRMBuffers` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x427d80
  **Inferred.** A 4748-byte routine. It takes the entity private record through `xf86GetEntityPrivate` (0x427db0) and calls `firegl_AllocBuffer` three times (0x427dd4, 0x427e00, 0x427ed8): the first with size 0xe78, the second with the record's word at +48 shifted left by 20, the third with a size not decoded. It maps with `drmMap` (0x427ef8, 0x4281c8) and calls `drmUnmap` at 0x427f74, 0x427fbc, 0x428188, 0x4287ec and 0x4288ac, so unmapping is not limited to failure paths. It calls `drmAddMap` (0x4281ac) with size 0x400000 and type 0x2, and `FGLInitCP` (0x428174), whose zero result branches to 0x428888. Most of the body compares the word at +232 of the entity record against constants before choosing a path. The return is 0 on most exits and 1 at 0x428824. Role (from name): setting up DRM buffers.
  Reviewed: 2026-11-12 (sonnet)

- `PM4LoadMicroCode` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42bcc0
  **Inferred.** A 352-byte routine that picks a PM4 microcode table from the chip id at a0+160 and copies words from it to two fixed offsets, +0x7dc and +0x7e0, of the block at [[a0+7660]+4], alternating between the two. Chip id 0x31 selects the `aPM4_Microcode_R6x` table (branch at 0x42bd08). Chip ids 0x2c, 0x2d and 0x34 take the `aPM4_Microcode_R300` copy path (branches at 0x42bd10, 0x42bd18 and 0x42bd20). Ids 0x8 and 0x2f branch to 0x42bd9c, which the render does not decode further, and any other id returns at 0x42be18 without copying. The return values are the table base plus 2032: R300 at 0x42bd94 and 0x42be18, R6x at 0x42be10. Role (from name): loading PM4 microcode.
  Reviewed: 2026-11-12 (sonnet)

- `ProcFGLSetDisplaySettings` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42edc0
  **Inferred.** A 284-byte request handler that appears, from its callees, to write display settings to a config file. It compares the word at [a0+8]+4 with the value at `screenInfo`+0x30 (unsigned, branch at 0x42ede0). It builds two strings with `xf86sprintf` (calls at 0x42ee0c and 0x42ee24), finds the config file name with `getXF86ConfigFileName`, and calls `UpdateFile` (0x42ee44) with the file name as a0 and the two strings as a1 and a2. A negative result from `UpdateFile` (branch at 0x42ee4c) leads to an error logged through `ErrorF`. Otherwise it calls `WriteToClient` (call at 0x42ee70, a1 = 0x20). It returns the value at a0+40 (returns at 0x42ee84 and 0x42eeb0).
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_ClipNotify` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x432bc0
  **Inferred.** A 348-byte routine. It loads the pointer at a0+0x10, reads the word at its +0, and uses that to select a per-screen private block, whose +0x2054 word it loads. It calls `InOverlay` (0x4317c0) with its own four arguments, and a store to +0xd0 of the a0+0x10 structure sits in that call's delay slot. When `InOverlay` returns non-zero and the word at a0+24 is non-zero, it walks a list and calls an indirect callee loaded from a +0xd0 field (call at 0x432c5c) with a1 and a2 from entry and an a0 that is not one of its own arguments. When `InOverlay` returns zero, or the word at a0+24 is zero, it makes one indirect call with its own a0, a1 and a2 (call at 0x432cd8). The callees are not identified in the render. The return value is the word at [a0+16]+208. Role (from name): overlay clip-change notification.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayPolyText8` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434000
  **Inferred.** A 324-byte routine. It reads and writes words at +0x44 and +0x48 and looks up a screen private block through the word at [a1] and `xf86Screens`. It compares the byte at a1+4 with 8 and 24 (branches at 0x4340a0 and 0x4340a8). When the byte is neither, it calls `VALIDATE_DRAWABLE` (0x432d40) and one indirect callee (0x4340dc), then stores to +0x44 and +0x48. When the byte is 8 it calls `R200CPAccelInitFuncs` with a2 = 1 (call at 0x434134), and when it is 24 with a2 = 0 (call at 0x43411c). Role (from name): overlay text drawing, but no text drawing appears in this body.
  Reviewed: 2026-11-12 (sonnet)

- `setup_overlay_visuals` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4352c0
  **Inferred.** A 492-byte routine that appears to build an overlay visual list and publish it as a root window property. It allocates a record with `Xalloc` (call at 0x435374). The two immediates in a4 and a3 at that call decode by hand to `SERVER_O` and `VERLAY_V`, the first 16 bytes of `SERVER_OVERLAY_V`. The 22-byte length passed to `MakeAtom` (call at 0x43543c, a1 = 0x16) fits `SERVER_OVERLAY_VISUALS`, but the last six bytes of the name are not in the facts. It registers the property with `xf86RegisterRootWindowProperty` (call at 0x435468, a3 = 0x20). The return is the `xf86RegisterRootWindowProperty` result on the registration path. On the early exits it is the `Xalloc` result, the word at [a0+20] or an undecoded value.
  Reviewed: 2026-11-12 (sonnet)

- `CMapUnwrapScreen` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4373c0
  **Inferred.** A 168-byte routine that appears to undo a colormap-layer wrap. It reads a per-screen record from the table at a0+360, indexed by the global word at 0x467ed0, and copies words from that record back into the screen record at a0+0x80, 0x134, 0x138, 0x13c and 0x148. It also writes three fields of the `xf86Screens` entry at +0x410, +0x408 and +0x424. It then calls `Xfree` on record fields (calls at 0x43743c and 0x437448) and ends with a tail call to `Xfree` (`jr` at 0x437460) on the record itself. Role (from name): colormap unwrap.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayMarkUnrealizedWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x439940
  **Inferred.** A 416-byte routine that appears to clear overlay clip state. It calls `Xfree` on the pointer at a0+52 (call at 0x439988) when that word and the word it points to are non-zero, and on the pointer at a0+64 (call at 0x4399e4) under the same test, with `miEmptyData` as the third argument (a2) of the second call. Through the record at [a0+128] indexed by the global word at 0x467ec8 it tests fields at +0x34, +0x2c and +0x20, and calls `Xfree` on the lists at +0x2c and +0x20 (calls at 0x439a54 and 0x439a8c, each with `miEmptyData` as a2) when guarding fields are non-zero. It stores to fields at +0x20 and +0x2c and to 16-bit fields at +0x1c, +0x1e, +0x28 and +0x2a. The return is the result of `Xfree` on some paths and an undecoded value on others. Role (from name): marking an unrealized window.
  Reviewed: 2026-11-12 (sonnet)

- `CollectUnderlayChildrenRegions` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43d3c0
  **Inferred.** A 320-byte routine that appears to gather the regions of underlay children of a window. It tests the word at a0+0x24 (branch at 0x43d3e8) and branches to 0x43d4e4 when it is zero. It calls `miRegionAppend` (0x43d444) and calls `miRegionValidate` (0x43d4b8) only when a flag in s3 (0 or 1) is non-zero (branch at 0x43d4ac). A loop compares a child pointer against a0 (branches at 0x43d45c and 0x43d46c). It returns 0 or 1. Role (from name): underlay-children region collection.
  Reviewed: 2026-11-12 (sonnet)

- `Choose_Mode` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x443f80
  **Inferred.** A 548-byte routine that appears to select a static mode record. It branches on the argument a1 against 0, 1, 2 and 3 (branches at 0x443f80 to 0x443f9c), and then on the word at [a0+248]+184 against 0 through 5 (branches from 0x443fac onward). Many paths store words through registers whose base address is not decoded. One return path yields 0x469180, another yields 0x470000 or an undecoded value, and the other returns are not decoded. The meaning of the individual fields is not decoded.
  Reviewed: 2026-11-12 (sonnet)

- `ATIHPVExtensionInit` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x446740
  **Inferred.** A 116-byte extension registration. It calls `AddExtension` (0x446780) with the extension name at 0x467c98, an event count of 3 and an error count of 0, the main, swap and close procedures at 0x446680, 0x446600 and 0x446640, and the minor-opcode table `StandardMinorOpcode`. It calls `FatalError` (0x4467a4) if the registration returns 0 (branch at 0x446788).
  Reviewed: 2026-11-12 (sonnet)

- `R200LdFmtByName` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x448500
  **Inferred.** A 212-byte routine that loads a timing table for a screen. It finds the board number with `R200GetBoardNumberFromScreen` (0x44854c), calls `ReadWriteTimingTable` (0x447e00) with the read-or-write flag set to 1 (call at 0x448580), and calls `R200LoadTimingTable` (0x448100) at 0x4485b8 only when a3 is non-zero and a2 is zero (branches at 0x44851c and 0x448524). The name suggests a lookup by format name, but the body does not compare any name.
  Reviewed: 2026-11-12 (sonnet)

- `sgiGetHyperpipeTopology` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44c880
  **Inferred.** An 840-byte routine that appears, from its name and callees, to query the hyperpipe topology from the DRM device. It checks the DRM file descriptor with `checkdrmFD` (0x44c840), opens a device node by a fixed path at 0x4621e8 with `xf86open`, and issues ioctls 0x66670014, 0x65, and 0x66 through `xf86ioctl` (calls at 0x44c8e8, 0x44c91c and 0x44c9f4). It copies a 0x50-byte name with `xf86strncpy`, closes the device with `xf86close`, and calls `ErrorF` on its failure paths, four of those calls with `xf86strerror` results. The early failure path returns -1 (0x44c8c4), and the final path returns 0 or -1 (0x44c8d0). Role (from name): hyperpipe topology query.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockClearToBackground` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e100
  **Inferred.** A 212-byte lock wrapper around a screen operation. It calls `DRILock` (0x44e170) on the word at [a0+16]. The store of a word to [a0+16]+0xcc at 0x44e174 sits in that call's delay slot, so it happens before `DRILock` runs; the word comes from a per-screen table at +0x168 indexed by `R200_lockScreenIndex`, field +0x20. It reads +0xcc back and calls it (call at 0x44e190) with its own four arguments, calls `DRIUnlock` (0x44e1ac), stores a word to +0xcc again (0x44e1c4), and returns the `DRIUnlock` result. Role (from name): clearing to background.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockEnterVT` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44ed00
  **Inferred.** A 160-byte lock wrapper. It calls `DRILock` (0x44ed5c) on the word at `screenInfo`+52+4*a0, with a2 = 0x203e8, calls a hook loaded from +0x60 of a per-screen table (call at 0x44ed70) with a0 and a1 from entry, and calls `DRIUnlock` (0x44ed80) on the same word. It returns the hook's result. Role (from name): wrapper for the VT-enter hook.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockPolylines` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44fbc0
  **Inferred.** A 224-byte lock wrapper. Before calling `DRILock` (0x44fc2c, a0 = [a1], a1 = 0) it loads two words from an entry of a per-GC table, reached through the word at a1+0x4c and indexed by `R200_lockGCIndex`, and stores them to +0x48 and +0x44 of a1. It then calls through the word at +0x18 of the structure pointed to by the word at a1+0x48 (call at 0x44fc4c) with its own four arguments, calls `DRIUnlock` (0x44fc60), copies a1+0x48 and a1+0x44 back into that table entry, and stores two new values to a1+0x48 and a1+0x44. The return value is the address of `R200_lockGCOps`. Role (from name): wrapper for the polyline operation.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockSpriteUnrealizeCursor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x450ac0
  **Inferred.** A 204-byte lock wrapper. It reaches two records through the table at a0+0x168, one indexed by `R200_lockScreenIndex` and one by `miPointerScreenIndex`, and loads the word at +0x6c of the first. It calls `DRILock` (0x450b28) and stores that word at +0 of the second record (store at 0x450b2c, in the call's delay slot, so before `DRILock` runs), calls through the word at +4 of the pointer now at +0 of the second record (call at 0x450b40, a0 and a1 from entry), calls `DRIUnlock` (0x450b54), and only then writes the second record's +0 word back to +0x6c of the first (store at 0x450b70) and stores another value to +0 of the second (0x450b78). The return value is an indirect callee's result. Role (from name): cursor unrealization.
  Reviewed: 2026-11-12 (sonnet)
