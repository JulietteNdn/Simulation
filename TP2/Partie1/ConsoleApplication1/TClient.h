#pragma once


class TClient
{

private:
	static int nbClient;
	int id;
	int dateEntreeServ1 = -1;
	int dateSortieServ1 = -1;
	int dateEntreeFile1 = -1;

	int dateEntreeServ2 = -1;
	int dateSortieServ2 = -1;
	// dateEntreeFile2 = dateSortieServ1


public:
	TClient();
	TClient(int dateEntree);


	int getDateEntreeSys(); // = dateEntreeFile1
	int getDateEntreeServ1(); // = dateSortieFile1 = dateEntreeServ1
	int getDateSortieServ1(); // = dateSortieServ1 = dateEntreeFile2
	int getDateEntreeServ2(); // = dateEntreeServ2 = dateSortieFile2
	int getDateSortieSys(); // = dateSortieServ2

	int getId();


	void setDateEntreeServ1(int);
	void setDateSortieServ1(int);
	void setDateEntreeFile1(int);

	void setDateEntreeServ2(int);
	void setDateSortieServ2(int);

	// setDateEntreeFile2(int) = setDateSortieSev1(int)


};

