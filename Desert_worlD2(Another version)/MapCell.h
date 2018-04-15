#pragma once
#include "DObject.h"
#include <list>
class MapCell :
	public DObject
{
//protected:
	
public:
	int n;//amount of objects at the cell
	DObject* ObjectsAtCell;
	MapCell();
	~MapCell();
};

