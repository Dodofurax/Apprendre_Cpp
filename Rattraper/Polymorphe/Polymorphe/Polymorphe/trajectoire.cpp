#include "trajectoire.h"

Trajectoire::Trajectoire(const int _nbEtapesMax):
    nbEtapesMax(_nbEtapesMax),
    prochaineEtape(0)
{
    parcours = new Element *[nbEtapesMax];
}

Trajectoire::~Trajectoire()
{
    delete[]parcours;
}

bool Trajectoire::Ajouter(Element *pElement)
{

    bool retour = true;
    if (prochaineEtape < nbEtapesMax)
        parcours[prochaineEtape++] = pElement ;
    else
        retour = false;
    return retour;
}

void Trajectoire::Afficher()
{
    cout << "Trajectoire : " <<endl<<endl;
    for (int indice = 0; indice < nbEtapesMax; ++indice) {
        parcours[indice]->Afficher();
    }
    cout<<endl;
}
