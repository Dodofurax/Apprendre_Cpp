#include "compteepargne.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

CompteEpargne::CompteEpargne(const float _tauxInterets, const float _solde) :
    CompteBancaire(_solde),tauxInterets(_tauxInterets)
{

}

void CompteEpargne::CalculerInterets()
{
    solde += solde * tauxInterets /100.00;
}

void CompteEpargne::ModifierTaux(const float _NewTaux)
{

}

