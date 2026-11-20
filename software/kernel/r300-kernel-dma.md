# R300 DMA in the IRIX 6.5.22 Onyx4 patch: how host memory reaches the card, and every bridge write behind it

How the 6.5.22 kernel makes host memory visible to the R300 (ring, scratch, buffers), which PIC register writes that takes, and
which bridge and chip registers set up the ring. Sources, grades and method are in
[r300-kernel-attach.md](r300-kernel-attach.md#objects-read-and-how). Bridge routines are the 6.5.22 base release's
(`pcibr.o`, `pic.o`, `xbridge.o`, `pciio.o`); the card-side routines are the patch's `fglrx.o`, plus spot checks of the patch's
`fglrx_drv.so` for the ring registers. Register and bit names for the bridge are **software expectation** from the public Linux
`bridge.h` (the Bridge, whose Device register layout the shared `pcibr` code uses for all four bridge types); offsets and values
are **established** from the code.

## Short answers

- **The card never uses the chip's own GART or AGP.** It is handed plain PCI bus addresses by the bridge. Those are either a
  32-bit address in the bridge's *direct window* (PCI 0x80000000 to 0xffffffff), a 64-bit address with attribute bits (only when
  the bus runs PCI-X), or an address in the bridge's *translated window* (PCI 0x40000000 and up, through page-table entries
  in the bridge). `pciio_dma_addr` tries direct first and falls back to translated.
- **Device register bit 19 is not the direct-versus-translated switch.** It is the byte-swap bit for *direct-window* data
  (Linux `BRIDGE_DEV_SWAP_DIR`). Which of direct or translated applies is chosen by the **PCI address** the card is given.
  For the R300, which passes the "clear byte swap" flag, bit 19 is left **clear** in this release on a PIC. Details below.
- **Ring base, size, read-pointer write-back, scratch** are programmed by the X module in user space (values below); the kernel
  supplies the memory and validates the three maps.

## How a kernel buffer becomes a bus address

**Established** for `fglrx_irix_kern_addmap` (`fglrx.o`, 0xb0b0) and `__ke_pci_alloc_consistent` (0xb484), the only two routines
that map memory for the card (called from `drm_alloc_pages`, 0xd984, and `drm_alloc_pages_consistent`, 0xdcd0):

1. Allocate the pages on the card's node (`fglrx_irix_kern_malloc_node` with the node halfword at record +0x1e0 and flag 0x8000).
2. Take the physical address (`kvtophys`).
3. `pciio_dma_addr(dev, 0, phys, size, &dmamap, 0x2022)` with the card's PCI device at record +0x198. The flag word is
   0x2000 + 0x20 + 0x2: "clear byte swap" (public name `PCIIO_WORD_VALUES`), "data" (prefetch on, `PCIIO_DMA_DATA`), "do not sleep"
   (`PCIIO_NOSLEEP`) in the public Linux 2.6 SN `pciio.h` names (**software expectation**; the code's tests of each bit match
   those meanings, read in `pcibr.o`). There is no 64-bit flag (0x40) and no fixed-window flag (0x1) in it.
4. Keep a 0x50-byte record (kernel address at +0x28, size +0x30, dma-map handle +0x40, **bus address +0x48**) in an AVL tree under a lock; the
   ioctls hand the bus address to user space as the map's address and `fglrx_irix_kern_freemap` releases it with
   `pciio_dmamap_done`/`pciio_dmamap_free`.

`pciio_dma_addr` (`pciio.o`, 0x31c) is: ask `pciio_dmatrans_addr` for a direct translation; if that returns 0, allocate a
`pciio_dmamap` and ask it for a translated address; free the map if that also fails. Both go through `pcibr_dmatrans_addr`
(`pcibr.o`, 0x32a0) and `pcibr_dmamap_alloc` (0x23d4) respectively. The host side is trivial: `hub_dmatrans_addr` in `kernel.o`
(0x22fdc, 8 bytes) returns the physical address unchanged, so the bridge sees the IP35 physical address itself, whose bits from 33
up are the NASID. **Established.**

### Direct 32-bit window

`pcibr_directmap_init` (0x1080), run once per bus at `pic_attach2`:

- reads the home node (the node named by the device-admin string, else node 0), asks the host for the translation of that
  node's base (`nasid << 33`), and writes the **DIR_MAP** register (0x80, 64-bit on a PIC; 32-bit at 0x84 on a Bridge or XBridge):
  offset field bits 16:0 = (base >> 31), i.e. the window's base in units of 2 GB; target widget id bits 23:20 = the hub's widget id;
  bit 17 ("add 512 MB") set only when the translated base equals 0x20000000, otherwise cleared. The code keeps the base in
  the soft state (+0x50) and the target in +0x58.
