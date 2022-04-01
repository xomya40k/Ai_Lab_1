#pragma once
#include "MiniMax.h"

namespace Lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		MiniMax* ptrMiniMax;
		Point mouseOffset;
		bool isMouseDown = false;
		bool GameIsPlaying = false;

	private: System::Windows::Forms::ImageList^ sprites;
	private: System::Windows::Forms::Panel^ SidePanel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ ChosenSide;
	private: System::Windows::Forms::Panel^ resultPanel;
	private: System::Windows::Forms::Label^ defeatlabel;
	private: System::Windows::Forms::Label^ victoryLabel;
	private: System::Windows::Forms::Label^ drawLabel;


	private: System::Windows::Forms::ImageList^ icons;

	public:
		MyForm(void)
		{
			InitializeComponent();
			ptrMiniMax = new MiniMax;
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				ptrMiniMax->~MiniMax();
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ field8;
	private: System::Windows::Forms::Button^ field7;
	private: System::Windows::Forms::Button^ field6;
	private: System::Windows::Forms::Button^ field5;
	private: System::Windows::Forms::Button^ field4;
	private: System::Windows::Forms::Button^ field3;
	private: System::Windows::Forms::Button^ field2;
	private: System::Windows::Forms::Button^ field1;
	private: System::Windows::Forms::Button^ field0;


	private: System::Windows::Forms::Panel^ TopPanel;
	private: System::Windows::Forms::Label^ TopLabel;
	private: System::Windows::Forms::Panel^ GamePanel;
	private: System::Windows::Forms::Panel^ HeaderPanel;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Label^ IconImage;
	private: System::Windows::Forms::Label^ SideInfoLabel;
	private: System::Windows::Forms::Button^ StartRestartButton;
	private: System::Windows::Forms::Button^ ZeroSideButton;
	private: System::Windows::Forms::Button^ CrossSideButton;

	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->TopPanel = (gcnew System::Windows::Forms::Panel());
			this->SidePanel = (gcnew System::Windows::Forms::Panel());
			this->SideInfoLabel = (gcnew System::Windows::Forms::Label());
			this->ZeroSideButton = (gcnew System::Windows::Forms::Button());
			this->CrossSideButton = (gcnew System::Windows::Forms::Button());
			this->StartRestartButton = (gcnew System::Windows::Forms::Button());
			this->ChosenSide = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TopLabel = (gcnew System::Windows::Forms::Label());
			this->GamePanel = (gcnew System::Windows::Forms::Panel());
			this->field8 = (gcnew System::Windows::Forms::Button());
			this->field7 = (gcnew System::Windows::Forms::Button());
			this->field6 = (gcnew System::Windows::Forms::Button());
			this->field5 = (gcnew System::Windows::Forms::Button());
			this->field4 = (gcnew System::Windows::Forms::Button());
			this->field3 = (gcnew System::Windows::Forms::Button());
			this->field2 = (gcnew System::Windows::Forms::Button());
			this->field1 = (gcnew System::Windows::Forms::Button());
			this->field0 = (gcnew System::Windows::Forms::Button());
			this->HeaderPanel = (gcnew System::Windows::Forms::Panel());
			this->IconImage = (gcnew System::Windows::Forms::Label());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->sprites = (gcnew System::Windows::Forms::ImageList(this->components));
			this->icons = (gcnew System::Windows::Forms::ImageList(this->components));
			this->resultPanel = (gcnew System::Windows::Forms::Panel());
			this->defeatlabel = (gcnew System::Windows::Forms::Label());
			this->victoryLabel = (gcnew System::Windows::Forms::Label());
			this->drawLabel = (gcnew System::Windows::Forms::Label());
			this->TopPanel->SuspendLayout();
			this->SidePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChosenSide))->BeginInit();
			this->GamePanel->SuspendLayout();
			this->HeaderPanel->SuspendLayout();
			this->resultPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// TopPanel
			// 
			this->TopPanel->Controls->Add(this->SidePanel);
			this->TopPanel->Controls->Add(this->StartRestartButton);
			this->TopPanel->Controls->Add(this->ChosenSide);
			this->TopPanel->Controls->Add(this->label1);
			this->TopPanel->Location = System::Drawing::Point(13, 46);
			this->TopPanel->Name = L"TopPanel";
			this->TopPanel->Size = System::Drawing::Size(312, 53);
			this->TopPanel->TabIndex = 0;
			// 
			// SidePanel
			// 
			this->SidePanel->Controls->Add(this->SideInfoLabel);
			this->SidePanel->Controls->Add(this->ZeroSideButton);
			this->SidePanel->Controls->Add(this->CrossSideButton);
			this->SidePanel->Location = System::Drawing::Point(0, 0);
			this->SidePanel->Name = L"SidePanel";
			this->SidePanel->Size = System::Drawing::Size(111, 53);
			this->SidePanel->TabIndex = 4;
			// 
			// SideInfoLabel
			// 
			this->SideInfoLabel->AutoSize = true;
			this->SideInfoLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->SideInfoLabel->Location = System::Drawing::Point(0, 0);
			this->SideInfoLabel->Name = L"SideInfoLabel";
			this->SideInfoLabel->Size = System::Drawing::Size(111, 15);
			this->SideInfoLabel->TabIndex = 0;
			this->SideInfoLabel->Text = L"Выберите сторону";
			// 
			// ZeroSideButton
			// 
			this->ZeroSideButton->BackColor = System::Drawing::Color::Gray;
			this->ZeroSideButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ZeroSideButton.BackgroundImage")));
			this->ZeroSideButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ZeroSideButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ZeroSideButton->FlatAppearance->BorderColor = System::Drawing::Color::Firebrick;
			this->ZeroSideButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ZeroSideButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ZeroSideButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ZeroSideButton->ForeColor = System::Drawing::Color::Transparent;
			this->ZeroSideButton->Location = System::Drawing::Point(67, 18);
			this->ZeroSideButton->Name = L"ZeroSideButton";
			this->ZeroSideButton->Size = System::Drawing::Size(29, 29);
			this->ZeroSideButton->TabIndex = 2;
			this->ZeroSideButton->TabStop = false;
			this->ZeroSideButton->UseVisualStyleBackColor = false;
			this->ZeroSideButton->Click += gcnew System::EventHandler(this, &MyForm::ZeroSideButton_Click);
			// 
			// CrossSideButton
			// 
			this->CrossSideButton->BackColor = System::Drawing::Color::Gray;
			this->CrossSideButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CrossSideButton.BackgroundImage")));
			this->CrossSideButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CrossSideButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CrossSideButton->FlatAppearance->BorderColor = System::Drawing::Color::YellowGreen;
			this->CrossSideButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->CrossSideButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->CrossSideButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CrossSideButton->ForeColor = System::Drawing::Color::Transparent;
			this->CrossSideButton->Location = System::Drawing::Point(16, 18);
			this->CrossSideButton->Name = L"CrossSideButton";
			this->CrossSideButton->Size = System::Drawing::Size(29, 29);
			this->CrossSideButton->TabIndex = 1;
			this->CrossSideButton->TabStop = false;
			this->CrossSideButton->UseVisualStyleBackColor = false;
			this->CrossSideButton->Click += gcnew System::EventHandler(this, &MyForm::CrossSideButton_Click);
			// 
			// StartRestartButton
			// 
			this->StartRestartButton->BackColor = System::Drawing::Color::Gray;
			this->StartRestartButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->StartRestartButton->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->StartRestartButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StartRestartButton->Font = (gcnew System::Drawing::Font(L"Onyx", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartRestartButton->ForeColor = System::Drawing::SystemColors::Control;
			this->StartRestartButton->Location = System::Drawing::Point(218, 9);
			this->StartRestartButton->Name = L"StartRestartButton";
			this->StartRestartButton->Size = System::Drawing::Size(86, 34);
			this->StartRestartButton->TabIndex = 3;
			this->StartRestartButton->Text = L"Начать";
			this->StartRestartButton->UseVisualStyleBackColor = false;
			this->StartRestartButton->Click += gcnew System::EventHandler(this, &MyForm::StartRestartButton_Click);
			// 
			// ChosenSide
			// 
			this->ChosenSide->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ChosenSide.BackgroundImage")));
			this->ChosenSide->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ChosenSide->Location = System::Drawing::Point(28, 16);
			this->ChosenSide->Name = L"ChosenSide";
			this->ChosenSide->Size = System::Drawing::Size(34, 34);
			this->ChosenSide->TabIndex = 6;
			this->ChosenSide->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 15);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Вы играете за";
			// 
			// TopLabel
			// 
			this->TopLabel->BackColor = System::Drawing::Color::Gray;
			this->TopLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TopLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TopLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TopLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->TopLabel->Location = System::Drawing::Point(0, 0);
			this->TopLabel->Name = L"TopLabel";
			this->TopLabel->Size = System::Drawing::Size(336, 28);
			this->TopLabel->TabIndex = 0;
			this->TopLabel->Text = L"Крестики-нолики";
			this->TopLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->TopLabel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TopLabel_MouseDown);
			this->TopLabel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TopLabel_MouseMove);
			this->TopLabel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TopLabel_MouseUp);
			// 
			// GamePanel
			// 
			this->GamePanel->Controls->Add(this->field8);
			this->GamePanel->Controls->Add(this->field7);
			this->GamePanel->Controls->Add(this->field6);
			this->GamePanel->Controls->Add(this->field5);
			this->GamePanel->Controls->Add(this->field4);
			this->GamePanel->Controls->Add(this->field3);
			this->GamePanel->Controls->Add(this->field2);
			this->GamePanel->Controls->Add(this->field1);
			this->GamePanel->Controls->Add(this->field0);
			this->GamePanel->Enabled = false;
			this->GamePanel->Location = System::Drawing::Point(13, 115);
			this->GamePanel->Name = L"GamePanel";
			this->GamePanel->Size = System::Drawing::Size(312, 314);
			this->GamePanel->TabIndex = 1;
			// 
			// field8
			// 
			this->field8->BackColor = System::Drawing::Color::Gray;
			this->field8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field8->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->field8->FlatAppearance->BorderSize = 2;
			this->field8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->field8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->field8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field8->Location = System::Drawing::Point(211, 211);
			this->field8->Name = L"field8";
			this->field8->Size = System::Drawing::Size(98, 98);
			this->field8->TabIndex = 8;
			this->field8->TabStop = false;
			this->field8->UseVisualStyleBackColor = false;
			this->field8->Click += gcnew System::EventHandler(this, &MyForm::field8_Click);
			// 
			// field7
			// 
			this->field7->BackColor = System::Drawing::Color::Gray;
			this->field7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field7->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->field7->FlatAppearance->BorderSize = 2;
			this->field7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->field7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->field7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field7->Location = System::Drawing::Point(107, 211);
			this->field7->Name = L"field7";
			this->field7->Size = System::Drawing::Size(98, 98);
			this->field7->TabIndex = 7;
			this->field7->TabStop = false;
			this->field7->UseVisualStyleBackColor = false;
			this->field7->Click += gcnew System::EventHandler(this, &MyForm::field7_Click);
			// 
			// field6
			// 
			this->field6->BackColor = System::Drawing::Color::Gray;
			this->field6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field6->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->field6->FlatAppearance->BorderSize = 2;
			this->field6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->field6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->field6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field6->Location = System::Drawing::Point(3, 211);
			this->field6->Name = L"field6";
			this->field6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->field6->Size = System::Drawing::Size(98, 98);
			this->field6->TabIndex = 6;
			this->field6->TabStop = false;
			this->field6->UseVisualStyleBackColor = false;
			this->field6->Click += gcnew System::EventHandler(this, &MyForm::field6_Click);
			// 
			// field5
			// 
			this->field5->BackColor = System::Drawing::Color::Gray;
			this->field5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field5->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->field5->FlatAppearance->BorderSize = 2;
			this->field5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->field5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->field5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field5->Location = System::Drawing::Point(211, 107);
			this->field5->Name = L"field5";
			this->field5->Size = System::Drawing::Size(98, 98);
			this->field5->TabIndex = 5;
			this->field5->TabStop = false;
			this->field5->UseVisualStyleBackColor = false;
			this->field5->Click += gcnew System::EventHandler(this, &MyForm::field5_Click);
			// 
			// field4
			// 
			this->field4->BackColor = System::Drawing::Color::Gray;
			this->field4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field4->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->field4->FlatAppearance->BorderSize = 2;
			this->field4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->field4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->field4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field4->Location = System::Drawing::Point(107, 107);
			this->field4->Name = L"field4";
			this->field4->Size = System::Drawing::Size(98, 98);
			this->field4->TabIndex = 4;
			this->field4->TabStop = false;
			this->field4->UseVisualStyleBackColor = false;
			this->field4->Click += gcnew System::EventHandler(this, &MyForm::field4_Click);
			// 
			// field3
			// 
			this->field3->BackColor = System::Drawing::Color::Gray;
			this->field3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field3->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->field3->FlatAppearance->BorderSize = 2;
			this->field3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->field3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->field3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field3->Location = System::Drawing::Point(3, 107);
			this->field3->Name = L"field3";
			this->field3->Size = System::Drawing::Size(98, 98);
			this->field3->TabIndex = 3;
			this->field3->TabStop = false;
			this->field3->UseVisualStyleBackColor = false;
			this->field3->Click += gcnew System::EventHandler(this, &MyForm::field3_Click);
			// 
			// field2
			// 
			this->field2->BackColor = System::Drawing::Color::Gray;
			this->field2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field2->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->field2->FlatAppearance->BorderSize = 2;
			this->field2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->field2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->field2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field2->Location = System::Drawing::Point(211, 3);
			this->field2->Name = L"field2";
			this->field2->Size = System::Drawing::Size(98, 98);
			this->field2->TabIndex = 2;
			this->field2->TabStop = false;
			this->field2->UseVisualStyleBackColor = false;
			this->field2->Click += gcnew System::EventHandler(this, &MyForm::field2_Click);
			// 
			// field1
			// 
			this->field1->BackColor = System::Drawing::Color::Gray;
			this->field1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field1->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->field1->FlatAppearance->BorderSize = 2;
			this->field1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->field1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->field1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field1->Location = System::Drawing::Point(107, 3);
			this->field1->Name = L"field1";
			this->field1->Size = System::Drawing::Size(98, 98);
			this->field1->TabIndex = 1;
			this->field1->TabStop = false;
			this->field1->UseVisualStyleBackColor = false;
			this->field1->Click += gcnew System::EventHandler(this, &MyForm::field1_Click);
			// 
			// field0
			// 
			this->field0->BackColor = System::Drawing::Color::Gray;
			this->field0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field0->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->field0->FlatAppearance->BorderSize = 2;
			this->field0->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->field0->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->field0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field0->Location = System::Drawing::Point(3, 3);
			this->field0->Name = L"field0";
			this->field0->Size = System::Drawing::Size(98, 98);
			this->field0->TabIndex = 0;
			this->field0->TabStop = false;
			this->field0->UseVisualStyleBackColor = false;
			this->field0->Click += gcnew System::EventHandler(this, &MyForm::field0_Click);
			// 
			// HeaderPanel
			// 
			this->HeaderPanel->BackColor = System::Drawing::Color::Gray;
			this->HeaderPanel->Controls->Add(this->IconImage);
			this->HeaderPanel->Controls->Add(this->ExitButton);
			this->HeaderPanel->Controls->Add(this->TopLabel);
			this->HeaderPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->HeaderPanel->Location = System::Drawing::Point(0, 0);
			this->HeaderPanel->Name = L"HeaderPanel";
			this->HeaderPanel->Size = System::Drawing::Size(336, 28);
			this->HeaderPanel->TabIndex = 2;
			// 
			// IconImage
			// 
			this->IconImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"IconImage.Image")));
			this->IconImage->Location = System::Drawing::Point(3, 2);
			this->IconImage->Name = L"IconImage";
			this->IconImage->Size = System::Drawing::Size(24, 24);
			this->IconImage->TabIndex = 1;
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::Color::DarkRed;
			this->ExitButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ExitButton.BackgroundImage")));
			this->ExitButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ExitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExitButton->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->ExitButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ExitButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Location = System::Drawing::Point(309, 2);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(24, 24);
			this->ExitButton->TabIndex = 0;
			this->ExitButton->TabStop = false;
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MyForm::ExitButton_Click);
			this->ExitButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::ExitButton_MouseEnter);
			this->ExitButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::ExitButton_MouseLeave);
			// 
			// sprites
			// 
			this->sprites->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"sprites.ImageStream")));
			this->sprites->TransparentColor = System::Drawing::Color::Empty;
			this->sprites->Images->SetKeyName(0, L"cross_sprite.png");
			this->sprites->Images->SetKeyName(1, L"zero_sprite.png");
			this->sprites->Images->SetKeyName(2, L"empty.png");
			// 
			// icons
			// 
			this->icons->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"icons.ImageStream")));
			this->icons->TransparentColor = System::Drawing::Color::Empty;
			this->icons->Images->SetKeyName(0, L"cross_icon.png");
			this->icons->Images->SetKeyName(1, L"zero_icon.png");
			// 
			// resultPanel
			// 
			this->resultPanel->Controls->Add(this->drawLabel);
			this->resultPanel->Controls->Add(this->defeatlabel);
			this->resultPanel->Controls->Add(this->victoryLabel);
			this->resultPanel->Location = System::Drawing::Point(13, 46);
			this->resultPanel->Name = L"resultPanel";
			this->resultPanel->Size = System::Drawing::Size(125, 52);
			this->resultPanel->TabIndex = 3;
			this->resultPanel->Visible = false;
			// 
			// defeatlabel
			// 
			this->defeatlabel->AutoSize = true;
			this->defeatlabel->Font = (gcnew System::Drawing::Font(L"Onyx", 15));
			this->defeatlabel->ForeColor = System::Drawing::Color::Red;
			this->defeatlabel->Location = System::Drawing::Point(12, 13);
			this->defeatlabel->Name = L"defeatlabel";
			this->defeatlabel->Size = System::Drawing::Size(101, 24);
			this->defeatlabel->TabIndex = 1;
			this->defeatlabel->Text = L"Проигрыш!";
			this->defeatlabel->Visible = false;
			// 
			// victoryLabel
			// 
			this->victoryLabel->AutoSize = true;
			this->victoryLabel->Font = (gcnew System::Drawing::Font(L"Onyx", 15));
			this->victoryLabel->ForeColor = System::Drawing::Color::Chartreuse;
			this->victoryLabel->Location = System::Drawing::Point(17, 15);
			this->victoryLabel->Name = L"victoryLabel";
			this->victoryLabel->Size = System::Drawing::Size(91, 24);
			this->victoryLabel->TabIndex = 0;
			this->victoryLabel->Text = L"ПОБЕДА!";
			this->victoryLabel->Visible = false;
			// 
			// drawLabel
			// 
			this->drawLabel->AutoSize = true;
			this->drawLabel->Font = (gcnew System::Drawing::Font(L"Onyx", 15));
			this->drawLabel->ForeColor = System::Drawing::Color::Yellow;
			this->drawLabel->Location = System::Drawing::Point(12, 12);
			this->drawLabel->Name = L"drawLabel";
			this->drawLabel->Size = System::Drawing::Size(66, 24);
			this->drawLabel->TabIndex = 2;
			this->drawLabel->Text = L"Ничья!";
			this->drawLabel->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(336, 442);
			this->Controls->Add(this->resultPanel);
			this->Controls->Add(this->TopPanel);
			this->Controls->Add(this->HeaderPanel);
			this->Controls->Add(this->GamePanel);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Font = (gcnew System::Drawing::Font(L"Onyx", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Opacity = 0.97;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Крестики-нолики";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			this->TopPanel->ResumeLayout(false);
			this->TopPanel->PerformLayout();
			this->SidePanel->ResumeLayout(false);
			this->SidePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChosenSide))->EndInit();
			this->GamePanel->ResumeLayout(false);
			this->HeaderPanel->ResumeLayout(false);
			this->resultPanel->ResumeLayout(false);
			this->resultPanel->PerformLayout();
			this->ResumeLayout(false);

		}

		private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ExitButton_MouseEnter(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ExitButton_MouseLeave(System::Object^ sender, System::EventArgs^ e);
		private: System::Void CrossSideButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ZeroSideButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void TopLabel_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		private: System::Void TopLabel_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		private: System::Void TopLabel_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e);
		private: System::Void StartRestartButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void field0_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void field1_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void field2_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void field3_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void field4_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void field5_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void field6_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void field7_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void field8_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void field_Clicked(Button^ sender);
		private: System::Void field_Clean();
		private: System::Void ai_Move();
		private: System::Boolean finish_game();
	};
}
