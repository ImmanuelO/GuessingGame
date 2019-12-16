#pragma once
#include <vector>


namespace iman_game {

	class UniqueNumberVector
	{
	public:
		UniqueNumberVector();
		bool checkIfInVector( int number );
		void addNumbertoVector(int number);
		void clearVector();
		int getVectorSize();

	private:
		std::vector<int> previousGuesses;



	};
}