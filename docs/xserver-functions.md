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
  On the first call it sets the flag and calls the static routine at 0x10032a40 with the subdirectory name "drivers" (0x10240d80) and the string "nv" (0x102404ec), the server's built-in preferred list, and stores the result.
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
