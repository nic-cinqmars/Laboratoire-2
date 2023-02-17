#pragma once
#include "Dechet.h"
class QuelqueChose : public Dechet
{
public:
	QuelqueChose() : Dechet(0, "Quelque chose") { Compteur::ajouterConstructeur(); }
	QuelqueChose(const QuelqueChose& quelqueChose) : Dechet(quelqueChose) { Compteur::ajouterConstructeurCopie(); }
	~QuelqueChose() { Compteur::ajouterDestructeur(); }
};

