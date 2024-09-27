#include "segment.h"

Segment::Segment(const double _longueur, const double _angle, const double _vitesse):
    Element(_vitesse),
    longueur(_longueur),
    angle(_angle)

{}

void Segment::Afficher()
{
    cout <<"(" << numero << ") " <<"Segment L ="<< longueur<< setw(5) << "A = "
         << angle<< setw(5)  << "V =" << vitesse << endl;

}

double Segment::ObtenirLongueur()
{
    return longueur;
}

double Segment::ObtenirDuree()
{
    return longueur/vitesse;
}

Vecteur Segment::ObtenirVecteurArivee()
{
    return Vecteur(longueur * cos(angle),
                   longueur * sin(angle));
}
