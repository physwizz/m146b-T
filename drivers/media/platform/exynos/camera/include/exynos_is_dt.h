/*
 * Samsung Exynos SoC series Pablo driver
 *
 *
 * Copyright (c) 2019 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _DT_BINDINGS_CAMERA_PABLO_IS_H
#define _DT_BINDINGS_CAMERA_PABLO_IS_H

#define F1_0	100
#define F1_4	140
#define F1_5	150
#define F1_7	170
#define F1_8	180
#define F1_9	190
#define F2_0	200
#define F2_1	210
#define F2_2	220
#define F2_4	240
#define F2_45	245
#define F2_6	260
#define F2_7	270
#define F2_8	280
#define F4_0	400
#define F5_6	560
#define F8_0	800
#define F11_0	1100
#define F16_0	1600
#define F22_0	2200
#define F32_0	3200

#define FLITE_ID_NOTHING	100

#define GPIO_SCENARIO_ON			0
#define GPIO_SCENARIO_OFF			1
#define GPIO_SCENARIO_STANDBY_ON		2
#define GPIO_SCENARIO_STANDBY_OFF		3
#define GPIO_SCENARIO_STANDBY_OFF_SENSOR	4
#define GPIO_SCENARIO_STANDBY_OFF_PREPROCESSOR	5
#define GPIO_SCENARIO_SENSOR_RETENTION_ON	6
#define GPIO_SCENARIO_MAX			7
#define GPIO_CTRL_MAX				32

#define SENSOR_SCENARIO_NORMAL		0
#define SENSOR_SCENARIO_VISION		1
#define SENSOR_SCENARIO_EXTERNAL	2
#define SENSOR_SCENARIO_OIS_FACTORY	3
#define SENSOR_SCENARIO_READ_ROM	4
#define SENSOR_SCENARIO_STANDBY	5
#define SENSOR_SCENARIO_SECURE		6
#define SENSOR_SCENARIO_HW_INIT		7
#define SENSOR_SCENARIO_G_ACTIVE_CAMERA	7 /* TODO: sync */
#define SENSOR_SCENARIO_ADDITIONAL_POWER	8
#define SENSOR_SCENARIO_VIRTUAL	9
#define SENSOR_SCENARIO_MATCH_SEQ	10
#define SENSOR_SCENARIO_MAX		11

#define PIN_NONE	0
#define PIN_OUTPUT	1
#define PIN_INPUT	2
#define PIN_RESET	3
#define PIN_FUNCTION	4
#define PIN_REGULATOR	5
#define PIN_I2C		6
#define PIN_MCLK	7
#define PIN_REGULATOR_OPTION	8

#define MATCH_ENTRY_MAX	3
#define MATCH_GROUP_MAX	5

#define SHARED_PIN0	0
#define SHARED_PIN1	1
#define SHARED_PIN2	2
#define SHARED_PIN3	3
#define SHARED_PIN4	4
#define SHARED_PIN5	5
#define SHARED_PIN6	6
#define SHARED_PIN7	7
#define SHARED_PIN8	8
#define SHARED_PIN9	9
#define SHARED_PIN10	10
#define SHARED_PIN11	11
#define SHARED_PIN12	12
#define SHARED_PIN13	13
#define SHARED_PIN14	14
#define MAX_SENSOR_SHARED_RSC	15

#define SRT_ACQUIRE	1
#define SRT_RELEASE	2

#define DT_SET_PIN(p, n, a, v, t) \
			seq@__LINE__ { \
				pin = #p; \
				pname = #n; \
				act = <a>; \
				value = <v>; \
				delay = <t>; \
				voltage = <0>; \
			}

#define DT_SET_PIN_VOLTAGE(p, n, a, v, t, e) \
			seq@__LINE__ { \
				pin = #p; \
				pname = #n; \
				act = <a>; \
				value = <v>; \
				delay = <t>; \
				voltage = <e>; \
			}


#define VC_NOTHING		0
#define VC_TAILPDAF		1
#define VC_MIPISTAT		2
#define VC_EMBEDDED		3
#define VC_PRIVATE		4
#define VC_EMBEDDED2		5
#define VC_FRO			6
#define VC_VPDAF		7

#define SP_REAR		0
#define SP_FRONT	1
#define SP_REAR2	2
#define SP_FRONT2	3
#define SP_REAR3	4
#define SP_FRONT3	5
#define SP_REAR4	6
#define SP_FRONT4	7
#define SP_REAR_TOF	8
#define SP_FRONT_TOF	9
#define SP_SECURE	100
#define SP_VIRTUAL	101

