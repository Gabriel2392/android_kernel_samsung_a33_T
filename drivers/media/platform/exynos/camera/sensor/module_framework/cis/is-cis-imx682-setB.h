/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2021 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_IMX682_SET_B_H
#define IS_CIS_IMX682_SET_B_H

#include "is-cis.h"
#include "is-cis-imx682.h"

/*
 * Reference File : IMX682_SEC-CPHY-26MHz_RegisterSetting_ver5.20-4.00_b1_MP_211217.xlsx
 *
 * Sensor Modes
 *    [ 0 ] 2Bin_A4     : 2x2 Binning mode A 4624x3468 30fps       : Single Still Preview/Capture (4:3)    ,  MIPI lane: 3, MIPI data rate(Mbps/lane): 1885
 *    [ 1 ] 2Bin_B4     : 2x2 Binning mode B 4624x2604 30fps       : Single Still Preview/Capture (16:9)    ,  MIPI lane: 3, MIPI data rate(Mbps/lane): 1885
 *    [ 2 ] 2Bin_E4     : 2x2 Binning mode E 3328x1862 60fps       : FHD Video Recording 60 FPS (16:9)    ,  MIPI lane: 3, MIPI data rate(Mbps/lane): 1885
 *    [ 3 ] V2H2_FAE4   : 2x2 Binning mode V2H2 2304x1728 120fps   : FastenAE (4:3)    ,  MIPI lane: 3, MIPI data rate(Mbps/lane): 1885
 *    [ 4 ] V2H2_SSL6   : 2x2 Binning mode V2H2 2304x1296 240fps   : SM/SSM (16:9)    ,  MIPI lane: 3, MIPI data rate(Mbps/lane): 1885
 *    [ 5 ] V2H2_SSL_Crop6 : 2x2 Binning mode V2H2 2000x1128 240fps : SM/SSM (16:9) , MIPI lane: 3, MIPI data rate(Mbps/lane): 1885
 *    [ 6 ] Full_2      : Full_remosaic 9248x6936 15fps            : Single Still Remosaic Capture (4:3)    ,  MIPI lane: 3, MIPI data rate(Mbps/lane): 2229.5
 *    [ 7 ] Full_CropA4 : Full_Remosaic_Crop A 4624x3468 30fps     : Single Still Remosaic Capture (4:3)    ,  MIPI lane: 3, MIPI data rate(Mbps/lane): 1885
 *    [ 8 ] Full_CropB4 : Full_Remosaic_Crop B 4624x3468 30fps     : Single Still Remosaic Capture (4:3)    ,  MIPI lane: 3, MIPI data rate(Mbps/lane): 1885
 */

const u32 sensor_imx682_setfile_B_Global[] = {
	/* External Clock Setting */
	0x0136, 0x1A, 0x01,
	0x0137, 0x00, 0x01,
	/* Register version */
	0x33F0, 0x04, 0x01,
	0x33F1, 0x04, 0x01,
	/* Signaling mode setting */
	0x0111, 0x03, 0x01,
	/* PDAF TYPE2 data type Setting */
	0x3076, 0x01, 0x01,
	0x3077, 0x2B, 0x01,
	/* Global Setting for 123 */
	0x57C6, 0x00, 0x01,
	/* Compensate PDAF decimal places */
	0xA676, 0x00, 0x01,
	0xA677, 0x40, 0x01,
	0xA67C, 0x00, 0x01,
	0xA67D, 0x00, 0x01,
	0xA6F4, 0x00, 0x01,
	0xA6F5, 0x40, 0x01,
	0xA6FA, 0x00, 0x01,
	0xA6FB, 0x00, 0x01,
};

