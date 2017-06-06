#pragma once
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
#include "lista.h"
#include <vector>
#include <cstring>
#include <sstream>
#include <list>
#include <iomanip>
#include "msclr\marshal_cppstd.h"


namespace {
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
	time_t kezdet;
	time_t veg;
	struct toplista cs;
	int kilep = 0, ok, i, j, kk = 0, db = 0, nyeremeny[16] = { 0,5000,10000,25000,50000,100000,200000,300000,500000,800000,1500000,3000000,5000000,10000000,20000000,40000000 };
	int seged = 1, nehezseg = 1, nehez[16] = { 0 }, nehezsegseged[16] = { 0 }, nehezellseged, nyeremenyjatekos;
	int kozonseg = 1, telefon = 1, felezes = 1, fszint = -1;
	int av = 0;
	char jo, rossz;
	double tido = 0;
	std::string s;
	static int  rangsordb = 0;
	std::string nev;
	std::string token;
	std::string line;
	static int szamlal = 0, kes = 0;
	node *root;
	static std::string jatekosnev2;
	std::string valaszbetu;
	boolean megallt;


	node *conductor;

}



namespace Loimgui {



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for jatek
	/// </summary>
	public ref class jatek : public System::Windows::Forms::Form
	{
	public:
		jatek(String^ nev)
		{
			String^ jatekosnev = nev;
			jatekosnev2 = marshal_as<std::string>(nev);
			InitializeComponent();
			beolvas(jatekosnev);

			dbjatekplus();
		}
			static int getdbjatek() {
				return dbjatek;
			}


			//
			//TODO: Add the constructor code here
			//
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~jatek()
		{
			if (components)
			{
				delete components;
			}
			dbjatek--;
		}
		static int dbjatek = 0;
		void dbjatekplus() {
			dbjatek++;
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label3;
	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent()
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(92, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(43, 148);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 26);
			this->button1->TabIndex = 2;
			this->button1->TabStop = false;
			this->button1->Text = L"Felezés";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &jatek::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(289, 148);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 26);
			this->button2->TabIndex = 3;
			this->button2->TabStop = false;
			this->button2->Text = L"Telefonos segítség";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &jatek::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(540, 148);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 26);
			this->button3->TabIndex = 4;
			this->button3->TabStop = false;
			this->button3->Text = L"Közönség";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &jatek::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(289, 430);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(139, 26);
			this->button4->TabIndex = 5;
			this->button4->TabStop = false;
			this->button4->Text = L"Megállás";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &jatek::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(61, 217);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(219, 66);
			this->button5->TabIndex = 6;
			this->button5->TabStop = false;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &jatek::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(433, 217);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(219, 66);
			this->button6->TabIndex = 7;
			this->button6->TabStop = false;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &jatek::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(61, 322);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(219, 66);
			this->button7->TabIndex = 8;
			this->button7->TabStop = false;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &jatek::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(433, 322);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(219, 66);
			this->button8->TabIndex = 9;
			this->button8->TabStop = false;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &jatek::button8_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"label3";
			// 
			// jatek
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(725, 495);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"jatek";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void beolvas(String^ nev) {
			this->Text = nev + " Legyen Ön is Milliomos!";
			srand(time(NULL));
			if (kes == 0) {
				kes++;

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
					if (seged < conductor->nehez) {
						nehez[seged] = db; seged++;
					}
					conductor = conductor->next; db++;
				}
			}
				rangsordb = 0;
				
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

			
				nehezseg = 1;
				kozonseg = 1, telefon = 1, felezes = 1, fszint = -1;
				nyeremenyjatekos = 0;
				av = 0;
				tido = 0;
				megallt = false;
				szerintem(jatekosnev2, 0);
			}
		

		void szerintem(std::string nev, int a) {
			int jnyeremeny = 0, k;
			int vege = 0;
			
			String^ igazinev = marshal_as<String^>(nev);
			//while (!vege) {//Csak akkor lép ki, hogyha a vege=1, tehát, ha megnyerted a játékot, megálltál vagy rossz választ adtál			 
				if (av == 0) {
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
					time(&kezdet);

					msclr::interop::marshal_context context;
					label1->Text = marshal_as<String^>(std::to_string(conductor->nehez));
					label2->Text = marshal_as<String^>(conductor->kerdes);
					label3->Text = marshal_as<String^>(conductor->kategoria);
					button5->Text = marshal_as<String^>(conductor->a);
					button6->Text = marshal_as<String^>(conductor->b);
					button7->Text = marshal_as<String^>(conductor->c);
					button8->Text = marshal_as<String^>(conductor->d);
				}

				else {
					valaszbetu = std::to_string(av + 64);
					if (valaszbetu == "65") {
						valaszbetu = "A";
					}
					if (valaszbetu == "66") {
						valaszbetu = "B";
					}
					if (valaszbetu == "67") {
						valaszbetu = "C";
					}
					if (valaszbetu == "68") {
						valaszbetu = "D";
					}


					if (((conductor->valasz) != valaszbetu) && (megallt == false)) {

						if (nehezseg <= 5) { MessageBox::Show(igazinev + " ön kiesett játékunkból, mivel helytelen választ adott!\nA helyes válasz " + marshal_as<String^>(conductor->valasz) + " lett volna!\tA nyereménye: " + nyeremeny[0] + "\n", "Sajnáljuk!", MessageBoxButtons::OK, MessageBoxIcon::Stop);  nyeremenyjatekos = nyeremeny[0]; }
						if (nehezseg > 5 && nehezseg <= 10) { MessageBox::Show(igazinev + " ön kiesett játékunkból, mivel helytelen választ adott!\nA helyes válasz " + marshal_as<String^>(conductor->valasz) + " lett volna!\tA nyereménye: " + nyeremeny[5] + "\n", "Sajnáljuk!", MessageBoxButtons::OK, MessageBoxIcon::Stop);  nyeremenyjatekos = nyeremeny[5]; }
						if (nehezseg > 10 && nehezseg <= 15) { MessageBox::Show(igazinev + " ön kiesett játékunkból, mivel helytelen választ adott!\nA helyes válasz " + marshal_as<String^>(conductor->valasz) + " lett volna!\tA nyereménye: " + nyeremeny[10] + "\n", "Sajnáljuk!", MessageBoxButtons::OK, MessageBoxIcon::Stop);  nyeremenyjatekos = nyeremeny[10]; }
						//Az eddigi nyereménye
						vege = 1;
						toplistafg(igazinev);
						this->Close();
					}
					else if (nehezseg == 15) {

						MessageBox::Show(igazinev + " ön megnyerte a játék fõdíját ami nem más mint " + nyeremeny[nehezseg] + " FT!",
							"Gratulálunk!", MessageBoxButtons::OK,
							MessageBoxIcon::Information);
						nyeremenyjatekos = nyeremeny[nehezseg];
						vege = 1;
						toplistafg(igazinev);
						this->Close();
					}
					else if (megallt == true) {
						nyeremenyjatekos = nyeremeny[nehezseg - 1];
						MessageBox::Show(igazinev + " ön megállt a nyereménye: " + nyeremeny[nehezseg - 1] + " FT!",
							"Gratulálunk!", MessageBoxButtons::OK,
							MessageBoxIcon::Information);
						vege = 1;
						toplistafg(igazinev);
						this->Close();
					}
					else {
						MessageBox::Show(igazinev + " a válasza helyes aktuális nyereményalap " + nyeremeny[nehezseg] + " FT!",
							"Gratulálunk!", MessageBoxButtons::OK,
							MessageBoxIcon::Information);
						nyeremenyjatekos = nyeremeny[nehezseg];
					}
					nehezseg++;
					if (vege != 1) {
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

						MessageBox::Show(marshal_as<String^>(conductor->valasz));
						msclr::interop::marshal_context context;
						label1->Text = marshal_as<String^>(std::to_string(conductor->nehez));
						label2->Text = marshal_as<String^>(conductor->kerdes);
						label3->Text = marshal_as<String^>(conductor->kategoria);
						button5->Text = marshal_as<String^>(conductor->a);
						button6->Text = marshal_as<String^>(conductor->b);
						button7->Text = marshal_as<String^>(conductor->c);
						button8->Text = marshal_as<String^>(conductor->d);
						button5->Visible = true; button6->Visible = true; button7->Visible = true; button8->Visible = true;
					}
					time(&veg); tido = difftime(veg, kezdet);
				}
			}
			
		/*}*/

		void toplistafg(String^ nev) {
			if (rangsordb != 10) {
				adatok[rangsordb].nev = marshal_as<std::string>(nev);
				adatok[rangsordb].nyeremeny = nyeremenyjatekos;
				adatok[rangsordb].ido = tido;
				rangsordb++;
			}
			else {
				if (nyeremenyjatekos >= adatok[rangsordb - 1].nyeremeny) {
					adatok[rangsordb - 1].nev = marshal_as<std::string>(nev);
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

		char BetuSzam(int x) {
			switch (x)
			{
			case 0:;
				return 'A';
				break;
			case 1:
				return 'B';
				break;
			case 2:
				return 'C';
				break;
			case 3:
				return 'D';
				break;
			}
		}

		String^ BetuSzam2(int x) {
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

		int getKozonseg() {
			return kozonseg;
		}
		int getFelezes() {
			return felezes;
		}
		int getTelefont() {
			return telefon;
		}
		int getFelezSzint() {
			return fszint;
		}
		char getRossz() {
			return rossz;
		}

		int getA() {
			return av;
		}
		/*String^ getRossz2() {


		}*/
		void setvalasz(int A) {
			av = A;
		}

		void setFelezSzint(int sz) {
			fszint = sz;
		}
		void setKozonseg(int sz) {
			kozonseg = sz;
		}
		void setFelezes(int sz) {
			felezes = sz;
		}
		void setTelefon(int sz) {
			telefon = sz;
		}
		void setRossz(char r) {
			rossz = r;
		}



	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}





#pragma endregion 


	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		setvalasz(2);
		szerintem(jatekosnev2, av);
		label1->Focus();
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		setvalasz(3);
		szerintem(jatekosnev2, av);
		label1->Focus();
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		setvalasz(4);
		szerintem(jatekosnev2, av);
		label1->Focus();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		megallt = true;
		szerintem(jatekosnev2, av = 1);
		label1->Focus();

	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		setvalasz(1);
		szerintem(jatekosnev2, av);
		label1->Focus();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		setFelezSzint(conductor->nehez);
		if (getFelezes() == 0)
		{
			MessageBox::Show("Ezt a segítséget már elhasználta!",
				"Hiba lépett fel!", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
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
			/*system("cls");
			std::cout << "A kérdés témaköre: " << conductor->kategoria << "\n\n";
			std::cout << conductor->nehez << ". " << conductor->kerdes << "\n";*/
			if (rossz.compare("A") == 0 && conductor->valasz.compare("B") == 0 || rossz.compare("B") == 0 && conductor->valasz.compare("A") == 0)
			{
				//std::cout << "(A) " << std::setw(30) << std::left << conductor->a << "(B)" << conductor->b << std::endl; //jó
				button7->Visible = false;
				button8->Visible = false;
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
				//std::cout << "(A) " << std::setw(30) << std::left << conductor->a << "\n(C) " << std::setw(30) << std::left << conductor->c << std::endl;
				button6->Visible = false;
				button8->Visible = false;
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
				//std::cout << "(A) " << std::setw(30) << std::left << conductor->a << std::endl << std::setw(30) << std::left << "" << "(D)" << conductor->d << std::endl;
				button7->Visible = false;
				button6->Visible = false;
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
				//std::cout << std::setw(30) << std::left << "" << "(B)" << conductor->b << "\n(C) " << std::setw(30) << std::left << conductor->c << std::endl;
				button5->Visible = false;
				button8->Visible = false;
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
				//std::cout << std::setw(30) << std::left << "" << "(B)" << conductor->b << std::endl << std::setw(30) << std::left << "" << "(D)" << conductor->d << std::endl;
				button5->Visible = false;
				button7->Visible = false;
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
				//std::cout << std::endl << "(C)" << std::setw(30) << std::left << conductor->c << "(D)" << conductor->d << std::endl;
				button5->Visible = false;
				button6->Visible = false;
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
		label1->Focus();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		if (getTelefont() == 0)
		{
			//std::cout << "A telefon segítséget már elhasználta" << std::endl;
			MessageBox::Show("Ezt a segítséget már elhasználta!",
				"Hiba lépett fel!", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		else
		{
			setTelefon(0);
			double t_tipp;
			double rossz;
			std::string nev;
			int ok = 0, szint = conductor->nehez;

			t_tipp = (rand() % 100)*(1 + szint * 0, 01);
			setTelefon(0);
			/*std::cout << "Adja meg, hogy kit hívjunk fel" << std::endl;
			std::getline(std::cin, nev);
			std::cout << nev << " hívasa" << std::endl;
			for (int i = 0; i < 3; i++)
			{
			sleep(1);
			std::cout << ". ";
			}
			std::cout << "\n";*/
			if (t_tipp > 70)
			{
				if (getFelezSzint() == conductor->nehez)
				{
					rossz = getRossz();
					rossz = rossz - 65;
					//std::cout << "Szerintem a helyes válasz: " << getRossz() << std::endl;
					MessageBox::Show("A(z) " + BetuSzam2(rossz) + " szerintem a helyes válasz",
						"Telefonos segítség", MessageBoxButtons::OK,
						MessageBoxIcon::Information);
				}
				else
				{
					while (!ok)
					{
						rossz = rand() % 4;
						if (BetuSzam(rossz) == (conductor->valasz).at(0))
						{
							//std::cout << "Szerintem a helyes válasz: " << BetuSzam(rossz) << std::endl;
							MessageBox::Show("A(z) " + BetuSzam2(rossz) + " szerintem a helyes válasz",
								"Telefonos segítség", MessageBoxButtons::OK,
								MessageBoxIcon::Information);
							ok = 1;
						}

					}
				}
			}
			else
			{
				//std::cout << "Szerintem a helyes válasz: " << conductor->valasz << std::endl;
				MessageBox::Show("A(z) " + marshal_as<String^>(conductor->valasz) + " szerintem a helyes válasz",
					"Telefonos segítség", MessageBoxButtons::OK,
					MessageBoxIcon::Information);
			}
		}
		label1->Focus();
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (getKozonseg() == 0)
		{
			MessageBox::Show("Ezt a segítséget már elhasználta!",
				"Hiba lépett fel!", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		else {
			int szint = conductor->nehez;
			double h_tipp = 0;
			double rossz = 0;
			int ok = 0;
			h_tipp = (rand() % 100)*(1 + szint * 0, 04);
			setKozonseg(0);
			if (h_tipp > 60)
			{
				if (getFelezSzint() == conductor->nehez)
				{
					rossz = getRossz();
					rossz = rossz - 65;
					//std::cout << "A közönség szerint a helyes válasz: " << getRossz() << std::endl;
					MessageBox::Show("A(z) " + BetuSzam2(rossz) + " a helyes válasz\na közönség véleménye szerint",
						"Közönség segítség", MessageBoxButtons::OK,
						MessageBoxIcon::Information);
				}
				else
				{
					while (!ok)
					{
						rossz = rand() % 4;
						if (BetuSzam(rossz) == (conductor->valasz).at(0))
						{
							//std::cout << "A közönség szerint a helyes válasz: " << BetuSzam(rossz) << std::endl;
							MessageBox::Show("A(z) " + BetuSzam2(rossz) + " a helyes válasz\na közönség véleménye szerint",
								"Közönség segítség", MessageBoxButtons::OK,
								MessageBoxIcon::Information);
							ok = 1;
						}

					}
				}
			}
			else
			{
				//std::cout << "A közönség szerint a helyes válasz: " << conductor->valasz << std::endl;
				MessageBox::Show("A(z) " + marshal_as<String^>(conductor->valasz) + " a helyes válasz\na közönség véleménye szerint",
					"Közönség segítség", MessageBoxButtons::OK,
					MessageBoxIcon::Information);
			}
		}
		label1->Focus();
	}
	};
}
