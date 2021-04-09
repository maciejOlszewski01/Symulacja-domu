#pragma once
class Telewizor
{
private:
	bool wlaczony;
	int kanal;
	int indeks;

	
public:
	static int ID;
	bool getStan();
	void zmienKanal(int a);
	int getKanal();
	void wylacz();
	void wlacz();
	int getId();

	Telewizor() {
		wlaczony = 0;
		kanal = 0;
		indeks = ID;
		ID++;
	}

};
