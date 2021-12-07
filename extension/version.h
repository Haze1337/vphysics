#ifndef _INCLUDE_VERSION_INFORMATION_H_
#define _INCLUDE_VERSION_INFORMATION_H_

/**
 * @file Contains version information.
 * @brief This file will redirect to an autogenerated version if being compiled via
 * the build scripts.
 */

#if defined SM_GENERATED_BUILD
#include "version_auto.h"
#else

#ifndef SM_GENERATED_BUILD
#undef BINARY_NAME
#define BINARY_NAME "vphysics.ext.dll\0"
#endif

#define SM_BUILD_TAG		"-manual"
#define SM_BUILD_UNIQUEID	"[MANUAL BUILD]"
#define SM_VERSION			"1.0.0"
#define SM_FULL_VERSION		SM_VERSION SM_BUILD_TAG
#define SM_FILE_VERSION		1,0,0,0

#endif

#endif /* _INCLUDE_VERSION_INFORMATION_H_ */
