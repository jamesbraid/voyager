# Routine readings, fglrx_drv.so, sampled set 0

Role statements for every 15th routine of the X driver `usr/X11R6/lib/modules/drivers/fglrx_drv.so` that the function inventory does not yet show as understood, counted from the lowest address. Each statement uses the rendered facts: the call sites and callees, the argument registers at entry, the offsets read and written through the driver record, the constants compared against, and the return values. Entries are inferred, because a render shows what a routine does with its inputs and outputs but not the meaning a caller intends. Where a callee is an indirect call the render cannot name, the entry says so and does not guess its target.

- `R200CPSetupForSolidLineOverlay` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40c340
  **Inferred.** Builds one eight-word packet for the solid-line overlay setup. It asks `__fglDRMPM4Alloc` (call at 0x40c378) for a block with a1 = 0x8, using the pointer at `[a0+248]+7660`, and stores eight words into the block at offsets 0x0, 0x4, 0x8, 0xc, 0x10, 0x14, 0x18 and 0x1c. The render shows a load at +0x4 (0x40c398) and a load at offset 0x1a4c of the driver record `[a0+248]` (0x40c3b4) feeding stores, but does not say which entry argument or constant feeds each of the other words; the disassembly, not the render, shows that the load at +0x4 comes from a table indexed by a2 << 3, and that a1 is stored at +0x14. The packet is then passed to `__fglDRMPM4Submit` (call at 0x40c3e0) as a1 = block + 32 with a2 = 0x5b3, and the routine returns that call's result in v0 at 0x40c3f4.
  Reviewed: 2026-11-12 (sonnet)

- `R200_DGAFillRect` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40ef40
  **Inferred.** A pass-through for a DGA rectangle fill. It reads the driver record at `[a0+248]`, loads a function table pointer from `[a0+248]+6388`, and makes two indirect calls whose targets the render does not name. The first, at 0x40ef90, passes a0 unchanged, entry argument a5 in a1, 0x3 in a2 and -0x1 in a3. The second, at 0x40efb0, forwards the entry arguments a0 to a3 unchanged. It returns the table pointer loaded from `[a0+248]+6388` at 0x40efd8, and the instruction in the return's delay slot (0x40efdc) stores a word at offset 0x245c.
  Reviewed: 2026-11-12 (sonnet)

- `R200PreInitVisual` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x414880
  **Inferred.** Pre-init step that chooses the screen depth, bits per pixel and default visual. It calls `xf86SetDepthBpp` (0x4148ac) with arguments 8, 8, 8 and 2, and branches to the failure return at 0x4148f8 when that call yields 0 (0x4148b4). It compares the depth at `[a0+80]` with 0x18 and 0x20, calls `xf86GetBppFromDepth` (0x41491c), and calls `xf86SetDefaultVisual` (0x4149a8), branching to the failure return when that call yields 0 (0x4149b4). `xf86DrvMsg` reports the choices at 0x4148e4, 0x414998, 0x4149f8 and 0x414a4c. The routine returns 0 at 0x4148f8 and 0x414a0c on the failure paths, and 1 at 0x414a1c on success.
  Reviewed: 2026-11-12 (sonnet)

- `R200PreInitQBS` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x417ec0
  **Inferred.** Reads three driver options during pre-init and stores results in the driver record. Option ids 0x1e, 0x1f and 0x20 are each tested with `xf86IsOptionSet` (calls at 0x417ef0, 0x417f88 and 0x417fec) against the `R200Options` table. When id 0x1e is set it is read as a boolean with `xf86GetOptValBool` (0x417f08) into `[a0+248]+9208`, and when id 0x20 is set the same routine (call at 0x418004) reads it into `+9204`. When id 0x1f is set it is read as an unsigned long with `xf86GetOptValULong` (0x417fa0) into `+9212`, and the routine compares that value with 5 as unsigned at 0x417fb4 to choose a path. `xf86DrvMsg` is called at 0x417f4c, 0x417f6c, 0x417fdc, 0x418040 and 0x418070; the render does not show which values those messages report. The render does not show the option names. The only return it shows is 1 at 0x417f5c.
  Reviewed: 2026-11-12 (sonnet)

