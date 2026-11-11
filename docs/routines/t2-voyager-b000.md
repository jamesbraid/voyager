# Tier-2 routine readings, voyager batch 0

Role statements for the first 25 routines of the tier-2 reading round (targets 0 to 24 of the ranked list). Each statement uses only the rendered facts: registers, calls, constants, branch targets and sizes. Every entry is inferred, because the rendered facts show what a routine does with its arguments and return value but not what its callers expect.

- `__ke_up` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x98f4
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x9914 passes its four argument registers unchanged to `vsema` and the return at 0x9920 hands back that callee's v0. The name points to a semaphore release, but the body does no work of its own.

- `__ke_atomic_set` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x99b4
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x99d4 forwards the argument registers unchanged to `test_and_set_int`, and the return at 0x99e0 returns its v0. The name suggests an atomic set, but the body only relays the call.

- `__ke_pci_find_device` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9cd4
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x9cf4 forwards the argument registers unchanged to `pci_find_device`, and the return at 0x9d00 returns that callee's v0.

- `__ke_free_s` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9d3c
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x9d5c forwards the argument registers unchanged to `fglrx_irix_kmem_free`, and the return at 0x9d68 returns its v0. The name suggests a sized free, and the callee name a kernel memory free, but no size handling appears in the body.

- `__ke_vfree` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9dac
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x9dcc forwards the argument registers unchanged to `fglrx_irix_kern_free`, and the return at 0x9dd8 returns its v0. The name suggests a virtual-memory free, but the body only relays the call to the callee.

- `__ke_memset` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f08
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x9f28 forwards the argument registers unchanged to `memset`, and the return at 0x9f34 returns its v0.

- `__ke_strlen` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f84
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x9fa4 forwards the argument registers unchanged to `strlen`, and the return at 0x9fb0 returns its v0.

- `__ke_strcpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9fb8
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x9fd8 forwards the argument registers unchanged to `strcpy`, and the return at 0x9fe4 returns its v0.

- `__ke_strncpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9fec
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa00c forwards the argument registers unchanged to `strncpy`, and the return at 0xa018 returns its v0.

- `__ke_strcmp` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa020
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa040 forwards the argument registers unchanged to `strcmp`, and the return at 0xa04c returns its v0.

- `__ke_strncmp` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa054
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa074 forwards the argument registers unchanged to `strncmp`, and the return at 0xa080 returns its v0.

- `__ke_pci_read_config_byte` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa198
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa1b8 forwards the argument registers unchanged to `pci_read_config_byte`, and the return at 0xa1c4 returns its v0. The body performs no configuration-space access of its own.

- `__ke_pci_read_config_word` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa1cc
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa1ec forwards the argument registers unchanged to `pci_read_config_word`, and the return at 0xa1f8 returns its v0. The body performs no configuration-space access of its own.

- `__ke_pci_read_config_dword` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa200
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa220 forwards the argument registers unchanged to `pci_read_config_dword`, and the return at 0xa22c returns its v0. The body performs no configuration-space access of its own.

- `__ke_pci_write_config_byte` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa234
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa254 forwards the argument registers unchanged to `pci_write_config_byte`, and the return at 0xa260 returns its v0. The body performs no configuration-space access of its own.

- `__ke_pci_write_config_word` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa268
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa288 forwards the argument registers unchanged to `pci_write_config_word`, and the return at 0xa294 returns its v0. The body performs no configuration-space access of its own.

- `__ke_pci_write_config_dword` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa29c
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa2bc forwards the argument registers unchanged to `pci_write_config_dword`, and the return at 0xa2c8 returns its v0. The body performs no configuration-space access of its own.

- `firegl_modify_ldt` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x10278
  **Inferred.** An 8-byte stub. The only rendered fact is that the return at 0x10278 leaves v0 at 0x0, with no calls, memory accesses or branches. The name suggests an LDT edit, which this build does not perform, so the stub may stand in for an unsupported call.

- `__fglDRMPM4Alloc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x11808
  **Inferred.** A 152-byte routine that reads fields of the structure at a0, including the nested pointer at [a0+16] and the words at +0x4, +0x8, +0x10, +0x14 and +0x20. The `blez` at 0x11810 exits on a1 <= 0, and a counted loop at 0x11840 to 0x11850 compares two of those fields before the `jalr` at 0x11888 calls `firegl_PM4Alloc`. The return at 0x11868 gives its result or 0x0. The meaning of the fields and the loop bound cannot be settled from the facts, so the role is only the allocation-with-checks shape.

- `hubio_init` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x21f18
  **Inferred.** A 28-byte wrapper. The `jal` at 0x21f20 forwards its argument registers to `early_brl1_port_init`, and the return at 0x21f2c returns that callee's v0. The name suggests hub I/O setup, but the body only calls the port-init routine.

- `hub_provider_shutdown` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22bfc
  **Inferred.** A 28-byte wrapper. The `jal` at 0x22c04 forwards its argument registers to `xtalk_provider_unregister`, and the return at 0x22c10 returns that callee's v0. The name suggests a hub-side provider shutdown that unregisters the Xtalk provider.

- `clkset` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x295c0
  **Inferred.** A 28-byte wrapper. The `jal` at 0x295c8 forwards its argument registers to `inittodr`, and the return at 0x295d4 returns that callee's v0. The name suggests clock setup, but the body writes no clock register itself and only relays to the time-of-day routine.

- `pcibr_device_write_gather_flush` in `usr/cpu/sysgen/IP35boot/pcibr.o` at 0x554
  **Inferred.** A 28-byte wrapper. The `jal` at 0x55c calls `pcireg_wrb_flush_get` with its argument registers unchanged, and the return at 0x568 returns that callee's v0. The name suggests a write-gather flush, but the body reads the flush state through the getter and does not perform a flush itself.

- `pcibr_info_get` in `usr/cpu/sysgen/IP35boot/pcibr.o` at 0x9b4
  **Inferred.** A 28-byte wrapper. The `jal` at 0x9bc forwards its argument registers to `pciio_hostinfo_get`, and the return at 0x9c8 returns that callee's v0.

- `pciio_piomap_alloc` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x0
  **Inferred.** A 28-byte wrapper at the start of the object. The `jal` at 0x8 forwards its argument registers to `pcibr_piomap_alloc`, and the return at 0x14 returns that callee's v0. The name suggests a PIO mapping allocation done by the bus-generic layer, with the work carried out by the PCI bridge routine.
