"""generated from devices/cp/registers.toml by defs-gen - do not edit, change the source
SPDX-License-Identifier: BSD-3-Clause
defs-gen 2
input sha256 292f6629f6377b5166461499fbd6206ddb0589ceeaf9ddb855fae73fe3716ed5
command processor registers of the R3xx-class FireGL boards"""

UNIT = 'cp'
REGISTERS = {'rb_rptr_wr': {'offset': 1820, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'gui_src_addr': {'offset': 1824, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'gui_dst_addr': {'offset': 1828, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'gui_command': {'offset': 1832, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'ib2_base': {'offset': 1840, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'ib2_bufsz': {'offset': 1844, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'ib_base': {'offset': 1848, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'ib_bufsz': {'offset': 1852, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'csq_mode': {'offset': 1860, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'resync_addr': {'offset': 1912, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'resync_data': {'offset': 1916, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'csq_avail': {'offset': 1976, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'vid_src_addr': {'offset': 1988, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'vid_dst_addr': {'offset': 1992, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'vid_command': {'offset': 1996, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'me_ram_raddr': {'offset': 2008, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'vp_addr_cntl': {'offset': 2024, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'csq_addr': {'offset': 2032, 'access': 'w', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'csq_data': {'offset': 2036, 'access': 'r', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'csq_stat': {'offset': 2040, 'access': 'r', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'csq2_stat': {'offset': 2044, 'access': 'r', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'csq_aper_primary': {'offset': 4096, 'access': 'rw', 'width': 32, 'count': 128, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'csq_aper_indirect2': {'offset': 4608, 'access': 'rw', 'width': 32, 'count': 64, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'csq_aper_indirect': {'offset': 4864, 'access': 'rw', 'width': 32, 'count': 64, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}}
WORDS = {}
FIELDS = {'rb_rptr_wr': {'rb_rptr_wr': (22, 0)}, 'gui_src_addr': {'cp_gui_src_addr': (31, 0)}, 'gui_dst_addr': {'cp_gui_dst_addr': (31, 0)}, 'gui_command': {'cp_gui_command': (31, 0)}, 'ib2_base': {'ib2_base': (31, 2)}, 'ib2_bufsz': {'ib2_bufsz': (22, 0)}, 'ib_base': {'ib_base': (31, 2)}, 'ib_bufsz': {'ib_bufsz': (22, 0)}, 'csq_mode': {'csq_primary_enable': (31, 31), 'csq_primary_mode': (30, 30), 'csq_indirect1_enable': (29, 29), 'csq_indirect1_mode': (28, 28), 'csq_indirect2_enable': (27, 27), 'csq_indirect2_mode': (26, 26), 'indirect1_start': (14, 8), 'indirect2_start': (6, 0)}, 'resync_addr': {'resync_addr': (2, 0)}, 'resync_data': {'resync_data': (31, 0)}, 'csq_avail': {'csq_cnt_indirect2': (29, 20), 'csq_cnt_indirect': (19, 10), 'csq_cnt_primary': (9, 0)}, 'vid_src_addr': {'cp_vid_src_addr': (31, 0)}, 'vid_dst_addr': {'cp_vid_dst_addr': (31, 0)}, 'vid_command': {'cp_vid_command': (31, 0)}, 'me_ram_raddr': {'me_ram_raddr': (7, 0)}, 'vp_addr_cntl': {'ring_vp_fetch': (9, 9), 'indr1_vp_fetch': (8, 8), 'indr2_vp_fetch': (7, 7), 'guidma_vp_rd': (6, 6), 'guidma_vp_wr': (5, 5), 'viddma_vp_rd': (4, 4), 'viddma_vp_wr': (3, 3), 'rptr_vp_update': (2, 2), 'scratch_vp_wr': (1, 1), 'scratch_alt_vp_wr': (0, 0)}, 'csq_addr': {'csq_addr': (11, 2)}, 'csq_data': {'csq_data': (31, 0)}, 'csq_stat': {'csq_rptr_indirect': (29, 20), 'csq_wptr_primary': (19, 10), 'csq_rptr_primary': (9, 0)}, 'csq2_stat': {'csq_wptr_indirect2': (29, 20), 'csq_rptr_indirect2': (19, 10), 'csq_wptr_indirect': (9, 0)}, 'csq_aper_primary': {'cp_csq_aper_primary': (31, 0)}, 'csq_aper_indirect2': {'cp_csq_aper_indirect2': (31, 0)}, 'csq_aper_indirect': {'cp_csq_aper_indirect': (31, 0)}}
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
