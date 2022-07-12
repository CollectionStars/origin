#include "SpeedCamel.h"

bool SpeedCamel::chosen = false;

void SpeedCamel::set_chosen(bool ch)
{
	chosen = ch;
}

bool SpeedCamel::get_chosen()
{
	return chosen;
}

SpeedCamel::SpeedCamel()
{
	name = "Верблюд-быстроход";
	speed = 40;
	time_before_rest = 10;

	types_of_rest_num = 3;
	rest_duration = new double[types_of_rest_num];
	rest_duration[0] = 5;
	rest_duration[1] = 6.5;
	rest_duration[2] = 8;
}
