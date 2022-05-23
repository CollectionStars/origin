#include <iostream>
#include <string>
#include <windows.h>

enum  Month
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");

	int num;
	while (true) {
		std::cout << "Введите номер месяца: ";
		std::cin >> num;

		if (num == 0) {
			std::cout << "До свидания\n";
			return;
		}

		Month m = static_cast<Month> (num);

		switch (num)
		{
		case January:
			std::cout << "Январь\n";
			break;
		case February:
			std::cout << "Февраль\n";
			break;
		case March:
			std::cout << "Март\n";
			break;
		case April:
			std::cout << "Апрель\n";
			break;
		case May:
			std::cout << "Май\n";
			break;
		case June:
			std::cout << "Июнь\n";
			break;
		case July:
			std::cout << "Июль\n";
			break;
		case August:
			std::cout << "Август\n";
			break;
		case September:
			std::cout << "Сентябрь\n";
			break;
		case October:
			std::cout << "Октябрь\n";
			break;
		case November:
			std::cout << "Ноябрь\n";
			break;
		case December:
			std::cout << "Декабрь\n";
			break;
		default:
			std::cout << "Неправильный номер!\n";
			break;
		}
	}
}
