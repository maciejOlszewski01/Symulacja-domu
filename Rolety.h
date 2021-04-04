#pragma once
#include "Stan.h"

class Rolety
{
	private:

	public:

		Stan stan;
		int id;

		static int ID;
		void Zamknij();
		void Otworz();
		void Wlamanie();
		Stan getStan();
		int getId();
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

