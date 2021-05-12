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
		switch (tabRolety[i].getStan()) {
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		}
	}
	for (int i = 0; i < getDlugoscDrzwi(); i++) {

		std::cout << "Drzwi numer: " << tabDrzwi[i].getId() << " " << tabDrzwi[i].getStan() << " \n";
		switch (tabDrzwi[i].getStan()) {
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		}

	}
	for (int i = 0; i < getDlugoscTelewizory(); i++) {

		std::cout << "Telewizor numer: " << tabTelewizor[i].getId() << " " << tabTelewizor[i].getStan() << " \n";
		switch (tabTelewizor[i].getStan()) {
		case 0:
			break;
		case 1:
			break;
		}
	}

}
