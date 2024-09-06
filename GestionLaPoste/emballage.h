#ifndef EMBALLAGE_H
#define EMBALLAGE_H

#include <iostream>
#include <string>

using namespace std;

class Emballage {
private:
    string format;
    int resistance;
    int longueur;
    int largeur;
    int hauteur;
    int stock;

public:
    //construct
    Emballage(const string& _format ,const int resistance ,const int longueur ,const int largeur,const int hauteur);
    ~Emballage();
    void Visualiser() const;
};

#endif // EMBALLAGE_H
