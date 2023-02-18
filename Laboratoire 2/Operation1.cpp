#include "Operation1.h"

Operation1::~Operation1()
{
	Compteur::ajouterDestructeur();
}

bool Operation1::effectuerOperation(Dechet* dechet)
{
	if (dechet->estEnStyromousse() || dechet->estRigide())
	{
		return true;
	}
	return false;
}
