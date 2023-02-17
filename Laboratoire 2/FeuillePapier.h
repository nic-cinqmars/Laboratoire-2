#pragma once
#include "Dechet.h"
class FeuillePapier : public Dechet
{
public:
	FeuillePapier() : Dechet(1, "Une feuille de papier", 0, "inconnu", PAPIER, 100, false, false) { Compteur::ajouterConstructeur(); }
	FeuillePapier(const FeuillePapier& feuillePapier) : Dechet(feuillePapier) { Compteur::ajouterConstructeurCopie(); }
	~FeuillePapier() { Compteur::ajouterDestructeur(); }
};

