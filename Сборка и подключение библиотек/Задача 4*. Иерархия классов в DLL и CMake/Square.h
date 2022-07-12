#pragma once
#ifdef DLLCLASSES_EXPORTS
#define DLLCLASSES_API __declspec(dllexport)
#else
#define DLLCLASSES_API __declspec(dllimport)
#endif
#include "Rectangle.h"
//a==b==c==d 90,90,90,90
class  Square :public Rectangle {
public:
	DLLCLASSES_API Square(int a_);
};
