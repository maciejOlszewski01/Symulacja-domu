#pragma once
#include "Stan.h"

class Rolety
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
		~Rolety();
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

