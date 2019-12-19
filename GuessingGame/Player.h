#pragma once

namespace iman_game {
	struct Range {
		int lowNumberRange;
		int upperNumberRange;
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
		int rangeSize;
		bool high;

		void setnewRange();
	};

}
