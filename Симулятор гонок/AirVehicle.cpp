#include "AirVehicle.h"

double AirVehicle::result(int dist)
{
	//добавили влияние коэфа изменения расстояния на нашу дистанцию
	double reduce_dist = static_cast<double>(dist) * (1 - distance_reduce_factor(dist));
	double res = reduce_dist / speed;
	return res;
}

bool AirVehicle::is_air_vehicle()
{
	return true;
}
