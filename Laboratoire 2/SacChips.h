#pragma once
#include "Dechet.h"
class SacChips : public Dechet
{
public:
	SacChips() : Dechet(1, "Un sac de chips", 6, "inconnu", PLASTIQUE, 94, false, false) { Compteur::ajouterConstructeur(); }
	SacChips(const SacChips& sacChips) : Dechet(sacChips) { Compteur::ajouterConstructeurCopie(); }
	~SacChips() { Compteur::ajouterDestructeur(); }
};

