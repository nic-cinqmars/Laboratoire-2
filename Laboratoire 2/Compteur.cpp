#include "Compteur.h"

Compteur::Compteur()
{
	constructeur = 0;
	constructeurCopie = 0;
	destructeur = 0;
}

int Compteur::constructeur = 0;
int Compteur::constructeurCopie = 0;
int Compteur::destructeur = 0;