/* CSIS number fo lane */
#define CSI_DATA_LANES_1	0
#define CSI_DATA_LANES_2	1
#define CSI_DATA_LANES_3	2
#define CSI_DATA_LANES_4	3
#define CSI_DATA_LANES_MAX	4

/* CSIS Interleave Mode */
#define CSI_MODE_CH0_ONLY	0
#define CSI_MODE_DT_ONLY	1
#define CSI_MODE_VC_ONLY	2
#define CSI_MODE_VC_DT		3

/* CSIS Data Type */
#define POTF_EN_BIT		(9)
#define POTF_EN(x)		((x) | 1 << POTF_EN_BIT)
#define CHECK_POTF_EN(x)	(((x) >> POTF_EN_BIT) & 1)
#define SDC_EN_BIT		(8)
#define SDC_EN(x)		((x) | 1 << SDC_EN_BIT)
#define CHECK_SDC_EN(x)		(((x) >> SDC_EN_BIT) & 1)
#define DECOMP_PREDICT_BIT	(7)
#define DECOMP_EN_BIT		(6)
#define DECOMP_SIMPLE(x)	((x) | 1 << DECOMP_EN_BIT | 0 << DECOMP_PREDICT_BIT)
#define DECOMP_ADVANC(x)	((x) | 1 << DECOMP_EN_BIT | 1 << DECOMP_PREDICT_BIT)
#define HW_FORMAT_EMBEDDED_8BIT	0x12
#define HW_FORMAT_YUV420_8BIT	0x18
#define HW_FORMAT_YUV420_10BIT	0x19
#define HW_FORMAT_YUV422_8BIT	0x1E
#define HW_FORMAT_YUV422_10BIT	0x1F
#define HW_FORMAT_RGB565	0x22
#define HW_FORMAT_RGB666	0x23
#define HW_FORMAT_RGB888	0x24
#define HW_FORMAT_RAW6		0x28
#define HW_FORMAT_RAW6_DA	DECOMP_ADVANC(HW_FORMAT_RAW6) /* 6 -> 10 */
#define HW_FORMAT_RAW7		0x29
#define HW_FORMAT_RAW7_DS	DECOMP_SIMPLE(HW_FORMAT_RAW7) /* 7 -> 10 */
#define HW_FORMAT_RAW8		0x2A
#define HW_FORMAT_RAW8_SDC	SDC_EN(HW_FORMAT_RAW8)
#define HW_FORMAT_RAW8_DS	DECOMP_SIMPLE(HW_FORMAT_RAW8) /* 8 -> 10 */
#define HW_FORMAT_RAW8_POTF	POTF_EN(HW_FORMAT_RAW8)
#define HW_FORMAT_RAW10		0x2B
#define HW_FORMAT_RAW10_DA	DECOMP_ADVANC(HW_FORMAT_RAW10) /* 10 -> 14 */
#define HW_FORMAT_RAW10_SDC	SDC_EN(HW_FORMAT_RAW10) /* = SBI */
#define HW_FORMAT_RAW10_POTF	POTF_EN(HW_FORMAT_RAW10)
#define HW_FORMAT_RAW12		0x2C
#define HW_FORMAT_RAW12_POTF	POTF_EN(HW_FORMAT_RAW12)
#define HW_FORMAT_RAW14		0x2D
#define HW_FORMAT_RAW14_POTF	POTF_EN(HW_FORMAT_RAW14)
#define HW_FORMAT_USER		0x30
#define HW_FORMAT_USER1		0x31
#define HW_FORMAT_USER2		0x32
#define HW_FORMAT_AND10		0x3A /* Android 10 format */
#define HW_FORMAT_UNKNOWN	0x0

#define HW_FORMAT_MASK		0x3F
#define HW_EXT_FORMAT_MASK	0x3FF

/* PHY setting param */
#define IDX_FIX_VAL	0
#define IDX_STL_VAL	1 /* settle_val */
#define IDX_STL_CLK	2 /* settle_clk_sel */
#define IDX_SKW_CAL	3 /* skew_cal_en */
#define IDX_SKW_DLY	4 /* skew_delay_sel */
#define IDX_BIA_VAL	5 /* bias */
#define IDX_CLK_VAL	6 /* clock lane */
#define IDX_MAX_VAL	7

/* PD MODE */
#define PD_MSPD			0
#define PD_MOD1			1
#define PD_MOD2			2
#define PD_MOD3			3
#define PD_MSPD_TAIL		4
#define PD_NONE			5

