#pragma once
#include "Player.h"

namespace iman_game {
	class HumanPlayer :
		public Player
	{
	public:
		HumanPlayer();
	
		void getGuess();
	};

}