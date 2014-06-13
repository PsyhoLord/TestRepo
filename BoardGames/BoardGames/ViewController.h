#pragma once
#include "MainForm.h"
#include "ViewController.h"
#include <malloc.h>

using namespace System::Windows::Forms;

//ref
class ViewController
{
public:
	//int X, Y;
	int **array_points;
	Model *GameModel;
	
public:
	ViewController();
	
	void ViewController::GetBoard(int *x, int *y, int **BoardArr);
};