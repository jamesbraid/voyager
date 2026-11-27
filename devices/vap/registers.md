<!-- generated from devices/vap/registers.toml by defs-gen - do not edit, change the source -->
<!-- SPDX-License-Identifier: BSD-3-Clause -->
<!-- defs-gen 4 -->
<!-- input sha256 3b8ae7410ab910f79ca79ae8117cfa7efcb514eb7342b7158f00fc0bf00e96e0 -->

# vertex array processor and programmable vertex shader registers of the R300 and R350 3D engine

Layout of the block from AMD's public register reference; the chip is documented as the R3xx family, which includes the R300 and R350. Registers already defined in the display or pipes unit are not repeated.

Unit `vap`, macro prefix `R300_VAP`.
Default source: AMD Radeon R3xx 3D Register Reference, revision 1.0.

Every item has a grade: established, inferred or unknown. A grade says how the item was derived from its source; it does not claim the item was measured on silicon.

## Registers

| Register | Offset | Access | Width | Count | Space | Reset | Grade | Source |
|---|---|---|---|---|---|---|---|---|
| `vport_xscale_alias` | 0x1d98 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |
| `vport_xoffset_alias` | 0x1d9c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |
| `vport_yscale_alias` | 0x1da0 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |
| `vport_yoffset_alias` | 0x1da4 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |
| `vport_zscale_alias` | 0x1da8 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |
| `vport_zoffset_alias` | 0x1dac | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |
| `port_data` | 0x2000 | w | 32 | 16 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 74 |
| `port_idx` | 0x2040 | w | 32 | 16 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |
| `cntl` | 0x2080 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |
| `vf_cntl` | 0x2084 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 81 |
| `out_vtx_fmt_0` | 0x2090 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |
| `out_vtx_fmt_1` | 0x2094 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |
| `vport_xscale` | 0x2098 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |
| `vport_xoffset` | 0x209c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |
| `vport_yscale` | 0x20a0 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |
| `vport_yoffset` | 0x20a4 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |
| `vport_zscale` | 0x20a8 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |
| `vport_zoffset` | 0x20ac | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |
| `vte_cntl` | 0x20b0 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |
| `vtx_size` | 0x20b4 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 85 |
| `port_data_idx_128` | 0x20b8 | w | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |
| `vtx_num_arrays` | 0x20c0 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |
| `vtx_aos_attr` | 0x20c4 | rw | 32 | 8 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |
| `vtx_aos_addr_even` | 0x20c8 | rw | 32 | 8 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |
| `vtx_aos_addr_odd` | 0x20cc | rw | 32 | 8 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |
| `vf_max_vtx_indx` | 0x2134 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |
| `vf_min_vtx_indx` | 0x2138 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |
| `prog_stream_cntl` | 0x2150 | rw | 32 | 8 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |
| `vtx_state_cntl` | 0x2180 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 85 |
| `psc_sgn_norm_cntl` | 0x21dc | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |
| `prog_stream_cntl_ext` | 0x21e0 | rw | 32 | 8 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 76 |
| `pvs_vector_indx_reg` | 0x2200 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 80 |
| `pvs_vector_data_reg` | 0x2204 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 80 |
| `pvs_vector_data_reg_128` | 0x2208 | w | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 80 |
| `clip_cntl` | 0x221c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |
| `gb_vert_clip_adj` | 0x2220 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |
| `gb_vert_disc_adj` | 0x2224 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |
| `gb_horz_clip_adj` | 0x2228 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 72 |
| `gb_horz_disc_adj` | 0x222c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |
| `pvs_flow_cntl_addrs` | 0x2230 | rw | 32 | 16 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 78 |
| `pvs_state_flush_reg` | 0x2284 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 80 |
| `pvs_vtx_timeout_reg` | 0x2288 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 80 |
| `pvs_flow_cntl_loop_index` | 0x2290 | rw | 32 | 16 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |
| `pvs_code_cntl_0` | 0x22d0 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |
| `pvs_const_cntl` | 0x22d4 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 78 |
| `pvs_code_cntl_1` | 0x22d8 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 78 |
| `pvs_flow_cntl_opc` | 0x22dc | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |
| `vtx_st_pos_0_x_4` | 0x2300 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 88 |
| `vtx_st_pos_0_y_4` | 0x2304 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 89 |
| `vtx_st_pos_0_z_4` | 0x2308 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 89 |
| `vtx_st_pos_0_w_4` | 0x230c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 88 |
| `vtx_st_norm_0_x` | 0x2310 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 87 |
| `vtx_st_norm_0_y` | 0x2314 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 87 |
| `vtx_st_norm_0_z` | 0x2318 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 87 |
| `vtx_st_pvms` | 0x231c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 89 |
| `vtx_st_clr_r` | 0x2320 | rw | 32 | 8 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 86 |
| `vtx_st_clr_g` | 0x2324 | rw | 32 | 8 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 86 |
| `vtx_st_clr_b` | 0x2328 | rw | 32 | 8 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 86 |
| `vtx_st_clr_a` | 0x232c | rw | 32 | 8 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 86 |
| `vtx_st_tex_s` | 0x23a0 | rw | 32 | 8 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 90 |
| `vtx_st_tex_t` | 0x23a4 | rw | 32 | 8 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 90 |
| `vtx_st_tex_r` | 0x23a8 | rw | 32 | 8 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 90 |
| `vtx_st_tex_q` | 0x23ac | rw | 32 | 8 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 90 |
| `vtx_st_pnt_sprt_sz` | 0x2420 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 88 |
| `vtx_st_disc_fog` | 0x2424 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 87 |
| `vtx_st_shininess_0` | 0x2428 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 89 |
| `vtx_st_shininess_1` | 0x242c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 90 |
| `vtx_st_blnd_wt` | 0x2430 | rw | 32 | 4 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 86 |
| `vtx_st_pos_1_x` | 0x2440 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 89 |
| `vtx_st_pos_1_y` | 0x2444 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 89 |
| `vtx_st_pos_1_z` | 0x2448 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 89 |
| `vtx_st_pos_1_w` | 0x244c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 89 |
| `vtx_st_norm_1_x` | 0x2450 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 87 |
| `vtx_st_norm_1_y` | 0x2454 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 87 |
| `vtx_st_norm_1_z` | 0x2458 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 88 |
| `vtx_st_edge_flags` | 0x245c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 87 |
| `vtx_st_usr_clr_r` | 0x2460 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 91 |
| `vtx_st_usr_clr_g` | 0x2464 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 90 |
| `vtx_st_usr_clr_b` | 0x2468 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 90 |
| `vtx_st_usr_clr_a` | 0x246c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 90 |
| `vtx_st_clr_pkd` | 0x2470 | w | 32 | 8 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 86 |
| `vtx_st_pos_0_x_2` | 0x2490 | w | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 88 |
| `vtx_st_pos_0_y_2` | 0x2494 | w | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 88 |
| `vtx_st_norm_0_pkd` | 0x2498 | w | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 87 |
| `vtx_st_usr_clr_pkd` | 0x249c | w | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 91 |
| `vtx_st_pos_0_x_3` | 0x24a0 | w | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 88 |
| `vtx_st_pos_0_y_3` | 0x24a4 | w | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 88 |
| `vtx_st_pos_0_z_3` | 0x24a8 | w | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 89 |
| `vtx_st_end_of_pkt` | 0x24ac | w | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 87 |

