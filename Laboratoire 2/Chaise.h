#pragma once
#include "Dechet.h"
class Chaise : public Dechet
{
public:
	Chaise() : Dechet(50, "Une chaise", 0, "inconnu", BOIS, 80, false, true) { Compteur::ajouterConstructeur(); }
	Chaise(const Chaise& chaise) : Dechet(chaise) { Compteur::ajouterConstructeurCopie(); }
	~Chaise() { Compteur::ajouterDestructeur(); }
};

