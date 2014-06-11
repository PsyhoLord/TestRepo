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
}
void ViewController::GetLocations(int x, int y)
{
	//MainForm PictureBoxArray_a;
}

void ViewController::SetBoard(PictureBox^ **BoardArr)
{
	
}