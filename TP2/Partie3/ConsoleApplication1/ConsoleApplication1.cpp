// ConsoleApplication1.cpp : fichier projet principal.

#include "stdafx.h"
#include "MyForm.h"
#include "code.h"


using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args)
{
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ConsoleApplication1::MyForm main_form;

	Application::Run(%main_form);

    return 0;

}
