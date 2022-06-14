#include "Functions.h"

int sum(int l, int r) {
	return l + r;
}
int sub(int l, int r) {
	return l - r;
}
int mult(int l, int r) {
	return l * r;
}

double dive(double l, int r)
{
	return l / r;
}

int exp(int l, int r) {
	int res = 1;
	for (size_t i = 0; i < r; i++)
	{
		res *= l;
	}
	return res;
}