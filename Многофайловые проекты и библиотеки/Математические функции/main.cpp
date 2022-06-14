#include <iostream>
#include "Functions.h"

int main() {
	setlocale(LC_ALL, "ru");
	
	int l, r;
	std::cout << "Введите первое число: ";
	std::cin >> l;

	std::cout << "Введите второе число: ";
	std::cin >> r;

	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	int choice;
	std::cin >> choice;

	switch (choice) {
	case 1: {
		std::cout << l << " + " << r << " = " << sum(l, r) << "\n";
		break;
	}
	case 2: {
		std::cout << l << " - " << r << " = " << sub(l, r) << "\n";
		break;
	}
	case 3: {
		std::cout << l << " * " << r << " = " << mult(l, r) << "\n";
		break;
	}
	case 4: {
		std::cout << l << " / " << r << " = " << dive(l, r) << "\n";
		break;
	}
	case 5: {
		std::cout << l << " в степени " << r << " = " << exp(l, r) << "\n";
		break;
	}
	default: {
		std::cout << "Вы ввели неверное значение\n";
		break;

	}
	}
}
