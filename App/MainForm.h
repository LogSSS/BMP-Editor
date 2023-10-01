#pragma once

#include "Windows.h"
#include "User.h"
#include "Bullshit.h"
#include "ColorSelector.h"

namespace Project {

	using namespace System;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MainForm(User^ user)
		{
			InitializeComponent();
			this->user = user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ loginBtn;
	private: System::Windows::Forms::Button^ selectBtn;
	private: System::Windows::Forms::PictureBox^ currBMP;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ encodeBtn;
	private: System::Windows::Forms::Button^ decodeBtn;
	private: System::Windows::Forms::PictureBox^ outputBMP;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ saveBtn;
	private: System::Windows::Forms::ComboBox^ filesCombo;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ editBtn;
	private: System::Windows::Forms::ComboBox^ encodeBox;
	private: System::Windows::Forms::ComboBox^ decodeBox;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ paintBtn;
	private: System::Windows::Forms::ComboBox^ patternBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ patternLastBox;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ faqBtn;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ colorField2;
	private: System::Windows::Forms::Label^ label13;



	private: System::Windows::Forms::Label^ colorField1;
	private: System::Windows::Forms::Label^ hexField2;

	private: System::Windows::Forms::Label^ hexField1;
	private: System::Windows::Forms::ComboBox^ colorBox1;
	private: System::Windows::Forms::ComboBox^ colorBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button1;









	protected:

	protected:

	protected:

	protected:

	protected:





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->selectBtn = (gcnew System::Windows::Forms::Button());
			this->currBMP = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->encodeBtn = (gcnew System::Windows::Forms::Button());
			this->decodeBtn = (gcnew System::Windows::Forms::Button());
			this->outputBMP = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->filesCombo = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->decodeBox = (gcnew System::Windows::Forms::ComboBox());
			this->encodeBox = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->editBtn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->colorBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->colorBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->hexField2 = (gcnew System::Windows::Forms::Label());
			this->hexField1 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->colorField2 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->colorField1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->patternLastBox = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->paintBtn = (gcnew System::Windows::Forms::Button());
			this->patternBox = (gcnew System::Windows::Forms::ComboBox());
			this->faqBtn = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->currBMP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outputBMP))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::Transparent;
			this->loginBtn->Location = System::Drawing::Point(738, 8);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(60, 50);
			this->loginBtn->TabIndex = 0;
			this->loginBtn->Text = L"Sing OUT";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &MainForm::loginBtn_Click);
			// 
			// selectBtn
			// 
			this->selectBtn->Location = System::Drawing::Point(45, 188);
			this->selectBtn->Name = L"selectBtn";
			this->selectBtn->Size = System::Drawing::Size(169, 37);
			this->selectBtn->TabIndex = 1;
			this->selectBtn->Text = L"Select a File";
			this->selectBtn->UseVisualStyleBackColor = true;
			this->selectBtn->Click += gcnew System::EventHandler(this, &MainForm::selectBtn_Click);
			// 
			// currBMP
			// 
			this->currBMP->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->currBMP->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->currBMP->Location = System::Drawing::Point(12, 357);
			this->currBMP->Name = L"currBMP";
			this->currBMP->Size = System::Drawing::Size(400, 300);
			this->currBMP->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->currBMP->TabIndex = 2;
			this->currBMP->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(12, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Hide mess";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(12, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 18);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Show mess";
			// 
			// encodeBtn
			// 
			this->encodeBtn->Location = System::Drawing::Point(432, 36);
			this->encodeBtn->Name = L"encodeBtn";
			this->encodeBtn->Size = System::Drawing::Size(75, 24);
			this->encodeBtn->TabIndex = 7;
			this->encodeBtn->Text = L"HIDE";
			this->encodeBtn->UseVisualStyleBackColor = true;
			this->encodeBtn->Click += gcnew System::EventHandler(this, &MainForm::encodeBtn_Click);
			// 
			// decodeBtn
			// 
			this->decodeBtn->Location = System::Drawing::Point(432, 77);
			this->decodeBtn->Name = L"decodeBtn";
			this->decodeBtn->Size = System::Drawing::Size(75, 23);
			this->decodeBtn->TabIndex = 8;
			this->decodeBtn->Text = L"SHOW";
			this->decodeBtn->UseVisualStyleBackColor = true;
			this->decodeBtn->Click += gcnew System::EventHandler(this, &MainForm::decodeBtn_Click);
			// 
			// outputBMP
			// 
			this->outputBMP->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->outputBMP->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->outputBMP->Location = System::Drawing::Point(418, 357);
			this->outputBMP->Name = L"outputBMP";
			this->outputBMP->Size = System::Drawing::Size(400, 300);
			this->outputBMP->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->outputBMP->TabIndex = 9;
			this->outputBMP->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(9, 337);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 18);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Current file \\|/";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(415, 337);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 18);
			this->label4->TabIndex = 11;
			this->label4->Text = L"New File \\|/";
			// 
			// saveBtn
			// 
			this->saveBtn->Location = System::Drawing::Point(45, 276);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(169, 35);
			this->saveBtn->TabIndex = 12;
			this->saveBtn->Text = L"Save";
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &MainForm::saveBtn_Click);
			// 
			// filesCombo
			// 
			this->filesCombo->FormattingEnabled = true;
			this->filesCombo->Location = System::Drawing::Point(45, 75);
			this->filesCombo->MaxDropDownItems = 3;
			this->filesCombo->Name = L"filesCombo";
			this->filesCombo->Size = System::Drawing::Size(169, 25);
			this->filesCombo->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(42, 55);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 18);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Files";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->decodeBox);
			this->panel1->Controls->Add(this->encodeBox);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->decodeBtn);
			this->panel1->Controls->Add(this->encodeBtn);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(304, 65);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(514, 106);
			this->panel1->TabIndex = 15;
			// 
			// decodeBox
			// 
			this->decodeBox->AllowDrop = true;
			this->decodeBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->decodeBox->FormattingEnabled = true;
			this->decodeBox->Location = System::Drawing::Point(15, 75);
			this->decodeBox->Name = L"decodeBox";
			this->decodeBox->Size = System::Drawing::Size(411, 25);
			this->decodeBox->TabIndex = 17;
			// 
			// encodeBox
			// 
			this->encodeBox->FormattingEnabled = true;
			this->encodeBox->Location = System::Drawing::Point(15, 35);
			this->encodeBox->Name = L"encodeBox";
			this->encodeBox->Size = System::Drawing::Size(411, 25);
			this->encodeBox->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Info;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label6->Location = System::Drawing::Point(0, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(186, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Text De- and En- coder";
			// 
			// editBtn
			// 
			this->editBtn->Location = System::Drawing::Point(45, 106);
			this->editBtn->Name = L"editBtn";
			this->editBtn->Size = System::Drawing::Size(75, 23);
			this->editBtn->TabIndex = 16;
			this->editBtn->Text = L"Edit";
			this->editBtn->UseVisualStyleBackColor = true;
			this->editBtn->Click += gcnew System::EventHandler(this, &MainForm::editBtn_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->editBtn);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->filesCombo);
			this->panel2->Controls->Add(this->saveBtn);
			this->panel2->Controls->Add(this->selectBtn);
			this->panel2->Location = System::Drawing::Point(12, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(254, 322);
			this->panel2->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Info;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label7->Location = System::Drawing::Point(0, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 20);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Manager";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->colorBox2);
			this->panel3->Controls->Add(this->colorBox1);
			this->panel3->Controls->Add(this->hexField2);
			this->panel3->Controls->Add(this->hexField1);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->colorField2);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->colorField1);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->patternLastBox);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->paintBtn);
			this->panel3->Controls->Add(this->patternBox);
			this->panel3->Location = System::Drawing::Point(304, 181);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(514, 153);
			this->panel3->TabIndex = 18;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::SystemColors::Control;
			this->label12->Location = System::Drawing::Point(345, 89);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(192, 18);
			this->label12->TabIndex = 33;
			this->label12->Text = L"\\|/   Last colors   \\|/";
			// 
			// colorBox2
			// 
			this->colorBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->colorBox2->FormattingEnabled = true;
			this->colorBox2->Location = System::Drawing::Point(423, 107);
			this->colorBox2->Name = L"colorBox2";
			this->colorBox2->Size = System::Drawing::Size(69, 25);
			this->colorBox2->TabIndex = 32;
			this->colorBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::colorBox2_SelectedIndexChanged);
			// 
			// colorBox1
			// 
			this->colorBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->colorBox1->FormattingEnabled = true;
			this->colorBox1->Location = System::Drawing::Point(348, 107);
			this->colorBox1->Name = L"colorBox1";
			this->colorBox1->Size = System::Drawing::Size(69, 25);
			this->colorBox1->TabIndex = 31;
			this->colorBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::colorBox1_SelectedIndexChanged);
			// 
			// hexField2
			// 
			this->hexField2->AutoSize = true;
			this->hexField2->Font = (gcnew System::Drawing::Font(L"Cascadia Code SemiBold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hexField2->ForeColor = System::Drawing::Color::Lime;
			this->hexField2->Location = System::Drawing::Point(420, 67);
			this->hexField2->Name = L"hexField2";
			this->hexField2->Size = System::Drawing::Size(20, 22);
			this->hexField2->TabIndex = 30;
			this->hexField2->Text = L"#";
			// 
			// hexField1
			// 
			this->hexField1->AutoSize = true;
			this->hexField1->Font = (gcnew System::Drawing::Font(L"Cascadia Code SemiBold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hexField1->ForeColor = System::Drawing::Color::Lime;
			this->hexField1->Location = System::Drawing::Point(345, 67);
			this->hexField1->Name = L"hexField1";
			this->hexField1->Size = System::Drawing::Size(20, 22);
			this->hexField1->TabIndex = 29;
			this->hexField1->Text = L"#";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::SystemColors::Control;
			this->label14->Location = System::Drawing::Point(420, 6);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(72, 18);
			this->label14->TabIndex = 28;
			this->label14->Text = L"color №2";
			// 
			// colorField2
			// 
			this->colorField2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->colorField2->Location = System::Drawing::Point(423, 28);
			this->colorField2->Name = L"colorField2";
			this->colorField2->Size = System::Drawing::Size(69, 27);
			this->colorField2->TabIndex = 27;
			this->colorField2->Click += gcnew System::EventHandler(this, &MainForm::colorField2_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::SystemColors::Control;
			this->label13->Location = System::Drawing::Point(345, 6);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(72, 18);
			this->label13->TabIndex = 26;
			this->label13->Text = L"color №1";
			// 
			// colorField1
			// 
			this->colorField1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->colorField1->Location = System::Drawing::Point(348, 28);
			this->colorField1->Name = L"colorField1";
			this->colorField1->Size = System::Drawing::Size(69, 27);
			this->colorField1->TabIndex = 25;
			this->colorField1->Click += gcnew System::EventHandler(this, &MainForm::colorField1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::Control;
			this->label10->Location = System::Drawing::Point(121, 22);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 18);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Last 3";
			// 
			// patternLastBox
			// 
			this->patternLastBox->BackColor = System::Drawing::SystemColors::Control;
			this->patternLastBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->patternLastBox->FormattingEnabled = true;
			this->patternLastBox->Location = System::Drawing::Point(124, 42);
			this->patternLastBox->Name = L"patternLastBox";
			this->patternLastBox->Size = System::Drawing::Size(89, 25);
			this->patternLastBox->TabIndex = 23;
			this->patternLastBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::patternLastBox_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ForeColor = System::Drawing::SystemColors::Control;
			this->label9->Location = System::Drawing::Point(21, 22);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 18);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Pattern";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Info;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 20);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Paint";
			// 
			// paintBtn
			// 
			this->paintBtn->Location = System::Drawing::Point(73, 104);
			this->paintBtn->Name = L"paintBtn";
			this->paintBtn->Size = System::Drawing::Size(94, 29);
			this->paintBtn->TabIndex = 20;
			this->paintBtn->Text = L"Paint";
			this->paintBtn->UseVisualStyleBackColor = true;
			this->paintBtn->Click += gcnew System::EventHandler(this, &MainForm::paintBtn_Click);
			// 
			// patternBox
			// 
			this->patternBox->FormattingEnabled = true;
			this->patternBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"First", L"Second", L"Third", L"Fourth" });
			this->patternBox->Location = System::Drawing::Point(24, 42);
			this->patternBox->Name = L"patternBox";
			this->patternBox->Size = System::Drawing::Size(94, 25);
			this->patternBox->TabIndex = 19;
			this->patternBox->Text = L"First";
			// 
			// faqBtn
			// 
			this->faqBtn->Location = System::Drawing::Point(588, 9);
			this->faqBtn->Name = L"faqBtn";
			this->faqBtn->Size = System::Drawing::Size(60, 50);
			this->faqBtn->TabIndex = 19;
			this->faqBtn->Text = L"FAQ";
			this->faqBtn->UseVisualStyleBackColor = true;
			this->faqBtn->Click += gcnew System::EventHandler(this, &MainForm::faqBtn_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::Info;
			this->label11->Font = (gcnew System::Drawing::Font(L"Cascadia Code SemiBold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(315, 8);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(255, 33);
			this->label11->TabIndex = 20;
			this->label11->Text = L"BMP Editor x3000";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(655, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 50);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Authors";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(832, 669);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->faqBtn);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->outputBMP);
			this->Controls->Add(this->currBMP);
			this->Controls->Add(this->loginBtn);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Code SemiBold", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Editor";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->currBMP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outputBMP))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//variables
	public: bool gotoLog = false;
    private: bool isEdited = false;
	public: User^ user;
	public: Bitmap^ bmp;
	private: Color^ cacheColor1 = nullptr;
	private: Color^ cacheColor2 = nullptr;


	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		if (user->bmp1 != nullptr) {
			this->filesCombo->Items->Add("First File");
			bmp = user->bmp1;
			currBMP->Image = bmp;
			if (user->bmp2 != nullptr) {
				this->filesCombo->Items->Add("Second File");
				if (user->bmp3 != nullptr)
					this->filesCombo->Items->Add("Third File");
			}
		}

		if (user->settedText1 != nullptr) {
			this->encodeBox->Items->Add(user->settedText1);
			if (user->settedText2 != nullptr) {
				this->encodeBox->Items->Add(user->settedText2);
				if (user->settedText3 != nullptr)
					this->encodeBox->Items->Add(user->settedText3);
			}
		}

		if (user->gettedText1 != nullptr) {
			this->decodeBox->Items->Add(user->gettedText1);
			if (user->gettedText2 != nullptr) {
				this->decodeBox->Items->Add(user->gettedText2);
				if (user->gettedText3 != nullptr)
					this->decodeBox->Items->Add(user->gettedText3);
			}
		}

		updatePaint();
	}

	private: System::Void loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		 
		this->gotoLog = true;
		this->Close();
	}
	private: System::Void selectBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "bmp files (*.bmp)|*.bmp|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			String^ filePath = openFileDialog1->FileName;
			Bitmap^ bmpb = gcnew Bitmap(filePath);

			if (this->outputBMP->Image != nullptr) {
				user->bmp3 = user->bmp2;
				user->bmp2 = user->bmp1;
				user->bmp1 = gcnew Bitmap(this->outputBMP->Image);
				this->outputBMP->Image = nullptr;
			}
			bmp = bmpb;
			this->currBMP->Image = bmpb;		
		}
	}

	private: System::Void encodeBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		if (bmp == nullptr) {
			MessageBox::Show("Upload the file", "Missing BMP File", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		String^ text = this->encodeBox->Text;

		if (text == "") {
			MessageBox::Show("Please, enter message", "Message Field Empty", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;

		}
		if (!bruh::isMessageFit(bmp, text->Length)) {
			MessageBox::Show("The message is too long for file", "Too Long Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;

		}
		bruh::EncodeMessage(bmp, text);
		user->settedText3 = user->settedText2;
		user->settedText2 = user->settedText1;
		user->settedText1 = text;

		this->encodeBox->Items->Clear();

		if (user->settedText1 != nullptr) {
			this->encodeBox->Items->Add(user->settedText1);
			if (user->settedText2 != nullptr) {
				this->encodeBox->Items->Add(user->settedText2);
				if (user->settedText3 != nullptr)
					this->encodeBox->Items->Add(user->settedText3);
			}
		}

		MessageBox::Show("Message is Encoded", "Done", MessageBoxButtons::OK);

		this->outputBMP->Image = bmp;

		this->encodeBox->Text = "";
		this->decodeBox->Text = "";
	}

	private: System::Void decodeBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		this->decodeBox->Text = "";

		if (bmp == nullptr) {
			MessageBox::Show("Upload the file", "Missing BMP File", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		bool isDecoded = false;
		String^ text = bruh::DecodeMessage(bmp, isDecoded);

		if (!isDecoded)
		{
			MessageBox::Show("The file doesnt have message", "File Message Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;

		}

		if (MessageBox::Show("Message Decoded!\nWanna copy to Clipboard?", "Done", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			Clipboard::SetText(text);

		user->gettedText3 = user->gettedText2;
		user->gettedText2 = user->gettedText1;
		user->gettedText1 = text;

		this->decodeBox->Items->Clear();

		if (user->gettedText1 != nullptr) {
			this->decodeBox->Items->Add(user->gettedText1);
			if (user->gettedText2 != nullptr) {
				this->decodeBox->Items->Add(user->gettedText2);
				if (user->gettedText3 != nullptr)
					this->decodeBox->Items->Add(user->gettedText3);
			}
		}

		this->decodeBox->SelectedItem = text;
	}

	private: System::Void editBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ bmpb = (String^)this->filesCombo->SelectedItem;
		if (bmpb == "")
		{
			MessageBox::Show("Select the file", "Missing BMP File", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (this->outputBMP->Image != nullptr) {
			user->bmp3 = user->bmp2;
			user->bmp2 = user->bmp1;
			user->bmp1 = gcnew Bitmap(this->outputBMP->Image);
		}
			
		if (bmpb == "First File")
			bmp = gcnew Bitmap(user->bmp1);
		else if (bmpb == "Second File")
			bmp = gcnew Bitmap(user->bmp2);
		else if (bmpb == "Third File")
			bmp = gcnew Bitmap(user->bmp3);

		this->filesCombo->SelectedIndex = -1;
		this->outputBMP->Image = nullptr;
		this->currBMP->Image = bmp;
	}

	private: System::Void saveBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->outputBMP->Image == nullptr) {
			MessageBox::Show("Edit any file", "Missing BMP File", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
		saveFileDialog1->InitialDirectory = "c:\\";
		saveFileDialog1->Filter = "bmp files (*.bmp)|*.bmp|All files (*.*)|*.*";
		saveFileDialog1->FilterIndex = 1;
		saveFileDialog1->RestoreDirectory = true;
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ filePath = saveFileDialog1->FileName;
			bmp=gcnew Bitmap(this->outputBMP->Image);
			bmp->Save(filePath);
			MessageBox::Show("File is saved", "Done", MessageBoxButtons::OK);
		}
	}

	private: System::Void colorField1_Click(System::Object^ sender, System::EventArgs^ e) {
		Project::ColorSelector^ colorSelector = gcnew Project::ColorSelector();
		colorSelector->ShowDialog();
		cacheColor1 = colorSelector->color;
		colorField1->BackColor = *cacheColor1;
		this->hexField1->Text = String::Format("#{0:X2}{1:X2}{2:X2}", cacheColor1->R, cacheColor1->G, cacheColor1->B);
	}

	private: System::Void colorField2_Click(System::Object^ sender, System::EventArgs^ e) {
		Project::ColorSelector^ colorSelector = gcnew Project::ColorSelector();
		colorSelector->ShowDialog();
		cacheColor2 = colorSelector->color;
		colorField2->BackColor = *cacheColor2;
		this->hexField2->Text = String::Format("#{0:X2}{1:X2}{2:X2}", cacheColor2->R, cacheColor2->G, cacheColor2->B);
	}

	private: System::Void faqBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = "Вибираєте файл у вкладці Manager\n" +
			"Paint існує для побудови побітової карти\n" +
			"Якщо тикнути на колір, можна вибрати інший колір ВАУ\n" +
			"Та остання вкладка існує для кодування та декодування повідомлення\n" +
			"Якщо в New File є зображення, то його можна зберегти\n" +
			"На цьому буде пояснень, далі методом тику\n" +
			"Щасти!!!!!";
		MessageBox::Show(text, "FAQ", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void colorBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->colorBox1->SelectedIndex != -1) {
			cacheColor1 = ColorTranslator::FromHtml((String^)this->colorBox1->SelectedItem);
			colorField1->BackColor = *cacheColor1;
			this->hexField1->Text = String::Format("#{0:X2}{1:X2}{2:X2}", cacheColor1->R, cacheColor1->G, cacheColor1->B);
			this->colorBox1->SelectedIndex = -1;
		}
	}

	private: System::Void colorBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->colorBox2->SelectedIndex != -1) {
			cacheColor2 = ColorTranslator::FromHtml((String^)this->colorBox2->SelectedItem);
			colorField2->BackColor = *cacheColor2;
			this->hexField2->Text = String::Format("#{0:X2}{1:X2}{2:X2}", cacheColor2->R, cacheColor2->G, cacheColor2->B);
			this->colorBox2->SelectedIndex = -1;
		}
	}
	private: System::Void paintBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp == nullptr) {
			MessageBox::Show("Upload the file", "Missing BMP File", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (cacheColor1 == nullptr || cacheColor2 == nullptr) {
			MessageBox::Show("Choose the colors, please!", "Color Missing", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		bool bruh;
		String^ text = bruh::DecodeMessage(bmp, bruh);
		if (patternBox->SelectedIndex == 0) {
			bruh::FirstPattern(bmp, cacheColor1, cacheColor2);
		}
		else if (patternBox->SelectedIndex == 1) {
			bruh::SecondPattern(bmp, cacheColor1, cacheColor2);
		}
		else if (patternBox->SelectedIndex == 2)
		{
			bruh::ThirdPattern(bmp, cacheColor1, cacheColor2);
		}
		else if (patternBox->SelectedIndex == 3)
		{
			bruh::FourthPattern(bmp, cacheColor1, cacheColor2);
		}
		else {
			MessageBox::Show("U Stupid! BRUH!", "BRHUHHH!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (bruh)
			bruh::EncodeMessage(bmp, text);
		
		user->pattern3 = user->pattern2;
		user->pattern2 = user->pattern1;
		user->pattern1 = patternBox->Text;

		user->color13 = user->color12;
		user->color12 = user->color11;
		user->color11 = cacheColor1;

		user->color23 = user->color22;
		user->color22 = user->color21;
		user->color21 = cacheColor2;
		 
		updatePaint();

		MessageBox::Show("BMP file PAINTED", "Done!", MessageBoxButtons::OK);
		this->outputBMP->Image = bmp;
	}

	private: void updatePaint() {

		this->colorBox1->Items->Clear();
		if (user->color11 != nullptr) {
			this->colorBox1->Items->Add(String::Format("#{0:X2}{1:X2}{2:X2}", user->color11->R, user->color11->G, user->color11->B));
			this->colorBox1->SelectedIndex = 0;
			if (user->color12 != nullptr) {
				this->colorBox1->Items->Add(String::Format("#{0:X2}{1:X2}{2:X2}", user->color12->R, user->color12->G, user->color12->B));
				if (user->color13 != nullptr)
					this->colorBox1->Items->Add(String::Format("#{0:X2}{1:X2}{2:X2}", user->color13->R, user->color13->G, user->color13->B));
			}
		}

		this->colorBox2->Items->Clear();
		if (user->color21 != nullptr) {
			this->colorBox2->Items->Add(String::Format("#{0:X2}{1:X2}{2:X2}", user->color21->R, user->color21->G, user->color21->B));
			this->colorBox2->SelectedIndex = 0;
			if (user->color22 != nullptr) {
				this->colorBox2->Items->Add(String::Format("#{0:X2}{1:X2}{2:X2}", user->color22->R, user->color22->G, user->color22->B));
				if (user->color23 != nullptr)
					this->colorBox2->Items->Add(String::Format("#{0:X2}{1:X2}{2:X2}", user->color23->R, user->color23->G, user->color23->B));
			}
		}

		this->patternLastBox->Items->Clear();
		if (user->pattern1 != "" && user->pattern1 != nullptr) {
			this->patternBox->SelectedItem = user->pattern1;
			this->patternLastBox->Items->Add(user->pattern1);
			if (user->pattern2 != "" && user->pattern2 != nullptr) {
				this->patternLastBox->Items->Add(user->pattern2);
				if (user->pattern3 != "" && user->pattern3 != nullptr)
					this->patternLastBox->Items->Add(user->pattern3);
			}
		}
	}


	private: System::Void patternLastBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->patternLastBox->SelectedIndex != -1) {
			this->patternBox->SelectedItem = this->patternLastBox->SelectedItem;
			this->patternLastBox->SelectedIndex = -1;
		}
	}


	private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (this->outputBMP->Image != nullptr)
		{
			user->bmp3= user->bmp2;
			user->bmp2 = user->bmp1;
			user->bmp1 = gcnew Bitmap(this->outputBMP->Image);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = "<--------------->\nShkavrok Nazarii\nGithub=>https://github.com/LogSSS\n<--------------->\n" +
			"Тур Максим\nGituhub=>https://github.com/Max2R1\n<--------------->\n" +
			"Пиж Максим\nGituhub=>https://github.com/MaxPH-pixel\n<--------------->\n";;
		MessageBox::Show(text, "Authors", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}
