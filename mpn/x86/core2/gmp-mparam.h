/* x86/core2 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 2000-2011 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published
by the Free Software Foundation; either version 3 of the License, or (at
your option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 32
#define GMP_LIMB_BYTES 4

/* Generated by tuneup.c, 2011-11-25, gcc 4.2 */

#define MOD_1_NORM_THRESHOLD                 4
#define MOD_1_UNNORM_THRESHOLD               4
#define MOD_1N_TO_MOD_1_1_THRESHOLD          5
#define MOD_1U_TO_MOD_1_1_THRESHOLD          4
#define MOD_1_1_TO_MOD_1_2_THRESHOLD         9
#define MOD_1_2_TO_MOD_1_4_THRESHOLD         0  /* never mpn_mod_1s_2p */
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD      7
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           19

#define MUL_TOOM22_THRESHOLD                24
#define MUL_TOOM33_THRESHOLD                93
#define MUL_TOOM44_THRESHOLD               228
#define MUL_TOOM6H_THRESHOLD               294
#define MUL_TOOM8H_THRESHOLD               458

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      90
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     114
#define MUL_TOOM42_TO_TOOM53_THRESHOLD      89
#define MUL_TOOM42_TO_TOOM63_THRESHOLD      96

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 34
#define SQR_TOOM3_THRESHOLD                116
#define SQR_TOOM4_THRESHOLD                178
#define SQR_TOOM6_THRESHOLD                262
#define SQR_TOOM8_THRESHOLD                597

#define MULMID_TOOM42_THRESHOLD             70

#define MULMOD_BNM1_THRESHOLD               20
#define SQRMOD_BNM1_THRESHOLD               19

#define POWM_SEC_TABLE  6,26,262,991,2212

#define MUL_FFT_MODF_THRESHOLD             690  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    690, 5}, {     25, 6}, {     13, 5}, {     27, 6}, \
    {     15, 5}, {     31, 6}, {     25, 7}, {     13, 6}, \
    {     27, 7}, {     15, 6}, {     33, 7}, {     17, 6}, \
    {     35, 7}, {     19, 6}, {     39, 7}, {     23, 6}, \
    {     47, 7}, {     27, 8}, {     15, 7}, {     35, 8}, \
    {     19, 7}, {     41, 8}, {     23, 7}, {     47, 8}, \
    {     31, 7}, {     63, 8}, {     39, 9}, {     23, 8}, \
    {     51, 9}, {     31, 8}, {     67, 9}, {     39, 8}, \
    {     79, 9}, {     47, 8}, {     95,10}, {     31, 9}, \
    {     63, 8}, {    127, 9}, {     79,10}, {     47, 9}, \
    {     95,11}, {     31,10}, {     63, 9}, {    135,10}, \
    {     79, 9}, {    159,10}, {     95, 9}, {    191,11}, \
    {     63,10}, {    127, 9}, {    255,10}, {    159,11}, \
    {     95,10}, {    191,12}, {     63,11}, {    127,10}, \
    {    271, 9}, {    543,10}, {    287,11}, {    159,10}, \
    {    319, 9}, {    639,11}, {    191,10}, {    383, 9}, \
    {    799,11}, {    223,12}, {   4096,13}, {   8192,14}, \
    {  16384,15}, {  32768,16} }
#define MUL_FFT_TABLE3_SIZE 70
#define MUL_FFT_THRESHOLD                 7552

#define SQR_FFT_MODF_THRESHOLD             630  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    630, 5}, {     25, 6}, {     13, 5}, {     28, 6}, \
    {     15, 5}, {     31, 6}, {     25, 7}, {     13, 6}, \
    {     27, 7}, {     15, 6}, {     33, 7}, {     17, 6}, \
    {     35, 7}, {     19, 6}, {     39, 7}, {     23, 6}, \
    {     47, 7}, {     27, 8}, {     15, 7}, {     35, 8}, \
    {     19, 7}, {     41, 8}, {     23, 7}, {     49, 8}, \
    {     27, 9}, {     15, 8}, {     31, 7}, {     63, 8}, \
    {     39, 9}, {     23, 8}, {     51, 9}, {     31, 8}, \
    {     67, 9}, {     39, 8}, {     79, 9}, {     47, 8}, \
    {     95, 9}, {     55,10}, {     31, 9}, {     79,10}, \
    {     47, 9}, {     95,11}, {     31,10}, {     63, 9}, \
    {    127,10}, {     79, 9}, {    159,10}, {     95,11}, \
    {     63,10}, {    159,11}, {     95,10}, {    191,12}, \
    {     63,11}, {    127,10}, {    271, 9}, {    543,11}, \
    {    159,10}, {    319, 9}, {    671, 8}, {   1343,11}, \
    {    191,10}, {    383, 9}, {    799,12}, {   4096,13}, \
    {   8192,14}, {  16384,15}, {  32768,16} }
#define SQR_FFT_TABLE3_SIZE 67
#define SQR_FFT_THRESHOLD                 5760

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  30
#define MULLO_MUL_N_THRESHOLD            13463

#define DC_DIV_QR_THRESHOLD                 15
#define DC_DIVAPPR_Q_THRESHOLD              49
#define DC_BDIV_QR_THRESHOLD                76
#define DC_BDIV_Q_THRESHOLD                190

#define INV_MULMOD_BNM1_THRESHOLD           46
#define INV_NEWTON_THRESHOLD                35
#define INV_APPR_THRESHOLD                  35

#define BINV_NEWTON_THRESHOLD              324
#define REDC_1_TO_REDC_N_THRESHOLD          83

#define MU_DIV_QR_THRESHOLD               1442
#define MU_DIVAPPR_Q_THRESHOLD            1099
#define MUPI_DIV_QR_THRESHOLD                0  /* always */
#define MU_BDIV_QR_THRESHOLD              1589
#define MU_BDIV_Q_THRESHOLD               1718

#define MATRIX22_STRASSEN_THRESHOLD         31
#define HGCD_THRESHOLD                     118
#define HGCD_APPR_THRESHOLD                149
#define HGCD_REDUCE_THRESHOLD             3524
#define GCD_DC_THRESHOLD                   351
#define GCDEXT_DC_THRESHOLD                309
#define JACOBI_BASE_METHOD                   4

#define GET_STR_DC_THRESHOLD                13
#define GET_STR_PRECOMPUTE_THRESHOLD        26
#define SET_STR_DC_THRESHOLD               517
#define SET_STR_PRECOMPUTE_THRESHOLD      1402
