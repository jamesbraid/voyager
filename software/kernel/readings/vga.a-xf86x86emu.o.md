# Readings: `usr/cpu/sysgen/IP35boot/vga.a(xf86x86emu.o)`

One entry per routine, filed here from the reading batches by binary.

- `x86emu_do_int` in `usr/cpu/sysgen/IP35boot/vga.a(xf86x86emu.o)` at 0x0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/vga.a(xf86x86emu.o)`.
  Range: 0x0-0x38 (56 bytes).
  It occupies 56 bytes.
  The `sw` at 0xc stores 4 bytes to [sym(Int10Current)]:8 +0x20.
  The `jal` at 0x10 calls int_handler with a0=[sym(Int10Current)]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x28 calls X86EMU_halt_sys with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x18 targets 0x28, is taken when v0(=ret(int_handler)) == 0, and falls through when v0(=ret(int_handler)) != 0.
  The `beq` branch at 0x30 targets 0x20 and is always taken.
  The return at 0x20 has v0 = one of ret(int_handler), ret(X86EMU_halt_sys).

- `xf86ExecX86int10` in `usr/cpu/sysgen/IP35boot/vga.a(xf86x86emu.o)` at 0x38 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/vga.a(xf86x86emu.o)`.
  Range: 0x38-0xb0 (120 bytes).
  It occupies 120 bytes.
  The `jal` at 0x44 calls setup_int with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x54 calls int_handler with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x64 calls X86EMU_exec with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x6c calls finish_int with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x90 calls finish_int with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0xa0 calls cmn_err with a0=0x1, a1=sym(.rodata), a2=sym(.rodata), a3=?.
  The `bltz` branch at 0x4c targets 0x88, is taken when v0(=ret(setup_int)) < 0 (signed), and falls through when v0(=ret(setup_int)) >= 0 (signed).
  The `beq` branch at 0x5c targets 0x90, is taken when v0(=ret(int_handler)) == 0, and falls through when v0(=ret(int_handler)) != 0.
  The `beq` branch at 0x88 targets 0x78 and is always taken.
  The `beq` branch at 0xa8 targets 0x78 and is always taken.
  The return at 0x80 has v0 = one of 0x0, 0x1.

- `xf86Int10ExecSetup` in `usr/cpu/sysgen/IP35boot/vga.a(xf86x86emu.o)` at 0xb0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/vga.a(xf86x86emu.o)`.
  Range: 0xb0-0x1a0 (240 bytes).
  It occupies 240 bytes.
  The `sd` at 0x130 stores 8 bytes to a0 (arg0 at entry) +0x0.
  The `sd` at 0x138 stores 8 bytes to sym(_X86EMU_env) +0x8.
  The `sd` at 0x144 stores 8 bytes to sym(_X86EMU_env) +0x0.
  2 such `sd` accesses store 8 bytes to ?, including `sd` at 0x168, `sd` at 0x184.
  The `jal` at 0x120 calls X86EMU_setupMemFuncs with a0=sp-2112, a1=sym(Mem_rw), a2=sym(Mem_rb), a3=sym(x_outl), a4=sym(x_outw), a5=sym(x_outb), a6=sym(x_inl), a7=sym(x_inw).
  The `jal` at 0x140 calls X86EMU_setupPioFuncs with a0=sp-2160, a1=?, a2=?, a3=?.
  The `jal` at 0x188 calls X86EMU_setupIntrFuncs with a0=sp-2064, a1=?, a2=sp-2064, a3=sym(x86emu_do_int).
  The `beq` branch at 0x16c targets 0x188, is taken when a1(?) >= 0x100 (signed), and falls through when a1(?) < 0x100 (signed).
  The `bne` branch at 0x180 targets 0x158, is taken when a1(?) < 0x100 (signed), and falls through when a1(?) >= 0x100 (signed).
  The return at 0x198 has v0 = 0x1.

- `printk` in `usr/cpu/sysgen/IP35boot/vga.a(xf86x86emu.o)` at 0x1a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/vga.a(xf86x86emu.o)`.
  Range: 0x1a0-0x1e8 (72 bytes).
  It occupies 72 bytes.
  The `jal` at 0x1d4 calls icmn_err with a0=0x5, a1=a0 at entry (arg0), a2=sp-56, a3=a3 at entry (arg3).
  The return at 0x1e0 has v0 = ret(icmn_err).
