/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hypersphere.h
 *
 * Code generation for function 'hypersphere'
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
void hypersphere(const emlrtStack *sp, const b_sparse P, const real_T q[298],
                 const c_sparse H, const real_T h[196], const struct0_T *s,
                 const struct1_T *ps, b_sparse *P_hyper, real_T q_hyper[298],
                 b_sparse *H_hyper, real_T h_hyper[196], real_T *c, b_sparse *D,
                 b_sparse *E, real_T *sigma_max_hyper,
                 real_T *shifted_power_iters,
                 real_T *shifted_power_iteration_time,
                 real_T *hypersphere_time);

/* End of code generation (hypersphere.h) */
