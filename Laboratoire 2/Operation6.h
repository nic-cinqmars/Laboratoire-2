#pragma once
#include "Operation.h"
class Operation6 : public Operation
{
public:
	Operation6(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) :
		Operation(operationSuivanteTrue, operationSuivanteFalse) { Compteur::ajouterConstructeur(); }
	Operation6() : Operation() { Compteur::ajouterConstructeur(); }

	Operation6(const Operation6& operation6) : Operation(operation6) { Compteur::ajouterConstructeurCopie(); }

	~Operation6();

	bool effectuerOperation(Dechet* dechet);
};

