#pragma once
#include "Model.h"
#include "ViewController.h"

#define IMAGE_WHITE_CHIP			"VC_Resources\\Chips\\Chip_Red.png"  
#define IMAGE_WHITE_CHIP_SELECTED	"VC_Resources\\Chips\\Chip_Red_S.png"  
#define IMAGE_BLACK_CHIP			"VC_Resources\\Chips\\Chip_Blue.png"
#define IMAGE_BLACK_CHIP_SELECTED	"VC_Resources\\Chips\\Chip_Blue_S.png"

#define IMAGE_TEMP_CHIP	"VC_Resources\\Chips\\Chip_1.png"

#define BOARD_BACKGROUND_WHITE	"VC_Resources\\Field_BackGrounds\\Squares\\Field_1_w.png"
#define BOARD_BACKGROUND_BLACK	"VC_Resources\\Field_BackGrounds\\Squares\\Field_1_b.png"
#define BOARD_BACKGROUND_FULL	"VC_Resources\\Field_BackGrounds\\Full_Boards\\Board_4.png"

#define BUTTON_IMAGE "VC_Resources\\Buttons\\Button_3.png"  

#define BOARD_LEFT_UPPER_X 15
#define BOARD_LEFT_UPPER_Y 15

#define SQUARE_LEFT_UPPER_X 45
#define SQUARE_LEFT_UPPER_Y 45
#define SQUARE_LENGTH 75

#define BORDER_SIZE 32

