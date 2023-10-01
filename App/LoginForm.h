#pragma once

#include "Windows.h"
#include "Bullshit.h"
#include "User.h"

#using <System.Configuration.dll>

namespace Project {

	using namespace System;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Configuration;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ loginBtn;
	private: System::Windows::Forms::LinkLabel^ toReg;




	protected:

	protected:



	private: System::Windows::Forms::TextBox^ loginField;
	private: System::Windows::Forms::TextBox^ passField;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ stayLogIn;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ loginRegField;
	private: System::Windows::Forms::TextBox^ passRegField;
	private: System::Windows::Forms::TextBox^ passRepRegField;
	private: System::Windows::Forms::Button^ regBtn;
	private: System::Windows::Forms::LinkLabel^ toLog;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->toReg = (gcnew System::Windows::Forms::LinkLabel());
			this->loginField = (gcnew System::Windows::Forms::TextBox());
			this->passField = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->stayLogIn = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->loginRegField = (gcnew System::Windows::Forms::TextBox());
			this->passRegField = (gcnew System::Windows::Forms::TextBox());
			this->passRepRegField = (gcnew System::Windows::Forms::TextBox());
			this->regBtn = (gcnew System::Windows::Forms::Button());
			this->toLog = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->loginBtn->Location = System::Drawing::Point(213, 24);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(122, 34);
			this->loginBtn->TabIndex = 0;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &LoginForm::loginBtn_Click);
			// 
			// toReg
			// 
			this->toReg->AutoSize = true;
			this->toReg->BackColor = System::Drawing::Color::Transparent;
			this->toReg->LinkColor = System::Drawing::Color::MidnightBlue;
			this->toReg->Location = System::Drawing::Point(210, 62);
			this->toReg->Name = L"toReg";
			this->toReg->Size = System::Drawing::Size(160, 17);
			this->toReg->TabIndex = 1;
			this->toReg->TabStop = true;
			this->toReg->Text = L"Don`t have acc yet\?";
			this->toReg->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::registerBtn_LinkClicked);
			// 
			// loginField
			// 
			this->loginField->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->loginField->Location = System::Drawing::Point(12, 30);
			this->loginField->Name = L"loginField";
			this->loginField->Size = System::Drawing::Size(182, 23);
			this->loginField->TabIndex = 3;
			// 
			// passField
			// 
			this->passField->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->passField->ForeColor = System::Drawing::SystemColors::WindowText;
			this->passField->Location = System::Drawing::Point(12, 79);
			this->passField->Name = L"passField";
			this->passField->PasswordChar = '*';
			this->passField->Size = System::Drawing::Size(182, 23);
			this->passField->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(12, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(9, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Password";
			// 
			// stayLogIn
			// 
			this->stayLogIn->AutoSize = true;
			this->stayLogIn->BackColor = System::Drawing::Color::Transparent;
			this->stayLogIn->Location = System::Drawing::Point(12, 108);
			this->stayLogIn->Name = L"stayLogIn";
			this->stayLogIn->Size = System::Drawing::Size(142, 21);
			this->stayLogIn->TabIndex = 7;
			this->stayLogIn->Text = L"Stay signed in";
			this->stayLogIn->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(12, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Login";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(9, 58);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Password";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(9, 108);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(128, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Repeat password";
			this->label5->Visible = false;
			// 
			// loginRegField
			// 
			this->loginRegField->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->loginRegField->ForeColor = System::Drawing::SystemColors::WindowText;
			this->loginRegField->Location = System::Drawing::Point(12, 30);
			this->loginRegField->Name = L"loginRegField";
			this->loginRegField->Size = System::Drawing::Size(182, 23);
			this->loginRegField->TabIndex = 11;
			this->loginRegField->Visible = false;
			// 
			// passRegField
			// 
			this->passRegField->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->passRegField->Location = System::Drawing::Point(12, 79);
			this->passRegField->Name = L"passRegField";
			this->passRegField->PasswordChar = '*';
			this->passRegField->Size = System::Drawing::Size(182, 23);
			this->passRegField->TabIndex = 12;
			this->passRegField->Visible = false;
			// 
			// passRepRegField
			// 
			this->passRepRegField->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->passRepRegField->Location = System::Drawing::Point(12, 129);
			this->passRepRegField->Name = L"passRepRegField";
			this->passRepRegField->PasswordChar = '*';
			this->passRepRegField->Size = System::Drawing::Size(182, 23);
			this->passRepRegField->TabIndex = 13;
			this->passRepRegField->Visible = false;
			// 
			// regBtn
			// 
			this->regBtn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->regBtn->Location = System::Drawing::Point(213, 24);
			this->regBtn->Name = L"regBtn";
			this->regBtn->Size = System::Drawing::Size(122, 34);
			this->regBtn->TabIndex = 14;
			this->regBtn->Text = L"Register";
			this->regBtn->UseVisualStyleBackColor = false;
			this->regBtn->Visible = false;
			this->regBtn->Click += gcnew System::EventHandler(this, &LoginForm::regBtn_Click);
			// 
			// toLog
			// 
			this->toLog->AutoSize = true;
			this->toLog->BackColor = System::Drawing::Color::Transparent;
			this->toLog->LinkColor = System::Drawing::Color::MidnightBlue;
			this->toLog->Location = System::Drawing::Point(210, 62);
			this->toLog->Name = L"toLog";
			this->toLog->Size = System::Drawing::Size(144, 17);
			this->toLog->TabIndex = 15;
			this->toLog->TabStop = true;
			this->toLog->Text = L"Already have acc\?";
			this->toLog->Visible = false;
			this->toLog->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::toLog_LinkClicked);
			// 
			// LoginForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(345, 171);
			this->Controls->Add(this->toLog);
			this->Controls->Add(this->regBtn);
			this->Controls->Add(this->passRepRegField);
			this->Controls->Add(this->passRegField);
			this->Controls->Add(this->loginRegField);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->stayLogIn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->passField);
			this->Controls->Add(this->loginField);
			this->Controls->Add(this->toReg);
			this->Controls->Add(this->loginBtn);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Code SemiBold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->TransparencyKey = System::Drawing::Color::Navy;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		//variables
	public: bool gotoApp = false;
	public: User^ user = nullptr;
		  //

	private: System::Void loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = this->loginField->Text;
		String^ pass = this->passField->Text;

		if (login->Length == 0)
		{
			MessageBox::Show("Please, enter login", "Login Field Empty", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (pass->Length == 0)
		{
			MessageBox::Show("Please, enter password", "Password Field Empty", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		pass = bruh::sha256_hash(pass);

		String^ sqlQuery = "SELECT * FROM Users WHERE login=@login AND password=@pass";

		SqlConnection^ conn = bruh::GetDBConnection();
		if (conn == nullptr)
			return;
		try {
			SqlCommand^ command = gcnew SqlCommand(sqlQuery, conn);
			command->Parameters->AddWithValue("@login", login);
			command->Parameters->AddWithValue("@pass", pass);

			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read()) {

				user = bruh::setUserData(reader);

				String^ date = bruh::currentDateTime();
				if (!this->stayLogIn->Checked) {
					login = "";
					pass = "";
					date = "";
				}
				String^ sqlUpdateQuery = "UPDATE Users SET date=@date where login=@login";

				SqlConnection^ connUpdate = bruh::GetDBConnection();
				if (connUpdate == nullptr)
					return;

				SqlCommand^ update = gcnew SqlCommand(sqlUpdateQuery, connUpdate);
				update->Parameters->AddWithValue("@date", date);
				update->Parameters->AddWithValue("@login", login);

				update->ExecuteNonQuery();

				bruh::UpdateConfig(login, pass);

				this->gotoApp = true;
				this->Close();
			}
			else {
				MessageBox::Show("Please, enter valid data", "Invalid data", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message,"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			conn->Close();
		}
	}

	private: System::Void registerBtn_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		toRegister();
	}
	private: System::Void regBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = this->loginRegField->Text;
		String^ pass = this->passRegField->Text;
		String^ passRep = this->passRepRegField->Text;


		if (login->Length == 0)
		{
			MessageBox::Show("Please, enter login", "Login Field Empty", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (login->Length <= 3)
		{
			MessageBox::Show("Your Login is too short", "Short Login", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (pass->Length == 0)
		{
			MessageBox::Show("Please, enter password", "Password Field Empty", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (pass->Length <= 4)
		{
			MessageBox::Show("Your password is too short", "Short Password", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (passRep->Length == 0)
		{
			MessageBox::Show("Please, repeate password", "Repeat Password Field Empty", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (passRep->Length >= 100)
		{
			MessageBox::Show("Your password is too long", "Long Password", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (pass != passRep) {
			MessageBox::Show("Passwords doesn`t match", "Password Difference", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		String^ sqlQuery = "SELECT * FROM Users WHERE login=@login";
		SqlConnection^ conn = bruh::GetDBConnection();
		if (conn == nullptr)
			return;
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, conn);
		command->Parameters->AddWithValue("@login", login);
		try {
			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read()) {
				MessageBox::Show("Please, choose other login", "Login Inaccessible", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally {
			conn->Close();
		}

		pass = bruh::sha256_hash(pass);

		String^ sqlQueryInsert = "INSERT INTO Users (login, password) VALUES (@login, @pass)";
		SqlConnection^ connInsert = bruh::GetDBConnection();
		if (connInsert == nullptr)
			return;
		SqlCommand^ insert = gcnew SqlCommand(sqlQueryInsert, connInsert);
		insert->Parameters->AddWithValue("@login", login);
		insert->Parameters->AddWithValue("@pass", pass);

		try {
			insert->ExecuteReader();
			MessageBox::Show("Registration is successful", "Successful", MessageBoxButtons::OK);
			toLogin();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally {
			connInsert->Close();
		}
	}
	private: System::Void toLog_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

		toLogin();
	}

	private: System::Void toRegister() {
		this->loginField->Text = "";
		this->passField->Text = "";
		this->stayLogIn->Checked = false;
		this->toReg->Hide();
		this->loginBtn->Hide();
		this->loginField->Hide();
		this->passField->Hide();
		this->label1->Hide();
		this->label2->Hide();
		this->stayLogIn->Hide();
		this->Text = L"Register";
		this->label3->Show();
		this->label4->Show();
		this->label5->Show();
		this->loginRegField->Show();
		this->passRegField->Show();
		this->passRepRegField->Show();
		this->regBtn->Show();
		this->toLog->Show();
	}

	private: System::Void toLogin() {
		this->loginRegField->Text = "";
		this->passRegField->Text = "";
		this->passRepRegField->Text = "";
		this->label3->Hide();
		this->label4->Hide();
		this->label5->Hide();
		this->loginRegField->Hide();
		this->passRegField->Hide();
		this->passRepRegField->Hide();
		this->regBtn->Hide();
		this->toLog->Hide();
		this->Text = L"Login";
		this->toReg->Show();
		this->loginBtn->Show();
		this->loginField->Show();
		this->passField->Show();
		this->label1->Show();
		this->label2->Show();
		this->stayLogIn->Show();
	}
	};

}
