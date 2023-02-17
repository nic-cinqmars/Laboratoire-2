#pragma once
#include "Dechet.h"
class PlanteVerte : public Dechet
{
public:
	PlanteVerte() : Dechet(1, "Une plante verte", 0, "vert", VEGETAL, 100, false, false) { Compteur::ajouterConstructeur(); }
	PlanteVerte(const PlanteVerte& planteVerte) : Dechet(planteVerte) { Compteur::ajouterConstructeurCopie(); }
	~PlanteVerte() { Compteur::ajouterDestructeur(); }
};

