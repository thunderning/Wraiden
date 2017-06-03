#include "Item.h"



bool Item::check(int l, int h)
{
	if (X<1 || X + length>l || Y<1 || Y + height>h) return false;
	return true;
}

bool Item::clear(vector<vector<char>> output, vector<vector<int>> quality, vector<vector<int>> source)
{
	exist = 0;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < length; j++)
		{
			output[Y + i][X + j] = ' ';
			quality[Y + i][X + j] = 0;
			source[Y + i][X + j] = -1;
		}
	}
	return true;
}


bool Item::is_exist()
{
	return exist;
}

Item::Item()
{
}


Item::~Item()
{
}