- `R200Restore2ndTMDSRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41dc40
  **Inferred.** Copies four words. The render shows loads at offsets 0x90, 0x94, 0x80 and 0xc4 and stores at offsets 0xd64, 0xd6c, 0x7c and 0x288, but does not show the base registers of those loads and stores. A byte at `[a0+248]+0x5a` is tested at 0x41dc48: when it is non-zero the routine returns at 0x41dc50 without the copy, and when it is zero the four loads and stores run and it returns at 0x41dc74. Role (from name): restoring registers of a second TMDS transmitter; the facts show only the conditional copy.
  Reviewed: 2026-11-12 (sonnet)

- `R200DisplayPowerManagementSet` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4234c0
  **Inferred.** Role (from name): applies a display power state; the facts show only the branching and stores below. The argument a1 is compared with 0x0, 0x1, 0x2 and 0x3 by the branches from 0x4234dc to 0x4234f8, and the branches that follow compare the fields at `[[a0+248]+76]` and `[[a0+248]+96]` with 0x2 to 0x5. The routine loads and stores words in a block reached through `[[a0+248]+48]` (offsets such as 0x3f8, 0x88c, 0x800, 0x288 and 0x54), and the byte flags at `[a0+248]` offsets 0x59, 0x5a and 0x5d are tested to choose paths. It calls `R200INPLL` twice (0x423974 and 0x42399c) with register index 0x2d, and calls `xf86usleep` (0x423ac0); the render leaves a0 unknown there and shows a value loaded from `[[a0+248]+388]` in a1. The return value is `[[a0+248]+48]` on most paths, with `R200INPLL`'s result or an unshown value on one.
  Reviewed: 2026-11-12 (sonnet)

- `R200AGPInit` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x429180
  **Inferred.** Calls `xf86GetEntityPrivate` (call at 0x4291a0) for the entity whose index is in `gR200EntityIndex`, then calls `xf86EnablePciBusMaster` (0x4291b8) on the handle at `[a0+248]+4` with a1 = 1. After that call it stores four words at offsets 0xe4, 0xe0, 0xdc and 0xd8 (0x4291cc to 0x4291e0); the render does not show the stored values or the base register of those stores, though the entity record is the likely target. It returns 1 at 0x4291e4. Role (from name): AGP initialization.
  Reviewed: 2026-11-12 (sonnet)

- `ProcFGLVidModeSetGammaRamp` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42f100
  **Inferred.** Role (from name): the request handler behind a gamma-ramp set. It reads the screen index from the request at `[a0+8]+4` and checks it against the screen count at `sym(screenInfo)+48` (branch at 0x42f138). An index at or above the count goes to an error path that calls `ErrorF` (0x42f250) and returns `[a0+40]`. Otherwise `DRILock` (0x42f184) is called unless the branch at 0x42f174 skips it, and a loop bounded by `[a0+8]+512` copies 16-bit values (`lhu` and `sh` at 0x42f19c to 0x42f1c8). It then calls an unnamed routine (0x42f1dc, entry 0x4304c0), sends 0x20 bytes to the client with `WriteToClient` (0x42f1fc), and calls `DRIUnlock` (0x42f214) unless the branch at 0x42f20c skips it. It returns `[a0+40]` at 0x42f22c. The render does not name the buffers.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayFillSpans` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x432e40
  **Inferred.** Fill-spans entry for the overlay plane, by its name. It loads a GC byte from `[a1+4]` and compares it with 0x8 (0x432ee0) and 0x18 (0x432ee8). A byte of 0x18 goes to a `R200CPAccelInitFuncs` call at 0x432f5c with a2 = 0, and a byte of 0x8 goes to a call at 0x432f74 with a2 = 1; these are alternative paths, not two calls in sequence. The local routine at 0x432d40 (`VALIDATE_DRAWABLE`, call at 0x432ef8) is then called with a0 and a1 swapped from the entry order. An unnamed indirect call at 0x432f1c receives the entry arguments. It returns `[a1+68]` at 0x432f48.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayImageText8` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434300
  **Inferred.** Image-text entry for the overlay plane, by its name, with the same shape as the span fill at 0x432e40. It loads a GC byte from `[a1+4]` and compares it with 0x8 (0x4343a0) and 0x18 (0x4343a8). A byte of 0x18 goes to a `R200CPAccelInitFuncs` call at 0x43441c with a2 = 0, and a byte of 0x8 goes to a call at 0x434434 with a2 = 1; these are alternative paths, not two calls in sequence. The routine at 0x432d40 is then called (call at 0x4343b8), with a0 and a1 swapped from the entry order, and an unnamed indirect call at 0x4343dc receives the entry arguments. It returns `[a1+68]` at 0x434408.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_CreateColormap` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x435680
  **Inferred.** Creates a colormap for an overlay screen, by its name. It loads `[a0+12]`, loads a word from it, indexes `xf86Screens` with that word to find the screen, and loads a word at offset 0x204c of that screen's driver record (0x4356c4). It makes an unnamed indirect call at 0x4356d0 with the entry arguments, and a store at +0x134 sits in that call's delay slot (0x4356d4). After the call it loads +0x134 (0x4356d8), stores it at 0x204c of the driver record (0x4356e4) and stores a word at +0x134 again (0x4356ec); the render does not show the stored values or the base of the +0x134 accesses. It then compares the 16-bit field at `[a0+4]` with 3 (0x435700), and tests bit 1 of the 16-bit field at `[a0+16]` (0x435714). It returns 0 at 0x435724 and otherwise returns the value in v0 after the call (return at 0x435788, shown as an unknown call result).
  Reviewed: 2026-11-12 (sonnet)

