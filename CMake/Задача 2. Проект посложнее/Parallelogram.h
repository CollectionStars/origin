#pragma once

#ifndef _PARALLELOGRAMM_H_
#define _PARALLELOGRAMM_H_

#include "Quadrangle.h"
//a==c b==d, A==C B===D
class Parallelogram :public Quadrangle {
public:
	Parallelogram(int a_, int b_, int A_, int B_);
};
#endif // !_PARALLELOGRAMM_H_
