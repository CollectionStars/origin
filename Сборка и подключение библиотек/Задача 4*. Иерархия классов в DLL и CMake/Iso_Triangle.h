#pragma once
#ifdef DLLCLASSES_EXPORTS
#define DLLCLASSES_API __declspec(dllexport)
#else
#define DLLCLASSES_API __declspec(dllimport)
#endif
#include "Triangle.h"

//равнобедренный
//a==c, A==C
class  Iso_Triangle :public Triangle {
public:
	DLLCLASSES_API Iso_Triangle(int a_, int b_, int A_, int B_);
};
