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



	private:
		RNG randomNumber;
		UniqueNumberVector store;


		void checkIfPreviouslyGenerated();
		void checkIfGuessedAllNumbers();

	};

}

