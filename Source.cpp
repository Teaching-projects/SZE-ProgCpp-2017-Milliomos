#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h> 
#include <math.h>
#include <time.h>
#include <istream>
#include <fstream>
#include "magyarit.h"

using namespace std;
#define MAX 512

int main() {
	int kilep = 0, ok;
	
	std::string s;
	
	magyarit();
		while (kilep != 2) {
			system("cls"); 
			cout << "\n�dv�z�lj�k a Legyen �n is Milliomos j�t�kban!\n\n";
			cout << "\n|___Menu ___|\n\n�j j�t�k (J)\n�tmutat� j�t�khoz(U)\nSzab�lyzat(S)\nToplista(T)\nKil�p�s(K)\n";
			do {
				ok = 1;
				cout << "\n";
				std::getline(std::cin, s);
				char c = s[0];
				s = toupper(c);
				if ((s.compare("J") != 0) && (s.compare("S") != 0) && (s.compare("T") != 0) && (s.compare("K") != 0) && (s.compare("U") != 0)) { cout << "Helytelen Karakter!\n"; ok = 0; }
			} while (!ok);
			if (s.compare("S") == 0) {
				system("cls");
				cout << "A sz�kbe ker�l� j�t�kosnak 15 egyre nehezed� k�rd�st tesznek fel.\nA k�rd�sek feleletv�laszt�sak: n�gy v�laszlehet�s�get is megadnak,\nmelyek k�z�l a j�t�kosnak kell kiv�lasztania a helyeset.\n(A n�gy v�laszlehet�s�get a latin �b�c� els� n�gy bet�j�vel jel�lik.)\nAz els� k�rd�s helyes megv�laszol�s�val a j�t�kos 5 000 Ft-ot nyer.\nA t�bbi k�rd�ssel egyre t�bb p�nzhez jut a j�t�kos.\nNagyj�b�l minden k�rd�s ut�n megdupl�z�dik a nyerem�ny.";
				cout << "\n\nEnterrel tud visszal�pni a f�men�be!\n";
				getchar();
			}
			if (s.compare("U") == 0) {
				system("cls");
				cout << "A j�t�k sor�n haszn�lhat seg�ts�geket melyek a k�vetkez�k:\n\nK�z�ns�g seg�ts�g: a 'K' bet� v�laszmegad�ssal lehet k�rv�nyezni a k�z�ns�g\nseg�ts�g�t amely sz�zal�kos ar�nyban meg fogja adni, hogy ki mire szavazott,\ns milyen ar�nyban.\n\nTelefonos seg�ts�g: a telefonos seg�ts�get a 'T' bet� v�laszmegad�ssal lehet\nalkalmazni, ekkor megadhatja, hogy kit akar felh�vni, s ut�na a k�v�nt szem�ly\nmegadja az �ltala v�lt helyes v�lasz bet�jel�t.\n\nFelez�s seg�ts�g: az 'F' bet� v�laszmegad�ssal tudja k�rni ezt a seg�ts�get\namely ut�n, a n�gy f�le v�laszlehet�s�gb�l kett� lesz. Magyar�n mondva lefelezi.\n";
				cout << "Az �tmutat� v�ge!\nEnterrel tud visszal�pni a f�men�be!\n";
				getchar();
			}
	}
	
	



	
	

	return 0;
}