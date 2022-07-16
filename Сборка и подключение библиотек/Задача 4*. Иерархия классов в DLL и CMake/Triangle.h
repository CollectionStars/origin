#pragma once 

#include "Figure.h"

class Triangle : public Figure {
protected:
	//стороны
	int a, b, c;
	//углы
	int A, B, C;

public:


	DLLCLASSES_API Triangle(int a_, int b_, int c_, int A_, int B_, int C_);

	DLLCLASSES_API void print_angles() override;
	DLLCLASSES_API void print_sides() override;
	DLLCLASSES_API int get_a();
	DLLCLASSES_API int get_b();
	DLLCLASSES_API int get_c();
	DLLCLASSES_API int get_A();
	DLLCLASSES_API int get_B();
	DLLCLASSES_API int get_C();
	
};
