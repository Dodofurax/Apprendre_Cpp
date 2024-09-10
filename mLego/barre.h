#ifndef BARRE_H
#define BARRE_H

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Barre {
protected:
    string reference;
    string nom;
    int longueur;  // en mètres
    double densite;   // en kg/m^3
public:
    Barre(const string _reference,
          const string _nom,
          const double _longueur,
          const double _densite);

    void AfficherCaracteristiques() const;

    ~Barre();
};

#endif // BARRE_H
