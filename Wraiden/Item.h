#pragma once
#include <vector>
using namespace std;
class Item
{
protected:
	int X, Y;  //�ɻ��������꣬�����Ͻ�Ϊ׼
	int length, height;  //ͼ����С
	vector<vector<char>> pic;	//����ͼ��
	bool exist;  //�Ƿ񻹴���
public:
	bool check(int l, int h);  //������
	Item();
	~Item();
};

