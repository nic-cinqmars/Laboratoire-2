#pragma once
class Compteur
{
	static int constructeur;
	static int constructeurCopie;
	static int destructeur;

public:
	Compteur() { ajouterConstructeur(); }
	
	Compteur(const Compteur& compteur) { ajouterConstructeurCopie(); }

	~Compteur() { ajouterDestructeur(); }

	static void ajouterConstructeur() { constructeur++; }
	static void ajouterConstructeurCopie() { constructeurCopie++; }
	static void ajouterDestructeur() { destructeur++; }

	static const int getNbConstructeur() { return constructeur; }
	static const int getNbConstructeurCopie() { return constructeurCopie; }
	static const int getNbDestructeurs() { return destructeur; }
};
