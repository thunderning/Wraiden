#pragma once
#include <vector>
#include "Bullet.h"
#include "initial.h"
using namespace std;
class Plane :
	public Item
{
protected:
	int life;  //����       
	int speed;  //�ٶȣ�ÿx�μ����ƶ�һ��ֵԽ���ٶ�Խ��
	Bullet bullet;  //�ӵ�  
public:
	Plane();
	~Plane();
	Bullet launch_bullet();
	//int get_life();
	int change_life(int dmg);
	void flesh_bullet();
	bool move_to_left(int k,int l,int h);  //�߽�ֵ��1~l��1~hΪ���ƶ���Χ
	bool move_to_right(int k,int l, int h);  //�߽�ֵ��1~l��1~hΪ���ƶ���Χ
	bool move_to_up(int k, int l, int h);  //�߽�ֵ��1~l��1~hΪ���ƶ���Χ
	bool move_to_down(int k, int l, int h);  //�߽�ֵ��1~l��1~hΪ���ƶ���Χ
};

