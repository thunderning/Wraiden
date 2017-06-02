#include "RaidenSystem.h"
#include <time.h>



void RaidenSystem::deal_with_enemys()
{
	enemy_plane_timer++;
	for (auto i=0;i!=enemys.size();i++)
	{
		enemys[i].fly_by_direction(enemy_plane_timer,length,height);
		enemys[i].flesh_bullet();
		enemys[i].set(i, output);
	}
	srand(time(0));
	int x = rand() % length + 1;
	EnemyPlane ep(EP_life,EP_speed,
		Bullet::Bullet(EB_damage,EB_speed,1,-(rand()%4),x,1,EB_len,EB_hei,EB_pic),
		-(rand()%4),x,1,EP_len,EP_hei,EP_pic);  //TODO:完成初始化
	enemys.push_back(ep);
}

void RaidenSystem::move_myplane(char ch)
{
	switch (ch)
	{
	case 'a':
		myplane.move_to_left(my_plane_timer, length, height);
		break;
	case 's':
		myplane.move_to_down(my_plane_timer, length, height);
		break;
	case 'd':
		myplane.move_to_right(my_plane_timer, length, height); 
		break;
	case 'w':
		myplane.move_to_up(my_plane_timer, length, height);
		break;
	default:
		break;
	}
}

RaidenSystem::RaidenSystem()
{
}


RaidenSystem::~RaidenSystem()
{
}