const u32 sensor_imx682_setfile_B_2X2BIN_FULL_4624x3468_30FPS[] = {
	/* reg_2Bin_A4 */
	/* 2x2 Binning mode A 4624x3468 @30fps 1885Msps */
	/* H: 4624 */
	/* W: 3468 */
	/* MIPI output setting */
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	/* Line Length PCK Setting */
	0x0342, 0x24, 0x01,
	0x0343, 0xD8, 0x01,
	/* Frame Length Lines Setting */
	0x0340, 0x0F, 0x01,
	0x0341, 0x22, 0x01,
	/* ROI Setting */
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x00, 0x01,
	0x0347, 0x00, 0x01,
	0x0348, 0x24, 0x01,
	0x0349, 0x1F, 0x01,
	0x034A, 0x1B, 0x01,
	0x034B, 0x1F, 0x01,
	/* Mode Setting */
	0x0900, 0x01, 0x01,
	0x0901, 0x22, 0x01,
	0x0902, 0x08, 0x01,
	0x30D8, 0x04, 0x01,
	0x3200, 0x41, 0x01,
	0x3201, 0x41, 0x01,
	/* Digital Crop & Scaling */
	0x0408, 0x00, 0x01,
	0x0409, 0x00, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x02, 0x01,
	0x040C, 0x12, 0x01,
	0x040D, 0x10, 0x01,
	0x040E, 0x0D, 0x01,
	0x040F, 0x8C, 0x01,
	/* Output Size Setting */
	0x034C, 0x12, 0x01,
	0x034D, 0x10, 0x01,
	0x034E, 0x0D, 0x01,
	0x034F, 0x8C, 0x01,
	/* Clock Setting */
	0x0301, 0x08, 0x01,
	0x0303, 0x02, 0x01,
	0x0305, 0x03, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xFD, 0x01,
	0x030B, 0x01, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x01, 0x01,
	0x030F, 0x22, 0x01,
	0x0310, 0x01, 0x01,
	/* Other Setting */
	0x30D9, 0x00, 0x01,
	0x32D5, 0x00, 0x01,
	0x32D6, 0x00, 0x01,
	0x401E, 0x00, 0x01,
	0x40B8, 0x00, 0x01,
	0x40B9, 0xCD, 0x01,
	0x40BC, 0x00, 0x01,
	0x40BD, 0xC8, 0x01,
	0x40BE, 0x00, 0x01,
	0x40BF, 0x0E, 0x01,
	0x41A4, 0x00, 0x01,
	0x5A09, 0x01, 0x01,
	0x5A17, 0x01, 0x01,
	0x5A25, 0x01, 0x01,
	0x5A33, 0x01, 0x01,
	0x98D7, 0xB4, 0x01,
	0x98D8, 0x8C, 0x01,
	0x98D9, 0x0A, 0x01,
	0x99C4, 0x16, 0x01,
	0x7107, 0x02, 0x01,
	0x40A0, 0x00, 0x01,
	0x40A1, 0x00, 0x01,
	/* Integration Setting */
	0x0202, 0x0E, 0x01,
	0x0203, 0xF2, 0x01,
	/* Gain Setting */
	0x0204, 0x00, 0x01,
	0x0205, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	/* PDAF Setting */
	0x4018, 0x04, 0x01,
	0x4019, 0x80, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x01, 0x01,
	/* DPC correction ctrl Setting */
	0x0B06, 0x00, 0x01,
	/* PDAF TYPE Setting */
	0x3400, 0x02, 0x01,
	/* PDAF TYPE2 Setting */
	0x3093, 0x01, 0x01,
	/* MIPI Global Timing Setting */
	0x084F, 0x11, 0x01,
	0x0851, 0x0F, 0x01,
	0x0853, 0x1D, 0x01,
	0x0855, 0x3D, 0x01,
	0x0859, 0x1E, 0x01,
	0x0808, 0x02, 0x01,
};

const u32 sensor_imx682_setfile_B_2X2BIN_FULL_4624x2604_30FPS[] = {
	/* reg_2Bin_B4 */
	/* 2x2 Binning mode B 4624x2604 @30fps 1885Msps */
	/* H: 4624 */
	/* W: 2604 */
	/* MIPI output setting */
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	/* Line Length PCK Setting */
	0x0342, 0x24, 0x01,
	0x0343, 0xD8, 0x01,
	/* Frame Length Lines Setting */
	0x0340, 0x0F, 0x01,
	0x0341, 0x22, 0x01,
	/* ROI Setting */
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x03, 0x01,
	0x0347, 0x60, 0x01,
	0x0348, 0x24, 0x01,
	0x0349, 0x1F, 0x01,
	0x034A, 0x17, 0x01,
	0x034B, 0xBF, 0x01,
	/* Mode Setting */
	0x0900, 0x01, 0x01,
	0x0901, 0x22, 0x01,
	0x0902, 0x08, 0x01,
	0x30D8, 0x04, 0x01,
	0x3200, 0x41, 0x01,
	0x3201, 0x41, 0x01,
	/* Digital Crop & Scaling */
	0x0408, 0x00, 0x01,
	0x0409, 0x00, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x02, 0x01,
	0x040C, 0x12, 0x01,
	0x040D, 0x10, 0x01,
	0x040E, 0x0A, 0x01,
	0x040F, 0x2C, 0x01,
	/* Output Size Setting */
	0x034C, 0x12, 0x01,
	0x034D, 0x10, 0x01,
	0x034E, 0x0A, 0x01,
	0x034F, 0x2C, 0x01,
	/* Clock Setting */
	0x0301, 0x08, 0x01,
	0x0303, 0x02, 0x01,
	0x0305, 0x03, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xFD, 0x01,
	0x030B, 0x01, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x01, 0x01,
	0x030F, 0x22, 0x01,
	0x0310, 0x01, 0x01,
	/* Other Setting */
	0x30D9, 0x00, 0x01,
	0x32D5, 0x00, 0x01,
	0x32D6, 0x00, 0x01,
	0x401E, 0x00, 0x01,
	0x40B8, 0x00, 0x01,
	0x40B9, 0xCD, 0x01,
	0x40BC, 0x00, 0x01,
	0x40BD, 0xC8, 0x01,
	0x40BE, 0x00, 0x01,
	0x40BF, 0x0E, 0x01,
	0x41A4, 0x00, 0x01,
	0x5A09, 0x01, 0x01,
	0x5A17, 0x01, 0x01,
	0x5A25, 0x01, 0x01,
	0x5A33, 0x01, 0x01,
	0x98D7, 0xB4, 0x01,
	0x98D8, 0x8C, 0x01,
	0x98D9, 0x0A, 0x01,
	0x99C4, 0x16, 0x01,
	0x7107, 0x02, 0x01,
	0x40A0, 0x00, 0x01,
	0x40A1, 0x00, 0x01,
	/* Integration Setting */
	0x0202, 0x0E, 0x01,
	0x0203, 0xF2, 0x01,
	/* Gain Setting */
	0x0204, 0x00, 0x01,
	0x0205, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	/* PDAF Setting */
	0x4018, 0x04, 0x01,
	0x4019, 0x80, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x01, 0x01,
	/* DPC correction ctrl Setting */
	0x0B06, 0x00, 0x01,
	/* PDAF TYPE Setting */
	0x3400, 0x02, 0x01,
	/* PDAF TYPE2 Setting */
	0x3093, 0x01, 0x01,
	/* MIPI Global Timing Setting */
	0x084F, 0x11, 0x01,
	0x0851, 0x0F, 0x01,
	0x0853, 0x1D, 0x01,
	0x0855, 0x3D, 0x01,
	0x0859, 0x1E, 0x01,
	0x0808, 0x02, 0x01,
};

