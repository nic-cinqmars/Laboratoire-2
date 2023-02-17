#pragma once
#include "Dechet.h"
class DechetMalConcu : public Dechet
{
public:
	DechetMalConcu() : Dechet(-10, "DM", 10, "rouge", INCONNU, 100, true, false) { Compteur::ajouterConstructeur(); }
	DechetMalConcu(const DechetMalConcu& dMC) : Dechet(dMC) { Compteur::ajouterConstructeurCopie(); }
	~DechetMalConcu() { Compteur::ajouterDestructeur(); }
};

