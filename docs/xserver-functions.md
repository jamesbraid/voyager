# The XFree86 server: one entry per routine

The Onyx4 installs a stock XFree86 4.x server, `usr/X11R6/bin/XFree86` (an N32 executable with a dynamic symbol table, no section headers for its text and no debug information). Only the parts of it that touch the graphics boards are in scope: driver registration and selection, PCI and ISA bus probing and resource handling, mode validation hooks and frame-buffer access control. This chapter gives each such routine its own entry. Addresses are virtual addresses in the executable. Callee names and string literals come from the global offset table (gp is 0x10245c74); a name the table gives for a local slot is read from `.rodata` and `.sdata`. Names of the server's own records (the screen layout, device and driver records) are **inferred** from field offsets and counts, since the executable has no type information.

## Driver lists

- `xf86DriverlistFromConfig` (`XFree86`, 624 bytes at address 0x10032540): **Established.**
  Builds a null-terminated array of driver-name strings from the parsed configuration.
  It reads the pointer `xf86configptr`; if that pointer is null it calls `xf86Msg` with type 5 and the message "Cannot access global config data structure" and returns 0.
  Otherwise it walks two arrays reached from `xf86ConfigLayout`: the array at layout +4 (records 56 bytes apart, ending at a record whose first word is zero) and the array at layout +8 (records 620 bytes apart, same ending).
  For each 56-byte record it takes the word at +24, follows it and stores that record's word at +20; for each 620-byte record it stores the word at +20.
  If both arrays are empty it returns 0.
  It then drops repeats: each name is compared with all earlier ones by `xf86NameCmp` and a repeat is replaced in the array by the address of an empty string (0x10240d78).
  The array comes from `XNFalloc` of four bytes per name plus one, and is returned. **Inferred:** the first array is the layout's screens (each pointing at its device section) and the second its inactive device sections, so the result is the set of video driver names the configuration asks for.
- `xf86BuiltinInputDriver` (`XFree86`, 84 bytes at address 0x100327c0): **Established.**
  Calls `xf86NameCmp` on its argument and the string "keyboard" (address 0x101f5a88) and returns 1 when they compare equal, otherwise 0.
  So the only input driver the server treats as built in is the keyboard driver.
- `xf86InputDriverlistFromConfig` (`XFree86`, 476 bytes at address 0x10032840): **Established.**
  The input-device counterpart of the video list.
  A null `xf86configptr` gives the same "Cannot access global config data structure" message from `xf86Msg` and a return of 0.
  Otherwise it walks the array at `xf86ConfigLayout` +12, records 16 bytes apart ending at a record whose first word is zero, and counts the records whose driver name (word at +4) `xf86BuiltinInputDriver` rejects.
  With a count of zero it returns 0.
  With a nonzero count it allocates with `XNFalloc`, stores the word at +4 of every such record in order, terminates the array and removes repeats exactly as the video routine does, using `xf86NameCmp` and the same empty-string address.
  It returns the array.
  The keyboard driver therefore never appears in the list of modules to load.
- `xf86DriverlistFromCompile` (`XFree86`, 96 bytes at address 0x10032f00): **Established.**
  Returns a cached list of video driver module names, computed once.
  A static flag word (0x10240664) and result word (0x10240660) hold the cache.
  On the first call it sets the flag and calls the static routine at 0x10032a40 with the subdirectory name "drivers" (0x10240d80) and the string "nv" (0x102404ec), the server's built-in preferred list, and a third argument of 1, and stores the result.
  Later calls return the stored array.
- `xf86InputDriverlistFromCompile` (`XFree86`, 96 bytes at address 0x10032f80): **Established.**
  The same cached lookup for input drivers, with its own flag (0x1024066c) and result (0x10240668), the subdirectory name "input" (0x10240d88) and the built-in preferred list "mouse" (0x102404ef).
  It calls the same static routine at 0x10032a40 once and returns the cached array afterwards.
- The static routine at 0x10032a40 (`XFree86`, ends at 0x10032ed8, in the symbol table as part of `xf86InputDriverlistFromConfig`): **Established.**
  Takes a subdirectory name in a0 and a string of module names in a1.
  It scans the string a character at a time, testing each character with the word at four times its code plus 4 in the C library's character table (`__libc_attr`) masked with 0x80000008, and counts the runs the test separates. **Inferred:** the mask picks the table's name-character class, so a token is a module name and anything else separates names.
  A second scan stores each token's start in an array from `XNFalloc` and writes a zero byte over the character that ended it, so the caller's string is modified in place.
  It then lists the subdirectory with `LoaderListDirs`, passing the pattern strings at 0x1020f1c0 ("(.*)_drv\.so" and "(.*)_drv\.o"), and builds the result with `XNFalloc` and `XNFrealloc`.
  The result holds first every module the loader listed that is not among the named tokens, then every named token the loader did list, in the named order; both comparisons use `strcmp`.
  It frees the token array and the loader's list with `Xfree` and returns the result.
  It returns 0 for an empty string, with no tokens, or when `LoaderListDirs` returns 0.
