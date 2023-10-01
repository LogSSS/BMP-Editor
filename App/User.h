#pragma once

#include "Windows.h"
#include <vector>

using namespace System;
using namespace System::Drawing;

public ref class User {
public:
	int id;
	String^ login;
	String^ password;
	String^ date;
	Bitmap^ bmp1;
	Bitmap^ bmp2;
	Bitmap^ bmp3;
	Color^ color11;
	Color^ color12;
	Color^ color13;
	Color^ color21;
	Color^ color22;
	Color^ color23;
	String^ pattern1;
	String^ pattern2;
	String^ pattern3;
	String^ settedText1;
	String^ settedText2;
	String^ settedText3;
	String^ gettedText1;
	String^ gettedText2;
	String^ gettedText3;

};
