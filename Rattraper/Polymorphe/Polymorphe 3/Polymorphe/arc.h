#ifndef ARC_H
#define ARC_H

#include "element.h"

class Arc : public Element
{
public:
    Arc(const double _rayon, const double _angleDeb, const double _angleFin, const double _vitesse);
    virtual void Afficher();
    double ObtenirLongueur();
    double ObtenirDuree();
    Vecteur ObtenirVecteurArivee();
private:
    double rayon;
    double angleDeb;
    double angleFin;
    double longueur;
};

#endif // ARC_H
