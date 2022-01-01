#pragma once
#include "selectionScreen.h"
#include "Home.h"
#include <string>
#include <msclr/marshal_cppstd.h>
namespace DDDJFinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for loginScreen
	/// </summary>
	public ref class loginScreen : public System::Windows::Forms::Form
	{
	public:
		loginScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::String^ username = "DDDJ";
   private: System::String^ password = "finalProject";
	public:
		//managerClass^ getUserList = gcnew managerClass;
		//userLinkedList* listOfUsers = getUserList->getList();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loginScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ loginButton;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::Label^ passwordLabel;

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
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// loginButton
			// 
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->Location = System::Drawing::Point(572, 692);
			this->loginButton->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(260, 97);
			this->loginButton->TabIndex = 0;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &loginScreen::loginButton_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(550, 446);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->richTextBox1->Multiline = false;
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox1->Size = System::Drawing::Size(389, 88);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(550, 291);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->richTextBox2->Multiline = false;
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox2->Size = System::Drawing::Size(389, 73);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"";
			this->richTextBox2->UseWaitCursor = true;
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLabel->Location = System::Drawing::Point(318, 308);
			this->usernameLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(190, 42);
			this->usernameLabel->TabIndex = 3;
			this->usernameLabel->Text = L"Username";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLabel->Location = System::Drawing::Point(320, 467);
			this->passwordLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(183, 42);
			this->passwordLabel->TabIndex = 4;
			this->passwordLabel->Text = L"Password";
			// 
			// loginScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1564, 1071);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->usernameLabel);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->loginButton);
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"loginScreen";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {

			// Convert username
			System::String^ getUsername = richTextBox2->Text;

			// Convert password
			System::String^ getPassword = richTextBox1->Text;

			if ((getUsername == username) && (getPassword == password))
			{
				DDDJFinalProject::Home form1;
				this->Hide();
				form1.ShowDialog();
			}
			else if ((getUsername == "") || (getPassword == ""))
			{
				MessageBox::Show("Required fields where not filled in.", "Error");
				richTextBox2->Text = "";
				richTextBox1->Text = "";
			}

			else
			{
				MessageBox::Show("Invalid Username or Passsword!", "Invalid Information");
			}
		}

	};
}
