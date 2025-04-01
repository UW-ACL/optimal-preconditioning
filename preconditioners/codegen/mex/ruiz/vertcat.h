/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * vertcat.h
 *
 * Code generation for function 'vertcat'
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
void sparse_vertcat(const emlrtStack *sp, const emxArray_real_T *varargin_1_d,
                    const emxArray_int32_T *varargin_1_colidx,
                    const emxArray_int32_T *varargin_1_rowidx,
                    const emxArray_real_T *varargin_2_d,
                    const emxArray_int32_T *varargin_2_colidx,
                    const emxArray_int32_T *varargin_2_rowidx, c_sparse *c);

/* End of code generation (vertcat.h) */
