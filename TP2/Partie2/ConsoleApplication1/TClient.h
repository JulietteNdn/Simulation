#pragma once
#include "TGammeOp.h"
#include <iostream>
#include <string>
#define TAILLEMAXDATE 10
using namespace std;

class TClient
{

private:
	static int nbClient;

	int id;

	int etape;

	int dateEntreeFileA[TAILLEMAXDATE];
	int dateEntreeServA[TAILLEMAXDATE];

	int dateSortieServA[TAILLEMAXDATE]; // = dateEntreeFileB ou dateEntreeFileC

	int dateEntreeServB[TAILLEMAXDATE];
	int dateSortieServB; // sortie définitive

	int dateEntreeServC[TAILLEMAXDATE];
	int dateSortieServC; // sortie définitive

	string chemin;

	TGammeOp gamme;


public:
	TClient();
	TClient(int, float, float);

	char prochaineMachine(); 

	void etapeInc();
	int getEtape();

	TGammeOp getGamme();

	int * getDateEntreeFileA(); 
	int * getDateEntreeServA();
	int * getDateSortieServA(); 
	int * getDateEntreeServB(); 
	int getDateSortieServB(); 
	int * getDateEntreeServC();
	int getDateSortieServC(); 

	int getId();


	void setDateEntreeServA(int);
	void setDateSortieServA(int);
	void setDateEntreeFileA(int);

	void setDateEntreeServB(int);
	void setDateSortieServB(int);

	void setDateEntreeServC(int);
	void setDateSortieServC(int);

	string getChemin();
	void updateChemin();


	// setDateEntreeFile2(int) = setDateSortieSev1(int)


};

