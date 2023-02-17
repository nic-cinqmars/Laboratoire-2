#pragma once
#include "Dechet.h"
class BouteilleBiere : public Dechet
{
public:
	BouteilleBiere() : Dechet(1, "Une bouteille de biere", 0, "inconnu", BOUTEILLE, 90, false, true) { Compteur::ajouterConstructeur(); }
	BouteilleBiere(const BouteilleBiere& bouteilleBiere) : Dechet(bouteilleBiere) { Compteur::ajouterConstructeurCopie(); }
	~BouteilleBiere() { Compteur::ajouterDestructeur(); }
};

