# Routine readings, voyager round 5, batch 3

Role statements for targets 75 to 99 of the ranked round 5 list. Each statement uses the rendered facts only: the instructions and offsets, the branches and their sides, the calls in address order, and the returns. All entries are inferred.

- `__R300TCLArrayElementV3DN3FC3F_vcount` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x812420
  **Inferred.** Reads the cursor at a0+0x54aa8 [@0x812484] and writes words into the record it points to from +0x0 [@0x812498]. The new cursor is the old one plus 48 [@0x812534 taken] and is written back [@0x812530].
  Role (from facts): appends a 48-byte record to a buffer and, when the new cursor reaches the limit at a0+0x54ab0, calls __R300HandleBrokenPrimitive with a0 at entry [call 1, @0x812534 taken].
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DN3FC4F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x8127e0
  **Inferred.** Reads the cursor at a0+0x54aa8 [@0x812824] and writes words into the record it points to from +0x0 [@0x812844]. The new cursor is the old one plus 52 [@0x8128e8 taken] and is written back [@0x8128e4].
  Role (from facts): appends a 52-byte record to a buffer and, when the new cursor reaches the limit at a0+0x54ab0, calls __R300HandleBrokenPrimitive with a0 at entry [call 1, @0x8128e8 taken].
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DC4UBT02F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x8130a0
  **Inferred.** Reads the cursor at a0+0x54aa8 [@0x8130e4] and writes words into the record it points to from +0x0 [@0x813100]. The new cursor is the old one plus 36 [@0x8131a8 taken] and is written back [@0x8131a4].
  Role (from facts): appends a 36-byte record to a buffer and, when the new cursor reaches the limit at a0+0x54ab0, calls __R300HandleBrokenPrimitive with a0 at entry [call 1, @0x8131a8 taken].
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DC4UBT02F_vcount` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x8131e0
  **Inferred.** Reads the cursor at a0+0x54aa8 [@0x813244] and writes words into the record it points to from +0x0 [@0x813254]. The new cursor is the old one plus 36 [@0x8132fc taken] and is written back [@0x8132f8].
  Role (from facts): appends a 36-byte record to a buffer and, when the new cursor reaches the limit at a0+0x54ab0, calls __R300HandleBrokenPrimitive with a0 at entry [call 1, @0x8132fc taken].
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DC3FT02F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x813580
  **Inferred.** Reads the cursor at a0+0x54aa8 [@0x8135c4] and writes words into the record it points to from +0x0 [@0x8135e0]. The new cursor is the old one plus 44 [@0x813674 taken] and is written back [@0x813670].
  Role (from facts): appends a 44-byte record to a buffer and, when the new cursor reaches the limit at a0+0x54ab0, calls __R300HandleBrokenPrimitive with a0 at entry [call 1, @0x813674 taken].
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DC3FT02F_vcount` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x8136a0
  **Inferred.** Reads the cursor at a0+0x54aa8 [@0x813704] and writes words into the record it points to from +0x0 [@0x813714]. The new cursor is the old one plus 44 [@0x8137a8 taken] and is written back [@0x8137a4].
  Role (from facts): appends a 44-byte record to a buffer and, when the new cursor reaches the limit at a0+0x54ab0, calls __R300HandleBrokenPrimitive with a0 at entry [call 1, @0x8137a8 taken].
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DC4FT02F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x813a40
  **Inferred.** Reads the cursor at a0+0x54aa8 [@0x813a84] and writes words into the record it points to from +0x0 [@0x813aa0]. The new cursor is the old one plus 48 [@0x813b40 taken] and is written back [@0x813b3c].
  Role (from facts): appends a 48-byte record to a buffer and, when the new cursor reaches the limit at a0+0x54ab0, calls __R300HandleBrokenPrimitive with a0 at entry [call 1, @0x813b40 taken].
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DC4FT02F_vcount` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x813b70
  **Inferred.** Reads the cursor at a0+0x54aa8 [@0x813bd4] and writes words into the record it points to from +0x0 [@0x813be4]. The new cursor is the old one plus 48 [@0x813c84 taken] and is written back [@0x813c80].
  Role (from facts): appends a 48-byte record to a buffer and, when the new cursor reaches the limit at a0+0x54ab0, calls __R300HandleBrokenPrimitive with a0 at entry [call 1, @0x813c84 taken].
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DN3FC4UBT02F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x814460
  **Inferred.** Reads the cursor at a0+0x54aa8 [@0x8144b8] and writes words into the record it points to from +0x0 [@0x8144d8]. The new cursor is the old one plus 52 [@0x8145a8 taken] and is written back [@0x8145a4].
  Role (from facts): appends a 52-byte record to a buffer and, when the new cursor reaches the limit at a0+0x54ab0, calls __R300HandleBrokenPrimitive with a0 at entry [call 1, @0x8145a8 taken].
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DN3FC3FT02F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x814a40
  **Inferred.** Reads the cursor at a0+0x54aa8 [@0x814a98] and writes words into the record it points to from +0x0 [@0x814ab8]. The new cursor is the old one plus 60 [@0x814b78 taken] and is written back [@0x814b74].
  Role (from facts): appends a 60-byte record to a buffer and, when the new cursor reaches the limit at a0+0x54ab0, calls __R300HandleBrokenPrimitive with a0 at entry [call 1, @0x814b78 taken].
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DN3FC3FT02F_vcount` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x814bb0
  **Inferred.** Reads the cursor at a0+0x54aa8 [@0x814c2c] and writes words into the record it points to from +0x0 [@0x814c3c]. The new cursor is the old one plus 60 [@0x814cfc taken] and is written back [@0x814cf8].
  Role (from facts): appends a 60-byte record to a buffer and, when the new cursor reaches the limit at a0+0x54ab0, calls __R300HandleBrokenPrimitive with a0 at entry [call 1, @0x814cfc taken].
  Reviewed: 2026-11-12