- So **PCI 0x80000000 + n maps to physical (node base) + n for n below 2 GB.** `pcibr_dmatrans_addr` returns
  `(host address - base) | 0x80000000` only when the host address lies in that 2 GB, in the same widget target, and the whole
  span fits. A buffer outside the window makes the direct attempt fail and `pciio_dma_addr` falls back to the translated path.
- To use it the bridge ORs the mask 0x8f8000 into the slot's **Device(n)** (`FUN_00100088`, `pcibr.o` 0x0, the "try set device"
  routine with a reference count per mode): bits 23, 19, 18, 17, 16 and 15 (Linux `DIR_WRGA_EN`, `SWAP_DIR`, `PREF`, `PRECISE`, `COH`,
  `BARRIER`). The flags then adjust it: "data" (0x20) clears bit 15 and sets bit 18; "command" (0x10) the opposite; write-gather
  flags toggle bits 24 and 23; **"clear byte swap" (0x2000) clears bit 19** (on a Bridge it also clears bit 20); "set byte swap"
  (0x1000) sets bit 19 (bits 20 and 19 on a Bridge). Only bits whose requested value differs and that fall in the mask are
  changed; Device(n) is rewritten through `pcireg_device_set` and a read of the flush register follows.
  For the R300 (flags 0x2022) on a PIC the mask is 0x8f8000, "data" and "clear byte swap" apply, and bit 19 ends **0**.

### The bit 19 answer, in full

| Question | Answer (established unless noted) |
|---|---|
| What selects direct versus translated? | The PCI address the card is given: 0x80000000 and up is the direct window, 0x40000000 to 0x7fffffff is the translated window, and 64-bit addresses carry attributes in the top byte. Not a Device bit. |
| What is Device bit 19? | Byte swap for data in the direct 32-bit window (`SWAP_DIR`, software expectation). The translated window has its own swap, bit 20 (`SWAP_PMU`) on a Bridge and **PCI address bit 29** on an XBridge or PIC (`pcibr_dmamap_alloc` ORs 0x20000000 into the address when swap is wanted). 64-bit direct addresses carry swap in **address bit 55**. |
| What does IRIX write for the R300? | No bit 19 or 20 write at all on a PIC for translated or 64-bit mappings (`FUN_00100088` rewrites the mask 0x898000 to 0x818000 and 0x1100000 to 0x1000000 for types other than the Bridge). For the 32-bit direct mapping, bit 19 is cleared (flag 0x2000). |
| What is its value at attach? | `pcibr_slot_device_init` (0xdbf0) writes Device(n) = (old with bit 27 cleared) OR 0x00010000, plus 0x02000000 unless the bridge is a PIC of revision 1. Bit 19 is not set. The old value is what the PROM left (**unknown**). |
| Which bit is 25 then? | Linux `VIRTUAL_EN`. The same bit is selected by the "virtual channel 1" flag (0x2000000) and appears as bit 57 of 64-bit addresses, so it is the XBridge/PIC virtual-channel select, not an address-translation enable (**inferred** from those three uses). |

### Translated window and ATEs

- **Address:** 0x40000000 + 0x4000 times the entry index (16 KB pages; `pcibr_dmamap_alloc`), with bit 29 ORed in for byte swap
  on an XBridge or PIC. The window therefore spans 0x40000000 to 0x7fffffff.
- **Table:** the PIC's internal ATE RAM, 8 bytes per entry from bridge offset 0x10000, **1024 entries** (the soft-state count at
  +0x70 is 0x400); `pic_attach2` clears all 1024 to 0 and hands them to a resource map (`pcibr_ate_free(0, 1024)`). There is no
  external ATE RAM on a PIC (`pcireg_ext_ate_addr` is not defined for type 2). The 16 KB page size is written as bit 21 of the
  Control register at attach (below); that bit is the page-size select in the public Bridge layout (**inferred** for a PIC).
- **Entry (`ate_write`, 0x4d60; `pcibr_flags_to_ate`, 0x4c6c):** the 16 KB-aligned host (xtalk) page address, ORed with the target
  node field shifted left 8, ORed with flags: base 3 (or 0xb for "data"), 0x10 for "command"/barrier with bit 3 cleared, plus
  per-flag toggles of 8, 4 and 0x10. Public Linux names bits 0 (valid), 1 (coherent), 2 (precise), 3 (prefetch) and 4 (barrier)
  (**software expectation**). Consecutive entries add 0x4000.
