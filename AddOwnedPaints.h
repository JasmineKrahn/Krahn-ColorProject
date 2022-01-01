#pragma once
#include "ColorWheel.h"
#include "ColorPhoto.h"
namespace DDDJFinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddOwnedPaints
	/// </summary>
	public ref class AddOwnedPaints : public System::Windows::Forms::Form
	{
	public:
		AddOwnedPaints(void)
		{
			InitializeComponent();
			//
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
		~AddOwnedPaints()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add in pictures of paint";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AddOwnedPaints::button1_MouseDown);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 83);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(214, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Select from color wheel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AddOwnedPaints::button2_MouseDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"How do you wish to add your paint\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(109, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"or";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(151, 143);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AddOwnedPaints::button3_MouseDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// AddOwnedPaints
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(244, 178);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"AddOwnedPaints";
			this->Text = L"AddPaints";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->Hide();
		DDDJFinalProject::ColorWheel wheel;
		wheel.ShowDialog();
		std::string Hex= wheel.returnHexCode();
		if (Hex != "label5") {
			label3->Text = gcnew String(Hex.c_str());
		}
	}
	private: System::Void button1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->Hide();
		DDDJFinalProject::ColorPhoto photo ;
		photo.ShowDialog();
		std::string Hex = photo.returnHexCode();
		if (Hex != "label3") {
			label3->Text = gcnew String(Hex.c_str());
		}
	}
	private: System::Void button3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->Close();
	}
};
}
