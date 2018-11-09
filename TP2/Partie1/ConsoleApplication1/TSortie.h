#pragma once
#include "TClient.h"
#define NB_CLI_MAX 10000

class TSortie
{
public:
	TSortie();
	void ajouterClient(TClient);
	TClient * getTabClient();
	int getCpt();
	void calculerMoyenne();
	float * getMoyennes();

private:
	int cpt;
	float moyennes[NB_CLI_MAX];
	TClient tabClient[NB_CLI_MAX];


};