- `CMapChangeGamma` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4377c0
  **Inferred.** Applies a new gamma value to a screen's installed colormap. It finds the screen record through `xf86Screens` by the index in a0. The gamma value is a double that the routine compares with the constants 0.1 (0x3fb999999999999a) and 10.0 (0x4024000000000000) at 0x437830 to 0x43785c, and it branches to the early-return path at 0x43788c when the value is out of that range. Otherwise it calls `ComputeGamma` (0x4378d8) to build the ramp. It then reinstalls the colormap that `miInstalledMaps` holds for the screen, through `CMapReinstallMap` (0x4379c8 and 0x437a14). One return path yields 0x11.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayHandleExposures` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43a100
  **Inferred.** Role (from name): handles exposure for an overlay window; the facts show a nest of loops and tests over values the render does not name. It calls `InOverlay` (calls at 0x43a250 and 0x43a32c), `Xfree` at six call sites (0x43a1c0, 0x43a1f8, 0x43a208, 0x43a2d4, 0x43a2e4 and 0x43a398), `miUnion` (0x43a46c) and unnamed indirect calls; most of these are conditional on branches. After the `miUnion` call, on a path that passes two tests at 0x43a478 and 0x43a484, it calls `FIREGL_MakeTrans` (0x4354c0, call at 0x43a490). The driver record field at 0x207c is written at 0x43a2b4.
  Reviewed: 2026-11-12 (sonnet)

