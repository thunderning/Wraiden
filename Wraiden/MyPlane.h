#pragma once
#include "Plane.h"
class MyPlane :
	public Plane
{
public:
	void set(vector<vector<char>> output, vector<vector<int>> quality, vector<vector<int>> source);
	MyPlane(int lf,int p_spd,Bullet a,int x, int y, int len, int hei, char * p);
	MyPlane();
	~MyPlane();
};

