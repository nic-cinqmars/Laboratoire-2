#pragma once
#include "DechetTraite.h"
#include <stack>
class Camion
{
	int maxCapacite;
	int capacite;
	std::stack<DechetTraite*> pileDechets;

public:
	Camion(int maxCapacite);
	Camion();
	Camion(const Camion& camion);

	~Camion();

	bool ajouterDechet(DechetTraite* dechetTraite);

	int viderCamion();
};

