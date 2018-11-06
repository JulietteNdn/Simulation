#pragma once


class TClient
{

private:
	static int nbClient;
	int id;
	int dateEntreeFile1;
	int dateEntreeServ1;

	int dateEntreeFile2;
	int dateEntreeServ2;

	int dateEntreeAss; //= dateSortieServ1ou2
	int dateSortieAss;


public:
	TClient();
	TClient(int dateEntree);


	int getDateEntreeFile1(); 
	int getDateEntreeServ1();

	int getDateEntreeFile2();
	int getDateEntreeServ2();

	int getDateEntreeAss(); // = sortie des serveurs
	int getDateSortieAss();

	int getId();


	void setDateEntreeServ(int, int);
	void setDateEntreeFile(int, int);

	void setDateEntreeAss(int);
	void setDateSortieAss(int);
};

