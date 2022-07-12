#include <iostream>
#include "Leaver.h"
#include "Windows.h"
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Leaver_class::Leaver l;
	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << l.leave(name);
}