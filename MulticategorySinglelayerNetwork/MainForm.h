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
			sizeOfSamples = classNumber = 0;
			srand(time(NULL));
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

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		Samples* p;
		SampleClass* pClass;
		int sizeOfSamples, *sizeOfClass, classNumber, selectedClass;
		double* w;
		NeuralNetwork* learningNetwork;


	private: System::Windows::Forms::ToolStripMenuItem^ initialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ randomlyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deltaTrainToolStripMenuItem;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;

















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
			   this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->panel7 = (gcnew System::Windows::Forms::Panel());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->panel6 = (gcnew System::Windows::Forms::Panel());
			   this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			   this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->panel5 = (gcnew System::Windows::Forms::Panel());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->panel4 = (gcnew System::Windows::Forms::Panel());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->panel3 = (gcnew System::Windows::Forms::Panel());
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->panel8 = (gcnew System::Windows::Forms::Panel());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->menuStrip1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			   this->panel1->SuspendLayout();
			   this->panel7->SuspendLayout();
			   this->panel6->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			   this->groupBox1->SuspendLayout();
			   this->groupBox2->SuspendLayout();
			   this->panel5->SuspendLayout();
			   this->panel4->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			   this->panel2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->panel3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			   this->panel8->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->AutoSize = false;
			   this->menuStrip1->BackColor = System::Drawing::Color::Turquoise;
			   this->menuStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->processToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			   this->menuStrip1->Size = System::Drawing::Size(1346, 30);
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
			   this->processToolStripMenuItem->Size = System::Drawing::Size(59, 26);
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
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				   static_cast<System::Int32>(static_cast<System::Byte>(50)));
			   this->panel1->Controls->Add(this->panel7);
			   this->panel1->Controls->Add(this->panel6);
			   this->panel1->Controls->Add(this->button2);
			   this->panel1->Controls->Add(this->panel5);
			   this->panel1->Controls->Add(this->panel4);
			   this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			   this->panel1->Location = System::Drawing::Point(0, 30);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(203, 711);
			   this->panel1->TabIndex = 2;
			   // 
			   // panel7
			   // 
			   this->panel7->Controls->Add(this->textBox5);
			   this->panel7->Controls->Add(this->label8);
			   this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->panel7->Location = System::Drawing::Point(0, 591);
			   this->panel7->Name = L"panel7";
			   this->panel7->Size = System::Drawing::Size(203, 63);
			   this->panel7->TabIndex = 5;
			   this->panel7->Visible = false;
			   // 
			   // textBox5
			   // 
			   this->textBox5->BackColor = System::Drawing::Color::Silver;
			   this->textBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->textBox5->Location = System::Drawing::Point(0, 33);
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->Size = System::Drawing::Size(203, 22);
			   this->textBox5->TabIndex = 8;
			   // 
			   // label8
			   // 
			   this->label8->BackColor = System::Drawing::Color::DarkGreen;
			   this->label8->Dock = System::Windows::Forms::DockStyle::Top;
			   this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->label8->ForeColor = System::Drawing::Color::White;
			   this->label8->Location = System::Drawing::Point(0, 0);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(203, 33);
			   this->label8->TabIndex = 7;
			   this->label8->Text = L"Total Cycle";
			   this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // panel6
			   // 
			   this->panel6->BackColor = System::Drawing::Color::DarkGreen;
			   this->panel6->Controls->Add(this->numericUpDown5);
			   this->panel6->Controls->Add(this->groupBox1);
			   this->panel6->Controls->Add(this->textBox1);
			   this->panel6->Controls->Add(this->label3);
			   this->panel6->Controls->Add(this->groupBox2);
			   this->panel6->Controls->Add(this->label2);
			   this->panel6->Location = System::Drawing::Point(3, 50);
			   this->panel6->Name = L"panel6";
			   this->panel6->Size = System::Drawing::Size(200, 208);
			   this->panel6->TabIndex = 4;
			   this->panel6->Visible = false;
			   // 
			   // numericUpDown5
			   // 
			   this->numericUpDown5->BackColor = System::Drawing::Color::Silver;
			   this->numericUpDown5->Location = System::Drawing::Point(154, 5);
			   this->numericUpDown5->Name = L"numericUpDown5";
			   this->numericUpDown5->Size = System::Drawing::Size(43, 22);
			   this->numericUpDown5->TabIndex = 11;
			   this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &MainForm::numericUpDown5_ValueChanged);
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->Controls->Add(this->textBox4);
			   this->groupBox1->Controls->Add(this->textBox3);
			   this->groupBox1->Controls->Add(this->label7);
			   this->groupBox1->Controls->Add(this->label6);
			   this->groupBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->groupBox1->Location = System::Drawing::Point(0, 62);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(200, 73);
			   this->groupBox1->TabIndex = 1;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"Coordinates";
			   // 
			   // textBox4
			   // 
			   this->textBox4->BackColor = System::Drawing::Color::Silver;
			   this->textBox4->Location = System::Drawing::Point(84, 46);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(116, 22);
			   this->textBox4->TabIndex = 10;
			   // 
			   // textBox3
			   // 
			   this->textBox3->BackColor = System::Drawing::Color::Silver;
			   this->textBox3->Location = System::Drawing::Point(84, 18);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(116, 22);
			   this->textBox3->TabIndex = 7;
			   // 
			   // label7
			   // 
			   this->label7->BackColor = System::Drawing::Color::DarkGreen;
			   this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->label7->ForeColor = System::Drawing::Color::White;
			   this->label7->Location = System::Drawing::Point(3, 43);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(75, 25);
			   this->label7->TabIndex = 9;
			   this->label7->Text = L"WH";
			   this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // label6
			   // 
			   this->label6->BackColor = System::Drawing::Color::DarkGreen;
			   this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->label6->ForeColor = System::Drawing::Color::White;
			   this->label6->Location = System::Drawing::Point(3, 18);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(75, 25);
			   this->label6->TabIndex = 8;
			   this->label6->Text = L"XY";
			   this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // textBox1
			   // 
			   this->textBox1->BackColor = System::Drawing::Color::Silver;
			   this->textBox1->Location = System::Drawing::Point(154, 34);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(43, 22);
			   this->textBox1->TabIndex = 6;
			   // 
			   // label3
			   // 
			   this->label3->BackColor = System::Drawing::Color::DarkGreen;
			   this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->label3->ForeColor = System::Drawing::Color::White;
			   this->label3->Location = System::Drawing::Point(-7, 30);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(160, 25);
			   this->label3->TabIndex = 5;
			   this->label3->Text = L"Sample Count";
			   this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // groupBox2
			   // 
			   this->groupBox2->Controls->Add(this->textBox8);
			   this->groupBox2->Controls->Add(this->textBox7);
			   this->groupBox2->Controls->Add(this->textBox6);
			   this->groupBox2->Controls->Add(this->label4);
			   this->groupBox2->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->groupBox2->Location = System::Drawing::Point(0, 135);
			   this->groupBox2->Name = L"groupBox2";
			   this->groupBox2->Size = System::Drawing::Size(200, 73);
			   this->groupBox2->TabIndex = 4;
			   this->groupBox2->TabStop = false;
			   this->groupBox2->Text = L"Color";
			   // 
			   // textBox8
			   // 
			   this->textBox8->BackColor = System::Drawing::Color::Silver;
			   this->textBox8->Location = System::Drawing::Point(124, 45);
			   this->textBox8->Name = L"textBox8";
			   this->textBox8->Size = System::Drawing::Size(34, 22);
			   this->textBox8->TabIndex = 14;
			   // 
			   // textBox7
			   // 
			   this->textBox7->BackColor = System::Drawing::Color::Silver;
			   this->textBox7->Location = System::Drawing::Point(84, 45);
			   this->textBox7->Name = L"textBox7";
			   this->textBox7->Size = System::Drawing::Size(34, 22);
			   this->textBox7->TabIndex = 13;
			   // 
			   // textBox6
			   // 
			   this->textBox6->BackColor = System::Drawing::Color::Silver;
			   this->textBox6->Location = System::Drawing::Point(44, 45);
			   this->textBox6->Name = L"textBox6";
			   this->textBox6->Size = System::Drawing::Size(34, 22);
			   this->textBox6->TabIndex = 12;
			   this->textBox6->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox6_TextChanged);
			   // 
			   // label4
			   // 
			   this->label4->BackColor = System::Drawing::Color::DarkGreen;
			   this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->label4->ForeColor = System::Drawing::Color::White;
			   this->label4->Location = System::Drawing::Point(0, 17);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(197, 25);
			   this->label4->TabIndex = 7;
			   this->label4->Text = L"   R       G       B";
			   this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // label2
			   // 
			   this->label2->BackColor = System::Drawing::Color::DarkGreen;
			   this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->label2->ForeColor = System::Drawing::Color::White;
			   this->label2->Location = System::Drawing::Point(-3, 0);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(160, 25);
			   this->label2->TabIndex = 3;
			   this->label2->Text = L"Selected Class";
			   this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::DarkGreen;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->button2->ForeColor = System::Drawing::Color::White;
			   this->button2->Location = System::Drawing::Point(0, 313);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(200, 46);
			   this->button2->TabIndex = 0;
			   this->button2->Text = L"Batch Normalized";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Visible = false;
			   this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			   // 
			   // panel5
			   // 
			   this->panel5->BackColor = System::Drawing::Color::DarkGreen;
			   this->panel5->Controls->Add(this->textBox2);
			   this->panel5->Controls->Add(this->label5);
			   this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->panel5->Location = System::Drawing::Point(0, 654);
			   this->panel5->Name = L"panel5";
			   this->panel5->Size = System::Drawing::Size(203, 57);
			   this->panel5->TabIndex = 1;
			   this->panel5->Visible = false;
			   // 
			   // textBox2
			   // 
			   this->textBox2->BackColor = System::Drawing::Color::Silver;
			   this->textBox2->Dock = System::Windows::Forms::DockStyle::Top;
			   this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->textBox2->Location = System::Drawing::Point(0, 31);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(203, 25);
			   this->textBox2->TabIndex = 8;
			   // 
			   // label5
			   // 
			   this->label5->BackColor = System::Drawing::Color::DarkGreen;
			   this->label5->Dock = System::Windows::Forms::DockStyle::Top;
			   this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->label5->ForeColor = System::Drawing::Color::White;
			   this->label5->Location = System::Drawing::Point(0, 0);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(203, 31);
			   this->label5->TabIndex = 7;
			   this->label5->Text = L"Total Samples";
			   this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // panel4
			   // 
			   this->panel4->BackColor = System::Drawing::Color::DarkGreen;
			   this->panel4->Controls->Add(this->button3);
			   this->panel4->Controls->Add(this->numericUpDown1);
			   this->panel4->Controls->Add(this->label1);
			   this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			   this->panel4->Location = System::Drawing::Point(0, 0);
			   this->panel4->Name = L"panel4";
			   this->panel4->Size = System::Drawing::Size(203, 29);
			   this->panel4->TabIndex = 0;
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::Color::LightGray;
			   this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button3->Location = System::Drawing::Point(151, 4);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(43, 23);
			   this->button3->TabIndex = 3;
			   this->button3->Text = L"OK";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			   // 
			   // numericUpDown1
			   // 
			   this->numericUpDown1->BackColor = System::Drawing::Color::Silver;
			   this->numericUpDown1->Location = System::Drawing::Point(101, 3);
			   this->numericUpDown1->Name = L"numericUpDown1";
			   this->numericUpDown1->Size = System::Drawing::Size(43, 22);
			   this->numericUpDown1->TabIndex = 0;
			   this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MainForm::numericUpDown1_ValueChanged);
			   // 
			   // label1
			   // 
			   this->label1->BackColor = System::Drawing::Color::DarkGreen;
			   this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->label1->ForeColor = System::Drawing::Color::White;
			   this->label1->Location = System::Drawing::Point(3, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(92, 25);
			   this->label1->TabIndex = 2;
			   this->label1->Text = L"Class Count";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // panel2
			   // 
			   this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)));
			   this->panel2->Controls->Add(this->pictureBox1);
			   this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			   this->panel2->Location = System::Drawing::Point(203, 30);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(1143, 561);
			   this->panel2->TabIndex = 3;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pictureBox1->Location = System::Drawing::Point(0, 0);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(1143, 561);
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::pictureBox1_Paint);
			   this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseClick);
			   // 
			   // panel3
			   // 
			   this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(50)));
			   this->panel3->Controls->Add(this->richTextBox1);
			   this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->panel3->Location = System::Drawing::Point(203, 591);
			   this->panel3->Name = L"panel3";
			   this->panel3->Size = System::Drawing::Size(1143, 150);
			   this->panel3->TabIndex = 4;
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				   static_cast<System::Int32>(static_cast<System::Byte>(50)));
			   this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->richTextBox1->ForeColor = System::Drawing::Color::White;
			   this->richTextBox1->Location = System::Drawing::Point(0, 0);
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->Size = System::Drawing::Size(1143, 150);
			   this->richTextBox1->TabIndex = 0;
			   this->richTextBox1->Text = L"";
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Turquoise;
			   this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button1->Dock = System::Windows::Forms::DockStyle::Right;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			   this->button1->Location = System::Drawing::Point(59, 0);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(33, 30);
			   this->button1->TabIndex = 5;
			   this->button1->Text = L"X";
			   this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			   // 
			   // panel8
			   // 
			   this->panel8->BackColor = System::Drawing::Color::Turquoise;
			   this->panel8->Controls->Add(this->button4);
			   this->panel8->Controls->Add(this->button1);
			   this->panel8->Location = System::Drawing::Point(1254, 0);
			   this->panel8->Name = L"panel8";
			   this->panel8->Size = System::Drawing::Size(92, 30);
			   this->panel8->TabIndex = 1;
			   // 
			   // button4
			   // 
			   this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->button4->Dock = System::Windows::Forms::DockStyle::Right;
			   this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->button4->Location = System::Drawing::Point(2, 0);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(57, 30);
			   this->button4->TabIndex = 6;
			   this->button4->Text = L"Clean";
			   this->button4->UseVisualStyleBackColor = false;
			   this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			   // 
			   // MainForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->ClientSize = System::Drawing::Size(1346, 741);
			   this->Controls->Add(this->panel8);
			   this->Controls->Add(this->panel3);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->menuStrip1);
			   this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->MaximumSize = System::Drawing::Size(1366, 800);
			   this->MinimumSize = System::Drawing::Size(800, 600);
			   this->Name = L"MainForm";
			   this->Text = L"Artificial Neural Network Workspace";
			   this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			   this->panel1->ResumeLayout(false);
			   this->panel7->ResumeLayout(false);
			   this->panel7->PerformLayout();
			   this->panel6->ResumeLayout(false);
			   this->panel6->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   this->groupBox2->ResumeLayout(false);
			   this->groupBox2->PerformLayout();
			   this->panel5->ResumeLayout(false);
			   this->panel5->PerformLayout();
			   this->panel4->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			   this->panel2->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->panel3->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			   this->panel8->ResumeLayout(false);
			   this->ResumeLayout(false);

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
		
		int temp_x = System::Convert::ToInt32(e->X);
		int temp_y = System::Convert::ToInt32(e->Y);

		double x1 = (double)(temp_x - (pictureBox1->Width >> 1));
		double x2 = (double)((pictureBox1->Height >> 1) - temp_y);

		selectedClass = Convert::ToInt32(numericUpDown5->Value);

		if (sizeOfSamples == 0) { 
			sizeOfSamples = sizeOfClass[selectedClass] = 1; 
			p = new Samples[1]; 
			p[0].x1 = x1;	p[0].x2 = x2; 
			//p[0].classId = selectedClass; 
			p[0].classId = selectedClass;
		}
		else {
			Samples* temp;
			temp = p;
			sizeOfClass[selectedClass]++;
			sizeOfSamples++;
			p = new Samples[sizeOfSamples];
			for (int i = 0; i < sizeOfSamples - 1; i++)
			{
				p[i].x1 = temp[i].x1;
				p[i].x2 = temp[i].x2;
				//p[i].classId = temp[i].classId;
				p[i].classId = temp[i].classId;
			}
			p[sizeOfSamples - 1].x1 = x1;
			p[sizeOfSamples - 1].x2 = x2;
			p[sizeOfSamples - 1].classId = selectedClass;
			delete temp;
		}

		textBox3->Text = Convert::ToString(p[sizeOfSamples - 1].x1) + "," + Convert::ToString(p[sizeOfSamples - 1].x2);
		textBox4->Text = Convert::ToString(temp_x) + "," + Convert::ToString(temp_y);
		//numericUpDown2->Value = Convert::ToDecimal(pClass[selectedClass].color.r);
		//numericUpDown3->Value = Convert::ToDecimal(pClass[selectedClass].color.g);
		//numericUpDown4->Value = Convert::ToDecimal(pClass[selectedClass].color.b);

		//Adding point to table.
		Pen^ pen = gcnew Pen(Color::FromArgb(pClass[selectedClass].color.r, pClass[selectedClass].color.g, pClass[selectedClass].color.b), 3.0f);
		pictureBox1->CreateGraphics()->DrawEllipse(pen, temp_x, temp_y, 5, 5);


	}//DrawPoint

	////Initialize randomly
	//private: System::Void randomlyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	//	//w1*x1 + w2*x2 + w3 = 0

	//	int dimension = 2;
	//	w = new double[dimension + 1];

	//	srand(time(0));
	//	for (int i = 0; i < dimension + 1; i++)
	//		w[i] = ((double)rand() / RAND_MAX);

	//	drawTrainLine();
	//	
	//
	//}//Initialize randomly

	//Perceptron Train
	private: System::Void trainToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		this->richTextBox1->BackColor = Color::Red;

		PerceptronLearning *learningNetwork = new PerceptronLearning();
		int cycleCount = 0;

		if (sizeOfSamples != 0) {
			learningNetwork->Train(p, w, sizeOfSamples, pClass, classNumber, cycleCount);
			drawTrainLine(pClass, classNumber);
			this->textBox5->Text = Convert::ToString(cycleCount);
		}
		else
			MessageBox::Show("Please enter samples.", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);

		//w[0] = w[1] = w[2] = 0;

		this->richTextBox1->BackColor = Color::Turquoise;

	}//Perceptron Train


	
	//DrawTrainLine
	void drawTrainLine(SampleClass *cls, int classNumber)
	{

		/*int minX = pictureBox1->Width / -2;
		int minY = YPoint(minX, w);
		int maxX = pictureBox1->Width / 2;
		int maxY = YPoint(maxX, w);*/
		for (int i = 0; i < classNumber; i++)
		{
			//x2 = (+c -ax1) / b
			int minX = pictureBox1->Width / -2;
			int minY = (cls[i].w[2] - minX * cls[i].w[0]) / cls[i].w[1];
			int maxX = pictureBox1->Width / 2;
			int maxY = (cls[i].w[2] - maxX * cls[i].w[0]) / cls[i].w[1];

			Pen^ pen = gcnew Pen(Color::FromArgb(cls[i].color.r, cls[i].color.g, cls[i].color.b), 3.0f);
			pictureBox1->CreateGraphics()->DrawLine(pen, 0, pictureBox1->Height / 2 - minY, pictureBox1->Width, pictureBox1->Height / 2 - maxY);

			richTextBox1->AppendText("w1: " + Convert::ToString(cls[i].w[0]) + "\tw2: " + Convert::ToString(cls[i].w[1]) + "\tw3: " + Convert::ToString(cls[i].w[2]) + "\n");
		}
	}//DrawTrainLine

	//CLEAN
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		sizeOfSamples = 0;
		for (int i = 0; i < classNumber; i++)
			sizeOfClass[classNumber] = 0;
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
			learningNetwork->Train(p, w, sizeOfSamples, pClass, classNumber, cycleCount);
			drawTrainLine(pClass, classNumber);
			this->textBox5->Text = Convert::ToString(cycleCount);
		}
		else
			MessageBox::Show("Please enter samples.", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);

		w[0] = w[1] = w[2] = 0;

		this->richTextBox1->BackColor = Color::Turquoise;

	}//Delta Train

	//Batch Normalizing
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		learningNetwork->batchNormalizing(p, sizeOfSamples);
		this->drawNormalizedPoints(p, sizeOfSamples, pClass, classNumber);
	}//Batch Normalizing

	//Draw Normalized points
	void drawNormalizedPoints(Samples* point, int pointCount, SampleClass* sc, int classNumber) {
		Pen^ pen1 = gcnew Pen(Color::Aqua, 3.0f);

		//picturebox clean
		this->pictureBox1->CreateGraphics()->Clear(Color::FromArgb(30, 30, 30));
		System::Drawing::Rectangle r;
		PaintEventArgs^ f = gcnew PaintEventArgs(pictureBox1->CreateGraphics(), r);
		this->pictureBox1_Paint(this, f);

		//draw new points.
		for (int i = 0; i < pointCount; i++)
		{
			int tempX = point[i].x1*50 + this->pictureBox1->Width / 2;
			int tempY = this->pictureBox1->Height / 2 - point[i].x2*50;

			//noktanýn idsi ile sc idsi eþit ise onun coloru al.
			for (int j = 0; j < classNumber; j++)
				if (point[i].classId == sc[j].classId)
					pen1->Color = Color::FromArgb(sc[j].color.r, sc[j].color.g, sc[j].color.b);
			this->pictureBox1->CreateGraphics()->DrawEllipse(pen1, tempX, tempY, 5, 5);
		}
	}//Draw Normalized points


	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {}


	//OK BUTTON
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int dimension = 2;
		classNumber = Convert::ToInt32(numericUpDown1->Value);
		pClass = new SampleClass[classNumber];
		sizeOfClass = new int[classNumber];

		for (int i = 0; i < classNumber; i++)
		{
			pClass[i].classId = i;
			pClass[i].color.r = rand() % 255;
			pClass[i].color.g = rand() % 255;
			pClass[i].color.b = rand() % 255;
			pClass[i].w = new double[dimension + 1];
			for (int j = 0; j < dimension + 1; j++)
				pClass[i].w[j] = ((double)rand() / RAND_MAX);
		}
		//drawTrainLine(pClass, classNumber);
		this->panel5->Visible = TRUE;
		this->panel6->Visible = TRUE;
		this->panel7->Visible = TRUE;
		this->button2->Visible = TRUE;
		this->numericUpDown5->Maximum = classNumber - 1;
	}//OK BUTTON

	//EXIT
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}//EXIT

	private: System::Void numericUpDown5_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		selectedClass = Convert::ToInt32(numericUpDown5->Value);
		textBox6->Text = Convert::ToString(pClass[selectedClass].color.r);
		textBox7->Text = Convert::ToString(pClass[selectedClass].color.g);
		textBox8->Text = Convert::ToString(pClass[selectedClass].color.b);
	}	
		private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
	
	
};
}