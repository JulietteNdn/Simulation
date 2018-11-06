#pragma once
#include <time.h>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>

class TGammeOp
{
public:
	TGammeOp();
	TGammeOp(float, float);
	char * getListeMachine();
	double getP();
	double getQ();

	int bernouilli(float d); // renvoie 1 avec une proba d, et 0 avec une proba 1-d

	void choisir_machine(int num_etape);
	void choisir_etape(int num_etape);



private:

	char liste_machine[800]; // chemin des machines empruntées 
	float p;
	float q;

};

