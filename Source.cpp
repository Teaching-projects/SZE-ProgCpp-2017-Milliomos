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
	int helyezes;
	string nev;
	int nyeremeny;
	double ido;

}adatok[N];
void srendez(struct toplista s[], int meret) {
	struct toplista tmp;
	int i, j;
	for (i = 0; i<meret - 1; i++) {
		for (j = i + 1; j<meret; j++) {
			if ((s[i].nyeremeny<s[j].nyeremeny)) {
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
		}
	}
}
bool is_file_exist(const char *fileName)
{
	std::ifstream infile(fileName);
	return infile.good();
}





int main(int argc, char** argv) {
	time_t kezdet;
	time_t veg;
	struct toplista cs;
	int kilep = 0, ok, i, j, rangsordb = 0, kk = 0, db = 0, nyeremeny[16] = { 0,5000,10000,25000,50000,100000,200000,300000,500000,800000,1500000,3000000,5000000,10000000,20000000,40000000 };
	int seged = 1, nehezseg = 1, nehez[16] = { 0 }, nehezsegseged[16] = { 0 }, nehezellseged, nyeremenyjatekos;
	double tido = 0;
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
		cerr << "A loim.csv f�jl nem nyithat� meg!";
		exit(1);
	}
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			if (db == 0) {
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
					if (hanyadik == 0) {
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
						cur_token = next_token + 1;
					}
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

	if (!is_file_exist("toplista.txt")) {
		ofstream top("toplista.txt");
		top.close();
	}
	ifstream toplista("toplista.txt");
	if (toplista.fail()) {
		cerr << "A toplista.txt f�jl nem nyithat� meg!";
		exit(1);
	}
	if (toplista.is_open()) {
		while (getline(toplista, line))
		{
			size_t cur_token = 0, next_token, hanyadik = 0;
			do {
				next_token = line.find_first_of("\t", cur_token);
				token = line.substr(cur_token, next_token - cur_token);
				
				if (hanyadik == 0) {
					adatok[rangsordb].helyezes = std::stoi(token);
				}
				else if (hanyadik == 1) {
					adatok[rangsordb].nev = token;
				}
				else if (hanyadik == 2) {
					adatok[rangsordb].nyeremeny = std::stoi(token);
				}
				else if (hanyadik == 3) {
					adatok[rangsordb].ido = std::stof(token);
				}
				if (next_token != string::npos) {
					cur_token = next_token + 1;
				}
				hanyadik++;
			} while (next_token != string::npos);
			rangsordb++;
		}
	}
	toplista.close();

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
		if (s.compare("K") == 0) { cout << "Viszl�t!\n"; kilep = 2; }
		if (s.compare("T") == 0) {
			system("cls");
			for (i = 0; i < rangsordb; i++) {
				cout << "%d.\t%-10s\t\t%-20dFT\t\t%0.f\n", i + 1, adatok[i].nev, adatok[i].nyeremeny, adatok[i].ido;


			}
			cout << "A toplista v�ge!\nEnterrel tud visszal�pni a f�men�be!\n";

			getchar();
		}
		if (s.compare("J") == 0) {
			int felezes = 1, kozonseg = 1, telefonos = 1, jnyeremeny = 0, k;
			do {
				ok = 1;
				cout << "Adjon meg egy nevet:\n";
				std::getline(std::cin, nev);
				cout << "\n" << nev << " Legyen �n is milliomos!\n\n";
				sleep(2);
			} while (!ok);
			int vege = 0, nehezseg = 1;
			int fix = 0, koz = 95, tele = 150;
			while (!vege) {//Csak akkor l�p ki, hogyha a vege=1, teh�t, ha megnyerted a j�t�kot, meg�llt�l vagy rossz v�laszt adt�l
				do {
					ok = 1;
					k = nehez[nehezseg - 1] + rand() % (nehez[nehezseg] - nehez[nehezseg - 1]);//Kirandomolja a k�rd�st, neh�zs�g szerint
				} while (!ok);
				conductor = root;
				i = 0;
				while (i < k) {
					conductor = conductor->next;
					i++;
				}
				system("cls");
				time(&kezdet);
				if (argc == 2) { if (strcmp(argv[1], "cheat") == 0) { cout << "A helyes valasza: " << conductor->valasz << "\n"; } }
				cout << "A k�rd�s t�mak�re: " << conductor->kategoria << "\n\n";
				cout << conductor->nehez << ". " << conductor->kerdes << "\n(A) " << setw(30) << left << conductor->a << "(B)" << conductor->b <<
					"\n(C) " << setw(30) << left << conductor->c << "(D)" << conductor->d;
				cout << "\n";

				do {
					ok = 1;
					cout << "Adja meg a helyes v�laszt:\n";
					std::getline(std::cin, s);
					s[0] = toupper(s[0]);
					if ((s.compare("A") != 0) && (s.compare("B") != 0) && (s.compare("C") != 0) && (s.compare("D") != 0) && (s.compare("O") != 0)) {
						cout << "Helytelen karakter!\n";
						ok = 0;
					}
				} while (!ok);

				if ((s.compare(conductor->valasz) != 0) && (s.compare("O") != 0)) {
					if (nehezseg <= 5) { cout << "Sajn�ljuk �n kiesett j�t�kunkb�l, mivel helytelen v�laszt adott!\nA helyes v�lasz " << conductor->valasz << " lett volna!\tA nyerem�nye: " << nyeremeny[0] << "\n";  nyeremenyjatekos = nyeremeny[0]; time(&veg); tido = difftime(veg, kezdet); sleep(3); }
					if (nehezseg > 5 && nehezseg < 10) { cout << "Sajn�ljuk �n kiesett j�t�kunkb�l, mivel helytelen v�laszt adott!\nA helyes v�lasz " << conductor->valasz << " lett volna!\tA nyerem�nye: " << nyeremeny[5] << "\n"; nyeremenyjatekos = nyeremeny[5]; time(&veg); tido = difftime(veg, kezdet); sleep(3); }
					if (nehezseg > 10 && nehezseg < 15) { cout << "Sajn�ljuk �n kiesett j�t�kunkb�l, mivel helytelen v�laszt adott!\nA helyes v�lasz " << conductor->valasz << " lett volna!\tA nyerem�nye: " << nyeremeny[10] << "\n"; nyeremenyjatekos = nyeremeny[10]; time(&veg); tido = difftime(veg, kezdet); sleep(3); }
					//Az eddig nyerem�nye
					vege = 1;
				}
				else {
					cout << "Gratul�lunk helyes a v�lasza!\nEddigi nyerem�nye: " << nyeremeny[nehezseg] << "\n";
					nyeremenyjatekos = nyeremeny[nehezseg];
					sleep(2);
				}


				if (nehezseg == 15) {
					cout << "Gratul�lunk " << nev << " �n megnyerte a j�tek f�d�j�t ami nem m�s mint " << nyeremeny[nehezseg] << " FT!\n\n";
					time(&veg); tido = difftime(veg, kezdet);
					nyeremenyjatekos = nyeremeny[nehezseg];
					vege = 1;
				}

				nehezseg++;
			}
			if (rangsordb != 10) {
				adatok[rangsordb].nev = nev;
				adatok[rangsordb].nyeremeny = nyeremenyjatekos;
				adatok[rangsordb].ido = tido;
				rangsordb++;
			}
			else {
				if (nyeremenyjatekos >= adatok[rangsordb - 1].nyeremeny) {
					adatok[rangsordb - 1].nev, nev;
					adatok[rangsordb - 1].nyeremeny = nyeremenyjatekos;
					adatok[rangsordb - 1].ido = tido;
				}
			}
			ofstream toplista("toplista.txt");
			if (toplista.fail()) {
				cerr << "A f�jl nem nyithat� meg!";
				exit(1);
			}
			srendez(adatok, rangsordb);
			for (i = 0; i<rangsordb - 1; i++) {
				for (j = i + 1; j<rangsordb; j++) {
					if (adatok[i].nyeremeny == adatok[j].nyeremeny) {
						if (adatok[i].ido>adatok[j].ido) {
							cs = adatok[i];
							adatok[i] = adatok[j];
							adatok[j] = cs;
						}
					}
				}
			}
			for (i = 0; i<rangsordb; i++) {
				toplista << i + 1 << ".";
				toplista << "\t" << adatok[i].nev << "";
				toplista << "\t" << adatok[i].nyeremeny << "";
				toplista << "\t" << adatok[i].ido << "\n";
			}
			toplista.close();


		}
	}
	return 0;
}