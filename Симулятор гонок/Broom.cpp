#include  "Broom.h"

bool Broom::chosen = false;

Broom::Broom()
{
	name = "Метла";
	speed = 20;
}

double Broom::distance_reduce_factor(int dist)
{
	//за каждую 1000м кэф увеличивается на 1
	return  (dist / 1000) / 100.;
}

void Broom::set_chosen(bool ch)
{
	chosen = ch;
}

bool Broom::get_chosen()
{
	return chosen;
}
