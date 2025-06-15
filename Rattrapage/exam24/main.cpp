#include "Complexe.h"

int main(){
    Complexe c(10);
    Soiree s1(Date(12,9,2022),"Lien de famille",10000);
     Soiree s2(Date(12,9,2022),"L'amitie",90000);
    LeveeDeFonds l1(Date(21,12,2024),"amitie ami",10040,12000,45000,21000);
    LeveeDeFonds l2(Date(21,12,2022),"amitie amitie ami",10040,1200,4500,210000);
     c.ajouter(&s1);
     c.ajouter(&s2);
     c.ajouter(&l1);
     c.ajouter(&l2);
     c.afficher();
return 0;
}
