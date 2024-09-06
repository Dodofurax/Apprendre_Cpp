#include "emballage.h"
#include <iomanip>
//COMPILE
Emballage::Emballage(const string& _format, const int _resistance, const int _longueur, const int _largeur, const int _hauteur)
    : format(_format), resistance(_resistance), longueur(_longueur), largeur(_largeur), hauteur(_hauteur), stock(0) {  // Initialisation des attributs
   // cout << "Constructeur : Emballage / " << format << resistance << longueur << largeur << hauteur << endl;
}
//COMPILE
Emballage::~Emballage() {
   // cout << "Destructeur : Emballage / " << format << endl;
}
void Emballage::Visualiser() const{
    cout << "| " << setw(10) << left << format
         << "| " << setw(2) << left << resistance << setw(12) << "Kg"
         << "| " << setw(1) << left << longueur << " X " << setw(1) << largeur;
    if (hauteur != 0){
        cout <<" X " << setw(1)<< left << hauteur << " |" << endl;
    }
    else cout  << right << setw(15) << " |" << endl;
}
