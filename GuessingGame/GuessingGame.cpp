#include "pch.h"
#include <iostream>
#include "GameMode.h"
#include "GuessingGame.h"
#include <iomanip>

iman_game::GuessingGame::GuessingGame(unsigned int seed)
	                   : rangeOfNumberToGuess(50), player1(nullptr),
	                     player2(nullptr)
{
	std::srand(seed);
	generateNumber();
}

iman_game::GuessingGame::~GuessingGame()
{
	delete player1;
	delete player2;
}

void iman_game::GuessingGame::playGame()
{
	gameMode.selectGameMode();

}

void iman_game::GuessingGame::generateNumber()
{
	numberToGuess = std::rand() % rangeOfNumberToGuess;
}
