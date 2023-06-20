#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include<windows.h>

namespace TTT {

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

	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	protected:











	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ PlayerX;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Indicator;





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
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->PlayerX = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Indicator = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn1->Location = System::Drawing::Point(415, 100);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(91, 92);
			this->btn1->TabIndex = 1;
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn2->Location = System::Drawing::Point(521, 100);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(91, 92);
			this->btn2->TabIndex = 2;
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn3->Location = System::Drawing::Point(618, 100);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(91, 92);
			this->btn3->TabIndex = 3;
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn4->Location = System::Drawing::Point(415, 207);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(91, 92);
			this->btn4->TabIndex = 4;
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn5->Location = System::Drawing::Point(521, 207);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(91, 92);
			this->btn5->TabIndex = 5;
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn6->Location = System::Drawing::Point(618, 207);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(91, 92);
			this->btn6->TabIndex = 6;
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn7->Location = System::Drawing::Point(415, 305);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(91, 92);
			this->btn7->TabIndex = 7;
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn8->Location = System::Drawing::Point(521, 305);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(91, 92);
			this->btn8->TabIndex = 8;
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn9->Location = System::Drawing::Point(618, 305);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(91, 92);
			this->btn9->TabIndex = 9;
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(415, 445);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(348, 64);
			this->panel2->TabIndex = 11;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->button10->Location = System::Drawing::Point(393, 427);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(370, 79);
			this->button10->TabIndex = 0;
			this->button10->Text = L"RESET GAME";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// PlayerX
			// 
			this->PlayerX->AutoSize = true;
			this->PlayerX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PlayerX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerX->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->PlayerX->Location = System::Drawing::Point(41, 157);
			this->PlayerX->Name = L"PlayerX";
			this->PlayerX->Size = System::Drawing::Size(267, 55);
			this->PlayerX->TabIndex = 0;
			this->PlayerX->Text = L"PLAYER X";
			this->PlayerX->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->label3->Location = System::Drawing::Point(41, 269);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(272, 55);
			this->label3->TabIndex = 0;
			this->label3->Text = L"PLAYER O";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->label1->Location = System::Drawing::Point(382, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 66);
			this->label1->TabIndex = 12;
			this->label1->Text = L"TIC TAC TOE";
			// 
			// Indicator
			// 
			this->Indicator->AutoSize = true;
			this->Indicator->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Indicator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Indicator->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->Indicator->Location = System::Drawing::Point(739, 305);
			this->Indicator->Name = L"Indicator";
			this->Indicator->Size = System::Drawing::Size(323, 46);
			this->Indicator->TabIndex = 13;
			this->Indicator->Text = L"Player X\'s move";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->ClientSize = System::Drawing::Size(1101, 544);
			this->Controls->Add(this->Indicator);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->PlayerX);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		bool Turn;
		int count = 0;
