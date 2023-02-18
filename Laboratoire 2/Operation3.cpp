#include "Operation3.h"

Operation3::~Operation3()
{
    Compteur::ajouterDestructeur();
}

bool Operation3::effectuerOperation(Dechet* dechet)
{
    if (dechet->getMateriel() == PAPIER || dechet->getMateriel() == CARTON)
    {
        return true;
    }
    return false;
}
