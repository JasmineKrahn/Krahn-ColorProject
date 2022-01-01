//#pragma once
//
//#include "userLinkedList.h"
//#include <string>
//#include <msclr/marshal_cppstd.h>
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
//	/// Summary for registrationScreen
//	/// </summary>
//	public ref class registrationScreen : public System::Windows::Forms::Form 
//	{
//	public:
//		registrationScreen(void)
//		{
//			InitializeComponent();
//			//
//			//TODO: Add the constructor code here
//			//
//		}
//	public:
//		//managerClass^ getUserList = gcnew managerClass;
//		//userLinkedList* listOfUsers = getUserList->getList();
//	protected:
//		/// <summary>
//		/// Clean up any resources being used.
//		/// </summary>
//		~registrationScreen()
//		{
//			if (components)
//			{
//				delete components;
//			}
//		}
//	private: System::Windows::Forms::Button^ registrationButton;
//
//
//
//
//	protected:
//
//	protected:
//
//
//
//
//
//	private: System::Windows::Forms::Label^ nameLabel;
//	private: System::Windows::Forms::Label^ usernameLabel;
//	private: System::Windows::Forms::Label^ passwordLabel;
//
//
//	private: System::Windows::Forms::TextBox^ userEnterName;
//	private: System::Windows::Forms::TextBox^ usernameEnter;
//	private: System::Windows::Forms::TextBox^ passwordEnter;
//	private: System::ComponentModel::IContainer^ components;
//
//
//	private:
//		/// <summary>
//		/// Required designer variable.
//		/// </summary>
//
//
//#pragma region Windows Form Designer generated code
//		/// <summary>
//		/// Required method for Designer support - do not modify
//		/// the contents of this method with the code editor.
//		/// </summary>
//		void InitializeComponent(void)
//		{
//			this->registrationButton = (gcnew System::Windows::Forms::Button());
//			this->nameLabel = (gcnew System::Windows::Forms::Label());
//			this->usernameLabel = (gcnew System::Windows::Forms::Label());
//			this->passwordLabel = (gcnew System::Windows::Forms::Label());
//			this->userEnterName = (gcnew System::Windows::Forms::TextBox());
//			this->usernameEnter = (gcnew System::Windows::Forms::TextBox());
//			this->passwordEnter = (gcnew System::Windows::Forms::TextBox());
//			this->SuspendLayout();
//			// 
//			// registrationButton
//			// 
//			this->registrationButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
//				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
//			this->registrationButton->Location = System::Drawing::Point(292, 349);
//			this->registrationButton->Name = L"registrationButton";
//			this->registrationButton->Size = System::Drawing::Size(157, 63);
//			this->registrationButton->TabIndex = 0;
//			this->registrationButton->Text = L"Register";
//			this->registrationButton->UseVisualStyleBackColor = true;
//			this->registrationButton->Click += gcnew System::EventHandler(this, &registrationScreen::registrationButton_Click);
//			// 
//			// nameLabel
//			// 
//			this->nameLabel->AutoSize = true;
//			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
//				static_cast<System::Byte>(0)));
//			this->nameLabel->Location = System::Drawing::Point(208, 83);
//			this->nameLabel->Name = L"nameLabel";
//			this->nameLabel->Size = System::Drawing::Size(61, 24);
//			this->nameLabel->TabIndex = 4;
//			this->nameLabel->Text = L"Name";
//			// 
//			// usernameLabel
//			// 
//			this->usernameLabel->AutoSize = true;
//			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
//				static_cast<System::Byte>(0)));
//			this->usernameLabel->Location = System::Drawing::Point(208, 157);
//			this->usernameLabel->Name = L"usernameLabel";
//			this->usernameLabel->Size = System::Drawing::Size(97, 24);
//			this->usernameLabel->TabIndex = 5;
//			this->usernameLabel->Text = L"Username";
//			// 
//			// passwordLabel
//			// 
//			this->passwordLabel->AutoSize = true;
//			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
//				static_cast<System::Byte>(0)));
//			this->passwordLabel->Location = System::Drawing::Point(208, 233);
//			this->passwordLabel->Name = L"passwordLabel";
//			this->passwordLabel->Size = System::Drawing::Size(92, 24);
//			this->passwordLabel->TabIndex = 6;
//			this->passwordLabel->Text = L"Password";
//			// 
//			// userEnterName
//			// 
//			this->userEnterName->Location = System::Drawing::Point(327, 83);
//			this->userEnterName->Name = L"userEnterName";
//			this->userEnterName->Size = System::Drawing::Size(122, 22);
//			this->userEnterName->TabIndex = 7;
//			// 
//			// usernameEnter
//			// 
//			this->usernameEnter->Location = System::Drawing::Point(327, 159);
//			this->usernameEnter->Name = L"usernameEnter";
//			this->usernameEnter->Size = System::Drawing::Size(122, 22);
//			this->usernameEnter->TabIndex = 8;
//			// 
//			// passwordEnter
//			// 
//			this->passwordEnter->Location = System::Drawing::Point(327, 233);
//			this->passwordEnter->Name = L"passwordEnter";
//			this->passwordEnter->Size = System::Drawing::Size(122, 22);
//			this->passwordEnter->TabIndex = 9;
//			// 
//			// registrationScreen
//			// 
//			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
//			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//			this->ClientSize = System::Drawing::Size(782, 553);
//			this->Controls->Add(this->passwordEnter);
//			this->Controls->Add(this->usernameEnter);
//			this->Controls->Add(this->userEnterName);
//			this->Controls->Add(this->passwordLabel);
//			this->Controls->Add(this->usernameLabel);
//			this->Controls->Add(this->nameLabel);
//			this->Controls->Add(this->registrationButton);
//			this->Name = L"registrationScreen";
//			this->Text = L"Register";
//			this->ResumeLayout(false);
//			this->PerformLayout();
//
//		}
//#pragma endregion
//	private: System::Void registrationButton_Click(System::Object^ sender, System::EventArgs^ e) {
//		selectionScreen^ selecScreen = gcnew selectionScreen();
//		userLinkedList* listOfUsers = selecScreen->lou;
//		// Convert Name Of User
//		System::String^ getNameOfUser = userEnterName->Text;
//		//msclr::interop::marshal_context nameUser;
//		//string convertedName = nameUser.marshal_as<string>(convertNameOfUser);
//
//		// Convert username
//		System::String^ getUsername = usernameEnter->Text;
//		//msclr::interop::marshal_context username;
//		//string convertedUsername = username.marshal_as<string>(convertUsername);
//
//		// Convert password
//		System::String^ getPassword = passwordEnter->Text;
//	//	msclr::interop::marshal_context pword;
//	//	string convertedPassword = pword.marshal_as<string>(convertPassword);
//		
//		// Checks if all of the fields have text in them before doing the add user process
//		if ((userEnterName->Text != "") || (usernameEnter->Text != "") || (passwordEnter->Text != ""))
//		{
//			if (listOfUsers->GetLength() == 0)
//			{
//				listOfUsers->addUser(getNameOfUser, getUsername, getPassword);
//				MessageBox::Show("Successfully added user", "Success");
//			}
//
//			// If there is at least one user in the list, it will automitically call searchUsername()
//			else if (listOfUsers->GetLength() > 0)
//			{
//				if (listOfUsers->searchForUsername(listOfUsers->head, getUsername) == true)
//				{
//					MessageBox::Show("Username already in use!", "Error!");
//				}
//				else
//				{
//					listOfUsers->addUser(getNameOfUser, getUsername, getPassword);
//					MessageBox::Show("Successfully added user", "Success");
//				}
//			}
//		}
//		
//		// If one or more of the fields were left blank, text is reset and a MessageBox is shown
//		else
//		{
//			userEnterName->Text = "";
//			usernameEnter->Text = "";
//			passwordEnter->Text = "";
//			MessageBox::Show("All of the required information has not been entered!", "Error");
//		}
//	}
//	};
//}
