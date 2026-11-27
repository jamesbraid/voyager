# Role readings: `usr/cpu/sysgen/IP35boot/kernel.o`

Routine roles, each read from the routine's own body. Calls through GOT slots are named by the slot's offset from gp where the symbol table does not name them.

- `ip26_return_ucmem` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x21dbc
  **Established.** The body is a bare return: `jr $ra` at 0x21dbc with a nop in its delay slot, followed by three more nops at 0x21dc0 to 0x21dcc that control never reaches. It reads and writes no registers, context fields or memory. The symbol table gives this address three other names (ip28_return_ucmem, ip28_enable_ucmem and ip26_enable_ucmem, the last with size 8); only the name in this chunk was read here.
