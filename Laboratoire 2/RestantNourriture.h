#pragma once
#include "Dechet.h"
class RestantNourriture : public Dechet
{
public:
	RestantNourriture() : Dechet(1, "Un restant de nourriture", 0, "brun", NOURITURE, 40, false, false) { Compteur::ajouterConstructeur(); }
	RestantNourriture(const RestantNourriture& restantNourriture) : Dechet(restantNourriture) { Compteur::ajouterConstructeurCopie(); }
	~RestantNourriture() { Compteur::ajouterDestructeur(); }
};

