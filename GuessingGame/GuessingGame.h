#pragma once
#include "GameMode.h"
#include "RNG.h"


namespace iman_game {


	class Player;

	class GuessingGame
	{
	public:
		GuessingGame();
		~GuessingGame();

		void playGame();

	private:
		int numberToGuess;
		int rangeOfNumberToGuess;

		RNG randomNumber;
		GameMode gameMode;
		Player* player1;
		Player* player2;

		void generateNumberToGuess();
		bool checkForWin(Player * player);
		void initializeGame();
		void createPlayers();
		void initializePlayers();
		void setRange();
		void displayPreviousGuess();
		void displayGuessHighOrLow(Player*);
		

	};

}