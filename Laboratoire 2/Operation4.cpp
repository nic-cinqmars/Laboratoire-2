#include "Operation4.h"

Operation4::~Operation4()
{
    Compteur::ajouterDestructeur();
}

bool Operation4::effectuerOperation(Dechet* dechet)
{
    if (dechet->getMateriel() == NOURITURE && dechet->getCouleur() == "brun")
    {
        return true;
    }
    return false;
}
