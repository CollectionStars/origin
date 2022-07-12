#pragma once
#ifdef DLLCLASSES_EXPORTS
#define DLLCLASSES_API __declspec(dllexport)
#else
#define DLLCLASSES_API __declspec(dllimport)
#endif
#include "Parallelogram.h"
//a==c, b==d
class  Rectangle :public Parallelogram {
public:
	DLLCLASSES_API Rectangle(int a_, int b_ );
};
