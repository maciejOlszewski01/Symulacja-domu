#pragma once
#include "Stan.h"
#include "Wejscia.h"

class Rolety : public Wejscia
{
	private:
	public:

		Rolety(Stan x) {
			x = stan;
			id = ID;
			ID++;
		}

		Rolety() {
			stan = Open;
			id = ID;
			ID++;
		}
};

