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
    ChosenSide->BackgroundImage = icons->Images[0];
    ptrMiniMax->huPlayer = 'X';
    ptrMiniMax->aiPlayer = 'O';
}

System::Void Lab1::MyForm::ZeroSideButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    CrossSideButton->FlatAppearance->BorderColor = Color().Firebrick;
    ZeroSideButton->FlatAppearance->BorderColor = Color().YellowGreen;
    ChosenSide->BackgroundImage = icons->Images[1];
    ptrMiniMax->huPlayer = 'O';
    ptrMiniMax->aiPlayer = 'X';
}

System::Void Lab1::MyForm::TopLabel_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    int xOffset;
    int yOffset;

    if (e->Button == System::Windows::Forms::MouseButtons::Left)
    {
        xOffset = -e->X - System::Windows::Forms::SystemInformation::FrameBorderSize.Width;
        yOffset = -e->Y - System::Windows::Forms::SystemInformation::FrameBorderSize.Height;
        mouseOffset = Point(xOffset, yOffset);
        isMouseDown = true;
    }
}

System::Void Lab1::MyForm::TopLabel_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    if (isMouseDown)
    {
        Point mousePos = System::Windows::Forms::Control::MousePosition;
        mousePos.Offset(mouseOffset.X, mouseOffset.Y);
        Location = mousePos;
    }
}

System::Void Lab1::MyForm::TopLabel_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    if (e->Button == System::Windows::Forms::MouseButtons::Left)
    {
        isMouseDown = false;
    }
}

System::Void Lab1::MyForm::MyForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
    ptrMiniMax->CleanBoard();
}

System::Void Lab1::MyForm::StartRestartButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (GameIsPlaying)
    {
        resultPanel->Visible = false;
        victoryLabel->Visible = false;
        defeatlabel->Visible = false;
        drawLabel->Visible = false;
        GameIsPlaying = false;
        SidePanel->Visible = true;
        GamePanel->Enabled = false;
        field0->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
        field1->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
        field2->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
        field3->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
        field4->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
        field5->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
        field6->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
        field7->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
        field8->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
        StartRestartButton->Text = "Начать";
        ptrMiniMax->CleanBoard();
        field_Clean();
    }
    else
    {
        GameIsPlaying = true;
        SidePanel->Visible = false;
        GamePanel->Enabled = true;
        StartRestartButton->Text = "Заново";
        if (ptrMiniMax->aiPlayer == 'X') {
            ai_Move();
        }
    }
}

System::Void Lab1::MyForm::field_Clicked(Button^ sender)
{
    sender->Enabled = false;
    if (ptrMiniMax->huPlayer == 'X')
        sender->BackgroundImage = sprites->Images[0];
    else
        sender->BackgroundImage = sprites->Images[1];
    ptrMiniMax->originBoard[sender->TabIndex] = ptrMiniMax->huPlayer;
    if (finish_game())
        return;
    else
        ai_Move();
}

System::Void Lab1::MyForm::field_Clean()
{
    field0->BackgroundImage = sprites->Images[2];
    field0->Enabled = true;
    field1->BackgroundImage = sprites->Images[2];
    field1->Enabled = true;
    field2->BackgroundImage = sprites->Images[2];
    field2->Enabled = true;
    field3->BackgroundImage = sprites->Images[2];
    field3->Enabled = true;
    field4->BackgroundImage = sprites->Images[2];
    field4->Enabled = true;
    field5->BackgroundImage = sprites->Images[2];
    field5->Enabled = true;
    field6->BackgroundImage = sprites->Images[2];
    field6->Enabled = true;
    field7->BackgroundImage = sprites->Images[2];
    field7->Enabled = true;
    field8->BackgroundImage = sprites->Images[2];
    field8->Enabled = true;
}

