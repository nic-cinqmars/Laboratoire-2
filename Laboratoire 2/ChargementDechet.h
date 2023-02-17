#pragma once
#include "Dechet.h"
#include "BoiteCarton.h"
#include "BouteilleBiere.h"
#include "Chaise.h"
#include "DechetMalConcu.h"
#include "FeuillePapier.h"
#include "PlanteVerte.h"
#include "QuelqueChose.h"
#include "RestantNourriture.h"
#include "SacChips.h"
#include "VerreCafe.h"
#include <list>
class ChargementDechet
{
	std::list<Dechet*>* listeDechets;

public:
	ChargementDechet(std::list<Dechet*>* listeDechets);
	ChargementDechet();
	~ChargementDechet();
};