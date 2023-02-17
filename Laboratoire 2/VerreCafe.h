#pragma once
#include "Dechet.h"
class VerreCafe : public Dechet
{
public:
	VerreCafe() : Dechet(1, "Un verre a cafe", 0, "inconnu", STYROFOAM, 100, true, false) { Compteur::ajouterConstructeur(); }
	VerreCafe(const VerreCafe& verreCafe) : Dechet(verreCafe) { Compteur::ajouterConstructeurCopie(); }
	~VerreCafe() { Compteur::ajouterDestructeur(); }
};

