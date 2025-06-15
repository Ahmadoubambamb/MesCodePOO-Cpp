#include "table.h"

#include <cstring>
#include <iostream>
using namespace std;

Table::h(char *cle){
    int sommLettre = 0;
    int n = strlen(cle);
    for(int i = 0; i < n ; i++)
        sommLettre +=cle[i];
    return sommLettre%nmax;
}

Table::Table(int n){
    nmax = n;
    tab = new noeud*[nmax];
    if(tab == NULL)
      {  cerr<<"erreur d'allocation\n";
       exit(-1);}
       for(int  = 0;i < nmax ; i++)
           tab[i] = NULL;
}

Table::~Table(){
    noeud *p1 , *p2;
    if(tab){
        for(int i = 0; i < nmax; i++)
            if(tab[i] != NULL)
            { p1 = tab[i];
                while(p1){
                    p2 = p1->suivant;
                    delete p1;
                    p1 = p2;
                }
            }
            delete [] tab;
    }
}

void Table::inserer(voiture *v){

  int i = h(v->cle);
  noeud *place = new noeud;
  place->voitures = v;
  place->suivant = NULL;
  if(tab[i] == NULL)
      tab[i] = place;
    else{
        noeud *q = tab[i];
        while(strcmp(q->voitures->cle,v->cle)!=0 && q->suivant!=NULL)
            q=q->suivant;
        if(strcmp(q->voitures->cle,v->cle)!=0)
        q->suivant = place;
        else{
            cout<<"la voiture est dans la table \n";
            return;
        }
    }
}

void Table::supprimer(char *cle){
  int i = h(cle);
   if(tab[i]){
       noeud *q = tab[i];
    while(q!=NULL && strcmp(q->voitures->cle,cle)!=0 )
        q=q->suivant;

    }
}
