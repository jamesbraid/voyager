// generated from devices/gart/registers.toml by defs-gen - do not edit, change the source
// SPDX-License-Identifier: BSD-3-Clause
// defs-gen 2
// input sha256 7a4b4167ec5845ba012d8b67a0e3e5a3042273b13933438c5f1985fdd2536629
// AGP and PCI GART registers of the R3xx-class FireGL boards
#![allow(dead_code)]

/// (inferred)
pub mod agp_cntl {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x174;
    pub mod aperture_size { // bits 5:0, inferred
        pub const SHIFT: u32 = 0;
        pub const MASK: u32 = 0x3f;
        pub const fn get(v: u32) -> u32 {
            (v >> SHIFT) & MASK
        }
        pub const fn set(v: u32, x: u32) -> u32 {
            (v & !(MASK << SHIFT)) | ((x & MASK) << SHIFT)
        }
    }
}
/// (inferred)
pub mod aic_cntl {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x1d0;
    pub mod dis_out_of_pci_gart_access { // bits 1:1, inferred
        pub const SHIFT: u32 = 1;
        pub const MASK: u32 = 0x1;
        pub const fn get(v: u32) -> u32 {
            (v >> SHIFT) & MASK
        }
        pub const fn set(v: u32, x: u32) -> u32 {
            (v & !(MASK << SHIFT)) | ((x & MASK) << SHIFT)
        }
    }
    pub mod pcigart_translate_en { // bits 0:0, inferred
        pub const SHIFT: u32 = 0;
        pub const MASK: u32 = 0x1;
        pub const fn get(v: u32) -> u32 {
            (v >> SHIFT) & MASK
        }
        pub const fn set(v: u32, x: u32) -> u32 {
            (v & !(MASK << SHIFT)) | ((x & MASK) << SHIFT)
        }
    }
}
/// (inferred)
pub mod aic_pt_base {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x1d8;
}
/// (inferred)
pub mod aic_lo_addr {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x1dc;
}
/// (inferred)
pub mod aic_hi_addr {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x1e0;
}
