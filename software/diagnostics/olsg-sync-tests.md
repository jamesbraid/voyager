# What SGI's Onyx4 diagnostics ask of the ImageSync card and the R300 heads, and what a model must do to pass

The Onyx4 field diagnostics are two programs, `olsg` (n64, the "vger" tests that talk to the hardware directly) and `olsgsys`
(n32, the system tests that run through X and GLX). This page reads the tests that touch ImageSync, the display heads, swap groups
and sync, and ends with the list of behaviours a model of the card and the R300 must provide for them to pass. The register model is
in [r300-imagesync-card.md](../kernel/r300-imagesync-card.md); the swap path is in [r300-swap-framelock.md](../kernel/r300-swap-framelock.md).
The earlier per-function listings [of olsg](readings/usr-diags-SG-bin-olsg.md) and [of olsgsys](readings/usr-diags-SG-bin-olsgsys.md) are the 6.5.30 builds.

Method and sources. Ghidra for every function named here, objdump to check cited stores; string operands were resolved from the images' pointer
tables. The binaries are the IRIX 6.5.22 patch SG0005448 (`patchSG0005448.tardist`, 64-bit set) copies of `usr/diags/SG/bin/olsg` (2723632 bytes) and
`olsgsys` (188880 bytes); addresses below are in those images. Grades: **established** (the whole function or table read), **inferred**, **unknown**. What the hardware
does is never established by a diagnostic alone: these are SGI's expectations of working hardware (**software expectation**).

## How the tests find the hardware

