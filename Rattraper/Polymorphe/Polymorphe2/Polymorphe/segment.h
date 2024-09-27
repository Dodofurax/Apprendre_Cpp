#ifndef SEGMENT_H
#define SEGMENT_H
#include "vecteur.h"
#include "element.h"

class Segment : public Element
{
public:
    Segment(const double _longueur, const double _angle, const double _vitesse = 1);
    virtual void Afficher();
    double ObtenirLongueur();
    double ObtenirDuree();
    Vecteur ObtenirVecteurArivee();
private:
    double longueur;
    double angle;


};

#endif // SEGMENT_H
