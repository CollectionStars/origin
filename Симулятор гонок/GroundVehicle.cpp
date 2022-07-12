#include "GroundVehicle.h"

double GroundVehicle::result(int dist)
{
	//   время = расстояние / скорость
	double res = static_cast<double> (dist) / speed;

	//количество_отдыхов = время / время_движения_до_отдыха
	int count_rest = static_cast<int>(res) / time_before_rest;

	//теперь пройдемся по массиву длительностей отдыхов и сложим нужные отдыхи
	for (size_t i = 0; i < count_rest; i++)
	{
		//если текущий отдых не выходит за границы массива, то используем переменную i
		if (i < types_of_rest_num) {
			res += rest_duration[i];
		}
		else {
			//если вышли за границу, то прибавляем послежний отдых (ибо он константа для остальных отдыхов)
			res += rest_duration[types_of_rest_num - 1];
		}
	}
	return res;
}

bool GroundVehicle::is_air_vehicle()
{
	return false;
}

GroundVehicle::~GroundVehicle()
{
	delete[] rest_duration;
}
