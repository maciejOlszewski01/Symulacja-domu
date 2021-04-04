#pragma once
class Telewizor
{
private:
	bool wlaczony;
	int kanal;

public:
	bool getStan();
	void zmienKanal(int a);
	int getKanal();
	void wylacz();
	void wlacz();

	Telewizor() {
		wlaczony = 0;
		kanal = 0;
	}

};
