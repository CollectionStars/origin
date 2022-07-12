#pragma once
#include "GroundVehicle.h"

class Camel : public GroundVehicle {
public:
	void set_chosen(bool) override;
	bool get_chosen() override;
	Camel(); 
protected:
	//эта переменная нужна для проверки повторного включения в гонку
	static bool chosen;
};
