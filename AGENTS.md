# ATI R300 and R350 (SGI Onyx4) Reverse Engineering Project

This project reverse-engineers the ATI R300 and R350 graphics processors as fitted in the SGI **Onyx4 UltimateVision**: the **FireGL X1** (R300) and **FireGL X2** (R350), and the way IRIX 6.5.30 on an IP35 host drives them. The goal is to document the chips and their attachment as register definitions and notes that emulator authors, FPGA builders and the vintage SGI community can work from. Layout and working style follow techomancer's [gr2](https://github.com/techomancer/gr2) and [gr4](https://github.com/techomancer/gr4). Where this file is silent, do what gr4 does.

## 1. Board overview

In the shipped install the cards carry the graphics-board tag `VOYAGER`, the library sets are `IP35VOYAGER`, `IP35VOYAGER32` and `IP35VOYAGER64`, and the driver is ATI's FireGL driver (`fglrx`) packaged for IRIX: a kernel object, an XFree86 video driver, a GLX module, a direct-rendering driver and a DRM library, plus three video option ROM images. `libGLcore.so` for IP35VOYAGER64 is a 19 KB stub, so the GL implementation is ATI's and there is no GL sample-implementation pipeline to document.

Facts are labelled **established** (read directly from a shipped binary, a published document or public open-source code, cited with function, offset or install path), **inferred** (a reasoned reading, with the reasoning) or **unknown**. Anything unlabelled is unknown. Do not fill gaps from memory, other SGI graphics families or other emulators. What is known about the option ROM images is in [software/ucode/option-roms.md](software/ucode/option-roms.md). Host attachment, command processor, microcode source and memory and display details are unknown for this board; see `questions/open-questions.md`. Roles taken from a public source's names are not findings.

## 2. Binaries

Proprietary SGI and ATI binaries are not tracked. Copy the files [evidence/irix-files.md](evidence/irix-files.md) lists from your own IRIX 6.5.30 install into the ignored `root/` and make the relative links that file describes (`r300_kernel/`, `libgl/`, `xserver/`, `dri/`, `gfxtools/`, `diags/`, `ucode/`, `firmware/`). Disassembly, decompiled C, headers and notes derived from them are committed. Whether the DWARF in the unstripped objects holds types or only names and lines is open.

Public sources are pinned submodules under `references/code/`, mainly `linux` (radeon DRM, `drivers/gpu/drm/radeon/`), `mesa` (r300 driver, PCI ID table) and `irix-657m-src`. Fetch one with `git submodule update --init --depth 1 references/code/NAME`. They cross-check register meaning and are not proof of what IRIX does. Documents are indexed in [references/documents/INDEX.md](references/documents/INDEX.md). The public IRIX 6.5.7 source predates the Onyx4: its facts are established for that release and cited by path, with the release named.

## 3. Deliverables

Register and command-packet layouts live in `devices/<unit>/registers.toml`, one file per unit, with a grade on every item. `generated/` (C, Rust, Python, JSON, genxml) and `devices/<unit>/registers.md` are written from it by `retools/tools/defs/defs-gen` and never edited by hand. To change a layout, edit the TOML, run `defs-gen`, then `retools/tools/defs/defs-check --build`, and commit both. Everything else goes in pages under `devices/`, `software/` and `evidence/`, in your own words, each finding labelled with its derivation; a root header is for what the TOML cannot hold. Planned root headers `R300.h`, `R350.h` and `ONYX4.h` are not written yet.

## 4. Toolchain

