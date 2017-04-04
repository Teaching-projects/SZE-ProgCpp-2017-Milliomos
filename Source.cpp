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
#include "sleep.h"
#include "lista.h"
#include <vector>
#include <cstring>
#include <sstream>
#include <list>
#include <iomanip>

using namespace std;
#define N 10
#define MAX 512
#define NEVMAX 32

struct toplista {
	char nev[NEVMAX];
	int nyeremeny;
	double ido;

}adatok[N];



int main() {
	int kilep = 0, ok, i, rangsordb = 0, db = 0;
	int seged = 1, nehezseg = 1, nehez[16] = { 0 }, nehezsegseged[16] = { 0 }, nehezellseged;
	std::string s;
	std::string nev;
	std::string token;
	std:string line;
	node *root;
	node *conductor; 

	srand(time(NULL));
	magyarit();

	ifstream myfile("loim.csv");
	if (myfile.fail()) {
		cerr << "A fájl nem nyitható meg!";
		exit(1);
	}
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			if(db==0){
				root = new node;
				root->next = 0;
				conductor = root;
				db++;
			}
			else {
				size_t cur_token = 0, next_token, hanyadik = 0;
				conductor->next = new node;
				conductor = conductor->next;
				conductor->next = 0;
				do {
					next_token = line.find_first_of(";", cur_token);
					token = line.substr(cur_token, next_token - cur_token); 
					if (hanyadik==0) {
						conductor->nehez = nehezellseged = std::stoi(token);
						nehezsegseged[nehezellseged]++;
					}
					else if (hanyadik == 1) {
						conductor->kerdes = token;
					}
					else if (hanyadik == 2) {
						conductor->a = token;
					}
					else if (hanyadik == 3) {
						conductor->b = token;
					}
					else if (hanyadik == 4) {
						conductor->c = token;
					}
					else if (hanyadik == 5) {
						conductor->d = token;
					}
					else if (hanyadik == 6) {
						conductor->valasz = token;
					}
					else if (hanyadik == 7) {
						conductor->kategoria = token;
					}

					if (next_token != string::npos) {
						cur_token = next_token + 1; }
					hanyadik++;
				} while (next_token != string::npos);
				db++;

					}
				}
		}

	nehez[15] = db;
	myfile.close();



		conductor = root;
		db = 0;
		while (conductor) {
			if (seged<conductor->nehez) {
				nehez[seged] = db; seged++;
			}
			conductor = conductor->next; db++;
		}

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
		if (s.compare("U") == 0) {
			system("cls");
			cout << "A játék során használhat segítségeket melyek a következõk:\n\nKözönség segítség: a 'K' betû válaszmegadással lehet kérvényezni a közönség\nsegítségét amely százalékos arányban meg fogja adni, hogy ki mire szavazott,\ns milyen arányban.\n\nTelefonos segítség: a telefonos segítséget a 'T' betû válaszmegadással lehet\nalkalmazni, ekkor megadhatja, hogy kit akar felhívni, s utána a kívánt személy\nmegadja az általa vélt helyes válasz betûjelét.\n\nFelezés segítség: az 'F' betû válaszmegadással tudja kérni ezt a segítséget\namely után, a négy féle válaszlehetõségbõl kettõ lesz. Magyarán mondva lefelezi.\n";
			cout << "Az útmutató vége!\nEnterrel tud visszalépni a fõmenübe!\n";
			getchar();
		}
		if (s.compare("K") == 0) { cout << "Viszlát!\n"; kilep = 2; }
		if (s.compare("T") == 0) {
			system("cls");
			for (i = 0; i < rangsordb; i++) {
				cout << "%d.\t%-10s\t\t%-20dFT\t\t%0.f\n", i + 1, adatok[i].nev, adatok[i].nyeremeny, adatok[i].ido;


			}
			cout << "A toplista vége!\nEnterrel tud visszalépni a fõmenübe!\n";

			getchar();
		}
		if (s.compare("J") == 0) {
			int felezes = 1, kozonseg = 1, telefonos = 1, jnyeremeny = 0, k;
			do {
				ok = 1;
				cout << "Adjon meg egy nevet:\n";
				std::getline(std::cin, nev);
			} while (!ok);
			int vege = 0, nehezseg = 1;
			int fix = 0, koz = 95, tele = 150;
			while (!vege) {//Csak akkor lép ki, hogyha a vege=1, tehát, ha megnyerted a játékot, megálltál vagy rossz választ adtál
				do {
					ok = 1;
					k = nehez[nehezseg - 1] + rand() % (nehez[nehezseg] - nehez[nehezseg - 1]);//Kirandomolja a kérdést, nehézség szerint
				} while (!ok);
				conductor = root;
				i = 0;
				while (i < k) {
					conductor = conductor->next;
					i++;
				}
				system("cls");
				cout << "A kérdés témaköre: " << conductor->kategoria << "\n\n" ;
				cout << conductor->nehez << ". " << conductor->kerdes << "\n(A) " << setw(30) << left << conductor->a << "(B)" << conductor->b <<
					"\n(C) " << setw(30) << left << conductor->c << "(D)" << conductor->d;
				cout << "\n";

				do {
					ok = 1;
					cout << "Adja meg a helyes választ:\n";
					std::getline(std::cin, s);
					s[0] = toupper(s[0]);
					if ((s.compare("A") != 0) && (s.compare("B") != 0) && (s.compare("C") != 0) && (s.compare("D") != 0)&& (s.compare("O") != 0)) {
						cout << "Helytelen karakter!\n";
						ok = 0;
					}
				} while (!ok);

				if ((s.compare(conductor->valasz) != 0) && (s.compare("O") != 0)) {
					cout << "A helyes válasz: " <<conductor->valasz <<" lett volna!\n";
					//Az eddig nyereménye
					vege = 1;
					}
				else {
					cout << "Eltaláltad a helyes választ!\n"; //Majd ide a nyereményt még
					sleep(2);
						}


				if (nehezseg == 15) {
					cout << "Gratulálok " << nev <<  " megnyerted a játékot!\n";
					vege = 1;
				}

				nehezseg++;
			}
			
		}

		return 0;
	}

}