const u32 sensor_imx682_setfile_B_2X2BIN_FULL_3328x1862_60FPS[] = {
	/* reg_2Bin_C4 */
	/* 2x2 Binning mode C 3328x1862 @60fps 1885Msps */
	/* H: 3328 */
	/* W: 1862 */
	/* MIPI output setting */
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	/* Line Length PCK Setting */
	0x0342, 0x24, 0x01,
	0x0343, 0xD8, 0x01,
	/* Frame Length Lines Setting */
	0x0340, 0x07, 0x01,
	0x0341, 0x91, 0x01,
	/* ROI Setting */
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x06, 0x01,
	0x0347, 0x40, 0x01,
	0x0348, 0x24, 0x01,
	0x0349, 0x1F, 0x01,
	0x034A, 0x14, 0x01,
	0x034B, 0xDF, 0x01,
	/* Mode Setting */
	0x0900, 0x01, 0x01,
	0x0901, 0x22, 0x01,
	0x0902, 0x08, 0x01,
	0x30D8, 0x04, 0x01,
	0x3200, 0x41, 0x01,
	0x3201, 0x41, 0x01,
	/* Digital Crop & Scaling */
	0x0408, 0x02, 0x01,
	0x0409, 0x88, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x04, 0x01,
	0x040C, 0x0D, 0x01,
	0x040D, 0x00, 0x01,
	0x040E, 0x07, 0x01,
	0x040F, 0x46, 0x01,
	/* Output Size Setting */
	0x034C, 0x0D, 0x01,
	0x034D, 0x00, 0x01,
	0x034E, 0x07, 0x01,
	0x034F, 0x46, 0x01,
	/* Clock Setting */
	0x0301, 0x08, 0x01,
	0x0303, 0x02, 0x01,
	0x0305, 0x03, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xFD, 0x01,
	0x030B, 0x01, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x01, 0x01,
	0x030F, 0x22, 0x01,
	0x0310, 0x01, 0x01,
	/* Other Setting */
	0x30D9, 0x00, 0x01,
	0x32D5, 0x00, 0x01,
	0x32D6, 0x00, 0x01,
	0x401E, 0x00, 0x01,
	0x40B8, 0x00, 0x01,
	0x40B9, 0xCD, 0x01,
	0x40BC, 0x00, 0x01,
	0x40BD, 0xC8, 0x01,
	0x40BE, 0x00, 0x01,
	0x40BF, 0x0E, 0x01,
	0x41A4, 0x00, 0x01,
	0x5A09, 0x01, 0x01,
	0x5A17, 0x01, 0x01,
	0x5A25, 0x01, 0x01,
	0x5A33, 0x01, 0x01,
	0x98D7, 0xB4, 0x01,
	0x98D8, 0x8C, 0x01,
	0x98D9, 0x0A, 0x01,
	0x99C4, 0x16, 0x01,
	0x7107, 0x02, 0x01,
	0x40A0, 0x00, 0x01,
	0x40A1, 0x00, 0x01,
	/* Integration Setting */
	0x0202, 0x07, 0x01,
	0x0203, 0x61, 0x01,
	/* Gain Setting */
	0x0204, 0x00, 0x01,
	0x0205, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	/* PDAF Setting */
	0x4018, 0x03, 0x01,
	0x4019, 0x40, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x01, 0x01,
	/* DPC correction ctrl Setting */
	0x0B06, 0x00, 0x01,
	/* PDAF TYPE Setting */
	0x3400, 0x02, 0x01,
	/* PDAF TYPE2 Setting */
	0x3093, 0x01, 0x01,
	/* MIPI Global Timing Setting */
	0x084F, 0x11, 0x01,
	0x0851, 0x0F, 0x01,
	0x0853, 0x1D, 0x01,
	0x0855, 0x3D, 0x01,
	0x0859, 0x1E, 0x01,
	0x0808, 0x02, 0x01,
};

