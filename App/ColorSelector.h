#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ColorSelector
	/// </summary>
	public ref class ColorSelector : public System::Windows::Forms::Form
	{
	public:
		ColorSelector(void)
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
		~ColorSelector()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ rgbBox;
	protected:

	protected:
	private: System::Windows::Forms::Label^ colorField;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ exitBtn;
	private: System::Windows::Forms::TextBox^ hexField;

	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ColorSelector::typeid));
			this->rgbBox = (gcnew System::Windows::Forms::PictureBox());
			this->colorField = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->hexField = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rgbBox))->BeginInit();
			this->SuspendLayout();
			// 
			// rgbBox
			// 
			this->rgbBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->rgbBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rgbBox.Image")));
			this->rgbBox->Location = System::Drawing::Point(13, 63);
			this->rgbBox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->rgbBox->Name = L"rgbBox";
			this->rgbBox->Size = System::Drawing::Size(230, 160);
			this->rgbBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->rgbBox->TabIndex = 0;
			this->rgbBox->TabStop = false;
			this->rgbBox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ColorSelector::rgbBox_MouseDown);
			this->rgbBox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ColorSelector::rgbBox_MouseMove);
			this->rgbBox->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ColorSelector::rgbBox_MouseUp);
			// 
			// colorField
			// 
			this->colorField->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->colorField->Font = (gcnew System::Drawing::Font(L"Cascadia Code SemiBold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->colorField->ForeColor = System::Drawing::SystemColors::Control;
			this->colorField->Location = System::Drawing::Point(139, 250);
			this->colorField->Name = L"colorField";
			this->colorField->Size = System::Drawing::Size(99, 34);
			this->colorField->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Info;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Code SemiBold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(72, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 35);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Selector";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(10, 232);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"hex";
			// 
			// exitBtn
			// 
			this->exitBtn->Location = System::Drawing::Point(63, 298);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(110, 40);
			this->exitBtn->TabIndex = 5;
			this->exitBtn->Text = L"Choose";
			this->exitBtn->UseVisualStyleBackColor = true;
			this->exitBtn->Click += gcnew System::EventHandler(this, &ColorSelector::exitBtn_Click);
			// 
			// hexField
			// 
			this->hexField->Font = (gcnew System::Drawing::Font(L"Cascadia Code SemiBold", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hexField->Location = System::Drawing::Point(13, 250);
			this->hexField->Name = L"hexField";
			this->hexField->Size = System::Drawing::Size(99, 33);
			this->hexField->TabIndex = 6;
			this->hexField->TextChanged += gcnew System::EventHandler(this, &ColorSelector::hexField_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(136, 232);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"color";
			// 
			// ColorSelector
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(251, 350);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->hexField);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->colorField);
			this->Controls->Add(this->rgbBox);
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Code SemiBold", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Name = L"ColorSelector";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ColorSelector";
			this->Load += gcnew System::EventHandler(this, &ColorSelector::ColorSelector_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rgbBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Variables
		//public Color variable for color white
		public: Color color = Color::White;
		private: bool bruh = false;

		//
	private: System::Void exitBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			if (this->colorField->Text == "No color") {
				throw gcnew Exception();
			}
			color = ColorTranslator::FromHtml(hexField->Text);
			this->Close();
		}
		catch (Exception^ e) {
			this->colorField->Text = "No color";
			this->colorField->BackColor = Color::Transparent;
			MessageBox::Show("Invalid hex value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void ColorSelector_Load(System::Object^ sender, System::EventArgs^ e) {
		this->hexField->Text = String::Format("#{0:X2}{1:X2}{2:X2}", color.R, color.G, color.B);
		this->colorField->BackColor = color;
	}
	private: System::Void hexField_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (hexField->Text->Length != 7 || !hexField->Text->StartsWith("#")) {
				throw gcnew Exception();
			}
			color = ColorTranslator::FromHtml(hexField->Text);
			this->colorField->BackColor = color;
			this->colorField->Text = "";
		}
		catch (Exception^ e) {
			this->colorField->Text = "No color";
			this->colorField->BackColor = Color::Transparent;
		}
	}
	private: System::Void rgbBox_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		bruh = true;
	}
	private: System::Void rgbBox_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		bruh = false;
	}
	private: System::Void rgbBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (bruh) {
			try {
				Bitmap^ data = (Bitmap^)rgbBox->Image;
				Color clr = data->GetPixel(e->X, e->Y);
				this->colorField->BackColor = clr;
				this->hexField->Text = String::Format("#{0:X2}{1:X2}{2:X2}", clr.R, clr.G, clr.B);
				this->color = clr;
			}
			catch (Exception^ e) {
			}
		}
	}
};
}
