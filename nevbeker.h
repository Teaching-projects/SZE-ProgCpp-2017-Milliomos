#ifndef NEVBEKER_H
#define NEVBEKER_H

#pragma once



#include <string>
#include "jatek.h"

namespace Loimgui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for nevbeker
	/// </summary>
	public ref class nevbeker : public System::Windows::Forms::Form
	{
	public:
		nevbeker(void)
		{
			InitializeComponent();
			dbnevplus();
			//
			//TODO: Add the constructor code here
			//
		}
		static int getdbnev() {
			return dbnev;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~nevbeker()
		{
			if (components)
			{
				delete components;
			}
			dbnev--;
		}
		static int dbnev = 0;
		void dbnevplus() {
			dbnev++;
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  okbutton;

	private: System::Windows::Forms::Button^  megsebutton;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->okbutton = (gcnew System::Windows::Forms::Button());
			this->megsebutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(67, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Neve : ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(176, 48);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(147, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &nevbeker::textBox1_KeyDown);
			// 
			// okbutton
			// 
			this->okbutton->Location = System::Drawing::Point(248, 114);
			this->okbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->okbutton->Name = L"okbutton";
			this->okbutton->Size = System::Drawing::Size(97, 30);
			this->okbutton->TabIndex = 2;
			this->okbutton->TabStop = false;
			this->okbutton->Text = L"Ok";
			this->okbutton->UseVisualStyleBackColor = true;
			this->okbutton->Click += gcnew System::EventHandler(this, &nevbeker::button1_Click);
			// 
			// megsebutton
			// 
			this->megsebutton->Location = System::Drawing::Point(361, 114);
			this->megsebutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->megsebutton->Name = L"megsebutton";
			this->megsebutton->Size = System::Drawing::Size(97, 30);
			this->megsebutton->TabIndex = 3;
			this->megsebutton->TabStop = false;
			this->megsebutton->Text = L"M�gse";
			this->megsebutton->UseVisualStyleBackColor = true;
			this->megsebutton->Click += gcnew System::EventHandler(this, &nevbeker::button2_Click);
			// 
			// nevbeker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 167);
			this->Controls->Add(this->megsebutton);
			this->Controls->Add(this->okbutton);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"nevbeker";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Adja meg a nev�t!";
			this->Load += gcnew System::EventHandler(this, &nevbeker::nevbeker_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void nevbeker_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
		
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "") {
		MessageBox::Show("�res mez�t nem adhat meg!",
			"Hiba l�pett fel!", MessageBoxButtons::OK,
			MessageBoxIcon::Error);
		}
	else {
			jatek^ game = gcnew jatek(textBox1->Text);
			game->Visible = true;
			this->Close();
	}
}
//private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
//
//}
private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter) {
		if (textBox1->Text == "") {
			MessageBox::Show("�res mez�t nem adhat meg!",
				"Hiba l�pett fel!", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		else {
				jatek^ game = gcnew jatek(textBox1->Text);
				game->Visible = true;
				this->Close();
		}
	}
}
};
}
#endif // !NEVBEKER_H