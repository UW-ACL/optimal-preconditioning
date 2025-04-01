/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_ruiz_api.c
 *
 * Code generation for function '_coder_ruiz_api'
 *
 */

/* Include files */
#include "_coder_ruiz_api.h"
#include "rt_nonfinite.h"
#include "ruiz.h"
#include "ruiz_data.h"
#include "ruiz_emxutil.h"
#include "ruiz_types.h"

/* Variable Definitions */
static emlrtRTEInfo sb_emlrtRTEI = {
    1,                 /* lineNo */
    1,                 /* colNo */
    "_coder_ruiz_api", /* fName */
    ""                 /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, b_sparse *y);

static const mxArray *b_emlrt_marshallOut(const real_T u[298]);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *c_emlrt_marshallOut(const b_sparse u);

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
                               const char_T *identifier, b_sparse *y);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, b_sparse *y);

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h,
                                   const char_T *identifier))[196];

static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[196];

static struct0_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ps,
                                    const char_T *identifier);

static struct0_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[3]);

static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_int32_T *ret);

static int32_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId);

static real_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[298];

static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[196];

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[3]);

static real_T v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

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
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *c_emlrt_marshallOut(const b_sparse u)
{
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateSparse(&u.d->data[0], &u.colidx->data[0],
                                    &u.rowidx->data[0], 196, 298, u.maxnz,
                                    mxDOUBLE_CLASS, mxREAL));
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_int32_T *y)
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
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
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
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
  y = s_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *H,
                               const char_T *identifier, b_sparse *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  i_emlrt_marshallIn(sp, emlrtAlias(H), &thisId, y);
  emlrtDestroyArray(&H);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
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
  y->maxnz = e_emlrt_marshallIn(sp, emlrtAlias(propValues[3]), &thisId);
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
  y = t_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static struct0_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ps,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct0_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = m_emlrt_marshallIn(sp, emlrtAlias(ps), &thisId);
  emlrtDestroyArray(&ps);
  return y;
}

static struct0_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[8] = {"p_norm",
                                        "max_iters_ruiz",
                                        "eps_ruiz",
                                        "row_norm_tol",
                                        "eps_abs_shifted_power",
                                        "eps_rel_shifted_power",
                                        "eps_buff_shifted_power",
                                        "max_iters_shifted_power"};
  emlrtMsgIdentifier thisId;
  struct0_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 8,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "p_norm";
  n_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "p_norm")),
      &thisId, y.p_norm);
  thisId.fIdentifier = "max_iters_ruiz";
  y.max_iters_ruiz =
      o_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        1, "max_iters_ruiz")),
                         &thisId);
  thisId.fIdentifier = "eps_ruiz";
  y.eps_ruiz = o_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "eps_ruiz")),
      &thisId);
  thisId.fIdentifier = "row_norm_tol";
  y.row_norm_tol =
      o_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        3, "row_norm_tol")),
                         &thisId);
  thisId.fIdentifier = "eps_abs_shifted_power";
  y.eps_abs_shifted_power = o_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4,
                                     "eps_abs_shifted_power")),
      &thisId);
  thisId.fIdentifier = "eps_rel_shifted_power";
  y.eps_rel_shifted_power = o_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5,
                                     "eps_rel_shifted_power")),
      &thisId);
  thisId.fIdentifier = "eps_buff_shifted_power";
  y.eps_buff_shifted_power = o_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6,
                                     "eps_buff_shifted_power")),
      &thisId);
  thisId.fIdentifier = "max_iters_shifted_power";
  y.max_iters_shifted_power = o_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7,
                                     "max_iters_shifted_power")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[3])
{
  u_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = v_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static int32_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static real_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[3])
{
  static const int32_T dims[2] = {1, 3};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 3);
  emlrtDestroyArray(&src);
}

static real_T v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void ruiz_api(const mxArray *const prhs[5], int32_T nlhs,
              const mxArray *plhs[9])
{
  b_sparse D;
  b_sparse E;
  b_sparse H;
  b_sparse H_ruiz;
  b_sparse P;
  b_sparse P_ruiz;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  struct0_T ps;
  real_T(*q)[298];
  real_T(*q_ruiz)[298];
  real_T(*h)[196];
  real_T(*h_ruiz)[196];
  real_T c;
  real_T ruiz_iters;
  real_T ruiz_time;
  st.tls = emlrtRootTLSGlobal;
  q_ruiz = (real_T(*)[298])mxMalloc(sizeof(real_T[298]));
  h_ruiz = (real_T(*)[196])mxMalloc(sizeof(real_T[196]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  /* Marshall function inputs */
  emxInitStruct_sparse1(&st, &P, &sb_emlrtRTEI);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "P", &P);
  q = f_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "q");
  emxInitStruct_sparse1(&st, &H, &sb_emlrtRTEI);
  h_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "H", &H);
  h = j_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "h");
  ps = l_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "ps");
  /* Invoke the target function */
  emxInitStruct_sparse1(&st, &P_ruiz, &sb_emlrtRTEI);
  emxInitStruct_sparse1(&st, &H_ruiz, &sb_emlrtRTEI);
  emxInitStruct_sparse1(&st, &D, &sb_emlrtRTEI);
  emxInitStruct_sparse1(&st, &E, &sb_emlrtRTEI);
  ruiz(&st, P, *q, H, *h, &ps, &P_ruiz, *q_ruiz, &H_ruiz, *h_ruiz, &c, &D, &E,
       &ruiz_iters, &ruiz_time);
  emxFreeStruct_sparse1(&st, &H);
  emxFreeStruct_sparse1(&st, &P);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(P_ruiz);
  emxFreeStruct_sparse1(&st, &P_ruiz);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(*q_ruiz);
  }
  if (nlhs > 2) {
    plhs[2] = c_emlrt_marshallOut(H_ruiz);
  }
  emxFreeStruct_sparse1(&st, &H_ruiz);
  if (nlhs > 3) {
    plhs[3] = d_emlrt_marshallOut(*h_ruiz);
  }
  if (nlhs > 4) {
    plhs[4] = e_emlrt_marshallOut(c);
  }
  if (nlhs > 5) {
    plhs[5] = emlrt_marshallOut(D);
  }
  emxFreeStruct_sparse1(&st, &D);
  if (nlhs > 6) {
    plhs[6] = f_emlrt_marshallOut(E);
  }
  emxFreeStruct_sparse1(&st, &E);
  if (nlhs > 7) {
    plhs[7] = e_emlrt_marshallOut(ruiz_iters);
  }
  if (nlhs > 8) {
    plhs[8] = e_emlrt_marshallOut(ruiz_time);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_ruiz_api.c) */
