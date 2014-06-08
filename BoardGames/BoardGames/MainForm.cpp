#include "MainForm.h"

#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{

	//Comment
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	BoardGames::MainForm form;
	Application::Run(%form);
	//Simple text
}