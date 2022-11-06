#include "Marine.h"
#include "Header.h"

Marine::Marine()
{
	hp = 50;
	coord_x = coord_y = 0;
	damage = 5;
	is_dead = false;
}

Marine::Marine(int x, int y)
{
	coord_x = x;
	coord_y = y;
	hp = 50;
	damage = 5;
	is_dead = false;
}

int Marine::Attack()
{
	return damage;
}

void Marine::Be_Attacked(int damage_earn)
{
	hp -= damage_earn;
	if (hp <= 0)
		is_dead = true;
}

void Marine::move(int x, int y)
{
	coord_x = x;
	coord_y = y;
}

void Marine::show_status()
{
	cout << " *** Marine *** " << endl;
	cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << endl;
	cout << " HP : " << hp << endl;
}
