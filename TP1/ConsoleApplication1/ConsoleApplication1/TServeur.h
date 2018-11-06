#pragma once
#include "TClient.h"

class TServeur
{
public:
	TServeur();
	
	void traiterClient(TClient);
	TClient libererClient();

	bool estLibre();

private:
	bool libre; // true si libre, false sinon
	// int DPE; // date du prochain év.

	TClient clientCour;
};

