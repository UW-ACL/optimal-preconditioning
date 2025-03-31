/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qr_preconditioner_emxutil.h
 *
 * Code generation for function 'qr_preconditioner_emxutil'
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
void emxCopyStruct_sparse(const emlrtStack *sp, b_sparse *dst,
                          const b_sparse *src, const emlrtRTEInfo *srcLocation);

void emxCopy_int32_T(const emlrtStack *sp, emxArray_int32_T **dst,
                     emxArray_int32_T *const *src,
                     const emlrtRTEInfo *srcLocation);

void emxCopy_real_T(const emlrtStack *sp, emxArray_real_T **dst,
                    emxArray_real_T *const *src,
                    const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_int32_T(const emlrtStack *sp, emxArray_int32_T *emxArray,
                               int32_T oldNumel,
                               const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T *emxArray,
                              int32_T oldNumel,
                              const emlrtRTEInfo *srcLocation);

void emxFreeStruct_sparse(const emlrtStack *sp, b_sparse *pStruct);

void emxFreeStruct_sparse1(const emlrtStack *sp, c_sparse *pStruct);

void emxFree_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray);

void emxFree_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray);

void emxInitStruct_sparse(const emlrtStack *sp, b_sparse *pStruct,
                          const emlrtRTEInfo *srcLocation);

void emxInitStruct_sparse1(const emlrtStack *sp, c_sparse *pStruct,
                           const emlrtRTEInfo *srcLocation);

void emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray,
                     const emlrtRTEInfo *srcLocation);

void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                    int32_T numDimensions, const emlrtRTEInfo *srcLocation);

/* End of code generation (qr_preconditioner_emxutil.h) */
