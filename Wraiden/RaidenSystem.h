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
	vector<vector<char>> output ;  //显示图案
	vector<vector<int>> quality ;  //属性 0表示空，1表示我方飞机，2表示我方子弹，3表示敌方飞机，4表示敌方子弹
	vector<vector<int>> source ; //源,在对应元素表中的位置
	int enemy_product_speed;  //生产速度
	int timer;  //计数器，控制速度
	int EP_life;
	int EP_speed;
	int EP_len;
	int EP_hei;
	char* EP_pic;
	int EP_p_speed;

	int EB_damage;
	int EB_speed;
	int EB_len;
	int EB_hei;
	char* EB_pic;

	int MP_life;
	int MP_speed;
	int MP_len;
	int MP_hei;
	char* MP_pic;

	int MB_damage;
	int MB_speed;
	int MB_len;
	int MB_hei;
	char* MB_pic;

	int SYS_len;
	int SYS_hei;
public:
	void timer_plus();
	void deal_with_enemys();
	void deal_with_myplane();
	void deal_with_bullets();
	void print_output();
	void move_myplane(char ch);
	bool check_myplane();
	RaidenSystem();
	~RaidenSystem();
};

