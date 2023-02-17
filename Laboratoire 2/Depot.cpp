#include "Depot.h"

Depot::Depot()
{
	Compteur::ajouterConstructeur();
}

Depot::Depot(const Depot& depot)
{
	Compteur::ajouterConstructeurCopie();
}

std::ostream& operator<<(std::ostream& output, const Depot& depot)
{
	output << std::endl << "-- DEPOT --" << std::endl
		<< "Total des d�chets trait�s recyclables : " << depot.totalDTRecyclable << std::endl
		<< "Total des d�chets trait�s non-recyclables : " << depot.totalDTNonRecyclable << std::endl
		<< "Total des d�chets trait�s compostables : " << depot.totalDTCompostable;
	return output;
}
