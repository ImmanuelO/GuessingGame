#pragma once


namespace iman_game {
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
		GameType currentgameMode();
	
	private:
		GameType gameMode;

		void clearScreen();

		
	};
}
