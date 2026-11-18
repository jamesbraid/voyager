# SGI products that shipped an ATI R3xx or R4xx GPU, graded one product at a time

Which SGI systems carried an ATI R300, R350 or R420 part, how each attaches, and what each is graded on. The attach is
**not one answer for the family**: the Onyx4 under IRIX is a PCI function behind a Bridge-family chip with the AGP
aperture parked, while the Prism under Linux is an AGP card behind a TIO-CA bridge. Grades: **established** (a published
document or public source read for the statement), **software expectation** (public driver code a guest runs),
**observed** (a published capture, read as posted), **inferred** (reasoning stated), **unknown** (routes tried listed).
Sources are in [INDEX.md](../../references/documents/INDEX.md); a capture is cited by thread and date.

## Summary

| Product | Board and chip, PCI ID | Attach | OS | Pipes, displays | Grade |
|---|---|---|---|---|---|
| Onyx4 UltimateVision G2 brick | manual: FireGL X2-256, R350; captures: 1002:4e47 (FireGL X1, R300) plus 1002:4e67 | PCI function(s) behind a Bridge-family chip (PIC or XBridge) at an XIO widget; AGP parked | IRIX 6.5.30 | 2 pipes per brick, 2 displays per pipe | PCI behind Bridge: observed and established as the IRIX code path; electrical link: unknown |
| Onyx4 G2N brick | same boards | same path at widget 15, node attached by NUMAlink | IRIX | 2 and 2 | observed (one capture) |
| Onyx 350 host with Onyx4 bricks | 4e47 plus 4e67 pairs, `Graphics board: SG2` | as the Onyx4 | IRIX | 2 per brick | observed; an Onyx4 inventory in a 350-family chassis, not a stock option |
| Stock Onyx 350 | no ATI part found | InfiniteReality4 or VPro | IRIX | n/a | unknown for ATI (none found) |
| SGI Prism XG2N (rack) | FireGL X3-256, R420, 1002:4a4d plus 1002:4a6d; option list also names X2PRO-256 | **AGP behind one TIO-CA per pipe** | Linux on SN2 (ProPack), fglrx | 2 pipes per XG2N, 2 channels per pipe | AGP: observed plus software expectation |
| SGI Prism deskside | AGP 4X/8X board, chip not named | AGP slots AGP-5 and AGP-6 | Linux | 1 or 2 pipes, dual DVI-I | AGP slots: established; chip unknown |
| FireGL T2, other SGI products | pci.ids lists T2; no SGI use found | n/a | n/a | n/a | unknown |

## Onyx4 UltimateVision, G2 and G2N bricks (IRIX)

