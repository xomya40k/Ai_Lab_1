#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Lab1::MyForm form;
    Application::Run(% form);
}

System::Void Lab1::MyForm::ExitButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

System::Void Lab1::MyForm::ExitButton_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
    ExitButton->FlatAppearance->BorderColor = Color().Brown;
}

System::Void Lab1::MyForm::ExitButton_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    ExitButton->FlatAppearance->BorderColor = Color().DimGray;
}

System::Void Lab1::MyForm::CrossSideButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    CrossSideButton->FlatAppearance->BorderColor = Color().YellowGreen;
    ZeroSideButton->FlatAppearance->BorderColor = Color().Firebrick;
}

System::Void Lab1::MyForm::ZeroSideButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    CrossSideButton->FlatAppearance->BorderColor = Color().Firebrick;
    ZeroSideButton->FlatAppearance->BorderColor = Color().YellowGreen;
}

