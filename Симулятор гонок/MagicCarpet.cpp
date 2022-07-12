#include "MagicCarpet.h"

bool MagicCarpet::chosen = false;

MagicCarpet::MagicCarpet()
{
	name = "Ковер-самолет";
	speed = 10;
}

double MagicCarpet::distance_reduce_factor(int dist)
{
	if (dist < 1000)
		return 0;
	else if (dist < 5000)
		return 0.03;
	else if (dist < 10000)
		return 0.1;
	else return 0.05;
}

void MagicCarpet::set_chosen(bool ch)
{
	chosen = ch;
}

bool MagicCarpet::get_chosen()
{
	return chosen;
}
