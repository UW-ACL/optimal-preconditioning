/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_pipg_api.c
 *
 * Code generation for function '_coder_pipg_api'
 *
 */

/* Include files */
#include "_coder_pipg_api.h"
#include "pipg.h"
#include "pipg_data.h"
#include "pipg_emxutil.h"
#include "pipg_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRTEInfo rc_emlrtRTEI = {
    1,                 /* lineNo */
    1,                 /* colNo */
    "_coder_pipg_api", /* fName */
    ""                 /* pName */
};

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_int32_T *ret);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, b_sparse *y);

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);

static int32_T bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *c_emlrt_marshallOut(const real_T u);

static real_T (*cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[298];

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_int32_T *y);

static real_T (*db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[58408];

static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId);

static real_T (*eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[196];

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *P,
                             const char_T *identifier, b_sparse *y);

static const mxArray *emlrt_marshallOut(const real_T u[298]);

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *q,
                                   const char_T *identifier))[298];

static real_T fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId);

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[298];

static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[4]);

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *H,
                                   const char_T *identifier))[58408];

static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[16]);

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[58408];

static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[4]);

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h,
                                   const char_T *identifier))[196];

static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[200]);

static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[196];

static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                char_T ret[12]);

static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c,
                                 const char_T *identifier);

static real_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *E,
                               const char_T *identifier);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *p,
                               const char_T *identifier, struct0_T *y);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct0_T *y);

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[4]);

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[16]);

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[4]);

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[200]);

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *s,
                               const char_T *identifier, struct1_T *y);

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct1_T *y);

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y[12]);

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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
  e_emlrt_marshallIn(sp, emlrtAlias(propValues[3]), &thisId);
  emlrtDestroyArrays(4, &propValues[0]);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  static const int32_T i = 0;
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 1);
  emlrtAssign(&y, m);
  return y;
}

static int32_T bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *c_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_int32_T *y)
{
  ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[58408]
{
  static const int32_T dims[2] = {196, 298};
  real_T(*ret)[58408];
  int32_T iv[2];
  boolean_T bv[2] = {false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[58408])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static const mxArray *emlrt_marshallOut(const real_T u[298])
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

static real_T fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[298]
{
  real_T(*y)[298];
  y = cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[4])
{
  static const int32_T dims = 4;
  real_T(*r)[4];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  r = (real_T(*)[4])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  ret[2] = (*r)[2];
  ret[3] = (*r)[3];
  emlrtDestroyArray(&src);
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *H,
                                   const char_T *identifier))[58408]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[58408];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = i_emlrt_marshallIn(sp, emlrtAlias(H), &thisId);
  emlrtDestroyArray(&H);
  return y;
}

static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[16])
{
  static const int32_T dims[2] = {4, 4};
  real_T(*r)[16];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[16])emlrtMxGetData(src);
  for (i = 0; i < 16; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[58408]
{
  real_T(*y)[58408];
  y = db_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[4])
{
  static const int32_T dims[2] = {2, 2};
  real_T(*r)[4];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[4])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  ret[2] = (*r)[2];
  ret[3] = (*r)[3];
  emlrtDestroyArray(&src);
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

static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[200])
{
  static const int32_T dims[2] = {4, 50};
  real_T(*r)[200];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[200])emlrtMxGetData(src);
  for (i = 0; i < 200; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[196]
{
  real_T(*y)[196];
  y = eb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, char_T ret[12])
{
  static const int32_T dims[2] = {1, 12};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 12);
  emlrtDestroyArray(&src);
}

static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = m_emlrt_marshallIn(sp, emlrtAlias(c), &thisId);
  emlrtDestroyArray(&c);
  return y;
}

