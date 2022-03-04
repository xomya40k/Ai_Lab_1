#pragma once

namespace Lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:Point mouseOffset;
	private:bool isMouseDown = false;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ TopPanel;
	protected:

	private: System::Windows::Forms::Label^ TopLabel;
	private: System::Windows::Forms::Panel^ GamePanel;
	protected:


	private: System::Windows::Forms::Button^ field9;

	private: System::Windows::Forms::Button^ field8;

	private: System::Windows::Forms::Button^ field7;

	private: System::Windows::Forms::Button^ field6;

	private: System::Windows::Forms::Button^ field5;

	private: System::Windows::Forms::Button^ field4;

	private: System::Windows::Forms::Button^ field3;

	private: System::Windows::Forms::Button^ field2;

	private: System::Windows::Forms::Button^ field1;
	private: System::Windows::Forms::Panel^ HeaderPanel;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Label^ IconImage;


	private: System::Windows::Forms::Label^ SideInfoLabel;
	private: System::Windows::Forms::Button^ StartRestartButton;
	private: System::Windows::Forms::Button^ ZeroSideButton;
	private: System::Windows::Forms::Button^ CrossSideButton;



	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->TopPanel = (gcnew System::Windows::Forms::Panel());
			this->StartRestartButton = (gcnew System::Windows::Forms::Button());
			this->ZeroSideButton = (gcnew System::Windows::Forms::Button());
			this->CrossSideButton = (gcnew System::Windows::Forms::Button());
			this->SideInfoLabel = (gcnew System::Windows::Forms::Label());
			this->TopLabel = (gcnew System::Windows::Forms::Label());
			this->GamePanel = (gcnew System::Windows::Forms::Panel());
			this->field9 = (gcnew System::Windows::Forms::Button());
			this->field8 = (gcnew System::Windows::Forms::Button());
			this->field7 = (gcnew System::Windows::Forms::Button());
			this->field6 = (gcnew System::Windows::Forms::Button());
			this->field5 = (gcnew System::Windows::Forms::Button());
			this->field4 = (gcnew System::Windows::Forms::Button());
			this->field3 = (gcnew System::Windows::Forms::Button());
			this->field2 = (gcnew System::Windows::Forms::Button());
			this->field1 = (gcnew System::Windows::Forms::Button());
			this->HeaderPanel = (gcnew System::Windows::Forms::Panel());
			this->IconImage = (gcnew System::Windows::Forms::Label());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->TopPanel->SuspendLayout();
			this->GamePanel->SuspendLayout();
			this->HeaderPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// TopPanel
			// 
			this->TopPanel->Controls->Add(this->StartRestartButton);
			this->TopPanel->Controls->Add(this->ZeroSideButton);
			this->TopPanel->Controls->Add(this->CrossSideButton);
			this->TopPanel->Controls->Add(this->SideInfoLabel);
			this->TopPanel->Location = System::Drawing::Point(13, 46);
			this->TopPanel->Name = L"TopPanel";
			this->TopPanel->Size = System::Drawing::Size(312, 53);
			this->TopPanel->TabIndex = 0;
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
			this->StartRestartButton->Location = System::Drawing::Point(221, 9);
			this->StartRestartButton->Name = L"StartRestartButton";
			this->StartRestartButton->Size = System::Drawing::Size(76, 34);
			this->StartRestartButton->TabIndex = 3;
			this->StartRestartButton->Text = L"Начать";
			this->StartRestartButton->UseVisualStyleBackColor = false;
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
			this->CrossSideButton->Location = System::Drawing::Point(17, 18);
			this->CrossSideButton->Name = L"CrossSideButton";
			this->CrossSideButton->Size = System::Drawing::Size(29, 29);
			this->CrossSideButton->TabIndex = 1;
			this->CrossSideButton->TabStop = false;
			this->CrossSideButton->UseVisualStyleBackColor = false;
			this->CrossSideButton->Click += gcnew System::EventHandler(this, &MyForm::CrossSideButton_Click);
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
			this->GamePanel->Controls->Add(this->field9);
			this->GamePanel->Controls->Add(this->field8);
			this->GamePanel->Controls->Add(this->field7);
			this->GamePanel->Controls->Add(this->field6);
			this->GamePanel->Controls->Add(this->field5);
			this->GamePanel->Controls->Add(this->field4);
			this->GamePanel->Controls->Add(this->field3);
			this->GamePanel->Controls->Add(this->field2);
			this->GamePanel->Controls->Add(this->field1);
			this->GamePanel->Enabled = false;
			this->GamePanel->Location = System::Drawing::Point(13, 115);
			this->GamePanel->Name = L"GamePanel";
			this->GamePanel->Size = System::Drawing::Size(312, 314);
			this->GamePanel->TabIndex = 1;
			// 
			// field9
			// 
			this->field9->BackColor = System::Drawing::Color::Gray;
			this->field9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field9->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->field9->FlatAppearance->BorderSize = 2;
			this->field9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->field9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->field9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field9->Location = System::Drawing::Point(211, 211);
			this->field9->Name = L"field9";
			this->field9->Size = System::Drawing::Size(98, 98);
			this->field9->TabIndex = 8;
			this->field9->TabStop = false;
			this->field9->UseVisualStyleBackColor = false;
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
			this->field8->Location = System::Drawing::Point(107, 211);
			this->field8->Name = L"field8";
			this->field8->Size = System::Drawing::Size(98, 98);
			this->field8->TabIndex = 7;
			this->field8->TabStop = false;
			this->field8->UseVisualStyleBackColor = false;
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
			this->field7->Location = System::Drawing::Point(3, 211);
			this->field7->Name = L"field7";
			this->field7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->field7->Size = System::Drawing::Size(98, 98);
			this->field7->TabIndex = 6;
			this->field7->TabStop = false;
			this->field7->UseVisualStyleBackColor = false;
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
			this->field6->Location = System::Drawing::Point(211, 107);
			this->field6->Name = L"field6";
			this->field6->Size = System::Drawing::Size(98, 98);
			this->field6->TabIndex = 5;
			this->field6->TabStop = false;
			this->field6->UseVisualStyleBackColor = false;
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
			this->field5->Location = System::Drawing::Point(107, 107);
			this->field5->Name = L"field5";
			this->field5->Size = System::Drawing::Size(98, 98);
			this->field5->TabIndex = 4;
			this->field5->TabStop = false;
			this->field5->UseVisualStyleBackColor = false;
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
			this->field4->Location = System::Drawing::Point(3, 107);
			this->field4->Name = L"field4";
			this->field4->Size = System::Drawing::Size(98, 98);
			this->field4->TabIndex = 3;
			this->field4->TabStop = false;
			this->field4->UseVisualStyleBackColor = false;
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
			this->field3->Location = System::Drawing::Point(211, 3);
			this->field3->Name = L"field3";
			this->field3->Size = System::Drawing::Size(98, 98);
			this->field3->TabIndex = 2;
			this->field3->TabStop = false;
			this->field3->UseVisualStyleBackColor = false;
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
			this->field2->Location = System::Drawing::Point(107, 3);
			this->field2->Name = L"field2";
			this->field2->Size = System::Drawing::Size(98, 98);
			this->field2->TabIndex = 1;
			this->field2->TabStop = false;
			this->field2->UseVisualStyleBackColor = false;
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
			this->field1->Location = System::Drawing::Point(3, 3);
			this->field1->Name = L"field1";
			this->field1->Size = System::Drawing::Size(98, 98);
			this->field1->TabIndex = 0;
			this->field1->TabStop = false;
			this->field1->UseVisualStyleBackColor = false;
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
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(336, 442);
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
			this->TopPanel->ResumeLayout(false);
			this->TopPanel->PerformLayout();
			this->GamePanel->ResumeLayout(false);
			this->HeaderPanel->ResumeLayout(false);
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
};
}
