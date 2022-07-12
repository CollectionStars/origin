#pragma once
#ifdef DLLCLASSES_EXPORTS
#define DLLCLASSES_API __declspec(dllexport)
#else
#define DLLCLASSES_API __declspec(dllimport)
#endif
#include "Quadrangle.h"
//a==c b==d, A==C B===D
class  Parallelogram :public Quadrangle {

public:
	DLLCLASSES_API Parallelogram(int a_, int b_, int A_, int B_);
};
