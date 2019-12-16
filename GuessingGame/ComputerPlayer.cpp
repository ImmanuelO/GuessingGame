#include "pch.h"
#include "ComputerPlayer.h"
#include <iostream>



int main() {

	iman_game::ComputerPlayer player;

	player.setInitialRange(0, 50);
	int length{52};

	for (size_t i = 0; i < length; i++)
	{
		std::cout << i << ". " << player.getGuess() <<"\n";
	}

}

iman_game::ComputerPlayer::ComputerPlayer()
	      :Player()
{
	playerType = "Computer";
}

int iman_game::ComputerPlayer::getGuess()
{
	checkIfGuessedAllNumbers();

	guess = randomNumber.generateNumberBetween(range.lowNumberRange,
		                                       range.upperNumberRange);

	checkIfPreviouslyGenerated();
	return guess;
}

void iman_game::ComputerPlayer::setInitialRange(int lower, int upper)
{
	range.lowNumberRange = lower;
	range.upperNumberRange = upper;

	rangeSize = (upper - lower) + 1;

}

void iman_game::ComputerPlayer::isGuessHighOrLow(bool lowOrHigh)
{
	this->guessIsHigh = lowOrHigh;
	setnewRange();
}


// Private Functions
void iman_game::ComputerPlayer::checkIfPreviouslyGenerated()
{
	while (store.checkIfInVector(guess)) {
		getGuess();
		break;
	}
	store.addNumbertoVector(guess);
}

void iman_game::ComputerPlayer::setnewRange()
{
	if (guessIsHigh)
	{
		range.upperNumberRange = guess;
	}
	else
	{
		range.lowNumberRange = guess;
	}
}

void iman_game::ComputerPlayer::checkIfGuessedAllNumbers()
{
	if (rangeSize == store.getVectorSize()) {
		std::cerr << "MAXIMUM UNIQUE NUMBERS IN RANGE CREATED";
		exit(2);
	}
}









