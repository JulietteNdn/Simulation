#pragma once
#include "TClient.h"
#include "TServeur.h"

class TAssembleur : public TServeur
{
public:
	TAssembleur();
	void traiterClients(TClient, TClient);
	TClient libererClient2();

private:
	TClient clientCour2;
};

