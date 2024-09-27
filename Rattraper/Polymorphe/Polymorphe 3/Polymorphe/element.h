#ifndef ELEMENT_H
#define ELEMENT_H
#include "iomanip"
#include "iostream"
#include <vecteur.h>
#include <math.h>
using namespace std;
class Element
{
public:
    Element(const double _vitesse = 1);
    virtual ~Element();
    virtual void Afficher() = 0;
    virtual double ObtenirLongueur() = 0;
    virtual double ObtenirDuree() = 0;
    virtual Vecteur ObtenirVecteurArivee() = 0;
    double GetNumero();
    void SetNumero(const double _numero);
protected:
    double numero;
    double vitesse;
};

#endif // ELEMENT_H
