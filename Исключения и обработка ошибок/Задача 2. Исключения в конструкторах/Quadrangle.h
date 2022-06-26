#pragma once

#include "Figure.h"
class Quadrangle :public Figure {
protected:
	//стороны
	int a, b, c, d;
	//углы
	int A, B, C, D;
public:

	Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_);

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

