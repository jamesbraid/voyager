# Bus, crossbar and node-support objects in the IP35 kernel

Three kernel objects under `usr/cpu/sysgen/IP35boot/` sit between the host and the FireGL cards and are IRIX's own: the crossbar-switch bookkeeping (`xswitch.o`), the per-node PROM and counter device (`hubspc.o`) and a small PCI expansion-chassis hook (`pciiox.o`). None of them writes a register of the R300 or R350. They matter because `fglrx.o` reaches the card only through the hardware-graph vertices and crossbar widget records these objects maintain ([kernel attach path](kernel-attach.md)).

Each of the three is an unstripped 64-bit big-endian MIPS relocatable file. Addresses are `.text` offsets inside the object. Calls to other objects show as unresolved relocations in the disassembly, so callees below are named from the relocation entries, and `.srdata` words (reached with `$gp` minus 30720 and up) are named from their `.rel.srdata` relocations.

That tree predates this board. Each entry says what the shipped body does and relocations alone.

## Crossbar switch records (`xswitch.o`)

An xswitch record is a 152-byte heap block that hangs off a crossbar vertex as its fast-info pointer. The accessors below fix its layout: the doubleword at +0 is a fingerprint pointer, the word at +8 is a bit mask of ports whose link came up, the sixteen words from +12 to +72 are the vertex handles of the widgets on ports 0 to 15, the sixteen words from +76 to +136 are the vertex handles of the masters assigned to those ports, and the doubleword at +144 points to the switch provider's function table. Every accessor treats a port as a number below 16. `kernel.o` calls `xswitch_info_get`, `xswitch_info_link_ok`, `xswitch_info_vhdl_set` and the master-assignment pair; `xtalk.o` calls `xswitch_reset_link`.

- `xswitch_info_get` (`xswitch.o`, address 0x0, 84 bytes): **established.**
  Reads the record behind a crossbar vertex and checks that it is really one of ours.
  It calls `hwgraph_fastinfo_get` on its argument and, when the result is not null, compares the doubleword at record +0 with the doubleword at `.srdata`+0 (a relocation to `.data`+0, the string "xswitch_info"); it compares pointers, not text.
  On a mismatch it calls `cmn_err` with level 0 (the highest severity), the message at `.rodata`+0 ("%v xswitch_info_get bad fingerprint", reached through `.srdata`+8) and the vertex argument it saved at sp+0.
  If `cmn_err` ever returns, the routine still returns the record pointer; a null result from `hwgraph_fastinfo_get` returns 0 without any check.

- `xswitch_info_vhdl_set` (`xswitch.o`, address 0x54, 28 bytes): **established.**
  Records the vertex handle of a widget in a port slot: when the port in a1 is below 16 (signed compare, `slti`) it stores the word in a2 at record +12 plus four times the port, and otherwise does nothing.
  There is no lower bound test, so a negative port would store below +12.
  It touches no other field and sets no return value.
- `xswitch_info_vhdl_get` (`xswitch.o`, address 0x70, 96 bytes): **established.**
  Reads back the widget vertex for a port.
  A null record in a0 sends it to a `cmn_err` call (level 0, the message at `.rodata`+0x28, "xswitch_info_vhdl_get: null xswitch_info") and then back into the normal path with a0 and the port reloaded from sp+0 and sp+8.
  A port below 16 (signed) returns the word at record +12 plus four times the port; any other port returns -1.

- `xswitch_info_master_assignment_set` (`xswitch.o`, address 0xd0, 28 bytes): **established.**
  The same guarded store as the widget setter aimed at the second table: for a port below 16 it writes the word in a2 at record +76 plus four times the port, and a larger port returns with nothing written.
  It is the writer of the sixteen master handles that `xswitch_info_new` fills with -1.
- `xswitch_info_master_assignment_get` (`xswitch.o`, address 0xec, 32 bytes): **established.**
  Returns the master vertex assigned to a port: the word at record +76 plus four times the port when the port is below 16, otherwise -1 (loaded with `li v0,-1` before the branch).
  Unlike `xswitch_info_vhdl_get` it has no null-record check and no `cmn_err` call.
- `xswitch_info_set` (`xswitch.o`, address 0x10c, 32 bytes): **established.**
  Installs a record on a vertex.
  It loads the fingerprint pointer from `.srdata`+0, and in the delay slot of its `hwgraph_fastinfo_set` call stores that pointer as the doubleword at record +0 of a1; the call itself receives the vertex (a0) and the record (a1) unchanged.
  Whatever `hwgraph_fastinfo_set` leaves in v0 is returned.
