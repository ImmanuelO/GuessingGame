#pragma once
#include "GameMode.h"
#include "Player.h"

namespace iman_game {

	class GuessingGame
	{
	public:
		GuessingGame(unsigned int seed);
		~GuessingGame();

		void playGame();

	private:
		int numberToGuess;
		int rangeOfNumberToGuess;

		GameMode gameMode;
		Player* player1;
		Player* player2;

		void generateNumber();

	};

}