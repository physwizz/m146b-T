/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2022 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_SC501_SET_A_H
#define IS_CIS_SC501_SET_A_H

#include "is-cis.h"
#include "is-cis-sc501.h"

/*
 * [Mode Information]
 *
 * Reference File : SC501CS_setting_Samsung_V1.1.6_제품용_2022.06.09.xlsx
 *
 *  - Global setting
 *
 *  - Mode setting
 *  [ 0 ] 2576 x 1932(4:3)        @30,  MIPI lane: 2, MIPI data rate(Mbps/lane):  897, Mclk(Mhz): 26
 *  [ 1 ] 2560 x 1440(16:9)       @30,  MIPI lane: 2, MIPI data rate(Mbps/lane):  897, Mclk(Mhz): 26
 *  [ 2 ] 2416 x 1660(Crop 4:3)   @30,  MIPI lane: 2, MIPI data rate(Mbps/lane):  897, Mclk(Mhz): 26
 *  [ 3 ] 1280 x 960(VT 4:3)      @30,  MIPI lane: 2, MIPI data rate(Mbps/lane):  448.5, Mclk(Mhz): 26
 *  [ 4 ] 1280 x 720(VT 16:9)     @30,  MIPI lane: 2, MIPI data rate(Mbps/lane):  448.5, Mclk(Mhz): 26
 *  [ 5 ] 1280 x 960(FASTAE)      @60,  MIPI lane: 2, MIPI data rate(Mbps/lane):  448.5, Mclk(Mhz): 26
 *
 */

const u32 sensor_sc501_setfile_A_Global[] = {
	0x0103, 0x01, 0x01,
	0x0100, 0x00, 0x01,
	0x36e9, 0x80, 0x01,
	0x37f9, 0x80, 0x01,
	0x3253, 0x10, 0x01,
	0x3301, 0x12, 0x01,
	0x3306, 0x38, 0x01,
	0x330b, 0xa8, 0x01,
	0x3333, 0x10, 0x01,
	0x3364, 0x56, 0x01,
	0x3390, 0x0b, 0x01,
	0x3391, 0x0f, 0x01,
	0x3392, 0x1f, 0x01,
	0x3393, 0x20, 0x01,
	0x3394, 0x40, 0x01,
	0x3395, 0x58, 0x01,
	0x33b3, 0x40, 0x01,
	0x349f, 0x1e, 0x01,
	0x34a6, 0x09, 0x01,
	0x34a7, 0x0f, 0x01,
	0x34a8, 0x38, 0x01,
	0x34a9, 0x28, 0x01,
	0x34f8, 0x1f, 0x01,
	0x34f9, 0x28, 0x01,
	0x3630, 0xa0, 0x01,
	0x3633, 0x43, 0x01,
	0x3637, 0x45, 0x01,
	0x363c, 0xc1, 0x01,
	0x3670, 0x4a, 0x01,
	0x3674, 0xc0, 0x01,
	0x3675, 0xa8, 0x01,
	0x3676, 0xac, 0x01,
	0x367c, 0x08, 0x01,
	0x367d, 0x0b, 0x01,
	0x3690, 0x53, 0x01,
	0x3691, 0x53, 0x01,
	0x3692, 0x63, 0x01,
	0x3698, 0x85, 0x01,
	0x3699, 0x8c, 0x01,
	0x369a, 0x9b, 0x01,
	0x369b, 0xb8, 0x01,
	0x369c, 0x0f, 0x01,
	0x369d, 0x1f, 0x01,
	0x36a2, 0x09, 0x01,
	0x36a3, 0x0b, 0x01,
	0x36a4, 0x0f, 0x01,
	0x36b0, 0x4c, 0x01,
	0x36b1, 0xd8, 0x01,
	0x36b2, 0x01, 0x01,
	0x3722, 0x03, 0x01,
	0x3724, 0xa1, 0x01,
	0x3903, 0xa0, 0x01,
	0x3905, 0x4c, 0x01,
	0x391d, 0x04, 0x01,
	0x3926, 0x21, 0x01,
	0x393f, 0x80, 0x01,
	0x3940, 0x80, 0x01,
	0x3941, 0x00, 0x01,
	0x3942, 0x7f, 0x01,
	0x3943, 0x7f, 0x01,
	0x4402, 0x02, 0x01,
	0x4403, 0x0a, 0x01,
	0x4404, 0x1c, 0x01,
	0x4405, 0x24, 0x01,
	0x440c, 0x2e, 0x01,
	0x440d, 0x2e, 0x01,
	0x440e, 0x22, 0x01,
	0x440f, 0x39, 0x01,
	0x4424, 0x01, 0x01,
	0x4509, 0x30, 0x01,
	0x450d, 0x18, 0x01,
	0x5787, 0x08, 0x01,
	0x5788, 0x07, 0x01,
	0x5789, 0x02, 0x01,
	0x5799, 0x46, 0x01,
	0x579a, 0x77, 0x01,
	0x57d9, 0x00, 0x01,
	0x5ae0, 0xfe, 0x01,
	0x5ae1, 0x40, 0x01,
	0x5ae2, 0x38, 0x01,
	0x5ae3, 0x30, 0x01,
	0x5ae4, 0x0c, 0x01,
	0x5ae5, 0x38, 0x01,
	0x5ae6, 0x30, 0x01,
	0x5ae7, 0x28, 0x01,
	0x5ae8, 0x3f, 0x01,
	0x5ae9, 0x34, 0x01,
	0x5aea, 0x2c, 0x01,
	0x5aeb, 0x3f, 0x01,
	0x5aec, 0x34, 0x01,
	0x5aed, 0x2c, 0x01,
	0x5aee, 0xfe, 0x01,
	0x5aef, 0x40, 0x01,
	0x5af0, 0x00, 0x01,
	0x5af4, 0x38, 0x01,
	0x5af5, 0x30, 0x01,
	0x5af6, 0x28, 0x01,
	0x5af7, 0x38, 0x01,
	0x5af8, 0x30, 0x01,
	0x5af9, 0x28, 0x01,
	0x5afa, 0x3f, 0x01,
	0x5afb, 0x34, 0x01,
	0x5afc, 0x2c, 0x01,
	0x5afd, 0x3f, 0x01,
	0x5afe, 0x34, 0x01,
	0x5aff, 0x2c, 0x01,
};

