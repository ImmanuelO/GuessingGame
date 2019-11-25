#include "pch.h"
#include "HumanPlayer.h"
#include <iostream>

iman_game::HumanPlayer::HumanPlayer()
	:Player()
{

}

int iman_game::HumanPlayer::getGuess()
{
	std::cout << "Enter Guess: ";
	std::cin >> guess;

	return guess;
}
