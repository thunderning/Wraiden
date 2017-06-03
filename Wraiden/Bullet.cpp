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

void Bullet::change_xy(int px, int py)
{
	X = px;
	Y = py;
	return;
}

int Bullet::get_speed()
{
	return speed;
}

int Bullet::get_damage()
{
	return damage;
}

int Bullet::set(int t,vector<vector<char>> output, vector<vector<int>> quality, vector<vector<int>> source)
{
	for (int i = 0; i<height; i++)
		for (int j = 0; j < length; j++)
		{
			if (from == 0 && quality[Y + i][X + j] == 3) return source[Y + i][X + j];
			if (from == 1 && quality[Y + i][X + j] == 1) return -1;
			output[Y + i][X + j] = pic[i][j];
			quality[Y + i][X + j] = from+from+2;  //µÐ·½·É»ú
			source[Y + i][X + j] = t;
		}
	return -2;
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

Bullet::Bullet()
{
}




Bullet::~Bullet()
{
}
