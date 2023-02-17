#pragma once
#include "Camion.h"
class CamionBleu : public Camion
{
public:
	CamionBleu() : Camion(100) { Compteur::ajouterConstructeur(); }
	CamionBleu(const CamionBleu& camionBleu) : Camion(camionBleu) { Compteur::ajouterConstructeurCopie(); }
	~CamionBleu() { Compteur::ajouterDestructeur(); }
};

