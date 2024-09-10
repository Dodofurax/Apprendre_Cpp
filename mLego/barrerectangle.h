#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H

#include "barre.h"
#include <string>

using namespace std;

class BarreRectangle : public Barre
{
protected:
    double largeur;
    double longueurRectangle;
public:
    BarreRectangle(const string _nom,
                   const string _reference,
                   const int _longueur,
                   const double _densite,
                   const double _longueurRectangle,
                   const double _largeur);
    ~BarreRectangle();

    double CalculerMasse();
    double CalculerSection();
   // void AfficherCaracteristiques() const;
};

#endif // BARRERECTANGLE_H
