#include <iostream>
#include <string>
#include <windows.h>

struct Account 
{
	int id;
	std::string name;
	double money;
};

void reset(Account& acc, double m) 
{
	acc.money = m;
}


void main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");

	Account acc;

	std::cout << "Введите номер счёта: ";
	std::cin >> acc.id;

	std::cout << "Введите имя владельца: ";
	std::cin >> acc.name;

	std::cout << "Введите баланс: ";
	std::cin >> acc.money;


	double m;
	std::cout << "Введите новый баланс: ";
	std::cin >> m;
	reset(acc, m);

	std::cout << "Ваш счет " << acc.name << ", " << acc.id << ", " << acc.money << "\n";
}
