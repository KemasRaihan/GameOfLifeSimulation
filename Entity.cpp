#include "Entity.h"

typedef std::vector<Entity*> EntityPtrs;

Entity::Entity(int probOfNoOffspring, int probOfOneOffspring) : probOfNoOffspring(probOfNoOffspring), probOfOneOffspring(probOfOneOffspring), lifespan(0)
{
	parents[0] = nullptr;
	parents[1] = nullptr;
}
Entity::~Entity()
{
	delete parents[0], parents[1];
}

EntityPtrs Entity::reproduce()
{
	int r = rand() % 10;
	EntityPtrs offsprings;

	if (r < probOfNoOffspring) // no offsprings
	{
		offsprings.reserve(0);
	}
	else if (r < probOfOneOffspring)
	{
		offsprings.reserve(1);
		offsprings.push_back(new Entity(probOfNoOffspring, probOfOneOffspring));
	}
	else
	{
		offsprings.reserve(2);
		offsprings.push_back(new Entity(probOfNoOffspring, probOfOneOffspring));
		offsprings.push_back(new Entity(probOfNoOffspring, probOfOneOffspring));
	}

	return offsprings;
}