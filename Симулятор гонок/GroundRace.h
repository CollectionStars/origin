#pragma once

#include "Race.h"

class GroundRace : public Race {
public:

	//добавить учатсника , если участник добавлен, то вернем true, инача false 
	 void add_participant(Vehicle*) override;

	 GroundRace(int d);
};