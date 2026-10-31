# Open questions

Questions the binaries and published sources have not yet answered. One entry each: the question, every route already tried, and the next route. When an entry is answered, move the finding into the owning header or chapter and delete the entry. `AGENTS.md` section 5 gives the rules.

**Routes tried so far, for every entry below:** a listing of the file names the IRIX 6.5.30 install media carry for the Onyx4 (the `VOYAGER` graphics-board tag, the IP35 kernel set, the X server modules), extraction of each file to confirm it exists, and `file(1)` on the main ones. Since then the kernel attach path (`fglrx.o`, `vga.a(vga_init.o)`) and the X module's command-processor start-up have been read ([kernel-attach.md](kernel-attach.md)); entries that say so list what that reading tried. The rest are unread, not exhausted.

**Routes no entry has taken yet**, to try in this order unless an entry says otherwise:

1. **The shipped objects.** `fglrx.o`, `is1.o` and the `vga.a` members are unstripped MIPS-IV relocatable objects reported with debug information; the X and DRI modules likewise. Function and variable names, line tables and strings come first.
2. **Public references.** AMD's R3xx register reference and R5xx acceleration guide, Linux `drm/radeon` r300 and Mesa's r300 driver ([docs/sources/INDEX.md](sources/INDEX.md)). They describe the public chips; use them to read the binaries, not to fill gaps.
3. It predates the Onyx4.
4. **Other IRIX releases** of the same files: a diff of code between releases often names a field.
5. **Published output from real machines**: `hinv -v`, `gfxinfo`, X server logs and PCI listings of Onyx4 systems in newsgroup and mailing-list archives.
6. **The shipped driver under an emulator.** Run it and log what it reads back and waits for. This shows the driver's expectation, not the board's behaviour, and is labelled so.

An entry that exhausts all routes is relabelled "unknown: no shipped software or published source depends on it" in its owning file, with the routes listed, and removed here.

## Host attachment

The attach path read so far is in [kernel-attach.md](kernel-attach.md).

- **Which bridge and topology the Onyx4 graphics board uses.** `vga_check_for_pic` accepts a PIC (part 0xd102 or 0xd112) or an XBridge (0xd002), and `fglrx_attach` has two mapping paths: card directly on the bridge's bus (BARs through the bridge's per-device windows) or one connection point further away (BARs as PCI memory addresses through a PIO map), which reads like a card behind a PCI-to-PCI bridge. Which case an Onyx4 takes, and how many cards a bridge carries, is not visible in this code. Tried: `fglrx_attach`, `vga_check_for_pic`, `vga_map_board_regions` in full. Next: the `hinv -v` and `/hw` listings of Onyx4 systems in public archives (route 5); the IP35 PROM image by strings; `pciio_ppb.o` for what it attaches to.
- **The PCI bus clock and width.** Neither `fglrx.o` nor `vga.a` reads or sets them. Next: SGI's Onyx4 user's guide and porting guide (route 2), then the PIC set-up in `pcibr.o` and `pic.o` (route 1) for what the kernel programs for that bus.
- **Where `find_vga_pipe` is defined.** `fglrx.o` and `vga.a(vga_init.o)` both call it and both depend on the record it returns (the halfword at +80 and doubleword at +96 that `find_fglrx_pipe` copies, and the bridge-related words `vga_init` derives from +64, +82 and +84). No shipped IP35 object read so far defines it: tried `fglrx.o`, every `vga.a` member, `vgastubs.a`, `kernel.o`, `pcibr.o`, `pic.o`. Next: the other objects of the IP35 kernel set and the `system` and `master.d` files that name the graphics pipe modules.
- **Bridge device-register values for legacy I/O and frame-buffer access.** `vga_setbridge_to_legacy_io` and `vga_setbridge_to_lfb` write two values (VGA record +64 and +72) to the slot's Device(n) register, computed in `vga_init`. Their bits against the Bridge/PIC Device(n) field layout are not decoded. Next: read `vga_init` from 0x394 to 0x408 and decode against the public `bridge.h` and `pic.h` fields.
- **Byte swapping, in full.** Established: BAR 1, the ROM, the legacy I/O window and the VGA memory window are mapped with `PCIIO_BYTE_STREAM`, BARs 0 and 2 with `PCIIO_WORD_VALUES`, and the VGA layer sets the bridge's `BRIDGE_CTRL_MEM_SWAP`. Still open: what the bridge does for DMA from the card (the X driver's `CP_RB_CNTL` `BUF_SWAP` field is preserved from a value set elsewhere), and whether `fglrx.o` ever undoes the memory swap bit the VGA layer set. Next: `fglrx_drv.so` writers of `CP_RB_CNTL` and of the surface swap controls; `pciio_dma_addr` callers in `fglrx.o`.
- **What the `hub_setup_prb(nasid, widget, 3, 2)` call does.** Both `fglrx_attach` and `vga_earlyinit` make it. Next: read `hub_setup_prb` in `kernel.o` (route 1).
- **Whether the IP35 PROM runs the option ROM.** The kernel runs it itself in `vga_init_board` (`xf86ExecX86int10`), which suggests the PROM does not, but that is an inference. Next: `ip35prom.img` strings; route 5 for published PROM console output on an Onyx4.

## Identity

