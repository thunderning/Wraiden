#include "Plane.h"



Plane::Plane()
{
}


Plane::~Plane()
{
}

bool Plane::move_to_left(int k, int l, int h)
{
	X--;
	if(check(l, h)) return true;
	X++;
	return false;
}

bool Plane::move_to_right(int k, int l, int h)
{
	if (k < speed) return false;
	X++;
	if (check(l, h)) return true;
	X--;
	return false;
}

bool Plane::move_to_up(int k, int l, int h)
{
	if (k < speed) return false;
	Y--;
	if (check(l, h)) return true;
	Y++;
	return false;
}

bool Plane::move_to_down(int k, int l, int h)
{
	if (k < speed) return false;
	Y++;
	if (check(l, h)) return true;
	Y--;
	return false;
}
