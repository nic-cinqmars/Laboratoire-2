#include "DechetTraite.h"

DechetTraite::DechetTraite(Dechet* dechet)
{
	Compteur::ajouterConstructeur();
	this->dechet = dechet;
}

DechetTraite::DechetTraite()
{
	Compteur::ajouterConstructeur();
	dechet = nullptr;
}

DechetTraite::DechetTraite(const DechetTraite& dechetTraite)
{
	Compteur::ajouterConstructeurCopie();
	if (dechetTraite.dechet)
	{
		dechet = new Dechet(*dechetTraite.dechet);
	}
	else
	{
		dechet = nullptr;
	}
}

DechetTraite::~DechetTraite()
{
	Compteur::ajouterDestructeur();

	delete dechet;
}