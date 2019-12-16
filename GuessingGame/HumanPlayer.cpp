#include "pch.h"
#include "HumanPlayer.h"
#include <iostream>

iman_game::HumanPlayer::HumanPlayer()
	:Player()
{
	playerType = "Human";
}



int iman_game::HumanPlayer::getGuess()
{
	return guess;
}
