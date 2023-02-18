#pragma once
#include "OperationTraitement.h"
class CreationDechetTraiteNonRecyclable : public OperationTraitement
{
public:
	CreationDechetTraiteNonRecyclable(UsineTraitement* usineTraitement) :
		OperationTraitement(usineTraitement) { Compteur::ajouterConstructeur(); }

	CreationDechetTraiteNonRecyclable(const CreationDechetTraiteNonRecyclable& creationDTNonRecyclable) :
		OperationTraitement(creationDTNonRecyclable) { Compteur::ajouterConstructeurCopie(); }

	~CreationDechetTraiteNonRecyclable() { Compteur::ajouterDestructeur(); }

	bool effectuerOperation(Dechet* dechet);
};