- `xf86AddDriver` (`XFree86`, 312 bytes at address 0x1003cbc0): **Established.**
  Takes a driver description (a0) and a module handle (a1).
  A null description returns at once.
  When `xf86DriverList` is null it first sets `xf86NumDrivers` to 0.
  It adds one to the count, grows the list with `XNFrealloc` (four bytes per slot), allocates a 28-byte record with `XNFalloc`, stores it in the last slot, copies the seven words of the caller's description into it, then overwrites the word at +20 with the module handle and clears the word at +24. **Inferred:** the word at +20 is the loaded module and the word at +24 a reference count, since `xf86DeleteDriver` unloads through the word at +20.
- `xf86DeleteDriver` (`XFree86`, 196 bytes at address 0x1003cd00): **Established.**
  Takes an index into `xf86DriverList`.
  A null entry returns.
  A nonzero result from `xf86DriverHasEntities` for the entry also returns, leaving the driver in place.
  Otherwise, if the entry's word at +20 is nonzero it calls `UnloadModule` on it, then frees the record with `Xfree` and clears the list slot.
  The count `xf86NumDrivers` is not changed, so deleted slots stay as null entries.
- `xf86AddInputDriver` (`XFree86`, 312 bytes at address 0x1003ce00): **Established.**
  The input-driver twin of `xf86AddDriver`, working on `xf86InputDriverList` and `xf86NumInputDrivers`.
  It grows the list by one slot, allocates a 28-byte record, copies seven words from the caller's description, sets the word at +20 to the module handle argument and clears the word at +24.
  Like the video routine it ignores a null description.
- `xf86DeleteInputDriver` (`XFree86`, 136 bytes at address 0x1003cf40): **Established.**
  Takes an index into `xf86InputDriverList`.
  A null entry skips the unload.
  For a nonzero entry whose word at +20 is nonzero it calls `UnloadModule`; it then frees the record with `Xfree` and clears the slot.
  Unlike `xf86DeleteDriver` it makes no check for entities bound to the driver and does not change the count.
- `xf86EnableDisableFBAccess` (`XFree86`, 220 bytes at address 0x1003f0c0): **Established.**
  Takes a screen index and an enable flag.
  It looks up the screen in `xf86Screens`, follows the word at +8 of that record to the screen structure and calls the function pointer at +380 of it (**inferred:** the screen-pixmap getter) to obtain the root pixmap.
  With enable set it stores the saved pointer from the screen record's word at +876 into the pixmap's word at +32 and, when `xf86Resetting` is zero, calls the static routine at 0x1003ec80 with the screen and 1.
  With enable clear it calls that routine with 0 first, saves the pixmap's word at +32 in the screen record's +876 and zeroes the pixmap's +32. **Inferred:** the static routine sets or clears the root window's clip region and the word at +32 is the pixmap's data pointer, so disabling access hides the frame buffer from the server's drawing code until it is restored.

## PCI records, lookups and bus-access hooks

- `xf86GetPciVideoInfo` (`XFree86`, 24 bytes at address 0x100514c0): **Established.**
  Loads the global offset table slot for the data symbol `xf86PciVideoInfo` (slot 2308) and returns the word stored there, a null-terminated array pointer filled in by the bus scan (**inferred** from the other PCI routines walking the same kind of array).
  It reads nothing else and has no other exit.
- `xf86GetPciConfigInfo` (`XFree86`, 24 bytes at address 0x10051500): **Established.**
  The same shape as `xf86GetPciVideoInfo`, for the data symbol `xf86PciInfo` (slot 2307): returns the word stored there.
  `xf86IsPciDevPresent` walks the array this pointer names, so it is the table of every PCI function the scan found, not only the video ones (**inferred**).
- `xf86CheckPciMemBase` (`XFree86`, 48 bytes at address 0x10051dc0): **Established.**
  Takes a record pointer in a0 and a value in a1.
  It compares the value with the six consecutive words at record +44, +48, +52, +56, +60 and +64, in that order, and returns 1 at the first equal word, otherwise 0 (the zero is set by the delay slot at 0x10051de4 of the loop-exit return at 0x10051de0).
  The pointer step is made in the delay slot of the equality branch at 0x10051dd0, so the loop makes six passes.
  **Inferred:** the six words are the record's base address registers, since PCI headers have six, and the routine asks whether a given base belongs to the device.
