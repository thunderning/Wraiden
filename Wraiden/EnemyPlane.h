#pragma once
#include "Plane.h"
class EnemyPlane :
	public Plane
{
private:
	int direction;  //���� 1 ���ϣ� 2 ���ϣ� 3 ���ϣ�
					//    -1 ���£�-2 ���£�-3 ���£�
public:
	EnemyPlane();
	~EnemyPlane();
	bool fly_by_direction(int k, int l, int h);
	void set(int t, vector<vector<Gragh>> output);
};

