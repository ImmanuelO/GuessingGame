#pragma once

namespace iman_game {

	//fwd declarations
	class GameMode;
	class Player;

	class PlayerCreation

	{
	public:
		PlayerCreation(GameMode & gameSelected, Player *& player1,
			           Player *& player2);
	

	private:
		void singlePlayer(Player*& player1, Player*& player2);
		void multiPlayer(Player*& player1, Player*& player2);
		void computerPlayer(Player*& player1, Player*& player2);
		unsigned int seed;
	};
}
