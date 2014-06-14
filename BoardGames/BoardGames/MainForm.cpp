#include "MainForm.h"
using namespace BoardGames;

MainForm::MainForm(void)
{
	InitializeComponent();
	//
	//TODO: добавьте код конструктора
	//
	arr = (int**)malloc(8 * sizeof(int*));
	for (int i = 0; i < 8; i++)
		arr[i] = (int*)malloc(8 * sizeof(int));
	Gamer = IMAGE_WHITE_CHIP;
}

MainForm::~MainForm()
{
	/// <summary>
	/// Освободить все используемые ресурсы.
	/// </summary>
	if (components)
	{
		delete components;
	}
}

//void MainForm::InitializeComponent(void)

System::Void MainForm::MainForm_Load(System::Object^  sender, System::EventArgs^  e)
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
	FullBoard->Location = System::Drawing::Point(BOARD_LEFT_UPPER_X, BOARD_LEFT_UPPER_Y);
	FullBoard->Size = System::Drawing::Size(SQUARE_LENGTH * 8 + BORDER_SIZE * 2, SQUARE_LENGTH * 8 + BORDER_SIZE * 2);
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

		for (int i = 7; i >= 0; i--)
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
	NewGameButton_Click(nullptr, nullptr);
	//TestLabel->Text = "Gamer1";
	StatusBar->ForeColor = System::Drawing::Color::Red;
	StatusBar->Text = "Red player's move";
}

System::Void MainForm::RefreshImage(PictureBox^ SelectedChip)
{
	if (SelectedChip->Text->Length)
		SelectedChip->Image = System::Drawing::Image::FromFile(SelectedChip->Text);
	else SelectedChip->Image = nullptr;
}

bool MainForm::RefreshAll()
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

void MainForm::Value_Board_to_int()
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
int * MainForm::Get_X(System::Object^ PB)
{
	int *X = (int*)malloc(sizeof(int));
	*X = (((PictureBox^)PB)->Location.X - SQUARE_LEFT_UPPER_X) / SQUARE_LENGTH;
	return X;
}
			 //Get Y in int
int * MainForm::Get_Y(System::Object^ PB)
{
	int *Y = (int*)malloc(sizeof(int));
	*Y = (((PictureBox^)PB)->Location.Y - SQUARE_LEFT_UPPER_Y) / SQUARE_LENGTH;
	return Y;
}

void MainForm::Create_Temp_Ghip()
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

void MainForm::Delete_Temp_Ghip()
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

bool MainForm::CheckMove(PictureBox^ Actv)
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

System::Void MainForm::Square_Click(System::Object^  sender, System::EventArgs^  e)
{

	PictureBox^ PB;
	PB = (PictureBox^)sender;
	//	if (!(PB->Text->Length) && !(Active)) 
	Delete_Temp_Ghip();

	//TestLabel->Text = ((PictureBox^)PB)->Text;
	if ((PB->Text->Length)&&(PB!=Active)) // якщо в квадраті щось є
	{
		//if (PB == Active)
		//{

		//}
		//Якщо фішка ігрока, черга якого грати, або пусте поле
		if ((PB->Text == Gamer) || (PB->Text == nullptr))
			//(((PictureBox^)Active)->Text == Gamer) || 
		{
			if (Active) // якщо є активна фішка, то
			{
				// робимо її звичайною
				if (!((PictureBox^)Active)->Text->CompareTo(IMAGE_BLACK_CHIP_SELECTED))
					((PictureBox^)Active)->Text = IMAGE_BLACK_CHIP;
				else ((PictureBox^)Active)->Text = IMAGE_WHITE_CHIP;
				RefreshImage((PictureBox^)Active);
			}

			Active = PB; // то це стає активним
			//	Gamer = nullptr;
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
		}// TestLabel->Text = ((PictureBox^)Active)->Text; // Тестовий вивід
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

			//Якщо хід зроблено, то змінюємо ігрока
			if (Gamer == IMAGE_BLACK_CHIP)
				Gamer = IMAGE_WHITE_CHIP;
			else Gamer = IMAGE_BLACK_CHIP;

			if (Gamer == IMAGE_BLACK_CHIP)
			{
				//TestLabel->Text = "Gamer2";
				StatusBar->ForeColor = System::Drawing::Color::DarkBlue;
				StatusBar->Text = "Blue player's move";
			}
			else
			{
				//TestLabel->Text = "Gamer1";
				StatusBar->ForeColor = System::Drawing::Color::Red;
				StatusBar->Text = "Red player's move";
			}
		}
		else if (PB == Active) // якщо є активна фішка, то
		{
			// робимо її звичайною
			if (!((PictureBox^)Active)->Text->CompareTo(IMAGE_BLACK_CHIP_SELECTED))
				((PictureBox^)Active)->Text = IMAGE_BLACK_CHIP;
			else ((PictureBox^)Active)->Text = IMAGE_WHITE_CHIP;
			RefreshImage((PictureBox^)Active);
			Active = nullptr;
		}
	}
	//this->TestLabel->Text = this->Active->Text;
	/*if (Gamer == IMAGE_WHITE_CHIP)
	Gamer = IMAGE_BLACK_CHIP;
	else Gamer = IMAGE_WHITE_CHIP;*/
}

System::Void MainForm::NewGameButton_Click(System::Object^  sender, System::EventArgs^  e)
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

System::Void MainForm::ExitButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	delete (this);
}

//System::Void MainForm::ReloadWithImage(PictureBox^ SelectedChip, String^ ImageName)
//{
//	SelectedChip->Text = ImageName;
//	if (ImageName) SelectedChip->Image = System::Drawing::Image::FromFile(SelectedChip->Text);
//	else SelectedChip->Image = nullptr;
//}