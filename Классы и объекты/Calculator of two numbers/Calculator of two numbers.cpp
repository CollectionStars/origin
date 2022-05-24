#include <iostream>
#include <windows.h> 
#include <string>

class Calculator {
public:
	double num1, num2;

	bool set_num1(double num1) {
		if (num1 == 0) {
			return false;
		}
		this->num1 = num1;
		return true;
	}

	bool set_num2(double num2) {
		if (num2 == 0) {
			return false;
		}
		this->num2 = num2;
		return true;
	}

	double add() {
		return num1 + num2;
	}

	double multiply() {
		return num1 * num2;
	}

	double subtract_1_2() {
		return num1 - num2;
	}

	double subtract_2_1() {
		return num2 - num1;
	}

	double divide_1_2() {
		return num1 / num2;
	}
	double divide_2_1() {
		return num2 / num1;
	}


};

void test_calc(Calculator& c1) {
	double n1, n2;

	std::cout << "Введите num1: ";
	std::cin >> n1;
	while (c1.set_num1(n1) == false) {
		std::cout << "Неверный ввод!\n";
		std::cout << "Введите num1: ";
		std::cin >> n1;
		c1.set_num1(n1);
	}

	std::cout << "Введите num2: ";
	std::cin >> n2;
	while (c1.set_num2(n2) == false) {
		std::cout << "Неверный ввод!\n";
		std::cout << "Введите num2: ";
		std::cin >> n2;
		c1.set_num2(n2);
	}

	std::cout << "num1 + num2 = " << c1.add() << "\n";
	std::cout << "num1 - num2 = " << c1.subtract_1_2() << "\n";
	std::cout << "num2 - num1 = " << c1.subtract_2_1() << "\n";
	std::cout << "num1 * num2 = " << c1.multiply() << "\n";
	std::cout << "num1 / num2 = " << c1.divide_1_2() << "\n";
	std::cout << "num2 / num1 = " << c1.divide_2_1() << "\n\n";
}



int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Calculator c1;

	test_calc(c1);
	test_calc(c1);

}