/* EXTEND_SENSOR_MODE: refer to EXTEND_SENSOR_MODE on HAL side */
#define	EX_NONE			0
#define	EX_DRAMTEST		1
#define	EX_LIVEFOCUS		2
#define	EX_DUALFPS_960		3
#define	EX_DUALFPS_480		4
#define	EX_PDAF_OFF		5
#define	EX_3DHDR		6
#define	EX_PDSTAT_OFF		7
#define	EX_AEB			8
#define	EX_SEAMLESS_TETRA	9
#define	EX_CROP_ZOOM		10
#define	EX_REMOSAIC_CAL		11
#define	EX_LOW_RES_TETRA	12
#define	EX_NIGHT		13
#define	EX_AI_REMOSAIC		14

#define	EX_EXTRA_NONE		0
#define EX_EXTRA_VIDEO		1

#define EX_FORMAT_NONE		0
#define EX_FORMAT_12BIT		1

/* LRTE */
#define LRTE_DISABLE		0
#define LRTE_ENABLE		1

/* sensor_retention_state */
#define SENSOR_RETENTION_UNSUPPORTED	0
#define SENSOR_RETENTION_INACTIVE	1
#define SENSOR_RETENTION_ACTIVATED	2

/* sensor_module_tyoe */
#define SENSOR_TYPE_RGB		0
#define SENSOR_TYPE_MONO		1

/* Sensor ID */
#define SENSOR_NAME_NOTHING		0
/* 1~100: SAMSUNG sensors */
#define SENSOR_NAME_S5K3H2		1
#define SENSOR_NAME_S5K6A3		2
#define SENSOR_NAME_S5K3H5		3
#define SENSOR_NAME_S5K3H7		4
#define SENSOR_NAME_S5K3H7_SUNNY	5
#define SENSOR_NAME_S5K3H7_SUNNY_2M	6
#define SENSOR_NAME_S5K6B2		7
#define SENSOR_NAME_S5K3L2		8
#define SENSOR_NAME_S5K4E5		9
#define SENSOR_NAME_S5K2P2		10
#define SENSOR_NAME_S5K8B1		11
#define SENSOR_NAME_S5K1P2		12
#define SENSOR_NAME_S5K4H5		13
#define SENSOR_NAME_S5K3M2		14
#define SENSOR_NAME_S5K2P2_12M		15
#define SENSOR_NAME_S5K6D1		16
#define SENSOR_NAME_S5K5E3		17
#define SENSOR_NAME_S5K2T2		18
#define SENSOR_NAME_S5K2P3		19
#define SENSOR_NAME_S5K2P8		20
#define SENSOR_NAME_S5K4E6		21
#define SENSOR_NAME_S5K5E2		22
#define SENSOR_NAME_S5K3P3		23
#define SENSOR_NAME_S5K4H5YC		24
#define SENSOR_NAME_S5K3L8_MASTER	25
#define SENSOR_NAME_S5K3L8_SLAVE	26
#define SENSOR_NAME_S5K4H8		27
#define SENSOR_NAME_S5K2X8		28
#define SENSOR_NAME_S5K2L1		29
#define SENSOR_NAME_S5K3P8		30
#define SENSOR_NAME_S5K3H1		31
#define SENSOR_NAME_S5K2L2		32
#define SENSOR_NAME_S5K3M3		33
#define SENSOR_NAME_S5K4H5YC_FF		34
#define SENSOR_NAME_S5K2L7		35
#define SENSOR_NAME_SAK2L3		36
#define SENSOR_NAME_SAK2L4		37
#define SENSOR_NAME_S5K3J1		38
#define SENSOR_NAME_S5K4HA		39
#define SENSOR_NAME_S5K3P9		40
#define SENSOR_NAME_S5K5E9		41
#define SENSOR_NAME_S5KGM1SP		43
#define SENSOR_NAME_S5K3P8SP		44
#define SENSOR_NAME_S5K2P7SX		45
#define SENSOR_NAME_S5KRPB		46
#define SENSOR_NAME_S5K2P7SQ		47
#define SENSOR_NAME_S5K2T7SX		48
#define SENSOR_NAME_GD1SP		49
#define SENSOR_NAME_S5K4H7		50