- `__R300TCLArrayElementV3DN3FC4FT02F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x815020
  **Inferred.** Reads the cursor at a0+0x54aa8 [@0x815078] and writes words into the record it points to from +0x0 [@0x815098]. The new cursor is the old one plus 64 [@0x815160 taken] and is written back [@0x81515c].
  Role (from facts): appends a 64-byte record to a buffer and, when the new cursor reaches the limit at a0+0x54ab0, calls __R300HandleBrokenPrimitive with a0 at entry [call 1, @0x815160 taken].
  Reviewed: 2026-11-12

- `__R300TCLDrawArraysV3D` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x81c3c0
  **Inferred.** Writes a header word at the cursor, +0x0 [@0x81c428], and stores the cursor back at a0+0x54aa8 [@0x81c4f0]. When the room left at the cursor is short it calls __glATISubmitBM [call 1, @0x81c41c taken] and checks the room again; when the room is still short after that it calls __glR300BreakDrawArrays [call 2, @0x81c54c fall].
  Role (from facts): writes a packet for the element count in a3, starting with the header word [@0x81c428], flushing through __glATISubmitBM [call 1, @0x81c41c taken] when the buffer is full and falling back to __glR300BreakDrawArrays [call 2, @0x81c54c fall] when a flush does not free enough space.
  Reviewed: 2026-11-12

- `__R300TCLDrawArraysV3DC3F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x81cc80
  **Inferred.** Writes a header word at the cursor, +0x0 [@0x81ccec], and stores the cursor back at a0+0x54aa8 [@0x81ce00]. When the room left at the cursor is short it calls __glATISubmitBM [call 1, @0x81cce0 taken] and checks the room again; when the room is still short after that it calls __glR300BreakDrawArrays [call 2, @0x81ce68 fall].
  Role (from facts): writes a packet for the element count in a3, starting with the header word [@0x81ccec], flushing through __glATISubmitBM [call 1, @0x81cce0 taken] when the buffer is full and falling back to __glR300BreakDrawArrays [call 2, @0x81ce68 fall] when a flush does not free enough space.
  Reviewed: 2026-11-12

