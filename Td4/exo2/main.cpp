#include <iostream>
#include <string>
#include "Liste.h"
int main()
{  string nom="Deme" , prenom="Abdoulaye",comp="dispenser des cours!",n1="Diop",p1="Talibouya",c1="Esneigner",ne="UGB";
    individu I(379,nom,prenom);
    I.afficher();
  employer E(17,nom,prenom,comp),E1(21,p1,n1,c1);
 // E.afficher();
  entreprise En(657,4,I,ne);
  En.ajouter(&E);
  En.ajouter(&E1);
  //En.afficher();
  liste L(5);
  L.ajout(&En);
  L.ajout(&I);
  L.ajout(&E1);
  L.afficher();
    return 0;
}
