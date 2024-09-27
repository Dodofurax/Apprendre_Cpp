#include <iostream>
#include <element.h>
#include <trajectoire.h>
#include <segment.h>
using namespace std;

int main()
{
    Trajectoire LaTrajectoire(2);
    LaTrajectoire.Ajouter(new Segment(9, 0));
    LaTrajectoire.Ajouter(new Segment(5, 0.927295));
    LaTrajectoire.Afficher();




    return 0;
}
