#include "Plane.h"



Plane::Plane()
{
}


Plane::~Plane()
{
}

Bullet Plane::launch_bullet()
{
	return bullet;
}


int Plane::change_life(int dmg)
{
	life -= dmg;
	return life>0;
}

void Plane::flesh_bullet()
{
	{
		bullet.change_xy(X, Y);
	}
}

bool Plane::move_to_left(int k, int l, int h)
{
	if (k%speed != 0) return false;
	X--;
	if(check(l, h)) return true;
	X++;
	return false;
}

bool Plane::move_to_right(int k, int l, int h)
{
	if (k%speed != 0) return false;
	X++;
	if (check(l, h)) return true;
	X--;
	return false;
}

bool Plane::move_to_up(int k, int l, int h)
{
	if (k%speed != 0) return false;
	Y--;
	if (check(l, h)) return true;
	Y++;
	return false;
}

bool Plane::move_to_down(int k, int l, int h)
{
	if (k%speed != 0) return false;
	Y++;
	if (check(l, h)) return true;
	Y--;
	return false;
}
