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
		Counter c(num);
		while (true) {
			std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
			std::cin >> ans;
			if (ans == "x" || ans == "�") {
				std::cout << "�� ��������!\n";
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
	else {
		Counter c;
		while (true) {
			std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
			std::cin >> ans;
			if (ans == "x" || ans == "�") {
				std::cout << "�� ��������!\n";
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
}