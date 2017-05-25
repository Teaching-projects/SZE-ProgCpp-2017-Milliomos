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
#include "segit.h"
#include "magyarit.h"
#include "sleep.h"
#include "lista.h"
#include <vector>
#include <cstring>
#include <sstream>
#include <list>
#include <iomanip>



//using namespace std;
#define N 10
#define MAX 512
#define NEVMAX 32

struct toplista {
	int helyezes;
	std::string nev;
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
	std::string line;
	node *root;
	node *conductor;

	srand(time(NULL));
	magyarit();

	std::ifstream myfile("loim.csv");
	if (myfile.fail()) {
		std::cerr << "A loim.csv fájl nem nyitható meg!";
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
				size_t cur_token = 0, next_token, hanyadik = 0;
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

					if (next_token != std::string::npos) {
						cur_token = next_token + 1;
					}
					hanyadik++;
				} while (next_token != std::string::npos);
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

					if (next_token != std::string::npos) {
						cur_token = next_token + 1;
					}
					hanyadik++;
				} while (next_token != std::string::npos);
				db++;

			}
		}
	}

	nehez[15] = db;
	myfile.close();

	rendezes(root);

	conductor = root;
	db = 0;
	while (conductor) {
		if (seged<conductor->nehez) {
			nehez[seged] = db; seged++;
		}
		conductor = conductor->next; db++;
	}

	if (!is_file_exist("toplista.txt")) {
		std::ofstream top("toplista.txt");
		top.close();
	}
	std::ifstream toplista("toplista.txt");
	if (toplista.fail()) {
		std::cerr << "A toplista.txt fájl nem nyitható meg!";
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
				if (next_token != std::string::npos) {
					cur_token = next_token + 1;
				}
				hanyadik++;
			} while (next_token != std::string::npos);
			rangsordb++;
		}
	}
	toplista.close();

	while (kilep != 2) {
		system("cls");
		std::cout << "\nÜdvözöljük a Legyen Ön is Milliomos játékban!\n\n";
		std::cout << "\n|___Menu ___|\n\nÚj játék (J)\nÚtmutató a játékhoz(U)\nSzabályzat(S)\nToplista(T)\nÚj Kérdés felvétele(F)\nKilépés(K)\n";
		do {
			ok = 1;
			std::cout << "\n";
			std::getline(std::cin, s);
			char c = s[0];
			s = toupper(c);
			if ((s.compare("J") != 0) && (s.compare("S") != 0) && (s.compare("T") != 0) && (s.compare("K") != 0) && (s.compare("F") != 0) && (s.compare("U") != 0)) { std::cout << "Helytelen Karakter!\n"; ok = 0; }
		} while (!ok);
		if (s.compare("S") == 0) {
			system("cls");
			std::cout << "A székbe kerülõ játékosnak 15 egyre nehezedõ kérdést tesznek fel.\nA kérdések feleletválasztósak: négy válaszlehetõséget is megadnak,\nmelyek közül a játékosnak kell kiválasztania a helyeset.\n(A négy válaszlehetõséget a latin ábécé elsõ négy betûjével jelölik.)\nAz elsõ kérdés helyes megválaszolásával a játékos 5 000 Ft-ot nyer.\nA többi kérdéssel egyre több pénzhez jut a játékos.\nNagyjából minden kérdés után megduplázódik a nyeremény.";
			std::cout << "\n\nEnterrel tud visszalépni a fõmenübe!\n";
			getchar();
		}
		if (s.compare("U") == 0) {
			system("cls");
			std::cout << "A játék során használhat segítségeket melyek a következõk:\n\nKözönség segítség: a 'K' betû válaszmegadással lehet kérvényezni a közönség\nsegítségét amely százalékos arányban meg fogja adni, hogy ki mire szavazott,\ns milyen arányban.\n\nTelefonos segítség: a telefonos segítséget a 'T' betû válaszmegadással lehet\nalkalmazni, ekkor megadhatja, hogy kit akar felhívni, s utána a kívánt személy\nmegadja az általa vélt helyes válasz betûjelét.\n\nFelezés segítség: az 'F' betû válaszmegadással tudja kérni ezt a segítséget\namely után, a négy féle válaszlehetõségbõl kettõ lesz. Magyarán mondva lefelezi.\n";
			std::cout << "Az útmutató vége!\nEnterrel tud visszalépni a fõmenübe!\n";
			getchar();
		}
		if (s.compare("K") == 0) { std::cout << "Viszlát!\n"; kilep = 2; }
		if (s.compare("T") == 0) {
			system("cls");
			std::cout << "Helyezés" << "\t" << std::setw(10) << std::left << "Név" << "\t" << std::setw(30) << std::left << "Nyeremény" << "\t" << std::setw(30) << std::left << "Idõ" << "\n\n";
			for (i = 0; i < rangsordb; i++) {
				std::cout << i + 1 << "." << std::setw(9) << std::left << "\t" << std::setw(9) << std::left << adatok[i].nev << "\t" << std::setw(30) << std::left << adatok[i].nyeremeny << "\t" << std::setw(20) << std::left << adatok[i].ido << "\n";
			}
			std::cout << "A toplista vége!\nEnterrel tud visszalépni a fõmenübe!\n";

			getchar();
		}
		if (s.compare("F") == 0) {

			std::ofstream loimfile;

			loimfile.open("loim.csv", std::ios_base::app);
			if (loimfile.fail()) {
				std::cerr << "A fájl nem nyitható meg!";
				exit(1);
			}
			std::cout << "A Kérdés nehézsége [1-15] közöttinek kell lennie, Ha mégse szeretne\núj kérdést felvenni, akkor nyomja meg az MÉGSE(M)-et.\n";
			std::cout << "Új kérdés felvétele: Nehézség;Kérdés;A;B;C;D lehetsõség;Helyes válasz betûjele;Kategoria;\n";
			std::cout << "pl:7;Milyen növényrész a becõ?;termés;fõgyökér;levélerezet;fakéreg;A;BIOLÓGIA;\n";
			do {
				ok = 1;
				std::getline(std::cin, s);
				s[0] = toupper(s[0]);
				if (s.compare("M") == 0) { ok = 1; }
				else if (!bekerell(s)) { std::cout << "Helytelen formátumot adott meg!\n"; ok = 0; }
			}while (!ok);
			if (s.compare("M") != 0) {
				size_t cur_token = 0, next_token, hanyadik = 0;
				do {
					next_token = s.find_first_of(";", cur_token);
					token = s.substr(cur_token, next_token - cur_token);
					if (hanyadik < 7) {
						loimfile << token << ";";
					}
					else if (hanyadik == 7) {
						loimfile << token << ";\n";
					}

					if (next_token != std::string::npos) {
						cur_token = next_token + 1;
					}
					hanyadik++;
				} while (next_token != std::string::npos);

			}
			loimfile.close();
		}
		if (s.compare("J") == 0) {
			int jnyeremeny = 0, k;
			do {
				ok = 1;
				std::cout << "Adjon meg egy nevet:\n";
				std::getline(std::cin, nev);
				if (nev == "") { ok = 0; std::cout << "Töltse ki a név mezõt!\n"; }	
			} while (!ok);
			std::cout << "\n" << nev << " Legyen ön is milliomos!\nInduljon a játék! Sok szerencsét kívánunk!\n";
			sleep(5);
			int vege = 0, nehezseg = 1;			
			Segitseg segitsegek{};
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
				time(&kezdet);
				if (argc == 2) { if (strcmp(argv[1], "cheat") == 0) { std::cout << "A helyes valasz: " << conductor->valasz << "\n"; } }
				std::cout << "A kérdés témaköre: " << conductor->kategoria << "\n\n";
				std::cout << conductor->nehez << ". " << conductor->kerdes << "\n(A) " << std::setw(30) << std::left << conductor->a << "(B)" << conductor->b <<
					"\n(C) " << std::setw(30) << std::left << conductor->c << "(D)" << conductor->d;
				std::cout << "\n";

				do {
					ok = 1;
					std::cout << "Adja meg a helyes választ:\n";
					std::getline(std::cin, s);
					s[0] = toupper(s[0]);
					if ((s.compare("A") != 0) && (s.compare("B") != 0) && (s.compare("C") != 0) && (s.compare("D") != 0) && (s.compare("F") != 0) 
							&& (s.compare("K") != 0) && (s.compare("T") != 0)  && (s.compare("M") != 0)) 
					{
						std::cout << "Helytelen karakter!\n";
						ok = 0;
					}
					if (s.compare("F") == 0 || s.compare("T") == 0 || s.compare("K") == 0)
					{
						if (s.compare("F") == 0)
						{
							segitsegek.Felez(conductor);
							
						}
						else if (s.compare("T") == 0)
						{
							segitsegek.Telefon(conductor->nehez, conductor);
							
						}
						else if (s.compare("K") == 0)
						{
							segitsegek.Kozonseg(conductor);
							
						}
						ok = 0;
					}
				} while (!ok);

				
				if ((s.compare(conductor->valasz) != 0) && (s.compare("M") != 0)) {
					if (nehezseg <= 5) { std::cout << "Sajnáljuk ön kiesett játékunkból, mivel helytelen választ adott!\nA helyes válasz " << conductor->valasz << " lett volna!\tA nyereménye: " << nyeremeny[0] << "\n";  nyeremenyjatekos = nyeremeny[0]; sleep(3); }
					if (nehezseg > 5 && nehezseg <= 10) { std::cout << "Sajnáljuk ön kiesett játékunkból, mivel helytelen választ adott!\nA helyes válasz " << conductor->valasz << " lett volna!\tA nyereménye: " << nyeremeny[5] << "\n"; nyeremenyjatekos = nyeremeny[5]; sleep(3); }
					if (nehezseg > 10 && nehezseg <= 15) { std::cout << "Sajnáljuk ön kiesett játékunkból, mivel helytelen választ adott!\nA helyes válasz " << conductor->valasz << " lett volna!\tA nyereménye: " << nyeremeny[10] << "\n"; nyeremenyjatekos = nyeremeny[10]; sleep(3); }
					//Az eddigi nyereménye
					vege = 1;
				}
				else if (nehezseg == 15 && (s.compare(conductor->valasz) == 0) ) {
					std::cout << "\n\n\t\tGratulálunk " << nev << " ön megnyerte a játek fõdíját ami nem más mint " << nyeremeny[nehezseg] << " FT!\n\n";
					sleep(5);					
					nyeremenyjatekos = nyeremeny[nehezseg];
					vege = 1;
				}
				else if (s.compare("M") == 0) {
					nyeremenyjatekos = nyeremeny[nehezseg - 1];					
					std::cout << "Adja meg a helyes választ játékon kívül:\n";
					do {
						ok = 1;
						std::getline(std::cin, s);
						s[0] = toupper(s[0]);
						if (s.compare("A") != 0 && s.compare("B") != 0 && s.compare("C") != 0 && s.compare("D") != 0) {
							ok = 0; std::cout << "Helytelen válasz!\n";
						}
					} while (!ok);
					if (s.compare(conductor->valasz) == 0) {
						std::cout << "Játékon kívül eltaláltad a helyes választ!\n";
					}
					else {
						std::cout << "A helyes válasz: " << conductor->valasz << " lett volna!\n";
					}
					std::cout << nev << " a nyereményed: " << nyeremeny[nehezseg - 1] << " Ft\n";
					sleep(3);
					vege = 1;
				}
				else {
					std::cout << "Gratulálunk helyes a válasza!\nEddigi nyereménye: " << nyeremeny[nehezseg] << "\n";
					nyeremenyjatekos = nyeremeny[nehezseg];
					sleep(2);
				}
				nehezseg++;
			}
			time(&veg); tido = difftime(veg, kezdet);
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
			std::ofstream toplista("toplista.txt");
			if (toplista.fail()) {
				std::cerr << "A fájl nem nyitható meg!";
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