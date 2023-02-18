#pragma once
#include "Operation.h"
class Operation2 : public Operation
{
public:
	Operation2(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) :
		Operation(operationSuivanteTrue, operationSuivanteFalse) { Compteur::ajouterConstructeur(); }
	Operation2() : Operation() { Compteur::ajouterConstructeur(); }

	Operation2(const Operation2& operation2) : Operation(operation2) { Compteur::ajouterConstructeurCopie(); }

	~Operation2();

	bool effectuerOperation(Dechet* dechet);
};

