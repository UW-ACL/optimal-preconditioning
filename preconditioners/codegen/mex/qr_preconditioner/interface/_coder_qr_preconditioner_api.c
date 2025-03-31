/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_qr_preconditioner_api.c
 *
 * Code generation for function '_coder_qr_preconditioner_api'
 *
 */

/* Include files */
#include "_coder_qr_preconditioner_api.h"
#include "qr_preconditioner.h"
#include "qr_preconditioner_data.h"
#include "qr_preconditioner_emxutil.h"
#include "qr_preconditioner_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo hb_emlrtRTEI = {
    1,                              /* lineNo */
    1,                              /* colNo */
    "_coder_qr_preconditioner_api", /* fName */
    ""                              /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, b_sparse *y);

static const mxArray *b_emlrt_marshallOut(const real_T u[298]);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *c_emlrt_marshallOut(const real_T u[58408]);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_int32_T *y);

static const mxArray *d_emlrt_marshallOut(const real_T u[196]);

static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId);

static const mxArray *e_emlrt_marshallOut(const real_T u);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *P,
                             const char_T *identifier, b_sparse *y);

static const mxArray *emlrt_marshallOut(const b_sparse u);

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *q,
                                   const char_T *identifier))[298];

static const mxArray *f_emlrt_marshallOut(const b_sparse u);

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[298];

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *H,
                               const char_T *identifier, c_sparse *y);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, c_sparse *y);

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h,
                                   const char_T *identifier))[196];

static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[196];

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_int32_T *ret);

static int32_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId);

static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[298];

static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[196];

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, b_sparse *y)
{
  emlrtMsgIdentifier thisId;
  const mxArray *propValues[4];
  int32_T iv[2];
  const char_T *propClasses[4] = {
      "coder.internal.sparse", "coder.internal.sparse", "coder.internal.sparse",
      "coder.internal.sparse"};
  const char_T *propNames[4] = {"d", "colidx", "rowidx", "maxnz"};
  boolean_T bv[2];
  propValues[0] = NULL;
  propValues[1] = NULL;
  propValues[2] = NULL;
  propValues[3] = NULL;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  iv[0] = 298;
  bv[0] = false;
  iv[1] = 298;
  bv[1] = false;
  emlrtCheckSparse((emlrtCTX)sp, parentId, u, &iv[0], &bv[0], mxDOUBLE_CLASS,
                   mxREAL);
  emlrtCheckMcosClass2017a((emlrtCTX)sp, parentId, u, "sparse");
  emlrtAssign(&u, emlrtConvertInstanceToRedirectTarget(
                      (emlrtCTX)sp, u, 0, "coder.internal.sparse"));
  emlrtCheckMcosClass2017a((emlrtCTX)sp, parentId, u, "coder.internal.sparse");
  emlrtGetAllProperties((emlrtCTX)sp, u, 0, 4, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  thisId.fIdentifier = "d";
  c_emlrt_marshallIn(sp, emlrtAlias(propValues[0]), &thisId, y->d);
  thisId.fIdentifier = "colidx";
  d_emlrt_marshallIn(sp, emlrtAlias(propValues[1]), &thisId, y->colidx);
  thisId.fIdentifier = "rowidx";
  d_emlrt_marshallIn(sp, emlrtAlias(propValues[2]), &thisId, y->rowidx);
  thisId.fIdentifier = "maxnz";
  y->maxnz = e_emlrt_marshallIn(sp, emlrtAlias(propValues[3]), &thisId);
  emlrtDestroyArrays(4, &propValues[0]);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const real_T u[298])
{
  static const int32_T i = 0;
  static const int32_T i1 = 298;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &i1, 1);
  emlrtAssign(&y, m);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  l_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *c_emlrt_marshallOut(const real_T u[58408])
{
  static const int32_T iv[2] = {0, 0};
  static const int32_T iv1[2] = {196, 298};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_int32_T *y)
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *d_emlrt_marshallOut(const real_T u[196])
{
  static const int32_T i = 0;
  static const int32_T i1 = 196;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &i1, 1);
  emlrtAssign(&y, m);
  return y;
}

static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *e_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *P,
                             const char_T *identifier, b_sparse *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(P), &thisId, y);
  emlrtDestroyArray(&P);
}

static const mxArray *emlrt_marshallOut(const b_sparse u)
{
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateSparse(&u.d->data[0], &u.colidx->data[0],
                                    &u.rowidx->data[0], 298, 298, u.maxnz,
                                    mxDOUBLE_CLASS, mxREAL));
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *q,
                                   const char_T *identifier))[298]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[298];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = g_emlrt_marshallIn(sp, emlrtAlias(q), &thisId);
  emlrtDestroyArray(&q);
  return y;
}