const u32 sensor_sc501_setfile_A_2576x1932_30fps[] = {
	0x36ea, 0x17, 0x01,
	0x36eb, 0x0c, 0x01,
	0x36ec, 0x4a, 0x01,
	0x36ed, 0x08, 0x01,
	0x37fa, 0x17, 0x01,
	0x37fb, 0x64, 0x01,
	0x37fc, 0x10, 0x01,
	0x37fd, 0x08, 0x01,
	0x36e9, 0x57, 0x01,
	0x37f9, 0x57, 0x01,
	0x301f, 0x08, 0x01,
	0x3200, 0x00, 0x01,
	0x3201, 0x00, 0x01,
	0x3202, 0x00, 0x01,
	0x3203, 0x06, 0x01,
	0x3204, 0x0a, 0x01,
	0x3205, 0x27, 0x01,
	0x3206, 0x07, 0x01,
	0x3207, 0xa1, 0x01,
	0x3208, 0x0a, 0x01,
	0x3209, 0x10, 0x01,
	0x320a, 0x07, 0x01,
	0x320b, 0x8c, 0x01,
	0x320c, 0x05, 0x01,
	0x320d, 0xd7, 0x01,
	0x320e, 0x07, 0x01,
	0x320f, 0xd0, 0x01,
	0x3210, 0x00, 0x01,
	0x3211, 0x0c, 0x01,
	0x3212, 0x00, 0x01,
	0x3213, 0x04, 0x01,
	0x3215, 0x11, 0x01,
	0x3220, 0x80, 0x01,
	0x3221, 0x66, 0x01,
	0x3222, 0x00, 0x01,
	0x3230, 0x00, 0x01,
	0x3231, 0x04, 0x01,
	0x3908, 0x40, 0x01,
	0x3021, 0x07, 0x01,
	0x3e00, 0x00, 0x01,
	0x3e01, 0xf9, 0x01,
	0x3e02, 0x60, 0x01,
	0x3e09, 0x00, 0x01,
	0x3e06, 0x00, 0x01,
	0x3e07, 0x80, 0x01,
	0x4819, 0xe, 0x01,
	0x481b, 0x08, 0x01,
	0x481d, 0x1e, 0x01,
	0x481f, 0x06, 0x01,
	0x4821, 0xe, 0x01,
	0x4823, 0x07, 0x01,
	0x4825, 0x06, 0x01,
	0x4827, 0x07, 0x01,
	0x4829, 0xc, 0x01,
	0x5000, 0x00, 0x01,
	0x5780, 0x66, 0x01,
	0x5900, 0x01, 0x01,
	0x5901, 0x00, 0x01,
};

