#include <iostream>
#include <string>
#include <Windows.h>
#include <exception>

int function(std::string str, int forbidden_length) {
	if (str.length() == forbidden_length) {
		throw std::length_error("bad length");
	}
	return str.length();
}

int main() {
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int f_len;
	std::cout << "Введите запретную длину: ";
	std::cin >> f_len;

	while (true)
	{
		try {
			std::string str;
			std::cout << "Введите слово: ";
			std::cin >> str;
			std::cout << "Длина слова \"" << str << "\" равна " << function(str, f_len) << "\n";
		}
		catch (std::length_error) {
			std::cout << "Вы ввели слово запретной длины! До свидания\n";
			return 0;
		}
	}

}
