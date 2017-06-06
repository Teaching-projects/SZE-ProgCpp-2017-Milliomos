#pragma once
#include "jatek.h"

namespace Loimgui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for toplista
	/// </summary>
	public ref class toplista : public System::Windows::Forms::Form
	{
	public:
		toplista(void)
		{
			InitializeComponent();
			toplistafeltolt();
			dbtopplus();
			//
			//TODO: Add the constructor code here
			//
		}
		static int getdbtop() {
			return dbtop;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~toplista()
		{
			if (components)
			{
				delete components;
			}
			dbtop--;
		}
		static int dbtop = 0;
		void dbtopplus() {
			dbtop++;
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
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
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Button^  button1;
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
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->label44, 0, 10);
			this->tableLayoutPanel1->Controls->Add(this->label43, 0, 10);
			this->tableLayoutPanel1->Controls->Add(this->label42, 0, 10);
			this->tableLayoutPanel1->Controls->Add(this->label41, 0, 10);
			this->tableLayoutPanel1->Controls->Add(this->label40, 3, 9);
			this->tableLayoutPanel1->Controls->Add(this->label39, 2, 9);
			this->tableLayoutPanel1->Controls->Add(this->label38, 1, 9);
			this->tableLayoutPanel1->Controls->Add(this->label37, 0, 9);
			this->tableLayoutPanel1->Controls->Add(this->label36, 3, 8);
			this->tableLayoutPanel1->Controls->Add(this->label35, 2, 8);
			this->tableLayoutPanel1->Controls->Add(this->label34, 1, 8);
			this->tableLayoutPanel1->Controls->Add(this->label33, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->label32, 3, 7);
			this->tableLayoutPanel1->Controls->Add(this->label31, 2, 7);
			this->tableLayoutPanel1->Controls->Add(this->label30, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->label29, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->label28, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->label27, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->label26, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->label25, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->label24, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->label23, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->label22, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->label21, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label20, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->label19, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->label18, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->label17, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label16, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->label15, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->label14, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label13, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label12, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->label11, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->label10, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label9, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label8, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->label7, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label6, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label4, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(28, 31);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 11;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(514, 324);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &toplista::tableLayoutPanel1_Paint);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(131, 290);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(0, 17);
			this->label44->TabIndex = 43;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(3, 290);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(0, 17);
			this->label43->TabIndex = 42;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(387, 290);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(0, 17);
			this->label42->TabIndex = 41;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(259, 290);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(0, 17);
			this->label41->TabIndex = 40;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(387, 261);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(0, 17);
			this->label40->TabIndex = 39;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(259, 261);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(0, 17);
			this->label39->TabIndex = 38;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(131, 261);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(0, 17);
			this->label38->TabIndex = 37;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(3, 261);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(0, 17);
			this->label37->TabIndex = 36;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(387, 232);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(0, 17);
			this->label36->TabIndex = 35;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(259, 232);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(0, 17);
			this->label35->TabIndex = 34;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(131, 232);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(0, 17);
			this->label34->TabIndex = 33;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(3, 232);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(0, 17);
			this->label33->TabIndex = 32;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(387, 203);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(0, 17);
			this->label32->TabIndex = 31;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(259, 203);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(0, 17);
			this->label31->TabIndex = 30;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(131, 203);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(0, 17);
			this->label30->TabIndex = 29;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(3, 203);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(0, 17);
			this->label29->TabIndex = 28;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(387, 174);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(0, 17);
			this->label28->TabIndex = 27;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(259, 174);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(0, 17);
			this->label27->TabIndex = 26;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(131, 174);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 17);
			this->label26->TabIndex = 25;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(3, 174);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 17);
			this->label25->TabIndex = 24;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(387, 145);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(0, 17);
			this->label24->TabIndex = 23;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(259, 145);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 17);
			this->label23->TabIndex = 22;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(131, 145);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(0, 17);
			this->label22->TabIndex = 21;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(3, 145);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 17);
			this->label21->TabIndex = 20;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(387, 116);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 17);
			this->label20->TabIndex = 19;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(259, 116);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 17);
			this->label19->TabIndex = 18;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(131, 116);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 17);
			this->label18->TabIndex = 17;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(3, 116);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 17);
			this->label17->TabIndex = 16;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(387, 87);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 17);
			this->label16->TabIndex = 15;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(259, 87);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 17);
			this->label15->TabIndex = 14;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(131, 87);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 17);
			this->label14->TabIndex = 13;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(3, 87);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 17);
			this->label13->TabIndex = 12;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(387, 58);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 17);
			this->label12->TabIndex = 11;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(259, 58);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 17);
			this->label11->TabIndex = 10;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(131, 58);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 17);
			this->label10->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 17);
			this->label9->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(387, 29);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 17);
			this->label8->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(259, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 17);
			this->label7->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(131, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 17);
			this->label6->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 17);
			this->label5->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(387, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Idõ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(259, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Pénzösszeg";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(131, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Név";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Helyezés";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(418, 372);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 30);
			this->button1->TabIndex = 1;
			this->button1->TabStop = false;
			this->button1->Text = L"Vissza";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &toplista::button1_Click);
			// 
			// toplista
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(609, 424);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"toplista";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"toplista";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void toplistafeltolt(void) {
			std::string token;
			std::string line;
			
			rangsordb = 0;
			std::ifstream toplista("toplista.txt");
			if(toplista.is_open()) {
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
			for (i = 0; i < rangsordb; i++) {
				msclr::interop::marshal_context context;				
				
				if (i == 0) {
					label5->Text = marshal_as<String^>(std::to_string(adatok[i].helyezes));
					label6->Text = marshal_as<String^>(adatok[i].nev);
					label7->Text = marshal_as<String^>(std::to_string(adatok[i].nyeremeny));
					label8->Text = marshal_as<String^>(std::to_string(adatok[i].ido));
				}
				if (i == 1) {
					label9->Text = marshal_as<String^>(std::to_string(adatok[i].helyezes));
					label10->Text = marshal_as<String^>(adatok[i].nev);
					label11->Text = marshal_as<String^>(std::to_string(adatok[i].nyeremeny));
					label12->Text = marshal_as<String^>(std::to_string(adatok[i].ido));
				}
				if (i == 2) {
					label13->Text = marshal_as<String^>(std::to_string(adatok[i].helyezes));
					label14->Text = marshal_as<String^>(adatok[i].nev);
					label15->Text = marshal_as<String^>(std::to_string(adatok[i].nyeremeny));
					label16->Text = marshal_as<String^>(std::to_string(adatok[i].ido));
				}
				if (i == 3) {
					label17->Text = marshal_as<String^>(std::to_string(adatok[i].helyezes));
					label18->Text = marshal_as<String^>(adatok[i].nev);
					label19->Text = marshal_as<String^>(std::to_string(adatok[i].nyeremeny));
					label20->Text = marshal_as<String^>(std::to_string(adatok[i].ido));
				}
				if (i == 4) {
					label21->Text = marshal_as<String^>(std::to_string(adatok[i].helyezes));
					label22->Text = marshal_as<String^>(adatok[i].nev);
					label23->Text = marshal_as<String^>(std::to_string(adatok[i].nyeremeny));
					label24->Text = marshal_as<String^>(std::to_string(adatok[i].ido));
				}
				if (i == 5) {
					label25->Text = marshal_as<String^>(std::to_string(adatok[i].helyezes));
					label26->Text = marshal_as<String^>(adatok[i].nev);
					label27->Text = marshal_as<String^>(std::to_string(adatok[i].nyeremeny));
					label28->Text = marshal_as<String^>(std::to_string(adatok[i].ido));
				}
				if (i == 6) {
					label29->Text = marshal_as<String^>(std::to_string(adatok[i].helyezes));
					label30->Text = marshal_as<String^>(adatok[i].nev);
					label31->Text = marshal_as<String^>(std::to_string(adatok[i].nyeremeny));
					label32->Text = marshal_as<String^>(std::to_string(adatok[i].ido));
				}
				if (i == 7) {
					label33->Text = marshal_as<String^>(std::to_string(adatok[i].helyezes));
					label34->Text = marshal_as<String^>(adatok[i].nev);
					label35->Text = marshal_as<String^>(std::to_string(adatok[i].nyeremeny));
					label36->Text = marshal_as<String^>(std::to_string(adatok[i].ido));
				}
				if (i == 8) {
					label37->Text = marshal_as<String^>(std::to_string(adatok[i].helyezes));
					label38->Text = marshal_as<String^>(adatok[i].nev);
					label39->Text = marshal_as<String^>(std::to_string(adatok[i].nyeremeny));
					label40->Text = marshal_as<String^>(std::to_string(adatok[i].ido));
				}
				if (i == 9) {
					label43->Text = marshal_as<String^>(std::to_string(adatok[i].helyezes));
					label44->Text = marshal_as<String^>(adatok[i].nev);
					label41->Text = marshal_as<String^>(std::to_string(adatok[i].nyeremeny));
					label42->Text = marshal_as<String^>(std::to_string(adatok[i].ido));
				}
			}
			
		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
};
}
