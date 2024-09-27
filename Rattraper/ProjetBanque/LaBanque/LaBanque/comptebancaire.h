#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H
#include<menu.h>
class CompteBacaire
{
public:
    ///Permet de creer un compte bancaire
    CompteBacaire(const float _solde=0);
    ///Permets de déposer de l'argent sur le solde
    void Deposer(const float _montant);
    ///Permets de retirer de l'argent sur le solde
    bool Retirer(const float _montant);
    ///Permets de rconsulter le solde
    float ConsulterSolde();
protected:
    ///L'argent qu'il y a sur le compte
    float solde;
};

#endif // COMPTEBANCAIRE_H
