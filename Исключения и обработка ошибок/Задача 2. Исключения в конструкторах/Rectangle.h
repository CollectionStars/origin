#pragma once

#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "Parallelogram.h"
//a==c, b==d
class Rectangle :public Parallelogram {
public:
	Rectangle(int a_, int b_, std::string n = "Прямоугольник");
};


#endif // !_RECTANGLE_H_
