# Routine readings, IP35 fglrx.o, located routines sample 2

Role statements for every sixth located routine of `usr/cpu/sysgen/IP35boot/fglrx.o`, starting at the third in address order (22 candidates from the located rows of `docs/inventory/functions.tsv`). Each statement uses only the facts `render_reading.py` gives for that routine: the calls at their `jalr` addresses, the arguments at entry, the loads and stores, and the return value. Three candidates whose render shows only an unknown return value (`__ke_cap_effective_raise`, `__ke_free_pages`, `__ke_get_vm_phys_addr`) are dropped. All entries are inferred.

- `firegl_fire_swapready` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x142b0
  **Inferred.** Warns through `cmn_err` when the word at `.data+2464` is zero: the branch at 0x142dc is taken when that word plus one equals 1, and the taken arm reaches the `jalr` at 0x14320, which calls `cmn_err` with a0 = 4 and a fixed message at `.rodata+13048`. The store at 0x142e0 sits in the branch's delay slot, so it runs on both arms, and the value stored at `.data+0x9a0` is unknown. The return at 0x142e4 is shared by both arms: the other arm returns 1 there, and the warning arm jumps back to it with `cmn_err`'s result.

- `firegl_get_lockid` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x17484
  **Inferred.** Looks up the per-open-file private record with `__ke_get_file_priv` at 0x174ac, passing the entry arguments through. It loads the 4-byte field at offset 0x1c of that record at 0x174e4, prints the value through the routine at `.text+90428` with a fixed string at `.rodata+15136`, and copies the value to a stack buffer at sp-32 for `__ke_copy_to_user` at 0x17518. The name suggests the field is the lock id reported to user space. The return at 0x17530 gives 0 or -0xe, chosen by the copy's result at the branch at 0x17520; which arm yields which value is unknown.

- `firegl_aperture_slot_size_in_elements` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1b8f0
  **Inferred.** A leaf accessor: it loads the 4-byte word at offset 0x20 of the structure in a0 and returns it in v0 at 0x1b8f0. The structure's type is unknown.

- `fglrx_drm_map` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x335c
  **Inferred.** Returns the constant 0xe at 0x3364. The store at 0x3368 sits after that return and writes a word through the pointer in a3, so it runs on the way out. The stored value is unknown.

- `fglrx_thread_exit` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4860
  **Inferred.** Takes the mutex at `.bss+0x80000` with `mutex_lock` at 0x489c (a1 = 0x19), calls `firegl_unlock_unbind_all_clients` at 0x48bc, releases the same mutex with `mutex_unlock` at 0x48f4, and returns that unlock's result at 0x4900. The callee name suggests the thread's exit path drops its client bindings under the lock.

- `FGLRXattach` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4b70
  **Inferred.** The routine is 8 bytes: it returns the constant -1 and does nothing else. The attach call therefore reports failure without touching any state.

- `fglrx_usb_comp_readwrite_register` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x5430
  **Inferred.** The one call shown is `printf` at 0x5468, with a fixed string at `.rodata+3408`, and the return at 0x5478 gives -1. The name suggests a register access, but the shown path only logs and fails, so this reads as an unsupported-operation stub.

- `__KE_ERROR` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9040
  **Inferred.** Passes its message to `cmn_err` at 0x909c with level 4, then calls `icmn_err` at 0x90c4 with level 6, the entry's a0, and a 56-byte stack buffer at sp-56. The return at 0x90d0 gives `icmn_err`'s result. The two message routines suggest an error reporter for the kernel-emulation layer.

- `__ke_atomic_sub` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9988
  **Inferred.** An ll/sc retry loop on the word at a1: the `ll` at 0x998c reads it, the `sc` at 0x9998 stores back, and the `beql` at 0x999c returns to the `ll` while the store fails. The loop makes the update atomic. The amount subtracted and the return value are unknown in this render.

- `__ke_pci_get_irq` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9ca8
  **Inferred.** Returns 0 at 0x9ccc when a0 is null. Otherwise it loads the word at a0+0x20 at 0x9cb8 and stores it through a1 at 0x9cc0 when a1 is non-null, then returns 0 or 1 at 0x9cc4. The name suggests the loaded field is the PCI interrupt line. Which of 0 or 1 the return gives is unknown.

- `__ke_ioremap_nocache` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e28
  **Inferred.** Returns its first argument unchanged, since v0 = a0 at the return at 0x9e28. The routine is 8 bytes and makes no mapping, so the caller gets back the address it passed.

- `__ke_mtrr_add_wc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa188
  **Inferred.** Returns the constant -1 at 0xa188 and does no other work in its 8 bytes. No write-combining range is added through this entry, and the caller sees a failure.

- `__ke_inw` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa468
  **Inferred.** Reads a signed 16-bit value at a0 plus a base. The base is a pointer read at offset 0x248 (584) of a record reached through two 8-byte loads from `fglrx_boards`, as the loads at 0xa480 to 0xa488 show. The `lh` at 0xa494 loads the halfword at a0 plus that base, and the return at 0xa490 yields it. The name suggests a port read, so a0 is an offset into the board's mapped register space.

- `vm_nopage` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4e8
  **Inferred.** Returns 0 in its 8 bytes and does nothing else. As a fault hook, that supplies no page for the fault.

- `__ke_vm_offset` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa51c
  **Inferred.** Loads the 8-byte field at a0+0x10 and returns it shifted left by 14 bits, so v0 = [a0+16] << 14 at the return at 0xa520. If that field is a page index, the shift turns it into a byte offset for 16 KiB pages.

- `wake_up_interruptible` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa770
  **Inferred.** Under the mutex at a0+0x18 (`mutex_lock` at 0xa7a4, a1 = 0x19), it calls `sv_broadcast_bounded` at 0xa7c4 on the pointer loaded from a0, stores a word at a0+0x10 at 0xa7e4, and releases the mutex with `mutex_unlock` at 0xa7e8, returning that result at 0xa7fc. The broadcast and the name suggest it wakes the queue's sleepers. The stored value is unknown.

- `fglrx_avl_map_start` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xac94
  **Inferred.** Returns the 8-byte field at a0+0x28 in v0 and does nothing else. The name suggests that field is the start address of a mapping held in an AVL tree. The field's type is unknown.

- `drm_mem_dec_locked_pages` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xd034
  **Inferred.** Takes the spinlock at the pointer loaded from a0 with `__ke_spin_lock` at 0xd064, updates a 64-bit word at `sym(high_memory)+0x80168` with an lld/scd pair retried by the `beql` at 0xd0a0, updates the 32-bit word at `[a0+11672]+0x10` with lw/sw at 0xd0c0 and 0xd0cc, releases the lock with `__ke_spin_unlock` at 0xd0d4, and returns that unlock's result at 0xd0e4. The name says a locked-page count is decreased, which fits the two counter updates. The direction and amount of each update are unknown. The symbol name for the 64-bit word is the render's label and may not be the kernel's variable.

- `firegl_set_cap_ipc_lock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20344
  **Inferred.** Reads the effective capability set through `__ke_get_cap_effective` at 0x20368, tests capability 1 with `__ke_capable` at 0x2038c, and can raise capability 1 with `__ke_cap_effective_raise` at 0x203f8. A 4-byte value is copied to the caller through `__ke_copy_to_user` at 0x203b8. The branches at 0x20394 (on the capability test) and 0x203c0 (on the copy) choose the path, and the return at 0x203d0 gives 0 or -0xe. Which path raises the capability is unknown. The name points at the IPC_LOCK capability, which the arguments do not confirm.
