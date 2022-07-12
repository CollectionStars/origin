#pragma once
#include "GroundVehicle.h"

class SpeedCamel :public GroundVehicle {
public:
	SpeedCamel();
	void set_chosen(bool) override;
	bool get_chosen() override;
protected:
	//эта переменная нужна для проверки повторного включения в гонку
	static bool chosen;
};