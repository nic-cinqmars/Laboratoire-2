#pragma once
#include "Camion.h"
class CamionVert : public Camion
{
public:
	CamionVert() : Camion(200) { Compteur::ajouterConstructeur(); }
	CamionVert(const CamionVert& camionVert) : Camion(camionVert) { Compteur::ajouterConstructeurCopie(); }
	~CamionVert() { Compteur::ajouterDestructeur(); }
};

