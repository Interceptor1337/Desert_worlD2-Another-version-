#include "stdafx.h"
#include "MapCell.h"


MapCell::MapCell()
{
	n = 10;
	ObjectsAtCell = new DObject[n];
}

MapCell::~MapCell()
{
}
