#pragma once
#include <iostream>
#include "Item.h"
using namespace std;
typedef struct {
	char output;  //��ʾͼ��
	int quality;  //���� 0��ʾ�գ�1��ʾ�ҷ��ɻ���2��ʾ�ҷ��ӵ���3��ʾ�з��ɻ���4��ʾ�з��ӵ�
	int source; //Դ,�ڶ�ӦԪ�ر��е�λ��
} Gragh;
int EP_life;
int EP_speed;
int EP_len;
int EP_hei;
char* EP_pic;
int EB_damage;
int EB_speed;
int EB_len;
int EB_hei;
char* EB_pic;