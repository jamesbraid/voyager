# Role readings: `usr/diags/SG/bin/biosemu`

Routine roles, each read from the routine's own body. Calls through GOT slots are named by the slot's offset from gp where the symbol table does not name them.

- `xf86InitInt10` in `usr/diags/SG/bin/biosemu` at 0x10008d00
  **Inferred.** Builds the int10 context for one adapter. It mallocs 0x60 bytes and passes them to xf86Int10ExecSetup at 0x1000dbf0; when that fails it frees them. On success it stores a module data table address at ctx+0x20, mallocs a 0x28-byte block into ctx+0x18, and puts a bitmap of 0xa0000 divided by getpagesize() minus one bytes at block+0x20. The 0xf0000-byte buffer goes to block+8 and the caller's +0x38 field to block+0x10. The first context also mallocs a 0x10000-byte global buffer and runs setup_system_bios on it, and every context points block+0x18 at that buffer. It then calls setup_int_vect and set_return_trap, copies 0x10000 bytes from the caller's +8 pointer to block+8+0xc0000, stores 0xc000 as a halfword at ctx+0x10 and 0xe6 at ctx+0x28, and returns the context pointer, or 0 when the setup fails.

- `xf86FreeInt10` in `usr/diags/SG/bin/biosemu` at 0x10008f30
  **Inferred.** Tears down a context made by xf86InitInt10. A null argument returns at once. If the argument is the current Int10Current, that global is set to null first. It then frees block+8, block+0x20, the block at ctx+0x18 and the context itself. The global 0x10000-byte buffer at block+0x18 is not freed here.

- `xf86Int10AllocPages` in `usr/diags/SG/bin/biosemu` at 0x10008ff0
  **Inferred.** Reserves a run of real-mode pages from the bitmap at block+0x20. The page count is 0xa0000 divided by getpagesize() minus one. A first-fit scan looks for a run of zero bytes as long as the a1 argument. A run that is found gets ones written over it, the 32-bit word getpagesize() times (start+1) goes to the pointer in a2, and the routine returns that word plus block+8. It returns zero when no run fits.

- `xf86Int10FreePages` in `usr/diags/SG/bin/biosemu` at 0x10009220
  **Inferred.** Releases pages that xf86Int10AllocPages handed out. It computes the first bitmap index as (a1 minus block+8) divided by getpagesize(), minus one, then clears count bytes from that index, where count is the 32-bit a2 argument. Nothing is returned.

- `xf86int10Addr` in `usr/diags/SG/bin/biosemu` at 0x10009ef0
  **Established.** Maps a real-mode linear address to a host pointer with no calls. An address below 0xf0000 becomes block+8 plus the address. An address of 0xf0000 or more becomes block+0x18 plus (address minus 0xf0000). Both arguments are zero-extended to 32 bits before the add.

- `setup_int` in `usr/diags/SG/bin/biosemu` at 0x10009f70
  **Inferred.** Makes ctx the current int10 context and loads its registers into the emulator block at _X86EMU_env. If ctx is not already Int10Current, it calls MapCurrentInt10 and returns -1 when that fails; otherwise it stores ctx in Int10Current. It copies 32-bit fields from ctx+0x2c, +0x30, +0x34, +0x38, +0x3c, +0x40 and +0x48 into env+0x18, +0x1c, +0x20, +0x24, +0x30, +0x34 and +0x2c. It writes 0x1000 at env+0x28, 0x600 at env+0x38, 0x3200 at env+0x3c, and 0x40 as a 16-bit value at env+0x42. The halfword at ctx+0x44 goes to env+0x46, and ctx+0x50 shifted right by 4 and 12 goes to env+0x45 and env+0x44. It returns 1.

- `finish_int` in `usr/diags/SG/bin/biosemu` at 0x1000a130
  **Established.** Copies the emulator block back into the context and makes no calls. The low 16 bits of env+0x18, +0x1c, +0x20, +0x24, +0x30, +0x34 and +0x2c go to ctx+0x2c, +0x30, +0x34, +0x38, +0x3c, +0x40 and +0x48. The big-endian halfword at env+0x46 goes to ctx+0x44, and the low 16 bits of env+0x3c go to ctx+0x4c. It returns nothing.

