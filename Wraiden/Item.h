#pragma once
#include <vector>
#include "initial.h"
using namespace std;
class Item
{
protected:
	int X, Y;  //�ɻ��������꣬�����Ͻ�Ϊ׼
	int length, height;  //ͼ����С
	vector<vector<char>> pic;	//����ͼ��
	bool exist;  //�Ƿ񻹴���
public:
	bool is_exist();
	bool check(int l, int h);  //������
	bool clear(vector<vector<char>> output, vector<vector<int>> quality, vector<vector<int>> source);  //��ͼ��ɾȥ
	Item();
	~Item();
};

