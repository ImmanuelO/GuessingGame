#include "pch.h"
#include "HumanPlayer.h"
#include <iostream>


iman_game::HumanPlayer::HumanPlayer()
	:Player()
{
}



int iman_game::HumanPlayer::getGuess()
{
	getInput();
	return guess;
}

void iman_game::HumanPlayer::getInput()
{
	std::cout << "Enter Guess: ";
	std::cin >> guess;
}
