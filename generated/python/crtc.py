"""generated from devices/crtc/registers.toml by defs-gen - do not edit, change the source
SPDX-License-Identifier: BSD-3-Clause
defs-gen 2
input sha256 8de5d72a19c60f074396ab93989685d8a6b14d2556e8c6fa2415d67524c77b30
second CRTC, cursor, palette and DAC registers of the R3xx-class FireGL boards"""

UNIT = 'crtc'
REGISTERS = {'palette_index': {'offset': 176, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'palette_data': {'offset': 180, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc_vline_crnt_vline': {'offset': 528, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc_crnt_frame': {'offset': 532, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc_gui_trig_vline': {'offset': 536, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc_offset_right': {'offset': 544, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc_offset': {'offset': 548, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc_pitch': {'offset': 556, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'cur_offset': {'offset': 608, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'cur_horz_vert_posn': {'offset': 612, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'cur_horz_vert_off': {'offset': 616, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'cur_clr0': {'offset': 620, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'cur_clr1': {'offset': 624, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'fp_gen_cntl': {'offset': 644, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'fp_horz_stretch': {'offset': 652, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'fp_vert_stretch': {'offset': 656, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'fp_h_sync_strt_wid': {'offset': 708, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'fp_v_sync_strt_wid': {'offset': 712, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc2_h_total_disp': {'offset': 768, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc2_h_sync_strt_wid': {'offset': 772, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc2_v_total_disp': {'offset': 776, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc2_v_sync_strt_wid': {'offset': 780, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc2_vline_crnt_vline': {'offset': 784, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc2_crnt_frame': {'offset': 788, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc2_gui_trig_vline': {'offset': 792, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc2_offset': {'offset': 804, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc2_offset_cntl': {'offset': 808, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc2_pitch': {'offset': 812, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'cur2_offset': {'offset': 864, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'cur2_horz_vert_posn': {'offset': 868, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'cur2_horz_vert_off': {'offset': 872, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'cur2_clr0': {'offset': 876, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'cur2_clr1': {'offset': 880, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'crtc2_status': {'offset': 1020, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'disp_misc_cntl': {'offset': 3328, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'dac_macro_cntl': {'offset': 3332, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'disp_pwr_man': {'offset': 3336, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'disp_output_cntl': {'offset': 3428, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}}
WORDS = {}
FIELDS = {'palette_index': {}, 'palette_data': {}, 'crtc_vline_crnt_vline': {}, 'crtc_crnt_frame': {}, 'crtc_gui_trig_vline': {}, 'crtc_offset_right': {}, 'crtc_offset': {}, 'crtc_pitch': {}, 'cur_offset': {}, 'cur_horz_vert_posn': {}, 'cur_horz_vert_off': {}, 'cur_clr0': {}, 'cur_clr1': {}, 'fp_gen_cntl': {}, 'fp_horz_stretch': {}, 'fp_vert_stretch': {}, 'fp_h_sync_strt_wid': {}, 'fp_v_sync_strt_wid': {}, 'crtc2_h_total_disp': {}, 'crtc2_h_sync_strt_wid': {}, 'crtc2_v_total_disp': {}, 'crtc2_v_sync_strt_wid': {}, 'crtc2_vline_crnt_vline': {}, 'crtc2_crnt_frame': {}, 'crtc2_gui_trig_vline': {}, 'crtc2_offset': {}, 'crtc2_offset_cntl': {}, 'crtc2_pitch': {}, 'cur2_offset': {}, 'cur2_horz_vert_posn': {}, 'cur2_horz_vert_off': {}, 'cur2_clr0': {}, 'cur2_clr1': {}, 'crtc2_status': {}, 'disp_misc_cntl': {}, 'dac_macro_cntl': {}, 'disp_pwr_man': {}, 'disp_output_cntl': {}}
ENUMS = {}
FIELD_ENUM = {}
CONSTANTS = {}
TESTS = []


def decode(name, value):
    """Field name -> value for a register or word."""
    return {f: (value >> lo) & ((1 << (hi - lo + 1)) - 1) for f, (hi, lo) in FIELDS[name].items()}


def encode(name, **fields):
    v = 0
    for f, x in fields.items():
        hi, lo = FIELDS[name][f]
        if x >> (hi - lo + 1):
            raise ValueError('%s.%s: %d does not fit' % (name, f, x))
        v |= x << lo
    return v


def describe(name, value):
    """decode, with enum labels where the field has an enum."""
    out = {}
    for f, x in decode(name, value).items():
        e = ENUMS.get(FIELD_ENUM.get('%s.%s' % (name, f)))
        out[f] = e.get(x, x) if e else x
    return out


def selftest():
    for name, value, expect in TESTS:
        got = decode(name, value)
        for f, want in expect.items():
            assert got[f] == want, (name, hex(value), f, got[f], want)
    return len(TESTS)


if __name__ == '__main__':
    print('%s: %d vectors ok' % (UNIT, selftest()))
