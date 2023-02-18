#include "Operation5.h"

Operation5::~Operation5()
{
    Compteur::ajouterDestructeur();
}

bool Operation5::effectuerOperation(Dechet* dechet)
{
    if (dechet->getMateriel() == VEGETAL && dechet->getCouleur() == "vert")
    {
        return true;
    }
    return false;
}
