#include "stdafx.h"
#include <iostream>
#include "Bot.h"
#include "Player.h"
#include "Map.h"
#include "MapCell.h"
#include <windows.h>
#include<list>
using namespace std;

int main()
{
	list<DObject*> some;
	for (int i = 0; i<10; i++)
	{
		some.push_back(new Bot(7 + i, 8 + i));
	}
	MapCell cell;
	cell.ObjectsAtCell[0] = *(new Bot(6,6));
	cell.ObjectsAtCell[1] = *(new Bot(10, 4));
	Bot *first;
	first = new Bot(5, 5);
	Player *me = new Player(1, 2, 100, 0, '@');
	
	DObject * object = new Bot(4, 2);
	while (true) 
	{
		first->Life();
		((Bot*)object)->Life();

		COORD position;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		//drawing bot
		position.X = first->getX();
		position.Y = first->getY();
		SetConsoleCursorPosition(hConsole, position);
		cout << first->getTexture();

		//drawing bot object
		position.X = object->getX();
		position.Y = object->getY();
		SetConsoleCursorPosition(hConsole, position);

		//drawing player
		position.X = me->getX();
		position.Y = me->getY();
		SetConsoleCursorPosition(hConsole, position);
		cout << me->getTexture();
		//drawing another bots from DObject massive
		position.X = cell.ObjectsAtCell[0].getX();
		position.Y = cell.ObjectsAtCell[0].getY();;
		SetConsoleCursorPosition(hConsole, position);
		cout << cell.ObjectsAtCell[0].getTexture();

		position.X = cell.ObjectsAtCell[1].getX();
		position.Y = cell.ObjectsAtCell[1].getY();;
		SetConsoleCursorPosition(hConsole, position);
		cout << cell.ObjectsAtCell[1].getTexture();

		for (list<DObject*>::iterator i = some.begin(); i != some.end();i++)
		{
			position.X = (*i)->getX();
			position.Y = (*i)->getY();
			SetConsoleCursorPosition(hConsole, position);
			cout << ' ';
			((Bot*)(*i))->Life();
			position.X = (*i)->getX();
			position.Y = (*i)->getY();
			SetConsoleCursorPosition(hConsole, position);
			cout << (*i)->getTexture();
		}

		Sleep(500);
		position.X = first->getX();
		position.Y = first->getY();
		SetConsoleCursorPosition(hConsole, position);
		cout << ' ';
		position.X = object->getX();
		position.Y = object->getY();
		SetConsoleCursorPosition(hConsole, position);
		cout << ' ';
	}
	cout << "I AM VERY LASY";
    return 0;
}

