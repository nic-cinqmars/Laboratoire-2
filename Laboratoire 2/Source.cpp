#include <iostream>
#include "UQAC.h"
#include "ChargementDechet.h"
#include "UsineTraitement.h"
#include "GenerateurSequenceOperations.h"

using namespace std;

void faireTraitement();
void afficherInformation();

int main()
{
	faireTraitement();
	afficherInformation();

	return 0;
}

void faireTraitement()
{
	ChargementDechet* chargement = UQAC::getChargementDechets();

	UsineTraitement* usineTraitement = new UsineTraitement();
	GenerateurSequenceOperations gso;

	usineTraitement->chargerOperations(gso.genererSequence(0, usineTraitement));
	usineTraitement->demarrerTraitements(chargement);

	delete usineTraitement;
}

void afficherInformation()
{
	cout << endl << endl;
	cout << endl << "-------------------------------" << endl
		<< " Nombre de constructeurs : " << Compteur::getNbConstructeur() << endl
		<< " Nombre de constructeurs par copie : " << Compteur::getNbConstructeurCopie() << endl
		<< " Nombre de destructeurs : " << Compteur::getNbDestructeurs() << endl;
	cin.get();
}