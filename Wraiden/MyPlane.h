#pragma once
#include "Plane.h"
class MyPlane :
	public Plane
{
public:
	MyPlane(int lf,int p_spd,Bullet a,int x, int y, int len, int hei, char * p);
	~MyPlane();
};

