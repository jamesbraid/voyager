# X server helper modules: PCI tables, VESA BIOS calls and the int10 port hooks

Four small XFree86 modules sit beside the Onyx4 video driver. They are stock XFree86 4.x code built for IRIX as N32 shared objects with a dynamic symbol table. None of them programs the graphics chip. They matter here because the video driver runs the card's option ROM through the int10 module, and the VBE module is how the server asks that ROM for a mode.

The PCI name modules, `usr/X11R6/lib/modules/libpcidata.so` and `usr/X11R6/lib/modules/libscanpci.so`, hold the PCI vendor, device and card name tables. They differ in size: the first has 115 vendor names, 42 vendors with 334 device entries and 14 vendors with 122 card entries; the second has 115 vendor names, 97 vendors with 539 device entries and 25 vendors with 143 card entries (counted from each table's zero terminators). The VBE module, `usr/X11R6/lib/modules/libvbe.so`, wraps the VESA BIOS Extension calls (function numbers 0x4f00 to 0x4f0a and 0x4f15 in register ax) around `xf86ExecX86int10`. The int10 module, `usr/X11R6/lib/modules/libint10.so`, holds the x86 emulator hooks for port and memory access and the PCI configuration latch the option ROM sees.

Addresses are virtual addresses in the named object. Callee names come from the global offset table and the lazy-binding stubs. A field written as `+N` of the VBE record or the int10 record is a byte offset into a record the code reaches through a pointer. The int10 record's fields look like an x86 register image: +24 the interrupt number, +28 ax, +32 bx, +36 cx, +40 dx, +48 di and +52 es. Those names and the VBE record's layout are **inferred** from how the code uses the fields, since the entries read the shipped code and not its debug information.

## libpcidata.so

- `xf86SetupPciData` (`libpcidata.so`, 48 bytes at address 0x401a00): **Established.**
  Takes three pointers in a0, a1 and a2 and returns nothing. It stores three constant addresses and touches no other memory.
  The doubleword stores go to `*a0` (the address 0x405b78, the vendor name table), `*a1` (0x405f18, the device list) and `*a2` (0x410108, the card list).
  The addresses are formed from the local global-offset-table pages 0x400000 and 0x410000 (the words at gp-32700 and gp-32696) plus the constants 23416, 928 and 264.
  The vendor table is 115 records of eight bytes (a vendor ID word, then a pointer to the vendor name, such as 0x3d "Real 3D" and 0x1002 "ATI"), ended by a zero ID at 0x405f10.
  The device list is 42 vendor records of 964 bytes ended by a zero record; the card list is 14 vendor records of 1028 bytes ended by a zero record.

## libscanpci.so

- `_stub` (`libscanpci.so`, 44 bytes at address 0x4022c0): **Established.**
  This is the `.MIPS.stubs` section: a four-byte header word (`break 6`) and two 20-byte lazy-binding stubs.
  Each stub loads the dynamic linker entry from gp-32752 into t9, moves ra to t3, calls it with the dynamic symbol number in t8 (0x20 for `xf86EnableIO` at stub address 0x4022c4, 0x21 for `xf86scanpci` at 0x4022d8).
  Those are the only two symbols the module imports.
- `xf86SetupScanPci` (`libscanpci.so`, 48 bytes at address 0x402300): **Established.**
  The twin of `xf86SetupPciData`: it stores three table addresses through its pointer arguments and nothing else.
  The word stores go to `*a0` (0x4068d0, the vendor name table), `*a1` (0x406c70, the device list, which is the vendor table plus 928 bytes) and `*a2` (0x41dd78, the card list).
  The vendor table is 115 eight-byte records ended by a zero ID at 0x406c68; the device list holds 97 vendor records of 964 bytes; the card list holds 25 vendor records of 1028 bytes.
  The extra vendors and entries against `libpcidata.so` are the whole difference between the two modules' tables.
- `xf86FindPCIClassInCardList` (`libscanpci.so`, 112 bytes at address 0x402880): **Established.**
  Takes a vendor ID (a0) and a card ID (a1) and returns a halfword class value, or 0 when nothing matches.
  It walks the card list at 0x41dd78 one 1028-byte vendor record at a time until the vendor halfword equals a0 or is zero (zero ends the walk and returns 0).
  In the matching record it walks 16-byte entries that start at record +4, comparing each entry's ID halfword with a1 and stopping at an entry whose ID is zero, which returns 0.
  A match returns the halfword at entry +8; in this module's card list that halfword is zero for every one of the 143 entries, so the routine can only return 0 for a card it finds.
- `xf86FindPCIClassInDeviceList` (`libscanpci.so`, 112 bytes at address 0x402900): **Established.**
  The same search over the device list at 0x406c70, with 964-byte vendor records and 12-byte entries at record +4.
  It takes a vendor ID (a0) and a device ID (a1) and returns the halfword at entry +8 of the matching entry, or 0 when the vendor, the device or an entry's ID is missing or zero.
  In this module's device list 538 entries hold zero there and one holds 0x601, so only that single device yields a nonzero value.
- `xf86DisplayPCICardInfo` (`libscanpci.so`, 1284 bytes at address 0x402340): **Inferred.**
  Takes one argument, a0, and reports every PCI device the server found. Its frame is 96 bytes.
  It calls `xf86EnableIO` (0x40237c), then `xf86scanpci` with argument 0 (0x402388).
  A zero result prints "No PCI info available" through `xf86MsgVerb` (type 8, verbosity 0, at 0x4027a8) and returns.
  Otherwise it prints "Probing for PCI devices (Bus:Device:Function)" and walks the zero-terminated array of record pointers the scan returned, advancing four bytes a record.
  For each record it prints "(%d:%d:%d) " from the words at record +4, +8 and +12 (bus, device and function), then looks up the halfwords at record +18 (vendor) and +16 (device) in the device list, and the halfwords at +62 and +60 (subsystem vendor and card) in the card list, with the vendor name table giving the names; it prints "using a %s %s" or one of the "unknown chip", "unknown chipset(0x%04x/0x%04x)", "unknown card" messages (each a distinct string in `.rodata`) and ends the line with a newline.
  The verbosity argument (a1) of each per-record message is the negation of a0, kept in s3.
  **Inferred:** the field meanings come from which table each halfword is compared against.

## libvbe.so

- `_stub` (`libvbe.so`, 264 bytes at address 0x4010b0): **Established.**
  The `.MIPS.stubs` section: one four-byte header word and thirteen 20-byte lazy-binding stubs, each calling the dynamic linker entry at gp-32752 with its symbol number in t8.
  The stubs, in order from dynamic symbol 57, are `xf86FindScreenForEntity`, `xf86Int10AllocPages`, `xf86Int10FreePages`, `xf86FreeInt10`, `xf86LoadSubModule`, `xf86InitInt10`, `xf86ProcessOptions`, `xf86LoaderReqSymLists`, `xf86InterpretEDID`, `xf86UnloadSubModule`, `xf86bzero`, `Xcalloc` and `Xalloc`.
  The other imports the module calls (`xf86ExecX86int10`, `xf86memcpy`, `xf86DrvMsg`, `xf86DrvMsgVerb`, `XNFalloc`, `Xfree`, `xf86int10Addr`, `xf86GetOptValBool`, `xf86strdup`) have global-offset-table slots and are called without a stub.
- `vbeSetup` (`libvbe.so`, 40 bytes at address 0x4031c0): **Established.**
  The module's set-up hook, run when the loader brings the module in. It tests the word at 0x404510 (in `.sbss`) and, when it is zero, stores 1 there; either way it returns 1.
  So the first call marks the module as set up and every later call is a no-op that also returns 1.
- `vbeFree` (`libvbe.so`, 112 bytes at address 0x401780): **Established.**
  Releases a VBE record given in a0 and returns nothing. A null argument returns at once.
  Otherwise it calls `xf86Int10FreePages` with the int10 record (the word at +0 of the VBE record), the buffer (the word at +8) and the page count (the word at +16).
  When the word at +20 is nonzero it calls `xf86FreeInt10` on the int10 record; that flag is the one `VBEInit` sets when it created the int10 instance itself.
  It last calls `Xfree` on the VBE record.
- `VBEFreeVBEInfo` (`libvbe.so`, 160 bytes at address 0x4021c0): **Established.**
  Frees an info block (a0) returned by `VBEGetVBEInfo`. It calls `Xfree` on the word at +8 (the OEM string copy) and on the word at +16 (the mode list copy).
  It then reads the halfword at +4 and shifts it right by 8; below 2 (a VBE version under 2.0) it frees the block itself and returns.
  From version 2 on it first calls `Xfree` on the words at +24, +28 and +32 (the vendor, product and product revision strings), then frees the block.
  The routine returns nothing on either path.
- `VBEFreeModeInfo` (`libvbe.so`, 52 bytes at address 0x4027c0): **Established.**
  Takes a mode-info block in a0 and calls `Xfree` on it. The call's delay slot is a no-op, so a0 reaches `Xfree` unchanged, and the routine sets no return value.
- `VBEInit` (`libvbe.so`, 1432 bytes at address 0x4011c0): **Inferred.**
  Takes an int10 record (a0, may be null) and a screen or entity index (a1); returns a new 32-byte VBE record or 0.
  It saves a1 at sp+16, calls `xf86FindScreenForEntity` with a1 and keeps the word at +12 of the screen record (the screen index used by every message) at sp+40.
  It writes the four bytes "VBE2" (the word at 0x4044c8) to sp+0.
  A null a0 sends it through `xf86LoadSubModule` with the name "int10" (0x4044d0) and `xf86InitInt10` on a1 (stopping with 0 when either fails, after the message "initializing int10").
  It then calls `xf86Int10AllocPages` for one page, copies the four signature bytes into it with `xf86memcpy`, and fills the int10 record: the word at +24 gets 0x10 (the interrupt number), +28 gets 0x4f00 (the VBE controller-information function), +52 gets bits 12 to 15 of the page address (`(addr >> 4) & 0xf000`) and +48 gets the low 16 bits of it.
  `xf86ExecX86int10` runs the call. A low byte of the returned word at +28 other than 0x4f prints "VESA BIOS not detected" (`xf86DrvMsgVerb`, type 7, verbosity 3), frees the page, frees the int10 instance when this call made it, and returns 0.
  Otherwise the high byte of that word picks a message: 0 is success, 1 prints "VESA BIOS function failed", 2 prints "VESA BIOS not supported", 3 prints "VESA BIOS not supported in current mode", and any other value prints "Invalid"; every failure takes the same cleanup and returns 0.
  On success it prints "VESA BIOS detected", then the version (both numbers printed are the byte at buffer +5), the total memory (the two bytes at +18 and +19 joined as byte 18 high, shifted left by 6 for kilobytes), and the OEM string through a far pointer at buffer +6 turned into a host address with `xf86int10Addr`. When the version byte at +5 is 2 or more it also prints the OEM software revision (the byte at +21 twice) and the vendor, product and product revision strings, taken the same way from the far pointers at +22, +26 and +30.
  It finally allocates the record with `XNFalloc(32)` and stores the int10 record at +0, the version word at +4 (the byte at buffer +5 shifted left by 8), the buffer pointer at +8, the buffer's real-mode address at +12, 1 at +16 (pages), the "created int10 here" flag at +20 and 0 at +24.
  **Inferred:** the record layout comes from the stores, and which messages come from which version are read from the branch structure, not traced instruction by instruction.
- `vbeProbeDDC` (`libvbe.so`, 572 bytes at address 0x401800): **Established.**
  Takes a VBE record (a0) and returns 1 when the BIOS reports display data channel support and 0 otherwise.
  A null record returns 0. The word at +24 of the record is a state: 1 returns 0 at once (already probed, no support), any other nonzero value returns 1 (already probed, supported), and 0 runs the probe.
  The probe writes the int10 record: +28 = 0x4f15, +32, +36, +52 and +48 = 0 (subfunction 0, no buffer), +24 = 0x10, and calls `xf86ExecX86int10`.
  A low byte of +28 other than 0x4f prints "VESA VBE DDC not supported", stores 1 in the state word and returns 0. A nonzero high byte returns 1 without printing or storing.
  A zero high byte prints "VESA VBE DDC supported". The low two bits of the word at +32 choose the level text and the state: 0 gives " none" and 1, 1 gives " 1" and 2, 2 gives " 2" and 3, 3 gives " 1 + 2" and 4. It prints "VESA VBE DDC Level%s" with that text.
  Bit 2 of the same word stores 1 in the word at +28 of the VBE record and prints "VESA VBE DDC Screen blanked for data transfer"; a clear bit stores 0 there.
  It prints "VESA VBE DDC transfer in appr. %x sec." with bits 8 to 15 of that word and returns 1.
- `vbeReadEDID` (`libvbe.so`, 596 bytes at address 0x401a40): **Inferred.**
  Takes a VBE record (a0) and returns a new copy of the display's 128-byte EDID block, or 0. Its frame is 64 bytes.
  A null buffer pointer (the word at +8 of the record) returns 0.
  It copies the 120-byte option table at 0x404338 into a block from `XNFalloc(120)`, runs `xf86ProcessOptions` on the screen's option list (the word at +836 of the screen record) and reads two boolean options with `xf86GetOptValBool` (option numbers 0 and 1) into sp+0 and sp+4, then frees the copy with `Xfree`. Either option set returns 0.
  Otherwise it calls `vbeProbeDDC`; a zero result returns 0.
  The read sets the int10 record: +28 = 0x4f15, +32 = 1 (read EDID), +36 = 0, +52 and +48 from the buffer's real-mode address (the word at +12 of the VBE record), +24 = 0x10, and runs `xf86ExecX86int10`.
  A low byte other than 0x4f prints "VESA VBE DDC invalid" and returns 0. A high byte of 1 prints "VESA VBE DDC read failed" and returns 0; any other nonzero high byte prints "VESA VBE DDC unkown failure %i" (the spelling in the binary) and returns 0.
  A zero high byte prints "VESA VBE DDC read successfully", allocates 128 bytes with `XNFalloc`, copies 128 bytes from the buffer with `xf86memcpy` and returns the copy.
- `vbeDoEDID` (`libvbe.so`, 300 bytes at address 0x401cc0): **Inferred.**
  Takes a VBE record (a0) and an optional loaded "ddc" module (a1) and returns the interpreted monitor record, or 0.
  A null record, or a version word at +4 below 512, returns 0.
  With a1 null it loads the module with `xf86LoadSubModule` on the screen record and the name "ddc" (0x404508) and registers its symbols with `xf86LoaderReqSymLists`; a failed load returns 0.
  It then calls `vbeReadEDID`; a zero result returns 0 without unloading.
  A block is passed with the screen index (the word at +4 of the int10 record) to `xf86InterpretEDID`; when this call loaded the module it then calls `xf86UnloadSubModule`, and it returns the monitor record.
- `VBEGetVBEInfo` (`libvbe.so`, 920 bytes at address 0x401e00): **Inferred.**
  Takes a VBE record (a0) and returns a new 516-byte info block, or 0.
  It zeroes the 516-byte buffer (`xf86bzero` on the word at +8), writes the signature bytes 0x56, 0x42, 0x45, 0x32 ("VBE2") at its start, sets the int10 record to +24 = 0x10, +28 = 0x4f00, +52 and +48 from the buffer's real-mode address, and runs `xf86ExecX86int10`.
  A returned word at +28 that is not exactly 0x4f returns 0.
  Otherwise it allocates the block with `Xcalloc(516)` and copies the signature bytes and the halfword at +4. It turns the far pointers at buffer +6 (OEM string), +14 (mode list) and, from the halfword at +4 shifted right by 8 being 2 or more, +22, +26 and +30 into host addresses with `xf86int10Addr`.
  The OEM string and the three later strings are duplicated with `xf86strdup` into the block's words at +8, +24, +28 and +32; the mode list is copied with `Xalloc` and `xf86memcpy`, scanning halfwords in the buffer until 0xffff, and ends with 0xffff in the copy.
  It copies the halfword at +18 to the block's +20 and the following fixed-size areas with `xf86memcpy` (236 bytes from buffer +20 to block +22 for a version below 2; 222 bytes from buffer +34 to block +36 and 256 bytes from buffer +256 to block +258 otherwise).
  The mode-list copy is stored at block +16. It is allocated with `Xalloc` of the byte count plus one but the 0xffff terminator is a halfword written at the byte count, so the terminator's second byte lies one byte past the allocation (0x402010 to 0x40204c).
  For a version of 2 or more the halfword at buffer +20 also goes to block +22 before the three strings are converted.
  **Inferred:** the version tests read the halfword unswapped, so which byte of the version they test is taken from the instructions, not from the VESA layout.
- `VBESetVBEMode` (`libvbe.so`, 204 bytes at address 0x402280): **Established.**
  Takes a VBE record (a0), a mode number (a1) and an optional 64-byte block (a2) and returns 1 when the BIOS reports success.
  It sets the int10 record to +24 = 0x10, +28 = 0x4f02 and +32 = a1.
  A nonzero a2 also sets bit 0x800 of the word at +32, copies 64 bytes from a2 into the VBE buffer (the word at +8) with `xf86memcpy`, and sets +52 and +48 from the buffer's real-mode address (the word at +12).
  It calls `xf86ExecX86int10` and returns 1 only when the whole word at +28 equals 0x4f (the test is `xori 0x4f` then `sltiu 1`), otherwise 0.
- `VBEGetVBEMode` (`libvbe.so`, 148 bytes at address 0x402380): **Established.**
  Takes a VBE record (a0) and a pointer (a1) and returns 1 on success. It sets the int10 record to +24 = 0x10 and +28 = 0x4f03 and runs `xf86ExecX86int10`.
  A word at +28 other than exactly 0x4f returns 0 and leaves the pointer alone; otherwise it stores the word at +32 (the current mode) through a1 and returns 1.
  The full word is stored, with no mask.
- `VBEGetModeInfo` (`libvbe.so`, 860 bytes at address 0x402440): **Inferred.**
  Takes a VBE record (a0) and a mode number (a1) and returns a new 260-byte mode-info block, or 0.
  It zeroes the 260-byte VBE buffer, sets the int10 record to +24 = 0x10, +28 = 0x4f01, +36 = a1, +52 and +48 from the buffer's real-mode address, and runs `xf86ExecX86int10`. A returned word at +28 other than 0x4f returns 0.
  It allocates the block with `Xcalloc(260)` and copies the first 40 bytes field by field (halfwords at +0, +4, +6, +8, +10, +16, +18 and +20; the word at +12; bytes +2, +3 and +22 to +39).
  The version word at +4 of the VBE record decides the rest: below 512 it copies 216 bytes from buffer +40 to block +40 with `xf86memcpy`; from 512 up it copies the word at +40, the word at +44 and the halfword at +48, and below 768 then copies 206 bytes from buffer +50.
  From 768 it also copies the halfword at +50, bytes +52 to +61, an unaligned word at +62 to block +64, and 188 bytes from buffer +66 to block +68.
- `VBESaveRestore` (`libvbe.so`, 564 bytes at address 0x402800): **Established.**
  Takes a VBE record (a0), a function code (a1: 0 size, 1 save, 2 restore), a pointer to a saved-state pointer (a2), a pointer to a size word (a3) and a pointer to the buffer's real-mode address (a4); returns 1 on success and 0 on failure.
  A version word at +4 whose bits 8 to 15 are below 257 (a high byte of 0 or 1) returns 1 at once with no call.
  Every call writes the int10 record's +24 = 0x10 and +28 = 0x4f04, runs `xf86ExecX86int10`, and counts as a success only when the word at +28 then equals 0x4f exactly.
  The size call (a1 = 0) sets +40 = 0 and +36 = 15, then stores the word at +32 shifted left by 6 through a3 and returns 1.
  A save with a null saved-state pointer (the word a2 points to) first runs that size call and stores the size through a3, then calls `xf86Int10AllocPages` with a page count of the size divided by 4096 (signed) plus 1 and a4 as the address output, and stores the result through a2. A null result prints "Cannot allocate memory to save SVGA state." (`xf86DrvMsg`, type 5) and returns 0.
  The save and restore calls return 0 without a call when the saved-state pointer is still null. Otherwise they set +36 = 15, +52 to bits 12 to 15 of the address word a4 points to (`(addr >> 4) & 0xf000`) and +32 to its low 16 bits; +40 becomes 1 for a1 = 1 and 2 for a1 = 2, and any other a1 leaves +40 as it was.
- `VBEBankSwitch` (`libvbe.so`, 148 bytes at address 0x402a40): **Established.**
  Takes a VBE record (a0), a window position (a1) and a window selector (a2) and returns 1 on success.
  It sets the int10 record to +24 = 0x10, +28 = 0x4f05, +32 = a2 and +40 = a1, calls `xf86ExecX86int10` and returns 1 when the word at +28 equals 0x4f exactly, otherwise 0.
- `VBESetGetLogicalScanlineLength` (`libvbe.so`, 320 bytes at address 0x402b00): **Inferred.**
  Takes a VBE record (a0), a function code (a1, 0 to 3), a requested length (a2) and three result pointers (a3, a4 and a5); returns 1 on success.
  A function code below 0 or above 3 returns 0.
  It sets +24 = 0x10, +28 = 0x4f06 and +32 = the function code; codes 0 and 2 (set and set in bytes) also store a2 at +36. It runs `xf86ExecX86int10` and, when the word at +28 equals 0x4f exactly, returns 1 after storing the word at +36 through a3, the word at +32 through a4 and the word at +40 through a5 when each pointer is nonzero (only for codes 1 and 3).
  Any other result returns 0.
- `VBESetDisplayStart` (`libvbe.so`, 176 bytes at address 0x402c40): **Established.**
  Takes a VBE record (a0), an x position (a1), a y position (a2) and a wait flag (a3); returns 1 on success.
  It sets +24 = 0x10, +28 = 0x4f07, +32 to 128 for a nonzero a3 and 0 otherwise, +36 = a1 and +40 = a2, calls `xf86ExecX86int10` and returns 1 when the word at +28 equals 0x4f exactly, otherwise 0.
- `VBEGetDisplayStart` (`libvbe.so`, 180 bytes at address 0x402d00): **Established.**
  Takes a VBE record (a0) and two result pointers (a1, a2). It sets +24 = 0x10, +28 = 0x4f07 and +32 = 1, calls `xf86ExecX86int10`, and when the word at +28 equals 0x4f exactly stores the word at +36 through a1 and the word at +40 through a2 and returns 1; otherwise it returns 0 and stores nothing.
- `VBESetGetDACPaletteFormat` (`libvbe.so`, 196 bytes at address 0x402dc0): **Established.**
  Takes a VBE record (a0) and a bit width (a1); returns the width the BIOS reports, or 0 on failure.
  It sets +24 = 0x10 and +28 = 0x4f08. A nonzero a1 sets +32 to a1 shifted into bits 8 to 15; zero sets +32 to 1 (get).
  After `xf86ExecX86int10` a word at +28 other than exactly 0x4f returns 0. A nonzero a1 returns a1; zero returns bits 8 to 15 of the word at +32.
- `VBESetGetPaletteData` (`libvbe.so`, 460 bytes at address 0x402ec0): **Established.**
  Takes a VBE record (a0), a set flag (a1, nonzero sets), a first colour index (a2), a count (a3), a data pointer (a4), a secondary-palette flag (a5) and a wait flag (a6); returns the data pointer, a new copy of the palette, or 0 on failure.
  It sets +24 = 0x10 and +28 = 0x4f09, +36 = the count, +40 = the first index, and +52 and +48 from the buffer's real-mode address (the word at +12).
  The word at +32 picks the operation. With a5 nonzero it is 2 for a set and 3 for a get. With a5 zero it is 1 for a get, 0 for a set, or 128 for a set with a nonzero wait flag; a6 is not looked at when a5 is nonzero.
  A set first copies count times four bytes from a4 into the buffer (the word at +8) with `xf86memcpy`.
  After `xf86ExecX86int10` a word at +28 other than exactly 0x4f returns 0. A set then returns a4. A get allocates `Xalloc(count * 4)`, copies that many bytes from the buffer into it and returns the new block.
- `VBEGetVBEpmi` (`libvbe.so`, 196 bytes at address 0x4030c0): **Established.**
  Takes a VBE record (a0) and returns a new 12-byte block, or 0. It sets +24 = 0x10, +28 = 0x4f0a, +32 = 0 and +48 = 0, and runs `xf86ExecX86int10`.
  A word at +28 other than exactly 0x4f returns 0. Otherwise it allocates 12 bytes with `Xalloc` and stores the words at +52, +48 and +36 of the int10 record there at offsets 0, 4 and 8 (the protected-mode interface table's segment, offset and length).
  **Inferred:** the three results are the ones the VESA protected-mode call returns in es, di and cx.

## libint10.so

The int10 module gives the x86 emulator its view of a PC. Its port and memory hooks reach the emulated BIOS through `Int10Current`, a global pointer in the X server to the active int10 record. The record's word at +20 points to a table of six memory-access functions, which `Mem_rb` to `Mem_wl` below call by slot. The word at +14 is a halfword the port hooks use as a fake timer.

- `x_inb` (`libint10.so`, 120 bytes at address 0x40a480): **Established.**
  Takes a port number (a0) and returns a byte. Port 64 (0x40) is answered from a counter instead of hardware: it loads `Int10Current`, adds 1 to the halfword at +14 of the record, and returns the low byte of the new value when bit 0 is clear and the high byte when bit 0 is set, so successive reads alternate low and high byte.
  **Inferred:** this imitates the timer channel 0 counter that BIOS delay loops read.
  Any other port calls `inb` with the same argument (GOT slot at gp-32608) and returns its result masked to 0xff.
- `x_inw` (`libint10.so`, 160 bytes at address 0x40a500): **Established.**
  Takes a port number (a0) and returns a halfword. Port 92 (0x5c) calls `xf86getsecs` with two stack slots and returns the second (the microseconds) divided by 3, as a signed division through the reciprocal 0xaaaaaaab, masked to 16 bits.
  Any other port calls `inw` and returns the result masked to 0xffff.
- `x_outb` (`libint10.so`, 116 bytes at address 0x40a5c0): **Established.**
  Takes a port (a0) and a value (a1) and returns nothing. A write of 0 to port 67 (0x43) calls `xf86getsecs` and stores the microseconds value ORed with 1 in the halfword at +14 of the `Int10Current` record, which makes the next read of port 64 return the low byte.
  Every other port and value is passed to `outb` unchanged.
  **Inferred:** port 67 with a zero value is the timer's counter-latch command.
- `x_outw` (`libint10.so`, 164 bytes at address 0x40a640): **Established.**
  Takes a port (a0) and a value (a1) and returns nothing. Writes to port 57 (0x39) are a delay request: a value below 20 returns with no effect, and a larger value calls `xf86usleep` with the value times 8 divided by 20 (signed, through the reciprocal 0xcccccccd).
  Every other port is passed to `outw` with the same value.
- `x_inl` (`libint10.so`, 96 bytes at address 0x40a700): **Established.**
  Takes a port (a0) and returns a word. It first calls `pciCfg1in` (0x40ab00) with the port and a stack slot. When that returns nonzero the port was one of the PCI configuration ports and the routine returns the word `pciCfg1in` left in the slot.
  Otherwise it calls `inl` on the port and returns its result.
- `x_outl` (`libint10.so`, 88 bytes at address 0x40a780): **Established.**
  Takes a port (a0) and a value (a1) and returns nothing. It first calls `pciCfg1out` (0x40ab80) with the port and the value; a nonzero result means the write went to a PCI configuration port and the routine returns.
  Otherwise it calls `outl` with the port and the value.
- `Mem_rb` (`libint10.so`, 68 bytes at address 0x40a800): **Established.**
  Takes an emulated address (a0) and returns a byte. It loads the record `Int10Current` points to, takes the function table at record +20 and calls the entry at table +0 with the record as the first argument and the address as the second; the callee's result is returned unchanged.
  The callee is reached through a pointer, so it has no name here.
- `Mem_rw` (`libint10.so`, 68 bytes at address 0x40a880): **Established.**
  The halfword read: it loads the record `Int10Current` points to and calls the function at table +4 of the table at record +20 with the record and the address (a0), returning the result unchanged.
- `Mem_rl` (`libint10.so`, 68 bytes at address 0x40a900): **Established.**
  The word read: the same dispatch through the entry at table +8, with the record and the address (a0) as arguments, and the result returned unchanged.
- `Mem_wb` (`libint10.so`, 72 bytes at address 0x40a980): **Established.**
  Takes an address (a0) and a value (a1) and returns nothing. It calls the entry at table +12 of the table at record +20 of the `Int10Current` record, passing the record, the address and the value in that order.
- `Mem_ww` (`libint10.so`, 72 bytes at address 0x40aa00): **Established.**
  The halfword write: the same call through the entry at table +16 with the record, the address (a0) and the value (a1).
- `Mem_wl` (`libint10.so`, 72 bytes at address 0x40aa80): **Established.**
  The word write: the same call through the entry at table +20 with the record, the address (a0) and the value (a1).
- `pciCfg1in` (`libint10.so`, 120 bytes at address 0x40ab00): **Established.**
  Takes a port (a0) and a pointer (a1) and returns 1 when it handled the port and 0 otherwise. Port 3320 (0xcf8) stores the static word at 0x4360a8 (the address latch the matching write routine fills) through a1 and returns 1.
  Port 3324 (0xcfc) loads that latch and calls `pciReadLong` with the latch ANDed with 0x00ffff00 as the first argument and the latch ANDed with 0xff as the second, stores the result through a1 and returns 1.
  Every other port returns 0 without touching memory.
  **Inferred:** the latch holds a type-1 configuration address; `pciReadLong` takes the bus, device and function in its first argument and the register offset in its second.