const u32 sensor_imx682_setfile_B_2X2BIN_FULL_2304x1728_120FPS[] = {
	/* reg_V2H2_FAE4 */
	/* 2x2 Binning mode V2H2 Fast AE @120fps 1885Msps */
	/* H: 2304 */
	/* W: 1728 */
	/* MIPI output setting */
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	/* Line Length PCK Setting */
	0x0342, 0x0A, 0x01,
	0x0343, 0xA8, 0x01,
	/* Frame Length Lines Setting */
	0x0340, 0x09, 0x01,
	0x0341, 0xFA, 0x01,
	/* ROI Setting */
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x00, 0x01,
	0x0347, 0x10, 0x01,
	0x0348, 0x24, 0x01,
	0x0349, 0x1F, 0x01,
	0x034A, 0x1B, 0x01,
	0x034B, 0x0F, 0x01,
	/* Mode Setting */
	0x0900, 0x01, 0x01,
	0x0901, 0x44, 0x01,
	0x0902, 0x0A, 0x01,
	0x30D8, 0x00, 0x01,
	0x3200, 0x43, 0x01,
	0x3201, 0x43, 0x01,
	/* Digital Crop & Scaling */
	0x0408, 0x00, 0x01,
	0x0409, 0x04, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x00, 0x01,
	0x040C, 0x09, 0x01,
	0x040D, 0x00, 0x01,
	0x040E, 0x06, 0x01,
	0x040F, 0xC0, 0x01,
	/* Output Size Setting */
	0x034C, 0x09, 0x01,
	0x034D, 0x00, 0x01,
	0x034E, 0x06, 0x01,
	0x034F, 0xC0, 0x01,
	/* Clock Setting */
	0x0301, 0x08, 0x01,
	0x0303, 0x02, 0x01,
	0x0305, 0x03, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xC1, 0x01,
	0x030B, 0x01, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x01, 0x01,
	0x030F, 0x22, 0x01,
	0x0310, 0x01, 0x01,
	/* Other Setting */
	0x30D9, 0x01, 0x01,
	0x32D5, 0x00, 0x01,
	0x32D6, 0x00, 0x01,
	0x401E, 0x4D, 0x01,
	0x40B8, 0x00, 0x01,
	0x40B9, 0x32, 0x01,
	0x40BC, 0x00, 0x01,
	0x40BD, 0x08, 0x01,
	0x40BE, 0x00, 0x01,
	0x40BF, 0x08, 0x01,
	0x41A4, 0x00, 0x01,
	0x5A09, 0x00, 0x01,
	0x5A17, 0x00, 0x01,
	0x5A25, 0x00, 0x01,
	0x5A33, 0x00, 0x01,
	0x98D7, 0xB4, 0x01,
	0x98D8, 0x8C, 0x01,
	0x98D9, 0x0A, 0x01,
	0x99C4, 0x16, 0x01,
	0x7107, 0x02, 0x01,
	0x40A0, 0x00, 0x01,
	0x40A1, 0x00, 0x01,
	/* Integration Setting */
	0x0202, 0x09, 0x01,
	0x0203, 0xCA, 0x01,
	/* Gain Setting */
	0x0204, 0x00, 0x01,
	0x0205, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	/* PDAF Setting */
	0x4018, 0x00, 0x01,
	0x4019, 0x00, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x00, 0x01,
	/* DPC correction ctrl Setting */
	0x0B06, 0x00, 0x01,
	/* PDAF TYPE Setting */
	0x3400, 0x02, 0x01,
	/* PDAF TYPE2 Setting */
	0x3093, 0x00, 0x01,
	/* MIPI Global Timing Setting */
	0x084F, 0x11, 0x01,
	0x0851, 0x0F, 0x01,
	0x0853, 0x1D, 0x01,
	0x0855, 0x3D, 0x01,
	0x0859, 0x1E, 0x01,
	0x0808, 0x02, 0x01,
};

const u32 sensor_imx682_setfile_B_2X2BIN_FULL_2304x1296_240FPS[] = {
	/* reg_V2H2_SSL6 */
	/* 2x2 Binning mode V2H2 Slow Motion @240fps 1885Msps */
	/* H: 2304 */
	/* W: 1296 */
	/* MIPI output setting */
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	/* Line Length PCK Setting */
	0x0342, 0x0A, 0x01,
	0x0343, 0xA8, 0x01,
	/* Frame Length Lines Setting */
	0x0340, 0x05, 0x01,
	0x0341, 0x60, 0x01,
	/* ROI Setting */
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x03, 0x01,
	0x0347, 0x70, 0x01,
	0x0348, 0x24, 0x01,
	0x0349, 0x1F, 0x01,
	0x034A, 0x17, 0x01,
	0x034B, 0xAF, 0x01,
	/* Mode Setting */
	0x0900, 0x01, 0x01,
	0x0901, 0x44, 0x01,
	0x0902, 0x0A, 0x01,
	0x30D8, 0x00, 0x01,
	0x3200, 0x43, 0x01,
	0x3201, 0x43, 0x01,
	/* Digital Crop & Scaling */
	0x0408, 0x00, 0x01,
	0x0409, 0x04, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x00, 0x01,
	0x040C, 0x09, 0x01,
	0x040D, 0x00, 0x01,
	0x040E, 0x05, 0x01,
	0x040F, 0x10, 0x01,
	/* Output Size Setting */
	0x034C, 0x09, 0x01,
	0x034D, 0x00, 0x01,
	0x034E, 0x05, 0x01,
	0x034F, 0x10, 0x01,
	/* Clock Setting */
	0x0301, 0x08, 0x01,
	0x0303, 0x02, 0x01,
	0x0305, 0x03, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xD0, 0x01,
	0x030B, 0x01, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x01, 0x01,
	0x030F, 0x22, 0x01,
	0x0310, 0x01, 0x01,
	/* Other Setting */
	0x30D9, 0x01, 0x01,
	0x32D5, 0x00, 0x01,
	0x32D6, 0x00, 0x01,
	0x401E, 0x4D, 0x01,
	0x40B8, 0x00, 0x01,
	0x40B9, 0x32, 0x01,
	0x40BC, 0x00, 0x01,
	0x40BD, 0x08, 0x01,
	0x40BE, 0x00, 0x01,
	0x40BF, 0x08, 0x01,
	0x41A4, 0x00, 0x01,
	0x5A09, 0x00, 0x01,
	0x5A17, 0x00, 0x01,
	0x5A25, 0x00, 0x01,
	0x5A33, 0x00, 0x01,
	0x98D7, 0xB4, 0x01,
	0x98D8, 0x8C, 0x01,
	0x98D9, 0x0A, 0x01,
	0x99C4, 0x16, 0x01,
	0x7107, 0x02, 0x01,
	0x40A0, 0x00, 0x01,
	0x40A1, 0x00, 0x01,
	/* Integration Setting */
	0x0202, 0x05, 0x01,
	0x0203, 0x30, 0x01,
	/* Gain Setting */
	0x0204, 0x00, 0x01,
	0x0205, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	/* PDAF Setting */
	0x4018, 0x00, 0x01,
	0x4019, 0x00, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x00, 0x01,
	/* DPC correction ctrl Setting */
	0x0B06, 0x00, 0x01,
	/* PDAF TYPE Setting */
	0x3400, 0x02, 0x01,
	/* PDAF TYPE2 Setting */
	0x3093, 0x00, 0x01,
	/* MIPI Global Timing Setting */
	0x084F, 0x11, 0x01,
	0x0851, 0x0F, 0x01,
	0x0853, 0x1D, 0x01,
	0x0855, 0x3D, 0x01,
	0x0859, 0x1E, 0x01,
	0x0808, 0x02, 0x01,
};

