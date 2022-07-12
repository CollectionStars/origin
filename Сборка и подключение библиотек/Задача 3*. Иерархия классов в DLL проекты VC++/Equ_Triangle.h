#pragma once
#ifdef DLLCLASSES_EXPORTS
#define DLLCLASSES_API __declspec(dllexport)
#else
#define DLLCLASSES_API __declspec(dllimport)
#endif
#include"Iso_Triangle.h"
//равносторонний
class  Equ_Triangle :public Iso_Triangle {
public:
	DLLCLASSES_API Equ_Triangle(int a_);
};



