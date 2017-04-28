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
	int kozonseg, telefon, felezes;

public:
	Segitseg(int k=1, int t=1, int f=1);
	int getKozonseg();
	int getTelefont();
	int getFelezes();
	void setKozonseg(int sz);
	void setTelefon(int sz);
	void setFelezes(int sz);
	void Felez(node *conductor);
	void Kozonseg(int szint, node *conductor);
	void Telefon(int szint, node *conductor);
	std::string BetuSzam(int x);

};

#endif