#include "stdafx.h"
#include "TGammeOp.h"

TGammeOp::TGammeOp() {}

TGammeOp::TGammeOp(float pp, float qq) : p(pp), q(qq)
{

	liste_machine[0] = 'A';
	int etape = 0;

	while (liste_machine[etape] != 'F') { // tq la pièce ne sort pas du circuit
		etape++;
		choisir_machine(etape);
		etape++;
		choisir_etape(etape);
	}
}

double TGammeOp::getP()
{
	return p;
}

double TGammeOp::getQ()
{
	return q;
}

char * TGammeOp::getListeMachine()
{
	return liste_machine;
}

int TGammeOp::bernouilli(float d)
{
	srand(time(NULL));
	int retour = 0;
	int test = rand()%1000;
	float nb = test / 1000.;
	if (nb < d)
	{
		retour = 1;
	}
	return retour;
}

void TGammeOp::choisir_machine(int num_etape)
{
	int res;
	res = bernouilli(q);

	if (res == 1) liste_machine[num_etape] = 'B';
	else liste_machine[num_etape] = 'C';
}

void TGammeOp::choisir_etape(int num_etape)
{

	int res;
	res = bernouilli(p);

	if (res == 1) liste_machine[num_etape] = 'F';
	else liste_machine[num_etape] = 'A';

}
