#pragma once
#include "DObject.h"
class Unit :
	public DObject
{
public:
	virtual void walk(int x,int y)=0;
	int getX();
	int getY();
	Unit();
	~Unit();
};