- `xswitch_info_new` (`xswitch.o`, address 0x12c, 152 bytes): **established.**
  Finds or builds the record for a crossbar vertex.
  It first calls `xswitch_info_get`; a non-null result is returned at once.
  Otherwise it calls `kmem_alloc` with size 152 and flag 0 and does not test the result, stores a zero word at +8, then runs a loop of 16 passes with the port number masked to a byte (`andi 0xff`): `xswitch_info_vhdl_set` with -1 first, then `xswitch_info_master_assignment_set` with -1.
  After the loop it calls `xswitch_info_set` with the original vertex and the new record and returns the record.
  Neither the fingerprint (written by `xswitch_info_set`) nor the provider pointer at +144 is written here, so +144 keeps whatever `kmem_alloc` returned until `xswitch_provider_register` runs.

- `xswitch_provider_register` (`xswitch.o`, address 0x1c4, 40 bytes): **established.**
  Attaches a switch driver's function table to a crossbar vertex.
  It calls `xswitch_info_get` on a0, keeping a1 in s8 across the call, and stores a1 as the doubleword at the record's +144.
  A null record is dereferenced without a test.
- `xswitch_info_link_is_ok` (`xswitch.o`, address 0x1ec, 24 bytes): **established.**
  Marks a port's link as up by setting bit number (port) of the census word at record +8: it loads the word, shifts 1 left by a1 with `sllv`, ors them and stores the result in the delay slot of the return.
  There is no range test, and `sllv` uses only the low five bits of the port.
  The routine returns the shifted bit in v0, which callers of a void routine ignore.
- `xswitch_info_link_ok` (`xswitch.o`, address 0x204, 36 bytes): **established.**
  Asks whether a port's link came up.
  For a port below 16 (signed compare) it returns the census word at record +8 anded with 1 shifted left by the port, so the result is 0 or the single port bit rather than a normalised 0 or 1; any other port returns 0.
  The shift sits in the delay slot of the range branch, so it also runs for out-of-range ports, with no effect on the result.
- `xswitch_reset_link` (`xswitch.o`, address 0x228, 28 bytes): **established.**
  Resets a crossbar link by calling `xbow_reset_link` with the vertex argument untouched, and returns whatever that call returns.
  The call is direct: the routine does not look up the function table at record +144.
  `xtalk.o` is the object that calls it.
- `xswitch_id_get` (`xswitch.o`, address 0x244, 40 bytes): **established.**
  Fetches the crossbar's number from a label on its vertex.
  It calls `hwgraph_info_get_LBL` with the vertex, the label string at `.rodata`+0x58 ("_xswitch_id", reached as `.srdata`+8 plus 88) and the stack address 0 bytes above sp (formed with `daddiu`, not a load) for the label value to land in.
  It then returns the word at sp+4, the low half of the big-endian doubleword that the call is given the address of, and does not look at the call's status.
- `xswitch_id_set` (`xswitch.o`, address 0x26c, 36 bytes): **established.**
  Labels a crossbar vertex with its number: it moves a1 into a2 and calls `hwgraph_info_add_LBL` with the vertex, the "_xswitch_id" label at `.rodata`+0x58 and that value.
  The status the call returns is left in v0 and never tested.

## Per-node PROM and counter device (`hubspc.o`)

`hubspc.o` implements one character device per node that lets a privileged process map the node's PROM space, plus a dispatcher shared with a reference-counter device implemented in another object. The device's sub-type lives in the device's info word: 0 selects the counters (handled by the `mem_refcnt_*` routines) and 1 selects the PROM. Every dispatcher returns 19 (`ENODEV`) for any other value. The object keeps a list of 16-byte records, one per PROM device: the device number at +0, the node vertex at +4 and the next-record pointer at +8, with the list head in `.sbss` and a lock named `cpuprom_spinlock`.

- `prominfo_add` (`hubspc.o`, address 0x0, 100 bytes): **established.**
  Pushes a new PROM record on the front of the list.
  It calls `kmem_alloc` for 16 bytes with flag 0, stores a1 (the PROM device) at +0 and a0 (the node) at +4, takes `cpuprom_spinlock` with `mutex_spinlock`, copies the old list head into +8, and in the delay slot of the `mutex_spinunlock` call stores the new record as the head.
  The allocation is not tested for failure.

- `prominfo_del` (`hubspc.o`, address 0x64, 120 bytes): **established.**
  Unlinks the record whose PROM device equals its argument.
  It holds `cpuprom_spinlock`, walks from the head keeping the address of the previous link, and on a match overwrites that link with the record's +8 pointer before calling `mutex_spinunlock`.
  The record is not freed.
  If the device is not on the list the routine unlocks and returns.
