#include <iostream>

#define MODE 1

#ifndef MODE

#error "���������� ��������� MODE"


#endif // !MODE



#if MODE == 1

int add(int l, int r) {
	return l + r;
}

#endif // MODE == 1

int main() {
	setlocale(LC_ALL, "ru");

#if MODE == 0
	std::cout << "������� � ������ ����������";


#elif MODE == 1
	int l, r;
	std::cout << "������� � ������ ������\n";
	std::cout << "������� ����� 1: ";
	std::cin >> l;
	std::cout << "������� ����� 2: ";
	std::cin >> r;
	std::cout << "��������� ��������: " << add(l, r);

#else
	std::cout << "����������� �����. ���������� ������";
#endif
}