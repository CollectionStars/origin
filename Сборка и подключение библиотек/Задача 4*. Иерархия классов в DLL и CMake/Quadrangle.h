 #pragma once
#ifdef DLLCLASSES_EXPORTS
#define DLLCLASSES_API __declspec(dllexport)
#else
#define DLLCLASSES_API __declspec(dllimport)
#endif
#include "Figure.h"
class  Quadrangle :public Figure {
protected:
	//стороны
	int a, b, c, d;
	//углы
	int A, B, C, D;
public:

	DLLCLASSES_API Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_);

	DLLCLASSES_API void print_angles() override;
	DLLCLASSES_API void print_sides() override;
	DLLCLASSES_API int get_a();
	DLLCLASSES_API int get_b();
	DLLCLASSES_API int get_c();
	DLLCLASSES_API int get_d();
	DLLCLASSES_API int get_A();
	DLLCLASSES_API int get_B();
	DLLCLASSES_API int get_C();
	DLLCLASSES_API int get_D();
};