### Register `vport_xscale_alias`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `vport_xscale` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |  |

### Register `vport_xoffset_alias`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `vport_xoffset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |  |

### Register `vport_yscale_alias`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `vport_yscale` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |  |

### Register `vport_yoffset_alias`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `vport_yoffset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |  |

### Register `vport_zscale_alias`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `vport_zscale` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |

### Register `vport_zoffset_alias`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `vport_zoffset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |

### Register `port_data`

Array of 16 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `dataport0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 74 |  |

### Register `port_idx`

Array of 16 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `idxport0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |  |

### Register `cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 22 | `dx_clip_space_def` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |  |
| 21:18 | `vf_max_vtx_num` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |  |
| 11:8 | `pvs_num_fpus` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |  |
| 7:4 | `pvs_num_cntlrs` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |  |
| 3:0 | `pvs_num_slots` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |  |

### Register `vf_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:16 | `num_vertices` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 81 |  |
| 13 | `dual_index_mode` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 81 |  |
| 12 | `vtx_reuse_dis` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 81 |  |
| 11 | `index_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 81 |  |
| 5:4 | `prim_walk` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 81 |  |
| 3:0 | `prim_type` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 81 |  |

### Register `out_vtx_fmt_0`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 16 | `vtx_pt_size_present` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |
| 4 | `vtx_color_3_present` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |
| 3 | `vtx_color_2_present` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |
| 2 | `vtx_color_1_present` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |
| 1 | `vtx_color_0_present` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |
| 0 | `vtx_pos_present` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |

### Register `out_vtx_fmt_1`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 23:21 | `tex_7_comp_cnt` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |
| 20:18 | `tex_6_comp_cnt` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |
| 17:15 | `tex_5_comp_cnt` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |
| 14:12 | `tex_4_comp_cnt` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |
| 11:9 | `tex_3_comp_cnt` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |
| 8:6 | `tex_2_comp_cnt` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |
| 5:3 | `tex_1_comp_cnt` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |
| 2:0 | `tex_0_comp_cnt` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |

### Register `vport_xscale`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `vport_xscale` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |  |

### Register `vport_xoffset`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `vport_xoffset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |  |

