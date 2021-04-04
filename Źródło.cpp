#include <iostream>
#include "Rolety.h"
#include "Dom.h"
int main() {
	

	std::cout << "Witaj w inteligentnym domu.\n Stwórz pierwszy dom. Podaj iloœæ rolet drzwi i telewizorów";
	int a, b, c, wybranyObiekt, wybranyTypObiektu, akcja;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	Dom domeczek = Dom(a, b, c);

	bool aktywnoœæ = true;



	while (aktywnoœæ) {
		std::cout << "Wybierz obiekt na ktorym chcesz dzia³aæ. \n 1 - rolety \n 2 - Drzwi \n 3 - Telewizory \n By zakoñczyæ program wciœnij 4";
		std::cin >> wybranyTypObiektu;
		std::cout << "Na którym obiekcie chcesz dzia³aæ:";
		if (wybranyTypObiektu == 4) {
			break;
		}
		std::cin >> wybranyObiekt;
		switch (wybranyTypObiektu)
		{
		case 1:
			std::cout << "Chcesz je zamkn¹æ czy otworzyæ? 1 - zamknac 2 - otworzyc";
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
			std::cout << "Chcesz je zamkn¹æ czy otworzyæ? 1 - zamknac 2 - otworzyc";
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
			std::cout << "Chcesz zmieniæ kana³ - 1 czy wy³¹czyæ - 2 lub w³¹czyæ telewizor - 3 ";
			std::cin >> akcja;
			switch (akcja) {
			case 1:
				std::cout << "Podaj kana³";
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
			aktywnoœæ = false;
			std::cout << "Dziêkujemy za korzystanie z naszego programu";
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