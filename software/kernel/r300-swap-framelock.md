# R300 swap groups, swap barriers and frame lock on Onyx4, the status lines software can see, and the absence of video-in

How `glXJoinSwapGroupSGIX`, `glXBindSwapBarrierSGIX` and frame lock reach the ImageSync card and the R300 pipes under IRIX 6.5.22 (patch
SG0005448), which status lines the stack exposes, and whether the Onyx4 has a video-in path into the frame buffer. The card is in
[r300-imagesync-card.md](r300-imagesync-card.md); the diagnostics that test this are in [olsg-sync-tests.md](../diagnostics/olsg-sync-tests.md); the
driver routines are in [image-sync-functions.md](image-sync-functions.md) (6.5.30 build) and [kernel-drm-functions.md](kernel-drm-functions.md).

Grades: **established** (whole routine read), **inferred**, **unknown**. Method: Ghidra with objdump checks. Binaries from patch SG0005448: `usr/cpu/sysgen/IP35boot/fglrx.o`
and `is1.o`, `usr/X11R6/lib/modules/drivers/fglrx_drv.so`, `usr/X11R6/lib/modules/extensions/fglrx_glx.so` and `libglx.so`, `usr/X11R6/lib/modules/dri/fglrx_dri64.so`.
Addresses are in those images.

## The chain, from the GLX call to the card

1. **Extension strings** (`libglx.so`): `GLX_SGIX_swap_group`, `GLX_SGIX_swap_barrier` and `GLX_SGIX_hyperpipe`; the server routines `__glXJoinSwapGroupSGIX`,
   `__glXBindSwapBarrierSGIX` and `__glXQueryMaxSwapBarriersSGIX` keep per-drawable swap-group and barrier resources (`__glXSwapGroupRes`, `__glXSwapBarrierRes`, with
   `SwapGroupGone` and `SwapBarrierGone` cleanup) and call through a table (`swapBarrierFunc`, one entry set per screen) that the video driver registers (**established** as names and
   structure; the swap-group join routine's body was not read, so how a group's members are tied together on one screen is **unknown**).
2. **The video driver enables it per screen** (`SGIGLXSwapBarrierInit`, `fglrx_drv.so` 0x430b80, read in full): it needs an ImageSync card for the screen (the first word of the screen's
   ImageSync record); without one it logs "SGIX_swap_barrier disabled because of imageSync functionality unavailable". With one, bit 0 of the record's fourth word (set from the X configuration,
   the message says by `xsetmon`) enables it; if clear it logs "disabled. You need to use xsetmon to enable it". When enabled it logs "SGIX_swap_barrier enabled", hands `__glXSwapBarrierInit`
   a pair of callbacks, and then on a board of the R300 type (device class 0x2c in the module) **turns the second DVI port off** (logs "disabled second port DVI output in R300 family", clears bit 25 of the
   register at 0x288), clears bit 0 of the register at 0x1a0, sets bit 0 of the register at 0x198, puts 0x8d in the low byte of the clock index register (0x08: PLL write-enable with index 0x0d)
   and sets bit 23 of the clock data register (0x0c). The names 0x08 and 0x0c are the public `CLOCK_CNTL_INDEX` and `CLOCK_CNTL_DATA` (**software expectation**); what 0x198, 0x1a0 and PLL register 0x0d bit 23 do is
   **unknown**. The record's second bit adds 0x800 to a driver flag word (+0x1b08) and logs; its meaning is unknown.
