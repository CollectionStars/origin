#include "Figure.h"

Figure::Figure(std::string n) {
	name = n;
}


void Figure::print() {
	std::cout << name << "\n";
	std::cout << "�������: ";
	print_sides();
	std::cout << "����: ";
	print_angles();
}

void Figure::print_angles() {}
void Figure::print_sides() {}

std::string Figure::get_name() {
	return name;
}