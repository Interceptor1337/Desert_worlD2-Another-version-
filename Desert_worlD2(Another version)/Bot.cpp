#include "stdafx.h"
#include "Bot.h"
#include <stdlib.h> 
#include <time.h>

void Bot::walk(int xp, int yp)
{
	x += xp;
	y += yp;
}

void Bot::Life()
{
	int randStep = rand()%20;
	if (randStep<=5)
		walk(1, 0);
	if(randStep>5&&randStep<=10)
		walk(-1, 0);
	if(randStep>10&&randStep<=15)
		walk(0, 1);
    if(randStep>15&&randStep<=20)
		walk(0, -1);
}

char Bot::getTexture()
{
	return texture;
}

Bot::Bot(int _x, int _y)
{
	x = _x;
	y = _y;
	texture = '&';
}

Bot::Bot()
{
}


Bot::~Bot()
{
}
