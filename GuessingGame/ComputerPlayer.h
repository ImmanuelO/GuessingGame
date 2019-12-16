#pragma once
#include "Player.h"
#include <random>
#include "RNG.h"
#include "UniqueNumberVector.h"

namespace iman_game {

	class ComputerPlayer :
		public Player
	{
	public:
		ComputerPlayer();
	
		int getGuess() override;
		void setInitialRange(int lower, int upper);
		void isGuessHighOrLow(bool);

	private:
		Range range;
		RNG randomNumber;
		UniqueNumberVector store;
		bool guessIsHigh;
		int rangeSize;

		void checkIfPreviouslyGenerated();
		void setnewRange();
		void checkIfGuessedAllNumbers();

	};

}

