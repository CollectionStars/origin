#include "Race.h"
#include "Race.h"

bool Race::start_race()
{
	return participants_count > 1;
}

void Race::add_participant(Vehicle* v)
{
	if (v->get_chosen() == false) {
		//ставим флаг, что ТС зарегистрирован
		v->set_chosen(true);

		if (participants == nullptr) {
			participants = new Vehicle * [1];
			participants[participants_count] = v;
			++participants_count;
			std::cout << v->get_name() << " успешно зарегистрирован!\n";
			return ;
		}
		Vehicle** temp = new Vehicle * [participants_count + 1];
		for (size_t i = 0; i < participants_count; i++)
		{
			temp[i] = participants[i];
		}
		delete[]participants;
		temp[participants_count] = v;
		participants = temp;
		++participants_count;
		std::cout << v->get_name() << " успешно зарегистрирован!\n";
		return ;
	}
	std::cout << v->get_name() << " уже зарегистрирован!\n";
}

Race::Race(int d)
{
	name = "Гонка для наземного и воздушного транспорта.";
	distance = d;
	potential_participants = new Vehicle * [7]{ &boots, &broom ,&camel,&centaur, &eagle, &speed_camel , &carpet };
}

Vehicle** Race::get_participants()
{
	sort(participants, participants_count);
	return participants;
}

int Race::get_participants_count()
{
	return participants_count;
}

Vehicle* Race::get_potential_participant(int num)
{
	return potential_participants[num-1];
}

int Race::get_distance()
{
	return distance;
}

Race::~Race()
{
	delete[] participants;
	delete[] potential_participants;
}


void Race::sort(Vehicle** arr, int size)
{
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j]->result(distance) > arr[j + 1]->result(distance)) {
				// меняем элементы местами
				std::swap(arr[j], arr[j + 1]);
			}
		}
	}
}

std::string Race::get_name()
{
	return name;
}
