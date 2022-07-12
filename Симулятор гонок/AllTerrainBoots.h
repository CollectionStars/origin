#pragma once
#include "GroundVehicle.h"

class AllTerrainBoots :public GroundVehicle {
public:
	AllTerrainBoots();
	void set_chosen(bool) override;
	bool get_chosen() override;
protected:
	//эта переменная нужна для проверки повторного включения в гонку
	static bool chosen;
};