const u32 sensor_imx682_setfile_B_2X2BIN_FULL_2000x1128_240FPS[] = {
	/* reg_V2H2_SSL_Crop6 */
	/* 2x2 Binning mode V2H2 Slow Motion @240fps 1885Msps */
	/* H: 2000 */
	/* W: 1128 */
	/* MIPI output setting */
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	/* Line Length PCK Setting */
	0x0342, 0x0A, 0x01,
	0x0343, 0xA8, 0x01,
	/* Frame Length Lines Setting */
	0x0340, 0x05, 0x01,
	0x0341, 0x8E, 0x01,
	/* ROI Setting */
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x04, 0x01,
	0x0347, 0xC0, 0x01,
	0x0348, 0x24, 0x01,
	0x0349, 0x1F, 0x01,
	0x034A, 0x16, 0x01,
	0x034B, 0x5F, 0x01,
	/* Mode Setting */
	0x0900, 0x01, 0x01,
	0x0901, 0x44, 0x01,
	0x0902, 0x0A, 0x01,
	0x30D8, 0x00, 0x01,
	0x3200, 0x43, 0x01,
	0x3201, 0x43, 0x01,
	/* Digital Crop & Scaling */
	0x0408, 0x00, 0x01,
	0x0409, 0x9C, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x00, 0x01,
	0x040C, 0x07, 0x01,
	0x040D, 0xD0, 0x01,
	0x040E, 0x04, 0x01,
	0x040F, 0x68, 0x01,
	/* Output Size Setting */
	0x034C, 0x07, 0x01,
	0x034D, 0xD0, 0x01,
	0x034E, 0x04, 0x01,
	0x034F, 0x68, 0x01,
	/* Clock Setting */
	0x0301, 0x08, 0x01,
	0x0303, 0x02, 0x01,
	0x0305, 0x03, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xD7, 0x01,
	0x030B, 0x01, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x01, 0x01,
	0x030F, 0x22, 0x01,
	0x0310, 0x01, 0x01,
	/* Other Setting */
	0x30D9, 0x01, 0x01,
	0x32D5, 0x00, 0x01,
	0x32D6, 0x00, 0x01,
	0x401E, 0x4D, 0x01,
	0x40B8, 0x00, 0x01,
	0x40B9, 0x32, 0x01,
	0x40BC, 0x00, 0x01,
	0x40BD, 0x08, 0x01,
	0x40BE, 0x00, 0x01,
	0x40BF, 0x08, 0x01,
	0x41A4, 0x00, 0x01,
	0x5A09, 0x00, 0x01,
	0x5A17, 0x00, 0x01,
	0x5A25, 0x00, 0x01,
	0x5A33, 0x00, 0x01,
	0x98D7, 0xB4, 0x01,
	0x98D8, 0x8C, 0x01,
	0x98D9, 0x0A, 0x01,
	0x99C4, 0x16, 0x01,
	0x7107, 0x02, 0x01,
	0x40A0, 0x00, 0x01,
	0x40A1, 0x00, 0x01,
	/* Integration Setting */
	0x0202, 0x05, 0x01,
	0x0203, 0x5E, 0x01,
	/* Gain Setting */
	0x0204, 0x00, 0x01,
	0x0205, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	/* PDAF Setting */
	0x4018, 0x00, 0x01,
	0x4019, 0x00, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x00, 0x01,
	/* DPC correction ctrl Setting */
	0x0B06, 0x00, 0x01,
	/* PDAF TYPE Setting */
	0x3400, 0x02, 0x01,
	/* PDAF TYPE2 Setting */
	0x3093, 0x00, 0x01,
	/* MIPI Global Timing Setting */
	0x084F, 0x11, 0x01,
	0x0851, 0x0F, 0x01,
	0x0853, 0x1D, 0x01,
	0x0855, 0x3D, 0x01,
	0x0859, 0x1E, 0x01,
	0x0808, 0x02, 0x01,
};

