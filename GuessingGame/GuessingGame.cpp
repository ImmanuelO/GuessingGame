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

void iman_game::GuessingGame::playGame()
{
	initializeGame();

	bool win = false;
	while (!win)
	{
		std::cout << "Player 1's turn to guess." << std::endl;
		win = checkForWin(player1);
		if (win) return;

		std::cout << "Player 2's turn to guess." << std::endl;
		win = checkForWin(player2);
	}
}



void iman_game::GuessingGame::generateNumber()
{
	//numberToGuess = std::rand() % rangeOfNumberToGuess;
	numberToGuess = 20;
}

void iman_game::GuessingGame::initializeGame()
{
	gameMode.selectGameMode();
	initializePlayers();
}

bool iman_game::GuessingGame::checkForWin(Player * player)
{

	if (numberToGuess == player->getGuess())
	{
		std::cout << "You're right! You win!" << std::endl;
		return true;
	}
	else if (numberToGuess < player->getGuess())
		std::cout << "Your guess is too high." << std::endl;
	else
		std::cout << "Your guess is too low." << std::endl;
	return false;
}

void iman_game::GuessingGame::initializePlayers()
{
	PlayerCreation createPlayers(gameMode, player1, player2);
}











