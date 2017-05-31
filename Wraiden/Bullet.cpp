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

Bullet::Bullet(int dmg, int spd, int frm, int drt, int x, int y, int len, int hei, char * p)
{
	damage = dmg;
	speed = spd;
	from = frm;
	direction = drt;
	X = x;
	Y = y;
	length = len;
	height = hei;
	for (int i = 0; i < hei; i++)
	{
		vector<char> t;
		for (int j = 0; j < len; j++)
			t.push_back(p[i*len + j]);
		pic.push_back(t);
	}
	exist = 1;
}




Bullet::~Bullet()
{
}
