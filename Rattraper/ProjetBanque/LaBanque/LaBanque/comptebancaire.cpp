/**
 *  @author LAFAYE Jean
 *  @abstract Classe pour créer un compte bancaire
 *  @date 4 septembre 2024
 *  @version 1.1(modification accès tribut)
 */
#include "comptebancaire.h"


/**
 * @brief CompteBacaire::CompteBacaire
 * @details Constructeur du compte bancaire
 * @param _solde l'argent que possède le compte a la creation
 */
CompteBacaire::CompteBacaire(const float _solde):
    solde(_solde)
{}

/**
 * @brief CompteBacaire::Deposer
 * @details Permets de déposer de l'argent sur le compte bancaire
 * @param _montant Le montant que l'on dépose sur le compte
 */
void CompteBacaire::Deposer(const float _montant)
{
    solde+=_montant;

}
/**
 * @brief CompteBacaire::Retirer
 * @details Permets de retirer de l'argent de son compte, cette action est possible seulement si l'on ne descent pas en dessous de zéro euro
 * @param _montant Le montant que l'on veut retirer du compte
 * @return Si l'action de retirer de l'argent est possible(1) ou non(0)
 */
bool CompteBacaire::Retirer(const float _montant)
{
    bool test;
    if(solde - _montant < 0){
        test = 0;
    }else{
        solde-=_montant;
        test = 1;
    }
    return test;

}
/**
 * @brief CompteBacaire::ConsulterSolde
 * @details Retourne l'argent sur le compte pour l'afficher
 * @return L'argent sur le compte
 */
float CompteBacaire::ConsulterSolde()
{
    return solde;
}
