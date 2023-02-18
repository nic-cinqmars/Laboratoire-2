#pragma once
#include "OperationTraitement.h"
class CreationDechetTraiteCompostable : public OperationTraitement
{
public:
	CreationDechetTraiteCompostable(UsineTraitement* usineTraitement) :
		OperationTraitement(usineTraitement) { Compteur::ajouterConstructeur(); }

	CreationDechetTraiteCompostable(const CreationDechetTraiteCompostable& creationDTCompostable) :
		OperationTraitement(creationDTCompostable) { Compteur::ajouterConstructeurCopie(); }

	~CreationDechetTraiteCompostable() { Compteur::ajouterDestructeur(); }

	bool effectuerOperation(Dechet* dechet);
};

