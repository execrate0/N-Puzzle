#include <math.h>

#include "ManhattanDistance.hpp"

unsigned short ManhattanDistance::distance(unsigned char x1, unsigned char y1, unsigned char x2, unsigned char y2)
{
	return std::abs(x1 - x2) + std::abs(y1 - y2);
}

unsigned int ManhattanDistance::calculate(Puzzle puzzle)
{
	unsigned char size = puzzle.getSize();
	std::vector<unsigned char> tiles = puzzle.getTiles();

	unsigned int result = 0;
	for (unsigned short i = 0; i < tiles.size(); i++)
		if (tiles[i] != 0)
		{
			unsigned char x1 = i % size;
			unsigned char y1 = i / size;
			unsigned char x2 = tiles[i] % size;
			unsigned char y2 = tiles[i] / size;

			result += distance(x1, y1, x2, y2);
		}

	return result;
}