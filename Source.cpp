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
			cout << "\nÜdvözöljük a Legyen Ön is Milliomos játékban!\n\n";
			cout << "\n|___Menu ___|\n\nÚj játék (J)\nÚtmutató játékhoz(U)\nSzabályzat(S)\nToplista(T)\nKilépés(K)\n";
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
				cout << "A székbe kerülõ játékosnak 15 egyre nehezedõ kérdést tesznek fel.\nA kérdések feleletválasztósak: négy válaszlehetõséget is megadnak,\nmelyek közül a játékosnak kell kiválasztania a helyeset.\n(A négy válaszlehetõséget a latin ábécé elsõ négy betûjével jelölik.)\nAz elsõ kérdés helyes megválaszolásával a játékos 5 000 Ft-ot nyer.\nA többi kérdéssel egyre több pénzhez jut a játékos.\nNagyjából minden kérdés után megduplázódik a nyeremény.";
				cout << "\n\nEnterrel tud visszalépni a fõmenübe!\n";
				getchar();
			}
	}
	
	



	
	

	return 0;
}