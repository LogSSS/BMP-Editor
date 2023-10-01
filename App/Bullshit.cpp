#include "Bullshit.h"
#include "User.h"
#include <chrono>
#include <bitset>
#include <ctime>
#include <sstream>
#include <vcclr.h>
#include <vector>
#include <iomanip>
#include "Windows.h"
#include <msclr/marshal_cppstd.h>

namespace bruh {

	using namespace System;
	using namespace System::Configuration;
	using namespace System::Security::Cryptography;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;
	using namespace System::Text;
	using namespace System::IO;

	String^ currentDateTime() {
		auto now = std::chrono::system_clock::now();
		auto in_time_t = std::chrono::system_clock::to_time_t(now);
		std::stringstream ss;
		ss << std::put_time(std::gmtime(&in_time_t), "%Y-%m-%d %X");
		return gcnew String(ss.str().c_str());
	}

	bool compareDateTime(String^ date1, String^ date2) {
		std::tm tm1 = {};
		std::tm tm2 = {};
		std::istringstream ss1(msclr::interop::marshal_as<std::string>(date1));
		std::istringstream ss2(msclr::interop::marshal_as<std::string>(date2));
		ss1 >> std::get_time(&tm1, "%Y-%m-%d %X");
		ss2 >> std::get_time(&tm2, "%Y-%m-%d %X");
		std::time_t time1 = mktime(&tm1);
		std::time_t time2 = mktime(&tm2);

		return difftime(time1, time2) > 0;
	}

	String^ addDateTime(String^ date, int days) {
		std::string dateStr = msclr::interop::marshal_as<std::string>(date);
		std::tm time = {};
		std::stringstream ss(dateStr);
		ss >> std::get_time(&time, "%Y-%m-%d");

		time.tm_mday += days;
		std::mktime(&time);

		std::stringstream ss2;
		ss2 << std::put_time(&time, "%Y-%m-%d");
		return gcnew String(ss2.str().c_str());
	}

	String^ sha256_hash(String^ input) {
		SHA256Managed^ hasher = gcnew SHA256Managed();
		array<unsigned char>^ inputBytes = System::Text::Encoding::UTF8->GetBytes(input);
		array<unsigned char>^ hashBytes = hasher->ComputeHash(inputBytes);

		std::ostringstream output;
		for (int i = 0; i < hashBytes->Length; i++)
			output << std::hex << std::setw(2) << std::setfill('0') << (int)hashBytes[i];

		return gcnew String(output.str().c_str());
	}

	SqlConnection^ GetDBConnection() {
		try {
			String^ connString = "Data Source=DESKTOP-E6G1B3H\\SQLEXPRESS;Initial Catalog=Pract;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection();
			sqlConn->ConnectionString = connString;
			sqlConn->Open();
			return sqlConn;
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database", "DataBase Connection Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return nullptr;
		}
	}

	void UpdateConfig(String^ login, String^ pass) {
		System::Configuration::Configuration^ config =
			ConfigurationManager::OpenExeConfiguration(
				ConfigurationUserLevel::None);
		config->AppSettings->Settings->Remove("bruh");
		config->AppSettings->Settings->Add("bruh", login);
		config->AppSettings->Settings->Remove("bob");
		config->AppSettings->Settings->Add("bob", pass);
		config->Save(ConfigurationSaveMode::Modified);
		ConfigurationManager::RefreshSection("appSettings");
	}

