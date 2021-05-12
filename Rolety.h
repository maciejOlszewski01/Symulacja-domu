#pragma once
#include "Stan.h"
#include "Wejscia.h"

class Rolety : public Wejscia
{
	private:
	public:

		virtual void Zamknij();
		virtual void Otworz();

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

