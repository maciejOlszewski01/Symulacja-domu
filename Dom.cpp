#include "Dom.h"

#include <iostream>


int Dom::getDlugoscTelewizory()
{
	return dlugoscTelewizory;
}

int Dom::getDlugoscDrzwi()
{
	return dlugoscDrzwi;
}

int Dom::getDlugoscRolety()
{
	return dlugoscRolety;
}

void Dom::stanDom()
{
	for (int i = 0; i < getDlugoscRolety(); i++) {

		std::cout << "Rolety numer: " << tabRolety[i].getId() << " "  << tabRolety[i].getStan() << "  \n";
	
	}
	for (int i = 0; i < getDlugoscDrzwi(); i++) {

		std::cout << "Drzwi numer: " << tabDrzwi[i].getId() << " " << tabDrzwi[i].getStan() << " \n";
		
	}
	for (int i = 0; i < getDlugoscTelewizory(); i++) {

		std::cout << "Telewizor numer: " << tabTelewizor[i].getId() << " " << tabTelewizor[i].getStan() << " \n";
	}

}
