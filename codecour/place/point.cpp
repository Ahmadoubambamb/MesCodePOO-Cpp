#include "point.h"
point *construire_point(int x,int y)
{point *pt;
    pt=new point;
    pt->x=x;
    pt->y=y;
    return pt;
}
void detruire_point(point *pt)
{ if(pt) delete pt;
}
void afficher_point(point *pt)
{
    cout<<"point("<<pt->x<<" , "<<pt->y<<")"<<endl;
}
void *erreur()
{
    cerr<<"erreur de d'allocation de memoire !!"<<endl;
    return NULL;
}
place *construire_place(point *pt)
{ place *pc;
    pc=new place;
    if(pc==NULL)
       erreur();
    pc->element=pt;
    pc->suiv=NULL;
    return pc;
}
liste *liste_vide()
{liste *li;
    li=new liste;
    if(li==NULL)
        erreur();
      li->debut=NULL;
      li->courant=NULL;
    return li;
}
liste *ajouter_pointT(liste *pl,point *pt)
{  place *m;
    m=construire_place(pt);
      m->suiv=pl->debut ;
      pl->debut=m;
  return pl;
}
/*
liste *ajouter_pointQ(liste *pl,point *pt)
{  place *m=construire_place(pt);
    if(!pl->debut)
    pl->courant=pl->debut=m;
  else
  {//ajout queue
      (pl->courant)->suiv=m;
      pl->courant=m;
  }
  return pl;
}
void detruire_liste(liste *pl)
{ place *pc;
    while(pl->debut)
    {    pc=pl->debut;
         pl->debut=(pl->debut)->suiv;
          delete pc->element;
           delete pc;
     }
     delete pl;
}*/
void detruire_liste(liste *pl)
{place *pc1,*pc2;
    if(pl)
      {pc1=pl->debut;
           while(pc1)
           {
            pc2=pc1->suiv;
            delete pc1->element;//car on construit un point avec new ;
            delete pc1;
            pc1=pc2;
           }
           delete pl;
      }
}
void init(liste *pl)
{ pl->courant=pl->debut;
}
/*
point *prochain(liste *pl)
{ point *pt=NULL;
    if(pl->courant)
    { pt=(pl->courant)->element;
        pl->courant=(pl->courant)->suiv;
        return pt;
    }
}*/
void afficher_liste(liste *pl)
{ init(pl);
    point *pt=NULL;
      while(pl->courant)
      {pt=pl->courant->element;
        pl->courant=pl->courant->suiv;
        afficher_point(pt);
      }
}
