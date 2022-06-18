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


	Triangle(int a_, int b_, int c_, int A_, int B_, int C_);

	int get_a();
	int get_b();
	int get_c();
	int get_A();
	int get_B();
	int get_C();
	void print_angles()override;
	void print_sides()override;

};


#endif // !_TRIANGLE_H_
