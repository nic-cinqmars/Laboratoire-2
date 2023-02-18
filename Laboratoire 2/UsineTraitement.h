#pragma once
#include <string>
#include <iostream>
#include "ChargementDechet.h"
#include "SequenceOperations.h"
#include "Depot.h"
#include "Dechet.h"
#include "DechetTraiteRecyclable.h"
#include "DechetTraiteNonRecyclable.h"
#include "DechetTraiteCompostable.h"
class UsineTraitement
{
	class Log
	{
	public:
		static void i(std::string info) { std::cout << info << std::endl; }
		static void i(const Dechet& dechet) { std::cout << dechet << std::endl; }
		static void i(const Depot& depot) { std::cout << depot << std::endl; }
	};

	SequenceOperations* sequenceOperations;

	Depot depot;
	CamionBleu* camionBleu;
	CamionVert* camionVert;
	CamionBrun* camionBrun;

	void preOperation() const { Log::i("PREOPERATION"); }
	void postOperation() const { Log::i("POSTOPERATION"); }

	void creerDechetTraiteRecyclable(Dechet* dechet);
	void creerDechetTraiteNonRecyclable(Dechet* dechet);
	void creerDechetTraiteCompostable(Dechet* dechet);
	void traiterDechet(Dechet* dechet);

public:
	friend class OperationTraitement;

	UsineTraitement();

	UsineTraitement(const UsineTraitement& usineTraitement);

	~UsineTraitement();

	void chargerOperations(SequenceOperations* sequenceOperations);
	void demarrerTraitements(ChargementDechet* chargement);
};

