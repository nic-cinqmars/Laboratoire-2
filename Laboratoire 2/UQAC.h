#pragma once
#include "ChargementDechet.h"
class UQAC
{
public:
	UQAC() { Compteur::ajouterConstructeur(); }
	
	UQAC(const UQAC& uqac) { Compteur::ajouterConstructeurCopie(); }

	~UQAC() { Compteur::ajouterDestructeur(); }

	static ChargementDechet* getChargementDechets() { return new ChargementDechet(); }
};

