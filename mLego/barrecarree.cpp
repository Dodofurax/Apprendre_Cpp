#include "barrecarree.h"

BarreCarree::BarreCarree(const string _reference,
                const string _nom,
                int _longueur,
                double _densite,
                double _cote):
        Barre(_reference, _nom, _longueur, _densite), cote(_cote)
{
     cout << "Construction de la barre carrée." << endl;
}

    double BarreCarree::CalculerSection() {
        return cote * cote;
    }
    double BarreCarree::CalculerMasse(){
        return longueur * CalculerSection() * densite;
    }

    BarreCarree::~BarreCarree() {
        cout << "Destruction de la barre carrée." << endl;
    }
