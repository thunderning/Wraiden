#include "Item.h"



bool Item::check(int l, int h)
{
	if (X<1 || X + length>l || Y<1 || Y + height>h) return false;
	return true;
}

bool Item::clear(vector<vector<Gragh>>& output)
{
	exist = 0;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < length; j++)
		{
			output[Y + i][X + j].output = ' ';
			output[Y + i][X + j].quality = 0;
			output[Y + i][X + j].source = -1;
		}
	}
	return true;
}

Item::Item()
{
}


Item::~Item()
{
}
