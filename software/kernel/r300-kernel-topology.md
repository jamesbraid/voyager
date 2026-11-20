# Onyx4 G2 and G2N topology as the IRIX 6.5.22 kernel sees it: widgets, PIC buses, functions, the brick type check and ImageSync

What the kernel's bridge and brick code says about how an Onyx4 graphics brick is built: which crossbar widget carries the PIC,
how its two PCI buses and four slots per bus map to the two graphics pipes, which PCI functions of a card exist and which one a
driver claims, how the I/O-brick type is read from the brick's L1 controller and what the `0x56`/`0x30` check means, and where
ImageSync sits. Sources, grades and method are in [r300-kernel-attach.md](r300-kernel-attach.md#objects-read-and-how); the bridge
objects are the 6.5.22 base release's, `l1_command.o` is from the same set, the rest from patch SG0005448. It extends
[onyx4-bus-attach.md](onyx4-bus-attach.md) and answers its open L1 question.

## Widgets and the PIC

- **One XIO widget carries the bridge.** A widget's number is bits 31:24 of the bridge's address and its NASID bits 40:33; `pic_attach`
  (`pic.o`, 0x414) uses exactly those. The widget registers (id at +4) give a part number (bits 27:12), manufacturer (bits 11:1) and
  revision (bits 31:28); `pic_init` registers the widget driver for part **0xd102**, manufacturer **0x24** (**established**).
  `pcibr.o` also recognises 0xd112, 0xe000 and 0xe010 (PIC-family and a TIO-class part) and, for the older bridges, 0xd002 (XBridge) and
  0xc002 with manufacturer 0x36 (Bridge); the soft-state type halfword is 0 Bridge, 1 XBridge, 2 PIC, 3 the TIO part (**established**).
- **Public captures place the PIC at widget 10 on a G2 and widget 15 on a G2N**, printed as "ASIC BRIDGE Rev 3" with two `CGBRICK`
  entries ([onyx4-bus-attach.md](onyx4-bus-attach.md#verdict) for the listing; **observed**). The kernel does not hard-wire a widget
  number: it takes whatever widget the PROM's configuration table gives.
- **A G2's bridge is a PIC (inferred).** The code that treats an I/O-brick type of 0x30 or 0x56 specially exists only in the PIC
  attach (`pic_attach` names the buses `agp/N`; `pic_attach2`'s type switch has a dedicated case for those two types). The XBridge
  attach (`xbridge_attach`) has a type switch of its own with entries for the other brick types and **none** for 0x30 or 0x56 (they
  fall to its default). The part number and revision the G2's widget reports were not seen in any capture, so a PIC rather
  than an XBridge is **inferred**, not established; `vga_check_for_pic` and `pcibr` accept either.
- **A PIC is one chip with two PCI buses, two "heads" in the soft state.** `pic_attach` builds two bus vertices and calls `pic_attach2`
  twice, once with the widget's register block (bus 0) and once with the block 0x800000 above it (bus 1), each with its own
  0xac0-byte soft state (bus number at +0x48), and cross-links them (+0x40 of each points at the other). **Established.** Each bus has **four
  slots** (min slot 0, max slot 3), which are PCI devices 1 to 4 of that bus on a PIC. Registers that are per bus (the
  device registers, interrupt registers, ATEs, error registers) are in each bus's block; see
  [r300-kernel-dma.md](r300-kernel-dma.md#every-bridge-write-in-order-for-a-pic-type-2-bus).
- **Bus 1 may be filed under a peer node** (`pic_bus1_redist`, 0x27c): when the widget's node has a recorded partner node (a word in
  the per-node table, -1 when none), the bus-1 vertex, its inventory, device descriptor and widget info are duplicated under the
  partner's hardware-graph path instead of the widget's own. Whether a G2 or G2N has such a partner is **unknown** (the table is the PROM's).

## Pipes, buses and PCI functions

- **A pipe is one PCI device with two functions.** The R300 board's function 0 is the primary head (class 3, VGA); a second function
  is probed whenever header-type bit 7 is set (`pcibr_slot_info_init` scans functions 1 to 7). Every function that answers gets
  its BARs assigned and command 7. Public PROM listings show "PCI VGA Graphics (pci id 1 function 0)" and an adapter line for
  "function 1" in the same device number (**observed**, as in [onyx4-bus-attach.md](onyx4-bus-attach.md#verdict)).
- **Only function 0 gets a driver.** `fglrx_devids` and `vga_devids` list IDs; neither lists a secondary-function ID, and the
  secondary head's ID was not found in any table of the objects read (**established** for the tables, **inferred** that function 1 is
  therefore unclaimed). The second display head is driven through function 0's registers (`CRTC2_*` at 0x3f8 and up in the same
  register window), which is what `firegl_sync_dacs` and the interrupt code do.
- **Slot and bus for each pipe: inferred.** The pipe list's bus-kind byte (from the PROM's component record, bits 13:12 of its
  halfword at +0x24) adds 0x800000 to the card's bus address when it is 1, which is bus 1 of a PIC; a record whose PIC part number
  is 0xd102 or 0xd112 sets a flag the early-console code checks. With two pipes per brick, two buses per PIC and the names
  `agp/0` and `agp/1`, the reading that **pipe 0 sits at device 1 of bus 0 and pipe 1 at device 1 of bus 1** fits every fact read
  (including the guide's first-pipe bus id `PCI:2:0:0`, which fixes the first pipe's device number); no routine states the
  pipe-to-bus assignment, so it stays **inferred**.
- **Which slot of the four?** On a PIC slot s of a bus is PCI device s + 1, so a card at "pci id 1" is slot 0; the other slots
  are unused by a G2. (**Inferred**; no listing shows a second device on a bus.)

## The I/O brick L1 type check (answered)

`pic_attach` asks `iobrick_l1type_get_nasid(nasid, widget)` (`l1_command.o`, 0x2154, in the same IP35 kernel set; the earlier workspace did not
hold this object) and compares the result with 0x56 and 0x30. **Established** for `l1_command.o`:

- The routine asks the brick's L1 system controller (the local node's, or a peer's through a recorded rack and bay) for the brick's
  rack, bay and type with a six-field message (`iobrick_rack_bay_type_get`, 0x1bc4; reply: a 32-bit word whose bits 15:6 are the rack and 5:0 the
  bay, plus a type character). If the reply says the brick is a base-I/O type '#' (0x23), `iobrick_has_baseio` scans the widget's
  component list for a base-I/O board and the result becomes '=' (0x3d). Otherwise the raw character is returned as is.
- `iobrick_convert_l1type_generic` (0x21fc) folds raw characters into one canonical set: **0x30 ('0') becomes 0x56 ('V')**,
  0x26 ('&') becomes 'N', 0x34 ('4') and 0x41 ('A') become 'I', 0x37 to 0x39 ('7' to '9') and 0x51 ('Q') become '=', 0x45 ('E')
  becomes '#', 0x59 ('Y') becomes 'X'; every other value is unchanged.
- `iobrick_L1bricktype_to_name` (0x2b14) maps the canonical type to the brick name: 'X' **Xbrick**, **'V' CGbrick**, 'R' Rbrick,
  'N' Nbrick, 'I' Ibrick, 'C' Cbrick, '=' IXbrick, 'P' (and 0x25) Pbrick, '#' PXbrick; anything else "Unknown".

So **0x56 and 0x30 are the same brick type in two raw encodings: the CG-brick, the graphics brick** (the public PROM listings call
the same entries `CGBRICK`, **observed**). `pic_attach` tests for both because it receives the raw character, not the folded one. When
the type is a CG-brick the PIC names its bus vertices **`agp/0` and `agp/1`**; every other type names them `pci-x/0` and `pci-x/1`
(strings in `pic.o`). The names do **not** change register traffic: `pic_attach2` treats the CG-brick like other types except that it
sets three per-bus bytes (soft +0x31, +0x32, +0x33) to 0, skips the base-I/O (IOC4) probing the other brick types do, and calls
`pcibr_rrb_alloc_init(soft, 0, 0, 8)` ([r300-kernel-dma.md](r300-kernel-dma.md)). **The bus is still PCI(-X) configuration space, not AGP.**
Whether the G2 and G2N both report 0x56/0x30, or one of them reports the node-brick type 'N', is **unknown**; both would be accepted
by the PIC code (a type not in its switch only logs "Unknown bricktype" and carries on).

## ImageSync

- **Where.** A PCI card in the *host*, not in a graphics brick: `is1_reg` (`is1.o`, 0x904) registers SGI (vendor 0x10a9) devices
  **0x100c** and **0x100f** under the prefix `is1_`; `is1_attach` (0xcb8) reads the vendor and device words, the revision byte (bits
  7:6 select the hardware generation, as in 6.5.30), the subsystem pair, maps its configuration window and the BAR 0 register
  window, and connects `is1_intr` (0x3b9c) (**established**). The guide places ImageSync and base I/O in host PCI slots
  ([onyx4-bus-attach.md](onyx4-bus-attach.md#verdict) item 4).
- **How it reaches the pipes.** Through the FireGL driver's per-pipe register accessors, not through the bridge: `is1_intr` writes
  `CRTC_GEN_CNTL` (0x50) and `CRTC2_GEN_CNTL` (0x3f8) of the pipe it is resynchronising with bit 25 and bit 16 cleared (mask
  0xfdfeffff) and then restores them, and the discovery routine in the 6.5.30 entry reads the line counters. The 6.5.22 `is1.o`
  differs in size from the 6.5.30 object (`is1_attach` 2268 bytes against 2324, `is1_intr` 1140 against 856, `is1_ioctl` 2896 against
  2940), so it is a different build; the function-by-function comparison was **not** done. [image-sync-functions.md](image-sync-functions.md)
  is the 6.5.30 reading.
- **Interrupt.** The card's interrupt goes through the host's own PCI bridge like any other PCI function, by the same pin and
  Int_Addr mechanism as in [r300-kernel-interrupts.md](r300-kernel-interrupts.md#delivery-through-the-pic-inta-and-intb).
- **Hyperpipe compositor** (not ImageSync): `fglrx_hpipe_discover` and the `fglrx_hp_*` ioctls (0x66670014 to 0x6667001c) bind pipes
  to compositor slots; `fglrxProbeCompositor` is called at the end of attach ([r300-kernel-vga-gfx.md](r300-kernel-vga-gfx.md)).

## Gaps

- The part number and revision of a real G2's bridge widget (PIC versus XBridge) is not in any capture read.
- Pipe-to-bus assignment is inferred only.
- The secondary head's PCI ID is not in any table in the kernel objects; whether the card reports one distinct from function 0's
  is not shown by software.
- A function-by-function diff of the 6.5.22 `is1.o` against the 6.5.30 reading, and of the 6.5.22 bridge objects against the 6.5.30 ones, was not done.
