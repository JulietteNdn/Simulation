#include "stdafx.h"
#include "TFile.h"


TFile::TFile(int taille) :pf(0), pd(0), taille(taille)
{
	liste = new TClient[taille + 1];
}


TFile::~TFile()
{
	delete[] liste;
}


void TFile::enfiler(TClient unClient)
{

	liste[pf] = unClient;
	pf = (pf + 1) % (taille+1);
}


TClient TFile::defiler()
{
	TClient client;
	client = liste[pd];
	pd = (pd+1)%(taille+1);
	
	return client;
}

TClient TFile::top() {
	return liste[pd];
}

void TFile::viderFile()
{
	pf = 0;
	pd = 0;
}


bool TFile::estVide()
{
	return pd == pf;
}


bool TFile::estPleine()
{
	return (pf+1)%(taille+1) == pd;
}
