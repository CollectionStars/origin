#include <iostream>
#include <Windows.h>
#include "Greeter.h"
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Greeter_class::Greeter gr;
	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << gr.greet(name);
}