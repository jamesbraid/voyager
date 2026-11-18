# How the R300 and R350 attach to an Onyx4 brick: PCI behind a Bridge-family chip, not AGP

Verdict for the **Onyx4 UltimateVision G2 and G2N bricks under IRIX 6.5.30**, graded per statement. It does not cover
SGI Prism, which is a different attach with a different answer ([the inventory](../products/sgi-ati-inventory.md)).
Grades are the ones in `AGENTS.md` section 5; "software expectation" marks what public driver code would do.

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
     Which of the two a G2 carries is **unknown**: the PROM prints the generic word `Bridge` for the widget, and a
     revision 3 part is in neither the code nor a public table.
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

## A new lead: `pic.o` names a bus `agp/N` for some brick types

`pic_attach` (`pic.o`, 0x42c to 0x64c, read in full) calls `iobrick_l1type_get_nasid(nasid, widget)` for its widget.
If the returned brick-type character is 0x56 or 0x30 it names its two bus vertices `agp/0` and `agp/1`; for every other
value it names them `pci-x/0` and `pci-x/1`. **Established** as code. The strings are the only difference at that
site, so the naming alone changes no register traffic. What 0x56 and 0x30 are is **unknown**: `iobrick_l1type_get_nasid`
and its name-table routine are not defined in any object this workspace holds (they are undefined references in
`kernel.o`, `xbridge.o` and `pic.o`), and no public table read for this entry maps the two characters to a brick, so a
mapping to the G2 or G2N is not established. If a G2 is one of the two,
IRIX would call its PIC buses AGP while still handling the card as PCI config space, which would argue the physical
link is AGP-flavoured; if it is not, the strings belong to other I/O bricks. Neither is shown. Route: the L1 brick type
a G2 reports (a published `hinv` or `/hw` listing, or the module's L1 `brick` line), and the defining object of
`iobrick_l1type_get_nasid` if a kernel archive that holds it can be found.

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
([r300-acceptance-set.md](../model-contract/r300-acceptance-set.md)); bus-master DMA to plain bus addresses through the
bridge's translation; interrupt lines A and B through the bridge; no AGP capability. A guest on this platform then
never meets the fast-write handshake and never programs the chip's GART.
