#include "arc.h"

Arc::Arc(const double _rayon, const double _angleDeb, const double _angleFin, const double _vitesse):
    Element(_vitesse),
    rayon(_rayon),
    angleDeb(_angleDeb),
    angleFin(_angleFin)

{}

void Arc::Afficher()
{
    cout <<"(" << numero << ") "<< "ARC R = "<<rayon << " Angle début = "<< angleDeb<< setw(5) << " Angle fin = "
         << angleFin<< setw(5)  << "V = " << vitesse << endl;
}

double Arc::ObtenirLongueur()
{
    longueur=fabs(angleDeb-angleFin) * rayon;
    return longueur;
}

double Arc::ObtenirDuree()
{
    return longueur/vitesse;
}

Vecteur Arc::ObtenirVecteurArivee()
{
    Vecteur ptCentre(rayon * cos(angleDeb),rayon * sin(angleDeb));
    Vecteur ptArrivee(rayon * cos(angleFin),rayon * sin(angleFin));
    return (ptArrivee - ptCentre) ;
}
