#include "stdafx.h"
#include "code.h"

using namespace System;


TSortie simuler(int durSim, int durInter, int Sa, int Sb, int Sc, float p, float q) {
	
	int idCli = 0;

	TServeur serveurA;
	TServeur serveurB;
	TServeur serveurC;

	TFile fileA;
	TFile fileB;
	TFile fileC;

	TSortie sortie;
	TEntree entree;
	TClient monsieurRecup;
	
	int durTraitCourA = 0;
	int durInterCourA = 0;

	int durTraitCourB = 0;

	int durTraitCourC = 0;
	

	for (int tps = 0; tps < durSim; tps++) {



		if (durInterCourA <= 0) { // arrivée d'un NOUVEAU client dans la fileA
			if (!fileA.estPleine()) { // il se passe qq chose seulement si FA n'est pas pleine
				TClient client(tps, p, q);
				fileA.enfiler(client);
				durInterCourA = durInter;
			}
		}

		if (durTraitCourB <= 0)  // sortie d'un client de B ? entree dans A ou sortie définitive ?
			sortieBouC(serveurB, monsieurRecup, fileA, tps);

		if (durTraitCourC <= 0)  // sortie d'un client de C ? entree dans A ou sortie définitive ?
			sortieBouC(serveurC, monsieurRecup, fileA, tps);

		
		if (durTraitCourA <= 0) { // sortie d'un client de A ? entree dans B ou C ?
			if (serveurA.getEtat() != LIBRE) {
				TClient clientCour = serveurA.voirClient();
				char pro = clientCour.prochaineMachine();
				if (pro == 'B') {
					if (!fileB.estPleine()) {
						monsieurRecup = serveurA.libererClient();
						monsieurRecup.setDateSortieServA(tps);
						monsieurRecup.setDateEntreeServB(tps);
						monsieurRecup.etapeInc();
						fileB.enfiler(monsieurRecup);
						durTraitCourB = Sb;
					}
					else {
						serveurA.bloquerClient();
					}
				}
				else { // c'est C 
					if (!fileC.estPleine()) {
						monsieurRecup = serveurA.libererClient();
						monsieurRecup.setDateSortieServA(tps);
						monsieurRecup.setDateEntreeServC(tps);
						monsieurRecup.etapeInc();
						fileC.enfiler(monsieurRecup);
						durTraitCourC = Sc;
					}
					else {
						serveurA.bloquerClient();
					}
				}
			}
		}

		entreeSB(serveurB, monsieurRecup, fileB, Sb, durTraitCourB, tps); // entrée d'un client ds le serveurB (=> sortie de la fileB)
		entreeSC(serveurC, monsieurRecup, fileC, Sc, durTraitCourC, tps); // entrée d'un client ds le serveurC (=> sortie de la fileC)


		if (serveurA.getEtat() == LIBRE) { // entrée d'un client ds le serveur1 (=> sortie de la file1)
			if (!fileA.estVide()) {
				monsieurRecup = fileA.defiler();
				monsieurRecup.setDateEntreeServA(tps);
				serveurA.traiterClient(monsieurRecup);
				durTraitCourA = Sa;
			}
		}

		durTraitCourC--;
		durTraitCourB--;
		durInterCourA--;
		durTraitCourA--;

	}

	serveurA.libererClient();
	serveurB.libererClient();
	serveurC.libererClient();
	return sortie;
}

void entreeSB(TServeur serveur, TClient client, TFile file, int durTraitServeur, int durTraitCourant, int tps) {

	if (serveur.getEtat() == LIBRE) { // c'est le cas pour le premier client, à peine ds fileB, quil va dans ServeurB
		if (!file.estVide()) {
			client = file.defiler();
			client.setDateEntreeServB(tps);
			serveur.traiterClient(client);
			durTraitCourant = durTraitServeur;
		}
	}
}

void entreeSC(TServeur serveur, TClient client, TFile file, int durTraitServeur, int durTraitCourant, int tps) {

	if (serveur.getEtat() == LIBRE) { // c'est le cas pour le premier client, à peine ds fileC, quil va dans ServeurC
		if (!file.estVide()) {
			client = file.defiler();
			client.setDateEntreeServC(tps);
			serveur.traiterClient(client);
			durTraitCourant = durTraitServeur;
		}
	}
}

void sortieBouC(TServeur &serveur, TClient &monsieurRecup, TFile &fileA, int tps) {

	if (serveur.getEtat() != LIBRE) {
		TClient clientCour = serveur.voirClient();
		if (clientCour.prochaineMachine() != 'F') { // alors c'est A

			if (!fileA.estPleine()) { // (ré)insertion dans A
				monsieurRecup = serveur.libererClient();
				monsieurRecup.setDateEntreeFileA(tps);
				monsieurRecup.etapeInc();
				fileA.enfiler(monsieurRecup);
			}
			else {
				serveur.bloquerClient();
			}
		}
		else { // sortie définitive
			monsieurRecup = serveur.libererClient();
			monsieurRecup.etapeInc();
			monsieurRecup.setDateSortieServB(tps);
		}
	}
}

