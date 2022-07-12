#pragma once
#include "Race.h"

class AirRace : public Race {
public:

	//добавить учатсника , если участник добавлен, то вернем true, инача false 
	void add_participant(Vehicle*) override;

	AirRace(int d);
};