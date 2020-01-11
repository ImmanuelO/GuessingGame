#include "pch.h"
#include <iostream>
#include <iomanip>
#include "GameMode.h"
#include "GuessingGame.h"
#include "Player.h"
#include "PlayerCreation.h"



int main() {
	iman_game::GuessingGame start;

	start.playGame();

}




iman_game::GuessingGame::GuessingGame()
	                    :player1(nullptr), player2(nullptr)
{
}


iman_game::GuessingGame::~GuessingGame()
{
	delete player1;
	delete player2;
}

void iman_game::GuessingGame::playGame()
{
	initializeGame();

	int gameTick{0};
	bool win = false;

	while (!win)
	{
		gameTick++;
		if (gameTick = 7) {
			iman_game::clearScreen();
		}

		gameMode.displaySelectedGameMode();
		displayPreviousGuess();
		
		std::cout << std::setw(20) << "Player 1's turn to guess." << std::endl;
		player1->getGuess();
		win = checkForWin(player1);
		if (win) return;

		std::cout << std::setw(5) << "Player 2's turn to guess." << std::endl;
		player2->getGuess();
		win = checkForWin(player2);

	}
}

bool iman_game::GuessingGame::checkForWin(Player * player)
{

	if (numberToGuess == player->getPreviousGuess())
	{
		std::cout << player->getPreviousGuess() << std::endl;
		std::cout << "You're right! You win!\n" << std::endl;
		return true;
	}
	else if (numberToGuess < player->getPreviousGuess())
	{
		std::cout << player->getPreviousGuess() << std::endl;
		std::cout << "Your guess is too high.\n" << std::endl;
		player->guessIsHigh(true);
	}
	else
	{
		std::cout << player->getPreviousGuess() << std::endl;
		std::cout << "Your guess is too low.\n" << std::endl;
		player->guessIsHigh(false);
	}

	return false;
}



void iman_game::GuessingGame::initializeGame()
{
	gameMode.selectGameMode();
	createPlayers();
	setRange();
	generateNumberToGuess();
	initializePlayers();
}


void iman_game::GuessingGame::createPlayers()
{
	PlayerCreation createPlayers(gameMode, player1, player2);
}
void iman_game::GuessingGame::setRange()
{
	std::cout << "Set Guessing Range: ";
	std::cin >> rangeOfNumberToGuess;
}

void iman_game::GuessingGame::generateNumberToGuess()
{
	numberToGuess = randomNumber.generateNumberBetween(0, rangeOfNumberToGuess);
}

void iman_game::GuessingGame::initializePlayers()
{
	player1->setInitialRange(0, rangeOfNumberToGuess);
	player2->setInitialRange(0, rangeOfNumberToGuess);
}

void iman_game::GuessingGame::displayPreviousGuess()
{
	std::cout << "Player 1 Previous Guess: " << player1->getPreviousGuess()
											 << std::endl;
	
	std::cout << "Guess was ";
	displayGuessHighOrLow(player1);
		
	std::cout << "Player 2 Previous Guess: " << player2->getPreviousGuess()
											 << std::endl;
	std::cout << "Guess was ";
	displayGuessHighOrLow(player2);

	std::cout << std::endl;
}

void iman_game::GuessingGame::displayGuessHighOrLow(Player* player)
{
	if (player->getPreviousGuess() < numberToGuess)
		std::cout << "Low \n";
	else
		std::cout << "High \n";
}













