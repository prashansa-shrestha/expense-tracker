#pragma once
#include "set1.h"


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(980, 555);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(522, 194);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 50);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Sign in page";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(111, 432);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(162, 49);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Submit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::submit);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(646, 442);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 49);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Check Status";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(206, 358);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Enter the Amount";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Housing", L"Clothing", L"Food" });
			this->comboBox1->Location = System::Drawing::Point(206, 284);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(165, 24);
			this->comboBox1->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->checkBox3);
			this->panel2->Controls->Add(this->checkBox2);
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(81, 104);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(284, 140);
			this->panel2->TabIndex = 1;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(30, 101);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(79, 21);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Monthly";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(30, 74);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(76, 21);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Weekly";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(30, 47);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(61, 21);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Daily";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Select";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(362, 358);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 23);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Rs.";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(73, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(280, 61);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Criteria:";

			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(87, 355);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 29);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Set Amount:";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(60, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(280, 61);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Set Your Goals ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 553);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "Enter the Amount") {
			textBox1->Text = " ";

		}
		else {
			textBox1->Text = " ";

		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		set1^ formSet1 = gcnew set1();

		// Show the set1 form
		formSet1->ShowDialog();
	}
	private: System::Void submit(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedIndex == -1) {
			MessageBox::Show("Please select a category.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		MessageBox::Show("The data has been submitted.", "Submission Confirmation", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


	}
};
};