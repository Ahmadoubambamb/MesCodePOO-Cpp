#include "Voiture.h"

table::table(int m)
{max=m; taille_courant=0;
    tab=new noeud*[max];
    for(int i=0;i<m;i++)
        tab[i]=nullptr;
    cout<<"appel du constructeur :adr="<<this<<endl;
}

table::~table()
{int i=0;
    while(i<max)
    {if(tab[i])
      {noeud *p1,*p2=tab[i];
         while(p2)
         {p1=p2->suiv;
             delete p2->v->presentation;
             delete p2->v;
             delete p2;
             p2=p1;
         }
      }
      i++;
    }
    delete [] tab;
 cout<<"appel du destructeur :adr="<<this<<endl;
}
void table::inserer(voiture *vi)
{
    unsigned int i=h(vi->cle);
      noeud *m=new noeud;
        m->v=new voiture;
        m->v->presentation=new char[strlen(vi->presentation)+1];
        m->v->annee=vi->annee;
        strcpy(m->v->marque,vi->marque);
         strcpy(m->v->modele,vi->modele);
          strcpy(m->v->gamme,vi->gamme);
           strcpy(m->v->presentation,vi->presentation);
            strcpy(m->v->cle,vi->cle);
            m->suiv=nullptr;
            if(tab[i]==nullptr)
            { tab[i]=m;
              taille_courant++;
            }
           else
          { noeud *p1=tab[i] ;
            while(strcmp(p1->v->cle,vi->cle)!=0 && p1->suiv!=nullptr)//on cherche en meme
              p1=p1->suiv;                                   //temps si on trouve on
             if(strcmp(p1->v->cle,vi->cle)!=0)            //quitte sinon on insere queue
             {p1->suiv=m;
              taille_courant++;
             }
            else
             cout<<"la voiture s'y trouve deja !!\n";
          }
}

bool table::rechercher(char *c)
{unsigned int i=h(c);
  noeud *p=tab[i];
  while(p && strcmp(p->v->cle,c)!=0)
    p=p->suiv;
    return (p!=nullptr);
}

unsigned int table::h(char *c)
{unsigned int sommeLettres=0;
  int n=strlen(c);
  for(int i=0;i<n;i++)
    sommeLettres=sommeLettres+c[i];
  return sommeLettres%max;
}

void table::supprimer(char *c)
{ unsigned int i=h(c);
   noeud *p1,*p2=tab[i];
   if(strcmp(tab[i]->v->cle,c)==0)
   {
     tab[i]=tab[i]->suiv;
     delete p2->v->presentation;
      delete p2->v;
      delete p2;
  }
    while(p2!=nullptr && strcmp(c,p2->v->cle)!=0)
    {p1=p2;
      p2=p2->suiv;
    }
    if(p2!=nullptr)
    {p1=p2->suiv;
      delete p2->v->presentation;
      delete p2->v;
      delete p2;
    }
    else
      cout<<"l'element a supprimer ne s'y trouve pas!!\n";
}

table::table(const table& t)
{max=t.max; taille_courant=t.taille_courant;
  tab=new noeud*[max];
     for(int i=0;i<max;i++)
       tab[i]=nullptr;
   for(int i=0;i<max;i++)
   { if(t.tab[i]!=nullptr)
     {noeud *current,*tmp=t.tab[i];
       while(tmp)
       { noeud *m=new noeud;
         m->v=new voiture;
         m->v->presentation=new char[strlen(tmp->v->presentation)+1];
         strcpy(m->v->presentation,tmp->v->presentation);
         strcpy(m->v->marque,tmp->v->marque);
         strcpy(m->v->modele,tmp->v->modele);
         strcpy(m->v->gamme,tmp->v->gamme);
         strcpy(m->v->cle,tmp->v->cle);
         m->v->annee=tmp->v->annee;
         m->suiv=nullptr;
         if(tab[i]==nullptr)
           current=tab[i]=m;
         else
         {current->suiv=m;
           current=current->suiv;
         }
        tmp=tmp->suiv;
       }
     }
  }
  cout<<"appel du constructeur de recopie: adr="<<this<<endl;
}

table& table::operator=(const table& other)
{ if(this==&other)
     return *this;
     //maintenant on libere la memoire de la appelant;
 for(int i=0;i<taille_courant;i++)
 {if(tab[i]!=nullptr)
   {noeud *p1 , *p2=tab[i];
      while(p2)
      {p1=p2->suiv;
        delete p2->v->presentation;
        delete p2->v;
        delete p2;
        p2=p1;
      }
   }
 }
 delete [] tab;
  max=other.max;
  taille_courant=other.taille_courant;
  for(int i=0;i<max;i++)
  { if(other.tab[i]!=nullptr)
    {noeud *tmp=other.tab[i] , *current;
        while(tmp)
        { noeud *m=new noeud;
          m->v=new voiture;
         m->v->presentation=new char[strlen(tmp->v->presentation)+1];
         strcpy(m->v->presentation,tmp->v->presentation);
         strcpy(m->v->marque,tmp->v->marque);
         strcpy(m->v->modele,tmp->v->modele);
         strcpy(m->v->gamme,tmp->v->gamme);
         m->v->annee=tmp->v->annee;
         m->suiv=nullptr;
          if(tab[i]==nullptr)
            current=tab[i]=m;
           else
           {current->suiv=m;
             current=current->suiv;
           }
         tmp=tmp->suiv;
        }
    }
  }
  return (*this);
}

void table::afficher()
{ int i=0;
    for(i=0;i<max;i++)
    { if(tab[i]!=nullptr)
      { noeud *tmp=tab[i];
         while(tmp!=nullptr)
         {cout<<"Cle:"<<tmp->v->cle
              <<"\nMarque:"<<tmp->v->marque
              <<"\nModele:"<<tmp->v->modele
              <<"\nGamme:"<<tmp->v->gamme
              <<"\nAnnee:"<<tmp->v->annee
              <<"\nPresentation:"<<tmp->v->presentation;
              cout<<"\n--------------------------\n";
              tmp=tmp->suiv;
         }
      }
    }
}

voiture *creer_v(const char* c,const char* m,const char* mo,const char* g,const char* p,int a)
{ voiture *v=new voiture;
    v->presentation=new char[strlen(p)+1];
    strcpy(v->presentation,p);
    strcpy(v->marque,m);
    strcpy(v->cle,c);
    strcpy(v->modele,mo);
    strcpy(v->gamme,g);
    v->annee=a;
    return v;
}

