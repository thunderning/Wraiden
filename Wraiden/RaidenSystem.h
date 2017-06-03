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
	vector<vector<char>> output ;  //��ʾͼ��
	vector<vector<int>> quality ;  //���� 0��ʾ�գ�1��ʾ�ҷ��ɻ���2��ʾ�ҷ��ӵ���3��ʾ�з��ɻ���4��ʾ�з��ӵ�
	vector<vector<int>> source ; //Դ,�ڶ�ӦԪ�ر��е�λ��
	int enemy_product_speed;  //�����ٶ�
	int timer;  //�������������ٶ�
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

