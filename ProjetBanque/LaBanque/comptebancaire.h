#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H

class CompteBancaire
{
protected:
    float solde;
public:
    CompteBancaire(float const _solde);
    void Deposer(float const _montant);
    bool Retirer(float const _montant);
    float ConsulterSolde();
    ;
};

#endif // COMPTEBANCAIRE_H
