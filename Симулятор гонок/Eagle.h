#pragma once
#include "AirVehicle.h"

class Eagle : public AirVehicle {
public:
	Eagle();
	double distance_reduce_factor(int dist) override;
	void set_chosen(bool) override;
	bool get_chosen() override;
protected:
	static bool chosen;
};