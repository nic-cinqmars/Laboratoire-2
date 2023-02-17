#pragma once
#include "Dechet.h"
class BoiteCarton : public Dechet
{
public:
	BoiteCarton() : Dechet(1, "Une boite de carton", 0, "brun", CARTON, 87, false, false) { Compteur::ajouterConstructeur(); }
	BoiteCarton(const BoiteCarton& boiteCarton) : Dechet(boiteCarton) { Compteur::ajouterConstructeurCopie(); }
	~BoiteCarton() { Compteur::ajouterDestructeur(); }
};