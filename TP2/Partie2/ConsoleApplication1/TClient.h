#pragma once
#include "TGammeOp.h"
#include <iostream>
#include <string>

using namespace std;

class TClient
{

private:
	static int nbClient;

	int id;

	int etape;

	int dateEntreeFileA[800];
	int dateEntreeServA[800];

	int dateSortieServA[800]; // = dateEntreeFileB ou dateEntreeFileC

	int dateEntreeServB[800];
	int dateSortieServB; // sortie définitive

	int dateEntreeServC[800];
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

