#pragma once

#define IMAGE_WHITE_CHIP "VC_Resources\\Chips\\Chip_1.png"  
#define IMAGE_BLACK_CHIP "VC_Resources\\Chips\\Chip_2.png"


namespace BoardGames {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
		public:	MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

		protected: ~MainForm()
		{
			/// <summary>
			/// ���������� ��� ������������ �������.
			/// </summary>
			if (components)
			{
				delete components;
			}
		}

	// Buttons & Labels
	private: System::Windows::Forms::Label^  TestLabel;
	private: System::Windows::Forms::Button^  NewGameButton;
	private: System::Windows::Forms::Button^  ExitButton;

		// Creating custom variables
	private: 
		// String^ ColorFishka1;
		// String^ ColorFishka2;
		// String^ ColorFishka0;
		
		System::Object^ Active;
		

				// *** TABLE *** //
	private: System::Windows::Forms::PictureBox^ a1;
	private: System::Windows::Forms::PictureBox^ a2;
	private: System::Windows::Forms::PictureBox^ a3;
	private: System::Windows::Forms::PictureBox^ a4;
	private: System::Windows::Forms::PictureBox^ a5;
	private: System::Windows::Forms::PictureBox^ a6;
	private: System::Windows::Forms::PictureBox^ a7;
	private: System::Windows::Forms::PictureBox^ a8;
	private: System::Windows::Forms::PictureBox^ b1;
	private: System::Windows::Forms::PictureBox^ b2;
	private: System::Windows::Forms::PictureBox^ b3;
	private: System::Windows::Forms::PictureBox^ b4;
	private: System::Windows::Forms::PictureBox^ b5;
	private: System::Windows::Forms::PictureBox^ b6;
	private: System::Windows::Forms::PictureBox^ b7;
	private: System::Windows::Forms::PictureBox^ b8;
	private: System::Windows::Forms::PictureBox^ c1;
	private: System::Windows::Forms::PictureBox^ c2;
	private: System::Windows::Forms::PictureBox^ c3;
	private: System::Windows::Forms::PictureBox^ c4;
	private: System::Windows::Forms::PictureBox^ c5;
	private: System::Windows::Forms::PictureBox^ c6;
	private: System::Windows::Forms::PictureBox^ c7;
	private: System::Windows::Forms::PictureBox^ c8;
	private: System::Windows::Forms::PictureBox^ d1;
	private: System::Windows::Forms::PictureBox^ d2;
	private: System::Windows::Forms::PictureBox^ d3;
	private: System::Windows::Forms::PictureBox^ d4;
	private: System::Windows::Forms::PictureBox^ d5;
	private: System::Windows::Forms::PictureBox^ d6;
	private: System::Windows::Forms::PictureBox^ d7;
	private: System::Windows::Forms::PictureBox^ d8;
	private: System::Windows::Forms::PictureBox^ e1;
	private: System::Windows::Forms::PictureBox^ e2;
	private: System::Windows::Forms::PictureBox^ e3;
	private: System::Windows::Forms::PictureBox^ e4;
	private: System::Windows::Forms::PictureBox^ e5;
	private: System::Windows::Forms::PictureBox^ e6;
	private: System::Windows::Forms::PictureBox^ e7;
	private: System::Windows::Forms::PictureBox^ e8;
	private: System::Windows::Forms::PictureBox^ f1;
	private: System::Windows::Forms::PictureBox^ f2;
	private: System::Windows::Forms::PictureBox^ f3;
	private: System::Windows::Forms::PictureBox^ f4;
	private: System::Windows::Forms::PictureBox^ f5;
	private: System::Windows::Forms::PictureBox^ f6;
	private: System::Windows::Forms::PictureBox^ f7;
	private: System::Windows::Forms::PictureBox^ f8;
	private: System::Windows::Forms::PictureBox^ g1;
	private: System::Windows::Forms::PictureBox^ g2;
	private: System::Windows::Forms::PictureBox^ g3;
	private: System::Windows::Forms::PictureBox^ g4;
	private: System::Windows::Forms::PictureBox^ g5;
	private: System::Windows::Forms::PictureBox^ g6;
	private: System::Windows::Forms::PictureBox^ g7;
	private: System::Windows::Forms::PictureBox^ g8;
	private: System::Windows::Forms::PictureBox^ h1;
	private: System::Windows::Forms::PictureBox^ h2;
	private: System::Windows::Forms::PictureBox^ h3;
	private: System::Windows::Forms::PictureBox^ h4;
	private: System::Windows::Forms::PictureBox^ h5;
	private: System::Windows::Forms::PictureBox^ h6;
	private: System::Windows::Forms::PictureBox^ h7;
	private: System::Windows::Forms::PictureBox^ h8;
// =============================================================================================== //
	
			// *** Board Marks *** //
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
// =============================================================================================== //

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

