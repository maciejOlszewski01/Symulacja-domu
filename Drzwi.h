
#include "Stan.h"
#include "Wejscia.h"
#pragma once



class Drzwi : public Wejscia
{

public:
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

