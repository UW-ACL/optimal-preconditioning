/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sparse.h
 *
 * Code generation for function 'sparse'
 *
 */

#pragma once

/* Include files */
#include "hypersphere_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_sparse_times(const emlrtStack *sp, real_T a, const emxArray_real_T *b_d,
                    const emxArray_int32_T *b_colidx,
                    const emxArray_int32_T *b_rowidx, b_sparse *s);

void b_sparse_transpose(const emlrtStack *sp, const emxArray_real_T *this_d,
                        const emxArray_int32_T *this_colidx,
                        const emxArray_int32_T *this_rowidx,
                        emxArray_real_T *y_d, emxArray_int32_T *y_colidx,
                        emxArray_int32_T *y_rowidx);

int32_T sparse_times(const emlrtStack *sp, real_T a, const emxArray_real_T *b_d,
                     const emxArray_int32_T *b_colidx,
                     const emxArray_int32_T *b_rowidx, emxArray_real_T *s_d,
                     emxArray_int32_T *s_colidx, emxArray_int32_T *s_rowidx);

void sparse_transpose(const emlrtStack *sp, const emxArray_real_T *this_d,
                      const emxArray_int32_T *this_colidx,
                      const emxArray_int32_T *this_rowidx, b_sparse *y);

/* End of code generation (sparse.h) */
