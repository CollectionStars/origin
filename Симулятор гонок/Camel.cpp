#include "Camel.h"

bool Camel::chosen = false;

void Camel::set_chosen(bool ch)
{
	chosen = ch;
}

bool Camel::get_chosen()
{
	return chosen;
}

Camel::Camel()
{
	name = "Верблюд";
	speed = 10;
	time_before_rest = 30;

	types_of_rest_num = 2;
	rest_duration = new double[types_of_rest_num];
	rest_duration[0] = 5;
	rest_duration[1] = 8;
}
