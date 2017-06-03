#include "MyPlane.h"


void MyPlane::set(vector<vector<char>> output, vector<vector<int>> quality, vector<vector<int>> source)
{
	for (int i = 0; i<height; i++)
		for (int j = 0; j < length; j++)
		{
			output[Y + i][X + j] = pic[i][j];
			quality[Y + i][X + j] = 1;  //µÐ·½·É»ú
			source[Y + i][X + j] = -1;
		}
}

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

MyPlane::MyPlane()
{
}

MyPlane::~MyPlane()
{
}
