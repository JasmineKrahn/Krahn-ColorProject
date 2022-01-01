#pragma once
#include <vcclr.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <iomanip>
#include <sstream>

namespace DDDJFinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ColorWheel
	/// </summary>
	public ref class ColorWheel : public System::Windows::Forms::Form
	{
	public:
		ColorWheel(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		std::string returnHexCode() {
			System::String^ managed = label5->Text;
			std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);
			return unmanaged;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ColorWheel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: bool Check = false;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ColorWheel::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(35, 34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 388);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ColorWheel::pictureBox1_MouseDown);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(773, 34);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(145, 149);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(770, 254);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Green:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(770, 287);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Blue:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(770, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Red:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(840, 218);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(45, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"0";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ColorWheel::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(840, 284);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(45, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"0";
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ColorWheel::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(840, 254);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(45, 22);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"0";
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ColorWheel::textBox3_KeyPress);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(901, 251);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Change";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ColorWheel::button1_MouseDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(770, 342);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"current Hex Code #";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(906, 342);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"label5";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(88, 443);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(692, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Please Select a  Color on the Color Map, or set the RGB Values for the Color on t"
				L"he Right and Press Change";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(840, 437);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Confirm";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ColorWheel::button2_MouseDown);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(924, 437);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ColorWheel::button3_MouseDown);
			// 
			// ColorWheel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1026, 479);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"ColorWheel";
			this->Text = L"ColorWheel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		gcroot<Drawing::Bitmap^> image;
		image = gcnew Drawing::Bitmap("spectrum_chart.bmp");
		int X = e->X*1.34;
		int Y = e->Y*1.24;
		if (X > 599)
			X = 599;
		if (Y > 387)
			Y = 387;
		Color c = image->GetPixel(X, Y);
		std::string Red = std::to_string(c.R);
		this->textBox1->Text = gcnew String(Red.c_str());
		std::string Green = std::to_string(c.G);
		this->textBox3->Text = gcnew String(Green.c_str());
		std::string Blue = std::to_string(c.B);
		this->textBox2->Text = gcnew String(Blue.c_str());
		pictureBox2->BackColor = Color::FromArgb(c.R, c.G, c.B);
		int hexcolor = (c.R << 16) + (c.G << 8) + c.B;
		std::stringstream sstream;
		sstream << std::setfill('0') << std::setw(6)
			<< std::hex << hexcolor;
		std::string result = sstream.str();
		label5->Text = gcnew String(result.c_str());
		label4->Visible = true;
		label5->Visible = true;
		Check = true;
	}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {		
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}

private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void button1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	int Red = Convert::ToInt32(textBox1->Text);
	int Green = Convert::ToInt32(textBox3->Text);
	int Blue = Convert::ToInt32(textBox2->Text);
	if (Red > 255) {
		Red = 255;
		std::string RedS = std::to_string(255);
		this->textBox1->Text = gcnew String(RedS.c_str());	
	}
	if (Green > 255){
		Green = 255;
		std::string GreenS = std::to_string(255);
		this->textBox3->Text = gcnew String(GreenS.c_str());
	}
	if (Blue > 255) {
		Blue = 255;
		std::string BlueS = std::to_string(255);
		this->textBox2->Text = gcnew String(BlueS.c_str());
	}
	pictureBox2->BackColor = Color::FromArgb(Red, Green, Blue);
	int hexcolor = (Red << 16) + (Green << 8) + Blue;
	std::stringstream sstream;
	sstream << std::setfill('0') << std::setw(6)
		<< std::hex << hexcolor;
	std::string result = sstream.str();
	label5->Text = gcnew String(result.c_str());
	label4->Visible = true;
	label5->Visible = true;
	Check = true;

}
private: System::Void button3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	label5->Text = "label5";
	this->Hide();
}
private: System::Void button2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (Check == true) {
		std::string Hex= returnHexCode();
		this->Hide();
	}
	else {
		MessageBox::Show("You must select a color first!", "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
};
}
