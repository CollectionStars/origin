#pragma once
#ifndef _RHOMBUS_H_
#define _RHOMBUS_H_
#include "Parallelogram.h"

//a==b==c==d, A==C B==D
class Rhombus : public Parallelogram {
public:
	Rhombus(int a_, int A_, int B_, std::string n = "Ромб");
};

#endif // !_RHOMBUS_H_