# Open questions

Questions the binaries and published sources have not yet answered. One entry each: the question, every route already tried, and the next route. When an entry is answered, move the finding into the owning header or chapter and delete the entry. `AGENTS.md` section 5 gives the rules.

## Triage

Of the 31 entries below, 30 are `software-now` and 1 is `missing-release-or-binary`. Three of the software-now entries also carry a hardware-only residue, marked in the entry and recorded, not scheduled: the PCI bus clock, the display output and the ROM select.

The tags:

- `software-now`: a step the workspace can take now, from the shipped binaries in `root/`, the public references in [sources/INDEX.md](sources/INDEX.md) or public archives. Public trees that a fresh clone leaves empty need a shallow `git submodule update --init --depth 1 NAME`.
- `missing-release-or-binary`: the answer needs a file or release that the install set in [IRIX_FILES.md](../IRIX_FILES.md) does not include.
- `hardware-only`: no software or published source can settle it. Recorded, not scheduled. No entry is wholly in this class; the residues above are the parts that are.

Checks made while triaging, against the files in this clone:

- A string search of every file in `root/` finds `find_vga_pipe` only in `fglrx.o`, `vga.a` and `vga_init.o`, which call it. The definition is in an object the install set does not extract.
- Linux 2.6.30 `radeon_drv.h` names bits 0, 9, 19, 25 and 26 of `GEN_INT_CNTL` and `GEN_INT_STATUS`, and neither bit 2 nor bit 6. The interrupt entry's claim holds for that header.
- `radeon_microcode.h` in the same tree carries `R300_cp_microcode` and `R200_cp_microcode`, a public copy the microcode entry can compare against.
- The symbols the routes name (`hub_setup_prb`, `FGLInitCP`, `firegl_cp_init`, `_r6x_resetPM4`, `__fglQSQuietDown`, `R200AdjustFrame`, `FIREGL_ShowOverlay`, `firegl_addmap`) occur in the objects the entries assign them to.

### Software-now, in order

Registers and interrupts come first, because they block the register headers. Then the CP, 3D and display entries. Then the attach path and the option ROM.

1. Offsets with no public name, against the AMD R3xx, R5xx and M56 references.
2. Roles of the matched registers, starting with `R200AdjustFrame`.
3. Accesses the replay does not follow.
4. The register at 0xf18 and the pointers at device record +400 and +992.
5. Interrupt bits, with the Linux header checked.
6. Memory controller and GART set-up.
7. Video memory.
8. Ring and CP start-up, starting with `FGLInitCP`.
9. Microcode table and its chip-code writers.
10. Fence, idle and reset.
11. Vertex and fragment units.
12. GL extensions and limits.
13. Display output.
14. Multipipe and compositor interplay.
15. Byte swapping, in full.
16. Byte lanes of the register aperture.
17. PCI bus clock and width.
18. What `hub_setup_prb` does.
19. Bridge device-register values, bit layout only.
20. Bridge and topology. If no published listing shows the Onyx4 layout, this falls to hardware-only.
21. Whether the IP35 PROM runs the option ROM.
22. Attach sequence and the card's BIOS run under an emulator.
23. The x86 handlers of the images.
24. ATI tables the public driver does not read.
25. First header words and the signature block.
26. The sg3 to sg3a changes.
27. Which ROM a card gets, register 0x1a4.
28. PCI device and subsystem IDs per card.
29. What `sg`, `olsg` and `vpm` do.
30. How the flash tool compares versions.

The one `missing-release-or-binary` entry is `find_vga_pipe`. Three software-now entries also need a file that the install set lacks for part of their step: the install's release notes (the sg3 to sg3a entry), the flash tool's `9700.bin` (the ROM select entry) and the diagnostics' manual pages (the `sg`, `olsg` and `vpm` entry).

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