namespace BoardGames {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:int** arr;
		public:	MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			arr = (int**)malloc(8 * sizeof(int*));
			for (int i = 0; i < 8; i++)
				arr[i] = (int*)malloc(8 * sizeof(int));
		}

		protected: ~MainForm()
		{
			/// <summary>
			/// Освободить все используемые ресурсы.
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
		
	public: array< PictureBox^ >^ PictureBoxArray_a = gcnew array< PictureBox^ >(8);
	public: array< PictureBox^ >^ PictureBoxArray_b = gcnew array< PictureBox^ >(8);
	public: array< PictureBox^ >^ PictureBoxArray_c = gcnew array< PictureBox^ >(8);
	public: array< PictureBox^ >^ PictureBoxArray_d = gcnew array< PictureBox^ >(8);
	public: array< PictureBox^ >^ PictureBoxArray_e = gcnew array< PictureBox^ >(8);
	public: array< PictureBox^ >^ PictureBoxArray_f = gcnew array< PictureBox^ >(8);
	public: array< PictureBox^ >^ PictureBoxArray_g = gcnew array< PictureBox^ >(8);
	public: array< PictureBox^ >^ PictureBoxArray_h = gcnew array< PictureBox^ >(8);
	//private: array< PictureBox^ >^ PictureBoxArray_ALL = gcnew array< PictureBox^ >(8);
			 //private: array< PictureBox^ >^ PictureBoxBoardArray = gcnew array< PictureBox^ >(8);
			 
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




private: System::Windows::Forms::PictureBox^  FullBoard;
private: System::Windows::Forms::Button^  SaveGameButton;
private: System::Windows::Forms::Button^  LoadGameButton;
private: System::Windows::Forms::Button^  OptionsButton;



		 // =============================================================================================== //

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

		// Initializition of components
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
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
			this->TestLabel = (gcnew System::Windows::Forms::Label());
			this->NewGameButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->FullBoard = (gcnew System::Windows::Forms::PictureBox());
			this->SaveGameButton = (gcnew System::Windows::Forms::Button());
			this->LoadGameButton = (gcnew System::Windows::Forms::Button());
			this->OptionsButton = (gcnew System::Windows::Forms::Button());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FullBoard))->BeginInit();
			this->SuspendLayout();
			// 
			// a8
			// 
			this->a8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a8.BackgroundImage")));
			this->a8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a8.Image")));
			this->a8->Location = System::Drawing::Point(30, 30);
			this->a8->Name = L"a8";
			this->a8->Size = System::Drawing::Size(75, 75);
			this->a8->TabIndex = 0;
			this->a8->TabStop = false;
			this->a8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b8
			// 
			this->b8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b8.BackgroundImage")));
			this->b8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b8.Image")));
			this->b8->Location = System::Drawing::Point(105, 30);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(75, 75);
			this->b8->TabIndex = 1;
			this->b8->TabStop = false;
			this->b8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c8
			// 
			this->c8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c8.BackgroundImage")));
			this->c8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c8.Image")));
			this->c8->Location = System::Drawing::Point(180, 30);
			this->c8->Name = L"c8";
			this->c8->Size = System::Drawing::Size(75, 75);
			this->c8->TabIndex = 3;
			this->c8->TabStop = false;
			this->c8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d8
			// 
			this->d8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d8.BackgroundImage")));
			this->d8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d8.Image")));
			this->d8->Location = System::Drawing::Point(255, 30);
			this->d8->Name = L"d8";
			this->d8->Size = System::Drawing::Size(75, 75);
			this->d8->TabIndex = 2;
			this->d8->TabStop = false;
			this->d8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c7
			// 
			this->c7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c7.BackgroundImage")));
			this->c7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c7.Image")));
			this->c7->Location = System::Drawing::Point(180, 105);
			this->c7->Name = L"c7";
			this->c7->Size = System::Drawing::Size(75, 75);
			this->c7->TabIndex = 7;
			this->c7->TabStop = false;
			this->c7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d7
			// 
			this->d7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d7.BackgroundImage")));
			this->d7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d7.Image")));
			this->d7->Location = System::Drawing::Point(255, 105);
			this->d7->Name = L"d7";
			this->d7->Size = System::Drawing::Size(75, 75);
			this->d7->TabIndex = 6;
			this->d7->TabStop = false;
			this->d7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b7
			// 
			this->b7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b7.BackgroundImage")));
			this->b7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b7.Image")));
			this->b7->Location = System::Drawing::Point(105, 105);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(75, 75);
			this->b7->TabIndex = 5;
			this->b7->TabStop = false;
			this->b7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// a7
			// 
			this->a7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a7.BackgroundImage")));
			this->a7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a7.Image")));
			this->a7->Location = System::Drawing::Point(30, 105);
			this->a7->Name = L"a7";
			this->a7->Size = System::Drawing::Size(75, 75);
			this->a7->TabIndex = 4;
			this->a7->TabStop = false;
			this->a7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c5
			// 
			this->c5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c5.BackgroundImage")));
			this->c5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c5.Image")));
			this->c5->Location = System::Drawing::Point(180, 255);
			this->c5->Name = L"c5";
			this->c5->Size = System::Drawing::Size(75, 75);
			this->c5->TabIndex = 15;
			this->c5->TabStop = false;
			this->c5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d5
			// 
			this->d5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d5.BackgroundImage")));
			this->d5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d5.Image")));
			this->d5->Location = System::Drawing::Point(255, 255);
			this->d5->Name = L"d5";
			this->d5->Size = System::Drawing::Size(75, 75);
			this->d5->TabIndex = 14;
			this->d5->TabStop = false;
			this->d5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b5
			// 
			this->b5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b5.BackgroundImage")));
			this->b5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b5.Image")));
			this->b5->Location = System::Drawing::Point(105, 255);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(75, 75);
			this->b5->TabIndex = 13;
			this->b5->TabStop = false;
			this->b5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// a5
			// 
			this->a5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a5.BackgroundImage")));
			this->a5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a5.Image")));
			this->a5->Location = System::Drawing::Point(30, 255);
			this->a5->Name = L"a5";
			this->a5->Size = System::Drawing::Size(75, 75);
			this->a5->TabIndex = 12;
			this->a5->TabStop = false;
			this->a5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c6
			// 
			this->c6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c6.BackgroundImage")));
			this->c6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c6.Image")));
			this->c6->Location = System::Drawing::Point(180, 180);
			this->c6->Name = L"c6";
			this->c6->Size = System::Drawing::Size(75, 75);
			this->c6->TabIndex = 11;
			this->c6->TabStop = false;
			this->c6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d6
			// 
			this->d6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d6.BackgroundImage")));
			this->d6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d6.Image")));
			this->d6->Location = System::Drawing::Point(255, 180);
			this->d6->Name = L"d6";
			this->d6->Size = System::Drawing::Size(75, 75);
			this->d6->TabIndex = 10;
			this->d6->TabStop = false;
			this->d6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b6
			// 
			this->b6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b6.BackgroundImage")));
			this->b6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b6.Image")));
			this->b6->Location = System::Drawing::Point(105, 180);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(75, 75);
			this->b6->TabIndex = 9;
			this->b6->TabStop = false;
			this->b6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// a6
			// 
			this->a6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a6.BackgroundImage")));
			this->a6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a6.Image")));
			this->a6->Location = System::Drawing::Point(30, 180);
			this->a6->Name = L"a6";
			this->a6->Size = System::Drawing::Size(75, 75);
			this->a6->TabIndex = 8;
			this->a6->TabStop = false;
			this->a6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g4
			// 
			this->g4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g4.BackgroundImage")));
			this->g4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g4.Image")));
			this->g4->Location = System::Drawing::Point(480, 330);
			this->g4->Name = L"g4";
			this->g4->Size = System::Drawing::Size(75, 75);
			this->g4->TabIndex = 31;
			this->g4->TabStop = false;
			this->g4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h4
			// 
			this->h4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h4.BackgroundImage")));
			this->h4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h4.Image")));
			this->h4->Location = System::Drawing::Point(555, 330);
			this->h4->Name = L"h4";
			this->h4->Size = System::Drawing::Size(75, 75);
			this->h4->TabIndex = 30;
			this->h4->TabStop = false;
			this->h4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f5
			// 
			this->f5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f5.BackgroundImage")));
			this->f5->Location = System::Drawing::Point(405, 255);
			this->f5->Name = L"f5";
			this->f5->Size = System::Drawing::Size(75, 75);
			this->f5->TabIndex = 29;
			this->f5->TabStop = false;
			this->f5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e5
			// 
			this->e5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e5.BackgroundImage")));
			this->e5->Location = System::Drawing::Point(330, 255);
			this->e5->Name = L"e5";
			this->e5->Size = System::Drawing::Size(75, 75);
			this->e5->TabIndex = 28;
			this->e5->TabStop = false;
			this->e5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g6
			// 
			this->g6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g6.BackgroundImage")));
			this->g6->Location = System::Drawing::Point(480, 180);
			this->g6->Name = L"g6";
			this->g6->Size = System::Drawing::Size(75, 75);
			this->g6->TabIndex = 27;
			this->g6->TabStop = false;
			this->g6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h3
			// 
			this->h3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h3.BackgroundImage")));
			this->h3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h3.Image")));
			this->h3->Location = System::Drawing::Point(555, 405);
			this->h3->Name = L"h3";
			this->h3->Size = System::Drawing::Size(75, 75);
			this->h3->TabIndex = 26;
			this->h3->TabStop = false;
			this->h3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f6
			// 
			this->f6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f6.BackgroundImage")));
			this->f6->Location = System::Drawing::Point(405, 180);
			this->f6->Name = L"f6";
			this->f6->Size = System::Drawing::Size(75, 75);
			this->f6->TabIndex = 25;
			this->f6->TabStop = false;
			this->f6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e6
			// 
			this->e6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e6.BackgroundImage")));
			this->e6->Location = System::Drawing::Point(330, 180);
			this->e6->Name = L"e6";
			this->e6->Size = System::Drawing::Size(75, 75);
			this->e6->TabIndex = 24;
			this->e6->TabStop = false;
			this->e6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g7
			// 
			this->g7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g7.BackgroundImage")));
			this->g7->Location = System::Drawing::Point(480, 105);
			this->g7->Name = L"g7";
			this->g7->Size = System::Drawing::Size(75, 75);
			this->g7->TabIndex = 23;
			this->g7->TabStop = false;
			this->g7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h2
			// 
			this->h2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h2.BackgroundImage")));
			this->h2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h2.Image")));
			this->h2->Location = System::Drawing::Point(555, 480);
			this->h2->Name = L"h2";
			this->h2->Size = System::Drawing::Size(75, 75);
			this->h2->TabIndex = 22;
			this->h2->TabStop = false;
			this->h2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f7
			// 
			this->f7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f7.BackgroundImage")));
			this->f7->Location = System::Drawing::Point(405, 105);
			this->f7->Name = L"f7";
			this->f7->Size = System::Drawing::Size(75, 75);
			this->f7->TabIndex = 21;
			this->f7->TabStop = false;
			this->f7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e7
			// 
			this->e7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e7.BackgroundImage")));
			this->e7->Location = System::Drawing::Point(330, 105);
			this->e7->Name = L"e7";
			this->e7->Size = System::Drawing::Size(75, 75);
			this->e7->TabIndex = 20;
			this->e7->TabStop = false;
			this->e7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g8
			// 
			this->g8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g8.BackgroundImage")));
			this->g8->Location = System::Drawing::Point(480, 30);
			this->g8->Name = L"g8";
			this->g8->Size = System::Drawing::Size(75, 75);
			this->g8->TabIndex = 19;
			this->g8->TabStop = false;
			this->g8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h1
			// 
			this->h1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h1.BackgroundImage")));
			this->h1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h1.Image")));
			this->h1->Location = System::Drawing::Point(555, 555);
			this->h1->Name = L"h1";
			this->h1->Size = System::Drawing::Size(75, 75);
			this->h1->TabIndex = 18;
			this->h1->TabStop = false;
			this->h1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f8
			// 
			this->f8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f8.BackgroundImage")));
			this->f8->Location = System::Drawing::Point(405, 30);
			this->f8->Name = L"f8";
			this->f8->Size = System::Drawing::Size(75, 75);
			this->f8->TabIndex = 17;
			this->f8->TabStop = false;
			this->f8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e8
			// 
			this->e8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e8.BackgroundImage")));
			this->e8->Location = System::Drawing::Point(330, 30);
			this->e8->Name = L"e8";
			this->e8->Size = System::Drawing::Size(75, 75);
			this->e8->TabIndex = 16;
			this->e8->TabStop = false;
			this->e8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g1
			// 
			this->g1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g1.BackgroundImage")));
			this->g1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g1.Image")));
			this->g1->Location = System::Drawing::Point(480, 555);
			this->g1->Name = L"g1";
			this->g1->Size = System::Drawing::Size(75, 75);
			this->g1->TabIndex = 63;
			this->g1->TabStop = false;
			this->g1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h8
			// 
			this->h8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h8.BackgroundImage")));
			this->h8->Location = System::Drawing::Point(555, 30);
			this->h8->Name = L"h8";
			this->h8->Size = System::Drawing::Size(75, 75);
			this->h8->TabIndex = 62;
			this->h8->TabStop = false;
			this->h8->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f1
			// 
			this->f1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f1.BackgroundImage")));
			this->f1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f1.Image")));
			this->f1->Location = System::Drawing::Point(405, 555);
			this->f1->Name = L"f1";
			this->f1->Size = System::Drawing::Size(75, 75);
			this->f1->TabIndex = 61;
			this->f1->TabStop = false;
			this->f1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e1
			// 
			this->e1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e1.BackgroundImage")));
			this->e1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e1.Image")));
			this->e1->Location = System::Drawing::Point(330, 555);
			this->e1->Name = L"e1";
			this->e1->Size = System::Drawing::Size(75, 75);
			this->e1->TabIndex = 60;
			this->e1->TabStop = false;
			this->e1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g2
			// 
			this->g2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g2.BackgroundImage")));
			this->g2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g2.Image")));
			this->g2->Location = System::Drawing::Point(480, 480);
			this->g2->Name = L"g2";
			this->g2->Size = System::Drawing::Size(75, 75);
			this->g2->TabIndex = 59;
			this->g2->TabStop = false;
			this->g2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h7
			// 
			this->h7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h7.BackgroundImage")));
			this->h7->Location = System::Drawing::Point(555, 105);
			this->h7->Name = L"h7";
			this->h7->Size = System::Drawing::Size(75, 75);
			this->h7->TabIndex = 58;
			this->h7->TabStop = false;
			this->h7->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f2
			// 
			this->f2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f2.BackgroundImage")));
			this->f2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f2.Image")));
			this->f2->Location = System::Drawing::Point(405, 480);
			this->f2->Name = L"f2";
			this->f2->Size = System::Drawing::Size(75, 75);
			this->f2->TabIndex = 57;
			this->f2->TabStop = false;
			this->f2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e2
			// 
			this->e2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e2.BackgroundImage")));
			this->e2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e2.Image")));
			this->e2->Location = System::Drawing::Point(330, 480);
			this->e2->Name = L"e2";
			this->e2->Size = System::Drawing::Size(75, 75);
			this->e2->TabIndex = 56;
			this->e2->TabStop = false;
			this->e2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g3
			// 
			this->g3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g3.BackgroundImage")));
			this->g3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g3.Image")));
			this->g3->Location = System::Drawing::Point(480, 405);
			this->g3->Name = L"g3";
			this->g3->Size = System::Drawing::Size(75, 75);
			this->g3->TabIndex = 55;
			this->g3->TabStop = false;
			this->g3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h6
			// 
			this->h6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h6.BackgroundImage")));
			this->h6->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h6.InitialImage")));
			this->h6->Location = System::Drawing::Point(555, 180);
			this->h6->Name = L"h6";
			this->h6->Size = System::Drawing::Size(75, 75);
			this->h6->TabIndex = 54;
			this->h6->TabStop = false;
			this->h6->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f3
			// 
			this->f3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f3.BackgroundImage")));
			this->f3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f3.Image")));
			this->f3->Location = System::Drawing::Point(405, 405);
			this->f3->Name = L"f3";
			this->f3->Size = System::Drawing::Size(75, 75);
			this->f3->TabIndex = 53;
			this->f3->TabStop = false;
			this->f3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e3
			// 
			this->e3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e3.BackgroundImage")));
			this->e3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e3.Image")));
			this->e3->Location = System::Drawing::Point(330, 405);
			this->e3->Name = L"e3";
			this->e3->Size = System::Drawing::Size(75, 75);
			this->e3->TabIndex = 52;
			this->e3->TabStop = false;
			this->e3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// g5
			// 
			this->g5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g5.BackgroundImage")));
			this->g5->Location = System::Drawing::Point(480, 255);
			this->g5->Name = L"g5";
			this->g5->Size = System::Drawing::Size(75, 75);
			this->g5->TabIndex = 51;
			this->g5->TabStop = false;
			this->g5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// h5
			// 
			this->h5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h5.BackgroundImage")));
			this->h5->Location = System::Drawing::Point(555, 255);
			this->h5->Name = L"h5";
			this->h5->Size = System::Drawing::Size(75, 75);
			this->h5->TabIndex = 50;
			this->h5->TabStop = false;
			this->h5->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// f4
			// 
			this->f4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f4.BackgroundImage")));
			this->f4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f4.Image")));
			this->f4->Location = System::Drawing::Point(405, 330);
			this->f4->Name = L"f4";
			this->f4->Size = System::Drawing::Size(75, 75);
			this->f4->TabIndex = 49;
			this->f4->TabStop = false;
			this->f4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// e4
			// 
			this->e4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e4.BackgroundImage")));
			this->e4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e4.Image")));
			this->e4->Location = System::Drawing::Point(330, 330);
			this->e4->Name = L"e4";
			this->e4->Size = System::Drawing::Size(75, 75);
			this->e4->TabIndex = 48;
			this->e4->TabStop = false;
			this->e4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c1
			// 
			this->c1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c1.BackgroundImage")));
			this->c1->Location = System::Drawing::Point(180, 555);
			this->c1->Name = L"c1";
			this->c1->Size = System::Drawing::Size(75, 75);
			this->c1->TabIndex = 47;
			this->c1->TabStop = false;
			this->c1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d1
			// 
			this->d1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d1.BackgroundImage")));
			this->d1->Location = System::Drawing::Point(255, 555);
			this->d1->Name = L"d1";
			this->d1->Size = System::Drawing::Size(75, 75);
			this->d1->TabIndex = 46;
			this->d1->TabStop = false;
			this->d1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b1
			// 
			this->b1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b1.BackgroundImage")));
			this->b1->Location = System::Drawing::Point(105, 555);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(75, 75);
			this->b1->TabIndex = 45;
			this->b1->TabStop = false;
			this->b1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// a1
			// 
			this->a1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a1.BackgroundImage")));
			this->a1->Location = System::Drawing::Point(30, 555);
			this->a1->Name = L"a1";
			this->a1->Size = System::Drawing::Size(75, 75);
			this->a1->TabIndex = 44;
			this->a1->TabStop = false;
			this->a1->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c2
			// 
			this->c2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c2.BackgroundImage")));
			this->c2->Location = System::Drawing::Point(180, 480);
			this->c2->Name = L"c2";
			this->c2->Size = System::Drawing::Size(75, 75);
			this->c2->TabIndex = 43;
			this->c2->TabStop = false;
			this->c2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d2
			// 
			this->d2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d2.BackgroundImage")));
			this->d2->Location = System::Drawing::Point(255, 480);
			this->d2->Name = L"d2";
			this->d2->Size = System::Drawing::Size(75, 75);
			this->d2->TabIndex = 42;
			this->d2->TabStop = false;
			this->d2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b2
			// 
			this->b2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b2.BackgroundImage")));
			this->b2->Location = System::Drawing::Point(105, 480);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(75, 75);
			this->b2->TabIndex = 41;
			this->b2->TabStop = false;
			this->b2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// a2
			// 
			this->a2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a2.BackgroundImage")));
			this->a2->Location = System::Drawing::Point(30, 480);
			this->a2->Name = L"a2";
			this->a2->Size = System::Drawing::Size(75, 75);
			this->a2->TabIndex = 40;
			this->a2->TabStop = false;
			this->a2->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c3
			// 
			this->c3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c3.BackgroundImage")));
			this->c3->Location = System::Drawing::Point(180, 405);
			this->c3->Name = L"c3";
			this->c3->Size = System::Drawing::Size(75, 75);
			this->c3->TabIndex = 39;
			this->c3->TabStop = false;
			this->c3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d3
			// 
			this->d3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d3.BackgroundImage")));
			this->d3->Location = System::Drawing::Point(255, 405);
			this->d3->Name = L"d3";
			this->d3->Size = System::Drawing::Size(75, 75);
			this->d3->TabIndex = 38;
			this->d3->TabStop = false;
			this->d3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b3
			// 
			this->b3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b3.BackgroundImage")));
			this->b3->Location = System::Drawing::Point(105, 405);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(75, 75);
			this->b3->TabIndex = 37;
			this->b3->TabStop = false;
			this->b3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// a3
			// 
			this->a3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a3.BackgroundImage")));
			this->a3->Location = System::Drawing::Point(30, 405);
			this->a3->Name = L"a3";
			this->a3->Size = System::Drawing::Size(75, 75);
			this->a3->TabIndex = 36;
			this->a3->TabStop = false;
			this->a3->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// c4
			// 
			this->c4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c4.BackgroundImage")));
			this->c4->Location = System::Drawing::Point(180, 330);
			this->c4->Name = L"c4";
			this->c4->Size = System::Drawing::Size(75, 75);
			this->c4->TabIndex = 35;
			this->c4->TabStop = false;
			this->c4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// d4
			// 
			this->d4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d4.BackgroundImage")));
			this->d4->Location = System::Drawing::Point(255, 330);
			this->d4->Name = L"d4";
			this->d4->Size = System::Drawing::Size(75, 75);
			this->d4->TabIndex = 34;
			this->d4->TabStop = false;
			this->d4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// b4
			// 
			this->b4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b4.BackgroundImage")));
			this->b4->Location = System::Drawing::Point(105, 330);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(75, 75);
			this->b4->TabIndex = 33;
			this->b4->TabStop = false;
			this->b4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// a4
			// 
			this->a4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a4.BackgroundImage")));
			this->a4->Location = System::Drawing::Point(30, 330);
			this->a4->Name = L"a4";
			this->a4->Size = System::Drawing::Size(75, 75);
			this->a4->TabIndex = 32;
			this->a4->TabStop = false;
			this->a4->Click += gcnew System::EventHandler(this, &MainForm::Square_Click);
			// 
			// TestLabel
			// 
			this->TestLabel->AutoSize = true;
			this->TestLabel->Location = System::Drawing::Point(731, 15);
			this->TestLabel->Name = L"TestLabel";
			this->TestLabel->Size = System::Drawing::Size(41, 13);
			this->TestLabel->TabIndex = 80;
			this->TestLabel->Text = L"label17";
			// 
			// NewGameButton
			// 
			this->NewGameButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NewGameButton.BackgroundImage")));
			this->NewGameButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->NewGameButton->FlatAppearance->BorderSize = 0;
			this->NewGameButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NewGameButton->Font = (gcnew System::Drawing::Font(L"Colonna MT", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NewGameButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NewGameButton->Location = System::Drawing::Point(720, 39);
			this->NewGameButton->Name = L"NewGameButton";
			this->NewGameButton->Size = System::Drawing::Size(140, 66);
			this->NewGameButton->TabIndex = 81;
			this->NewGameButton->Text = L"New Game";
			this->NewGameButton->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->NewGameButton->UseVisualStyleBackColor = true;
			this->NewGameButton->Click += gcnew System::EventHandler(this, &MainForm::NewGameButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ExitButton.BackgroundImage")));
			this->ExitButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ExitButton->Location = System::Drawing::Point(734, 588);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(126, 59);
			this->ExitButton->TabIndex = 82;
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MainForm::ExitButton_Click);
			// 
			// FullBoard
			// 
			this->FullBoard->Location = System::Drawing::Point(15, 15);
			this->FullBoard->Name = L"FullBoard";
			this->FullBoard->Size = System::Drawing::Size(632, 632);
			this->FullBoard->TabIndex = 83;
			this->FullBoard->TabStop = false;
			// 
			// SaveGameButton
			// 
			this->SaveGameButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SaveGameButton.BackgroundImage")));
			this->SaveGameButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->SaveGameButton->Enabled = false;
			this->SaveGameButton->FlatAppearance->BorderSize = 0;
			this->SaveGameButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SaveGameButton->Font = (gcnew System::Drawing::Font(L"Colonna MT", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SaveGameButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->SaveGameButton->Location = System::Drawing::Point(720, 127);
			this->SaveGameButton->Name = L"SaveGameButton";
			this->SaveGameButton->Size = System::Drawing::Size(140, 66);
			this->SaveGameButton->TabIndex = 84;
			this->SaveGameButton->Text = L"Save Game";
			this->SaveGameButton->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->SaveGameButton->UseVisualStyleBackColor = true;
			// 
			// LoadGameButton
			// 
			this->LoadGameButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LoadGameButton.BackgroundImage")));
			this->LoadGameButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->LoadGameButton->Enabled = false;
			this->LoadGameButton->FlatAppearance->BorderSize = 0;
			this->LoadGameButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoadGameButton->Font = (gcnew System::Drawing::Font(L"Colonna MT", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LoadGameButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LoadGameButton->Location = System::Drawing::Point(720, 218);
			this->LoadGameButton->Name = L"LoadGameButton";
			this->LoadGameButton->Size = System::Drawing::Size(140, 66);
			this->LoadGameButton->TabIndex = 85;
			this->LoadGameButton->Text = L"Load Game";
			this->LoadGameButton->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->LoadGameButton->UseVisualStyleBackColor = true;
			// 
			// OptionsButton
			// 
			this->OptionsButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OptionsButton.BackgroundImage")));
			this->OptionsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->OptionsButton->Enabled = false;
			this->OptionsButton->FlatAppearance->BorderSize = 0;
			this->OptionsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OptionsButton->Font = (gcnew System::Drawing::Font(L"Colonna MT", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OptionsButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->OptionsButton->Location = System::Drawing::Point(720, 301);
			this->OptionsButton->Name = L"OptionsButton";
			this->OptionsButton->Size = System::Drawing::Size(140, 66);
			this->OptionsButton->TabIndex = 86;
			this->OptionsButton->Text = L"Options";
			this->OptionsButton->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->OptionsButton->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(892, 725);
			this->Controls->Add(this->OptionsButton);
			this->Controls->Add(this->LoadGameButton);
			this->Controls->Add(this->SaveGameButton);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->NewGameButton);
			this->Controls->Add(this->TestLabel);
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
			this->Controls->Add(this->FullBoard);
			this->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FullBoard))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
// =============================================================================================== //

#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		// Moving Board PictureBoxes to array
				 PictureBoxArray_a[0] = a1;
				 PictureBoxArray_a[1] = a2;
				 PictureBoxArray_a[2] = a3;
				 PictureBoxArray_a[3] = a4;
				 PictureBoxArray_a[4] = a5;
				 PictureBoxArray_a[5] = a6;
				 PictureBoxArray_a[6] = a7;
				 PictureBoxArray_a[7] = a8;

				 PictureBoxArray_b[0] = b1;
				 PictureBoxArray_b[1] = b2;
				 PictureBoxArray_b[2] = b3;
				 PictureBoxArray_b[3] = b4;
				 PictureBoxArray_b[4] = b5;
				 PictureBoxArray_b[5] = b6;
				 PictureBoxArray_b[6] = b7;
				 PictureBoxArray_b[7] = b8;

				 PictureBoxArray_c[0] = c1;
				 PictureBoxArray_c[1] = c2;
				 PictureBoxArray_c[2] = c3;
				 PictureBoxArray_c[3] = c4;
				 PictureBoxArray_c[4] = c5;
				 PictureBoxArray_c[5] = c6;
				 PictureBoxArray_c[6] = c7;
				 PictureBoxArray_c[7] = c8;

				 PictureBoxArray_d[0] = d1;
				 PictureBoxArray_d[1] = d2;
				 PictureBoxArray_d[2] = d3;
				 PictureBoxArray_d[3] = d4;
				 PictureBoxArray_d[4] = d5;
				 PictureBoxArray_d[5] = d6;
				 PictureBoxArray_d[6] = d7;
				 PictureBoxArray_d[7] = d8;

				 PictureBoxArray_e[0] = e1;
				 PictureBoxArray_e[1] = e2;
				 PictureBoxArray_e[2] = e3;
				 PictureBoxArray_e[3] = e4;
				 PictureBoxArray_e[4] = e5;
				 PictureBoxArray_e[5] = e6;
				 PictureBoxArray_e[6] = e7;
				 PictureBoxArray_e[7] = e8;

				 PictureBoxArray_f[0] = f1;
				 PictureBoxArray_f[1] = f2;
				 PictureBoxArray_f[2] = f3;
				 PictureBoxArray_f[3] = f4;
				 PictureBoxArray_f[4] = f5;
				 PictureBoxArray_f[5] = f6;
				 PictureBoxArray_f[6] = f7;
				 PictureBoxArray_f[7] = f8;

				 PictureBoxArray_g[0] = g1;
				 PictureBoxArray_g[1] = g2;
				 PictureBoxArray_g[2] = g3;
				 PictureBoxArray_g[3] = g4;
				 PictureBoxArray_g[4] = g5;
				 PictureBoxArray_g[5] = g6;
				 PictureBoxArray_g[6] = g7;
				 PictureBoxArray_g[7] = g8;

				 PictureBoxArray_h[0] = h1;
				 PictureBoxArray_h[1] = h2;
				 PictureBoxArray_h[2] = h3;
				 PictureBoxArray_h[3] = h4;
				 PictureBoxArray_h[4] = h5;
				 PictureBoxArray_h[5] = h6;
				 PictureBoxArray_h[6] = h7;
				 PictureBoxArray_h[7] = h8;

				 // Drawing background
				 FullBoard->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				 
				 //Задання позиції дошки
				 FullBoard->Location = System::Drawing::Point(BOARD_LEFT_UPPER_X,BOARD_LEFT_UPPER_Y);
				 FullBoard->Size = System::Drawing::Size(SQUARE_LENGTH * 8 + BORDER_SIZE * 2, SQUARE_LENGTH * 8 + BORDER_SIZE*2);
				 FullBoard->Image = System::Drawing::Image::FromFile(BOARD_BACKGROUND_FULL);
				 
				 for (int i = 0; i < 8; i++)
				 {

					 // Задання розміру кожної клітини
					 PictureBoxArray_a[i]->Size = System::Drawing::Size(SQUARE_LENGTH, SQUARE_LENGTH);
					 PictureBoxArray_b[i]->Size = System::Drawing::Size(SQUARE_LENGTH, SQUARE_LENGTH);
					 PictureBoxArray_c[i]->Size = System::Drawing::Size(SQUARE_LENGTH, SQUARE_LENGTH);
					 PictureBoxArray_d[i]->Size = System::Drawing::Size(SQUARE_LENGTH, SQUARE_LENGTH);
					 PictureBoxArray_e[i]->Size = System::Drawing::Size(SQUARE_LENGTH, SQUARE_LENGTH);
					 PictureBoxArray_f[i]->Size = System::Drawing::Size(SQUARE_LENGTH, SQUARE_LENGTH);
					 PictureBoxArray_g[i]->Size = System::Drawing::Size(SQUARE_LENGTH, SQUARE_LENGTH);
					 PictureBoxArray_h[i]->Size = System::Drawing::Size(SQUARE_LENGTH, SQUARE_LENGTH);
				 }
				 
				 			 
				 for (int i = 0; i < 8; i++)
				 {
					 // Задання параметру для кожної клітинки поля для рідлаштування розміру фішки
					 PictureBoxArray_a[i]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
					 PictureBoxArray_b[i]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
					 PictureBoxArray_c[i]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
					 PictureBoxArray_d[i]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
					 PictureBoxArray_e[i]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
					 PictureBoxArray_f[i]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
					 PictureBoxArray_g[i]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
					 PictureBoxArray_h[i]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
					 				 
					 // Завантаження фону клітинок поля
					 //if (BOARD_BACKGROUND_WHITE != nullptr && BOARD_BACKGROUND_BLACK != nullptr)
						 if (i % 2)
						 {
							 PictureBoxArray_a[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_WHITE);
							 PictureBoxArray_b[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_BLACK);
							 PictureBoxArray_c[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_WHITE);
							 PictureBoxArray_d[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_BLACK);
							 PictureBoxArray_e[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_WHITE);
							 PictureBoxArray_f[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_BLACK);
							 PictureBoxArray_g[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_WHITE);
							 PictureBoxArray_h[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_BLACK);
						 }
						 else
						 {
							 PictureBoxArray_a[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_BLACK);
							 PictureBoxArray_b[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_WHITE);
							 PictureBoxArray_c[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_BLACK);
							 PictureBoxArray_d[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_WHITE);
							 PictureBoxArray_e[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_BLACK);
							 PictureBoxArray_f[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_WHITE);
							 PictureBoxArray_g[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_BLACK);
							 PictureBoxArray_h[i]->BackgroundImage = System::Drawing::Image::FromFile(BOARD_BACKGROUND_WHITE);
							
						 }

						 for (int i = 7; i >= 0 ; i--)
						 {
							 //Налаштування позиції кожної фішки на полі
							 PictureBoxArray_a[i]->Location = System::Drawing::Point(SQUARE_LEFT_UPPER_X, SQUARE_LEFT_UPPER_Y + SQUARE_LENGTH*(7 - i));
							 PictureBoxArray_b[i]->Location = System::Drawing::Point(SQUARE_LEFT_UPPER_X + SQUARE_LENGTH * 1, SQUARE_LEFT_UPPER_Y + SQUARE_LENGTH*(7 - i));
							 PictureBoxArray_c[i]->Location = System::Drawing::Point(SQUARE_LEFT_UPPER_X + SQUARE_LENGTH * 2, SQUARE_LEFT_UPPER_Y + SQUARE_LENGTH*(7 - i));
							 PictureBoxArray_d[i]->Location = System::Drawing::Point(SQUARE_LEFT_UPPER_X + SQUARE_LENGTH * 3, SQUARE_LEFT_UPPER_Y + SQUARE_LENGTH*(7 - i));
							 PictureBoxArray_e[i]->Location = System::Drawing::Point(SQUARE_LEFT_UPPER_X + SQUARE_LENGTH * 4, SQUARE_LEFT_UPPER_Y + SQUARE_LENGTH*(7 - i));
							 PictureBoxArray_f[i]->Location = System::Drawing::Point(SQUARE_LEFT_UPPER_X + SQUARE_LENGTH * 5, SQUARE_LEFT_UPPER_Y + SQUARE_LENGTH*(7 - i));
							 PictureBoxArray_g[i]->Location = System::Drawing::Point(SQUARE_LEFT_UPPER_X + SQUARE_LENGTH * 6, SQUARE_LEFT_UPPER_Y + SQUARE_LENGTH*(7 - i));
							 PictureBoxArray_h[i]->Location = System::Drawing::Point(SQUARE_LEFT_UPPER_X + SQUARE_LENGTH * 7, SQUARE_LEFT_UPPER_Y + SQUARE_LENGTH*(7 - i));
						}
					
						 // else
					 /*{
						 PictureBoxArray_a[i]->BackgroundImage = System::Drawing::Image::FromFile("VC_Resources\\Field_BackGrounds\\Squares\\NULL.png");
						 PictureBoxArray_b[i]->BackgroundImage = nullptr;
						 PictureBoxArray_c[i]->BackgroundImage = nullptr;
						 PictureBoxArray_d[i]->BackgroundImage = nullptr;
						 PictureBoxArray_e[i]->BackgroundImage = nullptr;
						 PictureBoxArray_f[i]->BackgroundImage = nullptr;
						 PictureBoxArray_g[i]->BackgroundImage = nullptr;
						 PictureBoxArray_h[i]->BackgroundImage = nullptr;
					 }*/
				 }
				 /*======================================*/
				 
				 // Starting new game
				 NewGameButton_Click(nullptr,nullptr);
		}

	// Reloading given picturebox of square on table with given image
	/*private: System::Void ReloadWithImage(PictureBox^ SelectedChip, String^ ImageName)
	{
		SelectedChip->Text = ImageName;
		if (ImageName) SelectedChip->Image = System::Drawing::Image::FromFile(SelectedChip->Text);
		else SelectedChip->Image = nullptr;
	}*/

	// Reloading given picturebox of square on table with image setted in picturebox->text
	private: System::Void RefreshImage (PictureBox^ SelectedChip)
	{
		if (SelectedChip->Text->Length)
		SelectedChip->Image = System::Drawing::Image::FromFile(SelectedChip->Text);
		else SelectedChip->Image = nullptr;
	}

	private: bool RefreshAll()
	{
				 for (int i = 0; i < 8; i++)
				 {
					 RefreshImage(PictureBoxArray_a[i]);
					 RefreshImage(PictureBoxArray_b[i]);
					 RefreshImage(PictureBoxArray_c[i]);
					 RefreshImage(PictureBoxArray_d[i]);
					 RefreshImage(PictureBoxArray_e[i]);
					 RefreshImage(PictureBoxArray_f[i]);
					 RefreshImage(PictureBoxArray_g[i]);
					 RefreshImage(PictureBoxArray_h[i]);
				 }
				 return true;
	}
			
			 //Створюємо матрицю int значень
	public: void Value_Board_to_int ()
	{
				
									
				int jPB = 7;
				int j_arr = 0;
				//array A
				for (int iPB = 7, i_arr = 0; iPB >= 0; iPB--, i_arr++)
				{
					if (PictureBoxArray_a[iPB]->Text->Length)
					{
						if (PictureBoxArray_a[iPB]->Text == IMAGE_WHITE_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 1;
							//arr[j_arr][i_arr] = 1;
						}
						if (PictureBoxArray_a[iPB]->Text == IMAGE_BLACK_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 2;
							//arr[j_arr][i_arr] = 2;
						}
					}
					else
						*(*(arr + j_arr) + i_arr) = 0;
						//arr[j_arr][i_arr] = 0;
						
				}
				jPB--;
				j_arr++;

				//array B
				for (int iPB = 7, i_arr = 0; iPB >= 0; iPB--, i_arr++)
				{
					if (PictureBoxArray_b[iPB]->Text->Length)
					{
						if (PictureBoxArray_b[iPB]->Text == IMAGE_WHITE_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 1;
							//arr[j_arr][i_arr] = 1;
						}
						if (PictureBoxArray_b[iPB]->Text == IMAGE_BLACK_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 2;
							//arr[j_arr][i_arr] = 2;
						}
					}
					else *(*(arr + j_arr) + i_arr) = 0;
						//arr[j_arr][i_arr] = 0;
				}
				jPB--;
				j_arr++;

				//array C
				for (int iPB = 7, i_arr = 0; iPB >= 0; iPB--, i_arr++)
				{
					if (PictureBoxArray_c[iPB]->Text->Length)
					{
						if (PictureBoxArray_c[iPB]->Text == IMAGE_WHITE_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 1;
							//arr[j_arr][i_arr] = 1;
						}
						if (PictureBoxArray_c[iPB]->Text == IMAGE_BLACK_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 2;
							//arr[j_arr][i_arr] = 2;
						}
					}
					else *(*(arr + j_arr) + i_arr) = 0;
						//arr[j_arr][i_arr] = 0;
				}
				jPB--;
				j_arr++;

				//array D
				for (int iPB = 7, i_arr = 0; iPB >= 0; iPB--, i_arr++)
				{
					if (PictureBoxArray_d[iPB]->Text->Length)
					{
						if (PictureBoxArray_d[iPB]->Text == IMAGE_WHITE_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 1;
							//arr[j_arr][i_arr] = 1;
						}
						if (PictureBoxArray_d[iPB]->Text == IMAGE_BLACK_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 2;
							//arr[j_arr][i_arr] = 2;
						}
					}
					else *(*(arr + j_arr) + i_arr) = 0;
						//arr[j_arr][i_arr] = 0;
				}
				jPB--;
				j_arr++;

				//array E
				for (int iPB = 7, i_arr = 0; iPB >= 0; iPB--, i_arr++)
				{
					if (PictureBoxArray_e[iPB]->Text->Length)
					{
						if (PictureBoxArray_e[iPB]->Text == IMAGE_WHITE_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 1;
							//arr[j_arr][i_arr] = 1;
						}
						if (PictureBoxArray_e[iPB]->Text == IMAGE_BLACK_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 2;
							//arr[j_arr][i_arr] = 2;
						}
					}
					else *(*(arr + j_arr) + i_arr) = 0;
						//arr[j_arr][i_arr] = 0;
				}
				jPB--;
				j_arr++;

				//array F
				for (int iPB = 7, i_arr = 0; iPB >= 0; iPB--, i_arr++)
				{
					if (PictureBoxArray_f[iPB]->Text->Length)
					{
						if (PictureBoxArray_f[iPB]->Text == IMAGE_WHITE_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 1;
							//arr[j_arr][i_arr] = 1;
						}
						if (PictureBoxArray_f[iPB]->Text == IMAGE_BLACK_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 2;
							//arr[j_arr][i_arr] = 2;
						}
					}
					else *(*(arr + j_arr) + i_arr) = 0;
						//arr[j_arr][i_arr] = 0;
				}
				jPB--;
				j_arr++;

				//array G
				for (int iPB = 7, i_arr = 0; iPB >= 0; iPB--, i_arr++)
				{
					if (PictureBoxArray_g[iPB]->Text->Length)
					{
						if (PictureBoxArray_g[iPB]->Text == IMAGE_WHITE_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 1;
							//arr[j_arr][i_arr] = 1;
						}
						if (PictureBoxArray_g[iPB]->Text == IMAGE_BLACK_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 2;
							//arr[j_arr][i_arr] = 2;
						}
					}
					else *(*(arr + j_arr) + i_arr) = 0;
						//arr[j_arr][i_arr] = 0;
				}
				jPB--;
				j_arr++;

				//array H
				for (int iPB = 7, i_arr = 0; iPB >= 0; iPB--, i_arr++)
				{
					if (PictureBoxArray_h[iPB]->Text->Length)
					{
						if (PictureBoxArray_h[iPB]->Text == IMAGE_WHITE_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 1;
							//arr[j_arr][i_arr] = 1;
						}
						if (PictureBoxArray_h[iPB]->Text == IMAGE_BLACK_CHIP)
						{
							*(*(arr + j_arr) + i_arr) = 2;
							//arr[j_arr][i_arr] = 2;
						}
					}
					else *(*(arr + j_arr) + i_arr) = 0;
						//arr[j_arr][i_arr] = 0;
				}
}
	
	//Get X in int
	private: int * Get_X (System::Object^ PB)
	{
				 int *X = (int*)malloc(sizeof(int));
				 *X = (((PictureBox^)PB)->Location.X - SQUARE_LEFT_UPPER_X) / SQUARE_LENGTH;
				 return X;
	}
	//Get Y in int
	private: int * Get_Y (System::Object^ PB)
	{
				 int *Y = (int*)malloc(sizeof(int));
				*Y = (((PictureBox^)PB)->Location.Y - SQUARE_LEFT_UPPER_Y) / SQUARE_LENGTH;
				return Y;
	}

	private: void Create_Temp_Ghip()
	{
				 for (int i = 0; i < 8; i++)
				 {
					 for (int j = 0; j < 8; j++)
					 {
						 if (*(*(arr + j) + i) == 3)
							 switch (j)
						 {
							 case 0: PictureBoxArray_a[7 - i]->Image = System::Drawing::Image::FromFile(IMAGE_TEMP_CHIP);
								 break;
							 case 1: PictureBoxArray_b[7 - i]->Image = System::Drawing::Image::FromFile(IMAGE_TEMP_CHIP);
								 break;
							 case 2: PictureBoxArray_c[7 - i]->Image = System::Drawing::Image::FromFile(IMAGE_TEMP_CHIP);
								 break;
							 case 3: PictureBoxArray_d[7 - i]->Image = System::Drawing::Image::FromFile(IMAGE_TEMP_CHIP);
								 break;
							 case 4: PictureBoxArray_e[7 - i]->Image = System::Drawing::Image::FromFile(IMAGE_TEMP_CHIP);
								 break;
							 case 5: PictureBoxArray_f[7 - i]->Image = System::Drawing::Image::FromFile(IMAGE_TEMP_CHIP);
								 break;
							 case 6: PictureBoxArray_g[7 - i]->Image = System::Drawing::Image::FromFile(IMAGE_TEMP_CHIP);
								 break;
							 case 7: PictureBoxArray_h[7 - i]->Image = System::Drawing::Image::FromFile(IMAGE_TEMP_CHIP);
								 break;
							 default:
								 break;
						 }
					 }
				 }
	}

	private: void Delete_Temp_Ghip()
	{
				 for (int i = 0; i < 8; i++)
				 {
					 for (int j = 0; j < 8; j++)
					 {
						 if (*(*(arr + j) + i) == 3)
							 switch (j)
						 {
							 case 0: RefreshImage(PictureBoxArray_a[7 - i]);
								 break;
							 case 1: RefreshImage(PictureBoxArray_b[7 - i]);
								 break;
							 case 2: RefreshImage(PictureBoxArray_c[7 - i]);
								 break;
							 case 3: RefreshImage(PictureBoxArray_d[7 - i]);
								 break;
							 case 4: RefreshImage(PictureBoxArray_e[7 - i]);
								 break;
							 case 5: RefreshImage(PictureBoxArray_f[7 - i]);
								 break;
							 case 6: RefreshImage(PictureBoxArray_g[7 - i]);
								 break;
							 case 7: RefreshImage(PictureBoxArray_h[7 - i]);
								 break;
							 default:
								 break;
						 }
					 }
				 }
	}

	private: bool CheckMove(PictureBox^ Actv)
	{
				 int* i = Get_X((System::Object^)Actv);
				 int* j = Get_Y((System::Object^)Actv);
				 if (*(*(arr + *i) + *j) == 3)
				 {
					 return true;
				 }
				 else
				 {
					 return false;
				 }
				 
	}
	
	// EVENT HANDLER: Click on a Board
	private: System::Void Square_Click(System::Object^  sender, System::EventArgs^  e) 
	{
				 
		PictureBox^ PB;
		PB = (PictureBox^)sender;
	//	if (!(PB->Text->Length) && !(Active)) 
		Delete_Temp_Ghip();
		//TestLabel->Text = ((PictureBox^)PB)->Text;
		if (PB->Text->Length) // якщо в квадраті щось є
		{
			//if (PB == Active)
			//{

			//}

			if (Active) // якщо є активна фішка, то
			{
				// робимо її звичайною
				if (!((PictureBox^)Active)->Text->CompareTo(IMAGE_BLACK_CHIP_SELECTED))
					((PictureBox^)Active)->Text = IMAGE_BLACK_CHIP;
				else ((PictureBox^)Active)->Text = IMAGE_WHITE_CHIP;
				RefreshImage((PictureBox^)Active);
			}
			Active = PB; // то це стає активним
			
			//Створюєм значення для конструктора
			int *X = (int*)malloc(sizeof(int))
				, *Y = (int*)malloc(sizeof(int));
			X = Get_X(Active);
			Y = Get_Y(Active);
			ViewController VC;
			Value_Board_to_int();
			//ViewController VC;
			
			//Відправляємо масив і отримуємо цей масив з точками куди можна піти
			VC.GetBoard(X, Y, arr);

			//Відмічаєм на полі куди можна піти
			Create_Temp_Ghip();

			// і змінює колір
			if (!PB->Text->CompareTo(IMAGE_BLACK_CHIP))
				PB->Text = IMAGE_BLACK_CHIP_SELECTED;
			else PB->Text = IMAGE_WHITE_CHIP_SELECTED;
			RefreshImage(PB);
			// TestLabel->Text = ((PictureBox^)Active)->Text; // Тестовий вивід
		}
		else // якщо квадрат є пустим
		{
			if ((Active) && (CheckMove(PB))) // але є активна фішка
			{
				//Delete_Temp_Ghip();
				// TestLabel->Text = ((PictureBox^)Active)->Text; // Тестовий вивід
				// Активна перестає бути активною
				if (!((PictureBox^)Active)->Text->CompareTo(IMAGE_BLACK_CHIP_SELECTED))
					((PictureBox^)Active)->Text = IMAGE_BLACK_CHIP;
				else ((PictureBox^)Active)->Text = IMAGE_WHITE_CHIP;
								
				PB->Text = ((PictureBox^)Active)->Text;
				RefreshImage(PB); // Передаємо фішку в пусту
				((PictureBox^)Active)->Text = nullptr; // знищуємо текст для активної
				RefreshImage((PictureBox^)Active); // перезавантажуємо колишню активну
				Active = nullptr; // забуваємо, що вона акивна
			}
		}
			//this->TestLabel->Text = this->Active->Text;
	
	
	}

	// EVENT HANDLER: New Game
	private: System::Void NewGameButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//PictureBoxArray_a[7]->Image = nullptr;
		Active = nullptr;

		for (int i = 4; i < 8; i++)
		{
			PictureBoxArray_a[i]->Text = IMAGE_BLACK_CHIP;
			PictureBoxArray_b[i]->Text = IMAGE_BLACK_CHIP;
			PictureBoxArray_c[i]->Text = IMAGE_BLACK_CHIP;
			PictureBoxArray_d[i]->Text = IMAGE_BLACK_CHIP;
			
			PictureBoxArray_e[i]->Text = nullptr;
			PictureBoxArray_f[i]->Text = nullptr;
			PictureBoxArray_g[i]->Text = nullptr;
			PictureBoxArray_h[i]->Text = nullptr;
		}

		for (int i = 0; i < 4; i++)
		{
			PictureBoxArray_a[i]->Text = nullptr;
			PictureBoxArray_b[i]->Text = nullptr;
			PictureBoxArray_c[i]->Text = nullptr;
			PictureBoxArray_d[i]->Text = nullptr;
			
			PictureBoxArray_e[i]->Text = IMAGE_WHITE_CHIP;
			PictureBoxArray_f[i]->Text = IMAGE_WHITE_CHIP;
			PictureBoxArray_g[i]->Text = IMAGE_WHITE_CHIP;
			PictureBoxArray_h[i]->Text = IMAGE_WHITE_CHIP;
		}
		
		RefreshAll();
	}
			 
	// EVENT HANDLER: Exit Game
	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		delete (this);
	}
};
}