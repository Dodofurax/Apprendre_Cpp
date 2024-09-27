#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include "comptebancaire.h"

class CompteEpargne : public CompteBancaire
{
private:
    float tauxInterets;
public:
    CompteEpargne(float const _tauxInterets,float const _solde );
    void CalculerInterets();
    void ModifierTaux(float const _NewTaux);
};

#endif // COMPTEEPARGNE_H
