# Linux compatibility layer in the kernel driver (IP35)

`usr/cpu/sysgen/IP35boot/fglrx.o` is ATI's FireGL kernel driver built for IRIX. ATI's portable code expects Linux kernel services (PCI lookups, wait queues, semaphores, atomics, copy to and from user memory), so the object carries a layer of small routines that supply them from IRIX kernel calls: the `pci_` and `irix_pci_` routines, and the `__ke_` routines (the prefix is the one the driver's assertion strings use). Each address below is a `.text` offset in the unstripped 64-bit MIPS IV object. "Board record" is the per-board record `fglrx_attach` fills ([kernel-attach.md](kernel-attach.md)); "record +N" is byte N of it.

None of the routines on this page touches a chip register. They show which IRIX kernel services ATI's code ends up using.

## PCI lookups and configuration access

The three `pci_find_` routines return the address of record +440 on a match and read the record itself through the doubleword at +24 of the handle they are given. So the handle ATI's code passes around points at record +440, and record +464 holds a pointer used to reach the record. That the handle is exactly record +440 is **inferred** from the arithmetic; the routine that stores the pointer is not read here.

- `pci_find_device` (`fglrx.o`, address 0x4b80, 260 bytes):
  **established.** Takes a vendor ID (a0), a device ID (a1) and a handle (a2).
  A null handle is an error: it calls `cmn_err` with the first argument 1 and the text "%s: called with from=NULL !", naming `pci_find_device`; when the halfword `kdebug` is nonzero it then calls `conbuf_flush(3)` and `debug` with the string "ring"; it returns 0.
  Otherwise it loads the doubleword at handle +24, and when that is zero returns 0.
  Else it compares the halfword at record +452 with the vendor and the halfword at record +454 with the device.
  Both equal: it returns the record address plus 440; otherwise 0.
  It never walks a list, so it can only confirm that one given board matches.
  **Inferred:** record +452 and +454 are the vendor and device halves of the PCI ID copies `fglrx_attach` stores at +452 to +460 (step 9 of [fglrx_attach in order](kernel-attach.md#fglrx_attach-in-order)).
- `pci_find_subsys` (`fglrx.o`, address 0x4c84, 284 bytes):
  **established.** Takes a vendor ID, a device ID, a subsystem vendor ID, a subsystem device ID and a handle, in that order (the handle is the fifth argument).
  Same null-handle report as `pci_find_device`, with the name `pci_find_subsys`.
  Otherwise it loads the doubleword at handle +24 (zero gives 0) and requires four halfword matches, tested in this order.
  The halfword at record +452 is compared with the first argument, +454 with the second, +456 with the third and +458 with the fourth.
  The first mismatch returns 0; when all four match it returns the record address plus 440.
  **Inferred:** +456 and +458 are the subsystem halves of the same ID copies.
- `pci_find_class` (`fglrx.o`, address 0x4da0, 260 bytes):
  **established.** Takes a class value (a0) and a handle (a1).
  A null handle gives the `cmn_err` report naming `pci_find_class`.
  The guarded `conbuf_flush` and `debug` calls follow, and it returns 0.
  Otherwise it loads the doubleword at handle +24 (zero gives 0), compares the word at record +460 with a0 and returns the record address plus 440 on equality, else 0.
  **Inferred:** record +460 is the class word among the ID copies stored at +452 to +460.
- `pci_find_slot` (`fglrx.o`, address 0x4ea4, 8 bytes):
  **established.** Two instructions: it returns 0 whatever its arguments are, so a lookup by bus and slot never finds a board. `__ke_check_pci` (address 0x9bf4) calls it and returns 0 on this result, so that check always reports no device.
- `pci_find_capability` (`fglrx.o`, address 0x4eac, 8 bytes):
  **established.** Two instructions, identical in shape to `pci_find_slot`: it returns 0 for any arguments, so ATI's code never sees a PCI capability on this board through it.
- `irix_pci_read_config_by_size` (`fglrx.o`, address 0x4f50, 488 bytes, 32-byte frame):
  **established.** The arguments are a handle, a configuration offset, a destination pointer and a size in bytes, in that order.
  A null handle reports through `cmn_err` ("%s: called with pcidev=NULL !", naming this routine), calls `conbuf_flush(3)` and `debug("ring")` when the halfword `kdebug` is nonzero, and returns 0.
  When the doubleword at handle +24 is zero it reports "%s: bdata=NULL" the same way and returns 19.
  Otherwise it calls `pciio_config_get` with the word at record +408 as its first argument, the offset unchanged and the size as the third, then stores the result through a2 as a byte for size 1, a halfword for size 2 and a word for size 4 (any other size stores nothing) and returns 0.
- `pci_read_config_byte` (`fglrx.o`, address 0x4eb4, 52 bytes):
  **established.** Sets the fourth argument to 1 and calls `irix_pci_read_config_by_size` (address 0x4f50) with the first three unchanged, returning its result.
- `pci_read_config_word` (`fglrx.o`, address 0x4ee8, 52 bytes):
  **established.** The same call to `irix_pci_read_config_by_size` with the fourth argument set to 2: a 16-bit configuration read stored through a2.
- `pci_read_config_dword` (`fglrx.o`, address 0x4f1c, 52 bytes):
  **established.** The same call to `irix_pci_read_config_by_size` with the fourth argument set to 4: a 32-bit configuration read stored through a2.
- `irix_pci_write_config_by_size` (`fglrx.o`, address 0x51dc, 468 bytes, 16-byte frame):
  **established.** The arguments are a handle, a configuration offset, a value and a size in bytes, in that order.
  A null handle gives the `cmn_err` report ("%s: called with pcidev=NULL !", naming this routine), the same `conbuf_flush` and `debug` calls under `kdebug`, and 0.
  A zero doubleword at handle +24 gives "%s: bdata=NULL" and 19.
  Otherwise it calls `pciio_config_set` with the word at record +408, the offset, the size and the value, in that order, ignores that call's result and returns 0.
- `pci_write_config_byte` (`fglrx.o`, address 0x5138, 52 bytes):
  **established.** Sets the fourth argument to 1 and calls `irix_pci_write_config_by_size` (address 0x51dc) with the first three unchanged; the value is not masked and the result is returned.
- `pci_write_config_word` (`fglrx.o`, address 0x516c, 52 bytes):
  **established.** The same call with the fourth argument set to 2 and the value passed unmasked.
- `pci_write_config_dword` (`fglrx.o`, address 0x51a0, 60 bytes):
  **established.** The same call with the fourth argument set to 4.
  Unlike the byte and halfword versions it clears the upper 32 bits of the value first, by a left shift and a logical right shift of 32 (`dsll32`, then `dsrl32` in the delay slot of the call), so a negative 32-bit value is written as its low word.

## Wait queues, files and process identity

Where a routine below takes a file or inode argument, the offsets are the ones its body loads or stores.

- `__ke_alloc_wait_queue_head_struct` (`fglrx.o`, address 0x9414, 116 bytes):
  **established.** Calls `fglrx_irix_kmem_alloc` (defined in this object at address 0xad68) with a size argument of 40 and a flag argument of 256.
  A zero result is returned as is.
  Otherwise it calls `init_waitqueue_head` with the new block and returns the block.
- `__ke_free_wait_queue_head_struct` (`fglrx.o`, address 0x9488, 104 bytes):
  **established.** A null argument returns at once with no value set.
  Otherwise it calls `clear_waitqueue_head` on the block and then `fglrx_irix_kmem_free` on the same pointer.
- `__ke_wake_up_interruptible` (`fglrx.o`, address 0x94f0, 52 bytes):
  **established.** Calls `wake_up_interruptible` with the caller's arguments untouched and returns its result: a straight forward to the kernel-side wait queue routine.
- `__ke_get_queue_mutex` (`fglrx.o`, address 0x9524, 52 bytes):
  **established.** Calls `get_queue_mutex` with the caller's arguments untouched and returns its result.
- `__ke_sleep_on_queue` (`fglrx.o`, address 0x9558, 52 bytes):
  **established.** Calls `sleep_on_queue` with the caller's arguments untouched and returns its result.
- `__ke_getdevice` (`fglrx.o`, address 0x958c, 8 bytes):
  **established.** Returns the zero-extended word (`lwu`) at +72 of its argument; it calls nothing.
- `__ke_inode_rdev_minor` (`fglrx.o`, address 0x9594, 12 bytes):
  **established.** Loads the word at +8 of the inode argument and returns its low 8 bits (mask 0xff).
- `__ke_get_file_priv` (`fglrx.o`, address 0x95a0, 8 bytes):
  **established.** Returns the doubleword at +8 of the file argument.
- `__ke_set_file_priv` (`fglrx.o`, address 0x95a8, 8 bytes):
  **established.** Stores its second argument (a1) as the doubleword at +8 of the file argument, the counterpart of `__ke_get_file_priv` at address 0x95a0.
- `__ke_get_file_bdata` (`fglrx.o`, address 0x95b0, 8 bytes):
  **established.** Returns the doubleword at +0 of the file argument; it calls nothing and sets no other value.
- `__ke_file_rw_open` (`fglrx.o`, address 0x95b8, 16 bytes):
  **established.** Loads the word at +16 of the file argument, keeps its low two bits and returns 1 when either is set, 0 when both are clear (`andi` with 3, then `sltu` against zero).
- `__ke_file_counter` (`fglrx.o`, address 0x95c8, 8 bytes):
  **established.** Returns the word at +32 of the file argument.
- `__ke_getpid` (`fglrx.o`, address 0x95d0, 52 bytes):
  **established.** Calls `curthreadhandle` and returns its result, so ATI's process identity is the IRIX current thread handle, not a process ID.
- `__ke_geteuid` (`fglrx.o`, address 0x9604, 56 bytes):
  **established.** Calls `get_current_cred` and returns the word at +8 of the credential record it hands back; the body shows only that load.
  **Inferred:** the word is the effective user ID, because the Linux call this stands in for returns one.

## Time, address translation and error codes

- `__ke_jiffies` (`fglrx.o`, address 0x963c, 32 bytes):
  **established.** Returns the 32-bit word at `lbolt`, an undefined symbol the IRIX kernel provides, so ATI's tick counter is the IRIX tick count at the kernel's own rate; a 32-bit load, with no scaling.
- `__ke_udelay` (`fglrx.o`, address 0x965c, 52 bytes):
  **established.** Calls `us_delay` with its argument truncated to 32 bits (`sll` by 0) and returns its result: microseconds map one to one.
- `__ke_mdelay` (`fglrx.o`, address 0x9690, 72 bytes):
  **established.** Multiplies its argument by 1000 using shifts and adds (the sequence is 125 times the value, shifted left by 3), truncates to 32 bits and calls `us_delay` with it, so milliseconds become microseconds.
- `__ke_virt_to_bus` (`fglrx.o`, address 0x96d8, 52 bytes):
  **established.** Calls `fglrx_irix_kern_findmap` with the caller's arguments untouched and returns its result: the routine is defined in this object (address 0xb624, 176 bytes), so the bus-address lookup is driver code, not a fixed offset added here.
- `__ke_virt_to_phys` (`fglrx.o`, address 0x970c, 52 bytes):
  **established.** Calls `irix_vtop` with the caller's arguments untouched and returns its result; `irix_vtop` is defined in this object (address 0xaa18, 444 bytes).
- `__ke_high_memory` (`fglrx.o`, address 0x9740, 32 bytes):
  **established.** Returns the doubleword at `high_memory`, a global defined in this object's own `.bss` at offset 0x80040 (8 bytes); this routine only reads it.
- `__ke_error_code` (`fglrx.o`, address 0x9760, 148 bytes):
  **established.** Maps a small code to a constant.
  An unsigned argument of 12 or more returns 14.
  Otherwise it jumps through a table of twelve doublewords in `.rodata` at 0x1718, indexed by the argument.
  Each target returns a constant.
  Index 0 gives 16, index 1 gives 22 and index 2 gives 13.
  Index 3 gives 14, index 4 gives 5 and index 5 gives 55.
  Index 6 gives 12, index 7 gives 1 and index 8 gives 19.
  Index 9 gives 4, index 10 gives 14 and index 11 gives 84.
  Index 7 is the one that returns 1: its target is the plain return at 0x979c, and the 1 comes from the `li v0,1` in the delay slot of the table jump at 0x9790.
  The table entries are `.text` addresses read from the object's data dump.
- `__ke_mod_inc_use_count` (`fglrx.o`, address 0x97f4, 8 bytes):
  **established.** Two instructions, a return and a delay-slot `nop`: no use count is kept.
  **Inferred:** the driver is linked into the kernel configuration and is never unloaded by a count.
- `__ke_mod_dec_use_count` (`fglrx.o`, address 0x97fc, 8 bytes):
  **established.** The same two instructions as `__ke_mod_inc_use_count` at 0x97f4: it changes nothing.

## Semaphores

- `__ke_down_struct_sem` (`fglrx.o`, address 0x9804, 64 bytes):
  **established.** Takes a structure pointer (a0) and an index (a1).
  Calls `psema` with the address a0 + 16 x index + 176 as its first argument and 25 as its second, and returns its result; the element address is the structure address plus 176 plus 16 times the index, a 16-byte stride that matches the constant `__ke_sema_size` (address 0x98b8) returns.
- `__ke_up_struct_sem` (`fglrx.o`, address 0x9844, 60 bytes):
  **established.** Takes a structure pointer (a0) and an index (a1).
  Calls `vsema` with the address a0 + 16 x index + 176 as its only argument and returns its result: the release counterpart of `__ke_down_struct_sem` at address 0x9804, on the same element.
- `__ke_sema_init` (`fglrx.o`, address 0x9880, 56 bytes):
  **established.** Calls `init_sema` with its own first two arguments unchanged, the third set to 0 and the fourth set to -1, and returns its result.
- `__ke_sema_size` (`fglrx.o`, address 0x98b8, 8 bytes):
  **established.** Returns the constant 16, the byte size ATI's code allocates for one semaphore.
  It reads no memory.
