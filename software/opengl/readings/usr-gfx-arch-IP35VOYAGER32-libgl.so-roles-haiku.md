# Role readings: `usr/gfx/arch/IP35VOYAGER32/libgl.so`

Routine roles, each read from the routine's own body. Calls through GOT slots are named by the slot's offset from gp where the symbol table does not name them.

- `extract` in `usr/gfx/arch/IP35VOYAGER32/libgl.so` at 0xecce060
  **Inferred.** Linear search of a table of 12-byte records for the first one whose leading word equals a2 and whose second word equals a3, returning that record's third word in v0. The table base is in a0 and a1 holds the remaining length, which the loop lowers by three per record; the loop gives up once a1 is zero or negative and then returns zero with the delay-slot move. A match needs the word at +0 equal to a2 and the word at +4 equal to a3, and the value comes from the word at +8 through the delay slot of the return. The stride is set by the addiu of 0xc on a0.