- `getIntVect` in `usr/diags/SG/bin/biosemu` at 0x1000a230
  **Inferred.** Reads the real-mode vector for the number in a1. It calls the 16-bit read at slot +8 (Mem_rw) of the table that ctx+0x20 points to, first at 4 times the vector for the offset and then at 4 times the vector plus 2 for the segment. It returns (segment shifted left by 4) plus the offset.

- `run_bios_int` in `usr/diags/SG/bin/biosemu` at 0x1000a360
  **Inferred.** Enters a real-mode vector from the emulator. It reads the segment at 4 times the vector plus 2 with the 16-bit read. A segment of 0xf000 means the vector still points into the ROM, so it prints a message with fprintf and returns 0. Otherwise it pushes the 16-bit words at env+0x3c, env+0x40 and env+0x3a with pushw, loads the vector's segment into env+0x40 and its offset, read at 4 times the vector, into env+0x3a, and returns 1.

- `x_inb` in `usr/diags/SG/bin/biosemu` at 0x1000aad0
  **Inferred.** Intercepts byte port reads before inb. Port 0x40 is answered from the 16-bit counter at Int10Current+0x12: the counter is incremented, and the low byte is returned when the new count is even, the high byte when it is odd. Any other port calls inb with Int10Current+0x58 as the first argument and the port as the second, and returns the low byte of the result.

- `x_inw` in `usr/diags/SG/bin/biosemu` at 0x1000ab90
  **Inferred.** Intercepts word port reads before inw. Port 0x5c takes the second value that xf86getsecs writes, divides it by 3 and returns the low 16 bits. Other ports call inw with Int10Current+0x58 and the port, and return the 16-bit result.

- `x_outb` in `usr/diags/SG/bin/biosemu` at 0x1000ac30
  **Inferred.** Intercepts byte port writes before outb. A zero written to port 0x43 calls xf86getsecs and ORs 1 into the halfword at Int10Current+0x12, using the second value xf86getsecs returns. Every other write calls outb with Int10Current+0x58, the port, and the value masked to its low byte.

- `x_outw` in `usr/diags/SG/bin/biosemu` at 0x1000ace0
  **Inferred.** Intercepts word port writes before outw. A write to port 0x39 with a value below 0x14 returns without doing anything. A value of 0x14 or more calls usleep with (value times 8) divided by 20. Other ports pass the 16-bit value to outw with Int10Current+0x58.

- `x_inl` in `usr/diags/SG/bin/biosemu` at 0x1000ad90
  **Inferred.** Intercepts dword port reads before inl. It first calls the routine at 0x1000b0f0 with Int10Current+0x58, the port, and the address of a stack word. A nonzero return means that routine did the read, and the stack word is returned. Otherwise inl is called with the same cookie and port, and its result is returned.

- `x_outl` in `usr/diags/SG/bin/biosemu` at 0x1000ae20
  **Inferred.** Intercepts dword port writes before outl. It calls the routine at 0x1000b190 with Int10Current+0x58, the port and the value. A nonzero return ends the call; a zero return sends the write on to outl with the same cookie, port and value.

- `Mem_rb` in `usr/diags/SG/bin/biosemu` at 0x1000aeb0
  **Inferred.** Reads one byte of emulated memory. It passes Int10Current, the address in a0 and nothing else to slot 0 of the dispatch table at Int10Current+0x20, and returns that slot's result unchanged.

- `Mem_rw` in `usr/diags/SG/bin/biosemu` at 0x1000af10
  **Inferred.** Reads a 16-bit word from emulated memory through slot +8 of the same table, with the context and the address as its two arguments.

- `Mem_rl` in `usr/diags/SG/bin/biosemu` at 0x1000af70
  **Inferred.** Reads a 32-bit word from emulated memory through slot +0x10 of the dispatch table, after the context and address are placed in a0 and a1. The return value passes straight through.

- `Mem_wb` in `usr/diags/SG/bin/biosemu` at 0x1000afd0
  **Inferred.** Writes one byte. It takes the address from a0 and the low 8 bits of a1, and calls slot +0x18 of the dispatch table with the context, the address and the byte. Nothing is returned.

- `Mem_ww` in `usr/diags/SG/bin/biosemu` at 0x1000b030
  **Inferred.** Writes a 16-bit word. The address comes from a0 and the value from the low 16 bits of a1. The call goes through slot +0x20 of the dispatch table.

