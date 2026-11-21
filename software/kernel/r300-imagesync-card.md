# Onyx4 ImageSync card: registers, how it drives the R300 heads, and its timing reference

What the IRIX kernel driver and SGI's own diagnostics say about the ImageSync option card (PCI 10a9:100c and 10a9:100f) that
sits in a host PCI slot of an Onyx4 and synchronises the graphics pipes. The per-routine reading of the 6.5.30 driver is
[image-sync-functions.md](image-sync-functions.md); this page is the register-level model that reading and the diagnostics
(`olsg`, `olsgsys`) together support, with the 6.5.22 build's differences. Swap groups and barriers are in
[r300-swap-framelock.md](r300-swap-framelock.md); what a model must do to pass the tests is in
[olsg-sync-tests.md](../diagnostics/olsg-sync-tests.md).

Grades: **established** (a whole routine or table read in a shipped binary), **software expectation** (public Linux or AMD
document for the public chip), **inferred**, **unknown**. Method: Ghidra for every function, objdump to check each cited store and
value. Binaries: IRIX 6.5.22 patch SG0005448 (`patchSG0005448.tardist`, 64-bit set): `usr/cpu/sysgen/IP35boot/is1.o`
(SHA-256 `71c003e2...6221`), `usr/diags/SG/bin/olsg` (2723632 bytes) and `olsgsys` (188880 bytes). Addresses are in those
images; the 6.5.30 readings elsewhere use the 6.5.30 builds' addresses, which differ.

## The card on the host bus

- **Identity.** **Established** (`is1_reg`, `is1.o` 0x904 in the 6.5.22 build): the driver registers vendor 0x10a9 devices 0x100c and
  0x100f under the prefix `is1_`. `is1_attach` (0xcb8) reads the revision byte; bits 7:6 pick the hardware generation, 0 giving the
  first-generation word builders and 1 the second (`is2_*`); any other value logs "unknown type" and uses the first generation.
- **Windows.** **Established**: configuration space is mapped as a 256-byte window, BAR 0 is mapped as memory space with the
  "word values" flag (no byte swap, 32-bit registers read and written as plain big-endian words). The registers below are all
  inside the first 0x80 bytes of BAR 0 (the diagnostics reach them through the BAR mapping their discovery code makes,
  [olsg-sync-tests.md](../diagnostics/olsg-sync-tests.md)). The BAR's size is read, not assumed (`pciio_info_bar_size_get`);
  its value is **unknown**.
- **Interrupt.** **Established**: one line, `pciio_intr_alloc(..., 1, ...)` (INTA only), device-descriptor name "Image Sync",
  handler `is1_intr`. Through the host's PIC or XBridge exactly as in [r300-kernel-interrupts.md](r300-kernel-interrupts.md#delivery-through-the-pic-inta-and-intb)
  (pin = slot number, no INTB).
- **Reset.** **Established** (diagnostic `dispatch_vger_is1_seq_reset`, olsg 0x100eb318): the diagnostic resets the card by
  opening the slot's bridge window, reading the widget id (0xd002049 means an XBridge, anything else is treated as a PIC), and writing
  0 and then 0xf to the four PCI reset bits (27:24) of the bridge Control register (offset 0x24 for an XBridge, 0x20 for a
  PIC) with a one-second sleep between. So the card has no reset register of its own: it is reset by the host bridge's PCI reset lines.
  Both bridges are modelled by the 6.5.22 `pcibr.o` ([r300-kernel-dma.md](r300-kernel-dma.md)).

## Register map (BAR 0)

Names are the diagnostic's own register labels, printed by `dispatch_vger_is1_seq_int` (olsg 0x100ecb40) and
`dispatch_vger_is1_dump_regs`; offsets are 4 times the index the diagnostic uses, and each was cross-checked against a kernel
access. All are 32-bit. **Established** that the offset and name pair is the diagnostic's; the behaviour column is the grade given.