const u32 sensor_imx682_setfile_B_2X2REMOSAIC_FULL_9248x6936_15FPS[] = {
	/* Full_remosaic @Datarate 2229.5Msps */
	/* H: 9248 */
	/* V: 6936 */
	/* /mIPI Output Setting*/
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	/* Line Length PCK Setting*/
	0x0342, 0x28, 0x01,
	0x0343, 0x30, 0x01,
	/* Frame Length Lines Setting */
	0x0340, 0x1B, 0x01,
	0x0341, 0xCC, 0x01,
	/*ROI Setting */
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x00, 0x01,
	0x0347, 0x00, 0x01,
	0x0348, 0x24, 0x01,
	0x0349, 0x1F, 0x01,
	0x034A, 0x1B, 0x01,
	0x034B, 0x1F, 0x01,
	/* Mode Setting */
	0x0900, 0x00, 0x01,
	0x0901, 0x11, 0x01,
	0x0902, 0x0A, 0x01,
	0x30D8, 0x00, 0x01,
	0x3200, 0x01, 0x01,
	0x3201, 0x01, 0x01,
	/*Digital Crop and Scaling */
	0x0408, 0x00, 0x01,
	0x0409, 0x00, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x04, 0x01,
	0x040C, 0x24, 0x01,
	0x040D, 0x20, 0x01,
	0x040E, 0x1B, 0x01,
	0x040F, 0x18, 0x01,
	/* Output Size Setting */
	0x034C, 0x24, 0x01,
	0x034D, 0x20, 0x01,
	0x034E, 0x1B, 0x01,
	0x034F, 0x18, 0x01,
	/* Clock Setting */
	0x0301, 0x08, 0x01,
	0x0303, 0x02, 0x01,
	0x0305, 0x03, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xFD, 0x01,
	0x030B, 0x01, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x01, 0x01,
	0x030F, 0x57, 0x01,
	0x0310, 0x01, 0x01,
	/* Other Setting */
	0x30D9, 0x01, 0x01,
	0x32D5, 0x01, 0x01,
	0x32D6, 0x01, 0x01,
	0x401E, 0x00, 0x01,
	0x40B8, 0x01, 0x01,
	0x40B9, 0x70, 0x01,
	0x40BC, 0x00, 0x01,
	0x40BD, 0xB0, 0x01,
	0x40BE, 0x00, 0x01,
	0x40BF, 0xB0, 0x01,
	0x41A4, 0x00, 0x01,
	0x5A09, 0x01, 0x01,
	0x5A17, 0x01, 0x01,
	0x5A25, 0x01, 0x01,
	0x5A33, 0x01, 0x01,
	0x98D7, 0x14, 0x01,
	0x98D8, 0x14, 0x01,
	0x98D9, 0x00, 0x01,
	0x99C4, 0x00, 0x01,
	0x7107, 0x02, 0x01,
	0x40A0, 0x02, 0x01,
	0x40A1, 0x04, 0x01,
	/* Integration Setting */
	0x0202, 0x1B, 0x01,
	0x0203, 0x9C, 0x01,
	/* Gain Setting */
	0x0204, 0x00, 0x01,
	0x0205, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	/* PDAF Setting */
	0x4018, 0x04, 0x01,
	0x4019, 0x80, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x01, 0x01,
	/* DPC Correction Controller Setting */
	0x0B06, 0x01, 0x01,
	/*PDAF Type Setting */
	0x3400, 0x02, 0x01,
	/* PDAF Type2 Setting */
	0x3093, 0x01, 0x01,
	/* MIPI Global Timing Setting */
	0x084F, 0x13, 0x01,
	0x0851, 0x11, 0x01,
	0x0853, 0x1F, 0x01,
	0x0855, 0x3D, 0x01,
	0x0859, 0x1E, 0x01,
	0x0808, 0x02, 0x01,
};

const u32 sensor_imx682_setfile_B_REMOSAIC_CROP_4624x3468_30FPS[] = {
	/* reg_Full_CropA */
	/* Full_Remosaic_Crop A 4624x3468 */
	/* H: 4624 */
	/* W: 3468 */
	/* MIPI output setting */
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	/* Line Length PCK Setting */
	0x0342, 0x28, 0x01,
	0x0343, 0x30, 0x01,
	/* Frame Length Lines Setting */
	0x0340, 0x0D, 0x01,
	0x0341, 0xE2, 0x01,
	/* ROI Setting */
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x06, 0x01,
	0x0347, 0xC0, 0x01,
	0x0348, 0x24, 0x01,
	0x0349, 0x1F, 0x01,
	0x034A, 0x14, 0x01,
	0x034B, 0x4F, 0x01,
	/* Mode Setting */
	0x0900, 0x00, 0x01,
	0x0901, 0x11, 0x01,
	0x0902, 0x0A, 0x01,
	0x30D8, 0x00, 0x01,
	0x3200, 0x01, 0x01,
	0x3201, 0x01, 0x01,
	/* Digital Crop & Scaling */
	0x0408, 0x09, 0x01,
	0x0409, 0x08, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x02, 0x01,
	0x040C, 0x12, 0x01,
	0x040D, 0x10, 0x01,
	0x040E, 0x0D, 0x01,
	0x040F, 0x8C, 0x01,
	/* Output Size Setting */
	0x034C, 0x12, 0x01,
	0x034D, 0x10, 0x01,
	0x034E, 0x0D, 0x01,
	0x034F, 0x8C, 0x01,
	/* Clock Setting */
	0x0301, 0x08, 0x01,
	0x0303, 0x02, 0x01,
	0x0305, 0x03, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xFD, 0x01,
	0x030B, 0x01, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x01, 0x01,
	0x030F, 0x22, 0x01,
	0x0310, 0x01, 0x01,
	/* Other Setting */
	0x30D9, 0x01, 0x01,
	0x32D5, 0x01, 0x01,
	0x32D6, 0x01, 0x01,
	0x401E, 0x00, 0x01,
	0x40B8, 0x01, 0x01,
	0x40B9, 0x70, 0x01,
	0x40BC, 0x00, 0x01,
	0x40BD, 0xB0, 0x01,
	0x40BE, 0x00, 0x01,
	0x40BF, 0xB0, 0x01,
	0x41A4, 0x00, 0x01,
	0x5A09, 0x01, 0x01,
	0x5A17, 0x01, 0x01,
	0x5A25, 0x01, 0x01,
	0x5A33, 0x01, 0x01,
	0x98D7, 0x14, 0x01,
	0x98D8, 0x14, 0x01,
	0x98D9, 0x00, 0x01,
	0x99C4, 0x00, 0x01,
	0x7107, 0x00, 0x01,
	0x40A0, 0x02, 0x01,
	0x40A1, 0x04, 0x01,
	/* Integration Setting */
	0x0202, 0x0D, 0x01,
	0x0203, 0xB2, 0x01,
	/* Gain Setting */
	0x0204, 0x00, 0x01,
	0x0205, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	/* PDAF Setting */
	0x4018, 0x02, 0x01,
	0x4019, 0x40, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x01, 0x01,
	/* DPC correction ctrl Setting */
	0x0B06, 0x01, 0x01,
	/* PDAF TYPE Setting */
	0x3400, 0x02, 0x01,
	/* PDAF TYPE2 Setting */
	0x3093, 0x01, 0x01,
	/* MIPI Global Timing Setting */
	0x084F, 0x11, 0x01,
	0x0851, 0x0F, 0x01,
	0x0853, 0x1D, 0x01,
	0x0855, 0x3D, 0x01,
	0x0859, 0x1E, 0x01,
	0x0808, 0x02, 0x01,
};

