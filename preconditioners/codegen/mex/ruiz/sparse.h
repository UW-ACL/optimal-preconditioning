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
#include "rtwtypes.h"
#include "ruiz_types.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
int32_T b_sparse_parenReference(const emlrtStack *sp,
                                const emxArray_real_T *this_d,
                                const emxArray_int32_T *this_colidx,
                                const emxArray_int32_T *this_rowidx,
                                emxArray_real_T *s_d,
                                emxArray_int32_T *s_colidx,
                                emxArray_int32_T *s_rowidx);

void b_sparse_spallocLike(const emlrtStack *sp, int32_T nzmax,
                          emxArray_real_T *s_d, emxArray_int32_T *s_colidx,
                          emxArray_int32_T *s_rowidx);

void b_sparse_times(const emlrtStack *sp, real_T a, const emxArray_real_T *b_d,
                    const emxArray_int32_T *b_colidx,
                    const emxArray_int32_T *b_rowidx, b_sparse *s);

real_T sparse_full(const emlrtStack *sp, const emxArray_real_T *this_d,
                   const emxArray_int32_T *this_colidx);

int32_T sparse_parenReference(const emlrtStack *sp,
                              const emxArray_real_T *this_d,
                              const emxArray_int32_T *this_colidx,
                              const emxArray_int32_T *this_rowidx,
                              emxArray_real_T *s_d, emxArray_int32_T *s_colidx,
                              emxArray_int32_T *s_rowidx);

void sparse_spallocLike(const emlrtStack *sp, int32_T nzmax,
                        emxArray_real_T *s_d, emxArray_int32_T *s_colidx,
                        emxArray_int32_T *s_rowidx);

void sparse_times(const emlrtStack *sp, const emxArray_real_T *b_d,
                  const emxArray_int32_T *b_colidx,
                  const emxArray_int32_T *b_rowidx, c_sparse *s);

void sparse_transpose(const emlrtStack *sp, const emxArray_real_T *this_d,
                      const emxArray_int32_T *this_colidx,
                      const emxArray_int32_T *this_rowidx, emxArray_real_T *y_d,
                      emxArray_int32_T *y_colidx, emxArray_int32_T *y_rowidx);

/* End of code generation (sparse.h) */
