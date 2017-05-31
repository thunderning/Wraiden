#pragma once
#include <iostream>
#include "Item.h"
using namespace std;
typedef struct {
	char output;  //显示图案
	int quality;  //属性 0表示空，1表示我方飞机，2表示我方子弹，3表示敌方飞机，4表示敌方子弹
	int source; //源,在对应元素表中的位置
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