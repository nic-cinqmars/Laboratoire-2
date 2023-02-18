#pragma once
#include <list>
#include "Operation.h"
class SequenceOperations
{
	std::list<Operation*>* listeOperations;
	Operation* operationDemarrage;

public:
	SequenceOperations();

	SequenceOperations(const SequenceOperations& sequenceOperations);

	~SequenceOperations();

	SequenceOperations* ajouterOperation(Operation* operation);

	void definirOperationDemarrage(Operation* operation);

	Operation* getOperationDemarrage() const { return operationDemarrage; }
};

