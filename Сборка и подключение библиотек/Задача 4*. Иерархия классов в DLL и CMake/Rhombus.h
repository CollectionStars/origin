#pragma once
#ifdef DLLCLASSES_EXPORTS
#define DLLCLASSES_API __declspec(dllexport)
#else
#define DLLCLASSES_API __declspec(dllimport)
#endif
#include "Parallelogram.h"

//a==b==c==d, A==C B==D
class  Rhombus : public Parallelogram {
public:
	DLLCLASSES_API Rhombus(int a_, int A_, int B_);
};

