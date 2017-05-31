#include "MyPlane.h"


MyPlane::MyPlane(int lf, int p_spd, Bullet a, int x, int y, int len, int hei, char * p)
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

}

MyPlane::~MyPlane()
{
}