const u32 sensor_sc501_setfile_A_2560x1440_30fps[] = {
	0x36ea, 0x17, 0x01,
	0x36eb, 0x0c, 0x01,
	0x36ec, 0x4a, 0x01,
	0x36ed, 0x08, 0x01,
	0x37fa, 0x17, 0x01,
	0x37fb, 0x64, 0x01,
	0x37fc, 0x10, 0x01,
	0x37fd, 0x08, 0x01,
	0x36e9, 0x57, 0x01,
	0x37f9, 0x57, 0x01,
	0x301f, 0x0a, 0x01,
	0x3200, 0x00, 0x01,
	0x3201, 0x00, 0x01,
	0x3202, 0x00, 0x01,
	0x3203, 0xfc, 0x01,
	0x3204, 0x0a, 0x01,
	0x3205, 0x27, 0x01,
	0x3206, 0x06, 0x01,
	0x3207, 0xab, 0x01,
	0x3208, 0x0a, 0x01,
	0x3209, 0x00, 0x01,
	0x320a, 0x05, 0x01,
	0x320b, 0xa0, 0x01,
	0x320c, 0x05, 0x01,
	0x320d, 0xd7, 0x01,
	0x320e, 0x07, 0x01,
	0x320f, 0xd0, 0x01,
	0x3210, 0x00, 0x01,
	0x3211, 0x14, 0x01,
	0x3212, 0x00, 0x01,
	0x3213, 0x04, 0x01,
	0x3215, 0x11, 0x01,
	0x3220, 0x80, 0x01,
	0x3221, 0x66, 0x01,
	0x3222, 0x00, 0x01,
	0x3230, 0x00, 0x01,
	0x3231, 0x04, 0x01,
	0x3908, 0x40, 0x01,
	0x3021, 0x07, 0x01,
	0x3e00, 0x00, 0x01,
	0x3e01, 0xf9, 0x01,
	0x3e02, 0x60, 0x01,
	0x3e09, 0x00, 0x01,
	0x3e06, 0x00, 0x01,
	0x3e07, 0x80, 0x01,
	0x4819, 0xe, 0x01,
	0x481b, 0x08, 0x01,
	0x481d, 0x1e, 0x01,
	0x481f, 0x06, 0x01,
	0x4821, 0xe, 0x01,
	0x4823, 0x07, 0x01,
	0x4825, 0x06, 0x01,
	0x4827, 0x07, 0x01,
	0x4829, 0xc, 0x01,
	0x5000, 0x00, 0x01,
	0x5780, 0x66, 0x01,
	0x5900, 0x01, 0x01,
	0x5901, 0x00, 0x01,
};

const u32 sensor_sc501_setfile_A_2416x1660_30fps[] = {
	0x36ea, 0x17, 0x01,
	0x36eb, 0x0c, 0x01,
	0x36ec, 0x4a, 0x01,
	0x36ed, 0x08, 0x01,
	0x37fa, 0x17, 0x01,
	0x37fb, 0x64, 0x01,
	0x37fc, 0x10, 0x01,
	0x37fd, 0x08, 0x01,
	0x36e9, 0x57, 0x01,
	0x37f9, 0x57, 0x01,
	0x301f, 0x0b, 0x01,
	0x3200, 0x00, 0x01,
	0x3201, 0x00, 0x01,
	0x3202, 0x00, 0x01,
	0x3203, 0x8e, 0x01,
	0x3204, 0x0a, 0x01,
	0x3205, 0x27, 0x01,
	0x3206, 0x07, 0x01,
	0x3207, 0x19, 0x01,
	0x3208, 0x09, 0x01,
	0x3209, 0x70, 0x01,
	0x320a, 0x06, 0x01,
	0x320b, 0x7c, 0x01,
	0x320c, 0x05, 0x01,
	0x320d, 0xd7, 0x01,
	0x320e, 0x07, 0x01,
	0x320f, 0xd0, 0x01,
	0x3210, 0x00, 0x01,
	0x3211, 0x5c, 0x01,
	0x3212, 0x00, 0x01,
	0x3213, 0x04, 0x01,
	0x3215, 0x11, 0x01,
	0x3220, 0x80, 0x01,
	0x3221, 0x66, 0x01,
	0x3222, 0x00, 0x01,
	0x3230, 0x00, 0x01,
	0x3231, 0x04, 0x01,
	0x3908, 0x40, 0x01,
	0x3021, 0x07, 0x01,
	0x3e00, 0x00, 0x01,
	0x3e01, 0xf9, 0x01,
	0x3e02, 0x60, 0x01,
	0x3e09, 0x00, 0x01,
	0x3e06, 0x00, 0x01,
	0x3e07, 0x80, 0x01,
	0x4819, 0xe, 0x01,
	0x481b, 0x08, 0x01,
	0x481d, 0x1e, 0x01,
	0x481f, 0x06, 0x01,
	0x4821, 0xe, 0x01,
	0x4823, 0x07, 0x01,
	0x4825, 0x06, 0x01,
	0x4827, 0x07, 0x01,
	0x4829, 0xc, 0x01,
	0x5000, 0x00, 0x01,
	0x5780, 0x66, 0x01,
	0x5900, 0x01, 0x01,
	0x5901, 0x00, 0x01,
};

