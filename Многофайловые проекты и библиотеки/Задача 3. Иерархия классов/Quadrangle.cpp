
#include "Quadrangle.h"

Quadrangle::Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_)
	:a(a_), b(b_), c(c_), d(d_), A(A_), B(B_), C(C_), D(D_), Figure("Четырехугольник:") {}

int Quadrangle::get_a() {
	return a;
}
int Quadrangle::get_b() {
	return b;
}
int Quadrangle::get_c() {
	return c;
}
int Quadrangle::get_d() {
	return d;
}
int Quadrangle::get_A() {
	return A;
}
int Quadrangle::get_B() {
	return B;
}
int Quadrangle::get_C() {
	return C;
}
int Quadrangle::get_D() {
	return D;
}
void Quadrangle::print_sides() {
	std::cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
}
void Quadrangle::print_angles() {
	std::cout << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
}


