#pragma once

#ifdef MR_PLATFORM_WINDOWS
	#ifdef MR_BUILD_DLL
		#define MARS_API __declspec(dllexport)
	#else
		#define MARS_API __declspec(dllimport)
	#endif
#else
	#error Mars only supports Windows!
#endif