- Device(n) gets the mask 0x1100000 (0x1000000 on a PIC) when an ATE mapping is used. The R300 reaches this path only when the
  direct attempt fails.

### 64-bit direct (only when the bus is in PCI-X mode)

`pic_attach2` sets the bridge's default DMA flags (soft +0x7c) to 0x40 (64-bit) when the bus is in PCI-X mode (status bit 33), else 0. That default
is ORed into every request, so on a PCI-X bus the R300's flags become 0x2062 and the first attempt is a 64-bit address:
`FUN_001022b0` (0x2228) builds the attribute byte (bit 59 prefetch for "data", bit 58 precise, bit 57 virtual channel 1, bit 56
barrier, bit 55 swap; Linux `PCI64_ATTR_*`), the bridge ORs in the host address (48 bits) and the target widget in bits 63:60, and
Device(n) gets the mask 0x818000 on a PIC. In PCI-X mode the attribute word is masked to bits 56 and 57. Whether a G2's PIC buses
run in PCI-X mode is **unknown** (the code reads the mode bit; no capture shows it).

### PIO windows (BARs) and Device(n)

`pcibr_piotrans_addr` (0x1e38) and its helper (0x1250) set Device(n) for a BAR mapping, **established**: offset field bits 11:0 =
(PCI address >> 20) & 0xfff, bit 12 set for memory space and clear for I/O space (Linux `DEV_IO_MEM`), bit 13 set when the PIO flags
carry "set byte swap" (0x1000) and cleared when they do not (`DEV_SWAP`). The R300's BARs use flag 0x2000, so bit 13 is **0**.
Windows are 2 MB for slots 0 and 1 and 1 MB for slots 2 and up; slot n of bus 0 is at bridge offset 0x200000 + 0x200000 n for
n below 2 and 0x400000 + 0x100000 n otherwise, bus 1 starting at +0xa00000/+0xe00000 in place of 0x200000/0x600000; the
configuration window is at +0x20000 + 0x1000 (device number), +0x820000 on bus 1. `vga.a` overwrites the low word of
Device(slot) directly (`vga_setbridge_to_legacy_io`, 0x18ac, and `vga_setbridge_to_lfb`, 0x18ec; 32-bit store at Device + 4) with values
the PROM supplied in the pipe record to point the window at the legacy I/O or the frame buffer (`vga_change_big_window`, 0x1a90,
toggles Control bit 22).

## Every bridge write, in order, for a PIC (type 2) bus

| Step | Where | Write |
|---|---|---|
| 1 | `pic_attach2` | Control register (0x20) read; bits 55:48 cleared and replaced with the bus number; bits 62:61 and 47:40 cleared; OR 0xe0000000 (0xc0000000 for PIC revision 1) and OR 0x200000 (bit 21, 16 KB pages); written back. (Bit meanings for the PIC's Control are not decoded: **unknown**.) |
| 2 | `pic_attach2` | Three 256-entry doubleword tables at bridge +0x18000, +0x18800, +0x19000 cleared to 0 (their purpose is **unknown**). |
| 3 | `pic_attach2` | Int_Reset (0x110) = 0x7f; Int_Device (0x120) = 0x6db6db. |
| 4 | `pcibr_directmap_init` | DIR_MAP (0x80): offset, widget, add-512 bit as above. |
| 5 | `pic_attach2` | 1024 internal ATEs (0x10000 + 8 i) = 0. |
| 6 | `pic_attach2` | Int_Enable (0x108) OR 0x3eff7ffffe00; revision 1 only: masked and request timeout (0x28) = 0x750; Int_Mode (0x118) = 0. Then a flush read (0x50). |
| 7 | `pic_attach2` | Revision 2 and 3 only: the 64-bit RRB registers 0 and 1 (0x280, 0x288) get 0xf000f ORed (read-response-buffer allocation; `pcibr_initial_rrb` and `pcibr_rrb_alloc_init` refine it per slot, final counts not decoded). |
| 8 | `pcibr_slot_*` | For each slot: configuration BARs, command |= 7; Device(n) default (above) in `pcibr_slot_device_init`. |
| 9 | at each DMA or PIO map | Device(n) per the tables above; ATE and DIR_MAP as above. |

The XBridge path (`xbridge_attach`, 0x54) differs in three writes: Int_Device = 0xffffffff, Control |= 0x200000 only, and a request
timeout bit clear (0x3ff) for revisions below 4; it has no per-bus second block.

## Ring and scratch registers set by the X module

**Established** for the 6.5.22 patch's `fglrx_drv.so` (`FGLInitCP`, `FGLStartCP`, `FGLEnableCP` and the four routines they call);
the kernel is not involved except for the memory. Names are the public Radeon and R5xx guide names by offset (**software
expectation**). Values common to R300-class boards (device types 0x2c, 0x2d, 0x34 in the module):

| Register | Offset | What the module writes |
|---|---|---|
| `CP_ME_RAM_ADDR`/`DATA` | 0x7dc, 0x7e0 (after 0x7d0 = 0x401f0000, 0x7d4 = 0) | 256 microcode address and data pairs |
| `CP_RB_WPTR_DELAY` | 0x718 | a configuration word, keeping bits 31:28 |
| `CP_RB_CNTL` | 0x704 | size field bits 5:0 = log2-derived from the ring size, minus one; block-size bits 13:8 = 0x3f; bits 19:18 = a value from a host setting (0 to 2 in the paths read; MAX_FETCH in the R5xx guide, software expectation); bits 17:14 and 7:6 left as read |
| `CP_RB_BASE` | 0x700 | the ring's **bus address** (from the kernel's map) |
| `GEN_INT_STATUS` | 0x44 | 0x2000000 (bit 25, a software-interrupt acknowledge) |
| `CP_RB_RPTR_ADDR` | 0x70c | bus address of the state block + 0x200: the read-pointer write-back location |
| `CP_RB_CNTL` | 0x704 | bit 27 cleared (write-back enabled) |
| `SCRATCH_ADDR` / `SCRATCH_UMSK` | 0x774 / 0x770 | bus address of the scratch block / 0x3f (six scratch registers) |
| `CP_CSQ_CNTL` | 0x740 | top nibble 8 (bus-master mode for the ring and indirect streams); cleared to 0 to stop |
| `CP_RB_WPTR` | 0x714 | loaded from `CP_RB_RPTR` (0x710) at start so the ring starts empty |

