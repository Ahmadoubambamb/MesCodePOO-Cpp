#include "salarier.h"
#include "prof.h"
#include <iostream>
#include <cstring>
using namespace std;

professeur::professeur(const char* n,const char* p,const char* d):salarie(n, p)
{   n=0;
	diplome=new char[strlen(d)+1];
	strcpy(diplome,d);
	for(int i=0; i<10; i++)
		matiere[i]=NULL;
	cout<<"\n Appel du constructeur de professeur\n";

}
professeur::~professeur()
{
	if(diplome)
		delete diplome;
	for(int i=0; i<10; i++)
	{
		if(matiere[i])
			delete matiere[i];
	}
	cout<<"\n Appel du destructeur de professeur\n";
}
char* professeur::get_diplome()
{
	return diplome;
}
char* professeur::get_matiere(int i)
{
	if(i>=0&&i<10&&matiere[i]!=NULL)
		return matiere[i];
	else
		return NULL;
}
void professeur::ajout_matiere(const char* d)
{
	int i=0;
	while(i<10&&matiere[i]!=NULL&&strcmp(matiere[i], d)!=0)
		i++;
	if(i<10)
	{
		if(matiere[i]==NULL)
		{
			matiere[i]=new char[strlen(d)+1];
			strcpy(matiere[i], d);
			n++;
		}
		else if(strcmp(matiere[i], d)==0)
			cout<<"\n Ce professeur enseigne deja cette matiere.\n";
	}
	else
		cout<<"\n Ce professeur a deja 10 matieres\n";
}

professeur::professeur(professeur& p):salarie(p)
{   cout<<"appel du constructeur de copie de prof :"<<endl;
	diplome=new char[strlen(p.diplome)+1];
	n=p.n;
	strcpy(diplome,p.diplome);
	for(int i=0; i<n; i++)
	{
		matiere[i]=new char[strlen(p.matiere[i])+1];
		strcpy(matiere[i],p.matiere[i]);
	}

}
professeur& professeur::operator=(professeur& p)
{
	if(diplome)
		delete diplome;
	for(int i=0; i<10; i++)
	{
		if(matiere[i])
			delete matiere[i];
	}
	salarie *s1;
	salarie *s2;
	s1=this; s2=&p;
	*s1=*s2;
	n=p.n;
	diplome=new char[strlen(p.diplome)+1];
	strcpy(diplome, p.diplome);
	for(int i=0; i<n; i++)
	{
		matiere[i]=new char[strlen(p.matiere[i])+1];
		strcpy(matiere[i], p.matiere[i]);
	}
	return (*this);
}

void professeur::afficher()
{
	cout<<endl;
	cout<<"\n Affichage de professeur\n";
	salarie::afficher();
	cout<<"\n diplome : "<<diplome;
	int i=0;
	while(matiere[i]!=NULL)
	{
		cout<<"\n Matiere ["<<i<<"] : "<<matiere[i];
		i++;
	}
	cout<<endl;
}
