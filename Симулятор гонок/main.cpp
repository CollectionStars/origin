#include <iostream>
#include "Race.h"
#include "AirRace.h"
#include "GroundRace.h"
#include <Windows.h>


//общая регистрация всех  
void registration(Race* r) {
	int num = 1;

	while (num != 0) {
		std::cout << r->get_name() << " Расстояние: " << r->get_distance() << "\n";
		if (r->get_participants_count() != 0) {
			std::cout << "Зарегистрированные транспортные средства: ";
			for (size_t i = 0; i < r->get_participants_count(); i++)
			{
				if (i > 0) {
					std::cout << ", ";
				}
				std::cout << r->get_participants()[i]->get_name();
			}
			std::cout << "\n";
		}
		std::cout << "1. Ботинки-вездеходы\n";
		std::cout << "2. Метла\n";
		std::cout << "3. Верблюд\n";
		std::cout << "4. Кентавр\n";
		std::cout << "5. Орел\n";
		std::cout << "6. Верблюд-быстроход\n";
		std::cout << "7. Ковер-самолет\n";
		std::cout << "0. Закончить регистрацию\n";
		std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
		std::cin >> num;

		system("cls");

		if (num == 0) {
			if (r->start_race() == false) {
				std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства\n";
				//просто так, чтобы не выходило из цикла
				num = 1;
			}
		}
		else if (num > 0 && num < 8) {
			Vehicle* veh = r->get_potential_participant(num);
			r->add_participant(veh);
		}
		else {
			std::cout << "Неправильный номер!\n";
		}
	}
}


void menu(Race* r) {

	std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства\n";
	std::cout << "1. Зарегистрировать транспорт\n";
	std::cout << "Выберите действие: ";

	int choice;
	std::cin >> choice;
	while (choice != 1) {
		system("cls");
		std::cout << "Неправильный номер\n";
		std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства\n";
		std::cout << "1. Зарегистрировать транспорт\n";
		std::cout << "Выберите действие: ";
		std::cin >> choice;
	}
	system("cls");

	registration(r);
	system("cls");

	std::cout << "1. Зарегистрировать транспорт\n";
	std::cout << "2. Начать гонку\n";

	std::cin >> choice;

	while (choice != 1 && choice != 2) {
		system("cls");
		std::cout << "Неправильный номер\n";
		std::cout << "1. Зарегистрировать транспорт\n";
		std::cout << "2. Начать гонку\n";
		std::cin >> choice;
	}
	system("cls");

	if (choice == 1) {
		registration(r);
	}
	system("cls");

	std::cout << "Результаты гонки\n";
	for (size_t i = 0; i < r->get_participants_count(); i++)
	{
		std::cout << i + 1 << ". " << r->get_participants()[i]->get_name() << ". Время: " << r->get_participants()[i]->result(r->get_distance()) << "\n";
	}

}

void make_race() {
	//для перезапуска гонок
	while (true) {
		std::cout << "Добро пожаловать в гоночный симулятор!\n";
		std::cout << "1. Гонка для наземного транспорта\n";
		std::cout << "2. Гонка для воздушного транспорта\n";
		std::cout << "3. Гонка для наземного и воздушного транспорта\n";
		std::cout << "Выберите тип гонки: ";
		//тип гонок (наземный, воздушный, общий)
		int race_type;
		std::cin >> race_type;
		while (race_type < 1 || race_type >3) {
			system("cls");
			std::cout << "Неправильный номер\n";
			std::cout << "1. Гонка для наземного транспорта\n";
			std::cout << "2. Гонка для воздушного транспорта\n";
			std::cout << "3. Гонка для наземного и воздушного транспорта\n";
			std::cout << "Выберите тип гонки: ";
			std::cin >> race_type;
		}
		system("cls");

		std::cout << "Укажите длину дистанции (должна быть положительна): ";
		int dist;
		std::cin >> dist;
		while (dist <= 0) {
			system("cls");
			std::cout << "Неправильная дистанция!\n";
			std::cout << "Укажите длину дистанции (должна быть положительна): ";
			std::cin >> dist;
		}
		system("cls");

		switch (race_type)
		{
		case 1: {
			GroundRace gr(dist);
			menu(&gr);
			break;
		}
		case 2: {
			AirRace ar(dist);
			menu(&ar);
			break;
		}
		case 3: {
			Race r(dist);
			menu(&r);
			break;
		}
		}

		int choice;
		std::cout << "\n1. Провести еще одну гонку\n";
		std::cout << "2. Выйти\n";
		std::cout << "Выберите действие: ";

		std::cin >> choice;
		while (choice != 1 && choice != 2) {
			system("cls");
			std::cout << "Неправильный номер!\n";
			std::cout << "1. Провести еще одну гонку\n";
			std::cout << "2. Выйти\n";
			std::cout << "Выберите действие: ";
			std::cin >> choice;
		}

		if (choice == 2) {
			return ;
		}
		system("cls");
	}
}
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	make_race();
	
}

