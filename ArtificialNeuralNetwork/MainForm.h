#include <Windows.h>
#include <time.h>
#include "Resources.h"
#include "Process.h"

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
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ processToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;














	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		Samples* p;
		int sizeOfSamples, sizeOfClass1, sizeOfClass2;
		double* w;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::ToolStripMenuItem^ initialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ randomlyToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox8;

		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->processToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->initialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->randomlyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Aqua;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->processToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1350, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// processToolStripMenuItem
			// 
			this->processToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->initialToolStripMenuItem });
			this->processToolStripMenuItem->Name = L"processToolStripMenuItem";
			this->processToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->processToolStripMenuItem->Text = L"Process";
			// 
			// initialToolStripMenuItem
			// 
			this->initialToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->randomlyToolStripMenuItem });
			this->initialToolStripMenuItem->Name = L"initialToolStripMenuItem";
			this->initialToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->initialToolStripMenuItem->Text = L"Initial";
			// 
			// randomlyToolStripMenuItem
			// 
			this->randomlyToolStripMenuItem->Name = L"randomlyToolStripMenuItem";
			this->randomlyToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->randomlyToolStripMenuItem->Text = L"Randomly";
			this->randomlyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::randomlyToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Aqua;
			this->richTextBox1->Location = System::Drawing::Point(3, 602);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1037, 100);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1037, 593);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::pictureBox1_Paint);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseClick);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->radioButton2, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->radioButton1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBox1, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBox2, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->textBox3, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->textBox4, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->textBox5, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBox6, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->textBox7, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->textBox8, 1, 5);
			this->tableLayoutPanel2->Location = System::Drawing::Point(1046, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 6;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.070827F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(301, 593);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->radioButton2->ForeColor = System::Drawing::Color::Red;
			this->radioButton2->Location = System::Drawing::Point(153, 3);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(88, 29);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Class2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->radioButton1->ForeColor = System::Drawing::Color::Blue;
			this->radioButton1->Location = System::Drawing::Point(3, 3);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(86, 29);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Class1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Blue;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(3, 476);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(144, 25);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"X1: ";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Blue;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(3, 507);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(144, 25);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"X2: ";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Blue;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(3, 536);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(144, 25);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"Count:";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Black;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(3, 566);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(144, 25);
			this->textBox4->TabIndex = 5;
			this->textBox4->Text = L"Total Count : ";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Red;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(153, 476);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(144, 25);
			this->textBox5->TabIndex = 6;
			this->textBox5->Text = L"X1: ";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Red;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(153, 507);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(144, 25);
			this->textBox6->TabIndex = 7;
			this->textBox6->Text = L"X2:";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Red;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(153, 536);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(144, 25);
			this->textBox7->TabIndex = 8;
			this->textBox7->Text = L"Count:";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Black;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(153, 566);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(144, 25);
			this->textBox8->TabIndex = 9;
			this->textBox8->Text = L"NaN";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				77.25926F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				22.74074F)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->richTextBox1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox2, 1, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 24);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 106)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1350, 705);
			this->tableLayoutPanel1->TabIndex = 3;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::tableLayoutPanel1_Paint_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1046, 602);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(300, 100);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1350, 729);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->MaximumSize = System::Drawing::Size(1366, 768);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"MainForm";
			this->Text = L"Artificial Neural Network Workspace";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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

		Pen^ pen = gcnew Pen(Color::Black, 1.0f);
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

			if (sizeOfSamples == 0) { p = new Samples[1]; p[0].x1 = x1;	p[0].x2 = x2; p[0].id = CLASS1; }

			Samples* temp;
			temp = p;
			sizeOfClass1++;
			sizeOfSamples++;
			p = new Samples[sizeOfSamples];
			for (int i = 0; i < sizeOfSamples; i++)
			{
				p[i].x1 = temp[i].x1;
				p[i].x2 = temp[i].x2;
				p[i].id = temp[i].id;
			}

			p[sizeOfSamples - 1].x1 = x1;
			p[sizeOfSamples - 1].x2 = x2;
			p[sizeOfSamples - 1].id = CLASS1;
			delete temp;

			textBox1->Text = "x1: " + Convert::ToString(p[sizeOfSamples - 1].x1);
			textBox2->Text = "x2: " + Convert::ToString(p[sizeOfSamples - 1].x2);
			textBox3->Text = "Count: " + Convert::ToString(sizeOfClass1);
			textBox8->Text = Convert::ToString(sizeOfSamples);




			//Adding point to table.
			Pen^ pen = gcnew Pen(Color::Blue, 5.0f);
			pictureBox1->CreateGraphics()->DrawEllipse(pen, temp_x, temp_y, 5, 5);

		}

		//Class2
		else if (radioButton2->Checked)
		{
			int temp_x = System::Convert::ToInt32(e->X);
			int temp_y = System::Convert::ToInt32(e->Y);

			double x1 = (double)(temp_x - (pictureBox1->Width >> 1));
			double x2 = (double)((pictureBox1->Height >> 1) - temp_y);

			if (sizeOfSamples == 0) { p = new Samples[1]; p[0].x1 = x1;	p[0].x2 = x2; p[0].id = CLASS2; }

			Samples* temp;
			temp = p;
			sizeOfClass2++;
			sizeOfSamples++;
			p = new Samples[sizeOfSamples];
			for (int i = 0; i < sizeOfSamples; i++)
			{
				p[i].x1 = temp[i].x1;
				p[i].x2 = temp[i].x2;
				p[i].id = temp[i].id;
			}

			p[sizeOfSamples - 1].x1 = x1;
			p[sizeOfSamples - 1].x2 = x2;
			p[sizeOfSamples - 1].id = CLASS2;
			delete temp;


			textBox5->Text = "x1: " + Convert::ToString(p[sizeOfSamples - 1].x1);
			textBox6->Text = "x2: " + Convert::ToString(p[sizeOfSamples - 1].x2);
			textBox7->Text = "Count: " + Convert::ToString(sizeOfClass2);
			textBox8->Text = Convert::ToString(sizeOfSamples);


			//Adding point to table.
			Pen^ pen = gcnew Pen(Color::Red, 5.0f);
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

		int minX = pictureBox1->Width / -2;
		int minY = YPoint(minX, w);
		int maxX = pictureBox1->Width / 2;
		int maxY = YPoint(maxX, w);



		Pen^ pen = gcnew Pen(Color::Black, 3.0f);
		pictureBox1->CreateGraphics()->DrawLine(pen, pictureBox1->Width / 2 + minX, pictureBox1->Height / 2 - minY, pictureBox1->Width / 2 + maxX, pictureBox1->Height / 2 - maxY);


		richTextBox1->AppendText("w1: " + Convert::ToString(w[0]) + "\tw2: " + Convert::ToString(w[1]) + "\tw3: " + Convert::ToString(w[2]) + "\n");
	}//Initialize randomly
};
}
