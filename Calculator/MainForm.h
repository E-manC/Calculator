#pragma once
#include <iostream>
#include <string>

double a = 0;
double b = 0;
bool c = false;
std::string d;

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ CalcLabel;
	private: System::Windows::Forms::TextBox^ CalcText;
	private: System::Windows::Forms::TableLayoutPanel^ CalcLayout;
	private: System::Windows::Forms::Button^ Calc1;
	private: System::Windows::Forms::Button^ Calc2;
	private: System::Windows::Forms::Button^ Calc3;
	private: System::Windows::Forms::Button^ Calc4;
	private: System::Windows::Forms::Button^ Calc5;
	private: System::Windows::Forms::Button^ Calc6;
	private: System::Windows::Forms::Button^ Calc7;
	private: System::Windows::Forms::Button^ Calc8;
	private: System::Windows::Forms::Button^ Calc9;
	private: System::Windows::Forms::Button^ Calc0;
	private: System::Windows::Forms::Button^ CalcMult;
	private: System::Windows::Forms::Button^ CalcDivide;
	private: System::Windows::Forms::Button^ CalcAdd;
	private: System::Windows::Forms::Button^ CalcSub;
	private: System::Windows::Forms::Button^ CalcClear;
	private: System::Windows::Forms::Button^ button1;




	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->CalcLabel = (gcnew System::Windows::Forms::Label());
			this->CalcText = (gcnew System::Windows::Forms::TextBox());
			this->CalcLayout = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Calc1 = (gcnew System::Windows::Forms::Button());
			this->Calc2 = (gcnew System::Windows::Forms::Button());
			this->Calc3 = (gcnew System::Windows::Forms::Button());
			this->Calc4 = (gcnew System::Windows::Forms::Button());
			this->Calc5 = (gcnew System::Windows::Forms::Button());
			this->Calc6 = (gcnew System::Windows::Forms::Button());
			this->Calc7 = (gcnew System::Windows::Forms::Button());
			this->Calc8 = (gcnew System::Windows::Forms::Button());
			this->Calc9 = (gcnew System::Windows::Forms::Button());
			this->Calc0 = (gcnew System::Windows::Forms::Button());
			this->CalcMult = (gcnew System::Windows::Forms::Button());
			this->CalcDivide = (gcnew System::Windows::Forms::Button());
			this->CalcAdd = (gcnew System::Windows::Forms::Button());
			this->CalcSub = (gcnew System::Windows::Forms::Button());
			this->CalcClear = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->CalcLayout->SuspendLayout();
			this->SuspendLayout();
			// 
			// CalcLabel
			// 
			this->CalcLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CalcLabel->AutoSize = true;
			this->CalcLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CalcLabel->Location = System::Drawing::Point(14, 4);
			this->CalcLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->CalcLabel->Name = L"CalcLabel";
			this->CalcLabel->Size = System::Drawing::Size(162, 37);
			this->CalcLabel->TabIndex = 0;
			this->CalcLabel->Text = L"Calculator";
			this->CalcLabel->Click += gcnew System::EventHandler(this, &MainForm::CalcLabel_Click);
			// 
			// CalcText
			// 
			this->CalcText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CalcText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CalcText->Location = System::Drawing::Point(12, 44);
			this->CalcText->Name = L"CalcText";
			this->CalcText->Size = System::Drawing::Size(656, 89);
			this->CalcText->TabIndex = 1;
			this->CalcText->TextChanged += gcnew System::EventHandler(this, &MainForm::CalcText_TextChanged);
			// 
			// CalcLayout
			// 
			this->CalcLayout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CalcLayout->ColumnCount = 4;
			this->CalcLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->CalcLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->CalcLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->CalcLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->CalcLayout->Controls->Add(this->Calc1, 0, 1);
			this->CalcLayout->Controls->Add(this->Calc2, 1, 1);
			this->CalcLayout->Controls->Add(this->Calc3, 2, 1);
			this->CalcLayout->Controls->Add(this->Calc4, 0, 2);
			this->CalcLayout->Controls->Add(this->Calc5, 1, 2);
			this->CalcLayout->Controls->Add(this->Calc6, 2, 2);
			this->CalcLayout->Controls->Add(this->Calc7, 0, 3);
			this->CalcLayout->Controls->Add(this->Calc8, 1, 3);
			this->CalcLayout->Controls->Add(this->Calc9, 2, 3);
			this->CalcLayout->Controls->Add(this->Calc0, 1, 4);
			this->CalcLayout->Controls->Add(this->CalcMult, 3, 1);
			this->CalcLayout->Controls->Add(this->CalcDivide, 3, 2);
			this->CalcLayout->Controls->Add(this->CalcAdd, 3, 3);
			this->CalcLayout->Controls->Add(this->CalcSub, 3, 4);
			this->CalcLayout->Controls->Add(this->CalcClear, 3, 0);
			this->CalcLayout->Controls->Add(this->button1, 2, 4);
			this->CalcLayout->Location = System::Drawing::Point(12, 139);
			this->CalcLayout->Name = L"CalcLayout";
			this->CalcLayout->RowCount = 5;
			this->CalcLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->CalcLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->CalcLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->CalcLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->CalcLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->CalcLayout->Size = System::Drawing::Size(656, 351);
			this->CalcLayout->TabIndex = 2;
			this->CalcLayout->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::CalcLayout_Paint);
			// 
			// Calc1
			// 
			this->Calc1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Calc1->Location = System::Drawing::Point(3, 73);
			this->Calc1->Name = L"Calc1";
			this->Calc1->Size = System::Drawing::Size(158, 64);
			this->Calc1->TabIndex = 0;
			this->Calc1->Text = L"1";
			this->Calc1->UseVisualStyleBackColor = true;
			this->Calc1->Click += gcnew System::EventHandler(this, &MainForm::Calc1_Click);
			// 
			// Calc2
			// 
			this->Calc2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Calc2->Location = System::Drawing::Point(167, 73);
			this->Calc2->Name = L"Calc2";
			this->Calc2->Size = System::Drawing::Size(158, 64);
			this->Calc2->TabIndex = 1;
			this->Calc2->Text = L"2";
			this->Calc2->UseVisualStyleBackColor = true;
			this->Calc2->Click += gcnew System::EventHandler(this, &MainForm::Calc2_Click);
			// 
			// Calc3
			// 
			this->Calc3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Calc3->Location = System::Drawing::Point(331, 73);
			this->Calc3->Name = L"Calc3";
			this->Calc3->Size = System::Drawing::Size(158, 64);
			this->Calc3->TabIndex = 2;
			this->Calc3->Text = L"3";
			this->Calc3->UseVisualStyleBackColor = true;
			this->Calc3->Click += gcnew System::EventHandler(this, &MainForm::Calc3_Click);
			// 
			// Calc4
			// 
			this->Calc4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Calc4->Location = System::Drawing::Point(3, 143);
			this->Calc4->Name = L"Calc4";
			this->Calc4->Size = System::Drawing::Size(158, 64);
			this->Calc4->TabIndex = 3;
			this->Calc4->Text = L"4";
			this->Calc4->UseVisualStyleBackColor = true;
			this->Calc4->Click += gcnew System::EventHandler(this, &MainForm::Calc4_Click);
			// 
			// Calc5
			// 
			this->Calc5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Calc5->Location = System::Drawing::Point(167, 143);
			this->Calc5->Name = L"Calc5";
			this->Calc5->Size = System::Drawing::Size(158, 64);
			this->Calc5->TabIndex = 4;
			this->Calc5->Text = L"5";
			this->Calc5->UseVisualStyleBackColor = true;
			this->Calc5->Click += gcnew System::EventHandler(this, &MainForm::Calc5_Click);
			// 
			// Calc6
			// 
			this->Calc6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Calc6->Location = System::Drawing::Point(331, 143);
			this->Calc6->Name = L"Calc6";
			this->Calc6->Size = System::Drawing::Size(158, 64);
			this->Calc6->TabIndex = 5;
			this->Calc6->Text = L"6";
			this->Calc6->UseVisualStyleBackColor = true;
			this->Calc6->Click += gcnew System::EventHandler(this, &MainForm::Calc6_Click);
			// 
			// Calc7
			// 
			this->Calc7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Calc7->Location = System::Drawing::Point(3, 213);
			this->Calc7->Name = L"Calc7";
			this->Calc7->Size = System::Drawing::Size(158, 64);
			this->Calc7->TabIndex = 6;
			this->Calc7->Text = L"7";
			this->Calc7->UseVisualStyleBackColor = true;
			this->Calc7->Click += gcnew System::EventHandler(this, &MainForm::Calc7_Click);
			// 
			// Calc8
			// 
			this->Calc8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Calc8->Location = System::Drawing::Point(167, 213);
			this->Calc8->Name = L"Calc8";
			this->Calc8->Size = System::Drawing::Size(158, 64);
			this->Calc8->TabIndex = 7;
			this->Calc8->Text = L"8";
			this->Calc8->UseVisualStyleBackColor = true;
			this->Calc8->Click += gcnew System::EventHandler(this, &MainForm::Calc8_Click);
			// 
			// Calc9
			// 
			this->Calc9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Calc9->Location = System::Drawing::Point(331, 213);
			this->Calc9->Name = L"Calc9";
			this->Calc9->Size = System::Drawing::Size(158, 64);
			this->Calc9->TabIndex = 8;
			this->Calc9->Text = L"9";
			this->Calc9->UseVisualStyleBackColor = true;
			this->Calc9->Click += gcnew System::EventHandler(this, &MainForm::Calc9_Click);
			// 
			// Calc0
			// 
			this->Calc0->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Calc0->Location = System::Drawing::Point(167, 283);
			this->Calc0->Name = L"Calc0";
			this->Calc0->Size = System::Drawing::Size(158, 65);
			this->Calc0->TabIndex = 9;
			this->Calc0->Text = L"0";
			this->Calc0->UseVisualStyleBackColor = true;
			this->Calc0->Click += gcnew System::EventHandler(this, &MainForm::Calc0_Click);
			// 
			// CalcMult
			// 
			this->CalcMult->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CalcMult->Location = System::Drawing::Point(495, 73);
			this->CalcMult->Name = L"CalcMult";
			this->CalcMult->Size = System::Drawing::Size(158, 64);
			this->CalcMult->TabIndex = 10;
			this->CalcMult->Text = L"X";
			this->CalcMult->UseVisualStyleBackColor = true;
			this->CalcMult->Click += gcnew System::EventHandler(this, &MainForm::CalcMult_Click);
			// 
			// CalcDivide
			// 
			this->CalcDivide->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CalcDivide->Location = System::Drawing::Point(495, 143);
			this->CalcDivide->Name = L"CalcDivide";
			this->CalcDivide->Size = System::Drawing::Size(158, 64);
			this->CalcDivide->TabIndex = 11;
			this->CalcDivide->Text = L"/";
			this->CalcDivide->UseVisualStyleBackColor = true;
			this->CalcDivide->Click += gcnew System::EventHandler(this, &MainForm::CalcDivide_Click);
			// 
			// CalcAdd
			// 
			this->CalcAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CalcAdd->Location = System::Drawing::Point(495, 213);
			this->CalcAdd->Name = L"CalcAdd";
			this->CalcAdd->Size = System::Drawing::Size(158, 64);
			this->CalcAdd->TabIndex = 12;
			this->CalcAdd->Text = L"+";
			this->CalcAdd->UseVisualStyleBackColor = true;
			this->CalcAdd->Click += gcnew System::EventHandler(this, &MainForm::CalcAdd_Click);
			// 
			// CalcSub
			// 
			this->CalcSub->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CalcSub->Location = System::Drawing::Point(495, 283);
			this->CalcSub->Name = L"CalcSub";
			this->CalcSub->Size = System::Drawing::Size(158, 65);
			this->CalcSub->TabIndex = 13;
			this->CalcSub->Text = L"-";
			this->CalcSub->UseVisualStyleBackColor = true;
			this->CalcSub->Click += gcnew System::EventHandler(this, &MainForm::CalcSub_Click);
			// 
			// CalcClear
			// 
			this->CalcClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CalcClear->Location = System::Drawing::Point(495, 3);
			this->CalcClear->Name = L"CalcClear";
			this->CalcClear->Size = System::Drawing::Size(158, 64);
			this->CalcClear->TabIndex = 14;
			this->CalcClear->Text = L"CE";
			this->CalcClear->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(331, 283);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 65);
			this->button1->TabIndex = 15;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 32);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 502);
			this->Controls->Add(this->CalcLayout);
			this->Controls->Add(this->CalcText);
			this->Controls->Add(this->CalcLabel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MainForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->CalcLayout->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CalcLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CalcText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void CalcLayout_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Calc1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (c == true) {
		CalcText->Text = "";
		c = false;
	}
	
	CalcText->Text = CalcText->Text + "1";
}
private: System::Void Calc2_Click(System::Object^ sender, System::EventArgs^ e) {
	CalcText->Text = CalcText->Text + "2";
}
private: System::Void Calc3_Click(System::Object^ sender, System::EventArgs^ e) {
	CalcText->Text = CalcText->Text + "3";
}
private: System::Void Calc4_Click(System::Object^ sender, System::EventArgs^ e) {
	CalcText->Text = CalcText->Text + "4";
}
private: System::Void Calc5_Click(System::Object^ sender, System::EventArgs^ e) {
	CalcText->Text = CalcText->Text + "5";
}
private: System::Void Calc6_Click(System::Object^ sender, System::EventArgs^ e) {
	CalcText->Text = CalcText->Text + "6";
}
private: System::Void Calc7_Click(System::Object^ sender, System::EventArgs^ e) {
	CalcText->Text = CalcText->Text + "7";

}
private: System::Void Calc8_Click(System::Object^ sender, System::EventArgs^ e) {
	CalcText->Text = CalcText->Text + "8";
}
private: System::Void Calc9_Click(System::Object^ sender, System::EventArgs^ e) {
	CalcText->Text = CalcText->Text + "9";
}
private: System::Void Calc0_Click(System::Object^ sender, System::EventArgs^ e) {
	CalcText->Text = CalcText->Text + "0";
}
private: System::Void CalcMult_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CalcDivide_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CalcAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void CalcSub_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
