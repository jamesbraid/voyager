# What the R300 user-space stream takes from the kernel: ioctls, shared memory, ring ownership

What a model of the card must provide so that the shipped user-space stack can feed it, as read in the IRIX 6.5.22
build of the Onyx4 patch (SG0005448): the direct-rendering GL module `fglrx_dri64.so` (14482024 bytes, ELF64, symbols
present) and the X module `fglrx_drv.so` (700156 bytes, N32). The packet and state side is in
[r300-stream-pm4-packets.md](r300-stream-pm4-packets.md) and [r300-stream-3d-state.md](r300-stream-3d-state.md); the kernel
side (routine-level readings of `fglrx.o`) is in [kernel-ioctl-irq-functions.md](../kernel/kernel-ioctl-irq-functions.md)
and [kernel-drm-functions.md](../kernel/kernel-drm-functions.md). Grades follow `AGENTS.md` section 5.

Method: the Ghidra decompiler over the named routines of `fglrx_dri64.so` (every `__R300*` and `__R200*` routine, the
`firegl_*`, `drm*`, `fglX11*` and texture-manager routines, and a few unnamed helpers by address), with an `objdump`
listing of the whole `.text` as the check for constants, stores and routine boundaries. Where a statement says
**established** the routine body was read in full in the decompiler listing and the instruction listing agreed.

## 1. The shape of the contract

- **The GL module does not call the kernel to submit work.** **Established** (`__glATISubmitBM`, `__fglDRMSubmit`,
  `__R300DRMSubmitPM4`, `firegl_PM4Alloc`, `firegl_PM4WaitForIdle`, all read in full). It fills a private command buffer in
  user memory, hands it to a submit routine selected at start-up by chip class (`fglX11InitQSConnection` stores
  `__R300DRMSubmitPM4` for class 3 and `__R200DRMSubmitPM4` for class 2), and that routine **writes packets into the
  command-processor ring itself and writes `CP_RB_WPTR` (register 0x714) through a user mapping of the register
  aperture**. No system call is made per submit. A model therefore needs the ring, its write-back page and the register
  window mapped into the guest process, not a submit ioctl.
- **The kernel supplies the mappings, the lock, and slow-path services.** Everything the stream does per frame happens
  under a hardware lock whose fast path is a compare-and-set on a shared word (below); the ioctl is only the slow path.
- The same ring is also used by the X module's 2D acceleration hooks (it imports `firegl_PM4Alloc` and
  `firegl_PM4WaitForIdle` as the GL module does), so the ring has more than one writer, serialised by the lock.
  **Inferred** from the import list of `fglrx_drv.so` and the packet writers read in
  [r300-stream-x-driver.md](r300-stream-x-driver.md); the lock ordering between the server and a client is **unknown**.

## 2. Ring ownership and the user-side ring protocol

Names of fields are offsets because the shipped structures have no names a reader can cite.

- **Handle** (the first argument of `firegl_*`, `__fglDRMSubmit` and `__glDRMReadRegister`): the word at +8 is the
  user address of the mapped register aperture, the word at +0x10 points at the ring control block, the word at +0x18 is
  the user address of the ring, and the word at +0x20 points at the status page. **Established**
  (`firegl_PM4Alloc`, `FUN_008f0f40`, `__glDRMReadRegister`, `__glDRMWriteRegister`).
- **Register access.** `__glDRMReadRegister(handle, index, out)` stores the 32-bit word at aperture + index * 4;
  `__glDRMWriteRegister` stores to the same place and executes `sync`. **Established.** The index is a *dword* index. The
  GL module reads one register this way: index 0x1006, byte offset 0x4018 (`GB_TILE_CONFIG`), in `__R300InitDrawable`.
  It writes register 0x714 (`CP_RB_WPTR`) and, in `firegl_PM4WaitForIdle`, 0x342c with 0xf ORed in
  (`RB2D_DSTCACHE_CTLSTAT`), through the same mapping. A guest that traps no accesses to the aperture needs no
  other support for these; a model that traps them must keep register reads side-effect free for 0x4018.
- **Ring control block** (word offsets bytes): +4 current write index in dwords, +8 ring size in dwords, +0x10 a mask
  (alignment of reservations is `(n + mask + 2) & ~mask`), +0x14 free space in dwords as last computed, +0x38 and +0x3c
  a saved value used around idle waits. **Established** for the reservations and the index (`FUN_008f0f40`,
  `FUN_00517f80`, `firegl_PM4Alloc`); the +0x38/+0x3c use is **inferred** (it saves and restores a word of the handle's
  aperture-side record at +0x130 around an idle wait).
