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
	int durInterCourB = 0;

	int durTraitCourC = 0;
	int durInterCourC = 0;

	fileA.viderFile();
	fileB.viderFile();
	fileC.viderFile();

	

	for (int tps = 0; tps < durSim; tps++) {



		if (durInterCourA <= 0) { // arrivée d'un client dans la fileA
			if (!fileA.estPleine()) { // il se passe qq chose seulement si FA n'est pas pleine
				TClient client(tps);
				fileA.enfiler(client);
				durInterCourA = durInter;
			}
		}

		if (durTraitCourB <= 0) { // sortie d'un client de B
			if (serveurB.getEtat() == OCCUPE) {
				monsieurRecup = serveurB.libererClient();
				monsieurRecup.setDateSortieServB(tps);
				sortie.ajouterClient(monsieurRecup);
			}
		}

		entreeS2(serveurB, monsieurRecup, fileB, Sb, durTraitCourB, tps); // entrée d'un client ds le serveurB (=> sortie de la fileB)


		if (durTraitCourA <= 0){ // fin traitement dans serveur1 
			if (serveurA.getEtat() != LIBRE) { // arrivée d'un client dans la file2
				if (!fileB.estPleine()) {
					monsieurRecup = serveurA.libererClient();
					monsieurRecup.setDateSortieServA(tps);
					fileB.enfiler(monsieurRecup);
					durInterCourB = durInter;
				}
				else { //file B pleine
					serveurA.bloquerClient();
				}
			}
			entreeS2(serveurB, monsieurRecup, fileB, Sb, durTraitCourB, tps); // c'est le cas pour le premier client, à peine sortie de S1, quil va dans S2
		}



		if (serveurA.getEtat() == LIBRE) { // entrée d'un client ds le serveur1 (=> sortie de la file1)
			if (!fileA.estVide()) {
				monsieurRecup = fileA.defiler();
				monsieurRecup.setDateEntreeServA(tps);
				serveurA.traiterClient(monsieurRecup);
				durTraitCourA = Sa;
			}
		}
		durInterCourC--;
		durTraitCourC--;
		durInterCourB--;
		durTraitCourB--;
		durInterCourA--;
		durTraitCourA--;

	}

	serveurA.libererClient();
	serveurB.libererClient();
	return sortie;
}

void entreeS2(TServeur serveur, TClient client, TFile file, int durTraitServeur, int durTraitCourant, int tps) {

	if (serveur.getEtat() == LIBRE) { // c'est le cas pour le premier client, à peine sortie de S1, quil va dans S2
		if (!file.estVide()) {
			client = file.defiler();
			client.setDateEntreeServB(tps);
			serveur.traiterClient(client);
			durTraitCourant = durTraitServeur;
		}
	}
}