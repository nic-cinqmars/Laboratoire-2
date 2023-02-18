#pragma once
#include "Operation.h"
class Operation5 : public Operation
{
public:
	Operation5(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) :
		Operation(operationSuivanteTrue, operationSuivanteFalse) { Compteur::ajouterConstructeur(); }
	Operation5() : Operation() { Compteur::ajouterConstructeur(); }

	Operation5(const Operation5& operation5) : Operation(operation5) { Compteur::ajouterConstructeurCopie(); }

	~Operation5();

	bool effectuerOperation(Dechet* dechet);
};

