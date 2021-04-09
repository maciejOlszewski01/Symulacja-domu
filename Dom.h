#include "Drzwi.h"
#include "Rolety.h"
#include "Telewizor.h"

#pragma once
class Dom
{
private:
	int dlugoscRolety;
	int dlugoscDrzwi;
	int dlugoscTelewizory;

public:

	Rolety* tabRolety;
	Drzwi* tabDrzwi;
	Telewizor* tabTelewizor;

	int getDlugoscTelewizory();
	int getDlugoscDrzwi();
	int getDlugoscRolety();


	Dom(int a,int b, int c) {
		tabRolety = new Rolety[a];
		tabDrzwi = new Drzwi[b];
		tabTelewizor = new Telewizor[c];

		dlugoscRolety = a;
		dlugoscDrzwi = b;
		dlugoscTelewizory = c;

	}

	void stanDom();

};

