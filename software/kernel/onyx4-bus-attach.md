# How the R300 and R350 attach to an Onyx4 brick: PCI behind a Bridge-family chip, not AGP

Verdict for the **Onyx4 UltimateVision G2 and G2N bricks under IRIX 6.5.30**, graded per statement. It does not cover
SGI Prism, which is a different attach with a different answer ([the inventory](../products/sgi-ati-inventory.md)).
Grades are the ones in `AGENTS.md` section 5; "software expectation" marks what public driver code would do.

## Read again from the IRIX 6.5.22 kernel

The bridge, driver and framework objects of the 6.5.22 Onyx4 patch were read in full and carry the details this page summarises:
[attach and first writes](r300-kernel-attach.md), [interrupts](r300-kernel-interrupts.md), [DMA and every bridge write](r300-kernel-dma.md),
[vga.a, gfxs.a and the ioctl interface](r300-kernel-vga-gfx.md) and [topology, the brick type check and ImageSync](r300-kernel-topology.md). What
they change here: the memory BARs and bus mastering come from the bridge; the DMA path is the bridge's direct 32-bit window with a translated-window
fallback (a 64-bit path only on a PCI-X bus), and Device register bit 19 is the direct-window byte swap, left clear for the R300; the 6.5.22 interrupt
handler acknowledges nothing; the L1 type 0x56/0x30 is the CG-brick.

## Verdict

