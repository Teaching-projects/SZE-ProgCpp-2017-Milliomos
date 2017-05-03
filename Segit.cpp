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
		cout << "Nincs több felezés segítsége" << std::endl;
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
		cout << "A kérdés témaköre: " << conductor->kategoria << "\n\n";
		cout << conductor->nehez << ". " << conductor->kerdes << "\n";
		if (rossz.compare("A") == 0 && conductor->valasz.compare("B") == 0 || rossz.compare("B") == 0 && conductor->valasz.compare("A") == 0)
		{
			cout << "(A) " << setw(30) << left << conductor->a << "(B)" << conductor->b << std::endl; //jó
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
			cout << "(A) " << setw(30) << left << conductor->a << "\n(C) " << setw(30) << left << conductor->c << std::endl;
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
			cout << "(A) " << setw(30) << left << conductor->a << std::endl << setw(30) << left << "" << "(D)" << conductor->d << std::endl;
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
			cout << setw(30) << left << "" << "(B)" << conductor->b << "\n(C) " << setw(30) << left << conductor->c << std::endl; 
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
			cout << setw(30) << left << "" << "(B)" << conductor->b << std::endl << setw(30) << left << "" << "(D)" << conductor->d << std::endl; 
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
			cout << std::endl << "(C)" << setw(30) << left << conductor->c << "(D)" << conductor->d << std::endl; 
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
		cout << "A közönség segítséget már elhasználta" << std::endl;
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
				std::cout << "A közönség szerint a helyes válasz: " << getRossz() << std::endl;
			}
			else
			{
				while (!ok)
				{
					rossz = rand() % 4;
					if (BetuSzam(rossz).compare(conductor->valasz) != 0)
					{
						cout << "A közönség szerint a helyes válasz: " << BetuSzam(rossz) << std::endl;
						ok = 1;
					}

				}
			}
		}
		else
		{
			cout << "A közönség szerint a helyes válasz: " << conductor->valasz << std::endl;
		}
	}
}

void Segitseg::Telefon(int szint, node *conductor) {
	if (getTelefont()==0)
	{
		cout << "A telefon segítséget már elhasználta" << std::endl;
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
		cout << "Adja meg, hogy kit hívjunk fel" << std::endl;
		std::getline(std::cin, nev);
		cout << nev << " hívasa" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			sleep(1);
			cout << ". ";
		}
		cout << "\n";
		if (t_tipp > 70)
		{
			if (getFelezSzint() == conductor->nehez)
			{
				std::cout << "Szerintem a helyes válasz: " << getRossz() << std::endl;
			}
			else
			{
				while (!ok)
				{
					rossz = rand() % 4;
					if (BetuSzam(rossz).compare(conductor->valasz) != 0)
					{
						cout << "Szerintem a helyes válasz: " << BetuSzam(rossz) << std::endl;
						ok = 1;
					}

				}
			}
		}
		else
		{
			cout << "Szerintem a helyes válasz: " << conductor->valasz << std::endl;
		}
	}
}