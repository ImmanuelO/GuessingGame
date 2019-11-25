#pragma once
#include "Player.h"


namespace iman_game {

	class ComputerPlayer :
		public Player
	{
	public:
		ComputerPlayer();
	

		void getGuess();
	};

}