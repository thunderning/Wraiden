#include "RaidenSystem.h"
#include <time.h>



void RaidenSystem::timer_plus()
{
	timer++;
}

void RaidenSystem::deal_with_enemys()
{
	for (auto i=0;i!=enemys.size();i++)
	{
		enemys[i].fly_by_direction(timer,length,height);
		enemys[i].flesh_bullet();
		enemys[i].set(i, output, quality, source);
	}
	if (timer%enemy_product_speed != 0) return;
	srand(time(0));
	int x = rand() % length + 1;
	EnemyPlane ep(EP_life,EP_speed,
		Bullet::Bullet(EB_damage,EB_speed,1,-(rand()%4),x,1,EB_len,EB_hei,EB_pic),
		-(rand()%4),x,1,EP_len,EP_hei,EP_pic);  
	enemys.push_back(ep);
}

void RaidenSystem::deal_with_myplane()
{
	myplane.set(output, quality, source);
}

void RaidenSystem::deal_with_bullets()
{
	for (auto i = 0; i != enemys.size(); i++)
	{
		Bullet tmp=enemys[i].launch_bullet();
		if (timer%tmp.get_speed() == 0)
			bullets.push_back(tmp);
	}
	Bullet tmp = myplane.launch_bullet();
	if (timer%tmp.get_speed() == 0)
		bullets.push_back(tmp);
	for (auto i = 0; i != bullets.size(); i++)
	{
		bullets[i].fly_by_direction(timer,length,height);
		int tmp = bullets[i].set(i, output,quality,source);
		if (tmp == -1)
		{
			myplane.change_life(bullets[i].get_damage());
			bullets[i].clear(output, quality, source);
		}
		else if(tmp!=-2)
		{
			if (!enemys[tmp].change_life(bullets[i].get_damage()))
				enemys[tmp].clear(output, quality, source);
			bullets[i].clear(output, quality, source);
		}
	}
	for (auto i = 0; i != enemys.size(); i++)
	{
		if (!enemys[i].is_exist()) 
			enemys.erase(enemys.begin()+(i--));
	}
	for (auto i = 0; i != bullets.size(); i++)
	{
		if (!bullets[i].is_exist())
			bullets.erase(bullets.begin() + (i--));
	}
}

void RaidenSystem::print_output()
{
	for (int i = 0; i <= height + 1; i++)
	{
		for (int j = 0; j <= length + 1; j++)
			cout << output[i][j];
		cout << endl;
	}
}

void RaidenSystem::move_myplane(char ch)
{
	switch (ch)
	{
	case 'a':
		myplane.move_to_left(timer, length, height);
		break;
	case 's':
		myplane.move_to_down(timer, length, height);
		break;
	case 'd':
		myplane.move_to_right(timer, length, height); 
		break;
	case 'w':
		myplane.move_to_up(timer, length, height);
		break;
	default:
		break;
	}
}

bool RaidenSystem::check_myplane()
{
	return myplane.change_life(0);
}

RaidenSystem::RaidenSystem()
{
	timer = 0;
	enemy_product_speed = EP_p_speed;
	length = SYS_len;
	height = SYS_hei;
	myplane = MyPlane::MyPlane(MP_life, MP_speed,
		Bullet::Bullet(MB_damage, MB_speed, 0, 2, length / 2, height, MB_len, MB_hei, MB_pic),
		length / 2, height, MP_len, MP_hei, MP_pic);
	vector<char> firstline_o(length+2);
	vector<int> firstline_q(length + 2);
	vector<int> firstline_s(length + 2);
	for (int i = 0; i <= length + 1; i++)
	{
		firstline_o[i] = '-';
		firstline_q[i] = '0';
		firstline_s[i] = -2;
	}
	output.push_back(firstline_o);
	quality.push_back(firstline_q);
	source.push_back(firstline_s);
	vector<char> midline_o(length + 2);
	vector<int> midline_q(length + 2);
	vector<int> midline_s(length + 2);
	midline_o[0] = '|';
	midline_q[0] = '0';
	midline_s[0] = -2;
	midline_o[length+1] = '|';
	midline_q[length+1] = '0';
	midline_s[length+1] = -2;
	for (int i = 1; i <= length ; i++)
	{
		midline_o[i] = ' ';
		midline_q[i] = '0';
		midline_s[i] = -2;
	}
	for (int i = 1; i <= height; i++)
	{
		output.push_back(midline_o);
		quality.push_back(midline_q);
		source.push_back(midline_s);
	}
	output.push_back(firstline_o);
	quality.push_back(firstline_q);
	source.push_back(firstline_s);
}


RaidenSystem::~RaidenSystem()
{
}
