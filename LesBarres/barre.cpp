#include "barre.h"

// Constructeur avec paramètres
Barre::Barre(const string _reference,
      const string _nom,
      const double _longueur,
      const double _densite):
    reference(_reference),
    nom(_nom),
    longueur(_longueur),
    densite(_densite)
{
 cout << "Construction de la barre : " << nom << endl;
}



// affiche les caractéristiques de la barre
void Barre::AfficherCaracteristiques() {
    cout << "Référence : " << reference << endl;
    cout << "Nom : " << nom << endl;
    cout << "Longueur : " << longueur << " m" << endl;
    cout << "Densité : " << densite << " kg/m^3" << endl;
}

// Destructeur
Barre::~Barre() {
    cout << "Destruction de la barre : " << nom << endl;
}
