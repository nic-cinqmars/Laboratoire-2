#include "OperationTraitement.h"

OperationTraitement::OperationTraitement(UsineTraitement* usineTraitement) : Operation()
{
	Compteur::ajouterConstructeur();

	this->usineTraitement = usineTraitement;
}

OperationTraitement::OperationTraitement(const OperationTraitement& operationTraitement) : Operation (operationTraitement)
{
	Compteur::ajouterConstructeurCopie();

	usineTraitement = new UsineTraitement(*operationTraitement.usineTraitement);
}