const u32 sensor_sc501_setfile_A_1280x960_30fps[] = {
	0x36ea, 0x17, 0x01,
	0x36eb, 0x0c, 0x01,
	0x36ec, 0x5a, 0x01,
	0x36ed, 0x08, 0x01,
	0x37fa, 0x17, 0x01,
	0x37fb, 0x64, 0x01,
	0x37fc, 0x10, 0x01,
	0x37fd, 0x08, 0x01,
	0x36e9, 0x57, 0x01,
	0x37f9, 0x57, 0x01,
	0x301f, 0x09, 0x01,
	0x3200, 0x00, 0x01,
	0x3201, 0x00, 0x01,
	0x3202, 0x00, 0x01,
	0x3203, 0x0c, 0x01,
	0x3204, 0x0a, 0x01,
	0x3205, 0x27, 0x01,
	0x3206, 0x07, 0x01,
	0x3207, 0x9b, 0x01,
	0x3208, 0x05, 0x01,
	0x3209, 0x00, 0x01,
	0x320a, 0x03, 0x01,
	0x320b, 0xc0, 0x01,
	0x320c, 0x05, 0x01,
	0x320d, 0xb1, 0x01,
	0x320e, 0x08, 0x01,
	0x320f, 0x04, 0x01,
	0x3210, 0x00, 0x01,
	0x3211, 0x06, 0x01,
	0x3212, 0x00, 0x01,
	0x3213, 0x04, 0x01,
	0x3215, 0x31, 0x01,
	0x3220, 0x81, 0x01,
	0x3221, 0x66, 0x01,
	0x3222, 0x00, 0x01,
	0x3230, 0x00, 0x01,
	0x3231, 0x04, 0x01,
	0x3908, 0x40, 0x01,
	0x3021, 0x07, 0x01,
	0x3e00, 0x00, 0x01,
	0x3e01, 0x7f, 0x01,
	0x3e02, 0xf0, 0x01,
	0x3e09, 0x00, 0x01,
	0x3e06, 0x00, 0x01,
	0x3e07, 0x80, 0x01,
	0x4819, 0x07, 0x01,
	0x481b, 0x04, 0x01,
	0x481d, 0x0f, 0x01,
	0x481f, 0x03, 0x01,
	0x4821, 0x09, 0x01,
	0x4823, 0x04, 0x01,
	0x4825, 0x03, 0x01,
	0x4827, 0x04, 0x01,
	0x4829, 0x06, 0x01,
	0x5000, 0x40, 0x01,
	0x5780, 0x66, 0x01,
	0x5900, 0x01, 0x01,
	0x5901, 0x04, 0x01,
};

