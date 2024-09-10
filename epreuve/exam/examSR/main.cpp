#include "Fraction.h"
#include "Point.h"
#include "Liste.h"
int main()
{Point p1(2,4) ,p2(4,6);
    Fraction f1(1,2) , f2(7,9);
    Liste L;
    L.ajouter(&p1);
     L.ajouter(&p2);
      L.ajouter(&f1);
       L.ajouter(&f2);
       L.afficher();
      return 0;
}