- `xf86BusProbe` (`XFree86`, 52 bytes at address 0x100526c0): **Established.**
  Calls `xf86PciProbe` (global slot 394) with no arguments and returns its result.
  No ISA or other bus is probed from here.
- `xf86PciProbe` (`XFree86`, 92 bytes at address 0x1004e800): **Established.**
  Calls `LoaderSymbol` with the string "xf86SetupPciData" (address 0x101f87a8) and then calls the function it returns, with the addresses of three data symbols as arguments: `xf86PCIVendorNameInfo` in a0, `xf86PCIVendorInfo` in a1 and `xf86PCICardInfo` in a2.
  The returned pointer is used as a call target with no null test.
  It then calls the static routine at 0x10049fc0 with no arguments and returns that routine's result.
  **Inferred:** the looked-up routine hands the PCI vendor and card name tables to the server from the loadable PCI data module (`libpcidata.so` is installed), and the static routine performs the scan.
- `xf86FixPciResource` (`XFree86`, 96 bytes at address 0x1004de40): **Established.**
  Passes a0 unchanged to `xf86GetPciInfoForEntity` and then calls the static routine at 0x1004d200 with a0 set to its own a1, a1 to its own a2, a2 to the record that lookup returned and a3 to its own a3, returning that routine's result.
  The record is not tested for null here.
  The static routine is not read by this entry.
- `xf86IsPciDevPresent` (`XFree86`, 100 bytes at address 0x10051180): **Established.**
  Takes three values in a0, a1 and a2.
  It reads the array pointer stored at `xf86PciInfo` (slot 2307) and walks that array of record pointers, stopping at a null entry.
  A record matches when its word at +4 equals a0, its word at +8 equals a1 and its word at +12 equals a2; the third compare at 0x100511cc is branch-likely, the other two are plain branches.
  The routine returns 1 for the first match and 0 when the array ends (an empty array also returns 0).
  **Inferred:** the three values are bus, device and function numbers.
- `PciBusStateEnter` (`XFree86`, 112 bytes at address 0x10050e40): **Established.**
  Reads the list head stored at `xf86BusAccInfo` (slot 2317) and walks the list by the word at node +28 until it is null.
  For each node whose word at +12 is nonzero it calls that function with the node as the only argument; a node with a zero word is skipped.
  An empty list returns at once.
  The routine returns nothing defined.
  **Inferred:** the nodes are the server's bus-access records and the word at +12 is the hook that switches that bus's access on when the server takes over the screen.
- `PciBusStateLeave` (`XFree86`, 112 bytes at address 0x10050f80): **Established.**
  The same walk over `xf86BusAccInfo` as `PciBusStateEnter`, calling the word at node +16 instead of +12, for nodes where it is nonzero.
  **Inferred:** the +16 hook restores the bus state when the server gives up the screen.
- `pciConvertRange2Host` (`XFree86`, 112 bytes at address 0x10052580): **Established.**
  Calls `xf86GetPciInfoForEntity` with a0 unchanged and keeps its own a1 across the call.
  A null record returns that null.
  Otherwise it calls `pciTag` with the record's words at +20, +24 and +28 (a0, a1, a2) and then the static routine at 0x10052380 with the tag in a0 and the saved a1, and returns that routine's result.
  **Inferred:** the record's three words are bus, device and function, and the static routine converts a bus range to a host range for that device.
- `xf86GetPciInfoForEntity` (`XFree86`, 160 bytes at address 0x10051c80): **Established.**
  Takes an entity index in a0.
  It returns 0 when the index is not below the word at `xf86NumEntities` (signed compare), and 0 when the entity record `xf86Entities[a0]` has a word at +40 other than 2.
  Otherwise it walks the array pointed to by `xf86PciVideoInfo`, up to a null entry, and returns the first record whose words at +20, +24 and +28 equal the entity's words at +44, +48 and +52, compared in that order; the last compare is branch-likely (0x10051d08).
  If no record matches it returns 0.
  **Inferred:** the value 2 at entity +40 is the PCI bus type, and the three words are bus, device and function, so the routine maps an entity to the video-device record the scan found for it.
- `xf86GetPciEntity` (`XFree86`, 128 bytes at address 0x10051d40): **Established.**
  Takes three values in a0, a1 and a2.
  It scans `xf86Entities`, a count of `xf86NumEntities` pointers, in order, skipping entities whose word at +40 is not 2.
  It returns the index of the first entity whose words at +44, +48 and +52 equal a0, a1 and a2, and -1 when the count is zero or nothing matches.
  **Inferred:** the three values are bus, device and function; this is the reverse of the lookup in `xf86GetPciInfoForEntity`.
