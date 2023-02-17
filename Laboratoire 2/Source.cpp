#include <iostream>
#include "Dechet.h"
#include "BoiteCarton.h"
#include "VerreCafe.h"
#include "QuelqueChose.h"

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
	QuelqueChose qcc;
	QuelqueChose qcc2;
	QuelqueChose qcc3;
	cout << qcc << endl;
	cout << qcc2 << endl;
	cout << qcc3 << endl;
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