#pragma once
#define TAILLE 8
#include "TClient.h"

class TFile
{
private:
	TClient liste[TAILLE+1];
	int pd;
	int pf;

public:
	TFile();
	~TFile();
	void enfiler(TClient);
	TClient defiler();
	void viderFile();
	bool estVide();
	bool estPleine();

};

