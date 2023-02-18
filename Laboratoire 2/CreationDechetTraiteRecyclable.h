#pragma once
#include "OperationTraitement.h"
class CreationDechetTraiteRecyclable : public OperationTraitement
{
public:
	CreationDechetTraiteRecyclable(UsineTraitement* usineTraitement) :
		OperationTraitement(usineTraitement) { Compteur::ajouterConstructeur(); }

	CreationDechetTraiteRecyclable(const CreationDechetTraiteRecyclable& creationDTRecyclable) :
		OperationTraitement(creationDTRecyclable) { Compteur::ajouterConstructeurCopie(); }

	~CreationDechetTraiteRecyclable() { Compteur::ajouterDestructeur(); }

	bool effectuerOperation(Dechet* dechet);
};

