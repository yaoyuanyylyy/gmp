/* x86/k8 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 2000-2011, 2014 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 32
#define GMP_LIMB_BYTES 4

/* 2500 MHz K8 Brisbane */
/* FFT tuning limit = 0.5 M */
/* Generated by tuneup.c, 2019-09-28, gcc 8.3 */

#define MOD_1_NORM_THRESHOLD                 0  /* always */
#define MOD_1_UNNORM_THRESHOLD               3
#define MOD_1N_TO_MOD_1_1_THRESHOLD         15
#define MOD_1U_TO_MOD_1_1_THRESHOLD          4
#define MOD_1_1_TO_MOD_1_2_THRESHOLD        12
#define MOD_1_2_TO_MOD_1_4_THRESHOLD         0  /* never mpn_mod_1s_2p */
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD     21
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_1N_PI1_METHOD                 1  /* 36.43% faster than 2 */
#define DIV_QR_1_NORM_THRESHOLD              3
#define DIV_QR_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* never */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           44

#define DIV_1_VS_MUL_1_PERCENT             226

#define MUL_TOOM22_THRESHOLD                26
#define MUL_TOOM33_THRESHOLD                78
#define MUL_TOOM44_THRESHOLD               139
#define MUL_TOOM6H_THRESHOLD               290
#define MUL_TOOM8H_THRESHOLD               430

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      85
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     122
#define MUL_TOOM42_TO_TOOM53_THRESHOLD      89
#define MUL_TOOM42_TO_TOOM63_THRESHOLD     121
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     123

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 46
#define SQR_TOOM3_THRESHOLD                 86
#define SQR_TOOM4_THRESHOLD                200
#define SQR_TOOM6_THRESHOLD                286
#define SQR_TOOM8_THRESHOLD                430

#define MULMID_TOOM42_THRESHOLD             48

#define MULMOD_BNM1_THRESHOLD               17
#define SQRMOD_BNM1_THRESHOLD               19

#define MUL_FFT_MODF_THRESHOLD             606  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    606, 5}, {     25, 6}, {     13, 5}, {     27, 6}, \
    {     15, 5}, {     31, 6}, {     29, 7}, {     15, 6}, \
    {     33, 7}, {     17, 6}, {     35, 7}, {     19, 6}, \
    {     39, 7}, {     23, 6}, {     47, 7}, {     29, 8}, \
    {     15, 7}, {     35, 8}, {     19, 7}, {     41, 8}, \
    {     23, 7}, {     49, 8}, {     31, 7}, {     63, 8}, \
    {     43, 9}, {     23, 8}, {     55, 9}, {     31, 8}, \
    {     67, 9}, {     39, 8}, {     79, 9}, {     55,10}, \
    {     31, 9}, {     63, 8}, {    127, 9}, {     79,10}, \
    {     47, 7}, {    383, 6}, {    767, 7}, {    399, 8}, \
    {    223, 9}, {    135,10}, {     79, 9}, {    167,10}, \
    {     95, 9}, {    191,11}, {     63,10}, {    127, 9}, \
    {    255,10}, {    159,11}, {     95,10}, {    191,12}, \
    {     63,11}, {    127,10}, {    255, 9}, {    511,10}, \
    {    271, 9}, {    543, 8}, {   1087,11}, {    159,10}, \
    {    319, 9}, {    639,10}, {    335, 9}, {    671,11}, \
    {    191,10}, {    383, 9}, {    767,10}, {    399, 9}, \
    {    799,11}, {    223,12}, {   4096,13}, {   8192,14}, \
    {  16384,15}, {  32768,16} }
#define MUL_FFT_TABLE3_SIZE 74
#define MUL_FFT_THRESHOLD                 5184

#define SQR_FFT_MODF_THRESHOLD             500  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    500, 5}, {     25, 6}, {     13, 5}, {     27, 6}, \
    {     28, 7}, {     15, 6}, {     32, 7}, {     17, 6}, \
    {     35, 7}, {     29, 8}, {     15, 7}, {     33, 8}, \
    {     19, 6}, {     78, 7}, {     41, 6}, {     84, 8}, \
    {     23, 7}, {     47, 8}, {     27, 9}, {     15, 8}, \
    {     31, 7}, {     63, 8}, {     35, 7}, {     71, 8}, \
    {     43, 9}, {     23, 8}, {     51, 9}, {     31, 8}, \
    {     67, 9}, {     39, 8}, {     79, 9}, {     47, 8}, \
    {     99, 9}, {     55,10}, {     31, 9}, {     79,10}, \
    {     47, 9}, {     95,11}, {     31,10}, {     63, 6}, \
    {   1023, 8}, {    271, 9}, {    143, 8}, {    287, 9}, \
    {    159,10}, {     95,11}, {     63,10}, {    127, 9}, \
    {    255,10}, {    143, 9}, {    287,10}, {    159,11}, \
    {     95,10}, {    191,12}, {     63,11}, {    127,10}, \
    {    255, 9}, {    511,10}, {    271, 9}, {    543, 8}, \
    {   1087,10}, {    287,11}, {    159,10}, {    319, 9}, \
    {    639,10}, {    335, 9}, {    671,10}, {    351,11}, \
    {    191,10}, {    383, 9}, {    767,10}, {    399, 9}, \
    {    799, 8}, {   1599,10}, {    415, 9}, {    831,11}, \
    {    223,12}, {   4096,13}, {   8192,14}, {  16384,15}, \
    {  32768,16} }
#define SQR_FFT_TABLE3_SIZE 81
#define SQR_FFT_THRESHOLD                 5504

#define MULLO_BASECASE_THRESHOLD             4
#define MULLO_DC_THRESHOLD                  37
#define MULLO_MUL_N_THRESHOLD             4392
#define SQRLO_BASECASE_THRESHOLD             6
#define SQRLO_DC_THRESHOLD                 202
#define SQRLO_SQR_THRESHOLD              10988

#define DC_DIV_QR_THRESHOLD                 91
#define DC_DIVAPPR_Q_THRESHOLD             292
#define DC_BDIV_QR_THRESHOLD                88
#define DC_BDIV_Q_THRESHOLD                222

#define INV_MULMOD_BNM1_THRESHOLD           50
#define INV_NEWTON_THRESHOLD               276
#define INV_APPR_THRESHOLD                 276

#define BINV_NEWTON_THRESHOLD              278
#define REDC_1_TO_REDC_N_THRESHOLD          63

#define MU_DIV_QR_THRESHOLD               1652
#define MU_DIVAPPR_Q_THRESHOLD            1528
#define MUPI_DIV_QR_THRESHOLD              114
#define MU_BDIV_QR_THRESHOLD              1120
#define MU_BDIV_Q_THRESHOLD               1536

#define POWM_SEC_TABLE  1,22,102,376,767

#define GET_STR_DC_THRESHOLD                14
#define GET_STR_PRECOMPUTE_THRESHOLD        27
#define SET_STR_DC_THRESHOLD               272
#define SET_STR_PRECOMPUTE_THRESHOLD      1279

#define FAC_DSC_THRESHOLD                  224
#define FAC_ODD_THRESHOLD                   48

#define MATRIX22_STRASSEN_THRESHOLD         17
#define HGCD2_DIV1_METHOD                    3  /* 4.65% faster than 1 */
#define HGCD_THRESHOLD                     144
#define HGCD_APPR_THRESHOLD                171
#define HGCD_REDUCE_THRESHOLD             3389
#define GCD_DC_THRESHOLD                   595
#define GCDEXT_DC_THRESHOLD                416
#define JACOBI_BASE_METHOD                   1  /* 1.59% faster than 4 */
