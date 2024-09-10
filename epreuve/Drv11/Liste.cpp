#include "Liste.h"

liste::liste()
{cout<<"appel du constructeur: adr="<<this<<endl;
    debut=NULL;
}

liste::liste(const liste& L)
{   noeud *courant=debut=NULL , *tmp=L.debut;
    while(tmp)
    { noeud *m=new noeud;
      m->cle=tmp->cle;
      m->chaine=tmp->chaine;
      m->suivant=NULL;
      if(debut==NULL)
          courant=debut=m;
        else
        {courant->suivant=m;
         courant=courant->suivant;
        }
      tmp=tmp->suivant;
    }
    cout<<"appel du constructeur de recopie: adr="<<this<<endl;
}

liste::~liste()
{noeud *p1=debut , *p2;
    while(p1)
    { p2=p1;
      p1=p1->suivant;
      delete p2;
    }
    cout<<"appel du destructeur :adr="<<this<<endl;
}

void liste::inserer(int i, const string& ch)
{ if(!this->rechercher(i)) //on verifier si l'element est dans la liste;
   { noeud *m;
      m=new noeud;
      m->cle=i;
      m->chaine=ch;
      m->suivant=NULL;
      if(debut==NULL)
          debut=m;   //on fait un ajout tete
     else
     {m->suivant=debut;
        debut=m;
     }
  }
  else
      cout<<"cette element est deja dans la liste !!"<<endl;
}

void liste::supprimer(int i)
{ if(debut==NULL)
   {
     cout<<"la lsite est vide !!"<<endl;
     return;
  }
  if(debut->cle==i)
    {noeud *p1=debut;
       debut=debut->suivant;
       delete p1; // on fait supprimer tete;
    }
    else
     { noeud *p1=debut , *p2;
       while(p1!=NULL && p1->cle!=i)
       { p2=p1;
         p1=p1->suivant;
       }                           //on fait supprimer position;
       if(p1!=NULL)
       {p2->suivant=p1->suivant;
         delete p1;
       }
       else
  cout<<"l'element a supprimer n'y est pas !"<<endl;
    }
}

bool liste::rechercher(int i)
{ noeud *tmp=debut;
    while(tmp!=NULL && tmp->cle!=i)
        tmp=tmp->suivant;
    return (tmp!=NULL);
}

liste liste::Union(const liste& L1)
{liste U=*this; // on copie la liste de l'objet appel en utilisant le constructeur de recopie;
  noeud *p1=L1.debut;
  while(p1!=NULL)
  { U.inserer(p1->cle,p1->chaine);
    p1=p1->suivant;
  }
return U;
}

liste liste::intersection(const liste& L1)
{liste I;
  noeud *p1=debut;
  while(p1!=NULL)
  { noeud *p2=L1.debut;
    while(p2!=NULL)
    {if(p1->cle==p2->cle)
      {I.inserer(p1->cle,p1->chaine);
        break;      // si on trouve un element identique on l'inser et on qui le boucle;
      }
     p2=p2->suivant;
    }
   p1=p1->suivant;
  }
  return I;
}

liste liste::difference(const liste& L1)
{ liste D;
  // la difference est l'ensemble des elements qui sont dans La liste appelant et
  // qui ne sont pas la liste appeler L1; L-L1=L/L1
  noeud *p1=debut ;
  while(p1)
   { noeud *p2=L1.debut;
     while(p2 && p1->cle!=p2->cle)
      p2=p2->suivant;
     if(p2==NULL) //ici si p2 est null cela dit que l'element n'est pas dans l'ensemble;
       D.inserer(p1->cle,p1->chaine);
    p1=p1->suivant;
   }
   return D;
}


void liste::afficher()
{ if(debut==NULL)
  {
    cout<<"lsite vide "<<endl;
    return;
  }
  cout<<"non vide :\n";
  int i=0;
  noeud * p1=debut , *p2=NULL;
  while(p1)
  {cout<<i++<<endl;
    noeud *m=new noeud;
    m->cle=p1->cle;
    m->chaine=p1->chaine;
    m->suivant=p2;
    p2=m;
    p1=p1->suivant;
  }
  noeud *tmp=p2;
  cout<<"("<<tmp->cle<<","<<tmp->chaine<<")";
  tmp=tmp->suivant;
  while(tmp)
  {
    cout<<"-> "<<"("<<tmp->cle<<","<<tmp->chaine<<")";
    tmp=tmp->suivant;
  }
  cout<<endl;
}


/*
 void liste::afficher()
{if(debut==NULL)
{
  cout<<"la liste est vide !"<<endl;
  return;
}
  noeud *tmp=debut;
  cout<<"("<<tmp->cle<<","<<tmp->chaine<<")";
  tmp=tmp->suivant;
  while(tmp)
  {
    cout<<"-> "<<"("<<tmp->cle<<","<<tmp->chaine<<")";
    tmp=tmp->suivant;
  }
  cout<<endl;
}
 */
