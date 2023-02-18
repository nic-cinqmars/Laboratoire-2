#include "SequenceOperations.h"

SequenceOperations::SequenceOperations()
{
	Compteur::ajouterConstructeur();

	listeOperations = new std::list<Operation*>;
	operationDemarrage = nullptr;
}

SequenceOperations::SequenceOperations(const SequenceOperations& sequenceOperations)
{
	Compteur::ajouterConstructeurCopie();

	listeOperations = new std::list<Operation*>;

	if (!sequenceOperations.listeOperations->empty())
	{
		std::list<Operation*>* tempList = sequenceOperations.listeOperations;
		while (!tempList->empty())
		{
			listeOperations->push_back(new Operation(*tempList->front()));
			tempList->pop_front();
		}
	}

	operationDemarrage = new Operation(*sequenceOperations.operationDemarrage);
}

SequenceOperations::~SequenceOperations()
{
	Compteur::ajouterDestructeur();

	while (!listeOperations->empty())
	{
		delete listeOperations->front();
		listeOperations->pop_front();
	}

	delete listeOperations;
}

SequenceOperations* SequenceOperations::ajouterOperation(Operation* operation)
{
	listeOperations->push_back(operation);
	return this;
}

void SequenceOperations::definirOperationDemarrage(Operation* operation)
{
	if (operationDemarrage)
	{
		delete operationDemarrage;
	}
	operationDemarrage = operation;
}
