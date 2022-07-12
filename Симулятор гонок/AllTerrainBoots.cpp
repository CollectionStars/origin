#include "AllTerrainBoots.h"

bool AllTerrainBoots::chosen = false;

void AllTerrainBoots::set_chosen(bool ch)
{
	chosen = ch;
}

bool AllTerrainBoots::get_chosen()
{
	return chosen;
}

AllTerrainBoots::AllTerrainBoots()
{
	name = "Ботинки-вездеходы";
	speed = 6;
	time_before_rest = 60;

	types_of_rest_num = 2;
	rest_duration = new double[types_of_rest_num];
	rest_duration[0] = 10;
	rest_duration[1] = 5;
}
