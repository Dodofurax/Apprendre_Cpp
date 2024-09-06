#include <iostream>
#include "emballage.h"
#include <limits>
#include <iomanip>
//etape 3: justification: Un destructeur explicite est utile si vous avez des ressources dynamiques à libérer(espace)
using namespace std;

int main()
{

    Emballage coli1("XL", 7 ,383 ,250 ,195);
    Emballage coli2("XS", 1 ,270 ,190 ,0);
    Emballage* tabColis[3];
    string format;
    int resistance, longueur, largeur, hauteur;
    // Boucle pour saisir les caractéristiques des 3 emballages et les allouer dynamiquement
    for (int i = 0; i < 3; ++i) {//5
        // Demande de saisie des caractéristiques
        cout << "Format : ";
        getline(cin,format);
        cout << "Résistance (kg) : ";
        cin >> resistance;
        cout << "Longueur (cm) : ";
        cin >> longueur;
        cout << "Largeur (cm) : ";
        cin >> largeur;
        cout << "Hauteur (cm, 0 si à plat) : ";
        cin >> hauteur;

        // Allocation dynamique de l'emballage
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        tabColis[i] = new Emballage(format, resistance, longueur, largeur, hauteur);
    }
    // Affichage des caractéristiques des emballages
    cout << setfill('-') << setw(12) << left << "+" << setw(16) << "+" << setw(25) << "+" << "+\n"
         << setfill(' ') << setw(12) << left << "|Format" << setw(16) << "|Résistance" << setw(24) << "|Dimensions" << "|"
         << setfill('-') << setw(12) << left << "+" << setw(16) << "+" << setw(25) << "+" << "+" << endl;
    coli1.Visualiser();
    coli2.Visualiser();
    for (int i = 0; i < 3; ++i) {
        tabColis[i]->Visualiser();
    }
    // boucle destructeur
    for (int i = 0; i < 3; ++i) {
        delete tabColis[i];
    }

    return 0;
}

