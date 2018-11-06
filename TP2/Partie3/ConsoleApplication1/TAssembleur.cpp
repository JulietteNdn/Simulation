#include "stdafx.h"
#include "TAssembleur.h"


TAssembleur::TAssembleur() : TServeur()
{
}

void TAssembleur::traiterClients(TClient client1, TClient client2)
{
	state = OCCUPE;
	clientCour = client1;
	clientCour2 = client2;
}

TClient TAssembleur::libererClient2()
{
	state = LIBRE;
	return clientCour2;
}

