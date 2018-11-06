#include "stdafx.h"
#include "TClient.h"


TClient::TClient()
{
}

TClient::TClient(int dateEntree):id(nbClient)
{
	for (int i = 0; i < 799; i++) {
		dateEntreeFileA[i] = -1;
		dateEntreeServA[i] = -1;
		dateSortieServA[i] = -1;
		dateEntreeServB[i] = -1;
		dateEntreeServC[i] = -1;
		
	}

	dateEntreeFileA[0] = dateEntree;

	dateSortieServB = -1;
	dateSortieServC = -1;

	nbClient++;
}


/* GESTION DATES */
int * TClient::getDateEntreeFileA()
{
	return dateEntreeFileA;
}

int * TClient::getDateEntreeServA()
{
	return dateEntreeServA;
}

int * TClient::getDateSortieServA()
{
	return dateSortieServA; //  = dateEntreeFile2
}

int * TClient::getDateEntreeServB() {
	return dateEntreeServB; // dateSortieFile2
}

int TClient::getDateSortieServB()
{
	return dateSortieServB; 
}

int * TClient::getDateEntreeServC()
{
	return dateEntreeServC;
}

int TClient::getDateSortieServC()
{
	return dateSortieServC;
}

int TClient::getId()
{
	return id;
}
/* FIN GESTION DATES */




void TClient::setDateEntreeServA(int date)
{
	int i = 0;
	while (dateEntreeServA[i] != -1) i++;
	dateEntreeServA[i] = date;
}

void TClient::setDateSortieServA(int date)
{
	int i = 0;
	while (dateSortieServA[i] != -1) i++;
	dateSortieServA[i] = date;
}

void TClient::setDateEntreeFileA(int date)
{
	int i = 0;
	while (dateEntreeFileA[i] != -1) i++;
	dateEntreeFileA[i] = date;

}

void TClient::setDateEntreeServB(int date)
{
	int i = 0;
	while (dateEntreeServB[i] != -1) i++;
	dateEntreeServB[i] = date;
}

void TClient::setDateSortieServB(int date)
{
	dateSortieServB = date;
}

void TClient::setDateEntreeServC(int date)
{
	int i = 0;
	while (dateEntreeServC[i] != -1) i++;
	dateEntreeServC[i] = date;
}

void TClient::setDateSortieServC(int date)
{
	dateSortieServC = date;
}



int TClient::nbClient = 0;