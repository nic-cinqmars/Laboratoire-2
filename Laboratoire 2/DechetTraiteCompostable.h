#pragma once
#include "DechetTraite.h"
class DechetTraiteCompostable : public DechetTraite
{
public:
	DechetTraiteCompostable(Dechet* dechet) : DechetTraite(dechet) { Compteur::ajouterConstructeur(); }
	DechetTraiteCompostable() : DechetTraite() { Compteur::ajouterConstructeur(); }

	DechetTraiteCompostable(const DechetTraiteCompostable& DTC) : DechetTraite(DTC) { Compteur::ajouterConstructeurCopie(); }

	~DechetTraiteCompostable() { Compteur::ajouterDestructeur(); }
};