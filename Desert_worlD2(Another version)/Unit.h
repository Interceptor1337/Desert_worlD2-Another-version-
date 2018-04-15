#pragma once
#include "DObject.h"
class Unit :
	public DObject
{
public:
	virtual void walk(int x,int y);
	virtual void Life();
	int getX();
	int getY();
	char getTexture();
	Unit();
	~Unit();
};

