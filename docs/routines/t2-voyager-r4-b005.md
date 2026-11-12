# Tier-2 routine readings, voyager round 4 batch 5

Role statements for targets 125 to 149 of the ranked tier-2 list (offset 125, 25 routines). All 25 are in the fglrx DRI driver `usr/X11R6/lib/modules/dri/fglrx_dri64.so`. Each statement uses only the rendered facts: branch targets, call sites and callee names, argument registers, constants and return values. Grades are inferred unless the render fully settles the role. The three 8-byte stubs (`__glNop3`, `__glNop6` and `__glAPINop1`) are the only entries graded established.

- `__glTextureFragment` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cf270
  **Inferred.** The routine reads the unit index at a0+4316 and scales it to pick a record from the table at a0+255232. It compares float fields of that record (offsets 184, 188 and 404) with the value at a0+32436 (c.lt.s and c.le.s at 0x5cf324 to 0x5cf364 and 0x5cf400). It passes the pointer loaded from the record slot at +255232 as a1 to unnamed callees at 0x5cf38c and 0x5cf3b4, and logs with constant 0x78f00000 at 0x5cf424 when a check fails.

- `__glMipMapFragment` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cf450
  **Inferred.** The mip-map variant of the fragment check. It loops over a count at a0+32560, calls BumpmapLookup at 0x5cc0c0 from 0x5cf588, and runs the same float range tests as the non-mipmap form on the record at a0+255232 (c.lt.s at 0x5cf630 to 0x5cf664). The return at 0x5cf70c yields an unnamed value, and the failure path logs with constant 0x78f00000 at 0x5cf730.

- `__glLookupTextureFormat` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5cf750
  **Inferred.** It takes a texture format enum in a1 and walks a chain of compares against constants such as 0x1902, 0x1906 to 0x1909, 0x83a0 and 0x83f0 to 0x83f3, which are GL format values. Each matched case writes a descriptor through a3 at +0 (46 `sw` sites) and returns a fixed data address such as 0xc149b8 or 0xc14c78. The default path at 0x5cf924 returns 0.

- `__glNop3` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d03f0
  **Established.** The 8-byte body is a single return at 0x5d03f0 with no stores, calls or branches, so the routine does nothing. Its v0 is not set by the body.

- `__glNop6` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d0420
  **Established.** The 8-byte body is a single return at 0x5d0420 with no stores, calls or branches, so the routine does nothing. Its v0 is not set by the body.

- `__glAPINop1` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d0450
  **Established.** The 8-byte body is a single return at 0x5d0450 with no stores, calls or branches, so the routine does nothing. Its v0 is not set by the body.

- `__glLookUpTexture` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d0540
  **Inferred.** It selects an entry by the GL-style enum in a1 and returns a pointer from a per-unit block between a0+0x3df50 and a0+0x3dfd8, located by a0+4316 times 80. The returns at 0x5d05ac, 0x5d061c, 0x5d0648, 0x5d06a0, 0x5d0708 and 0x5d0734 each load a different slot from that block, and the unmatched path returns 0 at 0x5d0658. The compare chain covers constants such as 0x8513, 0x851a, 0x806f and 0x84f5.

- `Clampf` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d07e0
  **Inferred.** The routine compares f12 with f13 (c.lt.s at 0x5d07e0) and f14 with f12 (c.lt.s at 0x5d07f0). It then leaves through one of three returns at 0x5d0800, 0x5d0808 or 0x5d0810. That is the shape of a float clamp to a lower and upper bound. The float result register is not set in the rendered facts, so which bound comes back on each path is not shown.

- `__glShareTextureObjects` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d0820
  **Inferred.** The routine copies the object-list pointer at +0x3e590 from the second context (a1) into the first (a0) with a `ld` at 0x5d099c and `sd` at 0x5d0998 and 0x5d09a0. It calls fglX11LockSurface at 0x5d08c8, releases the lock through __glNamesUnlockData at 0x5d0914, and, only when the word at +12 of that array header is zero, frees the name array with __glNamesFreeArray at 0x5d09d8. The count passed to the free is the array header at +12 minus one. I read the copy direction from the load and store pairs.

