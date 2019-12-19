#include "pch.h"
#include "ComputerPlayer.h"
#include <iostream>


iman_game::ComputerPlayer::ComputerPlayer()
	      :Player()
{
}

int iman_game::ComputerPlayer::getGuess()
{
	checkIfGuessedAllNumbers();

	guess = randomNumber.generateNumberBetween(range.lowNumberRange,
		                                       range.upperNumberRange);

	checkIfPreviouslyGenerated();
	return guess;
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


void iman_game::ComputerPlayer::checkIfGuessedAllNumbers()
{
	if (rangeSize == store.getVectorSize()) {
		std::cerr << "MAXIMUM UNIQUE NUMBERS IN RANGE CREATED";
		exit(2);
	}
}









