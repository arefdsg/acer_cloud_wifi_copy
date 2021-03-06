//
//  Copyright 2010 iGware Inc.
//  All Rights Reserved.
//
//  THIS SOFTWARE CONTAINS CONFIDENTIAL INFORMATION AND
//  TRADE SECRETS OF IGWARE INC.
//  USE, DISCLOSURE OR REPRODUCTION IS PROHIBITED WITHOUT
//  THE PRIOR EXPRESS WRITTEN PERMISSION OF IGWARE INC.
//
#ifndef __GVM_CONFIGURATION_H__
#define __GVM_CONFIGURATION_H__

//============================================================================
/// @file
/// Definitions shared across GVM subsystems.
//============================================================================

#ifdef __cplusplus
extern "C" {
#endif

// DEVICE_TYPE_CODE cf http://www.ctbg.acer.com/wiki/index.php/ANS_supports_multiple_CCD_instances_per_device_id#CCD
#ifdef ANDROID
#  define DEVICE_NAME_PREFIX  "Android"
#  define DEVICE_CLASS "DefaultAndroid"
#  define DEVICE_TYPE_CODE "1"
#elif defined(WIN32)
#  define DEVICE_NAME_PREFIX  "Win"
#  define DEVICE_CLASS "DefaultWindows"
#  ifdef VPL_PLAT_IS_WINRT
#    define DEVICE_TYPE_CODE "4"
#  else
#    define DEVICE_TYPE_CODE "2"
#  endif
#elif defined(LINUX)
#  define DEVICE_NAME_PREFIX  "Linux"
#  define DEVICE_CLASS "DefaultLinux"
#  define DEVICE_TYPE_CODE "5"
#elif defined(IOS)
#  define DEVICE_NAME_PREFIX  "iOS"
#  define DEVICE_CLASS "DefaultIOS"
#  define DEVICE_TYPE_CODE "3"
#elif defined(__CLOUDNODE__)
#  define DEVICE_NAME_PREFIX  "CN"
#  define DEVICE_CLASS "DefaultCloudNode"
#  define DEVICE_TYPE_CODE "6"
#elif defined(LINUX_EMB)
#  define DEVICE_NAME_PREFIX  "Linux_Emb"
#  define DEVICE_CLASS "DefaultLinuxEmb"
#  define DEVICE_TYPE_CODE "7"
#else
#  error "New platform!"
#endif

#ifdef WIN32
#  define GVM_DEFAULT_LOCAL_APP_DATA_PATH  "C:/temp/igware"
#elif defined(ANDROID)
#  define GVM_DEFAULT_LOCAL_APP_DATA_PATH  "/tmp/igware"
#else
#  define GVM_DEFAULT_LOCAL_APP_DATA_PATH  "/temp/igware"
#endif

#ifdef __cplusplus
}
#endif

#endif // include guard
