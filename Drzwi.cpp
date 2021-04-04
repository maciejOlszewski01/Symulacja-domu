#include "Drzwi.h"
#include <iostream>

int Drzwi::ID = 0;


void Drzwi::Zamknij()
{
	stan = Closed;
}

void Drzwi::Otworz()
{
	stan = Open;
}

void Drzwi::Wlamanie()
{
	stan = Destroyed;
}

Stan Drzwi::getStan()
{
	return stan;
}

int Drzwi::getId()
{
	return id;
}
