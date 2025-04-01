/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ruiz.h
 *
 * Code generation for function 'ruiz'
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
void ruiz(const emlrtStack *sp, const b_sparse P, const real_T q[298],
          const b_sparse H, const real_T h[196], const struct0_T *ps,
          b_sparse *P_ruiz, real_T q_ruiz[298], b_sparse *H_ruiz,
          real_T h_ruiz[196], real_T *c, b_sparse *D, b_sparse *E,
          real_T *ruiz_iters, real_T *ruiz_time);

/* End of code generation (ruiz.h) */
