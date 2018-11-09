#include "stdafx.h"
#include "TClient.h"


TClient::TClient()
{
}

TClient::TClient(int dateEntree):id(nbClient), dateEntreeFile1(dateEntree)
{
	nbClient++;
}


/* GESTION DATES */
int TClient::getDateEntreeSys()
{
	return dateEntreeFile1;
}

int TClient::getDateEntreeServ1()
{
	return dateEntreeServ1;
}

int TClient::getDateSortieServ1()
{
	return dateSortieServ1; //  = dateEntreeFile2
}

int TClient::getDateEntreeServ2() {
	return dateEntreeServ2; // dateSortieFile2
}

int TClient::getDateSortieSys()
{
	return dateSortieServ2; 
}

int TClient::getId()
{
	return id;
}
/* FIN GESTION DATES */



// SERV 1

void TClient::setDateEntreeServ1(int date)
{
	dateEntreeServ1 = date;
}

void TClient::setDateSortieServ1(int date)
{
	dateSortieServ1 = date;
}

void TClient::setDateEntreeFile1(int date)
{
	dateEntreeFile1 = date;
}




// SERV2

void TClient::setDateEntreeServ2(int date)
{
	dateEntreeServ2 = date;
}

void TClient::setDateSortieServ2(int date)
{
	dateSortieServ2 = date;
}


int TClient::nbClient = 0;