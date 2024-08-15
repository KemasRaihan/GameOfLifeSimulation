#pragma once
#include <cstdlib>
#include <vector>


class Entity
{
public:
	Entity(int probOfNoOffspring, int probOfOneOffspring);
	~Entity();

	typedef std::vector<Entity*> EntityPtrs;


	void perish();
	EntityPtrs reproduce();

private:
	Entity* parents[2];
	int lifespan;
	int probOfNoOffspring, probOfOneOffspring;
};