- `MarkUnderlayWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43d580
  **Inferred.** Gives the underlay window a 32-byte state block. It finds the window's slot through the table at `a0+128` indexed by the global at 0x467ec8. If the slot's pointer at offset 0x34 is empty (branch at 0x43d5a4), it allocates 0x20 bytes with `XNFalloc` (0x43d5c8) and stores the new block there. It then copies two 16-bit fields from `a0+8` and `a0+10` into the block at offsets 0x1c and 0x1e, and writes one word at 0x18. On the allocation path it returns the `XNFalloc` pointer at 0x43d600.
  Reviewed: 2026-11-12 (sonnet)

- `ProcATITVOGetData` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x445a00
  **Inferred.** Role (from name): a request handler for TV-out data; the facts show a request handler that replies to the client. It checks the screen index in the request at `[a0+8]+4` against the screen count (0x445a20) and returns `[a0+40]` at 0x445a2c when the index is not below it. Otherwise it takes the device's entity private through `xf86GetEntityPrivate` (call at 0x445a84, using `gR200EntityIndex`), compares two fields of that record, at offsets 260 and 284, with 4 and 5 (branches at 0x445a9c to 0x445ab4), and sends a 0x30-byte reply with `WriteToClient` (0x445b20). It returns `[a0+40]` at 0x445b34.
  Reviewed: 2026-11-12 (sonnet)

- `BuildVofTimingFiles` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4469c0
  **Inferred.** Creates a directory if needed and writes a file under it. It reads two environment variables with `xf86getenv` (calls at 0x4469d8 and 0x4469f0). When `xf86stat` (0x446a44) returns non-zero it creates a directory with `xf86mkdir` (0x446a58) using mode 0x1ed (octal 0755). It formats a path of up to 0x200 bytes into a buffer at sp-632 with `xf86snprintf` (0x446b58) and opens that path with `xf86fopen` (0x446b68). Separately, a buffer at sp-120 is started with `xf86strcpy` (0x446b80) from 0x467ca0, and up to four `strncat` fragments (strings at 0x467ca8, 0x467cb0, 0x467cb8 and 0x467cc0, 0x20 bytes each) are appended to it, chosen by bits 0x1, 0x2, 0x4 and 0x8 of t0 (branches at 0x446b90 to 0x446bf0). The render does not show how that buffer reaches the output. The file is written with `xf86fprintf` (0x446c8c, format at 0x461910) and closed with `xf86fclose` (0x446c98). Errors are reported with `ErrorF` and `xf86strerror`.
  Reviewed: 2026-11-12 (sonnet)

- `R200LstFmtInComb` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x448a00
  **Inferred.** Role (from name): loads a list of format combinations from a file. It finds the file with `vfmtFindCmpCombinationFile` (0x448a2c) and reads it with `vfmtReadCmp1Combination` (0x448a3c). When the read returns non-zero it reports with `ErrorF` (0x448a58). Otherwise it allocates a record with `xf86calloc` (0x448acc) and, if that succeeds, calls `xf86strncpy` once (0x448aec, up to 0xff bytes) before a run of stores into the record. A loop at 0x448bc0 to 0x448c20 repeats while a counter is below the count at `[record]+300` (signed); the loop body is loads and stores, not a call. It returns either the `xf86strncpy` result or 1 at 0x448c44. A failed allocation goes to 0x448c4c and another `ErrorF` call (0x448c54).
  Reviewed: 2026-11-12 (sonnet)

- `R200PipeNameToTopoIndex` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44ccc0
  **Inferred.** Maps a pipe name to an index in a topology table. It first calls `R200QueryHyperpipeNetwork` (0x44cc00) and returns -1 on the early exit at 0x44ccf8. It then scans the table at 0x46f280, comparing each name with `xf86strncmp` over 0x50 bytes (call at 0x44cd50). The word read from the table is stored through the output pointer a2 at 0x44cd90. It returns 0 or 1 at 0x44cd18.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockRestoreAreas` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e2c0
  **Inferred.** Wraps a restore-areas call in the DRI hardware lock. It finds the screen's entry through `[a0+16]+360` indexed by `R200_lockScreenIndex`, and loads a function pointer from offset 0x28 of that entry (0x44e31c). It writes the field at `[a0+16]+0xfc` before and after the call, takes `DRILock` (0x44e324), makes the indirect call at 0x44e340 with the entry arguments, and releases with `DRIUnlock` (0x44e354). It returns the `DRIUnlock` result.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockValidateGC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44ee80
  **Inferred.** Validates a GC under the DRI lock. Before taking the lock it stores two words loaded from the per-GC record at `[a0+76]` (indexed by `R200_lockGCIndex`) into offsets 0x48 and 0x44 of a0. It takes `DRILock` on `[a0]` (0x44eee0), makes an unnamed indirect call at 0x44eef8 with entry arguments a0 to a2 (a3 is not shown as passed), and releases with `DRIUnlock` (0x44ef08). After that it saves the words at 0x48 and 0x44 back into the record at offsets 0 and 4 and stores two other values at 0x48 and 0x44. It returns the address of the `R200_lockGCOps` table.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockPolyRectangle` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44fdc0
  **Inferred.** Wraps a PolyRectangle request under the DRI lock with the same shape as the validate wrapper at 0x44ee80. It swaps GC function-table words at offsets 0x44 and 0x48 of a1 with the saved copy in the record at `[a1+76]` indexed by `R200_lockGCIndex`, takes `DRILock` on `[a1]` (call at 0x44fe28), makes an unnamed indirect call at 0x44fe44 with the entry arguments, and releases with `DRIUnlock` (0x44fe58). It returns the address of `R200_lockGCOps`.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockSpriteMoveCursor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x450cc0
  **Inferred.** Wraps the sprite cursor move under the DRI lock. It finds the pointer screen's record through `[a0+360]` indexed by `miPointerScreenIndex`, and the entry through `R200_lockScreenIndex`. It writes the record's word at offset 0 before the call and again after it, takes `DRILock` (0x450d30), makes an unnamed indirect call at 0x450d48 with entry arguments a0 to a2 (the render leaves a3 unknown), and releases with `DRIUnlock` (0x450d5c). It returns the word at offset 0 of the pointer screen's record (0x450d88).
  Reviewed: 2026-11-12 (sonnet)
