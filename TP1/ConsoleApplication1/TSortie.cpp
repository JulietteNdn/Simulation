#include "stdafx.h"
#include "TSortie.h"


TSortie::TSortie()
{
	cpt = 0;
}

void TSortie::ajouterClient(TClient unClient)
{
	tabClient[cpt] = unClient;
	cpt++;
	calculerMoyenne();
}

void TSortie::calculerMoyenne()
{
	int sommeMoy = 0;
	float moy;

	for (int i = 0; i < cpt; i++) {
		sommeMoy += tabClient[i].getDateSortieSys() - tabClient[i].getDateEntreeFile();

	}
	moyennes[cpt-1] = sommeMoy / (float)cpt;
	
}

TClient * TSortie::getTabClient()
{
	return tabClient;
}

int TSortie::getCpt()
{
	return cpt;
}

float * TSortie::getMoyennes() {
	return moyennes;
}