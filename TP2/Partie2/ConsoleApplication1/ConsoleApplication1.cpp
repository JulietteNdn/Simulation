// ConsoleApplication1.cpp : fichier projet principal.

#include "stdafx.h"
#include "MyForm.h"
#include "code.h"
#include "TGammeOp.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

/*
int main(cli::array<System::String ^> ^args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ConsoleApplication1::MyForm main_form;

	Application::Run(%main_form);
	
    return 0;

}
*/

int main(void) {
	srand(time(NULL));
	
	TSortie sortie;
	
	sortie = simuler(1000, 100, 10, 8, 6, 0.6, 0.4);

	for (int i = 0; i < 10; i++)
		std::cout << sortie.getTabClient()[i].getChemin();
		
	return 0;
}
