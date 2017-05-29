#include "Item.h"



bool Item::check(int l, int h)
{
	if (X<1 || X + length>l || Y<1 || Y + height>h) return false;
	return true;
}

Item::Item()
{
}


Item::~Item()
{
}
