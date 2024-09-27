#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include <comptebancaire.h>
class CompteEpargne : public CompteBacaire
{
public:
    ///Constructeur du compte epargne
    CompteEpargne(const float _tauxInterets, const float _solde=0);
    ///Permets de calculer les interets avec le solde et le taux d'interets
    void CalculerInterts();
    ///Permets la modification du taux d'interets
    void ModifierTaux(const float _nouveauTaux);
private:
    ///Le taux d'interets du cmpte epargne(3% = 1.03)
    float tauxInterets;

};

#endif // COMPTEEPARGNE_H
