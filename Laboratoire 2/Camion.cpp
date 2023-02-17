#include "Camion.h"

Camion::Camion(int maxCapacite)
{
	Compteur::ajouterConstructeur();

	capacite = 0;
	this->maxCapacite = maxCapacite;
}

Camion::Camion()
{
	Compteur::ajouterConstructeur();

	capacite = 0;
	maxCapacite = 80;
}

Camion::Camion(const Camion& camion)
{
	Compteur::ajouterConstructeurCopie();

	capacite = camion.capacite;
	maxCapacite = camion.maxCapacite;
	if (!camion.pileDechets.empty())
	{
		std::stack<DechetTraite*> tempStack = camion.pileDechets;
		while (!tempStack.empty())
		{
			pileDechets.push(tempStack.top());
			tempStack.pop();
		}
		while (pileDechets.empty())
		{
			tempStack.push(new DechetTraite(*tempStack.top()));
			pileDechets.pop();
		}
		pileDechets = tempStack;
	}
}

Camion::~Camion()
{
	Compteur::ajouterDestructeur();

	while (!pileDechets.empty())
	{
		delete pileDechets.top();
		pileDechets.pop();
	}
}

bool Camion::ajouterDechet(DechetTraite* dechetTraite)
{
	int poidsDechet = dechetTraite->getDechet()->getPoids();
	if (capacite + poidsDechet <= maxCapacite)
	{
		pileDechets.push(dechetTraite);
		capacite += poidsDechet;
		return true;
	}
	return false;
}

int Camion::viderCamion()
{
	int poids = 0;
	while (!pileDechets.empty())
	{
		poids += pileDechets.top()->getDechet()->getPoids();
		delete pileDechets.top();
		pileDechets.pop();
	}
	capacite = 0;
	return poids;
}
