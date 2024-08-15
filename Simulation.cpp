#include "Simulation.h"

Simulation::Simulation()
{
	start();
}
Simulation::~Simulation()
{
	for_each(population.begin(), population.end(), [=](Entity* entity) {delete entity; });
}

void Simulation::start()
{
	int popSize, years, probOfNoOffspring, probOfOneoOffspring;
	std::cout << "Enter population size: ";
	std::cin >> popSize;

	std::cout << "Enter number of years to simulate: ";
	std::cin >> years;

	std::cout << "Enter probablity of reproducing no offspring (out of 10): ";
	std::cin >> probOfNoOffspring;

	std::cout << "Enter probablity of reproducing one offspring (out of 10): ";
	std::cin >> probOfOneoOffspring;

	population.reserve(popSize);
	for (int i = 0; i < popSize; i++)
		population.push_back(new Entity(probOfNoOffspring, probOfOneoOffspring));

	numberOfYears = years;
}

void Simulation::simulate()
{
	for (int i = 0; i < numberOfYears; i++)
	{
		for (int j = 0; j < population.size(); j++)
		{
			//population.push_back(population.at(j)->reproduce());

		}
	}
}