- `__R300TCLDrawArraysV3DC4F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x81d160
  **Inferred.** Writes a header word at the cursor, +0x0 [@0x81d1d0], and stores the cursor back at a0+0x54aa8 [@0x81d2fc]. When the room left at the cursor is short it calls __glATISubmitBM [call 1, @0x81d1c4 taken] and checks the room again; when the room is still short after that it calls __glR300BreakDrawArrays [call 2, @0x81d350 fall].
  Role (from facts): writes a packet for the element count in a3, starting with the header word [@0x81d1d0], flushing through __glATISubmitBM [call 1, @0x81d1c4 taken] when the buffer is full and falling back to __glR300BreakDrawArrays [call 2, @0x81d350 fall] when a flush does not free enough space.
  Reviewed: 2026-11-12

- `__R300TCLDrawArraysV3DN3F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x81d380
  **Inferred.** Writes a header word at the cursor, +0x0 [@0x81d3f8], and stores the cursor back at a0+0x54aa8 [@0x81d6e4]. When the room left at the cursor is short it calls __glATISubmitBM [call 1, @0x81d3ec taken] and checks the room again; when the room is still short after that it calls __glR300BreakDrawArrays [call 2, @0x81d74c fall].
  Role (from facts): writes a packet for the element count in a3, starting with the header word [@0x81d3f8], flushing through __glATISubmitBM [call 1, @0x81d3ec taken] when the buffer is full and falling back to __glR300BreakDrawArrays [call 2, @0x81d74c fall] when a flush does not free enough space.
  Reviewed: 2026-11-12

- `__R300TCLDrawArraysV3DN3FC3F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x81e140
  **Inferred.** Writes a header word at the cursor, +0x0 [@0x81e1c4], and stores the cursor back at a0+0x54aa8 [@0x81e3d4]. When the room left at the cursor is short it calls __glATISubmitBM [call 1, @0x81e1b8 taken] and checks the room again; when the room is still short after that it calls __glR300BreakDrawArrays [call 2, @0x81e438 fall].
  Role (from facts): writes a packet for the element count in a3, starting with the header word [@0x81e1c4], flushing through __glATISubmitBM [call 1, @0x81e1b8 taken] when the buffer is full and falling back to __glR300BreakDrawArrays [call 2, @0x81e438 fall] when a flush does not free enough space.
  Reviewed: 2026-11-12

- `__R300TCLDrawArraysV3DN3FC4F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x81e7a0
  **Inferred.** Writes a header word at the cursor, +0x0 [@0x81e828], and stores the cursor back at a0+0x54aa8 [@0x81ea48]. When the room left at the cursor is short it calls __glATISubmitBM [call 1, @0x81e81c taken] and checks the room again; when the room is still short after that it calls __glR300BreakDrawArrays [call 2, @0x81eaac fall].
  Role (from facts): writes a packet for the element count in a3, starting with the header word [@0x81e828], flushing through __glATISubmitBM [call 1, @0x81e81c taken] when the buffer is full and falling back to __glR300BreakDrawArrays [call 2, @0x81eaac fall] when a flush does not free enough space.
  Reviewed: 2026-11-12

- `__R300TCLDrawArraysV3DC3FT02F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x81f6d0
  **Inferred.** Writes a header word at the cursor, +0x0 [@0x81f744], and stores the cursor back at a0+0x54aa8 [@0x81f8b8]. When the room left at the cursor is short it calls __glATISubmitBM [call 1, @0x81f738 taken] and checks the room again; when the room is still short after that it calls __glR300BreakDrawArrays [call 2, @0x81f914 fall].
  Role (from facts): writes a packet for the element count in a3, starting with the header word [@0x81f744], flushing through __glATISubmitBM [call 1, @0x81f738 taken] when the buffer is full and falling back to __glR300BreakDrawArrays [call 2, @0x81f914 fall] when a flush does not free enough space.
  Reviewed: 2026-11-12

- `__R300TCLDrawArraysV3DC4FT02F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x81fbb0
  **Inferred.** Writes a header word at the cursor, +0x0 [@0x81fc20], and stores the cursor back at a0+0x54aa8 [@0x81fd88]. When the room left at the cursor is short it calls __glATISubmitBM [call 1, @0x81fc14 taken] and checks the room again; when the room is still short after that it calls __glR300BreakDrawArrays [call 2, @0x81fdf0 fall].
  Role (from facts): writes a packet for the element count in a3, starting with the header word [@0x81fc20], flushing through __glATISubmitBM [call 1, @0x81fc14 taken] when the buffer is full and falling back to __glR300BreakDrawArrays [call 2, @0x81fdf0 fall] when a flush does not free enough space.
  Reviewed: 2026-11-12

