#include "stdafx.h"
#include "code.h"
#include "TFile.h"
#include "TClient.h"
#include "TServeur.h"
#include "TSortie.h"
#include "TEntree.h"

using namespace System;


TSortie simuler(int durSim, int durInter, int durTrait) {
	
	int idCli = 0;

	TServeur serveur;
	TFile file;
	TSortie sortie;
	TEntree entree;
	TClient monsieurRecup;
	
	int durTraitCour=0;
	int durInterCour=0;

	file.viderFile();

	for (int tps = 0; tps < durSim; tps++) {

		if (durInterCour <= 0) { // arrivée d'un client dans la file
			if (!file.estPleine()) {
				TClient client(tps);
				client.setDateEntreeFile(tps);
				file.enfiler(client);
				durInterCour = durInter;
			}
		}
		if (durTraitCour == 0) { // sortie d'un client du serveur
			if (!serveur.estLibre()) {
				monsieurRecup = serveur.libererClient();
				monsieurRecup.setDateSortieServ(tps);
				sortie.ajouterClient(monsieurRecup);
			}
		}

		if (serveur.estLibre()) { // entrée d'un client ds le serveur (=> sortie de la file)
			if (!file.estVide()) {
				monsieurRecup = file.defiler();
				monsieurRecup.setDateEntreeServ(tps);
				serveur.traiterClient(monsieurRecup);
				durTraitCour = durTrait;
			}
		}

		durInterCour--;
		durTraitCour--;
	}
	serveur.libererClient();
	return sortie;
}