#pragma once
#include "TSortie.h"
#include "TServeur.h"
#include "TAssembleur.h"
#include "TClient.h"
#include "TFile.h"
#include "TSortie.h"
#include "TEntree.h"

TSortie simuler(int, int, int, int, int, int);

void entreeServeur(TFile &, TServeur &, int, TClient &, int&, int, int);

void entreeFile(TFile &, int, int &, int, int);