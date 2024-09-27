#include "comptebancaire.h"

CompteBancaire::CompteBancaire(const float _solde)
{

}

void CompteBancaire::Deposer(const float _montant)
{
    solde += _montant;
}

bool CompteBancaire::Retirer(const float _montant)
{   bool retrait;
    if(solde - _montant < 0){retrait = false;}
    else { solde -= _montant ; retrait = true;}
}

float CompteBancaire::ConsulterSolde()
{
    return solde;
}

