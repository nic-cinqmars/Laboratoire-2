#pragma once
#include "DechetTraite.h"
class DechetTraiteRecyclable : public DechetTraite
{
public:
	DechetTraiteRecyclable(Dechet* dechet) : DechetTraite(dechet) { Compteur::ajouterConstructeur(); }
	DechetTraiteRecyclable() : DechetTraite() { Compteur::ajouterConstructeur(); }

	DechetTraiteRecyclable(const DechetTraiteRecyclable& DTR) : DechetTraite(DTR) { Compteur::ajouterConstructeurCopie(); }

	~DechetTraiteRecyclable() { Compteur::ajouterDestructeur(); }
};