	User^ setUserData(SqlDataReader^ reader) {
		User^ user = gcnew User();
		user->id = reader->GetInt32(0);
		user->login = reader->GetString(1);
		user->password = reader->GetString(2);
		if (!reader->IsDBNull(3))
			user->date = reader->GetString(3);
		if (!reader->IsDBNull(4))
			user->bmp1 = StringtoBMP(reader->GetString(4));
		if (!reader->IsDBNull(5))
			user->bmp2 = StringtoBMP(reader->GetString(5));
		if (!reader->IsDBNull(6))
			user->bmp3 = StringtoBMP(reader->GetString(6));
		if (!reader->IsDBNull(7))
			user->color11 = ColorTranslator::FromHtml(reader->GetString(7));
		if (!reader->IsDBNull(8))
			user->color12 = ColorTranslator::FromHtml(reader->GetString(8));
		if (!reader->IsDBNull(9))
			user->color13 = ColorTranslator::FromHtml(reader->GetString(9));
		if (!reader->IsDBNull(10))
			user->color21 = ColorTranslator::FromHtml(reader->GetString(10));
		if (!reader->IsDBNull(11))
			user->color22 = ColorTranslator::FromHtml(reader->GetString(11));
		if (!reader->IsDBNull(12))
			user->color23 = ColorTranslator::FromHtml(reader->GetString(12));
		if (!reader->IsDBNull(13))
			user->pattern1 = reader->GetString(13);
		if (!reader->IsDBNull(14))
			user->pattern2 = reader->GetString(14);
		if (!reader->IsDBNull(15))
			user->pattern3 = reader->GetString(15);
		if (!reader->IsDBNull(16))
			user->settedText1 = reader->GetString(16);
		if (!reader->IsDBNull(17))
			user->settedText2 = reader->GetString(17);
		if (!reader->IsDBNull(18))
			user->settedText3 = reader->GetString(18);
		if (!reader->IsDBNull(19))
			user->gettedText1 = reader->GetString(19);
		if (!reader->IsDBNull(20))
			user->gettedText2 = reader->GetString(20);
		if (!reader->IsDBNull(21))
			user->gettedText3 = reader->GetString(21);

		return user;
	}

	void UpdateData(User^ user) {
		if (user == nullptr)
			return;

		SqlConnection^ conn = bruh::GetDBConnection();

		if (conn == nullptr)
			return;

		UpdateColor1(conn, user);
		UpdateColor2(conn, user);
		UpdatePatterns(conn, user);
		UpdateSettedText(conn, user);
		UpdateGettedText(conn, user);
		UpdateBMP(conn, user);
		conn->Close();
	}

