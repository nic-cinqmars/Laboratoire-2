#include "Operation2.h"

Operation2::~Operation2()
{
    Compteur::ajouterDestructeur();
}

bool Operation2::effectuerOperation(Dechet* dechet)
{
    if (dechet->getMateriel() == PLASTIQUE)
    {
        return true;
    }
    return false;
}