### Register `vport_yscale`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `vport_yscale` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |  |

### Register `vport_yoffset`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `vport_yoffset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |  |

### Register `vport_zscale`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `vport_zscale` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |

### Register `vport_zoffset`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `vport_zoffset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |

### Register `vte_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 11 | `serial_proc_ena` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |
| 10 | `vtx_w0_fmt` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |
| 9 | `vtx_z_fmt` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |
| 8 | `vtx_xy_fmt` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |
| 5 | `vport_z_offset_ena` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |
| 4 | `vport_z_scale_ena` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |
| 3 | `vport_y_offset_ena` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |
| 2 | `vport_y_scale_ena` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |
| 1 | `vport_x_offset_ena` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |
| 0 | `vport_x_scale_ena` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |

### Register `vtx_size`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 6:0 | `dwords_per_vtx` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 85 |  |

### Register `port_data_idx_128`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `data_idx_port_128` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |  |

### Register `vtx_num_arrays`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31 | `aos_15_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 30 | `aos_14_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 29 | `aos_13_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 28 | `aos_12_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 27 | `aos_11_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 26 | `aos_10_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 25 | `aos_9_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 24 | `aos_8_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 23 | `aos_7_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 22 | `aos_6_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 21 | `aos_5_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 20 | `aos_4_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 19 | `aos_3_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 18 | `aos_2_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 17 | `aos_1_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 16 | `aos_0_fetch_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 5 | `vc_force_prefetch` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 4:0 | `vtx_num_arrays` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |

### Register `vtx_aos_attr`

Array of 8 registers, stride 12.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 30:24 | `vtx_aos_stride1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 22:16 | `vtx_aos_count1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 14:8 | `vtx_aos_stride0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |
| 6:0 | `vtx_aos_count0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 84 |  |

### Register `vtx_aos_addr_even`

Array of 8 registers, stride 12.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:2 | `vtx_aos_addr0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |

### Register `vtx_aos_addr_odd`

Array of 8 registers, stride 12.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:2 | `vtx_aos_addr1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 83 |  |

### Register `vf_max_vtx_indx`

### Register `vf_min_vtx_indx`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 23:0 | `min_indx` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 82 |  |

### Register `prog_stream_cntl`

