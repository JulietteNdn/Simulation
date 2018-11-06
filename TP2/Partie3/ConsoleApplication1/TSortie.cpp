#include "stdafx.h"
#include "TSortie.h"


TSortie::TSortie()
{
	tabCoupleClients = new TClient*[NB_CLI_MAX/2];
	for (int i = 0; i < NB_CLI_MAX/2; i++)
		tabCoupleClients[i] = new TClient[3];
	cpt = 0;
}
/*
TSortie::~TSortie()
{
	for (int i = 0; i < NB_CLI_MAX / 2; i++)
		delete[] tabCoupleClients[i];
	delete[] tabCoupleClients;
}
*/
void TSortie::ajouterClients(TClient client1, TClient client2)
{
	tabCoupleClients[cpt][1] = client1;
	tabCoupleClients[cpt][2] = client2;
	cpt++;
}

TClient ** TSortie::getTabCoupleClients()
{
	return tabCoupleClients;
}

int TSortie::getCpt()
{
	return cpt;
}