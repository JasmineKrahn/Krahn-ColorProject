#pragma once
//#include <Windows.h>
#include <string>
#include "selectionScreen.h"
#include "AddOwnedPaints.h"
#include "PaintOnObject.h"
#include "Colors.h"
#include "DesiredColors.h"
#include "OwnedColors.h"
#include <vector>
namespace DDDJFinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:

		Home(void)
		{
			InitializeComponent();
			//
			//
			desire = new DesiredColors();
			own = new OwnedColors();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: bool desireCheck = false;
	private: OwnedColors* own;
	private: DesiredColors* desire;
	private: System::Windows::Forms::DialogResult d;
	private: System::Windows::Forms::Label^ Username;


	private: System::Windows::Forms::ListBox^ ownedColors;
	private: System::Windows::Forms::ListBox^ desiredColors;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
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
			this->Username = (gcnew System::Windows::Forms::Label());
			this->ownedColors = (gcnew System::Windows::Forms::ListBox());
			this->desiredColors = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// Username
			// 
			this->Username->AutoSize = true;
			this->Username->Location = System::Drawing::Point(2006, 54);
			this->Username->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(89, 32);
			this->Username->TabIndex = 0;
			this->Username->Text = L"DDDJ";
			// 
			// ownedColors
			// 
			this->ownedColors->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ownedColors->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->ownedColors->FormattingEnabled = true;
			this->ownedColors->ItemHeight = 42;
			this->ownedColors->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Add New Paint" });
			this->ownedColors->Location = System::Drawing::Point(47, 74);
			this->ownedColors->Margin = System::Windows::Forms::Padding(8);
			this->ownedColors->Name = L"ownedColors";
			this->ownedColors->Size = System::Drawing::Size(356, 1012);
			this->ownedColors->TabIndex = 2;
			this->ownedColors->Click += gcnew System::EventHandler(this, &Home::ownedColors_Click);
			this->ownedColors->DoubleClick += gcnew System::EventHandler(this, &Home::ownedColors_DoubleClick);
			// 
			// desiredColors
			// 
			this->desiredColors->Cursor = System::Windows::Forms::Cursors::Hand;
			this->desiredColors->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->desiredColors->FormattingEnabled = true;
			this->desiredColors->ItemHeight = 42;
			this->desiredColors->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Add New Paint" });
			this->desiredColors->Location = System::Drawing::Point(1058, 174);
			this->desiredColors->Margin = System::Windows::Forms::Padding(8);
			this->desiredColors->Name = L"desiredColors";
			this->desiredColors->Size = System::Drawing::Size(1068, 466);
			this->desiredColors->TabIndex = 3;
			this->desiredColors->Click += gcnew System::EventHandler(this, &Home::desiredColors_Click);
			this->desiredColors->DoubleClick += gcnew System::EventHandler(this, &Home::DesiredColors_DoubleClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(118, 34);
			this->label1->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 32);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Owned Colors";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1473, 134);
			this->label2->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 32);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Desired Colors";
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(544, 457);
			this->button2->Margin = System::Windows::Forms::Padding(8);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(254, 114);
			this->button2->TabIndex = 9;
			this->button2->Text = L"View Paint on Obejct";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::button2_MouseDown);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(514, 72);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(304, 219);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(1995, 21);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(122, 95);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(612, 318);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 32);
			this->label3->TabIndex = 12;
			this->label3->Text = L"View Paint";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(692, 777);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(220, 200);
			this->pictureBox3->TabIndex = 13;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(780, 1004);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 32);
			this->label4->TabIndex = 14;
			this->label4->Text = L"label4";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1228, 1004);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 32);
			this->label5->TabIndex = 17;
			this->label5->Text = L"label5";
			this->label5->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Location = System::Drawing::Point(1144, 777);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(220, 200);
			this->pictureBox5->TabIndex = 16;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1669, 1006);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 32);
			this->label6->TabIndex = 19;
			this->label6->Text = L"label6";
			this->label6->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Location = System::Drawing::Point(1604, 777);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(220, 200);
			this->pictureBox6->TabIndex = 18;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(2314, 1097);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->desiredColors);
			this->Controls->Add(this->ownedColors);
			this->Controls->Add(this->Username);
			this->Controls->Add(this->pictureBox2);
			this->Margin = System::Windows::Forms::Padding(8);
			this->MinimumSize = System::Drawing::Size(2346, 1185);
			this->Name = L"Home";
			this->Padding = System::Windows::Forms::Padding(20);
			this->Text = L"Home";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void ownedColors_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		if (ownedColors->SelectedItem == "Add New Paint") {
			d = MessageBox::Show("Do You want to add a new paint to your list?", "New Paint",
				MessageBoxButtons::OKCancel, MessageBoxIcon::Question);
			if (d == System::Windows::Forms::DialogResult::OK) {
				DDDJFinalProject::AddOwnedPaints form3;
				form3.ShowDialog();
				if (form3.returnHexCode() != "label3") {
					Colors color("tester b", form3.returnHexCode());
					own->vectorAdd(color);
					vector<Colors*> Owned = own->vectorReturn();
					std::string Paint;
					ownedColors->Items->Clear();
					for (int i = 0;i < Owned.size();i++) {
						Paint = Owned.at(i)->getHexCode();
						ownedColors->Items->Add(gcnew String(Paint.c_str()));
					}
					ownedColors->Items->Add("Add New Paint");
				}
			}
		}
		else if (ownedColors->SelectedItem != nullptr) {
			d = MessageBox::Show("Do you want to delete this paint?", "Remove Paint",
				MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
			if (d == System::Windows::Forms::DialogResult::OK) {
				System::String^ managed = ownedColors->SelectedItem->ToString();
				std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);
				Colors color("tester b", unmanaged);
				own->vectorDelete(color);
				vector<Colors*> Owned = own->vectorReturn();
				std::string Paint;
				ownedColors->Items->Clear();
				for (int i = 0;i < Owned.size();i++) {
					Paint = Owned.at(i)->getHexCode();
					ownedColors->Items->Add(gcnew String(Paint.c_str()));
				}
				ownedColors->Items->Add("Add New Paint");
			}

		}
	}
	private: System::Void DesiredColors_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		if (desiredColors->SelectedItem == "Add New Paint") {
			d = MessageBox::Show("Do you want to add the desired paint to your list?", "New Paint",
				MessageBoxButtons::OKCancel, MessageBoxIcon::Question);
			if (d == System::Windows::Forms::DialogResult::OK) {

				DDDJFinalProject::AddOwnedPaints form3;
				form3.ShowDialog();
				if (form3.returnHexCode() != "label3") {
					Colors color("tester b", form3.returnHexCode());
					desire->vectorAdd(color);
					vector<Colors*> Desired = desire->vectorReturn();
					std::string Paint;
					desiredColors->Items->Clear();
					for (int i = 0;i < Desired.size();i++) {
						Paint = Desired.at(i)->getHexCode();
						desiredColors->Items->Add(gcnew String(Paint.c_str()));
					}
					desiredColors->Items->Add("Add New Paint");
				}
			}
		}
		else if (desiredColors->SelectedItem != nullptr) {
			d = MessageBox::Show("Do you want to delete this paint?", "Remove Paint",
				MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
			if (d == System::Windows::Forms::DialogResult::OK) {
				System::String^ managed = desiredColors->SelectedItem->ToString();
				std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);
				Colors color("tester b", unmanaged);
				desire->vectorDelete(color);
				vector<Colors*> Desired = desire->vectorReturn();
				std::string Paint;
				desiredColors->Items->Clear();
				for (int i = 0;i < Desired.size();i++) {
					Paint = Desired.at(i)->getHexCode();
					desiredColors->Items->Add(gcnew String(Paint.c_str()));
				}
				desiredColors->Items->Add("Add New Paint");
			}

		}
	}
	private: System::Void Login_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//DDDJFinalProject::selectionScreen form2;
		//form2.ShowDialog();
	}

	private: System::Void ownedColors_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ownedColors->SelectedItem != "Add New Paint" && ownedColors->Items->Count != 1) {
			System::String^ managed = ownedColors->SelectedItem->ToString();
			std::string Hex = msclr::interop::marshal_as<std::string>(managed);
			char str[10];
			strcpy_s(str, Hex.c_str());
			int r, g, b;
			sscanf_s(str, "%02x%02x%02x", &r, &g, &b);
			pictureBox1->BackColor = Color::FromArgb(r, g, b);
			pictureBox3->Visible = false;
			label4->Visible = false;
			pictureBox5->Visible = false;
			label5->Visible = false;
			pictureBox6->Visible = false;
			label6->Visible = false;
		}
	}
	private: System::Void desiredColors_Click(System::Object^ sender, System::EventArgs^ e) {
		if (desiredColors->SelectedItem != "Add New Paint" && desiredColors->Items->Count != 1) {
			System::String^ managed = desiredColors->SelectedItem->ToString();
			std::string Hex = msclr::interop::marshal_as<std::string>(managed);
			char str[10];
			strcpy_s(str, Hex.c_str());
			int r, g, b;
			sscanf_s(str, "%02x%02x%02x", &r, &g, &b);
			pictureBox1->BackColor = Color::FromArgb(r, g, b);
			if (Hex == "783cbe") {
				pictureBox3->Visible = true;
				label4->Visible = true;
				pictureBox5->Visible = true;
				label5->Visible = true;
				pictureBox6->Visible = true;
				label6->Visible = true;
				pictureBox3->BackColor = Color::FromArgb(179, 55, 50);
				pictureBox5->BackColor = Color::FromArgb(205, 203, 200);
				pictureBox6->BackColor = Color::FromArgb(0, 25, 200);
				label4->Text = "20%";
				label5->Text = "30%";
				label6->Text = "50%";
			}
			if (Hex == "c89619") {
				pictureBox3->Visible = true;
				label4->Visible = true;
				pictureBox5->Visible = true;
				label5->Visible = true;
				pictureBox6->Visible = true;
				label6->Visible = true;
				pictureBox3->BackColor = Color::FromArgb(179, 55, 50);
				pictureBox5->BackColor = Color::FromArgb(0, 0, 0);
				pictureBox6->BackColor = Color::FromArgb(255, 240, 60);
				label4->Text = "30%";
				label5->Text = "15%";
				label6->Text = "55%";
			}
		}
	}

	private: System::Void button2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		DDDJFinalProject::PaintOnObject form3;
		DDDJFinalProject::Home form1;
		vector<Colors*> Desired = desire->vectorReturn();
		std::string Paint;
		for (int i = 0; i < Desired.size(); i++) {
			Paint = Desired.at(i)->getHexCode();
			Colors color("tester b", Paint);
			form3.addToList(color);
		}
		form3.ShowDialog();
	}

};
}
