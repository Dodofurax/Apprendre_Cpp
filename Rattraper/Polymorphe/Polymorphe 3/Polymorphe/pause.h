#ifndef PAUSE_H
#define PAUSE_H

#include <element.h>
class Pause : public Element
{
public:
    Pause(const int _tempsAtt);
    virtual void Afficher();
    double ObtenirLongueur();
    double ObtenirDuree();
    Vecteur ObtenirVecteurArivee();
private:
    int tempsAtt;
};

#endif // PAUSE_H