- `Mem_wl` in `usr/diags/SG/bin/biosemu` at 0x1000b090
  **Inferred.** Writes a 32-bit word by calling slot +0x28 of the dispatch table with the context, the address from a0 and the value from a1.

- `bios_checksum` in `usr/diags/SG/bin/biosemu` at 0x1000b230
  **Established.** Returns the byte sum of a buffer, truncated to 8 bits. The buffer is the pointer in a0 and the length is the signed 32-bit a1. Each byte is added into an 8-bit accumulator, and a length of zero or less returns 0. It makes no calls.

- `setup_int_vect` in `usr/diags/SG/bin/biosemu` at 0x1000b2b0
  **Inferred.** Fills the real-mode vector table. For vectors 0 through 0x7f it writes offset 0 at 4 times the vector and segment 0xf000 two bytes later, both by calling table slot +0x20 (Mem_ww). It then calls reset_int_vect and writes 16-bit offsets, segment left as is, for vectors 0x05, 0x08, 0x0e, 0x11, 0x12, 0x13, 0x15, 0x17, 0x1a, 0x1e and 0x1f. Last, it reads the byte at linear 0x410 through the byte-read slot and writes it back with bits 0x30 cleared, through the byte-write slot.

- `setup_system_bios` in `usr/diags/SG/bin/biosemu` at 0x1000b520
  **Inferred.** Fills the 64 KB BIOS image at a0 with 0xf4 (HLT) using memset. It then copies the doubleword at 0x10040050 to offset 0xfff5 and the byte at 0x10040058 to 0xfffd, copies the doubleword at 0x10042e10 to 0xffd9, and writes 0xfc at 0xfffe. It returns 1.

- `reset_int_vect` in `usr/diags/SG/bin/biosemu` at 0x1000b5d0
  **Inferred.** Writes the reset-time table. It copies 0x5c bytes from the data at 0x10041330 into linear addresses from 0xfa4 upward through the byte-write slot. Then, through the word-write slot, it writes 0xfa4 at 0x74 and 0 at 0x76, 0xf065 at 0x40 and 0xf000 at 0x42, and 0xf065 and 0xf000 at 0x108 and 0x10a, and again at 0x1b4 and 0x1b6.

- `set_return_trap` in `usr/diags/SG/bin/biosemu` at 0x1000b770
  **Inferred.** Places a HLT byte at linear address 0x600 through the byte-write slot. It then reserves one page with xf86Int10AllocPages at 0x10008ff0, passing the context, a page count of 1, and the address ctx+0x50 as the result slot.

- `sigbusHandler` in `usr/diags/SG/bin/biosemu` at 0x1000b7e0
  **Inferred.** Handles the bus-error signal raised by a port read on a missing mapping. It calls longjmp on the jump buffer at 0x10042f90 with the value 1, which returns control to the setjmp in inb, inw or inl.

- `outb` in `usr/diags/SG/bin/biosemu` at 0x1000b830
  **Established.** Stores the low byte of a2 at the address of the base pointer in a0+0x20 plus the port in a1. It performs no range check and makes no calls.

- `outw` in `usr/diags/SG/bin/biosemu` at 0x1000b870
  **Established.** Stores the 16-bit value in a2 at base plus a1, where base is the pointer at a0+0x20. The two bytes of the value are swapped before the store, so the bytes sit in little-endian order in the buffer. There is no range check.

- `outl` in `usr/diags/SG/bin/biosemu` at 0x1000b8d0
  **Established.** Stores the 32-bit value in a2 at base plus a1, where base is the pointer at a0+0x20. The four bytes are reversed before the store, leaving the value in little-endian order. It performs no range check.

- `inb` in `usr/diags/SG/bin/biosemu` at 0x1000b940
  **Inferred.** Reads a byte from the emulated port space. Ports 0x3ba, 0x3b4, 0x3b5, 0x3d4, 0x3d5, 0x4 and 0x5 return 0xff at once. Any other port installs sigbusHandler for signal 10, sets a setjmp point at 0x10042f90, and on the first return reads the byte at base plus the port, where base is a0+0x20. It then restores the old handler and returns that byte. A bus error comes back through the setjmp, which restores the handler and returns 0xff.

