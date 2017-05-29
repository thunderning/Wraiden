#include "Bullet.h"



bool Bullet::fly_by_direction(int k, int l, int h)
{
	if (k < speed) return false;
	switch (direction)
	{
	case 1:
		X--;
		Y--;
		if (check(l, h)) return true;
		X++;
		Y++;
		break;
	case 2:
		Y--;
		if (check(l, h)) return true;
		Y++;
		break;
	case 3:
		X++;
		Y--;
		if (check(l, h)) return true;
		X--;
		Y++;
		break;
	case -1:
		X--;
		Y++;
		if (check(l, h)) return true;
		X++;
		Y--;
		break;
	case -2:
		Y++;
		if (check(l, h)) return true;
		Y--;
		break;
	case -3:
		X++;
		Y++;
		if (check(l, h)) return true;
		X--;
		Y--;
		break;	
	default:
		break;
	}
	return false;
}

Bullet::Bullet()
{
}


Bullet::~Bullet()
{
}