		// Initializition of components
#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->a8 = (gcnew System::Windows::Forms::PictureBox());
			this->b8 = (gcnew System::Windows::Forms::PictureBox());
			this->c8 = (gcnew System::Windows::Forms::PictureBox());
			this->d8 = (gcnew System::Windows::Forms::PictureBox());
			this->c7 = (gcnew System::Windows::Forms::PictureBox());
			this->d7 = (gcnew System::Windows::Forms::PictureBox());
			this->b7 = (gcnew System::Windows::Forms::PictureBox());
			this->a7 = (gcnew System::Windows::Forms::PictureBox());
			this->c5 = (gcnew System::Windows::Forms::PictureBox());
			this->d5 = (gcnew System::Windows::Forms::PictureBox());
			this->b5 = (gcnew System::Windows::Forms::PictureBox());
			this->a5 = (gcnew System::Windows::Forms::PictureBox());
			this->c6 = (gcnew System::Windows::Forms::PictureBox());
			this->d6 = (gcnew System::Windows::Forms::PictureBox());
			this->b6 = (gcnew System::Windows::Forms::PictureBox());
			this->a6 = (gcnew System::Windows::Forms::PictureBox());
			this->g4 = (gcnew System::Windows::Forms::PictureBox());
			this->h4 = (gcnew System::Windows::Forms::PictureBox());
			this->f5 = (gcnew System::Windows::Forms::PictureBox());
			this->e5 = (gcnew System::Windows::Forms::PictureBox());
			this->g6 = (gcnew System::Windows::Forms::PictureBox());
			this->h3 = (gcnew System::Windows::Forms::PictureBox());
			this->f6 = (gcnew System::Windows::Forms::PictureBox());
			this->e6 = (gcnew System::Windows::Forms::PictureBox());
			this->g7 = (gcnew System::Windows::Forms::PictureBox());
			this->h2 = (gcnew System::Windows::Forms::PictureBox());
			this->f7 = (gcnew System::Windows::Forms::PictureBox());
			this->e7 = (gcnew System::Windows::Forms::PictureBox());
			this->g8 = (gcnew System::Windows::Forms::PictureBox());
			this->h1 = (gcnew System::Windows::Forms::PictureBox());
			this->f8 = (gcnew System::Windows::Forms::PictureBox());
			this->e8 = (gcnew System::Windows::Forms::PictureBox());
			this->g1 = (gcnew System::Windows::Forms::PictureBox());
			this->h8 = (gcnew System::Windows::Forms::PictureBox());
			this->f1 = (gcnew System::Windows::Forms::PictureBox());
			this->e1 = (gcnew System::Windows::Forms::PictureBox());
			this->g2 = (gcnew System::Windows::Forms::PictureBox());
			this->h7 = (gcnew System::Windows::Forms::PictureBox());
			this->f2 = (gcnew System::Windows::Forms::PictureBox());
			this->e2 = (gcnew System::Windows::Forms::PictureBox());
			this->g3 = (gcnew System::Windows::Forms::PictureBox());
			this->h6 = (gcnew System::Windows::Forms::PictureBox());
			this->f3 = (gcnew System::Windows::Forms::PictureBox());
			this->e3 = (gcnew System::Windows::Forms::PictureBox());
			this->g5 = (gcnew System::Windows::Forms::PictureBox());
			this->h5 = (gcnew System::Windows::Forms::PictureBox());
			this->f4 = (gcnew System::Windows::Forms::PictureBox());
			this->e4 = (gcnew System::Windows::Forms::PictureBox());
			this->c1 = (gcnew System::Windows::Forms::PictureBox());
			this->d1 = (gcnew System::Windows::Forms::PictureBox());
			this->b1 = (gcnew System::Windows::Forms::PictureBox());
			this->a1 = (gcnew System::Windows::Forms::PictureBox());
			this->c2 = (gcnew System::Windows::Forms::PictureBox());
			this->d2 = (gcnew System::Windows::Forms::PictureBox());
			this->b2 = (gcnew System::Windows::Forms::PictureBox());
			this->a2 = (gcnew System::Windows::Forms::PictureBox());
			this->c3 = (gcnew System::Windows::Forms::PictureBox());
			this->d3 = (gcnew System::Windows::Forms::PictureBox());
			this->b3 = (gcnew System::Windows::Forms::PictureBox());
			this->a3 = (gcnew System::Windows::Forms::PictureBox());
			this->c4 = (gcnew System::Windows::Forms::PictureBox());
			this->d4 = (gcnew System::Windows::Forms::PictureBox());
			this->b4 = (gcnew System::Windows::Forms::PictureBox());
			this->a4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->TestLabel = (gcnew System::Windows::Forms::Label());
			this->NewGameButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a4))->BeginInit();
			this->SuspendLayout();
			// 
			// a8
			// 
			this->a8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a8.BackgroundImage")));
			this->a8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a8.Image")));
			this->a8->Location = System::Drawing::Point(30, 30);
			this->a8->Name = L"a8";
			this->a8->Size = System::Drawing::Size(50, 50);
			this->a8->TabIndex = 0;
			this->a8->TabStop = false;
			this->a8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b8
			// 
			this->b8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b8.BackgroundImage")));
			this->b8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b8.Image")));
			this->b8->Location = System::Drawing::Point(80, 30);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(50, 50);
			this->b8->TabIndex = 1;
			this->b8->TabStop = false;
			this->b8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c8
			// 
			this->c8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c8.BackgroundImage")));
			this->c8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c8.Image")));
			this->c8->Location = System::Drawing::Point(130, 30);
			this->c8->Name = L"c8";
			this->c8->Size = System::Drawing::Size(50, 50);
			this->c8->TabIndex = 3;
			this->c8->TabStop = false;
			this->c8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d8
			// 
			this->d8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d8.BackgroundImage")));
			this->d8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d8.Image")));
			this->d8->Location = System::Drawing::Point(180, 30);
			this->d8->Name = L"d8";
			this->d8->Size = System::Drawing::Size(50, 50);
			this->d8->TabIndex = 2;
			this->d8->TabStop = false;
			this->d8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c7
			// 
			this->c7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c7.BackgroundImage")));
			this->c7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c7.Image")));
			this->c7->Location = System::Drawing::Point(130, 80);
			this->c7->Name = L"c7";
			this->c7->Size = System::Drawing::Size(50, 50);
			this->c7->TabIndex = 7;
			this->c7->TabStop = false;
			this->c7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d7
			// 
			this->d7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d7.BackgroundImage")));
			this->d7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d7.Image")));
			this->d7->Location = System::Drawing::Point(180, 80);
			this->d7->Name = L"d7";
			this->d7->Size = System::Drawing::Size(50, 50);
			this->d7->TabIndex = 6;
			this->d7->TabStop = false;
			this->d7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b7
			// 
			this->b7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b7.BackgroundImage")));
			this->b7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b7.Image")));
			this->b7->Location = System::Drawing::Point(80, 80);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(50, 50);
			this->b7->TabIndex = 5;
			this->b7->TabStop = false;
			this->b7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// a7
			// 
			this->a7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a7.BackgroundImage")));
			this->a7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a7.Image")));
			this->a7->Location = System::Drawing::Point(30, 80);
			this->a7->Name = L"a7";
			this->a7->Size = System::Drawing::Size(50, 50);
			this->a7->TabIndex = 4;
			this->a7->TabStop = false;
			this->a7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c5
			// 
			this->c5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c5.BackgroundImage")));
			this->c5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c5.Image")));
			this->c5->Location = System::Drawing::Point(130, 180);
			this->c5->Name = L"c5";
			this->c5->Size = System::Drawing::Size(50, 50);
			this->c5->TabIndex = 15;
			this->c5->TabStop = false;
			this->c5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d5
			// 
			this->d5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d5.BackgroundImage")));
			this->d5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d5.Image")));
			this->d5->Location = System::Drawing::Point(180, 180);
			this->d5->Name = L"d5";
			this->d5->Size = System::Drawing::Size(50, 50);
			this->d5->TabIndex = 14;
			this->d5->TabStop = false;
			this->d5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b5
			// 
			this->b5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b5.BackgroundImage")));
			this->b5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b5.Image")));
			this->b5->Location = System::Drawing::Point(80, 180);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(50, 50);
			this->b5->TabIndex = 13;
			this->b5->TabStop = false;
			this->b5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// a5
			// 
			this->a5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a5.BackgroundImage")));
			this->a5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a5.Image")));
			this->a5->Location = System::Drawing::Point(30, 180);
			this->a5->Name = L"a5";
			this->a5->Size = System::Drawing::Size(50, 50);
			this->a5->TabIndex = 12;
			this->a5->TabStop = false;
			this->a5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c6
			// 
			this->c6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c6.BackgroundImage")));
			this->c6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c6.Image")));
			this->c6->Location = System::Drawing::Point(130, 130);
			this->c6->Name = L"c6";
			this->c6->Size = System::Drawing::Size(50, 50);
			this->c6->TabIndex = 11;
			this->c6->TabStop = false;
			this->c6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d6
			// 
			this->d6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d6.BackgroundImage")));
			this->d6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d6.Image")));
			this->d6->Location = System::Drawing::Point(180, 130);
			this->d6->Name = L"d6";
			this->d6->Size = System::Drawing::Size(50, 50);
			this->d6->TabIndex = 10;
			this->d6->TabStop = false;
			this->d6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b6
			// 
			this->b6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b6.BackgroundImage")));
			this->b6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b6.Image")));
			this->b6->Location = System::Drawing::Point(80, 130);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(50, 50);
			this->b6->TabIndex = 9;
			this->b6->TabStop = false;
			this->b6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// a6
			// 
			this->a6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a6.BackgroundImage")));
			this->a6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a6.Image")));
			this->a6->Location = System::Drawing::Point(30, 130);
			this->a6->Name = L"a6";
			this->a6->Size = System::Drawing::Size(50, 50);
			this->a6->TabIndex = 8;
			this->a6->TabStop = false;
			this->a6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g4
			// 
			this->g4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g4.BackgroundImage")));
			this->g4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g4.Image")));
			this->g4->Location = System::Drawing::Point(330, 230);
			this->g4->Name = L"g4";
			this->g4->Size = System::Drawing::Size(50, 50);
			this->g4->TabIndex = 31;
			this->g4->TabStop = false;
			this->g4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h4
			// 
			this->h4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h4.BackgroundImage")));
			this->h4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h4.Image")));
			this->h4->Location = System::Drawing::Point(380, 230);
			this->h4->Name = L"h4";
			this->h4->Size = System::Drawing::Size(50, 50);
			this->h4->TabIndex = 30;
			this->h4->TabStop = false;
			this->h4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f5
			// 
			this->f5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f5.BackgroundImage")));
			this->f5->Location = System::Drawing::Point(280, 180);
			this->f5->Name = L"f5";
			this->f5->Size = System::Drawing::Size(50, 50);
			this->f5->TabIndex = 29;
			this->f5->TabStop = false;
			this->f5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e5
			// 
			this->e5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e5.BackgroundImage")));
			this->e5->Location = System::Drawing::Point(230, 180);
			this->e5->Name = L"e5";
			this->e5->Size = System::Drawing::Size(50, 50);
			this->e5->TabIndex = 28;
			this->e5->TabStop = false;
			this->e5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g6
			// 
			this->g6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g6.BackgroundImage")));
			this->g6->Location = System::Drawing::Point(330, 130);
			this->g6->Name = L"g6";
			this->g6->Size = System::Drawing::Size(50, 50);
			this->g6->TabIndex = 27;
			this->g6->TabStop = false;
			this->g6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h3
			// 
			this->h3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h3.BackgroundImage")));
			this->h3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h3.Image")));
			this->h3->Location = System::Drawing::Point(380, 280);
			this->h3->Name = L"h3";
			this->h3->Size = System::Drawing::Size(50, 50);
			this->h3->TabIndex = 26;
			this->h3->TabStop = false;
			this->h3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f6
			// 
			this->f6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f6.BackgroundImage")));
			this->f6->Location = System::Drawing::Point(280, 130);
			this->f6->Name = L"f6";
			this->f6->Size = System::Drawing::Size(50, 50);
			this->f6->TabIndex = 25;
			this->f6->TabStop = false;
			this->f6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e6
			// 
			this->e6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e6.BackgroundImage")));
			this->e6->Location = System::Drawing::Point(230, 130);
			this->e6->Name = L"e6";
			this->e6->Size = System::Drawing::Size(50, 50);
			this->e6->TabIndex = 24;
			this->e6->TabStop = false;
			this->e6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g7
			// 
			this->g7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g7.BackgroundImage")));
			this->g7->Location = System::Drawing::Point(330, 80);
			this->g7->Name = L"g7";
			this->g7->Size = System::Drawing::Size(50, 50);
			this->g7->TabIndex = 23;
			this->g7->TabStop = false;
			this->g7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h2
			// 
			this->h2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h2.BackgroundImage")));
			this->h2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h2.Image")));
			this->h2->Location = System::Drawing::Point(380, 330);
			this->h2->Name = L"h2";
			this->h2->Size = System::Drawing::Size(50, 50);
			this->h2->TabIndex = 22;
			this->h2->TabStop = false;
			this->h2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f7
			// 
			this->f7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f7.BackgroundImage")));
			this->f7->Location = System::Drawing::Point(280, 80);
			this->f7->Name = L"f7";
			this->f7->Size = System::Drawing::Size(50, 50);
			this->f7->TabIndex = 21;
			this->f7->TabStop = false;
			this->f7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e7
			// 
			this->e7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e7.BackgroundImage")));
			this->e7->Location = System::Drawing::Point(230, 80);
			this->e7->Name = L"e7";
			this->e7->Size = System::Drawing::Size(50, 50);
			this->e7->TabIndex = 20;
			this->e7->TabStop = false;
			this->e7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g8
			// 
			this->g8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g8.BackgroundImage")));
			this->g8->Location = System::Drawing::Point(330, 30);
			this->g8->Name = L"g8";
			this->g8->Size = System::Drawing::Size(50, 50);
			this->g8->TabIndex = 19;
			this->g8->TabStop = false;
			this->g8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h1
			// 
			this->h1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h1.BackgroundImage")));
			this->h1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h1.Image")));
			this->h1->Location = System::Drawing::Point(380, 380);
			this->h1->Name = L"h1";
			this->h1->Size = System::Drawing::Size(50, 50);
			this->h1->TabIndex = 18;
			this->h1->TabStop = false;
			this->h1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f8
			// 
			this->f8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f8.BackgroundImage")));
			this->f8->Location = System::Drawing::Point(280, 30);
			this->f8->Name = L"f8";
			this->f8->Size = System::Drawing::Size(50, 50);
			this->f8->TabIndex = 17;
			this->f8->TabStop = false;
			this->f8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e8
			// 
			this->e8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e8.BackgroundImage")));
			this->e8->Location = System::Drawing::Point(230, 30);
			this->e8->Name = L"e8";
			this->e8->Size = System::Drawing::Size(50, 50);
			this->e8->TabIndex = 16;
			this->e8->TabStop = false;
			this->e8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g1
			// 
			this->g1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g1.BackgroundImage")));
			this->g1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g1.Image")));
			this->g1->Location = System::Drawing::Point(330, 380);
			this->g1->Name = L"g1";
			this->g1->Size = System::Drawing::Size(50, 50);
			this->g1->TabIndex = 63;
			this->g1->TabStop = false;
			this->g1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h8
			// 
			this->h8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h8.BackgroundImage")));
			this->h8->Location = System::Drawing::Point(380, 30);
			this->h8->Name = L"h8";
			this->h8->Size = System::Drawing::Size(50, 50);
			this->h8->TabIndex = 62;
			this->h8->TabStop = false;
			this->h8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f1
			// 
			this->f1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f1.BackgroundImage")));
			this->f1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f1.Image")));
			this->f1->Location = System::Drawing::Point(280, 380);
			this->f1->Name = L"f1";
			this->f1->Size = System::Drawing::Size(50, 50);
			this->f1->TabIndex = 61;
			this->f1->TabStop = false;
			this->f1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e1
			// 
			this->e1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e1.BackgroundImage")));
			this->e1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e1.Image")));
			this->e1->Location = System::Drawing::Point(230, 380);
			this->e1->Name = L"e1";
			this->e1->Size = System::Drawing::Size(50, 50);
			this->e1->TabIndex = 60;
			this->e1->TabStop = false;
			this->e1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g2
			// 
			this->g2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g2.BackgroundImage")));
			this->g2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g2.Image")));
			this->g2->Location = System::Drawing::Point(330, 330);
			this->g2->Name = L"g2";
			this->g2->Size = System::Drawing::Size(50, 50);
			this->g2->TabIndex = 59;
			this->g2->TabStop = false;
			this->g2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h7
			// 
			this->h7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h7.BackgroundImage")));
			this->h7->Location = System::Drawing::Point(380, 80);
			this->h7->Name = L"h7";
			this->h7->Size = System::Drawing::Size(50, 50);
			this->h7->TabIndex = 58;
			this->h7->TabStop = false;
			this->h7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f2
			// 
			this->f2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f2.BackgroundImage")));
			this->f2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f2.Image")));
			this->f2->Location = System::Drawing::Point(280, 330);
			this->f2->Name = L"f2";
			this->f2->Size = System::Drawing::Size(50, 50);
			this->f2->TabIndex = 57;
			this->f2->TabStop = false;
			this->f2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e2
			// 
			this->e2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e2.BackgroundImage")));
			this->e2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e2.Image")));
			this->e2->Location = System::Drawing::Point(230, 330);
			this->e2->Name = L"e2";
			this->e2->Size = System::Drawing::Size(50, 50);
			this->e2->TabIndex = 56;
			this->e2->TabStop = false;
			this->e2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g3
			// 
			this->g3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g3.BackgroundImage")));
			this->g3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g3.Image")));
			this->g3->Location = System::Drawing::Point(330, 280);
			this->g3->Name = L"g3";
			this->g3->Size = System::Drawing::Size(50, 50);
			this->g3->TabIndex = 55;
			this->g3->TabStop = false;
			this->g3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h6
			// 
			this->h6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h6.BackgroundImage")));
			this->h6->Location = System::Drawing::Point(380, 130);
			this->h6->Name = L"h6";
			this->h6->Size = System::Drawing::Size(50, 50);
			this->h6->TabIndex = 54;
			this->h6->TabStop = false;
			this->h6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f3
			// 
			this->f3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f3.BackgroundImage")));
			this->f3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f3.Image")));
			this->f3->Location = System::Drawing::Point(280, 280);
			this->f3->Name = L"f3";
			this->f3->Size = System::Drawing::Size(50, 50);
			this->f3->TabIndex = 53;
			this->f3->TabStop = false;
			this->f3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e3
			// 
			this->e3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e3.BackgroundImage")));
			this->e3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e3.Image")));
			this->e3->Location = System::Drawing::Point(230, 280);
			this->e3->Name = L"e3";
			this->e3->Size = System::Drawing::Size(50, 50);
			this->e3->TabIndex = 52;
			this->e3->TabStop = false;
			this->e3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g5
			// 
			this->g5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g5.BackgroundImage")));
			this->g5->Location = System::Drawing::Point(330, 180);
			this->g5->Name = L"g5";
			this->g5->Size = System::Drawing::Size(50, 50);
			this->g5->TabIndex = 51;
			this->g5->TabStop = false;
			this->g5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h5
			// 
			this->h5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h5.BackgroundImage")));
			this->h5->Location = System::Drawing::Point(380, 180);
			this->h5->Name = L"h5";
			this->h5->Size = System::Drawing::Size(50, 50);
			this->h5->TabIndex = 50;
			this->h5->TabStop = false;
			this->h5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f4
			// 
			this->f4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f4.BackgroundImage")));
			this->f4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f4.Image")));
			this->f4->Location = System::Drawing::Point(280, 230);
			this->f4->Name = L"f4";
			this->f4->Size = System::Drawing::Size(50, 50);
			this->f4->TabIndex = 49;
			this->f4->TabStop = false;
			this->f4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e4
			// 
			this->e4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e4.BackgroundImage")));
			this->e4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e4.Image")));
			this->e4->Location = System::Drawing::Point(230, 230);
			this->e4->Name = L"e4";
			this->e4->Size = System::Drawing::Size(50, 50);
			this->e4->TabIndex = 48;
			this->e4->TabStop = false;
			this->e4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c1
			// 
			this->c1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c1.BackgroundImage")));
			this->c1->Location = System::Drawing::Point(130, 380);
			this->c1->Name = L"c1";
			this->c1->Size = System::Drawing::Size(50, 50);
			this->c1->TabIndex = 47;
			this->c1->TabStop = false;
			this->c1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d1
			// 
			this->d1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d1.BackgroundImage")));
			this->d1->Location = System::Drawing::Point(180, 380);
			this->d1->Name = L"d1";
			this->d1->Size = System::Drawing::Size(50, 50);
			this->d1->TabIndex = 46;
			this->d1->TabStop = false;
			this->d1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b1
			// 
			this->b1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b1.BackgroundImage")));
			this->b1->Location = System::Drawing::Point(80, 380);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(50, 50);
			this->b1->TabIndex = 45;
			this->b1->TabStop = false;
			this->b1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// a1
			// 
			this->a1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a1.BackgroundImage")));
			this->a1->Location = System::Drawing::Point(30, 380);
			this->a1->Name = L"a1";
			this->a1->Size = System::Drawing::Size(50, 50);
			this->a1->TabIndex = 44;
			this->a1->TabStop = false;
			this->a1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c2
			// 
			this->c2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c2.BackgroundImage")));
			this->c2->Location = System::Drawing::Point(130, 330);
			this->c2->Name = L"c2";
			this->c2->Size = System::Drawing::Size(50, 50);
			this->c2->TabIndex = 43;
			this->c2->TabStop = false;
			this->c2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d2
			// 
			this->d2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d2.BackgroundImage")));
			this->d2->Location = System::Drawing::Point(180, 330);
			this->d2->Name = L"d2";
			this->d2->Size = System::Drawing::Size(50, 50);
			this->d2->TabIndex = 42;
			this->d2->TabStop = false;
			this->d2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b2
			// 
			this->b2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b2.BackgroundImage")));
			this->b2->Location = System::Drawing::Point(80, 330);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(50, 50);
			this->b2->TabIndex = 41;
			this->b2->TabStop = false;
			this->b2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// a2
			// 
			this->a2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a2.BackgroundImage")));
			this->a2->Location = System::Drawing::Point(30, 330);
			this->a2->Name = L"a2";
			this->a2->Size = System::Drawing::Size(50, 50);
			this->a2->TabIndex = 40;
			this->a2->TabStop = false;
			this->a2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c3
			// 
			this->c3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c3.BackgroundImage")));
			this->c3->Location = System::Drawing::Point(130, 280);
			this->c3->Name = L"c3";
			this->c3->Size = System::Drawing::Size(50, 50);
			this->c3->TabIndex = 39;
			this->c3->TabStop = false;
			this->c3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d3
			// 
			this->d3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d3.BackgroundImage")));
			this->d3->Location = System::Drawing::Point(180, 280);
			this->d3->Name = L"d3";
			this->d3->Size = System::Drawing::Size(50, 50);
			this->d3->TabIndex = 38;
			this->d3->TabStop = false;
			this->d3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b3
			// 
			this->b3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b3.BackgroundImage")));
			this->b3->Location = System::Drawing::Point(80, 280);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(50, 50);
			this->b3->TabIndex = 37;
			this->b3->TabStop = false;
			this->b3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// a3
			// 
			this->a3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a3.BackgroundImage")));
			this->a3->Location = System::Drawing::Point(30, 280);
			this->a3->Name = L"a3";
			this->a3->Size = System::Drawing::Size(50, 50);
			this->a3->TabIndex = 36;
			this->a3->TabStop = false;
			this->a3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c4
			// 
			this->c4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c4.BackgroundImage")));
			this->c4->Location = System::Drawing::Point(130, 230);
			this->c4->Name = L"c4";
			this->c4->Size = System::Drawing::Size(50, 50);
			this->c4->TabIndex = 35;
			this->c4->TabStop = false;
			this->c4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d4
			// 
			this->d4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d4.BackgroundImage")));
			this->d4->Location = System::Drawing::Point(180, 230);
			this->d4->Name = L"d4";
			this->d4->Size = System::Drawing::Size(50, 50);
			this->d4->TabIndex = 34;
			this->d4->TabStop = false;
			this->d4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b4
			// 
			this->b4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b4.BackgroundImage")));
			this->b4->Location = System::Drawing::Point(80, 230);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(50, 50);
			this->b4->TabIndex = 33;
			this->b4->TabStop = false;
			this->b4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// a4
			// 
			this->a4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a4.BackgroundImage")));
			this->a4->Location = System::Drawing::Point(30, 230);
			this->a4->Name = L"a4";
			this->a4->Size = System::Drawing::Size(50, 50);
			this->a4->TabIndex = 32;
			this->a4->TabStop = false;
			this->a4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 64;
			this->label1->Text = L"a";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(97, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 65;
			this->label2->Text = L"b";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(147, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 66;
			this->label3->Text = L"c";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(197, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 67;
			this->label4->Text = L"d";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(247, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 68;
			this->label5->Text = L"e";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(297, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(10, 13);
			this->label6->TabIndex = 69;
			this->label6->Text = L"f";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(347, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 70;
			this->label7->Text = L"g";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(397, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 71;
			this->label8->Text = L"h";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 47);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 72;
			this->label9->Text = L"8";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 97);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 73;
			this->label10->Text = L"7";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 147);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 74;
			this->label11->Text = L"6";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 197);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 75;
			this->label12->Text = L"5";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 247);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 13);
			this->label13->TabIndex = 76;
			this->label13->Text = L"4";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(12, 297);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 77;
			this->label14->Text = L"3";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(12, 347);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 78;
			this->label15->Text = L"2";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(12, 397);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 79;
			this->label16->Text = L"1";
			// 
			// TestLabel
			// 
			this->TestLabel->AutoSize = true;
			this->TestLabel->Location = System::Drawing::Point(27, 464);
			this->TestLabel->Name = L"TestLabel";
			this->TestLabel->Size = System::Drawing::Size(41, 13);
			this->TestLabel->TabIndex = 80;
			this->TestLabel->Text = L"label17";
			// 
			// NewGameButton
			// 
			this->NewGameButton->Location = System::Drawing::Point(454, 30);
			this->NewGameButton->Name = L"NewGameButton";
			this->NewGameButton->Size = System::Drawing::Size(75, 23);
			this->NewGameButton->TabIndex = 81;
			this->NewGameButton->Text = L"New Game";
			this->NewGameButton->UseVisualStyleBackColor = true;
			this->NewGameButton->Click += gcnew System::EventHandler(this, &MainForm::NewGameButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(454, 406);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(75, 23);
			this->ExitButton->TabIndex = 82;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MainForm::ExitButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(574, 491);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->NewGameButton);
			this->Controls->Add(this->TestLabel);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->g1);
			this->Controls->Add(this->h8);
			this->Controls->Add(this->f1);
			this->Controls->Add(this->e1);
			this->Controls->Add(this->g2);
			this->Controls->Add(this->h7);
			this->Controls->Add(this->f2);
			this->Controls->Add(this->e2);
			this->Controls->Add(this->g3);
			this->Controls->Add(this->h6);
			this->Controls->Add(this->f3);
			this->Controls->Add(this->e3);
			this->Controls->Add(this->g5);
			this->Controls->Add(this->h5);
			this->Controls->Add(this->f4);
			this->Controls->Add(this->e4);
			this->Controls->Add(this->c1);
			this->Controls->Add(this->d1);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->a1);
			this->Controls->Add(this->c2);
			this->Controls->Add(this->d2);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->a2);
			this->Controls->Add(this->c3);
			this->Controls->Add(this->d3);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->a3);
			this->Controls->Add(this->c4);
			this->Controls->Add(this->d4);
			this->Controls->Add(this->b4);
			this->Controls->Add(this->a4);
			this->Controls->Add(this->g4);
			this->Controls->Add(this->h4);
			this->Controls->Add(this->f5);
			this->Controls->Add(this->e5);
			this->Controls->Add(this->g6);
			this->Controls->Add(this->h3);
			this->Controls->Add(this->f6);
			this->Controls->Add(this->e6);
			this->Controls->Add(this->g7);
			this->Controls->Add(this->h2);
			this->Controls->Add(this->f7);
			this->Controls->Add(this->e7);
			this->Controls->Add(this->g8);
			this->Controls->Add(this->h1);
			this->Controls->Add(this->f8);
			this->Controls->Add(this->e8);
			this->Controls->Add(this->c5);
			this->Controls->Add(this->d5);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->a5);
			this->Controls->Add(this->c6);
			this->Controls->Add(this->d6);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->a6);
			this->Controls->Add(this->c7);
			this->Controls->Add(this->d7);
			this->Controls->Add(this->b7);
			this->Controls->Add(this->a7);
			this->Controls->Add(this->c8);
			this->Controls->Add(this->d8);
			this->Controls->Add(this->b8);
			this->Controls->Add(this->a8);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
