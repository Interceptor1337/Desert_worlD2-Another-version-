#pragma once
#include "Unit.h"
class Bot :
	public Unit
{
public:
	void walk(int xp,int yp);
	void Life();
	char getTexture();
	Bot(int _x,int _y);
	~Bot();
};

