#pragma once

#include "Heuristic.hpp"

class ManhattanDistance : public Heuristic
{
public:
	std::string name();
	unsigned int calculate(Puzzle puzzle);
};