// =============================================================================================== //

#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		SetImageToPictureText();
	}

	private: System::Void SetImageToPictureText()
			 {
			// Black command
				 // A line
				 this->a8->Text = IMAGE_BLACK_CHIP;
				 this->a7->Text = IMAGE_BLACK_CHIP;
				 this->a6->Text = IMAGE_BLACK_CHIP;
				 this->a5->Text = IMAGE_BLACK_CHIP;
				
				 // B line
				 this->b8->Text = IMAGE_BLACK_CHIP;
				 this->b7->Text = IMAGE_BLACK_CHIP;
				 this->b6->Text = IMAGE_BLACK_CHIP;
				 this->b5->Text = IMAGE_BLACK_CHIP;
				
				 // C line
				 this->c8->Text = IMAGE_BLACK_CHIP;
				 this->c7->Text = IMAGE_BLACK_CHIP;
				 this->c6->Text = IMAGE_BLACK_CHIP;
				 this->c5->Text = IMAGE_BLACK_CHIP;
			
				 // D line
				 this->d8->Text = IMAGE_BLACK_CHIP;
				 this->d7->Text = IMAGE_BLACK_CHIP;
				 this->d6->Text = IMAGE_BLACK_CHIP;
				 this->d5->Text = IMAGE_BLACK_CHIP;
				
			// White command
				 // E line
				 this->e1->Text = IMAGE_WHITE_CHIP;
				 this->e2->Text = IMAGE_WHITE_CHIP;
				 this->e3->Text = IMAGE_WHITE_CHIP;
				 this->e4->Text = IMAGE_WHITE_CHIP;
				
				 // F line
				 this->f1->Text = IMAGE_WHITE_CHIP;
				 this->f2->Text = IMAGE_WHITE_CHIP;
				 this->f3->Text = IMAGE_WHITE_CHIP;
				 this->f4->Text = IMAGE_WHITE_CHIP;
				
				 // G line
				 this->g1->Text = IMAGE_WHITE_CHIP;
				 this->g2->Text = IMAGE_WHITE_CHIP;
				 this->g3->Text = IMAGE_WHITE_CHIP;
				 this->g4->Text = IMAGE_WHITE_CHIP;
				
				 // H line
				 this->h1->Text = IMAGE_WHITE_CHIP;
				 this->h2->Text = IMAGE_WHITE_CHIP;
				 this->h3->Text = IMAGE_WHITE_CHIP;
				 this->h4->Text = IMAGE_WHITE_CHIP;
			 }
	

	

	// Reloading given picturebox of square on table with given image
	private: System::Void ReloadWithImage(PictureBox^ SelectedChip, String^ ImageName)
	{
		SelectedChip->Text = ImageName;
		if (ImageName) SelectedChip->Image = System::Drawing::Image::FromFile(SelectedChip->Text);
		else SelectedChip->Image = nullptr;
	}

	// Reloading given picturebox of square on table with image setted in picturebox->text
	private: System::Void RefreshImage (PictureBox^ SelectedChip)
	{
		SelectedChip->Image = System::Drawing::Image::FromFile(SelectedChip->Text);
	}

	private: bool RefreshAll()
	{
		RefreshImage(a1);
		RefreshImage(a2);
		RefreshImage(a3);
		RefreshImage(a4);
		RefreshImage(a5);
		RefreshImage(a6);
		RefreshImage(a7);
		RefreshImage(a8);
		
		RefreshImage(b1);
		RefreshImage(b2);
		RefreshImage(b3);
		RefreshImage(b4);
		RefreshImage(b5);
		RefreshImage(b6);
		RefreshImage(b7);
		RefreshImage(b8);
		
		RefreshImage(c1);
		RefreshImage(c2);
		RefreshImage(c3);
		RefreshImage(c4);
		RefreshImage(c5);
		RefreshImage(c6);
		RefreshImage(c7);
		RefreshImage(c8);

		RefreshImage(d1);
		RefreshImage(d2);
		RefreshImage(d3);
		RefreshImage(d4);
		RefreshImage(d5);
		RefreshImage(d6);
		RefreshImage(d7);
		RefreshImage(d8);

		RefreshImage(e1);
		RefreshImage(e2);
		RefreshImage(e3);
		RefreshImage(e4);
		RefreshImage(e5);
		RefreshImage(e6);
		RefreshImage(e7);
		RefreshImage(e8);

		RefreshImage(f1);
		RefreshImage(f2);
		RefreshImage(f3);
		RefreshImage(f4);
		RefreshImage(f5);
		RefreshImage(f6);
		RefreshImage(f7);
		RefreshImage(f8);

		RefreshImage(g1);
		RefreshImage(g2);
		RefreshImage(g3);
		RefreshImage(g4);
		RefreshImage(g5);
		RefreshImage(g6);
		RefreshImage(g7);
		RefreshImage(g8);
		return true;
	}

	// 	Handlerfor clicking on board
	private: System::Void Square_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		PictureBox^ PB;
		PB = (PictureBox^)sender;
	
		if (PB->Text->Length)
		{
			Active = PB;
			TestLabel->Text = ((PictureBox^)Active)->Text;
		}
		else
		{
			if (Active)
			//if (((PictureBox^)Active)->Text)
			{
				TestLabel->Text = ((PictureBox^)Active)->Text;
				ReloadWithImage(PB, ((PictureBox^)Active)->Text);
				((PictureBox^)Active)->Text = nullptr;
				ReloadWithImage((PictureBox^)Active, nullptr);
				//Active->Image = nullptr;
				Active = nullptr;
			}
		}
			//this->TestLabel->Text = this->Active->Text;
	
	
	}

	private: System::Void NewGameButton_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

			 
	
	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
};
}
