#pragma once


namespace iman_game {

	class GameMode
	{
	public:
		GameMode();

		void selectGameMode();
		int currentgameMode();
	
	private:
		int gameMode;

		void clearScreen();

		
	};
}
