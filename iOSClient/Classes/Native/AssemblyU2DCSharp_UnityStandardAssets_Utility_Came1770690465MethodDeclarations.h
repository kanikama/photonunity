#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.Utility.CameraRefocus
struct CameraRefocus_t1770690465;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void UnityStandardAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void CameraRefocus__ctor_m2540799924 (CameraRefocus_t1770690465 * __this, Camera_t3533968274 * ___camera, Transform_t284553113 * ___parent, Vector3_t3525329789  ___origCameraPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
extern "C"  void CameraRefocus_ChangeCamera_m3152937111 (CameraRefocus_t1770690465 * __this, Camera_t3533968274 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
extern "C"  void CameraRefocus_ChangeParent_m2175381317 (CameraRefocus_t1770690465 * __this, Transform_t284553113 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
extern "C"  void CameraRefocus_GetFocusPoint_m499126450 (CameraRefocus_t1770690465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::SetFocusPoint()
extern "C"  void CameraRefocus_SetFocusPoint_m1409878974 (CameraRefocus_t1770690465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