Array of 8 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31 | `normalize_1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |  |
| 30 | `signed_1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |  |
| 29 | `last_vec_1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |  |
| 28:24 | `dst_vec_loc_1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |  |
| 23:20 | `skip_dwords_1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |  |
| 15 | `normalize_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |  |
| 14 | `signed_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |  |
| 13 | `last_vec_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |  |
| 12:8 | `dst_vec_loc_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |  |
| 7:4 | `skip_dwords_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |  |
| 3:0 | `data_type_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 75 |  |

### Register `vtx_state_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 18 | `use_addr_ind_tbl` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 85 |  |
| 16 | `update_user_color_0_ena` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 85 |  |
| 15:14 | `color_7_assembly_cntl` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 85 |  |
| 13:12 | `color_6_assembly_cntl` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 85 |  |
| 11:10 | `color_5_assembly_cntl` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 85 |  |
| 9:8 | `color_4_assembly_cntl` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 85 |  |
| 7:6 | `color_3_assembly_cntl` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 85 |  |
| 5:4 | `color_2_assembly_cntl` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 85 |  |
| 3:2 | `color_1_assembly_cntl` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 85 |  |
| 1:0 | `color_0_assembly_cntl` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 85 |  |

### Register `psc_sgn_norm_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:30 | `sgn_norm_method_15` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 29:28 | `sgn_norm_method_14` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 27:26 | `sgn_norm_method_13` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 25:24 | `sgn_norm_method_12` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 23:22 | `sgn_norm_method_11` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 21:20 | `sgn_norm_method_10` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 19:18 | `sgn_norm_method_9` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 17:16 | `sgn_norm_method_8` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 15:14 | `sgn_norm_method_7` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 13:12 | `sgn_norm_method_6` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 11:10 | `sgn_norm_method_5` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 9:8 | `sgn_norm_method_4` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 7:6 | `sgn_norm_method_3` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 5:4 | `sgn_norm_method_2` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 3:2 | `sgn_norm_method_1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 1:0 | `sgn_norm_method_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |

### Register `prog_stream_cntl_ext`

Array of 8 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:28 | `write_ena_1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 76 |  |
| 27:25 | `swizzle_select_w_1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 76 |  |
| 24:22 | `swizzle_select_z_1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 76 |  |
| 21:19 | `swizzle_select_y_1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 76 |  |
| 18:16 | `swizzle_select_x_1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 76 |  |
| 15:12 | `write_ena_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 76 |  |
| 11:9 | `swizzle_select_w_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 76 |  |
| 8:6 | `swizzle_select_z_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 76 |  |
| 5:3 | `swizzle_select_y_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 76 |  |
| 2:0 | `swizzle_select_x_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 76 |  |

### Register `pvs_vector_indx_reg`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 10:0 | `octword_offset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 80 |  |

### Register `pvs_vector_data_reg`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `data_register` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 80 |  |

### Register `pvs_vector_data_reg_128`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `data_register` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 80 |  |

