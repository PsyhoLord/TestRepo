#pragma once
#include "MainForm.h"
#include "ViewController.h"
#include <malloc.h>

using namespace System::Windows::Forms;

//ref
class ViewController
{
public:
	Model *GameModel;
public:
	ViewController();
	void ViewController::GetLocations(int x, int y);
	void ViewController::SetBoard(PictureBox^ **BoardArr);
};