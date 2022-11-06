#pragma once

class Marine
{
public:
	Marine();
	Marine(int x, int y);

	int Attack();
	void Be_Attacked(int damage_earn);
	void move(int x, int y);
	void show_status();

private:
	int hp;
	int coord_x, coord_y;
	int damage;
	bool is_dead;
};

