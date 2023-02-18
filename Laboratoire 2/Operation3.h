#pragma once
#include "Operation.h"
class Operation3 : public Operation
{
public:
	Operation3(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) :
		Operation(operationSuivanteTrue, operationSuivanteFalse) { Compteur::ajouterConstructeur(); }
	Operation3() : Operation() { Compteur::ajouterConstructeur(); }

	Operation3(const Operation3& operation3) : Operation(operation3) { Compteur::ajouterConstructeurCopie(); }

	~Operation3();

	bool effectuerOperation(Dechet* dechet);
};

