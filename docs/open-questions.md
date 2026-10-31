# Open questions

Questions the binaries and published sources have not yet answered. One entry each: the question, every route already tried, and the next route. When an entry is answered, move the finding into the owning header or chapter and delete the entry. `AGENTS.md` section 5 gives the rules.

**Routes tried so far, for every entry below:** a listing of the file names the IRIX 6.5.30 install media carry for the Onyx4 (the `VOYAGER` graphics-board tag, the IP35 kernel set, the X server modules), extraction of each file to confirm it exists, and `file(1)` on the main ones. No binary has been disassembled or decompiled yet, so every entry below is unread, not exhausted.

**Routes no entry has taken yet**, to try in this order unless an entry says otherwise:

1. **The shipped objects.** `fglrx.o`, `is1.o` and the `vga.a` members are unstripped MIPS-IV relocatable objects reported with debug information; the X and DRI modules likewise. Function and variable names, line tables and strings come first.
2. **Public references.** AMD's R3xx register reference and R5xx acceleration guide, Linux `drm/radeon` r300 and Mesa's r300 driver ([docs/sources/INDEX.md](sources/INDEX.md)). They describe the public chips; use them to read the binaries, not to fill gaps.
3. It predates the Onyx4.
4. **Other IRIX releases** of the same files: a diff of code between releases often names a field.
5. **Published output from real machines**: `hinv -v`, `gfxinfo`, X server logs and PCI listings of Onyx4 systems in newsgroup and mailing-list archives.
6. **The shipped driver under an emulator.** Run it and log what it reads back and waits for. This shows the driver's expectation, not the board's behaviour, and is labelled so.

An entry that exhausts all routes is relabelled "unknown: no shipped software or published source depends on it" in its owning file, with the routes listed, and removed here.

## Host attachment

- **How the cards attach to the IP35 host.** Which crossbar widget and PCI bridge the cards sit behind, whether the X1 and X2 are PCI or PCI-X devices on the Onyx4 graphics board, whether any AGP-style aperture or GART exists, and how many cards a pipe holds. The kernel set that ships for the board includes the PCI-to-PCI bridge, PCI extension, bridge and crossbar objects (`pciio_ppb.o`, `pciiox.o`, `pcibr.o`, `pic.o`, `xbridge.o`, `xtalk.o`); which of them the Onyx4 path uses is not read. Next: route 1 on `fglrx.o`'s attach path and `master.d/fglrx`; route 3 for the bridge code.
- **Bus and interrupt wiring.** Interrupt line and routing, byte-swap and endianness handling for register and DMA access (the host is big-endian MIPS; the chips are little-endian), DMA address translation. Next: route 1 on `fglrx.o`, then `pcibr.o`.
- **How the host PROM brings the cards up.** Whether `ip35prom.img` runs the option ROM, what it leaves programmed, and why `biosemu` and an x86 emulator inside `vga.a` exist. The image is not an ELF. Next: route 1 on `biosemu` and the `vga.a` members; the PROM image by strings.

## Identity

- **PCI device and revision IDs per card.** Read from the headers of the three option ROM images, as PCI expansion ROM data structures: `sg2.bin` is vendor 0x1002 device 0x4e47; `sg3.bin` and `sg3a.bin` are vendor 0x1002 device 0x4e4b. Public lists name those IDs FireGL X1 (R300 GL) and FireGL X2 (R350 GL). Still open: the subsystem IDs and revisions the cards report in configuration space, whether the ROM IDs match what the driver's probe table accepts, and what separates `sg3.bin` from `sg3a.bin` (the images differ in the position of the PCI data structure, 0x194 against 0x184). Next: route 1 on the probe table in `fglrx.o`; diff the two images.
- **What "sg", `olsg` and `vpm` stand for and do.** The `usr/gfx/VOYAGER/bin` tools are `sg2flash` and `vpm`; the diagnostics are `olsg` and `olsgsys` with manual pages. Their purpose is a guess from names. Next: their manual pages and strings.

## Command processor and ring

- **Command processor interface.** Public sources describe a packet-based command processor fed from a ring buffer with a read pointer written back to memory. What `fglrx.o` and `fglrx_drv.so` program: ring base and size, pointer write-back, packet types used, indirect buffers. Next: route 1; then route 2 against Linux `r300.c`.
- **Microcode.** The command processor needs microcode loaded at start-up. Where IRIX gets it (inside `fglrx.o`, a separate file, or the option ROM), its format and size, and whether it is the same image the public chips take. Next: route 1, scan `fglrx.o` data for tables; do not commit the image.
- **Fence, idle and reset.** How IRIX waits for the engine, flushes caches and resets a hung engine. Next: route 1.

## 3D

- **Vertex and fragment units.** The public R3xx and R5xx documents describe the programmable vertex stage and the fragment stage; what the IRIX driver programs for each and how its GL layer maps ATI extensions onto them. R300 and R350 differ in fragment capability; which differences IRIX exposes is not read. Next: route 1 on `fglrx_dri64.so`, then route 2.
- **Which GL extensions and limits each card reports.** The library names ATI-specific extensions; the per-card limits (texture size, program length) are unread. Next: `libGL.so` strings; route 5 for published `glxinfo` output.
- **Multipipe and compositor interplay.** What `SGIOMPdmx_dri.so`, `sgcombine` and the compositor data do to the cards' output. Next: strings and the DRI driver's entry points.

## Memory and display

- **Video memory.** Size and type per card, local-memory versus system-memory use, aperture sizes. Next: route 1 for the driver's memory map ioctls; route 2.
- **Display output.** Scan-out, DACs, DVI and the Onyx4's image-sync and genlock paths; how the X driver programs modes. Next: `fglrx_drv.so`, then `gen-XF86Config`.

## What IRIX programs at attach

- **Attach sequence.** The order of configuration-space writes, register writes and waits from probe to first display. Next: route 1 on the attach path of `fglrx.o` and `vga.a`, then route 6.
