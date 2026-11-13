# Tier-2 routine readings, voyager round 4 batch 5

Role statements for targets 125 to 149 of the ranked tier-2 list (offset 125, 25 routines). All 25 are in the fglrx DRI driver `usr/X11R6/lib/modules/dri/fglrx_dri64.so`. Each statement uses only the rendered facts: branch targets, call sites and callee names, argument registers, constants and return values. Grades are inferred unless the render fully settles the role. The three 8-byte stubs (`__glNop3`, `__glNop6` and `__glAPINop1`) are the only entries graded established.

- `__glTextureFragment` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cf270
  **Inferred.** The routine reads the unit index at a0+4316 and scales it to pick a record from the table at a0+255232. It makes float compares (c.lt.s and c.le.s at 0x5cf324 to 0x5cf364 and 0x5cf400); the first operand of the first compare is the word at a0+32436, and later compares are against float fields of the selected record at offsets 184, 188 and 404. It passes the pointer loaded from the record slot at +255232 as a1 to unnamed callees at 0x5cf38c and 0x5cf3b4, and calls log at 0x5cf424 with a4 = 0x78f00000.
  Reviewed: 2026-11-12 (sonnet)

- `__glMipMapFragment` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cf450
  **Inferred.** Role (from name): the mip-map variant of the fragment check. It has a loop over a count at a0+32560 (blez at 0x5cf4ec, back branches at 0x5cf528 to 0x5cf53c), calls BumpmapLookup at 0x5cc0c0 from 0x5cf588, and makes float compares (c.lt.s at 0x5cf630 to 0x5cf664 and c.le.s at 0x5cf670) against fields of the record at a0+255232. The return at 0x5cf70c yields an unnamed value, and a log call at 0x5cf730 passes 0x78f00000 as a0.
  Reviewed: 2026-11-12 (sonnet)

- `__glLookupTextureFormat` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cf750
  **Inferred.** It takes a texture format enum in a1 and walks a chain of compares against constants such as 0x1902, 0x1906 to 0x1909, 0x83a0 and 0x83f0 to 0x83f3, which are GL format values. Many of the matched cases store a word at +0 (46 `sw` sites; the base register is not shown in the facts) and then return a table value such as table(0x1b8) or table(0xb00); some returns have an unknown v0. The default path at 0x5cf924 returns 0.
  Reviewed: 2026-11-12 (sonnet)

- `__glNop3` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d03f0
  **Established.** The 8-byte body is a single return at 0x5d03f0 with no stores, calls or branches, so the routine does nothing. Its v0 is not set by the body.
  Reviewed: 2026-11-12 (sonnet)

- `__glNop6` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d0420
  **Established.** The 8-byte body is a single return at 0x5d0420 with no stores, calls or branches, so the routine does nothing. Its v0 is not set by the body.
  Reviewed: 2026-11-12 (sonnet)

- `__glAPINop1` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d0450
  **Established.** The 8-byte body is a single return at 0x5d0450 with no stores, calls or branches, so the routine does nothing. Its v0 is not set by the body.
  Reviewed: 2026-11-12 (sonnet)

- `__glLookUpTexture` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d0540
  **Inferred.** It selects an entry by the GL-style enum in a1 and returns a pointer from a per-unit block at a0+0x3df90 to a0+0x3dfd8, located by a0+4316 times 80. Ten returns (0x5d05ac, 0x5d061c, 0x5d0648, 0x5d06a0, 0x5d0708, 0x5d0734, 0x5d075c, 0x5d0788, 0x5d07ac and 0x5d07d0) each load a different slot from that block, and the unmatched path returns 0 at 0x5d0658. The compare chain covers constants such as 0x8513, 0x851a, 0x806f and 0x84f5.
  Reviewed: 2026-11-12 (sonnet)

- `Clampf` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d07e0
  **Inferred.** The routine compares f12 with f13 (c.lt.s at 0x5d07e0) and f14 with f12 (c.lt.s at 0x5d07f0). It then leaves through one of three returns at 0x5d0800, 0x5d0808 or 0x5d0810. Role (from name): a float clamp to a lower and upper bound. The float result register is not set in the rendered facts, so which bound comes back on each path is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `__glShareTextureObjects` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d0820
  **Inferred.** The routine moves the object-list pointer at +0x3e590 with an `sd` at 0x5d0998, an `ld` at 0x5d099c and an `sd` at 0x5d09a0; the facts do not show the base registers, so the copy direction between the two contexts (a0 and a1) is not established. It calls fglX11LockSurface at 0x5d08c8 and __glNamesUnlockData at 0x5d0914, and, only when the word at +12 of the array header at a0+255376 is zero after the store at 0x5d0958, frees the name array with __glNamesFreeArray at 0x5d09d8. The count passed to the free is the array header at +12 minus one.
  Reviewed: 2026-11-12 (sonnet)

