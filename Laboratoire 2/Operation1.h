#pragma once
#include "Operation.h"
class Operation1 : public Operation
{
public:
	Operation1(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) : 
		Operation(operationSuivanteTrue, operationSuivanteFalse) { Compteur::ajouterConstructeur(); }
	Operation1() : Operation() { Compteur::ajouterConstructeur(); }

	Operation1(const Operation1& operation1) : Operation(operation1) { Compteur::ajouterConstructeurCopie(); }

	~Operation1();

	bool effectuerOperation(Dechet* dechet);
};

