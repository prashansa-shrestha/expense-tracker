namespace Project1 {

			using namespace System;
			using namespace System::ComponentModel;
			using namespace System::Collections;
			using namespace System::Windows::Forms;
			using namespace System::Data;
			using namespace System::Drawing;

			/// <summary>
			/// Summary for set1
			/// </summary>
			public ref class set1 : public System::Windows::Forms::Form
			{
			public:
				set1(void)
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
				~set1()
				{
					if (components)
					{
						delete components;
					}
				}
			private: System::Windows::Forms::Panel^ panel1;
			protected:
			private: System::Windows::Forms::Label^ label1;
			private: System::Windows::Forms::Label^ label3;
			private: System::Windows::Forms::Label^ label2;
			private: System::Windows::Forms::Label^ label4;
			private: System::Windows::Forms::Label^ label11;
			private: System::Windows::Forms::Label^ label10;
			private: System::Windows::Forms::Label^ label9;

			private: System::Windows::Forms::Label^ label7;
			private: System::Windows::Forms::Label^ label6;
			private: System::Windows::Forms::Label^ label5;
			private: System::Windows::Forms::Label^ label16;
			private: System::Windows::Forms::Label^ label15;
			private: System::Windows::Forms::Label^ label14;
			private: System::Windows::Forms::Label^ label13;
			private: System::Windows::Forms::Label^ label12;
			private: System::Windows::Forms::Label^ label8;
			private: System::Windows::Forms::Label^ label22;
			private: System::Windows::Forms::Label^ label21;
			private: System::Windows::Forms::Label^ label20;
			private: System::Windows::Forms::Label^ label19;
			private: System::Windows::Forms::Label^ label18;
			private: System::Windows::Forms::Label^ label17;

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
					this->label3 = (gcnew System::Windows::Forms::Label());
					this->label2 = (gcnew System::Windows::Forms::Label());
					this->label1 = (gcnew System::Windows::Forms::Label());
					this->label4 = (gcnew System::Windows::Forms::Label());
					this->label5 = (gcnew System::Windows::Forms::Label());
					this->label6 = (gcnew System::Windows::Forms::Label());
					this->label7 = (gcnew System::Windows::Forms::Label());
					this->label9 = (gcnew System::Windows::Forms::Label());
					this->label10 = (gcnew System::Windows::Forms::Label());
					this->label11 = (gcnew System::Windows::Forms::Label());
					this->label8 = (gcnew System::Windows::Forms::Label());
					this->label12 = (gcnew System::Windows::Forms::Label());
					this->label13 = (gcnew System::Windows::Forms::Label());
					this->label14 = (gcnew System::Windows::Forms::Label());
					this->label15 = (gcnew System::Windows::Forms::Label());
					this->label16 = (gcnew System::Windows::Forms::Label());
					this->label17 = (gcnew System::Windows::Forms::Label());
					this->label18 = (gcnew System::Windows::Forms::Label());
					this->label19 = (gcnew System::Windows::Forms::Label());
					this->label20 = (gcnew System::Windows::Forms::Label());
					this->label21 = (gcnew System::Windows::Forms::Label());
					this->label22 = (gcnew System::Windows::Forms::Label());
					this->panel1->SuspendLayout();
					this->SuspendLayout();
					// 
					// panel1
					// 
					this->panel1->Controls->Add(this->label11);
					this->panel1->Controls->Add(this->label10);
					this->panel1->Controls->Add(this->label9);
					this->panel1->Controls->Add(this->label7);
					this->panel1->Controls->Add(this->label6);
					this->panel1->Controls->Add(this->label16);
					this->panel1->Controls->Add(this->label15);
					this->panel1->Controls->Add(this->label14);
					this->panel1->Controls->Add(this->label13);
					this->panel1->Controls->Add(this->label12);
					this->panel1->Controls->Add(this->label22);
					this->panel1->Controls->Add(this->label21);
					this->panel1->Controls->Add(this->label20);
					this->panel1->Controls->Add(this->label19);
					this->panel1->Controls->Add(this->label18);
					this->panel1->Controls->Add(this->label17);
					this->panel1->Controls->Add(this->label8);
					this->panel1->Controls->Add(this->label5);
					this->panel1->Controls->Add(this->label3);
					this->panel1->Controls->Add(this->label4);
					this->panel1->Controls->Add(this->label2);
					this->panel1->Controls->Add(this->label1);
					this->panel1->Location = System::Drawing::Point(1, 0);
					this->panel1->Name = L"panel1";
					this->panel1->Size = System::Drawing::Size(967, 468);
					this->panel1->TabIndex = 0;
					// 
					// label3
					// 
					this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label3->ForeColor = System::Drawing::Color::Blue;
					this->label3->Location = System::Drawing::Point(560, 107);
					this->label3->Name = L"label3";
					this->label3->Size = System::Drawing::Size(230, 30);
					this->label3->TabIndex = 0;
					this->label3->Text = L"Current:";
					// 
					// label2
					// 
					this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label2->ForeColor = System::Drawing::Color::Blue;
					this->label2->Location = System::Drawing::Point(36, 107);
					this->label2->Name = L"label2";
					this->label2->Size = System::Drawing::Size(230, 30);
					this->label2->TabIndex = 0;
					this->label2->Text = L"Criteria:";
					this->label2->Click += gcnew System::EventHandler(this, &set1::label2_Click);
					// 
					// label1
					// 
					this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
					this->label1->Location = System::Drawing::Point(35, 34);
					this->label1->Name = L"label1";
					this->label1->Size = System::Drawing::Size(320, 50);
					this->label1->TabIndex = 0;
					this->label1->Text = L"Your current Status:";
					// 
					// label4
					// 
					this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label4->ForeColor = System::Drawing::Color::Blue;
					this->label4->Location = System::Drawing::Point(283, 107);
					this->label4->Name = L"label4";
					this->label4->Size = System::Drawing::Size(230, 30);
					this->label4->TabIndex = 0;
					this->label4->Text = L"Expected:";
					this->label4->Click += gcnew System::EventHandler(this, &set1::label2_Click);
					// 
					// label5
					// 
					this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label5->Location = System::Drawing::Point(45, 159);
					this->label5->Name = L"label5";
					this->label5->Size = System::Drawing::Size(230, 30);
					this->label5->TabIndex = 0;
					this->label5->Text = L"Housing";
					// 
					// label6
					// 
					this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label6->Location = System::Drawing::Point(45, 189);
					this->label6->Name = L"label6";
					this->label6->Size = System::Drawing::Size(230, 30);
					this->label6->TabIndex = 0;
					this->label6->Text = L"Fooding";
					// 
					// label7
					// 
					this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label7->Location = System::Drawing::Point(45, 219);
					this->label7->Name = L"label7";
					this->label7->Size = System::Drawing::Size(230, 30);
					this->label7->TabIndex = 0;
					this->label7->Text = L"Lodging";
					// 
					// label9
					// 
					this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label9->Location = System::Drawing::Point(45, 249);
					this->label9->Name = L"label9";
					this->label9->Size = System::Drawing::Size(230, 30);
					this->label9->TabIndex = 0;
					this->label9->Text = L"Laundry";
					this->label9->Click += gcnew System::EventHandler(this, &set1::label9_Click);
					// 
					// label10
					// 
					this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label10->Location = System::Drawing::Point(45, 279);
					this->label10->Name = L"label10";
					this->label10->Size = System::Drawing::Size(230, 30);
					this->label10->TabIndex = 0;
					this->label10->Text = L"Schooling";
					// 
					// label11
					// 
					this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label11->Location = System::Drawing::Point(45, 309);
					this->label11->Name = L"label11";
					this->label11->Size = System::Drawing::Size(230, 30);
					this->label11->TabIndex = 0;
					this->label11->Text = L"Extra";
					// 
					// label8
					// 
					this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label8->Location = System::Drawing::Point(294, 159);
					this->label8->Name = L"label8";
					this->label8->Size = System::Drawing::Size(230, 30);
					this->label8->TabIndex = 0;
					this->label8->Text = L"XXX";
					// 
					// label12
					// 
					this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label12->Location = System::Drawing::Point(294, 189);
					this->label12->Name = L"label12";
					this->label12->Size = System::Drawing::Size(230, 30);
					this->label12->TabIndex = 0;
					this->label12->Text = L"XXX";
					// 
					// label13
					// 
					this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label13->Location = System::Drawing::Point(294, 219);
					this->label13->Name = L"label13";
					this->label13->Size = System::Drawing::Size(230, 30);
					this->label13->TabIndex = 0;
					this->label13->Text = L"XXX";
					this->label13->Click += gcnew System::EventHandler(this, &set1::label13_Click);
					// 
					// label14
					// 
					this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label14->Location = System::Drawing::Point(294, 249);
					this->label14->Name = L"label14";
					this->label14->Size = System::Drawing::Size(230, 30);
					this->label14->TabIndex = 0;
					this->label14->Text = L"XXX";
					// 
					// label15
					// 
					this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label15->Location = System::Drawing::Point(294, 279);
					this->label15->Name = L"label15";
					this->label15->Size = System::Drawing::Size(230, 30);
					this->label15->TabIndex = 0;
					this->label15->Text = L"XXX";
					// 
					// label16
					// 
					this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label16->Location = System::Drawing::Point(294, 309);
					this->label16->Name = L"label16";
					this->label16->Size = System::Drawing::Size(230, 30);
					this->label16->TabIndex = 0;
					this->label16->Text = L"XXX";
					// 
					// label17
					// 
					this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label17->Location = System::Drawing::Point(560, 159);
					this->label17->Name = L"label17";
					this->label17->Size = System::Drawing::Size(230, 30);
					this->label17->TabIndex = 0;
					this->label17->Text = L"XXX";
					// 
					// label18
					// 
					this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label18->Location = System::Drawing::Point(560, 189);
					this->label18->Name = L"label18";
					this->label18->Size = System::Drawing::Size(230, 30);
					this->label18->TabIndex = 0;
					this->label18->Text = L"XXX";
					// 
					// label19
					// 
					this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label19->Location = System::Drawing::Point(560, 219);
					this->label19->Name = L"label19";
					this->label19->Size = System::Drawing::Size(230, 30);
					this->label19->TabIndex = 0;
					this->label19->Text = L"XXX";
					// 
					// label20
					// 
					this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label20->Location = System::Drawing::Point(560, 249);
					this->label20->Name = L"label20";
					this->label20->Size = System::Drawing::Size(230, 30);
					this->label20->TabIndex = 0;
					this->label20->Text = L"XXX";
					// 
					// label21
					// 
					this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label21->Location = System::Drawing::Point(560, 279);
					this->label21->Name = L"label21";
					this->label21->Size = System::Drawing::Size(230, 30);
					this->label21->TabIndex = 0;
					this->label21->Text = L"XXX";
					// 
					// label22
					// 
					this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label22->Location = System::Drawing::Point(560, 309);
					this->label22->Name = L"label22";
					this->label22->Size = System::Drawing::Size(230, 30);
					this->label22->TabIndex = 0;
					this->label22->Text = L"XXX";
					// 
					// set1
					// 
					this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
					this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					this->ClientSize = System::Drawing::Size(968, 473);
					this->Controls->Add(this->panel1);
					this->Name = L"set1";
					this->Text = L"set1";
					this->panel1->ResumeLayout(false);
					this->ResumeLayout(false);

				}
#pragma endregion

			private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
			}
			private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
			}
			private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
			}
			};
		}
	}
	};
}
