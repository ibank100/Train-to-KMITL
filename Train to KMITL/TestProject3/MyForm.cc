#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>

namespace TestProject3 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ start;







	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label3;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::ComboBox^ end;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;



















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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->start = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->end = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label1->Location = System::Drawing::Point(315, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(292, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"เลือกสถานีที่คุณต้องการ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click);
			// 
			// start
			// 
			this->start->FormattingEnabled = true;
			this->start->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"คลองตัน", L"สุขุมวิท71", L"หัวหมาก", L"บ้านทับช้าง",
					L"ซอยวัดลานบุญ", L"ลาดกระบัง", L"พระจอมเกล้า", L"หัวตะเข้"
			});
			this->start->Location = System::Drawing::Point(130, 140);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(179, 24);
			this->start->TabIndex = 4;
			this->start->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ComboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(321, 195);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(286, 73);
			this->button1->TabIndex = 6;
			this->button1->Text = L"ดูเวลาสถานี";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 459);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"สถานี2";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::Label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 411);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L"สถานี1";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox1->Location = System::Drawing::Point(93, 411);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(834, 27);
			this->textBox1->TabIndex = 13;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox1_TextChanged_1);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox2->Location = System::Drawing::Point(94, 453);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(834, 27);
			this->textBox2->TabIndex = 14;
			// 
			// end
			// 
			this->end->FormattingEnabled = true;
			this->end->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"คลองตัน", L"สุขุมวิท71", L"หัวหมาก", L"บ้านทับช้าง",
					L"ซอยวัดลานบุญ", L"ลาดกระบัง", L"พระจอมเกล้า", L"หัวตะเข้"
			});
			this->end->Location = System::Drawing::Point(622, 140);
			this->end->Name = L"end";
			this->end->Size = System::Drawing::Size(179, 24);
			this->end->TabIndex = 16;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox3->Location = System::Drawing::Point(94, 355);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(833, 27);
			this->textBox3->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 361);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 17);
			this->label4->TabIndex = 18;
			this->label4->Text = L"ขบวน";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label5->Location = System::Drawing::Point(10, 316);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 25);
			this->label5->TabIndex = 19;
			this->label5->Text = L"เลขขบวน";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(179, 93);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 17);
			this->label6->TabIndex = 20;
			this->label6->Text = L"จุดเริ่มขึ้น";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(695, 93);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 17);
			this->label7->TabIndex = 21;
			this->label7->Text = L"จุดลง";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label8->Location = System::Drawing::Point(344, 45);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(233, 36);
			this->label8->TabIndex = 22;
			this->label8->Text = L"คลองตัน - หัวตะเข้";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(940, 518);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->end);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->start);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Train to KMITL";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void ComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ n1 = start->Text;
	String^ n2 = end->Text;
	String^ n4;
	String^ n5;


	//ภาษาc//
	char station_1[300], station_2[300];
	int number_1, number_2;

	if (n1 == "คลองตัน")
	{
		label2->Text = "คลองตัน";
		number_1 = 1;
		n4 = "06:36 | 07:40 | 07:40 | 08:26 | 10:40 | 12:37 | 13:24 | 15:52 | 17:02 | 17:29 | 18:11 | 18:47 | 18:52";
	}
	if (n2 == "คลองตัน")
	{
		label3->Text = "คลองตัน";
		number_2 = 1;
		n5 = "07:39 | 07:02 | 09:48 | 11:38 | 08:05 | 13:45 | 16:42 | 17:51 | 19:15 | 15:03 | 17:51 | 20:30 | 21:08";
	}
	if (n1 == "สุขุมวิท71")
	{
		label2->Text = "สุขุมวิท71";
		number_1 = 2;
		n4 = "——:—— | ——:—— | ——:—— | ——:—— | 10:43 | ——:—— | ——:—— | 15:54 | ——:—— | 17:33 | 18:13 | 18:49 | 18:56";
	}
	if (n2 == "สุขุมวิท71")
	{
		label3->Text = "สุขุมวิท71";
		number_2 = 2;
		n5 = "07:34 | 06:56 | ——:—— | ——:—— | 08:02 | 13:42 | ——:—— | 17:47 | ——:—— | ——:—— | 17:47 | 20:27 | 21:05";
	}
	if (n1 == "หัวหมาก")
	{
		label2->Text = "หัวหมาก";
		number_1 = 3;
		n4 = "06:43 | 07:49 | 07:49 | 08:35 | 10:49 | 12:44 | 13:30 | 15:59 | 17:09 | 17:40 | 18:18 | 18:54 | 19:02";
	}
	if (n2 == "หัวหมาก")
	{
		label3->Text = "หัวหมาก";
		number_2 = 3;
		n5 = "07:28 | 06:50 | 09:39 | 11:29 | 07:56 | 13:37 | 16:33 | 17:41 | 19:06 | 14:56 | 17:41 | 20:21 | 20:59";
	}
	if (n1 == "บ้านทับช้าง")
	{
		label2->Text = "บ้านทับช้าง";
		number_1 = 4;
		n4 = "06:48 | 07:57 | 07:57 | 08:44 | 10:56 | 12:50 | 13:36 | 16:05 | 17:15 | 17:47 | 18:24 | 19:00 | 19:09";
	}
	if (n2 == "บ้านทับช้าง")
	{
		label3->Text = "บ้านทับช้าง";
		number_2 = 4;
		n5 = "07:19 | 06:43 | 09:32 | 11:22 | 07:50 | 13:30 | 16:26 | 17:27 | 18:59 | 14:50 | 17:27 | 20:14 | 20:52";
	}
	if (n1 == "ซอยวัดลานบุญ")
	{
		label2->Text = "ซอยวัดลานบุญ";
		number_1 = 5;
		n4 = "——:—— | ——:—— | ——:—— | ——:—— | ——:—— | ——:—— | ——:—— | 16:08 | ——:—— | 17:53 | 18:29 | 19:03 | 19:13";
	}
	if (n2 == "ซอยวัดลานบุญ")
	{
		label3->Text = "ซอยวัดลานบุญ";
		number_2 = 5;
		n5 = "07:14 | 06:38 | 09:26 | ——:—— | ——:—— | ——:—— | ——:—— | 17:21 | ——:—— | ——:—— | 17:21 | ——:—— | ——:——";
	}
	if (n1 == "ลาดกระบัง")
	{
		label2->Text = "ลาดกระบัง";
		number_1 = 6;
		n4 = "06:55 | 08:06 | 08:06 | 08:51 | 11:02 | 12:57 | 13:42 | 16:12 | 17:22 | 17:58 | 18:34 | 19:07 | 19:17";
	}
	if (n2 == "ลาดกระบัง")
	{
		label3->Text = "ลาดกระบัง";
		number_2 = 6;
		n5 = "07:10 | 06:34 | 09:20 | 11:15 | 07:42 | 13:23 | 16:18 | 17:15 | 18:51 | 14:42 | 17:15 | 20:07 | 20:45";
	}
	if (n1 == "พระจอมเกล้า")
	{
		label2->Text = "พระจอมเกล้า";
		number_1 = 7;
		n4 = "06:36 | 07:40 | 07:40 | 08:26 | 10:40 | 12:37 | 13:24 | 15:52 | 17:02 | 17:29 | 18:11 | 18:47 | 18:52";
	}
	if (n2 == "พระจอมเกล้า")
	{
		label3->Text = "พระจอมเกล้า";
		number_2 = 7;
		n5 = "07:04 | 06:28 | 09:14 | 11:10 | 07:37 | 13:18 | 16:12 | 17:09 | 18:45 | 14:37 | 17:09 | 20:02 | 20:40";
	}
	if (n1 == "หัวตะเข้")
	{
		label2->Text = "หัวตะเข้";
		number_1 = 8;
		n4 = "07:03 | 08:14 | 08:14 | 08:57 | 11:09 | 13:04 | 13:48 | 16:18 | 17:30 | 18:07 | 18:42 | 19:13 | 19:24";
	}
	if (n2 == "หัวตะเข้")
	{
		label3->Text = "หัวตะเข้";
		number_2 = 8;
		n5 = "07:01 | 06:26 | 09:11 | 11:07 | 07:35 | 13:16 | 16:09 | 17:06 | 18:42 | 14:35 | 17:06 | 19:59 | 20:38";
	}
	if (number_1 == number_2)
	{
		MessageBox::Show("โปรดเลือกสถานีที่ต่างกันครับ");
	}

	if (number_1 < number_2)
	{
		textBox3->Text = "    275|     283|     285|     281|     367|     389|     279|     277|     391|     383|     371|     385|    381";
		label4->Text = "เที่ยวไป";
		textBox1->Text = n4;
		textBox2->Text = n5;
	}
	else
	{
		label4->Text = "เที่ยวกลับ";
		textBox1->Text = n4;
		textBox2->Text = n5;
	}
	//ภาษาc//
}

private: System::Void TextBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
