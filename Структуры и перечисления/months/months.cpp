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
		std::cout << "������� ����� ������: ";
		std::cin >> num;

		if (num == 0) {
			std::cout << "�� ��������\n";
			return;
		}

		Month m = static_cast<Month> (num);

		switch (num)
		{
		case January:
			std::cout << "������\n";
			break;
		case February:
			std::cout << "�������\n";
			break;
		case March:
			std::cout << "����\n";
			break;
		case April:
			std::cout << "������\n";
			break;
		case May:
			std::cout << "���\n";
			break;
		case June:
			std::cout << "����\n";
			break;
		case July:
			std::cout << "����\n";
			break;
		case August:
			std::cout << "������\n";
			break;
		case September:
			std::cout << "��������\n";
			break;
		case October:
			std::cout << "�������\n";
			break;
		case November:
			std::cout << "������\n";
			break;
		case December:
			std::cout << "�������\n";
			break;
		default:
			std::cout << "������������ �����!\n";
			break;
		}
	}
}