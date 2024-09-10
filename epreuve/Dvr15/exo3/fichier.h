#ifndef FICHIER_H_
#define FICHIER_H_
#include <iostream>
#include <iomanip>
using namespace std;

class Base{
public:
    virtual void afficher()=0;
};

class objet1 :public Base
{private :
    int s;
    public:
   objet1(int x,int y){s=y+x;};
   void afficher(){cout<<"Somme S="<<s;};
   objet1(objet1& o1)
   {s=o1.s;};
};

class objet2 :public Base
{private :
    int p;
    public:
   objet2(int y,int x){p=x*y;};
    objet2(objet2& o)
   {p=o.p;};
   void afficher(){cout<<"Produit P="<<p;};
};

struct noeud{
    Base * ptr;
    noeud *suiv;
};

class liste
{private:
    noeud *debut;
    noeud *courant;
public:
    liste();
   virtual ~liste();
     void ajouter(Base *);
     void afficher();
};

noeud* creer_maillon(Base* );
#endif
