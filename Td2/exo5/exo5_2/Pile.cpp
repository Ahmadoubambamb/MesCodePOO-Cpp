#include "Pile.h"
element* creer_maillon(int x)
{ element* m=new element;
  m->val=x;
  m->suiv=NULL;
  return m;
}
pile::pile()
{   cout<<"appel du constructeur: adr="<<this<<endl;
    tete=new Pile_elt;
    tete->taille=0;
    tete->sommet=NULL;
}

pile::pile(const pile& p)
{ cout<<"appel du constructeur de copie: adr="<<this<<endl;
  tete=new Pile_elt;
  tete->taille=p.tete->taille;
  tete->sommet=NULL;
  element *m, *courant=NULL, *tmp=p.tete->sommet;
    while(tmp)
    { m=creer_maillon(tmp->val);
      if(tete->sommet==NULL)
        tete->sommet=courant=m;
      else
      {courant->suiv=m;
        courant=m;
      }
      tmp=tmp->suiv;
    }
}
pile::~pile()
{ cout<<"appel du destructeur :adr="<<this<<endl;
  element* courant=tete->sommet;
  while(tete->sommet)
  {tete->sommet=tete->sommet->suiv;
    delete courant;
    courant=tete->sommet;
    tete->taille--;
  }
}

void pile::empiler(int e)
{  element* m=creer_maillon(e);
    if(tete->sommet==NULL)
        tete->sommet=m;
     else
     {m->suiv=tete->sommet;
       tete->sommet=m;
     }
     tete->taille++;
}

void pile::depiler()
{ if(est_vide())
  {cout<<"plus d'element a supprimer !! la Pile est vide ."<<endl;
    return;
  }
  cout<<"l'element "<<tete->sommet->val<<" est supprimer"<<endl;
  element* tmp=tete->sommet;
  tete->sommet=tete->sommet->suiv;
  delete tmp;
  tete->taille--;
}

int pile::Sommet() const
{
  return tete->sommet->val;
}

bool pile::est_vide() const
{
  return (tete->taille==0);
}

void pile::afficher() const
{
  element* tmp=tete->sommet->suiv;
  cout<<tete->sommet->val;
  while(tmp)
  {cout<<"/"<<tmp->val;
    tmp=tmp->suiv;
  }
  cout<<endl;
}

/*
 #include "Pile.h"
element* creer_maillon(int x)
{ element* m=new element;
  m->val=x;
  m->suiv=NULL;
  return m;
}
pile::pile()
{   cout<<"appel du constructeur: adr="<<this<<endl;
    tete=new Pile_elt;
    tete->taille=0;
    tete->sommet=NULL;
}

pile::~pile()
{ cout<<"appel du destructeur :adr="<<this<<endl;
  element* courant=tete->sommet;
  while(tete->sommet)
  {tete->sommet=tete->sommet->suiv;
    delete courant;
    courant=tete->sommet;
    tete->taille--;
  }
}

void pile::empiler(int e)
{  element* m=creer_maillon(e);
    if(tete->sommet==NULL)
        tete->sommet=m;
     else
     {m->suiv=tete->sommet;
       tete->sommet=m;
     }
     tete->taille++;
}

void pile::depiler()
{ if(est_vide())
  {cout<<"plus d'element a supprimer !! la Pile est vide ."<<endl;
    return;
  }
  cout<<"l'element "<<tete->sommet->val<<" est supprimer"<<endl;
  element* tmp=tete->sommet;
  tete->sommet=tete->sommet->suiv;
  delete tmp;
  tete->taille--;
}

int pile::Sommet() const
{
  return tete->sommet->val;
}

bool pile::est_vide() const
{
  return (tete->taille==0);
}

void pile::afficher() const
{
  element* tmp=tete->sommet->suiv;
  cout<<tete->sommet->val;
  while(tmp)
  {cout<<"/"<<tmp->val;
    tmp=tmp->suiv;
  }
  cout<<endl;
}
*/
