#include "pch.h"
#include "RNG.h"
#include <chrono>



iman_game::RNG::RNG()
{
	unsigned int seed = std::chrono::system_clock::now().time_since_epoch().count();
	generator.seed(seed);
}




int iman_game::RNG::generateNumberBetween(int a, int b)
{
	std::uniform_int_distribution<int> distribution(a, b);
	return distribution(generator);
}





