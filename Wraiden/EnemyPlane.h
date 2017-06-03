#pragma once
#include "Plane.h"
class EnemyPlane :
	public Plane
{
private:
	int direction;  //���� 1 ���ϣ� 2 ���ϣ� 3 ���ϣ�
					//    -1 ���£�-2 ���£�-3 ���£�
public:
	EnemyPlane(int lf, int p_spd, Bullet a,int drt, int x, int y, int len, int hei, char * p);
	~EnemyPlane();
	bool fly_by_direction(int k, int l, int h);
	void set(int t, vector<vector<char>> output, vector<vector<int>> quality, vector<vector<int>> source);
	void flesh_bullet();
};

