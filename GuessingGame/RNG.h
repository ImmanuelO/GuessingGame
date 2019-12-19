#pragma once
#include <random>


namespace iman_game {
	class RNG
	{

	public:
		RNG();
		int generateNumberBetween(int a, int b);

	private:
		std::default_random_engine generator;
		
	};
}
