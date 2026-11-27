# Readings: `usr/cpu/sysgen/IP35boot/xbridge.o`

One entry per routine, filed here from the reading batches by binary.

- `xbridge_init` in `usr/cpu/sysgen/IP35boot/xbridge.o` at 0x0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xbridge.o`.
  Range: 0x0-0x54 (84 bytes).
  It occupies 84 bytes.
  The `jal` at 0x10 calls pcibr_debug with a0=0x1, a1=0x0, a2=sym(.rodata), a3=a3 at entry (arg3).
  The `jal` at 0x28 calls xwidget_driver_register with a0=0xd002, a1=0x24, a2=sym(.rodata), a3=0x0.
  The `jal` at 0x40 calls xwidget_driver_register with a0=0xc002, a1=0x36, a2=sym(.rodata), a3=0x0.
  The return at 0x4c has v0 = ret(xwidget_driver_register).

- `xbridge_init` in `usr/cpu/sysgen/IP35boot/xbridge.o` at 0x0
  **Inferred.** Registers the two crosstalk bridge widget variants that this object drives. After `pcibr_debug` with 1 and 0 (0x10) it calls `xwidget_driver_register` twice with the same `.srdata` +16 name string: part 0xd002 with manufacturer 36 (0x28) and part 0xc002 with manufacturer 54 (0x40). It touches no register itself.

- `xbridge_attach` in `usr/cpu/sysgen/IP35boot/xbridge.o` at 0x54 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xbridge.o`.
  Range: 0x54-0xdf0 (3484 bytes).
  It occupies 3484 bytes.
  4 such `lw` accesses load 4 bytes from ret(pcibr_bridge_ptr_get) +0x4, including `lw` at 0xa4, `lw` at 0xc8, `lw` at 0x2a0.
  The `lw` at 0x198 loads 4 bytes from ret(pcibr_hints_get) +0xc.
  The `sd` at 0x264 stores 8 bytes to ret(kmem_zalloc) +0x10.
  The `sw` at 0x270 stores 4 bytes to ret(kmem_zalloc) +0x0.
  The `sw` at 0x278 stores 4 bytes to ret(kmem_zalloc) +0x48.
  The `sb` at 0x280 stores 1 byte to ret(kmem_zalloc) +0x39.
  The `sb` at 0x284 stores 1 byte to ret(kmem_zalloc) +0x38.
  2 such `sd` accesses store 8 bytes to ret(kmem_zalloc) +0x8, including `sd` at 0x288, `sd` at 0x344.
  2 such `sd` accesses store 8 bytes to ret(kmem_zalloc) +0x508, including `sd` at 0x294, `sd` at 0xae0.
  The `sw` at 0x298 stores 4 bytes to ret(kmem_zalloc) +0x78.
  The `sw` at 0x29c stores 4 bytes to ret(kmem_zalloc) +0x4.
  2 such `sh` accesses store 2 bytes to ret(kmem_zalloc) +0x72, including `sh` at 0x2bc, `sh` at 0xb8c.
  The `sh` at 0x2f8 stores 2 bytes to ret(kmem_zalloc) +0x74.
  2 such `lw` accesses load 4 bytes from ret(kmem_zalloc) +0x78, including `lw` at 0x310, `lw` at 0x748.
  2 such `sd` accesses store 8 bytes to ret(kmem_zalloc) +0x830, including `sd` at 0x324, `sd` at 0x6dc.
  The `sw` at 0x32c stores 4 bytes to ret(kmem_zalloc) +0xaa4.
  The `sw` at 0x330 stores 4 bytes to ret(kmem_zalloc) +0xaa0.
  The `sw` at 0x34c stores 4 bytes to ret(kmem_zalloc) +0x10.
  The `sd` at 0x360 stores 8 bytes to ret(kmem_zalloc) +0x0.
  6 such `sd` accesses store 8 bytes to ?, including `sd` at 0x378, `sd` at 0x53c, `sd` at 0x540.
  4 such `ld` accesses load 8 bytes from ret(kmem_zalloc) +0x10, including `ld` at 0x3e0, `ld` at 0xd28, `ld` at 0xdb8.
  The `sb` at 0x40c stores 1 byte to ret(kmem_zalloc) +0x28.
  The `sw` at 0x418 stores 4 bytes to ret(kmem_zalloc) +0x2c.
  The `sb` at 0x428 stores 1 byte to ret(kmem_zalloc) +0x33.
  The `sb` at 0x42c stores 1 byte to ret(kmem_zalloc) +0x30.
  13 such `lbu` accesses load 1 byte from ret(kmem_zalloc) +0x39, including `lbu` at 0x430, `lbu` at 0x50c, `lbu` at 0x554.
  The `sb` at 0x434 stores 1 byte to ret(kmem_zalloc) +0x32.
  11 such `lbu` accesses load 1 byte from ret(kmem_zalloc) +0x38, including `lbu` at 0x438, `lbu` at 0x510, `lbu` at 0x848.
  The `sb` at 0x440 stores 1 byte to ret(kmem_zalloc) +0x31.
  3 such `lbu` accesses load 1 byte from ret(kmem_zalloc) +0x28, including `lbu` at 0x44c, `lbu` at 0x47c, `lbu` at 0xa44.
  The `sd` at 0x454 stores 8 bytes to ret(kmem_zalloc) +0x80.
  The `sh` at 0x470 stores 2 bytes to ret(kmem_zalloc) +0x8a.
  3 such `lh` accesses load 2 bytes from ret(kmem_zalloc) +0x8a, including `lh` at 0x480, `lh` at 0x938, `lh` at 0xdc8.
  The `sh` at 0x488 stores 2 bytes to ret(kmem_zalloc) +0x88.
  The `ld` at 0x4a8 loads 8 bytes from (sym(.rodata) + ([ret(kmem_zalloc)+138]:2-35 << 0x3)) +0x0.
  2 such `lbu` accesses load 1 byte from ret(kmem_zalloc) +0x32, including `lbu` at 0x4c8, `lbu` at 0x928.
  2 such `lbu` accesses load 1 byte from ret(kmem_zalloc) +0x31, including `lbu` at 0x4d0, `lbu` at 0x92c.
  9 such `sw` accesses store 4 bytes to ?, including `sw` at 0x534, `sw` at 0x538, `sw` at 0x54c.
  7 such `lh` accesses load 2 bytes from ret(kmem_zalloc) +0x70, including `lh` at 0x5f4, `lh` at 0x610, `lh` at 0x638.
  2 such `lh` accesses load 2 bytes from ret(kmem_zalloc) +0x72, including `lh` at 0x624, `lh` at 0x8ec.
  The `sd` at 0x648 stores 8 bytes to ret(kmem_zalloc) +0x60.
  4 such `sw` accesses store 4 bytes to ret(kmem_zalloc) +0x7c, including `sw` at 0x758, `sw` at 0x76c, `sw` at 0x784.
  The `sw` at 0x850 stores 4 bytes to ret(kmem_zalloc) +0xf8.
  The `sd` at 0x860 stores 8 bytes to ret(kmem_zalloc) +0x100.
  The `sw` at 0x974 stores 4 bytes to ret(kmem_zalloc) +0xab8.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x9ec, `ld` at 0x9f0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x9f4, `lw` at 0xa04.
  The `lw` at 0xacc loads 4 bytes from ret(pcibr_hints_get) +0x8.
  The `sw` at 0xad0 stores 4 bytes to ret(kmem_zalloc) +0x524.
  The `ld` at 0xad4 loads 8 bytes from ret(pcibr_hints_get) +0x18.
  2 such `sb` accesses store 1 byte to ?, including `sb` at 0xb30, `sb` at 0xb68.
  The `lbu` at 0xb54 loads 1 byte from ?.
  The `sd` at 0xba8 stores 8 bytes to ret(kmem_zalloc) +0x68.
  2 such `sh` accesses store 2 bytes to ret(kmem_zalloc) +0x70, including `sh` at 0xbf4, `sh` at 0xc18.
  The `lbu` at 0xbf8 loads 1 byte from sym(.rodata) +0x2be.
  The `sb` at 0xbfc stores 1 byte to ret(kmem_zalloc) +0x1e.
  The `lhu` at 0xc00 loads 2 bytes from sym(.rodata) +0x2bc.
  The `sh` at 0xc04 stores 2 bytes to ret(kmem_zalloc) +0x1c.
  The `lw` at 0xc08 loads 4 bytes from sym(.rodata) +0x2b8.
  The `sw` at 0xc10 stores 4 bytes to ret(kmem_zalloc) +0x18.
  The `ld` at 0xc1c loads 8 bytes from sym(.rodata) +0x2b0.
  The `sd` at 0xc24 stores 8 bytes to ret(kmem_zalloc) +0x18.
  The `lw` at 0xccc loads 4 bytes from ret(kmem_zalloc) +0x4.
  The `jal` at 0x74 calls pcibr_debug with a0=0x4, a1=a0 at entry (arg0), a2=sym(.rodata), a3=a3 at entry (arg3).
  The `jal` at 0x84 calls pcibr_bridge_ptr_get with a0=a0 at entry (arg0), a1=0x0, a2=?, a3=?.
  The `jal` at 0x9c calls pcibr_debug with a0=0x4, a1=a0 at entry (arg0), a2=sym(.rodata), a3=ret(pcibr_bridge_ptr_get).
  The `jal` at 0xe8 calls hwgraph_path_add with a0=a0 at entry (arg0), a1=sym(.rodata), a2=sp-432, a3=?.
  The `jal` at 0xf4 calls pciio_provider_register with a0=?, a1=sym(pci_xbridge_provider), a2=?, a3=?.
  The `jal` at 0xfc calls pciio_provider_startup with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x104 calls async_attach_get_info with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x120 calls hwgraph_char_device_add with a0=?, a1=sym(.rodata), a2=sym(.rodata), a3=sp-428.
  The `jal` at 0x128 calls pcireg_nic_addr with a0=ret(pcibr_bridge_ptr_get), a1=?, a2=?, a3=?.
  The `jal` at 0x134 calls pcireg_nic_addr with a0=ret(pcibr_bridge_ptr_get), a1=?, a2=?, a3=?.
  The `jal` at 0x148 calls is_iobrick with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x158 calls pcireg_nic_addr with a0=ret(pcibr_bridge_ptr_get), a1=?, a2=?, a3=?.
  The `jal` at 0x178 calls eeprom_vertex_info_set with a0=0x400, a1=?, a2=a0 at entry (arg0), a3=0x0.
  The `jal` at 0x188 calls pcibr_hints_get with a0=a0 at entry (arg0), a1=0x0, a2=?, a3=?.
  The `jal` at 0x1d0 calls pcireg_id_get with a0=ret(pcibr_bridge_ptr_get), a1=?, a2=?, a3=?.
  The `jal` at 0x200 calls hwgraph_info_add_LBL with a0=?, a1=sym(.rodata), a2=?, a3=?.
  The `jal` at 0x210 calls kmem_zalloc with a0=0xac0, a1=0x0, a2=?, a3=?.
  The `jal` at 0x224 calls memset with a0=ret(kmem_zalloc), a1=0x0, a2=0xac0, a3=?.
  The `jal` at 0x230 calls hwgraph_fastinfo_set with a0=?, a1=ret(kmem_zalloc), a2=?, a3=?.
  The `jal` at 0x240 calls vertex_to_name with a0=?, a1=sp-424, a2=0x100, a3=?.
  The `jal` at 0x24c calls strlen with a0=ret(vertex_to_name), a1=?, a2=?, a3=?.
  The `jal` at 0x258 calls kmem_alloc with a0=ret(strlen)+1, a1=0x0, a2=?, a3=?.
  The `jal` at 0x268 calls strcpy with a0=ret(kmem_alloc), a1=ret(vertex_to_name), a2=?, a3=?.
  The `jal` at 0x2d0 calls pcireg_mode_get with a0=ret(kmem_zalloc), a1=?, a2=?, a3=?.
  The `jal` at 0x2dc calls pcireg_speed_get with a0=ret(kmem_zalloc), a1=?, a2=?, a3=?.
  The `jal` at 0x308 calls pcibr_debug with a0=0x4, a1=?, a2=sym(.rodata), a3=ret(kmem_zalloc), a5=(ret(pcireg_speed_get) << 0x1).
  The `jal` at 0x338 calls kmem_zalloc with a0=0x18, a1=0x0, a2=?, a3=?.
  The `jal` at 0x35c calls swap_ptr with a0=sym(pcibr_list), a1=ret(kmem_zalloc), a2=[sym(pcibr_list)]:8, a3=?.
  The `jal` at 0x388 calls pcireg_nic_addr with a0=ret(pcibr_bridge_ptr_get), a1=?, a2=?, a3=?.
  The `jal` at 0x394 calls nic_bridge_vertex_info with a0=a0 at entry (arg0), a1=ret(pcireg_nic_addr), a2=?, a3=?.
  The `jal` at 0x3f0 calls pcibr_debug with a0=0x4, a1=?, a2=sym(.rodata), a3=ret(kmem_zalloc)+24, a4=sym(.rodata), a6=[ret(kmem_zalloc)+16]:8.
  The `jal` at 0x3f8 calls xwidget_info_get with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x404 calls xwidget_info_id_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x410 calls xwidget_info_master_get with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x41c calls xwidget_info_masterid_get with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x43c calls get_elsc with a0=?, a1=?, a2=?, a3=?, a5=[ret(kmem_zalloc)+56]:1, a6=[ret(kmem_zalloc)+57]:1, a7=0x3.
  The `jal` at 0x45c calls iobrick_l1type_get_nasid with a0=?, a1=[ret(kmem_zalloc)+40]:1, a2=?, a3=?.
  The `jal` at 0x478 calls iobrick_module_get_nasid with a0=?, a1=[ret(kmem_zalloc)+40]:1, a2=?, a3=?.
  Calls (unknown callee) via register with a0=0x2, a1=?, a2=?, a3=[ret(kmem_zalloc)+138]:2 (`jr` at 0x4ac).
  The `jal` at 0x4c0 calls iobrick_L1bricktype_to_name with a0=[ret(kmem_zalloc)+138]:2, a1=?, a2=?, a3=[ret(kmem_zalloc)+138]:2.
  The `jal` at 0x4dc calls pcibr_debug with a0=0x4, a1=?, a2=sym(.rodata), a3=ret(iobrick_L1bricktype_to_name), a4=[ret(kmem_zalloc)+49]:1, a5=[ret(kmem_zalloc)+50]:1.
  The `jal` at 0x4e8 calls spinlock_init with a0=ret(kmem_zalloc)+140, a1=sym(.rodata), a2=?, a3=?.
  The `jal` at 0x4fc calls mrlock_init with a0=ret(kmem_zalloc)+144, a1=0x0, a2=sym(.rodata), a3=-0x1.
  The `jal` at 0x5ac calls xwidget_error_register with a0=a0 at entry (arg0), a1=sym(pcibr_error_handler), a2=ret(kmem_zalloc), a3=?.
  The `jal` at 0x5c8 calls pcireg_intr_reset_set with a0=ret(kmem_zalloc), a1=0x7f, a2=?, a3=?.
  The `jal` at 0x5d4 calls pcireg_intr_device_set with a0=ret(kmem_zalloc), a1=0xffffffff, a2=?, a3=?.
  The `jal` at 0x5dc calls pcibr_directmap_init with a0=ret(kmem_zalloc), a1=?, a2=?, a3=?.
  The `jal` at 0x5ec calls pcireg_control_bit_set with a0=ret(kmem_zalloc), a1=0x200000, a2=?, a3=?.
  The `jal` at 0x608 calls pcireg_int_ate_set with a0=ret(kmem_zalloc), a1=?, a2=0x0, a3=?, a4=[ret(kmem_zalloc)+112]:2.
  The `jal` at 0x630 calls rmallocmap with a0=[ret(kmem_zalloc)+112]:2, a1=?, a2=?, a3=?, a4=[ret(kmem_zalloc)+112]:2.
  The `jal` at 0x644 calls pcibr_ate_free with a0=ret(kmem_zalloc), a1=0x0, a2=[ret(kmem_zalloc)+112]:2, a3=?.
  The `jal` at 0x670 calls pcibr_debug with a0=0x10, a1=?, a2=sym(.rodata), a3=?, a4=[ret(kmem_zalloc)+112]:2.
  The `jal` at 0x678 calls device_desc_dup with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x684 calls device_desc_flags_get with a0=ret(device_desc_dup), a1=?, a2=?, a3=?.
  The `jal` at 0x690 calls device_desc_flags_set with a0=ret(device_desc_dup), a1=(ret(device_desc_flags_get) | 0x1), a2=?, a3=?.
  The `jal` at 0x69c calls device_desc_intr_name_set with a0=ret(device_desc_dup), a1=sym(.rodata), a2=?, a3=?.
  The `jal` at 0x6ac calls xtalk_intr_alloc with a0=a0 at entry (arg0), a1=ret(device_desc_dup), a2=?, a3=?.
  The `jal` at 0x6b8 calls device_desc_free with a0=ret(device_desc_dup), a1=?, a2=?, a3=?.
  The `jal` at 0x6e0 calls xtalk_intr_connect with a0=?, a1=sym(pcibr_error_intr_handler), a2=ret(kmem_zalloc), a3=sym(pcibr_setwidint), a4=ret(pcibr_bridge_ptr_get), a5=0x0.
  The `jal` at 0x6e8 calls pcireg_intr_dst_target_id_get with a0=ret(kmem_zalloc), a1=?, a2=?, a3=?.
  The `jal` at 0x6f4 calls pcireg_intr_dst_addr_get with a0=ret(kmem_zalloc), a1=?, a2=?, a3=?.
  The `jal` at 0x70c calls pcibr_debug with a0=0x1000, a1=?, a2=sym(.rodata), a3=ret(pcireg_intr_dst_target_id_get), a4=ret(pcireg_intr_dst_addr_get).
  The `jal` at 0x714 calls pcireg_intr_enable_get with a0=ret(kmem_zalloc), a1=?, a2=?, a3=?.
  The `jal` at 0x724 calls pcireg_intr_enable_set with a0=ret(kmem_zalloc), a1=(ret(pcireg_intr_enable_get) | 0x3eff7ffffe00), a2=?, a3=?.
  The `jal` at 0x730 calls pcireg_intr_mode_set with a0=ret(kmem_zalloc), a1=0x0, a2=?, a3=?.
  The `jal` at 0x740 calls pcireg_tflush_get with a0=ret(kmem_zalloc), a1=?, a2=?, a3=?.
  The `jal` at 0x7bc calls pciio_device_win_map_new with a0=ret(kmem_zalloc)+2128, a1=0x10000000, a2=0x100000, a3=?.
  The `jal` at 0x7cc calls pciio_device_win_populate with a0=?, a1=0x200000, a2=0xff00000, a3=?.
  The `jal` at 0x7e0 calls pciio_device_win_map_new with a0=ret(kmem_zalloc)+2144, a1=0x100000, a2=0x4000, a3=?.
  The `jal` at 0x7f4 calls pciio_device_win_populate with a0=?, a1=0x4000, a2=0xfc000, a3=?.
  The `jal` at 0x808 calls pciio_device_win_map_new with a0=ret(kmem_zalloc)+2160, a1=0x40000000, a2=0x100000, a3=?.
  The `jal` at 0x818 calls pciio_device_win_populate with a0=?, a1=0x200000, a2=0x3ff00000, a3=?.
  The `jal` at 0x830 calls pcibr_device_info_new with a0=ret(kmem_zalloc), a1=0xff, a2=0xff, a3=-0x1, a4=-0x1.
  The `jal` at 0x840 calls pciio_device_info_register with a0=?, a1=ret(pcibr_device_info_new), a2=?, a3=?.
  The `jal` at 0x870 calls pcibr_slot_info_init with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x8a0 calls pcibr_slot_addr_space_init with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x8d0 calls pcibr_slot_device_init with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x90c calls pcibr_slot_guest_info_init with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x930 calls pcibr_initial_rrb with a0=?, a1=[ret(kmem_zalloc)+49]:1, a2=[ret(kmem_zalloc)+50]:1, a3=?.
  The `jal` at 0x97c calls strstr with a0=?, a1=sym(.rodata), a2=?, a3=?.
  The `jal` at 0x9a8 calls pcibr_slot_call_device_attach with a0=?, a1=?, a2=0x0, a3=?.
  The `jal` at 0xa2c calls pciio_device_attach with a0=ret(pciio_device_info_register), a1=0x0, a2=?, a3=?.
  The `jal` at 0xa5c calls pcibr_rrb_alloc_init with a0=ret(kmem_zalloc), a1=0x0, a2=0x0, a3=0x1.
  The `jal` at 0xa74 calls async_attach_add_info with a0=ret(pciio_device_info_register), a1=ret(async_attach_get_info), a2=?, a3=?.
  The `jal` at 0xa84 calls async_attach_del_info with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0xac4 calls pcibr_debug with a0=0x2, a1=?, a2=sym(.rodata), a3=ret(pcibr_hints_get).
  The `jal` at 0xb00 calls pcireg_stat_get with a0=ret(pcibr_bridge_ptr_get), a1=sym(.rodata), a2=?, a3=?.
  The `jal` at 0xb20 calls pcireg_timeout_bit_clr with a0=ret(kmem_zalloc), a1=0x3ff, a2=?, a3=?.
  The `jal` at 0xb98 calls rmallocmap with a0=?, a1=?, a2=?, a3=?, a4=[ret(kmem_zalloc)+112]:2.
  The `jal` at 0xbac calls pcibr_ate_free with a0=ret(kmem_zalloc), a1=[ret(kmem_zalloc)+112]:2, a2=?, a3=?.
  The `jal` at 0xbc4 calls pcibr_rrb_alloc_init with a0=ret(kmem_zalloc), a1=0x1, a2=0x0, a3=0x8.
  The `jal` at 0xc34 calls pcibr_rrb_alloc_init with a0=ret(kmem_zalloc), a1=0x1, a2=0x0, a3=0x8.
  The `jal` at 0xc48 calls pcibr_rrb_alloc_init with a0=ret(kmem_zalloc), a1=0x2, a2=0x0, a3=0x8.
  The `jal` at 0xcb4 calls pcibr_init_ext_ate_ram with a0=ret(kmem_zalloc), a1=?, a2=?, a3=?, a4=[ret(kmem_zalloc)+112]:2.
  The `jal` at 0xcc8 calls pcibr_bus_cnvlink with a0=[ret(kmem_zalloc)+4], a1=?, a2=?, a3=?.
  The `jal` at 0xce4 calls pcibr_rrb_alloc_init with a0=ret(kmem_zalloc), a1=0x1, a2=0x0, a3=0x8.
  The `jal` at 0xcf8 calls pcibr_rrb_alloc_init with a0=ret(kmem_zalloc), a1=0x2, a2=0x0, a3=0x8.
  The `jal` at 0xd2c calls cmn_err with a0=0x5, a1=sym(.rodata), a2=[ret(kmem_zalloc)+16]:8, a3=0x4, a5=0x5802.
  The `jal` at 0xd38 calls pcireg_timeout_bit_clr with a0=ret(kmem_zalloc), a1=0x1f0000, a2=?, a3=?.
  The `jal` at 0xd44 calls pcireg_timeout_bit_set with a0=ret(kmem_zalloc), a1=0x40000, a2=?, a3=?.
  The `jal` at 0xd50 calls hubii_ixtt_get with a0=a0 at entry (arg0), a1=sp-168, a2=?, a3=?.
  The `jal` at 0xd78 calls hubii_ixtt_set with a0=a0 at entry (arg0), a1=sp-168, a2=?, a3=?.
  The `jal` at 0xd84 calls hubii_ixtt_get with a0=a0 at entry (arg0), a1=sp-168, a2=?, a3=?.
  The `jal` at 0xda4 calls cmn_err with a0=0x6, a1=sym(.rodata), a2=?, a3=0x7fffff.
  The `jal` at 0xdbc calls cmn_err with a0=0x4, a1=sym(.rodata), a2=[ret(kmem_zalloc)+16]:8, a3=[ret(kmem_zalloc)+138]:2.
  The `jal` at 0xdd4 calls cmn_err with a0=0x4, a1=sym(.rodata), a2=[ret(kmem_zalloc)+16]:8, a3=?.
  The `bne` branch at 0xc0 targets 0xdc, is taken when at(?) != v0(=0xc002), and falls through when at(?) == v0(=0xc002).
  The `beq` branch at 0xd8 targets 0xb00, is taken when v0(?) == v1(=0x36), and falls through when v0(?) != v1(=0x36).
  The `beq` branch at 0x150 targets 0x388, is taken when v0(=ret(is_iobrick)) == 0, and falls through when v0(=ret(is_iobrick)) != 0.
  The `beq` branch at 0x190 targets 0x1cc, is taken when v0(=ret(pcibr_hints_get)) == 0, and falls through when v0(=ret(pcibr_hints_get)) != 0.
  The `beq` branch at 0x19c targets 0x1cc, is taken when a5(=[ret(pcibr_hints_get)+12]) == 0, and falls through when a5(=[ret(pcibr_hints_get)+12]) != 0.
  The `beq` branch at 0x2b0 targets 0xb74, is taken when t9(?) == ra(=0xd002), and falls through when t9(?) != ra(=0xd002).
  The `beq` branch at 0x2c0 targets 0xbf0, is taken when v0(=one of 0x0, 0x1) == 0, and falls through when v0(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x2c8 targets 0xc14, is taken when v0(=one of 0x0, 0x1) == s6(=0x1), and falls through when v0(=one of 0x0, 0x1) != s6(=0x1).
  The `bne` branch at 0x320 targets 0x334, is taken when v0(=0xc0023) < a6(=[ret(kmem_zalloc)+120]) (signed), and falls through when v0(=0xc0023) >= a6(=[ret(kmem_zalloc)+120]) (signed).
  The `bne` branch at 0x374 targets 0x3a4, is taken when s4(?) != a4(=0xc0021), and falls through when s4(?) == a4(=0xc0021).
  The `beq` branch at 0x380 targets 0x3dc and is always taken.
  The `beq` branch at 0x39c targets 0x184 and is always taken.
  The `beq` branch at 0x3a4 targets 0xc58, is taken when s4(?) == a2(=0xc0022), and falls through when s4(?) != a2(=0xc0022).
  The `beq` branch at 0x3ac targets 0xc64, is taken when s4(?) == a5(=0xc0023), and falls through when s4(?) != a5(=0xc0023).
  The `beq` branch at 0x3b4 targets 0xc70, is taken when s4(?) == a6(=0xc0024), and falls through when s4(?) != a6(=0xc0024).
  The `bne` branch at 0x3c0 targets 0xbe0, is taken when s4(?) != a7(=0xd0021), and falls through when s4(?) == a7(=0xd0021).
  The `beq` branch at 0x3cc targets 0x3dc and is always taken.
  The `bltz` branch at 0x46c targets 0xdcc, is taken when a3(?) < 0 (signed), and falls through when a3(?) >= 0 (signed).
  The `blez` branch at 0x484 targets 0x4e4, is taken when a3(=[ret(kmem_zalloc)+138]:2) <= 0 (signed), and falls through when a3(=[ret(kmem_zalloc)+138]:2) > 0 (signed).
  The `beq` branch at 0x4a0 targets 0xdb4, is taken when v1(=[ret(kmem_zalloc)+138]:2-35) >= 0x37 (unsigned), and falls through when v1(=[ret(kmem_zalloc)+138]:2-35) < 0x37 (unsigned).
  The `bne` branch at 0x504 targets 0xabc, is taken when s5(=ret(pcibr_hints_get)) != 0, and falls through when s5(=ret(pcibr_hints_get)) == 0.
  The `bne` branch at 0x518 targets 0xa94, is taken when t0(=[ret(kmem_zalloc)+57]:1) < a4(=[ret(kmem_zalloc)+56]:1) (signed), and falls through when t0(=[ret(kmem_zalloc)+57]:1) >= a4(=[ret(kmem_zalloc)+56]:1) (signed).
  The `beq` branch at 0x560 targets 0x530, is taken when t8(=[ret(kmem_zalloc)+57]:1) >= a4(?) (signed), and falls through when t8(=[ret(kmem_zalloc)+57]:1) < a4(?) (signed).
  The `bne` branch at 0x59c targets 0x56c, is taken when a2(?) < 0x8 (signed), and falls through when a2(?) >= 0x8 (signed).
  The `bne` branch at 0x5c0 targets 0xb1c, is taken when s4(?) < v0(=0xc0024) (signed), and falls through when s4(?) >= v0(=0xc0024) (signed).
  The `blez` branch at 0x5f8 targets 0x624, is taken when a4(=[ret(kmem_zalloc)+112]:2) <= 0 (signed), and falls through when a4(=[ret(kmem_zalloc)+112]:2) > 0 (signed).
  The `bne` branch at 0x61c targets 0x604, is taken when s4(?) < a4(=[ret(kmem_zalloc)+112]:2) (signed), and falls through when s4(?) >= a4(=[ret(kmem_zalloc)+112]:2) (signed).
  The `beq` branch at 0x628 targets 0xcb4, is taken when a0(=[ret(kmem_zalloc)+114]:2) == 0, and falls through when a0(=[ret(kmem_zalloc)+114]:2) != 0.
  The `bne` branch at 0x654 targets 0xb98, is taken when a4(=[ret(kmem_zalloc)+112]:2) < s4(?) (signed), and falls through when a4(=[ret(kmem_zalloc)+112]:2) >= s4(?) (signed).
  The `beq` branch at 0x65c targets 0xbd4, is taken when s4(?) == 0, and falls through when s4(?) != 0.
  The `beq` branch at 0x75c targets 0x770, is taken when a1(=[ret(kmem_zalloc)+120]) >= s2(=0xc0022) (signed), and falls through when a1(=[ret(kmem_zalloc)+120]) < s2(=0xc0022) (signed).
  The `beq` branch at 0x768 targets 0x78c and is always taken.
  The `beq` branch at 0x77c targets 0x78c, is taken when a1(=[ret(kmem_zalloc)+120]) >= a3(=([sym(pcibr_prefetch_enable_rev)] | 0xc0020)) (signed), and falls through when a1(=[ret(kmem_zalloc)+120]) < a3(=([sym(pcibr_prefetch_enable_rev)] | 0xc0020)) (signed).
  The `beq` branch at 0x798 targets 0x7b0, is taken when a1(=[ret(kmem_zalloc)+120]) >= a5(=([sym(pcibr_wg_enable_rev)] | 0xc0020)) (signed), and falls through when a1(=[ret(kmem_zalloc)+120]) < a5(=([sym(pcibr_wg_enable_rev)] | 0xc0020)) (signed).
  The `bne` branch at 0x864 targets 0x890, is taken when t0(=[ret(kmem_zalloc)+57]:1) < a4(=[ret(kmem_zalloc)+56]:1) (signed), and falls through when t0(=[ret(kmem_zalloc)+57]:1) >= a4(=[ret(kmem_zalloc)+56]:1) (signed).
  The `beq` branch at 0x884 targets 0x870, is taken when t0(=[ret(kmem_zalloc)+57]:1) >= s2(?) (signed), and falls through when t0(=[ret(kmem_zalloc)+57]:1) < s2(?) (signed).
  The `bne` branch at 0x894 targets 0x8c0, is taken when t0(=[ret(kmem_zalloc)+57]:1) < a4(=[ret(kmem_zalloc)+56]:1) (signed), and falls through when t0(=[ret(kmem_zalloc)+57]:1) >= a4(=[ret(kmem_zalloc)+56]:1) (signed).
  The `beq` branch at 0x8b4 targets 0x8a0, is taken when t0(=[ret(kmem_zalloc)+57]:1) >= s2(?) (signed), and falls through when t0(=[ret(kmem_zalloc)+57]:1) < s2(?) (signed).
  The `bne` branch at 0x8c4 targets 0x8ec, is taken when t0(=[ret(kmem_zalloc)+57]:1) < a4(=[ret(kmem_zalloc)+56]:1) (signed), and falls through when t0(=[ret(kmem_zalloc)+57]:1) >= a4(=[ret(kmem_zalloc)+56]:1) (signed).
  The `beq` branch at 0x8e4 targets 0x8d0, is taken when t0(=[ret(kmem_zalloc)+57]:1) >= s2(?) (signed), and falls through when t0(=[ret(kmem_zalloc)+57]:1) < s2(?) (signed).
  The `beq` branch at 0x8f0 targets 0xcc8, is taken when t8(=[ret(kmem_zalloc)+114]:2) == s6(=0x1), and falls through when t8(=[ret(kmem_zalloc)+114]:2) != s6(=0x1).
  The `bne` branch at 0x900 targets 0x928, is taken when t0(=[ret(kmem_zalloc)+57]:1) < s2(=[ret(kmem_zalloc)+56]:1) (signed), and falls through when t0(=[ret(kmem_zalloc)+57]:1) >= s2(=[ret(kmem_zalloc)+56]:1) (signed).
  The `beq` branch at 0x920 targets 0x90c, is taken when ra(=[ret(kmem_zalloc)+57]:1) >= s2(?) (signed), and falls through when ra(=[ret(kmem_zalloc)+57]:1) < s2(?) (signed).
  The `blez` branch at 0x93c targets 0x970, is taken when a2(=[ret(kmem_zalloc)+138]:2) <= 0 (signed), and falls through when a2(=[ret(kmem_zalloc)+138]:2) > 0 (signed).
  The `beq` branch at 0x944 targets 0xc2c, is taken when a2(=[ret(kmem_zalloc)+138]:2) == at(=0x25), and falls through when a2(=[ret(kmem_zalloc)+138]:2) != at(=0x25).
  The `beq` branch at 0x950 targets 0xc28, is taken when a2(=[ret(kmem_zalloc)+138]:2) == v0(=0x50), and falls through when a2(=[ret(kmem_zalloc)+138]:2) != v0(=0x50).
  The `beq` branch at 0x958 targets 0xa44, is taken when a2(=[ret(kmem_zalloc)+138]:2) == v1(=0x34), and falls through when a2(=[ret(kmem_zalloc)+138]:2) != v1(=0x34).
  The `beq` branch at 0x960 targets 0xa44, is taken when a2(=[ret(kmem_zalloc)+138]:2) == a0(=0x41), and falls through when a2(=[ret(kmem_zalloc)+138]:2) != a0(=0x41).
  The `beq` branch at 0x968 targets 0xa44, is taken when a2(=[ret(kmem_zalloc)+138]:2) == a1(=0x49), and falls through when a2(=[ret(kmem_zalloc)+138]:2) != a1(=0x49).
  The `beq` branch at 0x970 targets 0x98c, is taken when s8(?) == 0, and falls through when s8(?) != 0.
  The `bne` branch at 0x984 targets 0xbbc, is taken when v0(=ret(strstr)) != 0, and falls through when v0(=ret(strstr)) == 0.
  The `bne` branch at 0x998 targets 0x9c8, is taken when t0(=[ret(kmem_zalloc)+57]:1) < a4(=[ret(kmem_zalloc)+56]:1) (signed), and falls through when t0(=[ret(kmem_zalloc)+57]:1) >= a4(=[ret(kmem_zalloc)+56]:1) (signed).
  The `beq` branch at 0x9bc targets 0x9a4, is taken when t0(=[ret(kmem_zalloc)+57]:1) >= s2(?) (signed), and falls through when t0(=[ret(kmem_zalloc)+57]:1) < s2(?) (signed).
  The `bne` branch at 0x9cc targets 0xa20, is taken when t0(=[ret(kmem_zalloc)+57]:1) < a4(=[ret(kmem_zalloc)+56]:1) (signed), and falls through when t0(=[ret(kmem_zalloc)+57]:1) >= a4(=[ret(kmem_zalloc)+56]:1) (signed).
  The `beq` branch at 0x9d8 targets 0x9e4 and is always taken.
  The `bne` branch at 0x9e0 targets 0xa20, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `bne` branch at 0x9fc targets 0x9e0, is taken when a6(?) != v0(=0x11c1), and falls through when a6(?) == v0(=0x11c1).
  The `beq` branch at 0xa08 targets 0xd20, is taken when a0(?) == a3(=0x5801), and falls through when a0(?) != a3(=0x5801).
  The `bne` branch at 0xa10 targets 0x9e0, is taken when a0(?) != a5(=0x5802), and falls through when a0(?) == a5(=0x5802).
  The `beq` branch at 0xa18 targets 0xd24 and is always taken.
  The `bne` branch at 0xa20 targets 0xa6c, is taken when s7(=ret(async_attach_get_info)) != 0, and falls through when s7(=ret(async_attach_get_info)) == 0.
  The `bne` branch at 0xa34 targets 0xa84, is taken when s7(=ret(async_attach_get_info)) != 0, and falls through when s7(=ret(async_attach_get_info)) == 0.
  The `beq` branch at 0xa3c targets 0x1a4 and is always taken.
  The `beq` branch at 0xa4c targets 0xcd8, is taken when a2(=[ret(kmem_zalloc)+40]:1) == a3(=0xe), and falls through when a2(=[ret(kmem_zalloc)+40]:1) != a3(=0xe).
  The `beq` branch at 0xa64 targets 0x970 and is always taken.
  The `beq` branch at 0xa7c targets 0xa28 and is always taken.
  The `beq` branch at 0xa8c targets 0xa3c and is always taken.
  The `beq` branch at 0xa94 targets 0x568 and is always taken.
  The `beq` branch at 0xad8 targets 0xae4, is taken when v0(=[ret(pcibr_hints_get)+24]:8) == 0, and falls through when v0(=[ret(pcibr_hints_get)+24]:8) != 0.
  The `bne` branch at 0xaf0 targets 0x514, is taken when t0(=[ret(kmem_zalloc)+57]:1) < a4(=[ret(kmem_zalloc)+56]:1) (signed), and falls through when t0(=[ret(kmem_zalloc)+57]:1) >= a4(=[ret(kmem_zalloc)+56]:1) (signed).
  The `beq` branch at 0xaf8 targets 0xde4 and is always taken.
  The `bne` branch at 0xb0c targets 0xe0, is taken when (v0(=ret(pcireg_stat_get)) & 0x20) != 0, and falls through when (v0(=ret(pcireg_stat_get)) & 0x20) == 0.
  The `beq` branch at 0xb14 targets 0x1a4 and is always taken.
  The `beq` branch at 0xb28 targets 0x5c8 and is always taken.
  The `bne` branch at 0xb48 targets 0xb6c, is taken when t0(=[ret(kmem_zalloc)+57]:1) < a2(?) (signed), and falls through when t0(=[ret(kmem_zalloc)+57]:1) >= a2(?) (signed).
  The `bgez` branch at 0xb5c targets 0xb30, is taken when a0(?) >= 0 (signed), and falls through when a0(?) < 0 (signed).
  The `beq` branch at 0xb64 targets 0xb38 and is always taken.
  The `beq` branch at 0xb6c targets 0x514 and is always taken.
  The `bne` branch at 0xb84 targets 0x2b4, is taken when a1(?) != a2(=0x24), and falls through when a1(?) == a2(=0x24).
  The `beq` branch at 0xb90 targets 0x2c0 and is always taken.
  The `beq` branch at 0xbb4 targets 0x65c and is always taken.
  The `beq` branch at 0xbcc targets 0x990 and is always taken.
  The `beq` branch at 0xbd8 targets 0x664 and is always taken.
  The `bne` branch at 0xbe0 targets 0x3d4, is taken when s4(?) != a3(=0xd0022), and falls through when s4(?) == a3(=0xd0022).
  The `beq` branch at 0xbe8 targets 0x3dc and is always taken.
  The `beq` branch at 0xc0c targets 0x2d0 and is always taken.
  The `beq` branch at 0xc20 targets 0x2d0 and is always taken.
  The `beq` branch at 0xc50 targets 0x970 and is always taken.
  The `beq` branch at 0xc5c targets 0x3dc and is always taken.
  The `beq` branch at 0xc68 targets 0x3dc and is always taken.
  The `beq` branch at 0xc74 targets 0x3dc and is always taken.
  The `beq` branch at 0xcc0 targets 0x630 and is always taken.
  The `beq` branch at 0xcd0 targets 0x8f8 and is always taken.
  The `beq` branch at 0xd00 targets 0x970 and is always taken.
  The `beq` branch at 0xdac targets 0xa20 and is always taken.
  The `beq` branch at 0xdc4 targets 0x4c0 and is always taken.
  The `beq` branch at 0xddc targets 0x478 and is always taken.
  The `beq` branch at 0xde8 targets 0xb54 and is always taken.
  The return at 0x1c4 has v0 = one of -0x1, 0x0.
  The instructions from 0x4b4 to 0x4bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xa9c to 0xab8 are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xc7c to 0xcb0 are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0xd08 to 0xd1c are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x4ac uses a jump table whose successors are unresolved.
