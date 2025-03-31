/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sparse1.h
 *
 * Code generation for function 'sparse1'
 *
 */

#pragma once

/* Include files */
#include "pipg_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void assertValidIndexArg(const emlrtStack *sp, const emxArray_real_T *s,
                         emxArray_int32_T *sint);

void permuteVector(const emlrtStack *sp, const emxArray_int32_T *idx,
                   emxArray_int32_T *y);

int32_T sparse_times(const emlrtStack *sp, real_T a, const emxArray_real_T *b_d,
                     const emxArray_int32_T *b_colidx,
                     const emxArray_int32_T *b_rowidx, int32_T b_m, int32_T b_n,
                     emxArray_real_T *s_d, emxArray_int32_T *s_colidx,
                     emxArray_int32_T *s_rowidx, int32_T *s_n);

/* End of code generation (sparse1.h) */
