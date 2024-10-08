#include "emballage.h"

Emballage::Emballage(const string _format, const int _resistance, const int _largeur, const int _longueur, const int _hauteur):
    format(_format),
    resistance(_resistance),
    largeur(_largeur),
    longueur(_longueur),
    hauteur(_hauteur),
    stock(0)
{
    //cout << "Constructeur : Emballage/" <<format<< endl;

}

Emballage::~Emballage(){

    //cout << "Destructeur : Emballage/" <<format<< endl;
}

void Emballage::Visualiser()
{
    if(hauteur==0){
        cout<< "|" <<setfill(' ')<<setw(13)<< left<<format<< "|"<<resistance<<setw(9)<<" kg"<< "|"<<largeur<<" X "<<setw(10)<<longueur<<  "|"<<endl;
    }
    else{
        cout<< "|" <<setfill(' ')<<setw(13)<< left<<format<< "|"<<resistance<<setw(9)<<" kg"<< "|"<<largeur<<" X "<<longueur<<" X "<<setw(4)<<hauteur<<  "|"<<endl;
    }
}

bool Emballage::operator <( Emballage &autre)
{
    return CalculerVolume() < autre.CalculerVolume();
}

double Emballage::CalculerVolume()
{
    int volume=largeur*longueur;

    if (hauteur>0) {
        volume*=hauteur;
    }
    double volumeCm3 = volume/1000.0;
    return volumeCm3;
}

bool Emballage::operator ==(Emballage &autre)
{

    if(autre.format == format && autre.hauteur == hauteur && autre.largeur==largeur && autre.longueur==longueur && autre.resistance==resistance){
        return true;
    }
    return false;
}

Emballage::operator float()
{
    return CalculerVolume();
}
