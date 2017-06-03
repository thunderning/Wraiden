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
	bool is_exist();
	bool check(int l, int h);  //检查出界
	bool clear(vector<vector<char>> output, vector<vector<int>> quality, vector<vector<int>> source);  //从图中删去
	Item();
	~Item();
};

