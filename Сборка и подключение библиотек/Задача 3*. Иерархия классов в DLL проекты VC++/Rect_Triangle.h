#pragma once 
#ifdef DLLCLASSES_EXPORTS
#define DLLCLASSES_API __declspec(dllexport)
#else
#define DLLCLASSES_API __declspec(dllimport)
#endif
#include "Triangle.h"
//прямоугольный треугольник
class  Rect_Triangle :public Triangle {
public:
	DLLCLASSES_API Rect_Triangle(int a_, int b_, int c_, int A_, int B_);
};
