#include "salarier.h"
#include "admin.h"
#include "prof.h"
#include <iostream>
using namespace std;

int main()
{
	cout<<"========POUR LES SALARIER============="<<endl;
	salarie S("NDIAYE", "Modou"),s0("cheikh","Diop");
	S.afficher();
    salarie S1=S;
	S1=s0;
	cout<<"apes affectation :"<<endl;
	S1.afficher();
    cout<<"========== POUR LES PROF========="<<endl;
	/*
	professeur P("FALL", "Aliou", "DEUG");
	professeur P1("Diop", "Talibouya", "DEUG");
	P.ajout_matiere("Maths");
	P.ajout_matiere("Physique");
	P.ajout_matiere("physique");
	P1.ajout_matiere("Algo3");
	////P1.ajout_matiere("POO");
	salarie S1=S;
  // professeur P1=P;
	administratif A("FALL", "Amadou", "Directeur");
	administratif A1("Mboup", "Bamba", "Dradjoint");
   //administratif A1=A;
	cout<<endl;
  P.afficher(); cout<<"\n============================="<<endl;
   P1.afficher(); cout<<"\n============================="<<endl;
   A.afficher(); cout<<"\n============================="<<endl;
 A=A1;
 cout<<"apres affectation de A1 dans A :"<<endl;
 A.afficher();
 //P1=P;
  //cout<<"apres affectation de P dans P1 :"<<endl;
 //P1.afficher();*/
	return 0;
}
//professeur p=P; // Constructeur de recopie de professeur
	//cout<<" Nom (professeur)    : "<<p.get_nom()<<endl;

/*cout<<" Nom (salarie)    : "<<S.get_nom()<<endl;
	cout<<" Prenom (salarie) : "<<S.get_prenom()<<endl;
	cout<<" Diplome (prof)   : "<<P.get_diplome()<<endl;
	cout<<"\n Matiere[0] : "<<P.get_matiere(0);
	cout<<"\n Matiere[1] : "<<P.get_matiere(1);*/

/*P.afficher();
	S.afficher();
	A.afficher();*/

/*
salarie *s;
	int rep;
	cout << "\n Salarie (0) ou professeur (1) ou administratif (2) : ";
	cin >> rep;
	switch(rep)
	{
		case 0 : s = &S; break;
 		case 1 : s = &P; break;
 		case 2 : s = &A; break;
 		default : s = NULL;
	}
	if (s) s->afficher();*/
