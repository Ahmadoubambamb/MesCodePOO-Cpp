#ifndef ENTREPRISE_H_
#define ENTREPRISE_H_
#include <iostream>
#include <string>
#include "Individu.h"
#include "Employer.h"
class entreprise:public Base
{private:
  int id_entr;
  string nom_entr;
  int nb_salarie;
  int n_courant;
  individu directeur;
  employer** salarie;
public:
 entreprise(int id,int n,individu& ind ,string& nomEnt):directeur(ind),nom_entr(nomEnt)
 {id_entr=id;
   nb_salarie=n;
   salarie=new employer*[n];
   n_courant=0;
 };
 void ajouter(employer *em)
 {salarie[n_courant]=em;
    n_courant++;
 };
virtual void afficher()
 { cout<<"le nom de l'entreprise"<<nom_entr<<endl;
   cout<<"le directeur:"; directeur.afficher();
    cout<<"l'identifiant de l'entreprise:"<<id_entr<<endl;
    cout<<"---- les salarie de l'entreprise --------"<<endl;
     for(int i=0;i<n_courant;i++)
       salarie[i]->afficher();
 };
 int clef()
 {return id_entr;};
 virtual ~entreprise()
 {cout<<"destructeur de employer :adr="<<this;
     delete [] salarie;
 };
};
#endif
