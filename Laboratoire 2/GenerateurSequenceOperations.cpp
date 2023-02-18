#include "GenerateurSequenceOperations.h"

SequenceOperations* GenerateurSequenceOperations::genererSequence0(UsineTraitement* usineTraitement)
{
	CreationDechetTraiteRecyclable* creationDTRecyclable = new CreationDechetTraiteRecyclable(usineTraitement);
	CreationDechetTraiteNonRecyclable* creationDTNonRecyclable = new CreationDechetTraiteNonRecyclable(usineTraitement);
	CreationDechetTraiteCompostable* creationDTCompostable = new CreationDechetTraiteCompostable(usineTraitement);

	Operation6* operation6 = new Operation6(creationDTRecyclable, creationDTNonRecyclable);
	Operation5* operation5 = new Operation5(creationDTCompostable, creationDTNonRecyclable);
	Operation4* operation4 = new Operation4(creationDTCompostable, operation5);
	Operation3* operation3 = new Operation3(creationDTRecyclable, operation4);
	Operation2* operation2 = new Operation2(operation6, operation3);
	Operation1* operation1 = new Operation1(creationDTNonRecyclable, operation2);

	SequenceOperations* sequenceOperations = new SequenceOperations();
	sequenceOperations->ajouterOperation(creationDTRecyclable)
		->ajouterOperation(creationDTNonRecyclable)
		->ajouterOperation(creationDTCompostable)
		->ajouterOperation(operation1)
		->ajouterOperation(operation2)
		->ajouterOperation(operation3)
		->ajouterOperation(operation4)
		->ajouterOperation(operation5)
		->ajouterOperation(operation6)
		->definirOperationDemarrage(operation1);
	return sequenceOperations;
}

SequenceOperations* GenerateurSequenceOperations::genererSequence1(UsineTraitement* usineTraitement)
{
	return nullptr;
}

SequenceOperations* GenerateurSequenceOperations::genererSequence(int id, UsineTraitement* usineTraitement)
{
	if (id == 1)
	{
		return genererSequence1(usineTraitement);
	}
	return genererSequence0(usineTraitement);
}