3. **The two callbacks** (0x430a40 and 0x430b40, decompiled by address): `query max barriers` returns 1 when the screen's enable word is set, else 0, so **a screen supports at most one barrier**
   (`numSwapBarrierInfo` is the per-screen table); `bind(screen, drawable, barrier)` accepts barrier 0 (unbind: only if the caller's drawable is the bound one, else "2") or barrier 1 (refused with
   the message "barrier %d is already in use" if another drawable holds it; "barrier %d is out of range" for any other number), records the drawable in the screen's slot and calls one more routine
   with (screen, barrier). That routine (reached through the module's table, not decoded) is **unknown**. **Established** for the checks.
4. **The GL side** (`fglrx_dri64.so`, `XGLBindSwapBarrier` 0x530f40; `fglrx_glx.so`, `SerXMesaBindSwapBarrier` 0x4cfd80): store the barrier number in the context and
   issue the private ioctl **0x66670003** on the board's `fglrx` device with mode 1; `XGLSwapBuffers` (0x5312c0) afterwards issues **0x6667000f** (swap-buffer statistic). Another
   0x66670003 with mode 0 is issued from the surface-recovery path (0x53a070). The DRI module also waits on the chip's `RBBM_STATUS` before the swap with a timeout message "GLX: swap barrier: mmRBBM_STATUS wait timeout"
   (string only; the loop was not traced).
5. **Kernel** (`fglrx_swap_ready`, `fglrx.o` 0x14e60, [kernel-drm-functions.md](kernel-drm-functions.md)): mode 1 calls `is1_register(pipe)`, which records the calling process so its binding is dropped when it exits
   (`is1_pipe_exit` then `is1_unbind`); mode 0 sets a flag in the per-open record and calls `is1_fire_swapready(pipe, 0)`; any other mode is logged once. The private ioctl 0x6667000f
   (`fglrx_swapbuf_stat`) only increments a counter and stores 0: **no hardware effect**. **Established.**
6. **Card side** (`is1_fire_swapready`, `is1_unbind`, `is1_release_swapready`, [image-sync-functions.md](image-sync-functions.md)): each pipe bound to the card has a bit in a per-board "bound" mask and a "ready" mask.
   Firing a pipe clears its bits from the ready mask; when the ready mask empties (the old value equalled the pipe's mask or the call is the unbind form) the driver ORs the bound mask back into the ready mask
   and **writes 1 to card register 0x1c** (swap_ready_1). Unbinding a pipe fires it if it was the last holder, so a pipe that exits cannot hold the barrier. The X side's `is1SwapReady` (ioctl 10011) and the
   hyperpipe path (`fglrx_hp_fire_swapready`, which waits a configurable delay and then calls `is1_release_swapready` according to the compositor mode word `compositorforceswapready`) do the same kick. **Established.**
7. **What releases the pipes** is where the software trail ends. The card sums the hosts' ready writes and the diagnostic requires exactly two interrupts when the last participant arrives
   ([r300-imagesync-card.md](r300-imagesync-card.md)); the diagnostics require that the displayed frames of all pipes change together ([olsg-sync-tests.md](../diagnostics/olsg-sync-tests.md)).
   But no routine read writes a head register at the release: `is1_intr` (6.5.22) handles the vertical interrupt's head restart, not a swap. How the combined ready reaches the R300 flip (a genlock or external
   sync pin on the chip, the compositor path, or a software wait) is **unknown**. The `RBBM_STATUS` wait above suggests the user-space driver finishes rendering before reporting ready and flips by CRTC
   offset after the release (**inferred**). A physical capture is the clean way to answer: see the proposals in [open-questions.md](../../questions/open-questions.md#imagesync-capture-proposals).

## Frame lock and genlock in the X server

- Options in the X configuration (strings in `fglrx_drv.so`): `FrameLock`, `FrameLockMaster`, `FrameLockSyncronize`, `StartFrameLock`, `StopFrameLock`; ImageSync device and master are chosen by name with
  the default "default", or "none" for no card (`is1Attach`, [fglrx-drv-functions.md](../xsgi/fglrx-drv-functions.md)).
- `is1SetGenlock` (ioctl 10005) applies the saved source, `is1SaveGenlockParams` stores the format string and the source number (the master screen only), `is1GenlockAchieved` (ioctl 10006) returns the lock bit,
  `is1HsyncDetect` (ioctl 10008) finds the hsync-master pipe, `is1UpdateVideoFormat` (ioctl 10004) loads the format and re-synchronises all pipes (ioctl 10009), `is1Bind` (10010) and `is1Reset` (10003)
  attach and detach a pipe, `is1Unblank` (10007) blanks or unblanks. The pairing of ioctl numbers with names is now **established** from the callers' error messages. A genlock format that is not allowed prints
  "Format %s cannot be used for genlocking". `R200GenlockHandler` and `R200SGIVCUpdateGenlockInfo` (0x44ae40) hook the video-controller extension so genlock data follows mode changes.
- The sequence the first time a master pipe is unblanked: a one-shot block handler (`is1BlockHandler`) updates the video format, runs hsync detection and removes itself ([fglrx-drv-functions.md](../xsgi/fglrx-drv-functions.md)).

## External status visible to software

All **established** as reachable by software unless marked.

| Status | Where it surfaces |
|---|---|
| Card present and generation | ioctl 10001: board number or'd with (generation byte + 1) << 8. |
| Genlock achieved | ioctl 10006, from card register 0x60 bit 2; X `is1GenlockAchieved`. |
| Hsync present on a pipe | Card register 0x74 bit 0 after the 0x2a write; ioctl 10008 reports the master pipe; X logs "hsync master found at pipe %d". |
| Locked-to-reference countdown | Card register 0x60 low three bits equal 7 (kernel-internal, not exposed). |
| Interrupt status | Card 0x2c, six bits, kernel and diagnostics only. |
| Head vertical blank and line | R300 0x5c and 0x3fc bit 0 (vblank); 0x210 and 0x310 (line counters); read by `olsgsys` and the kernel. |
| Digital output source | R300 0x284 and 0x288 bits 11:10 (which head feeds each digital output). |
| Compositor present and display type | `fglrxProbeCompositor` and the serial-bus reads of the compositor's identity; X logs "Compositor connected on %d: display type changed to TMDS" and "sync levels changed to -hsync/-vsync" (strings of `fglrx_drv.so`); registers of the compositor itself are **unknown** ([r300-engine-facts.md](../model-contract/r300-engine-facts.md#7-what-imagesync-and-the-compositor-connect-to)). |
| Per-board vsync count | Kernel counter returned by ioctl 0x6667000d; `glXGetVideoSyncSGI` is the user entry. |

There is no status line from a video source other than the ImageSync card's genlock input; no routine read reports an external video signal's presence, format or timing.

## Video into the frame buffer: none found

- ImageSync carries no pixel data: its registers are control, status, swap-ready, PLL and format words only (the whole 0x80-byte window is accounted for in the card page).
- The R300 has a capture unit on the public chip (the diagnostic's register database lists its `CAP0_*` registers: buffer and VBI offsets, interrupts, trigger, port mode), but a search
  of the kernel objects, the X module, the DRI and GLX modules, `sgcombine`, `olsg` and `olsgsys` for code that programs it, or for any capture, video-input or tuner interface, finds
  none. The only video-related interface of that kind is the TV output extension (`ATITVOUT`, output only). In `olsg` the capture register names appear only as the generic register-name table.
- Grade: **no shipped software depends on a video-in path** on Onyx4 in the objects read. This is the kind of absence the project records as "unknown: no shipped software or published source depends on it".
  The search was by string and symbol, not by tracing every `olsg` test; the `tcard` tests and the 6.5.30 builds' differences were not read.

## What a model must do

See [olsg-sync-tests.md](../diagnostics/olsg-sync-tests.md#what-a-model-must-do-to-pass). In short for this page: accept 0x66670003 with modes 0 and 1 and 0x6667000f, keep per-pipe ready bits and kick card
register 0x1c when the last bound pipe fires, make the card's two swap-ready interrupts and the displayed-frame hold agree, and expose lock in 0x60 bit 2 and hsync in 0x74 bit 0.

## Gaps

- The swap-group join routine and the release path to the R300 flip are not decoded.
- The routine behind the barrier bind callback, registers 0x198 and 0x1a0 and PLL register 0x0d bit 23 are unknown.
- Only the 6.5.22 patch build of the DRI and GLX modules was read for this page.
