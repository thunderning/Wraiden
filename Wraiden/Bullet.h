#pragma once
#include <vector>
#include "initial.h"
using namespace std;
class Bullet :
	public Item
{
protected:
	int damage;  //�˺�      
	int speed;  //�ٶȣ�ÿx�μ����ƶ�һ��ֵԽ���ٶ�Խ��
	int from;  //�ӵ�Դͷ��0��ʾ�ҷ���1��ʾ�з�
	int direction;  //���� 1 ���ϣ� 2 ���ϣ� 3 ���ϣ�
					//    -1 ���£�-2 ���£�-3 ���£�
public:
	bool fly_by_direction(int k,int l,int h);
	Bullet();
	~Bullet();
};

