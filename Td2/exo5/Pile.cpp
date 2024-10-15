#include "Pile.h"
using namespace std;

pile::pile(int n)
{ cout<<"appel du constructeur: adr="<<this<<endl;
  taille=0;
  taille_max=n;
  adr=new int[n];
}

pile::~pile()
{ cout<<"apel du destructeur: adr="<<this<<endl;
 if(adr) delete adr;
}

void pile::empiler(int x)
{ if(taille==taille_max)
    { cerr<<"pile plein !!"<<endl;
      return;
    }
    adr[taille++]=x;
}

int pile::depiler()
{ if((*this).est_vide())
  {cout<<"pile vide !!"<<endl;
    return -1;
  }
  int n=adr[taille-1];
   taille--;
   return n;
}

int pile::Sommet() const
{ if(est_vide())
  { cout<<"pile vide pas de sommet !"<<endl;
    return 0;
  }
  return adr[taille-1];
}

bool pile::est_vide() const
{
  return (taille==0);
}

pile::pile(pile& e)
{ cout<<"appel du constructeur de copie:adr="<<this<<endl;
  taille=e.taille;
  taille_max=e.taille_max;
  adr=new int[taille_max];
  int pos=0 ,n ,m=e.taille;
  pile p1(taille_max);
  while(pos++<m)
  { n=e.depiler();
    p1.empiler(n);
  }
  e.taille=taille;
 // p1.afficher();
  pos=0;
   while(pos++<m)
  { n=p1.depiler();
    this->empiler(n);
  }
}
pile& pile::operator=(pile& p)
{ if(this==&p) return *this;
  delete adr;
  taille_max=p.taille_max;
  taille=0;
  adr=new int[taille_max];
  int pos=0 ,n ,m=p.taille;
  pile p1(taille_max);
  while(pos++<m)
  { n=p.depiler();
    p1.empiler(n);
  }
  pos=0;
   while(pos++<m)
  { n=p1.depiler();
    this->empiler(n);
  }
  return *this;
}
void pile::afficher()
{ int pos=1;
  cout<<adr[0];
  while(pos<taille)
  {  cout<<"/"<<adr[pos];
     pos++;
  }
  cout<<endl;
}

/*#include "Pile.h"
element* creer_maillon(int x)
{ element* m=new element;
  m->val=x;
  m->suiv=NULL;
  return m;
}
void pile::afficher()
{ pile p(taille_max);
  pile p1=*this;
  int pos=0 ,n;
  while(pos++<taille)
  { n=p1.depiler();
    p.empiler(n);
  }
  pos=0;
  cout<<p.depiler();
  while(p.taille!=0)
  cout<<"/"<<p.depiler();
  cout<<endl;
}
pile::pile()
{ tete=new Pile_elt;
    tete->taille=0;
    tete->sommet=NULL;
}

pile::~pile()
{

}

void pile::empiler(int e)
{ element* m=creer_maillon(e);
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
  cout<<"l'element "<<tete->(sommet->val)<<" supprimer"<<endl;
  element* tmp=tete->sommet;
  tete->sommet=tete->(sommet->suiv);
  delete tmp;
}

int pile::Sommet() const
{
  return tete->(sommet->val);
}

bool pile::est_vide() const
{
  return (tete->taille==0);
}

void pile::afficher() const
{
  element* tmp=tete->sommet->suiv;
  cout<<tete->(sommet->val);
  while(tmp)
  {cout<<"/"<<tete->(sommet->val)
    tmp=tmp->suiv;
  }
}
*/
