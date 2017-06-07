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
	private: System::Windows::Forms::Label^  label4;
	protected:
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;

































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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"A)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(406, 242);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"B)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(33, 347);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"C)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(404, 347);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"D)";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70)));
			this->tableLayoutPanel1->Controls->Add(this->label52, 2, 14);
			this->tableLayoutPanel1->Controls->Add(this->label51, 1, 14);
			this->tableLayoutPanel1->Controls->Add(this->label50, 0, 14);
			this->tableLayoutPanel1->Controls->Add(this->label49, 2, 13);
			this->tableLayoutPanel1->Controls->Add(this->label48, 1, 13);
			this->tableLayoutPanel1->Controls->Add(this->label47, 0, 13);
			this->tableLayoutPanel1->Controls->Add(this->label46, 2, 12);
			this->tableLayoutPanel1->Controls->Add(this->label45, 1, 12);
			this->tableLayoutPanel1->Controls->Add(this->label44, 0, 12);
			this->tableLayoutPanel1->Controls->Add(this->label43, 2, 11);
			this->tableLayoutPanel1->Controls->Add(this->label42, 1, 11);
			this->tableLayoutPanel1->Controls->Add(this->label41, 0, 11);
			this->tableLayoutPanel1->Controls->Add(this->label40, 2, 10);
			this->tableLayoutPanel1->Controls->Add(this->label39, 1, 10);
			this->tableLayoutPanel1->Controls->Add(this->label38, 0, 10);
			this->tableLayoutPanel1->Controls->Add(this->label37, 2, 9);
			this->tableLayoutPanel1->Controls->Add(this->label36, 1, 9);
			this->tableLayoutPanel1->Controls->Add(this->label35, 0, 9);
			this->tableLayoutPanel1->Controls->Add(this->label34, 2, 8);
			this->tableLayoutPanel1->Controls->Add(this->label33, 1, 8);
			this->tableLayoutPanel1->Controls->Add(this->label32, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->label31, 2, 7);
			this->tableLayoutPanel1->Controls->Add(this->label30, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->label29, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->label28, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->label27, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->label26, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->label25, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->label24, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->label23, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label22, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->label21, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->label20, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label19, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->label18, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label17, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label16, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->label15, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label14, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label13, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label12, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label11, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label10, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label9, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(748, 29);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 15;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666668F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666668F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666668F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666668F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666668F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666668F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666668F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666668F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666668F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666668F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666668F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666668F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666668F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666668F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666668F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(224, 427);
			this->tableLayoutPanel1->TabIndex = 15;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(69, 392);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(60, 17);
			this->label52->TabIndex = 44;
			this->label52->Text = L"5 000 Ft";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(47, 392);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(16, 17);
			this->label51->TabIndex = 43;
			this->label51->Text = L"⯁";
			this->label51->Visible = false;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(3, 392);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(16, 17);
			this->label50->TabIndex = 42;
			this->label50->Text = L"1";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(69, 364);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(68, 17);
			this->label49->TabIndex = 41;
			this->label49->Text = L"10 000 Ft";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(47, 364);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(16, 17);
			this->label48->TabIndex = 40;
			this->label48->Text = L"⯁";
			this->label48->Visible = false;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(3, 364);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(16, 17);
			this->label47->TabIndex = 39;
			this->label47->Text = L"2";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(69, 336);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(68, 17);
			this->label46->TabIndex = 38;
			this->label46->Text = L"25 000 Ft";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(47, 336);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(16, 17);
			this->label45->TabIndex = 37;
			this->label45->Text = L"⯁";
			this->label45->Visible = false;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(3, 336);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(16, 17);
			this->label44->TabIndex = 36;
			this->label44->Text = L"3";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(69, 308);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(68, 17);
			this->label43->TabIndex = 35;
			this->label43->Text = L"50 000 Ft";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(47, 308);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(16, 17);
			this->label42->TabIndex = 34;
			this->label42->Text = L"⯁";
			this->label42->Visible = false;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(3, 308);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(16, 17);
			this->label41->TabIndex = 33;
			this->label41->Text = L"4";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label40->Location = System::Drawing::Point(69, 280);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(86, 17);
			this->label40->TabIndex = 32;
			this->label40->Text = L"100 000 Ft";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(47, 280);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(16, 17);
			this->label39->TabIndex = 31;
			this->label39->Text = L"⯁";
			this->label39->Visible = false;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label38->Location = System::Drawing::Point(3, 280);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(17, 17);
			this->label38->TabIndex = 30;
			this->label38->Text = L"5";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(69, 252);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(76, 17);
			this->label37->TabIndex = 29;
			this->label37->Text = L"200 000 Ft";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(47, 252);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(16, 17);
			this->label36->TabIndex = 28;
			this->label36->Text = L"⯁";
			this->label36->Visible = false;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(3, 252);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(16, 17);
			this->label35->TabIndex = 27;
			this->label35->Text = L"6";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(69, 224);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(76, 17);
			this->label34->TabIndex = 26;
			this->label34->Text = L"300 000 Ft";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(47, 224);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(16, 17);
			this->label33->TabIndex = 25;
			this->label33->Text = L"⯁";
			this->label33->Visible = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(3, 224);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(16, 17);
			this->label32->TabIndex = 24;
			this->label32->Text = L"7";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(69, 196);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(76, 17);
			this->label31->TabIndex = 23;
			this->label31->Text = L"500 000 Ft";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(47, 196);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(16, 17);
			this->label30->TabIndex = 22;
			this->label30->Text = L"⯁";
			this->label30->Visible = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(3, 196);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(16, 17);
			this->label29->TabIndex = 21;
			this->label29->Text = L"8";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(69, 168);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(76, 17);
			this->label28->TabIndex = 20;
			this->label28->Text = L"800 000 Ft";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(47, 168);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(16, 17);
			this->label27->TabIndex = 19;
			this->label27->Text = L"⯁";
			this->label27->Visible = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(3, 168);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(16, 17);
			this->label26->TabIndex = 18;
			this->label26->Text = L"9";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label25->Location = System::Drawing::Point(69, 140);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(100, 17);
			this->label25->TabIndex = 17;
			this->label25->Text = L"1 500 000 Ft";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(47, 140);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(16, 17);
			this->label24->TabIndex = 16;
			this->label24->Text = L"⯁";
			this->label24->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label23->Location = System::Drawing::Point(3, 140);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(26, 17);
			this->label23->TabIndex = 15;
			this->label23->Text = L"10";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(69, 112);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(88, 17);
			this->label22->TabIndex = 14;
			this->label22->Text = L"3 000 000 Ft";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(47, 112);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(16, 17);
			this->label21->TabIndex = 13;
			this->label21->Text = L"⯁";
			this->label21->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(3, 112);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(24, 17);
			this->label20->TabIndex = 12;
			this->label20->Text = L"11";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(69, 84);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(88, 17);
			this->label19->TabIndex = 11;
			this->label19->Text = L"5 000 000 Ft";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(47, 84);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(16, 17);
			this->label18->TabIndex = 10;
			this->label18->Text = L"⯁";
			this->label18->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(3, 84);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(24, 17);
			this->label17->TabIndex = 9;
			this->label17->Text = L"12";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(69, 56);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(96, 17);
			this->label16->TabIndex = 8;
			this->label16->Text = L"10 000 000 Ft";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(47, 56);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(16, 17);
			this->label15->TabIndex = 7;
			this->label15->Text = L"⯁";
			this->label15->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(3, 56);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(24, 17);
			this->label14->TabIndex = 6;
			this->label14->Text = L"13";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(69, 28);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(96, 17);
			this->label13->TabIndex = 5;
			this->label13->Text = L"20 000 000 Ft";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(47, 28);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(16, 17);
			this->label12->TabIndex = 4;
			this->label12->Text = L"⯁";
			this->label12->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 28);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(24, 17);
			this->label11->TabIndex = 3;
			this->label11->Text = L"14";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(69, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(109, 17);
			this->label10->TabIndex = 2;
			this->label10->Text = L"40 000 000 Ft";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(47, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 17);
			this->label9->TabIndex = 1;
			this->label9->Text = L"⯁";
			this->label9->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(3, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 17);
			this->label8->TabIndex = 0;
			this->label8->Text = L"15";
			// 
			// jatek
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1003, 495);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
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
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
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

						MessageBox::Show(igazinev + " ön megnyerte a játék fődíját ami nem más mint " + nyeremeny[nehezseg] + " FT!",
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
						if (nehezseg == 1) {
							label51->Visible = true;
						}if (nehezseg == 2) {
							label48->Visible = true;
						}if (nehezseg == 3) {
							label45->Visible = true;
						}if (nehezseg == 4) {
							label42->Visible = true;
						}if (nehezseg == 5) {
							label39->Visible = true;
						}if (nehezseg == 6) {
							label36->Visible = true;
						}if (nehezseg == 7) {
							label33->Visible = true;
						}if (nehezseg == 8) {
							label30->Visible = true;
						}if (nehezseg == 9) {
							label27->Visible = true;
						}if (nehezseg == 10) {
							label24->Visible = true;
						}if (nehezseg == 11) {
							label21->Visible = true;
						}if (nehezseg == 12) {
							label18->Visible = true;
						}if (nehezseg == 14) {
							label15->Visible = true;
						}if (nehezseg == 14) {
							label12->Visible = true;
						}if (nehezseg == 15) {
							label9->Visible = true;
						}
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

						msclr::interop::marshal_context context;
						label1->Text = marshal_as<String^>(std::to_string(conductor->nehez));
						label2->Text = marshal_as<String^>(conductor->kerdes);
						label3->Text = marshal_as<String^>(conductor->kategoria);
						button5->Text = marshal_as<String^>(conductor->a);
						button6->Text = marshal_as<String^>(conductor->b);
						button7->Text = marshal_as<String^>(conductor->c);
						button8->Text = marshal_as<String^>(conductor->d);
						button5->Visible = true; button6->Visible = true; button7->Visible = true; button8->Visible = true;
						label4->Visible = true; label5->Visible = true; label6->Visible = true; label7->Visible = true;
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
		/*if (getFelezes() == 0)
		{
			MessageBox::Show("Ezt a segítséget már elhasználta!",
				"Hiba lépett fel!", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		else
		{*/
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
				label6->Visible = false;
				label7->Visible = false;
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
				label5->Visible = false;
				label7->Visible = false;
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
				label6->Visible = false;
				label5->Visible = false;
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
				label4->Visible = false;
				label7->Visible = false;
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
				label4->Visible = false;
				label6->Visible = false;
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
				label4->Visible = false;
				label5->Visible = false;
				if (conductor->valasz.compare("C") == 0)
				{
					setRossz('D');
				}
				else
				{
					setRossz('C');
				}
			}
		/*}*/
		button1->Enabled = false;
		label1->Focus();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		//if (getTelefont() == 0)
		//{
		//	//std::cout << "A telefon segítséget már elhasználta" << std::endl;
		//	MessageBox::Show("Ezt a segítséget már elhasználta!",
		//		"Hiba lépett fel!", MessageBoxButtons::OK,
		//		MessageBoxIcon::Error);
		//}
		//else
		//{
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
		//}
		button2->Enabled = false;
		label1->Focus();
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		/*if (getKozonseg() == 0)
		{
			MessageBox::Show("Ezt a segítséget már elhasználta!",
				"Hiba lépett fel!", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		else {*/
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
		//}
		button3->Enabled = false;
		label1->Focus();
	}
	};
}