- `xf86CheckPciSlot` (`XFree86`, 124 bytes at address 0x10051e00): **Established.**
  The same scan of `xf86Entities` as `xf86GetPciEntity`, over entities whose word at +40 is 2 and whose words at +44, +48 and +52 equal a0, a1 and a2.
  It returns 0 when one matches and 1 when none does or the count is zero.
  **Inferred:** it answers whether a PCI slot is free, that is, not yet claimed by an entity.
- `xf86IsPrimaryPci` (`XFree86`, 116 bytes at address 0x10051b00): **Established.**
  Takes a record pointer in a0.
  It reads the word at the data symbol `primaryBus` (slot 2320) and returns 0 unless that word is 2.
  Otherwise it compares the symbol's words at +4, +8 and +12 with the record's words at +20, +24 and +28, in that order, and returns 1 only when all three are equal, otherwise 0.
  **Inferred:** `primaryBus` is a record of the bus type and the bus, device and function of the display the firmware used, so the routine tells whether a device is that display.
- `PciStateEnter` (`XFree86`, 208 bytes at address 0x10050d40): **Established.**
  Walks the array of record pointers named by `xf86PciAccInfo`, up to a null entry, re-reading the array pointer after each record it processes.
  A record whose word at +124 is zero is skipped.
  For any other record it calls the static routine at 0x1004be00 with the word at record +12 in a0 and the address record +60 in a1, then the static routine at 0x1004bf00 with the same word and the address record +92, and finally copies the word at record +92 into the word at record +20.
  The routine at 0x1004be00 reads PCI configuration offsets 0x04, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24 and 0x30 with `pciReadLong` and stores them as eight words, in that order, from the address it is given.
  The routine at 0x1004bf00 clears the low two bits of configuration offset 0x04 with `pciSetBitsLong` (mask 3, value 0), writes offsets 0x30, 0x10, 0x14, 0x18, 0x1c, 0x20 and 0x24 back from the saved words with `pciWriteLong`, and finishes by writing offset 0x04 from the first saved word through a tail call.
  **Inferred:** the word at record +12 is the PCI tag, the +60 area holds the state found on entry and the +92 area the server's own state, so the routine saves the boot-time configuration of each device and installs the server's.
- `PciStateLeave` (`XFree86`, 160 bytes at address 0x10050ec0): **Established.**
  Walks the same array as `PciStateEnter` and skips the same records (word at +124 zero).
  For each other record it calls the static routine at 0x1004be00 with the word at record +12 and the address record +92, which stores the device's eight configuration words there.
  It does not call the routine at 0x1004bf00 and does not write the word at +20.
  **Inferred:** it captures the server's configuration so that a later `PciStateEnter` can restore it.
- `DisablePciAccess` (`XFree86`, 156 bytes at address 0x10051000): **Established.**
  Walks the same `xf86PciAccInfo` array as `PciStateEnter`, skipping records whose word at +124 is zero.
  For the others it calls the static routine at 0x1004bb40 with the word at record +44.
  That routine is a bare return: its first instruction at 0x1004bb40 is `jr ra` and the code at 0x1004bb80 is a separate routine.
  So the per-device disable does nothing in this build.
- `DisablePciBusAccess` (`XFree86`, 144 bytes at address 0x100510c0): **Established.**
  Walks the list at `xf86BusAccInfo` by the word at node +28.
  For each node whose word at +8 is nonzero it calls that function with the node as its argument.
  Whether or not there was a hook, if the node's word at +24 is nonzero it stores zero into the word at +20 of the record that word points to.
  An empty list returns at once and the routine returns nothing defined.
  **Inferred:** the +8 hook switches the bus's access off, and the store clears the owning device record's cached command state.
- `xf86ComparePciBusString` (`XFree86`, 152 bytes at address 0x10051a40): **Established.**
  Takes a bus-address string in a0 and three values in a1, a2 and a3.
  It calls `xf86ParsePciBusString` with the string and the addresses of three stack words (offsets 0, 4 and 8 of its frame).
  If that returns 0 it returns 0.
  Otherwise it compares the parsed words with a1, a2 and a3 in that order and returns 1 only when all three are equal.
  **Inferred:** the three parsed words are bus, device and function.
- `xf86EnablePciBusMaster` (`XFree86`, 160 bytes at address 0x10052600): **Established.**
  Takes a record pointer in a0 and a flag in a1.
  A null record returns at once (the returned value is the null).
  Otherwise it builds a tag with `pciTag` from the record's words at +20, +24 and +28, reads configuration offset 4 with `pciReadLong`, and writes it back with `pciWriteLong`: with the flag nonzero the value ORed with 4, with the flag zero the value ANDed with 0xfffffffb (immediate -5).
  It returns `pciWriteLong`'s result.
  **Inferred:** offset 4 is the PCI command register and bit 2 the bus-master enable bit, as in the PCI specification.
