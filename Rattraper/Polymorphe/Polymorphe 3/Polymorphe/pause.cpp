#include "pause.h"

Pause::Pause(const int _tempsAtt):
    tempsAtt(_tempsAtt)
{}

void Pause::Afficher()
{
    cout <<"(" << numero << ") " <<"Pause D = "<< tempsAtt<< endl;
}

double Pause::ObtenirLongueur()
{
    return 0;
}

double Pause::ObtenirDuree()
{
    return tempsAtt;
}

Vecteur Pause::ObtenirVecteurArivee()
{
    return Vecteur(0,0);
}
