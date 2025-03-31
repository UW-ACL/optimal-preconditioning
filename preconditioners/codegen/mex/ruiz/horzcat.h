/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * horzcat.h
 *
 * Code generation for function 'horzcat'
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
void b_sparse_horzcat(const emlrtStack *sp, const emxArray_real_T *varargin_1_d,
                      const emxArray_int32_T *varargin_1_colidx,
                      const emxArray_int32_T *varargin_1_rowidx,
                      emxArray_real_T *c_d, emxArray_int32_T *c_colidx,
                      emxArray_int32_T *c_rowidx);

void sparse_horzcat(const emlrtStack *sp, const emxArray_real_T *varargin_1_d,
                    const emxArray_int32_T *varargin_1_colidx,
                    const emxArray_int32_T *varargin_1_rowidx,
                    const emxArray_real_T *varargin_2_d,
                    const emxArray_int32_T *varargin_2_colidx,
                    const emxArray_int32_T *varargin_2_rowidx,
                    emxArray_real_T *c_d, emxArray_int32_T *c_colidx,
                    emxArray_int32_T *c_rowidx);

/* End of code generation (horzcat.h) */