- `inw` in `usr/diags/SG/bin/biosemu` at 0x1000ba90
  **Inferred.** Reads a 16-bit value from the emulated port space with the same port list as inb, which returns 0xffff at once. Other ports use the same signal-10 guard and setjmp point, load a halfword at base plus the port, swap its bytes and return the swapped value. A bus error returns 0xffff.

- `inl` in `usr/diags/SG/bin/biosemu` at 0x1000bc00
  **Inferred.** Reads a 32-bit value from the emulated port space. The same port list returns -1 at once. Other ports read four bytes at base plus the port under the same guard, reverse them into host order and return the result. A bus error returns -1.

- `int_handler` in `usr/diags/SG/bin/biosemu` at 0x1000bdb0
  **Inferred.** Handles a software interrupt in C before any real-mode code runs. It takes the interrupt number from ctx+0x28. Vectors 0x10, 0x42 and 0x6d are looked up with getIntVect, and when the result is 0xff065 (F000:F065) the routine at 0x1000bf50 is called. Vector 0x1a calls the routine at 0x1000d0c0, vector 0xe6 calls the routine at 0x1000da00, and vector 0x15 is marked handled. Every other vector goes to run_bios_int. A zero result from that call is reported with fprintf to the stream at __iob+0x40, and the result is returned.

- `xf86ExecX86int10` in `usr/diags/SG/bin/biosemu` at 0x1000db60
  **Inferred.** Runs one real-mode interrupt request for a context. It calls setup_int at 0x10009f70 and returns at once when that gives a negative value. Otherwise it calls int_handler at 0x1000bdb0, and when int_handler returns nonzero it calls X86EMU_exec at 0x1000fff0 to run the code at the new CS:IP. Finally it calls finish_int at 0x1000a130 with the setup result.

- `xf86Int10ExecSetup` in `usr/diags/SG/bin/biosemu` at 0x1000dbf0
  **Inferred.** Sets up the emulator for a new context. It copies two 0x30-byte blocks from the data at 0x10041390 and 0x100413c0 onto the stack, passes the first to X86EMU_setupPioFuncs and the second to X86EMU_setupMemFuncs. It stores &_X86EMU_env in ctx+8, clears the first eight bytes of _X86EMU_env and sets the doubleword at env+8 to 0x10400. A 256-entry table is filled with the address 0x1000daf0 and passed to X86EMU_setupIntrFuncs. It returns 1.

- `printk` in `usr/diags/SG/bin/biosemu` at 0x1000dd50
  **Inferred.** Diagnostic print. It spills a0 through a3 and t0 through t3 into its stack frame, then calls vfprintf on the stream at __iob+0x40 with the format in a0 and the address of the spilled a1 slot as the argument list. The return value from vfprintf passes through.

- `pciReadByte` in `usr/diags/SG/bin/biosemu` at 0x1000de50
  **Inferred.** Reads one byte of PCI configuration space. The byte lane is the low two bits of the offset in a1 times eight. When the fd word at a0 is nonzero, it calls ioctl with request 0x40040000 OR the offset and a stack word as the output. The lane is then shifted down and masked to 8 bits. When the fd word is zero no ioctl runs, and the shift reads stack slot sp+4, which that path never writes.

- `pciReadWord` in `usr/diags/SG/bin/biosemu` at 0x1000dee0
  **Inferred.** Reads a 16-bit PCI configuration word through the fd word at a0. It uses the same flow as pciReadByte: a lane shift from the low two bits of the offset times eight, ioctl with request 0x40040000 OR the offset, and a 0xffff mask on the result. With a zero fd word the result comes from the unwritten stack slot sp+4.

- `pciReadLong` in `usr/diags/SG/bin/biosemu` at 0x1000df70
  **Inferred.** Reads a 32-bit PCI configuration word. Offset 0 returns the word at a0+0x48 and offset 0x14 returns the word at a0+0x4c, with no ioctl. For other offsets with a nonzero fd word at a0, it calls ioctl with request 0x40040000 OR the offset and returns the stack word it filled. With a zero fd word it returns the stack word at sp+0 without writing it.

