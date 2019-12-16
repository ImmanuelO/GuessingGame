#include "pch.h"
#include "UniqueNumberVector.h"


iman_game::UniqueNumberVector::UniqueNumberVector()
{
}

bool iman_game::UniqueNumberVector::checkIfInVector(int number)
{
	for (auto &numberInVector : previousGuesses)
	{
		if (numberInVector == number)
		{
			return true;
		}
	}
	return false;
}

void iman_game::UniqueNumberVector::addNumbertoVector(int number)
{
	if (!checkIfInVector(number)) {
		previousGuesses.push_back(number);
	}
}

void iman_game::UniqueNumberVector::clearVector()
{
	previousGuesses.clear();
}

int iman_game::UniqueNumberVector::getVectorSize()
{
	return previousGuesses.size();
}
