#ifndef BARRECARREE_H
#define BARRECARREE_H

#include "barre.h"
#include <string>

using namespace std;

class BarreCarree : public Barre {
protected:
    double cote;
public:
    BarreCarree(const string _reference,
                const string _nom,
                int _longueur,
                double _densite,
                double _cote);
    ~BarreCarree();

    double CalculerMasse();
    double CalculerSection();
  //  void AfficherCaracteristiques() const;

};


#endif // BARRECARREE_H
