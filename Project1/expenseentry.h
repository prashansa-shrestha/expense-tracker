#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for expenseentry
	/// </summary>
	public ref class expenseentry : public System::Windows::Forms::Form
	{
	public:
		expenseentry(void)
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
		~expenseentry()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::Button^ addentrybtn;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->addentrybtn = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(172, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Expense Entry";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(73, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Title";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(33, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Category";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(42, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Amount";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(70, 246);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 25);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Date";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(149, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(266, 24);
			this->textBox1->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(149, 188);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(266, 24);
			this->textBox3->TabIndex = 9;
			// 
			// addentrybtn
			// 
			this->addentrybtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addentrybtn->Location = System::Drawing::Point(212, 303);
			this->addentrybtn->Name = L"addentrybtn";
			this->addentrybtn->Size = System::Drawing::Size(87, 47);
			this->addentrybtn->TabIndex = 12;
			this->addentrybtn->Text = L"Add";
			this->addentrybtn->UseVisualStyleBackColor = true;
			this->addentrybtn->Click += gcnew System::EventHandler(this, &expenseentry::addentrybtnn_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->dateTimePicker1->Location = System::Drawing::Point(149, 244);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(1);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(266, 27);
			this->dateTimePicker1->TabIndex = 13;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &expenseentry::dateTimePicker1_ValueChanged);
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->domainUpDown1->Items->Add(L"Housing");
			this->domainUpDown1->Items->Add(L"Food");
			this->domainUpDown1->Items->Add(L"Utilities");
			this->domainUpDown1->Items->Add(L"Health");
			this->domainUpDown1->Items->Add(L"Entertainment");
			this->domainUpDown1->Items->Add(L"Groceries");
			this->domainUpDown1->Location = System::Drawing::Point(149, 136);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(266, 26);
			this->domainUpDown1->TabIndex = 14;
			this->domainUpDown1->Text = L"Housing";
			this->domainUpDown1->SelectedItemChanged += gcnew System::EventHandler(this, &expenseentry::domainUpDown1_SelectedItemChanged);
			// 
			// expenseentry
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(499, 375);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->addentrybtn);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"expenseentry";
			this->Text = L"expenseentry";
			this->Load += gcnew System::EventHandler(this, &expenseentry::expenseentry_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void addentrybtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
public:
	

	// Public function to get expense data as an array
	array<System::Object^>^ GetExpenseData()
	{
		array<System::Object^>^ expenseData = gcnew array<System::Object^>(5);
		expenseData[0] = textBox1->Text;
		expenseData[1] = domainUpDown1->Text;
		expenseData[2] = textBox3->Text;
		expenseData[3] = dateTimePicker1->Value;
		return expenseData;
	}
private: System::Void addentrybtnn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Close();

}
private: System::Void expenseentry_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