1. **IRIX drives the card as a plain PCI function; it never uses AGP.** **Established** for the shipped software
   (every claim below is a whole routine read, or a symbol or string scan of a whole object):
   - `fglrx_attach` finds the card through the PCI layer (`pciio_driver_register` for the ID table, `pciio_config_get`
     for identity, `pciio_pio_addr` for BARs 0 to 2, the expansion ROM and the legacy windows, `pciio_intr_alloc` with
     both interrupt lines for the interrupt) and reads and writes PCI configuration space as an ordinary function
     ([kernel-attach.md](kernel-attach.md#fglrx_attach-in-order), steps 1 to 11).
   - The X module parks the AGP window: `AGP_BASE` (0x170) and `MC_AGP_LOCATION` (0x14c) both become 0xffffffff, and no
     routine of the kernel object or X module touches the chip's GART registers `AIC_*` (0x1d0 to 0x1e0) or
     `AGP_CNTL` (0x174) ([kernel-attach.md](kernel-attach.md#command-processor-start-up-x-server-module)). The card reaches
     host memory by the bus addresses `pciio_dma_addr` returns.
   - The kernel objects that carry the bus code are `pcibr.o`, `xbridge.o`, `pic.o` and `pciio_ppb.o`. A string scan of
     `fglrx.o`, `vga.a`, `is1.o`, `kernel.o`, `pcibr.o`, `xbridge.o` and `pic.o` finds no `tioca` or `tiocx` string: the
     Altix-family AGP bridge has no code on this platform. (`fglrx.o` and `pic.o` do carry the word `agp`; see below.)
2. **The card sits behind a Bridge-family chip that is the brick's XIO widget.** **Observed** (published hinv captures)
   and consistent with the code:
   - A public PROM inventory of an Onyx4 prints, per pipe, a `CGBRICK` module entry with `Bridge`, `ASIC BRIDGE Rev 3`
     at XIO **widget 10**, then an adapter `PCI VGA Graphics (pci id 1 function 0)` and an adapter ID line
     `Vendor 1002 Device 4e47 class 3 subclass 3 (pci id 1 function 1)` (forum thread 16728909 in
     [INDEX.md](../../references/documents/INDEX.md), post dated 2014-08-30). A G2N inventory in a second public thread
     shows the same entries at widget **15** on module 001c02 (forum thread 2263, 2020-07-05), next to an `XBOW`
     entry for the node. Both are **observed**. The printed "function" is the PROM's locator, not proven to be the raw PCI
     function number; neither capture is paired with a `gfxinfo`, so which chip a given card is stays in the inventory
     page.
   - The kernel's pipe walker and `vga_check_for_pic` accept exactly two bridge parts as the card's parent: a PIC (part
     0xd102 for bus 0 or 0xd112 for bus 1) or an XBridge (0xd002); nothing else is accepted
     ([kernel-attach.md](kernel-attach.md#the-pipe-list-gfxsaklconfigo), `vga_check_for_pic`). **Established** as code.
     Which of the two a G2 carries is **inferred** to be a PIC, not established: the PROM prints the generic word `Bridge` for the widget, and a
     revision 3 part is in neither the code nor a public table, but the only code that treats the graphics brick type specially is the PIC's
     ([r300-kernel-topology.md](r300-kernel-topology.md#widgets-and-the-pic)).
   - Which of `fglrx_attach`'s two mapping paths an Onyx4 takes is **inferred**: the PROM inventory lists the VGA adapter
     directly under the bridge entry and no PCI-to-PCI bridge between them, so the card is the bridge's own device (the
     flag-0 path, BARs through the bridge's per-device windows). The routine's flag-1 path, one connection point
     further, is for a card behind a bridge and is not shown by any capture.
   - "pci id 1" is the bridge's device number. On a PIC the bridge is PCI device 0 and the usable devices are numbered
     from 1, which the kernel's slot arithmetic also reflects (the record's slot is one less than the device number on a
     PIC, `find_vga_noprom_pipe`). **Inferred** from that arithmetic and from the published PIC note in Linux
     `arch/ia64/include/asm/sn/pic.h`; it makes the first pipe PCI device 1 on its bus, matching the guide's X bus id
     `PCI:2:0:0` for the first pipe (007-4634-002, **established** as the guide's statement; an owner's X configuration
     in a public thread shows `PCI:6:0:0`, owner report).
3. **The two pipes of a brick plausibly hang off the two buses of one PIC.** **Inferred**, from three facts that
   together fit: a PIC has two PCI buses (`pic_attach` makes two bus vertices; the pipe walker keys a flag on the part
   numbers 0xd102 and 0xd112 and adds 0x800000 to the bus address for bus 1), the capture prints two `CGBRICK` entries
   at one widget number, and a brick has two pipes. Nothing read states the pipe-to-bus assignment.
4. **The brick reaches the host over XIO.** **Established** as the published guide's statement (007-4634-002, G2 and G2N
   sections, printed pages 1 to 2 and 20): a G2 is a graphics-only XIO device (a Crosstown2 connector on a NUMAlink
   cable, 800 MB/s each way); a G2N has a node board and joins the compute fabric over NUMAlink. The image-sync card and
   base I/O stay in host PCI slots, not in the brick.
5. **Whether the board has an AGP-to-PCI(-X) bridge chip between the Bridge and the R300 is unknown.** The R300 and R350
   are AGP chips on PC boards (the public ID list names 4e47 and 4e4b `FireGL X1` and `X2 AGP Pro`), so a bridge chip on
   the SG2 board is plausible; an owner calls early cards PCI-X FireGL X1 (owner report, forum thread 2263). It is
   invisible to the software IRIX runs: a bridge chip would show as another PCI device in a configuration walk, and
   none of the code read here enumerates one. **Unknown**; hardware-only residue, recorded in
   [questions/open-questions.md](../../questions/open-questions.md#host-attachment).

## `pic.o` names a bus `agp/N` for the graphics brick type: answered

`pic_attach` (`pic.o`, 0x414) calls `iobrick_l1type_get_nasid(nasid, widget)` for its widget. If the returned brick-type character is 0x56 or
0x30 it names its two bus vertices `agp/0` and `agp/1`; for every other value it names them `pci-x/0` and `pci-x/1`. **Established** as code.
The defining object turned up in the IRIX 6.5.22 maintenance-release kernel set as `l1_command.o`: **0x56 ('V') and 0x30 ('0') are the same
brick type, the CG-brick** (`iobrick_L1bricktype_to_name` returns "CGbrick" for it; the public PROM listings call the Onyx4 graphics entries
`CGBRICK`, **observed**). The folding table and the full list of brick names are in
[r300-kernel-topology.md](r300-kernel-topology.md#the-io-brick-l1-type-check-answered). The naming changes no register traffic and the bus is
still handled as PCI(-X): `agp/N` is only the vertex name of a CG-brick's PIC buses, so it does not argue that the physical link is AGP. Which brick
type a G2 and a G2N each report remains **unknown**.

`fglrx.o` also carries ATI's generic `agpsupport.c` unit and buffer types `_FIREGL_AGP` and `_FIREGL_AGPBUF` in its
allocator statistics; **established** that the code exists, and the X module's parking of the aperture (verdict 1) is why
it does not run on this platform.

## What Linux on SN2 adds, and why it is not this

Linux 3.0's `arch/ia64/sn/pci/tioca_provider.c` and `tioca.h` describe the TIO-CA, the AGP bridge of the Altix-family TIO
chip: a GART with AGP and PCI apertures, AGP fast writes through `tioca_fastwrite_enable`, and an AGP-specific DMA
swap. `tiocx.c` only registers TIO-CX widgets (other corelet devices) and plays no part in graphics. All of it is
**software expectation** for hardware built around the TIO and SHub 2, which the Onyx4's IP35 Bedrock hub and XIO do not
use: the IRIX kernel has no TIO-CA object (verdict 1), and the captures show IP35 node boards. A model of the IRIX
Onyx4 therefore needs the Bridge-family PCI path, not the TIO-CA GART. SGI Prism, on the other hand, is observed to use
TIO-CA AGP; see [the inventory](../products/sgi-ati-inventory.md).

## What a model must offer (software expectation of IRIX)

Configuration space for vendor 1002 and the 4e47 or 4e4b IDs, class 3; BAR 0 frame buffer, BAR 1 I/O, BAR 2 register
window and an expansion ROM BAR, with the bridge's byte-lane modes per window
([r300-acceptance-set.md](../model-contract/r300-acceptance-set.md)); bus-master DMA to plain bus addresses from the bridge's direct window (PCI 0x80000000 and up) or its translated window (0x40000000 and up, 16 KB pages); interrupt lines A and B through the bridge; no AGP capability. A guest on this platform then
never meets the fast-write handshake and never programs the chip's GART.

## Does anything run without the card's option ROM?

No: the ROM is executed and parsed, so a model needs a ROM image or a replacement that satisfies the fields below. Read
from the IRIX 6.5.22 binaries of the Onyx4 patch SG0005448 (`fglrx.o`, `vga.a`, `fglrx_drv.so`, `fglrx_dri64.so`; the same
patch ships `sg2.bin` and `sg3.bin`, see the end) and from the 6.5.30 readings already in this workspace
([kernel-attach.md](kernel-attach.md), [option-roms.md](../ucode/option-roms.md)). The IP35 PROM is the 6.5.30 image
read earlier; the 6.5.22 PROM was not read here.

1. **Kernel `vga.a`: executes it, and fails the attach without it.** **Established** (whole routines read in the 6.5.22
   build). `vga_init_board` builds an x86 emulator context (`xf86InitInt10`), runs the ROM's init entry
   (`xf86ExecX86int10`), then sets VESA mode 0x107 (1280x1024) through `vga_set_vesa_mode` (two emulated `int 0x10` calls,
   AX = 0x4f02 then 0x4f03). `vga_shadow_bios` accepts an image only if bytes 0 and 1 are 0x55 0xaa (or bytes 3 and 2, as a
   word-swapped image), then copies it. A missing ROM, a bad signature, a failed context or init, or a failed mode set logs
   a message and `vga_attach` takes its failure path, which frees the board and returns an error (read from the branch structure; the cleanup call order was not traced further). The checksum routine `bios_checksum` is defined but no
   member of `vga.a` calls it: the 8-bit sum is **not** checked here.
2. **IP35 PROM: the same.** **Established** in the 6.5.30 image (see
   [the PROM's VGA bring-up](kernel-attach.md#the-ip35-proms-vga-bring-up-ip35promimg)): it enables the ROM through
   configuration offset 0x30, checks 0x55 0xaa, copies 64 KB to offset 0xc0000 of an emulated PC and calls the init entry
   at offset 3 with the bus, device and function in AX, then the same VBE calls. No FCode image is looked for and none is in
   the images (option-roms.md). Whether it does this for every graphics board or only the console pipe is still open.
3. **Kernel `fglrx.o` `fglrx_attach`: probes and copies it, but a bad ROM is not fatal.** **Established.** It reads
   configuration offset 0x30, writes all ones to size it, enables it, maps it, and on a 0x55 0xaa image copies it into
   kernel memory. A missing, unmappable or badly signed ROM only logs ("ROM NOT VALID", "ROM present - but sig NOT VALID",
   "cannot get to ROM space", with an "endian swapped" note) and the attach goes on. The copy is exported to user space as a
   mappable region (map key 0x8050, in `fglrx_map`); that is the only use of it in the kernel object, which has no table
   parser (**established** by the strings and by every access of the three record words that hold it).
4. **X module `fglrx_drv.so`: parses it, and `PreInit` fails without it.** **Established** for `R200GetBIOSParameters`
   (whole), the PLL routine (whole) and their caller `R200PreInit`. It reads 64 KB (0x10000 bytes) from the legacy video
   BIOS address 0xc0000 (a "BIOS address override" option can change the base) into a buffer. If that fails it prints
   "Failed to access Video BIOS!"; if bytes 0 and 1 are not 0x55 0xaa it fails silently; either returns 0, and `R200PreInit`
   then prints "GetBIOSParameter failed" and abandons the card. The fields it reads, all in the legacy ATI table that the
   word at ROM offset 0x48 points to (T, `option-roms.md`; slot names are Linux's, **inferred** for the meaning):
   - ROM 0x00, 0x01 (signature), 0x48 and 0x49 (the pointer T);
   - T+0x02 and T+0x03 (kept as two bytes);
   - T+0x30, the PLL info pointer, then bytes at +0x08/+0x09, +0x0e to +0x19 of the PLL block (reference clock, divider and
     output limits by their Linux layout; **inferred**). If the ROM is absent this routine instead uses built-in defaults
     (prints "Video BIOS not detected, using default PLL parameters!" and loads the constants 2950, 12500, 35000, 65 and
     10300), so the PLL part alone has an embedded fallback, but the caller above it does not;
   - T+0x40, the LCD info pointer: when 0 the code prints "No Panel Info Table found in BIOS!" and carries on (**established**;
     the shipped images have 0 here);
   - T+0x32, the TV info pointer: when non-zero the block must start with the three bytes `$TV` ("Incorrect sig for BIOS TV
     Info block" otherwise); the shipped images have 0;
   - T+0x50, the connector info pointer, which is read and printed as "Connector Layout from BIOS" (entry layout not decoded
     here: **unknown**; a zero pointer takes the other branch). The shipped images have it non-zero.
5. **DRI module `fglrx_dri64.so`: no dependence found.** **Established** as a string scan: none of ROM, BIOS, ATOM, PCIR or
   VBIOS occurs in it. It does not touch configuration space (it is user code), so it takes the board data from the X module.
6. **Nothing embeds a replacement for the ROM's init.** **Inferred** from the above and the earlier readings: the kernel and X
   module write only a handful of registers at start-up, none of the memory-controller timing, memory-type, DAC or clock
   scripts that the ROM carries ([option-roms.md](../ucode/option-roms.md#asic-init-memory-controller-and-clock-scripts)); the
   only embedded default is the five PLL constants above. The chip's starting state is whatever the ROM's emulated init left.

**For a model.** It cannot run IRIX without a ROM image or a stand-in. The stand-in must be served at configuration offset
0x30 (with the size-probe behaviour of item 3) and in the 0xc0000 shadow the PROM and the kernel build, and must contain: the
0x55 0xaa signature (a replacement is free of the 8-bit checksum); the pointer at 0x48 to a table with the PLL pointer at +0x30,
the connector pointer at +0x50 and zeros at +0x32 and +0x40; a PLL block and connector block at those pointers; and an x86 init
entry at offset 3 that returns, installs an `int 0x10` handler, and answers AX = 0x4f02 and 0x4f03 with AL = 0x4f. The chip
state the real init establishes is **unknown** and would have to be given by the model's reset values. That the minimal
x86 stub above is enough is **inferred**, and the test differs by caller. The kernel's `vga_set_vesa_mode` returns 0 when AL is not 0x4f after 4f02 and otherwise the BX of 4f03, and `vga_init_board` fails the attach on a zero return, so the stub must answer 4f02 with AL = 0x4f and 4f03 with a non-zero BX. The IP35 PROM only prints a note for a bad AL after 4f02 and carries on; it fails on a zero BX after 4f03 (BX is never compared with the requested mode; [ip35-prom-graphics.md](../firmware/ip35-prom-graphics.md)). Neither the PROM nor `vga.a` enables bus mastering or assigns the memory BARs: the bridge code in `pcibr.o` does both before any driver attach ([r300-kernel-attach.md](r300-kernel-attach.md#how-the-card-is-found)).

**Holdings.** The Onyx4 patch carries two ROM images, so the claim that none is held is not right: `usr/gfx/ucode/VOYAGER/sg2.bin`
(PCI 1002:4e47) and `sg3.bin` (1002:4e4b), each 45056 bytes, valid 0x55 0xaa and PCIR headers, 8-bit sum 0, PLL, connector
tables present and LCD and TV tables absent. SHA-256 of the 6.5.22 patch copies: sg2.bin `91ea55cf0943250b91e12c3a002ccc356fdfbc12143ed93176fb4e5783714008`,
sg3.bin `f060d7d7310f6662536581ea356193143b8893c88c5d4fccf94f1881f1dff864`. They are the flash images `sg2flash` writes
(the 6.5.30 `sg2.bin` is 40960 bytes, so the revision differs). Both ship in IRIX 6.5.22 patch SG0005448 (`patchSG0005448.tardist`);
the images stay out of this repository.
