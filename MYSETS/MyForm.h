#pragma once
#include <msclr\marshal_cppstd.h>
#include"Set.h"
Set *sA;
Set *sB;
Set *sRes;
namespace MYSETS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  exit;
	private: System::Windows::Forms::TextBox^  A;
	private: System::Windows::Forms::TextBox^  B;
	private: System::Windows::Forms::TextBox^  res;
	private: System::Windows::Forms::ListBox^  listBox;
	private: System::Windows::Forms::Button^  button;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  Aadd;
	private: System::Windows::Forms::TextBox^  Avvod;
	private: System::Windows::Forms::TextBox^  Bvvod;
	private: System::Windows::Forms::Button^  Badd;
	private: System::Windows::Forms::Button^  Adel;
	private: System::Windows::Forms::Button^  Bdel;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  GoA;
	private: System::Windows::Forms::Button^  GoB;
	private: System::Windows::Forms::Button^  buttonU;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->exit = (gcnew System::Windows::Forms::Button());
			this->A = (gcnew System::Windows::Forms::TextBox());
			this->B = (gcnew System::Windows::Forms::TextBox());
			this->res = (gcnew System::Windows::Forms::TextBox());
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Aadd = (gcnew System::Windows::Forms::Button());
			this->Avvod = (gcnew System::Windows::Forms::TextBox());
			this->Bvvod = (gcnew System::Windows::Forms::TextBox());
			this->Badd = (gcnew System::Windows::Forms::Button());
			this->Adel = (gcnew System::Windows::Forms::Button());
			this->Bdel = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->GoA = (gcnew System::Windows::Forms::Button());
			this->GoB = (gcnew System::Windows::Forms::Button());
			this->buttonU = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->exit->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->ForeColor = System::Drawing::SystemColors::ControlText;
			this->exit->Location = System::Drawing::Point(902, 541);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(97, 50);
			this->exit->TabIndex = 0;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
			// 
			// A
			// 
			this->A->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A->Location = System::Drawing::Point(85, 155);
			this->A->Multiline = true;
			this->A->Name = L"A";
			this->A->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->A->Size = System::Drawing::Size(570, 65);
			this->A->TabIndex = 1;
			// 
			// B
			// 
			this->B->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B->Location = System::Drawing::Point(85, 357);
			this->B->Multiline = true;
			this->B->Name = L"B";
			this->B->ReadOnly = true;
			this->B->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->B->Size = System::Drawing::Size(570, 65);
			this->B->TabIndex = 2;
			this->B->TextChanged += gcnew System::EventHandler(this, &MyForm::B_TextChanged);
			// 
			// res
			// 
			this->res->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->res->Location = System::Drawing::Point(85, 526);
			this->res->Multiline = true;
			this->res->Name = L"res";
			this->res->ReadOnly = true;
			this->res->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->res->Size = System::Drawing::Size(570, 65);
			this->res->TabIndex = 3;
			this->res->TextChanged += gcnew System::EventHandler(this, &MyForm::res_TextChanged);
			// 
			// listBox
			// 
			this->listBox->BackColor = System::Drawing::SystemColors::Window;
			this->listBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->listBox->FormattingEnabled = true;
			this->listBox->HorizontalScrollbar = true;
			this->listBox->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->listBox->ItemHeight = 24;
			this->listBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"~A", L"~B", L"A-B", L"A*B", L"A+B", L"B-A" });
			this->listBox->Location = System::Drawing::Point(753, 414);
			this->listBox->MultiColumn = true;
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(50, 148);
			this->listBox->Sorted = true;
			this->listBox->TabIndex = 5;
			this->listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox_SelectedIndexChanged);
			// 
			// button
			// 
			this->button->Location = System::Drawing::Point(740, 568);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(75, 23);
			this->button->TabIndex = 6;
			this->button->TabStop = false;
			this->button->Text = L"GO";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(5, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 40);
			this->label1->TabIndex = 7;
			this->label1->Text = L"A:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 357);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 40);
			this->label2->TabIndex = 8;
			this->label2->Text = L"B:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(5, 526);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 40);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Res:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(686, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 40);
			this->label4->TabIndex = 10;
			this->label4->Text = L"U:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// Aadd
			// 
			this->Aadd->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Aadd->Location = System::Drawing::Point(938, 101);
			this->Aadd->Name = L"Aadd";
			this->Aadd->Size = System::Drawing::Size(87, 41);
			this->Aadd->TabIndex = 15;
			this->Aadd->Text = L"Add";
			this->Aadd->UseVisualStyleBackColor = true;
			this->Aadd->Click += gcnew System::EventHandler(this, &MyForm::Aadd_Click);
			// 
			// Avvod
			// 
			this->Avvod->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Avvod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Avvod->Location = System::Drawing::Point(85, 101);
			this->Avvod->Multiline = true;
			this->Avvod->Name = L"Avvod";
			this->Avvod->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->Avvod->Size = System::Drawing::Size(570, 41);
			this->Avvod->TabIndex = 16;
			// 
			// Bvvod
			// 
			this->Bvvod->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Bvvod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Bvvod->Location = System::Drawing::Point(85, 300);
			this->Bvvod->Multiline = true;
			this->Bvvod->Name = L"Bvvod";
			this->Bvvod->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->Bvvod->Size = System::Drawing::Size(570, 41);
			this->Bvvod->TabIndex = 17;
			this->Bvvod->TextChanged += gcnew System::EventHandler(this, &MyForm::Bvvod_TextChanged);
			// 
			// Badd
			// 
			this->Badd->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Badd->Location = System::Drawing::Point(938, 300);
			this->Badd->Name = L"Badd";
			this->Badd->Size = System::Drawing::Size(87, 41);
			this->Badd->TabIndex = 18;
			this->Badd->Text = L"Add";
			this->Badd->UseVisualStyleBackColor = true;
			this->Badd->Click += gcnew System::EventHandler(this, &MyForm::Badd_Click);
			// 
			// Adel
			// 
			this->Adel->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Adel->Location = System::Drawing::Point(938, 155);
			this->Adel->Name = L"Adel";
			this->Adel->Size = System::Drawing::Size(87, 41);
			this->Adel->TabIndex = 19;
			this->Adel->Text = L"Del";
			this->Adel->UseVisualStyleBackColor = true;
			this->Adel->Click += gcnew System::EventHandler(this, &MyForm::Adel_Click);
			// 
			// Bdel
			// 
			this->Bdel->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Bdel->Location = System::Drawing::Point(938, 357);
			this->Bdel->Name = L"Bdel";
			this->Bdel->Size = System::Drawing::Size(87, 41);
			this->Bdel->TabIndex = 20;
			this->Bdel->Text = L"Del";
			this->Bdel->UseVisualStyleBackColor = true;
			this->Bdel->Click += gcnew System::EventHandler(this, &MyForm::Bdel_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(785, 9);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 41);
			this->textBox1->TabIndex = 21;
			// 
			// GoA
			// 
			this->GoA->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->GoA->Location = System::Drawing::Point(753, 115);
			this->GoA->Name = L"GoA";
			this->GoA->Size = System::Drawing::Size(91, 68);
			this->GoA->TabIndex = 22;
			this->GoA->Text = L"GO";
			this->GoA->UseVisualStyleBackColor = true;
			this->GoA->Click += gcnew System::EventHandler(this, &MyForm::GoA_Click);
			// 
			// GoB
			// 
			this->GoB->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->GoB->Location = System::Drawing::Point(753, 323);
			this->GoB->Name = L"GoB";
			this->GoB->Size = System::Drawing::Size(91, 68);
			this->GoB->TabIndex = 23;
			this->GoB->Text = L"GO";
			this->GoB->UseVisualStyleBackColor = true;
			this->GoB->Click += gcnew System::EventHandler(this, &MyForm::GoB_Click);
			// 
			// buttonU
			// 
			this->buttonU->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonU->Location = System::Drawing::Point(949, 9);
			this->buttonU->Name = L"buttonU";
			this->buttonU->Size = System::Drawing::Size(35, 41);
			this->buttonU->TabIndex = 24;
			this->buttonU->Text = L"!";
			this->buttonU->UseVisualStyleBackColor = true;
			this->buttonU->Click += gcnew System::EventHandler(this, &MyForm::buttonU_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1037, 603);
			this->Controls->Add(this->buttonU);
			this->Controls->Add(this->GoB);
			this->Controls->Add(this->GoA);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Bdel);
			this->Controls->Add(this->Adel);
			this->Controls->Add(this->Badd);
			this->Controls->Add(this->Bvvod);
			this->Controls->Add(this->Avvod);
			this->Controls->Add(this->Aadd);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button);
			this->Controls->Add(this->listBox);
			this->Controls->Add(this->res);
			this->Controls->Add(this->B);
			this->Controls->Add(this->A);
			this->Controls->Add(this->exit);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int U;
	//выход
	private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	//операции
	private: System::Void listBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		
	}
	//вывод А
	private: System::Void A_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	//универс
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	//ввод А
	private: System::Void Avvod_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	//ввод В
	private: System::Void Bvvod_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	//вывод В
	private: System::Void B_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	//результат
	private: System::Void res_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	//Go A
	private: System::Void GoA_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string st = msclr::interop::marshal_as< std::string>(Avvod->Text);
		Set Aset(U,st);
		std::string res_str_A = Aset.Set_to_string();
		String^ As = gcnew System::String(res_str_A.c_str());
		A->Text = As;
		sA = new Set(Aset);
		Avvod->Text = "";
	}
	//Go B
	private: System::Void GoB_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string stt = msclr::interop::marshal_as< std::string>(Bvvod->Text);
		Set Bset(U, stt);
		std::string res_str_B = Bset.Set_to_string();
		String^ Bs = gcnew System::String(res_str_B.c_str());
		B->Text = Bs;
		sB = new Set(Bset);
		Bvvod->Text = "";
	}
	//Add A
	private: System::Void Aadd_Click(System::Object^  sender, System::EventArgs^  e) {
		int x;
		x = Convert::ToInt32(Avvod->Text);
		sA->add(x);
		std::string res_str_A = sA->Set_to_string();
		String^ As = gcnew System::String(res_str_A.c_str());
		A->Text = As;
		Avvod->Text = "";
	}
	//Del A
	private: System::Void Adel_Click(System::Object^  sender, System::EventArgs^  e) {
		int x;
		x = Convert::ToInt32(Avvod->Text);
		sA->del(x);
		std::string res_str_A = sA->Set_to_string();
		String^ As = gcnew System::String(res_str_A.c_str());
		A->Text = As;
		Avvod->Text = "";
	}
	//Add B
	private: System::Void Badd_Click(System::Object^  sender, System::EventArgs^  e) {
		int x;
		x = Convert::ToInt32(Bvvod->Text);
		sB->add(x);
		std::string res_str_B = sB->Set_to_string();
		String^ Bs = gcnew System::String(res_str_B.c_str());
		B->Text = Bs;
		Bvvod->Text = "";
	}
	//Del B
	private: System::Void Bdel_Click(System::Object^  sender, System::EventArgs^  e) {
		int x;
		x = Convert::ToInt32(Bvvod->Text);
		sB->del(x);
		std::string res_str_B = sB->Set_to_string();
		String^ Bs = gcnew System::String(res_str_B.c_str());
		B->Text = Bs;
		Bvvod->Text = "";
	}
	//выполнение операций
	private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^y = Convert::ToString(this->listBox->Items[this->listBox->SelectedIndex]->ToString());//получили строку, по которой выполнен щелчок
		String ^s1 = listBox->Items[0]->ToString();//получили i-ый элемент как строку
		String ^s2 = listBox->Items[1]->ToString();
		String ^s3 = listBox->Items[2]->ToString();
		String ^s4 = listBox->Items[3]->ToString();
		String ^s5 = listBox->Items[4]->ToString();
		String ^s6 = listBox->Items[5]->ToString();
		sRes = new Set(U);
		if (y ==s1) {// ~A
			*sRes = ~*sA;
			std::string res_s = sRes->Set_to_string();
			String^ s_res = gcnew System::String(res_s.c_str());
			res->Text = s_res;
		}
		if (y == s2) { // ~B
			*sRes = ~*sB;
			std::string res_s = sRes->Set_to_string();
			String^ s_res = gcnew System::String(res_s.c_str());
			res->Text = s_res;
		}
		if (y == s3) {// A-B
			*sRes = *sA - *sB;
			std::string res_s = sRes->Set_to_string();
			String^ s_res = gcnew System::String(res_s.c_str());
			res->Text = s_res;
		}
		if (y == s4) {// A*B
			*sRes = (*sA) * (*sB);
			std::string res_s = sRes->Set_to_string();
			String^ s_res = gcnew System::String(res_s.c_str());
			res->Text = s_res;
		}
		if (y == s5) {// A+B
			*sRes = (*sA) + (*sB);
			std::string res_s = sRes->Set_to_string();
			String^ s_res = gcnew System::String(res_s.c_str());
			res->Text = s_res;
		}
		if (y == s6) {// B-A
			*sRes =   (*sB) - (*sA);
			std::string res_s = sRes->Set_to_string();
			String^ s_res = gcnew System::String(res_s.c_str());
			res->Text = s_res;
		}
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void buttonU_Click_1(System::Object^  sender, System::EventArgs^  e) {
		U = Convert::ToInt32(textBox1->Text);
		textBox1->Enabled = false;
	}
};
}
