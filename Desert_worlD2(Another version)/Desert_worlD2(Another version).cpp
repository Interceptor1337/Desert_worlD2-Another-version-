#include "stdafx.h"
#include <iostream>
#include "Bot.h"
#include <windows.h>
using namespace std;

int main()
{
	Bot first(5,5);
	while (true) 
	{
		first.Life();
		COORD position;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		position.X = first.getX();
		position.Y = first.getY();
		SetConsoleCursorPosition(hConsole, position);
		cout << first.getTexture();
		Sleep(500);
		position.X = first.getX();
		position.Y = first.getY();
		SetConsoleCursorPosition(hConsole, position);
		cout << ' ';
		
	}
	cout << "I AM VERY LASY";
    return 0;
}

