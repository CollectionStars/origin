#pragma once

#include "AirVehicle.h"
#include "AllTerrainBoots.h"
#include "Broom.h"
#include "Camel.h"
#include "Centaur.h"
#include "Eagle.h"
#include "GroundVehicle.h"
#include "MagicCarpet.h"
#include "SpeedCamel.h"
#include "Vehicle.h"
#include <iostream>

class Race {
public:
	//вернет false, если нет 2 участников
	bool start_race();

	//добавить участника
	virtual void add_participant(Vehicle*);

	//получить название гонки (наземная, воздушная, общая)
	virtual std::string get_name();

	Race(int d);

	//вернет отсортированный по времени массив результатов
	Vehicle** get_participants();

	//получить кол-во участников
	int get_participants_count();

	//получить потенциального участника по номеру
	Vehicle* get_potential_participant(int num);
	
	//получить дистанцию
	int get_distance();

	~Race();
protected:

	//дистанция
	int distance=0;

	//количество участников
	int participants_count=0;

	//участники гонки
	Vehicle** participants=nullptr; 

	//потенциальные участники (все виды транспорта)
	Vehicle** potential_participants = nullptr;

	//название гонки(наземная, воздушная, общая)
	std::string name;
private:

	void sort(Vehicle** arr, int size);

	//это потенциальные участники гонки
	AllTerrainBoots boots;
	Broom broom;
	Camel camel;
	Centaur centaur;
	Eagle eagle;
	SpeedCamel speed_camel;
	MagicCarpet carpet;
};





