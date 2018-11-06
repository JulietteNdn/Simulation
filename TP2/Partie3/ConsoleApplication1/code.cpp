#include "stdafx.h"
#include "code.h"

using namespace System;


TSortie simuler(int durSim, int D_E1, int D_E2, int D_T1, int D_T2, int D_ASS) {
	
	TServeur serveur1;
	TServeur serveur2;
	TAssembleur assembleur;

	TFile file1;
	TFile file2;

	TSortie sortie;
	TEntree entree;
	TClient monsieurRecup1, monsieurRecup2;
	
	int durTraitCour1 = 0;
	int durInterCour1 = 0;

	int durTraitCour2 = 0;
	int durInterCour2 = 0;

	int durTraitAss = 0;


	file1.viderFile();
	file2.viderFile();
	

	for (int tps = 0; tps < durSim; tps++) {

		/* Entrées dans les files */
		entreeFile(file1, 1, durInterCour1, D_E1, tps);
		entreeFile(file2, 2, durInterCour2, D_E2, tps); // Même scénario pour l'entrée file2

		/* Sortie de l'assembleur donc du système */
		if (durTraitAss <= 0 && assembleur.getEtat() != LIBRE) {
			monsieurRecup1 = assembleur.libererClient();
			monsieurRecup2 = assembleur.libererClient2();

			monsieurRecup1.setDateSortieAss(tps);
			monsieurRecup2.setDateSortieAss(tps);

			sortie.ajouterClients(monsieurRecup1, monsieurRecup2);
		}

		/* Sortie d'un client dans chaque serveur <=> Entrée de deux clients dans l'assembleur */
		if (durTraitCour1 <= 0 && serveur1.getEtat() != LIBRE) { // sortie d'un client du serveur1 ?..
			serveur1.bloquerClient();
			if (durTraitCour2 <= 0 && serveur2.getEtat() != LIBRE) { // possible si le client du serveur2 peut aussi sortir...
				serveur2.bloquerClient();

				if (assembleur.getEtat() == LIBRE) { // et si l'assembleur est libre
					monsieurRecup1 = serveur1.libererClient();
					monsieurRecup2 = serveur2.libererClient();

					monsieurRecup1.setDateEntreeAss(tps);
					monsieurRecup2.setDateEntreeAss(tps);

					assembleur.traiterClients(monsieurRecup1, monsieurRecup2); //entree dans l'assembleur
					durTraitAss = D_ASS;
				}
			}
				
		} else if (durTraitCour2 <= 0 && serveur2.getEtat() != LIBRE) 
			serveur2.bloquerClient();

		/* Entree d'un client dans les serveurs */
		entreeServeur(file1, serveur1, 1, monsieurRecup1, durTraitCour1, D_T1, tps);
		entreeServeur(file2, serveur2, 2, monsieurRecup2, durTraitCour2, D_T2, tps);
 
		/* Entrées dans les files */
		entreeFile(file1, 1, durInterCour1, D_E1, tps);
		entreeFile(file2, 2, durInterCour2, D_E2, tps); // Même scénario pour l'entrée file2

		durInterCour1--;
		durTraitCour1--;

		durInterCour2--;
		durTraitCour2--;

		durTraitAss--;

	}

	serveur1.libererClient();
	serveur2.libererClient();
	assembleur.libererClient();
	assembleur.libererClient2();

	return sortie;
}



void entreeFile(TFile & file, int numFile, int & durInterCourant, int durInterCourChoisi, int tps) {
	if (durInterCourant <= 0) { // arrivée d'un client dans la file
		if (!file.estPleine()) { // il se passe qq chose seulement si la file n'est pas pleine
			TClient client(tps);
			client.setDateEntreeFile(numFile, tps);
			file.enfiler(client);
			durInterCourant = durInterCourChoisi;
		}
	}
}

void entreeServeur(TFile & file, TServeur & serveur, int numServeur, TClient & client, int & durTraitCourant, int durTraitServeur, int tps) {
	if (serveur.getEtat() == LIBRE) {
		if (!file.estVide()) {
			client = file.defiler();
			client.setDateEntreeServ(numServeur, tps);
			serveur.traiterClient(client);
			durTraitCourant = durTraitServeur;
		}
	}
}