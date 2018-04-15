#pragma once
#include "Unit.h"
class Player :
	public Unit
{
private:
	int hitPoints;
	int xperience;
	//add here an inventory list(this is a list of things that player have)
	//also add here a player characteristics
public:
	int getHitPoints();
	int getXperience();

	void walk(int dX, int dY);
	Player();
	Player(int x, int y,int hitPoints, int xperience, char textue);
	~Player();
};