static const mxArray *f_emlrt_marshallOut(const b_sparse u)
{
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateSparse(&u.d->data[0], &u.colidx->data[0],
                                    &u.rowidx->data[0], 196, 196, u.maxnz,
                                    mxDOUBLE_CLASS, mxREAL));
  return y;
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[298]
{
  real_T(*y)[298];
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *H,
                               const char_T *identifier, c_sparse *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  i_emlrt_marshallIn(sp, emlrtAlias(H), &thisId, y);
  emlrtDestroyArray(&H);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, c_sparse *y)
{
  emlrtMsgIdentifier thisId;
  const mxArray *propValues[4];
  int32_T iv[2];
  const char_T *propClasses[4] = {
      "coder.internal.sparse", "coder.internal.sparse", "coder.internal.sparse",
      "coder.internal.sparse"};
  const char_T *propNames[4] = {"d", "colidx", "rowidx", "maxnz"};
  boolean_T bv[2];
  propValues[0] = NULL;
  propValues[1] = NULL;
  propValues[2] = NULL;
  propValues[3] = NULL;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  iv[0] = 196;
  bv[0] = false;
  iv[1] = 298;
  bv[1] = false;
  emlrtCheckSparse((emlrtCTX)sp, parentId, u, &iv[0], &bv[0], mxDOUBLE_CLASS,
                   mxREAL);
  emlrtCheckMcosClass2017a((emlrtCTX)sp, parentId, u, "sparse");
  emlrtAssign(&u, emlrtConvertInstanceToRedirectTarget(
                      (emlrtCTX)sp, u, 0, "coder.internal.sparse"));
  emlrtCheckMcosClass2017a((emlrtCTX)sp, parentId, u, "coder.internal.sparse");
  emlrtGetAllProperties((emlrtCTX)sp, u, 0, 4, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  thisId.fIdentifier = "d";
  c_emlrt_marshallIn(sp, emlrtAlias(propValues[0]), &thisId, y->d);
  thisId.fIdentifier = "colidx";
  d_emlrt_marshallIn(sp, emlrtAlias(propValues[1]), &thisId, y->colidx);
  thisId.fIdentifier = "rowidx";
  d_emlrt_marshallIn(sp, emlrtAlias(propValues[2]), &thisId, y->rowidx);
  thisId.fIdentifier = "maxnz";
  e_emlrt_marshallIn(sp, emlrtAlias(propValues[3]), &thisId);
  emlrtDestroyArrays(4, &propValues[0]);
  emlrtDestroyArray(&u);
}

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h,
                                   const char_T *identifier))[196]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[196];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = k_emlrt_marshallIn(sp, emlrtAlias(h), &thisId);
  emlrtDestroyArray(&h);
  return y;
}

static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[196]
{
  real_T(*y)[196];
  y = p_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims = -1;
  real_T *ret_data;
  int32_T i;
  int32_T i1;
  boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_real_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret_data = ret->data;
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_int32_T *ret)
{
  static const int32_T dims = -1;
  int32_T i;
  int32_T i1;
  int32_T *ret_data;
  boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "int32", false, 1U,
                            (const void *)&dims, &b, &i);
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_int32_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret_data = ret->data;
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret_data[0], 4, false);
  emlrtDestroyArray(&src);
}

static int32_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  int32_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "int32", false, 0U,
                          (const void *)&dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[298]
{
  static const int32_T dims = 298;
  real_T(*ret)[298];
  int32_T i;
  boolean_T b = false;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret = (real_T(*)[298])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[196]
{
  static const int32_T dims = 196;
  real_T(*ret)[196];
  int32_T i;
  boolean_T b = false;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret = (real_T(*)[196])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void qr_preconditioner_api(qr_preconditionerStackData *SD,
                           const mxArray *const prhs[4], int32_T nlhs,
                           const mxArray *plhs[8])
{
  b_sparse D;
  b_sparse E;
  b_sparse P;
  b_sparse P_qr;
  c_sparse H;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*H_qr)[58408];
  real_T(*q)[298];
  real_T(*q_qr)[298];
  real_T(*h)[196];
  real_T(*h_qr)[196];
  real_T c;
  real_T qr_time;
  st.tls = emlrtRootTLSGlobal;
  q_qr = (real_T(*)[298])mxMalloc(sizeof(real_T[298]));
  H_qr = (real_T(*)[58408])mxMalloc(sizeof(real_T[58408]));
  h_qr = (real_T(*)[196])mxMalloc(sizeof(real_T[196]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  /* Marshall function inputs */
  emxInitStruct_sparse(&st, &P, &hb_emlrtRTEI);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "P", &P);
  q = f_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "q");
  emxInitStruct_sparse1(&st, &H, &hb_emlrtRTEI);
  h_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "H", &H);
  h = j_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "h");
  /* Invoke the target function */
  emxInitStruct_sparse(&st, &P_qr, &hb_emlrtRTEI);
  emxInitStruct_sparse(&st, &D, &hb_emlrtRTEI);
  emxInitStruct_sparse(&st, &E, &hb_emlrtRTEI);
  qr_preconditioner(SD, &st, P, *q, H, *h, &P_qr, *q_qr, *H_qr, *h_qr, &c, &D,
                    &E, &qr_time);
  emxFreeStruct_sparse1(&st, &H);
  emxFreeStruct_sparse(&st, &P);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(P_qr);
  emxFreeStruct_sparse(&st, &P_qr);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(*q_qr);
  }
  if (nlhs > 2) {
    plhs[2] = c_emlrt_marshallOut(*H_qr);
  }
  if (nlhs > 3) {
    plhs[3] = d_emlrt_marshallOut(*h_qr);
  }
  if (nlhs > 4) {
    plhs[4] = e_emlrt_marshallOut(c);
  }
  if (nlhs > 5) {
    plhs[5] = emlrt_marshallOut(D);
  }
  emxFreeStruct_sparse(&st, &D);
  if (nlhs > 6) {
    plhs[6] = f_emlrt_marshallOut(E);
  }
  emxFreeStruct_sparse(&st, &E);
  if (nlhs > 7) {
    plhs[7] = e_emlrt_marshallOut(qr_time);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_qr_preconditioner_api.c) */
