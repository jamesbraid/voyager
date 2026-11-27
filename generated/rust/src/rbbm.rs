// @generated from devices/rbbm/registers.toml by defs-gen - do not edit, change the source
// SPDX-License-Identifier: BSD-3-Clause
// defs-gen 4
// input sha256 121d3d64a25ddc59b53ac488a3c0da210fe1d0d5744d583b956791ca012d1ad2
// register backbone manager registers of the R3xx-class FireGL boards
#![allow(dead_code)]
#![allow(clippy::doc_markdown)]
#![cfg_attr(rustfmt, rustfmt_skip)]

/// (inferred)
pub mod isync_cntl {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x1724;
}
/// (inferred)
pub mod guicntl {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x172c;
    pub mod host_data_swap { // bits 1:0, inferred
        pub const SHIFT: u32 = 0;
        pub const MASK: u32 = 0x3;
        pub const fn get(v: u32) -> u32 {
            (v >> SHIFT) & MASK
        }
        pub const fn set(v: u32, x: u32) -> u32 {
            (v & !(MASK << SHIFT)) | ((x & MASK) << SHIFT)
        }
    }
}
