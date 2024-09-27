/**
 *  @author LAFAYE Jean
 *  @abstract Classe pour créer un compte client
 *  @date 4 septembre 2024
 *  @version 1.0
 */
#include "compteclient.h"
/**
 * @brief CompteClient::CompteClient
 * @param _nom Nom de l'utilisateur
 * @param _numero Numero de l'utilisateur
 * @details Constructeur du compte Client
 */
CompteClient::CompteClient(const string _nom, const int _numero):
    nom(_nom),
    numero(_numero)
{
    compteEpargne = nullptr;
    compteBancaire = new CompteBacaire(0);

}
/**
 * @brief CompteClient::~CompteClient
 * @details Destructeur du compte client, il detruits aussi le compte epargne si celui ci est crée
 */
CompteClient::~CompteClient()
{
    delete compteBancaire;
    if(compteEpargne != nullptr){
    delete compteEpargne;
    }
}
/**
 * @brief CompteClient::OuvrirCompteEpargne
 * @details Permets la création du compte éparne en demandant le solde et le taux d'interets
 */
void CompteClient::OuvrirCompteEpargne()
{
    float solde, interets;
    if(compteEpargne == nullptr){
        cout<<"Quel est le montant et le taux d'intérets pour le compte épargne"<<endl;
        cin >> solde >> interets;
        compteEpargne = new CompteEpargne(interets,solde);
    }else{
        cout<<"Vous avez deja un compte épargne"<< endl;
    }
}
/**
 * @brief CompteClient::GererCompteEpargne
 * @details Permets l'utilistion du compte epargne
 */
void CompteClient::GererCompteEpargne()
{
    if(compteEpargne == nullptr){
        cout<<"Vous n'avez pas de compte épargne"<<endl;

    }else{


    Menu menuCB("../LaBanque/compteEpargne.txt");
    float solde;
    int choix;
    float depot;
    float retrait;
    bool possibilite;
    bool sortie = 0;
    while (sortie == 0) {
        choix = menuCB.Afficher();
        switch (choix) {
        case 1:
            solde = compteEpargne->ConsulterSolde();
            cout << "Vous avez "<< solde<< "€ sur votre compte"<<endl;
            break;
        case 2:
            cout<< "Vous voulez déposez combien?" << endl;
            cin>> depot;
            compteEpargne->Deposer(depot);
            cout << "Vous avez déposé " << depot<<"€"<<endl;
            break;
        case 3:
            cout<< "Vous voulez retirer combien?" << endl;
            cin>> retrait;
            possibilite = compteEpargne->Retirer(retrait);
            if (possibilite == 1) {
                cout << "Vous avez retirer " << retrait<<"€"<<endl;
            }else{
                cout << "Vous n'avez pas pus retirer, solde insufisant " <<endl;
            }
            break;
        case 4:
            compteEpargne->CalculerInterts();
            solde = compteEpargne->ConsulterSolde();
            cout << "Vous avez "<< solde<< "€ sur votre compte avec les interets"<<endl;
            break;
        case 5:
            sortie = 1;
            break;
        }
        //Menu::AttendreAppuiTouche();
    }
    }
}
/**
 * @brief CompteClient::GererCompteBancaire
 * @details Permets l'utilistion du compte bancaire
 */
void CompteClient::GererCompteBancaire()
{
    Menu menuCB("../LaBanque/compteBancaire.txt");
    float solde;
    int choix;
    float depot;
    float retrait;
    bool possibilite;
    bool sortie = 0;
    while (sortie == 0) {
        choix = menuCB.Afficher();
        switch (choix) {
        case 1:
            solde = compteBancaire->ConsulterSolde();
            cout << "Vous avez "<< solde<< "€ sur votre compte"<<endl;
            break;
        case 2:
            cout<< "Vous voulez déposez combien?" << endl;
            cin>> depot;
            compteBancaire->Deposer(depot);
            cout << "Vous avez déposé " << depot<<"€"<<endl;
            break;
        case 3:
            cout<< "Vous voulez retirer combien?" << endl;
            cin>> retrait;
            possibilite = compteBancaire->Retirer(retrait);
            if (possibilite == 1) {
                cout << "Vous avez retirer " << retrait<<"€"<<endl;
            }else{
                cout << "Vous n'avez pas pus retirer, solde insufisant " <<endl;
            }


            break;
        case 4:
            sortie = 1;
            break;
        }
        //Menu::AttendreAppuiTouche();
    }
}
