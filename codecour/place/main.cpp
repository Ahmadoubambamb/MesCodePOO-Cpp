#include "point.h"
int main()
{liste *pl=NULL;
  point *pt=NULL;
  int i;
    pl=liste_vide();
      for(i=0;i<=6;i++)
      { pt=construire_point(i,i*2);
          pl=ajouter_pointT(pl,pt);
      }
      afficher_liste(pl);
      detruire_liste(pl);

      return 0;
}
