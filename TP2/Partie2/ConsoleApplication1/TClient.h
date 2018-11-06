#pragma once


class TClient
{

private:
	static int nbClient;
	int id;
	int dateEntreeFileA[800];
	int dateEntreeServA[800];

	int dateSortieServA[800]; // = dateEntreeFileB ou dateEntreeFileC

	int dateEntreeServB[800];
	int dateSortieServB; // sortie définitive

	int dateEntreeServC[800];
	int dateSortieServC; // sortie définitive


public:
	TClient();
	TClient(int dateEntree);


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

	// setDateEntreeFile2(int) = setDateSortieSev1(int)


};

