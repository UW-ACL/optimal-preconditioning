/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * spfun.h
 *
 * Code generation for function 'spfun'
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
void spfun(const emlrtStack *sp, real_T fun_workspace_sa,
           const emxArray_real_T *s_d, const emxArray_int32_T *s_colidx,
           const emxArray_int32_T *s_rowidx, b_sparse *y);

/* End of code generation (spfun.h) */
