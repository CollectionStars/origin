#include "Quadrangle.h"

Quadrangle::Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_, std::string n)
	:a(a_), b(b_), c(c_), d(d_), A(A_), B(B_), C(C_), D(D_), Figure(n) {
	std::string message = n + " (стороны " + std::to_string(a_) + ", " + std::to_string(b_) + ", " + std::to_string(c_) + ", " + std::to_string(d_) + ", углы " + std::to_string(A_) + ", " + std::to_string(B_) + ", " + std::to_string(C_) + ", " + std::to_string(D_) + ") ";

	if (A + B + C + D != 360) {
		throw Error(message + "не создан. Причина: сумма углов не равна 360");
	}
	std::cout << message << "создан\n";
}

void Quadrangle::print_sides() {
	std::cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
}
void Quadrangle::print_angles() {
	std::cout << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
}

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