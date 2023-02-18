#pragma once
#include "Operation.h"
class Operation4 : public Operation
{
public:
	Operation4(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) :
		Operation(operationSuivanteTrue, operationSuivanteFalse) { Compteur::ajouterConstructeur(); }
	Operation4() : Operation() { Compteur::ajouterConstructeur(); }

	Operation4(const Operation4& operation4) : Operation(operation4) { Compteur::ajouterConstructeurCopie(); }

	~Operation4();

	bool effectuerOperation(Dechet* dechet);
};