- `prominfo_nodeget` (`hubspc.o`, address 0xdc, 112 bytes): **established.**
  Looks up the node vertex for a PROM device: under `cpuprom_spinlock` it walks the list comparing each record's device number, and on a match calls `mutex_spinunlock` and returns the word at +4.
  A miss also calls `mutex_spinunlock` before returning 0.
  `cpuprom_map` is its caller here.
- `cpuprom_detailed_inventory_info_add` (`hubspc.o`, address 0x14c, 132 bytes): **established.**
  Attaches a version record to the PROM vertex in a0.
  It calls `hubdev_cnodeid_get` on the node (a1), truncates the result to 16 bits, calls `klhwg_invent_alloc` with that node number, class 21 and size 32, and fills the new record without checking it: a byte 1 at +4, a word 2 at +20, at +12 the word read from address 0x90000000180000a4 and at +16 the word read from 0x90000000180000a0.
  It then calls `hwgraph_info_add_LBL` with the vertex, the label at `.rodata`+0 ("_detail_invent") and the record, and `hwgraph_info_export_LBL` with the same label and size 32.


- `cpuprom_attach` (`hubspc.o`, address 0x1d0, 192 bytes): **established.**
  Creates the PROM device of a node (a0) and records it.
  It calls `hubdev_cnodeid_get`, then `hwgraph_char_device_add` with the node, the edge name "prom" (`.rodata`+0x10), the driver prefix "hubspc_" (`.rodata`+0x18) and a stack address (sp plus 0) to receive the vertex.
  It reads a halfword from the `compact_to_nasid_node` array at twice the node number and then the doubleword at 0x9000000034000000 plus the NASID shifted left 33; if bits 15:12 of that doubleword equal 0xc it skips the inventory calls, otherwise it calls `device_inventory_add` (class 21, type 2, three zero arguments) and `cpuprom_detailed_inventory_info_add`.
  It then calls `device_info_set` with the vertex and 1 (the PROM sub-type), calls `prominfo_add` with the node and vertex, and returns 0.

  What the doubleword at offset 0x34000000 of the node's address space is: unknown. The next read is the IP35 PROM image's use of the same address.
- `cpuprom_map` (`hubspc.o`, address 0x290, 188 bytes): **established.**
  Maps a node's PROM space into a process and then tunes the PROM bus timing.
  It calls `prominfo_nodeget`; a null node returns 5 (`EIO`).
  Otherwise it calls `hubdev_prombase_get` for the node's PROM base and `hubdev_cnodeid_get`, then `v_mapphys` with the caller's mapping handle, the base plus the offset argument, and the length clamped to 0x08000000.
  A nonzero `v_mapphys` result is returned as is.
  On success it reads the doubleword at 0x9200000001fa0008 plus the NASID shifted left 33, replaces its low 16 bits with 0x1010 and writes it back, then returns 0.

  What the register at node offset 0x01fa0008 is: unknown.
- `cpuprom_unmap` (`hubspc.o`, address 0x34c, 8 bytes): **established.**
  Does nothing: it returns 0 in the delay slot of `jr ra` and touches no argument or memory, so unmapping a PROM mapping needs no undo work.
  `hubspc_unmap` calls it for sub-type 1.
- `hubspc_init` (`hubspc.o`, address 0x354, 60 bytes): **established.**
  Registers the object's attach routines with the hub manager and starts the PROM list lock.
  It calls `hubdev_register` three times, with `mem_refcnt_attach`, the local `cpuprom_attach` and `l1_attach`, loading each argument in the delay slot of the previous call, and then `spinlock_init` on `cpuprom_spinlock` with the name at `.rodata`+0x20 ("promlist").

- `hubspc_open` (`hubspc.o`, address 0x390, 116 bytes): **established.**
  Opens a hub-space device after reading its sub-type with `device_info_get` on the device number the first argument points to.
  Sub-type 0 returns the result of `mem_refcnt_open` with all four arguments; sub-type 1 calls `cap_able` with 1 shifted left 37 and returns 1 (`EPERM`) when it reports no capability, else 0.
  Any other sub-type returns 19.
- `hubspc_close` (`hubspc.o`, address 0x404, 108 bytes): **established.**
  Closes a hub-space device.
  Sub-type 0 passes its four arguments to `mem_refcnt_close` and returns the result, sub-type 1 returns 0 with no other action, and anything else returns 19.
  Unlike open it checks no capability.
