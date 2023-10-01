#include "LoginForm.h"
#include "MainForm.h"
#include "Bullshit.h"
#include "User.h"
#include "Windows.h"

#using <System.Configuration.dll>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Configuration;
using namespace System::Data::SqlClient;

void GetChanges(int & Form, bool& isOpened, bool& isApp, User^& user);
void Start(int& Form, User^& user);

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	bool isOpened = true;
	bool isApp = true;
	int Form = 1;

	Start(Form, user);
	while (isApp) {
		GetChanges(Form, isOpened, isApp, user);
	}
	Application::Exit();
}

void GetChanges(int& Form, bool& isOpened, bool& isApp, User^& user) {
	Project::LoginForm logForm;

	Project::MainForm^ mainForm = gcnew Project::MainForm(user);

	if (!isOpened) 
		isApp = false;

	if (Form == 1 && isOpened) {
		mainForm->ShowDialog();
		bruh::UpdateData(user);
		isOpened = false;
	}

	if (Form == 2 && isOpened) {
		logForm.ShowDialog();
		isOpened = false;
	}
	

	if (logForm.gotoApp) {
		user=logForm.user;
		logForm.gotoApp = false;
		isOpened = true;
		Form = 1;
		return;
	}

	if (mainForm->gotoLog) {
		bruh::UpdateConfig();
		user=nullptr;
		mainForm->gotoLog = false;
		isOpened = true;
		Form = 2;
		return;
	}

}

void Start(int& Form, User^& user) {

	String^ login = ConfigurationManager::AppSettings["bruh"];
	String^ pass = ConfigurationManager::AppSettings["bob"];

	String^ sqlQuery = "SELECT * FROM Users WHERE login=@login AND password=@pass";
	SqlConnection^ conn = bruh::GetDBConnection();
	if (conn == nullptr)
		return;

	SqlCommand^ command = gcnew SqlCommand(sqlQuery, conn);
	command->Parameters->AddWithValue("@login", login);
	command->Parameters->AddWithValue("@pass", pass);

	try {
		SqlDataReader^ reader = command->ExecuteReader();
		if (reader->Read()) {

			String^ tokenDate = bruh::addDateTime(reader->GetString(3), 30);
			String^ currDate = bruh::currentDateTime();

			if (bruh::compareDateTime(tokenDate, currDate)) {
				user = bruh::setUserData(reader);
				return;
			}

			MessageBox::Show("Last session expired");
		}
		Form = 2;
		bruh::UpdateConfig();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		conn->Close();
	}
}
