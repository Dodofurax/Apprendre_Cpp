#include "vecteur.h"

Vecteur::Vecteur(const double _x, const double _y):
    x (_x),
    y (_y)
{}

Vecteur Vecteur::operator+(const Vecteur &_autre)
{
    return Vecteur(x + _autre.x, y + _autre.y);
}

Vecteur Vecteur::operator-(const Vecteur &_autre)
{
    return Vecteur(x - _autre.x, y - _autre.y);
}

Vecteur &Vecteur::operator+=(const Vecteur &_autre)
{
    x += _autre.x;
    y += _autre.y;
    return *this;
}

Vecteur &Vecteur::operator-=(const Vecteur &_autre)
{
    x -= _autre.x;
    y -= _autre.y;
    return *this;
}

void Vecteur::Afficher()
{
    cout << "(" << x << "," << y << ")";
}

void Vecteur::setX(const double _x)
{
    x = _x;
}

double Vecteur::getX() const
{
    return x;
}

void Vecteur::setY(const double _y)
{
    y = _y;
}

double Vecteur::getY() const
{
    return y;
}

ostream& operator<< (ostream& _out, const Vecteur &_vecteur)
{
    _out << "(" <<_vecteur.x << "," << _vecteur.y << ")" << endl;
}
