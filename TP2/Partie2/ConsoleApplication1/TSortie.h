#pragma once
#include "TClient.h"
#define NB_CLI_MAX 100

class TSortie
{
public:
	TSortie();
	void ajouterClient(TClient);
	TClient * getTabClient();
	int getCpt();

private:
	int cpt;
	TClient tabClient[NB_CLI_MAX];


};

