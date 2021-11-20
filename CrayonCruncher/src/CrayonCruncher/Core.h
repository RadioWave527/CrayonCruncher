#pragma once

#ifdef CC_PLATFORM_WINDOWS
	#ifdef CC_BUILD_DLL
		#define CRAYONCRUNCHER_API __declspec(dllexport)
	#else
		#define CRAYONCRUNCHER_API __declspec(dllimport)
	#endif
#else
	#error haha mac user.
#endif