#pragma once

namespace Cobra {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	public:
		void ShowForm1() {
			// Create an instance of Form1
			

			// Set properties to embed it in the panel
			

		
		}

		void ShowForm2() {
			// Similar steps for Form2
			// ...
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: Form activeForm;
	private: System::Windows::Forms::Panel^ logoPanel;
	private: System::Windows::Forms::Panel^ contentPanel;
	private: System::Windows::Forms::Button^ musicButton;




	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ LogoButton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Button^ SyncButton;
	private: System::Windows::Forms::Button^ ConvertButton;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ AppName;
	private: System::Windows::Forms::Label^ label1;





	private: System::Windows::Forms::Panel^ mainDiv;

	private: void openChildForm(Form childForm, Object btnSender) {
		
	}
















	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->SyncButton = (gcnew System::Windows::Forms::Button());
			this->ConvertButton = (gcnew System::Windows::Forms::Button());
			this->musicButton = (gcnew System::Windows::Forms::Button());
			this->logoPanel = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->LogoButton = (gcnew System::Windows::Forms::Button());
			this->contentPanel = (gcnew System::Windows::Forms::Panel());
			this->mainDiv = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->AppName = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->logoPanel->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->contentPanel->SuspendLayout();
			this->mainDiv->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->panel1->Controls->Add(this->ExitButton);
			this->panel1->Controls->Add(this->SyncButton);
			this->panel1->Controls->Add(this->ConvertButton);
			this->panel1->Controls->Add(this->musicButton);
			this->panel1->Controls->Add(this->logoPanel);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(218, 603);
			this->panel1->TabIndex = 0;
			// 
			// ExitButton
			// 
			this->ExitButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->ExitButton->FlatAppearance->BorderSize = 0;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Teko SemiBold", 15, System::Drawing::FontStyle::Bold));
			this->ExitButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->ExitButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ExitButton.Image")));
			this->ExitButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ExitButton->Location = System::Drawing::Point(0, 282);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->ExitButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ExitButton->Size = System::Drawing::Size(218, 56);
			this->ExitButton->TabIndex = 5;
			this->ExitButton->Text = L"Music";
			this->ExitButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ExitButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->ExitButton->UseVisualStyleBackColor = true;
			// 
			// SyncButton
			// 
			this->SyncButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->SyncButton->FlatAppearance->BorderSize = 0;
			this->SyncButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SyncButton->Font = (gcnew System::Drawing::Font(L"Teko SemiBold", 15, System::Drawing::FontStyle::Bold));
			this->SyncButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->SyncButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SyncButton.Image")));
			this->SyncButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SyncButton->Location = System::Drawing::Point(0, 226);
			this->SyncButton->Name = L"SyncButton";
			this->SyncButton->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->SyncButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->SyncButton->Size = System::Drawing::Size(218, 56);
			this->SyncButton->TabIndex = 4;
			this->SyncButton->Text = L"Setting";
			this->SyncButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SyncButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->SyncButton->UseVisualStyleBackColor = true;
			// 
			// ConvertButton
			// 
			this->ConvertButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->ConvertButton->FlatAppearance->BorderSize = 0;
			this->ConvertButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ConvertButton->Font = (gcnew System::Drawing::Font(L"Teko SemiBold", 15, System::Drawing::FontStyle::Bold));
			this->ConvertButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->ConvertButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConvertButton.Image")));
			this->ConvertButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ConvertButton->Location = System::Drawing::Point(0, 170);
			this->ConvertButton->Name = L"ConvertButton";
			this->ConvertButton->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->ConvertButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ConvertButton->Size = System::Drawing::Size(218, 56);
			this->ConvertButton->TabIndex = 3;
			this->ConvertButton->Text = L"Convert";
			this->ConvertButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ConvertButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->ConvertButton->UseVisualStyleBackColor = true;
			// 
			// musicButton
			// 
			this->musicButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->musicButton->FlatAppearance->BorderSize = 0;
			this->musicButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->musicButton->Font = (gcnew System::Drawing::Font(L"Teko SemiBold", 15, System::Drawing::FontStyle::Bold));
			this->musicButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->musicButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"musicButton.Image")));
			this->musicButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->musicButton->Location = System::Drawing::Point(0, 114);
			this->musicButton->Name = L"musicButton";
			this->musicButton->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->musicButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->musicButton->Size = System::Drawing::Size(218, 56);
			this->musicButton->TabIndex = 2;
			this->musicButton->Text = L"Music";
			this->musicButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->musicButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->musicButton->UseVisualStyleBackColor = true;
			// 
			// logoPanel
			// 
			this->logoPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(158)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)));
			this->logoPanel->Controls->Add(this->panel2);
			this->logoPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->logoPanel->Location = System::Drawing::Point(0, 0);
			this->logoPanel->Name = L"logoPanel";
			this->logoPanel->Size = System::Drawing::Size(218, 114);
			this->logoPanel->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->LogoButton);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(218, 114);
			this->panel2->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(12, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(159, 106);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// LogoButton
			// 
			this->LogoButton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->LogoButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LogoButton->FlatAppearance->BorderSize = 0;
			this->LogoButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LogoButton->Font = (gcnew System::Drawing::Font(L"Black Ops One", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogoButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->LogoButton->Location = System::Drawing::Point(0, 0);
			this->LogoButton->Name = L"LogoButton";
			this->LogoButton->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->LogoButton->Size = System::Drawing::Size(218, 114);
			this->LogoButton->TabIndex = 0;
			this->LogoButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->LogoButton->UseVisualStyleBackColor = true;
			// 
			// contentPanel
			// 
			this->contentPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(202)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->contentPanel->Controls->Add(this->mainDiv);
			this->contentPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->contentPanel->Location = System::Drawing::Point(218, 0);
			this->contentPanel->Name = L"contentPanel";
			this->contentPanel->Size = System::Drawing::Size(514, 603);
			this->contentPanel->TabIndex = 1;
			// 
			// mainDiv
			// 
			this->mainDiv->Controls->Add(this->panel4);
			this->mainDiv->Controls->Add(this->panel3);
			this->mainDiv->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainDiv->Location = System::Drawing::Point(0, 0);
			this->mainDiv->Name = L"mainDiv";
			this->mainDiv->Size = System::Drawing::Size(514, 603);
			this->mainDiv->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(514, 507);
			this->panel3->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->AppName);
			this->panel4->Location = System::Drawing::Point(6, 528);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(496, 63);
			this->panel4->TabIndex = 1;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(514, 507);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// AppName
			// 
			this->AppName->AutoSize = true;
			this->AppName->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AppName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->AppName->Location = System::Drawing::Point(204, 0);
			this->AppName->Name = L"AppName";
			this->AppName->Size = System::Drawing::Size(127, 31);
			this->AppName->TabIndex = 0;
			this->AppName->Text = L"EmbedX";
			this->AppName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(216, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Cobra V 1.0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(732, 603);
			this->Controls->Add(this->contentPanel);
			this->Controls->Add(this->panel1);
			this->MaximumSize = System::Drawing::Size(750, 650);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Cobra";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->logoPanel->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->contentPanel->ResumeLayout(false);
			this->mainDiv->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void ConvertButton_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
