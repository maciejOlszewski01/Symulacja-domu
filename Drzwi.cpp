#include "Drzwi.h"
#include <iostream>

void Drzwi::Zamknij()
{
	stan = Closed;
	std::cout << "Zamknales drzwi";
}

void Drzwi::Otworz()
{ 
	stan = Open;
	std::cout << "Otwarles drzwi";
}
