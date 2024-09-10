#ifndef PILE_H_
#define PILE_H_
#include <iostream>
#include <iomanip>
using namespace std;
struct element
{ int val;
   element* suiv;
};

struct Pile_elt
{ int taille;
    element* sommet;
};

class pile
{ private :
    Pile_elt* tete;
public:
    pile();
    pile(const pile&);
   ~pile();
   void empiler(int );
   void depiler();
   int Sommet() const;
   bool est_vide() const;
   void afficher() const;
};

element* creer_maillon(int);
#endif
