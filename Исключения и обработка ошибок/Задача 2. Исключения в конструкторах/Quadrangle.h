#pragma once
#ifndef _QUADRANGLE_H_
#define _QUADRANGLE_H_
#include "Figure.h"
class Quadrangle :public Figure {
protected:
	//стороны
	int a, b, c, d;
	//углы
	int A, B, C, D;
public:

	Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_, std::string n = "Четырехугольник");

	void print_angles() override;
	void print_sides() override;
	int get_a();
	int get_b();
	int get_c();
	int get_d();
	int get_A();
	int get_B();
	int get_C();
	int get_D();
};
#endif // !_QUADRANGLE_H_#pragma once
