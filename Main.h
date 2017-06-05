#ifndef MAIN_H
#define MAIN_H


#pragma once
#include "jatek.h"
#include <iostream>
#include "nevbeker.h"
#include "toplista.h"

namespace Loimgui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ujKerdesbutton;
	protected:

	private: System::Windows::Forms::Button^  utmutatbutton;
	private: System::Windows::Forms::Button^  mainKilepbutton;
	protected:


	private: System::Windows::Forms::Button^  szabalybutton;

	private: System::Windows::Forms::Button^  jatekbutton;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  visszabutton;



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
		void InitializeComponent(void)
		{
			this->ujKerdesbutton = (gcnew System::Windows::Forms::Button());
			this->utmutatbutton = (gcnew System::Windows::Forms::Button());
			this->mainKilepbutton = (gcnew System::Windows::Forms::Button());
			this->szabalybutton = (gcnew System::Windows::Forms::Button());
			this->jatekbutton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->visszabutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ujKerdesbutton
			// 
			this->ujKerdesbutton->Location = System::Drawing::Point(241, 313);
			this->ujKerdesbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ujKerdesbutton->Name = L"ujKerdesbutton";
			this->ujKerdesbutton->Size = System::Drawing::Size(335, 33);
			this->ujKerdesbutton->TabIndex = 11;
			this->ujKerdesbutton->Text = L"Toplista";
			this->ujKerdesbutton->UseVisualStyleBackColor = true;
			this->ujKerdesbutton->Click += gcnew System::EventHandler(this, &Main::ujKerdesbutton_Click);
			// 
			// utmutatbutton
			// 
			this->utmutatbutton->Location = System::Drawing::Point(241, 258);
			this->utmutatbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->utmutatbutton->Name = L"utmutatbutton";
			this->utmutatbutton->Size = System::Drawing::Size(335, 33);
			this->utmutatbutton->TabIndex = 10;
			this->utmutatbutton->Text = L"Útmutató a játékhoz";
			this->utmutatbutton->UseVisualStyleBackColor = true;
			this->utmutatbutton->Click += gcnew System::EventHandler(this, &Main::button4_Click);
			// 
			// mainKilepbutton
			// 
			this->mainKilepbutton->Location = System::Drawing::Point(241, 368);
			this->mainKilepbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mainKilepbutton->Name = L"mainKilepbutton";
			this->mainKilepbutton->Size = System::Drawing::Size(335, 33);
			this->mainKilepbutton->TabIndex = 9;
			this->mainKilepbutton->Text = L"Kilépés";
			this->mainKilepbutton->UseVisualStyleBackColor = true;
			this->mainKilepbutton->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// szabalybutton
			// 
			this->szabalybutton->Location = System::Drawing::Point(241, 201);
			this->szabalybutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->szabalybutton->Name = L"szabalybutton";
			this->szabalybutton->Size = System::Drawing::Size(335, 33);
			this->szabalybutton->TabIndex = 8;
			this->szabalybutton->Text = L"Szabályzat";
			this->szabalybutton->UseVisualStyleBackColor = true;
			this->szabalybutton->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// jatekbutton
			// 
			this->jatekbutton->Location = System::Drawing::Point(241, 144);
			this->jatekbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->jatekbutton->Name = L"jatekbutton";
			this->jatekbutton->Size = System::Drawing::Size(335, 33);
			this->jatekbutton->TabIndex = 7;
			this->jatekbutton->Text = L"Játék";
			this->jatekbutton->UseVisualStyleBackColor = true;
			this->jatekbutton->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(139, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(565, 32);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Üdvözöljük a Legyen Ön is Milliomosban";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(215, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(12, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L".";
			this->label2->Visible = false;
			// 
			// visszabutton
			// 
			this->visszabutton->Location = System::Drawing::Point(699, 368);
			this->visszabutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->visszabutton->Name = L"visszabutton";
			this->visszabutton->Size = System::Drawing::Size(143, 33);
			this->visszabutton->TabIndex = 13;
			this->visszabutton->Text = L"Vissza";
			this->visszabutton->UseVisualStyleBackColor = true;
			this->visszabutton->Visible = false;
			this->visszabutton->Click += gcnew System::EventHandler(this, &Main::button6_Click);
			// 
			// Main
			// 
			this->AccessibleName = L"Main";
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 446);
			this->Controls->Add(this->visszabutton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ujKerdesbutton);
			this->Controls->Add(this->utmutatbutton);
			this->Controls->Add(this->mainKilepbutton);
			this->Controls->Add(this->szabalybutton);
			this->Controls->Add(this->jatekbutton);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Legyen Ön is Milliomos";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Visible = false;
	jatekbutton->Visible = false;
	szabalybutton->Visible = false;
	mainKilepbutton->Visible = false;
	utmutatbutton->Visible = false;
	ujKerdesbutton->Visible = false;
	label2->Visible = true;
	this->Text = L"Szabályzat";
	this->label2->Text = L"A székbe kerülõ játékosnak 15 egyre nehezedõ kérdést tesznek fel.\nA kérdések feleletválasztósak: négy válaszlehetõséget is megadnak,\nmelyek közül a játékosnak kell kiválasztania a helyeset.\n(A négy válaszlehetõséget a latin ábécé elsõ négy betûjével jelölik.)\nAz elsõ kérdés helyes megválaszolásával a játékos 5 000 Ft-ot nyer.\nA többi kérdéssel egyre több pénzhez jut a játékos.\nNagyjából minden kérdés után megduplázódik a nyeremény.";
	visszabutton->Visible = true;
	
}

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Visible = true;
	jatekbutton->Visible = true;
	szabalybutton->Visible = true;
	mainKilepbutton->Visible = true;
	utmutatbutton->Visible = true;
	ujKerdesbutton->Visible = true;
	label2->Visible = false;	
	this->Text = L"Legyen Ön is Milliomos";
	visszabutton->Visible = false;
}
private: System::Void Main_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Visible = false;
	jatekbutton->Visible = false;
	szabalybutton->Visible = false;
	mainKilepbutton->Visible = false;
	utmutatbutton->Visible = false;
	ujKerdesbutton->Visible = false;
	label2->Visible = true;
	this->label2->Text = L"A játék során használhat segítségeket melyek a következõk:\n\nKözönség segítség: a 'K' betû válaszmegadással lehet kérvényezni a közönség\nsegítségét amely százalékos arányban meg fogja adni, hogy ki mire szavazott,\ns milyen arányban.\n\nTelefonos segítség: a telefonos segítséget a 'T' betû válaszmegadással lehet\nalkalmazni, ekkor megadhatja, hogy kit akar felhívni, s utána a kívánt személy\nmegadja az általa vélt helyes válasz betûjelét.\n\nFelezés segítség: az 'F' betû válaszmegadással tudja kérni ezt a segítséget\namely után, a négy féle válaszlehetõségbõl kettõ lesz. Magyarán mondva lefelezi.";
	this->Text = L"Útmutató a játékhoz";
	visszabutton->Visible = true;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	nevbeker^ nev = gcnew nevbeker();
	nev->Visible = true;
	
}
private: System::Void ujKerdesbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	toplista^ t = gcnew toplista();
	t->Visible = true;
}
};
}
#endif // !MAIN_H