### Register `clip_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 18 | `boundary_edge_flag_ena` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |  |
| 17 | `ucp_cull_only_ena` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |  |
| 16 | `clip_disable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |  |
| 15:14 | `ps_ucp_mode` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |  |
| 5 | `ucp_ena_5` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |  |
| 4 | `ucp_ena_4` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |  |
| 3 | `ucp_ena_3` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |  |
| 2 | `ucp_ena_2` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |  |
| 1 | `ucp_ena_1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |  |
| 0 | `ucp_ena_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 71 |  |

### Register `gb_vert_clip_adj`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `data_register` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |

### Register `gb_vert_disc_adj`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `data_register` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |

### Register `gb_horz_clip_adj`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `data_register` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 72 |  |

### Register `gb_horz_disc_adj`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `data_register` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 73 |  |

### Register `pvs_flow_cntl_addrs`

Array of 16 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:24 | `pvs_fc_rtn_inst_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 78 |  |
| 23:16 | `pvs_fc_last_inst_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 78 |  |
| 15:8 | `pvs_fc_loop_cnt_jmp_inst_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 78 |  |
| 7:0 | `pvs_fc_act_adrs_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 78 |  |

### Register `pvs_state_flush_reg`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `data_register` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 80 |  |

### Register `pvs_vtx_timeout_reg`

### Register `pvs_flow_cntl_loop_index`

Array of 16 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 15:8 | `pvs_fc_loop_step_val_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 7:0 | `pvs_fc_loop_init_val_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |

### Register `pvs_code_cntl_0`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 29:20 | `pvs_last_inst` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 19:10 | `pvs_xyzw_valid_inst` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |
| 9:0 | `pvs_first_inst` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 77 |  |

### Register `pvs_const_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 23:16 | `pvs_max_const_addr` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 78 |  |
| 7:0 | `pvs_const_base_offset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 78 |  |

### Register `pvs_code_cntl_1`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 9:0 | `pvs_last_vtx_src_inst` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 78 |  |

### Register `pvs_flow_cntl_opc`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:30 | `pvs_fc_opc_15` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 29:28 | `pvs_fc_opc_14` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 27:26 | `pvs_fc_opc_13` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 25:24 | `pvs_fc_opc_12` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 23:22 | `pvs_fc_opc_11` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 21:20 | `pvs_fc_opc_10` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 19:18 | `pvs_fc_opc_9` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 17:16 | `pvs_fc_opc_8` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 15:14 | `pvs_fc_opc_7` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 13:12 | `pvs_fc_opc_6` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 11:10 | `pvs_fc_opc_5` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 9:8 | `pvs_fc_opc_4` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 7:6 | `pvs_fc_opc_3` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 5:4 | `pvs_fc_opc_2` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 3:2 | `pvs_fc_opc_1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |
| 1:0 | `pvs_fc_opc_0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 79 |  |

### Register `vtx_st_pos_0_x_4`

### Register `vtx_st_pos_0_y_4`

### Register `vtx_st_pos_0_z_4`

### Register `vtx_st_pos_0_w_4`

### Register `vtx_st_norm_0_x`

### Register `vtx_st_norm_0_y`

### Register `vtx_st_norm_0_z`

### Register `vtx_st_pvms`

### Register `vtx_st_clr_r`

Array of 8 registers, stride 16.

### Register `vtx_st_clr_g`

Array of 8 registers, stride 16.

### Register `vtx_st_clr_b`

Array of 8 registers, stride 16.

### Register `vtx_st_clr_a`

Array of 8 registers, stride 16.

### Register `vtx_st_tex_s`

Array of 8 registers, stride 16.

### Register `vtx_st_tex_t`

Array of 8 registers, stride 16.

### Register `vtx_st_tex_r`

Array of 8 registers, stride 16.

### Register `vtx_st_tex_q`

Array of 8 registers, stride 16.

### Register `vtx_st_pnt_sprt_sz`

### Register `vtx_st_disc_fog`

### Register `vtx_st_shininess_0`

### Register `vtx_st_shininess_1`

### Register `vtx_st_blnd_wt`

Array of 4 registers, stride 4.

### Register `vtx_st_pos_1_x`

### Register `vtx_st_pos_1_y`

### Register `vtx_st_pos_1_z`

### Register `vtx_st_pos_1_w`

### Register `vtx_st_norm_1_x`

### Register `vtx_st_norm_1_y`

### Register `vtx_st_norm_1_z`

### Register `vtx_st_edge_flags`

### Register `vtx_st_usr_clr_r`

### Register `vtx_st_usr_clr_g`

### Register `vtx_st_usr_clr_b`

### Register `vtx_st_usr_clr_a`

### Register `vtx_st_clr_pkd`

Array of 8 registers, stride 4.

### Register `vtx_st_pos_0_x_2`

### Register `vtx_st_pos_0_y_2`

### Register `vtx_st_norm_0_pkd`

### Register `vtx_st_usr_clr_pkd`

### Register `vtx_st_pos_0_x_3`

### Register `vtx_st_pos_0_y_3`

### Register `vtx_st_pos_0_z_3`

### Register `vtx_st_end_of_pkt`
