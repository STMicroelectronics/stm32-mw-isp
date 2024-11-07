/**
 ******************************************************************************
 * @file    isp_param_conf.h
 * @author  AIS Application Team
 * @brief   Header file for IQT parameters of the ISP middleware.
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under SLA0044 terms that can be found here:
 * https://www.st.com/resource/en/license_agreement/SLA0044.txt
 *
 * THIS FILE WAS GENERATED BY THE IQ TUNING TOOL ON 2024-06-16 14:08:24
 *
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __ISP_PARAM_CONF__H
#define __ISP_PARAM_CONF__H

/* DCMIPP ISP configuration for VD66GY sensor */
static const ISP_IQParamTypeDef ISP_IQParamCacheInit_VD66GY = {
    .sensorGainStatic = {
        .gain = 0,
    },
    .sensorExposureStatic = {
        .exposure = 0,
    },
    .AECAlgo = {
        .enable = 1,
        .exposureCompensation = EXPOSURE_TARGET_0_0_EV,
    },
    .statRemoval = {
        .enable = 0,
        .nbHeadLines = 0,
        .nbValidLines = 0,
    },
    .badPixelStatic = {
        .enable = 0,
        .strength = 0,
    },
    .badPixelAlgo = {
        .enable = 0,
        .threshold = 0,
    },
    .blackLevelStatic = {
        .enable = 1,
        .BLCR = 16,
        .BLCG = 16,
        .BLCB = 16,
    },
    .demosaicing = {
        .enable = 1,
        .type = ISP_DEMOS_TYPE_GRBG,
        .peak = 2,
        .lineV = 4,
        .lineH = 4,
        .edge = 6,
    },
    .ispGainStatic = {
        .enable = 0,
        .ispGainR = 0,
        .ispGainG = 0,
        .ispGainB = 0,
    },
    .colorConvStatic = {
        .enable = 0,
        .coeff = { { 0, 0, 0, }, { 0, 0, 0, }, { 0, 0, 0, }, }
    },
    .AWBAlgo = {
        .enable = 1,
        .id = { "MiniLBox A", "MiniLBox TL84", "MiniLBox D65", "", "", },
        .referenceColorTemp = { 2665, 3750, 6140, 0, 0, },
        .ispGainR = { 76000000, 95000000, 131000000, 0, 0, },
        .ispGainG = { 100000000, 100000000, 100000000, 0, 0, },
        .ispGainB = { 218000000, 176000000, 146000000, 0, 0, },
        .coeff = {
            { { 157610000, 24710000, -88570000, }, { -65040000, 228120000, -32820000, }, { -26150000, -64259999, 325760000, }, },
            { { 178910000, 5470000, -59790000, }, { -56100000, 225870000, -36100000, }, { -12980000, -55660000, 262750000, }, },
            { { 188870000, -8850000, -41010000, }, { -42130000, 203070000, -37570000, }, { -6360000, -50460000, 216580000, }, },
            { { 0, 0, 0, }, { 0, 0, 0, }, { 0, 0, 0, }, },
            { { 0, 0, 0, }, { 0, 0, 0, }, { 0, 0, 0, }, },
        },
    },
    .contrast = {
        .enable = 0,
        .coeff.LUM_0 = 0,
        .coeff.LUM_32 = 0,
        .coeff.LUM_64 = 0,
        .coeff.LUM_96 = 0,
        .coeff.LUM_128 = 0,
        .coeff.LUM_160 = 0,
        .coeff.LUM_192 = 0,
        .coeff.LUM_224 = 0,
        .coeff.LUM_256 = 0,
    },
    .statAreaStatic = {
        .X0 = 140,
        .Y0 = 341,
        .XSize = 840,
        .YSize = 682,
    },
    .gamma = {
        .enablePipe1 = 1,
        .enablePipe2 = 1,
    },
};

static const ISP_IQParamTypeDef* ISP_IQParamCacheInit[] = {
    &ISP_IQParamCacheInit_VD66GY
};

#endif /* __ISP_PARAM_CONF__H */
