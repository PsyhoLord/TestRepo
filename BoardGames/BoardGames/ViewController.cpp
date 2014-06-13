#include "MainForm.h"
#include "ViewController.h"
#include <malloc.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace BoardGames;



ViewController::ViewController()
{
	//Model *_GameModel = new Model;
	//GameModel = _GameModel;
	GameModel = new Model;
	//NewZ = gcnew MainForm;
	array_points = (int**)malloc(8 * sizeof(int*));
	for (int i = 0; i < 8; i++)
		array_points[i] = (int*)malloc(8 * sizeof(int));


}
void ViewController::GetLocations (int *x, int *y)
{
	//X = *x;
	//Y = *y;
}

void ViewController::GetBoard(int *x, int *y, int **BoardArr)
{
	int X = *x;
	int Y = *y;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			array_points[i][j] = BoardArr[i][j];
		}
	}
	//array_points[0][7] = 4;
	//New_Form.Value_Board_to_int(arr); //Беремо значення дошки

	Model GameM;
	//Отримуємо точки куди можна піти
	
	GameM.Move(X, Y, array_points);
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			BoardArr[i][j] = array_points[i][j];
		}
	}
	//GameM.Move(array_points);
	
	
}

void ViewController::SetBoard(int **arr)
{
	
}