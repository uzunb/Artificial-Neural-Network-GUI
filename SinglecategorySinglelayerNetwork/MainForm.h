#pragma once
#include <Windows.h>
#include <time.h>
#include "Process.h"
#include "PerceptronLearning.h"
#include "DeltaLearning.h"



namespace ArtificialNeuralNetwork {

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
			sizeOfSamples = sizeOfClass1 = sizeOfClass2 = 0;
			richTextBox1->AppendText("Ready for use.\n");
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

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ processToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;




	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;




	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		Samples* p;
		int sizeOfSamples, sizeOfClass1, sizeOfClass2;
		double* w;
		NeuralNetwork* learningNetwork;








	private: System::Windows::Forms::ToolStripMenuItem^ initialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ randomlyToolStripMenuItem;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;



	private: System::Windows::Forms::TextBox^ textBox10;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::ToolStripMenuItem^ deltaTrainToolStripMenuItem;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ trainToolStripMenuItem;


		   /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->processToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->initialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->randomlyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->trainToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->deltaTrainToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			   this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			   this->menuStrip1->SuspendLayout();
			   this->tableLayoutPanel1->SuspendLayout();
			   this->tableLayoutPanel2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->BackColor = System::Drawing::Color::Turquoise;
			   this->menuStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->processToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			   this->menuStrip1->Size = System::Drawing::Size(1350, 24);
			   this->menuStrip1->TabIndex = 1;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // processToolStripMenuItem
			   // 
			   this->processToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->initialToolStripMenuItem,
					   this->trainToolStripMenuItem, this->deltaTrainToolStripMenuItem
			   });
			   this->processToolStripMenuItem->Name = L"processToolStripMenuItem";
			   this->processToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			   this->processToolStripMenuItem->Text = L"Process";
			   // 
			   // initialToolStripMenuItem
			   // 
			   this->initialToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->randomlyToolStripMenuItem });
			   this->initialToolStripMenuItem->Name = L"initialToolStripMenuItem";
			   this->initialToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			   this->initialToolStripMenuItem->Text = L"Initial";
			   // 
			   // randomlyToolStripMenuItem
			   // 
			   this->randomlyToolStripMenuItem->Name = L"randomlyToolStripMenuItem";
			   this->randomlyToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			   this->randomlyToolStripMenuItem->Text = L"Randomly";
			   this->randomlyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::randomlyToolStripMenuItem_Click);
			   // 
			   // trainToolStripMenuItem
			   // 
			   this->trainToolStripMenuItem->Name = L"trainToolStripMenuItem";
			   this->trainToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			   this->trainToolStripMenuItem->Text = L"Perceptron Train";
			   this->trainToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::trainToolStripMenuItem_Click);
			   // 
			   // deltaTrainToolStripMenuItem
			   // 
			   this->deltaTrainToolStripMenuItem->Name = L"deltaTrainToolStripMenuItem";
			   this->deltaTrainToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			   this->deltaTrainToolStripMenuItem->Text = L"Delta Train";
			   this->deltaTrainToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::deltaTrainToolStripMenuItem_Click);
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->BackColor = System::Drawing::Color::Turquoise;
			   this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->richTextBox1->Location = System::Drawing::Point(3, 620);
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->Size = System::Drawing::Size(1099, 94);
			   this->richTextBox1->TabIndex = 2;
			   this->richTextBox1->Text = L"";
			   // 
			   // tableLayoutPanel1
			   // 
			   this->tableLayoutPanel1->AutoSize = true;
			   this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->tableLayoutPanel1->ColumnCount = 2;
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   81.85185F)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   18.14815F)));
			   this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 0);
			   this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			   this->tableLayoutPanel1->Controls->Add(this->richTextBox1, 0, 1);
			   this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->tableLayoutPanel1->Location = System::Drawing::Point(0, 24);
			   this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			   this->tableLayoutPanel1->RowCount = 2;
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			   this->tableLayoutPanel1->Size = System::Drawing::Size(1350, 717);
			   this->tableLayoutPanel1->TabIndex = 3;
			   this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::tableLayoutPanel1_Paint_1);
			   // 
			   // tableLayoutPanel2
			   // 
			   this->tableLayoutPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				   static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
			   this->tableLayoutPanel2->ColumnCount = 2;
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   50)));
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   50)));
			   this->tableLayoutPanel2->Controls->Add(this->textBox9, 0, 6);
			   this->tableLayoutPanel2->Controls->Add(this->radioButton2, 1, 0);
			   this->tableLayoutPanel2->Controls->Add(this->radioButton1, 0, 0);
			   this->tableLayoutPanel2->Controls->Add(this->textBox5, 1, 1);
			   this->tableLayoutPanel2->Controls->Add(this->textBox6, 1, 2);
			   this->tableLayoutPanel2->Controls->Add(this->textBox3, 0, 3);
			   this->tableLayoutPanel2->Controls->Add(this->textBox7, 1, 3);
			   this->tableLayoutPanel2->Controls->Add(this->textBox1, 0, 1);
			   this->tableLayoutPanel2->Controls->Add(this->textBox2, 0, 2);
			   this->tableLayoutPanel2->Controls->Add(this->textBox8, 1, 5);
			   this->tableLayoutPanel2->Controls->Add(this->textBox10, 1, 6);
			   this->tableLayoutPanel2->Controls->Add(this->textBox4, 0, 5);
			   this->tableLayoutPanel2->Controls->Add(this->checkBox1, 1, 4);
			   this->tableLayoutPanel2->Location = System::Drawing::Point(1108, 3);
			   this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			   this->tableLayoutPanel2->RowCount = 7;
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 403)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 57)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 26)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			   this->tableLayoutPanel2->Size = System::Drawing::Size(239, 611);
			   this->tableLayoutPanel2->TabIndex = 0;
			   // 
			   // textBox9
			   // 
			   this->textBox9->BackColor = System::Drawing::Color::Black;
			   this->textBox9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->textBox9->ForeColor = System::Drawing::Color::White;
			   this->textBox9->Location = System::Drawing::Point(3, 585);
			   this->textBox9->Name = L"textBox9";
			   this->textBox9->Size = System::Drawing::Size(113, 25);
			   this->textBox9->TabIndex = 12;
			   this->textBox9->Text = L"Total Cycle : ";
			   // 
			   // radioButton2
			   // 
			   this->radioButton2->AutoSize = true;
			   this->radioButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->radioButton2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				   static_cast<System::Int32>(static_cast<System::Byte>(116)));
			   this->radioButton2->Location = System::Drawing::Point(122, 3);
			   this->radioButton2->Name = L"radioButton2";
			   this->radioButton2->Size = System::Drawing::Size(88, 29);
			   this->radioButton2->TabIndex = 1;
			   this->radioButton2->Text = L"Class2";
			   this->radioButton2->UseVisualStyleBackColor = true;
			   // 
			   // radioButton1
			   // 
			   this->radioButton1->AutoSize = true;
			   this->radioButton1->Checked = true;
			   this->radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->radioButton1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->radioButton1->Location = System::Drawing::Point(3, 3);
			   this->radioButton1->Name = L"radioButton1";
			   this->radioButton1->Size = System::Drawing::Size(86, 29);
			   this->radioButton1->TabIndex = 0;
			   this->radioButton1->TabStop = true;
			   this->radioButton1->Text = L"Class1";
			   this->radioButton1->UseVisualStyleBackColor = true;
			   // 
			   // textBox5
			   // 
			   this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				   static_cast<System::Int32>(static_cast<System::Byte>(116)));
			   this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->textBox5->ForeColor = System::Drawing::Color::White;
			   this->textBox5->Location = System::Drawing::Point(122, 39);
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->Size = System::Drawing::Size(114, 25);
			   this->textBox5->TabIndex = 6;
			   this->textBox5->Text = L"X1: ";
			   // 
			   // textBox6
			   // 
			   this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				   static_cast<System::Int32>(static_cast<System::Byte>(116)));
			   this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->textBox6->ForeColor = System::Drawing::Color::White;
			   this->textBox6->Location = System::Drawing::Point(122, 69);
			   this->textBox6->Name = L"textBox6";
			   this->textBox6->Size = System::Drawing::Size(114, 25);
			   this->textBox6->TabIndex = 7;
			   this->textBox6->Text = L"X2:";
			   // 
			   // textBox3
			   // 
			   this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->textBox3->ForeColor = System::Drawing::Color::White;
			   this->textBox3->Location = System::Drawing::Point(3, 99);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(113, 25);
			   this->textBox3->TabIndex = 4;
			   this->textBox3->Text = L"Count:";
			   // 
			   // textBox7
			   // 
			   this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				   static_cast<System::Int32>(static_cast<System::Byte>(116)));
			   this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->textBox7->ForeColor = System::Drawing::Color::White;
			   this->textBox7->Location = System::Drawing::Point(122, 99);
			   this->textBox7->Name = L"textBox7";
			   this->textBox7->Size = System::Drawing::Size(114, 25);
			   this->textBox7->TabIndex = 8;
			   this->textBox7->Text = L"Count:";
			   // 
			   // textBox1
			   // 
			   this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->textBox1->ForeColor = System::Drawing::Color::White;
			   this->textBox1->Location = System::Drawing::Point(3, 39);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(113, 25);
			   this->textBox1->TabIndex = 2;
			   this->textBox1->Text = L"X1: ";
			   // 
			   // textBox2
			   // 
			   this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->textBox2->ForeColor = System::Drawing::Color::White;
			   this->textBox2->Location = System::Drawing::Point(3, 69);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(113, 25);
			   this->textBox2->TabIndex = 3;
			   this->textBox2->Text = L"X2: ";
			   // 
			   // textBox8
			   // 
			   this->textBox8->BackColor = System::Drawing::Color::Black;
			   this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->textBox8->ForeColor = System::Drawing::Color::White;
			   this->textBox8->Location = System::Drawing::Point(122, 559);
			   this->textBox8->Name = L"textBox8";
			   this->textBox8->Size = System::Drawing::Size(105, 25);
			   this->textBox8->TabIndex = 9;
			   this->textBox8->Text = L"NaN";
			   // 
			   // textBox10
			   // 
			   this->textBox10->BackColor = System::Drawing::Color::Black;
			   this->textBox10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->textBox10->ForeColor = System::Drawing::Color::White;
			   this->textBox10->Location = System::Drawing::Point(122, 585);
			   this->textBox10->Name = L"textBox10";
			   this->textBox10->Size = System::Drawing::Size(105, 25);
			   this->textBox10->TabIndex = 11;
			   this->textBox10->Text = L"NaN";
			   // 
			   // textBox4
			   // 
			   this->textBox4->BackColor = System::Drawing::Color::Black;
			   this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->textBox4->ForeColor = System::Drawing::Color::White;
			   this->textBox4->Location = System::Drawing::Point(3, 559);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(113, 25);
			   this->textBox4->TabIndex = 5;
			   this->textBox4->Text = L"Total Count : ";
			   // 
			   // checkBox1
			   // 
			   this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			   this->checkBox1->BackColor = System::Drawing::Color::Gray;
			   this->checkBox1->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			   this->checkBox1->FlatAppearance->BorderSize = 2;
			   this->checkBox1->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			   this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			   this->checkBox1->Location = System::Drawing::Point(122, 502);
			   this->checkBox1->Name = L"checkBox1";
			   this->checkBox1->Size = System::Drawing::Size(114, 51);
			   this->checkBox1->TabIndex = 13;
			   this->checkBox1->Text = L"Batch Normalizing";
			   this->checkBox1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   this->checkBox1->UseVisualStyleBackColor = false;
			   this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox1_CheckedChanged);
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->pictureBox1->Location = System::Drawing::Point(3, 3);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(1099, 611);
			   this->pictureBox1->TabIndex = 1;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::pictureBox1_Paint);
			   this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseClick);
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Red;
			   this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(1271, 0);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(75, 23);
			   this->button1->TabIndex = 4;
			   this->button1->Text = L"Clean";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			   // 
			   // MainForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->ClientSize = System::Drawing::Size(1350, 741);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->tableLayoutPanel1);
			   this->Controls->Add(this->menuStrip1);
			   this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->MaximumSize = System::Drawing::Size(1366, 800);
			   this->MinimumSize = System::Drawing::Size(800, 600);
			   this->Name = L"MainForm";
			   this->Text = L"Artificial Neural Network Workspace";
			   this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   this->tableLayoutPanel1->ResumeLayout(false);
			   this->tableLayoutPanel2->ResumeLayout(false);
			   this->tableLayoutPanel2->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		   //DrawCenterLine
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		Pen^ pen = gcnew Pen(Color::DarkKhaki, 1.0f);
		int center_width, center_height;
		center_height = (int)(pictureBox1->Height / 2);
		center_width = (int)(pictureBox1->Width / 2);
		e->Graphics->DrawLine(pen, center_width, 0, center_width, pictureBox1->Height);
		e->Graphics->DrawLine(pen, 0, center_height, pictureBox1->Width, center_height);
	}//DrawCenterLine


	//DrawPoint
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Class1
		if (radioButton1->Checked)
		{
			int temp_x = System::Convert::ToInt32(e->X);
			int temp_y = System::Convert::ToInt32(e->Y);

			double x1 = (double)(temp_x - (pictureBox1->Width >> 1));
			double x2 = (double)((pictureBox1->Height >> 1) - temp_y);

			
			if (sizeOfSamples == 0) { sizeOfSamples = sizeOfClass1 = 1; p = new Samples[1]; p[0].x1 = x1;	p[0].x2 = x2; p[0].classId = CLASS1; }
			else {
				Samples* temp;
				temp = p;
				sizeOfClass1++;
				sizeOfSamples++;
				p = new Samples[sizeOfSamples];
				for (int i = 0; i < sizeOfSamples; i++)
				{
					p[i].x1 = temp[i].x1;
					p[i].x2 = temp[i].x2;
					p[i].classId = temp[i].classId;
				}
				p[sizeOfSamples - 1].x1 = x1;
				p[sizeOfSamples - 1].x2 = x2;
				p[sizeOfSamples - 1].classId = CLASS1;
				delete temp;
			}

			textBox1->Text = "x1: " + Convert::ToString(p[sizeOfSamples - 1].x1);
			textBox2->Text = "x2: " + Convert::ToString(p[sizeOfSamples - 1].x2);
			textBox3->Text = "Count: " + Convert::ToString(sizeOfClass1);
			textBox8->Text = Convert::ToString(sizeOfSamples);

			//Adding point to table.
			Pen^ pen = gcnew Pen(Color::Aqua, 3.0f);
			pictureBox1->CreateGraphics()->DrawEllipse(pen, temp_x, temp_y, 5, 5);

		}

		//Class2
		else if (radioButton2->Checked)
		{
			int temp_x = System::Convert::ToInt32(e->X);
			int temp_y = System::Convert::ToInt32(e->Y);

			double x1 = (double)((temp_x - (pictureBox1->Width >> 1)));
			double x2 = (double)(((pictureBox1->Height >> 1) - temp_y));

			if (sizeOfSamples == 0) { sizeOfSamples = sizeOfClass2 = 1; p = new Samples[1]; p[0].x1 = x1;	p[0].x2 = x2; p[0].classId = CLASS2; }
			else {
				Samples* temp;
				temp = p;
				sizeOfClass2++;
				sizeOfSamples++;
				p = new Samples[sizeOfSamples];
				for (int i = 0; i < sizeOfSamples; i++)
				{
					p[i].x1 = temp[i].x1;
					p[i].x2 = temp[i].x2;
					p[i].classId = temp[i].classId;
				}

				p[sizeOfSamples - 1].x1 = x1;
				p[sizeOfSamples - 1].x2 = x2;
				p[sizeOfSamples - 1].classId = CLASS2;
				delete temp;
			}

			textBox5->Text = "x1: " + Convert::ToString(p[sizeOfSamples - 1].x1);
			textBox6->Text = "x2: " + Convert::ToString(p[sizeOfSamples - 1].x2);
			textBox7->Text = "Count: " + Convert::ToString(sizeOfClass2);
			textBox8->Text = Convert::ToString(sizeOfSamples);


			//Adding point to table.
			Pen^ pen = gcnew Pen(Color::LimeGreen, 3.0f);
			pictureBox1->CreateGraphics()->DrawEllipse(pen, temp_x, temp_y, 5, 5);
		}



	}//DrawPoint

	//Initialize randomly
	private: System::Void randomlyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		//w1*x1 + w2*x2 + w3 = 0

		int dimension = 2;
		w = new double[dimension + 1];

		srand(time(0));
		for (int i = 0; i < dimension + 1; i++)
			w[i] = ((double)rand() / RAND_MAX);

		drawTrainLine();
		
	
	}//Initialize randomly

	//Perceptron Train
	private: System::Void trainToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		this->richTextBox1->BackColor = Color::Red;

			PerceptronLearning *learningNetwork = new PerceptronLearning();
		int cycleCount = 0;

		if (sizeOfSamples != 0) {
			learningNetwork->Train(p, w, sizeOfSamples, cycleCount);
			drawTrainLine();
			this->textBox10->Text = Convert::ToString(cycleCount);
		}
		else
			MessageBox::Show("Please enter samples.", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);

		w[0] = w[1] = w[2] = 0;

		this->richTextBox1->BackColor = Color::Turquoise;

	}//Perceptron Train


	
	//DrawTrainLine
	void drawTrainLine()
	{

		/*int minX = pictureBox1->Width / -2;
		int minY = YPoint(minX, w);
		int maxX = pictureBox1->Width / 2;
		int maxY = YPoint(maxX, w);*/

		//x2 = (+c -ax1) / b
		int minX = pictureBox1->Width / -2;
		int minY = (w[2] - minX * w[0]) / w[1];
		int maxX = pictureBox1->Width / 2;
		int maxY = (w[2] - maxX * w[0]) / w[1];

		Pen^ pen = gcnew Pen(Color::MidnightBlue, 3.0f);
		pictureBox1->CreateGraphics()->DrawLine(pen, 0, pictureBox1->Height / 2 - minY, pictureBox1->Width, pictureBox1->Height / 2 - maxY);

		richTextBox1->AppendText("w1: " + Convert::ToString(w[0]) + "\tw2: " + Convert::ToString(w[1]) + "\tw3: " + Convert::ToString(w[2]) + "\n");
	}//DrawTrainLine

	//CLEAN
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		sizeOfSamples = sizeOfClass1 = sizeOfClass2 = 0;
		this->pictureBox1->CreateGraphics()->Clear(Color::FromArgb(30, 30, 30));


		System::Drawing::Rectangle r;
		PaintEventArgs^ f = gcnew PaintEventArgs(pictureBox1->CreateGraphics(), r);
		this->pictureBox1_Paint(this, f);

		delete w;
		delete p;
	}//CLEAN



	//Delta Train
	private: System::Void deltaTrainToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->richTextBox1->BackColor = Color::Red;

		learningNetwork = new DeltaLearning();
		int cycleCount = 0;

		if (sizeOfSamples != 0) {
			learningNetwork->Train(p, w, sizeOfSamples, cycleCount);
			drawTrainLine();
			this->textBox10->Text = Convert::ToString(cycleCount);
		}
		else
			MessageBox::Show("Please enter samples.", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);

		w[0] = w[1] = w[2] = 0;

		this->richTextBox1->BackColor = Color::Turquoise;

	}//Delta Train

	//Batch Normalizing
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		learningNetwork->BatchNormalizing(p, sizeOfSamples);
		this->drawNormalizedPoints(p, sizeOfSamples);
	}//Batch Normalizing

	//Draw Normalized points
	void drawNormalizedPoints(Samples* point, int pointCount) {
		Pen^ pen1 = gcnew Pen(Color::Aqua, 3.0f);
		Pen^ pen2 = gcnew Pen(Color::LimeGreen, 3.0f);

		//picturebox clean
		this->pictureBox1->CreateGraphics()->Clear(Color::FromArgb(30, 30, 30));
		System::Drawing::Rectangle r;
		PaintEventArgs^ f = gcnew PaintEventArgs(pictureBox1->CreateGraphics(), r);
		this->pictureBox1_Paint(this, f);

		//draw new points.
		for (int i = 0; i < pointCount; i++)
		{
			int tempX = point[i].x1 + this->pictureBox1->Width / 2;
			int tempY = this->pictureBox1->Height / 2 - point[i].x2;
			if (point[i].classId < 0)
				this->pictureBox1->CreateGraphics()->DrawEllipse(pen1, tempX, tempY, 5, 5);
			else
				this->pictureBox1->CreateGraphics()->DrawEllipse(pen2, tempX, tempY, 5, 5);
		}
	}//Draw Normalized points
};
}