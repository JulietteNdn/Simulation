#include "stdafx.h"
#include "TClient.h"


TClient::TClient()
{
}

TClient::TClient(int dateEntree):id(nbClient)
{
	nbClient++;
}


/* GESTION DATES */
int TClient::getDateEntreeFile1()
{
	return dateEntreeFile1;
}

int TClient::getDateEntreeServ1()
{
	return dateEntreeServ1;
}


int TClient::getDateEntreeFile2()
{
	return dateEntreeFile2;
}

int TClient::getDateEntreeServ2() {
	return dateEntreeServ2; // dateSortieFile2
}


int TClient::getDateEntreeAss()
{
	return dateEntreeAss;
}

int TClient::getDateSortieAss()
{
	return dateSortieAss;
}

int TClient::getId()
{
	return id;
}
/* FIN GESTION DATES */




void TClient::setDateEntreeServ(int serveur, int date)
{
	if (serveur == 1) dateEntreeServ1 = date;
	else if (serveur == 2) dateEntreeServ2 = date;
}

void TClient::setDateEntreeFile(int file, int date)
{
	if (file == 1) dateEntreeFile1 = date;
	else if (file == 2) dateEntreeFile2 = date;
}

void TClient::setDateEntreeAss(int date)
{
	dateEntreeAss = date;
}

void TClient::setDateSortieAss(int date)
{
	dateSortieAss = date;
}



int TClient::nbClient = 0;