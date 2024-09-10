#include "salarier.h"
#include "admin.h"
#include <iostream>
#include <cstring>
using namespace std;

administratif::administratif(const char* n, const char* p,const char* f):salarie(n, p)
{
	fonction=new char[strlen(f)+1];
	strcpy(fonction,f);
	cout<<"\n Appel du constructeur de administratif\n";
}

administratif::administratif(administratif& a):salarie(a)
{
	fonction=new char[strlen(a.fonction)+1];
	strcpy(fonction,a.fonction);
	cout<<"\n Appel du constructeur de recopie de administratif\n";
}
administratif::~administratif()
{
	if(fonction)
		delete fonction;
	cout<<"\n Appel du destructeur de administratif\n";
}
char* administratif::get_fonction()
{
	return fonction;
}

administratif& administratif::operator=(administratif& a)
{
	if(fonction)
		delete fonction;
	salarie *s1;
	salarie *s2;
	s1=this; s2=&a;
	*s1=*s2;
	fonction=new char[strlen(a.fonction)+1];
	strcpy(fonction,a.fonction);
	return (*this);
}

void administratif::afficher()
{
	cout<<endl;
	cout<<"\n Affichage administratif\n";
	salarie::afficher();
	cout<<"\n Fonction : "<<fonction;
	cout<<endl;
}
