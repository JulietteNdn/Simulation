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

int main(cli::array<System::String ^> ^args)
{
	srand(1234);

	TSortie sortie;

	sortie = simuler(500, 100, 10, 8, 6, 0.6, 0.4);

	for (int i = 0; i < 5; i++)
		std::cout << sortie.getTabClient()[i].getChemin();


	TGammeOp gamme_operatoire(0.2, 0.5);


/*
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ConsoleApplication1::MyForm main_form;

	Application::Run(%main_form);
*/	
    return 0;

}
