#pragma once

namespace iman_game {
	struct Range {
		int lowNumberRange;
		int upperNumberRange;
		int rangeSize;
	};

	class Player
	{
	public:
		Player();

		virtual int getGuess() = 0;
		int getPreviousGuess();
		void guessIsHigh(bool);
		void setInitialRange(int lower, int upper);

	protected:
		int guess;
		int previousGuess;
		Range range;
		bool high;

		void setnewRange();
	};

}
