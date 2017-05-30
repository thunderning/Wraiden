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
	vector<Bullet> bullets;  //�ӵ�
	MyPlane myplane;  
	vector<EnemyPlane> enemys;  //�л�
	int length, height;  //ϵͳ����
	vector<vector<Gragh>> output;  //��ӡ
	int enemy_bullets_timer;  //�������������ٶ�
	int my_bullets_timer;  //�������������ٶ�
	int enemy_plane_timer;  //�������������ٶ�
	int my_plane_timer;  //�������������ٶ�
	int enemy_product_timer;  //�������������ٶ�
public:
	void deal_with_enemys();
	void deal_with_myplane();
	void deal_with_bullets();
	void print_output();
	void move_myplane(char ch);
	RaidenSystem();
	~RaidenSystem();
};

