#include "pch.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include "GameMode.h"
#include "GuessingGame.h"
#include "Player.h"
#include "PlayerCreation.h"


int main() {
	iman_game::GuessingGame jenniferIsaBitch(time(NULL));

	jenniferIsaBitch.playGame();

}




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

void iman_game::GuessingGame::startGame()
{
	gameMode.selectGameMode();
	initializePlayers();

}

void iman_game::GuessingGame::generateNumber()
{
	numberToGuess = std::rand() % rangeOfNumberToGuess;
}

void iman_game::GuessingGame::initializePlayers()
{
	PlayerCreation createPlayers(gameMode, player1, player2);
}