static real_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = fb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *E,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  o_emlrt_marshallIn(sp, emlrtAlias(E), &thisId);
  emlrtDestroyArray(&E);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  emlrtMsgIdentifier thisId;
  emxArray_int32_T *c_propValues;
  emxArray_int32_T *d_propValues;
  emxArray_real_T *b_propValues;
  const mxArray *propValues[4];
  int32_T iv[2];
  const char_T *propClasses[4] = {
      "coder.internal.sparse", "coder.internal.sparse", "coder.internal.sparse",
      "coder.internal.sparse"};
  const char_T *propNames[4] = {"d", "colidx", "rowidx", "maxnz"};
  boolean_T bv[2];
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  propValues[0] = NULL;
  propValues[1] = NULL;
  propValues[2] = NULL;
  propValues[3] = NULL;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  iv[0] = 196;
  bv[0] = false;
  iv[1] = 196;
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
  emxInit_real_T(sp, &b_propValues, 1, (emlrtRTEInfo *)NULL);
  c_emlrt_marshallIn(sp, emlrtAlias(propValues[0]), &thisId, b_propValues);
  emxFree_real_T(sp, &b_propValues);
  thisId.fIdentifier = "colidx";
  emxInit_int32_T(sp, &c_propValues, (emlrtRTEInfo *)NULL);
  d_emlrt_marshallIn(sp, emlrtAlias(propValues[1]), &thisId, c_propValues);
  emxFree_int32_T(sp, &c_propValues);
  thisId.fIdentifier = "rowidx";
  emxInit_int32_T(sp, &d_propValues, (emlrtRTEInfo *)NULL);
  d_emlrt_marshallIn(sp, emlrtAlias(propValues[2]), &thisId, d_propValues);
  emxFree_int32_T(sp, &d_propValues);
  thisId.fIdentifier = "maxnz";
  e_emlrt_marshallIn(sp, emlrtAlias(propValues[3]), &thisId);
  emlrtDestroyArrays(4, &propValues[0]);
  emlrtDestroyArray(&u);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *p,
                               const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  q_emlrt_marshallIn(sp, emlrtAlias(p), &thisId, y);
  emlrtDestroyArray(&p);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct0_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[13] = {
      "N",   "dt",    "nx", "nu", "x_init",   "u_max", "theta",
      "rho", "v_max", "Q",  "R",  "x_target", "x_ref"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 13,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "N";
  y->N = m_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "N")),
      &thisId);
  thisId.fIdentifier = "dt";
  y->dt = m_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "dt")),
      &thisId);
  thisId.fIdentifier = "nx";
  y->nx = m_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "nx")),
      &thisId);
  thisId.fIdentifier = "nu";
  y->nu = m_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "nu")),
      &thisId);
  thisId.fIdentifier = "x_init";
  r_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "x_init")),
      &thisId, y->x_init);
  thisId.fIdentifier = "u_max";
  y->u_max = m_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "u_max")),
      &thisId);
  thisId.fIdentifier = "theta";
  y->theta = m_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "theta")),
      &thisId);
  thisId.fIdentifier = "rho";
  y->rho = m_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "rho")),
      &thisId);
  thisId.fIdentifier = "v_max";
  y->v_max = m_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "v_max")),
      &thisId);
  thisId.fIdentifier = "Q";
  s_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 9, "Q")),
      &thisId, y->Q);
  thisId.fIdentifier = "R";
  t_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 10, "R")),
      &thisId, y->R);
  thisId.fIdentifier = "x_target";
  r_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 11, "x_target")),
      &thisId, y->x_target);
  thisId.fIdentifier = "x_ref";
  u_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 12, "x_ref")),
      &thisId, y->x_ref);
  emlrtDestroyArray(&u);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[4])
{
  gb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[16])
{
  hb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[4])
{
  ib_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[200])
{
  jb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *s,
                               const char_T *identifier, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  w_emlrt_marshallIn(sp, emlrtAlias(s), &thisId, y);
  emlrtDestroyArray(&s);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct1_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[14] = {
      "eps_abs_cots",   "eps_rel_cots",    "eps_abs_pipg",
      "eps_rel_pipg",   "percent_rel_err", "omg",
      "rho_extrap",     "max_iters",       "termination",
      "check_every",    "eps_abs_power",   "eps_rel_power",
      "eps_buff_power", "max_iters_power"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 14,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "eps_abs_cots";
  y->eps_abs_cots =
      m_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        0, "eps_abs_cots")),
                         &thisId);
  thisId.fIdentifier = "eps_rel_cots";
  y->eps_rel_cots =
      m_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        1, "eps_rel_cots")),
                         &thisId);
  thisId.fIdentifier = "eps_abs_pipg";
  y->eps_abs_pipg =
      m_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        2, "eps_abs_pipg")),
                         &thisId);
  thisId.fIdentifier = "eps_rel_pipg";
  y->eps_rel_pipg =
      m_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        3, "eps_rel_pipg")),
                         &thisId);
  thisId.fIdentifier = "percent_rel_err";
  y->percent_rel_err =
      m_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        4, "percent_rel_err")),
                         &thisId);
  thisId.fIdentifier = "omg";
  y->omg = m_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "omg")),
      &thisId);
  thisId.fIdentifier = "rho_extrap";
  y->rho_extrap = m_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "rho_extrap")),
      &thisId);
  thisId.fIdentifier = "max_iters";
  y->max_iters = m_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "max_iters")),
      &thisId);
  thisId.fIdentifier = "termination";
  x_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8,
                                                    "termination")),
                     &thisId, y->termination);
  thisId.fIdentifier = "check_every";
  y->check_every =
      m_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        9, "check_every")),
                         &thisId);
  thisId.fIdentifier = "eps_abs_power";
  y->eps_abs_power =
      m_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        10, "eps_abs_power")),
                         &thisId);
  thisId.fIdentifier = "eps_rel_power";
  y->eps_rel_power =
      m_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        11, "eps_rel_power")),
                         &thisId);
  thisId.fIdentifier = "eps_buff_power";
  y->eps_buff_power =
      m_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        12, "eps_buff_power")),
                         &thisId);
  thisId.fIdentifier = "max_iters_power";
  y->max_iters_power =
      m_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        13, "max_iters_power")),
                         &thisId);
  emlrtDestroyArray(&u);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[12])
{
  kb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

void pipg_api(const mxArray *const prhs[11], int32_T nlhs,
              const mxArray *plhs[4])
{
  b_sparse D;
  b_sparse P;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *w_opt;
  struct0_T p;
  struct1_T s;
  real_T(*H)[58408];
  real_T(*ground_truth)[298];
  real_T(*q)[298];
  real_T(*z_opt)[298];
  real_T(*h)[196];
  real_T c;
  real_T k;
  real_T pipg_time;
  real_T sigma_max;
  st.tls = emlrtRootTLSGlobal;
  z_opt = (real_T(*)[298])mxMalloc(sizeof(real_T[298]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  /* Marshall function inputs */
  emxInitStruct_sparse(&st, &P, &rc_emlrtRTEI);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "P", &P);
  q = f_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "q");
  H = h_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "H");
  h = j_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "h");
  c = l_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "c");
  emxInitStruct_sparse(&st, &D, &rc_emlrtRTEI);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "D", &D);
  n_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "E");
  sigma_max = l_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "sigma_max");
  ground_truth = f_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "ground_truth");
  p_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "p", &p);
  v_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "s", &s);
  /* Invoke the target function */
  emxInit_real_T(&st, &w_opt, 1, &rc_emlrtRTEI);
  pipg(&st, P, *q, *H, *h, c, D, sigma_max, *ground_truth, &p, &s, *z_opt,
       w_opt, &k, &pipg_time);
  emxFreeStruct_sparse(&st, &D);
  emxFreeStruct_sparse(&st, &P);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*z_opt);
  if (nlhs > 1) {
    w_opt->canFreeData = false;
    plhs[1] = b_emlrt_marshallOut(w_opt);
  }
  emxFree_real_T(&st, &w_opt);
  if (nlhs > 2) {
    plhs[2] = c_emlrt_marshallOut(k);
  }
  if (nlhs > 3) {
    plhs[3] = c_emlrt_marshallOut(pipg_time);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_pipg_api.c) */
