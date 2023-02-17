#pragma once
#include "DechetTraite.h"
class DechetTraiteNonRecyclable : public DechetTraite
{
public:
	DechetTraiteNonRecyclable(Dechet* dechet) : DechetTraite(dechet) { Compteur::ajouterConstructeur(); }
	DechetTraiteNonRecyclable() : DechetTraite() { Compteur::ajouterConstructeur(); }
	DechetTraiteNonRecyclable(const DechetTraiteNonRecyclable& DTNR) : DechetTraite(DTNR) { Compteur::ajouterConstructeurCopie(); }
	~DechetTraiteNonRecyclable() { Compteur::ajouterDestructeur(); }
};

