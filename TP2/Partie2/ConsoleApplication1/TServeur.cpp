#include "stdafx.h"
#include "TServeur.h"
#include "TClient.h"

TServeur::TServeur() : state(LIBRE)
{

}

void TServeur::traiterClient(TClient client) {
	state = OCCUPE;
	clientCour = client;
}

void TServeur::bloquerClient() {
	state = BLOQUE;

}

TClient TServeur::libererClient() {
	state = LIBRE;
	return clientCour;
}

TClient TServeur::voirClient() {
	return clientCour;
}


etat TServeur::getEtat() const noexcept
{
	return state;
}
