#pragma once
#include <iostream>
#include "Item.h"
using namespace std;
typedef struct {
	char output;  //��ʾͼ��
	int quality;  //���� 1��ʾ�ҷ��ɻ���2��ʾ�ҷ��ӵ���3��ʾ�з��ɻ���4��ʾ�з��ӵ�
	vector<Item>::iterator source; //Դ
} Gragh;
int MYPLANE_LIFE;
int MYPLANE_SPEED;
int MYBULLET_SPEED;