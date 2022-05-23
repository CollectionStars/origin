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
	std::cout << "Страна: " << a.country << "\n";
	std::cout << "Город: " << a.city << "\n";
	std::cout << "Улица: " << a.street << "\n";
	std::cout << "Номер дома: " << a.house << "\n";
	std::cout << "Номер квартиры: " << a.flat << "\n";
	std::cout << "Индекс: " << a.index << "\n";
}


int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");

	Address a1;
	a1.country = "Россия";
	a1.city = "Москва";
	a1.street = "Арбат";
	a1.house = 12;
	a1.flat = 8;
	a1.index = 123456;

	print(a1);

	std::cout << "\n\n";

	Address a2;
	a2.country = "Россия";
	a2.city = "Ижевск";
	a2.street = "Пушкина";
	a2.house = 59;
	a2.flat = 143;
	a2.index = 953769;

	print(a2);
}
