#include "stdafx.h"
#include "TFile.h"


TFile::TFile():pf(0), pd(0)
{
}


TFile::~TFile()
{
}


void TFile::enfiler(TClient unClient)
{
	liste[pf] = unClient;
	pf = (pf + 1) % (TAILLE+1);
}


TClient TFile::defiler()
{
	TClient client;
	client = liste[pd];
	pd = (pd+1)%(TAILLE+1);
	
	return client;
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
	return (pf+1)%(TAILLE+1) == pd;
}
