#include <iostream>
#include "Rolety.h"
#include "Dom.h"
int main() {
	

	std::cout << "Witaj w inteligentnym domu.\n Stw�rz pierwszy dom. Podaj ilo�� rolet drzwi i telewizor�w";
	int a, b, c, wybranyObiekt, wybranyTypObiektu, akcja;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	Dom domeczek = Dom(a, b, c);

	bool aktywno�� = true;



	while (aktywno��) {
		std::cout << "Wybierz obiekt na ktorym chcesz dzia�a�. \n 1 - rolety \n 2 - Drzwi \n 3 - Telewizory \n By zako�czy� program wci�nij 4";
		std::cin >> wybranyTypObiektu;
		std::cout << "Na kt�rym obiekcie chcesz dzia�a�:";
		if (wybranyTypObiektu == 4) {
			break;
		}
		std::cin >> wybranyObiekt;
		switch (wybranyTypObiektu)
		{
		case 1:
			std::cout << "Chcesz je zamkn�� czy otworzy�? 1 - zamknac 2 - otworzyc";
			std::cin >> akcja;
			if (akcja == 1)
			{
				domeczek.tabRolety[wybranyObiekt].Zamknij();
			}
			else
			{
				domeczek.tabRolety[wybranyObiekt].Otworz();
			}
			break;
		case 2:
			std::cout << "Chcesz je zamkn�� czy otworzy�? 1 - zamknac 2 - otworzyc";
			std::cin >> akcja;
			if (akcja == 1)
			{
				domeczek.tabDrzwi[wybranyObiekt].Zamknij();
			}
			else
			{
				domeczek.tabDrzwi[wybranyObiekt].Otworz();
			}
			break;
		case 3:
			std::cout << "Chcesz zmieni� kana� - 1 czy wy��czy� - 2 lub w��czy� telewizor - 3 ";
			std::cin >> akcja;
			switch (akcja) {
			case 1:
				std::cout << "Podaj kana�";
				std::cin >> akcja;
				domeczek.tabTelewizor[wybranyObiekt].zmienKanal(akcja);
				break;
			case 2:
				domeczek.tabTelewizor[wybranyObiekt].wylacz();
				break;
			case 3:
				domeczek.tabTelewizor[wybranyObiekt].wlacz();
				break;
			}
			break;
		case 4:
			aktywno�� = false;
			std::cout << "Dzi�kujemy za korzystanie z naszego programu";
			break;
		default:
			break;
		}

	}






	/*Dom domeczek = Dom(4, 5, 7);



	domeczek.tabRolety[0].Zamknij();
	
	std::cout << domeczek.tabRolety[0].getId();
	*/




}