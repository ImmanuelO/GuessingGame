#include "pch.h"
#include "GameMode.h"
#include <iostream>
#include <Windows.h>


iman_game::GameMode::GameMode() : gameMode(1)
{
}

void iman_game::GameMode::selectGameMode()
{
	do
	{
		std::cout << " Select Game Mode:\n";
		std::cout << " 1. Single PLayer \n 2. Multiplayer \n 3. Computer " << std::endl;
		std::cout << "Enter: ";
		std::cin >> gameMode;

		clearScreen();

	} while (gameMode < 1 || gameMode > 3);
}

int iman_game::GameMode::currentgameMode()
{
	return gameMode;
}


void iman_game::GameMode::clearScreen()
{

	HANDLE                     hStdOut;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	DWORD                      count;
	DWORD                      cellCount;
	COORD                      homeCoords = { 0, 0 };

	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hStdOut == INVALID_HANDLE_VALUE) return;

	/* Get the number of cells in the current buffer */
	if (!GetConsoleScreenBufferInfo(hStdOut, &csbi)) return;
	cellCount = csbi.dwSize.X *csbi.dwSize.Y;

	/* Fill the entire buffer with spaces */
	if (!FillConsoleOutputCharacter(
		hStdOut,
		(TCHAR) ' ',
		cellCount,
		homeCoords,
		&count
	)) return;

	/* Fill the entire buffer with the current colors and attributes */
	if (!FillConsoleOutputAttribute(
		hStdOut,
		csbi.wAttributes,
		cellCount,
		homeCoords,
		&count
	)) return;

	/* Move the cursor home */
	SetConsoleCursorPosition(hStdOut, homeCoords);
}



