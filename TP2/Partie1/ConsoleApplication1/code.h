#pragma once
#include "TSortie.h"
#include "TServeur.h"
#include "TFile.h"

TSortie simuler(int, int, int, int, int, int, bool, bool);

void entreeS2(TServeur&, TClient&, TFile&, int, int&, int);
