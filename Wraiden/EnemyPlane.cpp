#include "EnemyPlane.h"




EnemyPlane::EnemyPlane(int lf, int p_spd, Bullet a, int drt, int x, int y, int len, int hei, char * p)
{
	life = lf;
	speed = p_spd;
	bullet = a;
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
	direction = drt;
}

EnemyPlane::~EnemyPlane()
{
}

bool EnemyPlane::fly_by_direction(int k, int l, int h)
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

void EnemyPlane::set(int t, vector<vector<Gragh>> output)
{
	for(int i=0;i<height;i++)
		for (int j = 0; j < length; j++)
		{
			output[Y + i][X + j].output = pic[i][j];
			output[Y + i][X + j].quality = 3;  //�з��ɻ�
			output[Y + i][X + j].source = t;
		}
}

void EnemyPlane::flesh_bullet()
{
	bullet.change_xy(X, Y);
}