The host needs Podman, git and python3; everything else runs in the container built from [retools/tools/Containerfile](retools/tools/Containerfile) via `retools/tools/re-run COMMAND`. [tools/setup-clone.sh](tools/setup-clone.sh) prepares a fresh clone. Run shared tools by their submodule path from the repository root (`retools/tools/<name>`; this device's are `retools/tools/voyager/<name>`). A change to a tool is made in retools and the pin here moves with a commit. `tools/` keeps only the setup script, the message-site extractors and `tools/config/`. The tools: `retools/tools/voyager/map_binaries.py` catalogues linked binaries, `disasm_kernel.py`, `resolve_got.py` and `clean_asm.py` prepare kernel objects for m2c, `retools/tools/inventory.py` (config `tools/config/inventory-config.json`) measures coverage into `evidence/inventory/*.tsv`, and `retools/tools/facts.py` builds facts for a routine. They descend from gr4's and carry its BSD-3 notice ([retools/tools/LICENSE-gr4](retools/tools/LICENSE-gr4)). Regenerate the inventory with `retools/tools/re-run python3 retools/tools/inventory.py`.

## 5. Evidence: software only, any source

No hardware is available. Do not plan, request or wait for measurements. Every question is answered from software and published material, and a row is not finished while either still has something to read. Readers may open every shipped binary on every IRIX release, the public IRIX 6.5.7 source, vendor specifications (including AMD's R3xx and R5xx references), public drivers and emulators, manuals and man pages, and published output from real machines (`hinv`, `gfxinfo`, X logs, screenshots in posts and archives).

Running the shipped software under an emulator shows the model's behaviour and the driver's expectations. It is never hardware evidence; label it that way. Write findings in your own words. Never paste vendor source, HDL, firmware or binaries; microcode and option ROM images stay in `root/`, so describe their format and cite offsets.

Use "established" only for what you read in full: the whole function body or table, or the passage in a document. A reading built from call lists, register-store summaries, a sibling chip or a name is "inferred". Never reword an entry to change its grade. An entry written quickly and not yet checked ends with "Unverified." and grades at most `located`. Linux and Mesa describe the public chips and AMD's documents the silicon; they are cross-checks. A fact about what IRIX does on an Onyx4, or about its wiring, needs a shipped binary or an SGI document. Do not assume a PC's AGP or PCI Express arrangement.

When every route is exhausted, label the fact "unknown: no shipped software or published source depends on it" and list the routes tried; an emulator author then chooses a value and documents it. Never write "needs capture". An open question is not a stopping point: record it in `questions/open-questions.md` with the routes tried and the next one, and carry on. When it is answered, move it into the owning page and delete the entry.

## Evidence order

For a register or behaviour fact, take it from the highest source that states it and grade it by that source:

1. IRIX source (public `irix-657m-src` tree): read it, write the fact in your own words, never copy source text, cite the path in the tree. A fact it defines is `established`.
2. Shipped binaries (PROMs, kernels, libraries): confirm the source matches what shipped, and the release differences (6.5.7 source, 6.5.22 and 6.5.30 binaries).
3. Public Linux, OpenBSD and NetBSD headers and drivers: `established` once the IRIX source confirms them.
4. Published SGI and vendor manuals.
5. Notes from other projects (other projects' datasheets, manual pages and emulator code): may confirm or contradict, never supply a fact. A fact resting only on one stays `unknown`, with the note named.

Reset values: `established` when the source states a power-on default or PROM code relies on a reset state; `inferred` when the PROM depends on a value before its first write (cite the PROM address); a read after firmware initialisation is not a reset value and can only rule values out; otherwise `unknown`. A physical hardware read is a last resort, needs the repository owner's approval, and counts as a reset value only for a register firmware provably never writes. Emulator runs are model behaviour, never hardware evidence.

Full text and the checks that enforce it: `retools/tools/README-analysis.md#evidence-order`.

## 6. When work is finished

A coverage row is done when every inventory entry in its area is `understood` or `no-software-dependency`. `understood` means a label, a role and hardware effect, and a derivation citation (release, binary and install path under `root/`, offset, callee) in the same entry; `located` and `named-only` are partial. [evidence/inventory/README.md](evidence/inventory/README.md) gives the exact rule. Regenerate the inventory, then pick the next entries below `understood`. Hand off only when your area meets that definition or the session ends; then say in `questions/open-questions.md` where you stopped.

## 7. Rules

- Software-only reverse engineering from public sources and shipped binaries. Nothing else is an input.
- Name no emulator projects, private tooling, hosts, people or local storage paths in committed files, and do not record where your copy of the IRIX files came from. Give no capture, trace or machine a nickname. Do not quote internal documents. Quote only public sources, briefly, with title and URL in `references/documents/INDEX.md`. `retools/tools/leakcheck.py` enforces this (allow-list `tools/config/leak-allow.txt`) and refuses commit trailers.
- Update `evidence/coverage.md` and the inventory in the same commit as the finding. Commit disassembly and traces you produce as data; keep the proprietary binaries in `root/`.
- No trailers in commit messages: no attribution, sign-off or generated-with lines.
- Commit small and often, straight to `main`. Subjects are lowercase, component-prefixed imperatives (`r300_kernel: label the ring base register`); bodies say why. Write everything for a stranger.
