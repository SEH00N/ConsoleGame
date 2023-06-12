#include "Engine.h"

bool Go2xy(int x, int y)
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cur = { x, y };

	return SetConsoleCursorPosition(hOut, cur);
}