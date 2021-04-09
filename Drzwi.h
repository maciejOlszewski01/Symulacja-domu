
#include "Stan.h"
#pragma once


class Drzwi
{
private:
	Stan stan;
	int id;

public:
	static int ID;
	void Zamknij();
	void Otworz();
	void Wlamanie();
	Stan getStan();
	int getId();
	Drzwi(Stan x) {
		x = stan;
		id = ID;
		ID++;
	}
	Drzwi() {
		stan = Open;
		id = ID;
		ID++;
	}
};

