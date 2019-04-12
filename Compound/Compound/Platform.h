
/*
	2019.04.12
	Created by AcrylicShrimp.
*/

#ifndef _COMPOUND_CORE_PLATFORM_H

#define _COMPOUND_CORE_PLATFORM_H

#if _WIN32

#define __COMPOUND_OS_WINDOWS 1

#ifdef _WIN64

#define __COMPOUND_OS_WINDOWS64 1

#else

#define __COMPOUND_OS_WINDOWS32 1

#endif

#elif __APPLE__

#define __COMPOUND_OS_APPLE 1

#include "TargetConditionals.h"

#if TARGET_OS_OSX

#define __COMPOUND_OS_APPLE_OSX 1

#elif TARGET_OS_IOS

#define __COMPOUND_OS_APPLE_IOS 1

#if TARGET_OS_SIMULATOR

#define __COMPOUND_OS_APPLE_IOS_SIMULATOR 1

#endif

#endif

#elif __ANDROID__

#define __COMPOUND_OS_ANDROID 1

#elif __linux__

#define __COMPOUND_OS_LINUX 1

#elif __unix__

#define __COMPOUND_OS_UNIX 1

#endif

#endif