#include <iostream>
#include <windows.h> 
#include <string>
#include "Counter.h"

void main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string ans;
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
	std::cin >> ans;
	if (ans == "��") {
		std::cout << "������� ��������� �������� ��������: ";
		int num;
		std::cin >> num;
		//constructor with params
		Counter c(num);
		c.test_counter();
	}
	else {
		//constructor without params
		Counter c;
		c.test_counter();
	}
}