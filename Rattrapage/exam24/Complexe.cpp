#include "Complexe.h"

Complexe::Complexe(int n){
 nmax = n;
 soire = new Soiree*[nmax];
  if(soire == NULL)
  {cerr<<"allocation echouer \n";
      exit(-1);
  }
  longueur = 0;
}

Complexe::~Complexe(){
    if(soire)
        delete [] soire;
}

void Complexe::ajouter(Soiree *s){
    if(longueur < nmax)
        soire[longueur++] = s;
}

void Complexe::afficher() const{
    for(int i = 0; i < longueur ;i++)
        cout<<*soire[i]<<endl<<endl;
}

double Complexe::gain_total(){
    double total = 0.0;
    for(int i = 0;i<longueur;i++)
        total += soire[i]->calcul_cout();
    return total;
}
