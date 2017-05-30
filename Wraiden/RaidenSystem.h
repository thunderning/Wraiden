#pragma once
#include "Bullet.h"
#include "EnemyPlane.h"
#include "initial.h"
#include "MyPlane.h"
#include "Plane.h"
#include <iostream>
#include <vector>
using namespace std;

class RaidenSystem
{
private:
	vector<Bullet> bullets;  //子弹
	MyPlane myplane;  
	vector<EnemyPlane> enemys;  //敌机
	int length, height;  //系统长宽
	vector<vector<Gragh>> output;  //打印
	int enemy_bullets_timer;  //计数器，控制速度
	int my_bullets_timer;  //计数器，控制速度
	int enemy_plane_timer;  //计数器，控制速度
	int my_plane_timer;  //计数器，控制速度
	int enemy_product_timer;  //计数器，控制速度
public:
	void deal_with_enemys();
	void deal_with_myplane();
	void deal_with_bullets();
	void print_output();
	void move_myplane(char ch);
	RaidenSystem();
	~RaidenSystem();
};

