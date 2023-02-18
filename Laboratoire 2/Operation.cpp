#include "Operation.h"

Operation::Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse)
{
	Compteur::ajouterConstructeur();

	this->operationSuivanteTrue = operationSuivanteTrue;
	this->operationSuivanteFalse = operationSuivanteFalse;
}

Operation::Operation()
{
	Compteur::ajouterConstructeur();

	operationSuivanteTrue = nullptr;
	operationSuivanteFalse = nullptr;
}

Operation::Operation(const Operation& operation)
{
	Compteur::ajouterConstructeurCopie();

	operationSuivanteTrue = new Operation(*operation.operationSuivanteTrue);
	operationSuivanteFalse = new Operation(*operation.operationSuivanteFalse);
}

Operation* Operation::getOperationSuivante(bool choix) const
{
	if (choix)
	{
		return operationSuivanteTrue;
	}
	return operationSuivanteFalse;
}
