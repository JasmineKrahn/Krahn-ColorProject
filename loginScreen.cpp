#include "loginScreen.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main() {
   Application::EnableVisualStyles();
   Application::SetCompatibleTextRenderingDefault(false);

   DDDJFinalProject::loginScreen form;
   Application::Run(% form);
}