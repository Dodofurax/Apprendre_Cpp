#ifndef ELEMENT_H
#define ELEMENT_H
#include "iomanip"
#include "iostream"
using namespace std;
class Element
{
public:
    Element();
    virtual ~Element();
    virtual void Afficher() = 0;
};

#endif // ELEMENT_H
