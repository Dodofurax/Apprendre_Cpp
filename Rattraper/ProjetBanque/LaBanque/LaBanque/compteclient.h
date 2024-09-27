#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H

#include <compteepargne.h>

class CompteClient
{
public:
    ///Constructeur d'un compte client
    CompteClient(const string _nom, const int _numero);
    ///Destructeur du compte client
    ~CompteClient();
    ///Permets l'ouverture d'un compte epargne
    void OuvrirCompteEpargne();
    ///Permets d'acceder au compte epargne
    void GererCompteEpargne();
    ///Permets d'acceder au compte bancaire
    void GererCompteBancaire();
private:
    ///Instance dynamique du compte bancaire
    CompteBacaire *compteBancaire;
    ///Instance dynamique du compte epargne
    CompteEpargne *compteEpargne;
    ///Nom de l'utilisateur
    string nom;
    ///Numero de l'utilisateur
    int numero;
};

#endif // COMPTECLIENT_H
