/**
 *  @author LAFAYE Jean
 *  @abstract Classe pour créer un compte épargne
 *  @date 4 septembre 2024
 *  @version 1.0
 */
#include "compteepargne.h"
/**
 * @brief CompteEpargne::CompteEpargne
 * @details Constructeur du compte épargne
 * @param _taux Interets taux interets actuel
 * @param _solde Solde du compte épargne
 */
CompteEpargne::CompteEpargne(const float _tauxInterets, const float _solde):
    tauxInterets(_tauxInterets),
    CompteBacaire(_solde)
{}

/**
 * @brief CompteEpargne::CalculerInterts
 * @details Calcul le nouveau solde avec les iinterets actuel
 */
void CompteEpargne::CalculerInterts()
{
    solde *= tauxInterets;
}
/**
 * @brief CompteEpargne::ModifierTaux
 * @details permets de modifier le taux d'intérets
 * @param _nouveauTaux Nouveax Taux d'interets
 */
void CompteEpargne::ModifierTaux(const float _nouveauTaux)
{
    tauxInterets= _nouveauTaux;
}
