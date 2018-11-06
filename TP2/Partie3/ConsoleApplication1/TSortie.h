#pragma once
#include "TClient.h"
#define NB_CLI_MAX 1000

class TSortie
{
public:
	TSortie();
	//~TSortie();
	void ajouterClients(TClient, TClient);
	TClient ** getTabCoupleClients();
	int getCpt();

private:
	int cpt;
	TClient ** tabCoupleClients;


};

