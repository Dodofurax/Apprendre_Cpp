#ifndef TAPIS_H
#define TAPIS_H

#include <QObject>
#include <QQueue>
#include <QStringList>
#include "rouleaux.h"

class Tapis : public QObject
{   Q_OBJECT

private:
    QQueue<Rouleaux*> queue;
    int compteur;
public:
    Tapis(QObject* parent=nullptr);

    bool AjouterRouleaux(Rouleaux* nouveau);
    Rouleaux* RetirerRouleaux();
    int getCompteur() const;
    void InitialiserCompteur();
    QStringList ObtenirContenuTapis();
};

#endif // TAPIS_H
