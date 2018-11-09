#include "stdafx.h"
#include "code.h"
#include "TFile.h"
#include "TClient.h"
#include "TServeur.h"
#include "TSortie.h"
#include "TEntree.h"
#include <iostream>

using namespace System;


TSortie simuler(int durSim, int durInter, int durTraitServeur1, int durTraitServeur2, int tailleFile1, int tailleFile2, bool afficherBlocage, bool refuserVieillePiece) {
	
	int idCli = 0;

	TServeur serveur1;
	TServeur serveur2;

	TFile file1(tailleFile1);
	TFile file2(tailleFile2);

	TSortie sortie;
	TEntree entree;
	TClient monsieurRecup;
	
	int durTraitCourS1=0;
	int durInterCourS1=0;

	int durTraitCourS2 = 0;
	int durInterCourS2 = 0;

	file1.viderFile();
	file2.viderFile();

	

	for (int tps = 0; tps < durSim; tps++) {



		if (durInterCourS1 <= 0) { // arrivée d'un client dans la file1
			if (!file1.estPleine()) { // il se passe qq chose seulement si F1 n'est pas pleine
				TClient client(tps);
				file1.enfiler(client);
				durInterCourS1 = durInter;
			}
		}

		if (durTraitCourS2 <= 0) { // sortie d'un client de S2
			if (serveur2.getEtat() == OCCUPE) {
				monsieurRecup = serveur2.libererClient();
				monsieurRecup.setDateSortieServ2(tps);
				sortie.ajouterClient(monsieurRecup);
			}
		}

		entreeS2(serveur2, monsieurRecup, file2, durTraitServeur2, durTraitCourS2, tps); // entrée d'un client ds le serveur2 (=> sortie de la file2)


		if (durTraitCourS1 <= 0){ // fin traitement dans serveur1 
			if (serveur1.getEtat() != LIBRE) { // arrivée d'un client dans la file2
				if (!file2.estPleine()) {
					monsieurRecup = serveur1.libererClient();
					monsieurRecup.setDateSortieServ1(tps);
					file2.enfiler(monsieurRecup);
					durInterCourS2 = durInter;
				}
				else { //file 2 pleine
					serveur1.bloquerClient();
					if (afficherBlocage) {
						sortie.ajouterClient(TClient(tps));
						return sortie;
					}
				}
			}
			entreeS2(serveur2, monsieurRecup, file2, durTraitServeur2, durTraitCourS2, tps); // c'est le cas pour le premier client, à peine sortie de S1, quil va dans S2
		}



		if (serveur1.getEtat() == LIBRE) { // entrée d'un client ds le serveur1 (=> sortie de la file1)
			while (refuserVieillePiece && !file1.estVide() && (tps - file1.top().getDateEntreeSys() > 30)) { //Si la piece a passé plus de 30u de temps dans la file
				monsieurRecup = file1.defiler();
				monsieurRecup.setDateEntreeServ1(-2);
				sortie.ajouterClient(monsieurRecup);
			}
			if (!file1.estVide()) {
				monsieurRecup = file1.defiler();
				monsieurRecup.setDateEntreeServ1(tps);
				serveur1.traiterClient(monsieurRecup);
				durTraitCourS1 = durTraitServeur1;
			}
		}

		durInterCourS2--;
		durTraitCourS2--;
		durInterCourS1--;
		durTraitCourS1--;

	}

	serveur1.libererClient();
	serveur2.libererClient();
	return sortie;
}

void entreeS2(TServeur &serveur, TClient &client, TFile &file, int durTraitServeur, int& durTraitCourant, int tps) {

	if (serveur.getEtat() == LIBRE) { // c'est le cas pour le premier client, à peine sortie de S1, quil va dans S2
		if (!file.estVide()) {
			client = file.defiler();
			client.setDateEntreeServ2(tps);
			serveur.traiterClient(client);
			durTraitCourant = durTraitServeur;
		}
	}
}