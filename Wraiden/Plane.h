#pragma once
#include <vector>
#include "Bullet.h"
#include "initial.h"
using namespace std;
class Plane :
	public Item
{
protected:
	int life;  //生命       
	int speed;  //速度，每x次计数移动一格，值越大速度越慢
	Bullet bullet;  //子弹  
public:
	Plane();
	~Plane();
	Bullet launch_bullet();
	//int get_life();
	int change_life(int dmg);
	void flesh_bullet();
	bool move_to_left(int k,int l,int h);  //边界值，1~l和1~h为可移动范围
	bool move_to_right(int k,int l, int h);  //边界值，1~l和1~h为可移动范围
	bool move_to_up(int k, int l, int h);  //边界值，1~l和1~h为可移动范围
	bool move_to_down(int k, int l, int h);  //边界值，1~l和1~h为可移动范围
};