The ring state block is 0xe78 bytes (`FGLInitCP` clears that many; `firegl_cp_init` rejects a smaller map); the ring must be at
least 0xd000 dwords (**established**, an error message otherwise). The values of 0x6c, 0x4c and the other fields filled by the two
per-chip routines (0x42c700 for R200-class, 0x42c780 for R300-class) are parameters of the module's own packet writer and are not
register values. How the 6.5.30 module differs is in [kernel-attach.md](kernel-attach.md#command-processor-start-up-x-server-module).
Because the bus address comes from the bridge, **a model must map CP_RB_BASE, CP_RB_RPTR_ADDR and SCRATCH_ADDR to host memory
through the bridge's direct and translated windows as above**, and honour bit 55 (swap) per address on 64-bit mappings.

### firegl_cp_init and indirect buffers

`firegl_cp_init` (`fglrx.o`, 0x171ec; DRM ioctl 0x53) takes a 32-byte block from user space naming three maps (the state block, a
second map the kernel maps into its own address space, and the buffer pool), a buffer count (at most 256) and a per-buffer size,
checks that the state map is at least 0xe78 bytes and the pool at least count times size, and builds a table of count buffer
descriptors (40 bytes each: pointer into the state block, into a per-buffer table at +0x678, kernel address, size, bus address,
each buffer's address advancing by the buffer size; the last address field is **inferred** to be the pool map's bus address). It does not touch a register. The ring is also written from the kernel:
`firegl_PM4WaitForIdle` (0x116e0) appends a short fixed packet sequence and padding (decode not done), writes `CP_RB_WPTR`, and polls the state block's read pointer (word at +0x200) with a long timeout; `_r6x_resetPM4` (0x1320c) rebuilds ring state on a CP reset and reads
`CP_STAT` and `RBBM_STATUS`. How the **second indirect buffer** and the packets that use it reach the chip is in the
[engine-facts page](../model-contract/r300-engine-facts.md#1-the-second-indirect-buffer-0x730-and-0x734-are-cp_ib2_base-and-cp_ib2_bufsz);
the 6.5.22 kernel adds no register write for it.

## Gaps

- The 6.5.30 bridge objects were not compared, so a bridge-register change between 6.5.22 and 6.5.30 is **unknown**.
- Control register field meanings on a PIC, the three 256-entry tables at +0x18000, +0x18800, +0x19000, and the Int_Status bit map
  are not decoded.
- Whether the G2 runs its PIC in PCI-X mode, hence whether the R300 sees 64-bit addresses, is **unknown**.
- The final RRB counts per slot are not decoded.