- `__glEarlyInitTextureState` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d09f0
  **Inferred.** It stores to the context at a0+0x10dc, +0x75f0, +0x762c, +0x7ec0, +0x7ec4 and +0x3e59c, and reads a0+0x7634; the stored values are not shown. It calls __glATIInitTextureManager at 0x53ada0 from 0x5d0a28. When the pointer at a0+0x3e590 is null (beq at 0x5d0a64), the path reaches __glNamesNewArray at 0x5e6d40 through the call at 0x5d0b28. The loop branch at 0x5d0ae8 compares against the constant 0xa.
  Reviewed: 2026-11-12 (sonnet)

- `__glInitTextureState` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d0b40
  **Inferred.** It writes the initial texture state for each unit: about 50 integer and 21 float stores into the context. The loops count units at a0+30192 and a0+32552. The callee at 0x5d0ea0 gets constants a5 = 0x2100, a6 = 0x1702 and a7 = 0x78, and the callee at 0x5d0c24 gets a0 = the context with a1 to a3 unknown. A jump at 0x5d1190 targets 0x5d11b4 (inside __glInitTextureState).
  Reviewed: 2026-11-12 (sonnet)

- `__glFreeTextureState` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d12e0
  **Inferred.** It undoes the setup done by __glInitTextureState and __glEarlyInitTextureState. For each unit it calls __glBindTexture at 0x5e38a0 from 0x5d13a0 with a2 = 0, and it stores to a0+0x10dc and to the list pointer at a0+0x3e590. It releases the surface manager through fglX11ReleaseSurfaceManager at 0x5d1480. It frees the name array with __glNamesFreeArray at 0x5d14a0 only when the word at +12 of that array header is zero; otherwise it skips that call and goes on to the release.
  Reviewed: 2026-11-12 (sonnet)

- `__glIsTextureConsistent` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5da620
  **Inferred.** Role (from name): checks whether a texture object's levels fit together. It walks levels from a1+168 up to a1+172 through the level array at a1+40, compares level fields at +16, +20 and +24 and the limit at a0+30260, returns 0 or 1, and stores flag bytes at a1+0x38, a1+0x39 and a1+0x42. The values 0x2600 and 0x2601 are compared with the field at a1+136; they are the GL nearest and linear enums.
  Reviewed: 2026-11-12 (sonnet)

- `__glIsCubeMapTextureConsistent` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dac60
  **Inferred.** Role (from name): the same kind of check for a cube-map texture. It walks the face array at a1+248 for the level indexed by a1+168, up to the count at a1+224. It calls __glIsTextureConsistent at 0x5da620 from 0x5dadac inside that loop, only on some paths, and compares the level record's fields at +16 and +20 with each other and with other values. It returns 0 or 1.
  Reviewed: 2026-11-12 (sonnet)

- `CheckTexImageArgs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dae20
  **Inferred.** Role (from name): validates the arguments of a texture-image upload. It calls __glLookUpTexture at 0x5d0540 from 0x5dae6c and compares a1 and other argument registers against a long chain of constants. Failures raise GL error codes through __glSetError at 0x7345d0, including 0x500 (invalid enum) at 0x5db14c, 0x501 (invalid value) at 0x5db2dc and 0x502 (invalid operation) at 0x5daf4c and 0x5dafcc. The failure paths after those calls return 0; the return at 0x5db258 gives the __glLookUpTexture result.
  Reviewed: 2026-11-12 (sonnet)

- `CheckCompressedTexImageArgs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dbb50
  **Inferred.** It validates a compressed texture upload. It looks up the texture with __glLookUpTexture at 0x5d0540 from 0x5dbb90, compares a2 with the value loaded from a0+30260, and reports 0x501 at 0x5dbbc4, 0x500 at 0x5dbbe0 and 0x5dbc1c, and 0x502 at 0x5dbc04 through __glSetError. The returns at 0x5dbbb0 give the looked-up texture or 0.
  Reviewed: 2026-11-12 (sonnet)

