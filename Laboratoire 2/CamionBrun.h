#pragma once
#include "Camion.h"
class CamionBrun : public Camion
{
public:
	CamionBrun() : Camion(80) { Compteur::ajouterConstructeur(); }
	CamionBrun(const CamionBrun& camionBrun) : Camion(camionBrun) { Compteur::ajouterConstructeurCopie(); }
	~CamionBrun() { Compteur::ajouterDestructeur(); }
};

