 #pragma once

#ifdef RN_PLATFORM_WINDOWS
	#ifdef RN_BUILD_DLL
		#define RAIN_API __declspec(dllexport)
	#else
		#define RAIN_API __declspec(dllimport)
	#endif
#else
	#error Rain only support Windows!
#endif

#define BIT(x) (1 << x)