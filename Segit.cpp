#include "segit.h"



Segitseg::Segitseg(int k, int t, int f, int fszint, char jo, char roszz) : kozonseg{ k }, telefon{t},felezes { f } {
	
}

int Segitseg::getKozonseg() {
	return kozonseg;
}
int Segitseg::getFelezes() {
	return felezes;
}
int Segitseg::getTelefont() {
	return telefon;
}
int Segitseg::getFelezSzint() {
	return fszint;
}
char Segitseg::getRossz() {
	return rossz;
}

void Segitseg::setFelezSzint(int sz) {
	fszint = sz;
}
void Segitseg::setKozonseg(int sz) {
	this->kozonseg = sz;
}
void Segitseg::setFelezes(int sz) {
	this->felezes = sz;
}
void Segitseg::setTelefon(int sz) {
	this->telefon = sz;
}
void Segitseg::setRossz(char r) {
	rossz = r;
}

std::string Segitseg::BetuSzam(int x) {
	switch (x)
	{
	case 0:;
		return "A";
		break;
	case 1:
		return "B";
		break;
	case 2:
		return "C";
		break;
	case 3:
		return "D";
		break;
	}
}

void Segitseg::Felez(node *conductor) {
	setFelezSzint(conductor->nehez);
	if (getFelezes()==0)
	{
		std::cout << "Nincs t�bb felez�s seg�ts�ge" << std::endl;
	}
	else
	{
		int ok = 1;
		int val;
		std::string rossz;
		setFelezes(0);
		while (ok)
		{
			val = rand() % 4;
			rossz = BetuSzam(val);
			if (conductor->valasz.compare(rossz) != 0)
			{
				ok = 0;
			}
		}
		system("cls");
		std::cout << "A k�rd�s t�mak�re: " << conductor->kategoria << "\n\n";
		std::cout << conductor->nehez << ". " << conductor->kerdes << "\n";
		if (rossz.compare("A") == 0 && conductor->valasz.compare("B") == 0 || rossz.compare("B") == 0 && conductor->valasz.compare("A") == 0)
		{
			std::cout << "(A) " << std::setw(30) << std::left << conductor->a << "(B)" << conductor->b << std::endl; //j�
			if (conductor->valasz.compare("A") == 0)
			{
				setRossz('B');
			}
			else
			{
				setRossz('A');
			}
		}
		else if (rossz.compare("A") == 0 && conductor->valasz.compare("C") == 0 || rossz.compare("C") == 0 && conductor->valasz.compare("A") == 0)
		{
			std::cout << "(A) " << std::setw(30) << std::left << conductor->a << "\n(C) " << std::setw(30) << std::left << conductor->c << std::endl;
			if (conductor->valasz.compare("A") == 0)
			{
				setRossz('C');
			}
			else
			{
				setRossz('A');
			}

		}
		else if (rossz.compare("A") == 0 && conductor->valasz.compare("D") == 0 || rossz.compare("D") == 0 && conductor->valasz.compare("A") == 0)
		{
			std::cout << "(A) " << std::setw(30) << std::left << conductor->a << std::endl << std::setw(30) << std::left << "" << "(D)" << conductor->d << std::endl;
			if (conductor->valasz.compare("A") == 0)
			{
				setRossz('D');
			}
			else
			{
				setRossz('A');
			}
		}
		else if (rossz.compare("B") == 0 && conductor->valasz.compare("C") == 0 || rossz.compare("C") == 0 && conductor->valasz.compare("B") == 0)
		{
			std::cout << std::setw(30) << std::left << "" << "(B)" << conductor->b << "\n(C) " << std::setw(30) << std::left << conductor->c << std::endl;
			if (conductor->valasz.compare("B") == 0)
			{
				setRossz('C');
			}
			else
			{
				setRossz('B');
			}
		}
		else if (rossz.compare("B") == 0 && conductor->valasz.compare("D") == 0 || rossz.compare("D") == 0 && conductor->valasz.compare("B") == 0)
		{
			std::cout << std::setw(30) << std::left << "" << "(B)" << conductor->b << std::endl << std::setw(30) << std::left << "" << "(D)" << conductor->d << std::endl;
			if (conductor->valasz.compare("B") == 0)
			{
				setRossz('D');
			}
			else
			{
				setRossz('B');
			}
		}
		else if (rossz.compare("C") == 0 && conductor->valasz.compare("D") == 0 || rossz.compare("D") == 0 && conductor->valasz.compare("C") == 0)
		{
			std::cout << std::endl << "(C)" << std::setw(30) << std::left << conductor->c << "(D)" << conductor->d << std::endl;
			if (conductor->valasz.compare("C") == 0)
			{
				setRossz('D');
			}
			else
			{
				setRossz('C');
			}
		}
	}
}

void Segitseg::Kozonseg(node *conductor) {
	if (getKozonseg() == 0)
	{
		std::cout << "A k�z�ns�g seg�ts�get m�r elhaszn�lta" << std::endl;
	}
	else {
		int szint = conductor->nehez;
		double h_tipp;
		double rossz;
		int ok = 0;
		h_tipp = (rand() % 100)*(1 + szint * 0, 04);
		setKozonseg(0);
		if (h_tipp > 60)
		{
			if (getFelezSzint() == conductor->nehez)
			{
				std::cout << "A k�z�ns�g szerint a helyes v�lasz: " << getRossz() << std::endl;
			}
			else
			{
				while (!ok)
				{
					rossz = rand() % 4;
					if (BetuSzam(rossz).compare(conductor->valasz) != 0)
					{
						std::cout << "A k�z�ns�g szerint a helyes v�lasz: " << BetuSzam(rossz) << std::endl;
						ok = 1;
					}

				}
			}
		}
		else
		{
			std::cout << "A k�z�ns�g szerint a helyes v�lasz: " << conductor->valasz << std::endl;
		}
	}
}

void Segitseg::Telefon(int szint, node *conductor) {
	if (getTelefont()==0)
	{
		std::cout << "A telefon seg�ts�get m�r elhaszn�lta" << std::endl;
	}
	else
	{
		setTelefon(0);
		double t_tipp;
		double rossz;
		std::string nev;
		int ok = 0;
		t_tipp = (rand() % 100)*(1 + szint * 0, 01);
		setTelefon(0);
		std::cout << "Adja meg, hogy kit h�vjunk fel" << std::endl;
		std::getline(std::cin, nev);
		std::cout << nev << " h�vasa" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			sleep(1);
			std::cout << ". ";
		}
		std::cout << "\n";
		if (t_tipp > 70)
		{
			if (getFelezSzint() == conductor->nehez)
			{
				std::cout << "Szerintem a helyes v�lasz: " << getRossz() << std::endl;
			}
			else
			{
				while (!ok)
				{
					rossz = rand() % 4;
					if (BetuSzam(rossz).compare(conductor->valasz) != 0)
					{
						std::cout << "Szerintem a helyes v�lasz: " << BetuSzam(rossz) << std::endl;
						ok = 1;
					}

				}
			}
		}
		else
		{
			std::cout << "Szerintem a helyes v�lasz: " << conductor->valasz << std::endl;
		}
	}
}