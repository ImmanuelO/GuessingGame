#pragma once

namespace iman_game {
	class Player
	{
	public:
		Player();

		virtual int getGuess() = 0;

	protected:
		int guess;
	};

}
