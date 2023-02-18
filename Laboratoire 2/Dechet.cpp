#include "Dechet.h"

int Dechet::idCourant = 0;

Dechet::Dechet(const Dechet& dechet)
{
	Compteur::ajouterConstructeurCopie();

	poids = dechet.poids;
	id = idCourant++;
	description = dechet.description;
	type = dechet.type;
	couleur = dechet.couleur;
	materiel = dechet.materiel;
	purete = dechet.purete;
	styromousse = dechet.styromousse;
	rigide = dechet.rigide;
}

Dechet::Dechet(int poids, std::string description, int type, std::string couleur, Materiel materiel, int purete, bool estEnStyromousse, bool rigide)
{
	Compteur::ajouterConstructeur();

	id = idCourant++;
	setPoids(poids);
	setDescription(description);
	setType(type);
	setCouleur(couleur);
	this->materiel = materiel;
	setPurete(purete);
	this->styromousse = estEnStyromousse;
	this->rigide = rigide;
}

void Dechet::setPoids(int poids)
{
	if (poids >= 0 && poids <= 100)
	{
		this->poids = poids;
	}
	else
	{
		this->poids = 0;
	}
}

void Dechet::setDescription(std::string description)
{
	if (description.length() >= 3)
	{
		this->description = description;
	}
	else
	{
		this->description = "???";
	}
}

void Dechet::setType(int type)
{
	if (type >= 0 && type <= 7)
	{
		this->type = type;
	}
	else
	{
		this->type = 0;
	}
}

void Dechet::setCouleur(std::string couleur)
{
	if (couleur == "brun" || couleur == "vert")
	{
		this->couleur = couleur;
	}
	else
	{
		this->couleur = "inconnu";
	}
}

void Dechet::setPurete(int purete)
{
	if (purete >= 1 && purete <= 100)
	{
		this->purete = purete;
	}
	else
	{
		this->purete = 1;
	}
}

std::ostream& operator<<(std::ostream& output, const Dechet& dechet)
{
	output << std::endl << "-------------------------------" << std::endl
		<< " id          : " << dechet.id << std::endl
		<< " poids       : " << dechet.poids << std::endl
		<< " description : " << dechet.description << std::endl
		<< " type        : " << dechet.type << std::endl
		<< " couleur     : " << dechet.couleur << std::endl
		<< " materiel    : " << dechet.materiel << std::endl
		<< " purete      : " << dechet.purete << std::endl
		<< " styromousse : " << dechet.styromousse << std::endl
		<< " rigide      : " << dechet.rigide;

	return output;
}