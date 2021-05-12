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

	Dom(const Dom & kopiowany) {
		this->dlugoscDrzwi = kopiowany.dlugoscDrzwi;
		this->dlugoscRolety = kopiowany.dlugoscRolety;
		this->dlugoscTelewizory = kopiowany.dlugoscTelewizory;

		this->tabRolety = new Rolety(*(kopiowany.tabRolety));
		this->tabDrzwi = new Drzwi(*(kopiowany.tabDrzwi));
		this->tabTelewizor = new Telewizor(*(kopiowany.tabTelewizor));
	}


	void stanDom();

	~Dom() {
		delete[] tabRolety;
		delete[] tabDrzwi;
		delete[] tabTelewizor;
	}

	bool operator==(const Dom & d) {
		if (this->dlugoscDrzwi == d.dlugoscDrzwi && this->dlugoscRolety == d.dlugoscRolety && this->dlugoscTelewizory == d.dlugoscTelewizory) {
			return true;
		}
		else {
			return false;
		}
	}


};

