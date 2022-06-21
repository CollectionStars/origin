#include <iostream>

#define MODE 1

#ifndef MODE

#error "Определите константу MODE"


#endif // !MODE



#if MODE == 1

int add(int l, int r) {
	return l + r;
}

#endif // MODE == 1

int main() {
	setlocale(LC_ALL, "ru");

#if MODE == 0
	std::cout << "Работаю в режиме тренировки";


#elif MODE == 1
	int l, r;
	std::cout << "Работаю в боевом режиме\n";
	std::cout << "Введите число 1: ";
	std::cin >> l;
	std::cout << "Введите число 2: ";
	std::cin >> r;
	std::cout << "Результат сложения: " << add(l, r);

#else
	std::cout << "Неизвестный режим. Завершение работы";
#endif
}
