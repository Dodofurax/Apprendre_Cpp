#include "element.h"

Element::Element(const double _vitesse):
    vitesse(_vitesse)


{}

Element::~Element()
{

}

double Element::GetNumero()
{
    return numero;
}

void Element::SetNumero(const double _numero)
{
    numero = _numero;
}


