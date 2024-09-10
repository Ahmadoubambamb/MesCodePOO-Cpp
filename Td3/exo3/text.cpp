#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include "text.h"
#include "chaine.h"
using namespace std;
Textformater::Textformater():str(){
   cout<<"appel du construceur par defaut de la class deriver :adr="<<this<<endl<<endl;
    italic=false;
    gras=false;
       int i=0;
  couleur=NULL;
}

Textformater::Textformater(const char* chaine,bool ital,bool gr,const char* color ):str(chaine){
     cout<<"appel du construceur avec chaine de la class deriver  :adr="<<this<<endl<<endl;;
     italic=ital;
     gras=gr;
     int i=0;
     while(color[i]!='\0')
     i++;
     couleur=new char[i];
     i=0;
     while((couleur[i]=color[i])!='\0')
       i++;
}

Textformater::Textformater(const str& chaine,bool ital,bool gr,const char* color):str(chaine)
{     cout<<"appel du construceur avec str de la class deriver :adr="<<this<<endl<<endl;
      italic=ital;
      gras=gr;
      int i=0;
     while(color[i]!='\0')
     i++;
     couleur=new char[i];
     i=0;
     while((couleur[i]=color[i])!='\0')
       i++;
}

Textformater::Textformater(Textformater& T): str(T)
{  cout<<"appel du construceur de copie de la class deriver: adr="<<this<<endl<<endl;
   italic=T.italic;
    gras=T.gras;
     int i=0;
  while(T.couleur[i]!='\0')
     i++;
     couleur=new char[i];
     i=0;
     while((couleur[i]=T.couleur[i])!='\0')
       i++;
}

Textformater::~Textformater()
{cout<<"appel du destructeur de la class deriver: adr="<<this<<endl;
  delete couleur;
}
void Textformater::en_italique()
{italic=true;}

void Textformater::en_gras()
{gras=true;}

void Textformater::colore(const char* c)
{     int i=0;
  while(c[i]!='\0')
     i++;
     couleur=new char[i]; 
      i=0;
   while((couleur[i]=c[i])!='\0')
       i++;
}

Textformater& Textformater::operator=( Textformater& T)
{ if(this==&T) return *this;
    delete couleur;
    str *ad1 , *ad2;
    ad1=this; ad2=&T;
    *ad1=*ad2;// la partie heriter 
    //Partie specifique 
     italic=T.italic;
    gras=T.gras;
       int i=0;
     while(T.couleur[i]!='\0')
     i++;
     couleur=new char[i];
     i=0;
     while((couleur[i]=T.couleur[i])!='\0')
       i++;
    return *this;
}

Textformater& Textformater::operator=(str& c)
{ if(couleur)
   delete couleur ;
   str *ad1 , *ad2;
    ad1=this; ad2=&c;
    *ad1=*ad2;
    italic=false;
    gras=false;
   couleur=NULL;
   return *this;
}
void Textformater::afficher()
{ if(couleur)
   cout<<"<font couleur=#"<<couleur<<">"<<endl;
    if(gras)
     cout<<" <b> \n";
       if(italic)
         cout<<"    <i> ";
           str::afficher();
           if(italic)
              cout<<" </i>\n";
           if(gras)
              cout<<" </b> \n";
            if(couleur)
               cout<<"</font>\n";
               cout<<endl;

    }
