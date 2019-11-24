#pragma once

namespace iman_game {
	class Player
	{
	public:
		Player();

		virtual void getGuess() = 0;

	private:
		int guess;
	};

}
