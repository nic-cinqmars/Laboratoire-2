#pragma once
#include "Dechet.h"
class Operation
{
	Operation* operationSuivanteTrue;
	Operation* operationSuivanteFalse;
	
public:
	Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	Operation();

	Operation(const Operation& operation);

	virtual ~Operation() { Compteur::ajouterDestructeur(); }

	virtual bool effectuerOperation(Dechet* dechet) { return true; }

	Operation* getOperationSuivante(bool choix) const;
};

