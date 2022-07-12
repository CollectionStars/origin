#include "GroundRace.h"

void GroundRace::add_participant(Vehicle* v)
{
	if (v->is_air_vehicle() == true) {
		std::cout << "Попытка зарегистрировать неправильный тип транспортного средства!\n";
		return;
	}
	Race::add_participant(v);

}

GroundRace::GroundRace(int d):Race(d) {
	name = "Гонка для наземного транспорта.";
}

