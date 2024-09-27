#include <iostream>
#include "menu.h"
#include "comptebancaire.h"
#include "compteepargne.h"
#include <limits>
#include <stdexcept>

using namespace std;

int main()
{
    try {
        CompteEpargne compte(0, 5); // Création du compte avec un solde initial de 0
        Menu menu("../LaBanque/compteEpargne.txt");
        //compteBancaire 1
        int choix;
        float montant;

        do{
            choix = menu.Afficher();
            switch (choix) {

            case 1://depot
                cout << "Entrez le montant à déposer :";
                cin >> montant;
                if(!cin.fail() && montant > 0){compte.Deposer(montant);}
                else {cout << "Montant invalide. Le dépot n'a pas été effectuer. \n";
                    cin.clear();
                }
                break;

            case 2://retrait
                cout << "Entrez le montant à retirer :";
                cin >> montant;
                if(!cin.fail() && montant > 0){
                    if(!compte.Retirer(montant)){
                        cout << "Retrait échoué : solde insuffisant ou montant invalide." << endl;
                    }
                }else {cout << "Montant invalide. Le retrait n'a pas été effectuer." << endl;
                    cin.clear();
                }
                break;

            case 3://solde
                cout << "Solde actuel : " << compte.ConsulterSolde() << " EUR" << endl;
                break;

            case 4://interets
                compte.CalculerInterets();
                break;

            case 4://interets
                cout << "Vous avez quittez votre session" << endl;
                break;

            default:
                cout << "Choix invalide, veuillez réessayer." << endl;
                break;
            }

            Menu::AttendreAppuiTouche();

        } while (choix != 5); // Boucle jusqu'à ce que l'utilisateur choisisse de quitter
          return 0;
    } catch (const std::exception &ex) {
            // Capture des exceptions standard et affichage du message d'erreur
            cout << "Erreur : " << ex.what() << endl;
    } catch (...) {
     cout << "Une erreur inattendue s'est produite.\n";
    }
return 0;
}
