#include "Depot.h"

Depot::Depot()
{
	Compteur::ajouterConstructeur();
	
	totalDTRecyclable = 0;
	totalDTNonRecyclable = 0;
	totalDTCompostable = 0;
}

Depot::Depot(const Depot& depot)
{
	Compteur::ajouterConstructeurCopie();

	totalDTRecyclable = depot.totalDTRecyclable;
	totalDTNonRecyclable = depot.totalDTNonRecyclable;
	totalDTCompostable = depot.totalDTCompostable;
}

void Depot::depotDechetsTraite(CamionBleu* camionBleu)
{
	totalDTRecyclable += camionBleu->viderCamion();
	delete camionBleu;
}

void Depot::depotDechetsTraite(CamionVert* camionVert)
{
	totalDTNonRecyclable += camionVert->viderCamion();
	delete camionVert;
}

void Depot::depotDechetsTraite(CamionBrun* camionBrun)
{
	totalDTCompostable += camionBrun->viderCamion();
	delete camionBrun;
}

std::ostream& operator<<(std::ostream& output, const Depot& depot)
{
	output << std::endl << "-- DEPOT --" << std::endl
		<< "Total des dechets traites recyclables : " << std::to_string(depot.totalDTRecyclable) << std::endl
		<< "Total des dechets traites non-recyclables : " << std::to_string(depot.totalDTNonRecyclable) << std::endl
		<< "Total des dechets traites compostables : " << std::to_string(depot.totalDTCompostable);
	return output;
}
