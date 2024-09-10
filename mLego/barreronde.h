#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"
#include <string>

using namespace std;

class BarreRonde : public Barre
{
    protected:
    int diametre;
public:
    BarreRonde(const string _nom,
               const string _reference,
               const double _longueur,
               const double _densite,
               const int _diametre);
    ~BarreRonde();

    double CalculerMasse();
    double CalculerSection();
   // void AfficherCaracteristiques() const;


};

#endif // BARRERONDE_H
