#pragma once
#include "Stan.h"
class Wejscia
{
protected:
	Stan stan;
	int id;

public:
	static int ID;

	virtual void Zamknij();
	virtual void Otworz();
	void Wlamanie();
	Stan getStan();
	int getId();


};