#pragma endregion
		void enable_false()
		{
			btn1->Enabled = false;
			btn2->Enabled = false;
			btn3->Enabled = false;
			btn4->Enabled = false;
			btn5->Enabled = false;
			btn6->Enabled = false;
			btn7->Enabled = false;
			btn8->Enabled = false;
			btn9->Enabled = false;
		}

		void winner()
		{
			if (btn1->Text == "X" && btn2->Text == "X" && btn3->Text == "X")
			{
				btn1->BackColor = System::Drawing::Color::DarkSlateGray;
				btn2->BackColor = System::Drawing::Color::DarkSlateGray;
				btn3->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm1^ obj1 = gcnew MyForm1();
				obj1->ShowDialog();
			}
			else if (btn4->Text == "X" && btn5->Text == "X" && btn6->Text == "X")
			{
				btn4->BackColor = System::Drawing::Color::DarkSlateGray;
				btn5->BackColor = System::Drawing::Color::DarkSlateGray;
				btn6->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm1^ obj1 = gcnew MyForm1();
				obj1->ShowDialog();
			}
			else if (btn7->Text == "X" && btn8->Text == "X" && btn9->Text == "X")
			{
				btn7->BackColor = System::Drawing::Color::DarkSlateGray;
				btn8->BackColor = System::Drawing::Color::DarkSlateGray;
				btn9->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm1^ obj1 = gcnew MyForm1();
				obj1->ShowDialog();
			}
			else if (btn1->Text == "X" && btn4->Text == "X" && btn7->Text == "X")
			{
				btn1->BackColor = System::Drawing::Color::DarkSlateGray;
				btn4->BackColor = System::Drawing::Color::DarkSlateGray;
				btn7->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm1^ obj1 = gcnew MyForm1();
				obj1->ShowDialog();
			}
			else if (btn2->Text == "X" && btn5->Text == "X" && btn8->Text == "X")
			{
				btn2->BackColor = System::Drawing::Color::DarkSlateGray;
				btn5->BackColor = System::Drawing::Color::DarkSlateGray;
				btn8->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm1^ obj1 = gcnew MyForm1();
				obj1->ShowDialog();
			}
			else if (btn3->Text == "X" && btn6->Text == "X" && btn9->Text == "X")
			{
				btn3->BackColor = System::Drawing::Color::DarkSlateGray;
				btn6->BackColor = System::Drawing::Color::DarkSlateGray;
				btn9->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm1^ obj1 = gcnew MyForm1();
				obj1->ShowDialog();
			}
			else if (btn1->Text == "X" && btn5->Text == "X" && btn9->Text == "X")
			{
				btn1->BackColor = System::Drawing::Color::DarkSlateGray;
				btn5->BackColor = System::Drawing::Color::DarkSlateGray;
				btn9->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm1^ obj1 = gcnew MyForm1();
				obj1->ShowDialog();
			}
			else if (btn3->Text == "X" && btn5->Text == "X" && btn7->Text == "X")
			{
				btn3->BackColor = System::Drawing::Color::DarkSlateGray;
				btn5->BackColor = System::Drawing::Color::DarkSlateGray;
				btn7->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm1^ obj1 = gcnew MyForm1();
				obj1->ShowDialog();
			}
			else if (btn3->Text == "O" && btn5->Text == "O" && btn7->Text == "O")
			{
				btn3->BackColor = System::Drawing::Color::DarkSlateGray;
				btn5->BackColor = System::Drawing::Color::DarkSlateGray;
				btn7->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm2^ obj1 = gcnew MyForm2();
				obj1->ShowDialog();
			}
			else if (btn1->Text == "O" && btn2->Text == "O" && btn3->Text == "O")
			{
				btn1->BackColor = System::Drawing::Color::DarkSlateGray;
				btn2->BackColor = System::Drawing::Color::DarkSlateGray;
				btn3->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm2^ obj1 = gcnew MyForm2();
				obj1->ShowDialog();
			}
			else if (btn4->Text == "O" && btn5->Text == "O" && btn6->Text == "O")
			{
				btn4->BackColor = System::Drawing::Color::DarkSlateGray;
				btn5->BackColor = System::Drawing::Color::DarkSlateGray;
				btn6->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm2^ obj1 = gcnew MyForm2();
				obj1->ShowDialog();
			}
		    else if (btn7->Text == "O" && btn8->Text == "O" && btn9->Text == "O")
			{
				btn7->BackColor = System::Drawing::Color::DarkSlateGray;
				btn8->BackColor = System::Drawing::Color::DarkSlateGray;
				btn9->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm2^ obj1 = gcnew MyForm2();
				obj1->ShowDialog();
			}
			else if (btn1->Text == "O" && btn5->Text == "O" && btn9->Text == "O")
			{
				btn1->BackColor = System::Drawing::Color::DarkSlateGray;
				btn5->BackColor = System::Drawing::Color::DarkSlateGray;
				btn9->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm2^ obj1 = gcnew MyForm2();
				obj1->ShowDialog();
			}
			else if (btn1->Text == "O" && btn4->Text == "O" && btn7->Text == "O")
			{
				btn1->BackColor = System::Drawing::Color::DarkSlateGray;
				btn4->BackColor = System::Drawing::Color::DarkSlateGray;
				btn7->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm2^ obj1 = gcnew MyForm2();
				obj1->ShowDialog();
			}
			else if (btn2->Text == "O" && btn5->Text == "O" && btn8->Text == "O")
			{
				btn2->BackColor = System::Drawing::Color::DarkSlateGray;
				btn5->BackColor = System::Drawing::Color::DarkSlateGray;
				btn8->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm2^ obj1 = gcnew MyForm2();
				obj1->ShowDialog();
			}
			else if (btn3->Text == "O" && btn6->Text == "O" && btn9->Text == "O")
			{
				btn3->BackColor = System::Drawing::Color::DarkSlateGray;
				btn6->BackColor = System::Drawing::Color::DarkSlateGray;
				btn9->BackColor = System::Drawing::Color::DarkSlateGray;
				enable_false();
				Sleep(750);
				MyForm2^ obj1 = gcnew MyForm2();
				obj1->ShowDialog();
			}
			else if (count >= 9)
			{
			   enable_false();
			   Sleep(750);
			   MyForm3^ obj1 = gcnew MyForm3();
			   obj1->ShowDialog();
			}
		}



	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Turn == false)
	{
		Indicator->Text = "Player O's Move";
		btn1->Text = "X";
		Turn = true;
		count++;
	}
	else
	{
		Indicator->Text = "Player X's Move";
		btn1->Text = "O";
		Turn = false;
		count++;
	}
	winner();
	btn1->Enabled = false;
	PlayerX->DefaultBackColor;
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Turn == false)
	{
		Indicator->Text = "Player O's Move";
		btn2->Text = "X";
		Turn = true;
		count++;
	}
	else
	{
		Indicator->Text = "Player X's Move";
		btn2->Text = "O";
		Turn = false;
		count++;
	}
	winner();
	btn2->Enabled = false;
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Turn == false)
	{
		Indicator->Text = "Player O's Move";
		btn3->Text = "X";
		Turn = true;
		count++;
	}
	else
	{
		Indicator->Text = "Player X's Move";
		btn3->Text = "O";
		Turn = false;
		count++;
	}
	winner();
	btn3->Enabled = false;
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Turn == false)
	{
		Indicator->Text = "Player O's Move";
		btn4->Text = "X";
		Turn = true;
		count++;
	}
	else
	{
		Indicator->Text = "Player X's Move";
		btn4->Text = "O";
		Turn = false;
		count++;
	}
	winner();
	btn4->Enabled = false;
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Turn == false)
	{
		Indicator->Text = "Player O's Move";
		btn5->Text = "X";
		Turn = true;
		count++;
	}
	else
	{
		Indicator->Text = "Player X's Move";
		btn5->Text = "O";
		Turn = false;
		count++;
	}
	winner();
	btn5->Enabled = false;
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Turn == false)
	{
		Indicator->Text = "Player O's Move";
		btn6->Text = "X";
		Turn = true;
		count++;
	}
	else
	{
		Indicator->Text = "Player X's Move";
		btn6->Text = "O";
		Turn = false;
		count++;
	}
	winner();
	btn6->Enabled = false;
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Turn == false)
	{
		Indicator->Text = "Player O's Move";
		btn7->Text = "X";
		Turn = true;
		count++;
	}
	else
	{
		Indicator->Text = "Player X's Move";
		btn7->Text = "O";
		Turn = false;
		count++;
	}
	winner();
	btn7->Enabled = false;
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Turn == false)
	{
		Indicator->Text = "Player O's Move";
		btn8->Text = "X";
		Turn = true;
		count++;
	}
	else
	{
		Indicator->Text = "Player X's Move";
		btn8->Text = "O";
		Turn = false;
		count++;
	}
	winner();
	btn8->Enabled = false;
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Turn == false)
	{
		Indicator->Text = "Player O's Move";
		btn9->Text = "X";
		Turn = true;
		count++;
	}
	else
	{
		Indicator->Text = "Player X's Move";
		btn9->Text = "O";
		Turn = false;
		count++;
	}
	winner();
	btn9->Enabled = false;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	//RESET GAME isse neeche likhna code.
	btn1->Enabled = true;
	btn2->Enabled = true;
	btn3->Enabled = true;
	btn4->Enabled = true;
	btn5->Enabled = true;
	btn6->Enabled = true;
	btn7->Enabled = true;
	btn8->Enabled = true;
	btn9->Enabled = true;
    
	btn1->Text = "";
	btn2->Text = "";
	btn3->Text = "";
	btn4->Text = "";
	btn5->Text = "";
	btn6->Text = "";
	btn7->Text = "";
	btn8->Text = "";
	btn9->Text = "";
   
   btn1->BackColor=System::Drawing::Color::WhiteSmoke;
   btn2->BackColor=System::Drawing::Color::WhiteSmoke;
   btn3->BackColor=System::Drawing::Color::WhiteSmoke;
   btn4->BackColor=System::Drawing::Color::WhiteSmoke;
   btn5->BackColor=System::Drawing::Color::WhiteSmoke;
   btn6->BackColor=System::Drawing::Color::WhiteSmoke;
   btn7->BackColor=System::Drawing::Color::WhiteSmoke;
   btn8->BackColor=System::Drawing::Color::WhiteSmoke;
   btn9->BackColor=System::Drawing::Color::WhiteSmoke;	
   count = 0;
}
};
}
