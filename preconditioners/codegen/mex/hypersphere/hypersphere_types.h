/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hypersphere_types.h
 *
 * Code generation for function 'hypersphere'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  real_T eps_abs_cots;
  real_T eps_rel_cots;
  real_T eps_abs_pipg;
  real_T eps_rel_pipg;
  real_T percent_rel_err;
  real_T omg;
  real_T rho_extrap;
  real_T max_iters;
  char_T termination[12];
  real_T check_every;
  real_T eps_abs_power;
  real_T eps_rel_power;
  real_T eps_buff_power;
  real_T max_iters_power;
} struct0_T;
#endif /* typedef_struct0_T */

#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct {
  char_T p_norm[3];
  real_T max_iters_ruiz;
  real_T eps_ruiz;
  real_T row_norm_tol;
  real_T eps_abs_shifted_power;
  real_T eps_rel_shifted_power;
  real_T eps_buff_shifted_power;
  real_T max_iters_shifted_power;
} struct1_T;
#endif /* typedef_struct1_T */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T {
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int32_T */
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /* typedef_emxArray_int32_T */

#ifndef typedef_b_sparse
#define typedef_b_sparse
typedef struct {
  emxArray_real_T *d;
  emxArray_int32_T *colidx;
  emxArray_int32_T *rowidx;
  int32_T maxnz;
} b_sparse;
#endif /* typedef_b_sparse */

#ifndef typedef_c_sparse
#define typedef_c_sparse
typedef struct {
  emxArray_real_T *d;
  emxArray_int32_T *colidx;
  emxArray_int32_T *rowidx;
} c_sparse;
#endif /* typedef_c_sparse */

/* End of code generation (hypersphere_types.h) */