- `CheckCompressedTexImageS3TCArgs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dbc30
  **Inferred.** Role (from name): validates the S3TC-compressed format arguments. It compares the format in a3 with constants 0x83f2 and 0x83f3 at 0x5dbc7c and 0x5dbc84, and reports GL_INVALID_OPERATION (0x502) and GL_INVALID_VALUE (0x501) through __glSetError at 0x5dbc48 and 0x5dbcac. The facts rendered here do not show a transfer to CheckCompressedTexImageArgs.
  Reviewed: 2026-11-12 (sonnet)

- `__glInitTexImageStore` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dbcf0
  **Inferred.** Role (from name): fills a texture image's store record from the level descriptor at a2+40, indexed by a3. It stores size and format fields at offsets 0x54 to 0xa4 and 0x1d0, and an 8-byte value at offset 0x60 (the base register is not shown in the facts). The format and type enums it compares include 0x1906, 0x1907, 0x1908, 0x80e1, 0x1401 and 0x1403, among others. It returns the value at a2+48 on every path.
  Reviewed: 2026-11-12 (sonnet)

- `__glInitTexImageGet` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dbe40
  **Inferred.** Role (from name): fills the read-back (get) variant of the image record from the same level descriptor used by __glInitTexImageStore. It stores a smaller set of fields at offsets 0x0 to 0x48 and 0x1d0 (the base register is not shown in the facts), and it returns the value at a2+48.
  Reviewed: 2026-11-12 (sonnet)

- `__glInitTexSourceUnpack` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dbee0
  **Inferred.** Role (from name): sets up the unpack (source-side) transfer state for a texture upload. It stores to offsets 0x0, 0x4, 0x8 and 0xb8 to 0xc0, and float stores at +0xb0 and +0xcc; the values are not shown. It then calls __glLoadUnpackModes at 0x584990 from 0x5dbf28 and returns that call's result.
  Reviewed: 2026-11-12 (sonnet)

- `__glInitTexDestPack` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dbf40
  **Inferred.** Role (from name): the pack-side counterpart of __glInitTexSourceUnpack. It stores to offsets 0x54, 0x58, 0x60 and 0xb8 to 0xc0 and float stores at +0xcc and +0xb0 (the values are not shown), then calls __glLoadPackModes at 0x585e40 from 0x5dbf84 and returns its result.
  Reviewed: 2026-11-12 (sonnet)

- `IsLegalRange` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dbfa0
  **Inferred.** Role (from name): checks a size or offset range. When a7 is not negative (bltz at 0x5dbfb8), it returns 1 if a3 equals 0x84f5 or 0x84f7 (branches at 0x5dbfc0 and 0x5dbfc8) or if the masked test of a7 against t0 is zero (0x5dbfd8). A negative a7 and the remaining cases report GL_INVALID_VALUE (0x501) through __glSetError at 0x5dbfe4 and 0x5dc00c, and return 0.
  Reviewed: 2026-11-12 (sonnet)

- `CheckTexImage1DArgs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dc030
  **Inferred.** Role (from name): the 1D form of the texture-image argument check. It calls CheckTexImageArgs at 0x5dae20 from 0x5dc074 with a7 = 0x1, and calls IsLegalRange at 0x5dbfa0 from 0x5dc09c with a1 and a2 taken from its a4 and a5. On a failed check it reports GL_INVALID_VALUE (0x501) at 0x5dc204. It calls __glUberBufDetachTexture at 0x552d00 from 0x5dc1a0 only on a path where a byte loaded through the result's +592 pointer is nonzero, and it has ll/sc style atomic stores (sc at 0x5dc0f0, 0x5dc120, 0x5dc150 and 0x5dc174); what they update is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `CheckTexImage2DArgs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dc260
  **Inferred.** Role (from name): the 2D form of the texture-image argument check. It calls CheckTexImageArgs at 0x5dae20 from 0x5dc2dc with a7 = 0x2, and calls IsLegalRange at 0x5dbfa0 from 0x5dc308 and 0x5dc32c with a1 taken from its a4 and a5. It reports GL_INVALID_VALUE (0x501) and GL_INVALID_ENUM (0x500) through __glSetError at 0x5dc4a8 and 0x5dc554, and calls __glUberBufDetachTexture with a1 = 0x40000 at 0x5dc440.
  Reviewed: 2026-11-12 (sonnet)

- `CheckCompressedTexImage2DArgs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dc570
  **Inferred.** Role (from name): the 2D check for compressed uploads. For S3TC formats (constants 0x83f0 to 0x83f3, compared at 0x5dc644 to 0x5dc660) it calls CheckCompressedTexImageS3TCArgs at 0x5dbc30 from 0x5dc6a0. Compares of a1 against 0x8515 to 0x851a and 0xde1 come first, and a format outside 0x83f0 to 0x83f3 that reaches the format compares falls to the `__glSetError` call at 0x5dc668. When the S3TC check returns non-zero, IsLegalRange at 0x5dbfa0 is called with a4 and a5 from 0x5dc700 and 0x5dc724. Failures report GL_INVALID_ENUM (0x500) through __glSetError at 0x5dc5ec and 0x5dc668, and GL_INVALID_VALUE (0x501) at 0x5dc770.
  Reviewed: 2026-11-12 (sonnet)
