#pragma once


namespace iman_game {
	void clearScreen();

	enum class GameType 
	{
		SINGLE_PLAYER = 1,
		MULTI_PLAYER,
		COMPUTER_PLAYER,
	};

	class GameMode
	{
	public:
		GameMode();

		void selectGameMode();
		void displaySelectedGameMode();
		GameType currentgameMode();
	
	private:
		GameType gameMode;

		
	};
}
