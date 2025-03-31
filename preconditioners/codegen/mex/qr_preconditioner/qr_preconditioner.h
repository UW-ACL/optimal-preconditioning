/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qr_preconditioner.h
 *
 * Code generation for function 'qr_preconditioner'
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
void qr_preconditioner(qr_preconditionerStackData *SD, const emlrtStack *sp,
                       const b_sparse P, const real_T q[298], const c_sparse H,
                       const real_T h[196], b_sparse *P_qr, real_T q_qr[298],
                       real_T H_qr[58408], real_T h_qr[196], real_T *c,
                       b_sparse *D, b_sparse *E, real_T *qr_time);

/* End of code generation (qr_preconditioner.h) */
