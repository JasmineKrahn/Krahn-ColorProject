#pragma once
#include "ColorPhotoAdd.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include <sstream>
#include <iomanip>
namespace DDDJFinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for ColorPhoto
	/// </summary>
	public ref class ColorPhoto : public System::Windows::Forms::Form
	{
	public:
		ColorPhoto(void)
		{
			InitializeComponent();
			//
			RedAv = 0;
			BlueAv = 0;
			RedAv = 0;
			//TODO: Add the constructor code here
			//
		}
		std::string returnHexCode() {
			System::String^ managed = label3->Text;
			std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);
			return unmanaged;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ColorPhoto()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: bool leftPic = false;
	private: bool rightPic = false;
	private: int RedAv;
	private: int BlueAv;
	private: int GreenAv;
	private: Color averageColor;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label4;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		void setColor() {
			averageColor = Color::FromArgb(RedAv, GreenAv, BlueAv);
			int hexcolor = (RedAv << 16) + (GreenAv << 8) + BlueAv;
			std::stringstream sstream;
			sstream << std::setfill('0') << std::setw(6)
				<< std::hex << hexcolor;
			std::string result = sstream.str();
			label3->Text = gcnew String(result.c_str());
			if (leftPic == true && rightPic == true) {
				ColorPhoto::Width =530;
				pictureBox3->Visible = true;
				button4->Location = Point(450,284);
				button3->Location = Point(390,284);
			}
		}
	
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(55, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add Paint";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ColorPhoto::button1_MouseDown);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(281, 216);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Add Paint";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ColorPhoto::button2_MouseDown);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(322, 354);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Confirm";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ColorPhoto::button3_MouseDown);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(404, 354);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Cancel";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ColorPhoto::button4_MouseDown);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(12, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(202, 185);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(232, 25);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(201, 185);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(149, 252);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"current Hex Code: #";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 297);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(480, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Please add in atleast 2 pictures of your paint to have an accurate sample.  ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(278, 252);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(450, 25);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(198, 185);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(505, 216);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 23);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Add Paint";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ColorPhoto::button5_MouseDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(522, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Optional ";
			// 
			// ColorPhoto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 389);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"ColorPhoto";
			this->Text = L"ColorPhoto";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		//DDDJFinalProject::ColorPhotoAdd Add;
		openFileDialog1->Filter = "BMP Images (*.bmp)|*.bmp";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = true;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			gcroot<Drawing::Bitmap^> image2,image;
			image = gcnew Drawing::Bitmap(openFileDialog1->FileName);
			//Add.setImage(image);
			//Add.ShowDialog();
			//image = Add.backChange();
			pictureBox1->BackgroundImage = image;
			long redBucket = 0;
			long greenBucket = 0;
			long blueBucket = 0;
			long pixelCount = 0;
			int a = image->Width;
			int b = image->Height;
		/*	int e = image2->Width;
			int d = image2->Height;*/
			for (int y = 0; y < image->Height; y++)
			{
				for (int x = 0; x < image->Width; x++)
				{
					Color c = image->GetPixel(x, y);
					pixelCount++;
					redBucket += c.R;
					greenBucket += c.G;
					blueBucket += c.B;
				}
			}
			if (RedAv == 0 && BlueAv == 0 && GreenAv == 0) {
				RedAv = redBucket / pixelCount;
				GreenAv = greenBucket / pixelCount;
				BlueAv = blueBucket / pixelCount;
			}
			else {
				RedAv = (RedAv + (redBucket / pixelCount)) / 2;
				GreenAv = (GreenAv + (greenBucket / pixelCount)) / 2;
				BlueAv = (BlueAv + (blueBucket / pixelCount)) / 2;
			}
			leftPic = true;
			label1->Visible = true;
			label3->Visible = true;
			setColor();
		}
	}
private: System::Void button2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	//DDDJFinalProject::ColorPhotoAdd Add;
	openFileDialog1->Filter = "BMP Images (*.bmp)|*.bmp";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		gcroot<Drawing::Bitmap^> image;
		image = gcnew Drawing::Bitmap(openFileDialog1->FileName);
		//Add.setImage(image);
		//Add.ShowDialog();
		pictureBox2->BackgroundImage = image;
		long redBucket = 0;
		long greenBucket = 0;
		long blueBucket = 0;
		long pixelCount = 0;

		for (int y = 0; y < image->Height; y++)
		{
			for (int x = 0; x < image->Width; x++)
			{
				Color c = image->GetPixel(x, y);
				pixelCount++;
				redBucket += c.R;
				greenBucket += c.G;
				blueBucket += c.B;
			}
		}
		if (RedAv == 0 && BlueAv == 0 && GreenAv == 0) {
			RedAv = redBucket / pixelCount;
			GreenAv = greenBucket / pixelCount;
			BlueAv = blueBucket / pixelCount;
		}
		else{
			RedAv = (RedAv+ (redBucket / pixelCount))/2;
			GreenAv = (GreenAv + (greenBucket / pixelCount))/2;
			BlueAv = (BlueAv + (blueBucket / pixelCount))/2;
		}
		rightPic = true;
		label1->Visible = true;
		label3->Visible = true;
		setColor();
	}
}
private: System::Void button4_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (rightPic != true || leftPic != true)
		label3->Text = "label3";
	this->Close();
}
private: System::Void button3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (rightPic == true && leftPic == true) {
		std::string Hex = returnHexCode();
		this->Close();
	}
	else 
		MessageBox::Show("You must input atleast 2 pictures of your paint!", "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void button5_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	//DDDJFinalProject::ColorPhotoAdd Add;
	openFileDialog1->Filter = "BMP Images (*.bmp)|*.bmp";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
		gcroot<Drawing::Bitmap^> image;
		image = gcnew Drawing::Bitmap(openFileDialog1->FileName);
		//Add.setImage(image);
		//Add.ShowDialog();
		pictureBox3->BackgroundImage = image;
		long redBucket = 0;
		long greenBucket = 0;
		long blueBucket = 0;
		long pixelCount = 0;

		for (int y = 0; y < image->Height; y++){
			for (int x = 0; x < image->Width; x++){
				Color c = image->GetPixel(x, y);
				pixelCount++;
				redBucket += c.R;
				greenBucket += c.G;
				blueBucket += c.B;
			}
		}
		if (RedAv == 0 && BlueAv == 0 && GreenAv == 0) {
			RedAv = redBucket / pixelCount;
			GreenAv = greenBucket / pixelCount;
			BlueAv = blueBucket / pixelCount;			
		}
		else {
			RedAv = (RedAv + (redBucket / pixelCount)) / 2;
			GreenAv = (GreenAv + (greenBucket / pixelCount)) / 2;
			BlueAv = (BlueAv + (blueBucket / pixelCount)) / 2;
		}
		setColor();
	}
}
};
}
