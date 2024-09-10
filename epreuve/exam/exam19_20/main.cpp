#include "fichier.h"

int main()
{ lettre l1(12.0,normal,"France","Roumanie",A3,20000);
   lettre l2(11.2,express,"Senegal","Guinee",A4,300000);
    colis c1(45.2,normal,"Kaolack","Gambie",22.4,650000);
    c1.calculprix_timbre();
   Boite_aux_Lettre b(2,4,7);
   b.ajouter(&l1);
   b.ajouter(&l2);
   b.ajouter(&c1);
   b.afficher();
   return 0;
}