| Offset | Diagnostic name | What is known |
|---|---|---|
| 0x00 | `pfd_control` | The diagnostic writes 0x0288016b. Kernel never writes it. Meaning **unknown**. |
| 0x04, 0x08, 0x0c, 0x10 | `pfd_hi_pattern_lo/hi`, `pfd_lo_pattern_lo/hi` | Four full-width read/write registers. The sequential-PIO test (`dispatch_vger_is1_seq_pio`, olsg 0x100eb754) uses them as scratch: walking one and walking zero across all 32 bits (10000 passes each), a checkerboard (100000 passes), addressing and random patterns, writing all four then reading all four back and comparing exactly (**established**). The sequential-interrupt test seeds them with 0, 0, 0x55555552, 0xd5555555. The names suggest a phase-and-frequency detector's pattern words (**inferred**). |
| 0x14 | `vert_ctrl` | Kernel `is1_update_format` stores (word & 0x1fff) \| 0x4000 here, taking the word from the format request (**established**, 6.5.30 entry); the diagnostic writes 0x4409. Vertical timing control; fields **unknown**. |
| 0x18 | `vert_reset_async_delay` | Not written by the kernel or the tests read; **unknown**. |
| 0x1c | `swap_ready_1` | Swap-ready bits, pipes 0 to 31. Kernel writes 1 here when the last of a host's bound pipes becomes ready and 0 at attach and close (**established**). Diagnostic writes single bits 1<<n and 0xffffffff (below). |
| 0x20 | `swap_ready_2` | Pipes 32 to 63; the diagnostic uses it for configurations above 32 pipes; the kernel writes only 0 (**established**). |
| 0x24 | `is1_control` | Built by `is1_assemble_control` or `is2_assemble_control` from the sync-source block and the format request (field list in [image-sync-functions.md](image-sync-functions.md)); the kernel's resync step ORs 0x200000 (bit 21) into it for one head restart (below). The diagnostic writes 0x01019984, and for the swap-ready tests 0x01019980 \| (pipe count & 0x7f). |
| 0x28 | `video_format` | Built by `is1_assemble_video_format` or the `is2_` version; the diagnostic writes 0x428. |
| 0x2c | `is1_status` | Interrupt status, six bits (mask 0x3f). Read once by the handler first thing (the read is the acknowledge, **inferred**: the diagnostic's handler masks, reads and restores, and its test prints "read to clear is1_status"). |
| 0x30 | `is1_int_mask` | A set bit masks the source. The kernel and diagnostics write 0x3f or 0x1f to mask everything. |
| 0x34 | `is1_int_enab` | Written in step with the mask: both with 0x3b in the diagnostic's vertical test and 0x27 in its swap-ready tests (below). The kernel writes 0x3f to clear it, then restores. |
| 0x40 | PLL control | Indexed read and write port to the PLL chip, below. |
| 0x44, 0x48, 0x4c | PLL map words | Three words that program PLL registers 0 to 7 and a command byte. |
| 0x5c | (kernel only) | `is1_update_format` stores the format request's word at +0x200 here; **unknown**. |
| 0x60 | sync status | Read by the kernel. Bit 2 is returned to X as "genlock achieved" (ioctl 10006). Low three bits equal to 7 end the post-resync countdown ("PLL locked", **inferred** from the countdown and the message). |
| 0x74 | hsync detect | Kernel `is1_hsync_discovery` writes 0x2a, waits 2 ms and reads: bit 0 set means the card sees horizontal sync from the pipe just enabled; it then stores the value back with bit 1 cleared (**established** for the sequence; the meaning is **inferred**). |
| 0x78 / 0x7c | swap sample | Second-generation / first-generation swap-sample register, written only when the value changed: bits 15:0 from the format request, plus bit 16 (second generation, from a request flag) and bit 17 (second generation, set while any pipe is bound) (**established**). |

## Interrupt and swap-ready behaviour the diagnostic checks

All **established** as what `dispatch_vger_is1_seq_int` (olsg 0x100ecb40) tests; the hardware behaviour behind it is **inferred**.

1. Setup: mask and enable written 0x1f twice, `pfd` registers and PLL registers 0 to 7 and 16 to 18 read, `is1_control` written 0x01019984.
2. **Vertical interrupt.** Enable and mask both written 0x3b; after one second at least one interrupt must have arrived. Writing 0x1f to both
   must stop them; writing the mask alone (all masked, enable still set) must stop them; clearing enable alone must stop them. The status
   word read in the handler is kept (`is1_intr_routine`, olsg 0x100eaa2c: write 0x1f to the mask, read status, restore the mask).
   Which status bit is "vertical" is **unknown**: the test unmasks bit 2 (0x3b leaves bit 2 clear), whereas the kernel driver unmasks
   bit 5 only to run its head-restart step; the two may be different builds of the card (first and second generation) or two sources.
3. **Swap-ready interrupts.** With enable and mask both 0x27 (bits 3 and 4 clear, so "swap ready high" and "swap ready low" unmasked),
   writing 1, 2, 4, 8 to `swap_ready_1` one at a time must give interrupts within a second. Then for each pipe count N from 4 to 64:
   `is1_control` = 0x01019980 \| (N & 0x7f); the first N-1 pipes' bits are written one per call (a bit at a time into `swap_ready_1`
   for pipes 0 to 31, into `swap_ready_2` for 32 to 63), with a six-tick wait after each, and **no interrupt may occur**; writing the
   N-th pipe's bit must produce **exactly two** interrupts (one high, one low) (error "wrong # of swapready interrupts" otherwise).
   Whether a write ORs into the register or replaces it is **unknown**: the test writes a single bit each time and expects accumulation, which
   fits a set-only (OR) register that clears itself when the barrier fires; the kernel's single "1" to `swap_ready_1` and "0" to clear
   fits the same reading with the card counting hosts, not pipes. The low seven bits of `is1_control` are the participant count (**inferred**
   from the test only; the kernel's assemble routines also set bit 0 unconditionally, which does not fit a plain count: **unknown**).

## The PLL chip behind register 0x40

All **established** from `pll_read` and `pll_write` (olsg 0x100ef7a4 and 0x100ef610), `is1_pll_test` (0x100ee388), `is1_program_pll_test`
(0x100eed7c) and the kernel's `is1_read_pll`:

- **Read:** wait until bit 0 of 0x40 is clear (the diagnostic retries 11 times with a 30-tick nap; the kernel polls 9999 times), write
  (index & 0xff) << 8 \| 2, then bit 2 of 0x40 must be set (valid) and bits 23:16 hold the byte.
- **Write:** wait the same way, store three words at 0x44, 0x48, 0x4c, then write 0 to 0x40, which starts the programming.
  The kernel's format update does the same (bytes of the format request into 0x44, 0x48, 0x4c, then 0 to 0x40).
- **Identity:** register 0x10 must read 0x17 (chip version) and 0x11 must read 1 (chip revision). A model needs both.
- **Register file:** indices 0 to 7 are read and write bytes: word 0x44 holds registers 0 to 3 and 0x48 registers 4 to 7, lowest byte first
  (the toggle test packs a rotating pattern into the two words and expects each byte back after a 40-tick settle). The one tolerated
  deviation is register 5 bit 6, which the diagnostic ignores when the expected value has it set. Indices 8 to 15 are never read.
  Index 0x12 bit 1 is "locked": the lock test reads 0x12 after programming and polls up to 20 times with a 30-tick nap.
  The dump labels, in order, are input control, loop control, feedback divider 0, feedback divider 1, DPA offset, DPA control, (unnamed),
  oscillator divider, chip version, chip revision (**inferred** as the names of indices 0 to 7 and 16, 17).
- **Programming a lock** (`hsync_program_pll`, olsg 0x100efb30): the feedback divider is floor(reference / input hsync) and must lie from 13 to 4095
  with the resulting oscillator inside two limits; the three words are then 0x35000244, ((divider - 8) low byte) \| (((divider - 8) & 0xf00) >> 8) << 8,
  and 0x5a. The standard case (`hsync_std_program_pll`, 0x100efdf4) is the fixed words 0x35000244, 0x19e, 0x5a, the test's "lock to 27 MHz
  assuming 1280x1024 at 60 Hz". The meaning of the 0x5a word (a commit key) is **inferred**; the part is not named in the binaries.

## How the card drives the R300 heads

All **established** for the code; the hardware meaning is **inferred** where marked. Head registers are the R300's, reached through the FireGL
driver's register accessors `FGLRXReadRegister` and `FGLRXWriteRegister` on the board's BAR 2 mapping.

- **Hsync discovery** (`is1_hsync_discovery`, [image-sync-functions.md](image-sync-functions.md)): for every pipe, save `CRTC_GEN_CNTL` (0x50) and
  `CRTC2_GEN_CNTL` (0x3f8), clear bits 25 (enable) and 16 (cursor enable), save the two line counters (0x210, 0x310); then, pipe by pipe, write 0x2a to
  card register 0x74, restore that pipe's CRTC registers (re-enabling its heads), wait 2000 us and read 0x74; bit 0 set stops the scan. No pipe giving sync
  logs "no hsync detected from gfx, check DB9 cabling". So the card measures sync that a pipe's CRTC emits once the CRTC is enabled.
- **Head restart on the vertical interrupt** (`is1_intr`, 6.5.22 build 0x3b9c, 1140 bytes; 6.5.30 build 856 bytes with a different layout): while a resync is pending,
  each interrupt takes the next pending pipe. In the 6.5.22 build the handler (a) clears enable and cursor bits in 0x50 (and 0x3f8 when its enable was set),
  (b) ORs 0x200000 into the card control word and writes it to card register 0x24, (c) restores 0x50 and 0x3f8, (d) writes the pre-disable line counters back
  (the 6.5.30 entry says the counters 0x210 and 0x310 are written with the saved value masked to 0x7ff), and (e) marks the pipe done in a pending mask, calling for
  the next pipe on the next interrupt. When no pipe is pending it sets mask bit 5 again (the resync is over) and rewrites mask and enable. The card edge at which
  the head restarts is therefore the card's vertical interrupt; the heads' enable edges at 0x50 and 0x3f8 are what the card's timing reference aligns.
  Interrupt sources and the countdown are in [image-sync-functions.md](image-sync-functions.md).
- **Format update** (`is1_update_format`, ioctl 10004): the format request's fields go to 0x14, then (after bit 0 of 0x40 clears) 0x44, 0x48, 0x4c, then 0 to 0x40
  and 0x5c; the sync-source builders write 0x24 and 0x28; the swap-sample routine writes 0x78 or 0x7c. A format change ends by marking the
  master pipe for resync.
- **Swap gating** is software plus the swap-ready registers, not a stall in the R300: see [r300-swap-framelock.md](r300-swap-framelock.md).
- **Vsync stamps.** No ImageSync register carries a stamp. The pipes' own vsync counter is the kernel's per-board interrupt counter and the
  `GEN_INT_STATUS` bit 0 source ([r300-kernel-interrupts.md](r300-kernel-interrupts.md)); `glXGetVideoSyncSGI` and `glXWaitVideoSyncSGI` in the DRI module
  (`XGLGetVideoSyncSGI` 0x531000 and `XGLWaitVideoSyncSGI` 0x531080 in `fglrx_dri64.so`) are the user entry points (**inferred**: the callee ioctls were not
  traced).

## Timing reference and genlock

- **Sync sources.** **Established** (`is1_update_sync_source` and the `sync_types` table): "Locked to Internal Clock" (0), "Genlocked to External Source" (1),
  "Framelocked to External Source" (2), and "illegal Sync Source" for anything else. The sync-parameter block chosen for building the control and format words
  is the second of two when the source is 1 or 2 and the first otherwise (`is1_get_sync_data`). External sources arrive over DB9 connectors on the card (the
  kernel's message tells the user to check "DB9 cabling"); their pin-out and signal levels are **unknown**.
- **Lock detection.** **Established** at the software boundary: `is1GenlockAchieved` (X module 0x453600) issues ioctl 10006; the kernel reads 0x60 and returns bit 2.
  A model must therefore make 0x60 bit 2 follow whatever it models as external lock, and for the internal source report no lock (the X server then does not
  wait on it; **inferred**).
- **Which formats may lock.** The X module refuses with "Format %s cannot be used for genlocking" for formats its table does not allow; the table was not
  decoded here (**unknown**).
- **What multi-pipe software expects.** All pipes of a card must share one hsync master, found once (`is1_hsync_discovery`, cached in the board's master index);
  a resync serialises across cards with a global in-progress word and a 12-tick wait that logs "wait for resync ... timed out" ([image-sync-functions.md](image-sync-functions.md)).
  `sgcombine` and the diagnostics' sync test ([olsg-sync-tests.md](../diagnostics/olsg-sync-tests.md)) assume that after format load and resync every
  pipe's CRTC is phase-locked, so equal frame counts and equal swap behaviour result.

## Gaps

- The 6.5.22 `is1.o` was read for `is1_reg`, `is1_attach` (outline), `is1_intr` and the sizes of the others; a routine-by-routine diff with the 6.5.30 reading is not done.
- Bit meanings of `is1_control`, `video_format`, `vert_ctrl`, `pfd_control` and `is1_status`, the card's BAR size, the DB9 pin-out and the identity of the PLL part are unknown;
  see the proposals in [open-questions.md](../../questions/open-questions.md#imagesync-capture-proposals).
