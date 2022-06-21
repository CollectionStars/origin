#include "Triangle.h"

Triangle::Triangle(int a_, int b_, int c_, int A_, int B_, int C_, std::string n)
	:a(a_), b(b_), c(c_), A(A_), B(B_), C(C_), Figure(n) {

	std::string message = n + " (стороны " + std::to_string(a_) + ", " + std::to_string(b_) + ", " + std::to_string(c_) + ", углы " + std::to_string(A_) + ", " + std::to_string(B_) + ", " + std::to_string(C_) + ") ";

	if (A + B + C != 180) {
		throw Error(message + "не создан. Причина: сумма углов не равна 180");
	}
	std::cout << message << "создан\n";
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