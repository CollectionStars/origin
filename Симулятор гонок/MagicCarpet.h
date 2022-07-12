#pragma once
#include "AirVehicle.h"

class MagicCarpet : public AirVehicle {
public:
	MagicCarpet();
	double distance_reduce_factor(int dist) override;
	void set_chosen(bool) override;
	bool get_chosen() override;
protected:
	static bool chosen;
};