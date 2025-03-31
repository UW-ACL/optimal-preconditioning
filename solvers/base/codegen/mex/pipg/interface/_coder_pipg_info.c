/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_pipg_info.c
 *
 * Code generation for function 'pipg'
 *
 */

/* Include files */
#include "_coder_pipg_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void);

/* Function Definitions */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[7] = {
      "789ced584d6f1251141d6a355d686553372eeda29b3a403129cb8a4091549a42a1a4d1f2"
      "8679c3bc321f8ff968c78d3bd7ae8c2b13e3caa5bfc1ad6b1726a671"
      "65a22b7f8031c230333093bc8079e411087773b99c9939877b999397cbc58a07318ee3d6"
      "b941fcbe3bc8b7bc3aeee5152e1c513ce6e5eb919a0bbe5f0ddde7e3",
      "afbcdcd2350b3ad6a0d0800a833b455d451ad0acea730c39039aba72014517919002ab48"
      "8595d1e249bf52f3235050f4a1fee7ac0c5b9d8aad72866c0e152aa3"
      "45d08f0f84dfbb3a613ff608fd8847f0d3dc53fed88486c90341467c0159fbb6c0ebd842"
      "2a50b6b1017b0d129185740d696dde6d42ef5a019890c708b7efab11",
      "dd4d4add3788ba070836f4f3b347ecf84ccbb05bd6f4e69225f285719ab9b82df22633ae"
      "4fb727d41dcdc3ebd7dc9cfcf1b3cd926f6be3738a259f1fb3e27308"
      "cf9bf47f7787c0178fe03853394c770fcc8c2557aa8e8ccb292034f6873a0ec7f08cd3c1"
      "116a56cf9fd7f71753ea5e8fd451dd014f9f5c068a6462d082ec7c56",
      "d46d4119e1fb48c95722f28571da3905ad62ecb7db5fd8faeddf37573b2cf9fc9857bfdd"
      "20f0c523b828d91d3579d9bdccc15abd866a8f8b8a92e1967e3b6bbf"
      "6d52ea5e8bd443dd03c42515746756fe4a3b971c912f8cd3cea5d7227732ac7ce0cfd537"
      "a6befafae5699a259f1ff3eaab939e6313478e0012a54cf9c2049294",
      "4da072297f9e5bfaeaacf703b4e7d89b6374fbb86b1ea533ac2bc018e56f52f2ffefbe80"
      "f61c5b24f285715a9ff55a35f13e675afef07ee52b53bffdde7db1c9"
      "92cf8f45f75ba55eb08f1a99ee4ed5128ba907d586543ea92f90df2eea7b3cd5bd6c69b9"
      "971d3b1fc67b824ff77e31f5d7776f9f5d63c9e7c7a2fbeb6ee26176",
      "d739a91792da71a792ceefa9585f84f3ec3f436eb750",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 7176U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *propFieldName[7] = {
      "Version",      "ResolvedFunctions", "Checksum",    "EntryPoints",
      "CoverageInfo", "IsPolymorphic",     "PropertyList"};
  const char_T *epFieldName[6] = {
      "Name",           "NumberOfInputs", "NumberOfOutputs",
      "ConstantInputs", "FullPath",       "TimeStamp"};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 6, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 11);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("pipg"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(11.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(4.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "FullPath",
      emlrtMxCreateString(
          "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739706.9924768518));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("9.14.0.2206163 (R2023a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("pnLoybenjyXCuPPxSCsSJH"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_pipg_info.c) */