- **Board and chip.** The porting guide, 007-4297-001 (printed page 8), says each pipe is an ATI FireGL X2-256 (R350, 256 MB,
  four geometry and eight pixel pipelines in its wording); **established** as the product description. Every public capture
  instead shows 1002:4e47, the R300 `FireGL X1`, with a second ID 1002:4e67 (`FireGL X1 (Secondary)` in the PCI ID
  list). The IRIX driver tables claim 4e44, 4e47, 4e46, 4148 and 4e4b, never 4e67 ([kernel-attach.md](../kernel/kernel-attach.md#which-cards-the-driver-claims),
  **established**), so the secondary function is left unbound; that it is the card's second function is **inferred** from
  the list's name and from the Prism capture below, where every pipe has a primary and a secondary function. No capture
  includes a `gfxinfo`, so which chip a given brick carries is **unknown**; keep R300 (observed) and R350 (documented)
  as separate options.
- **Attach.** Graded in [onyx4-bus-attach.md](../kernel/onyx4-bus-attach.md): a PCI function on a Bridge-family chip that
  is the brick's XIO widget (a G2 reaches the host over XIO, a G2N over NUMAlink), observed at widget 10 (G2, 2014) and
  widget 15 (G2N, 2020); IRIX never uses AGP; whether a bridge chip converts AGP on the board is **unknown**.
- **Pipes and displays.** Two pipes per brick, two display devices per pipe, up to 16 bricks, 32 pipes and 64 displays
  (007-4297-001 p. 8 and 007-4634-002; **established**). The memory is 256 MB per pipe, split 128 MB for textures and
  display lists and 128 MB for frame buffer, command FIFO and pbuffers (the manual, X2-256; an owner of an X1 system
  reports 128 MB: **unknown** for the X1).
- **OS.** IRIX 6.5.30 with ATI's FireGL driver (`fglrx`) and an XFree86-based X server (007-4297-001).

## Onyx 350 and the stock Onyx 350

- A public Onyx 350-labelled `hinv -vvm` capture (IRIXNET forum thread 2263, 2021) lists two each of 1002:4e47 and 1002:4e67
  at one PCI slot. The thread's owner describes an Onyx 350 prototype chassis rebuilt as the base compute module of an
  Onyx4 with two Onyx4 bricks, and an Onyx4 expansion module as an Onyx 350 module with a different front plate. So this is
  an Onyx4 inventory in a 350-family chassis. **Observed**; the history is owner commentary.
- The Onyx 350 guide (007-4632-001) describes a base module that connects to an InfiniteReality pipe over a Crosstown2 XIO
  port; captures of stock modules show IR4 and VPro boards, not ATI. **Unknown** for an ATI option on a stock Onyx 350:
  none was found, and the guide was not read end to end for it. If a model offers R300 pipes on an Onyx 350 host, they are
  Onyx4 bricks on XIO, with the Onyx4 attach above, not an AGP card in the module.

## SGI Prism (Linux on SN2)

- **Products.** An XG2N graphics module is a 2U unit with two graphics pipes, zero or two Itanium 2 processors and an L1
  controller; Power and Team configurations add compute, CPU-expansion and router modules (Prism guides 007-4701-003 and
  -004, **established**; the Extreme guide 007-4774-001 is the same module family, graphics pages not read).
- **Board and chip.** The rev 004 guide's figure captions name two variants, FireGL X2PRO-256 and FireGL X3-256
  (**established** as captions). A public Prism boot log and `lspci` list six `ATI R420 JM [FireGL X3] (rev 80)` at
  PCI IDs 1002:4a4d, each with a second function of class 0380 and ID 1002:4a6d (**observed**); the PCI ID list and Linux
  `drm_pciids.h` name 4a4d as the R420 FireGL X3-256 (software expectation). The OpenGL string reads
  `FireGL X3-256 (FireGL) (GNU_ICD)` under fglrx 8.12.1 (2005-12-20) on a 2.4.21 ProPack kernel. The X2PRO-256 chip and ID are
  **unknown** (the name resembles the 4e4b `FireGL X2 AGP Pro`: **inferred**, no capture).
- **Attach: AGP behind a TIO-CA, one per pipe.** **Observed**: the same boot log shows `tioca_pci_init` six times, six
  GART instances, `agpgart: AGP aperture(s) are 1024M @ 0x80000000`, `[fglrx] AGP detected, AgpState = 0x7d00023a`,
  `sgi_tioca_agp_enable: bridge 0 PCI bus 23` and `AGP enabled, AgpCommand = 0x7d006302`; each pipe is on its own PCI bus
  (23, 27, 39, 43, 55 and 59 decimal), one TIO-CA per pipe. **Software expectation** (Linux 3.0 `tioca_provider.c`,
  `tioca.h`, read in full): the TIO-CA builds a GART with AGP and PCI apertures, enables AGP fast writes by scanning for the
  AGP capability, and works around an ATI configuration-space problem after BIOS execution; the later-removed SGI TIO AGP
  driver is described in the public linux-ia64 thread. This is the opposite of the Onyx4 answer, and for a model:
  offer the AGP capability and the TIO-CA GART path to a Prism guest, not to an IRIX guest.
- **Pipes and displays.** Two pipes per XG2N, two channels per pipe (dual DVI-I); six pipes in the captured rack. The GL
  extension list shows ARB fragment programs, 3Dc texture compression and 24-bit visuals with 4 or 6 samples (observed).
- **Deskside.** The deskside guide (007-4772-002) puts one or two graphics boards in AGP-5 and AGP-6 slots (AGP 4X/8X,
  dual DVI-I) beside eight PCI-X slots: **established** for AGP slots; the chip, the PCI ID and the bridge are **unknown**,
  and TIO-CA behind them is **inferred** only.

## Other SGI products checked

No SGI Fuel, Tezro, Octane or Altix 350 document read lists an ATI option; Fuel and Tezro captures show VPro boards.
Posts say ProPack graphics also ran on Altix 350 (owner comment): **unknown**. The PCI ID list has `RV350 GL FireGL T2`
(4154, 4157); no SGI product with one was found.

## Chip differences a model must keep as parameters

R300 and R350 against R420, from Mesa 20.3.5 (`r300_chipset.c`, `compiler/radeon_code.h`; software expectation) and AMD's
R3xx reference (R300 and R350 only): vertex engines 4 against 6; fragment ALU instructions 64 against 512; fragment texture
instructions 32 against 512; temporaries 32 against 64; constants 32 for both; texture indirections 4 for both; the vertex
program limits (256 instructions, 256 constants, 32 temporaries) are the same in Mesa for both. R420 adds 3Dc texture
compression and a different DXT swizzle (Mesa, `is_r400`). R300 and R350 use 4x4 Z plane compression and parts from the
RV350 on can use 8x8 (AMD R5xx guide 10.4.9). The pixel-pipe counts differ in kind: registers and Linux count two quad
pipes for R300 and R350, while SGI's guide says eight pixel pipelines; do not mix the units. R420 numbers come only
from Mesa; the AMD R3xx document does not cover it. The word formats are in
[r300-shader-formats.md](../opengl/r300-shader-formats.md).

## Open items

1. Which chip each Onyx4 variant has: a `gfxinfo -v` or `hinv -vvv` from a G2 and a G2N; look for 4e4b.
2. Whether the SG2 board has an AGP-to-PCI(-X) bridge: hardware-only; see [onyx4-bus-attach.md](../kernel/onyx4-bus-attach.md).
3. The Prism X2PRO-256 chip and ID, and the secondary ID 4a6d (not in the PCI ID list read): a Prism `lspci` with that
   option; a newer list snapshot.
4. The Prism deskside chip and bridge; the Extreme guide's graphics pages.
5. A published SGI TIO-CA chip description (the local sources are Linux only).
6. Any ATI option listed for stock Onyx 350, Fuel, Tezro or Altix 350: SGI option and price lists.
7. R350 and R420 pixel-pipe counts as modelled: AMD R4xx documentation, not held.
