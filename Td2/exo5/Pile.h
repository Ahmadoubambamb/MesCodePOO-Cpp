#ifndef PILE_H_
#define PILE_H_
#include <iostream>
#include <iomanip>
using namespace std;
 typedef int element;

class pile
{ private :
    int taille;
    element* adr;
    int taille_max;
public:
    pile(int);
    pile(pile&);
   ~pile();
   void empiler(int );
   int depiler();
    int Sommet() const;
   bool est_vide() const;
   void afficher() ;
   pile& operator=(pile&);

};

#endif

/*
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
   ~pile();
   void empiler(int );
   void depiler();
   int Sommet() const;
   bool est_vide() const;
   void afficher() const;
}

element* creer_maillon(int);*/
