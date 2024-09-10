#include <iostream>
#include "barreronde.h"
#include "barrerectangle.h"
#include "barrecarree.h"

using namespace std;

int main() {
    // Création d'une barre ronde
    BarreRonde barreRonde("BRO01", "Barre Ronde", 2.5, 7850, 0.05);
    barreRonde.AfficherCaracteristiques();
    cout << "Section : " << barreRonde.CalculerSection() << " m^2" << endl;
    cout << "Masse : " << barreRonde.CalculerMasse() << " kg" << endl << endl;

    // Création d'une barre rectangulaire
    BarreRectangle barreRectangle("BRE02", "Barre Rectangle", 2.5, 7850, 0.1, 0.05);
    barreRectangle.AfficherCaracteristiques();
    cout << "Section : " << barreRectangle.CalculerSection() << " m^2" << endl;
    cout << "Masse : " << barreRectangle.CalculerMasse() << " kg" << endl << endl;


    // Création d'une barre carrée
    BarreCarree barreCarree("BCA03", "Barre Carrée", 2.5, 7850, 0.05);
    barreCarree.AfficherCaracteristiques();
    cout << "Section : " << barreCarree.CalculerSection() << " m^2" << endl;
    cout << "Masse : " << barreCarree.CalculerMasse() << " kg" << endl << endl;

    return 0;
}