const u32 sensor_sc501_setfile_A_1280x720_30fps[] = {
	0x36ea, 0x17, 0x01,
	0x36eb, 0x0c, 0x01,
	0x36ec, 0x5a, 0x01,
	0x36ed, 0x08, 0x01,
	0x37fa, 0x17, 0x01,
	0x37fb, 0x64, 0x01,
	0x37fc, 0x10, 0x01,
	0x37fd, 0x08, 0x01,
	0x36e9, 0x57, 0x01,
	0x37f9, 0x57, 0x01,
	0x301f, 0x10, 0x01,
	0x3200, 0x00, 0x01,
	0x3201, 0x00, 0x01,
	0x3202, 0x00, 0x01,
	0x3203, 0xfc, 0x01,
	0x3204, 0x0a, 0x01,
	0x3205, 0x27, 0x01,
	0x3206, 0x06, 0x01,
	0x3207, 0xab, 0x01,
	0x3208, 0x05, 0x01,
	0x3209, 0x00, 0x01,
	0x320a, 0x02, 0x01,
	0x320b, 0xd0, 0x01,
	0x320c, 0x05, 0x01,
	0x320d, 0xd7, 0x01,
	0x320e, 0x07, 0x01,
	0x320f, 0xd0, 0x01,
	0x3210, 0x00, 0x01,
	0x3211, 0x0a, 0x01,
	0x3212, 0x00, 0x01,
	0x3213, 0x02, 0x01,
	0x3215, 0x31, 0x01,
	0x3220, 0x81, 0x01,
	0x3221, 0x66, 0x01,
	0x3222, 0x00, 0x01,
	0x3230, 0x00, 0x01,
	0x3231, 0x04, 0x01,
	0x3908, 0x40, 0x01,
	0x3021, 0x07, 0x01,
	0x3e00, 0x00, 0x01,
	0x3e01, 0x7c, 0x01,
	0x3e02, 0x70, 0x01,
	0x3e09, 0x00, 0x01,
	0x3e06, 0x00, 0x01,
	0x3e07, 0x80, 0x01,
	0x4819, 0x07, 0x01,
	0x481b, 0x04, 0x01,
	0x481d, 0x0f, 0x01,
	0x481f, 0x03, 0x01,
	0x4821, 0x09, 0x01,
	0x4823, 0x04, 0x01,
	0x4825, 0x03, 0x01,
	0x4827, 0x04, 0x01,
	0x4829, 0x06, 0x01,
	0x5000, 0x40, 0x01,
	0x5780, 0x66, 0x01,
	0x5900, 0x01, 0x01,
	0x5901, 0x04, 0x01,
};

const u32 sensor_sc501_setfile_A_1280x960_60fps[] = {
	0x36ea, 0x17, 0x01,
	0x36eb, 0x0c, 0x01,
	0x36ec, 0x5a, 0x01,
	0x36ed, 0x08, 0x01,
	0x37fa, 0x17, 0x01,
	0x37fb, 0x64, 0x01,
	0x37fc, 0x10, 0x01,
	0x37fd, 0x08, 0x01,
	0x36e9, 0x57, 0x01,
	0x37f9, 0x57, 0x01,
	0x301f, 0x09, 0x01,
	0x3200, 0x00, 0x01,
	0x3201, 0x00, 0x01,
	0x3202, 0x00, 0x01,
	0x3203, 0x0c, 0x01,
	0x3204, 0x0a, 0x01,
	0x3205, 0x27, 0x01,
	0x3206, 0x07, 0x01,
	0x3207, 0x9b, 0x01,
	0x3208, 0x05, 0x01,
	0x3209, 0x00, 0x01,
	0x320a, 0x03, 0x01,
	0x320b, 0xc0, 0x01,
	0x320c, 0x05, 0x01,
	0x320d, 0xb1, 0x01,
	0x320e, 0x04, 0x01,
	0x320f, 0x02, 0x01,
	0x3210, 0x00, 0x01,
	0x3211, 0x06, 0x01,
	0x3212, 0x00, 0x01,
	0x3213, 0x04, 0x01,
	0x3215, 0x31, 0x01,
	0x3220, 0x81, 0x01,
	0x3221, 0x66, 0x01,
	0x3222, 0x00, 0x01,
	0x3230, 0x00, 0x01,
	0x3231, 0x04, 0x01,
	0x3908, 0x40, 0x01,
	0x3021, 0x07, 0x01,
	0x3e00, 0x00, 0x01,
	0x3e01, 0x7f, 0x01,
	0x3e02, 0xf0, 0x01,
	0x3e09, 0x00, 0x01,
	0x3e06, 0x00, 0x01,
	0x3e07, 0x80, 0x01,
	0x4819, 0x07, 0x01,
	0x481b, 0x04, 0x01,
	0x481d, 0x0f, 0x01,
	0x481f, 0x03, 0x01,
	0x4821, 0x09, 0x01,
	0x4823, 0x04, 0x01,
	0x4825, 0x03, 0x01,
	0x4827, 0x04, 0x01,
	0x4829, 0x06, 0x01,
	0x5000, 0x40, 0x01,
	0x5780, 0x66, 0x01,
	0x5900, 0x01, 0x01,
	0x5901, 0x04, 0x01,
};

