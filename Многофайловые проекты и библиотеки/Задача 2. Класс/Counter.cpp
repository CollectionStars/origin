#include "Counter.h"


void Counter::add() {
	++count;
}

void Counter::sub() {
	--count;
}

int Counter::get_count() {
	return count;
}

void Counter::test_counter() {
	while (true) {
		std::string ans;
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
		std::cin >> ans;
		if (ans == "x" || ans == "�") {
			std::cout << "�� ��������!\n";
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
			std::cout << "������������ ����! ��������� �������\n";
		}
	}
}