- `__glEarlyInitTextureState` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d09f0
  **Inferred.** It writes default values into the context at a0+0x10dc, +0x75f0, +0x762c, +0x7ec0, +0x7ec4 and +0x3e59c, and reads a0+0x7634. It calls __glATIInitTextureManager at 0x53ada0 from 0x5d0a28. When the pointer at a0+0x3e590 is null (beq at 0x5d0a64), the path reaches __glNamesNewArray at 0x5e6d40 through the call at 0x5d0b28. The loop branch at 0x5d0ae8 compares against the constant 0xa.

- `__glInitTextureState` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d0b40
  **Inferred.** It writes the initial texture state for each unit: about 50 integer and 21 float stores into the context, and it loads an 8-byte value from the absolute address 0xc00580. The loops count units at a0+30192 and a0+32552. The callee at 0x5d0ea0 gets constants a5 = 0x2100, a6 = 0x1702 and a7 = 0x78, and the callee at 0x5d0c24 gets only the context. A register jump at 0x5d1190 goes to 0x5d11b4 by a constant.

- `__glFreeTextureState` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5d12e0
  **Inferred.** It undoes the setup done by __glInitTextureState and __glEarlyInitTextureState. For each unit it calls __glBindTexture at 0x5e38a0 from 0x5d13a0 with a2 = 0, and it stores to a0+0x10dc and to the list pointer at a0+0x3e590. It releases the surface manager through fglX11ReleaseSurfaceManager at 0x5d1480. It frees the name array with __glNamesFreeArray at 0x5d14a0 only when the word at +12 of that array header is zero; otherwise it skips that call and goes on to the release.

- `__glIsTextureConsistent` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5da620
  **Inferred.** It checks whether a texture object's levels fit together. It walks levels from a1+168 up to a1+172 through the level array at a1+40, and it compares the level fields against level 0 and against the limit at a0+30260. It returns 0 or 1, and it sets flags at a1+0x38, a1+0x39 and a1+0x42 as it goes. The values 0x2600 and 0x2601 are compared with the field at a1+136; they are the GL nearest and linear enums.

- `__glIsCubeMapTextureConsistent` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dac60
  **Inferred.** It applies the same kind of check to a cube-map texture, walking the face array at a1+248 for each level indexed by a1+168. It calls __glIsTextureConsistent at 0x5da620 from 0x5dadac for each face, and it compares the face fields at +16 and +20 across faces. It returns 0 or 1.

- `CheckTexImageArgs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dae20
  **Inferred.** It validates the arguments of a texture-image upload. It calls __glLookUpTexture at 0x5d0540 from 0x5dae6c and compares a1 and other argument registers against a long chain of constants. Failures raise GL error codes through __glSetError at 0x7345d0, using 0x500 (invalid enum) at 0x5db14c, 0x501 (invalid value) at 0x5db2dc and 0x502 (invalid operation) at 0x5daf4c and 0x5dafcc. The routine returns 0 on success and the texture pointer on the lookup path at 0x5db258.

- `CheckCompressedTexImageArgs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dbb50
  **Inferred.** It validates a compressed texture upload. It looks up the texture with __glLookUpTexture at 0x5d0540 from 0x5dbb90, compares a2 with the value loaded from a0+30260, and reports 0x501 at 0x5dbbc4, 0x500 at 0x5dbbe0 and 0x5dbc1c, and 0x502 at 0x5dbc04 through __glSetError. The returns at 0x5dbbb0 give the looked-up texture or 0.

