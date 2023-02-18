#include "ChargementDechet.h"

ChargementDechet::ChargementDechet(std::list<Dechet*>* listeDechets)
{
	Compteur::ajouterConstructeur();

	this->listeDechets = listeDechets;
}

ChargementDechet::ChargementDechet()
{
	Compteur::ajouterConstructeur();

	listeDechets = new std::list<Dechet*>;
	for (int i = 0; i < 5; i++)
	{
		listeDechets->push_back(new BoiteCarton());
		listeDechets->push_back(new BouteilleBiere());
		listeDechets->push_back(new Chaise());
		listeDechets->push_back(new DechetMalConcu());
		listeDechets->push_back(new FeuillePapier());
		listeDechets->push_back(new PlanteVerte());
		listeDechets->push_back(new QuelqueChose());
		listeDechets->push_back(new RestantNourriture());
		listeDechets->push_back(new SacChips());
		listeDechets->push_back(new VerreCafe());
	}
}

ChargementDechet::~ChargementDechet()
{
	Compteur::ajouterDestructeur();

	while(!listeDechets->empty())
	{
		delete listeDechets->front();
		listeDechets->pop_front();
	}
	delete listeDechets;
}

Dechet* ChargementDechet::getDechet()
{
	if (listeDechets->empty())
	{
		return nullptr;
	}
	Dechet* dechet = listeDechets->front();
	listeDechets->pop_front();
	return dechet;
}
