#include  "Eagle.h"

bool Eagle::chosen = false;

Eagle::Eagle()
{
	name = "Орел";
	speed = 8; 
}

double Eagle::distance_reduce_factor(int dist)
{
	return 0.06;
}

void Eagle::set_chosen(bool ch)
{
	chosen = ch;
}

bool Eagle::get_chosen()
{
	return chosen;
}
