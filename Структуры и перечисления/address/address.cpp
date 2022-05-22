#include <iostream>
#include <string>
#include <windows.h>

struct Address {
	std::string country;
	std::string city;
	std::string street;
	int house;
	int flat;
	int index;
};

void print(const Address& a) {
	std::cout << "������: " << a.country << "\n";
	std::cout << "�����: " << a.city << "\n";
	std::cout << "�����: " << a.street << "\n";
	std::cout << "����� ����: " << a.house << "\n";
	std::cout << "����� ��������: " << a.flat << "\n";
	std::cout << "������: " << a.index << "\n";
}


void main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");

	Address a1;
	a1.country = "������";
	a1.city = "������";
	a1.street = "�����";
	a1.house = 12;
	a1.flat = 8;
	a1.index = 123456;

	print(a1);

	std::cout << "\n\n";

	Address a2;
	a2.country = "������";
	a2.city = "������";
	a2.street = "�������";
	a2.house = 59;
	a2.flat = 143;
	a2.index = 953769;

	print(a2);
}