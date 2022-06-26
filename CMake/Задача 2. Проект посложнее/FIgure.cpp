#include "Figure.h"

Figure::Figure(std::string n) {
	name = n;
}


void Figure::print() {
	std::cout << name << "\n";
	std::cout << "Стороны: ";
	print_sides();
	std::cout << "Углы: ";
	print_angles();
}

void Figure::print_angles() {}
void Figure::print_sides() {}

std::string Figure::get_name() {
	return name;
}