#pragma once
class DObject
{
protected:
	int x;
	int y;
	char texture;
public:
	virtual int getX();
	virtual int getY();
	virtual char getTexture();
	DObject();
	~DObject();
};