- **Reserve.** The inline path (`FUN_00517f80`, `FUN_008f0f40`) returns the ring address at the write index when the
  rounded request fits before the end of the ring and within the recorded free space. **Established.** The slow path
  (`firegl_PM4Alloc`) is entered when it does not fit: it waits until the read pointer (the word at **status page + 0x200**)
  has passed the current write index, then fills the remainder of the ring with type-3 NOP packets whose headers are
  0xfffd1000 (count field 0x3ffd, so each covers 0x3fff dwords including its own) and wraps the write index to 0. The read pointer is
  **established** as written back by the chip to status +0x200: the X module's `FGLInitCP` (`FUN_0042ca80`, read in full)
  writes `CP_RB_RPTR_ADDR` (0x70c) with the status page bus address plus 0x200 and clears bit 27 of `CP_RB_CNTL` (0x704)
  to enable the write-back. The same X-module routine (`FUN_0042c840`) writes `CP_RB_WPTR_DELAY` (0x718, low 28 bits from the entity
  record), `CP_RB_CNTL` (size field = log2 of the ring size minus 1 in bits 5:0, block size bits 13:8 = 0x3f, buffer byte-swap
  field in bits 19:18 from the entity record's swap setting), `CP_RB_BASE` (0x700, the ring bus address) and
  `GEN_INT_STATUS` (0x44) = 0x2000000; `FUN_0042cac0` writes `SCRATCH_ADDR` (0x774, status page bus address) and `SCRATCH_UMSK`
  (0x770) = 0x3f (scratch registers 0 to 5 written back). **Established.** The `firegl_InitCP` ioctl then tells the kernel the
  same handles (section 4).
- **Commit** (`FUN_008f11c0` then `FUN_00518200`): pad the written length with type-2 words (0x80000000) until the write
  index is aligned to the control block's mask, then store the control block's write index into
  register 0x714 followed by two `sync` instructions. **Established.** At wrap the reservation routine also leaves a
  marker packet of four dwords: a type-0 header for two registers at byte offset 0x15f0 (header 0x1057c), the values
  0xdeadbeef and 0xbeefdead, and a type-2 word. **Established** as stores; that the marker is for debugging a hung ring is
  **inferred**.
- **Idle wait** (`firegl_PM4WaitForIdle`, **established**): reserve four dwords, write type-0 packets setting
  `RB2D_DSTCACHE_CTLSTAT` (0x342c, header 0xd0b) to 0xf and `WAIT_UNTIL` (0x1720, header 0x5c8) to 0x70000, commit, then spin
  on the status word (2,000,000 polls, then up to 1,600,000 calls to a yielding `sginap(0)`, after which it returns 1) until
  the read pointer equals the write index, wait until `RBBM_STATUS` (0xe40) bit 31 clears, write 0xf into 0x342c directly through the
  mapping and wait again. A model must make `WAIT_UNTIL` 0x70000 complete and the read pointer reach the write index.
- **Per-submit wrapper.** `__R300DRMSubmitPM4` reserves `n * 7 + ((n + 3) & ~3) * 3 + 0x11` dwords for n clip
  rectangles (the clip rectangle and scissor part is in [r300-stream-clip-scissor.md](r300-stream-clip-scissor.md)), and for each
  batch of rectangles emits an indirect-buffer jump: a type-0 write of two registers at byte 0x738 (`CP_IB_BASE`, then
  `CP_IB_BUFSZ`) carrying the buffer's bus address and its length in dwords. **Established.** So the GL module's own command
  buffer is *executed by indirect buffer*, not copied into the ring. The buffer address placed in the submit record is the
  bus address of the buffer that `firegl_AllocBuffer` gave the module.

## 3. The hardware lock

- **Lock word.** The module's per-screen record points at a shared page; the word at +0xa8 of that page is the lock.
  `FUN_00519440` (called from `fglX11GLDRMLock`) compares it with the module's context id: when equal it stores the id with
  bit 31 set (held) with no system call; otherwise it calls `firegl_LockHardware`. **Established.** Unlock is the reverse
  (`fglX11GLDRMUnlock`, `firegl_UnlockHardware`); both are recursive per process through a count the module keeps.
- **Slow path.** `firegl_LockHardware` issues ioctl 0x8008642a (input, 8 bytes: context id and a flag word) and retries
  until it returns success, giving up with the process exit code `-errno` only for errno 12, 19 or 22 (the values 0xc, 0x13,
  0x16). `firegl_UnlockHardware` issues 0x8008642b. **Established** (the numbers are in the DRM lock/unlock slots of the
  public Linux `drm.h`, `DRM_IOCTL_LOCK` and `DRM_IOCTL_UNLOCK`, software expectation).
- On taking the lock the module checks the drawable's change counter (the word the X server bumps) and, if it moved,
  calls `fglX11UpdateDrawable`, which refetches the drawable's clip list. **Established** for the call; the layout of the
  drawable record is **inferred** from loads (clip-rectangle count at +0xb0 and pointer at +0xb8, a second pair at +0xc0 and
  +0xc8 for a second buffer).

## 4. Ioctls the user-space modules issue

Numbers are IRIX values: bit 31 = copy in, bit 30 = copy out, bit 29 = no data, bits 28:16 the argument size, bits 15:8
the group byte 0x64, bits 7:0 the command. The low byte numbering for the standard slots equals Linux `drm.h`
(software expectation, Linux `drivers/gpu/drm/radeon` era `drm.h`); the 0x40 and up slots are ATI's private set and have no
public name, so the wrapper name is the shipped symbol. **Established** for every number below (each is an immediate in the
wrapper named; every wrapper was read in full). What the kernel does with each is in the kernel pages.

| Wrapper | Number | Arg size | Used on the stream path |
|---|---|---|---|
| `drmGetVersion` | 0xc0406400 | 64 | start-up |
| `drmGetBusid` / `drmSetBusid` | 0xc0106401 / 0x80106410 | 16 | start-up |
| `drmGetMagic` / `drmAuthMagic` | 0x40046402 / 0x80046411 | 4 | client authentication |
| `drmAddMap` / `drmRmMap` / `drmGetMap` | 0xc0286415 / 0x8028641b / 0xc0286404 | 40 | mapping the register aperture, status page, ring |
| `drmCreateContext` / `drmDestroyContext` | 0xc0086420 / 0xc0086421 | 8 | one hardware context per GL context |
| `drmSwitchToContext` / `drmSetContextFlags` | 0x80086424 / 0x80086422 | 8 | on lock hand-over |
| `drmCreateDrawable` / `drmDestroyDrawable` | 0xc0046427 / 0xc0046428 | 4 | per drawable |
| `drmGetLock` / `firegl_LockHardware` | 0x8008642a | 8 | the lock slow path |
| `drmUnlock` / `firegl_UnlockHardware` | 0x8008642b | 8 | the unlock slow path |
| `drmFinish`, `drmDMA`, `drmAddBufs`, `drmMapBufs`, `drmMarkBufs`, `drmGetBufInfo`, `drmFreeBufs` | 0x8008642c, 0xc0406429, 0xc0206416, 0xc0186419, 0x80206417 / 0xc0106418, 0xc0106418, 0x8010641a | | present in the library copy; no R300 stream routine calls them |
| `drmAgp*`, `drmScatterGather*` | 0x20006430 to 0x80106439 | | present; **no AGP use** on Onyx4 ([onyx4-bus-attach.md](../kernel/onyx4-bus-attach.md)) |
| `firegl_AllocBuffer`, `_AllocBufferAtPhysicalAddress`, `_AllocCache` | 0xc0186440 | 24 | surfaces, command buffers, texture staging |
| `firegl_FreeBuffer`, `_FreeBufferAdvanced` | 0x80186441 | 24 | |
| `firegl_ModifyBuffer` | 0x80106460 | 16 | |
| `firegl_LockPages` / `firegl_UnlockPages` | 0xc020644b / 0x8020644c | 32 | pinning host pages for card-side reads (texture upload from host memory) |
| `firegl_FlushCache` | 0x2000644d | none | cache maintenance after CPU writes |
| `firegl_RegisterTexture` / `firegl_UnregisterTexture` | 0x80086448 / 0x80046449 | 8 / 4 | texture manager hand-shake |
| `firegl_AllocMutex` / `firegl_FreeMutex` | 0x40046446 / 0x80046447 | 4 | cross-process mutexes |
| `firegl_GetKernelInfo`, `_RmMap`, `_VerifyArea` | 0xc0286450, 0x8028644f, 0x80106451 | | start-up |
| `firegl_InitCP` | 0x80206453 | 32 | **X module only**, once per card |
| `firegl_QueryHwCaps` | 0x40106454 | 16 | start-up: capability bits (bit 0x10 and 0x20 are tested) |
| `firegl_GetMemInfo`, `firegl_GetLockID` | 0xc0206456, 0x40046457 | 32, 4 | start-up |
| `firegl_SetCapIpcLock`, `firegl_RestoreCap` | 0x40046458, 0x80046459 | 4 | privilege toggles around the lock |
| `firegl_SetBlockMode` | 0x8004645a | 4 | X module, after buffers exist |
| `firegl_InitUMM` | 0x8018645b | 24 | unified memory manager, X module |
| `firegl_InitIrq` | 0xc010645d | 16 | |
| `firegl_SyncDacs`, `firegl_EnableStereo` | 0x20006461, 0x80046462 | none, 4 | X module mode set, stereo |
| `firegl_CPResume` | 0x20006464 | none | after the server regains the card |

`firegl_PM4Alloc`, `firegl_PM4WaitForIdle` and `firegl_DRMPoll` are not ioctls: they are the user-side routines of
sections 2 and 5. **Established.**

## 5. Fences, time stamps and the status page

- **Time stamp.** `__R300DRMSubmitPM4` ends each submit with a type-0 write of two registers at byte **0x15e8** (header
  0x1057a) whose two words are one 64-bit value, the submit's time stamp, stored in the submit record at +0x38 and in
  the ring control block's bookkeeping words (+0x20, +0x28, +0x30 of the block the handle's +0x10 points at).
  **Established.** With the wait-for-idle flag set (bit 12 of the record's first word, which `__glATISubmitBM` sets on every submit, record flags
  0x1000) it first writes the *previous* stamp at 0x15e0 (header 0x10578) and a `WAIT_FOR_IDLE` packet. The chip copies a written scratch register to host memory
  at `SCRATCH_ADDR` + 4 * register number (AMD R5xx guide 5.9, [engine facts section 6](r300-engine-facts.md#6-interrupts-and-fences),
  **established** for the mechanism), so registers 2 and 3 land at status page +8 and the idle marker at 0x15f0 (registers
  4 and 5) at +0x10. That the stamp the module reads is the 64-bit word at **status +8** is **established** (`firegl_DRMPoll`
  and `__glATISubmitBM` compare against `*(status + 8)`); that `SCRATCH_ADDR` is the status page base is **established** (`FUN_0042cac0` in
  the X module).
- **Waiting.** `__glATIWaitTimeStamp` is a stub returning 0 in this build. **Established.** The real wait is
  `firegl_DRMPoll`, a user-space routine: it scans a shared table of 40-byte entries, claims a free entry by storing a
  token into its first word, and treats an entry as finished when its recorded stamp is at or below the 64-bit word at
  status +8, spinning on the claim otherwise. No ioctl. **Established** for the stores and comparisons; the table's
  semantics ("QS" objects of the surface and time-stamp trackers, `fglX11InitQSConnection`) are **inferred**.
  `__glATISubmitBM` additionally spins on the status stamp after submit when a debug level is set
  (`__glATIDumpBuffersIfAdapterHangs` on a hang), and an environment variable named for a submit-buffer timeout is read at
  start-up (`fglX11InitQSConnection`).
- **Interrupts.** None of this path takes or waits for an interrupt. **Established** for the routines read; the vertical
  sync interrupt in [engine facts section 6](r300-engine-facts.md#6-interrupts-and-fences) is the X module's.

## 6. Shared memory the stream depends on

| What | Who writes it | Used for | Grade |
|---|---|---|---|
| Register aperture (user mapping) | kernel maps; module reads and writes | `GB_TILE_CONFIG` read, `CP_RB_WPTR`, `RB2D_DSTCACHE_CTLSTAT` | established |
| Ring and ring control block | module (writer), chip (reader), kernel (setup) | packet delivery | established |
| Status page | chip (write-back of the read pointer at +0x200 and scratch registers), module (reads) | fences | established for +0x200 and +8 |
| Lock page | module and kernel | the hardware lock word at +0xa8 | established |
| Command buffers (`firegl_AllocBuffer`) | module writes, chip reads by bus address through `CP_IB_BASE` | the draw stream | established |
| Drawable clip lists | X server (`XF86SerFGLDRIGetDrawableInfo`), module reads | clip rectangles in each submit | established for the use, inferred for the layout |
| Texture-manager shared page (`__FGLTexMgrCreateSharedMemory`) | all GL processes | LRU of resident surfaces per card | inferred (names and loads only) |

## 7. Unknowns

- Whether the kernel programs `GB_TILE_CONFIG`, and with what, before the first client runs: the GL module reads it
  back and clears bit 16 of its copy (see the clip and scissor page), so the module's behaviour does not depend on it; the
  kernel programming was not re-read for 6.5.22. **Unknown** for this release.
- The layout of the ring control block and the status page beyond the offsets above, and the CP microcode load that
  `FGLInitCP` performs through `FUN_0042c700` and `FUN_0042c780` (not read). Next route: read those two routines and the 6.5.22 `fglrx.o`
  CP start-up against [kernel-attach.md](../kernel/kernel-attach.md#command-processor-start-up-x-server-module).
