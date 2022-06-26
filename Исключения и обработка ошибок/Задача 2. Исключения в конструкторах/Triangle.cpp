#include "Triangle.h"

Triangle::Triangle(int a_, int b_, int c_, int A_, int B_, int C_)
	:a(a_), b(b_), c(c_), A(A_), B(B_), C(C_), Figure("Треугольник") {


	if (A + B + C != 180) {
		throw Error( "сумма углов не равна 180");
	}
}

void Triangle::print_angles() {
	std::cout << "A=" << A << " B=" << B << " C=" << C << "\n\n";
}

void Triangle::print_sides() {
	std::cout << "a=" << a << " b=" << b << " c=" << c << "\n";
}

int Triangle::get_a() {
	return a;
}
int Triangle::get_b() {
	return b;
}
int Triangle::get_c() {
	return c;
}
int Triangle::get_A() {
	return A;
}
int  Triangle::get_B() {
	return B;
}
int Triangle::get_C() {
	return C;
}

