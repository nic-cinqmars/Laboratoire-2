#pragma once
#include "UsineTraitement.h"
#include "SequenceOperations.h"
#include "Operation1.h"
#include "Operation2.h"
#include "Operation3.h"
#include "Operation4.h"
#include "Operation5.h"
#include "Operation6.h"
#include "CreationDechetTraiteRecyclable.h"
#include "CreationDechetTraiteNonRecyclable.h"
#include "CreationDechetTraiteCompostable.h"

class GenerateurSequenceOperations
{
	SequenceOperations* genererSequence0(UsineTraitement* usineTraitement);
	SequenceOperations* genererSequence1(UsineTraitement* usineTraitement);

public:
	GenerateurSequenceOperations() { Compteur::ajouterConstructeur(); }

	GenerateurSequenceOperations(const GenerateurSequenceOperations& generateurSequenceOperations) { Compteur::ajouterConstructeurCopie(); }

	~GenerateurSequenceOperations() { Compteur::ajouterDestructeur(); }

	SequenceOperations* genererSequence(int id, UsineTraitement* usineTraitement);
};

