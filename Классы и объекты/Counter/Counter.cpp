#include <iostream>
#include <windows.h> 
#include <string>

class Counter
{

	int count;

public:

	Counter() :count(1) {}

	Counter(int num) :count(num) {}

	void add() {
		++count;
	}

	void sub() {
		--count;
	}

	int get_count() {
		return count;
	}
};


void test_counter(Counter& c) {
	std::string ans;
	while (true) {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> ans;
		if (ans == "x" || ans == "х") {
			std::cout << "До свидания!\n";
			return;
		}
		else if (ans == "+") {
			c.add();
		}
		else if (ans == "-") {
			c.sub();
		}
		else if (ans == "=") {
			std::cout << c.get_count() << "\n";
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string ans;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> ans;
	if (ans == "да") {
		std::cout << "Введите начальное значение счётчика: ";
		int num;
		std::cin >> num;
		//constructor with params
		Counter c(num);
		test_counter(c);
	}
	else {
		//constructor without params
		Counter c;
		test_counter(c);
	}
}
