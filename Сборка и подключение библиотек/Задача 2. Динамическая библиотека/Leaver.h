#pragma once
#ifdef DLLLEAVER_EXPORTS
#define LEAVER_API __declspec(dllexport)
#else
#define LEAVER_API __declspec(dllimport)
#endif
#include <string>
namespace Leaver_class
{
	class Leaver {
	public:
		LEAVER_API std::string leave(std::string name);
	};
}