#define SENSOR_NAME_S5K2LD		52
#define SENSOR_NAME_S5K2LA		53
#define SENSOR_NAME_S5KGW2		54
#define SENSOR_NAME_S5KGH1		55
#define SENSOR_NAME_S5KHM1		56
#define SENSOR_NAME_S5K4EC		57
#define SENSOR_NAME_S5K2P6		58
#define SENSOR_NAME_S5K3L6		59
#define SENSOR_NAME_S5K2X5		60
#define SENSOR_NAME_S5KGM2		61
#define SENSOR_NAME_S5KGW1		62
#define SENSOR_NAME_S5KGD1		63
#define SENSOR_NAME_S5K3M5		64
#define SENSOR_NAME_S5K3M5_TELE		65
#define SENSOR_NAME_S5K3M5_FOLD		66
#define SENSOR_NAME_S5KGD1_TELE		67
#define SENSOR_NAME_S5KGW1_CPD1914_2	68
#define SENSOR_NAME_S5KHM3		69
#define SENSOR_NAME_S5K3K1		70
#define SENSOR_NAME_S5KGN3		71
#define SENSOR_NAME_S5KJN1		72

/* 101~200: SONY sensors */
#define SENSOR_NAME_IMX135		101
#define SENSOR_NAME_IMX134		102
#define SENSOR_NAME_IMX175		103
#define SENSOR_NAME_IMX240		104
#define SENSOR_NAME_IMX220		105
#define SENSOR_NAME_IMX228		106
#define SENSOR_NAME_IMX219		107
#define SENSOR_NAME_IMX230		108
#define SENSOR_NAME_IMX260		109
#define SENSOR_NAME_IMX258		110
#define SENSOR_NAME_IMX320		111
#define SENSOR_NAME_IMX333		112
#define SENSOR_NAME_IMX241		113
#define SENSOR_NAME_IMX345		114
#define SENSOR_NAME_IMX576		115
#define SENSOR_NAME_IMX316		116
#define SENSOR_NAME_IMX586		117
#define SENSOR_NAME_IMX471		118
#define SENSOR_NAME_IMX516		119
#define SENSOR_NAME_IMX582		120
#define SENSOR_NAME_IMX616		121
#define SENSOR_NAME_IMX518		122
#define SENSOR_NAME_IMX686		123
#define SENSOR_NAME_IMX682		124
#define SENSOR_NAME_IMX563		125
#define SENSOR_NAME_IMX374		126
#define SENSOR_NAME_IMX754		127

/* 201~255: Other vendor sensors */
#define SENSOR_NAME_SR261		201
#define SENSOR_NAME_OV5693		202
#define SENSOR_NAME_SR544		203
#define SENSOR_NAME_OV5670		204
#define SENSOR_NAME_DSIM		205
#define SENSOR_NAME_SR259		206
#define SENSOR_NAME_VIRTUAL		207
#define SENSOR_NAME_SR846		208
#define SENSOR_NAME_SR556		209
#define SENSOR_NAME_GC5035		210
#define SENSOR_NAME_HI1336		211
#define SENSOR_NAME_GC2375		212
#define SENSOR_NAME_HI1631		213
#define SENSOR_NAME_GC02M1		214
#define SENSOR_NAME_HI846		215
#define SENSOR_NAME_OV02A10		216
#define SENSOR_NAME_HI847		217
#define SENSOR_NAME_OV32A1Q     218

#define SENSOR_NAME_SC201		220
#define SENSOR_NAME_HI556		221
#define SENSOR_NAME_GC02M2		222
#define SENSOR_NAME_SC501		223

/* 256~: currently not used */
#define SENSOR_NAME_CUSTOM		301
#define SENSOR_NAME_SR200		302 // SoC Module
#define SENSOR_NAME_SR352		303
#define SENSOR_NAME_SR130PC20		304
#define SENSOR_NAME_S5K5E6		305 // IRIS Camera Sensor
#define SENSOR_NAME_S5K5F1		306 // STAR IRIS Sensor

#define SENSOR_NAME_VIRTUAL_ZEBU	901
#define SENSOR_NAME_END			(SENSOR_NAME_VIRTUAL_ZEBU + 1)
/* END of Sensor ID */

/* Reserved memory for camera log */
#define CAMERA_LOG_BUF_BASE		(0xED210000)
#define CAMERA_LOG_BUF_SIZE		(0x100000)

/* define for runtime module sel */
#define MODULE_SEL_NONE		0
#define MODULE_SEL_CIS		1
#define MODULE_SEL_EEPROM	2

/* special sensor mode */
#define IS_SPECIAL_MODE_FASTAE		1
#define IS_SPECIAL_MODE_REMOSAIC	2

/* DVFS TYPE */
#define IS_DVFS_CSIS		0
#define IS_DVFS_CAM		1
#define IS_DVFS_ISP		2
#define IS_DVFS_INT_CAM		3
#define IS_DVFS_TNR		4
#define IS_DVFS_MIF		5
#define IS_DVFS_INT		6
#define IS_DVFS_M2M		7
#define IS_DVFS_HPG		8
#define IS_DVFS_END		9

#endif