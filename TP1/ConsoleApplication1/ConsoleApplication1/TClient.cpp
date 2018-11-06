#include "stdafx.h"
#include "TClient.h"


TClient::TClient()
{
}

TClient::TClient(int dateEntree):id(nbClient), dateEntreeFile(dateEntree)
{
	nbClient++;
}

int TClient::getDateEntreeSys()
{
	return dateEntreeServ;
}

int TClient::getDateSortieSys()
{
	return dateSortieServ;
}

int TClient::getDateEntreeFile()
{

	return dateEntreeFile;
}

int TClient::getId()
{
	return id;
}

void TClient::setDateEntreeServ(int date)
{
	dateEntreeServ = date;
}

void TClient::setDateSortieServ(int date)
{
	dateSortieServ = date;
}

void TClient::setDateEntreeFile(int date)
{
	dateEntreeFile = date;
}

int TClient::nbClient = 0;