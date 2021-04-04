#include "Rolety.h"
#include <iostream>

int Rolety::ID = 0;


void Rolety::Zamknij()
{
	stan = Closed;
}

void Rolety::Otworz()
{
	stan = Open;
}

void Rolety::Wlamanie()
{
	stan = Destroyed;
}

Stan Rolety::getStan()
{
	return stan;
}

int Rolety::getId()
{
	return id;
}
