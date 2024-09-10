#include "salarier.h"
#include <iostream>
#include <cstring>
using namespace std;

salarie::salarie(const char* n,const char* p)
{
	nom=new char[strlen(n)+1];
	strcpy(nom, n);
	prenom=new char[strlen(p)+1];
	strcpy(prenom, p);
	cout<<"\n Appel du constructeur de salarie\n";
}

salarie::salarie(salarie& s)
{
	nom=new char[strlen(s.nom)+1];
	strcpy(nom, s.nom);
	prenom=new char[strlen(s.prenom)+1];
	strcpy(prenom, s.prenom);
	cout<<"\n Appel du constructeur de recopie salarie\n";
}
salarie::~salarie()
{
	if(nom)
		delete nom;
	if(prenom)
		delete prenom;
	cout<<"\n Appel du destructeur de salarie \n";
}
char* salarie::get_nom()const
{
	return nom;
}
char* salarie::get_prenom()const
{
	return prenom;
}

salarie& salarie::operator=(salarie& s)
{
	if(nom)
		delete nom;
	if(prenom)
		delete prenom;
	nom=new char[strlen(s.nom)+1];
	strcpy(nom, s.nom);
	prenom=new char[strlen(s.prenom)+1];
	strcpy(prenom, s.prenom);
	return (*this);
}

void salarie::afficher()
{
	cout<<endl;
	cout<<"\n Affichage salarie :\n";
	cout<<"\n Nom : "<<nom;
	cout<<"\n Prenom : "<<prenom;
	cout<<endl;
}
