/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mldivide.h
 *
 * Code generation for function 'mldivide'
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
void mldivide(qr_preconditionerStackData *SD, const emlrtStack *sp,
              const real_T A[38416], real_T B[196]);

/* End of code generation (mldivide.h) */