- [software-now] **Which bridge and topology the Onyx4 graphics board uses.** `vga_check_for_pic` accepts a PIC (part 0xd102 or 0xd112) or an XBridge (0xd002), and `fglrx_attach` has two mapping paths: card directly on the bridge's bus (BARs through the bridge's per-device windows) or one connection point further away (BARs as PCI memory addresses through a PIO map), which reads like a card behind a PCI-to-PCI bridge. Which case an Onyx4 takes, and how many cards a bridge carries, is not visible in this code. Tried: `fglrx_attach`, `vga_check_for_pic`, `vga_map_board_regions` in full. Next: search public newsgroup and mailing-list archives for `hinv -v` or `/hw` output from an Onyx4 (route 5). If no published listing exists, this falls to hardware-only and is recorded there. In software, read what `pciio_ppb.o` attaches to (in root; the entry names it as not yet read).
- [software-now] **The PCI bus clock and width.** Neither `fglrx.o` nor `vga.a` reads or sets them. Next: the Onyx4 user's guide 007-4634-002 (URL in sources/INDEX.md). Fetch it and search its hardware chapters for bus speed and width. The porting guide has no public URL in that index, so find one first. Then read the PIC set-up in `pcibr.o` and `pic.o` (in root) for what the kernel programs. Residue, hardware-only and recorded, not scheduled: the bus speed a physical machine runs at, if the documents and the set-up code leave it open.
- [missing-release-or-binary] **Where `find_vga_pipe` is defined.** `fglrx.o` and `vga.a(vga_init.o)` both call it and both depend on the record it returns (the halfword at +80 and doubleword at +96 that `find_fglrx_pipe` copies, and the bridge-related words `vga_init` derives from +64, +82 and +84). No shipped IP35 object read so far defines it: tried `fglrx.o`, every `vga.a` member, `vgastubs.a`, `kernel.o`, `pcibr.o`, `pic.o`. Checked: a string search of every file in root finds the name only in `fglrx.o`, `vga.a` and `vga_init.o`, which call it, so no file in root defines it. Next: the rest of the IP35 kernel set from the 6.5.30 media, which root lacks, or the same objects from another IRIX release (route 4). The `system` file that names the graphics pipe modules is also absent from root.
- [software-now] **Bridge device-register values for legacy I/O and frame-buffer access.** `vga_setbridge_to_legacy_io` and `vga_setbridge_to_lfb` write two values (VGA record +64 and +72) to the slot's Device(n) register. `vga_earlyinit` copies them unchanged from the `find_vga_pipe` record (pipe +112 and +128); `vga_init` does not store them, so their bits are set by whoever builds that record. Their bits against the Bridge/PIC Device(n) field layout are not decoded. Next: decode the two values against the bit layout of `bridge.h` and `pic.h` in the Linux 2.6.5 SN2 headers (URL in sources/INDEX.md). Decoding settles the layout only. The routine that fills the pipe record is the one the `find_vga_pipe` entry lacks, so who sets the bits stays open.
- [software-now] **Byte swapping, in full.** Established: BAR 1, the ROM, the legacy I/O window and the VGA memory window are mapped with `PCIIO_BYTE_STREAM`, BARs 0 and 2 with `PCIIO_WORD_VALUES`, and the VGA layer sets the bridge's `BRIDGE_CTRL_MEM_SWAP`. Still open: what the bridge does for DMA from the card (the X driver's `CP_RB_CNTL` `BUF_SWAP` field is preserved from a value set elsewhere), and whether `fglrx.o` ever undoes the memory swap bit the VGA layer set. Next: the byte-swap handling of `pcibr.o` and `pic.o` (in root) for the streams the kernel maps; `fglrx_drv.so` writers of `CP_RB_CNTL` and of the surface swap controls; `pciio_dma_addr` callers in `fglrx.o`.
- [software-now] **What the `hub_setup_prb(nasid, widget, 3, 2)` call does.** Both `fglrx_attach` and `vga_earlyinit` make it. Next: read `hub_setup_prb` in `kernel.o` (route 1). The name occurs in `kernel.o` (three times), `fglrx.o` and `vga.a`; read the copy in `kernel.o` first.
- [software-now] **Whether the IP35 PROM runs the option ROM.** The kernel runs it itself in `vga_init_board` (`xf86ExecX86int10`), which suggests the PROM does not, but that is an inference. Next: `ip35prom.img` strings; route 5 for published PROM console output on an Onyx4.

## Identity