System::Void Lab1::MyForm::ai_Move()
{
    unsigned short int idImage;
    int aiMove = ptrMiniMax->StartMiniMax();
    ptrMiniMax->originBoard[aiMove] = ptrMiniMax->aiPlayer;
    if (ptrMiniMax->aiPlayer == 'X')
        idImage = 0;
    else
        idImage = 1;
 
    switch (aiMove)
    {
    case 0:
    {
        field0->BackgroundImage = sprites->Images[idImage];
        field0->Enabled = false;
        break;
    }
    case 1:
    {
        field1->BackgroundImage = sprites->Images[idImage];
        field1->Enabled = false;
        break;
    }
    case 2:
    {
        field2->BackgroundImage = sprites->Images[idImage];
        field2->Enabled = false;
        break;
    }
    case 3:
    {
        field3->BackgroundImage = sprites->Images[idImage];
        field3->Enabled = false;
        break;
    }
    case 4:
    {
        field4->BackgroundImage = sprites->Images[idImage];
        field4->Enabled = false;
        break;
    }
    case 5:
    {
        field5->BackgroundImage = sprites->Images[idImage];
        field5->Enabled = false;
        break;
    }
    case 6:
    {
        field6->BackgroundImage = sprites->Images[idImage];
        field6->Enabled = false;
        break;
    }
    case 7:
    {
        field7->BackgroundImage = sprites->Images[idImage];
        field7->Enabled = false;
        break;
    }
    case 8:
    {
        field8->BackgroundImage = sprites->Images[idImage];
        field8->Enabled = false;
        break;
    }
    default:
        break;
    }
    if (finish_game())
        return;
}

