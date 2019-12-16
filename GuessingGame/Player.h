#pragma once
#include <string>
namespace iman_game {
	class Player
	{
	public:
		Player();

		virtual int getGuess() = 0;


	protected:
		int guess;
		std::string playerType;
		
	};

}
