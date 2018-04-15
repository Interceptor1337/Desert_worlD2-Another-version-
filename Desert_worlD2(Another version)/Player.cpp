#include "stdafx.h"
#include "Player.h"


int Player::getHitPoints()
{
	return hitPoints;
}

int Player::getXperience()
{
	return xperience;
}


void Player::walk(int dX,int dY) 
{
	if(x+dX>=0)
	   x += dX;
	if(y+dY>=0)
	   y += dY;
}
Player::Player() 
{
}
Player::Player(int inputX, int inputY, int inputHitPoints, int inputXperience, char inputTextue)
{
	if (inputX >= 0)
		 x=inputX;
	if (inputY >= 0)
		y = inputY;
	if (inputHitPoints > 0)
		hitPoints= inputHitPoints;
	if (inputXperience >= 0)
		xperience = inputXperience;
	texture = inputTextue;
}
Player::~Player()
{
}
