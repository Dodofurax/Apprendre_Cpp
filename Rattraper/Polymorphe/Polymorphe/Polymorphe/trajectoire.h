#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H
#include "element.h"

class Trajectoire
{
public:
    Trajectoire(const int _nbEtapesMax);
    ~Trajectoire();
    bool Ajouter(Element *pElement);
    void Afficher();
private:
    Element **parcours;
    int nbEtapesMax;
    int prochaineEtape;
};

#endif // TRAJECTOIRE_H
