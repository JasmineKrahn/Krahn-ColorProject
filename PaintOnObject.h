#pragma once
#include "ColorObject.h"
#include <msclr\marshal_cppstd.h>
namespace DDDJFinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PaintOnObject
	/// </summary>
	public ref class PaintOnObject : public System::Windows::Forms::Form
	{
	public:
		PaintOnObject(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void addToList(Colors col)
		{
			listBox1->Items->Add(gcnew String(col.getHexCode().c_str()));
		}
	private: int imageNum;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PaintOnObject()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox7;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PaintOnObject::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(624, 835);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(178, 167);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &PaintOnObject::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(816, 835);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(176, 167);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &PaintOnObject::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(1006, 835);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(174, 167);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &PaintOnObject::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Location = System::Drawing::Point(1194, 835);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(178, 167);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &PaintOnObject::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1386, 835);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(198, 167);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &PaintOnObject::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Location = System::Drawing::Point(400, 28);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(1184, 754);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(168, 870);
			this->button1->Margin = System::Windows::Forms::Padding(6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 97);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Add a new Object";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PaintOnObject::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(82, 600);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(260, 165);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Color Object";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PaintOnObject::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 31;
			this->listBox1->Location = System::Drawing::Point(82, 56);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(260, 345);
			this->listBox1->TabIndex = 8;
			this->listBox1->Click += gcnew System::EventHandler(this, &PaintOnObject::listBox1_Click_1);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox7->Location = System::Drawing::Point(122, 428);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(171, 127);
			this->pictureBox7->TabIndex = 9;
			this->pictureBox7->TabStop = false;
			// 
			// PaintOnObject
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1713, 1072);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(6);
			this->MinimumSize = System::Drawing::Size(1745, 1160);
			this->Name = L"PaintOnObject";
			this->Padding = System::Windows::Forms::Padding(20);
			this->Text = L"PaintOnObject";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->Items->Count != 0 && listBox1->SelectedItem != nullptr)
		{
			System::String^ managed = listBox1->SelectedItem->ToString();
			std::string Hex = msclr::interop::marshal_as<std::string>(managed);
			int num = 0;
			if (Hex == "f5d548")
				num = 1;
			/*gcroot<Drawing::Bitmap^> image;
			image = gcnew Drawing::Bitmap(pictureBox6->BackgroundImage);*/
			//System::String^ img = image->ToString();
			//std::string img2 = msclr::interop::marshal_as<std::string>(managed);

			/*if (img == "chair.png")
				imageNum = 1;
			else if (image->ToString() == "backPackBMP.png")
				imageNum = 2;
			else if (image->ToString() == "doorBMP.png")
				imageNum = 3;
			else if (image->ToString() == "TableBMP.png")
				imageNum = 4;*/
			ColorObject co;
			co.greyImage(imageNum);
			co.colorMap(num);
			//gcroot<Drawing::Bitmap^> image2;
			//image2 = gcnew Drawing::Bitmap("colored.png");
			//pictureBox6->BackgroundImage = image2;
		}
	}

private: System::Void listBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->Items->Count != 0 && listBox1->SelectedItem != nullptr)
	{
		System::String^ managed = listBox1->SelectedItem->ToString();
		std::string Hex = msclr::interop::marshal_as<std::string>(managed);
		char str[10];
		strcpy_s(str, Hex.c_str());
		int r, g, b;
		sscanf_s(str, "%02x%02x%02x", &r, &g, &b);
		pictureBox7->BackColor = Color::FromArgb(r, g, b);
	}
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	imageNum = 0;
	gcroot<Drawing::Bitmap^> image;
	image = gcnew Drawing::Bitmap("vase_wow_crzy.png");
	pictureBox6->BackgroundImage = image;
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	imageNum = 3;
	gcroot<Drawing::Bitmap^> image;
	image = gcnew Drawing::Bitmap("doorBMP.png");
	pictureBox6->BackgroundImage = image;
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	imageNum = 2;
	gcroot<Drawing::Bitmap^> image;
	image = gcnew Drawing::Bitmap("backPackBMP.png");
	pictureBox6->BackgroundImage = image;
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	imageNum = 4;
	gcroot<Drawing::Bitmap^> image;
	image = gcnew Drawing::Bitmap("TableBMP.png");
	pictureBox6->BackgroundImage = image;
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	imageNum = 1;
	gcroot<Drawing::Bitmap^> image;
	image = gcnew Drawing::Bitmap("chair.png");
	pictureBox6->BackgroundImage = image;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->ShowDialog();
}
};
}
