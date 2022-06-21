#pragma once 

#ifndef _TRIANGLE_H_
#define  _TRIANGLE_H_

#include "Figure.h"

class Triangle : public Figure {
protected:
	//стороны
	int a, b, c;
	//углы
	int A, B, C;

public:

	Triangle(int a_, int b_, int c_, int A_, int B_, int C_, std::string n = "Треугольник");

	void print_angles();
	void print_sides();
	int get_a();
	int get_b();
	int get_c();
	int get_A();
	int get_B();
	int get_C();

};


#endif // !_TRIANGLE_H_
