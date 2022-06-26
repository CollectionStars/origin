#include "Counter.h"

CounterClass::Counter::Counter(int num ) :count(num) {}

void CounterClass::Counter::add() {
	++count;
}

void CounterClass::Counter::sub() {
	--count;
}

int CounterClass::Counter::get_count() {
	return count;
}

void CounterClass::Counter::test_counter() {
	while (true) {
		std::string ans;
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> ans;
		if (ans == "x" || ans == "х") {
			std::cout << "До свидания!\n";
			return;
		}
		else if (ans == "+") {
			add();
		}
		else if (ans == "-") {
			sub();
		}
		else if (ans == "=") {
			std::cout << get_count() << "\n";
		}
		else {
			std::cout << "Неправильный ввод! Повторите попытку\n";
		}
	}
}
