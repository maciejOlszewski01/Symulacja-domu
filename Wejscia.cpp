#include "Wejscia.h"

int Wejscia::ID = 0;

void Wejscia::Zamknij()
{
	stan = Closed;
}

void Wejscia::Otworz()
{
	stan = Open;
}

void Wejscia::Wlamanie()
{
	stan = Destroyed;
}

Stan Wejscia::getStan()
{
	return stan;
}

int Wejscia::getId()
{
	return id;
}