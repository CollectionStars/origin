#pragma once

#include "Vehicle.h"

class GroundVehicle :public Vehicle {
public:

	double result(int dist)override;
	virtual void set_chosen(bool) override = 0;
	virtual bool get_chosen()override = 0;
	bool is_air_vehicle() override;
	~GroundVehicle();
protected:
	//скорость
	int speed = 0;

	//Время движения до отдыха
	int time_before_rest = 0;

	//количество типов отдыха (размер масссива длительности отдыхов)
	int types_of_rest_num = 0;

	//Длительность отдыхов
	double* rest_duration = 0;
};
