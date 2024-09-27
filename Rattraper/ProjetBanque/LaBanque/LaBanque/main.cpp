#include <iostream>
#include<menu.h>
#include <comptebancaire.h>
#include<compteepargne.h>
#include <compteclient.h>
using namespace std;

int main()
{
    Menu menuCB("../LaBanque/client.txt");
    CompteClient LeCompte("Albert",1);
    int choix;
    bool sortie = 0;
    while (sortie == 0) {
        choix = menuCB.Afficher();
        switch (choix) {
        case 1:
    LeCompte.OuvrirCompteEpargne();
            break;
        case 2:
LeCompte.GererCompteBancaire();
            break;
        case 3:
            LeCompte.GererCompteEpargne();
            break;
        case 4:
            sortie = 1;
            LeCompte.~CompteClient();
            break;
        }
        //Menu::AttendreAppuiTouche();
    }


    return 0;
}
