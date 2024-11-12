#include "tapis.h"

Tapis::Tapis(QObject* parent) : QObject(parent), compteur(0) {}


bool Tapis::AjouterRouleaux(Rouleaux* nouveau) {
    if (nouveau) {
        queue.enqueue(nouveau);
        compteur++;
        return true;
    }
    return false;
}

Rouleaux* Tapis::RetirerRouleaux() {
    if (!queue.isEmpty()) {
        compteur--;
        return queue.dequeue();
    }
    return nullptr;
}

int Tapis::getCompteur() const {
    return compteur;
}

void Tapis::InitialiserCompteur() {
    compteur = 0;
}

QStringList Tapis::ObtenirContenuTapis() {
    QStringList contenu;
    for (Rouleaux* rouleaux : queue) {
        contenu << QString("Réf : %1 - Diamètre : %2")
                       .arg(rouleaux->getReference())
                       .arg(rouleaux->getDiametre());
    }
    return contenu;
}