- `pciWriteByte` in `usr/diags/SG/bin/biosemu` at 0x1000e030
  **Inferred.** Writes one byte to a PCI configuration register through a callback held in the handle block. a0 is the block pointer, a1 the register offset and a2 the value, which is cut to its low byte and kept on the stack. When the first word of the block is non-zero, the routine calls the pointer in the slot at gp-0x7e80 with that word as a0, the offset ORed with 0x80010000 as a1 and the stack address of the byte as a2. A zero first word leaves the call out.

- `pciWriteWord` in `usr/diags/SG/bin/biosemu` at 0x1000e0b0
  **Inferred.** The 16-bit twin of the byte writer. a2 is masked to 16 bits and stored as a halfword on the stack, and the callback in the slot at gp-0x7e80 receives the offset ORed with 0x80020000 and the halfword's address. The zero test on the block's first word gates the call the same way.

- `pciWriteLong` in `usr/diags/SG/bin/biosemu` at 0x1000e130
  **Inferred.** Writes a 32-bit configuration value. A register offset of exactly 0x14 copies the value into the block at +0x4c before anything else happens. The callback in the slot at gp-0x7e80 then gets the handle, the offset ORed with 0x80040000 and the stack address of the value, and only when the handle word is non-zero.

- `pciTag` in `usr/diags/SG/bin/biosemu` at 0x1000e1c0
  **Inferred.** Packs a PCI configuration address and returns it in v0. a0 is masked to five bits and shifted to bit 11, a1 to eight bits and shifted to bit 16, and a2 to three bits and shifted to bit 8. Bits 0 to 7 stay zero, so the register offset and the enable bit are not part of the value.

- `X86EMU_exec` in `usr/diags/SG/bin/biosemu` at 0x1000fff0
  **Inferred.** Starts the x86 emulator at 0xc000:0003 and runs its instruction loop until the halt bit is set. It stores 0xc000 as the halfword at +0x40 (the code segment), 3 as the halfword at +0x3a (the instruction pointer) and clears the word at +0x50. Each pass tests the word at +0x50 first. Zero skips the interrupt step, bit 0x4 set returns from the routine, and bit 0x1 with the byte at +0x58 equal to 0 or 2 calls the routine at 0x1000fe30. With bit 0x1 set and any other byte value, or with bit 0x1 clear, that call happens only when bit 0x200 of the EFLAGS word at +0x3c is clear. The instruction pointer then advances by one. The opcode is fetched through the pointer in the slot at gp-0x7958, using the old IP plus CS shifted left four as the linear address, and the opcode times 8 indexes the handler table whose base is in the slot at gp-0x78f8.

- `X86EMU_halt_sys` in `usr/diags/SG/bin/biosemu` at 0x1001016c
  **Inferred.** Sets bit 0x4 in the word at +0x50 of the emulator block and returns. Guest memory accesses that fall outside the block call it, and they carry on with the access after it returns.

- `ins` in `usr/diags/SG/bin/biosemu` at 0x1001d544
  **Inferred.** Implements the x86 string input for a port read. a0 is the operand size, 1, 2 or 4. The size is negated when bit 0x400 of the EFLAGS word at +0x3c is set. Bit 0x200 of the word at +0x4c selects the 32-bit count at +0x20 instead of the 16-bit count at +0x22. When the prefix bits 0x180 of that word are set, the transfer repeats count times and then zeroes the count and masks off 0x181. Each transfer reads the port in the word at +0x26 through the reader in the slot at gp-0x7928, -0x7920 or -0x7918, stores the result with the routine at 0x100108c8, 0x10010928 or 0x10010988 using the word at +0x46 as the segment and the word at +0x36 as the offset, and then adds the signed size to the offset. A size other than 1, 2 or 4 makes no port access. Without a prefix it still advances the offset by the signed size, and with a prefix it only clears the count.

- `outs` in `usr/diags/SG/bin/biosemu` at 0x1001da78
  **Inferred.** The output counterpart of `ins`, with the same size, direction and count rules. Each transfer reads memory at the word at +0x46 (segment) and the word at +0x32 (source offset) through the routine at 0x10010698, 0x100106ec or 0x10010740, and writes that value to the port in the word at +0x26 through the slot at gp-0x7910, -0x7908 or -0x7900. The source offset then moves by the signed size. Sizes other than 1, 2 or 4 do no port write, and as in `ins` the offset moves only when there is no prefix.