- [software-now] **PCI device and revision IDs per card.** Read from the headers of the three option ROM images, as PCI expansion ROM data structures: `sg2.bin` is vendor 0x1002 device 0x4e47; `sg3.bin` and `sg3a.bin` are vendor 0x1002 device 0x4e4b. Public lists name those IDs FireGL X1 (R300 GL) and FireGL X2 (R350 GL). Read since: both IDs are in `fglrx_devids` and `vga_devids` ([kernel-attach.md](kernel-attach.md#which-cards-the-driver-claims)). Still open: the subsystem IDs and revisions the cards report in configuration space (the option ROM header holds the pair 1002:0152 for all three images, equal to the driver tables' second word for 4e47 and 4e4b: [option-roms.md](option-roms.md); `fglrx_attach` reads them into its record but never compares them; the second words of the ID tables have the form of subsystem pairs, 1002:0002, 0152 and 0172, and are never read), and what the strap bits that choose between `sg3.bin` and `sg3a.bin` in the flash tool are wired to (the images themselves are decoded and compared in [option-roms.md](option-roms.md); the flash tool's table also lists device 0x4e44 with a `9700.bin` that is not in the install). Next: compare the second word of each entry in `fglrx_devids` and `vga_devids` (the 1002:0002, 0152 and 0172 pairs above) with the vendor 1002 subsystem entries in the public PCI ID list (URL in sources/INDEX.md). Then route 5 for published `lspci`-style or `hinv -v` output.
- [software-now] **What "sg", `olsg` and `vpm` stand for and do.** The `usr/gfx/VOYAGER/bin` tools are `sg2flash` and `vpm`; the diagnostics are `olsg` and `olsgsys` with manual pages. Their purpose is a guess from names. Next: strings and symbol tables of `sg2flash`, `vpm`, `olsg` and `olsgsys` (all in root; `vpm` is stripped, so strings only). The manual pages are not in root. That part is missing-release-or-binary, and the strings route does not wait on it.

## Command processor and ring

- [software-now] **Ring parameters and order of CP start-up.** The kernel never programs the ring base, size or microcode; the X server module does ([kernel-attach.md](kernel-attach.md#command-processor-start-up-x-server-module)): `PM4LoadMicroCode`, `r200_RegisterRingBufferLocation`, `r200_EnableCommonBusMaster`, `r200_SetPm4OperationMode` (mode 8, both queues bus-master), `r200_EnableRPTRwriteback`, `FGLEnableCP`, `FGLStartCP`. Still open: `FGLInitCP` (address 0x42c4c0), which computes the ring size and fetch settings; the routine at 0x42bc00 that `FGLStartCP` calls first; where the ring memory comes from (the kernel's `kmem_contig_reserve` pools are a candidate) and how its bus address is formed; and the order the callers impose. Next: read `FGLInitCP` (0x42c4c0, 720 bytes) and the routine at 0x42bc00 in full from `fglrx_drv.so` (in root), then the ioctls the module sends to `firegl_cp_init` in `fglrx.o`, and the `kmem_contig_reserve` call in `fglrx.o` for the ring memory.
- [software-now] **Microcode.** Answered in part: `fglrx_drv.so` carries two 2048-byte tables, `aPM4_Microcode_R6x` (identical to the public `R200_cp.bin`) and `aPM4_Microcode_R300` (66 of 256 pairs match the public `R300_cp.bin`), and loads one through `CP_ME_RAM_ADDR`, `CP_ME_RAM_DATAH` and `CP_ME_RAM_DATAL`. Still open: which chip codes (record +160 values 8, 47, 49 against 44, 45, 52) mean which part, and so which table an X1 and an X2 load; and how the R300 table differs from the public image (later or earlier revision). Next: the routine that stores the chip code at +160 (search `fglrx_drv.so` for stores to that offset). Compare `aPM4_Microcode_R300` with `R300_cp_microcode` in `radeon_microcode.h` (Linux 2.6.30 tree, checked out in this clone) and with the public `R300_cp.bin` (URL in sources/INDEX.md).
- [software-now] **Fence, idle and reset.** How IRIX waits for the engine, flushes caches and resets a hung engine. `_r6x_resetPM4` and `firegl_killall_clients` poll `RBBM_STATUS` (0xe40); `fglrx_attach` pulses `GA_SOFT_RESET` once. Next: read `_r6x_resetPM4` (in `fglrx.o`) and `__fglQSQuietDown` (in `fglrx.o`, `fglrx_drv.so` and `fglrx_dri64.so`) in full, then name the `RBBM_STATUS` bits they test from the R3xx reference (route 2).

## 3D

- [software-now] **Vertex and fragment units.** The public R3xx and R5xx documents describe the programmable vertex stage and the fragment stage; what the IRIX driver programs for each and how its GL layer maps ATI extensions onto them. R300 and R350 differ in fragment capability; which differences IRIX exposes is not read. Next: route 1 on the vertex and fragment register writers of `fglrx_dri64.so`, then route 2 to name each register against the R3xx 3D reference (URL in sources/INDEX.md).
- [software-now] **Which GL extensions and limits each card reports.** The library names ATI-specific extensions; the per-card limits (texture size, program length) are unread. Next: strings of `libGL.so` in each ABI directory. `libGLcore.so` is a stub per the binaries notes, so the extension names come from `libGL.so`. Also the limit-setting code in `fglrx_dri64.so`, and route 5 for published `glxinfo` output.
- [software-now] **Multipipe and compositor interplay.** What `SGIOMPdmx_dri.so`, `sgcombine` and the compositor data do to the cards' output. Next: strings and entry points of `SGIOMPdmx_dri.so` and `SGIOMPdmx_dri64.so` (in root), and of `sgcombine` (stripped, so strings only). Then the public Scalable Graphics Compositor and OpenGL Multipipe user's guides (URLs in sources/INDEX.md, not read yet).

## Memory and display

- [software-now] **Video memory.** Size and type per card, local-memory versus system-memory use, aperture sizes. Next: route 1 for the driver's memory-map ioctls, checked against the memory-size tables the option ROM carries (option-roms.md, "Memory size"); route 2 for the aperture registers.
- [software-now] **Memory controller and GART set-up.** Neither the kernel attach path nor any constant-offset access in `fglrx.o` touches `MC_FB_LOCATION`, `MC_AGP_LOCATION`, `AGP_BASE` or the PCI GART (`AIC_*`) registers. The X driver's `r200_EnableCommonBusMaster` writes `AGP_BASE` and `MC_AGP_LOCATION` from two driver words (+6676 and +6672). Still open: who writes `MC_FB_LOCATION`, whether the PCI GART is used at all on IRIX, and what bus addresses the aperture maps to through the PIC. Next: `fglrx_drv.so` stores to 0x148 and 0x1d0 to 0x1ec; the AIC and MC field meanings in the R3xx reference (route 2); who writes the driver words at +6676 and +6672 that feed `AGP_BASE` and `MC_AGP_LOCATION`; accesses through computed offsets in `fglrx.o`.
- [software-now] **Interrupt bits.** `fglrx_intr` acknowledges bit 2 of `GEN_INT_STATUS` and clears bits 2 and 6 of `GEN_INT_CNTL`; Linux names neither bit. Checked: Linux 2.6.30 `radeon_drv.h` names bits 0, 9, 19, 25 and 26 of `GEN_INT_CNTL` and `GEN_INT_STATUS`, and neither bit 2 nor bit 6, so the "Linux names neither bit" claim holds for that header. Next: the same two registers in the xf86-video-ati submodule (needs a shallow initialise) and in the R3xx reference (route 2); `_r6x_enable_vsync_irq` and `_r6x_enable_framelock_irq` in full.
- [software-now] **Display output.** Scan-out, DACs, DVI and the Onyx4's image-sync and genlock paths; how the X driver programs modes. Next: the mode-set path of `fglrx_drv.so` (CRTC and DAC registers), then `gen-XF86Config` (in root), with the CRTC names from the R3xx reference (route 2). Residue, hardware-only and recorded, not scheduled: the physical genlock and sync connections, which no register read shows.

## Option ROM

- [software-now] **The x86 handlers of the images.** The init path (entry, register-script interpreters, set-up routines, external transmitter script) and the VBE handlers 0x00 to 0x0a, 0x10 and 0x15 with their mode-record table are read in [option-roms.md](option-roms.md#bios-code). Still unread: the handlers behind the video interrupt's function table (`0x1cac`) other than entry 00 in part, and the helpers the read handlers call: `0x0a11` (the mode-parameter block builder behind VBE function 0x01 and vendor function 0x09), `0x21e1` and `0x21fe` (mode set and its follow-up), `0x5dbb` (vendor function 0x0b), `0x7641` and `0x7674`, the state-routine callees `0x74e3`, `0x74ff`, `0x747b`, `0x74af`, `0x69a8`, `0x69f6`, `0x4133` to `0x42ff`, `0x71a7`, `0x71c3`, `0x6f5c` and similar beyond their first steps. Routes tried: disassembly of 16-bit code from the entry and from the dispatch tables, call-graph comparison of the three images. Next: read `0x0a11` and `0x21e1`, then `0x5dbb` and the state-routine callees.
- [software-now] **ATI tables the public driver does not read.** DAC programming, maximum colour depth, CRTC info, save mask and hardware config are present in all three images; their layouts are unknown. Next: the X driver's table readers in `fglrx_drv.so` (it prints "Connector Layout from BIOS"), then the legacy table layouts in `radeon_bios.c` of the xf86-video-ati submodule (needs a shallow initialise) and `radeon_combios.c` in the current Linux tree (URL in sources/INDEX.md; not in the 2.6.30 checkout).
- [software-now] **First header words and the signature block.** The words at header+0x00, +0x02 and +0x1e and the 32-bit value block at header+0x0e. Next: the readers in `fglrx_drv.so` (its BIOS parameter routine) and in `fglrx_attach` in `fglrx.o`, then the public `radeon_combios.c` for what the ATI header words mean. The BIOS init code does not read header+0x00, +0x02 or the signature words (every table access in the init path goes through slot offsets); read so far: the init path only.
- [software-now] **The sg3 to sg3a changes.** Memory-controller and memory-timing values differ (register 0x178, 0x17c, the indirect set indexes 0x11a to 0x120 and 0x122 and 0x124, and register 0x144), plus one small x86 helper. The meaning of the fields, and why two X2 images exist, is not known. Next: AMD's R3xx register reference for the memory-controller fields (route 2). The install's release notes are not in root, so the version-string part is missing-release-or-binary and does not hold up the first step.
- [software-now] **Which ROM a card gets.** Bits 7:6 of the register at offset 0x1a4 select `sg3.bin` (01) or `sg3a.bin` (00) in the flash tool. The strap source is not known. Next: what the AMD R3xx reference says the register at 0x1a4 reads back (route 2), and whether `fglrx.o` or `vga.a` read it at attach. Residue, hardware-only and recorded, not scheduled: the board wiring behind those bits, which no software read shows. Separately, the flash tool's table names device 0x4e44 with a `9700.bin` that is not in the install (missing-release-or-binary).
- [software-now] **How the flash tool compares versions, and what the serial flash is.** Next: disassemble `flash_rom` and the version routine in `sg2flash`.

## What IRIX programs at attach

- [software-now] **Attach sequence.** Answered for `fglrx_attach` and the early VGA path ([kernel-attach.md](kernel-attach.md)). Still open: what the card's own BIOS programs when `vga_init_board` runs it in the x86 emulator, which is the bulk of the chip's initial state. The emulator core, the emulated PC's memory map and the emulated BIOS interrupt handlers are now read statically in [kernel-attach.md](kernel-attach.md), so only the run remains. Next: run `vga.a`'s emulator path, or `biosemu` from the diagnostics, on the shipped option ROM images and log the register accesses (route 6, labelled as the BIOS's expectation).

## Register accesses

[registers.md](registers.md) lists the offsets the kernel object and the X module reach. These are not settled. Routes tried for each: the replay in `scripts/inventory.py`, the disassembly of the routine, and the Linux and Mesa register headers (AMD's R3xx 3D register reference was not read for this table).

- [software-now] **Byte lanes of the register aperture.** The kernel maps BAR 2 with the word-values flag ([kernel-attach.md](kernel-attach.md)), and the X module stores the PLL index as one byte at +11, the last byte of the dword at 0x8. Which byte lane of the chip's little-endian register that store reaches, and whether the X module's own mapping carries the same swap, is not read.
- [software-now] **Offsets with no public name.** `registers.md` lists them: 0x194, 0x294, 0x350, 0x354, 0x358, 0x878, 0x87c, 0x880, 0x884, 0x1700 and 0x26ac. The Linux and Mesa headers do not have them. Next: the AMD R3xx and R5xx references in `sources/INDEX.md`, then the bit tests and masks around each access in `fglrx_drv.so` (0x878 to 0x884 sit in `Set_MV_Mode`, next to 0x800 and 0x848).
- [software-now] **Roles of the matched registers beyond the bits read.** The 197 offsets of `fglrx_drv.so` are graded by offset only; the bit-level reading in `registers.md` covers the interrupt, PLL, engine-status, tile and CRTC-enable registers. Next: one routine at a time, starting with `R200AdjustFrame` at 0x422680 and `FIREGL_ShowOverlay`.
- [software-now] **Accesses the replay does not follow.** Calls through addresses built with `dsll32` and `dadd` (the kernel object's compositor I2C path, and every callee of `fglrx.o` reached that way) and the sites counted unresolved in `inventory/summary.tsv`. Next: read the unresolved sites of `fglrx_drv.so` by hand; the dword accessors' callers in `fglrx.o` are read in `registers.md`.
- [software-now] **The register at 0xf18 and the pointers at device record +400 and +992.** `firegl_addmap` reads one word and derives two pointers; their later use is not traced. Next: loads of device record +400, +992 and +1008 in `fglrx.o`.
