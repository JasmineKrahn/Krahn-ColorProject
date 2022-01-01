//#include "userLinkedList.h"
//#include <string>
//#include <string.h>
//// Linked List Constructor, sets length to 0 and head to nullptr
//userLinkedList::userLinkedList()
//{
//   length = 0;
//   head = nullptr;
//}
//
//// Linked List destructor, calls make empty
//userLinkedList::~userLinkedList()
//{
//   MakeEmpty();
//}
//
//// Deletes all data and allocated memory. Resets head to nullptr and length to 0
//void userLinkedList::MakeEmpty()
//{
//   while (head != nullptr)
//   {
//      userList* temp = head->next;
//      delete head;
//      head = temp;
//   }
//   head = nullptr;
//   length = 0;
//}
//
//// Adds name of user, username, and password to linked list followed by '\n' to
//// break up list. Might get rid of that, not sure
//bool userLinkedList::addUser(System::String^ name, System::String^ username, System::String^ password)
//{
//   userList* temp = new userList();
//   if (temp == nullptr)
//   {
//      return false;
//   }
//   msclr::interop::marshal_context nameOfUser;
//   msclr::interop::marshal_context addUsername;
//   msclr::interop::marshal_context addPassword;
//   string convertedName = addUsername.marshal_as<string>(name);
//   string convertedUsername = addUsername.marshal_as<string>(username);
//   string convertedPassword = addPassword.marshal_as<string>(password);
//
//   temp->nameOfUser = convertedName;
//   temp->next = nullptr;
//   temp->next = head;
//   head = temp;
//   length++;
//   temp->un = convertedUsername;
//   temp->next = nullptr;
//   temp->next = head;
//   head = temp;
//   length++;
//   temp->pword = convertedPassword;
//   temp->next = nullptr;
//   temp->next = head;
//   head = temp;
//   length++;
//   return true;
//}
//
//// Returns length of list
//int userLinkedList::GetLength()
//{
//   return length;
//}
//
//// Searches the list and determines if the inputted username has a match in
//// the list. If there is a match, returns true, else returns false
//bool userLinkedList::searchForUsername(userList* head, System::String^ searchForName)
//{
//   msclr::interop::marshal_context username;
//   string convertedUsername = username.marshal_as<string>(searchForName);
//   userList* current = head;
//   while (current != nullptr)
//   {
//      if (current->un == convertedUsername)
//         return true;
//      else
//         current = current->next;
//   }
//   return false;
//}
//
//// Modified version of searchForUsername() that also factors in the inputted password. Sets two boolean variables,
//// foundUsername and foundPassword to false if they are found in the list. Returns false if one or both don't turn up matches. 
//bool userLinkedList::searchForUsernamePassword(userList* head, System::String^ searchForName, System::String^ searchForPassword)
//{
//   msclr::interop::marshal_context username;
//   msclr::interop::marshal_context password;
//   string convertedUsername = username.marshal_as<string>(searchForName);
//   string convertedPassword = password.marshal_as<string>(searchForPassword);
//   userList* current = head;
//   bool foundUsername, foundPassword = false;
//   while (current != nullptr)
//   {
//      if (current->un == convertedUsername)
//         foundUsername = true;
//      else if (current->un == convertedPassword)
//         foundPassword = true;
//
//      if ((foundUsername == true) && (foundPassword == true))
//         return true;
//      else
//         current = current->next;
//   }
//   return false;
//}  