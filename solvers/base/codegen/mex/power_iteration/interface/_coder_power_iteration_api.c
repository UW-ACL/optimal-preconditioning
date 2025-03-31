/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_power_iteration_api.c
 *
 * Code generation for function '_coder_power_iteration_api'
 *
 */

/* Include files */
#include "_coder_power_iteration_api.h"
#include "power_iteration.h"
#include "power_iteration_data.h"
#include "power_iteration_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[58408];

static void c_emlrt_marshallIn(const mxArray *s, const char_T *identifier,
                               struct0_T *y);

static void d_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct0_T *y);

static real_T e_emlrt_marshallIn(const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static real_T (*emlrt_marshallIn(const mxArray *H,
                                 const char_T *identifier))[58408];

static const mxArray *emlrt_marshallOut(const real_T u);

static void f_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y[12]);

static real_T (*g_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[58408];

static real_T h_emlrt_marshallIn(const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void i_emlrt_marshallIn(const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[12]);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[58408]
{
  real_T(*y)[58408];
  y = g_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void c_emlrt_marshallIn(const mxArray *s, const char_T *identifier,
                               struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(emlrtAlias(s), &thisId, y);
  emlrtDestroyArray(&s);
}

static void d_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct0_T *y)
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
  emlrtCheckStructR2012b(emlrtRootTLSGlobal, parentId, u, 14,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "eps_abs_cots";
  y->eps_abs_cots =
      e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u,
                                                        0, 0, "eps_abs_cots")),
                         &thisId);
  thisId.fIdentifier = "eps_rel_cots";
  y->eps_rel_cots =
      e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u,
                                                        0, 1, "eps_rel_cots")),
                         &thisId);
  thisId.fIdentifier = "eps_abs_pipg";
  y->eps_abs_pipg =
      e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u,
                                                        0, 2, "eps_abs_pipg")),
                         &thisId);
  thisId.fIdentifier = "eps_rel_pipg";
  y->eps_rel_pipg =
      e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u,
                                                        0, 3, "eps_rel_pipg")),
                         &thisId);
  thisId.fIdentifier = "percent_rel_err";
  y->percent_rel_err =
      e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2017b(
                             emlrtRootTLSGlobal, u, 0, 4, "percent_rel_err")),
                         &thisId);
  thisId.fIdentifier = "omg";
  y->omg = e_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 5, "omg")),
      &thisId);
  thisId.fIdentifier = "rho_extrap";
  y->rho_extrap =
      e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u,
                                                        0, 6, "rho_extrap")),
                         &thisId);
  thisId.fIdentifier = "max_iters";
  y->max_iters = e_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 7, "max_iters")),
      &thisId);
  thisId.fIdentifier = "termination";
  f_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 8,
                                                    "termination")),
                     &thisId, y->termination);
  thisId.fIdentifier = "check_every";
  y->check_every =
      e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u,
                                                        0, 9, "check_every")),
                         &thisId);
  thisId.fIdentifier = "eps_abs_power";
  y->eps_abs_power =
      e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2017b(
                             emlrtRootTLSGlobal, u, 0, 10, "eps_abs_power")),
                         &thisId);
  thisId.fIdentifier = "eps_rel_power";
  y->eps_rel_power =
      e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2017b(
                             emlrtRootTLSGlobal, u, 0, 11, "eps_rel_power")),
                         &thisId);
  thisId.fIdentifier = "eps_buff_power";
  y->eps_buff_power =
      e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2017b(
                             emlrtRootTLSGlobal, u, 0, 12, "eps_buff_power")),
                         &thisId);
  thisId.fIdentifier = "max_iters_power";
  y->max_iters_power =
      e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2017b(
                             emlrtRootTLSGlobal, u, 0, 13, "max_iters_power")),
                         &thisId);
  emlrtDestroyArray(&u);
}

static real_T e_emlrt_marshallIn(const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = h_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*emlrt_marshallIn(const mxArray *H,
                                 const char_T *identifier))[58408]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[58408];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(emlrtAlias(H), &thisId);
  emlrtDestroyArray(&H);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static void f_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[12])
{
  i_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*g_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[58408]
{
  static const int32_T dims[2] = {196, 298};
  real_T(*ret)[58408];
  int32_T iv[2];
  boolean_T bv[2] = {false, false};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[58408])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T h_emlrt_marshallIn(const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void i_emlrt_marshallIn(const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[12])
{
  static const int32_T dims[2] = {1, 12};
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b(emlrtRootTLSGlobal, src, &ret[0], 12);
  emlrtDestroyArray(&src);
}

void power_iteration_api(power_iterationStackData *SD,
                         const mxArray *const prhs[2], int32_T nlhs,
                         const mxArray *plhs[3])
{
  struct0_T s;
  real_T(*H)[58408];
  real_T k;
  real_T power_iteration_time;
  real_T sigma_max;
  /* Marshall function inputs */
  H = emlrt_marshallIn(emlrtAlias(prhs[0]), "H");
  c_emlrt_marshallIn(emlrtAliasP(prhs[1]), "s", &s);
  /* Invoke the target function */
  power_iteration(SD, *H, &s, &sigma_max, &k, &power_iteration_time);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(sigma_max);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(k);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(power_iteration_time);
  }
}

/* End of code generation (_coder_power_iteration_api.c) */
