#include <iostream>
#include "Simulation.h"

int main()
{
#ifdef _DEBUG
	//  _CrtSetBreakAlloc(87);
	_onexit(_CrtDumpMemoryLeaks);
#endif

	srand((int)time(nullptr));
	Simulation s = Simulation();
	return 0;
}