#include "Rolety.h"
#include <iostream>

void Rolety::Zamknij()
{
	stan = Closed;
	std::cout << "Zamknales rolete";
}

void Rolety::Otworz()
{
	stan = Open;
	std::cout << "Zamknales rolete";
}
