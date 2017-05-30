#pragma once
#include "Plane.h"
class EnemyPlane :
	public Plane
{
private:
	int direction;  //方向 1 左上； 2 正上； 3 右上；
					//    -1 左下；-2 正下；-3 右下；
public:
	EnemyPlane();
	~EnemyPlane();
	bool fly_by_direction(int k, int l, int h);
	void set(int t, vector<vector<Gragh>> output);
};

