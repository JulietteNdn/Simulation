#pragma once
#include "TSortie.h"
#include "TServeur.h"
#include "TClient.h"
#include "TFile.h"
#include "TGammeOp.h"
#include "TSortie.h"
#include "TEntree.h"

TSortie simuler(int, int, int, int, int, float, float);

void entreeSB(TServeur, TClient, TFile, int, int, int);
void entreeSC(TServeur, TClient, TFile, int, int, int);


void sortieBouC(TServeur &serveur, TClient &monsieurRecup, TFile &fileA, int tps);
