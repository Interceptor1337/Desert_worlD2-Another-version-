#pragma once
class DObject
{
protected:
	int x;
	int y;
	char texture;
public:
	virtual int getX() = 0;
	virtual int getY() = 0;
	virtual char getTexture() = 0;
	DObject();
	~DObject();
};

