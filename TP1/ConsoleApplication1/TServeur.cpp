#include "stdafx.h"
#include "TServeur.h"
#include "TClient.h"

TServeur::TServeur()
{

}

void TServeur::traiterClient(TClient client) {
	libre = false;
	clientCour = client;

}

TClient TServeur::libererClient() {
	libre = true;

	return clientCour;
}

bool TServeur::estLibre()
{

	return libre;
}
