#pragma once
#include"expenses.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class dashboard : public System::Windows::Forms::Form
	{
	public:
		dashboard(void)
		{
			InitializeComponent();
			expensePanel->Hide();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Panel^ panel1;
		String^ username;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Panel^ panelUserIcon;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel9;



	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;





	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ expensePanel;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label44;












	private: System::Windows::Forms::Label^ label19;
	


	private:
		/// <summary>
		

		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->expensePanel = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->expensePanel->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(328, 773);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel1_Paint);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(94, 664);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(156, 61);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Sign Out";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(0, 529);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(328, 50);
			this->button6->TabIndex = 8;
			this->button6->Text = L"See Stats";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(0, 473);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(328, 50);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Set Goals";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(0, 417);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(328, 50);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Expenses";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &dashboard::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(0, 361);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(328, 50);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Income";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(0, 305);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(328, 50);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Transactions";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(0, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(328, 50);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Dashboard";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &dashboard::button1_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(100, 55);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(118, 109);
			this->panel3->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 47));
			this->label3->Location = System::Drawing::Point(20, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 90);
			this->label3->TabIndex = 0;
			this->label3->Text = L"J";
			this->label3->Click += gcnew System::EventHandler(this, &dashboard::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(97, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Jane Doe";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->expensePanel);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel10);
			this->panel2->Controls->Add(this->panel9);
			this->panel2->Controls->Add(this->panel8);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(328, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1154, 773);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel2_Paint);
			// 
			// expensePanel
			// 
			this->expensePanel->BackColor = System::Drawing::SystemColors::Control;
			this->expensePanel->Controls->Add(this->label26);
			this->expensePanel->Controls->Add(this->label27);
			this->expensePanel->Controls->Add(this->label28);
			this->expensePanel->Controls->Add(this->label29);
			this->expensePanel->Controls->Add(this->label30);
			this->expensePanel->Controls->Add(this->label31);
			this->expensePanel->Controls->Add(this->label32);
			this->expensePanel->Controls->Add(this->label33);
			this->expensePanel->Controls->Add(this->panel11);
			this->expensePanel->Controls->Add(this->panel12);
			this->expensePanel->Controls->Add(this->panel13);
			this->expensePanel->Controls->Add(this->panel14);
			this->expensePanel->Controls->Add(this->panel15);
			this->expensePanel->Controls->Add(this->label43);
			this->expensePanel->Controls->Add(this->panel16);
			this->expensePanel->Controls->Add(this->label44);
			this->expensePanel->Location = System::Drawing::Point(0, 0);
			this->expensePanel->Name = L"expensePanel";
			this->expensePanel->Size = System::Drawing::Size(1154, 773);
			this->expensePanel->TabIndex = 1;
			this->expensePanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::expensePanel_Paint);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(609, 623);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(50, 30);
			this->label26->TabIndex = 32;
			this->label26->Text = L"XXX";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(609, 576);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(50, 30);
			this->label27->TabIndex = 31;
			this->label27->Text = L"XXX";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(448, 665);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(143, 30);
			this->label28->TabIndex = 30;
			this->label28->Text = L"Total Expenses:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(448, 623);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(143, 30);
			this->label29->TabIndex = 29;
			this->label29->Text = L"Total Expenses:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(448, 576);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(143, 30);
			this->label30->TabIndex = 28;
			this->label30->Text = L"Total Expenses:";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(430, 527);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(243, 32);
			this->label31->TabIndex = 27;
			this->label31->Text = L"Highest Contributors";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label32->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(277, 491);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(50, 30);
			this->label32->TabIndex = 26;
			this->label32->Text = L"XXX";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(102, 491);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(143, 30);
			this->label33->TabIndex = 25;
			this->label33->Text = L"Total Expenses:";
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->label34);
			this->panel11->Controls->Add(this->label35);
			this->panel11->Location = System::Drawing::Point(773, 346);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(180, 97);
			this->panel11->TabIndex = 24;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->label34->Location = System::Drawing::Point(1, 32);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(176, 35);
			this->label34->TabIndex = 2;
			this->label34->Text = L"Transportation";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(23, 29);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(0, 38);
			this->label35->TabIndex = 1;
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->label36);
			this->panel12->Controls->Add(this->label37);
			this->panel12->Location = System::Drawing::Point(435, 342);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(180, 97);
			this->panel12->TabIndex = 23;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->label36->Location = System::Drawing::Point(7, 31);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(170, 35);
			this->label36->TabIndex = 2;
			this->label36->Text = L"Entertainment";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(23, 29);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(0, 38);
			this->label37->TabIndex = 1;
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->label38);
			this->panel13->Controls->Add(this->label39);
			this->panel13->Location = System::Drawing::Point(102, 342);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(180, 97);
			this->panel13->TabIndex = 22;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(42, 29);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(98, 38);
			this->label38->TabIndex = 2;
			this->label38->Text = L"Health";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(23, 29);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(0, 38);
			this->label39->TabIndex = 1;
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->label40);
			this->panel14->Location = System::Drawing::Point(773, 200);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(180, 97);
			this->panel14->TabIndex = 21;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(37, 29);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(109, 38);
			this->label40->TabIndex = 1;
			this->label40->Text = L"Utilities";
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->label41);
			this->panel15->Location = System::Drawing::Point(435, 200);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(180, 97);
			this->panel15->TabIndex = 20;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(53, 29);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(79, 38);
			this->label41->TabIndex = 1;
			this->label41->Text = L"Food";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label43->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(609, 665);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(50, 30);
			this->label43->TabIndex = 33;
			this->label43->Text = L"XXX";
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->label42);
			this->panel16->Location = System::Drawing::Point(102, 200);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(180, 97);
			this->panel16->TabIndex = 19;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(33, 29);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(120, 38);
			this->label42->TabIndex = 0;
			this->label42->Text = L"Housing";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(393, 77);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(338, 51);
			this->label44->TabIndex = 18;
			this->label44->Text = L"Choose a Category";
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label6);
			this->panel7->Controls->Add(this->label9);
			this->panel7->Location = System::Drawing::Point(533, 424);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(195, 91);
			this->panel7->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(75, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 28);
			this->label6->TabIndex = 2;
			this->label6->Text = L"XXXX";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(50, 7);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 32);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Balance";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label8);
			this->panel6->Controls->Add(this->label5);
			this->panel6->Location = System::Drawing::Point(261, 424);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(195, 91);
			this->panel6->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(75, 55);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 28);
			this->label8->TabIndex = 2;
			this->label8->Text = L"XXXX";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 7);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(170, 32);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Total Expenses";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel10
			// 
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel10->Controls->Add(this->label17);
			this->panel10->Controls->Add(this->label16);
			this->panel10->Location = System::Drawing::Point(959, 207);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(155, 138);
			this->panel10->TabIndex = 0;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label17->Location = System::Drawing::Point(64, 75);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(40, 25);
			this->label17->TabIndex = 1;
			this->label17->Text = L"XX";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(7, 30);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(141, 28);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Used Income%";
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->label15);
			this->panel9->Controls->Add(this->label14);
			this->panel9->Controls->Add(this->label13);
			this->panel9->Controls->Add(this->label12);
			this->panel9->Controls->Add(this->label11);
			this->panel9->Controls->Add(this->label10);
			this->panel9->Location = System::Drawing::Point(744, 432);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(407, 341);
			this->panel9->TabIndex = 6;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(19, 251);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(306, 27);
			this->label15->TabIndex = 5;
			this->label15->Text = L"Content Creation                       XXX";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(19, 213);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(306, 27);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Content Creation                       XXX";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(19, 166);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(306, 27);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Content Creation                       XXX";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(19, 122);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(306, 27);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Content Creation                       XXX";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(19, 77);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(306, 27);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Content Creation                       XXX";
			this->label11->Click += gcnew System::EventHandler(this, &dashboard::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(48, 22);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(142, 28);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Recent History:";
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label25);
			this->panel8->Controls->Add(this->label23);
			this->panel8->Controls->Add(this->label24);
			this->panel8->Controls->Add(this->label22);
			this->panel8->Controls->Add(this->label21);
			this->panel8->Controls->Add(this->label20);
			this->panel8->Controls->Add(this->label19);
			this->panel8->Location = System::Drawing::Point(0, 532);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(728, 238);
			this->panel8->TabIndex = 5;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label25->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(92, 181);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(562, 31);
			this->label25->TabIndex = 8;
			this->label25->Text = L"Fun fact  is that we are trying to do everything from scratch, YAYY !!!";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(3, 181);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(93, 28);
			this->label23->TabIndex = 7;
			this->label23->Text = L"Fun Fact: ";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(5, 139);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(305, 27);
			this->label24->TabIndex = 6;
			this->label24->Text = L"Shopping                                          ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(5, 98);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(243, 28);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Highest Expense Category:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(35, 110);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 17);
			this->label21->TabIndex = 3;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(5, 54);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(306, 27);
			this->label20->TabIndex = 2;
			this->label20->Text = L"Content Creation                       XXX";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(5, 10);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(222, 28);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Biggest Expense Record:";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Location = System::Drawing::Point(1, 424);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(179, 91);
			this->panel5->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(62, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 28);
			this->label7->TabIndex = 1;
			this->label7->Text = L"XXXX";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 32);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Total Income";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label18);
			this->panel4->Location = System::Drawing::Point(68, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(831, 408);
			this->panel4->TabIndex = 2;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->label18->Location = System::Drawing::Point(284, 9);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(245, 32);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Income V/S Expenses";
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(954, 82);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(160, 64);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Delete Record";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(954, 12);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(160, 64);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Set Entry";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45));
			this->label1->Location = System::Drawing::Point(26, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 85);
			this->label1->TabIndex = 0;
			this->label1->Text = L"J";
			// 
			// dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1482, 773);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"dashboard";
			this->Text = L"MyForm1";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->expensePanel->ResumeLayout(false);
			this->expensePanel->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);

		}


		
#pragma endregion

		
	
	

private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//expenses^ exp = gcnew expenses(this);
	//exp->Show();
	expensePanel->Show();
	
}

private: System::Void expensePanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	expensePanel->Hide();
}
};
}
