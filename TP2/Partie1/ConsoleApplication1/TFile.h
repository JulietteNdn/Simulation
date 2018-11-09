#pragma once
#define TAILLE 8

#include "TClient.h"

class TFile
{
private:
	TClient *liste;
	int pd;
	int pf;
	int taille;

public:
	TFile(int);
	~TFile();
	void enfiler(TClient);
	TClient defiler();
	TClient top();
	void viderFile();
	bool estVide();
	bool estPleine();

};

