# R300 interrupts in the IRIX 6.5.22 Onyx4 patch: sources, delivery through the PIC, and the acknowledge sequence

Which chip interrupt sources the 6.5.22 kernel (patch SG0005448 `fglrx.o`, bridge objects from the 6.5.22 base release) enables,
how the interrupt reaches a CPU through the brick's bridge, and what the handler does. Sources, grades and method are in
[r300-kernel-attach.md](r300-kernel-attach.md#objects-read-and-how); this page extends
[the 6.5.30 interrupt entries](kernel-ioctl-irq-functions.md#interrupt-control), which describe a different handler.

The finding that matters for a model: **in this build nothing acknowledges the chip's interrupt status.** The one connected
handler counts and returns, and the ATI layer's own acknowledging routines are never registered.

## Chip side: GEN_INT_CNTL and GEN_INT_STATUS

Names are **software expectation** by offset (`GEN_INT_CNTL` 0x40, `GEN_INT_STATUS` 0x44 in the public Radeon headers; the
status bits are write-one-to-clear there); the stores and values are **established**.

- **Only one source is ever enabled: bit 0 (value 1).** Public Linux names bit 0 of the status word `CRTC_VBLANK_STAT`, the
  first display controller's vertical blank (**software expectation**). Four routines turn it on:
  - `fglrx_get_vsync_cnt` (`fglrx.o`, 0x3094, ioctl 0x6667000d) and `fglrx_wait_vsync` (0x3110, ioctl 0x6667000e): on the first
    call for a board (board-record word at +792 still zero) they **store 1** (not an OR) in `GEN_INT_CNTL` through the BAR 2
    mapping (record +656) and set the flag. 6.5.30 stores 4.
  - `_r6x_enable_vsync_irq` (0x20880) and `_r6x_enable_framelock_irq` (0x2095c), the ATI layer's pair, identical in effect: under
    the layer's lock, and only when the ATI-layer device record's interrupt-number word (+0x2d68, set by `firegl_install_irq`) is nonzero, they read `GEN_INT_STATUS`
    and write it back ORed with the table's acknowledge word (an acknowledge of bit 0), then read `GEN_INT_CNTL` and OR in the
    table's enable word (bit 0), with a `sync` after each store.
- **Where the bits come from.** The two routines and the two service handlers below read word 0, 1 or 2 of the first triplet of
  `irq_table` (`fglrx.o` `.data` +0x9a8, 624 bytes): {status mask, acknowledge, enable} = {1, 1, 1}. The table continues with the
  triplets {0,0,0}, {2,2,2}, {0,0,0}, {4,4,4}, {0,0,0}, {8,8,8}, {0,0,0}; nothing in the object references any other triplet
  (all references are the four routines in this list), so bits 1 to 3 are **never used** by this kernel. What the table means
  past the eight triplets read is **unknown**.
- **Disabled by storing 0** in `GEN_INT_CNTL` by `_r6x_close_irq` (0x20a38, at the ATI layer's shutdown) and by `fglrx_exit`
  (0x41f8, at process exit). `fglrx_is_brdmanager` (0x3600) in this build does **not** write the register; 6.5.30's does.
- `fglrx_attach` does not touch `GEN_INT_CNTL`. Its value at attach is whatever the option ROM's init left (**unknown**).
- **CRTC2 vsync, SW interrupt, framelock** are not enabled by any path read: no bit other than 0 is ever stored. The
  [engine-facts page](../model-contract/r300-engine-facts.md#6-interrupts-and-fences) lists bits 2 and 6 from the 6.5.30 reading;
  this build does not use them.

## The handler: what runs when the line fires

- `fglrx_intr` (0x8d4, 56 bytes), connected by `pciio_intr_connect(handle, fglrx_intr, board record, 0)` at attach:
  **established**, whole routine. It loads the kernel's `gfxinfo` table pointer, indexes it by the processor number (a halfword at a
  fixed per-processor address) times 32 and increments the word at +16 of that entry. No register of the card is read or
  written; no status is acknowledged; no waiter is woken. The base release's own `fglrx.o` has an 8-byte stub here.
- `fglrx_validate_vsync` (0x3450, the routine that wakes the waiters `fglrx_wait_vsync` queued) exists but **nothing in the
  object calls it** (no relocation or table entry refers to it), so a process sleeping in `fglrx_wait_vsync` (a timed, interruptible
  wait) is only released by the wait's timeout or a signal. **Established** as a negative over the
  object's relocations and function-pointer tables.
- The ATI layer's handlers `_r6x_service_irq_vsync_handler` (0x206d8) and `_r6x_service_irq_framelock_handler` (0x20788) do
  the real acknowledge: if the status register ANDed with the table's status mask is nonzero, write the status back ORed with the
  acknowledge word and `sync`; the first call of the vsync handler only sets the "interrupt seen" word (+0x2d70) and skips the register. **But nothing hooks them up:** `firegl_install_irq` (ioctl 0x645d, `firegl_InitIrq` in the DRM helper
  library) calls `__ke_request_irq`, `__ke_free_irq`, `__ke_enable_irq` and `__ke_disable_irq`, and **all four are empty
  8-byte routines** (0xa114 and its neighbours). The routine (a 16-byte user block whose doubleword at +8 is the request type, 1 for vsync and 0x100000 for framelock) then enables the matching source (the two enable routines are identical), waits 200 ms (`__ke_mdelay`) for the vsync type,
  looks for the "seen" flag that only the never-registered handler sets, and logs a message when it is still clear.
  `firegl_wait_for_vertical_retrace` (ioctl 0x645c) only re-arms the source; it does not block on a vertical blank.
  **Established** for these routines.
- Whether any user-space module calls `firegl_InitIrq` is **unknown**: the 6.5.22 X module's calls to the board ioctls were
  checked (it issues 0x6667000a, 0x6667000b and 0x6667000c, none of the interrupt ones), the DRI and GLX objects were not.

**Consequence.** If a guest enables bit 0 of `GEN_INT_CNTL` (through the vsync ioctls) the chip raises its interrupt line and
no software in this build ever clears bit 0 of `GEN_INT_STATUS`. Whether that repeats depends on the bridge, below. A model
should assert the line while status and enable overlap and keep status set until written; it should expect that
no guest in this release clears it.

## Delivery through the PIC (INTA and INTB)

All **established** for the code unless graded otherwise; register names are **software expectation** from the public
Bridge register layout, offsets are those the bridge routines compute for a PIC (type 2).

1. **Allocation.** `fglrx_attach` calls `pciio_intr_alloc(dev, desc, 3, vertex)`; 3 is lines A and B. `pcibr_intr_alloc` (`pcibr.o`,
   0x78a4) turns the mask into bridge interrupt pins with `pcibr_intr_bits` (0x752c): for the card's slot number s (PIC device
   number minus 1, so 0 for the first device), **INTA (and INTC) is pin s and INTB (and INTD) is pin s xor 4**. A card in slot 0
   therefore uses pins 0 and 4. Each pin gets one interrupt record shared by every driver on that pin and a hub interrupt
   (`xtalk_intr_alloc_nothd`, then `hub_intr_alloc`'s family in `kernel.o`) with a CPU chosen from the device descriptor or the
   default; if two pins of one request resolve to different CPUs a warning is logged.
2. **Int_Device.** The bridge's interrupt-device register (0x120) holds eight 3-bit fields, one per pin. `pic_attach2` initialises
   it to 0x6db6db (every pin names device 3, the value public Linux also uses); `pcibr_intr_alloc` then clears the field of each
   pin it takes and sets it to the card's slot, so a write-gather flush on that pin's behalf covers the right device. (The XBridge
   path writes 0xffffffff instead.)
3. **Connect.** `pcibr_intr_connect` (0x8198) connects each pin's hub interrupt, which calls `pcibr_setpciint` (0x80f0): it
   writes the **Int_Addr** register of the pin (0x130 plus 8 times the pin, in the register block of the pin's bus: bus 1 is at
   +0x800000) with the hub's interrupt target address in bits 47:0 and the hub vector in bits 55:48. Then it ORs the pin bits
   into **Int_Enable** (0x108) and reads the flush register (0x50). The pin number and bus travel to the callback as
   `pin | bus << 3`.
4. **Attach-time enables.** `pic_attach2` writes **Int_Reset** (0x110) with 0x7f, **Int_Mode** (0x118) with 0, and sets Int_Enable
   to its current value ORed with 0x3eff7ffffe00 (bits 9 to 30, 32 to 39 and 41 to 45; **inferred** to be the error-interrupt
   group, since the pin bits 0 to 7 are left to `pcibr_intr_connect`). For PIC revision 1 only, bits 39 and 9 are masked off again
   and the request timeout (0x28) is written 0x750. Int_Mode 0 means no clear-packet mode (**software expectation** for the field).
   The error interrupts use a separate target: `pcibr_setwidint` (0x8590) writes the bridge's interrupt-destination register
   (0x38; address in bits 47:0, target widget in bits 51:48) and the host-error register (0x128, the vector).
5. **Dispatch.** When the hub interrupt arrives `pcibr_intr_func` (0x8614) calls the connected handlers (here `fglrx_intr`) with
   their argument; if the connection asked for it, it reads the write-buffer flush register of the device
   (0x240 plus 8 times the slot) first. After the handlers it forces a re-evaluation (`pcibr_force_interrupt`, a write of 1 to
   the Force_Always register, 0x180 plus 8 per pin) when no handler ran, and, when no handler was connected at all, clears the
   pin's Int_Enable bit (structure read; the exact conditions were not traced). **PIC revision 1 only:** at the top it clears and sets the pin's Int_Enable bit (a re-arm). The G2's
   widget reports "ASIC BRIDGE Rev 3" in a public PROM listing (**observed**), so the revision 1 workaround is **inferred** not to
   apply; whether that revision byte is the same field as `pcibr`'s is **inferred**.
6. **Error interrupt for the card.** `fglrx_attach` registers `fglrx_error_handler` (0x3ff4) with `pciio_error_register`. Its
   behaviour is unchanged from the 6.5.30 entry in [kernel-attach.md](kernel-attach.md#interrupts): it accepts descriptors with bits
   23 and 22 set, and for command 4 with value 0x44 it reads the hub's I/O-interrupt register at offset 0x198 + 8 per widget of the
   node's 0x1c00000 window (test bit 49) and writes the widget bit to offset 0x1f8.

## What a model must provide

- A level-style interrupt line from the chip to bridge pin s (INTA) and optionally s xor 4 (INTB); the guest allocates both and
  the code never reads which one fired.
- Int_Addr and Int_Enable per pin and the hub-side message; Int_Status (0x100) is read only by the error handler
  ([r300-kernel-dma.md](r300-kernel-dma.md) lists the bridge registers). No Int_Mode clear packets.
- The vsync enable path stores 1 in `GEN_INT_CNTL`, so a model needs only the status bit 0 on the first display controller's
  vertical blank. A second source is not exercised by this release.
- No guest in this build writes `GEN_INT_STATUS` except `_r6x_enable_*` (acknowledge before enabling). The handler never does.

## Gaps

- `firegl_install_irq` takes the interrupt number from the PCI-device word at +0x20 of the compatibility layer's device record; where that
  word is set was not found. If it stays zero the routine installs nothing and the ATI-layer enable routines never run.
- Whether the 6.5.30 behaviour (status read and acknowledged in `fglrx_intr`) is the later fix of the 6.5.22 omission, or whether
  the 6.5.22 base release's older `fglrx.o` differs further, was not established (the older object was not read).
- The bridge's Int_Status/Int_Enable bit meanings for bits 9 to 45 are not decoded here.
