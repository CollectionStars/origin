#pragma once
#include "Vehicle.h"

class AirVehicle :public Vehicle {
public:

	double result(int dist)override;
	virtual void set_chosen(bool) override = 0;
	virtual bool get_chosen() override = 0;
	bool is_air_vehicle()override;
protected:

	//скорость
	int speed=0;

	//коэф уменьшения расстояния (функция, тк есть логика)
	virtual double distance_reduce_factor(int dist) = 0;
};
