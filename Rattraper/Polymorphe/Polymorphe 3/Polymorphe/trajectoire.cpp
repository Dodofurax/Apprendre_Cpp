#include "trajectoire.h"

Trajectoire::Trajectoire(const int _nbEtapesMax, const Vecteur _depart):
    nbEtapesMax(_nbEtapesMax),
    prochaineEtape(0),
    depart(_depart)

{
    parcours = new Element *[nbEtapesMax];
}

Trajectoire::~Trajectoire()
{
    for (int i = 0; i < prochaineEtape; i++)
        delete parcours[i];
    delete[]parcours;
}

bool Trajectoire::Ajouter(Element *pElement)
{

    bool retour = true;
    if (prochaineEtape < nbEtapesMax){
        parcours[prochaineEtape++] = pElement ;
    parcours[prochaineEtape-1]->SetNumero(prochaineEtape);
    }else
        retour = false;
    return retour;

}

void Trajectoire::Afficher()
{
    Vecteur vecteurTotal;
    double longueurTot = 0.0;
    double dureeTot = 0.0;

    cout << "Trajectoire : " <<endl<<endl;

    vecteurTotal = depart;
    for (int indice = 0; indice < nbEtapesMax; ++indice) {
        parcours[indice]->Afficher();
        vecteurTotal += parcours[indice]->ObtenirVecteurArivee();
        cout << "Vecteur en " << vecteurTotal << endl;

        longueurTot += parcours[indice]->ObtenirLongueur();
        dureeTot += parcours[indice]->ObtenirDuree();
    }
    cout<<endl;
    cout << "Durée totale du parcours = "<<dureeTot<<endl;
    cout << "Longueur totale du parcours = "<<longueurTot<<endl << endl;

    cout << "Vecteur de départ = "<<depart;
    cout << "Vecteur d'arrivée = "<<vecteurTotal<<endl;
}
