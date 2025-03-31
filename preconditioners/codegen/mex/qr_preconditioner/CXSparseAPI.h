/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CXSparseAPI.h
 *
 * Code generation for function 'CXSparseAPI'
 *
 */

#pragma once

/* Include files */
#include "qr_preconditioner_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
int32_T CXSparseAPI_iteratedQR(const emlrtStack *sp, const emxArray_real_T *A_d,
                               const emxArray_int32_T *A_colidx,
                               const emxArray_int32_T *A_rowidx,
                               const emxArray_int32_T *b_colidx,
                               const emxArray_int32_T *b_rowidx,
                               emxArray_real_T *out_d,
                               emxArray_int32_T *out_colidx,
                               emxArray_int32_T *out_rowidx);

/* End of code generation (CXSparseAPI.h) */
