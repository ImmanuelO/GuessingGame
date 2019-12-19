#include "pch.h"
#include "Player.h"

iman_game::Player::Player() : guess(0)
{
}


int iman_game::Player::getPreviousGuess()
{
	previousGuess = guess;
	return previousGuess;
}



void iman_game::Player::setInitialRange(int lower, int upper)
{
	range.lowNumberRange = lower;
	range.upperNumberRange = upper;

	rangeSize = (upper - lower) + 1;
}

void iman_game::Player::guessIsHigh(bool high)
{
	if (high)
		this->high = high;
	else
		this->high = false;

	setnewRange();
}

void iman_game::Player::setnewRange()
{
	if (high)
	{
		range.upperNumberRange = guess;
	}
	else
	{
		range.lowNumberRange = guess;
	}
}