System::Boolean Lab1::MyForm::finish_game()
{
    bool availSpots[9];
    int count_availSpots = 0;

    for (int i = 0; i < 9; i++)
    {
        availSpots[i] = ptrMiniMax->emptyIndexies(ptrMiniMax->originBoard[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        if (availSpots[i] == false)
            count_availSpots++;
    }

    if (ptrMiniMax->winning(ptrMiniMax->originBoard, ptrMiniMax->huPlayer))
    {
        resultPanel->Visible = true;
        victoryLabel->Visible = true;
        GamePanel->Enabled = false;
        if (ptrMiniMax->originBoard[0] == ptrMiniMax->originBoard[1] == ptrMiniMax->originBoard[2]) {
            field0->FlatAppearance->BorderColor = Color().Green;
            field1->FlatAppearance->BorderColor = Color().Green;
            field2->FlatAppearance->BorderColor = Color().Green;
        }
        else if (ptrMiniMax->originBoard[3] == ptrMiniMax->originBoard[4] == ptrMiniMax->originBoard[5]) {
            field3->FlatAppearance->BorderColor = Color().Green;
            field4->FlatAppearance->BorderColor = Color().Green;
            field5->FlatAppearance->BorderColor = Color().Green;
        }
        else if (ptrMiniMax->originBoard[6] == ptrMiniMax->originBoard[7] == ptrMiniMax->originBoard[8]) {
            field6->FlatAppearance->BorderColor = Color().Green;
            field7->FlatAppearance->BorderColor = Color().Green;
            field8->FlatAppearance->BorderColor = Color().Green;
        }
        else if (ptrMiniMax->originBoard[0] == ptrMiniMax->originBoard[3] == ptrMiniMax->originBoard[6]) {
            field0->FlatAppearance->BorderColor = Color().Green;
            field3->FlatAppearance->BorderColor = Color().Green;
            field6->FlatAppearance->BorderColor = Color().Green;
        }
        else if (ptrMiniMax->originBoard[1] == ptrMiniMax->originBoard[4] == ptrMiniMax->originBoard[7]) {
            field1->FlatAppearance->BorderColor = Color().Green;
            field4->FlatAppearance->BorderColor = Color().Green;
            field7->FlatAppearance->BorderColor = Color().Green;
        }
        else if (ptrMiniMax->originBoard[2] == ptrMiniMax->originBoard[5] == ptrMiniMax->originBoard[8]) {
            field2->FlatAppearance->BorderColor = Color().Green;
            field5->FlatAppearance->BorderColor = Color().Green;
            field8->FlatAppearance->BorderColor = Color().Green;
        }
        else if (ptrMiniMax->originBoard[0] == ptrMiniMax->originBoard[4] == ptrMiniMax->originBoard[8]) {
            field0->FlatAppearance->BorderColor = Color().Green;
            field4->FlatAppearance->BorderColor = Color().Green;
            field8->FlatAppearance->BorderColor = Color().Green;
        }
        else if (ptrMiniMax->originBoard[2] == ptrMiniMax->originBoard[4] == ptrMiniMax->originBoard[6]) {
            field2->FlatAppearance->BorderColor = Color().Green;
            field4->FlatAppearance->BorderColor = Color().Green;
            field6->FlatAppearance->BorderColor = Color().Green;
        }
        return true;
    }
    else if (ptrMiniMax->winning(ptrMiniMax->originBoard, ptrMiniMax->aiPlayer))
    {
        resultPanel->Visible = true;
        defeatlabel->Visible = true;
        GamePanel->Enabled = false;
        if ((ptrMiniMax->originBoard[0] == ptrMiniMax->originBoard[1]) && (ptrMiniMax->originBoard[1] == ptrMiniMax->originBoard[2])) {
            field0->FlatAppearance->BorderColor = Color().Red;
            field1->FlatAppearance->BorderColor = Color().Red;
            field2->FlatAppearance->BorderColor = Color().Red;
        }
        else if ((ptrMiniMax->originBoard[3] == ptrMiniMax->originBoard[4]) && (ptrMiniMax->originBoard[4] == ptrMiniMax->originBoard[5])) {
            field3->FlatAppearance->BorderColor = Color().Red;
            field4->FlatAppearance->BorderColor = Color().Red;
            field5->FlatAppearance->BorderColor = Color().Red;
        }
        else if ((ptrMiniMax->originBoard[6] == ptrMiniMax->originBoard[7]) && (ptrMiniMax->originBoard[7] == ptrMiniMax->originBoard[8])) {
            field6->FlatAppearance->BorderColor = Color().Red;
            field7->FlatAppearance->BorderColor = Color().Red;
            field8->FlatAppearance->BorderColor = Color().Red;
        }
        else if ((ptrMiniMax->originBoard[0] == ptrMiniMax->originBoard[3]) && (ptrMiniMax->originBoard[3] == ptrMiniMax->originBoard[6])) {
            field0->FlatAppearance->BorderColor = Color().Red;
            field3->FlatAppearance->BorderColor = Color().Red;
            field6->FlatAppearance->BorderColor = Color().Red;
        }
        else if ((ptrMiniMax->originBoard[1] == ptrMiniMax->originBoard[4]) && (ptrMiniMax->originBoard[4] == ptrMiniMax->originBoard[7])) {
            field1->FlatAppearance->BorderColor = Color().Red;
            field4->FlatAppearance->BorderColor = Color().Red;
            field7->FlatAppearance->BorderColor = Color().Red;
        }
        else if ((ptrMiniMax->originBoard[2] == ptrMiniMax->originBoard[5]) && (ptrMiniMax->originBoard[5] == ptrMiniMax->originBoard[8])) {
            field2->FlatAppearance->BorderColor = Color().Red;
            field5->FlatAppearance->BorderColor = Color().Red;
            field8->FlatAppearance->BorderColor = Color().Red;
        }
        else if ((ptrMiniMax->originBoard[0] == ptrMiniMax->originBoard[4]) && (ptrMiniMax->originBoard[4] == ptrMiniMax->originBoard[8])) {
            field0->FlatAppearance->BorderColor = Color().Red;
            field4->FlatAppearance->BorderColor = Color().Red;
            field8->FlatAppearance->BorderColor = Color().Red;
        }
        else if ((ptrMiniMax->originBoard[2] == ptrMiniMax->originBoard[4]) && (ptrMiniMax->originBoard[4] == ptrMiniMax->originBoard[6])) {
            field2->FlatAppearance->BorderColor = Color().Red;
            field4->FlatAppearance->BorderColor = Color().Red;
            field6->FlatAppearance->BorderColor = Color().Red;
        }
        return true;
    }
    else if (count_availSpots == 9)
    {
        resultPanel->Visible = true;
        drawLabel->Visible = true;
        GamePanel->Enabled = false;
        return true;
    }
    else
    {
        return false;
    }
}

System::Void Lab1::MyForm::field0_Click(System::Object^ sender, System::EventArgs^ e)
{
    field_Clicked(field0);
}

System::Void Lab1::MyForm::field1_Click(System::Object^ sender, System::EventArgs^ e)
{
    field_Clicked(field1);
}

System::Void Lab1::MyForm::field2_Click(System::Object^ sender, System::EventArgs^ e)
{
    field_Clicked(field2);
}

System::Void Lab1::MyForm::field3_Click(System::Object^ sender, System::EventArgs^ e)
{
    field_Clicked(field3);
}

System::Void Lab1::MyForm::field4_Click(System::Object^ sender, System::EventArgs^ e)
{
    field_Clicked(field4);
}

System::Void Lab1::MyForm::field5_Click(System::Object^ sender, System::EventArgs^ e)
{
    field_Clicked(field5);
}

System::Void Lab1::MyForm::field6_Click(System::Object^ sender, System::EventArgs^ e)
{
    field_Clicked(field6);
}

System::Void Lab1::MyForm::field7_Click(System::Object^ sender, System::EventArgs^ e)
{
    field_Clicked(field7);
}

System::Void Lab1::MyForm::field8_Click(System::Object^ sender, System::EventArgs^ e)
{
    field_Clicked(field8);
}
