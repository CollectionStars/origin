#pragma once
#include "GroundVehicle.h"

class Centaur :public GroundVehicle {
public:
	void set_chosen(bool) override;
	bool get_chosen() override;
	Centaur();
protected:
	//эта переменная нужна для проверки повторного включения в гонку
	static bool chosen;
};