const u32 sensor_imx682_setfile_B_REMOSAIC_CROP_4624x2604_30FPS[] = {
	/* reg_Full_CropB_2 */
	/* Full_Remosaic_Crop B 4624x2604 */
	/* H: 4624 */
	/* W: 2604 */
	/* MIPI output setting */
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	/* Line Length PCK Setting */
	0x0342, 0x28, 0x01,
	0x0343, 0x30, 0x01,
	/* Frame Length Lines Setting */
	0x0340, 0x0D, 0x01,
	0x0341, 0xE0, 0x01,
	/* ROI Setting */
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x08, 0x01,
	0x0347, 0x70, 0x01,
	0x0348, 0x24, 0x01,
	0x0349, 0x1F, 0x01,
	0x034A, 0x12, 0x01,
	0x034B, 0xAF, 0x01,
	/* Mode Setting */
	0x0900, 0x00, 0x01,
	0x0901, 0x11, 0x01,
	0x0902, 0x0A, 0x01,
	0x30D8, 0x00, 0x01,
	0x3200, 0x01, 0x01,
	0x3201, 0x01, 0x01,
	/* Digital Crop & Scaling */
	0x0408, 0x09, 0x01,
	0x0409, 0x08, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x0A, 0x01,
	0x040C, 0x12, 0x01,
	0x040D, 0x10, 0x01,
	0x040E, 0x0A, 0x01,
	0x040F, 0x2C, 0x01,
	/* Output Size Setting */
	0x034C, 0x12, 0x01,
	0x034D, 0x10, 0x01,
	0x034E, 0x0A, 0x01,
	0x034F, 0x2C, 0x01,
	/* Clock Setting */
	0x0301, 0x08, 0x01,
	0x0303, 0x02, 0x01,
	0x0305, 0x03, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xFD, 0x01,
	0x030B, 0x01, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x01, 0x01,
	0x030F, 0x22, 0x01,
	0x0310, 0x01, 0x01,
	/* Other Setting */
	0x30D9, 0x01, 0x01,
	0x32D5, 0x01, 0x01,
	0x32D6, 0x01, 0x01,
	0x401E, 0x00, 0x01,
	0x40B8, 0x01, 0x01,
	0x40B9, 0x70, 0x01,
	0x40BC, 0x00, 0x01,
	0x40BD, 0xB0, 0x01,
	0x40BE, 0x00, 0x01,
	0x40BF, 0xB0, 0x01,
	0x41A4, 0x00, 0x01,
	0x5A09, 0x01, 0x01,
	0x5A17, 0x01, 0x01,
	0x5A25, 0x01, 0x01,
	0x5A33, 0x01, 0x01,
	0x98D7, 0x14, 0x01,
	0x98D8, 0x14, 0x01,
	0x98D9, 0x00, 0x01,
	0x99C4, 0x00, 0x01,
	0x7107, 0x02, 0x01,
	0x40A0, 0x02, 0x01,
	0x40A1, 0x04, 0x01,
	/* Integration Setting */
	0x0202, 0x0D, 0x01,
	0x0203, 0xB0, 0x01,
	/* Gain Setting */
	0x0204, 0x00, 0x01,
	0x0205, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	/* PDAF Setting */
	0x4018, 0x02, 0x01,
	0x4019, 0x40, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x01, 0x01,
	/* DPC correction ctrl Setting */
	0x0B06, 0x01, 0x01,
	/* PDAF TYPE Setting */
	0x3400, 0x02, 0x01,
	/* PDAF TYPE2 Setting */
	0x3093, 0x01, 0x01,
	/* MIPI Global Timing Setting */
	0x084F, 0x11, 0x01,
	0x0851, 0x0F, 0x01,
	0x0853, 0x1D, 0x01,
	0x0855, 0x3D, 0x01,
	0x0859, 0x1E, 0x01,
	0x0808, 0x02, 0x01,
};

const u32 sensor_imx682_pdaf_off_setfile_B[] = {
	/* PDAF Setting */
	0x4018, 0x00, 0x01,
	0x4019, 0x00, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x00, 0x01,
	/* PDAF TYPE2 Setting */
	0x3093, 0x00, 0x01,
};

