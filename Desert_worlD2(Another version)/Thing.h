#pragma once
#include "DObject.h"
class Thing :
	public DObject
{
private:
	int amount;
public:
	Thing();
	~Thing();
};

