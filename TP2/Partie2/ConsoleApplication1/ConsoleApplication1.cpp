// ConsoleApplication1.cpp : fichier projet principal.

#include "stdafx.h"
#include "MyForm.h"
#include "code.h"
#include "TGammeOp.h"


using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args)
{
	TGammeOp gamme_operatoire(0.2, 0.5);


/*/	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ConsoleApplication1::MyForm main_form;

	Application::Run(%main_form);
*/	
    return 0;

}
