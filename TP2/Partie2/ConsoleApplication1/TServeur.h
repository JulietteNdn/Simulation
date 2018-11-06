#pragma once
#include "TClient.h"

using etat = enum { LIBRE, OCCUPE, BLOQUE };

class TServeur
{
public:
	TServeur();
	
	void traiterClient(TClient);
	TClient libererClient();
	void bloquerClient();

	etat getEtat() const noexcept ;

private:

	etat state;

	TClient clientCour;
};

