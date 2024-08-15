#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "Entity.h"
class Simulation
{
public:
	Simulation();
	~Simulation();

	typedef std::vector<Entity*> EntityPtrs;

	void start();


private:
	void simulate();


	EntityPtrs population;
	int numberOfYears;
};

