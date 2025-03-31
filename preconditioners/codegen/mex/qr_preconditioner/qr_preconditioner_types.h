/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qr_preconditioner_types.h
 *
 * Code generation for function 'qr_preconditioner'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
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

#ifndef typedef_b_mldivide
#define typedef_b_mldivide
typedef struct {
  real_T A[38416];
} b_mldivide;
#endif /* typedef_b_mldivide */

#ifndef typedef_b_qr_preconditioner
#define typedef_b_qr_preconditioner
typedef struct {
  real_T y[58408];
  real_T Q_qr[58408];
  real_T R_qr[38416];
  real_T b_R_qr[38416];
} b_qr_preconditioner;
#endif /* typedef_b_qr_preconditioner */

#ifndef typedef_qr_preconditionerStackData
#define typedef_qr_preconditionerStackData
typedef struct {
  b_mldivide f0;
  b_qr_preconditioner f1;
} qr_preconditionerStackData;
#endif /* typedef_qr_preconditionerStackData */

/* End of code generation (qr_preconditioner_types.h) */
