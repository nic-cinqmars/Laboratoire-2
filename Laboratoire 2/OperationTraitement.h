#pragma once
#include "UsineTraitement.h"
#include "Operation.h"
class OperationTraitement : public Operation
{
	UsineTraitement *usineTraitement;
public:
	OperationTraitement(UsineTraitement* usineTraitement);

	OperationTraitement(const OperationTraitement& operationTraitement);

	~OperationTraitement() { Compteur::ajouterDestructeur(); }

	bool effectuerOperation(Dechet* dechet) { return true; }

protected:
	void creerDechetTraiteRecyclable(Dechet* dechet) { usineTraitement->creerDechetTraiteRecyclable(dechet); }
	void creerDechetTraiteNonRecyclable(Dechet* dechet) { usineTraitement->creerDechetTraiteNonRecyclable(dechet); }
	void creerDechetTraiteCompostable(Dechet* dechet) { usineTraitement->creerDechetTraiteCompostable(dechet); }
};

