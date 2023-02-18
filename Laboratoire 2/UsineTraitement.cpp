#include "UsineTraitement.h"

UsineTraitement::UsineTraitement()
{
	Compteur::ajouterConstructeur();

	camionBleu = depot.getCamionBleu();
	camionVert = depot.getCamionVert();
	camionBrun = depot.getCamionBrun();

	sequenceOperations = nullptr;
}

UsineTraitement::UsineTraitement(const UsineTraitement& usineTraitement)
{
	Compteur::ajouterConstructeurCopie();

	camionBleu = new CamionBleu(*usineTraitement.camionBleu);
	camionVert = new CamionVert(*usineTraitement.camionVert);
	camionBrun = new CamionBrun(*usineTraitement.camionBrun);

	sequenceOperations = new SequenceOperations(*usineTraitement.sequenceOperations);
}

UsineTraitement::~UsineTraitement()
{
	Compteur::ajouterDestructeur();

	delete camionBleu;
	delete camionVert;
	delete camionBrun;
	delete sequenceOperations;
}

void UsineTraitement::chargerOperations(SequenceOperations* sequenceOperations)
{
	this->sequenceOperations = sequenceOperations;
}

void UsineTraitement::demarrerTraitements(ChargementDechet* chargement)
{
	while (Dechet* dechet = chargement->getDechet())
	{
		Log::i(*dechet);
		traiterDechet(dechet);
	}

	delete chargement;

	Log::i(depot);
}

void UsineTraitement::creerDechetTraiteRecyclable(Dechet* dechet)
{
	DechetTraiteRecyclable* dTRecyclable = new DechetTraiteRecyclable(dechet);
	if (!camionBleu->ajouterDechet(dTRecyclable))
	{
		depot.depotDechetsTraite(camionBleu);
		camionBleu = depot.getCamionBleu();
		camionBleu->ajouterDechet(dTRecyclable);
	}
	Log::i("AJOUT DTR: " + std::to_string(dechet->getID()));
}

void UsineTraitement::creerDechetTraiteNonRecyclable(Dechet* dechet)
{
	DechetTraiteNonRecyclable* dTNonRecyclable = new DechetTraiteNonRecyclable(dechet);
	if (!camionVert->ajouterDechet(dTNonRecyclable))
	{
		depot.depotDechetsTraite(camionVert);
		camionVert = depot.getCamionVert();
		camionVert->ajouterDechet(dTNonRecyclable);
	}
	Log::i("AJOUT DTNR: " + std::to_string(dechet->getID()));
}

void UsineTraitement::creerDechetTraiteCompostable(Dechet* dechet)
{
	DechetTraiteCompostable* dTCompostable = new DechetTraiteCompostable(dechet);
	if (!camionBrun->ajouterDechet(dTCompostable))
	{
		depot.depotDechetsTraite(camionBrun);
		camionBrun = depot.getCamionBrun();
		camionBrun->ajouterDechet(dTCompostable);
	}
	Log::i("AJOUT DTC: " + std::to_string(dechet->getID()));
}

void UsineTraitement::traiterDechet(Dechet* dechet)
{
	Operation* operationCourante = sequenceOperations->getOperationDemarrage();
	preOperation();
	do
	{
		bool resultat = operationCourante->effectuerOperation(dechet);
		operationCourante = operationCourante->getOperationSuivante(resultat);
	} while (operationCourante);
	postOperation();
}
