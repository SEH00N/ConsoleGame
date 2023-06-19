#include "Engine.h"

bool Go2xy(short x, short y)
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cur = { x, y };

	return SetConsoleCursorPosition(hOut, cur);
}

void SetConsoleCursor(bool visible, int size)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = visible;
	cursorInfo.dwSize = size;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}
