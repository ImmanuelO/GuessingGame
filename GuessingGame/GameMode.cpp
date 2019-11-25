#include "pch.h"
#include "GameMode.h"
#include <iostream>
#include <Windows.h>


iman_game::GameMode::GameMode() : gameMode(GameType::SINGLE_PLAYER)
{
}

void iman_game::GameMode::selectGameMode()
{
	int user_input;

	do
	{
		std::cout << " Select Game Mode:\n";
		std::cout << " 1. Single PLayer \n 2. Multiplayer \n 3. Computer " << std::endl;
		std::cout << "Enter: ";
		
		std::cin >> user_input;

		gameMode = static_cast<GameType> (user_input);


		clearScreen();

	} while (gameMode < GameType::SINGLE_PLAYER || gameMode > GameType::COMPUTER_PLAYER);
}

iman_game::GameType iman_game::GameMode::currentgameMode()
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



