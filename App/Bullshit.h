#pragma once
#include "User.h"
#include "Windows.h"

namespace bruh {

	using namespace System;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	String^ currentDateTime();
	bool compareDateTime(String^ date1, String^ date2);
	String^ addDateTime(String^ date, int days);
	String^ sha256_hash(String^ input);
	SqlConnection^ GetDBConnection();
	void UpdateConfig(String^ login = "", String^ pass = "");
	User^ setUserData(SqlDataReader^ reader);
	void UpdateData(User^ user);
	void UpdateColor1(SqlConnection^ conn, User^ user);
	void UpdateColor2(SqlConnection^ conn, User^ user);
	void UpdatePatterns(SqlConnection^ conn, User^ user);
	void UpdateSettedText(SqlConnection^ conn, User^ user);
	void UpdateGettedText(SqlConnection^ conn, User^ user);
	void UpdateBMP(SqlConnection^ conn, User^ user);
	String^ BMPtoString(Bitmap^ bmp);
	Bitmap^ StringtoBMP(String^ str);
	void EncodeMessage(Bitmap^ bmp, String^ message);
	String^ DecodeMessage(Bitmap^ bmp, bool& isMess);
	bool isMessageFit(Bitmap^ bmp, int len);
	void FirstPattern(Bitmap^ bmp, Color^ color1, Color^ color2);
	void SecondPattern(Bitmap^ bmp, Color^ color1, Color^ color2);
	void ThirdPattern(Bitmap^ bmp, Color^ color1, Color^ color2);
	void FourthPattern(Bitmap^ bmp, Color^ color1, Color^ color2);
	Color getContrast(Color^ color);
}