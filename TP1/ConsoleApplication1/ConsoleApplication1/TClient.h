#pragma once


class TClient
{

private:
	static int nbClient;
	int id;
	int dateEntreeServ;
	int dateSortieServ;
	int dateEntreeFile;

public:
	TClient();
	TClient(int dateEntree);
	int getDateEntreeSys();
	int getDateSortieSys();
	int getDateEntreeFile();
	int getId();

	void setDateEntreeServ(int);
	void setDateSortieServ(int);
	void setDateEntreeFile(int);



};

