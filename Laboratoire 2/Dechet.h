#pragma once
#include <iostream>
#include "Compteur.h"
#include <ostream>

enum Materiel
{
	CARTON,
	BOUTEILLE,
	PLASTIQUE,
	METAL,
	BOIS,
	NOURITURE,
	VEGETAL,
	PAPIER,
	STYROFOAM,
	INCONNU
};

class Dechet
{
	int poids;
	int id;

	std::string description;

	int type;

	std::string couleur;

	Materiel materiel;

	int purete;

	bool styromousse;
	bool rigide;

	static int idCourant;

	void setPoids(int poids);
	void setDescription(std::string description);
	void setType(int type);
	void setCouleur(std::string couleur);
	void setPurete(int purete);

public:
	Dechet(const Dechet& dechet);

	virtual ~Dechet() { Compteur::ajouterDestructeur(); }

	friend std::ostream& operator<<(std::ostream& output, const Dechet& dechet);

	int getPoids() const { return poids; }
	int getID() const { return id; }

	std::string getDescription() const { return description; }

	int getType() const { return type; }

	std::string getCouleur() const { return couleur; }

	Materiel getMateriel() const { return materiel; }

	int getPurete() const { return purete; }

	bool estEnStyromousse() const { return styromousse; }
	bool estRigide() const { return rigide; }

protected:
	Dechet(int poids, std::string description, int type, std::string couleur, Materiel materiel, int purete, bool estEnStyromousse, bool rigide);
	Dechet(int poids, std::string description) : Dechet(poids, description, 0, "inconnu", INCONNU, 100, false, true) { };
};

