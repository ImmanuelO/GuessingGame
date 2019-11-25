#pragma once
#include "GameMode.h"

namespace iman_game {


	class Player;

	class GuessingGame
	{
	public:
		GuessingGame(unsigned int seed);
		~GuessingGame();

		void startGame();

	private:
		int numberToGuess;
		int rangeOfNumberToGuess;

		GameMode gameMode;
		Player* player1;
		Player* player2;

		void generateNumber();
		void initializePlayers();
	};

}