- `CheckCompressedTexImageS3TCArgs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dbc30
  **Inferred.** It validates the S3TC-compressed format arguments. It compares the format in a3 with constants 0x83f2 and 0x83f3 at 0x5dbc7c and 0x5dbc84, and it reports GL_INVALID_OPERATION (0x502) and GL_INVALID_VALUE (0x501) through __glSetError at 0x5dbc48 and 0x5dbcac. The always-taken bgezl at 0x5dbce4 then jumps to CheckCompressedTexImageArgs at 0x5dbb50.

- `__glInitTexImageStore` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dbcf0
  **Inferred.** It fills a texture image's store record at a1 from the level descriptor at a2+40, indexed by a3. It copies size and format fields into a1+0x54 to a1+0xa4 and a1+0x1d0, and it stores an 8-byte value at a1+0x60. The format and type enums it compares are 0x1906, 0x1907, 0x1908, 0x80e1, 0x1401 and 0x1403. It returns the value at a2+48 on every path.

- `__glInitTexImageGet` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dbe40
  **Inferred.** It fills the read-back (get) variant of the image record at a1 from the same level descriptor used by __glInitTexImageStore. It writes a smaller set of fields at a1+0x0 to a1+0x48 and a1+0x1d0, and it returns the value at a2+48.

- `__glInitTexSourceUnpack` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dbee0
  **Inferred.** It sets up the unpack (source-side) transfer state for a texture upload. It writes default fields at a1+0x0, +0x4, +0x8 and +0xb8 to +0xc0, and float defaults at +0xb0 and +0xcc. It then calls __glLoadUnpackModes at 0x584990 from 0x5dbf28 and returns that call's result.

- `__glInitTexDestPack` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dbf40
  **Inferred.** It is the pack-side counterpart of __glInitTexSourceUnpack. It writes default fields at a1+0x54 to +0xc0 and float defaults at +0xb0 and +0xcc, then calls __glLoadPackModes at 0x585e40 from 0x5dbf84 and returns its result.

- `IsLegalRange` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dbfa0
  **Inferred.** It checks a size or offset range. It returns 1 when a3 equals 0x84f5 or 0x84f7 (branches at 0x5dbfc0 and 0x5dbfc8), and when the masked test of a7 against t0 is zero (0x5dbfd8). A negative a7 (bltz at 0x5dbfb8) and the remaining cases report GL_INVALID_VALUE (0x501) through __glSetError at 0x5dbfe4 and 0x5dc00c, and return 0.

- `CheckTexImage1DArgs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dc030
  **Inferred.** It is the 1D form of the texture-image argument check. It calls CheckTexImageArgs at 0x5dae20 from 0x5dc074 with dimension 1 in a7, and it calls IsLegalRange at 0x5dbfa0 from 0x5dc09c for a size argument. On a failed check it reports GL_INVALID_VALUE (0x501) at 0x5dc204. It detaches the texture from the shared buffer with __glUberBufDetachTexture at 0x552d00 from 0x5dc1a0, and it updates a shared counter with ll and sc at 0x5dc0e0 and 0x5dc0f0.

- `CheckTexImage2DArgs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dc260
  **Inferred.** It is the 2D form of the texture-image argument check. It calls CheckTexImageArgs at 0x5dae20 from 0x5dc2dc with dimension 2 in a7, and it calls IsLegalRange at 0x5dbfa0 from 0x5dc308 and 0x5dc32c for two size arguments. It reports GL_INVALID_VALUE (0x501) and GL_INVALID_ENUM (0x500) through __glSetError at 0x5dc4a8 and 0x5dc554, and it detaches the texture with flag 0x40000 at 0x5dc440.

- `CheckCompressedTexImage2DArgs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5dc570
  **Inferred.** It is the 2D check for compressed uploads. For S3TC formats (constants 0x83f0 to 0x83f3, compared at 0x5dc644 to 0x5dc660) it calls CheckCompressedTexImageS3TCArgs at 0x5dbc30 from 0x5dc6a0. Other formats go through the target and format compares, and width and height are checked with IsLegalRange at 0x5dbfa0 from 0x5dc700 and 0x5dc724. Failures report GL_INVALID_ENUM (0x500) through __glSetError at 0x5dc5ec and 0x5dc668, and GL_INVALID_VALUE (0x501) at 0x5dc770.
