#pragma once 

#ifndef _RECT_TRIANGLE_H_
#define _RECT_TRIANGLE_H_
#include "Triangle.h"
//прямоугольный треугольник
class Rect_Triangle :public Triangle {
public:
	Rect_Triangle(int a_, int b_, int c_, int A_, int B_);
};
#endif // !_RECT_TRIANGLE_H_
