#include "voiture.h"

societe::societe(int m)
{ max=m;
    courant=0;
    debut=new noeud*[max];
    for(int i=0;i<max;i++)
        debut[i]=nullptr;
    cout<<"appel du constructeur: adr = "<<this<<endl;
}

societe::~societe()
{ for(int i=0;i<max;i++)
    if(debut[i]!=nullptr)
    { noeud *p1=debut[i] ,*p2;
        while(p1)
        {p2=p1->suiv;
            delete p1;
            p1=p2;
        }
    }
   cout<<"appel du destructeur: adr = "<<this<<endl;
}

societe::societe(const societe& t)
{max=t.max; courant=t.courant;
  debut=new noeud*[max];
     for(int i=0;i<max;i++)
       debut[i]=nullptr;
   for(int i=0;i<max;i++)
   { if(t.debut[i]!=nullptr)
     {noeud *current,*tmp=t.debut[i];
       while(tmp)
       { noeud *m=new noeud;
           m->v=tmp->v;
         m->suiv=nullptr;
         if(debut[i]==nullptr)
           current=debut[i]=m;
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

int societe::h(char* cle)
{ int som=0;
    int n=strlen(cle);
    for(int i=0;i<n;i++)
        som+=cle[i];
    return som%max;
}

void societe::insertion(voiture *vi)
{ int i=h(vi->cle);
    noeud *m=new noeud;
     m->v=vi;
     m->suiv=nullptr;
    if(debut[i]==nullptr)
      debut[i]=m;
    else
    { noeud *tmp=debut[i];
        while(tmp->suiv!=nullptr)
            tmp=tmp->suiv;
         tmp->suiv=m;
    }
    courant++;
}

void societe::supprimer(char* cle)
{ int i=h(cle);
   if(strcmp(debut[i]->v->cle,cle)==0)
   {noeud *tmp=debut[i];
       debut[i]=debut[i]->suiv;
       delete tmp;
   }
   else
   {noeud *p1=debut[i] , *p2;
       while(p1 && strcmp(p1->v->cle,cle)!=0)
       {p2=p1;
        p1=p1->suiv;
       }
       if(p1!=nullptr){
       p2->suiv=p1->suiv;
       delete p1;
       }
       else
       cout<<"la voiture a supprimer n'y est pas !\n";
   }
}

bool societe::rechercher(char* cle)
{ int i=h(cle);
    noeud *tmp=debut[i];
    while(tmp && strcmp(tmp->v->cle,cle)!=0)
        tmp=tmp->suiv;
    return (tmp!=nullptr);
}
/*
void societe::afficher() const
{  int j;
    for(j=0;j<max;j++)
        if(debut[j]!=nullptr)
        {cout<<"cle = "<<debut[j]->v->cle
             <<"marque = "<<debut[j]->v->marque
             <<"gamme = "<<debut[j]->v->gamme
             <<"modele = "<<debut[j]->v->modele
             <<"annee = "<<debut[j]->v->annee
             <<"presentation = "<<debut[j]->v->presentation;
             break;
        }
           for(int i=0;i<max;i++)
            {
                if(debut[i]!=nullptr)
                {noeud *tmp=debut[i];
                  while(tmp)
                   {if(strcmp(tmp->v->cle,debut[j]->v->cle)==0)
                        tmp=tmp->suiv;
                     cout<<" --> "
                         <<"cle = "<<debut[i]->v->cle
                         <<"marque = "<<tmp->v->marque
                         <<"gamme = "<<tmp->v->gamme
                         <<"modele = "<<tmp->v->modele
                         <<"annee = "<<tmp->v->annee
                         <<"presentation = "<<tmp->v->presentation;
                         tmp=tmp->suiv;
                    }
                }
           }
           cout<<endl;
}*/

void societe::afficher() const
{ int i=0;
    for(i=0;i<max;i++)
    { if(debut[i]!=nullptr)
      { noeud *tmp=debut[i];
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
    strcpy(v->presentation,p);
    strcpy(v->marque,m);
    strcpy(v->cle,c);
    strcpy(v->modele,mo);
    strcpy(v->gamme,g);
    v->annee=a;
    return v;
}
