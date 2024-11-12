#ifndef ROULEAUX_H
#define ROULEAUX_H

#include <QObject>
#include <QString>

class Rouleaux : public QObject
{   Q_OBJECT

private:
    QString reference;
    int diametre;
    int rangee;
    int colonne;

public:
    Rouleaux(const QString& ref, int dia, QObject* parent = nullptr);
    ~Rouleaux();

    QString getReference() const;
    int getDiametre() const;
};

#endif // ROULEAUX_H
