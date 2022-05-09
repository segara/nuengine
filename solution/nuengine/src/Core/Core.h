#pragma once

#ifdef NU_PLATFORM_WINDOWS
	#ifdef NU_BUILD_DLL
		#define NU_API __declspec(dllexport)
	#else
	#define NU_API __declspec(dllimport)
		#endif
#else
	#error NU only support Windows!
#endif


namespace nuengine
{
	class Core 
	{
	};

}

