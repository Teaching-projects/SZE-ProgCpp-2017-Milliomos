#ifndef SEGIT_H
#define SEGIT_H

#include <string>
#include "lista.h"
#include "sleep.h"
#include <iostream>
#include <iomanip>
#include <sstream>

class Segitseg
{

private:
	int kozonseg, telefon, felezes, fszint;
	char jo, rossz;

public:
	Segitseg(int k = 1, int t = 1, int f = 1, int fszint = -1, char jo = 'Z', char rossz ='Z');
	int getKozonseg();
	int getTelefont();
	int getFelezes();
	int getFelezSzint();
	char getRossz();
	void setFelezSzint(int sz);
	void setKozonseg(int sz);
	void setTelefon(int sz);
	void setFelezes(int sz);
	void Felez(node *conductor);
	void Kozonseg(node *conductor);
	void Telefon(int szint, node *conductor);
	void setRossz(char r);
	std::string BetuSzam(int x);

};

#endif