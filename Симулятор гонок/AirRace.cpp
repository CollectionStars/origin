#include "AirRace.h"

void AirRace::add_participant(Vehicle* v)
{
	if (v->is_air_vehicle() == false) {
		std::cout << "Попытка зарегистрировать неправильный тип транспортного средства!\n";
		return;
	}
	Race::add_participant(v);
}

AirRace::AirRace(int d) :Race(d) {
	name = "Гонка для воздушного транспорта.";
}

