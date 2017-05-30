#include "EnemyPlane.h"



EnemyPlane::EnemyPlane()
{
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
			output[Y + i][X + j].quality = 3;  //µÐ·½·É»ú
			output[Y + i][X + j].source = t;
		}
}
