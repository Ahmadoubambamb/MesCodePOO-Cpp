#ifndef POINT_H_
#define POINT_H_
#include <iostream>
#include <iomanip>
using namespace std;
struct point
{ int x;
   int y;
};

struct place
{ point *element;
  place *suiv;
};
struct liste
{place *debut;
 place *courant;
};
point *construire_point(int,int);
void detruire_point(point *);
void afficher_point(point *);
void *erreur();
void init(liste *);
place *construire_place(point *);
liste *liste_vide();
liste *ajouter_pointT(liste*,point*);
void detruire_liste(liste *);
point *prochain(liste *);
void afficher_liste(liste *);
#endif
