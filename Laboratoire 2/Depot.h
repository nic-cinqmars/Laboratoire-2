#pragma once
#include <string>
#include "Camion.h"
#include "CamionBleu.h"
#include "CamionVert.h"
#include "CamionBrun.h"

class Depot
{
	int totalDTRecyclable;
	int totalDTNonRecyclable;
	int totalDTCompostable;

public:
	Depot();
	Depot(const Depot& depot);
	~Depot() { Compteur::ajouterDestructeur(); }

	CamionBleu* getCamionBleu() const { return new CamionBleu(); }
	CamionVert* getCamionVert() const { return new CamionVert(); }
	CamionBrun* getCamionBrun() const { return new CamionBrun(); }

	void depotDechetsTraite(CamionBleu* camionBleu);
	void depotDechetsTraite(CamionVert* camionVert);
	void depotDechetsTraite(CamionBrun* camionBrun);

	friend std::ostream& operator<<(std::ostream& output, const Depot& depot);
};

