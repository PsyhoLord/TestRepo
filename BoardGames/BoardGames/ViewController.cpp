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

void ViewController::GetBoard(int *x, int *y, int **BoardArr)
{
	int X = *x;
	int Y = *y;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			array_points[j][i] = BoardArr[i][j];
		}
	}
	
	Model GameM(X, Y);
	//ќтримуЇмо точки куди можна п≥ти

	GameM.Move(array_points);

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			BoardArr[i][j] = array_points[j][i];
		}
	}
	
	
}

