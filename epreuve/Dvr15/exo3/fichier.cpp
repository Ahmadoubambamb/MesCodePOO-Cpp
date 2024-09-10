#include "fichier.h"
noeud* creer_maillon(Base* mp)
{ noeud* m=new noeud;
    m->ptr=mp;
    m->suiv=NULL;
    return m;
}

liste::liste()
{ debut=courant=NULL;
}

liste::~liste()
{ noeud* tmp=debut;
    while(debut)
    {debut=debut->suiv;
     delete tmp;
     tmp=debut;
    }
    courant=NULL;
}

void liste::ajouter(Base* mp)
{ noeud* m=creer_maillon(mp);
    if(debut==NULL)
    debut=courant=m;
    else
    {courant->suiv=m;
     courant=courant->suiv;
    }
}

void liste::afficher()
{  noeud* tmp=debut; int i=0;
    while(tmp)
  {
    cout<<"objet "<<i++<<":  ";
    tmp->ptr->afficher(); cout<<" --> ";
    tmp=tmp->suiv;
  }
}
