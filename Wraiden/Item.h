#pragma once
#include <vector>
#include "initial.h"
using namespace std;
class Item
{
protected:
	int X, Y;  //飞机所在坐标，以左上角为准
	int length, height;  //图案大小
	vector<vector<char>> pic;	//具体图案
	bool exist;  //是否还存在
public:
	bool check(int l, int h);  //检查出界
	bool clear(vector<vector<Gragh>> &output);  //从图中删去
	Item();
	~Item();
};

