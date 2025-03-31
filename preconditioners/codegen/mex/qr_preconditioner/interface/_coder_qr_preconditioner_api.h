/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_qr_preconditioner_api.h
 *
 * Code generation for function '_coder_qr_preconditioner_api'
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
void qr_preconditioner_api(qr_preconditionerStackData *SD,
                           const mxArray *const prhs[4], int32_T nlhs,
                           const mxArray *plhs[8]);

/* End of code generation (_coder_qr_preconditioner_api.h) */
