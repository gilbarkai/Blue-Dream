#pragma once

#ifdef BD_PLATFORM_WINDOWS
	#ifdef BD_BUILD_DLL
		#define BD_API __declspec(dllexport)
	#else
		#define BD_API __declspec(dllimport )
	#endif
#else
	#error Blue Dream only supports Windows!


#endif