- `olsg` takes `-vertex PATH` (the help text's example is a Cbrick crossbar widget 15 slot `pci/1`) or walks its device list; for a
  vertex it opens `.../base/0`, `.../base/2`, `.../intr` and the configuration node, and maps BAR 0 (the ImageSync tests, via `pci_map_is1`, olsg 0x101b0bcc) or BAR 2
  (the R300 interrupt test). The path suffixes `base/0.be`, `base/1.be`, `base/2.be` are the big-endian variants. **Established.**
- ImageSync cards are found by the identifier string "10A9100C" only (`DiscoverLoadIS1Info`, olsgsys 0x1000fcd8): a 100f card is not discovered by `olsgsys`
  (**established** for that routine; whether `olsg`'s own `DiscoverLoadIS1Info`, 0x101af198, differs was not read). R300 cards are found by "10024E47" and "10024E4B" (FireGL X1 and X2).
- `olsgsys` finds pipes through X: "Detected %d AGP(s)" counts the screens; pipes are called AGP0, AGP1 and so on, and registers are read and written through a per-pipe
  mapping of the R300 register window (`read_agpReg32`, `write_agpReg32`: plain 32-bit loads and stores at an offset from the mapping, olsgsys 0x10015c5c and 0x1001585c).
  **Established.**

## ImageSync tests in olsg

| Test | Routine and address | What a model must do |
|---|---|---|
| Configuration dump (`is1-config-info`) | `dispatch_vger_is1_cfg`, 0x100eaab4 | Configuration space reads of 64 bytes in 4-byte units and, for each of six BARs, the standard size probe: save, write all ones, read back, restore. Prints only; an unexpected value is not an error. |
| Sequential reset | `dispatch_vger_is1_seq_reset`, 0x100eb318 | Bridge reset bits, see the card page. The test does not read the card back. |
| Sequential PIO | `dispatch_vger_is1_seq_pio`, 0x100eb754 | The four pattern registers at 0x04 to 0x10 must be ordinary 32-bit read/write storage (walking ones and zeros, checkerboard, address-derived and random patterns, thousands to a million passes). Any miscompare fails. |
| Sequential interrupt | `dispatch_vger_is1_seq_int`, 0x100ecb40 | PLL index read through 0x40 (indices 0 to 7 and 16 to 18, 9999-poll timeout), vertical interrupts present with enable 0x3b and mask 0x3b and absent after masking, enable cleared or mask set; swap-ready interrupt counts for 2 to 64 participants (zero before the last, exactly two at the last). `skip-swap-int` skips the swap-ready part. Detail in the card page. |
| PLL tests | `is1_pll_test` 0x100ee388, `is1_program_pll_test` 0x100eed7c, `is1_interactive_program_pll_test` 0x100ef09c, `dispatch_vger_is1_pll_lock` 0x100edfc4 | PLL chip version 0x17 and revision 1; indices 0 to 7 hold arbitrary bytes (register 5 bit 6 may differ); programming the standard words and polling index 0x12 bit 1 must report lock within 20 polls of a 30-tick nap (1280x1024 at 60 Hz input assumed). Needs a sync input to the card, so on a model "lock" is a bit the model chooses to set; whether the real test is run without a signal is **unknown**. |

**R300 interrupt test** (`dispatch_vger_r200_seq_int`, olsg 0x100e7ecc; the name is the diagnostic's, it runs on R300 cards): maps BAR 2, reads
`GEN_INT_STATUS` (0x44) and `GEN_INT_CNTL` (0x40), writes 0x02000000 to 0x40 (bit 25, software-interrupt enable) and 0x04000000 to 0x44 (bit 26, fire a software
interrupt), registers a user-level interrupt handler on the card's `intr` vertex, naps 60 ticks and requires at least one interrupt. It then writes
0x02000000 to 0x44 (acknowledge, bit 25) and requires no further interrupts; restores 0x40 and requires none after the enable is cleared. These bit names match Linux's
`RADEON_SW_INT_ENABLE`, `RADEON_SW_INT_FIRE` and `RADEON_SW_INT_TEST_ACK` (**software expectation**); the test's own acknowledge sequence is **established**. The IRIX
6.5.22 kernel never uses this source ([r300-kernel-interrupts.md](../kernel/r300-kernel-interrupts.md)), so this is the one place a model's software-interrupt path is exercised.

## Video, swap and sync tests in olsgsys

All **established** for the control flow; the register meanings are the public Radeon names by offset (**software expectation**).

- **DAC CRC** (`collect_dac_crc`, olsgsys 0x10013d20): reads `CRTC_GEN_CNTL` (0x50; bit 1 tells interlaced) and the two signature registers
  0xd18 and 0xd1c; clears bits 18 to 20 of 0x58 (DAC control: stop and clear the CRC), sets bits 19 and 20, waits two or three vertical blanks and one more,
  reads 0xd18 and 0xd1c again, and builds the colour CRC from them: bits 9:0 of 0xd18 (blue), bits 25:16 of 0xd18 (green) and bits 9:0 of 0xd1c (red) packed into
  one word, the "control CRC" being bits 21:16 of 0xd1c; for an interlaced mode it takes a second field and sums. It restores 0x58 at the end. A model must
  compute a per-frame CRC of the displayed pixels per channel into 0xd18 and 0xd1c while 0x58 enables it. The CRC polynomial and what it covers (active pixels only?) are **unknown**.
- **Vertical blank** (`waitforvblank` 0x10013758, `waitforvblankst` 0x100138e4, `findcrtcstatusreg` 0x100147a4): bit 0 of the status register (0x5c for the first head, 0x3fc for the second) must go
  high and low in real time: each wait naps one tick up to 100 times for the edge and counts a failure if none comes. Which status register belongs to the DVI path is chosen from
  bits 11:10 of 0x284 (first digital output) or 0x288 (second): 0 and 2 select the first head, 1 the second, 3 consults bits 13:12 of 0xd64.
- **Video test** (`TEST_video`, subtests "Simple Video", "Vertical Ramp", "Horizontal Ramp"; mask from `VIDEOSUBTESTMASK`): draws each image through X, collects the DAC CRC and compares it with
  a golden value looked up by video format (a table `crcBuckets`, "Looking for CRC bucket for format %dx%d"; the golden files `/usr/diags/SG/data/Simple_Video_Gold_data`, `Vertical_Ramp_Gold_data`,
  `Horizontal_Ramp_Gold_data`). Mismatches are counted over a window of loops and reported with the pipe, not at once. The golden files are **not in the patch** and are
  not in the held files, so the values are **unknown**; a model can only pass this test by reproducing the real chip's rasterisation and scan-out exactly, or by the model supplying its
  own golden set. A TMDS CRC (a digital-output CRC enabled through 0x284 bit 6 and 0x294 bit 30, with variants for 0x288 and 0x2d0/0x2d4 for the LVDS outputs) is also
  collected for formats that support it and **a result of 0 is ignored** ("TMDS probably not enabled").
- **Swap test** (`TEST_swap`, olsgsys 0x1000d578; configuration `swap_pipeSetup` loads a 1280x1024 format and joins every pipe to one swap group and one barrier, binding with `glXJoinSwapGroupSGIX`
  and `glXBindSwapBarrierSGIX`): for a sweep of angles below 360 (the step was not read) it draws a distinct image on pipes 0 to N-2 in turn, calls `glXSwapBuffers` on each (`swap_buffers`: swap, `glXWaitGL`, one second), waits five
  seconds and reads the DAC CRC. **A pipe that has swapped must not yet display the new image** (its CRC must equal the pre-image CRC: "obeyed swap-rdy"; a changed CRC is "swaped prematurely"). The last pipe's swap
  must change its CRC, and then **every** pipe's CRC must equal that new image ("Pipe %d did not swap"). So the barrier must hold displayed pixels of all pipes until the last pipe's swap request, and
  release them together. `TEST_swap2` (0x1000db58) repeats this from several threads with start and between delays from the `startDelay` and `btwDelay` settings, loading a format per screen to match its
  managed area. **Established.**
- **Sync test** (`TEST_sync`, `sync_thread` 0x1000f780, `barrier` 0x1000fc54, `draw_thread`): one thread per pipe loads the 1280x1024 60 Hz format, draws and swaps in a loop until an alarm
  (`SYNC_PERIOD` seconds) fires and counts frames per pipe; the test passes when the counts for the two pipes are equal ("Agp0 frame = %d, Agp1 frame = %d"; else "Sync mechanism failed!").
  A second variant (`TEST_sync2`) runs the vertical-blank collection of both pipes in lockstep through a condition-variable barrier. Equal counts need the swap barrier (or frame lock) to block
  each pipe's swap until its partner is ready (**inferred**: the test has no other sync primitive).
- **Discovery** (`TEST_discovery`, `printIS1` 0x10009ec8): prints the ImageSync registers at 0x00 to 0x34; the register labels are the table in the card page. Reads only.

## What a model must do to pass

1. **ImageSync card** (if the model presents one): PCI 10a9:100c, BAR 0 with the register file above, one INTA line, scratch behaviour of 0x04 to 0x10, PLL port 0x40
   to 0x4c with chip version 0x17 and revision 1 and eight read/write bytes, interrupt mask/enable/status behaving as the sequential interrupt test expects, and the
   swap-ready counting (silent until the last participant, exactly two interrupts after). Reset through the host bridge's PCI reset bits.
2. **R300 heads**: real-time vertical blank in 0x5c and 0x3fc, the line counters 0x210 and 0x310, enable edges at 0x50 and 0x3f8, `GEN_INT_STATUS` bit 25 / `GEN_INT_CNTL` bit 25 / fire bit 26 with
   the acknowledge write, and (for `olsgsys`) the DAC CRC registers 0xd18 and 0xd1c enabled through 0x58 bits 19 and 20.
3. **Swap barrier semantics**: no pipe in a swap group shows its new frame until every pipe has requested its swap (CRC compare), then all do. This is the behaviour described in
   [r300-swap-framelock.md](r300-swap-framelock.md).
4. **Golden CRCs**: the video test needs the three `*_Gold_data` tables, which are not held. Without them the model can pass the interrupt, PIO, PLL, swap and sync tests, and the video test only if
   its CRC and rasteriser agree with the real chip. This is the largest open item; see the capture and acquisition proposals in
   [open-questions.md](../../questions/open-questions.md#imagesync-capture-proposals).
5. Tests the tool lists for the card (`dispatch_vger_tcard_*`, `dispatch_vger_r300_sys_pio`) were not read and are outside this page.

## Gaps

- `olsg`'s own discovery routines, the `tcard` and R300 PIO tests and the data files were not read.
- The CRC algorithm and exact coverage, the video-format-to-bucket map and the TMDS CRC registers' bit meanings are unknown.