- `rdb` in `usr/diags/SG/bin/biosemu` at 0x1001e264
  **Inferred.** Returns the guest byte at address a0 in v0. The guest memory is described by a 64-bit base pointer at offset 0 of the emulator block and a 64-bit size at offset 8. The routine compares size minus one with a0 as unsigned values, and when a0 is larger it calls `X86EMU_halt_sys` and then reads the byte at base plus a0 anyway.

- `rdw` in `usr/diags/SG/bin/biosemu` at 0x1001e2e0
  **Inferred.** Returns the 16-bit guest value at a0. The bounds test uses size minus two, with the same halt call that does not stop the read. An even address loads the halfword with lhu, which on this big-endian build gives the byte at a0 as the high half. An odd address builds the value from two byte loads, the byte at a0 in the low half and the byte at a0+1 in the high half, so the two paths order the same two bytes differently.

- `rdl` in `usr/diags/SG/bin/biosemu` at 0x1001e3b4
  **Inferred.** Returns the 32-bit guest value at a0. It uses size minus four for the bounds test and calls `X86EMU_halt_sys` on failure, then goes on to read. A 4-aligned address takes one lw, which reads big-endian. Any other address assembles four byte loads with the byte at a0 in bits 0 to 7 and the byte at a0+3 in bits 24 to 31, so these paths also disagree on byte order for the same memory.

- `wrb` in `usr/diags/SG/bin/biosemu` at 0x1001e4c8
  **Inferred.** Stores the low byte of a1 at guest address a0 and returns nothing. It applies the same size-minus-one bound check as `rdb`, calls `X86EMU_halt_sys` on failure, and then stores the byte at base plus a0.

- `wrw` in `usr/diags/SG/bin/biosemu` at 0x1001e548
  **Inferred.** Stores the low 16 bits of a1 at guest address a0, bounded by size minus two. An even address stores a halfword with sh, which is big-endian in memory. An odd address stores the low byte at a0 and the high byte at a0+1, matching the odd path of `rdw`.

- `wrl` in `usr/diags/SG/bin/biosemu` at 0x1001e61c
  **Inferred.** Stores the 32-bit value in a1 at guest address a0, bounded by size minus four with the same halt call on failure. A 4-aligned address takes one sw. Any other address writes four bytes with the low byte at a0 and the highest byte at a0+3, which is the reverse of the aligned path's byte order.

- `X86EMU_setupMemFuncs` in `usr/diags/SG/bin/biosemu` at 0x1001e7dc
  **Inferred.** Copies six doublewords from the table at a0, at offsets 0, 8, 0x10, 0x18, 0x20 and 0x28, into the cells whose addresses are held in the slots at gp-0x7958, -0x7950, -0x7948, -0x7940, -0x7938 and -0x7930. Entry 0 lands in the cell behind gp-0x7958, the slot that `X86EMU_exec` calls for opcode fetch.

- `X86EMU_setupPioFuncs` in `usr/diags/SG/bin/biosemu` at 0x1001e874
  **Inferred.** Copies six doublewords from the table at a0 into the cells behind the slots at gp-0x7928, -0x7920, -0x7918, -0x7910, -0x7908 and -0x7900. `ins` calls the first three as byte, word and long port readers, and `outs` calls the last three as byte, word and long port writers, so the table is read in that order.

- `X86EMU_setupIntrFuncs` in `usr/diags/SG/bin/biosemu` at 0x1001e90c
  **Inferred.** Zeroes the 256 eight-byte entries of the table whose base is in the slot at gp-0x78d0. When a0 is non-zero it then copies 256 doublewords from a0 into that table, entry by entry. With a0 zero the routine only clears the table.

- `X86EMU_prepareForInt` in `usr/diags/SG/bin/biosemu` at 0x1001e9dc
  **Inferred.** Delivers the interrupt vector in a0 in real mode. It passes the low 16 bits of EFLAGS to the helper at 0x1001dff0 before clearing them, then passes the CS halfword at +0x40 to the same helper. The new CS is read from the 16-bit word at vector times 4 plus 2 through the helper at 0x1001dfac, then the IP halfword at +0x3a goes to the helper at 0x1001dff0. The new IP comes from vector times 4 through the same read helper. The routine clears IF (0x200) and TF (0x100) in the EFLAGS word at +0x3c between the flags push and the CS push, and it zeroes the word at +0x50 last.
