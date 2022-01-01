//#pragma once
//#include "loginScreen.h"
//#include "registrationScreen.h"
//#include "userLinkedList.h"
//namespace DDDJFinalProject {
//
//	using namespace System;
//	using namespace System::ComponentModel;
//	using namespace System::Collections;
//	using namespace System::Windows::Forms;
//	using namespace System::Data;
//	using namespace System::Drawing;
//
//	/// <summary>
//	/// Summary for selectionScreen
//	/// </summary>
//	public ref class selectionScreen : public System::Windows::Forms::Form
//	{
//	public:
//		selectionScreen(void)
//		{
//			InitializeComponent();
//			
//			//
//			//TODO: Add the constructor code here
//			//
//			
//		}
//	public: userLinkedList* lou = new userLinkedList();
//	protected:
//		/// <summary>
//		/// Clean up any resources being used.
//		/// </summary>
//		~selectionScreen()
//		{
//			if (components)
//			{
//				delete components;
//			}
//		}
//	private: System::Windows::Forms::Button^ userSelectLogin;
//	private: System::Windows::Forms::Button^ userSelectRegister;
//	protected:
//
//	protected:
//
//
//	private:
//		/// <summary>
//		/// Required designer variable.
//		/// </summary>
//		System::ComponentModel::Container^ components;
//
//#pragma region Windows Form Designer generated code
//		/// <summary>
//		/// Required method for Designer support - do not modify
//		/// the contents of this method with the code editor.
//		/// </summary>
//		void InitializeComponent(void)
//		{
//			this->userSelectLogin = (gcnew System::Windows::Forms::Button());
//			this->userSelectRegister = (gcnew System::Windows::Forms::Button());
//			this->SuspendLayout();
//			// 
//			// userSelectLogin
//			// 
//			this->userSelectLogin->Location = System::Drawing::Point(12, 12);
//			this->userSelectLogin->Name = L"userSelectLogin";
//			this->userSelectLogin->Size = System::Drawing::Size(146, 54);
//			this->userSelectLogin->TabIndex = 0;
//			this->userSelectLogin->Text = L"Login";
//			this->userSelectLogin->UseVisualStyleBackColor = true;
//			this->userSelectLogin->Click += gcnew System::EventHandler(this, &selectionScreen::button1_Click);
//			// 
//			// userSelectRegister
//			// 
//			this->userSelectRegister->Location = System::Drawing::Point(178, 12);
//			this->userSelectRegister->Name = L"userSelectRegister";
//			this->userSelectRegister->Size = System::Drawing::Size(146, 54);
//			this->userSelectRegister->TabIndex = 1;
//			this->userSelectRegister->Text = L"Register";
//			this->userSelectRegister->UseVisualStyleBackColor = true;
//			this->userSelectRegister->Click += gcnew System::EventHandler(this, &selectionScreen::button2_Click);
//			// 
//			// selectionScreen
//			// 
//			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
//			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//			this->ClientSize = System::Drawing::Size(337, 76);
//			this->Controls->Add(this->userSelectRegister);
//			this->Controls->Add(this->userSelectLogin);
//			this->Name = L"selectionScreen";
//			this->Text = L"Selection Screen";
//			this->ResumeLayout(false);
//
//		}
//#pragma endregion
//
//	// Displays login interface and hides selection screen
//	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
//		loginScreen^ login = gcnew loginScreen();
//		login->ShowDialog();
//		this->Hide();
//	}
//
//	// Displays registration interface and hides selection screen
//	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
//		registrationScreen^ registration = gcnew registrationScreen();
//		registration->ShowDialog();
//		this->Hide();
//	}
//	};
//}