const u32 sensor_sc501_setfile_A_Fsync_Slave[] = {
	0x3222, 0x01, 0x01,
	0x3230, 0x00, 0x01,
	0x3231, 0x04, 0x01,
};

const u32 sensor_sc501_setfile_A_Fsync_Master[] = {
	0x3222, 0x00, 0x01,
	0x3230, 0x00, 0x01,
	0x3231, 0x04, 0x01,
};

const struct sensor_pll_info_compact sensor_sc501_pllinfo_A_2576x1932_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,    /* ext_clk */
	897 * 1000 * 1000,            /* mipi_datarate = OPSYCK */
	897 * 100 * 1000,             /* pclk = VTPXCK*/
	2000,                         /* frame_length_lines */
	1495,                         /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_sc501_pllinfo_A_2560x1440_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,    /* ext_clk */
	897 * 1000 * 1000,            /* mipi_datarate = OPSYCK */
	897 * 100 * 1000,             /* pclk = VTPXCK*/
	2000,                         /* frame_length_lines */
	1495,                         /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_sc501_pllinfo_A_2416x1660_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,    /* ext_clk */
	897 * 1000 * 1000,            /* mipi_datarate = OPSYCK */
	897 * 100 * 1000,             /* pclk = VTPXCK*/
	2000,                         /* frame_length_lines */
	1495,                         /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_sc501_pllinfo_A_1280x960_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,    /* ext_clk */
	4485 * 100 * 1000,            /* mipi_datarate = OPSYCK */
	897 * 100 * 1000,             /* pclk = VTPXCK*/
	2052,                         /* frame_length_lines */
	1457,                         /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_sc501_pllinfo_A_1280x720_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,    /* ext_clk */
	4485 * 100 * 1000,            /* mipi_datarate = OPSYCK */
	897 * 100 * 1000,             /* pclk = VTPXCK*/
	2000,                         /* frame_length_lines */
	1495,                         /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_sc501_pllinfo_A_1280x960_60fps = {
	EXT_CLK_Mhz * 1000 * 1000,    /* ext_clk */
	4485 * 100 * 1000,            /* mipi_datarate = OPSYCK */
	897 * 100 * 1000,             /* pclk = VTPXCK*/
	1026,                         /* frame_length_lines */
	1495,                         /* line_length_pck */
};

static const u32 *sensor_sc501_setfiles_A[] = {
	sensor_sc501_setfile_A_2576x1932_30fps,
	sensor_sc501_setfile_A_2560x1440_30fps,
	sensor_sc501_setfile_A_2416x1660_30fps,
	sensor_sc501_setfile_A_1280x960_30fps,
	sensor_sc501_setfile_A_1280x720_30fps,
	sensor_sc501_setfile_A_1280x960_60fps,
};

static const u32 sensor_sc501_setfile_A_sizes[] = {
	sizeof(sensor_sc501_setfile_A_2576x1932_30fps) / sizeof(sensor_sc501_setfile_A_2576x1932_30fps[0]),
	sizeof(sensor_sc501_setfile_A_2560x1440_30fps) / sizeof(sensor_sc501_setfile_A_2560x1440_30fps[0]),
	sizeof(sensor_sc501_setfile_A_2416x1660_30fps) / sizeof(sensor_sc501_setfile_A_2416x1660_30fps[0]),
	sizeof(sensor_sc501_setfile_A_1280x960_30fps) / sizeof(sensor_sc501_setfile_A_1280x960_30fps[0]),
	sizeof(sensor_sc501_setfile_A_1280x720_30fps) / sizeof(sensor_sc501_setfile_A_1280x720_30fps[0]),
	sizeof(sensor_sc501_setfile_A_1280x960_60fps) / sizeof(sensor_sc501_setfile_A_1280x960_60fps[0]),
};

static const struct sensor_pll_info_compact *sensor_sc501_pllinfos_A[] = {
	&sensor_sc501_pllinfo_A_2576x1932_30fps,
	&sensor_sc501_pllinfo_A_2560x1440_30fps,
	&sensor_sc501_pllinfo_A_2416x1660_30fps,
	&sensor_sc501_pllinfo_A_1280x960_30fps,
	&sensor_sc501_pllinfo_A_1280x720_30fps,
	&sensor_sc501_pllinfo_A_1280x960_60fps,
};

#endif  /* IS_CIS_SC501_SET_A_H */
