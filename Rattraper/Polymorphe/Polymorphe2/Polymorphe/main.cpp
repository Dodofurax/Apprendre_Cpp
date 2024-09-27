#include <iostream>
#include <element.h>
#include <trajectoire.h>
#include <segment.h>
#include "vecteur.h"
using namespace std;

int main()
{
    Vecteur depart(5,10);
    Trajectoire LaTrajectoire(3,depart);
    LaTrajectoire.Ajouter(new Segment(9,0,3));
    LaTrajectoire.Ajouter(new Segment(5, 0.927295,1));
    LaTrajectoire.Ajouter(new Segment(6,1.5708,2));

    LaTrajectoire.Afficher();




    return 0;
}
