#pragma once

#ifdef AL_PLATFORM_WINDOWS
	#ifdef AL_BUILD_DLL
		#define ANLE_API __declspec(dllexport)
	#else
		#define ANLE_API __declspec(dllimport)
	#endif
#else
	#error Anle only support Windows!
#endif // AL_BUILD_DLL

