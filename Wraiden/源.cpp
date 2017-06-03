#include "RaidenSystem.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
	RaidenSystem rs;
	rs.print_output();
	while (1)
	{
		if (kbhit())
		{
			char ch = cin.get();
			rs.move_myplane(ch);
		}
		rs.deal_with_enemys();
		rs.deal_with_myplane();
		rs.deal_with_bullets();
		rs.print_output();
		if (!rs.check_myplane()) break;
	}
	return 0;
}