const struct sensor_pll_info_compact sensor_imx682_pllinfo_B_2X2BIN_FULL_4624x3468_30FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1885000000,                  /* mipi_datarate = OPSYCK */
	137040000,                   /* pclk = VTPXCK of Clock Information */
	3874,                        /* frame_length_lines */
	9432,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx682_pllinfo_B_2X2BIN_FULL_4624x2604_30FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1885000000,                  /* mipi_datarate = OPSYCK */
	137040000,                   /* pclk = VTPXCK of Clock Information */
	3874,                        /* frame_length_lines */
	9432,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx682_pllinfo_B_2X2BIN_FULL_3328x1862_60FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1885000000,                  /* mipi_datarate = OPSYCK */
	137040000,                   /* pclk = VTPXCK of Clock Information */
	1937,                        /* frame_length_lines */
	9432,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx682_pllinfo_B_2X2BIN_FULL_2304x1728_120FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1885000000,                  /* mipi_datarate = OPSYCK */
	104540000,                   /* pclk = VTPXCK of Clock Information */
	2554,                        /* frame_length_lines */
	2728,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx682_pllinfo_B_2X2BIN_FULL_2304x1296_240FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1885000000,                  /* mipi_datarate = OPSYCK */
	112670000,                   /* pclk = VTPXCK of Clock Information */
	1376,                        /* frame_length_lines */
	2728,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx682_pllinfo_B_2X2BIN_FULL_2000x1128_240FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1885000000,                  /* mipi_datarate = OPSYCK */
	116460000,                  /* pclk = VTPXCK of Clock Information */
	1422,                        /* frame_length_lines */
	2728,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx682_pllinfo_B_2X2REMOSAIC_FULL_9248x6936_15FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	2229500000,                  /* mipi_datarate = OPSYCK */
	137040000,                   /* pclk = VTPXCK of Clock Information */
	7116,                        /* frame_length_lines */
	10288,                       /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx682_pllinfo_B_REMOSAIC_CROP_4624x3468_30FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1885000000,                  /* mipi_datarate = OPSYCK */
	137040000,                   /* pclk = VTPXCK of Clock Information */
	3554,                        /* frame_length_lines */
	10288,                       /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx682_pllinfo_B_REMOSAIC_CROP_4624x2604_30FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1885000000,                  /* mipi_datarate = OPSYCK */
	137040000,                   /* pclk = VTPXCK of Clock Information */
	3552,                        /* frame_length_lines */
	10288,                       /* line_length_pck */
};

static const u32 *sensor_imx682_setfiles_B[] = {
	sensor_imx682_setfile_B_2X2BIN_FULL_4624x3468_30FPS,
	sensor_imx682_setfile_B_2X2BIN_FULL_4624x2604_30FPS,
	sensor_imx682_setfile_B_2X2BIN_FULL_3328x1862_60FPS,
	sensor_imx682_setfile_B_2X2BIN_FULL_2304x1728_120FPS,
	sensor_imx682_setfile_B_2X2BIN_FULL_2304x1296_240FPS,
	sensor_imx682_setfile_B_2X2BIN_FULL_2000x1128_240FPS,
	sensor_imx682_setfile_B_2X2REMOSAIC_FULL_9248x6936_15FPS,
	sensor_imx682_setfile_B_REMOSAIC_CROP_4624x3468_30FPS,
	sensor_imx682_setfile_B_REMOSAIC_CROP_4624x2604_30FPS,

};

static const u32 sensor_imx682_setfile_B_sizes[] = {
	ARRAY_SIZE(sensor_imx682_setfile_B_2X2BIN_FULL_4624x3468_30FPS),
	ARRAY_SIZE(sensor_imx682_setfile_B_2X2BIN_FULL_4624x2604_30FPS),
	ARRAY_SIZE(sensor_imx682_setfile_B_2X2BIN_FULL_3328x1862_60FPS),
	ARRAY_SIZE(sensor_imx682_setfile_B_2X2BIN_FULL_2304x1728_120FPS),
	ARRAY_SIZE(sensor_imx682_setfile_B_2X2BIN_FULL_2304x1296_240FPS),
	ARRAY_SIZE(sensor_imx682_setfile_B_2X2BIN_FULL_2000x1128_240FPS),
	ARRAY_SIZE(sensor_imx682_setfile_B_2X2REMOSAIC_FULL_9248x6936_15FPS),
	ARRAY_SIZE(sensor_imx682_setfile_B_REMOSAIC_CROP_4624x3468_30FPS),
	ARRAY_SIZE(sensor_imx682_setfile_B_REMOSAIC_CROP_4624x2604_30FPS),

};

static const struct sensor_pll_info_compact *sensor_imx682_pllinfos_B[] = {
	&sensor_imx682_pllinfo_B_2X2BIN_FULL_4624x3468_30FPS,
	&sensor_imx682_pllinfo_B_2X2BIN_FULL_4624x2604_30FPS,
	&sensor_imx682_pllinfo_B_2X2BIN_FULL_3328x1862_60FPS,
	&sensor_imx682_pllinfo_B_2X2BIN_FULL_2304x1728_120FPS,
	&sensor_imx682_pllinfo_B_2X2BIN_FULL_2304x1296_240FPS,
	&sensor_imx682_pllinfo_B_2X2BIN_FULL_2000x1128_240FPS,
	&sensor_imx682_pllinfo_B_2X2REMOSAIC_FULL_9248x6936_15FPS,
	&sensor_imx682_pllinfo_B_REMOSAIC_CROP_4624x3468_30FPS,
	&sensor_imx682_pllinfo_B_REMOSAIC_CROP_4624x2604_30FPS,
};

#endif