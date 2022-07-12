#include "Centaur.h"

bool Centaur::chosen = false;

void Centaur::set_chosen(bool ch)
{
	chosen = ch;
}

bool Centaur::get_chosen()
{
	return chosen;
}

Centaur::Centaur()
{
	name = "Кентавр";
	speed = 15;
	time_before_rest = 8;

	types_of_rest_num = 1;
	rest_duration = new double[types_of_rest_num];
	rest_duration[0] = 2;
}