	void UpdateColor1(SqlConnection^ conn, User^ user) {
		int i = 0;
		if (user->color11 == nullptr)
			return;
		String^ sqlQuery = "UPDATE Users SET color11=@color11";
		if (user->color12 != nullptr) {
			sqlQuery += ", color12=@color12";
			i++;
		}
		if (user->color13 != nullptr) {
			sqlQuery += ", color13=@color13";
			i++;
		}
		SqlCommand^ command = gcnew SqlCommand(sqlQuery + " where login=@login and password=@pass;", conn);
		command->Parameters->AddWithValue("@color11", String::Format("#{0:X2}{1:X2}{2:X2}", user->color11->R, user->color11->G, user->color11->B));
		if (i > 0)
			command->Parameters->AddWithValue("@color12", String::Format("#{0:X2}{1:X2}{2:X2}", user->color12->R, user->color12->G, user->color12->B));
		if (i > 1)
			command->Parameters->AddWithValue("@color13", String::Format("#{0:X2}{1:X2}{2:X2}", user->color13->R, user->color13->G, user->color13->B));
		command->Parameters->AddWithValue("@pass", user->password);
		command->Parameters->AddWithValue("@login", user->login);
		try {
			command->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	void UpdateColor2(SqlConnection^ conn, User^ user) {
		int i = 0;
		if (user->color21 == nullptr)
			return;
		String^ sqlQuery = "UPDATE Users SET color21=@color21";
		if (user->color22 != nullptr) {
			sqlQuery += ", color22=@color22";
			i++;
		}
		if (user->color23 != nullptr) {
			sqlQuery += ", color23=@color23";
			i++;
		}
		SqlCommand^ command = gcnew SqlCommand(sqlQuery + " where login=@login and password=@pass;", conn);
		command->Parameters->AddWithValue("@color21", String::Format("#{0:X2}{1:X2}{2:X2}", user->color21->R, user->color21->G, user->color21->B));
		if (i > 0)
			command->Parameters->AddWithValue("@color22", String::Format("#{0:X2}{1:X2}{2:X2}", user->color22->R, user->color22->G, user->color22->B));
		if (i > 1)
			command->Parameters->AddWithValue("@color23", String::Format("#{0:X2}{1:X2}{2:X2}", user->color23->R, user->color23->G, user->color23->B));
		command->Parameters->AddWithValue("@pass", user->password);
		command->Parameters->AddWithValue("@login", user->login);
		try {
			command->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	void UpdatePatterns(SqlConnection^ conn, User^ user) {
		int i = 0;
		if (user->pattern1 == nullptr)
			return;
		String^ sqlQuery = "UPDATE Users SET pattern1=@pattern1";
		if (user->pattern2 != nullptr) {
			sqlQuery += ", pattern2=@pattern2";
			i++;
		}
		if (user->pattern3 != nullptr) {
			sqlQuery += ", pattern3=@pattern3";
			i++;
		}
		SqlCommand^ command = gcnew SqlCommand(sqlQuery + " where login=@login and password=@pass;", conn);
		command->Parameters->AddWithValue("@pattern1", user->pattern1);
		if (i > 0)
			command->Parameters->AddWithValue("@pattern2", user->pattern2);
		if (i > 1)
			command->Parameters->AddWithValue("@pattern3", user->pattern3);
		command->Parameters->AddWithValue("@pass", user->password);
		command->Parameters->AddWithValue("@login", user->login);
		try {
			command->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	void UpdateSettedText(SqlConnection^ conn, User^ user) {
		int i = 0;
		if (user->settedText1 == nullptr)
			return;
		String^ sqlQuery = "UPDATE Users SET setedText1=@settedText1";
		if (user->settedText2 != nullptr) {
			sqlQuery += ", setedText2=@settedText2";
			i++;
		}
		if (user->settedText3 != nullptr) {
			sqlQuery += ", setedText3=@settedText3";
			i++;
		}
		SqlCommand^ command = gcnew SqlCommand(sqlQuery + " where login=@login and password=@pass;", conn);
		command->Parameters->AddWithValue("@settedText1", user->settedText1);
		if (i > 0)
			command->Parameters->AddWithValue("@settedText2", user->settedText2);
		if (i > 1)
			command->Parameters->AddWithValue("@settedText3", user->settedText3);
		command->Parameters->AddWithValue("@pass", user->password);
		command->Parameters->AddWithValue("@login", user->login);
		try {
			command->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	void UpdateGettedText(SqlConnection^ conn, User^ user) {
		int i = 0;
		if (user->gettedText1 == nullptr)
			return;
		String^ sqlQuery = "UPDATE Users SET getedText1=@gettedText1";
		if (user->gettedText2 != nullptr) {
			sqlQuery += ", getedText2=@gettedText2";
			i++;
		}
		if (user->gettedText3 != nullptr) {
			sqlQuery += ", getedText3=@gettedText3";
			i++;
		}
		SqlCommand^ command = gcnew SqlCommand(sqlQuery + " where login=@login and password=@pass;", conn);
		command->Parameters->AddWithValue("@gettedText1", user->gettedText1);
		if (i > 0)
			command->Parameters->AddWithValue("@gettedText2", user->gettedText2);
		if (i > 1)
			command->Parameters->AddWithValue("@gettedText3", user->gettedText3);
		command->Parameters->AddWithValue("@pass", user->password);
		command->Parameters->AddWithValue("@login", user->login);
		try {
			command->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	void UpdateBMP(SqlConnection^ conn, User^ user) {
		int i = 0;
		if (user->bmp1 == nullptr)
			return;
		String^ sqlQuery = "UPDATE Users SET bmp1=@bmp1";
		if (user->bmp2 != nullptr) {
			sqlQuery += ", bmp2=@bmp2";
			i++;
		}
		if (user->bmp3 != nullptr) {
			sqlQuery += ", bmp3=@bmp3";
			i++;
		}
		SqlCommand^ command = gcnew SqlCommand(sqlQuery + " where login=@login and password=@pass;", conn);
		command->Parameters->AddWithValue("@bmp1", BMPtoString(user->bmp1));
		if (i > 0)
			command->Parameters->AddWithValue("@bmp2", BMPtoString(user->bmp3));
		if (i > 1)
			command->Parameters->AddWithValue("@bmp3", BMPtoString(user->bmp2));
		command->Parameters->AddWithValue("@pass", user->password);
		command->Parameters->AddWithValue("@login", user->login);
		try {
			command->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	String^ BMPtoString(Bitmap^ bmp) {
		if (bmp == nullptr)
			return nullptr;
		MemoryStream^ mem = gcnew MemoryStream();
		bmp->Save(mem, Imaging::ImageFormat::Bmp);
		array<System::Byte>^ byteArr = mem->ToArray();
		return  Encoding::Default->GetString(byteArr);
	}

	Bitmap^ StringtoBMP(String^ str) {
		if (str == nullptr)
			return nullptr;
		array<System::Byte>^ byteArr = Encoding::Default->GetBytes(str);
		MemoryStream^ mem = gcnew MemoryStream(byteArr);
		return gcnew Bitmap(mem);
	}

	void EncodeMessage(Bitmap^ bmp, String^ message)
	{
		message = "\0\0\0\0\0\0" + message + "\0\0\0";
		int messageLength = message->Length;

		array<Byte>^ messageBytes = System::Text::Encoding::ASCII->GetBytes(message);
		int byteIndex = 0;

		for (int y = 0; y < bmp->Height; y++)
		{
			for (int x = 0; x < bmp->Width; x++)
			{
				Color pixelColor = bmp->GetPixel(x, y);

				if (byteIndex < messageLength)
				{
					Color newColor = Color::FromArgb(pixelColor.R, pixelColor.G, messageBytes[byteIndex]);
					bmp->SetPixel(x, y, newColor);
					byteIndex++;
				}
			}
		}
	}

	String^ DecodeMessage(Bitmap^ bmp, bool& isMess)
	{
		isMess = false;
		std::string decodedMessage = "";

		for (int y = 0; y < bmp->Height; y++)
		{
			for (int x = 0; x < bmp->Width; x++)
			{
				Color pixelColor = bmp->GetPixel(x, y);

				Byte messageByte = pixelColor.B;

				decodedMessage += (char)messageByte;
			}
		}
		int c = 0;
		for (int i = 0; i < 6; i++)
			if (decodedMessage[i] == '\0')
				c++;

		if (c != 6)
			goto bruh;

		decodedMessage.erase(0, 6);
		c = 0;
		bool bob = false;
		if (decodedMessage[0] == '\0') {
			goto bruh;
		}
		for (int i = 0; i < decodedMessage.size(); i++) {

			if (decodedMessage[i] == '\0') {
				c++;
				bob = true;
			}
			else
				c = 0;
			if (bob && c == 0)
				break;
			if (c == 3)
				isMess = true;
		}
	bruh:
		return gcnew String(decodedMessage.c_str());
	}

	bool isMessageFit(Bitmap^ bmp, int len) {
		len += 9;
		int maxMessageLength = (bmp->Width * bmp->Height * 3) / 8;
		if (len > maxMessageLength)
			return false;
		return true;
	}

	void FirstPattern(Bitmap^ bmp, Color^ color1, Color^ color2) {
		int width = bmp->Width;
		int height = bmp->Height;
		Graphics^ graphics = Graphics::FromImage(bmp);
		Random^ random = gcnew Random();

		graphics->FillRectangle(gcnew SolidBrush(Color::White), 0, 0, width, height);


		int maxPlams = width * height / 50;

		for (int i = 0; i < maxPlams; i++)
		{
			int x = random->Next(width);
			int y = random->Next(height);
			int size = random->Next(5, 15);
			Color color = random->Next(2) == 0 ? *color1 : *color2;
			graphics->FillRectangle(gcnew SolidBrush(color), x, y, size, size);
		}

		delete random;
		delete graphics;
	}

	void SecondPattern(Bitmap^ bmp, Color^ color1, Color^ color2) {
		int width = bmp->Width;
		int height = bmp->Height;

		Graphics^ graphics = Graphics::FromImage(bmp);

		int centerX = width / 2;
		int centerY = height / 2;
		int maxRadius = (int)Math::Sqrt(width * width + height * height) / 2;

		double sizeRatio = Math::Sqrt(width * height) / 100.0;
		int circleCount = (int)Math::Round(sizeRatio);

		int cornerRadius = maxRadius;
		int cornerCircleCount = (int)Math::Round(sizeRatio * cornerRadius / maxRadius);

		for (int i = 0; i < circleCount; i++)
		{
			int radius = maxRadius - i * (maxRadius / circleCount);
			Color color = (i % 2 == 0) ? *color1 : *color2;

			int x = centerX - radius;
			int y = centerY - radius;
			int diameter = radius * 2;

			if (x + diameter > 0 && y + diameter > 0 && x < width && y < height)
			{
				SolidBrush^ brush = gcnew SolidBrush(color);
				graphics->FillEllipse(brush, x, y, diameter, diameter);
			}

			if (i < cornerCircleCount)
			{
				int cornerRadiusCurrent = cornerRadius - i * (cornerRadius / cornerCircleCount);
				int cornerX = centerX - cornerRadiusCurrent;
				int cornerY = centerY - cornerRadiusCurrent;
				int cornerDiameter = cornerRadiusCurrent * 2;

				if (cornerX + cornerDiameter > 0 && cornerY + cornerDiameter > 0 && cornerX < width && cornerY < height)
				{
					SolidBrush^ brush = gcnew SolidBrush(color);
					graphics->FillEllipse(brush, cornerX, cornerY, cornerDiameter, cornerDiameter);
				}
			}
		}

		delete graphics;
	}

	void ThirdPattern(Bitmap^ bmp, Color^ color1, Color^ color2) {

		int width = bmp->Width;
		int height = bmp->Height;

		double xmin = -1.75;
		double xmax = 0.75;
		double ymin = -1.0;
		double ymax = 1.0;
		int maxIterations = 1000;

		double dx = (xmax - xmin) / width;
		double dy = (ymax - ymin) / height;

		// Заповнюємо зображення фракталом Мандельброта
		for (int x = 0; x < width; x++)
		{
			for (int y = 0; y < height; y++)
			{
				double cx = xmin + x * dx;
				double cy = ymin + y * dy;

				double zx = 0;
				double zy = 0;
				int iteration = 0;

				while (zx * zx + zy * zy < 4 && iteration < maxIterations)
				{
					double zxNew = zx * zx - zy * zy + cx;
					double zyNew = 2 * zx * zy + cy;

					zx = zxNew;
					zy = zyNew;

					iteration++;
				}

				Color color = (iteration < maxIterations) ? *color1 : *color2;
				bmp->SetPixel(x, y, color);
			}
		}
	}

	void FourthPattern(Bitmap^ bmp, Color^ color1, Color^ color2) {
		int width = bmp->Width;
		int height = bmp->Height;

		Graphics^ g = Graphics::FromImage(bmp);
		Random^ random = gcnew Random();


		array<Color^>^ colors = gcnew array<Color^> {
			*color1, * color2, getContrast(color1), getContrast(color2)
		};

		int patternSize = 40;
		int colorIndex = 0;

		for (int y = 0; y < height; y++)
		{
			for (int x = 0; x < width; x++)
			{
				int patternX = x % patternSize;
				int patternY = y % patternSize;
				int patternIndex = (patternX / (patternSize / colors->Length)) + (patternY / (patternSize / colors->Length));

				Color^ pixelColor = colors[patternIndex % random->Next(1, 4)];

				bmp->SetPixel(x, y, *pixelColor);
			}
		}
		delete g;
		delete random;
	}

	Color getContrast(Color^ color) {
		int brightness = (int)Math::Sqrt(
			color->R * color->R * 0.299 +
			color->G * color->G * 0.587 +
			color->B * color->B * 0.114
		);
		return (brightness < 130) ? Color::White : Color::Black;
	}
}