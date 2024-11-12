#include "rouleaux.h"

Rouleaux::Rouleaux(const QString& ref, int dia, QObject* parent)
    : QObject(parent), reference(ref.toUpper()), diametre(dia), rangee(-1), colonne(-1) {}

QString Rouleaux::getReference() const {
    return reference;
}

int Rouleaux::getDiametre() const {
    return diametre;
}
Rouleaux::~Rouleaux(){

}