- `hubspc_map` (`hubspc.o`, address 0x470, 156 bytes): **established.**
  Maps a hub-space device.
  A length (a3) of 0 returns 6 (`ENXIO`) before anything else.
  Otherwise it calls `device_info_get` twice on the device, once for a value it discards and once for the switch; sub-type 0 returns `mem_refcnt_mmap` with the protection argument loaded from sp+0, sub-type 1 returns `cpuprom_map` with the device, handle, offset and length, and anything else returns 19.
  The result of the first `device_info_get` call is never used.
- `hubspc_unmap` (`hubspc.o`, address 0x50c, 96 bytes): **established.**
  Tears down a mapping.
  After `device_info_get` it returns `mem_refcnt_unmap` for sub-type 0, `cpuprom_unmap` for sub-type 1 (both given the device and handle) and 19 otherwise.
- `hubspc_ioctl` (`hubspc.o`, address 0x56c, 124 bytes): **established.**
  Control entry point.
  Sub-type 0 forwards all six arguments (device, command, argument, mode, credentials, result pointer) to `mem_refcnt_ioctl` and returns its result, sub-type 1 returns 0 and ignores the command, and other sub-types return 19.

## Expansion-chassis hook (`pciiox.o`)

`pciiox.o` recognises an expansion chassis whose identity string starts with "030-1062-" and stores two constants into the bridge's register block for it.

- `pciiox_init` (`pciiox.o`, address 0x0, 32 bytes): **established.**
  Registers the chassis hook with the NIC-identity layer by calling `nic_vmc_add` with the part-number prefix "030-1062-" (`.rodata`+0, via `.srdata`+0) and the address of `pciiox_vmc` (`.srdata`+8, a relocation to text offset 0x20).
  The layer then runs `pciiox_vmc` for a vertex whose identity string starts with that prefix.

- `pciiox_vmc` (`pciiox.o`, address 0x20, 80 bytes): **established.**
  Fixes the bridge's read-response buffer split for the chassis.
  It calls `pcibr_hints_fix_rrbs` on the vertex, then `xtalk_piotrans_addr` with the vertex, two zeros, size 0x01000000 and a fifth zero, and without testing the address returned stores 0x00999888 as a word at +644 (0x284) and 0x888 as a word at +652 (0x28c) of it.




## Single-call forwards in the bus and kernel objects

Each routine here saves the return address, calls one routine with its own arguments untouched, restores the return address and returns that routine's result. Its seven instruction words are the same as those of `xswitch_reset_link` (`xswitch.o`, address 0x228; code hash a86de4a9d7a4), so the same forward is in each object's copy; only the relocation of the call differs, and the callee named in each entry is that relocation's symbol.

- `hubio_init` (`kernel.o`, address 0x21f18, 28 bytes): **established.** Calls `early_brl1_port_init` with the caller's arguments untouched and returns its result. It touches no register or memory of its own.
- `hub_provider_shutdown` (`kernel.o`, address 0x22bfc, 28 bytes): **established.** Calls `xtalk_provider_unregister` with the caller's arguments untouched and returns its result. It touches no register or memory of its own.
- `clkset` (`kernel.o`, address 0x295c0, 28 bytes): **established.** Calls `inittodr` with the caller's arguments untouched and returns its result. It touches no register or memory of its own.
- `pcibr_device_write_gather_flush` (`pcibr.o`, address 0x554, 28 bytes): **established.** Calls `pcireg_wrb_flush_get` with the caller's arguments untouched and returns its result. It touches no register or memory of its own.
- `pcibr_info_get` (`pcibr.o`, address 0x9b4, 28 bytes): **established.** Calls `pciio_hostinfo_get` with the caller's arguments untouched and returns its result. It touches no register or memory of its own.
- `pciio_piomap_alloc` (`pciio.o`, address 0x0, 28 bytes): **established.** Calls `pcibr_piomap_alloc` with the caller's arguments untouched and returns its result. It touches no register or memory of its own.
- `pciio_piomap_free` (`pciio.o`, address 0x1c, 28 bytes): **established.** Calls `pcibr_piomap_free` with the caller's arguments untouched and returns its result. It touches no register or memory of its own.
- `pciio_piomap_done` (`pciio.o`, address 0x60, 28 bytes): **established.** Calls `pcibr_piomap_done` with the caller's arguments untouched and returns its result. It touches no register or memory of its own.
- `pciio_piotrans_addr` (`pciio.o`, address 0x7c, 28 bytes): **established.** Calls `pcibr_piotrans_addr` with the caller's arguments untouched and returns its result. It touches no register or memory of its own.
- `pciio_piospace_free` (`pciio.o`, address 0x1e8, 28 bytes): **established.** Calls `pcibr_piospace_free` with the caller's arguments untouched and returns its result. It touches no register or memory of its own.
