#include <iostream>
#include "Functions.h"

int main() {
	setlocale(LC_ALL, "ru");

	int l, r;
	std::cout << "������� ������ �����: ";
	std::cin >> l;

	std::cout << "������� ������ �����: ";
	std::cin >> r;

	std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
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
		std::cout << l << " � ������� " << r << " = " << exp(l, r) << "\n";
		break;
	}
	default: {
		std::cout << "�� ����� �������� ��������\n";
		break;
	}
	}
}