- `__R300TCLDrawArraysV3DN3FC3FT02F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x820f00
  **Inferred.** Writes a header word at the cursor, +0x0 [@0x820f80], and stores the cursor back at a0+0x54aa8 [@0x8211e0]. When the room left at the cursor is short it calls __glATISubmitBM [call 1, @0x820f74 taken] and checks the room again; when the room is still short after that it calls __glR300BreakDrawArrays [call 2, @0x821254 fall].
  Role (from facts): writes a packet for the element count in a3, starting with the header word [@0x820f80], flushing through __glATISubmitBM [call 1, @0x820f74 taken] when the buffer is full and falling back to __glR300BreakDrawArrays [call 2, @0x821254 fall] when a flush does not free enough space.
  Reviewed: 2026-11-12

- `__R300TCLDrawArraysV3DN3FC4FT02F` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x8215f0
  **Inferred.** Writes a header word at the cursor, +0x0 [@0x82166c], and stores the cursor back at a0+0x54aa8 [@0x8218dc]. When the room left at the cursor is short it calls __glATISubmitBM [call 1, @0x821660 taken] and checks the room again; when the room is still short after that it calls __glR300BreakDrawArrays [call 2, @0x821950 fall].
  Role (from facts): writes a packet for the element count in a3, starting with the header word [@0x82166c], flushing through __glATISubmitBM [call 1, @0x821660 taken] when the buffer is full and falling back to __glR300BreakDrawArrays [call 2, @0x821950 fall] when a flush does not free enough space.
  Reviewed: 2026-11-12

- `__R300TCLFFXProgramNullShader` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x837d40
  **Inferred.** When a0 is zero the routine skips the context writes [@0x837d98 taken zero]. It also skips them when bit 28 of the word at a0+0xf5c is clear [@0x837db4 taken zero]. Otherwise [@0x837db4 fall nonzero] it writes the word at a0+0xe2b0 [@0x837e04], the byte at a0+0x148 [@0x837e08], the word at a0+0x144 [@0x837e0c] and the word at a0+0xe2cc [@0x837e18] before the record writes. Words are written to a1 from +0x0 [@0x837e30] through +0x40 [@0x837e34].
  Role (from facts): fills a record at a1 and returns a1 plus 68 [@0x837eb8], and, when a0 is nonzero [@0x837d98 fall nonzero], writes fields of the context at a0 [@0x837e04].
  Reviewed: 2026-11-12

- `__R300SetOverrideRendering_Imaging` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x8485e0
  **Inferred.** Writes words to a1 from +0x0 [@0x848630]. When a2 is nonzero [@0x848638 fall nonzero] it loads the words at a2+0x4c [@0x848648] and a2+0x18 [@0x848650] and writes the first one to a1 [@0x84864c]. When bit 0x1000 of the word at a2+0x18 is set [@0x848658 fall] it writes two more words, the last at +0x14 [@0x848668]. In the path where the cursor test falls through [@0x848808 fall] it stores 4 bytes at a0+0x55f08 [@0x848844] and 8 bytes at a0+0x55ef8 [@0x848888].
  Role (from facts): writes a state record at a1, reads fields of the structure at a2 when a2 is nonzero, and in the conditional path above makes one indirect call [call 1, @0x848808 fall].
  Reviewed: 2026-11-12

- `__R300FastDownload__Imaging_SetupState` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x849230
  **Inferred.** Loads the pointer at a0+0xce0 [@0x849284] and then the pointer at +0x28 from it [@0x849290]. It writes words at +0x0 and +0x4 of the record at the cursor [@0x849358] [@0x849364].
  Role (from facts): sets up imaging state by calling __R300LoadImagingShader first [call 1], then, when the buffer room is short [@0x849314 fall], flushing through __glATISubmitBM [call 2] in a loop that repeats while the room is still short [@0x849340 taken], and finally calling __R300SetOverrideRendering_Imaging [call 3].
  Reviewed: 2026-11-12
