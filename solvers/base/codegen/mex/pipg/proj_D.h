/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * proj_D.h
 *
 * Code generation for function 'proj_D'
 *
 */

#pragma once

/* Include files */
#include "pipg_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void proj_D(const emlrtStack *sp, const real_T z[298], real_T p_N, real_T p_nx,
            real_T p_nu, const real_T p_x_init[4], real_T p_u_max,
            real_T p_theta, real_T p_rho, real_T p_v_max,
            emxArray_real_T *z_proj);

/* End of code generation (proj_D.h) */
