#include <QDebug>
#include "centraledalarme.h"
#include "clavier.h"

CentraleDalarme::CentraleDalarme(const int _tailleCode, QObject *parent) :
    QObject(parent),
    tailleCode(_tailleCode),
    indiceCourant(0)
{
    combinaison = new quint8[tailleCode];

    leClavier = new Clavier(this);
    leClavier->show();
}

CentraleDalarme::~CentraleDalarme()
{
    delete[] combinaison;
    delete leClavier;
}

void CentraleDalarme::FabriquerCode(const quint8 chiffre)
{
    // Modification de la combinaison
    if (indiceCourant < tailleCode) {
        combinaison[indiceCourant] = chiffre;
        indiceCourant++;
    } else {
        for (int indice = 0; indice < tailleCode - 1; indice++) {
            combinaison[indice] = combinaison[indice + 1];
        }
        combinaison[tailleCode - 1] = chiffre;
    }

    // Afficher la combinaison actuelle
    QString combinaisonStr = 0;
    for (int i = 0; i < tailleCode; i++) {
        combinaisonStr.append(QString::number(combinaison[i]));
    }
    qDebug() << "Combinaison actuelle : " << combinaisonStr;
}