- **PCI device and revision IDs per card.** Read from the headers of the three option ROM images, as PCI expansion ROM data structures: `sg2.bin` is vendor 0x1002 device 0x4e47; `sg3.bin` and `sg3a.bin` are vendor 0x1002 device 0x4e4b. Public lists name those IDs FireGL X1 (R300 GL) and FireGL X2 (R350 GL). Read since: both IDs are in `fglrx_devids` and `vga_devids` ([kernel-attach.md](kernel-attach.md#which-cards-the-driver-claims)). Still open: the subsystem IDs and revisions the cards report in configuration space (`fglrx_attach` reads them into its record but never compares them; the second words of the ID tables have the form of subsystem pairs, 1002:0002, 0152 and 0172, and are never read), and what separates `sg3.bin` from `sg3a.bin` (the images differ in the position of the PCI data structure, 0x194 against 0x184). Next: diff the two images; route 5 for published `lspci`-style or `hinv -v` output.
- **What "sg", `olsg` and `vpm` stand for and do.** The `usr/gfx/VOYAGER/bin` tools are `sg2flash` and `vpm`; the diagnostics are `olsg` and `olsgsys` with manual pages. Their purpose is a guess from names. Next: their manual pages and strings.

## Command processor and ring

- **Ring parameters and order of CP start-up.** The kernel never programs the ring base, size or microcode; the X server module does ([kernel-attach.md](kernel-attach.md#command-processor-start-up-x-server-module)): `PM4LoadMicroCode`, `r200_RegisterRingBufferLocation`, `r200_EnableCommonBusMaster`, `r200_SetPm4OperationMode` (mode 8, both queues bus-master), `r200_EnableRPTRwriteback`, `FGLEnableCP`, `FGLStartCP`. Still open: `FGLInitCP` (address 0x42c4c0), which computes the ring size and fetch settings; the routine at 0x42bc00 that `FGLStartCP` calls first; where the ring memory comes from (the kernel's `kmem_contig_reserve` pools are a candidate) and how its bus address is formed; and the order the callers impose. Next: read those routines and the ioctls the module sends to `firegl_cp_init`.
- **Microcode.** Answered in part: `fglrx_drv.so` carries two 2048-byte tables, `aPM4_Microcode_R6x` (identical to the public `R200_cp.bin`) and `aPM4_Microcode_R300` (66 of 256 pairs match the public `R300_cp.bin`), and loads one through `CP_ME_RAM_ADDR`, `CP_ME_RAM_DATAH` and `CP_ME_RAM_DATAL`. Still open: which chip codes (record +160 values 8, 47, 49 against 44, 45, 52) mean which part, and so which table an X1 and an X2 load; and how the R300 table differs from the public image (later or earlier revision). Next: the routine that sets the chip code (search `fglrx_drv.so` for stores to +160); compare the R300 table with other public R300 microcode copies.
- **Fence, idle and reset.** How IRIX waits for the engine, flushes caches and resets a hung engine. `_r6x_resetPM4` and `firegl_killall_clients` poll `RBBM_STATUS` (0xe40); `fglrx_attach` pulses `GA_SOFT_RESET` once. Next: route 1 on `_r6x_resetPM4` and `__fglQSQuietDown` in full.

## 3D

- **Vertex and fragment units.** The public R3xx and R5xx documents describe the programmable vertex stage and the fragment stage; what the IRIX driver programs for each and how its GL layer maps ATI extensions onto them. R300 and R350 differ in fragment capability; which differences IRIX exposes is not read. Next: route 1 on `fglrx_dri64.so`, then route 2.
- **Which GL extensions and limits each card reports.** The library names ATI-specific extensions; the per-card limits (texture size, program length) are unread. Next: `libGL.so` strings; route 5 for published `glxinfo` output.
- **Multipipe and compositor interplay.** What `SGIOMPdmx_dri.so`, `sgcombine` and the compositor data do to the cards' output. Next: strings and the DRI driver's entry points.

## Memory and display

- **Video memory.** Size and type per card, local-memory versus system-memory use, aperture sizes. Next: route 1 for the driver's memory map ioctls; route 2.
- **Memory controller and GART set-up.** Neither the kernel attach path nor any constant-offset access in `fglrx.o` touches `MC_FB_LOCATION`, `MC_AGP_LOCATION`, `AGP_BASE` or the PCI GART (`AIC_*`) registers. The X driver's `r200_EnableCommonBusMaster` writes `AGP_BASE` and `MC_AGP_LOCATION` from two driver words (+6676 and +6672). Still open: who writes `MC_FB_LOCATION`, whether the PCI GART is used at all on IRIX, and what bus addresses the aperture maps to through the PIC. Next: `fglrx_drv.so` stores to 0x148 and 0x1d0 to 0x1ec; accesses through computed offsets in `fglrx.o`.
- **Interrupt bits.** `fglrx_intr` acknowledges bit 2 of `GEN_INT_STATUS` and clears bits 2 and 6 of `GEN_INT_CNTL`; Linux names neither bit. Next: X.Org radeon and the R3xx-era register lists for those bits; `_r6x_enable_vsync_irq` and `_r6x_enable_framelock_irq` in full.
- **Display output.** Scan-out, DACs, DVI and the Onyx4's image-sync and genlock paths; how the X driver programs modes. Next: `fglrx_drv.so`, then `gen-XF86Config`.

## What IRIX programs at attach

- **Attach sequence.** Answered for `fglrx_attach` and the early VGA path ([kernel-attach.md](kernel-attach.md)). Still open: what the card's own BIOS programs when `vga_init_board` runs it in the x86 emulator, which is the bulk of the chip's initial state. Next: run `vga.a`'s emulator path, or `biosemu` from the diagnostics, on the shipped option ROM images and log the register accesses (route 6, labelled as the BIOS's expectation).
